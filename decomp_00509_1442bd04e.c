// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1442bd04e FUN_1442bd04e body=93 status=ok
// SIG undefined FUN_1442bd04e(void)

void FUN_1442bd04e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9c0470;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c06a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442bd0ac FUN_1442bd0ac body=126 status=ok
// SIG undefined FUN_1442bd0ac(void)

void FUN_1442bd0ac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9c0470;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c06a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442bd11b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442bd188 FUN_1442bd188 body=275 status=ok
// SIG undefined FUN_1442bd188(void)

undefined8 FUN_1442bd188(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442bd295;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442bd295;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1442bd295:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442bd248;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_1442bd248;
    }
  }
  uVar6 = 0;
LAB_1442bd248:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442bd29c FUN_1442bd29c body=29 status=ok
// SIG undefined FUN_1442bd29c(void)

undefined8 FUN_1442bd29c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442bd442 FUN_1442bd442 body=101 status=ok
// SIG undefined FUN_1442bd442(void)

void FUN_1442bd442(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c0780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442bd4a8 FUN_1442bd4a8 body=101 status=ok
// SIG undefined FUN_1442bd4a8(void)

void FUN_1442bd4a8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c0780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442bd50e FUN_1442bd50e body=134 status=ok
// SIG undefined FUN_1442bd50e(void)

void FUN_1442bd50e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c0780;
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
                    /* WARNING: Could not recover jumptable at 0x0001442bd585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442bd5f6 FUN_1442bd5f6 body=284 status=ok
// SIG undefined FUN_1442bd5f6(void)

undefined8 FUN_1442bd5f6(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442bd70c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442bd70c;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1442bd70c:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442bd6bf;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1442bd6bf;
    }
  }
  uVar6 = 0;
LAB_1442bd6bf:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442bd714 FUN_1442bd714 body=29 status=ok
// SIG undefined FUN_1442bd714(void)

undefined8 FUN_1442bd714(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442bd8b0 FUN_1442bd8b0 body=101 status=ok
// SIG undefined FUN_1442bd8b0(void)

void FUN_1442bd8b0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c07f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442bd916 FUN_1442bd916 body=101 status=ok
// SIG undefined FUN_1442bd916(void)

void FUN_1442bd916(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c07f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442bd97c FUN_1442bd97c body=134 status=ok
// SIG undefined FUN_1442bd97c(void)

void FUN_1442bd97c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c07f0;
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
                    /* WARNING: Could not recover jumptable at 0x0001442bd9f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442bda12 FUN_1442bda12 body=270 status=ok
// SIG undefined FUN_1442bda12(void)

undefined8 FUN_1442bda12(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1442bdb1a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442bdb1a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1442bdb1a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442bdace;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1442b4bda(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_1442bdace;
    }
  }
  uVar6 = 0;
LAB_1442bdace:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442bdb22 FUN_1442bdb22 body=29 status=ok
// SIG undefined FUN_1442bdb22(void)

undefined8 FUN_1442bdb22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442bdcbe FUN_1442bdcbe body=101 status=ok
// SIG undefined FUN_1442bdcbe(void)

void FUN_1442bdcbe(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c0860;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442bdd24 FUN_1442bdd24 body=101 status=ok
// SIG undefined FUN_1442bdd24(void)

void FUN_1442bdd24(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c0860;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442bdd8a FUN_1442bdd8a body=134 status=ok
// SIG undefined FUN_1442bdd8a(void)

void FUN_1442bdd8a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c0860;
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
                    /* WARNING: Could not recover jumptable at 0x0001442bde01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442bde44 FUN_1442bde44 body=317 status=ok
// SIG undefined FUN_1442bde44(void)

undefined8 FUN_1442bde44(longlong param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442bdf7b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442bdf7b;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1442bdf7b:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442bdef7;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      uVar6 = 1;
      if (lVar5 != 0) {
        dVar7 = (double)(param_2 * *(float *)(param_1 + 0x28) + 1.0);
        *(double *)(lVar5 + 0xa0) = dVar7;
        *(double *)(lVar5 + 0xa8) = dVar7;
        FUN_141272672();
      }
      goto LAB_1442bdef7;
    }
  }
  uVar6 = 0;
LAB_1442bdef7:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442bdf82 FUN_1442bdf82 body=29 status=ok
// SIG undefined FUN_1442bdf82(void)

undefined8 FUN_1442bdf82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442be128 FUN_1442be128 body=101 status=ok
// SIG undefined FUN_1442be128(void)

void FUN_1442be128(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a508d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c08d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442be18e FUN_1442be18e body=101 status=ok
// SIG undefined FUN_1442be18e(void)

void FUN_1442be18e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a508d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c08d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442be1f4 FUN_1442be1f4 body=134 status=ok
// SIG undefined FUN_1442be1f4(void)

void FUN_1442be1f4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a508d10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c08d0;
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
                    /* WARNING: Could not recover jumptable at 0x0001442be26b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442be2dc FUN_1442be2dc body=284 status=ok
// SIG undefined FUN_1442be2dc(void)

undefined8 FUN_1442be2dc(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442be3f2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442be3f2;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1442be3f2:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442be3a5;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1442be3a5;
    }
  }
  uVar6 = 0;
LAB_1442be3a5:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442be3fa FUN_1442be3fa body=48 status=ok
// SIG undefined FUN_1442be3fa(void)

void FUN_1442be3fa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1442be42a FUN_1442be42a body=346 status=ok
// SIG undefined FUN_1442be42a(void)

void FUN_1442be42a(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1442be4bc;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1442be4bc:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1442be5ca FUN_1442be5ca body=29 status=ok
// SIG undefined FUN_1442be5ca(void)

undefined8 FUN_1442be5ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442be62a FUN_1442be62a body=29 status=ok
// SIG undefined FUN_1442be62a(void)

undefined8 FUN_1442be62a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442be68c FUN_1442be68c body=29 status=ok
// SIG undefined FUN_1442be68c(void)

undefined8 FUN_1442be68c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442be6ee FUN_1442be6ee body=29 status=ok
// SIG undefined FUN_1442be6ee(void)

undefined8 FUN_1442be6ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442be70c FUN_1442be70c body=338 status=ok
// SIG undefined FUN_1442be70c(void)

void FUN_1442be70c(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar3 = *(longlong *)(*param_1 + 0x288);
  if ((lVar3 != 0) && (plVar4 = *(longlong **)(lVar3 + 0x68), plVar4 != (longlong *)0x0)) {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if ((((((*(longlong *)(lVar3 + 0x60) != 0) &&
           ((*(byte *)(*(longlong *)(lVar3 + 0x60) + 0x8c) & 0x80) != 0)) &&
          (*(longlong *)(lVar3 + 0x148) != 0)) &&
         ((*(int *)(lVar3 + 0x58) != 0 && (uVar2 = *(uint *)(lVar3 + 0x54), -1 < (int)uVar2)))) &&
        (((int)uVar2 < DAT_14c9647dc &&
         ((plVar9 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(lVar3 + 0x58))))))) &&
       ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x290))(plVar9,lVar3,*(undefined8 *)(lVar3 + 0x148));
        puVar5 = *(ushort **)(lVar3 + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001442be854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1442be888 FUN_1442be888 body=29 status=ok
// SIG undefined FUN_1442be888(void)

undefined8 FUN_1442be888(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442be8a6 FUN_1442be8a6 body=64 status=ok
// SIG undefined FUN_1442be8a6(void)

undefined8 * FUN_1442be8a6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c0a20;
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



// FUNCTION 1442be8fa FUN_1442be8fa body=110 status=ok
// SIG undefined FUN_1442be8fa(void)

void FUN_1442be8fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0a20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1442be968 FUN_1442be968 body=110 status=ok
// SIG undefined FUN_1442be968(void)

void FUN_1442be968(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0a20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1442be9d6 FUN_1442be9d6 body=148 status=ok
// SIG undefined FUN_1442be9d6(void)

void FUN_1442be9d6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c0a20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442bea5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442bea6a FUN_1442bea6a body=66 status=ok
// SIG undefined FUN_1442bea6a(void)

void FUN_1442bea6a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1442beaf4(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442beaae FUN_1442beaae body=68 status=ok
// SIG undefined FUN_1442beaae(void)

undefined8 FUN_1442beaae(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1442beaf4(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442beaf4 FUN_1442beaf4 body=624 status=ok
// SIG undefined FUN_1442beaf4(void)

void FUN_1442beaf4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  wchar_t *_Str;
  size_t sVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auStack_228 [47];
  undefined1 local_1f9;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  char local_1e0;
  undefined1 local_1d8 [256];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_228;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    lVar4 = *param_2;
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1442becf3;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar12 = iVar7 == iVar6;
      if (bVar12) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar12);
    lVar5 = *param_1;
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
    if (lVar5 != 0) {
      local_1f9 = *(char *)(lVar4 + 8) == '\x02';
      if ((((*(int *)(lVar5 + 0x34) != 0) && (uVar10 = *(uint *)(lVar5 + 0x30), -1 < (int)uVar10))
          && ((int)uVar10 < DAT_14c9647dc)) &&
         (((puVar9 = (undefined8 *)
                     ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
           puVar9 != (undefined8 *)0x0 && (*(int *)(puVar9 + 2) == *(int *)(lVar5 + 0x34))) &&
          ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
          uVar11 = *puVar9;
        }
        else {
          uVar11 = 0;
        }
        local_1f8 = local_1d8;
        local_1e0 = '\0';
        local_1e8 = local_d8;
        local_1f0 = local_1f8;
        _Str = (wchar_t *)FUN_140c7f682(lVar5,L"FeedbackTriggered",&local_1f8);
        local_58 = (undefined1 *)0x0;
        if (_Str == (wchar_t *)0x0) {
          local_50 = (undefined1 *)0x0;
          local_48 = 0;
        }
        else {
          sVar8 = wcslen(_Str);
          local_48 = FUN_14475aa65(0,_Str,sVar8 & 0xffffffff);
          uVar10 = local_48 + 1;
          local_50 = (undefined1 *)0x0;
          if (0x80 < uVar10) {
            FUN_1446efa72(&local_58,0,uVar10,1);
            local_50 = local_58;
          }
          if (local_50 == (undefined1 *)0x0) {
            local_50 = local_d8;
          }
          FUN_14475a98a(local_50,uVar10,_Str,(int)sVar8 + 1);
        }
        FUN_140755a72(uVar11,local_50,&local_1f9);
        if (local_58 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (local_1e0 == '\x01') {
          FUN_1400020a8(local_1f8);
        }
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_228);
      }
    }
  }
LAB_1442becf3:
  if ((local_40 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442bed80 FUN_1442bed80 body=68 status=ok
// SIG undefined FUN_1442bed80(void)

undefined8 * FUN_1442bed80(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c0a90;
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



// FUNCTION 1442bedc4 FUN_1442bedc4 body=398 status=ok
// SIG undefined FUN_1442bedc4(void)

void FUN_1442bedc4(longlong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  wchar_t *_Str;
  uint uVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = (longlong *)*param_2;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_58 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      goto LAB_1442beea6;
    }
  }
  local_58 = (undefined1 *)0x0;
  sVar2 = wcslen(_Str);
  local_48 = FUN_14475aa65(0,_Str,sVar2 & 0xffffffff);
  uVar4 = local_48 + 1;
  local_50 = (undefined1 *)0x0;
  if (0x80 < uVar4) {
    FUN_1446efa72(&local_58,0,uVar4,1);
    local_50 = local_58;
  }
  if (local_50 == (undefined1 *)0x0) {
    local_50 = local_d8;
  }
  FUN_14475a98a(local_50,uVar4,_Str,(int)sVar2 + 1);
LAB_1442beea6:
  puVar1 = local_50;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x210))(plVar3);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,puVar1,2);
    FUN_1459fff97(plVar3,param_1 + 2);
    (**(code **)(*plVar3 + 0x140))(plVar3,(char)param_1[4]);
    (**(code **)(*plVar3 + 0x58))(plVar3);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442bef54 FUN_1442bef54 body=146 status=ok
// SIG undefined FUN_1442bef54(void)

undefined8 * FUN_1442bef54(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b9c0b00;
  puVar1 = puVar4 + 1;
  puVar4[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar4 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  *(undefined1 *)(puVar4 + 5) = *(undefined1 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  return puVar1;
}



// FUNCTION 1442befec FUN_1442befec body=29 status=ok
// SIG undefined FUN_1442befec(void)

void FUN_1442befec(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1442bf00a FUN_1442bf00a body=57 status=ok
// SIG undefined FUN_1442bf00a(void)

undefined8 * FUN_1442bf00a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c0b00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442bf044 FUN_1442bf044 body=383 status=ok
// SIG undefined FUN_1442bf044(void)

void FUN_1442bf044(longlong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  wchar_t *_Str;
  uint uVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = (longlong *)*param_2;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_58 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      goto LAB_1442bf126;
    }
  }
  local_58 = (undefined1 *)0x0;
  sVar2 = wcslen(_Str);
  local_48 = FUN_14475aa65(0,_Str,sVar2 & 0xffffffff);
  uVar4 = local_48 + 1;
  local_50 = (undefined1 *)0x0;
  if (0x80 < uVar4) {
    FUN_1446efa72(&local_58,0,uVar4,1);
    local_50 = local_58;
  }
  if (local_50 == (undefined1 *)0x0) {
    local_50 = local_d8;
  }
  FUN_14475a98a(local_50,uVar4,_Str,(int)sVar2 + 1);
LAB_1442bf126:
  puVar1 = local_50;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x210))(plVar3);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,puVar1,1);
    (**(code **)(*plVar3 + 0xe8))(plVar3,(int)param_1[2]);
    (**(code **)(*plVar3 + 0x58))(plVar3);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442bf1c4 FUN_1442bf1c4 body=122 status=ok
// SIG undefined FUN_1442bf1c4(void)

undefined8 * FUN_1442bf1c4(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b9c0b20;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 1442bf244 FUN_1442bf244 body=12 status=ok
// SIG undefined FUN_1442bf244(void)

void FUN_1442bf244(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442bf24d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442bf250 FUN_1442bf250 body=57 status=ok
// SIG undefined FUN_1442bf250(void)

undefined8 * FUN_1442bf250(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c0b20;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442bf28a FUN_1442bf28a body=68 status=ok
// SIG undefined FUN_1442bf28a(void)

undefined8 * FUN_1442bf28a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c0b40;
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



// FUNCTION 1442bf2d4 FUN_1442bf2d4 body=68 status=ok
// SIG undefined FUN_1442bf2d4(void)

undefined8 * FUN_1442bf2d4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c0c10;
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



// FUNCTION 1442bf334 FUN_1442bf334 body=68 status=ok
// SIG undefined FUN_1442bf334(void)

undefined8 * FUN_1442bf334(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c0c80;
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



// FUNCTION 1442bf378 FUN_1442bf378 body=68 status=ok
// SIG undefined FUN_1442bf378(void)

undefined8 * FUN_1442bf378(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c0cf0;
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



// FUNCTION 1442bf3bc FUN_1442bf3bc body=79 status=ok
// SIG undefined FUN_1442bf3bc(void)

longlong FUN_1442bf3bc(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 1442bf40c FUN_1442bf40c body=64 status=ok
// SIG undefined FUN_1442bf40c(void)

longlong FUN_1442bf40c(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0xe8))(param_2,*(undefined4 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 1442bf44c FUN_1442bf44c body=62 status=ok
// SIG undefined FUN_1442bf44c(void)

longlong FUN_1442bf44c(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x140))(param_2,*(undefined1 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 1442bf48a FUN_1442bf48a body=63 status=ok
// SIG undefined FUN_1442bf48a(void)

longlong FUN_1442bf48a(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x110))(param_2,*(undefined8 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 1442bf4ca FUN_1442bf4ca body=63 status=ok
// SIG undefined FUN_1442bf4ca(void)

longlong FUN_1442bf4ca(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x118))(param_2,*(undefined8 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 1442bf510 FUN_1442bf510 body=68 status=ok
// SIG undefined FUN_1442bf510(void)

undefined8 * FUN_1442bf510(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c1120;
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



// FUNCTION 1442bf554 FUN_1442bf554 body=68 status=ok
// SIG undefined FUN_1442bf554(void)

undefined8 * FUN_1442bf554(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c1190;
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



// FUNCTION 1442bf598 FUN_1442bf598 body=365 status=ok
// SIG undefined FUN_1442bf598(void)

void FUN_1442bf598(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  uint uVar2;
  wchar_t *_Str;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      goto LAB_1442bf693;
    }
  }
  local_60 = (undefined1 *)0x0;
  local_e8 = param_2;
  sVar1 = wcslen(_Str);
  local_50 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
  uVar2 = local_50 + 1;
  local_58 = (undefined1 *)0x0;
  if (0x80 < uVar2) {
    FUN_1446efa72(&local_60,0,uVar2,1);
    local_58 = local_60;
  }
  if (local_58 == (undefined1 *)0x0) {
    local_58 = local_e0;
  }
  FUN_14475a98a(local_58,uVar2,_Str,(int)sVar1 + 1);
  param_2 = local_e8;
LAB_1442bf693:
  local_f8 = param_1 + 0xb;
  FUN_148e7a3d6(param_2,local_58,param_1 + 2,param_1 + 3);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442bf706 FUN_1442bf706 body=365 status=ok
// SIG undefined FUN_1442bf706(void)

void FUN_1442bf706(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  uint uVar2;
  wchar_t *_Str;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      goto LAB_1442bf801;
    }
  }
  local_60 = (undefined1 *)0x0;
  local_e8 = param_2;
  sVar1 = wcslen(_Str);
  local_50 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
  uVar2 = local_50 + 1;
  local_58 = (undefined1 *)0x0;
  if (0x80 < uVar2) {
    FUN_1446efa72(&local_60,0,uVar2,1);
    local_58 = local_60;
  }
  if (local_58 == (undefined1 *)0x0) {
    local_58 = local_e0;
  }
  FUN_14475a98a(local_58,uVar2,_Str,(int)sVar1 + 1);
  param_2 = local_e8;
LAB_1442bf801:
  local_f8 = param_1 + 0xb;
  FUN_148e7a70c(param_2,local_58,param_1 + 2,param_1 + 3);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442bf886 FUN_1442bf886 body=338 status=ok
// SIG undefined FUN_1442bf886(void)

void FUN_1442bf886(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar3 = *(longlong *)(*param_1 + 0x288);
  if ((lVar3 != 0) && (plVar4 = *(longlong **)(lVar3 + 0x68), plVar4 != (longlong *)0x0)) {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if ((((((*(longlong *)(lVar3 + 0x60) != 0) &&
           ((*(byte *)(*(longlong *)(lVar3 + 0x60) + 0x8c) & 0x80) != 0)) &&
          (*(longlong *)(lVar3 + 0xc0) != 0)) &&
         ((*(int *)(lVar3 + 0x58) != 0 && (uVar2 = *(uint *)(lVar3 + 0x54), -1 < (int)uVar2)))) &&
        (((int)uVar2 < DAT_14c9647dc &&
         ((plVar9 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(lVar3 + 0x58))))))) &&
       ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x290))(plVar9,lVar3,*(undefined8 *)(lVar3 + 0xc0));
        puVar5 = *(ushort **)(lVar3 + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001442bf9ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1442bfa02 FUN_1442bfa02 body=29 status=ok
// SIG undefined FUN_1442bfa02(void)

undefined8 FUN_1442bfa02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442bfa20 FUN_1442bfa20 body=365 status=ok
// SIG undefined FUN_1442bfa20(void)

void FUN_1442bfa20(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  uint uVar2;
  wchar_t *_Str;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      goto LAB_1442bfb1b;
    }
  }
  local_60 = (undefined1 *)0x0;
  local_e8 = param_2;
  sVar1 = wcslen(_Str);
  local_50 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
  uVar2 = local_50 + 1;
  local_58 = (undefined1 *)0x0;
  if (0x80 < uVar2) {
    FUN_1446efa72(&local_60,0,uVar2,1);
    local_58 = local_60;
  }
  if (local_58 == (undefined1 *)0x0) {
    local_58 = local_e0;
  }
  FUN_14475a98a(local_58,uVar2,_Str,(int)sVar1 + 1);
  param_2 = local_e8;
LAB_1442bfb1b:
  local_f8 = param_1 + 4;
  FUN_148e7adfe(param_2,local_58,param_1 + 2,param_1 + 3);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442bfb8e FUN_1442bfb8e body=25021 status=FAIL
// SIG undefined FUN_1442bfb8e(void)
/* DECOMPILE FAILED */

// FUNCTION 1442c5d9c FUN_1442c5d9c body=372 status=ok
// SIG undefined FUN_1442c5d9c(void)

void FUN_1442c5d9c(longlong *param_1,float param_2)

{
  longlong lVar1;
  ushort *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[0x51] != 0) {
    *(byte *)(param_1[0x51] + 0xa8) = *(byte *)((longlong)param_1 + 0x8c) >> 7;
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  if (0.0 < *(float *)((longlong)param_1 + 0x29c)) {
    param_2 = *(float *)((longlong)param_1 + 0x29c) - param_2;
    *(float *)((longlong)param_1 + 0x29c) = param_2;
    iVar3 = -((int)ROUND(-0.5 - (param_2 + param_2)) >> 1);
    if ((int)param_1[0x54] != iVar3) {
      lVar1 = param_1[0x51];
      *(int *)(param_1 + 0x54) = iVar3;
      FUN_148e7b10e(&local_40);
      if ((longlong *)(lVar1 + 0x128) == &local_40) {
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(lVar1 + 0x128) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar1 + 0x128) = local_40;
        local_40 = 0;
        *(undefined4 *)(lVar1 + 0x130) = local_38;
        *(undefined4 *)(lVar1 + 0x134) = local_34;
      }
      puVar2 = *(ushort **)(lVar1 + 0x80);
      if (puVar2 != (ushort *)0x0) {
        *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
      }
      if ((((int)param_1[0x54] < 6) && (*(char *)(lVar1 + 0xb0) == '\x01')) &&
         (*(char *)(lVar1 + 0xb1) == '\0')) {
        FUN_140de1078(param_1,&DAT_14cbdbcc0,0,0);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442c5f1e FUN_1442c5f1e body=4557 status=ok
// SIG undefined FUN_1442c5f1e(void)

void FUN_1442c5f1e(longlong param_1)

{
  code *pcVar1;
  code *pcVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  ushort *puVar6;
  byte bVar7;
  char cVar8;
  undefined2 *puVar9;
  longlong lVar10;
  int *piVar11;
  wchar_t *pwVar12;
  size_t sVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  uint uVar19;
  PSRWLOCK SRWLock;
  byte bVar20;
  int iVar21;
  undefined8 uVar22;
  undefined1 *puVar23;
  undefined8 *puVar24;
  PSRWLOCK SRWLock_00;
  code *pcVar25;
  ulonglong uVar26;
  undefined4 *puVar27;
  bool bVar28;
  bool bVar29;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  undefined4 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined2 *local_268;
  undefined1 *local_260;
  undefined1 *local_258;
  code **local_250;
  undefined1 *local_248;
  code *local_240;
  uint local_234;
  undefined8 *local_230;
  PSRWLOCK local_228;
  PSRWLOCK local_220;
  undefined8 local_218;
  longlong local_210;
  undefined1 local_205;
  uint local_204;
  code *local_200;
  code *local_1f8;
  undefined1 *local_1f0;
  char local_1e8;
  undefined1 local_1e0 [256];
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  lVar5 = *(longlong *)(param_1 + 0x288);
  if ((lVar5 == 0) || (*(int *)(param_1 + 0x208) == 0)) goto LAB_1442c6ee8;
  FUN_1448d5e3c(&local_200,param_1 + 0x208);
  lVar10 = *(longlong *)(local_200 + 0x220);
  SRWLock_00 = (PSRWLOCK)(lVar10 + 0x1b8);
  AcquireSRWLockShared(SRWLock_00);
  pcVar25 = local_1f8;
  if (local_1f8 != (code *)0x0) {
    LOCK();
    pcVar1 = local_1f8 + 8;
    *(uint *)pcVar1 = *(uint *)pcVar1 - 1;
    UNLOCK();
    if (*(uint *)pcVar1 == 0) {
      (*(code *)**(undefined8 **)local_1f8)(local_1f8);
      LOCK();
      pcVar1 = pcVar25 + 0xc;
      *(uint *)pcVar1 = *(uint *)pcVar1 - 1;
      UNLOCK();
      if (*(uint *)pcVar1 == 0) {
        (**(code **)(*(longlong *)pcVar25 + 0x10))(pcVar25);
      }
    }
  }
  if ((*(char *)(lVar10 + 0x40) == '\x01') && (*(longlong *)(lVar10 + 0xd0) == 0)) {
    cVar8 = '\x01';
  }
  else {
    cVar8 = *(char *)(lVar10 + 0x20);
  }
  iVar14 = *(int *)(lVar5 + 0xb4);
  if (cVar8 == *(char *)(lVar5 + 0xb0)) {
    pcVar25 = (code *)0x0;
    bVar28 = iVar14 == 0;
    iVar14 = 0;
    if (bVar28) goto LAB_1442c5ff2;
  }
  else {
LAB_1442c5ff2:
    *(char *)(lVar5 + 0xb0) = cVar8;
    *(int *)(lVar5 + 0xb4) = iVar14 + 1;
    pcVar25 = (code *)CONCAT71((int7)((ulonglong)pcVar25 >> 8),1);
  }
  if (((*(char *)(lVar10 + 0xb0) == '\0') && (*(char *)(lVar10 + 8) == '\0')) &&
     (*(char *)(lVar10 + 0x18) == '\x01')) {
    bVar7 = *(byte *)(lVar10 + 0x40) ^ 1;
  }
  else {
    bVar7 = 0;
  }
  iVar14 = *(int *)(lVar5 + 0xbc);
  if (bVar7 == *(byte *)(lVar5 + 0xb8)) {
    bVar20 = 0;
    bVar28 = iVar14 == 0;
    iVar14 = 0;
    if (bVar28) goto LAB_1442c6046;
  }
  else {
LAB_1442c6046:
    *(byte *)(lVar5 + 0xb8) = bVar7;
    *(int *)(lVar5 + 0xbc) = iVar14 + 1;
    bVar20 = 1;
  }
  uVar22 = CONCAT71((int7)((ulonglong)lVar10 >> 8),*(undefined1 *)(lVar5 + 0xc0));
  local_210 = lVar10;
  FUN_1448d5e3c(&local_200,param_1 + 0x208);
  local_230 = *(undefined8 **)(local_200 + 0x420);
  SRWLock = (PSRWLOCK)(local_230 + 0xf);
  AcquireSRWLockShared(SRWLock);
  pcVar1 = local_1f8;
  if (local_1f8 != (code *)0x0) {
    LOCK();
    pcVar2 = local_1f8 + 8;
    *(uint *)pcVar2 = *(uint *)pcVar2 - 1;
    UNLOCK();
    if (*(uint *)pcVar2 == 0) {
      (*(code *)**(undefined8 **)local_1f8)(local_1f8);
      LOCK();
      pcVar2 = pcVar1 + 0xc;
      *(uint *)pcVar2 = *(uint *)pcVar2 - 1;
      UNLOCK();
      if (*(uint *)pcVar2 == 0) {
        (**(code **)(*(longlong *)pcVar1 + 0x10))(pcVar1);
      }
    }
  }
  uVar26 = CONCAT71((int7)((ulonglong)pcVar25 >> 8),(byte)pcVar25 | bVar20);
  if (*(int *)(lVar5 + 0xac) != *(int *)(local_230 + 0xe)) {
    *(undefined1 *)(param_1 + 0x298) = 0;
    *(undefined4 *)(lVar5 + 0xac) = *(undefined4 *)(local_230 + 0xe);
    iVar14 = *(int *)(lVar5 + 0xe0);
    local_228 = SRWLock;
    local_220 = SRWLock_00;
    if ((iVar14 == 0) || (iVar21 = *(int *)(lVar5 + 0xd8), iVar21 != *(int *)(local_230 + 1))) {
LAB_1442c67c5:
      FUN_140e1df98();
      iVar14 = *(int *)(lVar5 + 0xe0) + 1;
      puVar17 = *(undefined8 **)(lVar5 + 0xd0);
      iVar21 = *(int *)(lVar5 + 0xd8);
      bVar7 = 1;
    }
    else {
      puVar17 = *(undefined8 **)(lVar5 + 0xd0);
      cVar8 = FUN_1442d89c7(puVar17,*local_230,iVar21);
      if (cVar8 == '\0') goto LAB_1442c67c5;
      bVar7 = 0;
    }
    local_234 = (uint)uVar26;
    *(int *)(lVar5 + 0xe0) = iVar14 + 2;
    puVar16 = local_230;
    if (iVar21 != 0) {
      puVar24 = puVar17 + (longlong)iVar21 * 0xe;
      uVar22 = 0;
LAB_1442c6174:
      if (*(int *)(puVar17 + 0xd) != 0) {
        *(undefined1 *)(param_1 + 0x298) = 1;
        puVar9 = &DAT_149dfb77a;
        if (*(int *)(puVar17 + 1) != 0) {
          puVar9 = (undefined2 *)*puVar17;
        }
        lVar10 = 0;
        do {
          uVar3 = puVar9[lVar10];
          bVar20 = "secondary_hold"[lVar10];
          iVar14 = (uint)uVar3 - (uint)bVar20;
          if (iVar14 == 0) {
            if (uVar3 == 0) goto LAB_1442c61e3;
          }
          else {
            if (0x7f < ((uint)bVar20 | (uint)uVar3)) goto LAB_1442c61d7;
            if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar20]) goto LAB_1442c61d4;
          }
          lVar10 = lVar10 + 1;
        } while( true );
      }
      goto LAB_1442c62d8;
    }
    uVar22 = 0;
LAB_1442c62fc:
    uVar26 = (ulonglong)CONCAT31((int3)(local_234 >> 8),(byte)local_234 | bVar7);
    SRWLock = local_228;
    SRWLock_00 = local_220;
    if (*(int *)(lVar5 + 0xcc) != *(int *)((longlong)puVar16 + 100)) {
      *(undefined1 *)(lVar5 + 200) = *(undefined1 *)(puVar16 + 0xc);
      *(undefined4 *)(lVar5 + 0xcc) = *(undefined4 *)((longlong)puVar16 + 100);
    }
  }
  uVar19 = (uint)uVar26;
  if ((((*(int *)(param_1 + 0x34) == 0) || (uVar4 = *(uint *)(param_1 + 0x30), (int)uVar4 < 0)) ||
      (DAT_14c9647dc <= (int)uVar4)) ||
     (((puVar17 = (undefined8 *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       puVar17 == (undefined8 *)0x0 || (*(int *)(puVar17 + 2) != *(int *)(param_1 + 0x34))) ||
      ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)))) {
LAB_1442c6a32:
    cVar8 = (char)uVar26;
  }
  else {
    if ((*(uint *)(puVar17 + 1) & 0x10200000) == 0) {
      uVar15 = *puVar17;
    }
    else {
      uVar15 = 0;
    }
    local_218 = uVar22;
    lVar10 = FUN_1407f492e(uVar15);
    if (lVar10 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_200 = FUN_141030f22;
        local_240 = FUN_14081d0ea;
        local_248 = &LAB_1459f2e4c;
        local_250 = &local_200;
        local_258 = &LAB_148c39de3;
        local_260 = &LAB_1457a9eb2;
        local_268 = &DAT_149e063b2;
        local_270 = 0;
        local_278 = 0x10000004;
        local_280 = 0x10;
        local_288 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
        if ((*(char *)(lVar10 + 0xa99) != '\x01') ||
           ((*(char *)(lVar10 + 0xa98) == '\0' ||
            (bVar28 = true, *(char *)(param_1 + 0x298) == '\0')))) {
          bVar28 = *(char *)(local_210 + 0x1a8) == '\x06';
        }
        iVar14 = *(int *)(lVar5 + 0xec);
        if ((bool)*(char *)(lVar5 + 0xe8) == bVar28) {
          bVar7 = 0;
          bVar29 = iVar14 == 0;
          iVar14 = 0;
          if (bVar29) goto LAB_1442c6437;
        }
        else {
LAB_1442c6437:
          *(bool *)(lVar5 + 0xe8) = bVar28;
          *(int *)(lVar5 + 0xec) = iVar14 + 1;
          bVar7 = 1;
        }
        uVar19 = (uint)CONCAT71((int7)(uVar26 >> 8),(byte)uVar26 | bVar7);
      }
    }
    local_234 = uVar19;
    if (*(int *)(local_230 + 3) != *(int *)((longlong)local_230 + 0x44)) {
      piVar11 = (int *)(local_230 + 9);
      if ((int *)local_230[10] != (int *)0x0) {
        piVar11 = (int *)local_230[10];
      }
      iVar14 = *piVar11;
      if (iVar14 != -1) {
        do {
          lVar10 = local_230[2] + (longlong)iVar14 * 0x10;
          if (*(char *)(local_230[2] + (longlong)iVar14 * 0x10) == '\0') {
            puVar27 = (undefined4 *)(lVar10 + 4);
            if (puVar27 != (undefined4 *)0x0 && lVar10 != 0) {
              if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442c6f26:
                lVar10 = 0;
              }
              else {
                uVar19 = *(uint *)(param_1 + 0x30);
                lVar10 = 0;
                if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) {
                  plVar18 = (longlong *)
                            ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
                  if ((plVar18 == (longlong *)0x0) ||
                     (((int)plVar18[2] != *(int *)(param_1 + 0x34) ||
                      ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))) goto LAB_1442c6f26;
                  lVar10 = *plVar18;
                }
              }
              local_204 = CONCAT31(local_204._1_3_,1);
              local_200 = (code *)local_1e0;
              local_1e8 = '\0';
              local_1f0 = local_e0;
              local_220 = SRWLock_00;
              local_1f8 = local_200;
              pwVar12 = (wchar_t *)FUN_140c7f682(param_1,L"UpdateHoldPercent",&local_200);
              local_60 = (undefined1 *)0x0;
              if (pwVar12 == (wchar_t *)0x0) {
                local_58 = (undefined1 *)0x0;
                local_50 = 0;
              }
              else {
                local_228 = SRWLock;
                local_210 = lVar10;
                sVar13 = wcslen(pwVar12);
                local_50 = FUN_14475aa65(0,pwVar12,sVar13 & 0xffffffff);
                uVar19 = local_50 + 1;
                local_58 = (undefined1 *)0x0;
                if (0x80 < uVar19) {
                  FUN_1446efa72(&local_60,0,uVar19,1);
                  local_58 = local_60;
                }
                if (local_58 == (undefined1 *)0x0) {
                  local_58 = local_e0;
                }
                FUN_14475a98a(local_58,uVar19,pwVar12,(int)sVar13 + 1);
                SRWLock = local_228;
                lVar10 = local_210;
              }
              SRWLock_00 = local_220;
              FUN_1418fbe32(lVar10,local_58,&local_204,puVar27);
              if (local_60 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
              if (local_1e8 == '\x01') {
                FUN_1400020a8(local_200);
              }
              *(undefined4 *)(param_1 + 0x2f0) = *puVar27;
              goto LAB_1442c685d;
            }
            break;
          }
          iVar14 = *(int *)(lVar10 + 8);
        } while (iVar14 != -1);
      }
    }
    if ((1 < *(int *)(lVar5 + 0xd8)) && (1e-08 < ABS(*(float *)(param_1 + 0x2f0)))) {
      if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442c6f16:
        lVar10 = 0;
      }
      else {
        uVar19 = *(uint *)(param_1 + 0x30);
        lVar10 = 0;
        if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) {
          plVar18 = (longlong *)
                    ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
          if ((plVar18 == (longlong *)0x0) ||
             (((int)plVar18[2] != *(int *)(param_1 + 0x34) ||
              ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))) goto LAB_1442c6f16;
          lVar10 = *plVar18;
        }
      }
      local_204 = 0;
      local_205 = 1;
      local_200 = (code *)local_1e0;
      local_1e8 = '\0';
      local_1f0 = local_e0;
      local_1f8 = local_200;
      pwVar12 = (wchar_t *)FUN_140c7f682(param_1,L"UpdateHoldPercent",&local_200);
      local_60 = (undefined1 *)0x0;
      if (pwVar12 == (wchar_t *)0x0) {
        local_58 = (undefined1 *)0x0;
        local_50 = 0;
      }
      else {
        local_228 = SRWLock;
        local_210 = lVar10;
        sVar13 = wcslen(pwVar12);
        local_50 = FUN_14475aa65(0,pwVar12,sVar13 & 0xffffffff);
        uVar19 = local_50 + 1;
        local_58 = (undefined1 *)0x0;
        if (0x80 < uVar19) {
          FUN_1446efa72(&local_60,0,uVar19,1);
          local_58 = local_60;
        }
        if (local_58 == (undefined1 *)0x0) {
          local_58 = local_e0;
        }
        FUN_14475a98a(local_58,uVar19,pwVar12,(int)sVar13 + 1);
        SRWLock = local_228;
        lVar10 = local_210;
      }
      FUN_1418fbe32(lVar10,local_58,&local_205,&local_204);
      if (local_60 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_1e8 == '\x01') {
        FUN_1400020a8(local_200);
      }
      *(undefined4 *)(param_1 + 0x2f0) = 0;
    }
LAB_1442c685d:
    if (*(int *)(local_230 + 3) != *(int *)((longlong)local_230 + 0x44)) {
      puVar17 = local_230 + 9;
      if ((undefined8 *)local_230[10] != (undefined8 *)0x0) {
        puVar17 = (undefined8 *)local_230[10];
      }
      iVar14 = *(int *)((longlong)puVar17 + (ulonglong)(~*(uint *)(local_230 + 0xb) & 1) * 4);
      if (iVar14 != -1) {
        do {
          lVar10 = local_230[2] + (longlong)iVar14 * 0x10;
          if (*(char *)(local_230[2] + (longlong)iVar14 * 0x10) == '\x01') {
            puVar27 = (undefined4 *)(lVar10 + 4);
            if (puVar27 != (undefined4 *)0x0 && lVar10 != 0) {
              if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442c6f2e:
                puVar17 = (undefined8 *)0x0;
              }
              else {
                uVar19 = *(uint *)(param_1 + 0x30);
                puVar17 = (undefined8 *)0x0;
                if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) {
                  puVar17 = (undefined8 *)
                            ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
                  if ((puVar17 == (undefined8 *)0x0) ||
                     ((*(int *)(puVar17 + 2) != *(int *)(param_1 + 0x34) ||
                      ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)))) goto LAB_1442c6f2e;
                  puVar17 = (undefined8 *)*puVar17;
                }
              }
              local_204 = local_204 & 0xffffff00;
              local_200 = (code *)local_1e0;
              local_1e8 = '\0';
              local_1f0 = local_e0;
              local_228 = SRWLock;
              local_220 = SRWLock_00;
              local_1f8 = local_200;
              pwVar12 = (wchar_t *)FUN_140c7f682(param_1,L"UpdateHoldPercent",&local_200);
              local_60 = (undefined1 *)0x0;
              if (pwVar12 == (wchar_t *)0x0) {
                local_58 = (undefined1 *)0x0;
                local_50 = 0;
              }
              else {
                local_230 = puVar17;
                sVar13 = wcslen(pwVar12);
                local_50 = FUN_14475aa65(0,pwVar12,sVar13 & 0xffffffff);
                uVar19 = local_50 + 1;
                puVar23 = (undefined1 *)0x0;
                if (0x80 < uVar19) {
                  FUN_1446efa72(&local_60,0,uVar19,1);
                  puVar23 = local_60;
                }
                local_58 = puVar23;
                if (puVar23 == (undefined1 *)0x0) {
                  local_58 = local_e0;
                }
                FUN_14475a98a(local_58,uVar19,pwVar12,(int)sVar13 + 1);
                puVar17 = local_230;
              }
              FUN_1418fbe32(puVar17,local_58,&local_204,puVar27);
              SRWLock_00 = local_220;
              SRWLock = local_228;
              if (local_60 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
              if (local_1e8 == '\x01') {
                FUN_1400020a8(local_200);
              }
              *(undefined4 *)(param_1 + 0x2f4) = *puVar27;
              uVar22 = local_218;
              cVar8 = (char)local_234;
              goto joined_r0x0001442c6a35;
            }
            break;
          }
          iVar14 = *(int *)(lVar10 + 8);
        } while (iVar14 != -1);
      }
    }
    uVar22 = local_218;
    if (*(int *)(lVar5 + 0xd8) < 4) {
      uVar26 = (ulonglong)local_234;
      goto LAB_1442c6a32;
    }
    uVar26 = (ulonglong)local_234;
    if (ABS(*(float *)(param_1 + 0x2f4)) <= 1e-08) goto LAB_1442c6a32;
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442c6f1e:
      uVar22 = 0;
    }
    else {
      uVar19 = *(uint *)(param_1 + 0x30);
      uVar22 = 0;
      if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) {
        puVar17 = (undefined8 *)
                  ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
        if ((puVar17 == (undefined8 *)0x0) ||
           ((*(int *)(puVar17 + 2) != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)))) goto LAB_1442c6f1e;
        uVar22 = *puVar17;
      }
    }
    local_204 = 0;
    local_205 = 0;
    local_200 = (code *)local_1e0;
    local_1e8 = '\0';
    local_1f0 = local_e0;
    local_1f8 = local_200;
    pwVar12 = (wchar_t *)FUN_140c7f682(param_1,L"UpdateHoldPercent",&local_200);
    local_60 = (undefined1 *)0x0;
    if (pwVar12 == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
    }
    else {
      local_228 = SRWLock;
      local_220 = SRWLock_00;
      sVar13 = wcslen(pwVar12);
      local_50 = FUN_14475aa65(0,pwVar12,sVar13 & 0xffffffff);
      uVar19 = local_50 + 1;
      puVar23 = (undefined1 *)0x0;
      if (0x80 < uVar19) {
        FUN_1446efa72(&local_60,0,uVar19,1);
        puVar23 = local_60;
      }
      local_58 = puVar23;
      if (puVar23 == (undefined1 *)0x0) {
        local_58 = local_e0;
      }
      FUN_14475a98a(local_58,uVar19,pwVar12,(int)sVar13 + 1);
      SRWLock = local_228;
      SRWLock_00 = local_220;
    }
    FUN_1418fbe32(uVar22,local_58,&local_205,&local_204);
    if (local_60 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar19 = local_234;
    if (local_1e8 == '\x01') {
      FUN_1400020a8(local_200);
    }
    *(undefined4 *)(param_1 + 0x2f4) = 0;
    uVar22 = local_218;
    cVar8 = (char)uVar19;
  }
joined_r0x0001442c6a35:
  if (cVar8 != '\0') {
    bVar7 = 1;
    if (*(char *)(lVar5 + 0xb0) == '\0') {
      bVar7 = 1;
      if (*(char *)(lVar5 + 0xb8) == '\0') {
        bVar7 = (byte)uVar22 & 1;
      }
    }
    if (bVar7 == *(byte *)(lVar5 + 0xc0)) {
      if (*(int *)(lVar5 + 0xc4) == 0) {
        iVar14 = 1;
        goto LAB_1442c6a78;
      }
    }
    else {
      iVar14 = *(int *)(lVar5 + 0xc4) + 1;
LAB_1442c6a78:
      *(byte *)(lVar5 + 0xc0) = bVar7;
      *(int *)(lVar5 + 0xc4) = iVar14;
    }
    if (*(int *)(lVar5 + 0xd8) < 2) {
LAB_1442c6ad6:
      FUN_14023c1e8(param_1 + 0x2a0,0);
    }
    else {
      *(int *)(lVar5 + 0xe0) = *(int *)(lVar5 + 0xe0) + 1;
      if (*(int *)(*(longlong *)(lVar5 + 0xd0) + 0xd8) == 0) goto LAB_1442c6ad6;
      local_200 = (code *)&local_204;
      local_204 = local_204 & 0xffffff00;
      FUN_1411091dc(param_1 + 0x2a0,local_e0);
    }
    if (*(int *)(lVar5 + 0xd8) < 4) {
LAB_1442c6b2f:
      FUN_14023c1e8(param_1 + 0x2a0,1);
    }
    else {
      *(int *)(lVar5 + 0xe0) = *(int *)(lVar5 + 0xe0) + 1;
      if (*(int *)(*(longlong *)(lVar5 + 0xd0) + 0x1b8) == 0) goto LAB_1442c6b2f;
      local_200 = (code *)&local_204;
      local_204 = CONCAT31(local_204._1_3_,1);
      FUN_1411091dc(param_1 + 0x2a0,local_e0);
    }
    if (*(char *)(lVar5 + 0xc0) == '\0') {
      if ((((*(int *)(param_1 + 0x34) != 0) &&
           (uVar19 = *(uint *)(param_1 + 0x30), -1 < (int)uVar19)) && ((int)uVar19 < DAT_14c9647dc))
         && (((puVar17 = (undefined8 *)
                         ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
              puVar17 != (undefined8 *)0x0 && (*(int *)(puVar17 + 2) == *(int *)(param_1 + 0x34)))
             && ((*(uint *)(puVar17 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(puVar17 + 1) & 0x10200000) == 0) {
          uVar22 = *puVar17;
        }
        else {
          uVar22 = 0;
        }
        local_200 = (code *)local_1e0;
        local_1e8 = '\0';
        local_1f0 = local_e0;
        local_1f8 = local_200;
        pwVar12 = (wchar_t *)FUN_140c7f682(param_1,L"HidePrompts",&local_200);
        local_60 = (undefined1 *)0x0;
        if (pwVar12 == (wchar_t *)0x0) {
          local_58 = (undefined1 *)0x0;
          local_50 = 0;
        }
        else {
          sVar13 = wcslen(pwVar12);
          local_50 = FUN_14475aa65(0,pwVar12,sVar13 & 0xffffffff);
          uVar19 = local_50 + 1;
          puVar23 = (undefined1 *)0x0;
          if (0x80 < uVar19) {
            FUN_1446efa72(&local_60,0,uVar19,1);
            puVar23 = local_60;
          }
          local_58 = puVar23;
          if (puVar23 == (undefined1 *)0x0) {
            local_58 = local_e0;
          }
          FUN_14475a98a(local_58,uVar19,pwVar12,(int)sVar13 + 1);
        }
        FUN_1412a486e(uVar22,local_58);
        if (local_60 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (local_1e8 == '\x01') {
          FUN_1400020a8(local_200);
        }
      }
    }
    else {
      puVar6 = *(ushort **)(lVar5 + 0x80);
      if (puVar6 != (ushort *)0x0) {
        *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
      }
    }
  }
  ReleaseSRWLockShared(SRWLock);
  ReleaseSRWLockShared(SRWLock_00);
LAB_1442c6ee8:
  if ((local_48 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1442c61d4:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar20];
LAB_1442c61d7:
  uVar22 = 1;
  if (iVar14 != 0) goto LAB_1442c62d8;
LAB_1442c61e3:
  uVar22 = 1;
  if (((*(char *)(puVar17 + 3) != '\x01') || (*(int *)(param_1 + 0x34) == 0)) ||
     ((uVar19 = *(uint *)(param_1 + 0x30), (int)uVar19 < 0 ||
      ((((DAT_14c9647dc <= (int)uVar19 ||
         (plVar18 = (longlong *)
                    ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
         plVar18 == (longlong *)0x0)) || ((int)plVar18[2] != *(int *)(param_1 + 0x34))) ||
       ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))))) goto LAB_1442c62d8;
  if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
    lVar10 = *plVar18;
  }
  else {
    lVar10 = 0;
  }
  cVar8 = FUN_140426394(lVar10 + 0x3c0,&DAT_14cbd9698);
  if (cVar8 != '\0') {
    if ((*(int *)(param_1 + 0x34) == 0) || (uVar19 = *(uint *)(param_1 + 0x30), (int)uVar19 < 0)) {
LAB_1442c62e7:
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      if ((int)uVar19 < DAT_14c9647dc) {
        plVar18 = (longlong *)
                  ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
        if (((plVar18 == (longlong *)0x0) || ((int)plVar18[2] != *(int *)(param_1 + 0x34))) ||
           ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)) goto LAB_1442c62e7;
        lVar10 = *plVar18;
      }
    }
    FUN_140c125e6(lVar10 + 0x3c0,&DAT_14cbd9698);
  }
  uVar22 = CONCAT71((int7)((ulonglong)uVar22 >> 8),1);
  puVar16 = local_230;
LAB_1442c62d8:
  puVar17 = puVar17 + 0xe;
  if (puVar17 == puVar24) goto LAB_1442c62fc;
  goto LAB_1442c6174;
}



// FUNCTION 1442c73f0 FUN_1442c73f0 body=2597 status=ok
// SIG undefined FUN_1442c73f0(void)

void FUN_1442c73f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  void *pvVar9;
  code *pcVar10;
  ushort *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 uVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  longlong local_180;
  longlong local_178;
  PSRWLOCK local_170;
  undefined8 local_168;
  longlong *plStack_160;
  longlong *local_158;
  undefined8 local_150;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((((*(byte *)(param_1 + 0x8c) & 0x80) != 0) && (*(int *)(param_1 + 0x208) != 0)) &&
     (lVar7 = *(longlong *)(param_1 + 0x288), lVar7 != 0)) {
    FUN_1448d5e3c(&local_158);
    plVar16 = (longlong *)local_158[0x46];
    local_170 = (PSRWLOCK)(plVar16 + 4);
    AcquireSRWLockShared(local_170);
    plVar3 = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_150 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (*(int *)(lVar7 + 0xac) != (int)plVar16[3]) {
      *(int *)(lVar7 + 0xac) = (int)plVar16[3];
      local_180 = param_1 + 0x208;
      local_178 = param_1;
      if (*(int *)(lVar7 + 0xd0) != 0) {
        plVar3 = (longlong *)(lVar7 + 0xe8);
        uVar19 = 0;
        local_188 = plVar16;
        do {
          if (((int)uVar19 < 0) || (*(int *)(lVar7 + 0xf0) <= (int)uVar19)) {
            memset(&local_158,0,0xf8);
            FUN_14660c4b6(&local_158);
            FUN_1461fa392(plVar3,&local_158,uVar19);
            FUN_14151928e(&local_158);
            uVar22 = (ulonglong)(int)uVar19;
            *(char *)(*plVar3 + 9 + uVar22 * 0xf8) = (char)uVar19;
            if (-1 < (int)uVar19) goto LAB_1442c74fd;
LAB_1442c7507:
            lVar8 = *plVar3;
            lVar15 = uVar22 * 0xf8;
            iVar17 = *(int *)(lVar8 + 0xf4 + lVar15);
            if (*(char *)(lVar8 + 0xf0 + lVar15) != '\0') {
              if (iVar17 != 0) goto LAB_1442c7539;
              iVar17 = 0;
            }
            *(undefined1 *)(lVar15 + lVar8 + 0xf0) = 1;
            *(int *)(lVar15 + lVar8 + 0xf4) = iVar17 + 1;
          }
          else {
            uVar22 = (ulonglong)uVar19;
            *(char *)(*plVar3 + 9 + uVar22 * 0xf8) = (char)uVar19;
LAB_1442c74fd:
            if ((int)plVar16[1] <= (int)uVar19) goto LAB_1442c7507;
            puVar5 = (undefined1 *)(*plVar16 + uVar22 * 0x118);
            lVar8 = *plVar3 + uVar22 * 0xf8;
            puVar21 = (undefined8 *)(*plVar3 + uVar22 * 0xf8 + 0x10);
            if (puVar21 != (undefined8 *)(*plVar16 + uVar22 * 0x118 + 0x20)) {
              iVar17 = *(int *)(puVar5 + 0x28);
              pvVar9 = *(void **)(puVar5 + 0x20);
              *(int *)(lVar8 + 0x18) = iVar17;
              if (iVar17 == 0 && *(int *)(lVar8 + 0x1c) == 0) {
                *(undefined4 *)(lVar8 + 0x1c) = 0;
              }
              else {
                FUN_1446dd670(puVar21,iVar17);
                if (iVar17 != 0) {
                  memcpy((void *)*puVar21,pvVar9,(longlong)iVar17 * 2);
                }
              }
            }
            puVar21 = (undefined8 *)(lVar8 + 0x20);
            if (puVar21 != (undefined8 *)(puVar5 + 0x38)) {
              iVar17 = *(int *)(puVar5 + 0x40);
              pvVar9 = *(void **)(puVar5 + 0x38);
              *(int *)(lVar8 + 0x28) = iVar17;
              if (iVar17 == 0 && *(int *)(lVar8 + 0x2c) == 0) {
                *(undefined4 *)(lVar8 + 0x2c) = 0;
              }
              else {
                FUN_1446dd670(puVar21,iVar17);
                if (iVar17 != 0) {
                  memcpy((void *)*puVar21,pvVar9,(longlong)iVar17 * 2);
                }
              }
            }
            puVar21 = (undefined8 *)(lVar8 + 0x88);
            if (puVar21 != (undefined8 *)(puVar5 + 0x50)) {
              iVar17 = *(int *)(puVar5 + 0x58);
              pvVar9 = *(void **)(puVar5 + 0x50);
              *(int *)(lVar8 + 0x90) = iVar17;
              if (iVar17 == 0 && *(int *)(lVar8 + 0x94) == 0) {
                *(undefined4 *)(lVar8 + 0x94) = 0;
              }
              else {
                FUN_1446dd670(puVar21,iVar17);
                if (iVar17 != 0) {
                  memcpy((void *)*puVar21,pvVar9,(longlong)iVar17 * 2);
                }
              }
            }
            puVar21 = (undefined8 *)(lVar8 + 0x58);
            if (puVar21 != (undefined8 *)(puVar5 + 0x68)) {
              iVar17 = *(int *)(puVar5 + 0x70);
              pvVar9 = *(void **)(puVar5 + 0x68);
              *(int *)(lVar8 + 0x60) = iVar17;
              if (iVar17 == 0 && *(int *)(lVar8 + 100) == 0) {
                *(undefined4 *)(lVar8 + 100) = 0;
              }
              else {
                FUN_1446dd670(puVar21,iVar17);
                if (iVar17 != 0) {
                  memcpy((void *)*puVar21,pvVar9,(longlong)iVar17 * 2);
                }
              }
            }
            *(undefined1 *)(lVar8 + 0x68) = puVar5[0x78];
            puVar21 = (undefined8 *)(lVar8 + 0x70);
            if (puVar21 != (undefined8 *)(puVar5 + 0x88)) {
              iVar17 = *(int *)(puVar5 + 0x90);
              pvVar9 = *(void **)(puVar5 + 0x88);
              *(int *)(lVar8 + 0x78) = iVar17;
              if (iVar17 == 0 && *(int *)(lVar8 + 0x7c) == 0) {
                *(undefined4 *)(lVar8 + 0x7c) = 0;
              }
              else {
                FUN_1446dd670(puVar21,iVar17);
                if (iVar17 != 0) {
                  memcpy((void *)*puVar21,pvVar9,(longlong)iVar17 * 2);
                }
              }
            }
            *(undefined1 *)(lVar8 + 0x80) = puVar5[0x98];
            uVar14 = FUN_148e7b846(local_178,*(undefined4 *)(puVar5 + 0xd0),
                                   *(undefined4 *)(puVar5 + 0xd8),puVar5[200]);
            *(undefined1 *)(lVar8 + 0x40) = uVar14;
            puVar21 = (undefined8 *)(lVar8 + 0x48);
            if (puVar21 != (undefined8 *)(puVar5 + 0xf8)) {
              iVar17 = *(int *)(puVar5 + 0x100);
              pvVar9 = *(void **)(puVar5 + 0xf8);
              *(int *)(lVar8 + 0x50) = iVar17;
              if (iVar17 == 0 && *(int *)(lVar8 + 0x54) == 0) {
                *(undefined4 *)(lVar8 + 0x54) = 0;
              }
              else {
                FUN_1446dd670(puVar21,iVar17);
                if (iVar17 != 0) {
                  memcpy((void *)*puVar21,pvVar9,(longlong)iVar17 * 2);
                }
              }
            }
            puVar21 = (undefined8 *)(lVar8 + 0x98);
            if (puVar21 != (undefined8 *)(puVar5 + 0xa8)) {
              iVar17 = *(int *)(puVar5 + 0xb0);
              pvVar9 = *(void **)(puVar5 + 0xa8);
              *(int *)(lVar8 + 0xa0) = iVar17;
              if (iVar17 == 0 && *(int *)(lVar8 + 0xa4) == 0) {
                *(undefined4 *)(lVar8 + 0xa4) = 0;
              }
              else {
                FUN_1446dd670(puVar21,iVar17);
                if (iVar17 != 0) {
                  memcpy((void *)*puVar21,pvVar9,(longlong)iVar17 * 2);
                }
              }
            }
            *(ulonglong *)(lVar8 + 0xc0) = (ulonglong)*(uint *)(puVar5 + 0xd0);
            *(ulonglong *)(lVar8 + 200) = (ulonglong)*(uint *)(puVar5 + 0xd8);
            local_168 = 0;
            plStack_160 = (longlong *)0x0;
            FUN_145c561ae(&local_158,*(undefined4 *)(puVar5 + 0xd0),0,&local_168);
            plVar16 = local_158;
            if (*(code **)(*local_158 + 0x50) != FUN_144828418) {
              plVar16 = (longlong *)(**(code **)(*local_158 + 0x50))();
            }
            FUN_1447a1fc0(plVar16);
            pcVar10 = *(code **)(*local_158 + 0x28);
            if (pcVar10 == FUN_14482841c) {
              plVar16 = local_158 + 3;
              if (local_158[5] != 0) {
                plVar16 = (longlong *)(local_158[5] + 8);
              }
            }
            else if (pcVar10 == (code *)&LAB_14010c34c) {
              plVar16 = local_158 + 2;
            }
            else {
              plVar16 = (longlong *)(*pcVar10)(local_158);
            }
            plVar4 = (longlong *)(lVar8 + 0xd0);
            if (plVar4 != plVar16) {
              iVar17 = (int)plVar16[1];
              pvVar9 = (void *)*plVar16;
              *(int *)(lVar8 + 0xd8) = iVar17;
              if (iVar17 == 0 && *(int *)(lVar8 + 0xdc) == 0) {
                *(undefined4 *)(lVar8 + 0xdc) = 0;
              }
              else {
                FUN_1446dd670(plVar4,iVar17);
                if (iVar17 != 0) {
                  memcpy((void *)*plVar4,pvVar9,(longlong)iVar17 * 2);
                }
              }
            }
            if (local_158 != (longlong *)0x0) {
              (**(code **)(*local_158 + 0x10))();
            }
            plVar16 = plStack_160;
            if (plStack_160 != (longlong *)0x0) {
              LOCK();
              plVar4 = plStack_160 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*plStack_160)(plStack_160);
                LOCK();
                piVar1 = (int *)((longlong)plVar16 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                }
              }
            }
            local_168 = 0;
            plStack_160 = (longlong *)0x0;
            FUN_145c561ae(&local_158,*(undefined4 *)(puVar5 + 0xd8),0,&local_168);
            plVar16 = local_158;
            if (*(code **)(*local_158 + 0x50) != FUN_144828418) {
              plVar16 = (longlong *)(**(code **)(*local_158 + 0x50))();
            }
            FUN_1447a1fc0(plVar16);
            pcVar10 = *(code **)(*local_158 + 0x28);
            if (pcVar10 == FUN_14482841c) {
              plVar16 = local_158 + 3;
              if (local_158[5] != 0) {
                plVar16 = (longlong *)(local_158[5] + 8);
              }
            }
            else if (pcVar10 == (code *)&LAB_14010c34c) {
              plVar16 = local_158 + 2;
            }
            else {
              plVar16 = (longlong *)(*pcVar10)(local_158);
            }
            plVar4 = (longlong *)(lVar8 + 0xe0);
            if (plVar4 != plVar16) {
              iVar17 = (int)plVar16[1];
              pvVar9 = (void *)*plVar16;
              *(int *)(lVar8 + 0xe8) = iVar17;
              if (iVar17 == 0 && *(int *)(lVar8 + 0xec) == 0) {
                *(undefined4 *)(lVar8 + 0xec) = 0;
              }
              else {
                FUN_1446dd670(plVar4,iVar17);
                if (iVar17 != 0) {
                  memcpy((void *)*plVar4,pvVar9,(longlong)iVar17 * 2);
                }
              }
            }
            if (local_158 != (longlong *)0x0) {
              (**(code **)(*local_158 + 0x10))();
            }
            plVar4 = plStack_160;
            plVar16 = local_188;
            if (plStack_160 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_160 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plStack_160)(plStack_160);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                }
              }
            }
            *(undefined1 *)(lVar8 + 8) = *puVar5;
            *(undefined1 *)(lVar8 + 0xb8) = 1;
            iVar17 = *(int *)(lVar8 + 0xf4);
            if ((puVar5[0x110] ^ 1) == *(byte *)(lVar8 + 0xf0)) {
              if (iVar17 == 0) {
                iVar17 = 0;
                goto LAB_1442c7ac8;
              }
            }
            else {
LAB_1442c7ac8:
              *(byte *)(lVar8 + 0xf0) = puVar5[0x110] ^ 1;
              *(int *)(lVar8 + 0xf4) = iVar17 + 1;
            }
            switch(puVar5[200]) {
            case 1:
              break;
            case 2:
              break;
            case 3:
              break;
            case 4:
              break;
            case 5:
              break;
            case 6:
            }
            FUN_1400b22c2(&local_158);
            if (&local_158 != (longlong **)(lVar8 + 0xa8)) {
              if (*(longlong *)(lVar8 + 0xa8) != 0) {
                FUN_1400020a8();
              }
              *(longlong **)(lVar8 + 0xa8) = local_158;
              local_158 = (longlong *)0x0;
              *(undefined4 *)(lVar8 + 0xb0) = (undefined4)local_150;
              *(undefined4 *)(lVar8 + 0xb4) = local_150._4_4_;
              local_150 = (longlong *)0x0;
            }
            if (local_158 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            uVar18 = *(int *)(lVar8 + 0xb0) - 1;
            if (*(int *)(lVar8 + 0xb0) == 0) {
              uVar18 = 0;
            }
            if (0 < (int)uVar18) {
              lVar8 = *(longlong *)(lVar8 + 0xa8);
              uVar22 = 0;
              do {
                uVar6 = *(ushort *)(lVar8 + uVar22 * 2);
                *(ushort *)(lVar8 + uVar22 * 2) = (ushort)(uVar6 - 0x41 < 0x1a) * 0x20 + uVar6;
                uVar22 = uVar22 + 1;
              } while (uVar18 != uVar22);
            }
          }
LAB_1442c7539:
          uVar19 = uVar19 + 1;
        } while (uVar19 < *(uint *)(lVar7 + 0xd0));
      }
      puVar11 = *(ushort **)(lVar7 + 0x80);
      if (puVar11 != (ushort *)0x0) {
        *puVar11 = *puVar11 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
      }
    }
    FUN_1448d5e3c(&local_158);
    lVar8 = local_158[0x44];
    AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x1b8));
    plVar16 = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_150 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    if (*(int *)(lVar7 + 0xe4) != *(int *)(lVar8 + 0xc4)) {
      *(undefined1 *)(lVar7 + 0xe0) = *(undefined1 *)(lVar8 + 0xc0);
      *(undefined4 *)(lVar7 + 0xe4) = *(undefined4 *)(lVar8 + 0xc4);
      puVar11 = *(ushort **)(lVar7 + 0x80);
      if (puVar11 != (ushort *)0x0) {
        *puVar11 = *puVar11 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
      }
    }
    if (*(int *)(lVar7 + 0xd0) != 0) {
      plVar16 = (longlong *)(lVar7 + 0xe8);
      lVar20 = 4;
      lVar15 = 4;
      uVar22 = 0;
      do {
        iVar17 = (int)uVar22;
        if (iVar17 < 0) {
          memset(&local_158,0,0xf8);
          FUN_14660c4b6(&local_158);
          FUN_1461fa392(plVar16,&local_158,uVar22 & 0xffffffff);
          FUN_14151928e(&local_158);
        }
        else {
          if (*(int *)(lVar7 + 0xf0) <= iVar17) {
            memset(&local_158,0,0xf8);
            FUN_14660c4b6(&local_158);
            FUN_1461fa392(plVar16,&local_158,uVar22 & 0xffffffff);
            FUN_14151928e(&local_158);
          }
          if (iVar17 < *(int *)(lVar8 + 400)) {
            lVar12 = *plVar16;
            lVar13 = *(longlong *)(lVar8 + 0x188);
            if (*(int *)(lVar12 + lVar20) != *(int *)(lVar13 + lVar15)) {
              *(undefined1 *)(lVar12 + -4 + lVar20) = *(undefined1 *)(lVar13 + -4 + lVar15);
              *(undefined4 *)(lVar12 + lVar20) = *(undefined4 *)(lVar13 + lVar15);
              puVar11 = *(ushort **)(lVar7 + 0x80);
              if (puVar11 != (ushort *)0x0) {
                *puVar11 = *puVar11 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
              }
            }
          }
        }
        uVar22 = uVar22 + 1;
        lVar15 = lVar15 + 0x120;
        lVar20 = lVar20 + 0xf8;
      } while (uVar22 < *(uint *)(lVar7 + 0xd0));
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar8 + 0x1b8));
    ReleaseSRWLockShared(local_170);
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442c7e16 FUN_1442c7e16 body=49 status=ok
// SIG undefined FUN_1442c7e16(void)

void FUN_1442c7e16(void)

{
  FUN_1447a1747(DAT_14cbdc338,DAT_14cbdc340);
  if (DAT_14cbdc338 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1442c7e54 FUN_1442c7e54 body=369 status=ok
// SIG undefined FUN_1442c7e54(void)

void FUN_1442c7e54(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1410c2540();
  *(byte *)(param_1 + 0x8d) = *(byte *)(param_1 + 0x8d) | 0x40;
  FUN_145a314be();
  uVar1 = FUN_1415b95c4(param_1);
  lVar2 = FUN_145725aea(uVar1,1);
  if (lVar2 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      *(undefined8 *)(lVar2 + 0x3508) = *(undefined8 *)(param_1 + 0x30);
    }
  }
  lVar2 = FUN_1402735c8();
  *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(lVar2 + 0x68c);
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(lVar2 + 0x680);
  *(undefined4 *)(param_1 + 700) = *(undefined4 *)(lVar2 + 0x67c);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442c8006 FUN_1442c8006 body=128 status=ok
// SIG undefined FUN_1442c8006(void)

void FUN_1442c8006(longlong *param_1,float param_2)

{
  if (param_1[0x51] != 0) {
    *(byte *)(param_1[0x51] + 0xa8) = *(byte *)((longlong)param_1 + 0x8c) >> 7;
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  if (0.0 < *(float *)(param_1 + 0x54)) {
    param_2 = *(float *)(param_1 + 0x54) - param_2;
    *(float *)(param_1 + 0x54) = param_2;
    if (param_1[0x51] != 0 && param_2 <= 0.0) {
      *(undefined4 *)((longlong)param_1 + 0x29c) = *(undefined4 *)(param_1[0x51] + 0xe8);
    }
  }
  return;
}



// FUNCTION 1442c8a78 FUN_1442c8a78 body=216 status=ok
// SIG undefined FUN_1442c8a78(void)

void FUN_1442c8a78(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong *plVar6;
  
  if ((*(byte *)((longlong)param_1 + 0x8c) & 0x80) != 0) {
    bVar2 = FUN_148e829b8();
    bVar3 = FUN_1442c8b50(param_1);
    bVar4 = FUN_148e82ac0(param_1);
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x198))(param_1);
    if (plVar6 == (longlong *)0x0) {
      bVar5 = 0;
    }
    else {
      bVar5 = (**(code **)(*plVar6 + 0x100))(plVar6);
    }
    *(byte *)((longlong)param_1 + 0x35a) = *(byte *)((longlong)param_1 + 0x35a) | bVar5;
    *(uint *)((longlong)param_1 + 0x8c) =
         *(uint *)((longlong)param_1 + 0x8c) & 0xfffdffff |
         (uint)((int)param_1[0x6c] - 1U < 2) << 0x11;
    if (((byte)(bVar2 | bVar3 | bVar4 | bVar5) == 1) && (lVar1 = param_1[0x51], lVar1 != 0)) {
      *(byte *)(lVar1 + 0x331) = *(byte *)(lVar1 + 0x331) & 0xfd | (bVar2 | bVar3 | bVar5) * '\x02';
      *(byte *)(lVar1 + 0x330) = *(byte *)(lVar1 + 0x330) | 0x20;
      *(undefined1 *)(lVar1 + 0x398) = 1;
    }
  }
  return;
}



// FUNCTION 1442c8b50 FUN_1442c8b50 body=242 status=ok
// SIG undefined FUN_1442c8b50(void)

undefined8 FUN_1442c8b50(longlong *param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x198))();
  if ((lVar3 != 0) && ((*(byte *)(param_1 + 0x5b) & 1) != 0)) {
    plVar4 = (longlong *)FUN_1408cbae2(param_1);
    lVar2 = *plVar4;
    SRWLock = (PSRWLOCK)(lVar2 + 0xb0);
    AcquireSRWLockShared(SRWLock);
    if ((int)param_1[0x5e] != *(int *)(lVar2 + 0x48)) {
      plVar4 = param_1 + 0x5c;
      if (plVar4 != (longlong *)(lVar2 + 0x38)) {
        iVar1 = *(int *)(lVar2 + 0x40);
        _Src = *(void **)(lVar2 + 0x38);
        *(int *)(param_1 + 0x5d) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x2ec) == 0) {
          *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
        }
        else {
          FUN_1446dd670(plVar4,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*plVar4,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(lVar2 + 0x48);
      ReleaseSRWLockShared(SRWLock);
      *(undefined1 *)((longlong)param_1 + 0x35a) = 1;
      FUN_14431454e(lVar3);
      return 1;
    }
    ReleaseSRWLockShared(SRWLock);
  }
  return 0;
}



// FUNCTION 1442c8c42 FUN_1442c8c42 body=784 status=ok
// SIG undefined FUN_1442c8c42(void)

void FUN_1442c8c42(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar2 = FUN_1407f4df8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      cVar1 = FUN_148a0118e(param_1,&DAT_14cb92a90);
      if (cVar1 != '\0') {
        local_48 = &local_40;
        local_40 = (code *)&LAB_148e85f62;
        local_38 = 0;
        FUN_148e95d70(param_1,param_2,&DAT_14cb92a90,param_1);
      }
      cVar1 = FUN_148a0118e(param_1,&DAT_14cb92aa8);
      if (cVar1 != '\0') {
        local_48 = &local_40;
        local_40 = (code *)&LAB_148e85f70;
        local_38 = 0;
        FUN_148e95d70(param_1,param_2,&DAT_14cb92aa8,param_1);
      }
      cVar1 = FUN_148a0118e(param_1,&DAT_14cb92ae0);
      if (cVar1 != '\0') {
        local_48 = &local_40;
        local_40 = (code *)&LAB_148e85f7e;
        local_38 = 0;
        FUN_148e95d70(param_1,param_2,&DAT_14cb92ae0,param_1);
      }
      cVar1 = FUN_148a0118e(param_1,&DAT_14cb92a98);
      if (cVar1 != '\0') {
        local_40 = FUN_1442c9a14;
        local_38 = 0;
        local_48 = &local_40;
        FUN_148e95d70(param_1,param_2,&DAT_14cb92a98,param_1);
        local_40 = FUN_140de0f20;
        local_38 = 0;
        local_48 = &local_40;
        FUN_148e96464(param_1,param_2,&DAT_14cb92a98,param_1);
      }
      cVar1 = FUN_148a0118e(param_1,&DAT_14cb92ad0);
      if (cVar1 != '\0') {
        local_40 = (code *)&LAB_148e85f8c;
        local_38 = 0;
        local_48 = &local_40;
        FUN_148e95d70(param_1,param_2,&DAT_14cb92ad0,param_1);
        local_40 = FUN_140de0f20;
        local_38 = 0;
        local_48 = &local_40;
        FUN_148e96464(param_1,param_2,&DAT_14cb92ad0,param_1);
      }
      cVar1 = FUN_148a0118e(param_1,&DAT_14cb92af0);
      if (cVar1 != '\0') {
        local_40 = (code *)&LAB_148e85f9a;
        local_38 = 0;
        local_48 = &local_40;
        FUN_148e95d70(param_1,param_2,&DAT_14cb92af0,param_1);
        local_40 = FUN_140de0f20;
        local_38 = 0;
        local_48 = &local_40;
        FUN_148e96464(param_1,param_2,&DAT_14cb92af0,param_1);
      }
      cVar1 = FUN_148a0118e(param_1,&DAT_14cb92b18);
      if (cVar1 != '\0') {
        local_40 = (code *)&LAB_148e85fa8;
        local_38 = 0;
        local_48 = &local_40;
        FUN_148e95d70(param_1,param_2,&DAT_14cb92b18,param_1);
        local_40 = FUN_140de0f20;
        local_38 = 0;
        local_48 = &local_40;
        FUN_148e96464(param_1,param_2,&DAT_14cb92b18,param_1);
      }
      plVar3 = (longlong *)FUN_1408cbae2(param_1);
      lVar2 = *plVar3;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xb0));
      *(int *)(lVar2 + 0xa8) = *(int *)(lVar2 + 0xa8) + 1;
      *(int *)(lVar2 + 0xa0) = *(int *)(lVar2 + 0xa0) + 1;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442c8f8e FUN_1442c8f8e body=377 status=ok
// SIG undefined FUN_1442c8f8e(void)

void FUN_1442c8f8e(longlong param_1)

{
  PSRWLOCK pRVar1;
  int iVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_1408cbae2();
  lVar3 = *plVar5;
  pRVar1 = (PSRWLOCK)(lVar3 + 0xb0);
  AcquireSRWLockShared(pRVar1);
  iVar2 = *(int *)(lVar3 + 8);
  ReleaseSRWLockShared(pRVar1);
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x928) == '\x01') {
      FUN_148e825d2(param_1);
      FUN_140de1078(param_1,&DAT_14cbdcc38,0,0);
      *(undefined1 *)(lVar3 + 0x928) = 0;
      *(byte *)(lVar3 + 0xb00) = *(byte *)(lVar3 + 0xb00) & 0xdf;
      FUN_148e82eea(param_1,*(undefined4 *)(lVar3 + 0x328));
    }
    else if (*(char *)(lVar3 + 0x1c0) == '\x01') {
      FUN_140de1078(param_1,&DAT_14cbdcc38,0,0);
      FUN_148e82eea(param_1,*(undefined4 *)(lVar3 + 0x328));
      *(undefined1 *)(lVar3 + 0x1c0) = 0;
    }
    else {
      if (*(char *)(lVar3 + 0xc0) != '\x01') {
        if (iVar2 != 1) {
          FUN_1442c9108(param_1);
          return;
        }
        plVar5 = (longlong *)FUN_1408cbae2(param_1);
        lVar3 = *plVar5;
        pRVar1 = (PSRWLOCK)(lVar3 + 0xb0);
        AcquireSRWLockShared(pRVar1);
        if (*(int *)(lVar3 + 0x60) == -1) {
          iVar2 = *(int *)(lVar3 + 0x68);
          ReleaseSRWLockShared(pRVar1);
          if (iVar2 == 0) goto LAB_1442c90eb;
        }
        else {
          ReleaseSRWLockShared(pRVar1);
        }
        FUN_148e825d2(param_1);
LAB_1442c90eb:
        FUN_148e84220(param_1,0);
        return;
      }
      FUN_140de1078(param_1,&DAT_14cbdcc38,0,0);
      FUN_148e82eea(param_1,*(undefined4 *)(lVar3 + 0x328));
      *(undefined1 *)(lVar3 + 0xc0) = 0;
    }
    puVar4 = *(ushort **)(lVar3 + 0x80);
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 1442c9108 FUN_1442c9108 body=208 status=ok
// SIG undefined FUN_1442c9108(void)

void FUN_1442c9108(longlong *param_1)

{
  ushort *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x198))();
  lVar3 = (**(code **)(*param_1 + 400))(param_1);
  if ((plVar2 != (longlong *)0x0) && ((char)plVar2[0x125] == '\x01')) {
    *(undefined1 *)(plVar2 + 0x125) = 0;
    (**(code **)(*plVar2 + 0x88))(plVar2,0xffffffff);
    *(byte *)(plVar2 + 0x66) = *(byte *)(plVar2 + 0x66) | 0x20;
    puVar1 = (ushort *)plVar2[0x10];
    if (puVar1 == (ushort *)0x0) {
      return;
    }
    *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(plVar2 + 0xf) & 0x3f));
    return;
  }
  if (lVar3 == 0) {
LAB_1442c91b5:
    if ((plVar2 == (longlong *)0x0) || ((*(byte *)(plVar2 + 0x160) & 0x20) == 0)) {
      FUN_1458343da(param_1);
      return;
    }
  }
  else {
    if (*(char *)(lVar3 + 0x1c0) == '\x01') {
      *(undefined1 *)(lVar3 + 0x1c0) = 0;
    }
    else {
      if (*(char *)(lVar3 + 0xc0) != '\x01') goto LAB_1442c91b5;
      *(undefined1 *)(lVar3 + 0xc0) = 0;
    }
    puVar1 = *(ushort **)(lVar3 + 0x80);
    if (puVar1 != (ushort *)0x0) {
      *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 1442c91d8 FUN_1442c91d8 body=817 status=ok
// SIG undefined FUN_1442c91d8(void)

void FUN_1442c91d8(longlong *param_1)

{
  PSRWLOCK pRVar1;
  int iVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined4 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)FUN_148e861a2(param_1);
    lVar7 = *plVar6;
    pRVar1 = (PSRWLOCK)(lVar7 + 0x58);
    AcquireSRWLockShared(pRVar1);
    (**(code **)(*plVar5 + 0xa8))(plVar5,local_78);
    FUN_148e1b2aa(lVar7,local_78);
    if (local_78[0] != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockShared(pRVar1);
    if ((((char)plVar5[0x38] == '\0') && ((char)plVar5[0x18] == '\0')) &&
       ((char)plVar5[0x125] != '\x01')) {
      if ((*(byte *)(plVar5 + 0x11f) & 8) != 0) {
        plVar6 = (longlong *)FUN_1408cbae2(param_1);
        lVar7 = *plVar6;
        pRVar1 = (PSRWLOCK)(lVar7 + 0xb0);
        AcquireSRWLockShared(pRVar1);
        if (*(int *)(lVar7 + 0x60) == -1) {
          iVar2 = *(int *)(lVar7 + 0x68);
          ReleaseSRWLockShared(pRVar1);
          lVar7 = *param_1;
          if (iVar2 == 0) {
            lVar7 = (**(code **)(lVar7 + 0x198))(param_1);
            if (((lVar7 != 0) &&
                (((*(int *)(lVar7 + 0x67c) != -1 || (*(int *)(lVar7 + 0x680) != 0)) ||
                 ((*(byte *)(lVar7 + 0x4c7) & 0x20) != 0)))) &&
               ((*(byte *)(lVar7 + 0x4c7) & 0x20) == 0)) {
              (**(code **)(*plVar5 + 0xf8))(plVar5,(int)plVar5[0x65]);
              iVar2 = *(int *)(lVar7 + 0x67c);
              if (iVar2 != -1) {
                uVar8 = FUN_14001cc68(0x148,0x10);
                local_a0 = &local_98;
                local_98 = (undefined4)DAT_14c8464e0;
                uStack_94 = DAT_14c8464e0._4_4_;
                uStack_90 = (undefined4)DAT_14c8464e8;
                uStack_8c = DAT_14c8464e8._4_4_;
                local_88 = DAT_14c8464f0;
                local_a8 = iVar2;
                FUN_14664e342(uVar8,param_1[6],1,*(undefined8 *)(lVar7 + 0x684));
                FUN_140391314(param_1,uVar8);
                if ((char)plVar5[0x125] == '\0') {
                  uVar8 = FUN_14001cc68(0x40,0x10);
                  FUN_148e84d5a(uVar8,param_1[6]);
                  FUN_140391314(param_1,uVar8);
                }
                uVar8 = FUN_14001cc68(0x40,0x10);
                FUN_148e83686(uVar8,param_1[6],1,0);
                FUN_140391314(param_1,uVar8);
                plVar6 = (longlong *)FUN_1408cbae2(param_1);
                lVar3 = *plVar6;
                AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xb0));
                *(int *)(lVar3 + 0xa8) = *(int *)(lVar3 + 0xa8) + 1;
                FUN_148e1ce8a(lVar3,lVar7 + 0x428,0);
                ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xb0));
              }
              local_68 = (undefined ***)0x0;
              local_58 = &PTR_LAB_14b9c5f40;
              local_78[0] = &LAB_1442da62c;
              local_50 = lVar7 + 0x428;
              FUN_1462350d0(plVar5,local_78);
              if (local_78[0] != (undefined1 *)0x0) {
                pppuVar9 = local_68;
                if (local_68 == (undefined ***)0x0) {
                  pppuVar9 = &local_58;
                }
                (*(code *)(*pppuVar9)[2])();
              }
              FUN_140de1078(param_1,&DAT_14cbdcb98,0,0);
              puVar4 = (ushort *)plVar5[0x10];
              if (puVar4 != (ushort *)0x0) {
                *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(plVar5 + 0xf) & 0x3f));
              }
            }
            goto LAB_1442c920a;
          }
        }
        else {
          ReleaseSRWLockShared(pRVar1);
          lVar7 = *param_1;
        }
        (**(code **)(lVar7 + 0x220))(param_1);
      }
    }
    else {
      FUN_148e84c06(param_1);
    }
  }
LAB_1442c920a:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442c950a FUN_1442c950a body=583 status=ok
// SIG undefined FUN_1442c950a(void)

void FUN_1442c950a(longlong *param_1)

{
  PSRWLOCK pRVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = param_1[0x51];
  if (lVar7 != 0) {
    if ((*(char *)(lVar7 + 0xc0) == '\x01') && (*(char *)(lVar7 + 0x119) == '\x01')) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
    }
    if ((*(byte *)(lVar7 + 0x8f8) & 8) != 0) {
      plVar4 = (longlong *)FUN_1408cbae2(param_1);
      lVar7 = *plVar4;
      pRVar1 = (PSRWLOCK)(lVar7 + 0xb0);
      AcquireSRWLockShared(pRVar1);
      if (*(int *)(lVar7 + 0x60) == -1) {
        iVar2 = *(int *)(lVar7 + 0x68);
        ReleaseSRWLockShared(pRVar1);
        if (iVar2 == 0) {
          plVar4 = (longlong *)FUN_1408cbae2(param_1);
          lVar7 = *plVar4;
          pRVar1 = (PSRWLOCK)(lVar7 + 0xb0);
          AcquireSRWLockShared(pRVar1);
          ReleaseSRWLockShared(pRVar1);
          lVar5 = (**(code **)(*param_1 + 0x198))(param_1);
          if ((lVar5 != 0) &&
             (((*(int *)(lVar5 + 0x67c) != -1 || (*(int *)(lVar5 + 0x680) != 0)) ||
              ((*(byte *)(lVar5 + 0x4c7) & 0x20) != 0)))) {
            puVar9 = (undefined4 *)(lVar7 + 0x50);
            uVar6 = FUN_14001cc68(0x148,0x10);
            local_68 = (undefined4)DAT_14c8464e0;
            uStack_64 = DAT_14c8464e0._4_4_;
            uStack_60 = (undefined4)DAT_14c8464e8;
            uStack_5c = DAT_14c8464e8._4_4_;
            local_58 = DAT_14c8464f0;
            uVar3 = *puVar9;
            lVar7 = FUN_14011c349();
            local_78 = uVar3;
            local_70 = &local_68;
            FUN_14664e342(uVar6,param_1[6],1,*(undefined8 *)(lVar7 + 0x48));
            FUN_140391314(param_1,uVar6);
            puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
            lVar7 = param_1[6];
            *puVar8 = &PTR_FUN_14b9c7290;
            local_48 = "SetGlyphs";
            local_40 = 9;
            local_3c = 0;
            uVar3 = FUN_14001a6c0(&local_48,1);
            FUN_14039176c(puVar8,lVar7,uVar3,1);
            *puVar8 = &PTR_FUN_14b9c7290;
            *(undefined4 *)(puVar8 + 7) = 0x23;
            FUN_140391314(param_1,puVar8);
            plVar4 = (longlong *)FUN_1408cbae2(param_1);
            lVar7 = *plVar4;
            AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0xb0));
            *(int *)(lVar7 + 0xa8) = *(int *)(lVar7 + 0xa8) + 1;
            FUN_148e1cfda(lVar7,puVar9);
            ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0xb0));
            FUN_140de1078(param_1,&DAT_14cbdcb98,0,0);
          }
          goto LAB_1442c96f0;
        }
      }
      else {
        ReleaseSRWLockShared(pRVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
    }
  }
LAB_1442c96f0:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442c977a FUN_1442c977a body=242 status=ok
// SIG undefined FUN_1442c977a(void)

void FUN_1442c977a(longlong *param_1,undefined8 *param_2,int param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  lVar6 = 0;
  do {
    uVar2 = puVar4[lVar6];
    bVar1 = "Backpack"[lVar6];
    iVar7 = (uint)uVar2 - (uint)bVar1;
    if (iVar7 == 0) {
      if (uVar2 == 0) goto LAB_1442c9801;
    }
    else {
      if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_1442c97fc;
      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) {
        iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_1442c97fc:
        if (iVar7 == 0) {
LAB_1442c9801:
          plVar5 = (longlong *)(**(code **)(*param_1 + 0x198))();
          if ((plVar5 != (longlong *)0x0) && ((*(byte *)((longlong)plVar5 + 0x8f9) & 1) != 0)) {
            *(undefined4 *)((longlong)plVar5 + 0x904) = param_4;
            *(undefined4 *)(plVar5 + 0x72) = param_6;
            *(undefined4 *)((longlong)plVar5 + 0x394) = param_5;
            if ((int)plVar5[0x120] != param_3) {
              *(int *)(plVar5 + 0x120) = param_3;
              (**(code **)(*plVar5 + 0x40))(plVar5);
            }
            puVar3 = (ushort *)plVar5[0x10];
            if (puVar3 != (ushort *)0x0) {
              *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(plVar5 + 0xf) & 0x3f));
            }
          }
        }
        return;
      }
    }
    lVar6 = lVar6 + 1;
  } while( true );
}



// FUNCTION 1442c986c FUN_1442c986c body=423 status=ok
// SIG undefined FUN_1442c986c(void)

void FUN_1442c986c(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1[0x51] != 0) {
    *(byte *)(param_1[0x51] + 0xa8) = *(byte *)((longlong)param_1 + 0x8c) >> 7;
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  if ((*(byte *)((longlong)param_1 + 0x8c) & 0x80) != 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 400))(param_1);
    if (plVar2 != (longlong *)0x0) {
      *(byte *)(plVar2 + 0x66) = *(byte *)(plVar2 + 0x66) | 0x40;
      if ((*(byte *)((longlong)plVar2 + 0x331) & 2) != 0) {
        (**(code **)(*param_1 + 0x268))(param_1);
        bVar1 = *(byte *)((longlong)plVar2 + 0x331);
        *(byte *)((longlong)plVar2 + 0x331) = bVar1 & 0xfd;
        if ((int)plVar2[0x65] != -1) {
          *(byte *)((longlong)plVar2 + 0x331) = bVar1 & 0xf9;
          (**(code **)(*param_1 + 0x1d0))(param_1);
          *(byte *)((longlong)plVar2 + 0x331) =
               *(byte *)((longlong)plVar2 + 0x331) & 0xfb | bVar1 & 4;
        }
      }
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x198))(param_1);
      if ((plVar3 != (longlong *)0x0) && ((char)plVar3[0x66] < '\0')) {
        (**(code **)(*plVar3 + 0x108))(plVar3);
        *(undefined1 *)((longlong)param_1 + 0x35a) = 1;
      }
      if (*(char *)((longlong)param_1 + 0x35a) == '\x01') {
        FUN_148e85688(param_1);
      }
      if ((char)param_1[0x6b] == '\0') {
        FUN_148e85b8e(param_1);
      }
      if (*(char *)((longlong)param_1 + 0x359) == '\0') {
        FUN_148e85cd8(param_1);
      }
      if ((char)plVar2[0x73] == '\x01') {
        plVar3 = (longlong *)(**(code **)(*param_1 + 400))(param_1);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x50))(plVar3);
          FUN_140714c1e(plVar3 + 0x58,(int)param_1[0x41]);
        }
        *(undefined1 *)(plVar2 + 0x73) = 0;
      }
      if (*(char *)((longlong)plVar2 + 0x399) == '\x01') {
        (**(code **)(*plVar2 + 0x58))(plVar2);
      }
      if ((~*(byte *)(plVar2 + 0x66) & 0x60) == 0) {
        (**(code **)(*plVar2 + 0x38))(plVar2);
        *(byte *)(plVar2 + 0x66) = *(byte *)(plVar2 + 0x66) & 0xdf;
      }
    }
  }
  return;
}



// FUNCTION 1442c9a14 FUN_1442c9a14 body=343 status=ok
// SIG undefined FUN_1442c9a14(void)

void FUN_1442c9a14(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = (**(code **)(*param_1 + 0x198))();
  if (((lVar4 != 0) && ((*(byte *)(lVar4 + 0x8f8) & 1) != 0)) && (*(char *)(lVar4 + 0x928) == '\0'))
  {
    lVar4 = (**(code **)(*param_1 + 0x198))(param_1);
    if ((lVar4 != 0) &&
       (((*(int *)(lVar4 + 0x67c) != -1 || (*(int *)(lVar4 + 0x680) != 0)) ||
        ((*(byte *)(lVar4 + 0x4c7) & 0x20) != 0)))) {
      cVar2 = FUN_148ee4610(lVar4 + 0x428);
      if (cVar2 != '\0') {
        puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        lVar1 = param_1[6];
        *puVar5 = &PTR_FUN_14b9c6b00;
        local_40 = "DropItem";
        local_38 = 8;
        local_34 = 0;
        uVar3 = FUN_14001a6c0(&local_40,1);
        FUN_14039176c(puVar5,lVar1,uVar3,1);
        *puVar5 = &PTR_FUN_14b9c6b00;
        *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(lVar4 + 0x67c);
        FUN_140391314(param_1,puVar5);
        FUN_140de1078(param_1,&DAT_14cbdcbd8,0,0);
        (**(code **)(*param_1 + 0x178))(param_1,param_1 + 0x66);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442c9b6c FUN_1442c9b6c body=244 status=ok
// SIG undefined FUN_1442c9b6c(void)

void FUN_1442c9b6c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  lVar2 = *param_1;
  if ((longlong)*(int *)(lVar2 + 0x210) == 0) {
    return;
  }
  plVar3 = *(longlong **)(lVar2 + 0x208);
  plVar8 = plVar3 + (longlong)*(int *)(lVar2 + 0x210) * 0x12;
  iVar1 = (int)param_2[1];
LAB_1442c9ba9:
  if ((int)plVar3[1] == iVar1) {
    if (1 < iVar1) {
      lVar4 = 0;
      do {
        uVar6 = *(ushort *)(*plVar3 + lVar4);
        uVar7 = (ulonglong)uVar6;
        uVar5 = *(ushort *)(*param_2 + lVar4);
        if (uVar6 == uVar5) {
          if (uVar6 == 0) break;
        }
        else {
          if (0x7f < (uVar5 | uVar6)) goto LAB_1442c9bf2;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar9 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar9]) goto LAB_1442c9bf2;
        }
        lVar4 = lVar4 + 2;
      } while( true );
    }
    goto LAB_1442c9c0f;
  }
  if ((int)plVar3[1] + iVar1 == 1) goto LAB_1442c9c0f;
  goto LAB_1442c9c02;
LAB_1442c9bf2:
  if (uVar6 == uVar5) {
LAB_1442c9c0f:
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    if ((*(byte *)((longlong)plVar3 + 0x89) & 1) == 0) {
      FUN_1412fabe8(lVar2 + 0x220);
      FUN_1410d0f68(lVar2 + 0x1b0);
      return;
    }
    FUN_148e6a174(lVar2 + 0x1b0);
    return;
  }
LAB_1442c9c02:
  plVar3 = plVar3 + 0x12;
  if (plVar3 == plVar8) {
    return;
  }
  goto LAB_1442c9ba9;
}



// FUNCTION 1442c9c72 FUN_1442c9c72 body=875 status=ok
// SIG undefined FUN_1442c9c72(void)

void FUN_1442c9c72(longlong *param_1,longlong *param_2,longlong *param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ushort uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[0x35] == 0) goto LAB_1442c9fba;
  puVar1 = *(undefined4 **)(param_1[0x35] + 8);
  puVar4 = &DAT_14c9485f0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
  }
  local_48 = 0;
  uStack_40 = 0;
  bVar13 = true;
  FUN_1400b2348(puVar4,&local_48);
  iVar3 = (int)param_2[1];
  if (iVar3 == (int)uStack_40) {
    if (1 < iVar3) {
      lVar6 = 0;
      while( true ) {
        uVar10 = *(ushort *)(*param_2 + lVar6);
        uVar2 = (uint)uVar10;
        uVar11 = *(ushort *)(local_48 + lVar6);
        uVar8 = (uint)uVar11;
        if (uVar10 != uVar11) {
          if ((uVar11 | uVar10) < 0x80) {
            uVar2 = (uint)(byte)(&DAT_149e05da0)[uVar10];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar11]) goto LAB_1442c9d0c;
          }
          iVar3 = uVar2 - uVar8;
          goto LAB_1442c9d47;
        }
        if (uVar10 == 0) break;
LAB_1442c9d0c:
        lVar6 = lVar6 + 2;
      }
      iVar3 = 0;
LAB_1442c9d47:
      bVar13 = iVar3 == 0;
    }
  }
  else {
    bVar13 = (int)uStack_40 + iVar3 == 1;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((!bVar13) || (lVar6 = (**(code **)(*param_1 + 400))(param_1), lVar6 == 0)) goto LAB_1442c9fba;
  iVar3 = (int)param_3[1];
  if (iVar3 == DAT_14cbdc658) {
    if (1 < iVar3) {
      lVar7 = 0;
      while( true ) {
        uVar10 = *(ushort *)(*param_3 + lVar7);
        uVar9 = (ulonglong)uVar10;
        uVar11 = *(ushort *)(DAT_14cbdc650 + lVar7);
        if (uVar10 != uVar11) break;
        if (uVar10 == 0) goto LAB_1442c9f50;
LAB_1442c9dbc:
        lVar7 = lVar7 + 2;
      }
      if ((uVar11 | uVar10) < 0x80) {
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar12 = (ulonglong)uVar11;
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_1442c9dbc;
      }
      if (uVar10 != uVar11) goto LAB_1442c9dec;
    }
LAB_1442c9f50:
    (**(code **)(*param_1 + 0x1d0))(param_1,param_4);
    bVar13 = false;
  }
  else {
    if (DAT_14cbdc658 + iVar3 == 1) goto LAB_1442c9f50;
LAB_1442c9dec:
    if (iVar3 == DAT_14cbdc6f0) {
      if (1 < iVar3) {
        lVar7 = 0;
        while( true ) {
          uVar10 = *(ushort *)(*param_3 + lVar7);
          uVar9 = (ulonglong)uVar10;
          uVar11 = *(ushort *)(DAT_14cbdc6e8 + lVar7);
          if (uVar10 != uVar11) break;
          if (uVar10 == 0) goto LAB_1442c9f6d;
LAB_1442c9e30:
          lVar7 = lVar7 + 2;
        }
        if ((uVar11 | uVar10) < 0x80) {
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_1442c9e30;
        }
        if (uVar10 != uVar11) goto LAB_1442c9e60;
      }
LAB_1442c9f6d:
      (**(code **)(*param_1 + 0x1b8))(param_1,param_4);
      bVar13 = param_4 != -1;
    }
    else {
      if (DAT_14cbdc6f0 + iVar3 == 1) goto LAB_1442c9f6d;
LAB_1442c9e60:
      if (iVar3 == DAT_14cbdc678) {
        if (1 < iVar3) {
          lVar7 = 0;
          while( true ) {
            uVar10 = *(ushort *)(*param_3 + lVar7);
            uVar9 = (ulonglong)uVar10;
            uVar11 = *(ushort *)(DAT_14cbdc670 + lVar7);
            if (uVar10 != uVar11) break;
            if (uVar10 == 0) goto LAB_1442c9f8e;
LAB_1442c9ea4:
            lVar7 = lVar7 + 2;
          }
          if ((uVar11 | uVar10) < 0x80) {
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar12 = (ulonglong)uVar11;
            uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
            if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_1442c9ea4;
          }
          if (uVar10 != uVar11) goto LAB_1442c9ed4;
        }
LAB_1442c9f8e:
        bVar5 = *(byte *)(lVar6 + 0x218);
      }
      else {
        if (DAT_14cbdc678 + iVar3 == 1) goto LAB_1442c9f8e;
LAB_1442c9ed4:
        if (iVar3 == DAT_14cbdc688) {
          if (1 < iVar3) {
            lVar7 = 0;
            while( true ) {
              uVar10 = *(ushort *)(*param_3 + lVar7);
              uVar9 = (ulonglong)uVar10;
              uVar11 = *(ushort *)(DAT_14cbdc680 + lVar7);
              if (uVar10 != uVar11) break;
              if (uVar10 == 0) goto LAB_1442c9f9d;
LAB_1442c9f18:
              lVar7 = lVar7 + 2;
            }
            if ((uVar11 | uVar10) < 0x80) {
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar12 = (ulonglong)uVar11;
              uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
              if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_1442c9f18;
            }
            if (uVar10 != uVar11) goto LAB_1442c9fba;
          }
        }
        else if (DAT_14cbdc688 + iVar3 != 1) goto LAB_1442c9fba;
LAB_1442c9f9d:
        bVar5 = *(byte *)(lVar6 + 0x118);
      }
      bVar13 = (bool)((bVar5 ^ 1) & param_4 != -1);
    }
  }
  (**(code **)(*param_1 + 0x1e8))(param_1,bVar13);
LAB_1442c9fba:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442c9fde FUN_1442c9fde body=534 status=ok
// SIG undefined FUN_1442c9fde(void)

void FUN_1442c9fde(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort uVar7;
  uint uVar8;
  ulonglong uVar9;
  ushort uVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[0x35] != 0) {
    puVar1 = *(undefined4 **)(param_1[0x35] + 8);
    puVar4 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = puVar1;
    }
    local_48 = 0;
    uStack_40 = 0;
    bVar11 = true;
    FUN_1400b2348(puVar4);
    iVar3 = (int)param_2[1];
    if (iVar3 == (int)uStack_40) {
      if (1 < iVar3) {
        lVar5 = 0;
        while( true ) {
          uVar7 = *(ushort *)(*param_2 + lVar5);
          uVar2 = (uint)uVar7;
          uVar10 = *(ushort *)(local_48 + lVar5);
          uVar8 = (uint)uVar10;
          if (uVar7 != uVar10) {
            if ((uVar10 | uVar7) < 0x80) {
              uVar2 = (uint)(byte)(&DAT_149e05da0)[uVar7];
              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar10];
              if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar10]) goto LAB_1442ca078;
            }
            iVar3 = uVar2 - uVar8;
            goto LAB_1442ca0b3;
          }
          if (uVar7 == 0) break;
LAB_1442ca078:
          lVar5 = lVar5 + 2;
        }
        iVar3 = 0;
LAB_1442ca0b3:
        bVar11 = iVar3 == 0;
      }
    }
    else {
      bVar11 = (int)uStack_40 + iVar3 == 1;
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (bVar11) {
      iVar3 = (int)param_3[1];
      if (iVar3 == DAT_14cbdc658) {
        if (1 < iVar3) {
          lVar5 = 0;
          while( true ) {
            uVar7 = *(ushort *)(*param_3 + lVar5);
            uVar6 = (ulonglong)uVar7;
            uVar10 = *(ushort *)(DAT_14cbdc650 + lVar5);
            if (uVar7 != uVar10) break;
            if (uVar7 == 0) goto LAB_1442ca1b2;
LAB_1442ca113:
            lVar5 = lVar5 + 2;
          }
          if ((uVar10 | uVar7) < 0x80) {
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            uVar9 = (ulonglong)uVar10;
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar9]) goto LAB_1442ca113;
          }
          if (uVar7 != uVar10) goto LAB_1442ca13e;
        }
      }
      else if (DAT_14cbdc658 + iVar3 != 1) {
LAB_1442ca13e:
        if (iVar3 == DAT_14cbdc668) {
          if (1 < iVar3) {
            lVar5 = 0;
            while( true ) {
              uVar7 = *(ushort *)(*param_3 + lVar5);
              uVar6 = (ulonglong)uVar7;
              uVar10 = *(ushort *)(DAT_14cbdc660 + lVar5);
              if (uVar7 != uVar10) break;
              if (uVar7 == 0) goto LAB_1442ca1eb;
LAB_1442ca17d:
              lVar5 = lVar5 + 2;
            }
            if ((uVar10 | uVar7) < 0x80) {
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
              uVar9 = (ulonglong)uVar10;
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar9]) goto LAB_1442ca17d;
            }
            if (uVar7 != uVar10) goto LAB_1442ca1c0;
          }
        }
        else if (DAT_14cbdc668 + iVar3 != 1) goto LAB_1442ca1c0;
LAB_1442ca1eb:
        FUN_148e862da(param_1);
        goto LAB_1442ca1c0;
      }
LAB_1442ca1b2:
      (**(code **)(*param_1 + 0x1c8))(param_1,param_4);
    }
  }
LAB_1442ca1c0:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442ca1f6 FUN_1442ca1f6 body=1960 status=ok
// SIG undefined FUN_1442ca1f6(void)

void FUN_1442ca1f6(longlong *param_1)

{
  ushort *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong *local_190;
  longlong local_188;
  code *local_180;
  undefined4 local_178;
  longlong *local_170;
  undefined4 local_168;
  ulonglong local_160;
  undefined1 local_158;
  undefined1 local_150 [8];
  undefined1 local_148 [16];
  undefined1 local_138 [32];
  longlong local_118;
  uint local_110;
  uint local_10c;
  longlong *local_108;
  int local_100;
  undefined8 local_e8;
  undefined1 local_dc;
  longlong *local_88;
  ulonglong uStack_80;
  longlong *local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar6 = (**(code **)(*param_1 + 0x198))();
  if ((((lVar6 == 0) || ((*(byte *)(lVar6 + 0x8f8) & 0x20) == 0)) ||
      ((*(byte *)(lVar6 + 0xb00) & 0x20) != 0)) || ((longlong)*(int *)(lVar6 + 0x408) == 0))
  goto LAB_1442ca29b;
  lVar8 = 0;
  iVar11 = 0;
  do {
    if ((*(byte *)(*(longlong *)(lVar6 + 0x400) + 0x9c + lVar8) & 0xf1) == 0) {
      bVar12 = -1 < *(char *)(*(longlong *)(lVar6 + 0x400) + 0x9d + lVar8);
    }
    else {
      bVar12 = false;
    }
    iVar11 = iVar11 + (uint)bVar12;
    lVar8 = lVar8 + 0x268;
  } while ((longlong)*(int *)(lVar6 + 0x408) * 0x268 - lVar8 != 0);
  if (iVar11 < 1) goto LAB_1442ca29b;
  *(undefined1 *)(lVar6 + 0x928) = 0;
  *(undefined1 *)(lVar6 + 0xc0) = 0;
  *(undefined1 *)(lVar6 + 0x1c0) = 0;
  FUN_145be44b4(local_150);
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  local_78 = (longlong *)((ulonglong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  uStack_68 = 0;
  FUN_1446ddda2(&local_88,"MarkAllFilteredDialogTitle",0);
  FUN_1410d1eba(&local_170,&local_88);
  FUN_140008f88(local_148,&local_170);
  if (local_170 != (longlong *)0x0) {
    (**(code **)(*local_170 + 0x10))();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  local_78 = (longlong *)((ulonglong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  uStack_68 = 0;
  FUN_1446ddda2(&local_88,"MarkAllFilteredDialogDescription",0);
  FUN_1410d1eba(&local_170,&local_88);
  FUN_140008f88(local_138,&local_170);
  if (local_170 != (longlong *)0x0) {
    (**(code **)(*local_170 + 0x10))();
  }
  local_190 = param_1;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  iVar11 = *(int *)(lVar6 + 0x9f8);
  local_198 = lVar6;
  if ((longlong)iVar11 != 0) {
    lVar6 = *(longlong *)(lVar6 + 0x9f0);
    local_188 = lVar6 + 0x10;
    lVar8 = 0;
    do {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
        DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
        DAT_14c844840[1] = 0;
        *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
        DAT_14c844840[2] = -1;
        DAT_14c844840[3] = 0;
        DAT_14c844840[4] = 0;
        DAT_14c844840[5] = 0;
        if (DAT_14c844840 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        DAT_14c844848 = 0;
        atexit(FUN_142760bef);
        _Init_thread_footer(&DAT_14c844850);
      }
      local_88 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      uStack_80 = CONCAT44(uStack_80._4_4_,DAT_14c844848);
      local_78 = (longlong *)0x0;
      local_70 = CONCAT71(local_70._1_7_,1);
      puVar9 = &DAT_149dfb77a;
      if (*(int *)(lVar6 + 8 + lVar8) != 0) {
        puVar9 = *(undefined2 **)(lVar6 + lVar8);
      }
      FUN_1446f470e(&local_170,puVar9,1);
      plVar3 = local_88;
      local_78 = local_170;
      if ((*(byte *)(lVar6 + 0x88 + lVar8) & 2) == 0) {
        FUN_140009b9a(&local_170,local_188 + lVar8);
        FUN_140008f88(&local_88,&local_170);
        if (local_170 != (longlong *)0x0) {
          (**(code **)(*local_170 + 0x10))();
        }
      }
      else {
        plVar2 = *(longlong **)(lVar6 + 0x60 + lVar8);
        if (local_88 != plVar2) {
          local_88 = plVar2;
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        uStack_80 = CONCAT44(uStack_80._4_4_,*(undefined4 *)(lVar6 + 0x68 + lVar8));
      }
      uVar5 = local_110;
      lVar10 = (longlong)(int)local_110;
      local_110 = local_110 + 1;
      if (local_10c < local_110) {
        FUN_145da4fc8(&local_118,uVar5);
      }
      lVar4 = local_118;
      lVar10 = lVar10 * 0x20;
      FUN_14023423e(local_118 + lVar10,&local_88);
      *(undefined1 *)(lVar4 + 0x18 + lVar10) = (undefined1)local_70;
      *(longlong **)(lVar4 + 0x10 + lVar10) = local_78;
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 0x10))();
      }
      lVar8 = lVar8 + 0x90;
    } while ((longlong)iVar11 * 0x90 != lVar8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  lVar6 = local_198;
  local_170 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    (**(code **)(*DAT_14c844840 + 8))();
  }
  local_168 = DAT_14c844848;
  local_158 = 1;
  local_88 = (longlong *)0x14b81b8ce;
  uStack_80 = CONCAT35(uStack_80._5_3_,6);
  uVar5 = FUN_14001a6c0(&local_88,1);
  local_160 = (ulonglong)uVar5;
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  local_78 = (longlong *)((ulonglong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  uStack_68 = 0;
  FUN_1446ddda2(&local_88,"BackText",0);
  FUN_1410d1eba(&local_180,&local_88);
  FUN_140008f88(&local_170,&local_180);
  if (local_180 != (code *)0x0) {
    (**(code **)(*(longlong *)local_180 + 0x10))();
  }
  plVar3 = local_190;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  uVar5 = local_110;
  lVar8 = (longlong)(int)local_110;
  local_110 = local_110 + 1;
  if (local_10c < local_110) {
    FUN_145da4fc8(&local_118,uVar5);
  }
  lVar8 = lVar8 * 0x20;
  FUN_14023423e(local_118 + lVar8,&local_170);
  *(ulonglong *)(local_118 + 0x10 + lVar8) = local_160;
  *(undefined1 *)(local_118 + 0x18 + lVar8) = local_158;
  local_180 = FUN_148e87310;
  local_178 = 0;
  FUN_148e8718e(&local_88,plVar3);
  plVar2 = local_88;
  local_88 = (longlong *)0x0;
  iVar11 = (int)uStack_80;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  if (local_100 == 0) {
LAB_1442ca56d:
    if (local_108 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_108 != (longlong *)0x0) {
    (**(code **)*local_108)(local_108,0);
    FUN_1446efa72(&local_108,0,0,0x10);
    local_100 = 0;
    goto LAB_1442ca56d;
  }
  local_108 = plVar2;
  local_100 = iVar11;
  if ((int)uStack_80 == 0) {
LAB_1442ca5d0:
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (longlong *)0x0) {
    (**(code **)*local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    uStack_80 = uStack_80 & 0xffffffff00000000;
    goto LAB_1442ca5d0;
  }
  local_e8 = DAT_14cbdcb08;
  local_dc = 1;
  *(byte *)(lVar6 + 0xb00) = *(byte *)(lVar6 + 0xb00) | 0x20;
  puVar1 = *(ushort **)(lVar6 + 0x80);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
  }
  uVar7 = FUN_14001cc68(0x100,0x10);
  FUN_148e875c4(uVar7,plVar3 + 6,local_150);
  FUN_140391314(plVar3,uVar7);
  FUN_140de1078(plVar3,&DAT_14cbdcc28,0,0);
  if (local_170 != (longlong *)0x0) {
    (**(code **)(*local_170 + 0x10))();
  }
  FUN_1459ddea2(local_150);
LAB_1442ca29b:
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442ca9a0 FUN_1442ca9a0 body=1780 status=ok
// SIG undefined FUN_1442ca9a0(void)

void FUN_1442ca9a0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  ushort *puVar4;
  code *pcVar5;
  void *_Src;
  longlong *plVar6;
  char cVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_168 [40];
  longlong *local_140;
  undefined8 local_138;
  longlong *local_130;
  longlong *local_128 [2];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined4 local_f0;
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  undefined4 *local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  char *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined4 local_80 [4];
  longlong *local_70 [2];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar9 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if ((plVar9 != (longlong *)0x0) && (cVar7 = (**(code **)(*plVar9 + 0x118))(plVar9), cVar7 != '\0')
     ) {
    *(undefined1 *)(plVar9 + 0x18) = 0;
    *(undefined1 *)(plVar9 + 0x38) = 0;
    lVar10 = (**(code **)(*param_1 + 0x198))(param_1);
    if ((lVar10 == 0) ||
       (((*(int *)(lVar10 + 0x67c) == -1 && (*(int *)(lVar10 + 0x680) == 0)) &&
        ((*(byte *)(lVar10 + 0x4c7) & 0x20) == 0)))) {
      *(undefined1 *)(plVar9 + 0x125) = 0;
      (**(code **)(*param_1 + 0x1d0))(param_1,(int)plVar9[0x65]);
    }
    else {
      if ((*(byte *)(lVar10 + 0x4c7) & 0x20) != 0) {
        *(undefined1 *)(plVar9 + 0x125) = 0;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60[0] ^ (ulonglong)auStack_168);
      }
      (**(code **)(*plVar9 + 0x88))(plVar9,(int)plVar9[0x65]);
      FUN_148ee4e68(plVar9,1);
      FUN_1457fd360(plVar9 + 0x123,plVar9 + 0x133);
      *(undefined1 *)(plVar9 + 0x125) = 1;
      plVar9[0x122] = plVar9[0x122] + 1;
      *(byte *)(plVar9 + 0x66) = *(byte *)(plVar9 + 0x66) | 0x20;
      if ((longlong)(int)plVar9[0x12f] != 0) {
        lVar10 = (longlong)(int)plVar9[0x12f] * 0x90;
        plVar13 = (longlong *)(plVar9[0x12e] + 0x60);
        do {
          if ((*(byte *)(plVar13 + 5) & 0x40) != 0) {
            if ((*(byte *)(plVar13 + 5) & 2) == 0) {
              local_140 = plVar13 + -10;
              FUN_140009b9a(local_128);
              local_a8 = (char *)0x0;
              uStack_a0 = 0;
              local_98 = 0;
              local_90 = 0;
              uStack_88 = 0;
              FUN_1446ddda2(&local_a8,"UnmarkItemFormat",0);
              FUN_1410d1eba(local_118,&local_a8);
              FUN_14023409e(&local_138,local_118,1);
              local_80[0] = 4;
              FUN_14023423e(local_70,local_128);
              local_c8 = local_80;
              local_c0 = local_60;
              FUN_14010d304(&local_b8,&local_c8);
              local_d8 = local_138;
              local_d0 = local_130;
              if (local_130 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_130 + 1) = (int)local_130[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_e8,&local_d8);
              FUN_14007f2db(local_b8,local_b0);
              if (local_b8 != 0) {
                FUN_1400020a8();
              }
              plVar6 = local_140;
              if (local_70[0] != (longlong *)0x0) {
                (**(code **)(*local_70[0] + 0x10))();
              }
              plVar2 = local_130;
              if (local_130 != (longlong *)0x0) {
                LOCK();
                plVar11 = local_130 + 1;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)*plVar11 == 0) {
                  (**(code **)*local_130)(local_130);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar2 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar2 + 0x10))(plVar2);
                  }
                }
              }
              if (local_128[0] != (longlong *)0x0) {
                (**(code **)(*local_128[0] + 0x10))();
              }
              plVar2 = local_e8[0];
              plVar11 = local_e8[0];
              if (*(code **)(*local_e8[0] + 0x50) != FUN_144828418) {
                plVar11 = (longlong *)(**(code **)(*local_e8[0] + 0x50))(local_e8[0]);
              }
              FUN_1447a1fc0(plVar11);
              pcVar5 = *(code **)(*plVar2 + 0x28);
              if (pcVar5 == FUN_14482841c) {
                plVar11 = plVar2 + 3;
                if (plVar2[5] != 0) {
                  plVar11 = (longlong *)(plVar2[5] + 8);
                }
              }
              else if (pcVar5 == (code *)&LAB_14010c34c) {
                plVar11 = plVar2 + 2;
              }
              else {
                plVar11 = (longlong *)(*pcVar5)(plVar2);
              }
              if (plVar6 != plVar11) {
                iVar3 = (int)plVar11[1];
                _Src = (void *)*plVar11;
                *(int *)(plVar13 + -9) = iVar3;
                if (iVar3 == 0 && *(int *)((longlong)plVar13 + -0x44) == 0) {
                  *(undefined4 *)((longlong)plVar13 + -0x44) = 0;
                }
                else {
                  FUN_1446dd670(plVar6,iVar3);
                  if (iVar3 != 0) {
                    memcpy((void *)*plVar6,_Src,(longlong)iVar3 * 2);
                  }
                }
              }
              if (local_e8[0] != (longlong *)0x0) {
                (**(code **)(*local_e8[0] + 0x10))();
              }
            }
            else {
              local_f8 = (longlong *)*plVar13;
              if (local_f8 != (longlong *)0x0) {
                (**(code **)(*local_f8 + 8))();
              }
              local_f0 = (undefined4)plVar13[1];
              local_a8 = (char *)0x0;
              uStack_a0 = 0;
              local_98 = 0;
              local_90 = 0;
              uStack_88 = 0;
              FUN_1446ddda2(&local_a8,"UnmarkItemFormat",0);
              FUN_1410d1eba(local_118,&local_a8);
              FUN_14023409e(&local_108,local_118,1);
              local_80[0] = 4;
              FUN_14023423e(local_70,&local_f8);
              local_c8 = local_80;
              local_c0 = local_60;
              FUN_14010d304(&local_b8,&local_c8);
              local_d8 = local_108;
              local_d0 = local_100;
              if (local_100 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_100 + 1) = (int)local_100[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_e8,&local_d8);
              FUN_14007f2db(local_b8,local_b0);
              if (local_b8 != 0) {
                FUN_1400020a8();
              }
              if (local_70[0] != (longlong *)0x0) {
                (**(code **)(*local_70[0] + 0x10))();
              }
              plVar6 = local_100;
              if (local_100 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_100 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_100)(local_100);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar6 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar6 + 0x10))(plVar6);
                  }
                }
              }
              if (local_f8 != (longlong *)0x0) {
                (**(code **)(*local_f8 + 0x10))();
              }
              FUN_140008f88(plVar13,local_e8);
              if (local_e8[0] != (longlong *)0x0) {
                (**(code **)(*local_e8[0] + 0x10))();
              }
            }
            if (local_118[0] != (longlong *)0x0) {
              (**(code **)(*local_118[0] + 0x10))();
            }
            if (local_90 != 0) {
              FUN_1400020a8();
            }
          }
          plVar13 = plVar13 + 0x12;
          lVar10 = lVar10 + -0x90;
        } while (lVar10 != 0);
      }
      puVar12 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      lVar10 = param_1[6];
      *puVar12 = &PTR_FUN_14b9c7210;
      local_a8 = "SetVisible";
      uStack_a0._0_5_ = 10;
      uVar8 = FUN_14001a6c0(&local_a8,1);
      FUN_14039176c(puVar12,lVar10,uVar8,1);
      *puVar12 = &PTR_FUN_14b9c7210;
      *(undefined1 *)(puVar12 + 7) = 0;
      *(undefined4 *)((longlong)puVar12 + 0x3c) = 0;
      FUN_140391314(param_1,puVar12);
      puVar12 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      lVar10 = param_1[6];
      *puVar12 = &PTR_FUN_14b9c7210;
      local_a8 = "SetVisible";
      uStack_a0 = CONCAT35(uStack_a0._5_3_,10);
      uVar8 = FUN_14001a6c0(&local_a8,1);
      FUN_14039176c(puVar12,lVar10,uVar8,1);
      *puVar12 = &PTR_FUN_14b9c7210;
      *(undefined1 *)(puVar12 + 7) = 0;
      *(undefined4 *)((longlong)puVar12 + 0x3c) = 1;
      FUN_140391314(param_1,puVar12);
    }
    puVar12 = &DAT_14cbdcc38;
    if ((char)plVar9[0x125] != '\0') {
      puVar12 = &DAT_14cbdcc28;
    }
    FUN_140de1078(param_1,puVar12,0,0);
    puVar4 = (ushort *)plVar9[0x10];
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(plVar9 + 0xf) & 0x3f));
    }
  }
  if ((local_60[0] ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442cb0c2 FUN_1442cb0c2 body=203 status=ok
// SIG undefined FUN_1442cb0c2(void)

void FUN_1442cb0c2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x198))();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x8f8) & 0x10) != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x198))(param_1);
    if ((((lVar2 != 0) &&
         (((*(int *)(lVar2 + 0x67c) != -1 || (*(int *)(lVar2 + 0x680) != 0)) ||
          ((*(byte *)(lVar2 + 0x4c7) & 0x20) != 0)))) &&
        ((((*(byte *)(lVar2 + 0x4c6) & 0x40) == 0 && ((*(byte *)(lVar2 + 0x4c4) & 1) == 0)) &&
         ((char)*(byte *)(lVar2 + 0x4c6) < '\0')))) && ((*(byte *)(lVar2 + 0x4c7) & 0x20) == 0)) {
      puVar3 = &DAT_14cbdcbe8;
      if ((*(byte *)(lVar2 + 0x4c4) & 0x10) == 0) {
        puVar3 = &DAT_14cbdccb8;
      }
      FUN_140de1078(param_1,puVar3,0,0);
      FUN_148ee5906(lVar1,4,lVar2 + 0x428);
      return;
    }
  }
  return;
}



// FUNCTION 1442cb18e FUN_1442cb18e body=934 status=ok
// SIG undefined FUN_1442cb18e(void)

void FUN_1442cb18e(longlong *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  byte bVar12;
  longlong lVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  ulonglong uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  char *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = (**(code **)(*param_1 + 0x198))();
  if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x8f8) & 0x40) == 0)) goto LAB_1442cb1c7;
  plVar4 = (longlong *)FUN_148e8625c(param_1);
  lVar3 = *plVar4;
  AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x1c0));
  uVar9 = *(int *)(lVar3 + 0x10) - *(int *)(lVar3 + 8);
  ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x1c0));
  if ((int)uVar9 < 1) {
    FUN_140de1078(param_1,&DAT_14cbdcbf8,0,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
  }
  plVar4 = (longlong *)FUN_148e8625c(param_1);
  lVar3 = *plVar4;
  AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x1c0));
  local_68 = 0;
  uStack_60 = 0;
  if ((longlong)*(int *)(lVar3 + 0x88) != 0) {
    lVar8 = *(longlong *)(lVar3 + 0x80);
    lVar10 = (longlong)*(int *)(lVar3 + 0x88) * 0x430;
    do {
      uVar7 = uStack_60;
      if ((*(byte *)(lVar8 + 0x18) & 8) != 0) {
        lVar13 = (longlong)(int)uStack_60;
        uVar1 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar1);
        if (uStack_60._4_4_ < uVar1) {
          FUN_145917388(&local_68,uVar7 & 0xffffffff);
        }
        FUN_1413505e4(lVar13 * 0x430 + local_68,lVar8);
      }
      lVar8 = lVar8 + 0x430;
      lVar10 = lVar10 + -0x430;
    } while (lVar10 != 0);
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x1c0));
  uVar2 = 0;
  if ((uStack_60 & 0xffffffff) != 0) {
    local_78 = 0;
    uStack_70 = 0;
    if ((int)uStack_60 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_60 & 0xffffffff);
    }
    FUN_148e9a4d0(&local_78);
    if ((longlong)(int)uStack_60 == 0) {
LAB_1442cb3a8:
      lVar3 = local_78;
      lVar8 = (longlong)(int)uStack_70;
      if ((int)uVar9 < (int)uStack_70) {
        lVar3 = 0x254;
        uVar7 = 1;
        do {
          puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
          lVar10 = local_78;
          lVar8 = param_1[6];
          *puVar6 = &PTR_FUN_14b9c6b40;
          local_58 = "Deposit";
          local_50 = 7;
          local_4c = 0;
          uVar2 = FUN_14001a6c0(&local_58,1);
          FUN_14039176c(puVar6,lVar8,uVar2,1);
          *puVar6 = &PTR_FUN_14b9c6b40;
          *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(lVar10 + lVar3);
          FUN_140391314(param_1,puVar6);
          if (uVar9 == uVar7) break;
          lVar3 = lVar3 + 0x268;
          iVar11 = (int)uVar7;
          uVar7 = uVar7 + 1;
        } while (iVar11 < (int)uStack_70);
        plVar4 = param_1 + 0x61;
      }
      else {
        if ((int)uStack_70 == 0) {
          uVar7 = 0x300;
        }
        else {
          lVar10 = 0;
          do {
            puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
            lVar13 = param_1[6];
            *puVar6 = &PTR_FUN_14b9c6b40;
            local_58 = "Deposit";
            local_50 = 7;
            local_4c = 0;
            uVar2 = FUN_14001a6c0(&local_58,1);
            FUN_14039176c(puVar6,lVar13,uVar2,1);
            *puVar6 = &PTR_FUN_14b9c6b40;
            *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(lVar3 + 0x254 + lVar10);
            FUN_140391314(param_1,puVar6);
            lVar10 = lVar10 + 0x268;
          } while (lVar8 * 0x268 - lVar10 != 0);
          uVar7 = (ulonglong)((int)uStack_70 == 1) << 4 | 0x300;
        }
        plVar4 = (longlong *)(uVar7 + (longlong)param_1);
      }
      (**(code **)(*param_1 + 0x178))(param_1,plVar4);
    }
    else {
      lVar8 = (longlong)(int)uStack_60 * 0x430 + local_68;
      bVar12 = 0;
      lVar3 = local_68;
      do {
        uVar5 = FUN_141352650(&local_78);
        FUN_141352d9a(uVar5,lVar3);
        bVar12 = bVar12 | *(byte *)(lVar3 + 0x10);
        lVar3 = lVar3 + 0x430;
      } while (lVar3 != lVar8);
      if ((bVar12 & 1) == 0) goto LAB_1442cb3a8;
      FUN_1442cb552(param_1,&local_78);
    }
    FUN_1412d6a39(local_78,uStack_70 & 0xffffffff);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    uVar2 = (int)uStack_60;
  }
  FUN_141286eab(local_68,uVar2);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_1442cb1c7:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442cb552 FUN_1442cb552 body=1766 status=ok
// SIG undefined FUN_1442cb552(void)

void FUN_1442cb552(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  ushort *puVar3;
  longlong lVar4;
  PSRWLOCK SRWLock;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  PSRWLOCK local_168;
  code *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined1 local_140 [8];
  undefined1 local_138 [16];
  undefined1 local_128 [32];
  longlong local_108;
  uint local_100;
  uint local_fc;
  undefined8 *local_f8;
  int local_f0;
  undefined8 local_d8;
  undefined1 local_cc;
  undefined8 *local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar7 = (**(code **)(*param_1 + 0x198))();
  if ((lVar7 == 0) || (bVar10 = *(byte *)(lVar7 + 0xb00), (bVar10 & 0x20) != 0)) goto LAB_1442cb596;
  if (((*(char *)(lVar7 + 0x928) != '\0') ||
      ((*(char *)(lVar7 + 0xc0) != '\0' || (*(char *)(lVar7 + 0x1c0) == '\x01')))) &&
     (puVar3 = *(ushort **)(lVar7 + 0x80), puVar3 != (ushort *)0x0)) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
    bVar10 = *(byte *)(lVar7 + 0xb00);
  }
  *(undefined1 *)(lVar7 + 0x928) = 0;
  *(undefined1 *)(lVar7 + 0xc0) = 0;
  *(undefined1 *)(lVar7 + 0x1c0) = 0;
  *(byte *)(lVar7 + 0xb00) = bVar10 | 0x20;
  plVar8 = (longlong *)FUN_148e8625c(param_1);
  lVar7 = *plVar8;
  local_168 = (PSRWLOCK)(lVar7 + 0x1c0);
  AcquireSRWLockExclusive(local_168);
  *(int *)(lVar7 + 0x1b8) = *(int *)(lVar7 + 0x1b8) + 1;
  plVar8 = (longlong *)(lVar7 + 0xb0);
  plVar1 = (longlong *)(lVar7 + 0x98);
  *(undefined4 *)(lVar7 + 0xb8) = 0;
  if (*(int *)(lVar7 + 0xbc) < 0) {
    FUN_148e9a5d8(plVar8,0);
  }
  *(int *)(lVar7 + 0xc0) = *(int *)(lVar7 + 0xc0) + 1;
  FUN_148e9a5ae(plVar1,(int)param_2[1]);
  *(int *)(lVar7 + 0xa8) = *(int *)(lVar7 + 0xa8) + 1;
  lVar12 = param_2[1];
  if ((longlong)(int)lVar12 != 0) {
    lVar4 = *param_2;
    lVar11 = 0;
    do {
      iVar2 = *(int *)(lVar7 + 0xa0);
      *(uint *)(lVar7 + 0xa0) = iVar2 + 1U;
      if (*(uint *)(lVar7 + 0xa4) < iVar2 + 1U) {
        FUN_148d699d4(plVar1,iVar2);
        *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar4 + 0x254 + lVar11);
LAB_1442cba89:
        *(int *)(lVar7 + 0xa8) = *(int *)(lVar7 + 0xa8) + 1;
      }
      else {
        *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar4 + 0x254 + lVar11);
        if (iVar2 != -1) goto LAB_1442cba89;
      }
      if ((*(byte *)(lVar4 + 0x9c + lVar11) & 2) == 0) {
        iVar2 = *(int *)(lVar7 + 0xb8);
        *(uint *)(lVar7 + 0xb8) = iVar2 + 1U;
        if (*(uint *)(lVar7 + 0xbc) < iVar2 + 1U) {
          FUN_148d699d4(plVar8,iVar2);
          *(undefined4 *)(*plVar8 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar4 + 0x254 + lVar11);
        }
        else {
          *(undefined4 *)(*plVar8 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar4 + 0x254 + lVar11);
          if (iVar2 == -1) goto LAB_1442cbad2;
        }
        *(int *)(lVar7 + 0xc0) = *(int *)(lVar7 + 0xc0) + 1;
      }
LAB_1442cbad2:
      lVar11 = lVar11 + 0x268;
    } while ((longlong)(int)lVar12 * 0x268 - lVar11 != 0);
  }
  FUN_145be44b4(local_140);
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446ddda2(&local_78,"DepositEquippedItemTitle",0);
  FUN_1410d1eba(&local_160,&local_78);
  FUN_140008f88(local_138,&local_160);
  if (local_160 != (code *)0x0) {
    (**(code **)(*(longlong *)local_160 + 0x10))();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446ddda2(&local_78,"DepositEquippedItemDescription",0);
  FUN_1410d1eba(&local_160,&local_78);
  FUN_140008f88(local_128,&local_160);
  if (local_160 != (code *)0x0) {
    (**(code **)(*(longlong *)local_160 + 0x10))();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446ddda2(&local_78,"DepositEquippedItemConfirm",0);
  FUN_1410d1eba(&local_160,&local_78);
  uVar5 = local_100;
  local_150 = DAT_14cbdd018;
  local_148 = 1;
  lVar12 = (longlong)(int)local_100;
  local_100 = local_100 + 1;
  if (local_fc < local_100) {
    FUN_145da4fc8(&local_108,uVar5);
  }
  lVar4 = local_108;
  lVar12 = lVar12 * 0x20;
  FUN_14023423e(local_108 + lVar12,&local_160);
  *(undefined1 *)(lVar4 + 0x18 + lVar12) = local_148;
  *(undefined8 *)(lVar4 + 0x10 + lVar12) = local_150;
  if (local_160 != (code *)0x0) {
    (**(code **)(*(longlong *)local_160 + 0x10))();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(lVar7 + 0xb8) != 0) {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(&local_78,"DepositEquippedItemOnlyUnequipped",0);
    FUN_1410d1eba(&local_160,&local_78);
    uVar5 = local_100;
    local_150 = DAT_14cbdd010;
    local_148 = 1;
    lVar7 = (longlong)(int)local_100;
    local_100 = local_100 + 1;
    if (local_fc < local_100) {
      FUN_145da4fc8(&local_108,uVar5);
    }
    lVar12 = local_108;
    lVar7 = lVar7 * 0x20;
    FUN_14023423e(local_108 + lVar7,&local_160);
    *(undefined1 *)(lVar12 + 0x18 + lVar7) = local_148;
    *(undefined8 *)(lVar12 + 0x10 + lVar7) = local_150;
    if (local_160 != (code *)0x0) {
      (**(code **)(*(longlong *)local_160 + 0x10))();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446ddda2(&local_78,"DepositEquippedItemCancel",0);
  FUN_1410d1eba(&local_160,&local_78);
  uVar5 = local_100;
  local_150 = DAT_14cbdd008;
  local_148 = 1;
  lVar7 = (longlong)(int)local_100;
  local_100 = local_100 + 1;
  if (local_fc < local_100) {
    FUN_145da4fc8(&local_108,uVar5);
  }
  lVar7 = lVar7 * 0x20;
  FUN_14023423e(local_108 + lVar7,&local_160);
  *(undefined1 *)(local_108 + 0x18 + lVar7) = local_148;
  *(undefined8 *)(local_108 + 0x10 + lVar7) = local_150;
  if (local_160 != (code *)0x0) {
    (**(code **)(*(longlong *)local_160 + 0x10))();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_160 = FUN_1442cbc3a;
  local_158 = 0;
  FUN_148e8718e(&local_78,param_1);
  puVar6 = local_78;
  local_78 = (undefined8 *)0x0;
  iVar2 = (int)uStack_70;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if (local_f0 == 0) {
LAB_1442cba0d:
    if (local_f8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_f8 != (undefined8 *)0x0) {
    (**(code **)*local_f8)(local_f8,0);
    FUN_1446efa72(&local_f8,0,0,0x10);
    local_f0 = 0;
    goto LAB_1442cba0d;
  }
  SRWLock = local_168;
  local_f8 = puVar6;
  local_f0 = iVar2;
  if ((int)uStack_70 == 0) {
LAB_1442cbb55:
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    uStack_70 = uStack_70 & 0xffffffff00000000;
    goto LAB_1442cbb55;
  }
  local_d8 = DAT_14cbdd010;
  local_cc = 1;
  uVar9 = FUN_14001cc68(0x100,0x10);
  FUN_148e875c4(uVar9,param_1 + 6,local_140);
  FUN_140391314(param_1,uVar9);
  FUN_1459ddea2(local_140);
  ReleaseSRWLockExclusive(SRWLock);
LAB_1442cb596:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442cbc3a FUN_1442cbc3a body=893 status=ok
// SIG undefined FUN_1442cbc3a(void)

void FUN_1442cbc3a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  PSRWLOCK SRWLock;
  longlong lVar7;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = (**(code **)(*param_1 + 0x198))();
  if (lVar4 == 0) goto LAB_1442cbc6d;
  *(byte *)(lVar4 + 0xb00) = *(byte *)(lVar4 + 0xb00) & 0xdf;
  lVar4 = *param_2;
  if (lVar4 == DAT_14cbdd010) {
    plVar5 = (longlong *)FUN_148e8625c(param_1);
    lVar4 = *plVar5;
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x1c0));
    ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x1c0));
    iVar1 = *(int *)(lVar4 + 0xb8);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0xb0);
      lVar7 = 0;
      do {
        puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        lVar2 = param_1[6];
        *puVar6 = &PTR_FUN_14b9c6b40;
        local_58 = "Deposit";
        local_50 = 7;
        local_4c = 0;
        uVar3 = FUN_14001a6c0(&local_58,1);
        FUN_14039176c(puVar6,lVar2,uVar3,1);
        *puVar6 = &PTR_FUN_14b9c6b40;
        *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(lVar4 + lVar7);
        FUN_140391314(param_1,puVar6);
        lVar7 = lVar7 + 4;
      } while ((longlong)iVar1 * 4 != lVar7);
    }
    FUN_140de1078(param_1,&DAT_14cbdcc28,0,0);
    plVar5 = (longlong *)FUN_148e8625c(param_1);
    lVar4 = *plVar5;
    SRWLock = (PSRWLOCK)(lVar4 + 0x1c0);
    AcquireSRWLockShared(SRWLock);
    iVar1 = *(int *)(lVar4 + 0xb8);
LAB_1442cbeaa:
    ReleaseSRWLockShared(SRWLock);
    (**(code **)(*param_1 + 0x178))(param_1,param_1 + (ulonglong)(iVar1 < 2) * 2 + 0x60);
  }
  else {
    if (lVar4 == DAT_14cbdd018) {
      plVar5 = (longlong *)FUN_148e8625c(param_1);
      lVar4 = *plVar5;
      AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x1c0));
      ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x1c0));
      iVar1 = *(int *)(lVar4 + 0xa0);
      if ((longlong)iVar1 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x98);
        lVar7 = 0;
        do {
          puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
          lVar2 = param_1[6];
          *puVar6 = &PTR_FUN_14b9c6b40;
          local_58 = "Deposit";
          local_50 = 7;
          local_4c = 0;
          uVar3 = FUN_14001a6c0(&local_58,1);
          FUN_14039176c(puVar6,lVar2,uVar3,1);
          *puVar6 = &PTR_FUN_14b9c6b40;
          *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(lVar4 + lVar7);
          FUN_140391314(param_1,puVar6);
          lVar7 = lVar7 + 4;
        } while ((longlong)iVar1 * 4 != lVar7);
      }
      FUN_140de1078(param_1,&DAT_14cbdcc28,0,0);
      plVar5 = (longlong *)FUN_148e8625c(param_1);
      lVar4 = *plVar5;
      SRWLock = (PSRWLOCK)(lVar4 + 0x1c0);
      AcquireSRWLockShared(SRWLock);
      iVar1 = *(int *)(lVar4 + 0xa0);
      goto LAB_1442cbeaa;
    }
    if (lVar4 == DAT_14cbdd008) {
      FUN_140de1078(param_1,&DAT_14cbdcc38,0,0);
    }
  }
  plVar5 = (longlong *)FUN_148e8625c(param_1);
  lVar4 = *plVar5;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1c0));
  *(int *)(lVar4 + 0x1b8) = *(int *)(lVar4 + 0x1b8) + 1;
  if (*(int *)(lVar4 + 0xbc) < 0) {
    *(undefined4 *)(lVar4 + 0xb8) = 0;
    FUN_148e9a5d8(lVar4 + 0xb0,0);
  }
  else {
    *(undefined4 *)(lVar4 + 0xb8) = 0;
  }
  *(int *)(lVar4 + 0xc0) = *(int *)(lVar4 + 0xc0) + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1c0));
  plVar5 = (longlong *)FUN_148e8625c(param_1);
  lVar4 = *plVar5;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1c0));
  *(int *)(lVar4 + 0x1b8) = *(int *)(lVar4 + 0x1b8) + 1;
  if (*(int *)(lVar4 + 0xa4) < 0) {
    *(undefined4 *)(lVar4 + 0xa0) = 0;
    FUN_148e9a5d8(lVar4 + 0x98,0);
  }
  else {
    *(undefined4 *)(lVar4 + 0xa0) = 0;
  }
  *(int *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa8) + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1c0));
LAB_1442cbc6d:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442cc06e FUN_1442cc06e body=117 status=ok
// SIG undefined FUN_1442cc06e(void)

void FUN_1442cc06e(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  
  cVar2 = FUN_148e829b8();
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x198))(param_1);
  if (plVar5 == (longlong *)0x0) {
    bVar3 = 0;
  }
  else {
    bVar3 = (**(code **)(*plVar5 + 0x100))(plVar5);
  }
  *(byte *)((longlong)param_1 + 0x35a) = *(byte *)((longlong)param_1 + 0x35a) | bVar3;
  cVar4 = FUN_1442c8b50(param_1);
  if (((bVar3 != 0) || (cVar2 != '\0' || cVar4 != '\0')) && (lVar1 = param_1[0x51], lVar1 != 0)) {
    *(byte *)(lVar1 + 0x331) = *(byte *)(lVar1 + 0x331) | 2;
    *(byte *)(lVar1 + 0x330) = *(byte *)(lVar1 + 0x330) | 0x80;
    *(undefined1 *)(lVar1 + 0x398) = 1;
  }
  return;
}



// FUNCTION 1442cc0e4 FUN_1442cc0e4 body=1201 status=ok
// SIG undefined FUN_1442cc0e4(void)

void FUN_1442cc0e4(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong lVar2;
  ushort *puVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined ***pppuVar10;
  undefined1 *puVar11;
  undefined1 auStack_a8 [32];
  char *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined ***local_78;
  undefined **local_68;
  undefined1 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x928) == '\x01') {
      *(undefined1 *)(lVar2 + 0x928) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
    }
    if (*(char *)(lVar2 + 0x1c0) == '\x01') {
      *(undefined1 *)(lVar2 + 0x1c0) = 0;
    }
    else {
      if (*(char *)(lVar2 + 0xc0) != '\x01') {
        plVar7 = (longlong *)FUN_1408cbae2();
        lVar4 = *plVar7;
        SRWLock = (PSRWLOCK)(lVar4 + 0xb0);
        AcquireSRWLockShared(SRWLock);
        if (*(int *)(lVar4 + 0x60) == -1) {
          iVar1 = *(int *)(lVar4 + 0x68);
          ReleaseSRWLockShared(SRWLock);
          if (iVar1 == 0) {
            if (*(int *)(param_1 + 0x2a8) < 1) {
              uVar9 = FUN_14001cc68(0x40,0x10);
              FUN_148e83602(uVar9,*(undefined8 *)(param_1 + 0x30),0);
              FUN_140391314(param_1,uVar9);
              uVar9 = FUN_14001cc68(0x40,0x10);
              FUN_148e83602(uVar9,*(undefined8 *)(param_1 + 0x30),1);
              FUN_140391314(param_1,uVar9);
            }
            puVar8 = (undefined8 *)FUN_14001cc68(0x38,0x10);
            uVar9 = *(undefined8 *)(param_1 + 0x30);
            *puVar8 = &PTR_FUN_14b9c13a0;
            local_88 = "ClearStructureredInteractable";
            local_80 = 0x1d;
            local_7c = local_7c & 0xffffff00;
            uVar6 = FUN_14001a6c0(&local_88,1);
            FUN_14039176c(puVar8,uVar9,uVar6,1);
            *puVar8 = &PTR_FUN_14b9c13a0;
            FUN_140391314(param_1,puVar8);
            FUN_1442c9108(param_1);
            goto LAB_1442cc218;
          }
        }
        else {
          ReleaseSRWLockShared(SRWLock);
        }
        plVar7 = (longlong *)FUN_1408cbae2(param_1);
        lVar4 = *plVar7;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xb0));
        *(int *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa8) + 1;
        FUN_140bad112(lVar4 + 0x38,&DAT_149dfb77a);
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0xb0));
        plVar7 = (longlong *)FUN_1408cbae2(param_1);
        lVar4 = *plVar7;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xb0));
        *(int *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa8) + 1;
        FUN_146234ee6(lVar4);
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0xb0));
        puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        *puVar8 = &PTR_FUN_14b9c7210;
        local_88 = "SetVisible";
        local_80 = 10;
        local_7c = local_7c & 0xffffff00;
        uVar6 = FUN_14001a6c0(&local_88,1);
        FUN_14039176c(puVar8,uVar9,uVar6,1);
        *puVar8 = &PTR_FUN_14b9c7210;
        *(undefined1 *)(puVar8 + 7) = 0;
        *(undefined4 *)((longlong)puVar8 + 0x3c) = 1;
        FUN_140391314(param_1,puVar8);
        puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        *puVar8 = &PTR_FUN_14b9c71b0;
        local_88 = "ClearItem";
        local_80 = 9;
        local_7c = local_7c & 0xffffff00;
        uVar6 = FUN_14001a6c0(&local_88,1);
        FUN_14039176c(puVar8,uVar9,uVar6,1);
        *puVar8 = &PTR_FUN_14b9c71b0;
        *(undefined4 *)(puVar8 + 7) = 1;
        FUN_140391314(param_1,puVar8);
        *(byte *)(param_1 + 0x2d8) = *(byte *)(param_1 + 0x2d8) & 0xfe;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14b9c7360;
        local_60 = &LAB_1442da718;
        local_88 = &LAB_148e9a540;
        FUN_1462350d0(lVar2,&local_88);
        if (local_88 != (char *)0x0) {
          pppuVar10 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar10 = &local_68;
          }
          (*(code *)(*pppuVar10)[2])();
        }
        if (*(longlong *)(param_1 + 0x160) == 0) {
          puVar8 = &DAT_14c9a1308;
        }
        else {
          puVar8 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdd118);
        }
        pbVar5 = (byte *)*puVar8;
        puVar11 = &DAT_149e02088;
        if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 3) == 1)) {
          puVar11 = &DAT_149e02088;
          if (*(undefined1 **)(pbVar5 + 8) != (undefined1 *)0x0) {
            puVar11 = *(undefined1 **)(pbVar5 + 8);
          }
        }
        FUN_1400b22c2(&local_88,puVar11);
        if ((char **)(lVar2 + 0x380) == &local_88) {
          if (local_88 != (char *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(lVar2 + 0x380) != 0) {
            FUN_1400020a8();
          }
          *(char **)(lVar2 + 0x380) = local_88;
          local_88 = (char *)0x0;
          *(undefined4 *)(lVar2 + 0x388) = local_80;
          *(uint *)(lVar2 + 0x38c) = local_7c;
        }
        FUN_1400b22c2(&local_88,&DAT_149e377fe);
        FUN_148e6a174(lVar2 + 0xb0,&local_88);
        if (local_88 != (char *)0x0) {
          FUN_1400020a8();
        }
        *(byte *)(lVar2 + 0x8f8) = *(byte *)(lVar2 + 0x8f8) & 0x7f;
        FUN_1457fcfbf(*(undefined8 *)(lVar2 + 0xad8),*(undefined4 *)(lVar2 + 0xae0));
        *(undefined4 *)(lVar2 + 0xae0) = 0;
        if (*(int *)(lVar2 + 0xae4) != 0) {
          FUN_148e9a6b4(lVar2 + 0xad8,0);
        }
        *(byte *)(lVar2 + 0x331) = *(byte *)(lVar2 + 0x331) | 2;
        goto LAB_1442cc218;
      }
      *(undefined1 *)(lVar2 + 0xc0) = 0;
    }
    puVar3 = *(ushort **)(lVar2 + 0x80);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
    }
  }
LAB_1442cc218:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442cc774 FUN_1442cc774 body=931 status=ok
// SIG undefined FUN_1442cc774(void)

void FUN_1442cc774(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  void *_Src;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  byte bVar11;
  longlong *plVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_146245af8();
  FUN_14625bc32(param_1);
  lVar5 = *(longlong *)(param_1 + 0x288);
  if (lVar5 == 0) goto LAB_1442cc7b0;
  *(undefined1 *)(lVar5 + 0x433) = 0;
  puVar1 = (uint *)(param_1 + 0x30);
  cVar6 = FUN_14664eae2(puVar1,0);
  if (cVar6 != '\0') goto LAB_1442cc7b0;
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442cca5b:
    uVar9 = 0;
  }
  else {
    uVar2 = *puVar1;
    uVar9 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar10 == (undefined8 *)0x0) ||
         ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_1442cca5b;
      uVar9 = *puVar10;
    }
  }
  lVar7 = FUN_1407f492e(uVar9);
  if ((lVar7 != 0) && (lVar8 = *(longlong *)(lVar7 + 0x398), lVar8 != 0)) {
    if (DAT_14cbae3d8 == 0) {
      local_60 = &local_48;
      local_48 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1464f5fc4;
      local_68 = &LAB_148c3dd26;
      local_70 = &LAB_1459673ba;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar8 = *(longlong *)(lVar7 + 0x398);
      if (lVar8 == 0) goto LAB_1442cc8ae;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar7 = *(longlong *)(lVar8 + 0x10), lVar7 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
        DAT_14cbae3d8 + 0x30)) {
      *(byte *)(lVar5 + 0x432) =
           (*(byte *)(lVar8 + 0x74c) & 2) == 0 & (*(byte *)(lVar8 + 0x74c) ^ 1);
    }
  }
LAB_1442cc8ae:
  uVar9 = FUN_14001cc68(0x28,0x10);
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442cca62:
    lVar7 = 0;
  }
  else {
    uVar2 = *puVar1;
    lVar7 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar12 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar12 == (longlong *)0x0) ||
         (((int)plVar12[2] != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_1442cca62;
      lVar7 = *plVar12;
    }
  }
  local_48 = (code *)CONCAT44(local_48._4_4_,2);
  local_98 = CONCAT31(local_98._1_3_,*(undefined1 *)(lVar5 + 0x432));
  FUN_146173fb4(uVar9,&local_48,param_1,lVar7 + 0x3c0);
  FUN_140391314(param_1,uVar9);
  if (*(char *)(lVar5 + 0x432) == '\x01') {
    FUN_143eb4db6(param_1,param_1 + 0x2e8,*(undefined4 *)(param_1 + 0x318));
  }
  if (((*(char *)(lVar5 + 0x434) != '\x01') || (*(char *)(lVar5 + 0x432) == '\0')) &&
     (iVar3 = *(int *)(param_1 + 0x300), (longlong)iVar3 != 0)) {
    uVar4 = *(undefined4 *)(param_1 + 0x31c);
    lVar5 = *(longlong *)(param_1 + 0x2f8);
    lVar7 = 0;
    do {
      uVar9 = *(undefined8 *)(lVar5 + lVar7);
      cVar6 = FUN_1442d1e74(param_1,uVar9);
      if (cVar6 == '\0') {
        FUN_14143058a(param_1,uVar9,uVar4);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar3 * 8 != lVar7);
  }
  bVar11 = *(byte *)(param_1 + 0x2cb) ^ 1;
  *(byte *)(param_1 + 0x2cc) = bVar11;
  puVar10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  _Src = *(void **)(param_1 + 0x2d0);
  iVar3 = *(int *)(param_1 + 0x2d8);
  *puVar10 = &PTR_FUN_14b9c4798;
  *(byte *)(puVar10 + 1) = bVar11;
  puVar10[2] = 0;
  *(int *)(puVar10 + 3) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x1c) = 0;
  }
  else {
    FUN_1401b309e(puVar10 + 2,iVar3,0);
    memcpy((void *)puVar10[2],_Src,(longlong)iVar3 << 3);
  }
  FUN_148a0105a(param_1,puVar10);
LAB_1442cc7b0:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442ccb18 FUN_1442ccb18 body=972 status=ok
// SIG undefined FUN_1442ccb18(void)

void FUN_1442ccb18(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  wchar_t *_Str;
  size_t sVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  undefined1 local_1f9;
  undefined8 local_1f8;
  undefined1 *local_1f0;
  undefined4 *local_1e8;
  char local_1e0;
  undefined1 local_1d8 [256];
  undefined4 local_d8 [32];
  undefined4 *local_58;
  undefined4 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_228;
  *(undefined1 *)(param_1 + 0x3c0) = 0;
  uVar1 = FUN_14001cc68(0x28,0x10);
  local_1f8 = (undefined1 *)((ulonglong)local_1f8._4_4_ << 0x20);
  local_1f0 = (undefined1 *)0x0;
  local_d8[0] = 0;
  local_208 = 1;
  FUN_146173fb4(uVar1,local_d8,param_1);
  FUN_140391314(param_1,uVar1);
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = &PTR_FUN_14b9c4798;
  *(undefined1 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  FUN_148a0105a(param_1,puVar2);
  if (*(longlong *)(param_1 + 0x288) == 0) goto LAB_1442ccbcc;
  FUN_1442ccee6();
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442ccea0:
    uVar1 = 0;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x30);
    uVar1 = 0;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      puVar2 = (undefined8 *)
               ((ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if ((puVar2 == (undefined8 *)0x0) ||
         ((*(int *)(puVar2 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar2 + 1) & 0x10200000) != 0)))) goto LAB_1442ccea0;
      uVar1 = *puVar2;
    }
  }
  local_1f9 = 0;
  local_1f8 = local_1d8;
  local_1e0 = '\0';
  local_1e8 = local_d8;
  local_1f0 = local_1f8;
  _Str = (wchar_t *)FUN_140c7f682(param_1,L"OnToggleExploreMode",&local_1f8);
  local_58 = (undefined4 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_50 = (undefined4 *)0x0;
    local_48 = 0;
  }
  else {
    sVar3 = wcslen(_Str);
    local_48 = FUN_14475aa65(0,_Str,sVar3 & 0xffffffff);
    uVar5 = local_48 + 1;
    puVar6 = (undefined4 *)0x0;
    if (0x80 < uVar5) {
      FUN_1446efa72(&local_58,0,uVar5,1);
      puVar6 = local_58;
    }
    local_50 = local_d8;
    if (puVar6 != (undefined4 *)0x0) {
      local_50 = puVar6;
    }
    FUN_14475a98a(local_50,uVar5,_Str,(int)sVar3 + 1);
  }
  FUN_140755a72(uVar1,local_50,&local_1f9);
  if (local_58 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_1e0 == '\x01') {
    FUN_1400020a8(local_1f8);
  }
  *(undefined2 *)(param_1 + 0x2c8) = 0;
  *(undefined1 *)(param_1 + 0x2ca) = 0;
  FUN_143eb4eb0(param_1,param_1 + 0x308);
  FUN_143eb4eb0(param_1,param_1 + 0x2e8);
  FUN_143eb4eb0(param_1,param_1 + 0x2f8);
  uVar1 = 0;
  FUN_14664eaf2(param_1,0);
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar5 = *(uint *)(param_1 + 0x30);
    uVar1 = 0;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      puVar2 = (undefined8 *)
               ((ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if ((puVar2 == (undefined8 *)0x0) ||
         ((*(int *)(puVar2 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar2 + 1) & 0x10200000) != 0)))) {
        uVar1 = 0;
      }
      else {
        uVar1 = *puVar2;
      }
    }
  }
  uVar1 = FUN_140391a3c(uVar1);
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = &PTR_FUN_14b9c47a8;
  *(undefined1 *)(puVar2 + 1) = 0;
  FUN_14039144e(uVar1,puVar2);
  if (*(char *)(param_1 + 0x2cc) == '\x01') {
    *(undefined1 *)(param_1 + 0x2cc) = 0;
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442ccea7:
      uVar1 = 0;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x30);
      uVar1 = 0;
      if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
        puVar2 = (undefined8 *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
        if ((puVar2 == (undefined8 *)0x0) ||
           ((*(int *)(puVar2 + 2) != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(puVar2 + 1) & 0x10200000) != 0)))) goto LAB_1442ccea7;
        uVar1 = *puVar2;
      }
    }
    lVar4 = FUN_1407f492e(uVar1);
    if (lVar4 != 0) {
      uVar1 = FUN_145a89a40();
      lVar4 = FUN_144718840(lVar4,uVar1);
      if (lVar4 != 0) {
        FUN_1410ef130(lVar4);
      }
    }
  }
  FUN_14664eb9e(param_1);
  FUN_145eea794(param_1);
LAB_1442ccbcc:
  if ((local_40 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ccee6 FUN_1442ccee6 body=1920 status=ok
// SIG undefined FUN_1442ccee6(void)

void FUN_1442ccee6(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  
  FUN_14579b5c4(param_1 + 0xb0);
  FUN_14626769c(param_1 + 0x118);
  FUN_140c12dec(param_1 + 0x348,&DAT_149e02088);
  iVar5 = *(int *)(param_1 + 0x364);
  if ((*(char *)(param_1 + 0x360) != '\0') || (bVar6 = iVar5 == 0, iVar5 = 0, bVar6)) {
    *(undefined1 *)(param_1 + 0x360) = 0;
    *(int *)(param_1 + 0x364) = iVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x368) = 0;
  if (*(int *)(param_1 + 0x37c) < 0) {
    *(undefined4 *)(param_1 + 0x378) = 0;
    FUN_14481578e(param_1 + 0x370,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x378) = 0;
  }
  *(int *)(param_1 + 0x380) = *(int *)(param_1 + 0x380) + 1;
  iVar5 = *(int *)(param_1 + 0x394);
  FUN_148c6ee1a(*(undefined8 *)(param_1 + 0x388),*(undefined4 *)(param_1 + 0x390));
  *(undefined4 *)(param_1 + 0x390) = 0;
  if ((iVar5 < 0) && (*(int *)(param_1 + 0x394) != 0)) {
    FUN_148e9b588(param_1 + 0x388);
  }
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x3d8);
  if (*(int *)(param_1 + 1000) == 0) {
LAB_1442cd01a:
    plVar3 = DAT_14c844840;
    plVar2 = (longlong *)*plVar1;
    if (plVar2 != DAT_14c844840) {
      *plVar1 = (longlong)DAT_14c844840;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(param_1 + 0x3e0) = DAT_14c844848;
    *(int *)(param_1 + 1000) = *(int *)(param_1 + 1000) + 1;
  }
  else {
    cVar4 = FUN_144722c14(plVar1,&DAT_14c844840,0);
    if (cVar4 == '\0') goto LAB_1442cd01a;
  }
  *(undefined2 *)(param_1 + 0x3f0) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar2 = DAT_14c844840;
  plVar1 = *(longlong **)(param_1 + 0x3f8);
  if (plVar1 != DAT_14c844840) {
    *(longlong **)(param_1 + 0x3f8) = DAT_14c844840;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x400) = DAT_14c844848;
  *(undefined2 *)(param_1 + 0x408) = 0x100;
  iVar5 = *(int *)(param_1 + 0x410);
  if ((*(char *)(param_1 + 0x40c) == '\0') || (bVar6 = iVar5 == 0, iVar5 = 0, bVar6)) {
    *(undefined1 *)(param_1 + 0x40c) = 1;
    *(int *)(param_1 + 0x410) = iVar5 + 1;
  }
  FUN_140bad112(param_1 + 0x418,&DAT_149dfb77a);
  *(undefined2 *)(param_1 + 0x430) = 0x100;
  *(undefined1 *)(param_1 + 0x432) = 1;
  *(undefined1 *)(param_1 + 0x434) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar2 = DAT_14c844840;
  plVar1 = *(longlong **)(param_1 + 0x438);
  if (plVar1 != DAT_14c844840) {
    *(longlong **)(param_1 + 0x438) = DAT_14c844840;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x440) = DAT_14c844848;
  iVar5 = *(int *)(param_1 + 0x454);
  FUN_14580f9d0(*(undefined8 *)(param_1 + 0x448),*(undefined4 *)(param_1 + 0x450));
  *(undefined4 *)(param_1 + 0x450) = 0;
  if ((iVar5 < 0) && (*(int *)(param_1 + 0x454) != 0)) {
    FUN_148e2a9ac(param_1 + 0x448,0);
  }
  *(undefined4 *)(param_1 + 0x458) = 0;
  iVar5 = *(int *)(param_1 + 0x46c);
  FUN_14580f9d0(*(undefined8 *)(param_1 + 0x460),*(undefined4 *)(param_1 + 0x468));
  *(undefined4 *)(param_1 + 0x468) = 0;
  if ((iVar5 < 0) && (*(int *)(param_1 + 0x46c) != 0)) {
    FUN_148e2a9ac(param_1 + 0x460,0);
  }
  *(undefined4 *)(param_1 + 0x470) = 0;
  iVar5 = *(int *)(param_1 + 0x484);
  FUN_14580f9d0(*(undefined8 *)(param_1 + 0x478),*(undefined4 *)(param_1 + 0x480));
  *(undefined4 *)(param_1 + 0x480) = 0;
  if ((iVar5 < 0) && (*(int *)(param_1 + 0x484) != 0)) {
    FUN_148e2a9ac(param_1 + 0x478,0);
  }
  *(undefined4 *)(param_1 + 0x488) = 0;
  iVar5 = *(int *)(param_1 + 0x49c);
  FUN_148c6edef(*(undefined8 *)(param_1 + 0x490),*(undefined4 *)(param_1 + 0x498));
  *(undefined4 *)(param_1 + 0x498) = 0;
  if ((iVar5 < 0) && (*(int *)(param_1 + 0x49c) != 0)) {
    FUN_148e9b5b8(param_1 + 0x490);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar2 = DAT_14c844840;
  plVar1 = *(longlong **)(param_1 + 0x4a0);
  if (plVar1 != DAT_14c844840) {
    *(longlong **)(param_1 + 0x4a0) = DAT_14c844840;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x4a8) = DAT_14c844848;
  *(undefined8 *)(param_1 + 0x4b0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x48c) = 0;
  iVar5 = *(int *)(param_1 + 0x4c4);
  FUN_14580f9f9(*(undefined8 *)(param_1 + 0x4b8),*(undefined4 *)(param_1 + 0x4c0));
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  if ((iVar5 < 0) && (*(int *)(param_1 + 0x4c4) != 0)) {
    FUN_148e2bd30(param_1 + 0x4b8,0);
  }
  *(undefined1 *)(param_1 + 0x4c8) = 0;
  if (*(char *)(param_1 + 0x4cc) == '\0') {
    if (*(int *)(param_1 + 0x4d0) != 0) goto LAB_1442cd353;
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x4d0) + 1;
  }
  *(undefined1 *)(param_1 + 0x4cc) = 0;
  *(int *)(param_1 + 0x4d0) = iVar5;
LAB_1442cd353:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar2 = DAT_14c844840;
  plVar1 = *(longlong **)(param_1 + 0x4d8);
  if (plVar1 != DAT_14c844840) {
    *(longlong **)(param_1 + 0x4d8) = DAT_14c844840;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x4e0) = DAT_14c844848;
  return;
}



// FUNCTION 1442cd666 FUN_1442cd666 body=353 status=ok
// SIG undefined FUN_1442cd666(void)

void FUN_1442cd666(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x288);
  if ((lVar5 == 0) || (*(char *)(lVar5 + 0x408) != '\0')) {
    return;
  }
  if ((*(int *)(lVar5 + 0x3cc) != 4) && (*(int *)(lVar5 + 0x3cc) != 2)) {
    uVar2 = FUN_14001cc68(0x30,0x10);
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442cd7c2:
      lVar5 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x30);
      lVar5 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar3 == (longlong *)0x0) ||
           (((int)plVar3[2] != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)))) goto LAB_1442cd7c2;
        lVar5 = *plVar3;
      }
    }
    FUN_148e8ff9e(uVar2,param_1,lVar5 + 0x3c0);
    puVar4 = &DAT_14cbdd3c8;
    goto LAB_1442cd797;
  }
  uVar2 = FUN_14001cc68(0x28,0x10);
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442cd7ba:
    lVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x30);
    lVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         (((int)plVar3[2] != *(int *)(param_1 + 0x34) || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)
          ))) goto LAB_1442cd7ba;
      lVar5 = *plVar3;
    }
  }
  FUN_148e8ff1a(uVar2,param_1,lVar5 + 0x3c0);
  puVar4 = &DAT_14cbdd3d8;
LAB_1442cd797:
  FUN_140391314(param_1,uVar2);
  FUN_140de1078(param_1,puVar4,0,0);
  return;
}



// FUNCTION 1442cd7c8 FUN_1442cd7c8 body=877 status=ok
// SIG undefined FUN_1442cd7c8(void)

void FUN_1442cd7c8(longlong *param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = param_1[0x51];
  if ((((lVar8 != 0) && (*(char *)(lVar8 + 0x408) != '\0')) ||
      ((*(char *)(param_2 + 0x13) != '\x10' && (*(char *)(param_2 + 0x13) != '\x01')))) ||
     (lVar8 == 0)) goto LAB_1442cd8fb;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
LAB_1442cd8b6:
    uVar10 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 6);
    uVar10 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)((longlong)param_1 + 0x34) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_1442cd8b6;
      uVar10 = *puVar11;
    }
  }
  lVar5 = FUN_140391a3c(uVar10);
  if ((lVar5 == 0) || (plVar3 = *(longlong **)(lVar8 + 0x338), plVar3 == (longlong *)0x0))
  goto LAB_1442cd8fb;
  if (*(char *)(lVar8 + 0x208) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  lVar6 = (**(code **)(*plVar3 + 8))(plVar3);
  lVar7 = FUN_1465d5aa6();
  if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
      lVar7 + 0x30)) {
    (**(code **)(*param_1 + 0x108))(param_1,param_1 + 0x2e,1);
    *(byte *)(param_1 + 0x53) = *(byte *)(param_1 + 0x53) | 0x40;
    puVar11 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar11 = &PTR_FUN_14b9c4838;
    puVar11[1] = plVar3[5];
    *(int *)(puVar11 + 2) = (int)plVar3[6];
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  plVar3 = *(longlong **)(lVar8 + 0x338);
  if (plVar3 == (longlong *)0x0) goto LAB_1442cd8fb;
  lVar6 = (**(code **)(*plVar3 + 8))(plVar3);
  lVar7 = FUN_1465d5bd2();
  if (((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
      lVar7 + 0x30)) {
    plVar3 = *(longlong **)(lVar8 + 0x338);
    if (plVar3 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar3 + 8))(plVar3);
      lVar7 = FUN_1465d597a();
      if ((((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
           lVar7 + 0x30)) && (*(int *)(lVar8 + 0x1c8) == (int)param_1[0x7c])) {
        puVar11 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        lVar8 = plVar3[5];
        *puVar11 = &PTR_FUN_14b9c4818;
        puVar11[1] = lVar8;
        FUN_14039144e(lVar5,puVar11);
        (**(code **)(*param_1 + 0x108))(param_1,param_1 + 0x2e,1);
        *(byte *)(param_1 + 0x53) = *(byte *)(param_1 + 0x53) | 0x40;
      }
    }
    goto LAB_1442cd8fb;
  }
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
LAB_1442cdb61:
    uVar10 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 6);
    uVar10 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)((longlong)param_1 + 0x34) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_1442cdb61;
      uVar10 = *puVar11;
    }
  }
  lVar8 = FUN_14101baae(uVar10);
  if (lVar8 != 0) {
    lVar5 = FUN_14030d4a0();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      plVar9 = (longlong *)FUN_1408e4caa(plVar3 + 5);
      cVar4 = (**(code **)(*plVar9 + 0x28))(plVar9);
      if (cVar4 != '\0') {
        FUN_1408e4d18(plVar3 + 5,&local_40);
        FUN_148dacf9a(lVar8,local_40);
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_38 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar1 = (int *)((longlong)local_38 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_38 + 0x10))(local_38);
            }
          }
        }
      }
    }
  }
LAB_1442cd8fb:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442cdb68 FUN_1442cdb68 body=346 status=ok
// SIG undefined FUN_1442cdb68(void)

void FUN_1442cdb68(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  lVar4 = *(longlong *)(param_1 + 0x288);
  if ((((lVar4 == 0) || (*(char *)(param_1 + 0x3c0) != '\x01')) ||
      (*(char *)(lVar4 + 0x434) != '\0')) || (*(char *)(param_1 + 0x2c8) != '\0')) {
    return;
  }
  FUN_143eb4eb0(param_1,param_1 + 0x2f8);
  iVar1 = *(int *)(param_1 + 0x2f0);
  if ((longlong)iVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x318);
    lVar5 = *(longlong *)(param_1 + 0x2e8);
    lVar10 = 0;
    do {
      uVar8 = *(undefined8 *)(lVar5 + lVar10);
      cVar6 = FUN_1442d1e74(param_1,uVar8);
      if (cVar6 == '\0') {
        FUN_14143058a(param_1,uVar8,uVar2);
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar1 * 8 != lVar10);
  }
  *(undefined1 *)(lVar4 + 0x433) = 1;
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar3 = *(uint *)(param_1 + 0x30);
    uVar8 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_1442cdc5b;
    puVar9 = (undefined8 *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((puVar9 != (undefined8 *)0x0) &&
       ((*(int *)(puVar9 + 2) == *(int *)(param_1 + 0x34) &&
        ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)))) {
      uVar8 = *puVar9;
      goto LAB_1442cdc5b;
    }
  }
  uVar8 = 0;
LAB_1442cdc5b:
  uVar7 = FUN_140391a3c(uVar8);
  puVar9 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x338);
  *puVar9 = &PTR_FUN_14b9c47c8;
  puVar9[1] = uVar8;
  puVar9[2] = 0;
  FUN_14039144e(uVar7,puVar9);
  FUN_140de1078(param_1,&DAT_14cbdd458,0,0);
  return;
}



// FUNCTION 1442cdcc2 FUN_1442cdcc2 body=186 status=ok
// SIG undefined FUN_1442cdcc2(void)

void FUN_1442cdcc2(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x2c8) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar2 = *(uint *)(param_1 + 0x30);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442cdd2d;
    puVar6 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar6 != (undefined8 *)0x0) &&
       ((*(int *)(puVar6 + 2) == *(int *)(param_1 + 0x34) &&
        ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
      uVar5 = *puVar6;
      goto LAB_1442cdd2d;
    }
  }
  uVar5 = 0;
LAB_1442cdd2d:
  lVar4 = FUN_140391a3c(uVar5);
  if (lVar4 == 0) {
    return;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  bVar1 = *(byte *)(lVar3 + 0x4cc);
  *puVar6 = &PTR_FUN_14b9c4848;
  *(byte *)(puVar6 + 1) = bVar1 ^ 1;
  FUN_14039144e(lVar4,puVar6);
  return;
}



// FUNCTION 1442cdd7c FUN_1442cdd7c body=2073 status=ok
// SIG undefined FUN_1442cdd7c(void)

void FUN_1442cdd7c(longlong param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ushort *puVar6;
  code *pcVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  wchar_t *_Str;
  size_t sVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  uint uVar17;
  PSRWLOCK pRVar18;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  undefined4 local_260;
  undefined4 local_258;
  undefined8 local_250;
  wchar_t *local_248;
  undefined1 *local_240;
  undefined1 *local_238;
  code **local_230;
  undefined1 *local_228;
  code *local_220;
  PSRWLOCK local_210;
  undefined1 local_201;
  code *local_200;
  code *local_1f8;
  undefined1 *local_1f0;
  char local_1e8;
  undefined1 local_1e0 [256];
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  puVar1 = (uint *)(param_1 + 0x30);
  cVar8 = FUN_14664eae2(puVar1,0);
  if ((cVar8 != '\0') || (lVar5 = *(longlong *)(param_1 + 0x288), lVar5 == 0)) goto LAB_1442ce1c2;
  if (*(char *)(lVar5 + 0x408) == '\x01') {
    *(undefined1 *)(lVar5 + 0x408) = 0;
    puVar6 = *(ushort **)(lVar5 + 0x80);
    if (puVar6 != (ushort *)0x0) {
      *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
    }
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442ce481:
      uVar16 = 0;
    }
    else {
      uVar17 = *puVar1;
      uVar16 = 0;
      if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
        puVar15 = (undefined8 *)
                  ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
        if ((puVar15 == (undefined8 *)0x0) ||
           ((*(int *)(puVar15 + 2) != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) goto LAB_1442ce481;
        uVar16 = *puVar15;
      }
    }
    lVar9 = FUN_140391a3c(uVar16);
    if (lVar9 != 0) {
      puVar15 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      uVar3 = *(undefined1 *)(lVar5 + 0x408);
      *puVar15 = &PTR_FUN_14b9c47a8;
      *(undefined1 *)(puVar15 + 1) = uVar3;
      FUN_14039144e(lVar9,puVar15);
      FUN_14664eaf2(param_1,0);
      if ((*(char *)(lVar5 + 0x434) == '\0') &&
         (iVar14 = *(int *)(param_1 + 0x300), (longlong)iVar14 != 0)) {
        uVar4 = *(undefined4 *)(param_1 + 0x31c);
        lVar5 = *(longlong *)(param_1 + 0x2f8);
        lVar9 = 0;
        do {
          uVar16 = *(undefined8 *)(lVar5 + lVar9);
          cVar8 = FUN_1442d1e74(param_1,uVar16);
          if (cVar8 == '\0') {
            FUN_14143058a(param_1,uVar16,uVar4);
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)iVar14 * 8 != lVar9);
      }
    }
    goto LAB_1442ce1c2;
  }
  if (*(char *)(param_1 + 0x2c8) != '\x01') {
    FUN_1448d5e3c(&local_200,param_1 + 0x208);
    lVar9 = *(longlong *)(local_200 + 0x410);
    pRVar18 = (PSRWLOCK)(lVar9 + 0x1b0);
    AcquireSRWLockShared(pRVar18);
    pcVar7 = local_1f8;
    if (local_1f8 != (code *)0x0) {
      LOCK();
      pcVar2 = local_1f8 + 8;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 == 0) {
        (*(code *)**(undefined8 **)local_1f8)(local_1f8);
        LOCK();
        pcVar2 = pcVar7 + 0xc;
        *(int *)pcVar2 = *(int *)pcVar2 + -1;
        UNLOCK();
        if (*(int *)pcVar2 == 0) {
          (**(code **)(*(longlong *)pcVar7 + 0x10))(pcVar7);
        }
      }
    }
    if (*(int *)(lVar9 + 0x128) < 2) {
      if ((*(char *)(lVar5 + 0x432) != '\0') || (*(char *)(lVar5 + 0x433) != '\x01')) {
        ReleaseSRWLockShared(pRVar18);
        FUN_143eb4eb0(param_1,param_1 + 0x2e8);
        FUN_143eb4eb0(param_1,param_1 + 0x2f8);
        FUN_1458343da(param_1);
        goto LAB_1442ce1c2;
      }
      *(undefined1 *)(lVar5 + 0x433) = 0;
      FUN_143eb4eb0(param_1,param_1 + 0x2e8);
      FUN_143eb4db6(param_1,param_1 + 0x2f8,*(undefined4 *)(param_1 + 0x31c));
      puVar6 = *(ushort **)(lVar5 + 0x80);
      if (puVar6 != (ushort *)0x0) {
        *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
      }
    }
    else {
      FUN_1442ccee6(lVar5);
      if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442ce488:
        uVar16 = 0;
      }
      else {
        uVar17 = *puVar1;
        uVar16 = 0;
        if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
          puVar15 = (undefined8 *)
                    ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
          if ((puVar15 == (undefined8 *)0x0) ||
             ((*(int *)(puVar15 + 2) != *(int *)(param_1 + 0x34) ||
              ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) goto LAB_1442ce488;
          uVar16 = *puVar15;
        }
      }
      local_210 = pRVar18;
      lVar10 = FUN_1407f492e(uVar16);
      if ((lVar10 != 0) && (lVar11 = *(longlong *)(lVar10 + 0x398), lVar11 != 0)) {
        if (DAT_14cbae3d8 == 0) {
          local_200 = FUN_141030f22;
          local_220 = FUN_14081d0ea;
          local_228 = &LAB_1464f5fc4;
          local_238 = &LAB_148c3dd26;
          local_240 = &LAB_1459673ba;
          local_248 = L"Engine";
          local_250 = 0;
          local_258 = 0x10000004;
          local_260 = 0x10;
          local_268 = 0x1360;
          local_230 = &local_200;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
          lVar11 = *(longlong *)(lVar10 + 0x398);
          if (lVar11 == 0) goto LAB_1442ce032;
        }
        if ((((DAT_14cbae3d8 != 0) && (lVar10 = *(longlong *)(lVar11 + 0x10), lVar10 != 0)) &&
            (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
           (*(longlong *)
             (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
            DAT_14cbae3d8 + 0x30)) {
          *(byte *)(lVar5 + 0x432) =
               (*(byte *)(lVar11 + 0x74c) & 2) == 0 & (*(byte *)(lVar11 + 0x74c) ^ 1);
        }
      }
LAB_1442ce032:
      if (((*(char *)(lVar5 + 0x432) == '\0') && (*(char *)(lVar5 + 0x433) == '\x01')) &&
         (*(int *)(lVar9 + 0x128) == 2)) {
        *(undefined1 *)(lVar5 + 0x433) = 0;
        FUN_143eb4eb0(param_1,param_1 + 0x2e8);
        iVar14 = *(int *)(param_1 + 0x300);
        if ((longlong)iVar14 != 0) {
          uVar4 = *(undefined4 *)(param_1 + 0x31c);
          lVar5 = *(longlong *)(param_1 + 0x2f8);
          lVar10 = 0;
          do {
            uVar16 = *(undefined8 *)(lVar5 + lVar10);
            cVar8 = FUN_1442d1e74(param_1,uVar16);
            if (cVar8 == '\0') {
              FUN_14143058a(param_1,uVar16,uVar4);
            }
            lVar10 = lVar10 + 8;
          } while ((longlong)iVar14 * 8 != lVar10);
        }
      }
      pRVar18 = local_210;
      if (*(int *)(param_1 + 0x34) == 0) {
        uVar16 = 0;
      }
      else {
        uVar17 = *puVar1;
        uVar16 = 0;
        if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
          puVar15 = (undefined8 *)
                    ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
          if ((puVar15 == (undefined8 *)0x0) ||
             ((*(int *)(puVar15 + 2) != *(int *)(param_1 + 0x34) ||
              ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) {
            uVar16 = 0;
          }
          else {
            uVar16 = *puVar15;
          }
        }
      }
      uVar12 = FUN_140391a3c(uVar16);
      puVar15 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar16 = *(undefined8 *)
                (*(longlong *)(lVar9 + 0x120) + (longlong)(*(int *)(lVar9 + 0x128) + -2) * 8);
      *puVar15 = &PTR_FUN_14b9c47c8;
      puVar15[1] = uVar16;
      puVar15[2] = 0;
      FUN_14039144e(uVar12,puVar15);
    }
    ReleaseSRWLockShared(pRVar18);
    goto LAB_1442ce1c2;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442ce49b:
    pRVar18 = (PSRWLOCK)0x0;
  }
  else {
    uVar17 = *puVar1;
    pRVar18 = (PSRWLOCK)0x0;
    if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
      puVar15 = (undefined8 *)
                ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
      if ((puVar15 == (undefined8 *)0x0) ||
         ((*(int *)(puVar15 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) goto LAB_1442ce49b;
      pRVar18 = (PSRWLOCK)*puVar15;
    }
  }
  local_201 = 0;
  local_200 = (code *)local_1e0;
  local_1e8 = '\0';
  local_1f0 = local_e0;
  local_1f8 = local_200;
  _Str = (wchar_t *)FUN_140c7f682(param_1,L"OnToggleExploreMode",&local_200);
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
  }
  else {
    local_210 = pRVar18;
    sVar13 = wcslen(_Str);
    local_50 = FUN_14475aa65(0,_Str,sVar13 & 0xffffffff);
    uVar17 = local_50 + 1;
    local_58 = (undefined1 *)0x0;
    if (0x80 < uVar17) {
      FUN_1446efa72(&local_60,0,uVar17,1);
      local_58 = local_60;
    }
    if (local_58 == (undefined1 *)0x0) {
      local_58 = local_e0;
    }
    FUN_14475a98a(local_58,uVar17,_Str,(int)sVar13 + 1);
    pRVar18 = local_210;
  }
  FUN_140755a72(pRVar18,local_58,&local_201);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_1e8 == '\x01') {
    FUN_1400020a8(local_200);
  }
  *(undefined4 *)(lVar5 + 0x368) = 0xffffffff;
  FUN_143eb4eb0(param_1,param_1 + 0x308);
  *(undefined1 *)(param_1 + 0x2c8) = 0;
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442ce4a3:
    uVar16 = 0;
  }
  else {
    uVar17 = *puVar1;
    uVar16 = 0;
    if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
      puVar15 = (undefined8 *)
                ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
      if ((puVar15 == (undefined8 *)0x0) ||
         ((*(int *)(puVar15 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) goto LAB_1442ce4a3;
      uVar16 = *puVar15;
    }
  }
  uVar16 = FUN_140391a3c(uVar16);
  puVar15 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar15 = &PTR_FUN_14b9c47b8;
  puVar15[1] = 0;
  FUN_14039144e(uVar16,puVar15);
  if (*(char *)(lVar5 + 0x360) == '\0') {
    iVar14 = 1;
    if (*(int *)(lVar5 + 0x364) == 0) goto LAB_1442ce44b;
  }
  else {
    iVar14 = *(int *)(lVar5 + 0x364) + 1;
LAB_1442ce44b:
    *(undefined1 *)(lVar5 + 0x360) = 0;
    *(int *)(lVar5 + 0x364) = iVar14;
  }
  *(undefined1 *)(param_1 + 0x2c9) = 0;
  FUN_1462653da(param_1,0,lVar5,0xffffffff);
  FUN_14664eaf2(param_1,0);
LAB_1442ce1c2:
  if ((local_48 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442ce596 FUN_1442ce596 body=4513 status=ok
// SIG undefined FUN_1442ce596(void)

void FUN_1442ce596(longlong param_1)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined1 local_160;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined8 *local_108;
  undefined8 uStack_100;
  int local_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  int local_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  ulonglong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  void *local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_1407cbc56();
  local_f8 = 0;
  local_108 = (undefined8 *)0x0;
  uStack_100 = 0;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  for (plVar7 = (longlong *)FUN_146602bbc(); plVar7 != (longlong *)0x0;
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2b0))(plVar7)) {
    lVar14 = plVar7[10];
LAB_1442ce612:
    if (lVar14 != 0) {
      if ((~*(uint *)(*(longlong *)(lVar14 + 8) + 0x18) & 0x8001) != 0) goto code_r0x0001442ce627;
LAB_1442ce65d:
      local_88 = *(undefined8 *)(lVar14 + 0x20);
      puVar8 = &DAT_14c9a1308;
      if (*(longlong *)(param_1 + 0x160) != 0) {
        puVar8 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&local_88);
      }
      if (((byte *)*puVar8 != (byte *)0x0) &&
         (bVar1 = *(byte *)*puVar8, (bVar1 & 0x68) == 0 && (bVar1 & 3) != 0)) {
        local_160 = 0;
        local_168 = 0;
        FUN_1446e0fc6(puVar8,&local_108,lVar14,0xffffffff);
      }
      plVar12 = (longlong *)(lVar14 + 0x18);
      do {
        for (lVar14 = *plVar12; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x18)) {
          if ((~*(uint *)(*(longlong *)(lVar14 + 8) + 0x18) & 0x8001) == 0) goto LAB_1442ce65d;
        }
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2b0))(plVar7);
        plVar12 = plVar7 + 10;
      } while (plVar7 != (longlong *)0x0);
      break;
    }
  }
  plVar7 = (longlong *)(param_1 + 0x2e8);
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  if (*(int *)(param_1 + 0x2f4) < 0) {
    FUN_148a06a4e(plVar7,0);
  }
  if ((longlong)(int)uStack_100 != 0) {
    puVar8 = local_108 + (longlong)(int)uStack_100 * 5;
    puVar17 = local_108;
    do {
      local_88 = *puVar17;
      uStack_80 = puVar17[1];
      local_78 = *(undefined4 *)(puVar17 + 2);
      uStack_74 = *(undefined4 *)((longlong)puVar17 + 0x14);
      local_70 = (void *)0x0;
      uVar16 = *(uint *)(puVar17 + 4);
      pvVar2 = (void *)puVar17[3];
      uStack_68 = CONCAT44(uStack_68._4_4_,uVar16);
      if ((longlong)(int)uVar16 == 0) {
        uStack_68 = (ulonglong)uVar16;
      }
      else {
        FUN_1446dd670(&local_70,uVar16,0);
        memcpy(local_70,pvVar2,(longlong)(int)uVar16 * 2);
      }
      lVar14 = FUN_1409f0d56(&local_88);
      if (lVar14 == 0) {
        uVar11 = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = *(uint *)(lVar14 + 0xc);
        uVar11 = (ulonglong)uVar16;
        if ((int)uVar16 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        uVar16 = *(uint *)(lVar14 + 0x10);
        if (*(uint *)(lVar14 + 0x10) == 0) {
          LOCK();
          iVar15 = DAT_14c964868 + 1;
          UNLOCK();
          uVar16 = DAT_14c964868 + 1;
          bVar18 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar15;
          if (bVar18) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar16);
          }
          LOCK();
          uVar6 = *(uint *)(lVar14 + 0x10);
          bVar18 = uVar6 == 0;
          if (bVar18) {
            *(uint *)(lVar14 + 0x10) = uVar16;
            uVar6 = 0;
          }
          UNLOCK();
          if (!bVar18) {
            uVar16 = uVar6;
          }
        }
      }
      iVar15 = *(int *)(param_1 + 0x2f0);
      *(uint *)(param_1 + 0x2f0) = iVar15 + 1U;
      if (*(uint *)(param_1 + 0x2f4) < iVar15 + 1U) {
        FUN_1407cc47e(plVar7,iVar15);
      }
      *(ulonglong *)(*plVar7 + (longlong)iVar15 * 8) = uVar11 | (ulonglong)uVar16 << 0x20;
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar17 = puVar17 + 5;
    } while (puVar17 != puVar8);
  }
  *(int *)(param_1 + 0x318) = local_f8 + *(int *)(param_1 + 0x148);
  plVar7 = (longlong *)(param_1 + 0x2f8);
  *(undefined4 *)(param_1 + 0x300) = 0;
  if (*(int *)(param_1 + 0x304) < 0) {
    FUN_148a06a4e(plVar7,0);
  }
  if ((longlong)(int)uStack_e8 != 0) {
    puVar8 = local_f0 + (longlong)(int)uStack_e8 * 5;
    puVar17 = local_f0;
    do {
      local_88 = *puVar17;
      uStack_80 = puVar17[1];
      local_78 = *(undefined4 *)(puVar17 + 2);
      uStack_74 = *(undefined4 *)((longlong)puVar17 + 0x14);
      local_70 = (void *)0x0;
      uVar16 = *(uint *)(puVar17 + 4);
      pvVar2 = (void *)puVar17[3];
      uStack_68 = CONCAT44(uStack_68._4_4_,uVar16);
      if ((longlong)(int)uVar16 == 0) {
        uStack_68 = (ulonglong)uVar16;
      }
      else {
        FUN_1446dd670(&local_70,uVar16,0);
        memcpy(local_70,pvVar2,(longlong)(int)uVar16 * 2);
      }
      lVar14 = FUN_1409f0d56(&local_88);
      if (lVar14 == 0) {
        uVar11 = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = *(uint *)(lVar14 + 0xc);
        uVar11 = (ulonglong)uVar16;
        if ((int)uVar16 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        uVar16 = *(uint *)(lVar14 + 0x10);
        if (*(uint *)(lVar14 + 0x10) == 0) {
          LOCK();
          iVar15 = DAT_14c964868 + 1;
          UNLOCK();
          uVar16 = DAT_14c964868 + 1;
          bVar18 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar15;
          if (bVar18) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar16);
          }
          LOCK();
          uVar6 = *(uint *)(lVar14 + 0x10);
          bVar18 = uVar6 == 0;
          if (bVar18) {
            *(uint *)(lVar14 + 0x10) = uVar16;
            uVar6 = 0;
          }
          UNLOCK();
          if (!bVar18) {
            uVar16 = uVar6;
          }
        }
      }
      iVar15 = *(int *)(param_1 + 0x300);
      *(uint *)(param_1 + 0x300) = iVar15 + 1U;
      if (*(uint *)(param_1 + 0x304) < iVar15 + 1U) {
        FUN_1407cc47e(plVar7,iVar15);
      }
      *(ulonglong *)(*plVar7 + (longlong)iVar15 * 8) = uVar11 | (ulonglong)uVar16 << 0x20;
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar17 = puVar17 + 5;
    } while (puVar17 != puVar8);
  }
  *(int *)(param_1 + 0x31c) = local_e0 + *(int *)(param_1 + 0x148);
  plVar7 = (longlong *)(param_1 + 0x308);
  *(undefined4 *)(param_1 + 0x310) = 0;
  if (*(int *)(param_1 + 0x314) < 0) {
    FUN_148a06a4e(plVar7,0);
  }
  if ((longlong)(int)uStack_d0 != 0) {
    puVar8 = local_d8 + (longlong)(int)uStack_d0 * 5;
    puVar17 = local_d8;
    do {
      local_88 = *puVar17;
      uStack_80 = puVar17[1];
      local_78 = *(undefined4 *)(puVar17 + 2);
      uStack_74 = *(undefined4 *)((longlong)puVar17 + 0x14);
      local_70 = (void *)0x0;
      uVar16 = *(uint *)(puVar17 + 4);
      pvVar2 = (void *)puVar17[3];
      uStack_68 = CONCAT44(uStack_68._4_4_,uVar16);
      if ((longlong)(int)uVar16 == 0) {
        uStack_68 = (ulonglong)uVar16;
      }
      else {
        FUN_1446dd670(&local_70,uVar16,0);
        memcpy(local_70,pvVar2,(longlong)(int)uVar16 * 2);
      }
      lVar14 = FUN_1409f0d56(&local_88);
      if (lVar14 == 0) {
        uVar11 = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = *(uint *)(lVar14 + 0xc);
        uVar11 = (ulonglong)uVar16;
        if ((int)uVar16 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        uVar16 = *(uint *)(lVar14 + 0x10);
        if (*(uint *)(lVar14 + 0x10) == 0) {
          LOCK();
          iVar15 = DAT_14c964868 + 1;
          UNLOCK();
          uVar16 = DAT_14c964868 + 1;
          bVar18 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar15;
          if (bVar18) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar16);
          }
          LOCK();
          uVar6 = *(uint *)(lVar14 + 0x10);
          bVar18 = uVar6 == 0;
          if (bVar18) {
            *(uint *)(lVar14 + 0x10) = uVar16;
            uVar6 = 0;
          }
          UNLOCK();
          if (!bVar18) {
            uVar16 = uVar6;
          }
        }
      }
      iVar15 = *(int *)(param_1 + 0x310);
      *(uint *)(param_1 + 0x310) = iVar15 + 1U;
      if (*(uint *)(param_1 + 0x314) < iVar15 + 1U) {
        FUN_1407cc47e(plVar7,iVar15);
      }
      *(ulonglong *)(*plVar7 + (longlong)iVar15 * 8) = uVar11 | (ulonglong)uVar16 << 0x20;
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar17 = puVar17 + 5;
    } while (puVar17 != puVar8);
  }
  *(int *)(param_1 + 800) = local_c8 + *(int *)(param_1 + 0x148);
  lVar14 = *(longlong *)(param_1 + 0x288);
  if (lVar14 == 0) goto LAB_1442ce8da;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_70 = (void *)0x0;
  uStack_68 = 0;
  FUN_1446ddda2(&local_88,"weeklyactivities",0);
  lVar14 = lVar14 + 0xb0;
  local_a8 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  FUN_1446ddda2(&local_b8,"character.map.weeklyactivities",0);
  FUN_1407cbbb2(lVar14,&local_88,&local_b8);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  FUN_140714dae(lVar14,&local_88,*(undefined4 *)(param_1 + 0x208));
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442cf601:
    uVar9 = 0;
  }
  else {
    uVar16 = *(uint *)(param_1 + 0x30);
    uVar9 = 0;
    if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uVar16 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
      if ((puVar8 == (undefined8 *)0x0) ||
         ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_1442cf601;
      uVar9 = *puVar8;
    }
  }
  lVar14 = FUN_140391a3c(uVar9);
  if (lVar14 != 0) {
    lStack_120 = CONCAT44(lStack_120._4_4_,DAT_14cbdd2d0);
    local_128 = DAT_14cbdd2c8;
    FUN_1448075d0(&local_b8);
    pbVar3 = *(byte **)(param_1 + 0x160);
    if (pbVar3 != (byte *)0x0) {
      if ((*pbVar3 & 2) == 0) {
        plVar7 = &DAT_14c9a1288;
      }
      else {
        plVar7 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
      }
      if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
        plVar12 = plVar7 + 8;
        if ((longlong *)plVar7[9] != (longlong *)0x0) {
          plVar12 = (longlong *)plVar7[9];
        }
        iVar15 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar7[10] - 1U & (uint)local_b8) * 4
                         );
        if (iVar15 != -1) {
          do {
            lVar14 = *plVar7 + (longlong)iVar15 * 0x40;
            if (*(uint *)(*plVar7 + (longlong)iVar15 * 0x40) == (uint)local_b8) {
              if ((((lVar14 != 0) &&
                   (plVar7 = (longlong *)(lVar14 + 0x28), plVar7 != (longlong *)0x0)) &&
                  ((byte *)*plVar7 != (byte *)0x0)) && ((*(byte *)*plVar7 & 0x40) == 0))
              goto LAB_1442cee3f;
              break;
            }
            iVar15 = *(int *)(lVar14 + 0x38);
          } while (iVar15 != -1);
        }
      }
    }
    plVar7 = &DAT_14c9a1308;
LAB_1442cee3f:
    if (*plVar7 == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = FUN_14000584e(*plVar7,1);
    }
    *(undefined1 *)(param_1 + 0x2cb) = uVar4;
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(param_1 + 0x2d8) = 0;
    if (*(int *)(param_1 + 0x2dc) < 0) {
      FUN_1402191ca(param_1 + 0x2d0,0);
    }
    if (*(char *)(param_1 + 0x2cb) == '\0') {
      for (plVar7 = (longlong *)FUN_146602c4e(); plVar7 != (longlong *)0x0;
          plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2b0))(plVar7)) {
        lVar14 = plVar7[10];
LAB_1442ceeaf:
        if (lVar14 != 0) {
          if ((~*(uint *)(*(longlong *)(lVar14 + 8) + 0x18) & 0x8001) != 0)
          goto code_r0x0001442ceec4;
LAB_1442ceef2:
          local_b8 = *(ulonglong *)(lVar14 + 0x20);
          puVar8 = &DAT_14c9a1308;
          if (*(longlong *)(param_1 + 0x160) != 0) {
            puVar8 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&local_b8);
          }
          if ((*(byte *)*puVar8 & 0x68) == 0 && (*(byte *)*puVar8 & 3) != 0) {
            local_160 = 0;
            local_168 = 0;
            FUN_1446e0fc6(puVar8,param_1 + 0x2d0,lVar14,0xffffffff);
          }
          plVar12 = (longlong *)(lVar14 + 0x18);
          do {
            for (lVar14 = *plVar12; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x18)) {
              if ((~*(uint *)(*(longlong *)(lVar14 + 8) + 0x18) & 0x8001) == 0) goto LAB_1442ceef2;
            }
            plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2b0))(plVar7);
            plVar12 = plVar7 + 10;
          } while (plVar7 != (longlong *)0x0);
          break;
        }
      }
    }
    lStack_120 = CONCAT44(lStack_120._4_4_,DAT_14cbdd318);
    local_128 = DAT_14cbdd310;
    FUN_1448075d0(&local_b8);
    pbVar3 = *(byte **)(param_1 + 0x160);
    if (pbVar3 != (byte *)0x0) {
      if ((*pbVar3 & 2) == 0) {
        plVar7 = &DAT_14c9a1288;
      }
      else {
        plVar7 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
      }
      if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
        plVar12 = plVar7 + 8;
        if ((longlong *)plVar7[9] != (longlong *)0x0) {
          plVar12 = (longlong *)plVar7[9];
        }
        iVar15 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar7[10] - 1U & (uint)local_b8) * 4
                         );
        if (iVar15 != -1) {
          do {
            lVar14 = *plVar7 + (longlong)iVar15 * 0x40;
            if (*(uint *)(*plVar7 + (longlong)iVar15 * 0x40) == (uint)local_b8) {
              if (((lVar14 != 0) &&
                  (puVar8 = (undefined8 *)(lVar14 + 0x28), puVar8 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar8 != (byte *)0x0 && ((*(byte *)*puVar8 & 0x40) == 0))))
              goto LAB_1442cf03c;
              break;
            }
            iVar15 = *(int *)(lVar14 + 0x38);
          } while (iVar15 != -1);
        }
      }
    }
    puVar8 = &DAT_14c9a1308;
LAB_1442cf03c:
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    lVar14 = FUN_146602b2a();
    uVar11 = DAT_14cbdd2e4;
    if ((DAT_14cbdd2e4 == DAT_14c948034) && (uVar11 = DAT_14c948034, DAT_14cbdd2e0 != DAT_14c948030)
       ) {
      FUN_14011791e(&local_b8,DAT_14cbdd2e0,DAT_14cbdd2e4 >> 0x20);
      DAT_14cbdd2e4 = local_b8;
      uVar11 = local_b8;
    }
    for (lVar14 = *(longlong *)(lVar14 + 0x70); lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x48))
    {
      if (*(ulonglong *)(lVar14 + 0x20) == uVar11) goto LAB_1442cf086;
    }
    lVar14 = 0;
LAB_1442cf086:
    if (((lVar14 != 0) && ((*(byte *)*puVar8 & 3) != 0)) && ((*(byte *)*puVar8 & 0x68) == 0)) {
      local_128 = 0;
      lStack_120 = 0;
      local_118 = 0;
      local_168 = 0;
      local_160 = 0;
      FUN_1446e0fc6(puVar8,&local_128,lVar14,0xffffffff);
      FUN_1446dcdd4(&local_b8,&local_128);
      if (DAT_14c947fe0 == 0) {
        lVar10 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar10);
        DAT_14c947fe0 = lVar10;
      }
      FUN_140045924(DAT_14c947fe0,&local_148,&local_b8,1);
      local_140 = local_148;
      local_138 = 0;
      uVar9 = FUN_141030812();
      local_138 = FUN_14477b664(uVar9);
      local_130 = 0;
      if ((local_138 != 0) && (local_140 != 0)) {
        plVar7 = *(longlong **)(local_138 + 0xb8);
        if ((plVar7 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar5 == '\0')) {
          local_130 = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar7 + 0x110))(plVar7);
          local_130 = FUN_144aff482(uVar9,&local_140);
        }
      }
      *(undefined8 *)(param_1 + 0x330) = local_130;
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      if (lStack_120 != 0) {
        FUN_1400020a8();
      }
    }
    lStack_120 = CONCAT44(lStack_120._4_4_,DAT_14cbdd330);
    local_128 = DAT_14cbdd328;
    FUN_1448075d0(&local_b8);
    pbVar3 = *(byte **)(param_1 + 0x160);
    if (pbVar3 != (byte *)0x0) {
      if ((*pbVar3 & 2) == 0) {
        plVar7 = &DAT_14c9a1288;
      }
      else {
        plVar7 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
      }
      if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
        plVar12 = plVar7 + 8;
        if ((longlong *)plVar7[9] != (longlong *)0x0) {
          plVar12 = (longlong *)plVar7[9];
        }
        iVar15 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar7[10] - 1U & (uint)local_b8) * 4
                         );
        if (iVar15 != -1) {
          do {
            lVar10 = *plVar7 + (longlong)iVar15 * 0x40;
            if (*(uint *)(*plVar7 + (longlong)iVar15 * 0x40) == (uint)local_b8) {
              if (((lVar10 != 0) &&
                  (puVar8 = (undefined8 *)(lVar10 + 0x28), puVar8 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar8 != (byte *)0x0 && ((*(byte *)*puVar8 & 0x40) == 0))))
              goto LAB_1442cf267;
              break;
            }
            iVar15 = *(int *)(lVar10 + 0x38);
          } while (iVar15 != -1);
        }
      }
    }
    puVar8 = &DAT_14c9a1308;
LAB_1442cf267:
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    if (((lVar14 != 0) && ((*(byte *)*puVar8 & 3) != 0)) && ((*(byte *)*puVar8 & 0x68) == 0)) {
      local_128 = 0;
      lStack_120 = 0;
      local_118 = 0;
      local_168 = 0;
      local_160 = 0;
      FUN_1446e0fc6(puVar8,&local_128,lVar14,0xffffffff);
      FUN_1446dcdd4(&local_b8,&local_128);
      if (DAT_14c947fe0 == 0) {
        lVar10 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar10);
        DAT_14c947fe0 = lVar10;
      }
      FUN_140045924(DAT_14c947fe0,&local_150,&local_b8,1);
      local_140 = local_150;
      local_138 = 0;
      uVar9 = FUN_14067c594();
      local_138 = FUN_14477b664(uVar9);
      local_130 = 0;
      if ((local_138 != 0) && (local_140 != 0)) {
        plVar7 = *(longlong **)(local_138 + 0xb8);
        if ((plVar7 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar5 == '\0')) {
          local_130 = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar7 + 0x110))(plVar7);
          local_130 = FUN_144aff482(uVar9,&local_140);
        }
      }
      *(undefined8 *)(param_1 + 0x338) = local_130;
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      if (lStack_120 != 0) {
        FUN_1400020a8();
      }
    }
    lStack_120 = CONCAT44(lStack_120._4_4_,DAT_14cbdd348);
    local_128 = DAT_14cbdd340;
    FUN_1448075d0(&local_b8);
    pbVar3 = *(byte **)(param_1 + 0x160);
    if (pbVar3 != (byte *)0x0) {
      if ((*pbVar3 & 2) == 0) {
        plVar7 = &DAT_14c9a1288;
      }
      else {
        plVar7 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
      }
      if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
        plVar12 = plVar7 + 8;
        if ((longlong *)plVar7[9] != (longlong *)0x0) {
          plVar12 = (longlong *)plVar7[9];
        }
        iVar15 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar7[10] - 1U & (uint)local_b8) * 4
                         );
        if (iVar15 != -1) {
          do {
            lVar10 = *plVar7 + (longlong)iVar15 * 0x40;
            if (*(uint *)(*plVar7 + (longlong)iVar15 * 0x40) == (uint)local_b8) {
              if (((lVar10 != 0) &&
                  (puVar8 = (undefined8 *)(lVar10 + 0x28), puVar8 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar8 != (byte *)0x0 && ((*(byte *)*puVar8 & 0x40) == 0))))
              goto LAB_1442cf459;
              break;
            }
            iVar15 = *(int *)(lVar10 + 0x38);
          } while (iVar15 != -1);
        }
      }
    }
    puVar8 = &DAT_14c9a1308;
LAB_1442cf459:
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    lVar10 = FUN_146602b2a();
    uVar11 = DAT_14cbdd2fc;
    if ((DAT_14cbdd2fc == DAT_14c948034) && (uVar11 = DAT_14c948034, DAT_14cbdd2f8 != DAT_14c948030)
       ) {
      FUN_14011791e(&local_b8,DAT_14cbdd2f8,DAT_14cbdd2fc >> 0x20);
      DAT_14cbdd2fc = local_b8;
      uVar11 = local_b8;
    }
    for (lVar10 = *(longlong *)(lVar10 + 0x70); lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x48))
    {
      if (*(ulonglong *)(lVar10 + 0x20) == uVar11) goto LAB_1442cf4a4;
    }
    lVar10 = 0;
LAB_1442cf4a4:
    if (((lVar14 != 0) && ((*(byte *)*puVar8 & 3) != 0)) && ((*(byte *)*puVar8 & 0x68) == 0)) {
      plVar7 = (longlong *)(param_1 + 0x340);
      iVar15 = *(int *)(param_1 + 0x34c);
      FUN_1456d172d(*(undefined8 *)(param_1 + 0x340),*(undefined4 *)(param_1 + 0x348));
      *(undefined4 *)(param_1 + 0x348) = 0;
      if ((iVar15 < 0) && (*(int *)(param_1 + 0x34c) != 0)) {
        FUN_140179e18(plVar7,0);
      }
      local_128 = 0;
      lStack_120 = 0;
      local_118 = 0;
      local_168 = 0;
      local_160 = 0;
      FUN_1446e0fc6(puVar8,&local_128,lVar10,0xffffffff);
      lVar14 = lStack_120;
      lVar10 = (longlong)(int)local_118;
      if (lVar10 != 0) {
        lVar13 = 0;
        do {
          local_140 = *(longlong *)(lVar14 + lVar13);
          FUN_1446dcdd4(&local_b8,&local_140);
          iVar15 = *(int *)(param_1 + 0x348);
          *(uint *)(param_1 + 0x348) = iVar15 + 1U;
          if (*(uint *)(param_1 + 0x34c) < iVar15 + 1U) {
            FUN_14014a81a(plVar7,iVar15);
          }
          puVar8 = (undefined8 *)(*plVar7 + (longlong)iVar15 * 0x28);
          *puVar8 = 0;
          puVar8[1] = 0;
          *(undefined4 *)(puVar8 + 2) = 0;
          puVar8[3] = 0;
          puVar8[4] = 0;
          FUN_1404e49fa(puVar8,&local_b8);
          if (local_a0 != 0) {
            FUN_1400020a8();
          }
          lVar13 = lVar13 + 8;
        } while (lVar10 * 8 != lVar13);
      }
      if (lStack_120 != 0) {
        FUN_1400020a8(lStack_120);
      }
    }
  }
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1442ce8da:
  FUN_1466033da(&local_108);
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x0001442ce627:
  lVar14 = *(longlong *)(lVar14 + 0x18);
  goto LAB_1442ce612;
code_r0x0001442ceec4:
  lVar14 = *(longlong *)(lVar14 + 0x18);
  goto LAB_1442ceeaf;
}



// FUNCTION 1442cf738 FUN_1442cf738 body=4500 status=ok
// SIG undefined FUN_1442cf738(void)

void FUN_1442cf738(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  ushort *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  wchar_t *_Str;
  longlong lVar7;
  size_t sVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  char *pcVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 uVar18;
  longlong lVar19;
  longlong lVar20;
  PSRWLOCK pRVar21;
  longlong **pplVar22;
  bool bVar23;
  byte bVar24;
  undefined1 auStack_2d8 [32];
  longlong local_2b8;
  char local_2a9;
  PSRWLOCK local_2a8;
  longlong local_2a0;
  ulonglong local_298;
  undefined4 local_28c;
  undefined8 *local_288;
  longlong local_280;
  longlong *local_278;
  undefined4 local_270;
  longlong *local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  longlong local_250;
  undefined8 uStack_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  longlong *local_208;
  longlong *plStack_200;
  longlong **local_1f8;
  ulonglong local_1f0;
  longlong alStack_1e8 [32];
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  ulonglong local_d0;
  undefined8 uStack_c8;
  longlong **local_68;
  longlong **local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  if ((((*(byte *)(param_1 + 0x8c) & 0x80) == 0) || (*(int *)(param_1 + 0x208) == 0)) ||
     (lVar7 = *(longlong *)(param_1 + 0x288), lVar7 == 0)) goto LAB_1442cfc07;
  puVar11 = (undefined4 *)(param_1 + 0x208);
  FUN_1448d5e3c(&local_208,puVar11);
  lVar14 = local_208[0xc6];
  pRVar21 = (PSRWLOCK)(lVar14 + 0x28);
  AcquireSRWLockShared(pRVar21);
  plVar12 = plStack_200;
  if (plStack_200 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_200 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_200)(plStack_200);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  FUN_1448d5e3c(&local_208,puVar11);
  lVar20 = local_208[200];
  SRWLock = (PSRWLOCK)(lVar20 + 0x28);
  AcquireSRWLockShared(SRWLock);
  plVar12 = plStack_200;
  if (plStack_200 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_200 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_200)(plStack_200);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  iVar5 = *(int *)(lVar20 + 0x20) + *(int *)(lVar14 + 0x20);
  if (*(int *)(lVar7 + 0x4b4) != iVar5) {
    *(int *)(lVar7 + 0x4b4) = iVar5;
    FUN_140714c1e(lVar7 + 0xb0,*puVar11);
    puVar3 = *(ushort **)(lVar7 + 0x80);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
    }
  }
  ReleaseSRWLockShared(SRWLock);
  ReleaseSRWLockShared(pRVar21);
  if ((((*(int *)(param_1 + 0x34) != 0) && (uVar16 = *(uint *)(param_1 + 0x30), -1 < (int)uVar16))
      && (((int)uVar16 < DAT_14c9647dc &&
          ((lVar14 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8), lVar14 != 0 &&
           (*(int *)(lVar14 + 0x10) == *(int *)(param_1 + 0x34))))))) &&
     ((*(uint *)(lVar14 + 8) & 0x10200000) == 0)) {
    FUN_1400021e4(&DAT_14cbdbc40,&local_e8);
    plVar12 = local_e8;
    if ((int)uStack_e0 == 0) {
      plVar12 = (longlong *)&DAT_149dfb77a;
    }
    FUN_140002266(&local_208,L"UI.State.%s",plVar12);
    iVar5 = (int)plStack_200 + -1;
    if ((int)plStack_200 == 0) {
      iVar5 = 0;
    }
    FUN_1446f82e2(&local_268,iVar5,local_208,1);
    plVar12 = local_268;
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,&local_268,plVar12,1);
    if (local_208 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442cfe16:
      lVar14 = 0;
    }
    else {
      uVar16 = *(uint *)(param_1 + 0x30);
      lVar14 = 0;
      if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
        plVar12 = (longlong *)
                  ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
        if ((plVar12 == (longlong *)0x0) ||
           (((int)plVar12[2] != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_1442cfe16;
        lVar14 = *plVar12;
      }
    }
    cVar4 = FUN_140426394(lVar14 + 0x3c0,&local_268);
    FUN_1448d5e3c(&local_208,puVar11);
    lVar14 = local_208[0x82];
    AcquireSRWLockExclusive((PSRWLOCK)(lVar14 + 0x1b0));
    plVar12 = plStack_200;
    if (plStack_200 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_200 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_200)(plStack_200);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (*(char *)(lVar14 + 0x159) != cVar4) {
      *(char *)(lVar14 + 0x159) = cVar4;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar14 + 0x1b0));
  }
  pplVar22 = &local_208;
  FUN_1448d5e3c(pplVar22,puVar11);
  lVar14 = local_208[0x82];
  pRVar21 = (PSRWLOCK)(lVar14 + 0x1b0);
  AcquireSRWLockShared(pRVar21);
  plVar12 = plStack_200;
  if (plStack_200 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_200 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_200)(plStack_200);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (*(int *)(lVar14 + 0x1a8) == *(int *)(lVar7 + 0xac)) {
    if ((*(longlong *)(param_1 + 0x3c8) != (longlong)*(int *)(lVar14 + 0x1a0)) &&
       (*(int *)(lVar7 + 0x4c0) == *(int *)(lVar14 + 0x198))) {
      FUN_14664f63e(param_1,lVar14 + 400);
      if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442d02a5:
        lVar20 = 0;
      }
      else {
        uVar16 = *(uint *)(param_1 + 0x30);
        lVar20 = 0;
        if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
          plVar12 = (longlong *)
                    ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
          if ((plVar12 == (longlong *)0x0) ||
             (((int)plVar12[2] != *(int *)(param_1 + 0x34) ||
              ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_1442d02a5;
          lVar20 = *plVar12;
        }
      }
      local_208 = alStack_1e8;
      local_1f0 = local_1f0 & 0xffffffffffffff00;
      local_1f8 = &local_e8;
      plStack_200 = local_208;
      _Str = (wchar_t *)FUN_140c7f682(param_1,L"OnCameraBoundsChanged",&local_208);
      local_68 = (longlong **)0x0;
      if (_Str == (wchar_t *)0x0) {
        local_60 = (longlong **)0x0;
        local_58 = 0;
      }
      else {
        local_2b8 = lVar14;
        local_2a0 = lVar20;
        sVar8 = wcslen(_Str);
        local_58 = FUN_14475aa65(0,_Str,sVar8 & 0xffffffff);
        uVar16 = local_58 + 1;
        local_60 = (longlong **)0x0;
        if (0x80 < uVar16) {
          FUN_1446efa72(&local_68,0,uVar16,1);
          local_60 = local_68;
        }
        if (local_60 == (longlong **)0x0) {
          local_60 = &local_e8;
        }
        FUN_14475a98a(local_60,uVar16,_Str,(int)sVar8 + 1);
        lVar14 = local_2b8;
        lVar20 = local_2a0;
      }
      FUN_146048fc8(lVar20,local_60,lVar7 + 0x4b8);
      if (local_68 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      if ((char)local_1f0 == '\x01') {
        FUN_1400020a8(local_208);
      }
      *(longlong *)(param_1 + 0x3c8) = (longlong)*(int *)(lVar14 + 0x1a0);
    }
  }
  else {
    *(int *)(lVar7 + 0xac) = *(int *)(lVar14 + 0x1a8);
    bVar24 = *(byte *)(lVar14 + 0x119);
    bVar23 = bVar24 != *(byte *)(param_1 + 0x3c0);
    if (bVar23) {
      FUN_14664f7d4(param_1);
      bVar24 = *(byte *)(param_1 + 0x3c0);
    }
    if (((bVar24 & 1) != 0) &&
       ((*(char *)(lVar7 + 0x432) != '\0' || (*(char *)(lVar7 + 0x433) == '\x01')))) {
      *(bool *)(lVar7 + 0x4c8) = 1 < *(int *)(lVar14 + 0x128);
      FUN_14664ee8e(param_1);
      if (*(longlong *)(param_1 + 0x338) == 0) {
        bVar24 = false;
      }
      else {
        bVar24 = *(longlong *)
                  (*(longlong *)(lVar14 + 0x120) + (longlong)(*(int *)(lVar14 + 0x128) + -1) * 8) ==
                 *(longlong *)(param_1 + 0x338);
      }
      local_2a0 = CONCAT71(local_2a0._1_7_,bVar23);
      *(byte *)(lVar7 + 0x434) = bVar24;
      local_2a8 = pRVar21;
      if (*(int *)(lVar7 + 0x4c0) != *(int *)(lVar14 + 0x198)) {
        FUN_14664f856(param_1,lVar14 + 400);
        *(longlong *)(param_1 + 0x3c8) = (longlong)*(int *)(lVar14 + 0x1a0);
        bVar24 = *(byte *)(lVar7 + 0x434);
      }
      if (((((bVar24 & 1) == 0) || (local_2b8 = lVar14, *(char *)(lVar7 + 0x432) == '\0')) &&
          (local_2b8 = lVar14, *(char *)(lVar7 + 0x408) == '\0')) &&
         (iVar5 = *(int *)(param_1 + 0x300), (longlong)iVar5 != 0)) {
        uVar6 = *(undefined4 *)(param_1 + 0x31c);
        lVar20 = *(longlong *)(param_1 + 0x2f8);
        lVar19 = 0;
        do {
          uVar9 = *(undefined8 *)(lVar20 + lVar19);
          cVar4 = FUN_1442d1e74(param_1,uVar9);
          if (cVar4 == '\0') {
            FUN_14143058a(param_1,uVar9,uVar6);
          }
          lVar19 = lVar19 + 8;
        } while ((longlong)iVar5 * 8 != lVar19);
      }
      pRVar21 = local_2a8;
      lVar14 = local_2b8;
      *(undefined1 *)(lVar7 + 0x409) = *(undefined1 *)(param_1 + 0x2cb);
      if (*(int *)(lVar7 + 0x458) != *(int *)(local_2b8 + 0x78)) {
        *(int *)(lVar7 + 0x458) = *(int *)(local_2b8 + 0x78);
        FUN_1457cac00(lVar7 + 0x448,local_2b8 + 0x68);
        if ((longlong)*(int *)(lVar7 + 0x450) == 0) {
          local_2a0 = CONCAT71(local_2a0._1_7_,1);
        }
        else {
          local_2a0 = CONCAT71(local_2a0._1_7_,1);
          uVar17 = *(ulonglong *)(lVar7 + 0x448);
          local_298 = (longlong)*(int *)(lVar7 + 0x450) * 0x88 + uVar17;
          iVar5 = 0;
          do {
            *(int *)(uVar17 + 0x58) = iVar5;
            *(int *)(uVar17 + 0x78) = *(int *)(uVar17 + 0x78) + 2;
            iVar5 = iVar5 + 1;
            if ((longlong)*(int *)(uVar17 + 0x70) != 0) {
              lVar14 = (longlong)*(int *)(uVar17 + 0x70) * 0x60;
              lVar20 = *(longlong *)(uVar17 + 0x68) + 0x48;
              do {
                *(int *)(lVar20 + 0x10) = iVar5;
                lVar19 = FUN_14090ae24(lVar20 + -0x28);
                if (lVar19 != 0) {
                  FUN_140390f7a(lVar20 + -0x28,lVar20);
                }
                iVar5 = iVar5 + 1;
                lVar20 = lVar20 + 0x60;
                lVar14 = lVar14 + -0x60;
              } while (lVar14 != 0);
            }
            uVar17 = uVar17 + 0x88;
            lVar14 = local_2b8;
            pRVar21 = local_2a8;
          } while (uVar17 != local_298);
        }
      }
      uVar18 = (undefined1)local_2a0;
      if (*(int *)(lVar7 + 0x470) != *(int *)(lVar14 + 0x90)) {
        *(int *)(lVar7 + 0x470) = *(int *)(lVar14 + 0x90);
        FUN_1457cac00(lVar7 + 0x460,lVar14 + 0x80);
        uVar18 = 1;
        if ((longlong)*(int *)(lVar7 + 0x468) != 0) {
          lVar14 = *(longlong *)(lVar7 + 0x460);
          local_2a0 = (longlong)*(int *)(lVar7 + 0x468) * 0x88 + lVar14;
          iVar5 = 0;
          do {
            *(int *)(lVar14 + 0x58) = iVar5;
            *(int *)(lVar14 + 0x78) = *(int *)(lVar14 + 0x78) + 2;
            iVar5 = iVar5 + 1;
            if ((longlong)*(int *)(lVar14 + 0x70) != 0) {
              lVar20 = (longlong)*(int *)(lVar14 + 0x70) * 0x60;
              lVar19 = *(longlong *)(lVar14 + 0x68) + 0x48;
              do {
                *(int *)(lVar19 + 0x10) = iVar5;
                lVar10 = FUN_14090ae24(lVar19 + -0x28);
                if (lVar10 != 0) {
                  FUN_140390f7a(lVar19 + -0x28,lVar19);
                }
                iVar5 = iVar5 + 1;
                lVar19 = lVar19 + 0x60;
                lVar20 = lVar20 + -0x60;
              } while (lVar20 != 0);
            }
            lVar14 = lVar14 + 0x88;
          } while (lVar14 != local_2a0);
          uVar18 = 1;
          lVar14 = local_2b8;
          pRVar21 = local_2a8;
        }
      }
      if (*(int *)(lVar7 + 0x488) != *(int *)(lVar14 + 0xa8)) {
        *(int *)(lVar7 + 0x488) = *(int *)(lVar14 + 0xa8);
        FUN_1457cac00(lVar7 + 0x478,lVar14 + 0x98);
        uVar18 = 1;
        if ((longlong)*(int *)(lVar7 + 0x480) != 0) {
          lVar14 = *(longlong *)(lVar7 + 0x478);
          local_2a0 = (longlong)*(int *)(lVar7 + 0x480) * 0x88 + lVar14;
          iVar5 = -1;
          do {
            *(int *)(lVar14 + 0x58) = iVar5;
            *(int *)(lVar14 + 0x78) = *(int *)(lVar14 + 0x78) + 2;
            iVar5 = iVar5 + 1;
            if ((longlong)*(int *)(lVar14 + 0x70) != 0) {
              lVar20 = (longlong)*(int *)(lVar14 + 0x70) * 0x60;
              lVar19 = *(longlong *)(lVar14 + 0x68) + 0x48;
              do {
                *(int *)(lVar19 + 0x10) = iVar5;
                lVar10 = FUN_14090ae24(lVar19 + -0x28);
                if (lVar10 != 0) {
                  FUN_140390f7a(lVar19 + -0x28,lVar19);
                }
                iVar5 = iVar5 + 1;
                lVar19 = lVar19 + 0x60;
                lVar20 = lVar20 + -0x60;
              } while (lVar20 != 0);
            }
            lVar14 = lVar14 + 0x88;
          } while (lVar14 != local_2a0);
          uVar18 = 1;
          lVar14 = local_2b8;
          pRVar21 = local_2a8;
        }
      }
      lVar20 = *(longlong *)(param_1 + 0x288);
      if (((lVar20 == 0) || (*(char *)(lVar20 + 0x408) == '\0')) &&
         ((*(char *)(lVar7 + 0x432) != '\0' || (*(char *)(lVar7 + 0x433) == '\x01')))) {
        cVar4 = '\x01';
        if ((*(int *)(lVar14 + 0x58) == 0) && (*(char *)(param_1 + 0x2c9) == '\0')) {
          cVar4 = *(char *)(param_1 + 0x2ca);
        }
        iVar5 = *(int *)(lVar7 + 0x364);
        if (cVar4 == *(char *)(lVar7 + 0x360)) {
          local_298 = local_298 & 0xffffffff00000000;
          bVar23 = iVar5 == 0;
          iVar5 = 0;
          if (bVar23) goto LAB_1442cff0f;
        }
        else {
LAB_1442cff0f:
          *(char *)(lVar7 + 0x360) = cVar4;
          *(int *)(lVar7 + 0x364) = iVar5 + 1;
          local_298 = CONCAT44(local_298._4_4_,(int)CONCAT71((int7)((ulonglong)lVar20 >> 8),1));
        }
        local_2a0 = CONCAT71(local_2a0._1_7_,uVar18);
        puVar13 = (undefined8 *)(lVar7 + 0x370);
        uVar9 = FUN_14664a1e8(puVar13,lVar14 + 0x50);
        local_2a9 = (char)uVar9;
        lVar20 = *(longlong *)(lVar14 + 0x60);
        local_288 = puVar13;
        if (lVar20 == 0) {
LAB_1442d0007:
          *(undefined8 *)(param_1 + 0x328) = 0;
          local_238 = 0;
          uStack_230 = 0;
          local_228 = 0;
          local_220 = 0;
          uStack_218 = 0;
          local_28c = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
          lVar20 = 0;
        }
        else {
          uVar9 = FUN_14086ad12();
          uVar9 = FUN_1448093f4(lVar20,uVar9);
          if ((char)uVar9 == '\0') goto LAB_1442d0007;
          lVar14 = *(longlong *)(lVar20 + 0x178);
          if (lVar14 == 0) {
            uVar9 = FUN_1465d584e();
            lVar14 = FUN_14477b664(uVar9);
            *(longlong *)(lVar20 + 0x178) = lVar14;
          }
          lVar19 = *(longlong *)(lVar20 + 0x180);
          if (((lVar19 == 0) && (lVar19 = 0, lVar14 != 0)) && (*(longlong *)(lVar20 + 0x170) != 0))
          {
            plVar12 = *(longlong **)(lVar14 + 0xb8);
            if ((plVar12 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar4 == '\0')) {
              lVar19 = 0;
            }
            else {
              uVar9 = (**(code **)(*plVar12 + 0x110))(plVar12);
              lVar19 = FUN_144aff482(uVar9,(longlong *)(lVar20 + 0x170));
            }
            *(longlong *)(lVar20 + 0x180) = lVar19;
          }
          *(longlong *)(param_1 + 0x328) = lVar19;
          puVar11 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar20 + 8) != (undefined4 *)0x0) {
            puVar11 = *(undefined4 **)(lVar20 + 8);
          }
          FUN_1447a97f4(&local_238,puVar11);
          local_28c = 0;
          lVar14 = local_2b8;
          pRVar21 = local_2a8;
        }
        local_280 = lVar20;
        FUN_148e8e2e0(param_1,&local_238);
        lVar20 = *(longlong *)(lVar14 + 0x130);
        if (lVar20 != 0) {
          uVar9 = FUN_14086ad12();
          cVar4 = FUN_1448093f4(lVar20,uVar9);
          if (cVar4 != '\0') {
            lVar19 = *(longlong *)(lVar20 + 0x178);
            if (lVar19 == 0) {
              uVar9 = FUN_1465d584e();
              lVar19 = FUN_14477b664(uVar9);
              *(longlong *)(lVar20 + 0x178) = lVar19;
            }
            if (((*(longlong *)(lVar20 + 0x180) == 0) && (lVar19 != 0)) &&
               (*(longlong *)(lVar20 + 0x170) != 0)) {
              plVar12 = *(longlong **)(lVar19 + 0xb8);
              if ((plVar12 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar4 == '\0')) {
                uVar9 = 0;
              }
              else {
                uVar9 = (**(code **)(*plVar12 + 0x110))(plVar12);
                uVar9 = FUN_144aff482(uVar9,(longlong *)(lVar20 + 0x170));
              }
              *(undefined8 *)(lVar20 + 0x180) = uVar9;
              lVar14 = local_2b8;
              pRVar21 = local_2a8;
            }
          }
        }
        if (*(longlong *)(param_1 + 0x328) == 0) {
          plVar12 = (longlong *)&DAT_14c844840;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) &&
             (FUN_144b3d300(&DAT_14c844850), lVar14 = local_2b8, pRVar21 = local_2a8,
             DAT_14c844850 == -1)) {
            DAT_14c844840 = (undefined8 *)FUN_14001cc68(0x30,0x10);
            DAT_14c844840[1] = 0;
            *DAT_14c844840 = &PTR_FUN_149e19310;
            DAT_14c844840[2] = 0xffffffffffffffff;
            DAT_14c844840[3] = 0;
            DAT_14c844840[4] = 0;
            DAT_14c844840[5] = 0;
            if (DAT_14c844840 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
            lVar14 = local_2b8;
            pRVar21 = local_2a8;
          }
        }
        else {
          plVar12 = (longlong *)(*(longlong *)(param_1 + 0x328) + 0x18);
        }
        local_278 = (longlong *)*plVar12;
        if (local_278 != (longlong *)0x0) {
          (**(code **)(*local_278 + 8))();
        }
        local_270 = (undefined4)plVar12[1];
        cVar4 = *(char *)(lVar14 + 0x15b);
        iVar5 = *(int *)(lVar7 + 0x4d0);
        if (cVar4 == *(char *)(lVar7 + 0x4cc)) {
          bVar24 = 0;
          bVar23 = iVar5 == 0;
          iVar5 = 0;
          if (bVar23) goto LAB_1442d0441;
        }
        else {
LAB_1442d0441:
          *(char *)(lVar7 + 0x4cc) = cVar4;
          *(int *)(lVar7 + 0x4d0) = iVar5 + 1;
          bVar24 = 1;
        }
        if (cVar4 == '\0') {
          pplVar22 = &local_e8;
          local_e8 = (longlong *)0x0;
          uStack_e0 = 0;
          local_d8 = 0;
          local_d0 = 0;
          uStack_c8 = 0;
          pcVar15 = "UIBigMap_Show";
        }
        else {
          local_208 = (longlong *)0x0;
          plStack_200 = (longlong *)0x0;
          local_1f8 = (longlong **)((ulonglong)local_1f8 & 0xffffffff00000000);
          local_1f0 = 0;
          alStack_1e8[0] = 0;
          pcVar15 = "UIBigMap_Hide";
        }
        FUN_1446ddda2(pplVar22,pcVar15,0);
        FUN_1410d1eba(&local_268,pplVar22);
        FUN_140008f88(lVar7 + 0x4d8,&local_268);
        if (local_268 != (longlong *)0x0) {
          (**(code **)(*local_268 + 0x10))();
        }
        uVar17 = local_d0;
        if (cVar4 != '\0') {
          uVar17 = local_1f0;
        }
        if (uVar17 != 0) {
          FUN_1400020a8();
        }
        puVar13 = (undefined8 *)(lVar7 + 0x3d8);
        cVar4 = FUN_144722c14(puVar13,&local_278,0);
        if (cVar4 == '\0') {
          if ((*(int *)(lVar7 + 1000) == 0) ||
             (cVar4 = FUN_144722c14(puVar13,&local_278,0), cVar4 == '\0')) {
            plVar12 = (longlong *)*puVar13;
            if (plVar12 != local_278) {
              *puVar13 = local_278;
              if (local_278 != (longlong *)0x0) {
                (**(code **)(*local_278 + 8))();
              }
              if (plVar12 != (longlong *)0x0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
            *(undefined4 *)(lVar7 + 0x3e0) = local_270;
            *(int *)(lVar7 + 1000) = *(int *)(lVar7 + 1000) + 1;
            lVar14 = local_2b8;
            pRVar21 = local_2a8;
          }
          if ((char)local_28c == '\0') {
            FUN_1447a97f4(&local_268);
          }
          else {
            local_268 = (longlong *)0x0;
            uStack_260 = 0;
            local_258 = 0;
            local_250 = 0;
            uStack_248 = 0;
          }
          if (*(char *)(param_1 + 0x2c8) == '\0') {
            if (*(int *)(lVar14 + 200) == *(int *)(lVar14 + 0xf4)) {
              lVar20 = 0;
            }
            else {
              uVar17 = *(ulonglong *)(lVar14 + 0x60);
              uVar16 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
              uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
              lVar20 = lVar14 + 0xf8;
              if (*(longlong *)(lVar14 + 0x100) != 0) {
                lVar20 = *(longlong *)(lVar14 + 0x100);
              }
              iVar5 = *(int *)(lVar20 + (ulonglong)
                                        (*(int *)(lVar14 + 0x108) - 1U & (uVar16 >> 0x10 ^ uVar16))
                                        * 4);
              lVar14 = local_2b8;
              if (iVar5 != -1) {
                do {
                  lVar20 = *(longlong *)(local_2b8 + 0xc0) + (longlong)iVar5 * 0x60;
                  if (*(ulonglong *)(*(longlong *)(local_2b8 + 0xc0) + (longlong)iVar5 * 0x60) ==
                      uVar17) goto LAB_1442d0674;
                  iVar5 = *(int *)(lVar20 + 0x58);
                } while (iVar5 != -1);
              }
              lVar20 = 0;
            }
LAB_1442d0674:
            lVar19 = lVar20 + 8;
            if (lVar20 == 0) {
              lVar19 = 0;
            }
            FUN_1442d08ce(lVar19,lVar7 + 0x3b8);
            pRVar21 = local_2a8;
          }
          if (local_250 != 0) {
            FUN_1400020a8();
          }
          cVar4 = (char)local_298;
          bVar24 = 1;
        }
        else {
          bVar24 = (byte)local_2a0 | bVar24;
          cVar4 = (char)local_298;
        }
        lVar20 = local_2b8;
        *(undefined4 *)(lVar7 + 0x3d0) = *(undefined4 *)(lVar14 + 0x114);
        iVar5 = *(int *)(lVar7 + 0x3cc);
        switch(*(undefined4 *)(lVar14 + 0x110)) {
        case 1:
          uVar6 = 1;
          if (iVar5 != 1) {
LAB_1442d0713:
            *(undefined4 *)(lVar7 + 0x3cc) = uVar6;
          }
          break;
        case 2:
          uVar6 = 2;
          if (iVar5 != 2) goto LAB_1442d0713;
          break;
        case 3:
          uVar6 = 3;
          if (iVar5 != 3) goto LAB_1442d0713;
          break;
        case 4:
          uVar6 = 4;
          if (iVar5 != 4) goto LAB_1442d0713;
          break;
        default:
          uVar6 = 0;
          if (iVar5 != 0) goto LAB_1442d0713;
        }
        if ((cVar4 != '\0' || local_2a9 != '\0') && (*(char *)(param_1 + 0x2c9) == '\0')) {
          uVar16 = *(uint *)(lVar7 + 0x368);
          if ((int)uVar16 < *(int *)(lVar7 + 0x378) && -1 < (int)uVar16) {
            *(int *)(lVar7 + 0x380) = *(int *)(lVar7 + 0x380) + 1;
            puVar11 = (undefined4 *)((ulonglong)uVar16 * 4 + *(longlong *)(lVar7 + 0x370));
LAB_1442d07bc:
            uVar6 = *puVar11;
          }
          else {
            uVar6 = 0xffffffff;
            if (0 < *(int *)(lVar7 + 0x378)) {
              puVar11 = (undefined4 *)*local_288;
              goto LAB_1442d07bc;
            }
          }
          uVar9 = FUN_14626750a(local_2b8,uVar6);
          FUN_1462653da(param_1,uVar9,lVar7,uVar6);
          lVar14 = lVar20;
          pRVar21 = local_2a8;
        }
        if ((bVar24 != 0) && (puVar3 = *(ushort **)(lVar7 + 0x80), puVar3 != (ushort *)0x0)) {
          *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
        }
        cVar4 = *(char *)(lVar14 + 0x118);
        if (local_278 != (longlong *)0x0) {
          (**(code **)(*local_278 + 0x10))();
        }
        if (cVar4 == '\0') goto LAB_1442cfbfe;
      }
      if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442d0294:
        uVar9 = 0;
      }
      else {
        uVar16 = *(uint *)(param_1 + 0x30);
        uVar9 = 0;
        if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
          puVar13 = (undefined8 *)
                    ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
          if ((puVar13 == (undefined8 *)0x0) ||
             ((*(int *)(puVar13 + 2) != *(int *)(param_1 + 0x34) ||
              ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_1442d0294;
          uVar9 = *puVar13;
        }
      }
      lVar7 = FUN_140391a3c(uVar9);
      if (lVar7 != 0) {
        puVar13 = (undefined8 *)FUN_14001cc68(8,0x10);
        *puVar13 = &PTR_FUN_14b9c4868;
        FUN_14039144e(lVar7,puVar13);
      }
    }
  }
LAB_1442cfbfe:
  ReleaseSRWLockShared(pRVar21);
LAB_1442cfc07:
  if ((local_48 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442d08ce FUN_1442d08ce body=5500 status=ok
// SIG undefined FUN_1442d08ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1442d08ce(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong ****pppplVar6;
  bool bVar7;
  longlong ***ppplVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong ****pppplVar25;
  ulonglong uVar26;
  undefined1 auStack_338 [36];
  int local_314;
  ulonglong local_310;
  uint local_304;
  int local_300;
  int local_2fc;
  ulonglong local_2f8;
  longlong *local_2f0;
  ulonglong local_2e8;
  uint *local_2e0;
  longlong *local_2d8;
  ulonglong local_2d0;
  longlong local_2c8;
  longlong *local_2c0;
  longlong *local_2b8 [2];
  longlong *local_2a8 [2];
  undefined8 local_298;
  longlong *local_290;
  longlong *local_288 [2];
  longlong *local_278 [2];
  undefined8 local_268;
  longlong *local_260;
  longlong local_258;
  longlong *plStack_250;
  longlong *local_248 [2];
  longlong local_238;
  longlong *plStack_230;
  longlong *local_228 [2];
  longlong *local_218;
  longlong *plStack_210;
  longlong ***local_200;
  undefined1 *local_1f8;
  longlong ***local_1f0;
  undefined4 local_1e8;
  undefined2 local_1e0;
  undefined1 local_1de;
  longlong local_1d8 [2];
  longlong local_1c8 [2];
  longlong ***local_1b8;
  undefined4 local_1b0;
  undefined1 local_1a8 [16];
  longlong local_198;
  undefined8 uStack_190;
  longlong ***local_188;
  undefined4 local_180;
  undefined8 local_178;
  longlong *plStack_170;
  longlong *local_168;
  undefined1 *local_160;
  longlong local_158;
  longlong *local_150;
  longlong ***local_148;
  longlong lStack_140;
  int local_138 [2];
  undefined8 local_130;
  undefined8 auStack_128 [2];
  undefined1 local_118 [8];
  longlong local_110;
  undefined1 local_108 [8];
  longlong local_100;
  longlong local_f8 [2];
  uint local_e8 [4];
  uint *local_d8;
  uint local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 uStack_88;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_338;
  iVar18 = *(int *)((longlong)param_2 + 0xc);
  FUN_145bfad2e(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar18 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_148e9c598(param_2);
  }
  if (param_1 != (longlong *)0x0) {
    uVar11 = *(uint *)(param_1 + 5);
    if (uVar11 == 0) {
      uVar20 = 1;
      uVar26 = 0;
      iVar18 = 0;
      uVar10 = 0;
    }
    else {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = (uint *)(param_1 + 2);
      }
      uVar10 = *puVar15;
      if (uVar10 == 0) {
        iVar18 = uVar11 + 0x1e;
        if (-1 < (int)(uVar11 - 1)) {
          iVar18 = uVar11 - 1;
        }
        uVar26 = 0;
        uVar20 = (ulonglong)(uint)(iVar18 >> 5);
        if (iVar18 >> 5 < 1) {
          uVar20 = uVar26;
        }
        iVar18 = 0;
        do {
          if (uVar20 == uVar26) goto LAB_1442d09b8;
          iVar18 = iVar18 + 0x20;
          uVar10 = puVar15[uVar26 + 1];
          uVar26 = uVar26 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar26 = 0;
        iVar18 = 0;
      }
      uVar20 = (ulonglong)(-uVar10 & uVar10);
      uVar24 = uVar20 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar10 = (iVar18 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if ((int)uVar11 <= (int)uVar10) {
        uVar10 = uVar11;
      }
    }
    if (uVar10 != uVar11) {
      uVar23 = 0xffffffff;
      local_2f8 = (ulonglong)uVar11;
      local_2f0 = param_1;
      local_2e0 = (uint *)(param_1 + 2);
      local_2d8 = param_2;
      do {
        local_100 = *(longlong *)(*local_2f0 + (longlong)(int)uVar10 * 0x60);
        local_d8 = (uint *)0x0;
        local_d0 = 0;
        local_f8[0] = 0;
        local_f8[1] = 0;
        local_cc = 0xffffffff00000080;
        local_c4 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_304 = uVar23;
        local_300 = iVar18;
        local_2e8 = uVar20;
        local_2d0 = uVar26;
        FUN_148e970de(local_f8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (longlong ****)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = (longlong ***)0x0;
          *DAT_14c844840 = (longlong ***)&PTR_FUN_149e19310;
          DAT_14c844840[2] = (longlong ***)0xffffffffffffffff;
          DAT_14c844840[3] = (longlong ***)0x0;
          DAT_14c844840[4] = (longlong ***)0x0;
          DAT_14c844840[5] = (longlong ***)0x0;
          if (DAT_14c844840 != (longlong ****)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
        local_1b8 = (longlong ***)DAT_14c844840;
        if (DAT_14c844840 != (longlong ****)0x0) {
          if ((*DAT_14c844840)[1] == (longlong **)FUN_144907e24) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
            UNLOCK();
          }
          else {
            (*(code *)(*DAT_14c844840)[1])();
          }
        }
        local_1b0 = 0;
        FUN_1400b22c2(local_1a8,&DAT_149e02088);
        local_198 = 0;
        uStack_190 = 0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (longlong ****)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = (longlong ***)0x0;
          *DAT_14c844840 = (longlong ***)&PTR_FUN_149e19310;
          DAT_14c844840[2] = (longlong ***)0xffffffffffffffff;
          DAT_14c844840[3] = (longlong ***)0x0;
          DAT_14c844840[4] = (longlong ***)0x0;
          DAT_14c844840[5] = (longlong ***)0x0;
          if (DAT_14c844840 != (longlong ****)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
        local_188 = (longlong ***)DAT_14c844840;
        if (DAT_14c844840 != (longlong ****)0x0) {
          if ((*DAT_14c844840)[1] == (longlong **)FUN_144907e24) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
            UNLOCK();
          }
          else {
            (*(code *)(*DAT_14c844840)[1])();
          }
        }
        lVar22 = local_100;
        local_180 = 0;
        lVar13 = *(longlong *)(local_100 + 0x38);
        if (lVar13 == 0) {
          uVar12 = FUN_1465d56c2();
          lVar13 = FUN_14477b664(uVar12);
          *(longlong *)(lVar22 + 0x38) = lVar13;
        }
        plVar1 = (longlong *)(lVar22 + 0x30);
        lVar14 = *(longlong *)(lVar22 + 0x40);
        if (lVar14 == 0) {
          if ((lVar13 != 0) && (*plVar1 != 0)) {
            plVar5 = *(longlong **)(lVar13 + 0xb8);
            if ((plVar5 == (longlong *)0x0) ||
               (cVar9 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar9 == '\0')) {
              *(undefined8 *)(lVar22 + 0x40) = 0;
            }
            else {
              uVar12 = (**(code **)(*plVar5 + 0x110))(plVar5);
              lVar14 = FUN_144aff482(uVar12,plVar1);
              *(longlong *)(lVar22 + 0x40) = lVar14;
              if (lVar14 != 0) {
                lVar13 = *(longlong *)(lVar22 + 0x38);
                goto LAB_1442d0c1e;
              }
            }
          }
          FUN_1400b22c2(local_1c8,"DESIGNER: Fix My Category Name!");
          FUN_140233b1a(&local_148,local_1c8);
          bVar7 = false;
        }
        else {
LAB_1442d0c1e:
          if (lVar13 == 0) {
            uVar12 = FUN_1465d56c2();
            lVar13 = FUN_14477b664(uVar12);
            *(longlong *)(lVar22 + 0x38) = lVar13;
            lVar14 = *(longlong *)(lVar22 + 0x40);
            if (lVar14 == 0) {
              if (lVar13 == 0) {
                lVar14 = 0;
              }
              else {
                lVar14 = 0;
                if (*plVar1 != 0) {
                  plVar5 = *(longlong **)(lVar13 + 0xb8);
                  if ((plVar5 == (longlong *)0x0) ||
                     (cVar9 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar9 == '\0')) {
                    lVar14 = 0;
                  }
                  else {
                    uVar12 = (**(code **)(*plVar5 + 0x110))(plVar5);
                    lVar14 = FUN_144aff482(uVar12,plVar1);
                  }
                  *(longlong *)(lVar22 + 0x40) = lVar14;
                }
              }
            }
          }
          local_148 = *(longlong ****)(lVar14 + 0x18);
          if ((longlong ****)local_148 != (longlong ****)0x0) {
            (*(code *)(*local_148)[1])();
          }
          lStack_140 = CONCAT44(lStack_140._4_4_,*(undefined4 *)(lVar14 + 0x20));
          bVar7 = true;
        }
        ppplVar8 = local_1b8;
        if (local_1b8 != local_148) {
          local_1b8 = local_148;
          if ((longlong ****)local_148 != (longlong ****)0x0) {
            (*(code *)(*local_148)[1])();
          }
          if ((longlong ****)ppplVar8 != (longlong ****)0x0) {
            (*(code *)(*ppplVar8)[2])(ppplVar8);
          }
        }
        local_1b0 = (undefined4)lStack_140;
        if ((longlong ****)local_148 != (longlong ****)0x0) {
          (*(code *)(*local_148)[2])();
        }
        if ((!bVar7) && (local_1c8[0] != 0)) {
          FUN_1400020a8();
        }
        lVar13 = FUN_14090ae24(lVar22 + 0x48);
        if (lVar13 != 0) {
          FUN_140390f7a(lVar22 + 0x48,local_1a8);
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cbdd490) &&
           (FUN_144b3d300(&DAT_14cbdd490), DAT_14cbdd490 == -1)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
            DAT_14c844840 = (longlong ****)FUN_14001cc68(0x30,0x10);
            DAT_14c844840[1] = (longlong ***)0x0;
            *DAT_14c844840 = (longlong ***)&PTR_FUN_149e19310;
            DAT_14c844840[2] = (longlong ***)0xffffffffffffffff;
            DAT_14c844840[3] = (longlong ***)0x0;
            DAT_14c844840[4] = (longlong ***)0x0;
            DAT_14c844840[5] = (longlong ***)0x0;
            if (DAT_14c844840 != (longlong ****)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
          }
          DAT_14cbdd480 = DAT_14c844840;
          if (DAT_14c844840 != (longlong ****)0x0) {
            (*(code *)(*DAT_14c844840)[1])();
          }
          _DAT_14cbdd488 = DAT_14c844848;
          atexit((_func_5014 *)&LAB_1442d1e5f);
          _Init_thread_footer(&DAT_14cbdd490);
        }
        local_148 = (longlong ***)0x0;
        lStack_140 = 0;
        local_138[0] = 0;
        local_130 = 0;
        auStack_128[0] = 0;
        FUN_1446ddda2(&local_148,"BigMap_ActivityProgress",0);
        FUN_140ac6c96(&local_148,&DAT_14cbdd480);
        if (local_130 != 0) {
          FUN_1400020a8();
        }
        uVar26 = (ulonglong)local_d0;
        uVar24 = 1;
        uVar20 = 0;
        iVar18 = 0;
        uVar11 = 0;
        if (local_d0 != 0) {
          puVar15 = local_d8;
          if (local_d8 == (uint *)0x0) {
            puVar15 = local_e8;
          }
          uVar11 = *puVar15;
          if (uVar11 == 0) {
            iVar18 = local_d0 + 0x1e;
            if (-1 < (int)(local_d0 - 1)) {
              iVar18 = local_d0 - 1;
            }
            uVar20 = 0;
            uVar24 = (ulonglong)(uint)(iVar18 >> 5);
            if (iVar18 >> 5 < 1) {
              uVar24 = 0;
            }
            iVar18 = 0;
            do {
              if (uVar24 == uVar20) {
                local_314 = 0;
                goto LAB_1442d0e71;
              }
              iVar18 = iVar18 + 0x20;
              uVar11 = puVar15[uVar20 + 1];
              uVar20 = uVar20 + 1;
            } while (uVar11 == 0);
          }
          else {
            uVar20 = 0;
          }
          uVar24 = (ulonglong)(-uVar11 & uVar11);
          uVar4 = uVar24 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar11 = (iVar18 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if ((int)local_d0 <= (int)uVar11) {
            uVar11 = local_d0;
          }
        }
        local_314 = 0;
        if (uVar11 != local_d0) {
          uVar10 = 0xffffffff;
          local_314 = 0;
          local_310 = uVar26;
          do {
            local_148 = *(longlong ****)(local_f8[0] + (longlong)(int)uVar11 * 0x50);
            FUN_148e97258(&lStack_140);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
              DAT_14c844840 = (longlong ****)FUN_14001cc68(0x30,0x10);
              DAT_14c844840[1] = (longlong ***)0x0;
              *DAT_14c844840 = (longlong ***)&PTR_FUN_149e19310;
              DAT_14c844840[2] = (longlong ***)0xffffffffffffffff;
              DAT_14c844840[3] = (longlong ***)0x0;
              DAT_14c844840[4] = (longlong ***)0x0;
              DAT_14c844840[5] = (longlong ***)0x0;
              if (DAT_14c844840 != (longlong ****)0x0) {
                LOCK();
                *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
                UNLOCK();
              }
              DAT_14c844848 = 0;
              atexit(FUN_142760bef);
              _Init_thread_footer(&DAT_14c844850);
              uVar26 = local_310;
            }
            local_200 = (longlong ***)DAT_14c844840;
            if (DAT_14c844840 != (longlong ****)0x0) {
              if ((*DAT_14c844840)[1] == (longlong **)FUN_144907e24) {
                LOCK();
                *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
                UNLOCK();
              }
              else {
                (*(code *)(*DAT_14c844840)[1])();
              }
            }
            local_1f8 = (undefined1 *)((ulonglong)local_1f8 & 0xffffffff00000000);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
              DAT_14c844840 = (longlong ****)FUN_14001cc68(0x30,0x10);
              DAT_14c844840[1] = (longlong ***)0x0;
              *DAT_14c844840 = (longlong ***)&PTR_FUN_149e19310;
              DAT_14c844840[2] = (longlong ***)0xffffffffffffffff;
              DAT_14c844840[3] = (longlong ***)0x0;
              DAT_14c844840[4] = (longlong ***)0x0;
              DAT_14c844840[5] = (longlong ***)0x0;
              if (DAT_14c844840 != (longlong ****)0x0) {
                LOCK();
                *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
                UNLOCK();
              }
              DAT_14c844848 = 0;
              atexit(FUN_142760bef);
              _Init_thread_footer(&DAT_14c844850);
              uVar26 = local_310;
            }
            local_1f0 = (longlong ***)DAT_14c844840;
            if (DAT_14c844840 != (longlong ****)0x0) {
              if ((*DAT_14c844840)[1] == (longlong **)FUN_144907e24) {
                LOCK();
                *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
                UNLOCK();
              }
              else {
                (*(code *)(*DAT_14c844840)[1])();
              }
            }
            local_1e8 = 0;
            local_1e0 = 0;
            local_1de = 0;
            FUN_1400b22c2(local_1d8,&DAT_149e02088);
            ppplVar8 = local_148;
            pppplVar25 = (longlong ****)local_200;
            if (local_148 != (longlong ***)0x0) {
              if (local_130._4_1_ == '\x01') {
                pppplVar6 = (longlong ****)local_148[3];
                if (pppplVar6 == (longlong ****)0x0) {
                  uVar21 = *(undefined4 *)(local_148 + 4);
                  if ((longlong ****)local_200 == (longlong ****)0x0) {
                    local_1f8 = (undefined1 *)CONCAT44(local_1f8._4_4_,uVar21);
                  }
                  else {
                    local_200 = (longlong ***)0x0;
LAB_1442d161c:
                    (*(code *)(*pppplVar25)[2])(pppplVar25);
                    local_1f8 = (undefined1 *)CONCAT44(local_1f8._4_4_,uVar21);
                    if (pppplVar6 != (longlong ****)0x0) goto LAB_1442d1632;
                  }
                }
                else {
                  (*(code *)(*pppplVar6)[1])(pppplVar6);
                  pppplVar25 = (longlong ****)local_200;
                  uVar21 = *(undefined4 *)(ppplVar8 + 4);
                  if (((longlong ****)local_200 != pppplVar6) &&
                     (local_200 = (longlong ***)pppplVar6, (*(code *)(*pppplVar6)[1])(pppplVar6),
                     pppplVar25 != (longlong ****)0x0)) goto LAB_1442d161c;
                  local_1f8 = (undefined1 *)CONCAT44(local_1f8._4_4_,uVar21);
LAB_1442d1632:
                  (*(code *)(*pppplVar6)[2])(pppplVar6);
                }
                local_238 = 0;
                plStack_230 = (longlong *)0x0;
                FUN_1413a454c(local_228,local_138[0],0,&local_238);
                local_258 = 0;
                plStack_250 = (longlong *)0x0;
                FUN_1413a454c(local_248,local_130 & 0xffffffff,0,&local_258);
                FUN_14023409e(&local_268,&DAT_14cbdd480,1);
                local_a8 = CONCAT44(local_a8._4_4_,4);
                FUN_14023423e(local_98,local_248);
                uStack_88 = CONCAT44(uStack_88._4_4_,4);
                FUN_14023423e(local_78,local_228);
                local_168 = &local_a8;
                local_160 = local_68;
                FUN_14010d304(&local_158,&local_168);
                local_178 = local_268;
                plStack_170 = local_260;
                if (local_260 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_260 + 1) = (int)local_260[1] + 1;
                  UNLOCK();
                }
                FUN_14010c016(&local_218,&local_178,&local_158);
                FUN_14007f2db(local_158,(ulonglong)local_150 & 0xffffffff);
                if (local_158 != 0) {
                  FUN_1400020a8();
                }
                lVar13 = 0x30;
                do {
                  if (*(longlong **)((longlong)&local_a8 + lVar13) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)((longlong)&local_a8 + lVar13) + 0x10))();
                    *(undefined8 *)((longlong)&local_a8 + lVar13) = 0;
                    *(undefined4 *)((longlong)local_98 + lVar13 + -8) = 0;
                  }
                  plVar1 = local_260;
                  lVar13 = lVar13 + -0x20;
                } while (lVar13 != -0x10);
                if (local_260 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = local_260 + 1;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)*plVar5 == 0) {
                    (**(code **)*local_260)(local_260);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar1 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar1 + 0x10))(plVar1);
                    }
                  }
                }
                if (local_248[0] != (longlong *)0x0) {
                  (**(code **)(*local_248[0] + 0x10))();
                }
                if (local_228[0] != (longlong *)0x0) {
                  (**(code **)(*local_228[0] + 0x10))();
                }
                FUN_140008f88(&local_1f0,&local_218);
                if (local_218 != (longlong *)0x0) {
                  (**(code **)(*local_218 + 0x10))();
                }
                plVar1 = plStack_250;
                if (plStack_250 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = plStack_250 + 1;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)*plVar5 == 0) {
                    (**(code **)*plStack_250)(plStack_250);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar1 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar1 + 0x10))(plVar1);
                    }
                  }
                }
                plVar1 = plStack_230;
                if (plStack_230 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = plStack_230 + 1;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)*plVar5 == 0) {
                    (**(code **)*plStack_230)(plStack_230);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar1 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar1 + 0x10))(plVar1);
                    }
                  }
                }
                local_1e0 = CONCAT11(local_138[0] <= (int)local_130,
                                     (int)local_130 < local_138[0] && 0 < (int)local_130);
                local_314 = local_314 + (uint)((int)local_130 == local_138[0]);
              }
              else {
                local_a8 = 0;
                uStack_a0 = 0;
                local_98[0] = 0;
                local_90 = 0;
                uStack_88 = 0;
                local_2fc = iVar18;
                FUN_1446ddda2(&local_a8,"BigMap_Undiscovered",0);
                FUN_140ac6c96(&local_a8,&local_200);
                if (local_90 != 0) {
                  FUN_1400020a8();
                }
                FUN_1400b22c2(&local_238,&DAT_149eb5f2e);
                FUN_140233b1a(local_278,&local_238);
                FUN_1400b22c2(&local_258,&DAT_149eb5f2e);
                FUN_140233b1a(local_288,&local_258);
                FUN_14023409e(&local_298,&DAT_14cbdd480,1);
                local_a8 = CONCAT44(local_a8._4_4_,4);
                FUN_14023423e(local_98,local_288);
                uStack_88 = CONCAT44(uStack_88._4_4_,4);
                FUN_14023423e(local_78,local_278);
                local_160 = local_68;
                local_168 = &local_a8;
                FUN_14010d304(&local_158,&local_168);
                local_178 = local_298;
                plStack_170 = local_290;
                if (local_290 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_290 + 1) = (int)local_290[1] + 1;
                  UNLOCK();
                }
                FUN_14010c016(&local_218,&local_178,&local_158);
                FUN_14007f2db(local_158,(ulonglong)local_150 & 0xffffffff);
                if (local_158 != 0) {
                  FUN_1400020a8();
                }
                iVar18 = local_2fc;
                lVar13 = 0x30;
                do {
                  if (*(longlong **)((longlong)&local_a8 + lVar13) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)((longlong)&local_a8 + lVar13) + 0x10))();
                    *(undefined8 *)((longlong)&local_a8 + lVar13) = 0;
                    *(undefined4 *)((longlong)local_98 + lVar13 + -8) = 0;
                  }
                  plVar1 = local_290;
                  lVar13 = lVar13 + -0x20;
                } while (lVar13 != -0x10);
                if (local_290 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = local_290 + 1;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)*plVar5 == 0) {
                    (**(code **)*local_290)(local_290);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar1 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar1 + 0x10))(plVar1);
                    }
                  }
                }
                if (local_288[0] != (longlong *)0x0) {
                  (**(code **)(*local_288[0] + 0x10))();
                }
                if (local_278[0] != (longlong *)0x0) {
                  (**(code **)(*local_278[0] + 0x10))();
                }
                FUN_140008f88(&local_1f0,&local_218);
                if (local_218 != (longlong *)0x0) {
                  (**(code **)(*local_218 + 0x10))();
                }
                if (local_258 != 0) {
                  FUN_1400020a8();
                }
                if (local_238 != 0) {
                  FUN_1400020a8();
                }
                local_1de = 1;
              }
              FUN_140390f7a(auStack_128,local_1d8);
              uVar26 = uStack_190;
              lVar13 = (longlong)(int)uStack_190;
              uVar11 = (int)uStack_190 + 1;
              uStack_190 = CONCAT44(uStack_190._4_4_,uVar11);
              if (uStack_190._4_4_ < uVar11) {
                FUN_148e9cdea(&local_198,uVar26 & 0xffffffff);
              }
              FUN_148c6da9a(lVar13 * 0x38 + local_198,&local_200);
              uVar26 = local_310;
            }
            if (local_1d8[0] != 0) {
              FUN_1400020a8();
            }
            if ((longlong ****)local_1f0 != (longlong ****)0x0) {
              (*(code *)(*local_1f0)[2])();
            }
            if ((longlong ****)local_200 != (longlong ****)0x0) {
              (*(code *)(*local_200)[2])();
            }
            if (local_110 != 0) {
              FUN_1400020a8();
            }
            if (lStack_140 != 0) {
              FUN_1400020a8();
            }
            uVar10 = uVar10 & ~(uint)uVar24;
            puVar15 = local_d8;
            if (local_d8 == (uint *)0x0) {
              puVar15 = local_e8;
            }
            iVar19 = (int)uVar20;
            lVar13 = (longlong)iVar19;
            uVar11 = puVar15[lVar13] & uVar10;
            if (uVar11 == 0) {
              iVar16 = local_d0 + 0x1e;
              if (-1 < (int)(local_d0 - 1)) {
                iVar16 = local_d0 - 1;
              }
              iVar16 = iVar16 >> 5;
              iVar18 = iVar18 + 0x20;
              iVar17 = iVar16;
              if (iVar16 < iVar19) {
                iVar17 = iVar19;
              }
              if (iVar19 < iVar16) {
                lVar22 = 0;
                do {
                  uVar11 = puVar15[lVar13 + lVar22 + 1];
                  if (uVar11 != 0) {
                    uVar20 = (ulonglong)(iVar19 + (int)lVar22 + 1);
                    uVar10 = 0xffffffff;
                    goto LAB_1442d1a0a;
                  }
                  iVar18 = iVar18 + 0x20;
                  lVar22 = lVar22 + 1;
                } while (iVar17 - lVar13 != lVar22);
                uVar10 = 0xffffffff;
                iVar19 = iVar17;
              }
              uVar20 = (ulonglong)(iVar19 + 1);
              uVar26 = local_310;
              uVar11 = local_d0;
            }
            else {
LAB_1442d1a0a:
              uVar24 = (ulonglong)(-uVar11 & uVar11);
              uVar4 = uVar24 * 2 + 1;
              lVar13 = 0x3f;
              if (uVar4 != 0) {
                for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              uVar11 = (iVar18 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
              if ((int)local_d0 <= (int)uVar11) {
                uVar11 = local_d0;
              }
            }
          } while (uVar11 != (uint)uVar26);
        }
LAB_1442d0e71:
        local_178 = 0;
        plStack_170 = (longlong *)0x0;
        FUN_1413a454c(local_2a8,uStack_190 & 0xffffffff,0,&local_178);
        local_218 = (longlong *)0x0;
        plStack_210 = (longlong *)0x0;
        FUN_1413a454c(local_2b8,local_314,0,&local_218);
        FUN_14023409e(&local_2c8,&DAT_14cbdd480,1);
        local_148 = (longlong ***)CONCAT44(local_148._4_4_,4);
        FUN_14023423e(local_138,local_2b8);
        auStack_128[0] = CONCAT44(auStack_128[0]._4_4_,4);
        FUN_14023423e(local_118,local_2a8);
        local_200 = (longlong ***)&local_148;
        local_1f8 = local_108;
        FUN_14010d304(&local_a8,&local_200);
        local_158 = local_2c8;
        local_150 = local_2c0;
        if (local_2c0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_2c0 + 1) = (int)local_2c0[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(&local_168,&local_158,&local_a8);
        FUN_14007f2db(local_a8,uStack_a0 & 0xffffffff);
        uVar26 = local_2d0;
        plVar1 = local_2d8;
        uVar20 = local_2e8;
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
        lVar13 = 0x30;
        do {
          if (*(longlong **)((longlong)&local_148 + lVar13) != (longlong *)0x0) {
            (**(code **)(**(longlong **)((longlong)&local_148 + lVar13) + 0x10))();
            *(undefined8 *)((longlong)&local_148 + lVar13) = 0;
            *(undefined4 *)((longlong)local_138 + lVar13 + -8) = 0;
          }
          plVar5 = local_2c0;
          lVar13 = lVar13 + -0x20;
        } while (lVar13 != -0x10);
        if (local_2c0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_2c0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_2c0)(local_2c0);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        iVar18 = local_300;
        if (local_2b8[0] != (longlong *)0x0) {
          (**(code **)(*local_2b8[0] + 0x10))();
        }
        if (local_2a8[0] != (longlong *)0x0) {
          (**(code **)(*local_2a8[0] + 0x10))();
        }
        FUN_140008f88(&local_188,&local_168);
        if (local_168 != (longlong *)0x0) {
          (**(code **)(*local_168 + 0x10))();
        }
        plVar5 = plStack_210;
        if (plStack_210 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_210 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_210)(plStack_210);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        plVar5 = plStack_170;
        if (plStack_170 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_170 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_170)(plStack_170);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        iVar19 = (int)plVar1[1];
        *(uint *)(plVar1 + 1) = iVar19 + 1U;
        if (*(uint *)((longlong)plVar1 + 0xc) < iVar19 + 1U) {
          FUN_148e9ce7a(plVar1,iVar19);
        }
        FUN_148c6dfc6((longlong)iVar19 * 0x40 + *plVar1,&local_1b8);
        FUN_148c6d884(&local_1b8);
        local_b0 = 0;
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        FUN_1411347f0(local_f8);
        uVar23 = local_304 & ~(uint)uVar20;
        puVar15 = (uint *)local_2f0[4];
        if ((uint *)local_2f0[4] == (uint *)0x0) {
          puVar15 = local_2e0;
        }
        uVar11 = *(uint *)(local_2f0 + 5);
        iVar19 = (int)uVar26;
        lVar13 = (longlong)iVar19;
        uVar10 = puVar15[lVar13] & uVar23;
        if (uVar10 == 0) {
          iVar16 = uVar11 + 0x1e;
          if (-1 < (int)(uVar11 - 1)) {
            iVar16 = uVar11 - 1;
          }
          iVar16 = iVar16 >> 5;
          iVar18 = iVar18 + 0x20;
          iVar17 = iVar16;
          if (iVar16 < iVar19) {
            iVar17 = iVar19;
          }
          if (iVar19 < iVar16) {
            lVar22 = 0;
            do {
              uVar10 = puVar15[lVar13 + lVar22 + 1];
              if (uVar10 != 0) {
                uVar26 = (ulonglong)(iVar19 + (int)lVar22 + 1);
                uVar23 = 0xffffffff;
                goto LAB_1442d11ad;
              }
              iVar18 = iVar18 + 0x20;
              lVar22 = lVar22 + 1;
            } while (iVar17 - lVar13 != lVar22);
            uVar23 = 0xffffffff;
            iVar19 = iVar17;
          }
          uVar26 = (ulonglong)(iVar19 + 1);
          uVar20 = local_2e8;
          uVar10 = uVar11;
        }
        else {
LAB_1442d11ad:
          uVar20 = (ulonglong)(-uVar10 & uVar10);
          uVar24 = uVar20 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar10 = (iVar18 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if ((int)uVar11 <= (int)uVar10) {
            uVar10 = uVar11;
          }
        }
      } while (uVar10 != (uint)local_2f8);
    }
  }
LAB_1442d09b8:
  if ((local_60 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442d1e74 FUN_1442d1e74 body=634 status=ok
// SIG undefined FUN_1442d1e74(void)

ulonglong FUN_1442d1e74(longlong param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  int local_44;
  undefined1 local_40 [8];
  undefined1 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    uVar6 = *(uint *)(param_1 + 0x30);
    lVar3 = 0;
    if (((int)uVar6 < 0) || (DAT_14c9647dc <= (int)uVar6)) goto LAB_1442d1eeb;
    plVar4 = (longlong *)
             ((ulonglong)((uVar6 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       (((int)plVar4[2] == iVar1 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
      lVar3 = *plVar4;
      goto LAB_1442d1eeb;
    }
  }
  lVar3 = 0;
LAB_1442d1eeb:
  lVar3 = *(longlong *)(lVar3 + 0x598);
  uVar7 = 0;
  if (lVar3 != 0) {
    local_58 = 0;
    local_50 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_4c = 0xffffffff00000080;
    local_44 = 0;
    local_38 = (undefined1 *)0x0;
    local_30 = 0;
    if (iVar1 != 0) {
      uVar6 = *(uint *)(param_1 + 0x30);
      uVar7 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
        puVar5 = (ulonglong *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if ((puVar5 == (ulonglong *)0x0) ||
           (((int)puVar5[2] != iVar1 || ((puVar5[1] & 0x10200000) != 0)))) {
          uVar7 = 0;
        }
        else {
          uVar7 = *puVar5;
        }
      }
    }
    uVar2 = FUN_14101baae(uVar7);
    FUN_143ebc044(lVar3,uVar2,&local_78);
    if (((((param_2 >> 0x20 != 0) && (uVar6 = (uint)param_2, -1 < (int)uVar6)) &&
         ((int)uVar6 < DAT_14c9647dc)) &&
        ((plVar4 = (longlong *)
                   ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0xd & 0x3fff8))),
         plVar4 != (longlong *)0x0 && ((int)plVar4[2] == (int)(param_2 >> 0x20))))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
        ((*plVar4 != 0 && ((int)uStack_70 != local_44)))))) {
      lVar3 = *(longlong *)(*plVar4 + 0x18);
      uVar6 = (uint)((ulonglong)lVar3 >> 0x10);
      uVar8 = (uint)lVar3 & 0xffff;
      puVar9 = local_38;
      if (local_38 == (undefined1 *)0x0) {
        puVar9 = local_40;
      }
      iVar1 = *(int *)(puVar9 + (ulonglong)
                                (local_30 - 1U &
                                (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar8) +
                                (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar8 >> 4)) * 4);
      while (iVar1 != -1) {
        plVar4 = (longlong *)(local_78 + (longlong)iVar1 * 0x14);
        if (*plVar4 == lVar3) {
          if (plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) {
            uVar7 = CONCAT71((int7)(uVar7 >> 8),0 < (int)plVar4[1]);
            goto LAB_1442d2087;
          }
          break;
        }
        iVar1 = *(int *)((longlong)plVar4 + 0xc);
      }
    }
    uVar7 = 0;
LAB_1442d2087:
    local_30 = 0;
    if (local_38 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1401ad17c(&local_78);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442d221e FUN_1442d221e body=462 status=ok
// SIG undefined FUN_1442d221e(void)

void FUN_1442d221e(longlong param_1)

{
  uint uVar1;
  ushort *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14588cd9e();
  if (((*(int *)(param_1 + 0x34) == 0) || (uVar1 = *(uint *)(param_1 + 0x30), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) goto LAB_1442d23bd;
  plVar3 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar3 == (longlong *)0x0) || ((int)plVar3[2] != *(int *)(param_1 + 0x34))) ||
     ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)) goto LAB_1442d23bd;
  if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
    lVar6 = *plVar3;
  }
  else {
    lVar6 = 0;
  }
  if (((*(int *)(lVar6 + 0x388) == 0) || (uVar1 = *(uint *)(lVar6 + 900), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) goto LAB_1442d23bd;
  lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (((lVar7 == 0) || (*(int *)(lVar7 + 0x10) != *(int *)(lVar6 + 0x388))) ||
     ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) goto LAB_1442d23bd;
  local_28[0] = 0;
  local_28[1] = 0;
  if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
    lVar6 = *plVar3;
  }
  else {
    lVar6 = 0;
  }
  if (*(int *)(lVar6 + 0x388) == 0) {
LAB_1442d23da:
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar6 + 900);
    uVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != *(int *)(lVar6 + 0x388) ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_1442d23da;
      uVar4 = *puVar5;
    }
  }
  FUN_1405b0040(uVar4,local_28);
  lVar6 = *(longlong *)(param_1 + 0x288);
  if (lVar6 != 0) {
    *(undefined1 *)(lVar6 + 0x140) = 0;
    puVar2 = *(ushort **)(lVar6 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
    }
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
LAB_1442d23bd:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442d23f4 FUN_1442d23f4 body=314 status=ok
// SIG undefined FUN_1442d23f4(void)

void FUN_1442d23f4(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  
  FUN_1407cbc56();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    puVar4 = &DAT_14c9a1308;
    puVar3 = &DAT_14c9a1308;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      puVar3 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdd6a8);
    }
    uVar5 = FUN_140b963dc(puVar3,0x3f000000);
    *(undefined4 *)(param_1 + 0x2d0) = uVar5;
    puVar3 = &DAT_14c9a1308;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      puVar3 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdd6b0);
    }
    uVar5 = FUN_140b963dc(puVar3,0x40000000);
    *(undefined4 *)(param_1 + 0x2d4) = uVar5;
    uVar5 = *(undefined4 *)(param_1 + 0x2d0);
    *(undefined4 *)(lVar1 + 0x118) = uVar5;
    *(undefined4 *)(lVar1 + 0x11c) = uVar5;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      puVar4 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdd6a0);
    }
    uVar5 = FUN_140e1edd4(puVar4,10);
    *(undefined4 *)(lVar1 + 0x120) = uVar5;
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
    if (*(longlong *)(param_1 + 0x288) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x13c) = *(undefined4 *)(param_1 + 0x2b8);
    }
  }
  if (DAT_14c9a16c8 != 0) {
    FUN_142b20f72();
  }
  FUN_148e92b42(param_1);
  FUN_148e92cdc(param_1);
  FUN_1442d252e(param_1);
  return;
}



// FUNCTION 1442d252e FUN_1442d252e body=4271 status=ok
// SIG undefined FUN_1442d252e(void)

void FUN_1442d252e(longlong param_1)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  code *pcVar4;
  void *_Src;
  ushort *puVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  size_t sVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  longlong *plVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong *plVar26;
  undefined4 uVar27;
  undefined1 auStack_258 [32];
  longlong *local_238;
  int local_22c;
  longlong local_228;
  uint local_21c;
  longlong *local_218;
  longlong local_210;
  ulonglong local_208;
  longlong local_200;
  ulonglong local_1f8;
  longlong local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  longlong *plStack_1d8;
  undefined8 local_1d0;
  ulonglong uStack_1c8;
  ulonglong local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  longlong *plStack_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  int iStack_190;
  undefined8 uStack_18c;
  ulonglong local_180;
  longlong *local_178;
  uint5 uStack_170;
  undefined3 uStack_16b;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_180 = 0;
  lVar25 = *(longlong *)(param_1 + 0x288);
  if (lVar25 == 0) goto LAB_1442d26b1;
  uVar9 = *(uint *)(lVar25 + 0x144);
  if (*(char *)(lVar25 + 0x138) == '\x01') {
    if (*(longlong *)(param_1 + 0x160) == 0) {
      puVar10 = &DAT_14c9a1308;
    }
    else {
      puVar10 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdd6b8);
    }
    uVar8 = FUN_140e1edd4(puVar10,0);
    if ((uVar9 == uVar8) && (lVar11 = FUN_140391552(param_1), lVar11 != 0)) {
      puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar10 = &PTR_FUN_14b9c6d90;
      *(undefined1 *)(puVar10 + 1) = 3;
      *(undefined8 *)((longlong)puVar10 + 0xc) = DAT_14caa8578;
      FUN_14039144e(lVar11,puVar10);
    }
    uVar9 = *(uint *)(lVar25 + 0x144);
    if (((int)uVar9 < 0) || (lVar11 = 0x2b0, *(int *)(param_1 + 0x2b8) <= (int)uVar9))
    goto LAB_1442d26b1;
  }
  else if (((int)uVar9 < 0) || (lVar11 = 0x2c0, *(int *)(param_1 + 0x2c8) <= (int)uVar9))
  goto LAB_1442d26b1;
  *(uint *)(lVar25 + 0x144) = uVar9 + 1;
  local_180 = *(ulonglong *)(*(longlong *)(param_1 + lVar11) + (ulonglong)uVar9 * 8);
  if (local_180 == 0) goto LAB_1442d26b1;
  plVar26 = &DAT_14c9a1308;
  plVar12 = &DAT_14c9a1308;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    pcVar15 = "sections";
    if (*(char *)(lVar25 + 0x138) != '\0') {
      pcVar15 = "gbx_sections";
    }
    plVar12 = (longlong *)FUN_1408db3b0(*(longlong *)(param_1 + 0x160),pcVar15);
  }
  if (*plVar12 != 0) {
    plVar26 = (longlong *)FUN_1446e60f4(*plVar12,&local_180);
  }
  if (((byte *)*plVar26 == (byte *)0x0) || ((*(byte *)*plVar26 & 0x6b) != 3)) goto LAB_1442d26b1;
  iStack_190 = 0;
  uStack_18c = 0;
  local_1a0 = 0;
  local_198 = 0;
  uStack_194 = 0;
  local_1b0 = 0;
  plStack_1a8 = (longlong *)0x0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1e0 = 0;
  plStack_1d8 = (longlong *)0x0;
  local_1e8 = local_180;
  local_178 = (longlong *)&DAT_14acb8ea6;
  uStack_170 = 4;
  uVar9 = FUN_14001a6c0(&local_178,1);
  uStack_1c8 = (ulonglong)uVar9;
  local_178 = (longlong *)0x14b503f38;
  _uStack_170 = CONCAT35(uStack_16b,5);
  uVar9 = FUN_14001a6c0(&local_178,1);
  local_1c0 = (ulonglong)uVar9;
  FUN_1400b22c2(&local_178,"department");
  if (plStack_1a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  plStack_1a8 = local_178;
  local_1a0 = _uStack_170;
  if (*plVar26 == 0) {
    puVar10 = &DAT_14c9a1308;
  }
  else {
    puVar10 = (undefined8 *)FUN_1408db3b0(*plVar26,"display_title");
  }
  pbVar3 = (byte *)*puVar10;
  local_238 = plVar26;
  if (((pbVar3 != (byte *)0x0) && ((*pbVar3 & 3) == 1)) &&
     (pcVar15 = *(char **)(pbVar3 + 8), pcVar15 != (char *)0x0)) {
    local_78 = 0;
    sVar13 = strlen(pcVar15);
    FUN_1446e6fe8(&local_178,pcVar15,sVar13 & 0xffffffff,1);
    FUN_14020fad6(&uStack_1b8,local_70);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  plVar12 = local_238;
  if (*local_238 == 0) {
    puVar10 = &DAT_14c9a1308;
  }
  else {
    puVar10 = (undefined8 *)FUN_1408db3b0(*local_238,"layout");
  }
  if (((byte *)*puVar10 != (byte *)0x0) && ((*(byte *)*puVar10 & 3) == 1)) {
    if (*plVar12 == 0) {
      puVar10 = &DAT_14c9a1308;
    }
    else {
      puVar10 = (undefined8 *)FUN_1408db3b0(*plVar12,"layout");
    }
    pbVar3 = (byte *)*puVar10;
    if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined8 *)(pbVar3 + 8);
    }
    FUN_1400b22c2(&local_178,uVar14);
    if (plStack_1a8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    plStack_1a8 = local_178;
    local_1a0 = _uStack_170;
  }
  if (*plVar12 == 0) {
    puVar10 = &DAT_14c9a1308;
  }
  else {
    puVar10 = (undefined8 *)FUN_1408db3b0(*plVar12,"source");
  }
  if (((byte *)*puVar10 != (byte *)0x0) && ((*(byte *)*puVar10 & 3) == 1)) {
    if (*plVar12 == 0) {
      puVar10 = &DAT_14c9a1308;
    }
    else {
      puVar10 = (undefined8 *)FUN_1408db3b0(*plVar12,"source");
    }
    pbVar3 = (byte *)*puVar10;
    if (((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) ||
       (plVar26 = *(longlong **)(pbVar3 + 8), plVar26 == (longlong *)0x0)) {
LAB_1442d293b:
      local_1e8 = 0;
      uVar17 = 0;
    }
    else {
      sVar13 = strlen((char *)plVar26);
      uVar9 = (uint)sVar13;
      if (uVar9 == 0) goto LAB_1442d293b;
      lVar11 = (longlong)(int)uVar9;
      plVar22 = (longlong *)((longlong)plVar26 + lVar11 + -1);
      uVar8 = 0;
      if (plVar22 < plVar26) {
        lVar18 = 0;
      }
      else {
        do {
          if (9 < (byte)((char)*plVar22 - 0x30U)) break;
          uVar8 = uVar8 + 1;
          plVar22 = (longlong *)((longlong)plVar22 + -1);
        } while (plVar26 <= plVar22);
        lVar18 = 0;
        if (((uVar8 != 0) && ((int)uVar8 < (int)uVar9)) &&
           ((lVar18 = 0, plVar12 = local_238, uVar8 < 0xb &&
            (lVar23 = -(ulonglong)uVar8, *(char *)((longlong)plVar26 + lVar23 + lVar11 + -1) == '_')
            ))) {
          if ((uVar8 == 1) || (*(char *)((longlong)plVar26 + lVar23 + lVar11) != '0')) {
            lVar20 = 0;
            do {
              lVar18 = (longlong)*(char *)((longlong)plVar26 + lVar23 + lVar11) + lVar20 * 10;
              lVar20 = lVar18 + -0x30;
              lVar23 = lVar23 + 1;
            } while (lVar23 != 0);
            if (lVar20 < 0x7fffffff) {
              uVar9 = ~uVar8 + uVar9;
              lVar18 = lVar18 + -0x2f;
              goto LAB_1442d29a0;
            }
          }
          lVar18 = 0;
        }
LAB_1442d29a0:
        if (uVar9 == 0) goto LAB_1442d293b;
      }
      uStack_170 = (uint5)uVar9;
      local_178 = plVar26;
      uVar9 = FUN_14001a6c0(&local_178,1);
      uVar17 = lVar18 << 0x20;
      local_1e8 = (ulonglong)uVar9;
    }
    local_1e8 = local_1e8 | uVar17;
  }
  if (*plVar12 == 0) {
    puVar10 = &DAT_14c9a1308;
  }
  else {
    puVar10 = (undefined8 *)FUN_1408db3b0(*plVar12,"filter_column");
  }
  if (((byte *)*puVar10 != (byte *)0x0) && ((*(byte *)*puVar10 & 3) == 1)) {
    if (*plVar12 == 0) {
      puVar10 = &DAT_14c9a1308;
    }
    else {
      puVar10 = (undefined8 *)FUN_1408db3b0(*plVar12,"filter_column");
    }
    pbVar3 = (byte *)*puVar10;
    if (((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) ||
       (plVar26 = *(longlong **)(pbVar3 + 8), plVar26 == (longlong *)0x0)) {
LAB_1442d2a1e:
      local_1e0 = 0;
      uVar17 = 0;
    }
    else {
      sVar13 = strlen((char *)plVar26);
      uVar9 = (uint)sVar13;
      if (uVar9 == 0) goto LAB_1442d2a1e;
      lVar11 = (longlong)(int)uVar9;
      plVar22 = (longlong *)((longlong)plVar26 + lVar11 + -1);
      uVar8 = 0;
      if (plVar22 < plVar26) {
        lVar18 = 0;
      }
      else {
        do {
          if (9 < (byte)((char)*plVar22 - 0x30U)) break;
          uVar8 = uVar8 + 1;
          plVar22 = (longlong *)((longlong)plVar22 + -1);
        } while (plVar26 <= plVar22);
        lVar18 = 0;
        if (((uVar8 != 0) && ((int)uVar8 < (int)uVar9)) &&
           ((lVar18 = 0, plVar12 = local_238, uVar8 < 0xb &&
            (lVar23 = -(ulonglong)uVar8, *(char *)((longlong)plVar26 + lVar23 + lVar11 + -1) == '_')
            ))) {
          if ((uVar8 == 1) || (*(char *)((longlong)plVar26 + lVar23 + lVar11) != '0')) {
            lVar20 = 0;
            do {
              lVar18 = (longlong)*(char *)((longlong)plVar26 + lVar23 + lVar11) + lVar20 * 10;
              lVar20 = lVar18 + -0x30;
              lVar23 = lVar23 + 1;
            } while (lVar23 != 0);
            if (lVar20 < 0x7fffffff) {
              uVar9 = ~uVar8 + uVar9;
              lVar18 = lVar18 + -0x2f;
              goto LAB_1442d2a83;
            }
          }
          lVar18 = 0;
        }
LAB_1442d2a83:
        if (uVar9 == 0) goto LAB_1442d2a1e;
      }
      uStack_170 = (uint5)uVar9;
      local_178 = plVar26;
      uVar9 = FUN_14001a6c0(&local_178,1);
      uVar17 = lVar18 << 0x20;
      local_1e0 = (ulonglong)uVar9;
    }
    local_1e0 = local_1e0 | uVar17;
  }
  if (*plVar12 == 0) {
    puVar10 = &DAT_14c9a1308;
  }
  else {
    puVar10 = (undefined8 *)FUN_1408db3b0(*plVar12,"filter_match");
  }
  if (((byte *)*puVar10 != (byte *)0x0) && ((*(byte *)*puVar10 & 3) == 1)) {
    if (*plVar12 == 0) {
      puVar10 = &DAT_14c9a1308;
    }
    else {
      puVar10 = (undefined8 *)FUN_1408db3b0(*plVar12,"filter_match");
    }
    pbVar3 = (byte *)*puVar10;
    if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined8 *)(pbVar3 + 8);
    }
    FUN_1400b22c2(&local_178,uVar14);
    if (plStack_1d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    plStack_1d8 = local_178;
    local_1d0 = _uStack_170;
  }
  if (*plVar12 == 0) {
    puVar10 = &DAT_14c9a1308;
  }
  else {
    puVar10 = (undefined8 *)FUN_1408db3b0(*plVar12,"name_column");
  }
  if (((byte *)*puVar10 != (byte *)0x0) && ((*(byte *)*puVar10 & 3) == 1)) {
    if (*plVar12 == 0) {
      puVar10 = &DAT_14c9a1308;
    }
    else {
      puVar10 = (undefined8 *)FUN_1408db3b0(*plVar12,"name_column");
    }
    pbVar3 = (byte *)*puVar10;
    if (((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) ||
       (plVar26 = *(longlong **)(pbVar3 + 8), plVar26 == (longlong *)0x0)) {
LAB_1442d2b8a:
      uStack_1c8 = 0;
      uVar17 = 0;
    }
    else {
      sVar13 = strlen((char *)plVar26);
      uVar9 = (uint)sVar13;
      if (uVar9 == 0) goto LAB_1442d2b8a;
      lVar11 = (longlong)(int)uVar9;
      plVar22 = (longlong *)((longlong)plVar26 + lVar11 + -1);
      uVar8 = 0;
      if (plVar22 < plVar26) {
        lVar18 = 0;
      }
      else {
        do {
          if (9 < (byte)((char)*plVar22 - 0x30U)) break;
          uVar8 = uVar8 + 1;
          plVar22 = (longlong *)((longlong)plVar22 + -1);
        } while (plVar26 <= plVar22);
        lVar18 = 0;
        if (((uVar8 != 0) && ((int)uVar8 < (int)uVar9)) &&
           ((lVar18 = 0, plVar12 = local_238, uVar8 < 0xb &&
            (lVar23 = -(ulonglong)uVar8, *(char *)((longlong)plVar26 + lVar23 + lVar11 + -1) == '_')
            ))) {
          if ((uVar8 == 1) || (*(char *)((longlong)plVar26 + lVar23 + lVar11) != '0')) {
            lVar20 = 0;
            do {
              lVar18 = (longlong)*(char *)((longlong)plVar26 + lVar23 + lVar11) + lVar20 * 10;
              lVar20 = lVar18 + -0x30;
              lVar23 = lVar23 + 1;
            } while (lVar23 != 0);
            if (lVar20 < 0x7fffffff) {
              uVar9 = ~uVar8 + uVar9;
              lVar18 = lVar18 + -0x2f;
              goto LAB_1442d2bef;
            }
          }
          lVar18 = 0;
        }
LAB_1442d2bef:
        if (uVar9 == 0) goto LAB_1442d2b8a;
      }
      uStack_170 = (uint5)uVar9;
      local_178 = plVar26;
      uVar9 = FUN_14001a6c0(&local_178,1);
      uVar17 = lVar18 << 0x20;
      uStack_1c8 = (ulonglong)uVar9;
    }
    uStack_1c8 = uStack_1c8 | uVar17;
  }
  if (*plVar12 == 0) {
    puVar10 = &DAT_14c9a1308;
  }
  else {
    puVar10 = (undefined8 *)FUN_1408db3b0(*plVar12,"data_column");
  }
  if (((byte *)*puVar10 == (byte *)0x0) || ((*(byte *)*puVar10 & 3) != 1)) goto LAB_1442d2d06;
  if (*plVar12 == 0) {
    puVar10 = &DAT_14c9a1308;
  }
  else {
    puVar10 = (undefined8 *)FUN_1408db3b0(*plVar12,"data_column");
  }
  pbVar3 = (byte *)*puVar10;
  if (((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) ||
     (plVar26 = *(longlong **)(pbVar3 + 8), plVar26 == (longlong *)0x0)) {
LAB_1442d2c70:
    local_1c0 = 0;
    uVar17 = 0;
  }
  else {
    sVar13 = strlen((char *)plVar26);
    uVar9 = (uint)sVar13;
    if (uVar9 == 0) goto LAB_1442d2c70;
    lVar11 = (longlong)(int)uVar9;
    plVar22 = (longlong *)((longlong)plVar26 + lVar11 + -1);
    uVar8 = 0;
    if (plVar22 < plVar26) {
      lVar18 = 0;
    }
    else {
      do {
        if (9 < (byte)((char)*plVar22 - 0x30U)) break;
        uVar8 = uVar8 + 1;
        plVar22 = (longlong *)((longlong)plVar22 + -1);
      } while (plVar26 <= plVar22);
      lVar18 = 0;
      if (((uVar8 != 0) && ((int)uVar8 < (int)uVar9)) &&
         ((lVar18 = 0, plVar12 = local_238, uVar8 < 0xb &&
          (lVar23 = -(ulonglong)uVar8, *(char *)((longlong)plVar26 + lVar23 + lVar11 + -1) == '_')))
         ) {
        if ((uVar8 == 1) || (*(char *)((longlong)plVar26 + lVar23 + lVar11) != '0')) {
          lVar20 = 0;
          do {
            lVar18 = (longlong)*(char *)((longlong)plVar26 + lVar23 + lVar11) + lVar20 * 10;
            lVar20 = lVar18 + -0x30;
            lVar23 = lVar23 + 1;
          } while (lVar23 != 0);
          if (lVar20 < 0x7fffffff) {
            uVar9 = ~uVar8 + uVar9;
            lVar18 = lVar18 + -0x2f;
            goto LAB_1442d2cd5;
          }
        }
        lVar18 = 0;
      }
LAB_1442d2cd5:
      if (uVar9 == 0) goto LAB_1442d2c70;
    }
    uStack_170 = (uint5)uVar9;
    local_178 = plVar26;
    uVar9 = FUN_14001a6c0(&local_178,1);
    uVar17 = lVar18 << 0x20;
    local_1c0 = (ulonglong)uVar9;
  }
  local_1c0 = local_1c0 | uVar17;
LAB_1442d2d06:
  if (*plVar12 == 0) {
    puVar10 = &DAT_14c9a1308;
  }
  else {
    puVar10 = (undefined8 *)FUN_1408db3b0(*plVar12,"delay");
  }
  uVar27 = FUN_140b963dc(puVar10,0);
  uStack_18c = CONCAT44(uVar27,(undefined4)uStack_18c);
  FUN_144a2b0a4(&plStack_1a8);
  plVar12 = local_238;
  plVar26 = (longlong *)&DAT_149dfb77a;
  if ((int)uStack_170 != 0) {
    plVar26 = local_178;
  }
  lVar11 = 0;
  do {
    uVar2 = *(ushort *)((longlong)plVar26 + lVar11 * 2);
    bVar1 = "header"[lVar11];
    iVar19 = (uint)uVar2 - (uint)bVar1;
    if (iVar19 == 0) {
      iVar19 = 0;
      if (uVar2 == 0) goto LAB_1442d2dbf;
    }
    else {
      if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_1442d2dbf;
      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) break;
    }
    lVar11 = lVar11 + 1;
  } while( true );
  iVar19 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_1442d2dbf:
  if (local_178 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (iVar19 != 0) {
    if (local_1e8 == DAT_14cbdd6c8) {
      lVar11 = FUN_148e935dc(&local_198);
      puVar16 = &DAT_14cbdd6d8;
    }
    else {
      if (local_1e8 != DAT_14cbdd6d0) {
        if (DAT_14c9a16c8 != 0) {
          FUN_142b21a00(DAT_14c9a16c8,&local_1e8,&local_198,&uStack_1b8);
        }
        goto LAB_1442d2ee7;
      }
      lVar11 = FUN_148e935dc(&local_198);
      puVar16 = &DAT_14cbdd728;
    }
    FUN_1410d1eba(&local_178,puVar16);
    plVar26 = local_178;
    plVar12 = local_178;
    if (*(code **)(*local_178 + 0x50) != FUN_144828418) {
      plVar12 = (longlong *)(**(code **)(*local_178 + 0x50))(local_178);
    }
    FUN_1447a1fc0(plVar12);
    pcVar4 = *(code **)(*plVar26 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar12 = (longlong *)(plVar26[5] + 8);
      if (plVar26[5] == 0) {
        plVar12 = plVar26 + 3;
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar12 = plVar26 + 2;
    }
    else {
      plVar12 = (longlong *)(*pcVar4)(plVar26);
    }
    plVar22 = (longlong *)(lVar11 + 0x10);
    if (plVar22 != plVar12) {
      iVar19 = (int)plVar12[1];
      _Src = (void *)*plVar12;
      *(int *)(lVar11 + 0x18) = iVar19;
      if (iVar19 == 0 && *(int *)(lVar11 + 0x1c) == 0) {
        *(undefined4 *)(lVar11 + 0x1c) = 0;
      }
      else {
        FUN_1446dd670(plVar22,iVar19);
        if (iVar19 != 0) {
          memcpy((void *)*plVar22,_Src,(longlong)iVar19 * 2);
        }
      }
    }
    plVar12 = local_238;
    if (plVar26 != (longlong *)0x0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      plVar12 = local_238;
    }
  }
LAB_1442d2ee7:
  if (*plVar12 == 0) {
    puVar10 = &DAT_14c9a1308;
  }
  else {
    puVar10 = (undefined8 *)FUN_1408db3b0(*plVar12,"maxnumlines");
  }
  uVar9 = FUN_140e1edd4(puVar10,0);
  if ((int)uVar9 < 1) {
    iVar19 = *(int *)(lVar25 + 0x130);
    *(uint *)(lVar25 + 0x130) = iVar19 + 1U;
    if (*(uint *)(lVar25 + 0x134) < iVar19 + 1U) {
      FUN_148ea0504((longlong *)(lVar25 + 0x128),iVar19);
    }
    FUN_148c742f4((longlong)iVar19 * 0x68 + *(longlong *)(lVar25 + 0x128),&local_1e8);
  }
  else {
    local_22c = (int)ROUND(-0.5 - ((float)iStack_190 / (float)(int)uVar9 +
                                  (float)iStack_190 / (float)(int)uVar9)) >> 1;
    local_210 = param_1;
    if (local_22c < 0) {
      local_1f8 = (ulonglong)(uint)-local_22c;
      local_218 = (longlong *)(lVar25 + 0x128);
      local_200 = (ulonglong)uVar9 * 0x28;
      local_228 = 0x20;
      uVar17 = 0;
      iVar19 = 0;
      local_21c = uVar9;
      local_208 = (ulonglong)uVar9;
      local_1f0 = lVar25;
      do {
        local_128 = 0;
        uStack_120 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_178 = (longlong *)0x0;
        _uStack_170 = 0;
        local_118 = 0;
        if (uVar17 == 0) {
          local_118 = uStack_18c._4_4_;
          local_148 = uStack_1b8;
          uStack_140 = local_1b0;
          uStack_1b8 = 0;
          local_1b0 = 0;
        }
        iVar21 = (int)local_1a0 + -1;
        if ((int)local_1a0 == 0) {
          iVar21 = 0;
        }
        FUN_1402980a2(&local_138,plStack_1a8,iVar21);
        uVar24 = local_208;
        lVar25 = local_228;
        iVar21 = iVar19;
        if (-1 < iVar19) {
          do {
            uVar6 = uStack_120;
            if (iStack_190 <= iVar21) break;
            lVar11 = CONCAT44(uStack_194,local_198);
            lVar18 = (longlong)(int)uStack_120;
            uVar9 = (int)uStack_120 + 1;
            uStack_120 = CONCAT44(uStack_120._4_4_,uVar9);
            if (uStack_120._4_4_ < uVar9) {
              FUN_14709f52a(&local_128,uVar6 & 0xffffffff);
            }
            *(undefined8 *)(local_128 + lVar18 * 0x28) = 0;
            *(undefined8 *)(local_128 + lVar18 * 0x28) = *(undefined8 *)(lVar11 + -0x20 + lVar25);
            *(undefined8 *)(lVar11 + -0x20 + lVar25) = 0;
            *(undefined4 *)(local_128 + 8 + lVar18 * 0x28) =
                 *(undefined4 *)(lVar11 + -0x18 + lVar25);
            *(undefined4 *)(local_128 + 0xc + lVar18 * 0x28) =
                 *(undefined4 *)(lVar11 + -0x14 + lVar25);
            *(undefined8 *)(lVar11 + -0x18 + lVar25) = 0;
            *(undefined8 *)(local_128 + 0x10 + lVar18 * 0x28) = 0;
            *(undefined8 *)(local_128 + 0x10 + lVar18 * 0x28) =
                 *(undefined8 *)(lVar11 + -0x10 + lVar25);
            *(undefined8 *)(lVar11 + -0x10 + lVar25) = 0;
            *(undefined4 *)(local_128 + 0x18 + lVar18 * 0x28) =
                 *(undefined4 *)(lVar11 + -8 + lVar25);
            *(undefined4 *)(local_128 + 0x1c + lVar18 * 0x28) =
                 *(undefined4 *)(lVar11 + -4 + lVar25);
            *(undefined8 *)(lVar11 + -8 + lVar25) = 0;
            *(undefined4 *)(local_128 + 0x20 + lVar18 * 0x28) = *(undefined4 *)(lVar11 + lVar25);
            uVar24 = uVar24 - 1;
            lVar25 = lVar25 + 0x28;
            iVar21 = iVar21 + 1;
          } while (uVar24 != 0);
        }
        lVar25 = local_1f0;
        iVar21 = *(int *)(local_1f0 + 0x130);
        *(uint *)(local_1f0 + 0x130) = iVar21 + 1U;
        if (*(uint *)(local_1f0 + 0x134) < iVar21 + 1U) {
          FUN_148ea0504(local_218,iVar21);
        }
        FUN_148c742f4((longlong)iVar21 * 0x68 + *local_218,&local_178);
        FUN_148c73c0a(&local_178);
        uVar17 = uVar17 + 1;
        iVar19 = iVar19 + local_21c;
        local_228 = local_228 + local_200;
      } while (uVar17 != local_1f8);
    }
    FUN_1400020e8(*(longlong *)(lVar25 + 0x128) + (longlong)*(int *)(lVar25 + 0x130) * 0x68 + -0x28,
                  L" footer",7);
    *(int *)(lVar25 + 0x13c) = *(int *)(lVar25 + 0x13c) + (local_22c >> 0x1f & 1U - local_22c);
    param_1 = local_210;
    plVar12 = local_238;
  }
  if (*plVar12 == 0) {
    puVar10 = &DAT_14c9a1308;
  }
  else {
    puVar10 = (undefined8 *)FUN_1408db3b0(*plVar12,"pause_slideshow");
  }
  if (((byte *)*puVar10 != (byte *)0x0) && ((*(byte *)*puVar10 & 3) == 1)) {
    if (*plVar12 == 0) {
      plVar12 = &DAT_14c9a1308;
    }
    else {
      plVar12 = (longlong *)FUN_1408db3b0(*plVar12,"pause_slideshow");
    }
    if (*plVar12 == 0) {
      cVar7 = '\x06';
    }
    else {
      cVar7 = FUN_14000584e(*plVar12,0);
      cVar7 = '\x06' - cVar7;
    }
    if (((((*(int *)(param_1 + 0x34) != 0) && (uVar9 = *(uint *)(param_1 + 0x30), -1 < (int)uVar9))
         && ((int)uVar9 < DAT_14c9647dc)) &&
        ((puVar10 = (undefined8 *)
                    ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
         puVar10 != (undefined8 *)0x0 && (*(int *)(puVar10 + 2) == *(int *)(param_1 + 0x34))))) &&
       ((*(uint *)(puVar10 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar10 + 1) & 0x10200000) == 0) {
        uVar14 = *puVar10;
      }
      else {
        uVar14 = 0;
      }
      lVar11 = FUN_140391a3c(uVar14);
      if (lVar11 != 0) {
        puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *puVar10 = &PTR_FUN_14b9c6d90;
        *(char *)(puVar10 + 1) = cVar7;
        *(undefined8 *)((longlong)puVar10 + 0xc) = DAT_14caa8578;
        FUN_14039144e(lVar11,puVar10);
      }
    }
  }
  puVar5 = *(ushort **)(lVar25 + 0x80);
  if (puVar5 != (ushort *)0x0) {
    *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar25 + 0x78) & 0x3f));
  }
  FUN_148c73c0a(&local_1e8);
LAB_1442d26b1:
  if ((local_60 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442d35de FUN_1442d35de body=154 status=ok
// SIG undefined FUN_1442d35de(void)

undefined4
FUN_1442d35de(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar2 = *param_5;
  local_48 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_58 = &local_48;
    local_48 = uVar2;
    local_40 = uVar1;
    lVar4 = FUN_148e9febc(param_1,lVar4,param_3,param_4);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442d372a FUN_1442d372a body=4663 status=ok
// SIG undefined FUN_1442d372a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1442d372a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort *puVar7;
  longlong *plVar8;
  code *pcVar9;
  void *pvVar10;
  char cVar11;
  undefined1 uVar12;
  int iVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  int iVar19;
  uint *puVar20;
  longlong *plVar21;
  PSRWLOCK SRWLock;
  undefined8 *puVar22;
  longlong lVar23;
  undefined2 *puVar24;
  longlong lVar25;
  longlong lVar26;
  char *pcVar27;
  longlong lVar28;
  longlong lVar29;
  bool bVar30;
  undefined1 auStack_258 [40];
  uint *local_230;
  longlong local_228;
  uint *local_220;
  longlong local_218;
  undefined4 *local_210;
  longlong *local_208;
  longlong *local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  PSRWLOCK local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  longlong local_1b8 [2];
  undefined2 *local_1a8;
  int local_1a0;
  undefined2 *local_198;
  undefined8 uStack_190;
  void *local_188;
  longlong *plStack_180;
  longlong local_178;
  longlong local_170;
  undefined1 local_f8 [152];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (((*(byte *)(param_1 + 0x8c) & 0x80) == 0) ||
     (lVar29 = *(longlong *)(param_1 + 0x288), lVar29 == 0)) goto LAB_1442d3827;
  local_218 = lVar29 + 0x178;
  local_210 = (undefined4 *)(param_1 + 0x208);
  cVar11 = FUN_140714c1e(local_218,*(undefined4 *)(param_1 + 0x208));
  if ((cVar11 != '\0') && (puVar7 = *(ushort **)(lVar29 + 0x80), puVar7 != (ushort *)0x0)) {
    *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar29 + 0x78) & 0x3f));
  }
  FUN_1448d5e3c(&local_188,local_210);
  lVar14 = *(longlong *)((longlong)local_188 + 0x4d0);
  SRWLock = (PSRWLOCK)(lVar14 + 0x168);
  AcquireSRWLockShared(SRWLock);
  plVar21 = plStack_180;
  if (plStack_180 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_180 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plStack_180)(plStack_180);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  if (*(int *)(lVar29 + 0xac) != *(int *)(lVar14 + 0x160)) {
    *(int *)(lVar29 + 0xac) = *(int *)(lVar14 + 0x160);
    local_1f0 = param_1 + 0x170;
    local_1e0 = SRWLock;
    uVar12 = FUN_14021d296(local_1f0,&DAT_14cbd9498);
    *(undefined1 *)(lVar29 + 0x1f8) = uVar12;
    FUN_145b2a74a((longlong *)(lVar29 + 0xb0),lVar14);
    local_1e8 = lVar14;
    FUN_1403de7ba(lVar29 + 0x150,lVar14 + 0x10);
    lVar14 = (longlong)*(int *)(lVar29 + 0xb8);
    local_228 = lVar29;
    if (lVar14 != 0) {
      if (*(int *)(lVar29 + 0xc0) < 0 || *(int *)(lVar29 + 0xb8) <= *(int *)(lVar29 + 0xc0)) {
        lVar29 = *(longlong *)(lVar29 + 0xb0);
        goto LAB_1442d3c87;
      }
      lVar14 = *(longlong *)(param_1 + 0x288);
      if ((((lVar14 != 0) && (-1 < *(int *)(lVar14 + 0xc0))) &&
          (*(int *)(lVar14 + 0xc0) < *(int *)(lVar14 + 0xb8))) &&
         ((longlong)*(int *)(lVar14 + 0xe0) != 0)) {
        lVar23 = *(longlong *)(lVar14 + 0xd8);
        lVar28 = (longlong)*(int *)(lVar14 + 0xe0) * 0x120 + lVar23;
        local_230 = (uint *)((ulonglong)local_230 & 0xffffffff00000000);
LAB_1442d3939:
        do {
          if ((1 < *(int *)(lVar23 + 0x98)) || (*(longlong *)(lVar23 + 0xa8) != 0)) {
            lVar29 = *(longlong *)(lVar14 + 0xb0);
            lVar26 = (longlong)*(int *)(lVar14 + 0xc0) * 0xb0;
            FUN_148c754a6(&local_188);
            lVar25 = (longlong)*(int *)(lVar29 + 0x50 + lVar26);
            if (lVar25 != 0) {
              plVar21 = *(longlong **)(lVar29 + 0x48 + lVar26);
              lVar25 = lVar25 << 4;
              do {
                plVar17 = (longlong *)plVar21[1];
                if (plVar17 == (longlong *)0x0) {
                  cVar11 = FUN_140c3e654(local_f8);
                }
                else {
                  LOCK();
                  *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                  UNLOCK();
                  cVar11 = FUN_140c3e654(local_f8);
                  LOCK();
                  plVar8 = plVar17 + 1;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)*plVar8 == 0) {
                    (**(code **)*plVar17)(plVar17);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar17 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar17 + 0x10))(plVar17);
                    }
                  }
                }
                if (cVar11 != '\0') {
                  FUN_140ee5626(&local_188);
                  lVar29 = local_228;
                  if ((plVar21 == (longlong *)0x0) ||
                     (*(char *)(lVar23 + 0x88) == *(char *)(*plVar21 + 0x88))) goto LAB_1442d394c;
                  *(char *)(lVar23 + 0x88) = *(char *)(*plVar21 + 0x88);
                  iVar13 = *(int *)(*plVar21 + 0x58);
                  iVar19 = iVar13 + -1;
                  if (iVar13 == 0) {
                    iVar19 = 0;
                  }
                  uVar16 = FUN_1402980a2(lVar23 + 0x50,*(undefined8 *)(*plVar21 + 0x50),iVar19);
                  lVar23 = lVar23 + 0x120;
                  local_230 = (uint *)CONCAT44(local_230._4_4_,
                                               (int)CONCAT71((int7)((ulonglong)uVar16 >> 8),1));
                  if (lVar23 != lVar28) goto LAB_1442d3939;
                  goto LAB_1442d3a9a;
                }
                plVar21 = plVar21 + 2;
                lVar25 = lVar25 + -0x10;
              } while (lVar25 != 0);
            }
            FUN_140ee5626(&local_188);
            lVar29 = local_228;
          }
LAB_1442d394c:
          lVar23 = lVar23 + 0x120;
        } while (lVar23 != lVar28);
        if (((ulonglong)local_230 & 1) != 0) {
LAB_1442d3a9a:
          puVar7 = *(ushort **)(lVar14 + 0x80);
          if (puVar7 != (ushort *)0x0) {
            *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar14 + 0x78) & 0x3f));
          }
        }
      }
      if ((longlong)*(int *)(lVar29 + 0xe0) != 0) {
        pcVar27 = *(char **)(lVar29 + 0xd8);
        lVar14 = (longlong)*(int *)(lVar29 + 0xe0) * 0x120;
        do {
          if (*pcVar27 != '\0') goto LAB_1442d3aec;
          pcVar27 = pcVar27 + 0x120;
          lVar14 = lVar14 + -0x120;
        } while (lVar14 != 0);
      }
      pcVar27 = (char *)0x0;
LAB_1442d3aec:
      iVar13 = *(int *)(*(longlong *)(lVar29 + 0xb0) + (longlong)*(int *)(lVar29 + 0xc0) * 0xb0 +
                       0xa8);
      iVar19 = iVar13 + -1;
      if (iVar13 == 0) {
        iVar19 = 0;
      }
      if (0 < iVar19) {
        iVar13 = 0;
        do {
          iVar13 = iVar13 + 1;
        } while (iVar19 != iVar13);
      }
      iVar13 = FUN_1457511aa((longlong *)(param_1 + 0x460));
      if (iVar13 == -1) {
LAB_1442d3bb7:
        FUN_1400b22c2(&local_188,&DAT_149e02088);
      }
      else {
        lVar14 = *(longlong *)(param_1 + 0x460);
        if ((lVar14 + (longlong)iVar13 * 0x28 + 0x10U & 0xffffffffffffffef) == 0)
        goto LAB_1442d3bb7;
        lVar14 = lVar14 + (longlong)iVar13 * 0x28;
        local_188 = (void *)0x0;
        uVar5 = *(uint *)(lVar14 + 0x18);
        pvVar10 = *(void **)(lVar14 + 0x10);
        plStack_180 = (longlong *)CONCAT44(plStack_180._4_4_,uVar5);
        if ((longlong)(int)uVar5 == 0) {
          plStack_180 = (longlong *)(ulonglong)uVar5;
        }
        else {
          FUN_1446dd670(&local_188,uVar5,0);
          lVar29 = local_228;
          memcpy(local_188,pvVar10,(longlong)(int)uVar5 * 2);
        }
      }
      iVar13 = (int)plStack_180 + -1;
      if ((int)plStack_180 == 0) {
        iVar13 = 0;
      }
      FUN_1402980a2(lVar29 + 0x200,local_188,iVar13);
      if (local_188 != (void *)0x0) {
        FUN_1400020a8();
      }
      *(char **)(param_1 + 0x3f8) = pcVar27;
      lVar14 = (longlong)*(int *)(lVar29 + 0xb8);
      if (lVar14 != 0) {
        lVar29 = *(longlong *)(local_228 + 0xb0);
LAB_1442d3c87:
        local_1f8 = lVar14 * 0xb0 + lVar29;
        local_230 = (uint *)(param_1 + 0x400);
        local_200 = (longlong *)(param_1 + 0x408);
        local_220 = (uint *)(param_1 + 0x428);
        local_208 = (longlong *)(param_1 + 0x430);
LAB_1442d3cc9:
        puVar15 = &DAT_149dfb77a;
        if (*(int *)(lVar29 + 0xa8) != 0) {
          puVar15 = *(undefined2 **)(lVar29 + 0xa0);
        }
        lVar14 = 0;
        do {
          uVar4 = puVar15[lVar14];
          bVar3 = "HoverDrive"[lVar14];
          iVar13 = (uint)uVar4 - (uint)bVar3;
          if (iVar13 == 0) {
            if (uVar4 == 0) goto LAB_1442d3e81;
          }
          else {
            if (0x7f < ((uint)bVar3 | (uint)uVar4)) goto LAB_1442d3d34;
            if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[bVar3]) goto LAB_1442d3d31;
          }
          lVar14 = lVar14 + 1;
        } while( true );
      }
    }
LAB_1442d481e:
    lVar14 = local_1e8;
    *(uint *)(param_1 + 0x8c) =
         *(uint *)(param_1 + 0x8c) & 0xfffdffff | (uint)*(byte *)(local_1e8 + 0x15c) << 0x11;
    cVar11 = FUN_14021d296(local_1f0);
    SRWLock = local_1e0;
    lVar29 = local_228;
    if (cVar11 == '\0') {
LAB_1442d48ba:
      ReleaseSRWLockShared(local_1e0);
      puVar7 = *(ushort **)(lVar29 + 0x80);
      if (puVar7 != (ushort *)0x0) {
        *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar29 + 0x78) & 0x3f));
      }
      goto LAB_1442d3827;
    }
    if (*(int *)(local_228 + 0xb8) < 1) {
      if ((*(int *)(local_228 + 0xb8) != 0) || (*(longlong *)(lVar14 + 0x80) == 0))
      goto LAB_1442d48ba;
      if ((longlong)*(int *)(lVar14 + 0x98) != 0) {
        lVar23 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar14 + 0x90) + lVar23) == 0) goto LAB_1442d48ba;
          lVar23 = lVar23 + 8;
        } while ((longlong)*(int *)(lVar14 + 0x98) * 8 != lVar23);
      }
      puVar18 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      puVar18[1] = 0;
      *(undefined4 *)(puVar18 + 2) = 0;
      puVar18[3] = 0;
      *puVar18 = &PTR_FUN_14b9c5018;
      puVar18[4] = DAT_14cbd94b0;
      *(undefined1 *)(puVar18 + 5) = 0;
      FUN_140391314(param_1,puVar18);
    }
    else if (*(longlong *)(lVar14 + 0x80) != 0) {
      if ((longlong)*(int *)(lVar14 + 0x98) != 0) {
        lVar29 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar14 + 0x90) + lVar29) == 0) goto LAB_1442d381e;
          lVar29 = lVar29 + 8;
        } while ((longlong)*(int *)(lVar14 + 0x98) * 8 != lVar29);
      }
      FUN_148e9374e(param_1,lVar14 + 0x80);
    }
  }
LAB_1442d381e:
  ReleaseSRWLockShared(SRWLock);
LAB_1442d3827:
  if ((local_60 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1442d3d31:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[bVar3];
LAB_1442d3d34:
  if (iVar13 != 0) goto LAB_1442d3d3c;
LAB_1442d3e81:
  if ((((*(int *)(param_1 + 0x404) != 0) && (uVar5 = *local_230, -1 < (int)uVar5)) &&
      ((int)uVar5 < DAT_14c9647dc)) &&
     (((plVar21 = (longlong *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       plVar21 != (longlong *)0x0 && ((int)plVar21[2] == *(int *)(param_1 + 0x404))) &&
      (((*(uint *)(plVar21 + 1) & 0x10200000) == 0 && (puVar20 = local_230, *plVar21 != 0))))))
  goto LAB_1442d3eee;
  if (*local_200 == 0) goto LAB_1442d3d3c;
  lVar23 = FUN_140007850();
  cVar11 = (*(code *)PTR_FUN_14c758760)();
  lVar14 = DAT_14c9647c8;
  if ((lVar23 == 0) || (cVar11 == '\0')) {
    if (lVar23 == 0) {
      *(undefined8 *)(param_1 + 0x400) = 0;
      goto LAB_1442d3d3c;
    }
    uVar5 = *(uint *)(lVar23 + 0xc);
    *local_230 = uVar5;
    if (DAT_14c9647dc <= (int)uVar5) goto LAB_1442d4744;
    lVar14 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
LAB_1442d459e:
    iVar13 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar30 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar30) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar13 = *(int *)(lVar14 + 0x10);
      bVar30 = iVar13 == 0;
      if (bVar30) {
        *(int *)(lVar14 + 0x10) = iVar19;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar30) {
        iVar13 = iVar19;
      }
    }
    *(int *)(param_1 + 0x404) = iVar13;
  }
  else {
    uVar5 = *(uint *)(lVar23 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8) + 8 +
                    (ulonglong)(uVar5 & 0xffff) * 0x18) & 0x8400000) == 0) {
        *local_230 = uVar5;
        lVar14 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(lVar14 + (ulonglong)(uVar5 >> 0x10) * 8);
        goto LAB_1442d459e;
      }
    }
    else if ((_DAT_00000008 & 0x8400000) == 0) {
      *local_230 = uVar5;
LAB_1442d4744:
      lVar14 = 0;
      goto LAB_1442d459e;
    }
  }
  puVar20 = local_230;
  if ((*(uint *)(lVar23 + 8) >> 0x1e & 1) != 0) {
LAB_1442d3d3c:
    puVar15 = &DAT_149dfb77a;
    if (*(int *)(lVar29 + 0xa8) != 0) {
      puVar15 = *(undefined2 **)(lVar29 + 0xa0);
    }
    lVar14 = 0;
    do {
      uVar4 = puVar15[lVar14];
      bVar3 = "VehicleSelect"[lVar14];
      iVar13 = (uint)uVar4 - (uint)bVar3;
      if (iVar13 == 0) {
        if (uVar4 == 0) goto LAB_1442d3dab;
      }
      else {
        if (0x7f < ((uint)bVar3 | (uint)uVar4)) goto LAB_1442d3da3;
        if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[bVar3]) goto LAB_1442d3da0;
      }
      lVar14 = lVar14 + 1;
    } while( true );
  }
  goto LAB_1442d3eee;
LAB_1442d3da0:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[bVar3];
LAB_1442d3da3:
  if (iVar13 != 0) goto LAB_1442d3ef7;
LAB_1442d3dab:
  if ((((*(int *)(param_1 + 0x42c) == 0) || (uVar5 = *local_220, (int)uVar5 < 0)) ||
      (DAT_14c9647dc <= (int)uVar5)) ||
     (((plVar21 = (longlong *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       plVar21 == (longlong *)0x0 || ((int)plVar21[2] != *(int *)(param_1 + 0x42c))) ||
      (((*(uint *)(plVar21 + 1) & 0x10200000) != 0 || (puVar20 = local_220, *plVar21 == 0)))))) {
    if (*local_208 == 0) goto LAB_1442d3ef7;
    lVar23 = FUN_140007850(local_208);
    cVar11 = (*(code *)PTR_FUN_14c758760)();
    lVar14 = DAT_14c9647c8;
    if ((lVar23 == 0) || (cVar11 == '\0')) {
      if (lVar23 == 0) {
        *(undefined8 *)(param_1 + 0x428) = 0;
        goto LAB_1442d3ef7;
      }
      uVar5 = *(uint *)(lVar23 + 0xc);
      *local_220 = uVar5;
      if (DAT_14c9647dc <= (int)uVar5) goto LAB_1442d4763;
      lVar14 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
LAB_1442d45ed:
      iVar13 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar13 = DAT_14c964868 + 1;
        UNLOCK();
        iVar19 = DAT_14c964868 + 1;
        bVar30 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar13;
        if (bVar30) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar19);
        }
        LOCK();
        iVar13 = *(int *)(lVar14 + 0x10);
        bVar30 = iVar13 == 0;
        if (bVar30) {
          *(int *)(lVar14 + 0x10) = iVar19;
          iVar13 = 0;
        }
        UNLOCK();
        if (bVar30) {
          iVar13 = iVar19;
        }
      }
      *(int *)(param_1 + 0x42c) = iVar13;
    }
    else {
      uVar5 = *(uint *)(lVar23 + 0xc);
      if ((int)uVar5 < DAT_14c9647dc) {
        if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8) + 8 +
                      (ulonglong)(uVar5 & 0xffff) * 0x18) & 0x8400000) == 0) {
          *local_220 = uVar5;
          lVar14 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(lVar14 + (ulonglong)(uVar5 >> 0x10) * 8);
          goto LAB_1442d45ed;
        }
      }
      else if ((_DAT_00000008 & 0x8400000) == 0) {
        *local_220 = uVar5;
LAB_1442d4763:
        lVar14 = 0;
        goto LAB_1442d45ed;
      }
    }
    puVar20 = local_220;
    if ((*(uint *)(lVar23 + 8) >> 0x1e & 1) != 0) goto LAB_1442d3ef7;
  }
LAB_1442d3eee:
  FUN_140390f7a(puVar20,lVar29 + 0x10);
LAB_1442d3ef7:
  if (((*(int *)(lVar29 + 0x78) != 0) && (*(int *)(lVar29 + 0x7c) != 0)) &&
     (*(int *)(lVar29 + 0x78) != DAT_14c948000)) {
    local_198 = (undefined2 *)0x0;
    uStack_190 = 0;
    FUN_1400b2348((int *)(lVar29 + 0x78),&local_198,1);
    puVar15 = &DAT_149dfb77a;
    if ((int)uStack_190 != 0) {
      puVar15 = local_198;
    }
    FUN_1408226d0(&DAT_14cbdc564,&local_1a8,1);
    puVar24 = &DAT_149dfb77a;
    if (local_1a0 != 0) {
      puVar24 = local_1a8;
    }
    FUN_140002266(&local_188,L"%s.%s",puVar24,puVar15);
    if (*(int *)(lVar29 + 0x7c) < 2 && *(int *)(lVar29 + 0x9c) < 1) {
      lVar14 = lVar29 + 0x80;
    }
    else {
      lVar14 = *(longlong *)(lVar29 + 0x90);
    }
    FUN_1408226d0(lVar14 + (longlong)(*(int *)(lVar29 + 0x7c) + -1) * 0xc,local_1b8,1);
    FUN_140d07d58(local_218,local_1b8,&local_188);
    if (local_1b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_188 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_1a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_198 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((longlong)*(int *)(lVar29 + 0x50) != 0) {
    plVar21 = *(longlong **)(lVar29 + 0x48);
    plVar17 = plVar21 + (longlong)*(int *)(lVar29 + 0x50) * 2;
    do {
      lVar14 = *plVar21;
      plVar8 = (longlong *)plVar21[1];
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      if (((lVar14 != 0) && (*(int *)(lVar14 + 0xd0) != 0)) &&
         ((*(int *)(lVar14 + 0xd4) != 0 && (*(int *)(lVar14 + 0xd0) != DAT_14c948000)))) {
        local_198 = (undefined2 *)0x0;
        uStack_190 = 0;
        FUN_1400b2348(lVar14 + 0xd0,&local_198,1);
        puVar15 = &DAT_149dfb77a;
        if ((int)uStack_190 != 0) {
          puVar15 = local_198;
        }
        FUN_1408226d0(&DAT_14cbdc564,&local_1a8,1);
        puVar24 = &DAT_149dfb77a;
        if (local_1a0 != 0) {
          puVar24 = local_1a8;
        }
        FUN_140002266(&local_188,L"%s.%s",puVar24,puVar15);
        if (*(int *)(lVar14 + 0xd4) < 2 && *(int *)(lVar14 + 0xf4) < 1) {
          lVar23 = lVar14 + 0xd8;
        }
        else {
          lVar23 = *(longlong *)(lVar14 + 0xe8);
        }
        FUN_1408226d0(lVar23 + (longlong)(*(int *)(lVar14 + 0xd4) + -1) * 0xc,local_1b8,1);
        FUN_140d07d58(local_218,local_1b8,&local_188);
        if (local_1b8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_188 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_1a8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_198 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar6 = *local_210;
        if (*(int *)(lVar14 + 0xd4) < 2 && *(int *)(lVar14 + 0xf4) < 1) {
          lVar23 = lVar14 + 0xd8;
        }
        else {
          lVar23 = *(longlong *)(lVar14 + 0xe8);
        }
        lVar14 = (longlong)(*(int *)(lVar14 + 0xd4) + -1);
        local_1c0 = *(undefined4 *)(lVar23 + 8 + lVar14 * 0xc);
        local_1c8 = *(undefined8 *)(lVar23 + lVar14 * 0xc);
        FUN_1448075d0(&local_188,&local_1c8);
        FUN_140714dae(local_218,&local_188,uVar6);
        if (local_170 != 0) {
          FUN_1400020a8();
        }
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      plVar21 = plVar21 + 2;
    } while (plVar21 != plVar17);
  }
  iVar13 = *(int *)(lVar29 + 0x78);
  if (((iVar13 != 0) && (iVar19 = *(int *)(lVar29 + 0x7c), iVar19 != 0)) &&
     (iVar13 != DAT_14c948000)) {
    if (*(int *)(lVar29 + 0x9c) < 1 && iVar19 < 2) {
      lVar14 = lVar29 + 0x80;
    }
    else {
      lVar14 = *(longlong *)(lVar29 + 0x90);
    }
    uVar6 = *local_210;
    local_1d0 = *(undefined4 *)(lVar14 + 8 + (longlong)(iVar19 + -1) * 0xc);
    local_1d8 = *(undefined8 *)(lVar14 + (longlong)(iVar19 + -1) * 0xc);
    FUN_1448075d0(&local_188,&local_1d8);
    FUN_140714dae(local_218,&local_188,uVar6);
    if (local_170 != 0) {
      FUN_1400020a8();
    }
  }
  if ((longlong)*(int *)(param_1 + 0x458) != 0) {
    puVar22 = *(undefined8 **)(param_1 + 0x450);
    puVar18 = puVar22 + (longlong)*(int *)(param_1 + 0x458) * 3;
    do {
      plStack_180 = (longlong *)0x0;
      local_178 = 0;
      local_188 = (void *)*puVar22;
      FUN_14477b664(puVar22[1]);
      plStack_180 = (longlong *)FUN_14477b664();
      local_178 = puVar22[2];
      if (plStack_180 == (longlong *)0x0) {
        FUN_146603c90();
        plStack_180 = (longlong *)FUN_14477b664();
      }
      if (((local_178 == 0) && (local_178 = 0, plStack_180 != (longlong *)0x0)) &&
         (local_188 != (void *)0x0)) {
        plVar21 = (longlong *)plStack_180[0x17];
        if ((plVar21 == (longlong *)0x0) ||
           (cVar11 = (**(code **)(*plVar21 + 0x108))(), cVar11 == '\0')) {
          local_178 = 0;
        }
        else {
          uVar16 = (**(code **)(*plVar21 + 0x110))(plVar21);
          local_178 = FUN_144aff482(uVar16,&local_188);
        }
      }
      if (*(int *)(local_178 + 0x28) == *(int *)(lVar29 + 0x58)) {
        if (plStack_180 == (longlong *)0x0) {
          uVar16 = FUN_146603c90();
          plStack_180 = (longlong *)FUN_14477b664(uVar16);
        }
        if (((local_178 == 0) && (local_178 = 0, plStack_180 != (longlong *)0x0)) &&
           (local_188 != (void *)0x0)) {
          plVar21 = (longlong *)plStack_180[0x17];
          if ((plVar21 == (longlong *)0x0) ||
             (cVar11 = (**(code **)(*plVar21 + 0x108))(plVar21), cVar11 == '\0')) {
            local_178 = 0;
          }
          else {
            uVar16 = (**(code **)(*plVar21 + 0x110))(plVar21);
            local_178 = FUN_144aff482(uVar16,&local_188);
          }
        }
        lVar14 = local_178;
        plVar21 = *(longlong **)(local_178 + 0x18);
        if (*(code **)(*plVar21 + 0x50) != FUN_144828418) {
          plVar21 = (longlong *)(**(code **)(*plVar21 + 0x50))();
        }
        FUN_1447a1fc0(plVar21);
        plVar21 = *(longlong **)(lVar14 + 0x18);
        pcVar9 = *(code **)(*plVar21 + 0x28);
        if (pcVar9 == FUN_14482841c) {
          plVar17 = plVar21 + 3;
          if (plVar21[5] != 0) {
            plVar17 = (longlong *)(plVar21[5] + 8);
          }
        }
        else if (pcVar9 == (code *)&LAB_14010c34c) {
          plVar17 = plVar21 + 2;
        }
        else {
          plVar17 = (longlong *)(*pcVar9)();
        }
        plVar21 = (longlong *)(lVar29 + 0x60);
        if (plVar21 != plVar17) {
          iVar13 = (int)plVar17[1];
          pvVar10 = (void *)*plVar17;
          *(int *)(lVar29 + 0x68) = iVar13;
          if (iVar13 == 0 && *(int *)(lVar29 + 0x6c) == 0) {
            *(undefined4 *)(lVar29 + 0x6c) = 0;
          }
          else {
            FUN_1446dd670(plVar21,iVar13);
            if (iVar13 != 0) {
              memcpy((void *)*plVar21,pvVar10,(longlong)iVar13 * 2);
            }
          }
        }
        break;
      }
      puVar22 = puVar22 + 3;
    } while (puVar22 != puVar18);
  }
  lVar29 = lVar29 + 0xb0;
  if (lVar29 == local_1f8) goto LAB_1442d481e;
  goto LAB_1442d3cc9;
}



// FUNCTION 1442d4962 FUN_1442d4962 body=4566 status=ok
// SIG undefined FUN_1442d4962(void)

void FUN_1442d4962(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  code *pcVar18;
  code *pcVar19;
  undefined1 auStack_228 [32];
  code **local_208;
  longlong *local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  wchar_t *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  code **local_1d0;
  undefined1 *local_1c8;
  code *local_1c0;
  longlong *local_1b8;
  uint *local_1b0;
  longlong local_1a8;
  PSRWLOCK local_1a0;
  longlong local_198;
  code *local_190;
  code *local_188;
  undefined8 local_180;
  int local_178;
  undefined4 local_174;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  code *local_120;
  undefined4 local_118;
  uint uStack_114;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((lVar3 == 0) || (*(char *)(param_1 + 0x3d4) != '\0')) goto LAB_1442d499f;
  if (*(int *)(lVar3 + 0x170) == *(int *)(lVar3 + 0x148)) {
LAB_1442d4b7d:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_228);
  }
  lVar13 = *(longlong *)(param_1 + 0x3f8);
  if (lVar13 == 0) goto LAB_1442d499f;
  if (*(char *)(lVar13 + 2) == '\0') goto LAB_1442d4b7d;
  switch(*(undefined1 *)(lVar13 + 0x108)) {
  case 1:
    plVar9 = *(longlong **)(lVar13 + 0x110);
    if (plVar9 == (longlong *)0x0) {
LAB_1442d4a2b:
      plVar14 = (longlong *)0x0;
    }
    else {
      lVar13 = (**(code **)(*plVar9 + 8))(plVar9);
      lVar16 = FUN_1465f1bf8();
      if ((lVar16 == 0) || (*(int *)(lVar13 + 0x38) < *(int *)(lVar16 + 0x38))) goto LAB_1442d4a2b;
      plVar14 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
          lVar16 + 0x30) {
        plVar14 = plVar9;
      }
    }
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442d555b:
      uVar10 = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x30);
      uVar10 = 0;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
        puVar11 = (undefined8 *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
        if ((puVar11 == (undefined8 *)0x0) ||
           ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_1442d555b;
        uVar10 = *puVar11;
      }
    }
    lVar13 = FUN_1407f492e(uVar10);
    if (lVar13 == 0) goto LAB_1442d499f;
    if (DAT_14cbadd90 == 0) {
      local_1d0 = &local_120;
      local_120 = FUN_141030f22;
      local_1c0 = FUN_14081d0ea;
      local_1c8 = &LAB_1459f2e4c;
      local_1d8 = &LAB_148c39de3;
      local_1e0 = &LAB_1457a9eb2;
      local_1e8 = L"Game";
      local_1f0 = 0;
      local_1f8 = 0x10000004;
      local_200 = (longlong *)CONCAT44(local_200._4_4_,0x10);
      local_208 = (code **)CONCAT44(local_208._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
       (lVar16 = *(longlong *)(lVar13 + 0x398), lVar16 == 0)) goto LAB_1442d499f;
    if (DAT_14cbae3d8 == 0) {
      local_1d0 = &local_120;
      local_120 = FUN_141030f22;
      local_1c0 = FUN_14081d0ea;
      local_1c8 = &LAB_1464f5fc4;
      local_1d8 = &LAB_148c3dd26;
      local_1e0 = &LAB_1459673ba;
      local_1e8 = L"Engine";
      local_1f0 = 0;
      local_1f8 = 0x10000004;
      local_200 = (longlong *)CONCAT44(local_200._4_4_,0x10);
      local_208 = (code **)CONCAT44(local_208._4_4_,0x1360);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar16 = *(longlong *)(lVar13 + 0x398);
      if (lVar16 == 0) goto LAB_1442d499f;
    }
    if (((DAT_14cbae3d8 == 0) || (lVar13 = *(longlong *)(lVar16 + 0x10), lVar13 == 0)) ||
       ((*(int *)(lVar13 + 0x38) < *(int *)(DAT_14cbae3d8 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
         != DAT_14cbae3d8 + 0x30)))) goto LAB_1442d499f;
    lVar13 = param_1 + 0x170;
    cVar5 = FUN_14021d296(lVar13,&DAT_14cbd9498);
    if (cVar5 == '\0') {
      cVar5 = FUN_14021d296(lVar13,&DAT_14cbd94a0);
      if (cVar5 == '\0') {
        cVar5 = FUN_14021d296(lVar13,&DAT_14cbd94a8);
        if (cVar5 == '\0') break;
        puVar11 = &DAT_14cbcfbe8;
      }
      else {
        puVar11 = &DAT_14cbcfbe0;
      }
    }
    else {
      puVar11 = &DAT_14cbcfbd8;
    }
    FUN_148db69ee(lVar16 + 0xd50,puVar11,plVar14 + 0xf);
    break;
  case 3:
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442d5562:
      uVar10 = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x30);
      uVar10 = 0;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
        puVar11 = (undefined8 *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
        if ((puVar11 == (undefined8 *)0x0) ||
           ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_1442d5562;
        uVar10 = *puVar11;
      }
    }
    lVar13 = FUN_1407f492e(uVar10);
    if (lVar13 == 0) goto LAB_1442d499f;
    if (DAT_14cbadd90 == 0) {
      local_1d0 = &local_120;
      local_120 = FUN_141030f22;
      local_1c0 = FUN_14081d0ea;
      local_1c8 = &LAB_1459f2e4c;
      local_1d8 = &LAB_148c39de3;
      local_1e0 = &LAB_1457a9eb2;
      local_1e8 = L"Game";
      local_1f0 = 0;
      local_1f8 = 0x10000004;
      local_200 = (longlong *)CONCAT44(local_200._4_4_,0x10);
      local_208 = (code **)CONCAT44(local_208._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1442d499f;
    lVar16 = (longlong)*(int *)(lVar3 + 0x170) * 0x188 + *(longlong *)(lVar3 + 0xe8);
    if (lVar16 != 0) {
      local_150 = *(undefined8 *)(lVar16 + 0x170);
      uVar10 = FUN_14477b664(*(undefined8 *)(lVar16 + 0x178));
      local_148 = FUN_14477b664(uVar10);
      local_140 = *(undefined8 *)(lVar16 + 0x180);
      FUN_145979580(lVar13,&local_150);
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442d5554:
      uVar10 = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x30);
      uVar10 = 0;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
        puVar11 = (undefined8 *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
        if ((puVar11 == (undefined8 *)0x0) ||
           ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_1442d5554;
        uVar10 = *puVar11;
      }
    }
    lVar13 = FUN_1407f492e(uVar10);
    if (lVar13 == 0) goto LAB_1442d499f;
    if (DAT_14cbadd90 == 0) {
      local_1d0 = &local_120;
      local_120 = FUN_141030f22;
      local_1c0 = FUN_14081d0ea;
      local_1c8 = &LAB_1459f2e4c;
      local_1d8 = &LAB_148c39de3;
      local_1e0 = &LAB_1457a9eb2;
      local_1e8 = L"Game";
      local_1f0 = 0;
      local_1f8 = 0x10000004;
      local_200 = (longlong *)CONCAT44(local_200._4_4_,0x10);
      local_208 = (code **)CONCAT44(local_208._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
       (plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x3f8) + 0x110), plVar9 == (longlong *)0x0))
    goto LAB_1442d499f;
    lVar16 = (**(code **)(*plVar9 + 8))(plVar9);
    lVar15 = FUN_1465f1b62();
    if (((lVar15 == 0) || (*(int *)(lVar16 + 0x38) < *(int *)(lVar15 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) !=
        lVar15 + 0x30)) goto LAB_1442d499f;
    lVar16 = plVar9[2];
    if (lVar16 == 0) {
      uVar10 = FUN_141340f56();
      lVar16 = FUN_14477b664(uVar10);
      plVar9[2] = lVar16;
    }
    plVar14 = plVar9 + 1;
    if (plVar9[3] == 0) {
      if ((lVar16 != 0) && (*plVar14 != 0)) {
        plVar4 = *(longlong **)(lVar16 + 0xb8);
        if ((plVar4 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
          plVar9[3] = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar16 = FUN_144aff482(uVar10,plVar14);
          plVar9[3] = lVar16;
          if (lVar16 != 0) goto LAB_1442d4d22;
        }
      }
      if (*(int *)(param_1 + 0x2e0) == 0) break;
    }
LAB_1442d4d22:
    local_198 = param_1 + 0x208;
    FUN_1448d5e3c(&local_120);
    lVar16 = *(longlong *)(local_120 + 0x4d0);
    local_1a0 = (PSRWLOCK)(lVar16 + 0x168);
    AcquireSRWLockExclusive(local_1a0);
    plVar4 = (longlong *)CONCAT44(uStack_114,local_118);
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
    if (*(int *)(lVar16 + 0x158) == -1) {
LAB_1442d57e4:
      ReleaseSRWLockExclusive(local_1a0);
      goto LAB_1442d499f;
    }
    lVar15 = plVar9[2];
    if (lVar15 == 0) {
      uVar10 = FUN_141340f56();
      lVar15 = FUN_14477b664(uVar10);
      plVar9[2] = lVar15;
    }
    local_1a8 = lVar16 + 0x158;
    lVar8 = plVar9[3];
    if (lVar8 == 0) {
      if ((lVar15 != 0) && (*plVar14 != 0)) {
        plVar4 = *(longlong **)(lVar15 + 0xb8);
        if ((plVar4 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
          lVar8 = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar8 = FUN_144aff482(uVar10,plVar14);
        }
        plVar9[3] = lVar8;
        goto LAB_1442d4e1e;
      }
      lVar15 = (longlong)*(int *)(param_1 + 0x2e0);
      if (lVar15 == 0) goto LAB_1442d57e4;
      plVar9 = *(longlong **)(param_1 + 0x2d8);
      lVar8 = 0;
LAB_1442d4e4d:
      local_1b0 = (uint *)(param_1 + 0x2e0);
      local_1b8 = (longlong *)(param_1 + 0x2d8);
      plVar14 = plVar9 + lVar15;
      do {
        if (*plVar9 == lVar8) goto LAB_1442d57e4;
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar14);
      if (lVar8 != 0) goto LAB_1442d561c;
      lVar8 = FUN_14011c349();
      lVar15 = *(longlong *)(lVar13 + 0xc38);
      if (lVar15 != 0) {
        if (*local_1b0 != 0) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar13);
          }
          local_200 = &local_170;
          local_168 = lVar13 + 0xe18;
          local_120 = *(code **)(lVar8 + 0x48);
          local_208 = &local_120;
          local_170 = lVar13;
          FUN_1488d8584(lVar15,2,**(undefined8 **)(param_1 + 0x2d8),local_1a8);
          *(undefined4 *)(param_1 + 0x2e0) = 0;
          if (*(int *)(param_1 + 0x2e4) != 0) {
            FUN_1488d20d8(local_1b8,0);
          }
        }
        goto LAB_1442d5712;
      }
    }
    else {
LAB_1442d4e1e:
      local_1b8 = (longlong *)(param_1 + 0x2d8);
      local_1b0 = (uint *)(param_1 + 0x2e0);
      lVar15 = (longlong)*(int *)(param_1 + 0x2e0);
      if (lVar15 != 0) {
        plVar9 = *(longlong **)(param_1 + 0x2d8);
        goto LAB_1442d4e4d;
      }
      if (lVar8 == 0) goto LAB_1442d57e4;
LAB_1442d561c:
      local_1b0 = (uint *)(param_1 + 0x2e0);
      local_1b8 = (longlong *)(param_1 + 0x2d8);
      lVar12 = FUN_14011c349();
      lVar15 = *(longlong *)(lVar13 + 0xc38);
      if (lVar15 != 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar13);
        }
        local_200 = &local_160;
        local_158 = lVar13 + 0xe18;
        local_120 = *(code **)(lVar12 + 0x48);
        local_208 = &local_120;
        local_160 = lVar13;
        FUN_1488d8584(lVar15,1,lVar8,local_1a8);
        *(undefined4 *)(param_1 + 0x2e0) = 0;
        uVar7 = 0;
        iVar17 = 0;
        if (*(int *)(param_1 + 0x2e4) != 0) {
          FUN_1488d20d8(local_1b8,0);
          iVar17 = *(int *)(param_1 + 0x2e0);
          uVar7 = *(uint *)(param_1 + 0x2e4);
        }
        *local_1b0 = iVar17 + 1U;
        if (uVar7 < iVar17 + 1U) {
          FUN_141895c4e(local_1b8,iVar17);
        }
        *(longlong *)(*local_1b8 + (longlong)iVar17 * 8) = lVar8;
LAB_1442d5712:
        FUN_1448d5e3c(&local_120,local_198);
        lVar13 = *(longlong *)(local_120 + 0x1b0);
        SRWLock = (PSRWLOCK)(lVar13 + 0x1c0);
        AcquireSRWLockShared(SRWLock);
        plVar9 = (longlong *)CONCAT44(uStack_114,local_118);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar9 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        lVar13 = FUN_140c6f194(lVar13,local_1a8);
        if (lVar13 == 0) {
          ReleaseSRWLockShared(SRWLock);
          goto LAB_1442d57e4;
        }
        cVar5 = FUN_140991644(lVar16 + 0x80,lVar13 + 0x218);
        if (cVar5 == '\0') {
          FUN_1406fd608(&local_120,lVar13 + 0x218);
          FUN_140a6a9d4(lVar16 + 0x80,&local_120);
          FUN_140368b56(&local_120);
          *(int *)(lVar16 + 0x160) = *(int *)(lVar16 + 0x160) + 1;
        }
        ReleaseSRWLockShared(SRWLock);
      }
    }
    ReleaseSRWLockExclusive(local_1a0);
    break;
  case 5:
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442d5569:
      uVar10 = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x30);
      uVar10 = 0;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
        puVar11 = (undefined8 *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
        if ((puVar11 == (undefined8 *)0x0) ||
           ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_1442d5569;
        uVar10 = *puVar11;
      }
    }
    lVar13 = FUN_1407f492e(uVar10);
    if (lVar13 == 0) goto LAB_1442d499f;
    if (DAT_14cbadd90 == 0) {
      local_1d0 = &local_120;
      local_120 = FUN_141030f22;
      local_1c0 = FUN_14081d0ea;
      local_1c8 = &LAB_1459f2e4c;
      local_1d8 = &LAB_148c39de3;
      local_1e0 = &LAB_1457a9eb2;
      local_1e8 = L"Game";
      local_1f0 = 0;
      local_1f8 = 0x10000004;
      local_200 = (longlong *)CONCAT44(local_200._4_4_,0x10);
      local_208 = (code **)CONCAT44(local_208._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
       (plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x3f8) + 0x110), plVar9 == (longlong *)0x0))
    goto LAB_1442d499f;
    lVar16 = (**(code **)(*plVar9 + 8))(plVar9);
    lVar15 = FUN_1465f1b62();
    if (((lVar15 == 0) || (*(int *)(lVar16 + 0x38) < *(int *)(lVar15 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) !=
        lVar15 + 0x30)) goto LAB_1442d499f;
    local_138 = plVar9[1];
    uVar10 = FUN_14477b664(plVar9[2]);
    local_130 = FUN_14477b664(uVar10);
    local_128 = plVar9[3];
    FUN_14570615e(lVar13,&local_138);
    FUN_148e94d4e(param_1);
  }
  FUN_1448d5e3c(&local_120);
  plVar9 = *(longlong **)(local_120 + 0x4d0);
  AcquireSRWLockExclusive((PSRWLOCK)(plVar9 + 0x2d));
  *(int *)(plVar9 + 0x2c) = (int)plVar9[0x2c] + 1;
  plVar14 = (longlong *)CONCAT44(uStack_114,local_118);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar14 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if ((int)plVar9[1] != 0) {
    iVar17 = *(int *)(lVar3 + 0xc0);
    if ((-1 < (longlong)iVar17) && (iVar17 < (int)plVar9[1])) {
      lVar13 = (longlong)iVar17 * 0xb0 + *plVar9;
      plVar14 = (longlong *)(lVar13 + 0x48);
      iVar17 = *(int *)(lVar13 + 0x50);
      if (0 < iVar17) {
        lVar13 = 0;
        lVar16 = 0;
        do {
          iVar17 = *(int *)(*(longlong *)(*plVar14 + lVar13) + 0xd0);
          *(bool *)(*(longlong *)(*plVar14 + lVar13) + 1) =
               iVar17 == *(int *)(*(longlong *)(param_1 + 0x3f8) + 0xd0);
          *(bool *)*(undefined8 *)
                    (*(longlong *)(*plVar9 + 0x48 + (longlong)*(int *)(lVar3 + 0xc0) * 0xb0) +
                    lVar13) = iVar17 == *(int *)(*(longlong *)(param_1 + 0x3f8) + 0xd0);
          lVar16 = lVar16 + 1;
          lVar15 = (longlong)*(int *)(lVar3 + 0xc0) * 0xb0 + *plVar9;
          plVar14 = (longlong *)(lVar15 + 0x48);
          iVar17 = *(int *)(lVar15 + 0x50);
          lVar13 = lVar13 + 0x10;
        } while (lVar16 < iVar17);
      }
      local_180 = 0;
      lVar13 = *plVar14;
      local_178 = iVar17;
      if (iVar17 == 0) {
        local_174 = 0;
      }
      else {
        FUN_145b2a9a0(&local_180,iVar17,0);
        FUN_1414c8b3b(local_180,lVar13,iVar17);
      }
      FUN_1442d712c(param_1,&local_180);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(plVar9 + 0x2d));
  pcVar19 = DAT_14caa8578;
  local_188 = DAT_14caa8578;
  local_190 = DAT_14caa8578;
  lVar13 = param_1 + 0x170;
  cVar5 = FUN_14021d296(lVar13,&DAT_14cbd9498);
  pcVar18 = pcVar19;
  if (cVar5 == '\0') {
    cVar5 = FUN_14021d296(lVar13,&DAT_14cbd94a0);
    if (cVar5 == '\0') {
      cVar5 = FUN_14021d296(lVar13,&DAT_14cbd94a8);
      if (cVar5 == '\0') {
        cVar5 = FUN_14021d296(lVar13,&DAT_14cbd94b0);
        if (cVar5 != '\0') {
          local_188 = *(code **)(param_1 + 0x3d8);
          pcVar18 = local_188;
        }
        goto LAB_1442d5462;
      }
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      local_120 = (code *)0x14b9c6d60;
      local_118 = 0xf;
    }
    else {
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      local_120 = (code *)0x14b9c6d52;
      local_118 = 0xd;
    }
    lVar3 = DAT_14caa8580;
    uStack_114 = uStack_114 & 0xffffff00;
    uVar6 = FUN_14001a6c0(&local_120,1);
    FUN_1400702d4(lVar3,&local_120,uVar6,0);
    pcVar18 = local_120;
    local_188 = local_120;
  }
  else {
    iVar17 = *(int *)(lVar3 + 0xc0);
    if ((-1 < (longlong)iVar17) && (iVar17 < *(int *)(lVar3 + 0xb8))) {
      if ((longlong)*(int *)(param_1 + 0x3c0) != 0) {
        lVar13 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x3b8) + lVar13) ==
              *(longlong *)(*(longlong *)(lVar3 + 0xb0) + 0x70 + (longlong)iVar17 * 0xb0))
          goto LAB_1442d5462;
          lVar13 = lVar13 + 8;
        } while ((longlong)*(int *)(param_1 + 0x3c0) * 8 != lVar13);
      }
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      lVar3 = DAT_14caa8580;
      local_120 = (code *)0x14b9c6ca0;
      local_118 = 0x17;
      uStack_114 = uStack_114 & 0xffffff00;
      uVar6 = FUN_14001a6c0(&local_120,1);
      FUN_1400702d4(lVar3,&local_120,uVar6,0);
      pcVar18 = local_120;
      local_188 = local_120;
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      FUN_1400702d4(DAT_14caa8580,&local_120,DAT_14cbdd830,0);
      local_190 = local_120;
      pcVar19 = local_120;
    }
  }
LAB_1442d5462:
  if (pcVar19 != (code *)0x0 && pcVar18 != (code *)0x0) {
    FUN_148ec90d0(param_1,&local_188,&local_190);
  }
  puVar11 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  *puVar11 = &PTR_FUN_14b9c5040;
  local_120 = (code *)0x14b9c5058;
  local_118 = 0x29;
  uStack_114 = uStack_114 & 0xffffff00;
  uVar6 = FUN_14001a6c0(&local_120,1);
  FUN_14039176c(puVar11,uVar10,uVar6,1);
  *puVar11 = &PTR_FUN_14b9c5040;
  FUN_140391314(param_1,puVar11);
  FUN_140de1078(param_1,&DAT_14cbdd858,0,0);
LAB_1442d499f:
  if ((local_48 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442d5b5e FUN_1442d5b5e body=2643 status=ok
// SIG undefined FUN_1442d5b5e(void)

void FUN_1442d5b5e(longlong param_1,undefined1 param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  uint uVar3;
  longlong lVar4;
  ushort *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  void *_Src;
  char cVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined1 auStack_2b8 [32];
  code **local_298;
  undefined4 local_290;
  undefined4 local_288;
  undefined8 local_280;
  wchar_t *local_278;
  undefined1 *local_270;
  undefined1 *local_268;
  code **local_260;
  undefined1 *local_258;
  code *local_250;
  undefined8 local_240;
  void *local_238;
  ulonglong uStack_230;
  longlong local_220;
  int local_218;
  undefined4 local_214;
  undefined1 local_210 [8];
  char *local_208;
  undefined4 local_200;
  undefined1 local_1fc;
  code *local_1f8;
  undefined4 local_1f0;
  uint uStack_1ec;
  char local_138;
  void *local_118;
  uint local_110;
  int local_10c;
  undefined8 local_108;
  undefined8 local_100;
  longlong lStack_f8;
  undefined8 local_f0;
  undefined8 local_e8 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if ((*(char *)(param_1 + 0x3d4) != '\0') || (lVar4 = *(longlong *)(param_1 + 0x288), lVar4 == 0))
  goto LAB_1442d5ffe;
  uVar17 = (ulonglong)param_3;
  switch(param_2) {
  case 1:
    if (((int)param_3 < 0) || (*(int *)(lVar4 + 0xe0) <= (int)param_3)) goto LAB_1442d5ffe;
    lVar12 = (ulonglong)param_3 * 0x120 + *(longlong *)(lVar4 + 0xd8);
    *(longlong *)(param_1 + 0x3f8) = lVar12;
    if ((lVar12 == 0) || (plVar6 = *(longlong **)(lVar12 + 0x110), plVar6 == (longlong *)0x0))
    goto LAB_1442d5ffe;
    lVar12 = (**(code **)(*plVar6 + 8))(plVar6);
    lVar11 = FUN_1465f1bf8();
    if ((((lVar11 == 0) || (*(int *)(lVar12 + 0x38) < *(int *)(lVar11 + 0x38))) ||
        (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
         lVar11 + 0x30)) || (*(uint *)(lVar4 + 0x170) == param_3)) goto LAB_1442d5ffe;
    if (*(char *)(*(longlong *)(param_1 + 0x3f8) + 3) == '\0') goto LAB_1442d622d;
    lVar12 = param_1 + 0x170;
    cVar9 = FUN_14021d296(lVar12,&DAT_14cbd9498);
    if (cVar9 == '\0') {
      cVar9 = FUN_14021d296(lVar12,&DAT_14cbd94a0);
      if (cVar9 == '\0') {
        cVar9 = FUN_14021d296(lVar12,&DAT_14cbd94a8);
        if (cVar9 == '\0') break;
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        local_1f8 = (code *)0x14b9c6d60;
        local_1f0 = 0xf;
      }
      else {
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        local_1f8 = (code *)0x14b9c6d52;
        local_1f0 = 0xd;
      }
    }
    else {
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      local_1f8 = (code *)0x14b9c6ca0;
      local_1f0 = 0x17;
    }
    lVar12 = DAT_14caa8580;
    uStack_1ec = uStack_1ec & 0xffffff00;
    uVar10 = FUN_14001a6c0(&local_1f8,1);
    FUN_1400702d4(lVar12,&local_1f8,uVar10,0);
    FUN_148ec917e(param_1,&local_1f8,plVar6 + 0xf);
    break;
  case 3:
    if (((int)param_3 < 0) || (*(int *)(lVar4 + 0xf0) <= (int)param_3)) goto LAB_1442d5ffe;
    *(ulonglong *)(param_1 + 0x3f8) = uVar17 * 0x188 + *(longlong *)(lVar4 + 0xe8);
    break;
  case 4:
    if (((int)param_3 < 0) || (*(int *)(lVar4 + 0xe0) <= (int)param_3)) goto LAB_1442d5ffe;
    lVar12 = uVar17 * 0x120 + *(longlong *)(lVar4 + 0xd8);
    *(longlong *)(param_1 + 0x3f8) = lVar12;
    if (lVar12 == 0) goto LAB_1442d5ffe;
    if (*(char *)(lVar12 + 3) == '\0') {
LAB_1442d622d:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_2b8);
    }
    plVar6 = *(longlong **)(lVar12 + 0x110);
    if (plVar6 == (longlong *)0x0) goto LAB_1442d5ffe;
    lVar12 = (**(code **)(*plVar6 + 8))(plVar6);
    lVar11 = FUN_1465f1b62();
    if (((lVar11 == 0) || (*(int *)(lVar12 + 0x38) < *(int *)(lVar11 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
        lVar11 + 0x30)) goto LAB_1442d5ffe;
    FUN_1448d5e3c(&local_1f8,param_1 + 0x208);
    lVar12 = *(longlong *)(local_1f8 + 0x4d0);
    SRWLock = (PSRWLOCK)(lVar12 + 0x168);
    AcquireSRWLockShared(SRWLock);
    plVar7 = (longlong *)CONCAT44(uStack_1ec,local_1f0);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
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
    }
    FUN_1406fd608(&local_1f8,lVar12 + 0x80);
    FUN_1488cba5e(&local_1f8);
    lVar12 = plVar6[2];
    if (lVar12 == 0) {
      uVar14 = FUN_141340f56();
      lVar12 = FUN_14477b664(uVar14);
      plVar6[2] = lVar12;
    }
    lVar11 = plVar6[3];
    if (lVar11 == 0) {
      if ((lVar12 != 0) && (plVar6[1] != 0)) {
        plVar7 = *(longlong **)(lVar12 + 0xb8);
        if ((plVar7 == (longlong *)0x0) ||
           (cVar9 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar9 == '\0')) {
          plVar6[3] = 0;
        }
        else {
          uVar14 = (**(code **)(*plVar7 + 0x110))(plVar7);
          lVar11 = FUN_144aff482(uVar14,plVar6 + 1);
          plVar6[3] = lVar11;
          if (lVar11 != 0) goto LAB_1442d5e57;
        }
      }
    }
    else {
LAB_1442d5e57:
      FUN_1488cb966(&local_1f8,lVar11);
    }
    FUN_148e94a90(&local_108,&local_1f8);
    *(undefined8 *)(lVar4 + 0x1e0) = local_108;
    FUN_148ec95d4(param_1,&local_1f8);
    FUN_148ec967a(param_1,lVar4 + 0x1e0);
    FUN_140368b56(&local_1f8);
    ReleaseSRWLockShared(SRWLock);
    break;
  case 5:
    if (((int)param_3 < 0) || (*(int *)(lVar4 + 0xe0) <= (int)param_3)) goto LAB_1442d5ffe;
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442d6258:
      uVar14 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x30);
      uVar14 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        puVar16 = (undefined8 *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((puVar16 == (undefined8 *)0x0) ||
           ((*(int *)(puVar16 + 2) != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)))) goto LAB_1442d6258;
        uVar14 = *puVar16;
      }
    }
    lVar12 = FUN_1407f492e(uVar14);
    if (lVar12 == 0) goto LAB_1442d5ffe;
    if (DAT_14cbadd90 == 0) {
      local_260 = &local_1f8;
      local_1f8 = FUN_141030f22;
      local_250 = FUN_14081d0ea;
      local_258 = &LAB_1459f2e4c;
      local_268 = &LAB_148c39de3;
      local_270 = &LAB_1457a9eb2;
      local_278 = L"Game";
      local_280 = 0;
      local_288 = 0x10000004;
      local_290 = 0x10;
      local_298 = (code **)CONCAT44(local_298._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
       (lVar11 = *(longlong *)(lVar12 + 0x398), lVar11 == 0)) goto LAB_1442d5ffe;
    if (DAT_14cbae3d8 == 0) {
      local_260 = &local_1f8;
      local_1f8 = FUN_141030f22;
      local_250 = FUN_14081d0ea;
      local_258 = &LAB_1464f5fc4;
      local_268 = &LAB_148c3dd26;
      local_270 = &LAB_1459673ba;
      local_278 = L"Engine";
      local_280 = 0;
      local_288 = 0x10000004;
      local_290 = 0x10;
      local_298 = (code **)CONCAT44(local_298._4_4_,0x1360);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar11 = *(longlong *)(lVar12 + 0x398);
      if (lVar11 == 0) goto LAB_1442d5ffe;
    }
    if (((DAT_14cbae3d8 == 0) || (lVar12 = *(longlong *)(lVar11 + 0x10), lVar12 == 0)) ||
       ((*(int *)(lVar12 + 0x38) < *(int *)(DAT_14cbae3d8 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
         != DAT_14cbae3d8 + 0x30)))) goto LAB_1442d5ffe;
    *(ulonglong *)(param_1 + 0x3f8) = uVar17 * 0x120 + *(longlong *)(lVar4 + 0xd8);
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    lVar12 = DAT_14caa8580;
    local_1f8 = (code *)0x14b9c6d60;
    local_1f0 = 0xf;
    uStack_1ec = uStack_1ec & 0xffffff00;
    uVar10 = FUN_14001a6c0(&local_1f8,1);
    FUN_1400702d4(lVar12,local_210,uVar10,0);
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x3f8) + 0x110);
    if (plVar6 == (longlong *)0x0) goto LAB_1442d5ffe;
    lVar12 = (**(code **)(*plVar6 + 8))(plVar6);
    lVar13 = FUN_1465f1b62();
    if (((lVar13 == 0) || (*(int *)(lVar12 + 0x38) < *(int *)(lVar13 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) !=
        lVar13 + 0x30)) goto LAB_1442d5ffe;
    local_108 = DAT_14caa8578;
    local_100 = 0;
    lStack_f8 = 0;
    local_f0 = 0;
    puVar16 = &DAT_14c846480;
    puVar18 = local_e8;
    for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar18 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar18 = puVar18 + 1;
    }
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    lVar12 = plVar6[2];
    if (lVar12 == 0) {
      uVar14 = FUN_14037df6e();
      lVar12 = FUN_14477b664(uVar14);
      plVar6[2] = lVar12;
    }
    lVar13 = plVar6[3];
    if (((lVar13 == 0) && (lVar13 = 0, lVar12 != 0)) && (plVar6[1] != 0)) {
      plVar7 = *(longlong **)(lVar12 + 0xb8);
      if ((plVar7 == (longlong *)0x0) ||
         (cVar9 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar9 == '\0')) {
        lVar13 = 0;
      }
      else {
        uVar14 = (**(code **)(*plVar7 + 0x110))(plVar7);
        lVar13 = FUN_144aff482(uVar14,plVar6 + 1);
      }
      plVar6[3] = lVar13;
    }
    local_220 = 0;
    iVar19 = *(int *)(param_1 + 0x2d0);
    uVar14 = *(undefined8 *)(param_1 + 0x2c8);
    local_218 = iVar19;
    lStack_f8 = lVar13;
    if (iVar19 == 0) {
      local_214 = 0;
    }
    else {
      FUN_14099a736(&local_220,iVar19,0);
      FUN_14099a4c3(local_220,uVar14,iVar19);
    }
    FUN_14131c9ee(lVar11 + 0xd50,&local_118);
    _Src = local_118;
    if (local_10c == -1) {
      uStack_230 = 0;
LAB_1442d6394:
      local_238 = (void *)0x0;
      iVar19 = 0;
    }
    else {
      local_238 = (void *)0x0;
      uStack_230 = CONCAT44(uStack_230._4_4_,local_110);
      if ((longlong)(int)local_110 == 0) {
        uStack_230 = (ulonglong)local_110;
        goto LAB_1442d6394;
      }
      FUN_1446dd670(&local_238,local_110,0);
      memcpy(local_238,_Src,(longlong)(int)local_110 * 2);
      iVar19 = (int)uStack_230;
    }
    iVar8 = iVar19 + -1;
    if (iVar19 == 0) {
      iVar8 = 0;
    }
    FUN_1402980a2(&local_88,local_238,iVar8);
    uVar14 = FUN_14001cc68(0x110,0x10);
    FUN_145a14a00(&local_1f8,&local_108);
    local_138 = '\x01';
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    lVar12 = DAT_14caa8580;
    local_208 = "StandIn.Vehicle";
    local_200 = 0xf;
    local_1fc = 0;
    uVar10 = FUN_14001a6c0(&local_208,1);
    FUN_1400702d4(lVar12,&local_240,uVar10,0);
    local_298 = &local_1f8;
    FUN_141350326(uVar14,(uint *)(param_1 + 0x30),local_240,1);
    FUN_140391314(param_1,uVar14);
    if (local_138 == '\x01') {
      FUN_145a1457c(&local_1f8);
    }
    if (local_238 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((local_10c != -1) && (local_118 != (void *)0x0)) {
      FUN_1400020a8();
    }
    FUN_14028f404(local_220,local_218);
    if (local_220 != 0) {
      FUN_1400020a8();
    }
    FUN_145a1457c();
  }
  *(uint *)(lVar4 + 0x170) = param_3;
  if (0 < *(int *)(lVar4 + 0xe0)) {
    uVar15 = 0;
    do {
      *(bool *)(*(longlong *)(lVar4 + 0xd8) + uVar15 * 0x120) = uVar15 == uVar17;
      uVar15 = uVar15 + 1;
    } while ((longlong)uVar15 < (longlong)*(int *)(lVar4 + 0xe0));
  }
  FUN_140de1078(param_1,&DAT_14cbdd888,0,0);
  puVar5 = *(ushort **)(lVar4 + 0x80);
  if (puVar5 != (ushort *)0x0) {
    *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
  }
LAB_1442d5ffe:
  if ((local_48 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442d6668 FUN_1442d6668 body=1769 status=ok
// SIG undefined FUN_1442d6668(void)

void FUN_1442d6668(longlong *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  char *pcVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ushort uVar16;
  uint uVar17;
  ushort uVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStack_158 [32];
  longlong *local_138;
  ulonglong local_130;
  char *local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  char local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  puVar1 = (uint *)(param_1 + 6);
  cVar6 = FUN_14664eae2(puVar1,0);
  if (cVar6 != '\0') {
    FUN_1458343da(param_1);
  }
  lVar11 = param_1[0x51];
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
  }
  if (*(char *)((longlong)param_1 + 0x3d4) == '\x01') {
    FUN_148e9361c(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
  }
  if (*(int *)(lVar11 + 0x158) == 0) {
    FUN_1408226d0(&DAT_14cbdd800,&local_118,1);
    lVar5 = local_118;
    iVar7 = (int)uStack_110;
    uVar17 = (int)uStack_110 - 1;
    if ((int)uStack_110 == 0) {
      uVar17 = 0;
    }
    if (0 < (int)uVar17) {
      uVar13 = 0;
      do {
        uVar16 = *(ushort *)(local_118 + uVar13 * 2);
        *(ushort *)(local_118 + uVar13 * 2) = (ushort)(uVar16 - 0x41 < 0x1a) * 0x20 + uVar16;
        uVar13 = uVar13 + 1;
      } while (uVar17 != uVar13);
    }
    local_118 = 0;
    uStack_110 = (longlong *)0x0;
    if (*(int *)(lVar11 + 0x1f0) == iVar7) {
      bVar20 = true;
      if (1 < iVar7) {
        lVar14 = 0;
        while( true ) {
          uVar16 = *(ushort *)(*(longlong *)(lVar11 + 0x1e8) + lVar14);
          uVar13 = (ulonglong)uVar16;
          uVar18 = *(ushort *)(lVar5 + lVar14);
          if (uVar16 != uVar18) break;
          if (uVar16 == 0) goto LAB_1442d69e6;
LAB_1442d67de:
          lVar14 = lVar14 + 2;
        }
        if ((uVar18 | uVar16) < 0x80) {
          uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
          uVar15 = (ulonglong)uVar18;
          uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
          if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_1442d67de;
        }
        if (uVar16 != uVar18) goto LAB_1442d6868;
      }
    }
    else {
      bVar20 = true;
      if (*(int *)(lVar11 + 0x1f0) + iVar7 != 1) {
LAB_1442d6868:
        FUN_1408226d0(&DAT_14cbdd7e8,&local_128);
        pcVar4 = local_128;
        iVar7 = (int)uStack_120;
        uVar17 = (int)uStack_120 - 1;
        if ((int)uStack_120 == 0) {
          uVar17 = 0;
        }
        if (0 < (int)uVar17) {
          uVar13 = 0;
          do {
            *(ushort *)(local_128 + uVar13 * 2) =
                 (ushort)(*(ushort *)(local_128 + uVar13 * 2) - 0x41 < 0x1a) * 0x20 +
                 *(ushort *)(local_128 + uVar13 * 2);
            uVar13 = uVar13 + 1;
          } while (uVar17 != uVar13);
        }
        local_128 = (char *)0x0;
        uStack_120 = 0;
        if (*(int *)(lVar11 + 0x1f0) == iVar7) {
          bVar20 = true;
          if (1 < iVar7) {
            lVar14 = 0;
            while( true ) {
              uVar16 = *(ushort *)(*(longlong *)(lVar11 + 0x1e8) + lVar14);
              uVar17 = (uint)uVar16;
              uVar18 = *(ushort *)(pcVar4 + lVar14);
              uVar19 = (uint)uVar18;
              if (uVar16 != uVar18) {
                if ((uVar18 | uVar16) < 0x80) {
                  uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar16];
                  uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar18];
                  if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar18]) goto LAB_1442d6916;
                }
                iVar7 = uVar17 - uVar19;
                goto LAB_1442d69c7;
              }
              if (uVar16 == 0) break;
LAB_1442d6916:
              lVar14 = lVar14 + 2;
            }
            iVar7 = 0;
LAB_1442d69c7:
            bVar20 = iVar7 == 0;
          }
        }
        else {
          bVar20 = *(int *)(lVar11 + 0x1f0) + iVar7 == 1;
        }
        if ((pcVar4 != (char *)0x0) && (FUN_1400020a8(), local_128 != (char *)0x0)) {
          FUN_1400020a8();
        }
      }
    }
LAB_1442d69e6:
    if (lVar5 != 0) {
      FUN_1400020a8(lVar5);
    }
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    if (!bVar20) {
      FUN_1458343da(param_1);
      goto LAB_1442d6d52;
    }
    if ((param_1[0x7f] != 0) && (*(int *)(lVar11 + 0x170) != *(int *)(lVar11 + 0x148))) {
      if (*(char *)(param_1[0x7f] + 0x108) == '\x05') {
        uVar9 = FUN_14001cc68(0x110,0x10);
        local_58 = '\0';
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        lVar5 = DAT_14caa8580;
        local_128 = "StandIn.Vehicle";
        uStack_120 = CONCAT35(uStack_120._5_3_,0xf);
        uVar8 = FUN_14001a6c0(&local_128,1);
        FUN_1400702d4(lVar5,&local_130,uVar8,0);
        local_138 = &local_118;
        FUN_141350326(uVar9,puVar1,local_130,1);
        FUN_140391314(param_1,uVar9);
        if (local_58 == '\x01') {
          FUN_145a1457c(&local_118);
        }
      }
      else {
        FUN_148e94518(param_1);
      }
    }
    FUN_145da3cc0(lVar11);
    puVar10 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    puVar10[1] = 0;
    *(undefined4 *)(puVar10 + 2) = 0;
    puVar10[3] = 0;
    *puVar10 = &PTR_FUN_14b9c5018;
    puVar10[4] = param_1[0x2e];
    *(undefined1 *)(puVar10 + 5) = 0;
    FUN_140391314(param_1,puVar10);
    FUN_148ec967a(param_1,lVar11 + 0x1e0);
    cVar6 = FUN_14021d296(param_1 + 0x2e,&DAT_14cbd94b0);
    if (cVar6 == '\0') goto LAB_1442d6d52;
    FUN_1448d5e3c(&local_118,param_1 + 0x41);
    lVar5 = *(longlong *)(local_118 + 0x4d0);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x168));
    plVar12 = uStack_110;
    *(int *)(lVar5 + 0x160) = *(int *)(lVar5 + 0x160) + 1;
    if (uStack_110 != (longlong *)0x0) {
      LOCK();
      plVar2 = uStack_110 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*uStack_110)(uStack_110);
        LOCK();
        piVar3 = (int *)((longlong)plVar12 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    FUN_140b96410(lVar5 + 0x80);
    *(undefined4 *)(lVar5 + 0x158) = 0xffffffff;
    FUN_1408226d0(&DAT_14cbdd818,&local_118,1);
    lVar14 = local_118;
    iVar7 = (int)uStack_110;
    uVar13 = (ulonglong)((int)uStack_110 - 1);
    if ((int)uStack_110 == 0) {
      uVar13 = 0;
    }
    if (0 < (int)uVar13) {
      uVar15 = 0;
      do {
        uVar16 = *(ushort *)(local_118 + uVar15 * 2);
        *(ushort *)(local_118 + uVar15 * 2) = (ushort)(uVar16 - 0x41 < 0x1a) * 0x20 + uVar16;
        uVar15 = uVar15 + 1;
      } while (uVar13 != uVar15);
    }
    uVar8 = uStack_110._4_4_;
    local_118 = 0;
    uStack_110 = (longlong *)0x0;
    if (*(longlong *)(lVar11 + 0x1e8) == 0) {
      *(longlong *)(lVar11 + 0x1e8) = lVar14;
      *(int *)(lVar11 + 0x1f0) = iVar7;
      *(undefined4 *)(lVar11 + 500) = uVar8;
    }
    else {
      FUN_1400020a8();
      *(longlong *)(lVar11 + 0x1e8) = lVar14;
      *(int *)(lVar11 + 0x1f0) = iVar7;
      *(undefined4 *)(lVar11 + 500) = uVar8;
      if (local_118 != 0) {
        FUN_1400020a8();
      }
    }
    if (*(int *)((longlong)param_1 + 0x34) == 0) {
LAB_1442d6d80:
      lVar11 = 0;
    }
    else {
      uVar17 = *puVar1;
      lVar11 = 0;
      if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
        plVar12 = (longlong *)
                  ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
        if ((plVar12 == (longlong *)0x0) ||
           (((int)plVar12[2] != *(int *)((longlong)param_1 + 0x34) ||
            ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_1442d6d80;
        lVar11 = *plVar12;
      }
    }
    if (*(int *)(lVar11 + 0x388) == 0) {
LAB_1442d6d87:
      uVar9 = 0;
    }
    else {
      uVar17 = *(uint *)(lVar11 + 900);
      uVar9 = 0;
      if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
        puVar10 = (undefined8 *)
                  ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
        if ((puVar10 == (undefined8 *)0x0) ||
           ((*(int *)(puVar10 + 2) != *(int *)(lVar11 + 0x388) ||
            ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_1442d6d87;
        uVar9 = *puVar10;
      }
    }
    FUN_143eb1c12(uVar9);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x168));
    goto LAB_1442d6d52;
  }
  FUN_1448d5e3c(&local_118,param_1 + 0x41);
  pcVar4 = *(char **)(local_118 + 0x600);
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar4 + 0xa0));
  *(int *)(pcVar4 + 0x98) = *(int *)(pcVar4 + 0x98) + 1;
  if (*pcVar4 == '\0') {
    iVar7 = *(int *)(pcVar4 + 4) + 1;
LAB_1442d694b:
    *pcVar4 = '\x01';
    *(int *)(pcVar4 + 4) = iVar7;
  }
  else {
    iVar7 = 1;
    if (*(int *)(pcVar4 + 4) == 0) goto LAB_1442d694b;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(pcVar4 + 0xa0));
  plVar12 = uStack_110;
  if (uStack_110 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_110 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*uStack_110)(uStack_110);
      LOCK();
      piVar3 = (int *)((longlong)plVar12 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  (**(code **)(*param_1 + 0x108))(param_1,param_1 + 0x2e,1);
  *(byte *)(param_1 + 0x53) = *(byte *)(param_1 + 0x53) | 0x40;
  FUN_148a0109e(param_1,&DAT_14caa8558,lVar11 + 0x150);
LAB_1442d6d52:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442d6d8c FUN_1442d6d8c body=926 status=ok
// SIG undefined FUN_1442d6d8c(void)

void FUN_1442d6d8c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  char cVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60 [3];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_1[0x51] != 0) {
    *(byte *)(param_1[0x51] + 0xa8) = *(byte *)((longlong)param_1 + 0x8c) >> 7;
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  if ((*(byte *)((longlong)param_1 + 0x8c) & 0x80) == 0) goto LAB_1442d6de3;
  if (((9.999999747378752e-05 < ABS((double)param_1[0x67])) ||
      (9.999999747378752e-05 < ABS((double)param_1[0x68]))) ||
     (9.999999747378752e-05 < ABS((double)param_1[0x69]))) {
    local_48 = DAT_14caa8578;
    plVar1 = param_1 + 0x2e;
    cVar4 = FUN_14021d296(plVar1,&DAT_14cbd9498);
    if (cVar4 == '\0') {
      cVar4 = FUN_14021d296(plVar1,&DAT_14cbd94a0);
      if (cVar4 != '\0') {
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        pcVar5 = "StandIn.Echo4";
        puVar6 = local_60 + 1;
        goto LAB_1442d6f31;
      }
      cVar4 = FUN_14021d296(plVar1,&DAT_14cbd94a8);
      if (cVar4 != '\0') {
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        pcVar5 = "StandIn.Vehicle";
        puVar6 = local_60;
        goto LAB_1442d6f31;
      }
      cVar4 = FUN_14021d296(plVar1,&DAT_14cbd94b0);
      if (cVar4 != '\0') {
        local_48 = param_1[0x7b];
      }
    }
    else {
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      pcVar5 = "StandIn.PlayerCharacter";
      puVar6 = local_60 + 2;
LAB_1442d6f31:
      lVar2 = DAT_14caa8580;
      FUN_1446ddc76(puVar6,pcVar5,1);
      FUN_1400702d4(lVar2,&local_48,*puVar6,0);
    }
    local_70 = (double)*(float *)(param_1 + 0x7a) * (double)param_1[0x67];
    local_78 = 0;
    local_68 = 0;
    FUN_144a7484c(&local_78,&local_f8);
    local_d8 = local_f8;
    uStack_d0 = uStack_f0;
    local_c8 = local_e8;
    uStack_c0 = uStack_e0;
    local_b8 = DAT_14c8464e0;
    dStack_b0 = DAT_14c8464e8;
    local_98 = CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
    local_a8 = DAT_14c8464f0;
    uStack_a0 = 0;
    uStack_90 = DAT_14c846518;
    local_88 = DAT_14c846520;
    uStack_80 = 0;
    FUN_148ec92aa(param_1,&local_48);
    param_1[0x69] = (longlong)DAT_14c8464f0;
    dVar3 = DAT_14c8464e8;
    param_1[0x67] = DAT_14c8464e0;
    param_1[0x68] = (longlong)dVar3;
  }
  if ((9.999999747378752e-05 < ABS((double)param_1[0x6a])) ||
     (9.999999747378752e-05 < ABS((double)param_1[0x6b]))) {
    local_d8 = DAT_14c8463d0;
    uStack_d0 = DAT_14c8463d8;
    local_c8 = DAT_14c8463e0;
    uStack_c0 = DAT_14c8463e8;
    local_b8 = 0;
    uStack_a0 = 0;
    local_98 = CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
    uStack_90 = DAT_14c846518;
    local_88 = DAT_14c846520;
    uStack_80 = 0;
    dStack_b0 = (double)param_1[0x6a];
    local_a8 = (double)param_1[0x6b];
    FUN_148ec935e(param_1);
    lVar2 = DAT_14c8463f8;
    param_1[0x6a] = DAT_14c8463f0;
    param_1[0x6b] = lVar2;
  }
  if (1e-08 < ABS(*(float *)(param_1 + 0x6c))) {
    FUN_148ec9404(param_1);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
LAB_1442d6de3:
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442d712c FUN_1442d712c body=3510 status=ok
// SIG undefined FUN_1442d712c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1442d712c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  code *pcVar9;
  void *pvVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  void **ppvVar17;
  ulonglong uVar18;
  char *pcVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  int iVar24;
  longlong *plVar25;
  int iVar26;
  undefined1 auStack_2a8 [32];
  longlong *local_288;
  longlong *local_280;
  longlong *local_278;
  longlong local_270;
  undefined8 local_268;
  longlong *local_260;
  longlong *local_258 [2];
  undefined8 local_248;
  longlong *local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 auStack_1f8 [2];
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [32];
  undefined1 local_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined7 local_16f;
  undefined1 uStack_168;
  undefined8 uStack_167;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0;
  undefined1 local_df;
  undefined8 local_d8;
  longlong *plStack_d0;
  ulonglong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  void *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (lVar4 != 0) {
    iVar24 = *(int *)(lVar4 + 0xe4);
    FUN_145da3f75(*(undefined8 *)(lVar4 + 0xd8),*(undefined4 *)(lVar4 + 0xe0));
    *(undefined4 *)(lVar4 + 0xe0) = 0;
    if ((iVar24 < 0) && (*(int *)(lVar4 + 0xe4) != 0)) {
      FUN_148ea05c4((longlong *)(lVar4 + 0xd8));
    }
    iVar24 = *(int *)(lVar4 + 0xf4);
    FUN_145da3f4a(*(undefined8 *)(lVar4 + 0xe8));
    *(undefined4 *)(lVar4 + 0xf0) = 0;
    if ((iVar24 < 0) && (*(int *)(lVar4 + 0xf4) != 0)) {
      FUN_148ea05f4((longlong *)(lVar4 + 0xe8));
    }
    if ((longlong)(int)param_2[1] != 0) {
      plVar25 = (longlong *)*param_2;
      plVar16 = plVar25 + (longlong)(int)param_2[1] * 2;
      bVar23 = false;
      local_288 = plVar16;
      local_280 = (longlong *)(lVar4 + 0xe8);
      local_278 = (longlong *)(lVar4 + 0xd8);
      do {
        puVar5 = (undefined4 *)*plVar25;
        plVar6 = (longlong *)plVar25[1];
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        if (*(char *)((longlong)puVar5 + 3) == '\0') {
          if ((*(byte *)((longlong)puVar5 + 2) & puVar5 != (undefined4 *)0x0) != 0)
          goto LAB_1442d7296;
        }
        else if (puVar5 != (undefined4 *)0x0) {
LAB_1442d7296:
          if (*(char *)(puVar5 + 0x12) == '\x01') {
            FUN_140bad172(&local_1e8);
            if ((undefined8 *)(puVar5 + 10) == &local_1e8) {
LAB_1442d7374:
              if (local_1e8 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*(longlong *)(puVar5 + 10) != 0) {
                FUN_1400020a8();
              }
              *(longlong *)(puVar5 + 10) = local_1e8;
              local_1e8 = 0;
              puVar5[0xc] = local_1e0;
              puVar5[0xd] = local_1dc;
            }
          }
          else if ((int)puVar5[0x16] < 2) {
            FUN_140390f7a(puVar5 + 0x18);
            if ((int)puVar5[0x16] < 2) {
              FUN_1400b22c2(&local_1e8);
              if ((undefined8 *)(puVar5 + 0x14) == &local_1e8) goto LAB_1442d7374;
              if (*(longlong *)(puVar5 + 0x14) != 0) {
                FUN_1400020a8();
              }
              *(longlong *)(puVar5 + 0x14) = local_1e8;
              local_1e8 = 0;
              puVar5[0x16] = local_1e0;
              puVar5[0x17] = local_1dc;
            }
          }
          if ((*(char *)((longlong)puVar5 + 2) == '\0') && ((int)puVar5[8] < 2)) {
            FUN_1400b22c2(&local_1e8);
            if ((undefined8 *)(puVar5 + 6) == &local_1e8) {
              if (local_1e8 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*(longlong *)(puVar5 + 6) != 0) {
                FUN_1400020a8();
              }
              *(longlong *)(puVar5 + 6) = local_1e8;
              local_1e8 = 0;
              puVar5[8] = local_1e0;
              puVar5[9] = local_1dc;
            }
          }
          if (*(char *)(puVar5 + 0x42) == '\x03') {
            plVar7 = *(longlong **)(puVar5 + 0x44);
            bVar23 = true;
            plVar16 = local_288;
            if (plVar7 != (longlong *)0x0) {
              lVar20 = (**(code **)(*plVar7 + 8))(plVar7);
              lVar13 = FUN_1465f1b62();
              plVar16 = local_288;
              if (((lVar13 != 0) && (*(int *)(lVar13 + 0x38) <= *(int *)(lVar20 + 0x38))) &&
                 (*(longlong *)
                   (*(longlong *)(lVar20 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
                  lVar13 + 0x30)) {
                memset(&local_1e8,0,0x188);
                local_1e8._0_4_ = CONCAT13(1,(undefined3)local_1e8);
                FUN_1400b22c2(&local_1e0,&DAT_149e02088);
                FUN_1400b22c2(local_1d0,&DAT_149e02088);
                FUN_1400b22c2(local_1c0,&DAT_149e02088);
                local_1a0 = 0;
                FUN_1400b22c2(local_198,&DAT_149e02088);
                local_120 = 0;
                local_158 = 0;
                uStack_150 = 0;
                uStack_130 = 0;
                uStack_12c = 0;
                uStack_140 = 0;
                uStack_138 = 0;
                local_134 = 0;
                local_108 = 0;
                iVar26 = 0;
                local_118 = 0;
                uStack_110 = 0;
                local_100 = 0;
                uStack_f8 = 0;
                uStack_168 = 0;
                uStack_167 = 0;
                uStack_178 = 0;
                uStack_170 = 0;
                local_16f = 0;
                local_188 = 0;
                uStack_180 = 0;
                FUN_1400b22c2(local_f0,&DAT_149e02088);
                local_df = 0;
                local_d8 = 0;
                plStack_d0 = (longlong *)0x0;
                local_c8 = 0;
                lStack_c0 = 0;
                local_b8 = 0;
                uStack_b0 = 0;
                local_a8 = (void *)0x0;
                uStack_a0 = 0;
                local_98 = (void *)0x0;
                uStack_90 = 0;
                local_88 = 0;
                uStack_80 = 0;
                local_78 = 0;
                lStack_70 = 0;
                local_68 = 0;
                local_e0 = 3;
                local_1e8 = CONCAT44(local_1e8._4_4_,*puVar5);
                iVar24 = puVar5[4] + -1;
                if (puVar5[4] == 0) {
                  iVar24 = iVar26;
                }
                FUN_1402980a2(&local_1e0,*(undefined8 *)(puVar5 + 2),iVar24);
                iVar24 = puVar5[8] + -1;
                if (puVar5[8] == 0) {
                  iVar24 = iVar26;
                }
                FUN_1402980a2(local_1d0,*(undefined8 *)(puVar5 + 6),iVar24);
                iVar24 = puVar5[0x16] + -1;
                if (puVar5[0x16] == 0) {
                  iVar24 = iVar26;
                }
                FUN_1402980a2(local_198,*(undefined8 *)(puVar5 + 0x14),iVar24);
                plVar15 = plStack_d0;
                local_d8 = *(undefined8 *)(puVar5 + 0x44);
                plVar16 = *(longlong **)(puVar5 + 0x46);
                if (plVar16 != (longlong *)0x0) {
                  LOCK();
                  *(int *)((longlong)plVar16 + 8) = *(int *)((longlong)plVar16 + 8) + 1;
                  UNLOCK();
                }
                if (plStack_d0 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plStack_d0 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    puVar8 = (undefined8 *)*plStack_d0;
                    plStack_d0 = plVar16;
                    (*(code *)*puVar8)(plVar15);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar15 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    plVar16 = plStack_d0;
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar15 + 0x10))(plVar15);
                      plVar16 = plStack_d0;
                    }
                  }
                }
                plStack_d0 = plVar16;
                FUN_1447715ec(&local_118,puVar5 + 0x34);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14cbdd908) &&
                   (FUN_144b3d300(&DAT_14cbdd908), DAT_14cbdd908 == -1)) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c844850) &&
                     (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
                    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
                    DAT_14c844840[1] = 0;
                    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
                    DAT_14c844840[2] = -1;
                    DAT_14c844840[3] = 0;
                    DAT_14c844840[4] = 0;
                    DAT_14c844840[5] = 0;
                    if (DAT_14c844840 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                      UNLOCK();
                    }
                    DAT_14c844848 = 0;
                    atexit(FUN_142760bef);
                    _Init_thread_footer(&DAT_14c844850);
                  }
                  DAT_14cbdd8f8 = DAT_14c844840;
                  if (DAT_14c844840 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
                      LOCK();
                      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                      UNLOCK();
                    }
                    else {
                      (**(code **)(*DAT_14c844840 + 8))();
                    }
                  }
                  _DAT_14cbdd900 = 0;
                  atexit((_func_5014 *)&LAB_1442d7ee3);
                  _Init_thread_footer(&DAT_14cbdd908);
                }
                local_218 = 0;
                uStack_210 = 0;
                local_208 = (longlong *)((ulonglong)local_208 & 0xffffffff00000000);
                uStack_200 = 0;
                auStack_1f8[0] = 0;
                FUN_1446ddda2(&local_218,"UIDisplayData_HoverDrive_Rank",0);
                FUN_140ac6c96(&local_218,&DAT_14cbdd8f8);
                if (uStack_200 != 0) {
                  FUN_1400020a8();
                }
                lVar20 = plVar7[2];
                FUN_14023409e(&local_268,&DAT_14cbdd8f8,1);
                local_218 = local_218 & 0xffffffff00000000;
                local_208 = (longlong *)0x0;
                uStack_200 = uStack_200 & 0xffffffff00000000;
                local_230 = auStack_1f8;
                local_238 = &local_218;
                uStack_210 = (longlong)(int)lVar20;
                FUN_14010d304(&local_228,&local_238);
                local_248 = local_268;
                local_240 = local_260;
                if (local_260 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_260 + 1) = (int)local_260[1] + 1;
                  UNLOCK();
                }
                FUN_14010c016(local_258,&local_248,&local_228);
                FUN_14007f2db(CONCAT44(uStack_224,local_228),uStack_220);
                if (CONCAT44(uStack_224,local_228) != 0) {
                  FUN_1400020a8();
                }
                if (local_208 != (longlong *)0x0) {
                  (**(code **)(*local_208 + 0x10))();
                }
                plVar16 = local_260;
                if (local_260 != (longlong *)0x0) {
                  LOCK();
                  plVar15 = local_260 + 1;
                  *(int *)plVar15 = (int)*plVar15 + -1;
                  UNLOCK();
                  if ((int)*plVar15 == 0) {
                    (**(code **)*local_260)(local_260);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar16 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar16 + 0x10))(plVar16);
                    }
                  }
                }
                plVar16 = local_258[0];
                plVar15 = local_258[0];
                if (*(code **)(*local_258[0] + 0x50) != FUN_144828418) {
                  plVar15 = (longlong *)(**(code **)(*local_258[0] + 0x50))(local_258[0]);
                }
                FUN_1447a1fc0(plVar15);
                pcVar9 = *(code **)(*plVar16 + 0x28);
                if (pcVar9 == FUN_14482841c) {
                  ppvVar17 = (void **)(plVar16[5] + 8);
                  if (plVar16[5] == 0) {
                    ppvVar17 = (void **)(plVar16 + 3);
                  }
                }
                else if (pcVar9 == (code *)&LAB_14010c34c) {
                  ppvVar17 = (void **)(plVar16 + 2);
                }
                else {
                  ppvVar17 = (void **)(*pcVar9)(plVar16);
                }
                if (&local_98 != ppvVar17) {
                  uVar12 = *(uint *)(ppvVar17 + 1);
                  pvVar10 = *ppvVar17;
                  uStack_90 = CONCAT44(uStack_90._4_4_,uVar12);
                  if (uVar12 == 0 && uStack_90._4_4_ == 0) {
                    uStack_90 = (ulonglong)uVar12;
                  }
                  else {
                    FUN_1446dd670(&local_98,uVar12);
                    if (uVar12 != 0) {
                      memcpy(local_98,pvVar10,(longlong)(int)uVar12 * 2);
                    }
                  }
                }
                if (plVar16 != (longlong *)0x0) {
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                }
                iVar24 = (int)plVar7[4] + -1;
                if ((int)plVar7[4] == 0) {
                  iVar24 = 0;
                }
                FUN_1402980a2(&local_b8,plVar7[3],iVar24);
                plVar16 = (longlong *)plVar7[5];
                if (*(code **)(*plVar16 + 0x50) != FUN_144828418) {
                  plVar16 = (longlong *)(**(code **)(*plVar16 + 0x50))();
                }
                FUN_1447a1fc0(plVar16);
                plVar16 = (longlong *)plVar7[5];
                pcVar9 = *(code **)(*plVar16 + 0x28);
                if (pcVar9 == FUN_14482841c) {
                  ppvVar17 = (void **)(plVar16 + 3);
                  if (plVar16[5] != 0) {
                    ppvVar17 = (void **)(plVar16[5] + 8);
                  }
                }
                else if (pcVar9 == (code *)&LAB_14010c34c) {
                  ppvVar17 = (void **)(plVar16 + 2);
                }
                else {
                  ppvVar17 = (void **)(*pcVar9)(plVar16);
                }
                if (&local_a8 != ppvVar17) {
                  uVar12 = *(uint *)(ppvVar17 + 1);
                  pvVar10 = *ppvVar17;
                  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar12);
                  if (uVar12 == 0 && uStack_a0._4_4_ == 0) {
                    uStack_a0 = (ulonglong)uVar12;
                  }
                  else {
                    FUN_1446dd670(&local_a8,uVar12);
                    if (uVar12 != 0) {
                      memcpy(local_a8,pvVar10,(longlong)(int)uVar12 * 2);
                    }
                  }
                }
                if (local_78 != plVar7[9]) {
                  local_68 = 0;
                }
                if (lStack_70 != plVar7[10]) {
                  local_68 = 0;
                }
                local_78 = plVar7[9];
                uVar14 = FUN_14477b664();
                lStack_70 = FUN_14477b664(uVar14);
                local_68 = plVar7[0xb];
                FUN_1400021e4(plVar7 + 1,&local_218);
                lVar20 = uStack_210;
                uVar11 = local_218;
                uVar12 = (int)uStack_210 - 1;
                if ((int)uStack_210 == 0) {
                  uVar12 = 0;
                }
                if (0 < (int)uVar12) {
                  uVar18 = 0;
                  do {
                    uVar3 = *(ushort *)(local_218 + uVar18 * 2);
                    *(ushort *)(local_218 + uVar18 * 2) =
                         (ushort)(uVar3 - 0x41 < 0x1a) * 0x20 + uVar3;
                    uVar18 = uVar18 + 1;
                  } while (uVar12 != uVar18);
                }
                local_218 = 0;
                uStack_210 = 0;
                if (local_c8 == 0) {
                  local_c8 = uVar11;
                  lStack_c0 = lVar20;
                }
                else {
                  FUN_1400020a8();
                  local_c8 = uVar11;
                  lStack_c0 = lVar20;
                  if (local_218 != 0) {
                    FUN_1400020a8();
                  }
                }
                lVar20 = plVar7[8];
                if ((longlong)(int)lVar20 != 0) {
                  lVar13 = plVar7[7];
                  local_270 = lVar13 + 0x10;
                  lVar22 = 0;
                  do {
                    local_208 = (longlong *)0x0;
                    uStack_200 = 0;
                    local_218 = 0;
                    uStack_210 = 0;
                    auStack_1f8[0] = 0x800000000;
                    iVar24 = *(int *)(lVar13 + 8 + lVar22);
                    iVar26 = iVar24 + -1;
                    if (iVar24 == 0) {
                      iVar26 = 0;
                    }
                    FUN_1402980a2(&local_218,*(undefined8 *)(lVar13 + lVar22),iVar26);
                    if ((int)uStack_210 < 2) {
                      FUN_1400b22c2(&local_228,"SET ATTRIBUTE NAME");
                      if (local_218 != 0) {
                        FUN_1400020a8();
                      }
                      local_218 = CONCAT44(uStack_224,local_228);
                      uStack_210 = CONCAT44(uStack_21c,uStack_220);
                    }
                    auStack_1f8[0] =
                         CONCAT44(auStack_1f8[0]._4_4_,(uint)*(byte *)(lVar13 + 0x38 + lVar22));
                    FUN_140390f7a(local_270 + lVar22,&local_208);
                    if ((int)uStack_200 < 2) {
                      FUN_1400b22c2(&local_228,"coui://uiresources/_shared/assets/missing_icon.png")
                      ;
                      if (local_208 != (longlong *)0x0) {
                        FUN_1400020a8();
                      }
                      local_208 = (longlong *)CONCAT44(uStack_224,local_228);
                      uStack_200 = CONCAT44(uStack_21c,uStack_220);
                    }
                    uVar11 = uStack_80;
                    lVar21 = (longlong)(int)uStack_80;
                    uVar12 = (int)uStack_80 + 1;
                    uStack_80 = CONCAT44(uStack_80._4_4_,uVar12);
                    if (uStack_80._4_4_ < uVar12) {
                      FUN_148ea1208(&local_88,uVar11 & 0xffffffff);
                    }
                    FUN_148c74fba(lVar21 * 0x28 + local_88,&local_218);
                    if (local_208 != (longlong *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_218 != 0) {
                      FUN_1400020a8();
                    }
                    lVar22 = lVar22 + 0x40;
                  } while ((longlong)(int)lVar20 * 0x40 != lVar22);
                }
                iVar24 = *(int *)(lVar4 + 0xf0);
                *(uint *)(lVar4 + 0xf0) = iVar24 + 1U;
                if (*(uint *)(lVar4 + 0xf4) < iVar24 + 1U) {
                  FUN_148ea129c(local_280,iVar24);
                }
                FUN_148c75852((longlong)iVar24 * 0x188 + *local_280,&local_1e8);
                FUN_148c74d74(&local_1e8);
                bVar23 = true;
                goto LAB_1442d7cb2;
              }
            }
          }
          else {
LAB_1442d7cb2:
            plVar16 = local_278;
            iVar24 = *(int *)(lVar4 + 0xe0);
            *(uint *)(lVar4 + 0xe0) = iVar24 + 1U;
            if (*(uint *)(lVar4 + 0xe4) < iVar24 + 1U) {
              FUN_148ea1334(local_278,iVar24);
            }
            FUN_148c754a6((longlong)iVar24 * 0x120 + *plVar16);
            plVar16 = local_288;
          }
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar6 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
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
        plVar25 = plVar25 + 2;
      } while (plVar25 != plVar16);
      if (bVar23) {
        if (0 < (longlong)*(int *)(lVar4 + 0xf0)) {
          pcVar19 = *(char **)(lVar4 + 0xe8);
          lVar20 = 0;
          do {
            if (*pcVar19 == '\x01') {
              *(int *)(lVar4 + 0x148) = (int)lVar20;
              *(int *)(lVar4 + 0x170) = (int)lVar20;
            }
            lVar20 = lVar20 + 1;
            pcVar19 = pcVar19 + 0x188;
          } while (*(int *)(lVar4 + 0xf0) != lVar20);
        }
        goto LAB_1442d7168;
      }
    }
    if (0 < (longlong)*(int *)(lVar4 + 0xe0)) {
      pcVar19 = *(char **)(lVar4 + 0xd8);
      lVar20 = 0;
      do {
        if (*pcVar19 == '\x01') {
          *(int *)(lVar4 + 0x148) = (int)lVar20;
          *(int *)(lVar4 + 0x170) = (int)lVar20;
        }
        lVar20 = lVar20 + 1;
        pcVar19 = pcVar19 + 0x120;
      } while (*(int *)(lVar4 + 0xe0) != lVar20);
    }
  }
LAB_1442d7168:
  FUN_14154ca0d(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442d7f04 FUN_1442d7f04 body=822 status=ok
// SIG undefined FUN_1442d7f04(void)

void FUN_1442d7f04(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  PSRWLOCK SRWLock;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  PSRWLOCK local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  longlong local_80 [2];
  longlong local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(byte *)((longlong)param_1 + 0x8c) & 0x80) != 0) {
    cVar2 = FUN_148e829b8();
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x198))(param_1);
    if (plVar6 == (longlong *)0x0) {
      bVar3 = 0;
    }
    else {
      bVar3 = (**(code **)(*plVar6 + 0x100))(plVar6);
    }
    *(byte *)((longlong)param_1 + 0x35a) = *(byte *)((longlong)param_1 + 0x35a) | bVar3;
    cVar4 = FUN_1442c8b50(param_1);
    cVar5 = FUN_140714c1e(param_1[0x51] + 0x2c0,(int)param_1[0x41]);
    if (((bVar3 != 0) || (cVar2 != '\0' || cVar4 != '\0')) || (cVar5 != '\0')) {
      plVar6 = (longlong *)FUN_148e94ec4(param_1);
      lVar1 = *plVar6;
      SRWLock = (PSRWLOCK)(lVar1 + 0x168);
      AcquireSRWLockShared(SRWLock);
      lVar9 = param_1[0x51];
      if ((longlong)*(int *)(lVar9 + 0x408) != 0) {
        local_c8 = *(longlong *)(lVar9 + 0x400);
        local_b0 = (longlong)*(int *)(lVar9 + 0x408) * 0x268 + local_c8;
        local_b8 = lVar1 + 0x68;
        local_c0 = SRWLock;
        do {
          if (*(int *)(lVar1 + 0x38) != *(int *)(lVar1 + 100)) {
            lVar9 = *(longlong *)(lVar1 + 0x70);
            if (*(longlong *)(lVar1 + 0x70) == 0) {
              lVar9 = local_b8;
            }
            iVar8 = *(int *)(lVar9 + (ulonglong)
                                     (*(int *)(lVar1 + 0x78) - 1U & *(uint *)(local_c8 + 0x254)) * 4
                            );
            if (iVar8 != -1) {
              do {
                lVar9 = *(longlong *)(lVar1 + 0x30) + (longlong)iVar8 * 0x20;
                if (*(uint *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar8 * 0x20) ==
                    *(uint *)(local_c8 + 0x254)) {
                  if (((lVar9 + 8U & 0xfffffffffffffff7) != 0) &&
                     ((longlong)*(int *)(lVar9 + 0x10) != 0)) {
                    lVar10 = *(longlong *)(lVar9 + 8);
                    lVar9 = (longlong)*(int *)(lVar9 + 0x10) * 0x28;
                    do {
                      if (*(int *)(lVar10 + 4) < 2 && *(int *)(lVar10 + 0x24) < 1) {
                        lVar7 = lVar10 + 8;
                      }
                      else {
                        lVar7 = *(longlong *)(lVar10 + 0x18);
                      }
                      FUN_1408226d0(lVar7 + (longlong)(*(int *)(lVar10 + 4) + -1) * 0xc,local_70,1);
                      lVar7 = param_1[0x51];
                      local_98 = (undefined2 *)0x0;
                      uStack_90 = 0;
                      FUN_1400b2348(lVar10,&local_98,1);
                      puVar12 = &DAT_149dfb77a;
                      if ((int)uStack_90 != 0) {
                        puVar12 = local_98;
                      }
                      FUN_1408226d0(&DAT_14cbdc564,&local_a8,1);
                      puVar11 = &DAT_149dfb77a;
                      if (local_a0 != 0) {
                        puVar11 = local_a8;
                      }
                      FUN_140002266(local_80,L"%s.%s",puVar11,puVar12);
                      FUN_140d07d58(lVar7 + 0x2c0,local_70,local_80);
                      if (local_80[0] != 0) {
                        FUN_1400020a8();
                      }
                      if (local_a8 != (undefined2 *)0x0) {
                        FUN_1400020a8();
                      }
                      if (local_98 != (undefined2 *)0x0) {
                        FUN_1400020a8();
                      }
                      FUN_140714e1e(param_1[0x51] + 0x2c0,local_70,(int)param_1[0x41]);
                      if (local_70[0] != 0) {
                        FUN_1400020a8();
                      }
                      lVar10 = lVar10 + 0x28;
                      lVar9 = lVar9 + -0x28;
                    } while (lVar9 != 0);
                  }
                  break;
                }
                iVar8 = *(int *)(lVar9 + 0x18);
              } while (iVar8 != -1);
            }
          }
          local_c8 = local_c8 + 0x268;
        } while (local_c8 != local_b0);
        lVar9 = param_1[0x51];
        SRWLock = local_c0;
      }
      if (lVar9 != 0) {
        *(undefined1 *)(lVar9 + 0x398) = 1;
        *(byte *)(lVar9 + 0x331) = *(byte *)(lVar9 + 0x331) | 2;
      }
      ReleaseSRWLockShared(SRWLock);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442d823c FUN_1442d823c body=410 status=ok
// SIG undefined FUN_1442d823c(void)

void FUN_1442d823c(longlong *param_1,uint param_2)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_138 [40];
  undefined1 local_110 [216];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar3 = (**(code **)(*param_1 + 0x198))();
  if ((((lVar3 != 0) && (-1 < (int)param_2)) && ((int)param_2 < *(int *)(lVar3 + 0x3f8))) &&
     (lVar3 = (ulonglong)param_2 * 0x268 + *(longlong *)(lVar3 + 0x3f0), lVar3 != 0)) {
    plVar4 = (longlong *)FUN_148e8625c(param_1);
    lVar2 = *plVar4;
    SRWLock = (PSRWLOCK)(lVar2 + 0x1c0);
    AcquireSRWLockShared(SRWLock);
    lVar3 = FUN_140c6f194(lVar2,lVar3 + 0x254);
    ReleaseSRWLockShared(SRWLock);
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_148e94ec4(param_1);
      puVar5 = (undefined8 *)*plVar4;
      AcquireSRWLockExclusive((PSRWLOCK)(puVar5 + 0x2d));
      *(int *)(puVar5 + 0x2c) = *(int *)(puVar5 + 0x2c) + 1;
      iVar1 = *(int *)((longlong)puVar5 + 0xc);
      FUN_145da38cf(*puVar5,*(undefined4 *)(puVar5 + 1));
      *(undefined4 *)(puVar5 + 1) = 0;
      if ((iVar1 < 0) && (*(int *)((longlong)puVar5 + 0xc) != 0)) {
        FUN_148e36114(puVar5,0);
      }
      FUN_1406fd608(local_110,lVar3 + 0x218);
      FUN_140a6a9d4(puVar5 + 0x10,local_110);
      FUN_140368b56(local_110);
      *(undefined4 *)(puVar5 + 0x2b) = *(undefined4 *)(lVar3 + 8);
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar5 + 0x2d));
      puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 2) = 0;
      puVar5[3] = 0;
      *puVar5 = &PTR_FUN_14b9c5018;
      puVar5[4] = DAT_14cbd94b0;
      *(undefined1 *)(puVar5 + 5) = 0;
      FUN_140391314(param_1,puVar5);
      FUN_148e9515c(param_1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442d83d8 FUN_1442d83d8 body=789 status=ok
// SIG undefined FUN_1442d83d8(void)

void FUN_1442d83d8(longlong *param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)FUN_1457fc8fc();
  if ((plVar3 != (longlong *)0x0) &&
     (((lVar4 = (**(code **)(*param_1 + 0x198))(param_1), lVar4 == 0 ||
       (((*(int *)(lVar4 + 0x67c) == -1 && (*(int *)(lVar4 + 0x680) == 0)) &&
        ((*(byte *)(lVar4 + 0x4c7) & 0x20) == 0)))) ||
      ((((int)param_2 < 0 || ((int)plVar3[0x7f] <= (int)param_2)) ||
       (cVar1 = FUN_148e23d3a(lVar4 + 0x428,(ulonglong)param_2 * 0x268 + plVar3[0x7e]),
       cVar1 == '\0')))))) {
    if (((*(byte *)((longlong)plVar3 + 0x331) & 4) != 0) && (*(uint *)(plVar3 + 0x65) != param_2)) {
      if (param_2 == 0xffffffff) {
        pcVar7 = "BackpackSlotUnfocused";
      }
      else {
        pcVar7 = "BackpackSlotFocused";
      }
      FUN_1400b22c2(&local_48,pcVar7);
      FUN_140de1078(param_1,&local_48,0,0);
      if (local_48 != (char *)0x0) {
        FUN_1400020a8();
      }
    }
    (**(code **)(*plVar3 + 0x90))(plVar3,(ulonglong)param_2);
    lVar4 = (**(code **)(*param_1 + 0x198))(param_1);
    if ((lVar4 == 0) ||
       (((*(int *)(lVar4 + 0x67c) == -1 && (*(int *)(lVar4 + 0x680) == 0)) &&
        ((*(byte *)(lVar4 + 0x4c7) & 0x20) == 0)))) {
      lVar8 = 0;
      bVar9 = false;
    }
    else {
      lVar8 = lVar4 + 0x428;
      bVar9 = *(int *)(lVar4 + 0x67c) != -1;
    }
    puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    lVar4 = param_1[6];
    *puVar5 = &PTR_FUN_14b9c7210;
    local_48 = "SetVisible";
    local_40 = 10;
    local_3c = 0;
    uVar2 = FUN_14001a6c0(&local_48,1);
    FUN_14039176c(puVar5,lVar4,uVar2,1);
    *puVar5 = &PTR_FUN_14b9c7210;
    *(bool *)(puVar5 + 7) = bVar9;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
    FUN_140391314(param_1,puVar5);
    if (bVar9 != false) {
      if ((*(byte *)(lVar8 + 0x9d) & 1) != 0) {
        puVar5 = (undefined8 *)FUN_14001cc68(0x48,0x10);
        lVar4 = param_1[6];
        *puVar5 = &PTR_FUN_14b9c7260;
        local_48 = "UpdateItemFlags";
        local_40 = 0xf;
        local_3c = 0;
        uVar2 = FUN_14001a6c0(&local_48,1);
        FUN_14039176c(puVar5,lVar4,uVar2,1);
        *puVar5 = &PTR_FUN_14b9c7260;
        *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(lVar8 + 0x254);
        *(undefined8 *)((longlong)puVar5 + 0x3c) = 1;
        FUN_140391314(param_1,puVar5);
      }
      uVar6 = FUN_14001cc68(0x148,0x10);
      local_70 = &local_68;
      local_68 = (undefined4)DAT_14c8464e0;
      uStack_64 = DAT_14c8464e0._4_4_;
      uStack_60 = (undefined4)DAT_14c8464e8;
      uStack_5c = DAT_14c8464e8._4_4_;
      local_58 = DAT_14c8464f0;
      local_78 = *(undefined4 *)(lVar8 + 0x254);
      FUN_14664e342(uVar6,param_1[6],0,*(undefined8 *)(lVar8 + 0x25c));
      FUN_140391314(param_1,uVar6);
      puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      lVar4 = param_1[6];
      *puVar5 = &PTR_FUN_14b9c7290;
      local_48 = "SetGlyphs";
      local_40 = 9;
      local_3c = 0;
      uVar2 = FUN_14001a6c0(&local_48,1);
      FUN_14039176c(puVar5,lVar4,uVar2,1);
      *puVar5 = &PTR_FUN_14b9c7290;
      *(undefined4 *)(puVar5 + 7) = 0;
      FUN_140391314(param_1,puVar5);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442d86ee FUN_1442d86ee body=130 status=ok
// SIG undefined FUN_1442d86ee(void)

undefined4
FUN_1442d86ee(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148e95e8c(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442d8772 FUN_1442d8772 body=164 status=ok
// SIG undefined FUN_1442d8772(void)

undefined4
FUN_1442d8772(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_5[1];
  lVar2 = *param_5;
  local_48 = *param_2;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_148e965e4(param_1,lVar1,param_3,param_4);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442d8818 FUN_1442d8818 body=47 status=ok
// SIG undefined FUN_1442d8818(void)

longlong FUN_1442d8818(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442d8848 FUN_1442d8848 body=95 status=ok
// SIG undefined FUN_1442d8848(void)

ulonglong * FUN_1442d8848(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FOakUIEvent_BigMap_SetUseFixedFilters";
  local_18 = 0x25;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442d88a8 FUN_1442d88a8 body=29 status=ok
// SIG undefined FUN_1442d88a8(void)

undefined8 FUN_1442d88a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442d88c6 FUN_1442d88c6 body=95 status=ok
// SIG undefined FUN_1442d88c6(void)

ulonglong * FUN_1442d88c6(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FOakUIEvent_BigMap_ToggleProgressExpanded";
  local_18 = 0x29;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442d8926 FUN_1442d8926 body=160 status=ok
// SIG undefined FUN_1442d8926(void)

undefined4 FUN_1442d8926(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_4[1];
  lVar2 = *param_4;
  local_48 = DAT_14cbc9be8;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_148e97658(param_1,lVar1,param_2,param_3);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442d89c7 FUN_1442d89c7 body=351 status=ok
// SIG undefined FUN_1442d89c7(void)

undefined8 FUN_1442d89c7(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  do {
    if (param_3 == 0) {
      return 1;
    }
    if ((*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10)) ||
       (*(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x1c))) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 == *(int *)(param_2 + 0x60)) {
      if (1 < iVar1) {
        lVar6 = 0;
        while( true ) {
          uVar4 = *(ushort *)(*(longlong *)(param_1 + 0x58) + lVar6);
          uVar5 = (ulonglong)uVar4;
          uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x58) + lVar6);
          if (uVar4 != uVar2) break;
          if (uVar4 == 0) goto LAB_1442d8a56;
LAB_1442d8a2d:
          lVar6 = lVar6 + 2;
        }
        if ((uVar2 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar3 = (ulonglong)uVar2;
          uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_1442d8a2d;
        }
        if (uVar4 != uVar2) {
          return 0;
        }
      }
    }
    else if (*(int *)(param_2 + 0x60) + iVar1 != 1) {
      return 0;
    }
LAB_1442d8a56:
    if (*(int *)(param_1 + 0x24) != *(int *)(param_2 + 0x24)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x2c) != *(int *)(param_2 + 0x2c)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x6c) != *(int *)(param_2 + 0x6c)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40)) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == *(int *)(param_2 + 0x50)) {
      if (1 < iVar1) {
        lVar6 = 0;
        while( true ) {
          uVar4 = *(ushort *)(*(longlong *)(param_1 + 0x48) + lVar6);
          uVar5 = (ulonglong)uVar4;
          uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x48) + lVar6);
          if (uVar4 != uVar2) break;
          if (uVar4 == 0) goto LAB_1442d8ae0;
LAB_1442d8abe:
          lVar6 = lVar6 + 2;
        }
        if ((uVar2 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar3 = (ulonglong)uVar2;
          uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_1442d8abe;
        }
        if (uVar4 != uVar2) {
          return 0;
        }
      }
    }
    else if (*(int *)(param_2 + 0x50) + iVar1 != 1) {
      return 0;
    }
LAB_1442d8ae0:
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
    param_3 = param_3 + -1;
  } while( true );
}



// FUNCTION 1442d8b3e FUN_1442d8b3e body=546 status=ok
// SIG undefined FUN_1442d8b3e(void)

void FUN_1442d8b3e(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  size_t sVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  wchar_t *_Str;
  uint uVar8;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar4 = (longlong *)*param_2;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_58 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      goto LAB_1442d8c20;
    }
  }
  local_58 = (undefined1 *)0x0;
  sVar3 = wcslen(_Str);
  local_48 = FUN_14475aa65(0,_Str,sVar3 & 0xffffffff);
  uVar8 = local_48 + 1;
  local_50 = (undefined1 *)0x0;
  if (0x80 < uVar8) {
    FUN_1446efa72(&local_58,0,uVar8,1);
    local_50 = local_58;
  }
  if (local_50 == (undefined1 *)0x0) {
    local_50 = local_d8;
  }
  FUN_14475a98a(local_50,uVar8,_Str,(int)sVar3 + 1);
LAB_1442d8c20:
  puVar2 = local_50;
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x210))(plVar4);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x50))(plVar4,puVar2,3);
    plVar5 = (longlong *)param_1[2];
    if (*(code **)(*plVar5 + 0x50) != FUN_144828418) {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x50))();
    }
    FUN_1447a1fc0(plVar5);
    plVar5 = (longlong *)param_1[2];
    pcVar1 = *(code **)(*plVar5 + 0x28);
    if (pcVar1 == FUN_14482841c) {
      plVar6 = plVar5 + 3;
      if (plVar5[5] != 0) {
        plVar6 = (longlong *)(plVar5[5] + 8);
      }
    }
    else if (pcVar1 == (code *)&LAB_14010c34c) {
      plVar6 = plVar5 + 2;
    }
    else {
      plVar6 = (longlong *)(*pcVar1)(plVar5);
    }
    if ((int)plVar6[1] == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*plVar6;
    }
    (**(code **)(*plVar4 + 0xd0))(plVar4,puVar7);
    (**(code **)(*plVar4 + 0x140))(plVar4,(char)param_1[4]);
    (**(code **)(*plVar4 + 0x140))(plVar4,*(undefined1 *)((longlong)param_1 + 0x21));
    (**(code **)(*plVar4 + 0x58))(plVar4);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442d8d62 FUN_1442d8d62 body=165 status=ok
// SIG undefined FUN_1442d8d62(void)

undefined8 * FUN_1442d8d62(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong *plVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b9c5410;
  puVar1 = puVar4 + 1;
  puVar4[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar4 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  puVar4[3] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined2 *)(puVar4 + 5) = *(undefined2 *)(param_1 + 0x28);
  return puVar1;
}



// FUNCTION 1442d8e0e FUN_1442d8e0e body=29 status=ok
// SIG undefined FUN_1442d8e0e(void)

void FUN_1442d8e0e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1442d8e2c FUN_1442d8e2c body=72 status=ok
// SIG undefined FUN_1442d8e2c(void)

undefined8 * FUN_1442d8e2c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c5410;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442d8e74 FUN_1442d8e74 body=413 status=ok
// SIG undefined FUN_1442d8e74(void)

void FUN_1442d8e74(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  uint uVar2;
  longlong *plVar3;
  wchar_t *_Str;
  undefined1 auStack_138 [32];
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118 = param_1 + 6;
  plVar3 = param_1 + 4;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      goto LAB_1442d8f98;
    }
  }
  local_60 = (undefined1 *)0x0;
  local_f8 = local_118;
  local_f0 = plVar3;
  local_e8 = param_2;
  sVar1 = wcslen(_Str);
  local_50 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
  uVar2 = local_50 + 1;
  local_58 = (undefined1 *)0x0;
  if (0x80 < uVar2) {
    FUN_1446efa72(&local_60,0,uVar2,1);
    local_58 = local_60;
  }
  if (local_58 == (undefined1 *)0x0) {
    local_58 = local_e0;
  }
  FUN_14475a98a(local_58,uVar2,_Str,(int)sVar1 + 1);
  local_118 = local_f8;
  param_2 = local_e8;
  plVar3 = local_f0;
LAB_1442d8f98:
  local_110 = param_1 + 7;
  local_108 = param_1 + 9;
  FUN_148e98210(param_2,local_58,param_1 + 2,plVar3);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442d901e FUN_1442d901e body=337 status=ok
// SIG undefined FUN_1442d901e(void)

void FUN_1442d901e(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  uint uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      goto LAB_1442d9102;
    }
  }
  local_60 = (undefined1 *)0x0;
  sVar1 = wcslen(_Str);
  local_50 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
  uVar2 = local_50 + 1;
  local_58 = (undefined1 *)0x0;
  if (0x80 < uVar2) {
    FUN_1446efa72(&local_60,0,uVar2,1);
    local_58 = local_60;
  }
  if (local_58 == (undefined1 *)0x0) {
    local_58 = local_e0;
  }
  FUN_14475a98a(local_58,uVar2,_Str,(int)sVar1 + 1);
LAB_1442d9102:
  FUN_148e985a4(param_2,local_58,param_1 + 2,(longlong)param_1 + 0x14);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442d917c FUN_1442d917c body=667 status=ok
// SIG undefined FUN_1442d917c(void)

void FUN_1442d917c(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar3 = *(longlong *)(*param_1 + 0x288);
  if ((lVar3 != 0) && (plVar4 = *(longlong **)(lVar3 + 0x68), plVar4 != (longlong *)0x0)) {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_1442d92ab;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if (((((*(longlong *)(lVar3 + 0x60) != 0) &&
          ((*(byte *)(*(longlong *)(lVar3 + 0x60) + 0x8c) & 0x80) != 0)) &&
         (*(longlong *)(lVar3 + 0x408) != 0)) &&
        ((*(int *)(lVar3 + 0x58) != 0 && (uVar2 = *(uint *)(lVar3 + 0x54), -1 < (int)uVar2)))) &&
       ((((int)uVar2 < DAT_14c9647dc &&
         ((plVar9 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(lVar3 + 0x58))))) &&
        ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x290))(plVar9,lVar3,*(undefined8 *)(lVar3 + 0x408));
        puVar5 = *(ushort **)(lVar3 + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
LAB_1442d92ab:
    plVar4 = *(longlong **)(lVar3 + 0x68);
    if (plVar4 != (longlong *)0x0) {
      iVar7 = (int)plVar4[1];
      do {
        if (iVar7 == 0) {
          return;
        }
        LOCK();
        iVar6 = (int)plVar4[1];
        bVar10 = iVar7 == iVar6;
        if (bVar10) {
          *(int *)(plVar4 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar10);
      if (((((*(longlong *)(lVar3 + 0x60) != 0) &&
            ((*(byte *)(*(longlong *)(lVar3 + 0x60) + 0x8c) & 0x80) != 0)) &&
           (*(longlong *)(lVar3 + 0x410) != 0)) &&
          (((*(int *)(lVar3 + 0x58) != 0 && (uVar2 = *(uint *)(lVar3 + 0x54), -1 < (int)uVar2)) &&
           (((int)uVar2 < DAT_14c9647dc &&
            ((plVar9 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(lVar3 + 0x58))))))))) &&
         ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
          lVar8 = *plVar9;
        }
        else {
          lVar8 = 0;
        }
        if (*(longlong *)(lVar8 + 0x40) == 0) {
          plVar9 = (longlong *)(lVar8 + 0x28);
        }
        else {
          plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
        }
        if (((longlong *)*plVar9 != (longlong *)0x0) &&
           (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
           plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar9 + 0x290))(plVar9,lVar3,*(undefined8 *)(lVar3 + 0x410));
          puVar5 = *(ushort **)(lVar3 + 0x90);
          if (puVar5 != (ushort *)0x0) {
            *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x88) & 0x3f));
          }
        }
      }
      LOCK();
      plVar9 = plVar4 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001442d9401. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1442d9442 FUN_1442d9442 body=29 status=ok
// SIG undefined FUN_1442d9442(void)

undefined8 FUN_1442d9442(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442d9460 FUN_1442d9460 body=338 status=ok
// SIG undefined FUN_1442d9460(void)

void FUN_1442d9460(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar3 = *(longlong *)(*param_1 + 0x288);
  if ((lVar3 != 0) && (plVar4 = *(longlong **)(lVar3 + 0x68), plVar4 != (longlong *)0x0)) {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if ((((((*(longlong *)(lVar3 + 0x60) != 0) &&
           ((*(byte *)(*(longlong *)(lVar3 + 0x60) + 0x8c) & 0x80) != 0)) &&
          (*(longlong *)(lVar3 + 0x418) != 0)) &&
         ((*(int *)(lVar3 + 0x58) != 0 && (uVar2 = *(uint *)(lVar3 + 0x54), -1 < (int)uVar2)))) &&
        (((int)uVar2 < DAT_14c9647dc &&
         ((plVar9 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(lVar3 + 0x58))))))) &&
       ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x290))(plVar9,lVar3,*(undefined8 *)(lVar3 + 0x418));
        puVar5 = *(ushort **)(lVar3 + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001442d95a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1442d95dc FUN_1442d95dc body=29 status=ok
// SIG undefined FUN_1442d95dc(void)

undefined8 FUN_1442d95dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442d95fa FUN_1442d95fa body=31 status=ok
// SIG undefined FUN_1442d95fa(void)

undefined8 FUN_1442d95fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442d96fe FUN_1442d96fe body=12 status=ok
// SIG undefined FUN_1442d96fe(void)

void FUN_1442d96fe(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442d9707. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442d970a FUN_1442d970a body=29 status=ok
// SIG undefined FUN_1442d970a(void)

undefined8 FUN_1442d970a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442d976a FUN_1442d976a body=12 status=ok
// SIG undefined FUN_1442d976a(void)

void FUN_1442d976a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442d9773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442d9776 FUN_1442d9776 body=29 status=ok
// SIG undefined FUN_1442d9776(void)

undefined8 FUN_1442d9776(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442d97ce FUN_1442d97ce body=12 status=ok
// SIG undefined FUN_1442d97ce(void)

void FUN_1442d97ce(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442d97d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442d97da FUN_1442d97da body=29 status=ok
// SIG undefined FUN_1442d97da(void)

undefined8 FUN_1442d97da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442d9832 FUN_1442d9832 body=12 status=ok
// SIG undefined FUN_1442d9832(void)

void FUN_1442d9832(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442d983b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442d983e FUN_1442d983e body=29 status=ok
// SIG undefined FUN_1442d983e(void)

undefined8 FUN_1442d983e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442d98a6 FUN_1442d98a6 body=12 status=ok
// SIG undefined FUN_1442d98a6(void)

void FUN_1442d98a6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442d98af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442d98b2 FUN_1442d98b2 body=29 status=ok
// SIG undefined FUN_1442d98b2(void)

undefined8 FUN_1442d98b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442d991a FUN_1442d991a body=12 status=ok
// SIG undefined FUN_1442d991a(void)

void FUN_1442d991a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442d9923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442d9926 FUN_1442d9926 body=29 status=ok
// SIG undefined FUN_1442d9926(void)

undefined8 FUN_1442d9926(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442d9998 FUN_1442d9998 body=12 status=ok
// SIG undefined FUN_1442d9998(void)

void FUN_1442d9998(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442d99a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442d99a4 FUN_1442d99a4 body=29 status=ok
// SIG undefined FUN_1442d99a4(void)

undefined8 FUN_1442d99a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442d99c2 FUN_1442d99c2 body=73 status=ok
// SIG undefined FUN_1442d99c2(void)

undefined8 * FUN_1442d99c2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c5a70;
  FUN_145ab9500(param_1 + 5);
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



// FUNCTION 1442d9a10 FUN_1442d9a10 body=81 status=ok
// SIG undefined FUN_1442d9a10(void)

undefined8 FUN_1442d9a10(longlong param_1)

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



// FUNCTION 1442d9a66 FUN_1442d9a66 body=89 status=ok
// SIG undefined FUN_1442d9a66(void)

bool FUN_1442d9a66(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1442d9ab1;
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
LAB_1442d9ab1:
  return lVar6 == param_2;
}



// FUNCTION 1442d9adc FUN_1442d9adc body=137 status=ok
// SIG undefined FUN_1442d9adc(void)

void FUN_1442d9adc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 0x15) {
    FUN_1446efa72(param_2,0,0x15,0x10);
    *(undefined4 *)(param_2 + 1) = 0x15;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c5a70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  FUN_148e817d8(puVar1 + 5,param_1 + 0x28);
  puVar1[0x28] = *(undefined8 *)(param_1 + 0x140);
  return;
}



// FUNCTION 1442d9b66 FUN_1442d9b66 body=137 status=ok
// SIG undefined FUN_1442d9b66(void)

void FUN_1442d9b66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 0x15) {
    FUN_1446efa72(param_2,0,0x15,0x10);
    *(undefined4 *)(param_2 + 1) = 0x15;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c5a70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  FUN_148e817d8(puVar1 + 5,param_1 + 0x28);
  puVar1[0x28] = *(undefined8 *)(param_1 + 0x140);
  return;
}



// FUNCTION 1442d9bf0 FUN_1442d9bf0 body=175 status=ok
// SIG undefined FUN_1442d9bf0(void)

void FUN_1442d9bf0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 0x15) {
    FUN_1446efa72(param_2 + 1,0,0x15,0x10);
    param_2[1].LockCount = 0x15;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c5a70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  FUN_148e817d8(&p_Var1->Flags,param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x140);
  p_Var1[6].EntryCount = (int)uVar3;
  p_Var1[6].ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442d9c8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442d9caa FUN_1442d9caa body=46 status=ok
// SIG undefined FUN_1442d9caa(void)

undefined8 FUN_1442d9caa(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1442d9cd8(param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1442d9cd8 FUN_1442d9cd8 body=1516 status=ok
// SIG undefined FUN_1442d9cd8(void)

void FUN_1442d9cd8(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined1 local_c0;
  undefined8 *local_b8;
  ulonglong uStack_b0;
  longlong local_a8;
  undefined1 local_a0;
  undefined8 *local_98;
  ulonglong uStack_90;
  longlong local_88;
  undefined1 local_80;
  undefined8 *local_78;
  ulonglong uStack_70;
  longlong local_68;
  undefined1 local_60;
  undefined8 *local_58;
  ulonglong uStack_50;
  longlong local_48;
  undefined1 local_40;
  undefined8 *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)(param_1 + 0x118);
  if ((*(longlong *)(lVar2 + 0x530) != 0) && (lVar4 = FUN_14090ae24(param_1), lVar4 != 0)) {
    lVar5 = *(longlong *)(lVar2 + 0x540);
    if (lVar5 != lVar4) {
      if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      FUN_1401924dc(lVar4);
      *(longlong *)(lVar2 + 0x540) = lVar4;
      lVar5 = lVar4;
    }
    FUN_140648376(lVar2 + 0x550,lVar5);
    *(undefined2 *)(lVar2 + 0x56c) = 1;
    local_40 = 1;
    local_38 = (undefined8 *)0x0;
    uStack_30 = 0;
    local_48 = lVar2 + 0x550;
    FUN_140a5cfd6(*(longlong *)(lVar2 + 0x530) + 0x1e0,*(longlong *)(lVar2 + 0x530),&local_48);
    if ((int)uStack_30 != 0) {
      if (local_38 == (undefined8 *)0x0) goto LAB_1442d9e1e;
      if (*(code **)*local_38 == FUN_145715146) {
        *local_38 = &PTR_FUN_14b478da0;
        plVar3 = (longlong *)local_38[4];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
      }
      else {
        (**(code **)*local_38)(local_38,0);
      }
      FUN_1446efa72(&local_38,0,0,0x10);
      uStack_30 = uStack_30 & 0xffffffff00000000;
    }
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1442d9e1e:
  if ((*(longlong *)(lVar2 + 0x600) != 0) && (lVar4 = FUN_14090ae24(param_1 + 0x28), lVar4 != 0)) {
    lVar5 = *(longlong *)(lVar2 + 0x610);
    if (lVar5 != lVar4) {
      if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      FUN_1401924dc(lVar4);
      *(longlong *)(lVar2 + 0x610) = lVar4;
      lVar5 = lVar4;
    }
    FUN_140648376(lVar2 + 0x620,lVar5);
    *(undefined2 *)(lVar2 + 0x63c) = 1;
    local_60 = 1;
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    local_68 = lVar2 + 0x620;
    FUN_140a5cfd6(*(longlong *)(lVar2 + 0x600) + 0x1e0,*(longlong *)(lVar2 + 0x600),&local_68);
    if ((int)uStack_50 != 0) {
      if (local_58 == (undefined8 *)0x0) goto LAB_1442d9f3d;
      if (*(code **)*local_58 == FUN_145715146) {
        *local_58 = &PTR_FUN_14b478da0;
        plVar3 = (longlong *)local_58[4];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
      }
      else {
        (**(code **)*local_58)(local_58,0);
      }
      FUN_1446efa72(&local_58,0,0,0x10);
      uStack_50 = uStack_50 & 0xffffffff00000000;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1442d9f3d:
  if ((*(longlong *)(lVar2 + 0x460) != 0) && (lVar4 = FUN_14090ae24(param_1 + 0x50), lVar4 != 0)) {
    lVar5 = *(longlong *)(lVar2 + 0x470);
    if (lVar5 != lVar4) {
      if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      FUN_1401924dc(lVar4);
      *(longlong *)(lVar2 + 0x470) = lVar4;
      lVar5 = lVar4;
    }
    FUN_140648376(lVar2 + 0x480,lVar5);
    local_80 = 1;
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    local_88 = lVar2 + 0x480;
    FUN_140a5cfd6(*(longlong *)(lVar2 + 0x460) + 0x1e0,*(longlong *)(lVar2 + 0x460),&local_88);
    if ((int)uStack_70 != 0) {
      if (local_78 == (undefined8 *)0x0) goto LAB_1442da043;
      if (*(code **)*local_78 == FUN_145715146) {
        *local_78 = &PTR_FUN_14b478da0;
        plVar3 = (longlong *)local_78[4];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
      }
      else {
        (**(code **)*local_78)(local_78,0);
      }
      FUN_1446efa72(&local_78,0,0,0x10);
      uStack_70 = uStack_70 & 0xffffffff00000000;
    }
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1442da043:
  if ((*(longlong *)(lVar2 + 0x2c8) != 0) && (lVar4 = FUN_14090ae24(param_1 + 0x78), lVar4 != 0)) {
    lVar5 = *(longlong *)(lVar2 + 0x2d8);
    if (lVar5 != lVar4) {
      if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      FUN_1401924dc(lVar4);
      *(longlong *)(lVar2 + 0x2d8) = lVar4;
      lVar5 = lVar4;
    }
    FUN_140648376(lVar2 + 0x2e0,lVar5);
    local_a0 = 1;
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    local_a8 = lVar2 + 0x2e0;
    FUN_140a5cfd6(*(longlong *)(lVar2 + 0x2c8) + 0x1e0,*(longlong *)(lVar2 + 0x2c8),&local_a8);
    if ((int)uStack_90 != 0) {
      if (local_98 == (undefined8 *)0x0) goto LAB_1442da149;
      if (*(code **)*local_98 == FUN_145715146) {
        *local_98 = &PTR_FUN_14b478da0;
        plVar3 = (longlong *)local_98[4];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
      }
      else {
        (**(code **)*local_98)(local_98,0);
      }
      FUN_1446efa72(&local_98,0,0,0x10);
      uStack_90 = uStack_90 & 0xffffffff00000000;
    }
    if (local_98 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1442da149:
  if (*(longlong *)(lVar2 + 0x390) != 0) {
    lVar4 = 0xf0;
    if (*(char *)(lVar2 + 0x280) == '\x02') {
      lVar4 = 200;
    }
    lVar5 = 0xa0;
    if (*(char *)(lVar2 + 0x280) != '\x01') {
      lVar5 = lVar4;
    }
    lVar4 = FUN_14090ae24(param_1 + lVar5);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar2 + 0x3a0);
      if (lVar5 != lVar4) {
        if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
          FUN_140113f48();
        }
        FUN_1401924dc(lVar4);
        *(longlong *)(lVar2 + 0x3a0) = lVar4;
        lVar5 = lVar4;
      }
      FUN_140648376(lVar2 + 0x3b0,lVar5);
      local_c0 = 1;
      local_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      local_c8 = lVar2 + 0x3b0;
      FUN_140a5cfd6(*(longlong *)(lVar2 + 0x390) + 0x1e0,*(longlong *)(lVar2 + 0x390),&local_c8);
      if ((int)uStack_b0 != 0) {
        if (local_b8 == (undefined8 *)0x0) goto LAB_1442da26f;
        if (*(code **)*local_b8 == FUN_145715146) {
          *local_b8 = &PTR_FUN_14b478da0;
          plVar3 = (longlong *)local_b8[4];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
        }
        else {
          (**(code **)*local_b8)(local_b8,0);
        }
        FUN_1446efa72(&local_b8,0,0,0x10);
        uStack_b0 = uStack_b0 & 0xffffffff00000000;
      }
      if (local_b8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1442da26f:
  if ((local_28 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442da2c6 FUN_1442da2c6 body=130 status=ok
// SIG undefined FUN_1442da2c6(void)

undefined4
FUN_1442da2c6(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148e99588(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442da408 FUN_1442da408 body=12 status=ok
// SIG undefined FUN_1442da408(void)

void FUN_1442da408(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442da411. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442da414 FUN_1442da414 body=29 status=ok
// SIG undefined FUN_1442da414(void)

undefined8 FUN_1442da414(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442da4e6 FUN_1442da4e6 body=12 status=ok
// SIG undefined FUN_1442da4e6(void)

void FUN_1442da4e6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442da4ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442da4f2 FUN_1442da4f2 body=29 status=ok
// SIG undefined FUN_1442da4f2(void)

undefined8 FUN_1442da4f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442da514 FUN_1442da514 body=96 status=ok
// SIG undefined FUN_1442da514(void)

undefined8 * FUN_1442da514(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b9c5e90;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  return puVar1;
}



// FUNCTION 1442da57a FUN_1442da57a body=12 status=ok
// SIG undefined FUN_1442da57a(void)

void FUN_1442da57a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442da583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442da586 FUN_1442da586 body=57 status=ok
// SIG undefined FUN_1442da586(void)

undefined8 * FUN_1442da586(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c5e90;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442da602 FUN_1442da602 body=12 status=ok
// SIG undefined FUN_1442da602(void)

void FUN_1442da602(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442da60b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442da60e FUN_1442da60e body=29 status=ok
// SIG undefined FUN_1442da60e(void)

undefined8 FUN_1442da60e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442da6ea FUN_1442da6ea body=12 status=ok
// SIG undefined FUN_1442da6ea(void)

void FUN_1442da6ea(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442da6f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442da6f6 FUN_1442da6f6 body=29 status=ok
// SIG undefined FUN_1442da6f6(void)

undefined8 FUN_1442da6f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442da71c FUN_1442da71c body=130 status=ok
// SIG undefined FUN_1442da71c(void)

undefined4
FUN_1442da71c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148e9a714(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442da7a0 FUN_1442da7a0 body=164 status=ok
// SIG undefined FUN_1442da7a0(void)

undefined4
FUN_1442da7a0(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_5[1];
  lVar2 = *param_5;
  local_48 = *param_2;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_148e9acec(param_1,lVar1,param_3,param_4);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442da858 FUN_1442da858 body=68 status=ok
// SIG undefined FUN_1442da858(void)

undefined8 * FUN_1442da858(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c62c0;
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



// FUNCTION 1442da8ba FUN_1442da8ba body=130 status=ok
// SIG undefined FUN_1442da8ba(void)

undefined4
FUN_1442da8ba(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148e9d9f2(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442da93e FUN_1442da93e body=28 status=ok
// SIG undefined FUN_1442da93e(void)

void FUN_1442da93e(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_148e916b2();
  FUN_145ac38b0(uVar1,uVar2);
  return;
}



// FUNCTION 1442da99e FUN_1442da99e body=83 status=ok
// SIG undefined FUN_1442da99e(void)

undefined8 * FUN_1442da99e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b9c6440;
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442da9f8 FUN_1442da9f8 body=130 status=ok
// SIG undefined FUN_1442da9f8(void)

undefined4
FUN_1442da9f8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148e9e014(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442daa88 FUN_1442daa88 body=134 status=ok
// SIG undefined FUN_1442daa88(void)

undefined4 FUN_1442daa88(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_38 = DAT_14cb92b68;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148e9e6dc(param_1,lVar4,param_2);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442dab10 FUN_1442dab10 body=160 status=ok
// SIG undefined FUN_1442dab10(void)

undefined4 FUN_1442dab10(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_4[1];
  lVar2 = *param_4;
  local_48 = DAT_14cb92b68;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_148e9ecb4(param_1,lVar1,param_2,param_3);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442dabb2 FUN_1442dabb2 body=160 status=ok
// SIG undefined FUN_1442dabb2(void)

undefined4 FUN_1442dabb2(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_4[1];
  lVar2 = *param_4;
  local_48 = DAT_14cb92c00;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_148e9f8d0(param_1,lVar1,param_2,param_3);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442dac5f FUN_1442dac5f body=19511 status=ok
// SIG undefined FUN_1442dac5f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1442dac5f(void)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  wchar_t **local_78;
  ulonglong *local_70;
  wchar_t *local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = (wchar_t **)0x149fca2ba;
  local_70 = (ulonglong *)CONCAT35(local_70._5_3_,0xd);
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbb30 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_78,&DAT_14cbdbb38);
  if (cVar1 == '\0') {
    _DAT_14cbdbb38 = 0;
    uRam000000014cbdbb40 = 0;
  }
  if (local_78 != (wchar_t **)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbdbb48 = 0x47efffffe0000000;
  _DAT_14cbdbb50 = 0x47efffffe0000000;
  _DAT_14cbdbb58 = 0x47efffffe0000000;
  _DAT_14cbdbb60 = 0x47efffffe0000000;
  _DAT_14cbdbb68 = 0x47efffffe0000000;
  _DAT_14cbdbb70 = 0x47efffffe0000000;
  _DAT_14cbdbb78 = 0x47efffffe0000000;
  _DAT_14cbdbb80 = 0x47efffffe0000000;
  local_78 = (wchar_t **)&DAT_14b6040ec;
  local_70._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbb88 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbdbb90,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1442c5d4c);
  local_78 = (wchar_t **)&DAT_14a19662d;
  local_70._0_5_ = 4;
  FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbba4 = 0;
  FUN_14052b5e0(&DAT_14cbdbba0,"PlayerAwareness",0);
  _DAT_14cbdbbb0 = "PlayerAwareness";
  local_78 = (wchar_t **)0x14b604105;
  local_70._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbbb8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b60410b;
  local_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbbc0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b507318;
  local_70._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbbc8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b604115;
  local_70._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbbd0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14a1774ea;
  local_70._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbbd8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b60411c;
  local_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbbe0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b604127;
  local_70._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbbe8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b4102b8;
  local_70._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbbf0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)&DAT_14b604134;
  local_70._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbbf8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b604139;
  local_70._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbc00 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b604141;
  local_70._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbc08 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b60414a;
  local_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbc10 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b60415f;
  local_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbc18 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b604174;
  local_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbc20 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b60417f;
  local_70._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbc28 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b60418e;
  local_70._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbc30 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b60419d;
  local_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbc38 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b6041b2;
  local_70._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbc40 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b6041c8;
  local_70._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbc48 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbdbc50,L"UNSET",1);
  local_78 = (wchar_t **)&DAT_14b3f27c8;
  local_70._0_5_ = 4;
  FUN_14001a6c0(&local_78,1);
  local_78 = (wchar_t **)0x14b6041d4;
  local_70._0_5_ = 6;
  FUN_14001a6c0(&local_78,1);
  local_78 = (wchar_t **)0x14b6041db;
  local_70._0_5_ = 0xd;
  FUN_14001a6c0(&local_78,1);
  local_78 = (wchar_t **)0x14b6041e9;
  local_70._0_5_ = 6;
  FUN_14001a6c0(&local_78,1);
  FUN_1446f470e(&DAT_14cbdbc58,L"Party",1);
  FUN_1446f470e(&DAT_14cbdbc60,&DAT_149e063b2);
  _DAT_14cbdbc6c = 0;
  FUN_14052b5e0(&DAT_14cbdbc68,"trait_mission",0);
  _DAT_14cbdbc78 = "trait_mission";
  _DAT_14cbdbc84 = 0;
  FUN_14052b5e0(&DAT_14cbdbc80,"weekly_trait_mission",0);
  _DAT_14cbdbc90 = "weekly_trait_mission";
  _DAT_14cbdbca0 = 0;
  _DAT_14cbdbca8 = FUN_14664da36;
  _DAT_14cbdbcb0 = "travel_notification";
  _DAT_14cbdbc98 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdbc98;
  atexit((_func_5014 *)&LAB_1442c5d5d);
  local_78 = (wchar_t **)0x14b9c1674;
  local_70._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdbcb8 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbdbcc0,"Countdown");
  atexit((_func_5014 *)&LAB_1442c5d69);
  FUN_1400b22c2(&DAT_14cbdbcd0,"ToggleTravelStatus");
  atexit((_func_5014 *)&LAB_1442c5d7a);
  FUN_1400b22c2(&DAT_14cbdbce0,"ExitImmediatelyMissionReplay");
  atexit((_func_5014 *)&LAB_1442c5d8b);
  _DAT_14cbdbcf8 = 0;
  _DAT_14cbdbd00 = FUN_145d29daa;
  _DAT_14cbdbd08 = "user_prompt";
  _DAT_14cbdbcf0 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdbcf0;
  atexit((_func_5014 *)&LAB_1442c5f11);
  _DAT_14cbdbd18 = 0;
  _DAT_14cbdbd20 = FUN_14664db0a;
  _DAT_14cbdbd28 = "vault_tracker";
  _DAT_14cbdbd10 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdbd10;
  atexit((_func_5014 *)&LAB_1442c70ec);
  FUN_1400b22c2(&DAT_14cbdbd30,"_TrackerText");
  atexit((_func_5014 *)&LAB_1442c70f8);
  FUN_1400b22c2(&DAT_14cbdbd40,"TrackerActivate");
  atexit((_func_5014 *)&LAB_1442c7109);
  FUN_1400b22c2(&DAT_14cbdbd50,"SearchSuccess");
  atexit((_func_5014 *)&LAB_1442c711a);
  FUN_1400b22c2(&DAT_14cbdbd60,"SearchPing");
  atexit((_func_5014 *)&LAB_1442c712b);
  FUN_1400b22c2(&DAT_14cbdbd70,"Switch");
  atexit((_func_5014 *)&LAB_1442c713c);
  FUN_1400b22c2(&DAT_14cbdbd80,"tint_siren");
  atexit((_func_5014 *)&LAB_1442c714d);
  FUN_1400b22c2(&DAT_14cbdbd90,"tint_health");
  atexit((_func_5014 *)&LAB_1442c715e);
  local_78 = (wchar_t **)0x14b9c1772;
  local_70._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdbda0 = (ulonglong)uVar2;
  _DAT_14cbdbdb0 = 0;
  _DAT_14cbdbdb8 = FUN_14592e8aa;
  _DAT_14cbdbdc0 = "vehicle_status";
  _DAT_14cbdbda8 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdbda8;
  atexit((_func_5014 *)&LAB_1442c716f);
  _DAT_14cbdbdd0 = 0;
  _DAT_14cbdbdd8 = FUN_14664dcb2;
  _DAT_14cbdbde0 = "vehicle_unavailable";
  _DAT_14cbdbdc8 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdbdc8;
  atexit((_func_5014 *)&LAB_1442c719f);
  FUN_1446f470e(&DAT_14cbdbde8,L"Join",1);
  FUN_1446f470e(&DAT_14cbdbdf0,L"Invite",1);
  FUN_1446f470e(&DAT_14cbdbdf8,L"ViewProfile",1);
  FUN_1446f470e(&DAT_14cbdbe00,L"AddFriend",1);
  FUN_1446f470e(&DAT_14cbdbe08,L"Mute",1);
  FUN_1446f470e(&DAT_14cbdbe10,L"Unmute",1);
  FUN_1446f470e(&DAT_14cbdbe18,L"Promote",1);
  FUN_1446f470e(&DAT_14cbdbe20,L"Kick",1);
  FUN_1446f470e(&DAT_14cbdbe28,L"AddShiftFriend",1);
  FUN_1446f470e(&DAT_14cbdbe30,L"RemoveShiftFriend",1);
  FUN_1446f470e(&DAT_14cbdbe38,L"AddFavorite",1);
  FUN_1446f470e(&DAT_14cbdbe40,L"RemoveFavorite",1);
  FUN_1446f470e(&DAT_14cbdbe48,L"BlockShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbdbe50,L"UnblockShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbdbe58,L"ReportShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbdbe60,L"InviteFriend",1);
  FUN_1446f470e(&DAT_14cbdbe68,L"InviteRecentFriends",1);
  FUN_1446f470e(&DAT_14cbdbe70,L"JoinRecentFriendsHost",1);
  FUN_1446f470e(&DAT_14cbdbe78,L"ViewProfiles",1);
  FUN_1446f470e(&DAT_14cbdbe80,L"TeleportToPlayer",1);
  FUN_1446f470e(&DAT_14cbdbe88,L"Cancel");
  _DAT_14cbdbe90 = 0;
  uRam000000014cbdbe98 = 0;
  _DAT_14cbdbea0 = 0;
  DAT_14cbdbea8 = 0;
  uRam000000014cbdbeb0 = 0;
  FUN_1446ddda2(&DAT_14cbdbe90,"Dialog_Join",0);
  atexit((_func_5014 *)&LAB_1442c71ab);
  _DAT_14cbdbeb8 = 0;
  uRam000000014cbdbec0 = 0;
  _DAT_14cbdbec8 = 0;
  DAT_14cbdbed0 = 0;
  uRam000000014cbdbed8 = 0;
  FUN_1446ddda2(&DAT_14cbdbeb8,"Dialog_Invite",0);
  atexit((_func_5014 *)&LAB_1442c71bc);
  _DAT_14cbdbee0 = 0;
  uRam000000014cbdbee8 = 0;
  _DAT_14cbdbef0 = 0;
  DAT_14cbdbef8 = 0;
  uRam000000014cbdbf00 = 0;
  FUN_1446ddda2(&DAT_14cbdbee0,"Dialog_ViewProfile",0);
  atexit((_func_5014 *)&LAB_1442c71cd);
  _DAT_14cbdbf08 = 0;
  uRam000000014cbdbf10 = 0;
  _DAT_14cbdbf18 = 0;
  DAT_14cbdbf20 = 0;
  uRam000000014cbdbf28 = 0;
  FUN_1446ddda2(&DAT_14cbdbf08,"Dialog_AddFriend",0);
  atexit((_func_5014 *)&LAB_1442c71de);
  _DAT_14cbdbf30 = 0;
  uRam000000014cbdbf38 = 0;
  _DAT_14cbdbf40 = 0;
  DAT_14cbdbf48 = 0;
  uRam000000014cbdbf50 = 0;
  FUN_1446ddda2(&DAT_14cbdbf30,"Dialog_Mute",0);
  atexit((_func_5014 *)&LAB_1442c71ef);
  _DAT_14cbdbf58 = 0;
  uRam000000014cbdbf60 = 0;
  _DAT_14cbdbf68 = 0;
  DAT_14cbdbf70 = 0;
  uRam000000014cbdbf78 = 0;
  FUN_1446ddda2(&DAT_14cbdbf58,"Dialog_Unmute",0);
  atexit((_func_5014 *)&LAB_1442c7200);
  _DAT_14cbdbf80 = 0;
  uRam000000014cbdbf88 = 0;
  _DAT_14cbdbf90 = 0;
  DAT_14cbdbf98 = 0;
  uRam000000014cbdbfa0 = 0;
  FUN_1446ddda2(&DAT_14cbdbf80,"Dialog_Promote",0);
  atexit((_func_5014 *)&LAB_1442c7211);
  _DAT_14cbdbfa8 = 0;
  uRam000000014cbdbfb0 = 0;
  _DAT_14cbdbfb8 = 0;
  DAT_14cbdbfc0 = 0;
  uRam000000014cbdbfc8 = 0;
  FUN_1446ddda2(&DAT_14cbdbfa8,"Dialog_Kick",0);
  atexit((_func_5014 *)&LAB_1442c7222);
  _DAT_14cbdbfd0 = 0;
  uRam000000014cbdbfd8 = 0;
  _DAT_14cbdbfe0 = 0;
  DAT_14cbdbfe8 = 0;
  uRam000000014cbdbff0 = 0;
  FUN_1446ddda2(&DAT_14cbdbfd0,"Dialog_AddShiftFriend",0);
  atexit((_func_5014 *)&LAB_1442c7233);
  _DAT_14cbdbff8 = 0;
  uRam000000014cbdc000 = 0;
  _DAT_14cbdc008 = 0;
  DAT_14cbdc010 = 0;
  uRam000000014cbdc018 = 0;
  FUN_1446ddda2(&DAT_14cbdbff8,"Dialog_RemoveShiftFriend",0);
  atexit((_func_5014 *)&LAB_1442c7244);
  _DAT_14cbdc020 = 0;
  uRam000000014cbdc028 = 0;
  _DAT_14cbdc030 = 0;
  DAT_14cbdc038 = 0;
  uRam000000014cbdc040 = 0;
  FUN_1446ddda2(&DAT_14cbdc020,"Dialog_AddFavorite",0);
  atexit((_func_5014 *)&LAB_1442c7255);
  _DAT_14cbdc048 = 0;
  uRam000000014cbdc050 = 0;
  _DAT_14cbdc058 = 0;
  DAT_14cbdc060 = 0;
  uRam000000014cbdc068 = 0;
  FUN_1446ddda2(&DAT_14cbdc048,"Dialog_RemoveFavorite",0);
  atexit((_func_5014 *)&LAB_1442c7266);
  _DAT_14cbdc070 = 0;
  uRam000000014cbdc078 = 0;
  _DAT_14cbdc080 = 0;
  DAT_14cbdc088 = 0;
  uRam000000014cbdc090 = 0;
  FUN_1446ddda2(&DAT_14cbdc070,"Dialog_BlockShiftPlayer",0);
  atexit((_func_5014 *)&LAB_1442c7277);
  _DAT_14cbdc098 = 0;
  uRam000000014cbdc0a0 = 0;
  _DAT_14cbdc0a8 = 0;
  DAT_14cbdc0b0 = 0;
  uRam000000014cbdc0b8 = 0;
  FUN_1446ddda2(&DAT_14cbdc098,"Dialog_UnblockShiftPlayer",0);
  atexit((_func_5014 *)&LAB_1442c7288);
  _DAT_14cbdc0c0 = 0;
  uRam000000014cbdc0c8 = 0;
  _DAT_14cbdc0d0 = 0;
  DAT_14cbdc0d8 = 0;
  uRam000000014cbdc0e0 = 0;
  FUN_1446ddda2(&DAT_14cbdc0c0,"Dialog_ReportShiftPlayer",0);
  atexit((_func_5014 *)&LAB_1442c7299);
  _DAT_14cbdc0e8 = 0;
  uRam000000014cbdc0f0 = 0;
  _DAT_14cbdc0f8 = 0;
  DAT_14cbdc100 = 0;
  uRam000000014cbdc108 = 0;
  FUN_1446ddda2(&DAT_14cbdc0e8,"Dialog_InviteFriend",0);
  atexit((_func_5014 *)&LAB_1442c72aa);
  _DAT_14cbdc110 = 0;
  uRam000000014cbdc118 = 0;
  _DAT_14cbdc120 = 0;
  DAT_14cbdc128 = 0;
  uRam000000014cbdc130 = 0;
  FUN_1446ddda2(&DAT_14cbdc110,"Dialog_InviteRecentFriends",0);
  atexit((_func_5014 *)&LAB_1442c72bb);
  _DAT_14cbdc138 = 0;
  uRam000000014cbdc140 = 0;
  _DAT_14cbdc148 = 0;
  DAT_14cbdc150 = 0;
  uRam000000014cbdc158 = 0;
  FUN_1446ddda2(&DAT_14cbdc138,"Dialog_JoinRecentFriendsHost",0);
  atexit((_func_5014 *)&LAB_1442c72cc);
  _DAT_14cbdc160 = 0;
  uRam000000014cbdc168 = 0;
  _DAT_14cbdc170 = 0;
  DAT_14cbdc178 = 0;
  uRam000000014cbdc180 = 0;
  FUN_1446ddda2(&DAT_14cbdc160,"Dialog_ViewProfiles",0);
  atexit((_func_5014 *)&LAB_1442c72dd);
  _DAT_14cbdc188 = 0;
  uRam000000014cbdc190 = 0;
  _DAT_14cbdc198 = 0;
  DAT_14cbdc1a0 = 0;
  uRam000000014cbdc1a8 = 0;
  FUN_1446ddda2(&DAT_14cbdc188,"Dialog_TeleportToPlayer",0);
  atexit((_func_5014 *)&LAB_1442c72ee);
  _DAT_14cbdc1b0 = 0;
  uRam000000014cbdc1b8 = 0;
  _DAT_14cbdc1c0 = 0;
  DAT_14cbdc1c8 = 0;
  uRam000000014cbdc1d0 = 0;
  FUN_1446ddda2(&DAT_14cbdc1b0,"Dialog_Cancel",0);
  atexit((_func_5014 *)&LAB_1442c72ff);
  FUN_1400b22c2(&DAT_14cbdc1d8,"GoOnlineText");
  atexit((_func_5014 *)&LAB_1442c7310);
  FUN_1400b22c2(&DAT_14cbdc1e8,"GoingOnlineTextOnePeriod");
  atexit((_func_5014 *)&LAB_1442c7321);
  FUN_1400b22c2(&DAT_14cbdc1f8,"GoingOnlineTextTwoPeriods");
  atexit((_func_5014 *)&LAB_1442c7332);
  FUN_1400b22c2(&DAT_14cbdc208,"GoingOnlineTextThreePeriods");
  atexit((_func_5014 *)&LAB_1442c7343);
  local_78 = (wchar_t **)&DAT_14b4871e8;
  local_70._0_5_ = 3;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc218 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14ac8da14;
  local_70._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc220 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b4871ec;
  local_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc228 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbdc230,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1442c7354);
  FUN_140056680(&DAT_14cbdc240,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1442c7365);
  FUN_140056680(&DAT_14cbdc250,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_1442c7376);
  FUN_140056680(&DAT_14cbdc260,L"GoreFX_");
  atexit((_func_5014 *)&LAB_1442c7387);
  FUN_1446f470e(&DAT_14cbdc270,L"LIMB_GORED",1);
  _DAT_14cbdc278 = 0x4072c00000000000;
  _DAT_14cbdc280 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbdc288,L"body",1);
  FUN_1446f470e(&DAT_14cbdc290,L"title_card",1);
  _DAT_14cbdc2a0 = 0;
  _DAT_14cbdc2a8 = FUN_14664dd36;
  _DAT_14cbdc2b0 = "voice_indicators";
  _DAT_14cbdc298 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdc298;
  atexit((_func_5014 *)&LAB_1442c7398);
  _DAT_14cbdc2c0 = 0;
  _DAT_14cbdc2c8 = FUN_14664dde8;
  _DAT_14cbdc2d0 = "weaponstatus";
  _DAT_14cbdc2b8 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdc2b8;
  atexit((_func_5014 *)&LAB_1442c73a5);
  local_78 = (wchar_t **)0x14b9c1910;
  local_70._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc2d8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b8c0998;
  local_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc2e0 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbdc2e8,"Opening");
  atexit((_func_5014 *)&LAB_1442c73b1);
  FUN_1400b22c2(&DAT_14cbdc2f8,"Closing");
  atexit((_func_5014 *)&LAB_1442c73c2);
  FUN_1400b22c2(&DAT_14cbdc308,"Highlighting");
  atexit((_func_5014 *)&LAB_1442c73d3);
  _DAT_14cbdc320 = 0;
  _DAT_14cbdc328 = FUN_14664def4;
  _DAT_14cbdc330 = "weapon_wheel";
  _DAT_14cbdc318 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdc318;
  atexit((_func_5014 *)&LAB_1442c73e4);
  DAT_14cbdc338 = 0;
  _DAT_14cbdc340 = 0;
  atexit(FUN_1442c7e16);
  _DAT_14cbdc350 = 0;
  _DAT_14cbdc358 = FUN_14664e0e0;
  _DAT_14cbdc360 = "worldicons";
  _DAT_14cbdc348 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdc348;
  atexit((_func_5014 *)&LAB_1442c7e47);
  _DAT_14cbdc370 = 0;
  _DAT_14cbdc378 = FUN_145ac7270;
  _DAT_14cbdc380 = "xpbar";
  _DAT_14cbdc368 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdc368;
  atexit((_func_5014 *)&LAB_1442c7fc6);
  _DAT_14cbdc388 = 0;
  uRam000000014cbdc390 = 0;
  _DAT_14cbdc398 = 0;
  DAT_14cbdc3a0 = 0;
  uRam000000014cbdc3a8 = 0;
  FUN_1446ddda2(&DAT_14cbdc388,"Specialization",0);
  atexit((_func_5014 *)&LAB_1442c7fd2);
  _DAT_14cbdc3b0 = 0;
  uRam000000014cbdc3b8 = 0;
  _DAT_14cbdc3c0 = 0;
  DAT_14cbdc3c8 = 0;
  uRam000000014cbdc3d0 = 0;
  FUN_1446ddda2(&DAT_14cbdc3b0,"Character",0);
  atexit((_func_5014 *)&LAB_1442c7fe3);
  _DAT_14cbdc3d8 = 0;
  uRam000000014cbdc3e0 = 0;
  _DAT_14cbdc3e8 = 0;
  DAT_14cbdc3f0 = 0;
  uRam000000014cbdc3f8 = 0;
  FUN_1446ddda2(&DAT_14cbdc3d8,"XPGainedText",0);
  atexit((_func_5014 *)&LAB_1442c7ff4);
  local_78 = (wchar_t **)0x14b9c1bb5;
  local_70._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc400 = (ulonglong)uVar2;
  _DAT_14cbdc40c = 0;
  _DAT_14cbdc410 = 0;
  FUN_14052b5e0(&DAT_14cbdc408,"profile");
  _DAT_14cbdc418 = 0;
  _DAT_14cbdc41c = 0;
  FUN_14052b5e0(&DAT_14cbdc414,"input");
  _DAT_14cbdc424 = 0;
  _DAT_14cbdc428 = 0;
  FUN_14052b5e0(&DAT_14cbdc420,"cursor");
  _DAT_14cbdc430 = 0;
  _DAT_14cbdc434 = 0;
  FUN_14052b5e0(&DAT_14cbdc42c,"invert_x_axis");
  _DAT_14cbdc43c = 0;
  _DAT_14cbdc440 = 0;
  FUN_14052b5e0(&DAT_14cbdc438,"invert_y_axis");
  _DAT_14cbdc448 = 0;
  _DAT_14cbdc44c = 0;
  FUN_14052b5e0(&DAT_14cbdc444,"sensitivity");
  _DAT_14cbdc454 = 0;
  _DAT_14cbdc458 = 0;
  FUN_14052b5e0(&DAT_14cbdc450,"friction_default");
  _DAT_14cbdc460 = 0;
  _DAT_14cbdc464 = 0;
  FUN_14052b5e0(&DAT_14cbdc45c,"pc_scroll_sensitivity");
  _DAT_14cbdc46c = 0;
  _DAT_14cbdc470 = 0;
  FUN_14052b5e0(&DAT_14cbdc468,"max_idle_time");
  _DAT_14cbdc478 = 0;
  _DAT_14cbdc47c = 0;
  FUN_14052b5e0(&DAT_14cbdc474,"show_idle_flash");
  FUN_1400b22c2(&DAT_14cbdc480,"hover");
  atexit((_func_5014 *)&LAB_1442c8086);
  FUN_1400b22c2(&DAT_14cbdc490,"press");
  atexit((_func_5014 *)&LAB_1442c8097);
  FUN_1400b22c2(&DAT_14cbdc4a0,"popup");
  atexit((_func_5014 *)&LAB_1442c80a8);
  FUN_1400b22c2(&DAT_14cbdc4b0,"scroll");
  atexit((_func_5014 *)&LAB_1442c80b9);
  FUN_1400b22c2(&DAT_14cbdc4c0,"invisible");
  atexit((_func_5014 *)&LAB_1442c80ca);
  FUN_1400b22c2(&DAT_14cbdc4d0,&DAT_14b82978f);
  atexit((_func_5014 *)&LAB_1442c80db);
  FUN_1400b22c2(&DAT_14cbdc4e0,"idle_flash");
  atexit((_func_5014 *)&LAB_1442c80ec);
  FUN_1400b22c2(&DAT_14cbdc4f0,&DAT_149e62dd2);
  atexit((_func_5014 *)&LAB_1442c80fd);
  FUN_1400b22c2(&DAT_14cbdc500,"GBX-BUTTON");
  atexit((_func_5014 *)&LAB_1442c810e);
  FUN_1400b22c2(&DAT_14cbdc510,"GBX-DROPDOWN");
  atexit((_func_5014 *)&LAB_1442c811f);
  FUN_1400b22c2(&DAT_14cbdc520,"GBX-SLIDER");
  atexit((_func_5014 *)&LAB_1442c8130);
  FUN_1400b22c2(&DAT_14cbdc530,"GBX-TEXT-INPUT");
  atexit((_func_5014 *)&LAB_1442c8141);
  local_78 = (wchar_t **)0x14b473678;
  local_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc540 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b473682;
  local_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc548 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b47368c;
  local_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc550 = (ulonglong)uVar2;
  DAT_14cbdc558._4_4_ = 0;
  DAT_14cbdc560 = 0;
  FUN_14052b5e0(&DAT_14cbdc558,"character");
  DAT_14cbdc564._4_4_ = 0;
  DAT_14cbdc56c = 0;
  FUN_14052b5e0(&DAT_14cbdc564,"profile");
  local_78 = (wchar_t **)0x14b4736a1;
  local_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc570 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b434df8;
  local_70._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc578 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b4736ac;
  local_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc580 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b4736b7;
  local_70._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc588 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b4736bf;
  local_70._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc590 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b4736c8;
  local_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc598 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x149ecaff4;
  local_70._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc5a0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b4736d2;
  local_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc5a8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b4736dd;
  local_70._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc5b0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b4736ef;
  local_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc5b8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b473704;
  local_70._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc5c0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b473710;
  local_70._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc5c8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b473719;
  local_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc5d0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)&DAT_14b473723;
  local_70._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc5d8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b473728;
  local_70._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc5e0 = (ulonglong)uVar2;
  _DAT_14cbdc5e8 = 0;
  uRam000000014cbdc5f0 = 0;
  _DAT_14cbdc5f8 = 0;
  DAT_14cbdc600 = 0;
  uRam000000014cbdc608 = 0;
  FUN_1446ddda2(&DAT_14cbdc5e8,&DAT_14b81bd00,0);
  atexit((_func_5014 *)&LAB_1442c8152);
  local_78 = (wchar_t **)0x14b81ab00;
  local_70._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc610 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ab12;
  local_70._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc618 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ab25;
  local_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc620 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ab3a;
  local_70._0_5_ = 0x10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc628 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ab4b;
  local_70._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc630 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ab5e;
  local_70._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc638 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ab71;
  local_70._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc640 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ab7f;
  local_70._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc648 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbdc650,"backpack_item_grid");
  atexit((_func_5014 *)&LAB_1442c8163);
  FUN_1400b22c2(&DAT_14cbdc660,"bpack_sort_asc_dsc");
  atexit((_func_5014 *)&LAB_1442c8174);
  FUN_1400b22c2(&DAT_14cbdc670,"sort-dropdown");
  atexit((_func_5014 *)&LAB_1442c8185);
  FUN_1400b22c2(&DAT_14cbdc680,"filter-dropdown");
  atexit((_func_5014 *)&LAB_1442c8196);
  local_78 = (wchar_t **)0x14b81abcf;
  local_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc690 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81abd9;
  local_70._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc698 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81abeb;
  local_70._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc6a0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81abfe;
  local_70._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc6a8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ac12;
  local_70._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc6b0 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbdc6b8,"filter-dropdown");
  atexit((_func_5014 *)&LAB_1442c81a7);
  FUN_1400b22c2(&DAT_14cbdc6c8,"equip_slot_dropdown");
  atexit((_func_5014 *)&LAB_1442c81b8);
  FUN_1400b22c2(&DAT_14cbdc6d8,"mark-dropdown");
  atexit((_func_5014 *)&LAB_1442c81c9);
  FUN_1400b22c2(&DAT_14cbdc6e8,"item-dropdown");
  atexit((_func_5014 *)&LAB_1442c81da);
  FUN_1400b22c2(&DAT_14cbdc6f8,"sort-dropdown");
  atexit((_func_5014 *)&LAB_1442c81eb);
  FUN_1400b22c2(&DAT_14cbdc708,&DAT_149e3cc88);
  atexit((_func_5014 *)&LAB_1442c81fc);
  FUN_1400b22c2(&DAT_14cbdc718,"Popup");
  atexit((_func_5014 *)&LAB_1442c820d);
  FUN_1400b22c2(&DAT_14cbdc728,"Fullsize");
  atexit((_func_5014 *)&LAB_1442c821e);
  FUN_1400b22c2(&DAT_14cbdc738,"EchoLogs");
  atexit((_func_5014 *)&LAB_1442c822f);
  FUN_1400b22c2(&DAT_14cbdc748,"PlayerStats");
  atexit((_func_5014 *)&LAB_1442c8240);
  FUN_1400b22c2(&DAT_14cbdc758,"RewardCenter");
  atexit((_func_5014 *)&LAB_1442c8251);
  FUN_140056680(&DAT_14cbdc768,L"reset");
  atexit((_func_5014 *)&LAB_1442c8262);
  local_78 = (wchar_t **)0x14b81ac60;
  local_70._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc778 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ac70;
  local_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc780 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ac85;
  local_70._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc788 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ac95;
  local_70._0_5_ = 0x1b;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc790 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81acb1;
  local_70._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc798 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81acc7;
  local_70._0_5_ = 0x16;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc7a0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81acde;
  local_70._0_5_ = 0x18;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc7a8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81acf7;
  local_70._0_5_ = 0x18;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc7b0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ad10;
  local_70._0_5_ = 0x1a;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc7b8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ad2b;
  local_70._0_5_ = 0x1d;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc7c0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ad49;
  local_70._0_5_ = 0x21;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc7c8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ad6b;
  local_70._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc7d0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ad81;
  local_70._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc7d8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ad95;
  local_70._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc7e0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ada8;
  local_70._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc7e8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81adbb;
  local_70._0_5_ = 0x18;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc7f0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81add4;
  local_70._0_5_ = 0x1e;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc7f8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81adf3;
  local_70._0_5_ = 0x1b;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc800 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ae0f;
  local_70._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc808 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ae25;
  local_70._0_5_ = 0x18;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc810 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ae3e;
  local_70._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc818 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ae52;
  local_70._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc820 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ae61;
  local_70._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc828 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ae74;
  local_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc830 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ae89;
  local_70._0_5_ = 0x16;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc838 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81aea0;
  local_70._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc840 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81aeb6;
  local_70._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdc848 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbdc850,L"action_ui_drop_item");
  atexit((_func_5014 *)&LAB_1442c8273);
  FUN_140056680(&DAT_14cbdc860,L"action_ui_equip_item");
  atexit((_func_5014 *)&LAB_1442c8284);
  FUN_140056680(&DAT_14cbdc870,L"action_ui_unequip_item");
  atexit((_func_5014 *)&LAB_1442c8295);
  FUN_140056680(&DAT_14cbdc880,L"action_ui_compare_item");
  atexit((_func_5014 *)&LAB_1442c82a6);
  FUN_140056680(&DAT_14cbdc890,L"action_ui_cursor_click");
  atexit((_func_5014 *)&LAB_1442c82b7);
  FUN_140056680(&DAT_14cbdc8a0,L"action_ui_set_item_flag");
  atexit((_func_5014 *)&LAB_1442c82c8);
  FUN_140056680(&DAT_14cbdc8b0,L"action_ui_remote_bank_deposit");
  atexit((_func_5014 *)&LAB_1442c82d9);
  FUN_140056680(&DAT_14cbdc8c0,L"action_ui_mark_all_filtered");
  atexit((_func_5014 *)&LAB_1442c82ea);
  FUN_140056680(&DAT_14cbdc8d0,L"action_ui_menu_escape");
  atexit((_func_5014 *)&LAB_1442c82fb);
  FUN_140056680(&DAT_14cbdc8e0,L"action_ui_show_player_stats");
  atexit((_func_5014 *)&LAB_1442c830c);
  FUN_140056680(&DAT_14cbdc8f0,L"action_ui_mark_hovered_as_junk");
  atexit((_func_5014 *)&LAB_1442c831d);
  FUN_140056680(&DAT_14cbdc900,L"action_ui_open_reward_center");
  atexit((_func_5014 *)&LAB_1442c832e);
  FUN_140056680(&DAT_14cbdc910,L"action_ui_select_slot_1");
  atexit((_func_5014 *)&LAB_1442c833f);
  FUN_140056680(&DAT_14cbdc920,L"action_ui_select_slot_2");
  atexit((_func_5014 *)&LAB_1442c8350);
  FUN_140056680(&DAT_14cbdc930,L"action_ui_select_slot_3");
  atexit((_func_5014 *)&LAB_1442c8361);
  FUN_140056680(&DAT_14cbdc940,L"action_ui_select_slot_4");
  atexit((_func_5014 *)&LAB_1442c8372);
  FUN_140056680(&DAT_14cbdc950,L"action_ui_copy_focused_item_serial_number");
  atexit((_func_5014 *)&LAB_1442c8383);
  FUN_140056680(&DAT_14cbdc960,L"action_ui_menu_escape_hold");
  atexit((_func_5014 *)&LAB_1442c8394);
  FUN_140056680(&DAT_14cbdc970,L"action_ui_inspect_item");
  atexit((_func_5014 *)&LAB_1442c83a5);
  FUN_140056680(&DAT_14cbdc980,L"action_ui_flip_item_card");
  atexit((_func_5014 *)&LAB_1442c83b6);
  FUN_140056680(&DAT_14cbdc990,L"action_ui_open_all_rewards");
  atexit((_func_5014 *)&LAB_1442c83c7);
  FUN_140056680(&DAT_14cbdc9a0,L"SelectText");
  atexit((_func_5014 *)&LAB_1442c83d8);
  FUN_140056680(&DAT_14cbdc9b0,L"CompareHint");
  atexit((_func_5014 *)&LAB_1442c83e9);
  FUN_140056680(&DAT_14cbdc9c0,L"EquipHint");
  atexit((_func_5014 *)&LAB_1442c83fa);
  FUN_140056680(&DAT_14cbdc9d0,L"UnequipHint");
  atexit((_func_5014 *)&LAB_1442c840b);
  FUN_140056680(&DAT_14cbdc9e0,L"DropHint");
  atexit((_func_5014 *)&LAB_1442c841c);
  FUN_140056680(&DAT_14cbdc9f0,L"SetItemFlagHint");
  atexit((_func_5014 *)&LAB_1442c842d);
  FUN_140056680(&DAT_14cbdca00,L"ToggleJunkHint");
  atexit((_func_5014 *)&LAB_1442c843e);
  FUN_140056680(&DAT_14cbdca10,L"MarkAllFilteredHint");
  atexit((_func_5014 *)&LAB_1442c844f);
  FUN_140056680(&DAT_14cbdca20,L"PlayerStatsHint");
  atexit((_func_5014 *)&LAB_1442c8460);
  FUN_140056680(&DAT_14cbdca30,L"SwapWeaponsHint");
  atexit((_func_5014 *)&LAB_1442c8471);
  FUN_140056680(&DAT_14cbdca40,L"BackText");
  atexit((_func_5014 *)&LAB_1442c8482);
  FUN_140056680(&DAT_14cbdca50,L"SellHint");
  atexit((_func_5014 *)&LAB_1442c8493);
  FUN_140056680(&DAT_14cbdca60,L"BuyHint");
  atexit((_func_5014 *)&LAB_1442c84a4);
  FUN_140056680(&DAT_14cbdca70,L"ExitMenuHint");
  atexit((_func_5014 *)&LAB_1442c84b5);
  FUN_140056680(&DAT_14cbdca80,L"OpenAllRewardsHint");
  atexit((_func_5014 *)&LAB_1442c84c6);
  FUN_1400b22c2(&DAT_14cbdca90,"trash");
  atexit((_func_5014 *)&LAB_1442c84d7);
  FUN_1400b22c2(&DAT_14cbdcaa0,"favorite");
  atexit((_func_5014 *)&LAB_1442c84e8);
  FUN_1400b22c2(&DAT_14cbdcab0,"bankdeposit");
  atexit((_func_5014 *)&LAB_1442c84f9);
  FUN_1400b22c2(&DAT_14cbdcac0,"taggroup1");
  atexit((_func_5014 *)&LAB_1442c850a);
  FUN_1400b22c2(&DAT_14cbdcad0,"taggroup2");
  atexit((_func_5014 *)&LAB_1442c851b);
  FUN_1400b22c2(&DAT_14cbdcae0,"taggroup3");
  atexit((_func_5014 *)&LAB_1442c852c);
  FUN_1400b22c2(&DAT_14cbdcaf0,"taggroup4");
  atexit((_func_5014 *)&LAB_1442c853d);
  local_78 = (wchar_t **)0x14b81b48a;
  local_70._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdcb00 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81b490;
  local_70._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdcb08 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81b499;
  local_70._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdcb10 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81b4a5;
  local_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdcb18 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81b4af;
  local_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdcb20 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81b4b9;
  local_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdcb28 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81b4c3;
  local_70 = (ulonglong *)CONCAT35(local_70._5_3_,9);
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdcb30 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbdcb38,"OpenBackpack");
  atexit((_func_5014 *)&LAB_1442c854e);
  FUN_1400b22c2(&DAT_14cbdcb48,"CloseBackpack");
  atexit((_func_5014 *)&LAB_1442c855f);
  FUN_1400b22c2(&DAT_14cbdcb58,"OpenPlayerStats");
  atexit((_func_5014 *)&LAB_1442c8570);
  FUN_1400b22c2(&DAT_14cbdcb68,"ClosePlayerStats");
  atexit((_func_5014 *)&LAB_1442c8581);
  FUN_1400b22c2(&DAT_14cbdcb78,"OpenRewardCenter");
  atexit((_func_5014 *)&LAB_1442c8592);
  FUN_1400b22c2(&DAT_14cbdcb88,"CloseRewardCenter");
  atexit((_func_5014 *)&LAB_1442c85a3);
  FUN_1400b22c2(&DAT_14cbdcb98,"CompareStart");
  atexit((_func_5014 *)&LAB_1442c85b4);
  FUN_1400b22c2(&DAT_14cbdcba8,"CompareStop");
  atexit((_func_5014 *)&LAB_1442c85c5);
  FUN_1400b22c2(&DAT_14cbdcbb8,"UnequipItem");
  atexit((_func_5014 *)&LAB_1442c85d6);
  FUN_1400b22c2(&DAT_14cbdcbc8,"EquipItem");
  atexit((_func_5014 *)&LAB_1442c85e7);
  FUN_1400b22c2(&DAT_14cbdcbd8,"DropItem");
  atexit((_func_5014 *)&LAB_1442c85f8);
  FUN_1400b22c2(&DAT_14cbdcbe8,"MarkItem");
  atexit((_func_5014 *)&LAB_1442c8609);
  FUN_1400b22c2(&DAT_14cbdcbf8,"Error");
  atexit((_func_5014 *)&LAB_1442c861a);
  FUN_1400b22c2(&DAT_14cbdcc08,"ElementUnfocused");
  atexit((_func_5014 *)&LAB_1442c862b);
  FUN_1400b22c2(&DAT_14cbdcc18,"ElementFocused");
  atexit((_func_5014 *)&LAB_1442c863c);
  FUN_1400b22c2(&DAT_14cbdcc28,"ElementClicked");
  atexit((_func_5014 *)&LAB_1442c864d);
  FUN_1400b22c2(&DAT_14cbdcc38,"EscapeInput");
  atexit((_func_5014 *)&LAB_1442c865e);
  FUN_1400b22c2(&DAT_14cbdcc48,"WeaponSlotFocused");
  atexit((_func_5014 *)&LAB_1442c866f);
  FUN_1400b22c2(&DAT_14cbdcc58,"WeaponSlotUnfocused");
  atexit((_func_5014 *)&LAB_1442c8680);
  FUN_1400b22c2(&DAT_14cbdcc68,"GearSlotFocused");
  atexit((_func_5014 *)&LAB_1442c8691);
  FUN_1400b22c2(&DAT_14cbdcc78,"GearSlotUnfocused");
  atexit((_func_5014 *)&LAB_1442c86a2);
  FUN_1400b22c2(&DAT_14cbdcc88,"BackpackSlotFocused");
  atexit((_func_5014 *)&LAB_1442c86b3);
  FUN_1400b22c2(&DAT_14cbdcc98,"BackpackSlotUnfocused");
  atexit((_func_5014 *)&LAB_1442c86c4);
  FUN_1400b22c2(&DAT_14cbdcca8,"MarkItemBank");
  atexit((_func_5014 *)&LAB_1442c86d5);
  FUN_1400b22c2(&DAT_14cbdccb8,"MarkItemTrash");
  atexit((_func_5014 *)&LAB_1442c86e6);
  FUN_1400b22c2(&DAT_14cbdccc8,"MarkItemFavorite");
  atexit((_func_5014 *)&LAB_1442c86f7);
  FUN_1400b22c2(&DAT_14cbdccd8,"ClickPistol");
  atexit((_func_5014 *)&LAB_1442c8708);
  FUN_1400b22c2(&DAT_14cbdcce8,"ClickAssaultRifle");
  atexit((_func_5014 *)&LAB_1442c8719);
  FUN_1400b22c2(&DAT_14cbdccf8,"ClickSMG");
  atexit((_func_5014 *)&LAB_1442c872a);
  FUN_1400b22c2(&DAT_14cbdcd08,"ClickShotgun");
  atexit((_func_5014 *)&LAB_1442c873b);
  FUN_1400b22c2(&DAT_14cbdcd18,"ClickSniper");
  atexit((_func_5014 *)&LAB_1442c874c);
  FUN_1400b22c2(&DAT_14cbdcd28,"ClickRepKit");
  atexit((_func_5014 *)&LAB_1442c875d);
  FUN_1400b22c2(&DAT_14cbdcd38,"ClickGrenade");
  atexit((_func_5014 *)&LAB_1442c876e);
  FUN_1400b22c2(&DAT_14cbdcd48,"ClickHeavyWeapon");
  atexit((_func_5014 *)&LAB_1442c877f);
  FUN_1400b22c2(&DAT_14cbdcd58,"ClickClassMod");
  atexit((_func_5014 *)&LAB_1442c8790);
  FUN_1400b22c2(&DAT_14cbdcd68,"ClickGadget");
  atexit((_func_5014 *)&LAB_1442c87a1);
  FUN_1400b22c2(&DAT_14cbdcd78,"ClickEnhancement");
  atexit((_func_5014 *)&LAB_1442c87b2);
  FUN_1400b22c2(&DAT_14cbdcd88,"ClickShield");
  atexit((_func_5014 *)&LAB_1442c87c3);
  FUN_1400b22c2(&DAT_14cbdcd98,"EquipPistol");
  atexit((_func_5014 *)&LAB_1442c87d4);
  FUN_1400b22c2(&DAT_14cbdcda8,"EquipAssaultRifle");
  atexit((_func_5014 *)&LAB_1442c87e5);
  FUN_1400b22c2(&DAT_14cbdcdb8,"EquipSMG");
  atexit((_func_5014 *)&LAB_1442c87f6);
  FUN_1400b22c2(&DAT_14cbdcdc8,"EquipShotgun");
  atexit((_func_5014 *)&LAB_1442c8807);
  FUN_1400b22c2(&DAT_14cbdcdd8,"EquipSniper");
  atexit((_func_5014 *)&LAB_1442c8818);
  FUN_1400b22c2(&DAT_14cbdcde8,"EquipRepKit");
  atexit((_func_5014 *)&LAB_1442c8829);
  FUN_1400b22c2(&DAT_14cbdcdf8,"EquipGrenade");
  atexit((_func_5014 *)&LAB_1442c883a);
  FUN_1400b22c2(&DAT_14cbdce08,"EquipHeavyWeapon");
  atexit((_func_5014 *)&LAB_1442c884b);
  FUN_1400b22c2(&DAT_14cbdce18,"EquipClassMod");
  atexit((_func_5014 *)&LAB_1442c885c);
  FUN_1400b22c2(&DAT_14cbdce28,"EquipGadget");
  atexit((_func_5014 *)&LAB_1442c886d);
  FUN_1400b22c2(&DAT_14cbdce38,"EquipEnhancement");
  atexit((_func_5014 *)&LAB_1442c887e);
  FUN_1400b22c2(&DAT_14cbdce48,"EquipShield");
  atexit((_func_5014 *)&LAB_1442c888f);
  FUN_1400b22c2(&DAT_14cbdce58,"weapon");
  atexit((_func_5014 *)&LAB_1442c88a0);
  FUN_1400b22c2(&DAT_14cbdce68,"weapon_ps");
  atexit((_func_5014 *)&LAB_1442c88b1);
  FUN_1400b22c2(&DAT_14cbdce78,"weapon_ar");
  atexit((_func_5014 *)&LAB_1442c88c2);
  FUN_1400b22c2(&DAT_14cbdce88,"weapon_sg");
  atexit((_func_5014 *)&LAB_1442c88d3);
  FUN_1400b22c2(&DAT_14cbdce98,"weapon_sr");
  atexit((_func_5014 *)&LAB_1442c88e4);
  FUN_1400b22c2(&DAT_14cbdcea8,"weapon_sm");
  atexit((_func_5014 *)&LAB_1442c88f5);
  FUN_1400b22c2(&DAT_14cbdceb8,"grenade_gadget");
  atexit((_func_5014 *)&LAB_1442c8906);
  FUN_1400b22c2(&DAT_14cbdcec8,"shield");
  atexit((_func_5014 *)&LAB_1442c8917);
  FUN_1400b22c2(&DAT_14cbdced8,"heavy_weapon_gadget");
  atexit((_func_5014 *)&LAB_1442c8928);
  FUN_1400b22c2(&DAT_14cbdcee8,"repair_kit");
  atexit((_func_5014 *)&LAB_1442c8939);
  FUN_1400b22c2(&DAT_14cbdcef8,"classmod");
  atexit((_func_5014 *)&LAB_1442c894a);
  FUN_1400b22c2(&DAT_14cbdcf08,"classmod_dark_siren");
  atexit((_func_5014 *)&LAB_1442c895b);
  FUN_1400b22c2(&DAT_14cbdcf18,"classmod_exo_soldier");
  atexit((_func_5014 *)&LAB_1442c896c);
  FUN_1400b22c2(&DAT_14cbdcf28,"classmod_gravitar");
  atexit((_func_5014 *)&LAB_1442c897d);
  FUN_1400b22c2(&DAT_14cbdcf38,"classmod_paladin");
  atexit((_func_5014 *)&LAB_1442c898e);
  FUN_1400b22c2(&DAT_14cbdcf48,"gadget");
  atexit((_func_5014 *)&LAB_1442c899f);
  FUN_1400b22c2(&DAT_14cbdcf58,"enhancement");
  atexit((_func_5014 *)&LAB_1442c89b0);
  FUN_140056680(&DAT_14cbdcf68,L"recent");
  atexit((_func_5014 *)&LAB_1442c89c1);
  FUN_140056680(&DAT_14cbdcf78,L"type");
  atexit((_func_5014 *)&LAB_1442c89d2);
  FUN_140056680(&DAT_14cbdcf88,L"level");
  atexit((_func_5014 *)&LAB_1442c89e3);
  FUN_140056680(&DAT_14cbdcf98,L"base_name");
  atexit((_func_5014 *)&LAB_1442c89f4);
  FUN_140056680(&DAT_14cbdcfa8,L"first_letter");
  atexit((_func_5014 *)&LAB_1442c8a05);
  FUN_140056680(&DAT_14cbdcfb8,L"value");
  atexit((_func_5014 *)&LAB_1442c8a16);
  FUN_140056680(&DAT_14cbdcfc8,L"rarity");
  atexit((_func_5014 *)&LAB_1442c8a27);
  FUN_140056680(&DAT_14cbdcfd8,L"manufacturer");
  atexit((_func_5014 *)&LAB_1442c8a38);
  _Src = DAT_14cbdbb90;
  DAT_14cbdcfe8 = (void *)0x0;
  lVar3 = (longlong)DAT_14cbdbb98;
  _DAT_14cbdcff0 = DAT_14cbdbb98;
  if (lVar3 == 0) {
    _DAT_14cbdcff4 = 0;
  }
  else {
    FUN_1446dd670(&DAT_14cbdcfe8,DAT_14cbdbb98,0);
    memcpy(DAT_14cbdcfe8,_Src,lVar3 * 2);
  }
  atexit((_func_5014 *)&LAB_1442c8a49);
  FUN_140056680(&DAT_14cbdcff8,L"healing");
  atexit((_func_5014 *)&LAB_1442c8a5a);
  local_78 = (wchar_t **)0x14b81b8ce;
  local_70._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdd008 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x149dfd165;
  local_70._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdd010 = (ulonglong)uVar2;
  local_78 = (wchar_t **)&DAT_14b417acb;
  local_70._0_5_ = 3;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdd018 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b47368c;
  local_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd020 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b473618;
  local_70._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd028 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b473682;
  local_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd030 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b473678;
  local_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd038 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b47362a;
  local_70._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd040 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b473639;
  local_70._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd048 = (ulonglong)uVar2;
  _DAT_14cbdd058 = 0;
  _DAT_14cbdd060 = FUN_14664e2a6;
  _DAT_14cbdd068 = "backpack_widget";
  _DAT_14cbdd050 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdd050;
  atexit((_func_5014 *)&LAB_1442c8a6b);
  _DAT_14cbdd0a8 = 0;
  _DAT_14cbdd0b0 = FUN_14664e9f6;
  _DAT_14cbdd0b8 = "menu_bank";
  _DAT_14cbdd0a0 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdd0a0;
  atexit((_func_5014 *)&LAB_1442cbfb8);
  local_78 = (wchar_t **)0x14b9c6ee8;
  local_70._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd0c0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c1fc4;
  local_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd0c8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c1fce;
  local_70._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd0d0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c1fdb;
  local_70._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd0d8 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbdd0e0,"item-dropdown");
  atexit((_func_5014 *)&LAB_1442cbfc4);
  FUN_1400b22c2(&DAT_14cbdd0f0,"sort-dropdown");
  atexit((_func_5014 *)&LAB_1442cbfd5);
  FUN_1400b22c2(&DAT_14cbdd100,"filter-dropdown");
  atexit((_func_5014 *)&LAB_1442cbfe6);
  local_78 = (wchar_t **)0x14b9c6eef;
  local_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd110 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ae3e;
  local_70._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd118 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c1fe9;
  local_70._0_5_ = 0x1b;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd120 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c6efa;
  local_70._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd128 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c2005;
  local_70._0_5_ = 0x1c;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd130 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c2022;
  local_70._0_5_ = 0x1b;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd138 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c203e;
  local_70._0_5_ = 0x16;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd140 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c2055;
  local_70._0_5_ = 0x16;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd148 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbdd150,L"DepositText");
  atexit((_func_5014 *)&LAB_1442cbff7);
  FUN_140056680(&DAT_14cbdd160,L"WithdrawText");
  atexit((_func_5014 *)&LAB_1442cc008);
  FUN_140056680(&DAT_14cbdd170,L"WithdrawAllFilteredHint");
  atexit((_func_5014 *)&LAB_1442cc019);
  FUN_140056680(&DAT_14cbdd180,L"DepositAllFilteredHint");
  atexit((_func_5014 *)&LAB_1442cc02a);
  FUN_140056680(&DAT_14cbdd190,L"MarkAllFilteredHint");
  atexit((_func_5014 *)&LAB_1442cc03b);
  FUN_140056680(&DAT_14cbdd1a0,L"action_ui_transfer_all_filtered");
  atexit((_func_5014 *)&LAB_1442cc04c);
  FUN_140056680(&DAT_14cbdd1b0,L"action_ui_equip_item");
  atexit((_func_5014 *)&LAB_1442cc05d);
  _DAT_14cbdd1c8 = 0;
  _DAT_14cbdd1d0 = FUN_14664ea58;
  _DAT_14cbdd1d8 = "menu_bank_quick_transfer";
  _DAT_14cbdd1c0 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdd1c0;
  atexit((_func_5014 *)&LAB_1442cc5b3);
  local_78 = (wchar_t **)0x14b4736ac;
  local_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd1e0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c6eef;
  local_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd1e8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c2184;
  local_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd1f0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c2199;
  local_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd1f8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9bc92e;
  local_70._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd200 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b411528;
  local_70._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd208 = (ulonglong)uVar2;
  local_78 = (wchar_t **)&DAT_14b3e6507;
  local_70._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd210 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c203e;
  local_70._0_5_ = 0x16;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd218 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81ae0f;
  local_70._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd220 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbdd228,L"DepositText");
  atexit((_func_5014 *)&LAB_1442cc5bf);
  FUN_140056680(&DAT_14cbdd238,L"WithdrawText");
  atexit((_func_5014 *)&LAB_1442cc5d0);
  FUN_1400b22c2(&DAT_14cbdd248,"quick-transfer");
  atexit((_func_5014 *)&LAB_1442cc5e1);
  FUN_1400b22c2(&DAT_14cbdd258,"favorite");
  atexit((_func_5014 *)&LAB_1442cc5f2);
  FUN_1400b22c2(&DAT_14cbdd268,"bankdeposit");
  atexit((_func_5014 *)&LAB_1442cc603);
  FUN_1400b22c2(&DAT_14cbdd278,"all_tags");
  atexit((_func_5014 *)&LAB_1442cc614);
  FUN_1400b22c2(&DAT_14cbdd288,"taggroup1");
  atexit((_func_5014 *)&LAB_1442cc625);
  FUN_1400b22c2(&DAT_14cbdd298,"taggroup2");
  atexit((_func_5014 *)&LAB_1442cc636);
  FUN_1400b22c2(&DAT_14cbdd2a8,"taggroup3");
  atexit((_func_5014 *)&LAB_1442cc647);
  FUN_1400b22c2(&DAT_14cbdd2b8,"taggroup4");
  atexit((_func_5014 *)&LAB_1442cc658);
  ram0x00014cbdd2cc = 0;
  FUN_14052b5e0(&DAT_14cbdd2c8,"bCanFilter");
  _DAT_14cbdd2d8 = "bCanFilter";
  DAT_14cbdd2e4 = 0;
  FUN_14052b5e0(&DAT_14cbdd2e0,"DefName");
  _DAT_14cbdd2f0 = "DefName";
  DAT_14cbdd2fc = 0;
  FUN_14052b5e0(&DAT_14cbdd2f8,"DefNameList");
  _DAT_14cbdd308 = "DefNameList";
  ram0x00014cbdd314 = 0;
  FUN_14052b5e0(&DAT_14cbdd310,"CityDef");
  _DAT_14cbdd320 = "CityDef";
  ram0x00014cbdd32c = 0;
  FUN_14052b5e0(&DAT_14cbdd328,"OverworldDef");
  _DAT_14cbdd338 = "OverworldDef";
  DAT_14cbdd340._4_4_ = 0;
  DAT_14cbdd348 = 0;
  FUN_14052b5e0(&DAT_14cbdd340,"IgnoredRegions");
  _DAT_14cbdd350 = "IgnoredRegions";
  _DAT_14cbdd360 = 0;
  _DAT_14cbdd368 = FUN_145c5dbbc;
  _DAT_14cbdd370 = "bigmap";
  _DAT_14cbdd358 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdd358;
  atexit((_func_5014 *)&LAB_1442cc669);
  FUN_1400b22c2(&DAT_14cbdd378,"RollOver");
  atexit((_func_5014 *)&LAB_1442cc675);
  FUN_1400b22c2(&DAT_14cbdd388,"LocateOnMap");
  atexit((_func_5014 *)&LAB_1442cc686);
  FUN_1400b22c2(&DAT_14cbdd398,"ExploreMenuOpen");
  atexit((_func_5014 *)&LAB_1442cc697);
  FUN_1400b22c2(&DAT_14cbdd3a8,"ExploreMenuClose");
  atexit((_func_5014 *)&LAB_1442cc6a8);
  FUN_1400b22c2(&DAT_14cbdd3b8,"CantDo");
  atexit((_func_5014 *)&LAB_1442cc6b9);
  FUN_1400b22c2(&DAT_14cbdd3c8,"AddWaypoint");
  atexit((_func_5014 *)&LAB_1442cc6ca);
  FUN_1400b22c2(&DAT_14cbdd3d8,"RemoveWaypoint");
  atexit((_func_5014 *)&LAB_1442cc6db);
  FUN_1400b22c2(&DAT_14cbdd3e8,"Center");
  atexit((_func_5014 *)&LAB_1442cc6ec);
  FUN_1400b22c2(&DAT_14cbdd3f8,"LegendElementToggle");
  atexit((_func_5014 *)&LAB_1442cc6fd);
  FUN_1400b22c2(&DAT_14cbdd408,"DragStart");
  atexit((_func_5014 *)&LAB_1442cc70e);
  FUN_1400b22c2(&DAT_14cbdd418,"DragEnd");
  atexit((_func_5014 *)&LAB_1442cc71f);
  FUN_1400b22c2(&DAT_14cbdd428,"DragMove");
  atexit((_func_5014 *)&LAB_1442cc730);
  FUN_1400b22c2(&DAT_14cbdd438,"ZoomIn");
  atexit((_func_5014 *)&LAB_1442cc741);
  FUN_1400b22c2(&DAT_14cbdd448,"ZoomOut");
  atexit((_func_5014 *)&LAB_1442cc752);
  FUN_1400b22c2(&DAT_14cbdd458,"NewMap");
  atexit((_func_5014 *)&LAB_1442cc763);
  local_78 = (wchar_t **)0x14b81b8f6;
  local_70._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdd498 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81b908;
  local_70._0_5_ = 0x16;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdd4a0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81b91f;
  local_70._0_5_ = 0x1a;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdd4a8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81b93a;
  local_70._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdd4b0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b81b950;
  local_70._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdd4b8 = (ulonglong)uVar2;
  _DAT_14cbdd4c0 = 0;
  uRam000000014cbdd4c8 = 0;
  _DAT_14cbdd4d0 = 0;
  DAT_14cbdd4d8 = 0;
  uRam000000014cbdd4e0 = 0;
  FUN_1446ddda2(&DAT_14cbdd4c0,"is_first_time_calibration",0);
  atexit((_func_5014 *)&LAB_1442d20ef);
  _DAT_14cbdd4e8 = 0;
  uRam000000014cbdd4f0 = 0;
  _DAT_14cbdd4f8 = 0;
  DAT_14cbdd500 = 0;
  uRam000000014cbdd508 = 0;
  FUN_1446ddda2(&DAT_14cbdd4e8,"apply_settings_on_close",0);
  atexit((_func_5014 *)&LAB_1442d2100);
  _DAT_14cbdd518 = 0;
  _DAT_14cbdd520 = FUN_14664fac0;
  _DAT_14cbdd528 = "menu_calibration_options_accessibility";
  _DAT_14cbdd510 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdd510;
  atexit((_func_5014 *)&LAB_1442d2111);
  _DAT_14cbdd538 = 0;
  _DAT_14cbdd540 = FUN_14664fb12;
  _DAT_14cbdd548 = "menu_calibration_options_audio";
  _DAT_14cbdd530 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdd530;
  atexit((_func_5014 *)&LAB_1442d211d);
  local_78 = (wchar_t **)0x14b172268;
  local_70._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd550 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b172278;
  local_70._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd558 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b172288;
  local_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd560 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b172292;
  local_70._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd568 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b1722a5;
  local_70._0_5_ = 0x17;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd570 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14a3a8ce4;
  local_70._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd578 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c2af8;
  local_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd580 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9b2a1c;
  local_70._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdd588 = (ulonglong)uVar2;
  _DAT_14cbdd598 = 0;
  _DAT_14cbdd5a0 = FUN_14664fb64;
  _DAT_14cbdd5a8 = "menu_calibration_options_brightness";
  _DAT_14cbdd590 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdd590;
  atexit((_func_5014 *)&LAB_1442d2129);
  local_78 = (wchar_t **)0x14b9c2da0;
  local_70._0_5_ = 0x1a;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdd5b0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c2dbb;
  local_70._0_5_ = 0x18;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdd5b8 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbdd5c0,L"SafeAreaAdjustUp");
  atexit((_func_5014 *)&LAB_1442d2135);
  FUN_140056680(&DAT_14cbdd5d0,L"SafeAreaAdjustDown");
  atexit((_func_5014 *)&LAB_1442d2146);
  _DAT_14cbdd5e8 = 0;
  _DAT_14cbdd5f0 = FUN_14664fc62;
  _DAT_14cbdd5f8 = "menu_calibration_options_screen_boundary";
  _DAT_14cbdd5e0 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdd5e0;
  atexit((_func_5014 *)&LAB_1442d2157);
  FUN_140056680(&DAT_14cbdd600,L"incomplete");
  atexit((_func_5014 *)&LAB_1442d2163);
  FUN_140056680(&DAT_14cbdd610,L"eridium_reward");
  atexit((_func_5014 *)&LAB_1442d2174);
  FUN_140056680(&DAT_14cbdd620,L"rank_complete");
  atexit((_func_5014 *)&LAB_1442d2185);
  FUN_140056680(&DAT_14cbdd630,L"challenge_complete");
  atexit((_func_5014 *)&LAB_1442d2196);
  _DAT_14cbdd648 = 0;
  _DAT_14cbdd650 = FUN_14664fdfe;
  _DAT_14cbdd658 = "menu_challenges";
  _DAT_14cbdd640 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdd640;
  atexit((_func_5014 *)&LAB_1442d21a7);
  _DAT_14cbdd668 = 0;
  _DAT_14cbdd670 = FUN_14664ff2e;
  _DAT_14cbdd678 = "cinematic_menu_class";
  _DAT_14cbdd660 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdd660;
  atexit((_func_5014 *)&LAB_1442d21d1);
  _DAT_14cbdd688 = 0;
  _DAT_14cbdd690 = FUN_1466500a8;
  _DAT_14cbdd698 = "credits";
  _DAT_14cbdd680 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdd680;
  atexit((_func_5014 *)&LAB_1442d21df);
  local_78 = (wchar_t **)0x14b9c30ce;
  local_70._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd6a0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c30db;
  local_70._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd6a8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c30ef;
  local_70._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd6b0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c3101;
  local_70 = (ulonglong *)CONCAT35(local_70._5_3_,0x1a);
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd6b8 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbdd6c0,L"MENU_CREDITS",1);
  FUN_1446f470e(&DAT_14cbdd6c8,L"gearbox_legal_line",1);
  FUN_1446f470e(&DAT_14cbdd6d0,L"gearbox_attributions");
  local_68 = L"LegalSplashTextPC";
  _DAT_14cbdd6d8 = 0;
  uRam000000014cbdd6e0 = 0;
  _DAT_14cbdd6e8 = 0;
  DAT_14cbdd6f0 = 0;
  uRam000000014cbdd6f8 = 0;
  local_78 = &local_68;
  local_70 = local_60;
  FUN_14584f768(&DAT_14cbdd6d8,&local_78);
  atexit((_func_5014 *)&LAB_1442d21eb);
  local_68 = L"LegalSplashTextConsole";
  _DAT_14cbdd700 = 0;
  uRam000000014cbdd708 = 0;
  _DAT_14cbdd710 = 0;
  DAT_14cbdd718 = 0;
  uRam000000014cbdd720 = 0;
  local_78 = &local_68;
  local_70 = local_60;
  FUN_14584f768(&DAT_14cbdd700,&local_78);
  atexit((_func_5014 *)&LAB_1442d21fc);
  local_68 = L"SoftwareAttribution";
  _DAT_14cbdd728 = 0;
  uRam000000014cbdd730 = 0;
  _DAT_14cbdd738 = 0;
  DAT_14cbdd740 = 0;
  uRam000000014cbdd748 = 0;
  local_78 = &local_68;
  local_70 = local_60;
  FUN_14584f768(&DAT_14cbdd728,&local_78);
  atexit((_func_5014 *)&LAB_1442d220d);
  _DAT_14cbdd758 = 0;
  _DAT_14cbdd760 = FUN_14665010c;
  _DAT_14cbdd768 = "cursor";
  _DAT_14cbdd750 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdd750;
  atexit((_func_5014 *)&LAB_1442d3679);
  _DAT_14cbdd774 = 0;
  _DAT_14cbdd778 = 0;
  FUN_14052b5e0(&DAT_14cbdd770,"MENU_CUSTOMIZATION_CHARACTER",0);
  _DAT_14cbdd780 = "MENU_CUSTOMIZATION_CHARACTER";
  _DAT_14cbdd78c = 0;
  _DAT_14cbdd790 = 0;
  FUN_14052b5e0(&DAT_14cbdd788,"MENU_CUSTOMIZATION_ECHO",0);
  _DAT_14cbdd798 = "MENU_CUSTOMIZATION_ECHO";
  _DAT_14cbdd7a4 = 0;
  _DAT_14cbdd7a8 = 0;
  FUN_14052b5e0(&DAT_14cbdd7a0,"MENU_CUSTOMIZATION_VEHICLE",0);
  _DAT_14cbdd7b0 = "MENU_CUSTOMIZATION_VEHICLE";
  _DAT_14cbdd7bc = 0;
  _DAT_14cbdd7c0 = 0;
  FUN_14052b5e0(&DAT_14cbdd7b8,"MENU_CUSTOMIZATION_WEAPON",0);
  _DAT_14cbdd7c8 = "MENU_CUSTOMIZATION_WEAPON";
  _DAT_14cbdd7d4 = 0;
  _DAT_14cbdd7d8 = 0;
  FUN_14052b5e0(&DAT_14cbdd7d0,&DAT_14b417908,0);
  _DAT_14cbdd7e0 = &DAT_14b417908;
  _DAT_14cbdd7ec = 0;
  _DAT_14cbdd7f0 = 0;
  FUN_14052b5e0(&DAT_14cbdd7e8,"detailed_list",0);
  _DAT_14cbdd7f8 = "detailed_list";
  _DAT_14cbdd804 = 0;
  _DAT_14cbdd808 = 0;
  FUN_14052b5e0(&DAT_14cbdd800,&DAT_14b81bdf4,0);
  _DAT_14cbdd810 = &DAT_14b81bdf4;
  _DAT_14cbdd81c = 0;
  _DAT_14cbdd820 = 0;
  FUN_14052b5e0(&DAT_14cbdd818,"backpack",0);
  _DAT_14cbdd828 = "backpack";
  local_78 = (wchar_t **)0x14b9c32c8;
  local_70._0_5_ = 0x2d;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbdd830 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c32f6;
  local_70._0_5_ = 0x28;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd838 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9c331f;
  local_70 = (ulonglong *)CONCAT35(local_70._5_3_,0x2a);
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbdd840 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbdd848,"ApplyCustomization");
  atexit((_func_5014 *)&LAB_1442d3685);
  FUN_1400b22c2(&DAT_14cbdd858,"ApplyCustomization");
  atexit((_func_5014 *)&LAB_1442d3696);
  FUN_1400b22c2(&DAT_14cbdd868,"CantDo");
  atexit((_func_5014 *)&LAB_1442d36a7);
  FUN_1400b22c2(&DAT_14cbdd878,"Customization_Hover");
  atexit((_func_5014 *)&LAB_1442d36b8);
  FUN_1400b22c2(&DAT_14cbdd888,"Customization_Select");
  atexit((_func_5014 *)&LAB_1442d36c9);
  FUN_1400b22c2(&DAT_14cbdd898,"CustomizationMenu_Hover");
  atexit((_func_5014 *)&LAB_1442d36da);
  FUN_1400b22c2(&DAT_14cbdd8a8,"CustomizationMenu_Select");
  atexit((_func_5014 *)&LAB_1442d36eb);
  FUN_1400b22c2(&DAT_14cbdd8b8,"HideUI");
  atexit((_func_5014 *)&LAB_1442d36fc);
  FUN_1400b22c2(&DAT_14cbdd8c8,"ShowUI");
  atexit((_func_5014 *)&LAB_1442d370d);
  _DAT_14cbdd8e0 = 0;
  _DAT_14cbdd8e8 = FUN_145d88a3a;
  _DAT_14cbdd8f0 = "menu_customization";
  _DAT_14cbdd8d8 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdd8d8;
  atexit((_func_5014 *)&LAB_1442d371e);
  _DAT_14cbdd918 = 0;
  _DAT_14cbdd920 = FUN_146650396;
  _DAT_14cbdd928 = "menu_customization_backpack";
  _DAT_14cbdd910 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdd910;
  atexit((_func_5014 *)&LAB_1442d7ef7);
  if ((local_60[0] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442e01df FUN_1442e01df body=69 status=ok
// SIG undefined FUN_1442e01df(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1442e01df(void)

{
  _DAT_14cbde5c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001442e0221. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbde5c8,1);
  return;
}



// FUNCTION 1442e0268 FUN_1442e0268 body=462 status=ok
// SIG undefined FUN_1442e0268(void)

void FUN_1442e0268(longlong param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(byte *)(param_1 + 0x8c) & 0x80) == 0) ||
     (lVar1 = *(longlong *)(param_1 + 0x288), lVar1 == 0)) goto LAB_1442e0289;
  cVar2 = FUN_1442e0438(param_1);
  if (cVar2 != '\0') {
    *(byte *)(lVar1 + 0x330) = *(byte *)(lVar1 + 0x330) | 0x20;
    *(byte *)(lVar1 + 0x331) = *(byte *)(lVar1 + 0x331) | 2;
  }
  FUN_140714c1e(lVar1 + 0x2c0,*(undefined4 *)(param_1 + 0x208));
  plVar3 = (longlong *)FUN_148ea157e(param_1);
  lVar4 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar4 + 0x80);
  AcquireSRWLockShared(SRWLock);
  lVar4 = FUN_148e1ccc0(lVar4);
  ReleaseSRWLockShared(SRWLock);
  bVar7 = lVar4 != 0;
  if ((bool)*(char *)(lVar1 + 0x3a0) == bVar7) {
    if (*(int *)(lVar1 + 0x3a4) == 0) {
      iVar6 = 1;
      goto LAB_1442e0335;
    }
  }
  else {
    iVar6 = *(int *)(lVar1 + 0x3a4) + 1;
LAB_1442e0335:
    *(bool *)(lVar1 + 0x3a0) = bVar7;
    *(int *)(lVar1 + 0x3a4) = iVar6;
  }
  if (lVar4 == 0) {
    bVar8 = false;
  }
  else {
    bVar8 = *(int *)(lVar4 + 0xbc) == 2;
  }
  if (bVar8 == (bool)*(char *)(lVar1 + 0x3a8)) {
    if (*(int *)(lVar1 + 0x3ac) == 0) {
      iVar6 = 1;
      goto LAB_1442e036f;
    }
  }
  else {
    iVar6 = *(int *)(lVar1 + 0x3ac) + 1;
LAB_1442e036f:
    *(bool *)(lVar1 + 0x3a8) = bVar8;
    *(int *)(lVar1 + 0x3ac) = iVar6;
  }
  if ((bool)*(char *)(param_1 + 0x2c8) != bVar7) {
    FUN_148ee8186(lVar1);
    if (*(char *)(lVar1 + 0x3a0) == '\x01') {
      uVar5 = FUN_14001cc68(0x48,0x10);
      FUN_1400b22c2(local_38,"UI.Tag.ECHO_LOG_PLAYING");
      FUN_148e9299e(uVar5,*(undefined8 *)(param_1 + 0x30),local_38,0);
    }
    else {
      uVar5 = FUN_14001cc68(0x40,0x10);
      FUN_1400b22c2(local_38,"UI.Tag.ECHO_LOG_PLAYING");
      FUN_148e928ea(uVar5,*(undefined8 *)(param_1 + 0x30),local_38);
    }
    FUN_140391314(param_1,uVar5);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x2c8) = *(undefined1 *)(lVar1 + 0x3a0);
  }
LAB_1442e0289:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442e0438 FUN_1442e0438 body=628 status=ok
// SIG undefined FUN_1442e0438(void)

ulonglong FUN_1442e0438(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong *plVar6;
  void *_Src;
  longlong lVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_1b8 [44];
  uint local_18c;
  void *local_188;
  longlong local_180;
  longlong local_178 [2];
  undefined2 *local_168;
  undefined2 *local_160;
  ulonglong *local_158;
  char local_150;
  undefined2 local_148 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) {
    uVar8 = 0;
  }
  else {
    plVar6 = (longlong *)FUN_148ea157e();
    puVar2 = (undefined8 *)*plVar6;
    AcquireSRWLockShared((PSRWLOCK)(puVar2 + 0x10));
    iVar5 = *(int *)(puVar2 + 0xf);
    bVar12 = *(int *)(lVar1 + 0xac) != iVar5;
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar12);
    if (bVar12) {
      *(int *)(lVar1 + 0xac) = iVar5;
      if (*(int *)(lVar1 + 0x438) != *(int *)(puVar2 + 2) || *(int *)(lVar1 + 0x438) == 0) {
        *(int *)(lVar1 + 0x438) = *(int *)(puVar2 + 2);
        FUN_148ca848e(lVar1 + 0x428,puVar2);
      }
      local_180 = lVar1 + 0x2c0;
      FUN_14579b5c4();
      if ((longlong)*(int *)(puVar2 + 1) != 0) {
        puVar11 = (undefined8 *)*puVar2;
        lVar7 = (longlong)*(int *)(puVar2 + 1) * 0x110;
        uVar9 = 0;
        do {
          if (1 < *(int *)(puVar11 + 1)) {
            local_150 = '\0';
            local_168 = local_148;
            local_158 = &local_48;
            local_18c = uVar9;
            local_160 = local_168;
            FUN_148ea1d54(&local_168);
            uVar9 = *(uint *)(puVar11 + 1);
            iVar5 = uVar9 - 1;
            if (uVar9 == 0) {
              iVar5 = 0;
            }
            lVar10 = (longlong)iVar5;
            _Src = (void *)*puVar11;
            if (local_158 <= local_160 + lVar10) {
              local_188 = (void *)*puVar11;
              FUN_140213274(&local_168,lVar10);
              _Src = local_188;
            }
            puVar4 = local_160;
            if (1 < uVar9) {
              memcpy(local_160,_Src,lVar10 * 2);
              local_160 = puVar4 + lVar10;
            }
            *local_160 = 0;
            FUN_140056680(local_178,local_168);
            FUN_140d07d58(local_180,puVar11,local_178);
            if (local_178[0] != 0) {
              FUN_1400020a8();
            }
            uVar9 = CONCAT31((int3)(local_18c >> 8),(byte)local_18c | *(byte *)(puVar11 + 0x18));
            if (local_150 == '\x01') {
              FUN_1400020a8(local_168);
            }
          }
          puVar11 = puVar11 + 0x22;
          lVar7 = lVar7 + -0x110;
        } while (lVar7 != 0);
        if (((*(byte *)(param_1 + 0x8c) & 0x80) != 0) && ((uVar9 & 1) != 0)) {
          FUN_1400b22c2(&local_168,"StartEchoLogsMenuTutorial");
          FUN_140afad18(param_1,&local_168);
          if (local_168 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      puVar3 = *(ushort **)(lVar1 + 0x80);
      if (puVar3 != (ushort *)0x0) {
        *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(puVar2 + 0x10));
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442e06ae FUN_1442e06ae body=414 status=ok
// SIG undefined FUN_1442e06ae(void)

void FUN_1442e06ae(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x1a8) + 8);
    puVar4 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = puVar1;
    }
    local_48 = 0;
    uStack_40 = 0;
    bVar11 = true;
    FUN_1400b2348(puVar4);
    iVar3 = (int)param_2[1];
    if (iVar3 == (int)uStack_40) {
      if (1 < iVar3) {
        lVar5 = 0;
        while( true ) {
          uVar6 = *(ushort *)(*param_2 + lVar5);
          uVar2 = (uint)uVar6;
          uVar8 = *(ushort *)(local_48 + lVar5);
          uVar9 = (uint)uVar8;
          if (uVar6 != uVar8) {
            if ((uVar8 | uVar6) < 0x80) {
              uVar2 = (uint)(byte)(&DAT_149e05da0)[uVar6];
              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar8];
              if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1442e0742;
            }
            iVar3 = uVar2 - uVar9;
            goto LAB_1442e077d;
          }
          if (uVar6 == 0) break;
LAB_1442e0742:
          lVar5 = lVar5 + 2;
        }
        iVar3 = 0;
LAB_1442e077d:
        bVar11 = iVar3 == 0;
      }
    }
    else {
      bVar11 = (int)uStack_40 + iVar3 == 1;
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (bVar11) {
      iVar3 = (int)param_3[1];
      if (iVar3 == DAT_14cbde608) {
        if (1 < iVar3) {
          lVar5 = 0;
          while( true ) {
            uVar6 = *(ushort *)(*param_3 + lVar5);
            uVar7 = (ulonglong)uVar6;
            uVar8 = *(ushort *)(DAT_14cbde600 + lVar5);
            if (uVar6 != uVar8) break;
            if (uVar6 == 0) goto LAB_1442e0805;
LAB_1442e07d0:
            lVar5 = lVar5 + 2;
          }
          if ((uVar8 | uVar6) < 0x80) {
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar10 = (ulonglong)uVar8;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar10]) goto LAB_1442e07d0;
          }
          if (uVar6 != uVar8) goto LAB_1442e082b;
        }
      }
      else if (DAT_14cbde608 + iVar3 != 1) goto LAB_1442e082b;
LAB_1442e0805:
      FUN_140de1078(param_1,&DAT_14cbde148,0,0);
      if (*(longlong *)(param_1 + 0x288) != 0) {
        FUN_14431c968();
      }
    }
  }
LAB_1442e082b:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442e084e FUN_1442e084e body=866 status=ok
// SIG undefined FUN_1442e084e(void)

void FUN_1442e084e(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  wchar_t *_Str;
  size_t sVar8;
  uint uVar9;
  undefined1 auStack_218 [32];
  char *local_1f8;
  char *local_1f0;
  undefined1 *local_1e8;
  char local_1e0;
  char local_1d8 [256];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (lVar4 == 0) goto LAB_1442e0880;
  *(undefined4 *)(lVar4 + 0x454) = param_2;
  *(undefined4 *)(lVar4 + 0x328) = param_3;
  lVar4 = FUN_148ee82aa();
  if (lVar4 == 0) goto LAB_1442e0880;
  lVar6 = *(longlong *)(lVar4 + 0xd0);
  if (lVar6 == 0) {
    uVar5 = FUN_140b7bb2c();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0xd0) = lVar6;
  }
  if (*(longlong *)(lVar4 + 0xd8) == 0) {
    if ((lVar6 == 0) || (*(longlong *)(lVar4 + 200) == 0)) goto LAB_1442e0880;
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(lVar4 + 0xd8) = 0;
      goto LAB_1442e0880;
    }
    uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 200));
    *(longlong *)(lVar4 + 0xd8) = lVar6;
    if (lVar6 == 0) goto LAB_1442e0880;
  }
  if (((*(byte *)(lVar4 + 0xc0) & 1) == 0) ||
     (FUN_140de1078(param_1,&DAT_14cbde138,0,0), DAT_14c764094 != '\x01')) goto LAB_1442e0880;
  puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  *puVar7 = &PTR_FUN_14b9c98e0;
  local_1f8 = "MarkSeen";
  local_1f0 = (char *)CONCAT35(local_1f0._5_3_,8);
  uVar3 = FUN_14001a6c0(&local_1f8,1);
  FUN_14039176c(puVar7,uVar5,uVar3,1);
  *puVar7 = &PTR_FUN_14b9c98e0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[7] = *(undefined8 *)(lVar4 + 200);
  uVar5 = FUN_14477b664(*(undefined8 *)(lVar4 + 0xd0));
  uVar5 = FUN_14477b664(uVar5);
  puVar7[8] = uVar5;
  puVar7[9] = *(undefined8 *)(lVar4 + 0xd8);
  FUN_140391314(param_1,puVar7);
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442e0b77:
    uVar5 = 0;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x30);
    uVar5 = 0;
    if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_1442e0b77;
      uVar5 = *puVar7;
    }
  }
  local_1f8 = local_1d8;
  local_1e0 = '\0';
  local_1e8 = local_d8;
  local_1f0 = local_1f8;
  _Str = (wchar_t *)FUN_140c7f682(param_1,L"OnPipVisibilityUpdate",&local_1f8);
  local_58 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_50 = (undefined1 *)0x0;
    local_48 = 0;
  }
  else {
    sVar8 = wcslen(_Str);
    local_48 = FUN_14475aa65(0,_Str,sVar8 & 0xffffffff);
    uVar9 = local_48 + 1;
    local_50 = (undefined1 *)0x0;
    if (0x80 < uVar9) {
      FUN_1446efa72(&local_58,0,uVar9,1);
      local_50 = local_58;
    }
    if (local_50 == (undefined1 *)0x0) {
      local_50 = local_d8;
    }
    FUN_14475a98a(local_50,uVar9,_Str,(int)sVar8 + 1);
  }
  FUN_1459c3264(uVar5,local_50,lVar4);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_1e0 == '\x01') {
    FUN_1400020a8(local_1f8);
  }
LAB_1442e0880:
  if ((local_40 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442e0bb2 FUN_1442e0bb2 body=732 status=ok
// SIG undefined FUN_1442e0bb2(void)

void FUN_1442e0bb2(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_138 [32];
  char **local_118;
  undefined8 local_110;
  char *local_108;
  undefined4 local_100;
  undefined1 local_fc;
  char local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (lVar4 != 0) {
    FUN_148ee7bd6(lVar4);
    *(undefined1 *)(lVar4 + 0xc0) = 0;
    *(undefined1 *)(lVar4 + 0x1c0) = 0;
    lVar4 = FUN_148ee6aa8(lVar4);
    if (lVar4 != 0) {
      lVar6 = *(longlong *)(lVar4 + 0xd0);
      if (lVar6 == 0) {
        uVar5 = FUN_140b7bb2c();
        lVar6 = FUN_14477b664(uVar5);
        *(longlong *)(lVar4 + 0xd0) = lVar6;
      }
      plVar10 = (longlong *)(lVar4 + 200);
      if (*(longlong *)(lVar4 + 0xd8) == 0) {
        if ((lVar6 == 0) || (*plVar10 == 0)) goto LAB_1442e0bde;
        plVar1 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          *(undefined8 *)(lVar4 + 0xd8) = 0;
          goto LAB_1442e0bde;
        }
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar5,plVar10);
        *(longlong *)(lVar4 + 0xd8) = lVar6;
        if (lVar6 == 0) goto LAB_1442e0bde;
      }
      if ((*(byte *)(lVar4 + 0xc0) & 1) != 0) {
        cVar2 = FUN_141304ab2(param_1);
        if (cVar2 == '\0') {
          uVar5 = FUN_14001cc68(0x110,0x10);
          local_48 = '\0';
          lVar6 = *(longlong *)(lVar4 + 0xd0);
          if (lVar6 == 0) {
            uVar8 = FUN_140b7bb2c();
            lVar6 = FUN_14477b664(uVar8);
            *(longlong *)(lVar4 + 0xd0) = lVar6;
          }
          lVar9 = *(longlong *)(lVar4 + 0xd8);
          if (((lVar9 == 0) && (lVar9 = 0, lVar6 != 0)) && (*plVar10 != 0)) {
            plVar1 = *(longlong **)(lVar6 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar1 + 0x108))(), cVar2 == '\0')) {
              lVar9 = 0;
            }
            else {
              uVar8 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar9 = FUN_144aff482(uVar8,plVar10);
            }
            *(longlong *)(lVar4 + 0xd8) = lVar9;
          }
          FUN_148d1203c(lVar9,&local_110);
          local_118 = &local_108;
          FUN_141350326(uVar5,param_1 + 0x30,local_110,1);
          FUN_140391314(param_1,uVar5);
          if (local_48 == '\x01') {
            FUN_145a1457c(&local_108);
          }
        }
        if (DAT_14c764094 == '\0') {
          puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          uVar5 = *(undefined8 *)(param_1 + 0x30);
          *puVar7 = &PTR_FUN_14b9c98e0;
          local_108 = "MarkSeen";
          local_100 = 8;
          local_fc = 0;
          uVar3 = FUN_14001a6c0(&local_108,1);
          FUN_14039176c(puVar7,uVar5,uVar3,1);
          *puVar7 = &PTR_FUN_14b9c98e0;
          puVar7[8] = 0;
          puVar7[9] = 0;
          puVar7[7] = *(undefined8 *)(lVar4 + 200);
          uVar5 = FUN_14477b664(*(undefined8 *)(lVar4 + 0xd0));
          uVar5 = FUN_14477b664(uVar5);
          puVar7[8] = uVar5;
          puVar7[9] = *(undefined8 *)(lVar4 + 0xd8);
          FUN_140391314(param_1,puVar7);
        }
      }
    }
  }
LAB_1442e0bde:
  if ((local_30 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442e0e90 FUN_1442e0e90 body=941 status=ok
// SIG undefined FUN_1442e0e90(void)

void FUN_1442e0e90(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  void *_Src;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 uStack_78;
  longlong local_70;
  int local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1407cbc56();
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    FUN_1457fcffc(lVar2,param_1 + 0x160);
    lVar13 = *(longlong *)(param_1 + 0x288);
    if (lVar13 != 0) {
      plVar8 = (longlong *)FUN_148ea157e(param_1);
      lVar14 = *plVar8;
      AcquireSRWLockShared((PSRWLOCK)(lVar14 + 0x80));
      local_70 = 0;
      iVar12 = *(int *)(lVar14 + 0x70);
      uVar3 = *(undefined8 *)(lVar14 + 0x68);
      local_68 = iVar12;
      if (iVar12 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1442ec7ee(&local_70,iVar12);
        FUN_1442ec92d(local_70,uVar3,iVar12);
      }
      ReleaseSRWLockShared((PSRWLOCK)(lVar14 + 0x80));
      iVar12 = 0;
      if (local_68 != 0) {
        local_98 = lVar13 + 0xb0;
        local_88 = lVar13 + 0x108;
        local_90 = lVar13;
        FUN_148e87918(local_88,local_68);
        if ((longlong)local_68 != 0) {
          lVar14 = (longlong)local_68 * 0x88 + local_70;
          lVar13 = local_70;
          do {
            plVar8 = (longlong *)FUN_1410d1d12(local_88);
            FUN_1400021e4(lVar13,&local_80);
            lVar5 = local_80;
            iVar12 = (int)uStack_78;
            uVar7 = (int)uStack_78 - 1;
            if ((int)uStack_78 == 0) {
              uVar7 = 0;
            }
            if (0 < (int)uVar7) {
              uVar11 = 0;
              do {
                uVar1 = *(ushort *)(local_80 + uVar11 * 2);
                *(ushort *)(local_80 + uVar11 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
                uVar11 = uVar11 + 1;
              } while (uVar7 != uVar11);
            }
            uVar6 = uStack_78._4_4_;
            local_80 = 0;
            uStack_78 = 0;
            if (*plVar8 == 0) {
              *plVar8 = lVar5;
              *(int *)(plVar8 + 1) = iVar12;
              *(undefined4 *)((longlong)plVar8 + 0xc) = uVar6;
            }
            else {
              FUN_1400020a8();
              *plVar8 = lVar5;
              *(int *)(plVar8 + 1) = iVar12;
              *(undefined4 *)((longlong)plVar8 + 0xc) = uVar6;
              if (local_80 != 0) {
                FUN_1400020a8();
              }
            }
            plVar9 = *(longlong **)(lVar13 + 8);
            if (*(code **)(*plVar9 + 0x50) != FUN_144828418) {
              plVar9 = (longlong *)(**(code **)(*plVar9 + 0x50))();
            }
            FUN_1447a1fc0(plVar9);
            plVar9 = *(longlong **)(lVar13 + 8);
            pcVar4 = *(code **)(*plVar9 + 0x28);
            if (pcVar4 == FUN_14482841c) {
              plVar10 = plVar9 + 3;
              if (plVar9[5] != 0) {
                plVar10 = (longlong *)(plVar9[5] + 8);
              }
            }
            else if (pcVar4 == (code *)&LAB_14010c34c) {
              plVar10 = plVar9 + 2;
            }
            else {
              plVar10 = (longlong *)(*pcVar4)(plVar9);
            }
            plVar9 = plVar8 + 2;
            if (plVar9 != plVar10) {
              iVar12 = (int)plVar10[1];
              _Src = (void *)*plVar10;
              *(int *)(plVar8 + 3) = iVar12;
              if (iVar12 == 0 && *(int *)((longlong)plVar8 + 0x1c) == 0) {
                *(undefined4 *)((longlong)plVar8 + 0x1c) = 0;
              }
              else {
                FUN_1446dd670(plVar9,iVar12);
                if (iVar12 != 0) {
                  memcpy((void *)*plVar9,_Src,(longlong)iVar12 * 2);
                }
              }
            }
            *(byte *)(plVar8 + 0x11) =
                 *(byte *)(plVar8 + 0x11) & 0xdf | *(char *)(lVar13 + 0x1c) << 5;
            *(byte *)((longlong)plVar8 + 0x89) =
                 *(byte *)((longlong)plVar8 + 0x89) & 0xfe | *(int *)(lVar13 + 0x80) != 0;
            FUN_148ca7eb8(plVar8 + 0xe,lVar13 + 0x78);
            *(byte *)((longlong)plVar8 + 0x89) = *(byte *)((longlong)plVar8 + 0x89) & 0xf7;
            *(byte *)(plVar8 + 0x11) = (*(byte *)(plVar8 + 0x11) & 0x7e) + 1;
            plVar8[0x10] = *(longlong *)(lVar13 + 0x20);
            lVar13 = lVar13 + 0x88;
          } while (lVar13 != lVar14);
        }
        lVar13 = local_98;
        FUN_1410d0f68(local_98);
        FUN_1410d0ea4(lVar13);
        FUN_1457fd360(local_90 + 0x130,lVar13);
        iVar12 = local_68;
      }
      FUN_1442471ff(local_70,iVar12);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    plVar8 = (longlong *)FUN_148ea157e(param_1);
    lVar13 = *plVar8;
    AcquireSRWLockShared((PSRWLOCK)(lVar13 + 0x80));
    FUN_148c1fa7c(lVar2 + 0x468,lVar13 + 0x18);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442e125e FUN_1442e125e body=233 status=ok
// SIG undefined FUN_1442e125e(void)

void FUN_1442e125e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1[0x51] != 0) {
    *(byte *)(param_1[0x51] + 0xa8) = *(byte *)((longlong)param_1 + 0x8c) >> 7;
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  if (((*(byte *)((longlong)param_1 + 0x8c) & 0x80) != 0) && (lVar1 = param_1[0x51], lVar1 != 0)) {
    *(byte *)(lVar1 + 0x330) = *(byte *)(lVar1 + 0x330) | 0x40;
    if ((*(byte *)(lVar1 + 0x331) & 2) != 0) {
      FUN_148ee6b08(lVar1);
      FUN_1442e084e(param_1,*(undefined4 *)(lVar1 + 0x454),*(undefined4 *)(lVar1 + 0x328));
      *(byte *)(lVar1 + 0x331) = *(byte *)(lVar1 + 0x331) & 0xfd;
      lVar2 = FUN_148ee6aa8(lVar1);
      if (lVar2 == 0) {
        FUN_1442e0bb2(param_1,0,0);
      }
    }
    if (*(char *)(lVar1 + 0x398) == '\x01') {
      FUN_148ee6c46(lVar1);
      *(undefined1 *)(lVar1 + 0x398) = 0;
    }
    if (*(char *)(lVar1 + 0x399) == '\x01') {
      FUN_14431989c(lVar1);
      *(undefined1 *)(lVar1 + 0x399) = 0;
    }
    if ((~*(byte *)(lVar1 + 0x330) & 0x60) == 0) {
      FUN_148ee6830(lVar1);
      *(byte *)(lVar1 + 0x330) = *(byte *)(lVar1 + 0x330) & 0xdf;
    }
  }
  return;
}



// FUNCTION 1442e1348 FUN_1442e1348 body=213 status=ok
// SIG undefined FUN_1442e1348(void)

void FUN_1442e1348(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0xc0) == '\x01') {
      *(undefined1 *)(lVar1 + 0xc0) = 0;
    }
    else {
      if (*(char *)(lVar1 + 0x1c0) != '\x01') {
        puVar3 = (undefined8 *)FUN_148ea1cda();
        local_48 = (undefined ***)0x0;
        local_38[0] = &PTR_LAB_14b9cbf90;
        local_58[0] = &LAB_1442ecaa6;
        FUN_148e57a3a(*puVar3,local_58);
        if (local_58[0] != (undefined1 *)0x0) {
          pppuVar4 = local_48;
          if (local_48 == (undefined ***)0x0) {
            pppuVar4 = local_38;
          }
          (*(code *)(*pppuVar4)[2])();
        }
        FUN_1458343da(param_1);
        goto LAB_1442e13a5;
      }
      *(undefined1 *)(lVar1 + 0x1c0) = 0;
    }
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
LAB_1442e13a5:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442e146e FUN_1442e146e body=142 status=ok
// SIG undefined FUN_1442e146e(void)

void FUN_1442e146e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1442e14b7;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x34) &&
        ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar4;
      goto LAB_1442e14b7;
    }
  }
  uVar3 = 0;
LAB_1442e14b7:
  lVar2 = FUN_140391a3c(uVar3);
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar4 = &PTR_FUN_14b9c9ad8;
    *(undefined1 *)(puVar4 + 1) = 1;
    FUN_14039144e(lVar2,puVar4);
    return;
  }
  return;
}



// FUNCTION 1442e14fc FUN_1442e14fc body=468 status=ok
// SIG undefined FUN_1442e14fc(void)

void FUN_1442e14fc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_118 [40];
  longlong local_f0;
  longlong *local_e8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((*(byte *)(param_1 + 0x8c) & 0x80) != 0) &&
     (lVar4 = *(longlong *)(param_1 + 0x288), lVar4 != 0)) {
    FUN_1448d5e3c(&local_f0,param_1 + 0x208);
    plVar5 = *(longlong **)(local_f0 + 0x500);
    AcquireSRWLockShared((PSRWLOCK)(plVar5 + 4));
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
    if (*(int *)(lVar4 + 0xac) != (int)plVar5[3]) {
      *(int *)(lVar4 + 0xac) = (int)plVar5[3];
      plVar2 = (longlong *)(lVar4 + 0xb8);
      iVar3 = *(int *)(lVar4 + 0xc4);
      FUN_145b06e22(*(undefined8 *)(lVar4 + 0xb8),*(undefined4 *)(lVar4 + 0xc0));
      *(undefined4 *)(lVar4 + 0xc0) = 0;
      if ((iVar3 < 0) && (*(int *)(lVar4 + 0xc4) != 0)) {
        FUN_148eb2e9c(plVar2);
      }
      if ((longlong)(int)plVar5[1] != 0) {
        lVar7 = *plVar5;
        lVar8 = (longlong)(int)plVar5[1] * 0x60;
        do {
          FUN_148ea1f8c(&local_f0,lVar7);
          iVar3 = *(int *)(lVar4 + 0xc0);
          *(uint *)(lVar4 + 0xc0) = iVar3 + 1U;
          if (*(uint *)(lVar4 + 0xc4) < iVar3 + 1U) {
            FUN_148eb3098(plVar2,iVar3);
          }
          FUN_148eb2f52((longlong)iVar3 * 0xa8 + *plVar2,&local_f0);
          FUN_148c7719a(&local_f0);
          lVar7 = lVar7 + 0x60;
          lVar8 = lVar8 + -0x60;
        } while (lVar8 != 0);
      }
      *(int *)(lVar4 + 200) = (int)plVar5[2];
      puVar6 = *(ushort **)(lVar4 + 0x80);
      if (puVar6 != (ushort *)0x0) {
        *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(plVar5 + 4));
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442e1732 FUN_1442e1732 body=69 status=ok
// SIG undefined FUN_1442e1732(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1442e1732(void)

{
  _DAT_14cbde7a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001442e1774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbde7b0,1);
  return;
}



// FUNCTION 1442e1778 FUN_1442e1778 body=844 status=ok
// SIG undefined FUN_1442e1778(void)

void FUN_1442e1778(longlong param_1)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  char *local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined ***local_78;
  undefined **local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_146245af8();
  if ((longlong)*(int *)(param_1 + 0x2d8) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x2d0);
    lVar9 = (longlong)*(int *)(param_1 + 0x2d8) << 4;
    do {
      uVar3 = FUN_14001cc68(0x48,0x10);
      FUN_146651a94(uVar3,*(undefined8 *)(param_1 + 0x30),lVar8);
      FUN_140391314(param_1,uVar3);
      lVar8 = lVar8 + 0x10;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_14134fce6(param_1);
  piVar1 = (int *)*puVar4;
  SRWLock = (PSRWLOCK)(piVar1 + 0x2c);
  AcquireSRWLockShared(SRWLock);
  iVar6 = *piVar1;
  ReleaseSRWLockShared(SRWLock);
  if (iVar6 == 0) goto LAB_1442e187d;
  puVar4 = (undefined8 *)FUN_14134fce6(param_1);
  piVar1 = (int *)*puVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(piVar1 + 0x2c));
  piVar1[0x2a] = piVar1[0x2a] + 1;
  if (iVar6 == piVar1[2]) {
    iVar5 = 1;
    if (piVar1[3] == 0) goto LAB_1442e184e;
  }
  else {
    iVar5 = piVar1[3] + 1;
LAB_1442e184e:
    piVar1[2] = iVar6;
    piVar1[3] = iVar5;
  }
  if (*piVar1 == 0) {
    iVar6 = 1;
    if (piVar1[1] == 0) goto LAB_1442e186b;
  }
  else {
    iVar6 = piVar1[1] + 1;
LAB_1442e186b:
    *piVar1 = 0;
    piVar1[1] = iVar6;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(piVar1 + 0x2c));
LAB_1442e187d:
  puVar4 = (undefined8 *)FUN_14134fce6(param_1);
  local_78 = (undefined ***)0x0;
  local_68[0] = &PTR_LAB_14b9cbfd0;
  local_88 = &LAB_1442ecb10;
  FUN_148e57a3a(*puVar4,&local_88);
  if (local_88 != (char *)0x0) {
    pppuVar7 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar7 = local_68;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *puVar4 = &PTR_FUN_14b9c71b0;
  local_88 = "ClearItem";
  local_80 = 9;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  FUN_14039176c(puVar4,uVar3,uVar2,1);
  *puVar4 = &PTR_FUN_14b9c71b0;
  *(undefined4 *)(puVar4 + 7) = 0;
  FUN_140391314(param_1,puVar4);
  puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *puVar4 = &PTR_FUN_14b9c71b0;
  local_88 = "ClearItem";
  local_80 = 9;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  FUN_14039176c(puVar4,uVar3,uVar2,1);
  *puVar4 = &PTR_FUN_14b9c71b0;
  *(undefined4 *)(puVar4 + 7) = 1;
  FUN_140391314(param_1,puVar4);
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *puVar4 = &PTR_FUN_14b9c7340;
  local_88 = "PlayerController";
  local_80 = 0x10;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  FUN_14039176c(puVar4,uVar3,uVar2,1);
  *puVar4 = &PTR_FUN_14b9c7340;
  FUN_140391314(param_1,puVar4);
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *puVar4 = &PTR_FUN_14b9cbff0;
  local_88 = "PlayerController";
  local_80 = 0x10;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  FUN_14039176c(puVar4,uVar3,uVar2,1);
  *puVar4 = &PTR_FUN_14b9cbff0;
  FUN_140391314(param_1,puVar4);
  FUN_1459169de(param_1);
  FUN_146234cb2(param_1);
  FUN_1400b22c2(&local_88,"StartEquipMenuTutorial");
  FUN_140afad18(param_1,&local_88);
  if (local_88 != (char *)0x0) {
    FUN_1400020a8();
  }
  FUN_14625c602(param_1);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442e1ac6 FUN_1442e1ac6 body=102 status=ok
// SIG undefined FUN_1442e1ac6(void)

void FUN_1442e1ac6(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 0x288) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x288) + 0xb80) & 1) != 0)) {
    plVar3 = (longlong *)FUN_14134fce6(param_1);
    lVar2 = *plVar3;
    SRWLock = (PSRWLOCK)(lVar2 + 0xb0);
    AcquireSRWLockShared(SRWLock);
    iVar1 = *(int *)(lVar2 + 8);
    ReleaseSRWLockShared(SRWLock);
    if (iVar1 == 0) {
      FUN_1442e2a90(param_1,5);
      return;
    }
  }
  return;
}



// FUNCTION 1442e1b2c FUN_1442e1b2c body=837 status=ok
// SIG undefined FUN_1442e1b2c(void)

void FUN_1442e1b2c(longlong param_1)

{
  PSRWLOCK pRVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined4 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0x8f8) & 8) != 0)) && (*(int *)(param_1 + 0x2f0) == 0)) {
    plVar6 = (longlong *)FUN_14134fce6(param_1);
    lVar4 = *plVar6;
    pRVar1 = (PSRWLOCK)(lVar4 + 0xb0);
    AcquireSRWLockShared(pRVar1);
    iVar2 = *(int *)(lVar4 + 8);
    ReleaseSRWLockShared(pRVar1);
    if (iVar2 == 1) {
      plVar6 = (longlong *)FUN_14134fce6(param_1);
      lVar4 = *plVar6;
      pRVar1 = (PSRWLOCK)(lVar4 + 0xb0);
      AcquireSRWLockShared(pRVar1);
      if (*(int *)(lVar4 + 0x60) == -1) {
        iVar2 = *(int *)(lVar4 + 0x68);
        ReleaseSRWLockShared(pRVar1);
        if (iVar2 == 0) {
          plVar6 = (longlong *)FUN_14134fce6(param_1);
          lVar4 = *plVar6;
          AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0xb0));
          ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0xb0));
          iVar2 = *(int *)(lVar4 + 0x50);
          if (iVar2 != -1) {
            uVar7 = FUN_14001cc68(0x148,0x10);
            local_78 = (undefined4)DAT_14c8464e0;
            uStack_74 = DAT_14c8464e0._4_4_;
            uStack_70 = (undefined4)DAT_14c8464e8;
            uStack_6c = DAT_14c8464e8._4_4_;
            local_68 = DAT_14c8464f0;
            lVar8 = FUN_14011c349();
            local_88 = iVar2;
            local_80 = &local_78;
            FUN_14664e342(uVar7,*(undefined8 *)(param_1 + 0x30),1,*(undefined8 *)(lVar8 + 0x48));
            FUN_140391314(param_1,uVar7);
            puVar9 = (undefined8 *)FUN_14001cc68(0x40,0x10);
            iVar2 = *(int *)(lVar3 + 0x328);
            uVar7 = *(undefined8 *)(param_1 + 0x30);
            *puVar9 = &PTR_FUN_14b9c7210;
            local_58 = "SetVisible";
            local_50 = 10;
            local_4c = 0;
            uVar5 = FUN_14001a6c0(&local_58,1);
            FUN_14039176c(puVar9,uVar7,uVar5,1);
            *puVar9 = &PTR_FUN_14b9c7210;
            *(bool *)(puVar9 + 7) = iVar2 != -1;
            *(undefined4 *)((longlong)puVar9 + 0x3c) = 0;
            FUN_140391314(param_1,puVar9);
            puVar9 = (undefined8 *)FUN_14001cc68(0x40,0x10);
            if (*(int *)(lVar3 + 0x328) == -1) {
              bVar10 = false;
            }
            else {
              bVar10 = *(int *)(lVar3 + 0x328) != *(int *)(lVar3 + 0x32c);
            }
            uVar7 = *(undefined8 *)(param_1 + 0x30);
            *puVar9 = &PTR_FUN_14b9c7210;
            local_58 = "SetVisible";
            local_50 = 10;
            local_4c = 0;
            uVar5 = FUN_14001a6c0(&local_58,1);
            FUN_14039176c(puVar9,uVar7,uVar5,1);
            *puVar9 = &PTR_FUN_14b9c7210;
            *(bool *)(puVar9 + 7) = bVar10;
            *(undefined4 *)((longlong)puVar9 + 0x3c) = 1;
            FUN_140391314(param_1,puVar9);
            puVar9 = (undefined8 *)FUN_14001cc68(0x40,0x10);
            uVar7 = *(undefined8 *)(param_1 + 0x30);
            *puVar9 = &PTR_FUN_14b9c7290;
            local_58 = "SetGlyphs";
            local_50 = 9;
            local_4c = 0;
            uVar5 = FUN_14001a6c0(&local_58,1);
            FUN_14039176c(puVar9,uVar7,uVar5,1);
            *puVar9 = &PTR_FUN_14b9c7290;
            *(undefined4 *)(puVar9 + 7) = 0x23;
            FUN_140391314(param_1,puVar9);
            plVar6 = (longlong *)FUN_14134fce6(param_1);
            lVar8 = *plVar6;
            AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0xb0));
            *(int *)(lVar8 + 0xa8) = *(int *)(lVar8 + 0xa8) + 1;
            FUN_148e1cfda(lVar8,lVar4 + 0x50);
            ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0xb0));
            FUN_140de1078(param_1,&DAT_14cbde0b8,0,0);
            FUN_146234f2c(lVar3,*(undefined4 *)(lVar3 + 0x32c));
          }
          goto LAB_1442e1c0c;
        }
      }
      else {
        ReleaseSRWLockShared(pRVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
    }
  }
LAB_1442e1c0c:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442e1e8a FUN_1442e1e8a body=1582 status=ok
// SIG undefined FUN_1442e1e8a(void)

void FUN_1442e1e8a(longlong param_1)

{
  int *piVar1;
  PSRWLOCK SRWLock;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ushort *puVar6;
  code *pcVar7;
  void *_Src;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 auStack_168 [40];
  longlong *local_140;
  undefined8 local_138;
  longlong *local_130;
  longlong *local_128 [2];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined4 local_f0;
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  undefined4 *local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined4 local_80 [4];
  longlong *local_70 [2];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar5 = *(longlong *)(param_1 + 0x288);
  if (lVar5 != 0) {
    plVar9 = (longlong *)FUN_14134fce6();
    lVar11 = *plVar9;
    SRWLock = (PSRWLOCK)(lVar11 + 0xb0);
    AcquireSRWLockShared(SRWLock);
    iVar3 = *(int *)(lVar11 + 0x18);
    ReleaseSRWLockShared(SRWLock);
    if (iVar3 == -1) {
      bVar14 = true;
    }
    else {
      bVar14 = iVar3 == *(int *)(lVar5 + 0x328);
    }
    lVar11 = *(longlong *)(param_1 + 0x288);
    if (((lVar11 == 0) ||
        (((*(int *)(lVar11 + 0x67c) == -1 && (*(int *)(lVar11 + 0x680) == 0)) &&
         ((*(byte *)(lVar11 + 0x4c7) & 0x20) == 0)))) || (!bVar14)) {
      *(undefined1 *)(lVar5 + 0x928) = 0;
      FUN_141354aaa(lVar5);
    }
    else {
      FUN_14135151e(lVar5,*(undefined4 *)(lVar5 + 0x328));
      FUN_148ee4e68(lVar5,1);
      FUN_1457fd360(lVar5 + 0x918);
      *(undefined1 *)(lVar5 + 0x928) = 1;
      *(longlong *)(lVar5 + 0x910) = *(longlong *)(lVar5 + 0x910) + 1;
      FUN_141354aaa(lVar5);
      if ((longlong)*(int *)(lVar5 + 0x978) != 0) {
        lVar11 = (longlong)*(int *)(lVar5 + 0x978) * 0x90;
        plVar9 = (longlong *)(*(longlong *)(lVar5 + 0x970) + 0x60);
        do {
          if ((*(byte *)(plVar9 + 5) & 0x40) != 0) {
            if ((*(byte *)(plVar9 + 5) & 2) == 0) {
              local_140 = plVar9 + -10;
              FUN_140009b9a(local_128);
              local_a8 = 0;
              uStack_a0 = 0;
              local_98 = 0;
              local_90 = 0;
              uStack_88 = 0;
              FUN_1446ddda2(&local_a8,"UnmarkItemFormat",0);
              FUN_1410d1eba(local_118,&local_a8);
              FUN_14023409e(&local_138,local_118,1);
              local_80[0] = 4;
              FUN_14023423e(local_70,local_128);
              local_c8 = local_80;
              local_c0 = local_60;
              FUN_14010d304(&local_b8,&local_c8);
              local_d8 = local_138;
              local_d0 = local_130;
              if (local_130 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_130 + 1) = (int)local_130[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_e8,&local_d8);
              FUN_14007f2db(local_b8,local_b0);
              if (local_b8 != 0) {
                FUN_1400020a8();
              }
              plVar8 = local_140;
              if (local_70[0] != (longlong *)0x0) {
                (**(code **)(*local_70[0] + 0x10))();
              }
              plVar2 = local_130;
              if (local_130 != (longlong *)0x0) {
                LOCK();
                plVar10 = local_130 + 1;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)*plVar10 == 0) {
                  (**(code **)*local_130)(local_130);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar2 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar2 + 0x10))(plVar2);
                  }
                }
              }
              if (local_128[0] != (longlong *)0x0) {
                (**(code **)(*local_128[0] + 0x10))();
              }
              plVar2 = local_e8[0];
              plVar10 = local_e8[0];
              if (*(code **)(*local_e8[0] + 0x50) != FUN_144828418) {
                plVar10 = (longlong *)(**(code **)(*local_e8[0] + 0x50))(local_e8[0]);
              }
              FUN_1447a1fc0(plVar10);
              pcVar7 = *(code **)(*plVar2 + 0x28);
              if (pcVar7 == FUN_14482841c) {
                plVar10 = plVar2 + 3;
                if (plVar2[5] != 0) {
                  plVar10 = (longlong *)(plVar2[5] + 8);
                }
              }
              else if (pcVar7 == (code *)&LAB_14010c34c) {
                plVar10 = plVar2 + 2;
              }
              else {
                plVar10 = (longlong *)(*pcVar7)(plVar2);
              }
              if (plVar8 != plVar10) {
                iVar3 = (int)plVar10[1];
                _Src = (void *)*plVar10;
                *(int *)(plVar9 + -9) = iVar3;
                if (iVar3 == 0 && *(int *)((longlong)plVar9 + -0x44) == 0) {
                  *(undefined4 *)((longlong)plVar9 + -0x44) = 0;
                }
                else {
                  FUN_1446dd670(plVar8);
                  if (iVar3 != 0) {
                    memcpy((void *)*plVar8,_Src,(longlong)iVar3 * 2);
                  }
                }
              }
              if (local_e8[0] != (longlong *)0x0) {
                (**(code **)(*local_e8[0] + 0x10))();
              }
            }
            else {
              local_f8 = (longlong *)*plVar9;
              if (local_f8 != (longlong *)0x0) {
                (**(code **)(*local_f8 + 8))();
              }
              local_f0 = (undefined4)plVar9[1];
              local_a8 = 0;
              uStack_a0 = 0;
              local_98 = 0;
              local_90 = 0;
              uStack_88 = 0;
              FUN_1446ddda2(&local_a8,"UnmarkItemFormat",0);
              FUN_1410d1eba(local_118,&local_a8);
              FUN_14023409e(&local_108,local_118,1);
              local_80[0] = 4;
              FUN_14023423e(local_70,&local_f8);
              local_c8 = local_80;
              local_c0 = local_60;
              FUN_14010d304(&local_b8,&local_c8);
              local_d8 = local_108;
              local_d0 = local_100;
              if (local_100 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_100 + 1) = (int)local_100[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_e8,&local_d8);
              FUN_14007f2db(local_b8,local_b0);
              if (local_b8 != 0) {
                FUN_1400020a8();
              }
              if (local_70[0] != (longlong *)0x0) {
                (**(code **)(*local_70[0] + 0x10))();
              }
              plVar8 = local_100;
              if (local_100 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_100 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_100)(local_100);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar8 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
              if (local_f8 != (longlong *)0x0) {
                (**(code **)(*local_f8 + 0x10))();
              }
              FUN_140008f88(plVar9);
              if (local_e8[0] != (longlong *)0x0) {
                (**(code **)(*local_e8[0] + 0x10))();
              }
            }
            if (local_118[0] != (longlong *)0x0) {
              (**(code **)(*local_118[0] + 0x10))();
            }
            if (local_90 != 0) {
              FUN_1400020a8();
            }
          }
          plVar9 = plVar9 + 0x12;
          lVar11 = lVar11 + -0x90;
        } while (lVar11 != 0);
      }
    }
    uVar4 = *(uint *)(lVar5 + 0xb68);
    if ((ulonglong)uVar4 != 0) {
      lVar11 = 0x268;
      uVar12 = 0;
      do {
        *(bool *)(*(longlong *)(lVar5 + 0xb60) + lVar11) = uVar12 == *(uint *)(lVar5 + 0x328);
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 0x280;
      } while (uVar4 != uVar12);
    }
    puVar13 = &DAT_14cbde158;
    if (*(char *)(lVar5 + 0x928) != '\0') {
      puVar13 = &DAT_14cbde148;
    }
    FUN_140de1078(param_1,puVar13,0,0);
    puVar6 = *(ushort **)(lVar5 + 0x80);
    if (puVar6 != (ushort *)0x0) {
      *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
    }
  }
  if ((local_60[0] ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442e24ba FUN_1442e24ba body=161 status=ok
// SIG undefined FUN_1442e24ba(void)

void FUN_1442e24ba(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (((((lVar1 != 0) && ((*(byte *)(lVar1 + 0x8f8) & 0x10) != 0)) &&
       ((*(int *)(lVar1 + 0x67c) != -1 ||
        ((*(int *)(lVar1 + 0x680) != 0 || ((*(byte *)(lVar1 + 0x4c7) & 0x20) != 0)))))) &&
      ((*(byte *)(lVar1 + 0x4c6) & 0x40) == 0)) &&
     ((((*(byte *)(lVar1 + 0x4c4) & 1) == 0 && ((char)*(byte *)(lVar1 + 0x4c6) < '\0')) &&
      ((*(byte *)(lVar1 + 0x4c7) & 0x20) == 0)))) {
    puVar2 = &DAT_14cbde108;
    if ((*(byte *)(lVar1 + 0x4c4) & 0x10) == 0) {
      puVar2 = &DAT_14cbde1d8;
    }
    FUN_140de1078(param_1,puVar2,0,0);
    FUN_148ee5906(lVar1,4,lVar1 + 0x428);
    return;
  }
  return;
}



// FUNCTION 1442e2582 FUN_1442e2582 body=379 status=ok
// SIG undefined FUN_1442e2582(void)

void FUN_1442e2582(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x288) == 0) goto LAB_1442e25c1;
  cVar3 = FUN_148ee834c();
  if ((cVar3 == '\0') || (lVar1 = *(longlong *)(param_1 + 0x288), lVar1 == 0)) goto LAB_1442e25c1;
  lVar5 = FUN_148ee82ee(lVar1,*(undefined4 *)(lVar1 + 0x328));
  if (lVar5 == 0) {
    lVar5 = FUN_148ee82ee(lVar1,*(undefined4 *)(lVar1 + 0x32c));
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x48,0x10);
      uVar7 = *(undefined1 *)(lVar1 + 0x328);
      goto LAB_1442e2649;
    }
  }
  else {
    puVar6 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    uVar7 = *(undefined1 *)(lVar1 + 0x32c);
LAB_1442e2649:
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *puVar6 = &PTR_FUN_14b9c6e90;
    local_48 = "EquipItem";
    local_40 = 9;
    local_3c = 0;
    uVar4 = FUN_14001a6c0(&local_48,1);
    FUN_14039176c(puVar6,uVar2,uVar4,1);
    *puVar6 = &PTR_FUN_14b9c6e90;
    *(undefined1 *)(puVar6 + 7) = uVar7;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = *(undefined4 *)(lVar5 + 0x254);
    puVar6[8] = 0;
    FUN_140391314(param_1,puVar6);
    FUN_148ee409c(&local_48,lVar5 + 0x70);
    FUN_140de1078(param_1,&local_48,0,0);
    if (local_48 != (char *)0x0) {
      FUN_1400020a8();
    }
    FUN_1457d7894(param_1,param_1 + 0x338);
  }
  FUN_146234cb2(param_1);
LAB_1442e25c1:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442e26fe FUN_1442e26fe body=346 status=ok
// SIG undefined FUN_1442e26fe(void)

void FUN_1442e26fe(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [40];
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (((lVar2 == 0) || (*(char *)(lVar2 + 0x928) != '\0')) ||
     ((iVar1 = *(int *)(lVar2 + 0x67c), iVar1 == -1 &&
      ((*(int *)(lVar2 + 0x680) == 0 && ((*(byte *)(lVar2 + 0x4c7) & 0x20) == 0))))))
  goto LAB_1442e2787;
  if ((*(int *)(lVar2 + 0x8e4) == -1) && (*(int *)(lVar2 + 0x8e8) == 0)) {
    if ((*(byte *)(lVar2 + 0x72f) >> 5 & iVar1 == -1) != 0) {
LAB_1442e2773:
      FUN_146234cb2(param_1);
    }
  }
  else if (*(int *)(lVar2 + 0x8e4) == iVar1) goto LAB_1442e2773;
  cVar4 = FUN_148ee4610(lVar2 + 0x428);
  if (cVar4 != '\0') {
    puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *puVar6 = &PTR_FUN_14b9c6b00;
    local_40 = "DropItem";
    local_38 = 8;
    local_34 = 0;
    uVar5 = FUN_14001a6c0(&local_40,1);
    FUN_14039176c(puVar6,uVar3,uVar5,1);
    *puVar6 = &PTR_FUN_14b9c6b00;
    *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(lVar2 + 0x67c);
    FUN_140391314(param_1,puVar6);
    FUN_140de1078(param_1,&DAT_14cbde0f8,0,0);
    FUN_1457d7894(param_1,param_1 + 0x340);
  }
LAB_1442e2787:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442e285a FUN_1442e285a body=341 status=ok
// SIG undefined FUN_1442e285a(void)

void FUN_1442e285a(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x288) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x288) + 0x928) == '\0')) {
    plVar6 = (longlong *)FUN_145916aba(param_1);
    lVar3 = *plVar6;
    AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x1c0));
    iVar1 = *(int *)(lVar3 + 0x58);
    iVar2 = *(int *)(lVar3 + 0x50);
    ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x1c0));
    if (((iVar2 < iVar1) && (lVar3 = *(longlong *)(param_1 + 0x288), lVar3 != 0)) &&
       (((*(int *)(lVar3 + 0x67c) != -1 || (*(int *)(lVar3 + 0x680) != 0)) ||
        ((*(byte *)(lVar3 + 0x4c7) & 0x20) != 0)))) {
      puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      *puVar7 = &PTR_FUN_14b9c6b20;
      local_48 = "UnequipItem";
      local_40 = 0xb;
      local_3c = 0;
      uVar5 = FUN_14001a6c0(&local_48,1);
      FUN_14039176c(puVar7,uVar4,uVar5,1);
      *puVar7 = &PTR_FUN_14b9c6b20;
      *(undefined4 *)(puVar7 + 7) = *(undefined4 *)(lVar3 + 0x67c);
      FUN_140391314(param_1,puVar7);
      FUN_140de1078(param_1,&DAT_14cbde0d8,0,0);
      FUN_1457d7894(param_1,param_1 + 0x328);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442e29b0 FUN_1442e29b0 body=224 status=ok
// SIG undefined FUN_1442e29b0(void)

void FUN_1442e29b0(longlong param_1)

{
  PSRWLOCK pRVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x928) == '\x01')) {
    FUN_140de1078(param_1,&DAT_14cbde158,0,0);
    *(undefined1 *)(lVar3 + 0x928) = 0;
    FUN_141354aaa(lVar3);
    FUN_14135151e(lVar3,0xffffffff);
    return;
  }
  plVar4 = (longlong *)FUN_14134fce6(param_1);
  lVar3 = *plVar4;
  pRVar1 = (PSRWLOCK)(lVar3 + 0xb0);
  AcquireSRWLockShared(pRVar1);
  iVar2 = *(int *)(lVar3 + 0x10);
  ReleaseSRWLockShared(pRVar1);
  if (iVar2 != 0) {
    return;
  }
  plVar4 = (longlong *)FUN_14134fce6(param_1);
  lVar3 = *plVar4;
  pRVar1 = (PSRWLOCK)(lVar3 + 0xb0);
  AcquireSRWLockShared(pRVar1);
  iVar2 = *(int *)(lVar3 + 8);
  ReleaseSRWLockShared(pRVar1);
  if (((iVar2 != 5) && (iVar2 != 4)) && (iVar2 != 1)) {
    FUN_1458343da(param_1);
    return;
  }
  FUN_1442e2a90(param_1,0);
  return;
}



// FUNCTION 1442e2a90 FUN_1442e2a90 body=133 status=ok
// SIG undefined FUN_1442e2a90(void)

void FUN_1442e2a90(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined4 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14134fce6();
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14b9cc200;
  local_58[0] = &LAB_1442ecc6a;
  local_30 = param_2;
  FUN_148e57a3a(*puVar1,local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar2 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar2 = &local_38;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442e2e12 FUN_1442e2e12 body=1268 status=ok
// SIG undefined FUN_1442e2e12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1442e2e12(longlong *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 *puVar23;
  undefined1 auVar24 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_f8 [40];
  char *local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1[0x51] != 0) {
    *(byte *)(param_1[0x51] + 0xa8) = *(byte *)((longlong)param_1 + 0x8c) >> 7;
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  dVar2 = (double)param_1[0xa8];
  if (((9.999999747378752e-05 < ABS(dVar2)) || (9.999999747378752e-05 < ABS((double)param_1[0xa9])))
     || (9.999999747378752e-05 < ABS((double)param_1[0xaa]))) {
    param_1[0xaf] = (longlong)((double)param_1[0xaf] - dVar2);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar2;
    auVar24 = divpd(auVar10 << 0x40,_DAT_1499387d0);
    auVar24 = roundpd(auVar24,auVar24,3);
    auVar25 = roundpd(in_XMM2,ZEXT816(0),3);
    dVar5 = (0.0 - auVar24._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar6 = (dVar2 - auVar24._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar7 = (0.0 - auVar25._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar8 = (0.0 - auVar25._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar2 = sin(dVar5);
    dVar3 = sin(dVar6);
    dVar4 = sin(dVar7);
    sin(dVar8);
    dVar5 = cos(dVar5);
    dVar6 = cos(dVar6);
    dVar7 = cos(dVar7);
    cos(dVar8);
    uVar13 = DAT_14c846520;
    uVar28 = DAT_14c846510._4_4_;
    uVar21 = (undefined4)DAT_14c846510;
    lVar17 = DAT_14c8464f0;
    uVar18 = DAT_14c8464e0._4_4_;
    uVar22 = (undefined4)DAT_14c8464e0;
    dVar8 = dVar3 * dVar2 * dVar4 + dVar6 * dVar5 * dVar7;
    dVar9 = -(dVar2 * dVar6 * dVar7) - dVar5 * dVar3 * dVar4;
    uVar26 = (undefined4)DAT_14c8464e8;
    uVar11 = (ulonglong)DAT_14c8464e8 >> 0x20;
    uVar27 = (undefined4)DAT_14c846518;
    uVar12 = (ulonglong)DAT_14c846518 >> 0x20;
    puVar23 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
    *puVar23 = &PTR_FUN_14b9cd3f0;
    local_d0 = "AddStandInTransform";
    local_c8 = 0x13;
    local_c4 = 0;
    uVar20 = FUN_14001a6c0(&local_d0,1);
    FUN_14039176c(puVar23,param_1[6],uVar20,1);
    *puVar23 = &PTR_FUN_14b9cd3f0;
    puVar23[7] = param_1[0xa7];
    auVar25._8_4_ = SUB84(dVar9,0);
    auVar25._0_8_ = dVar2 * dVar3 * dVar7 - dVar5 * dVar6 * dVar4;
    auVar25._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    *(undefined1 (*) [16])(puVar23 + 8) = auVar25;
    auVar24._8_4_ = SUB84(dVar8,0);
    auVar24._0_8_ = -(dVar6 * dVar2 * dVar4) + dVar3 * dVar5 * dVar7;
    auVar24._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *(undefined1 (*) [16])(puVar23 + 10) = auVar24;
    *(undefined4 *)(puVar23 + 0xc) = uVar22;
    *(undefined4 *)((longlong)puVar23 + 100) = uVar18;
    *(undefined4 *)(puVar23 + 0xd) = uVar26;
    *(int *)((longlong)puVar23 + 0x6c) = (int)uVar11;
    puVar23[0xe] = lVar17;
    puVar23[0xf] = 0;
    *(undefined4 *)(puVar23 + 0x10) = uVar21;
    *(undefined4 *)((longlong)puVar23 + 0x84) = uVar28;
    *(undefined4 *)(puVar23 + 0x11) = uVar27;
    *(int *)((longlong)puVar23 + 0x8c) = (int)uVar12;
    puVar23[0x12] = uVar13;
    puVar23[0x13] = 0;
    FUN_140391314(param_1,puVar23);
    param_1[0xaa] = DAT_14c8464f0;
    lVar17 = DAT_14c8464e8;
    param_1[0xa8] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    param_1[0xa9] = lVar17;
  }
  uVar19 = DAT_14c846520;
  uVar18 = DAT_14c846510._4_4_;
  uVar22 = (undefined4)DAT_14c846510;
  uVar16 = DAT_14c8463e8;
  uVar15 = DAT_14c8463e0;
  uVar14 = DAT_14c8463d8;
  uVar13 = DAT_14c8463d0;
  dVar2 = (double)param_1[0xab];
  dVar3 = (double)param_1[0xac];
  if ((9.999999747378752e-05 < ABS(dVar2)) || (9.999999747378752e-05 < ABS(dVar3))) {
    uVar28 = (undefined4)DAT_14c846518;
    uVar11 = (ulonglong)DAT_14c846518 >> 0x20;
    puVar23 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
    *puVar23 = &PTR_FUN_14b9cd420;
    local_d0 = "AddStandInCameraTransform";
    local_c8 = 0x19;
    local_c4 = 0;
    uVar21 = FUN_14001a6c0(&local_d0,1);
    FUN_14039176c(puVar23,param_1[6],uVar21,1);
    *puVar23 = &PTR_FUN_14b9cd420;
    puVar23[8] = uVar13;
    puVar23[9] = uVar14;
    puVar23[10] = uVar15;
    puVar23[0xb] = uVar16;
    puVar23[0xc] = 0;
    puVar23[0xd] = dVar2;
    puVar23[0xe] = dVar3;
    puVar23[0xf] = 0;
    *(undefined4 *)(puVar23 + 0x10) = uVar22;
    *(undefined4 *)((longlong)puVar23 + 0x84) = uVar18;
    *(undefined4 *)(puVar23 + 0x11) = uVar28;
    *(int *)((longlong)puVar23 + 0x8c) = (int)uVar11;
    puVar23[0x12] = uVar19;
    puVar23[0x13] = 0;
    FUN_140391314(param_1,puVar23);
    lVar17 = DAT_14c8463f8;
    param_1[0xab] = DAT_14c8463f0;
    param_1[0xac] = lVar17;
  }
  fVar1 = *(float *)(param_1 + 0xad);
  if (1e-08 < ABS(fVar1)) {
    puVar23 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    *puVar23 = &PTR_FUN_14b9cd460;
    local_d0 = "AddStandInCameraFOV";
    local_c8 = 0x13;
    local_c4 = 0;
    uVar22 = FUN_14001a6c0(&local_d0,1);
    FUN_14039176c(puVar23,param_1[6],uVar22,1);
    *puVar23 = &PTR_FUN_14b9cd460;
    *(float *)(puVar23 + 7) = fVar1;
    FUN_140391314(param_1,puVar23);
    *(undefined4 *)(param_1 + 0xad) = 0;
  }
  if ((local_c0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442e3308 FUN_1442e3308 body=472 status=ok
// SIG undefined FUN_1442e3308(void)

void FUN_1442e3308(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x288) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x288) + 0x7e8) == '\x01')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  if (*(char *)(param_1 + 0x5de) == '\0') {
    puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar6 = &PTR_FUN_14b9cd570;
    local_48 = "MenuClosed";
    local_40 = 10;
    local_3c = 0;
    uVar5 = FUN_14001a6c0(&local_48,1);
    FUN_14039176c(puVar6,*(undefined8 *)(param_1 + 0x30),uVar5,1);
    *puVar6 = &PTR_FUN_14b9cd570;
    FUN_140391314(param_1,puVar6);
  }
  iVar1 = *(int *)(param_1 + 0x5e8);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x5e0);
    lVar9 = 0;
    do {
      local_48 = *(char **)(lVar3 + lVar9);
      if ((*(int *)(param_1 + 0x34) == 0) || (uVar2 = *(uint *)(param_1 + 0x30), (int)uVar2 < 0)) {
LAB_1442e3435:
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        if ((int)uVar2 < DAT_14c9647dc) {
          plVar8 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (((plVar8 == (longlong *)0x0) || ((int)plVar8[2] != *(int *)(param_1 + 0x34))) ||
             ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) goto LAB_1442e3435;
          lVar7 = *plVar8;
        }
      }
      FUN_1403ca8ec(lVar7 + 0x3c0,&local_48);
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar1 * 8 != lVar9);
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *puVar6 = &PTR_FUN_14b9c1410;
  local_48 = "RemoveState";
  local_40 = 0xb;
  local_3c = 0;
  uVar5 = FUN_14001a6c0(&local_48,1);
  FUN_14039176c(puVar6,uVar4,uVar5,1);
  *puVar6 = &PTR_FUN_14b9c1410;
  puVar6[7] = DAT_14cbd9610;
  FUN_140391314(param_1,puVar6);
  *(undefined1 *)(param_1 + 0x5df) = 0;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442e34f6 FUN_1442e34f6 body=1270 status=ok
// SIG undefined FUN_1442e34f6(void)

void FUN_1442e34f6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  uint uVar3;
  char *pcVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  ushort uVar15;
  ulonglong uVar16;
  undefined1 auStack_88 [32];
  char *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined8 uStack_50;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((((*(int *)(param_1 + 0x34) == 0) || (uVar3 = *(uint *)(param_1 + 0x30), (int)uVar3 < 0)) ||
        (DAT_14c9647dc <= (int)uVar3)) ||
       ((plVar9 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
        plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(param_1 + 0x34))))) ||
      (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 ||
       ((*plVar9 == 0 || (cVar6 = FUN_14129c520(*plVar9 + 900,0), cVar6 != '\0')))))) ||
     (lVar10 = *(longlong *)(param_1 + 0x288), lVar10 == 0)) goto LAB_1442e39a7;
  iVar11 = *(int *)(lVar10 + 0x270);
  if (iVar11 == DAT_14cbdecb0) {
    if (1 < iVar11) {
      lVar12 = 0;
      while( true ) {
        uVar13 = *(ushort *)(*(longlong *)(lVar10 + 0x268) + lVar12);
        uVar14 = (ulonglong)uVar13;
        uVar15 = *(ushort *)(DAT_14cbdeca8 + lVar12);
        if (uVar13 != uVar15) break;
        if (uVar13 == 0) goto LAB_1442e361b;
LAB_1442e35df:
        lVar12 = lVar12 + 2;
      }
      if ((uVar15 | uVar13) < 0x80) {
        uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
        uVar16 = (ulonglong)uVar15;
        uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
        if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar16]) goto LAB_1442e35df;
      }
      if (uVar13 != uVar15) goto LAB_1442e39a7;
    }
  }
  else if (DAT_14cbdecb0 + iVar11 != 1) goto LAB_1442e39a7;
LAB_1442e361b:
  if ((*(char *)(lVar10 + 0x7f0) != '\x01') || (*(char *)(param_1 + 0x5dd) != '\0'))
  goto LAB_1442e39a7;
  if (*(char *)(lVar10 + 0x7e8) == '\x01') {
    FUN_148ea68d2(param_1);
  }
  if (*(longlong *)(param_1 + 0x438) == 0) goto LAB_1442e39a7;
  if ((longlong)*(int *)(param_1 + 0x450) != 0) {
    lVar10 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x448) + lVar10) == 0) goto LAB_1442e39a7;
      lVar10 = lVar10 + 8;
    } while ((longlong)*(int *)(param_1 + 0x450) * 8 != lVar10);
  }
  iVar11 = *(int *)(param_1 + 0x510);
  if (iVar11 == -1) {
    FUN_1448d5e3c(&local_68,param_1 + 0x208);
    lVar10 = *(longlong *)(local_68 + 0x1b0);
    SRWLock = (PSRWLOCK)(lVar10 + 0x1c0);
    AcquireSRWLockShared(SRWLock);
    plVar9 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    lVar10 = FUN_148e1b550(lVar10,param_1 + 0x520);
    if ((lVar10 == 0) || (iVar11 = *(int *)(lVar10 + 8), iVar11 == -1)) {
      ReleaseSRWLockShared(SRWLock);
      goto LAB_1442e39a7;
    }
    ReleaseSRWLockShared(SRWLock);
  }
  FUN_1448d5e3c(&local_68,param_1 + 0x208);
  pcVar4 = *(char **)(local_68 + 0x600);
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar4 + 0xa0));
  *(int *)(pcVar4 + 0x98) = *(int *)(pcVar4 + 0x98) + 1;
  if (*pcVar4 == '\0') {
    iVar8 = *(int *)(pcVar4 + 4) + 1;
LAB_1442e3773:
    *pcVar4 = '\x01';
    *(int *)(pcVar4 + 4) = iVar8;
  }
  else {
    iVar8 = 1;
    if (*(int *)(pcVar4 + 4) == 0) goto LAB_1442e3773;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(pcVar4 + 0xa0));
  plVar9 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_1448d5e3c(&local_68,param_1 + 0x208);
  lVar10 = *(longlong *)(local_68 + 0x4d0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar10 + 0x168));
  plVar9 = plStack_60;
  *(int *)(lVar10 + 0x160) = *(int *)(lVar10 + 0x160) + 1;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_1407b25f0(lVar10 + 0x80,param_1 + 0x438);
  *(int *)(lVar10 + 0x158) = iVar11;
  lVar12 = lVar10 + 0x10;
  *(undefined4 *)(lVar10 + 0x18) = 0;
  if (*(int *)(lVar10 + 0x1c) < 0) {
    FUN_1403de8ba(lVar12,0);
  }
  *(undefined4 *)(lVar10 + 0x28) = 0;
  if (*(int *)(lVar10 + 0x2c) < 0) {
    FUN_1403de8ba(lVar10 + 0x20,0);
  }
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar5 = DAT_14caa8580;
  local_68 = "UI.State.MENU_INVENTORY";
  plStack_60 = (longlong *)CONCAT35(plStack_60._5_3_,0x17);
  uVar7 = FUN_14001a6c0(&local_68,1);
  FUN_1400702d4(lVar5,&local_68,uVar7,0);
  FUN_140608954(lVar12,&local_68);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar5 = DAT_14caa8580;
  local_68 = "UI.State.ITEM_INSPECT";
  plStack_60 = (longlong *)CONCAT35(plStack_60._5_3_,0x15);
  uVar7 = FUN_14001a6c0(&local_68,1);
  FUN_1400702d4(lVar5,&local_68,uVar7,0);
  FUN_140608954(lVar12,&local_68);
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (char *)0x0;
  plStack_60 = (longlong *)0x0;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar5 = DAT_14caa8580;
  local_48 = "UI.State.MENU_CUSTOMIZATION_WEAPON";
  local_40 = 0x22;
  local_3c = 0;
  uVar7 = FUN_14001a6c0(&local_48,1);
  FUN_1400702d4(lVar5,&local_48,uVar7,0);
  FUN_140608954(&local_68,&local_48);
  FUN_148a0109e(param_1,lVar12,&local_68);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (char *)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar10 + 0x168));
LAB_1442e39a7:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442e3a0e FUN_1442e3a0e body=1169 status=ok
// SIG undefined FUN_1442e3a0e(void)

void FUN_1442e3a0e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
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
  FUN_1418fb12e();
  plVar7 = (longlong *)(param_1 + 0x5e0);
  *(undefined4 *)(param_1 + 0x5e8) = 0;
  if (*(int *)(param_1 + 0x5ec) != 0) {
    FUN_1403de8ba(plVar7,0);
  }
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442e3de2:
    lVar10 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x30);
    lVar10 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != *(int *)(param_1 + 0x34) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)
          ))) goto LAB_1442e3de2;
      lVar10 = *plVar6;
    }
  }
  cVar3 = FUN_140426394(lVar10 + 0x3c0,&DAT_14cbd93c0);
  if (cVar3 == '\0') {
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442e3de9:
      lVar10 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x30);
      lVar10 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar6 == (longlong *)0x0) ||
           (((int)plVar6[2] != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) goto LAB_1442e3de9;
        lVar10 = *plVar6;
      }
    }
    cVar3 = FUN_140426394(lVar10 + 0x3c0,&DAT_14cbd93c8);
    if (cVar3 == '\0') {
      if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442e3df0:
        lVar10 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x30);
        lVar10 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          plVar6 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((plVar6 == (longlong *)0x0) ||
             (((int)plVar6[2] != *(int *)(param_1 + 0x34) ||
              ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) goto LAB_1442e3df0;
          lVar10 = *plVar6;
        }
      }
      cVar3 = FUN_140426394(lVar10 + 0x3c0,&DAT_14cbd9560);
      if (cVar3 == '\0') {
        if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442e3df7:
          lVar10 = 0;
        }
        else {
          uVar1 = *(uint *)(param_1 + 0x30);
          lVar10 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            plVar7 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((plVar7 == (longlong *)0x0) ||
               (((int)plVar7[2] != *(int *)(param_1 + 0x34) ||
                ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) goto LAB_1442e3df7;
            lVar10 = *plVar7;
          }
        }
        cVar3 = FUN_140426394(lVar10 + 0x3c0,&DAT_14cbd9410);
        if (cVar3 != '\0') {
          *(undefined1 *)(param_1 + 0x5de) = 1;
          goto LAB_1442e3ca3;
        }
        if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442e3dfe:
          uVar8 = 0;
        }
        else {
          uVar1 = *(uint *)(param_1 + 0x30);
          uVar8 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            puVar9 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((puVar9 == (undefined8 *)0x0) ||
               ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x34) ||
                ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_1442e3dfe;
            uVar8 = *puVar9;
          }
        }
        lVar10 = FUN_1407f492e(uVar8);
        if (lVar10 != 0) {
          if (DAT_14cbadd90 == 0) {
            local_40 = &local_28;
            local_28 = FUN_141030f22;
            local_30 = FUN_14081d0ea;
            local_38 = &LAB_1459f2e4c;
            local_48 = &LAB_148c39de3;
            local_50 = &LAB_1457a9eb2;
            local_58 = &DAT_149e063b2;
            local_60 = 0;
            local_68 = 0x10000004;
            local_70 = 0x10;
            local_78 = 0x3de0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
            uVar4 = FUN_14030d5d4(lVar10);
            *(undefined1 *)(param_1 + 0x5de) = uVar4;
          }
        }
        goto LAB_1442e3ca3;
      }
      *(undefined1 *)(param_1 + 0x5de) = 0;
      iVar2 = *(int *)(param_1 + 0x5e8);
      lVar10 = (longlong)iVar2;
      *(uint *)(param_1 + 0x5e8) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x5ec) < iVar2 + 1U) {
        FUN_1403de658(plVar7,iVar2);
      }
      lVar5 = *plVar7;
      uVar8 = DAT_14cbd9560;
    }
    else {
      *(undefined1 *)(param_1 + 0x5de) = 0;
      iVar2 = *(int *)(param_1 + 0x5e8);
      *(uint *)(param_1 + 0x5e8) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x5ec) < iVar2 + 1U) {
        FUN_1403de658(plVar7,iVar2);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x5e0) + (longlong)iVar2 * 8) = DAT_14cbd93b0;
      iVar2 = *(int *)(param_1 + 0x5e8);
      lVar10 = (longlong)iVar2;
      *(uint *)(param_1 + 0x5e8) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x5ec) < iVar2 + 1U) {
        FUN_1403de658(plVar7,iVar2);
      }
      lVar5 = *plVar7;
      uVar8 = DAT_14cbd93c8;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x5de) = 0;
    iVar2 = *(int *)(param_1 + 0x5e8);
    *(uint *)(param_1 + 0x5e8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x5ec) < iVar2 + 1U) {
      FUN_1403de658(plVar7,iVar2);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x5e0) + (longlong)iVar2 * 8) = DAT_14cbd93b0;
    iVar2 = *(int *)(param_1 + 0x5e8);
    lVar10 = (longlong)iVar2;
    *(uint *)(param_1 + 0x5e8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x5ec) < iVar2 + 1U) {
      FUN_1403de658(plVar7,iVar2);
    }
    lVar5 = *plVar7;
    uVar8 = DAT_14cbd93c0;
  }
  *(undefined8 *)(lVar5 + lVar10 * 8) = uVar8;
LAB_1442e3ca3:
  *(undefined1 *)(param_1 + 0x5df) = 1;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442e3ea0 FUN_1442e3ea0 body=382 status=ok
// SIG undefined FUN_1442e3ea0(void)

void FUN_1442e3ea0(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141196df0();
  if (*(char *)(param_1 + 0x5df) == '\x01') {
    puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar4 = &PTR_FUN_14b9cd570;
    local_38 = "MenuClosed";
    local_30 = 10;
    local_2c = 0;
    uVar3 = FUN_14001a6c0(&local_38,1);
    FUN_14039176c(puVar4,*(undefined8 *)(param_1 + 0x30),uVar3,1);
    *puVar4 = &PTR_FUN_14b9cd570;
    FUN_140391314(param_1,puVar4);
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  *puVar4 = &PTR_FUN_14b9cd3a0;
  local_38 = "UpdateStandIn";
  local_30 = 0xd;
  local_2c = 0;
  uVar3 = FUN_14001a6c0(&local_38,1);
  FUN_14039176c(puVar4,*(undefined8 *)(param_1 + 0x30),uVar3,1);
  *puVar4 = &PTR_FUN_14b9cd3a0;
  puVar4[7] = DAT_14cbde558;
  puVar4[8] = *(undefined8 *)(param_1 + 0x18);
  puVar4[9] = 0;
  *(undefined1 *)(puVar4 + 0xc) = 0;
  FUN_140391314(param_1,puVar4);
  *(undefined1 *)(param_1 + 0x5dc) = 0;
  FUN_148ea6a9e(param_1,0);
  if (*(char *)(param_1 + 0x5dd) == '\x01') {
    FUN_148ea68d2(param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0xb4) = *(int *)(lVar1 + 0xb4) + 1;
    *(undefined1 *)(lVar1 + 0xb0) = 0;
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442e4020 FUN_1442e4020 body=1659 status=ok
// SIG undefined FUN_1442e4020(void)

void FUN_1442e4020(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  ushort *puVar3;
  longlong *plVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  ushort uVar15;
  ulonglong uVar16;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 *local_160;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  PSRWLOCK local_130;
  int local_128;
  longlong local_120;
  char *local_118;
  int local_110;
  uint uStack_10c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((((*(char *)((longlong)param_1 + 0x5dc) != '\0') ||
       ((*(byte *)((longlong)param_1 + 0x8c) & 0x80) == 0)) || (lVar12 = param_1[0x51], lVar12 == 0)
      ) || ((int)param_1[0x41] == 0)) goto LAB_1442e406d;
  FUN_1448d5e3c(&local_118);
  lVar11 = *(longlong *)(local_118 + 0xe0);
  local_130 = (PSRWLOCK)(lVar11 + 0x638);
  local_128 = 0;
  AcquireSRWLockShared(local_130);
  plVar4 = (longlong *)CONCAT44(uStack_10c,local_110);
  local_120 = lVar11;
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
  lVar11 = local_120;
  if ((int)param_1[0xbb] != *(int *)(local_120 + 0x630)) {
    *(int *)(param_1 + 0xbb) = *(int *)(local_120 + 0x630);
    if (*(char *)(lVar12 + 0xb0) == '\0') {
      puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      *puVar7 = &PTR_FUN_14b9c6e00;
      local_118 = "MenuOpened";
      local_110 = 10;
      uStack_10c = uStack_10c & 0xffffff00;
      uVar6 = FUN_14001a6c0(&local_118,1);
      FUN_14039176c(puVar7,param_1[6],uVar6,1);
      *puVar7 = &PTR_FUN_14b9c6e00;
      puVar7[7] = param_1[3];
      FUN_140391314(param_1,puVar7);
      puVar7 = (undefined8 *)FUN_14001cc68(0x68,0x10);
      *puVar7 = &PTR_FUN_14b9cd3a0;
      local_118 = "UpdateStandIn";
      local_110 = 0xd;
      uStack_10c = uStack_10c & 0xffffff00;
      uVar6 = FUN_14001a6c0(&local_118,1);
      FUN_14039176c(puVar7,param_1[6],uVar6,1);
      *puVar7 = &PTR_FUN_14b9cd3a0;
      puVar7[7] = DAT_14cbde550;
      puVar7[8] = param_1[3];
      puVar7[9] = param_1[0xa6];
      *(undefined1 *)(puVar7 + 0xc) = 0;
      FUN_140391314(param_1,puVar7);
      param_1[0xae] = 0;
      param_1[0xaf] = 0;
      param_1[0xb0] = 0;
      FUN_148ea6a9e(param_1);
    }
    if (*(longlong *)(lVar11 + 0x218) == 0) {
LAB_1442e4600:
      if (param_1[0x87] != 0) {
        if ((longlong)(int)param_1[0x8a] != 0) {
          lVar11 = 0;
          do {
            if (*(longlong *)(param_1[0x89] + lVar11) == 0) goto LAB_1442e447e;
            lVar11 = lVar11 + 8;
          } while ((longlong)(int)param_1[0x8a] * 8 != lVar11);
        }
        uVar8 = FUN_14001cc68(0x148,0x10);
        local_160 = &local_148;
        local_148 = (undefined4)DAT_14c8464e0;
        uStack_144 = DAT_14c8464e0._4_4_;
        uStack_140 = (undefined4)DAT_14c8464e8;
        uStack_13c = DAT_14c8464e8._4_4_;
        local_138 = DAT_14c8464f0;
        local_168 = (undefined4)param_1[0xa2];
        FUN_14664e342(uVar8,param_1[6],0,*(undefined8 *)((longlong)param_1 + 0x514));
        FUN_140391314(param_1);
      }
    }
    else {
      if ((longlong)*(int *)(lVar11 + 0x230) != 0) {
        lVar10 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar11 + 0x228) + lVar10) == 0) goto LAB_1442e4600;
          lVar10 = lVar10 + 8;
        } while ((longlong)*(int *)(lVar11 + 0x230) * 8 != lVar10);
      }
      (**(code **)(*param_1 + 0x108))(param_1,lVar12,&local_130);
      if ((*(byte *)(local_120 + 0x19) & 2) == 0) {
        iVar9 = *(int *)(local_120 + 0x128);
        if (iVar9 == DAT_14cbded20) {
          if (1 < iVar9) {
            lVar11 = 0;
            while( true ) {
              uVar13 = *(ushort *)(*(longlong *)(local_120 + 0x120) + lVar11);
              uVar14 = (ulonglong)uVar13;
              uVar15 = *(ushort *)(DAT_14cbded18 + lVar11);
              if (uVar13 != uVar15) break;
              if (uVar13 == 0) goto LAB_1442e430b;
LAB_1442e42d6:
              lVar11 = lVar11 + 2;
            }
            if ((uVar15 | uVar13) < 0x80) {
              uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
              uVar16 = (ulonglong)uVar15;
              uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
              if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar16]) goto LAB_1442e42d6;
            }
            if (uVar13 != uVar15) goto LAB_1442e4320;
          }
LAB_1442e430b:
          FUN_140de1078(param_1,&DAT_14cbded28,0,0);
        }
        else if (DAT_14cbded20 + iVar9 == 1) goto LAB_1442e430b;
LAB_1442e4320:
        uVar8 = FUN_14001cc68(0x48,0x10);
        FUN_148ea3c52(uVar8,param_1[6],local_120 + 8);
        FUN_140391314(param_1,uVar8);
      }
      FUN_1406fd608(&local_118,local_120 + 0x218);
      FUN_140a6a9d4(param_1 + 0x87,&local_118);
      FUN_140368b56(&local_118);
      *(undefined4 *)(param_1 + 0xa2) = *(undefined4 *)(local_120 + 8);
      *(undefined8 *)((longlong)param_1 + 0x514) = *(undefined8 *)(local_120 + 0x20);
      local_118 = (char *)0x0;
      local_110 = *(int *)(local_120 + 0x1f8);
      lVar11 = (longlong)local_110;
      _Src = *(void **)(local_120 + 0x1f0);
      if (lVar11 == 0) {
        uStack_10c = 0;
      }
      else {
        FUN_1446dd670(&local_118,local_110,0);
        memcpy(local_118,_Src,lVar11 * 2);
      }
      if ((char **)(param_1 + 0xa4) == &local_118) {
        if (local_118 != (char *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_1[0xa4] != 0) {
          FUN_1400020a8();
        }
        param_1[0xa4] = (longlong)local_118;
        local_118 = (char *)0x0;
        *(int *)(param_1 + 0xa5) = local_110;
        *(uint *)((longlong)param_1 + 0x52c) = uStack_10c;
      }
      bVar5 = 1;
      if (*(longlong *)((longlong)param_1 + 0x514) == 0) {
        bVar5 = *(byte *)(local_120 + 0x10) & 1;
      }
      if (bVar5 == *(byte *)(lVar12 + 0x7f0)) {
        iVar9 = 1;
        if (*(int *)(lVar12 + 0x7f4) != 0) goto LAB_1442e447e;
      }
      else {
        iVar9 = *(int *)(lVar12 + 0x7f4) + 1;
      }
      *(byte *)(lVar12 + 0x7f0) = bVar5;
      *(int *)(lVar12 + 0x7f4) = iVar9;
    }
LAB_1442e447e:
    *(int *)(lVar12 + 0xb4) = *(int *)(lVar12 + 0xb4) + 1;
    *(undefined1 *)(lVar12 + 0xb0) = 1;
    puVar3 = *(ushort **)(lVar12 + 0x80);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar12 + 0x78) & 0x3f));
    }
  }
  if (param_1[0x87] != 0) {
    if ((longlong)(int)param_1[0x8a] != 0) {
      lVar12 = 0;
      do {
        if (*(longlong *)(param_1[0x89] + lVar12) == 0) goto LAB_1442e45d6;
        lVar12 = lVar12 + 8;
      } while ((longlong)(int)param_1[0x8a] * 8 != lVar12);
    }
    puVar7 = (undefined8 *)FUN_14001cc68(0x110,0x10);
    *puVar7 = &PTR_FUN_14b9cd4f0;
    local_118 = "SetStandInInventoryIdentity";
    local_110 = 0x1b;
    uStack_10c = uStack_10c & 0xffffff00;
    uVar6 = FUN_14001a6c0(&local_118,1);
    FUN_14039176c(puVar7,param_1[6],uVar6,1);
    *puVar7 = &PTR_FUN_14b9cd4f0;
    FUN_1406fd608(puVar7 + 7,param_1 + 0x87);
    FUN_140391314(param_1,puVar7);
    puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    FUN_148ea6b94(param_1,&local_150);
    *puVar7 = &PTR_FUN_14b9cd530;
    local_118 = "SetStandInCameraIdentity";
    local_110 = 0x18;
    uStack_10c = uStack_10c & 0xffffff00;
    uVar6 = FUN_14001a6c0(&local_118,1);
    FUN_14039176c(puVar7,param_1[6],uVar6,1);
    *puVar7 = &PTR_FUN_14b9cd530;
    puVar7[7] = local_150;
    FUN_140391314(param_1,puVar7);
    *(undefined1 *)((longlong)param_1 + 0x5dc) = 1;
  }
LAB_1442e45d6:
  FUN_148ea6be0(param_1);
  if (local_128 == 0) {
    ReleaseSRWLockShared(local_130);
  }
  else {
    ReleaseSRWLockExclusive(local_130);
  }
LAB_1442e406d:
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442e474e FUN_1442e474e body=1751 status=ok
// SIG undefined FUN_1442e474e(void)

void FUN_1442e474e(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  ushort *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined2 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  int *piVar20;
  PSRWLOCK pRVar21;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98 [5];
  int local_70;
  undefined4 uStack_6c;
  longlong *local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((((*(int *)((longlong)param_1 + 0x34) == 0) ||
        (uVar5 = *(uint *)(param_1 + 6), (int)uVar5 < 0)) || (DAT_14c9647dc <= (int)uVar5)) ||
      ((plVar18 = (longlong *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       plVar18 == (longlong *)0x0 || ((int)plVar18[2] != *(int *)((longlong)param_1 + 0x34))))) ||
     (((*(uint *)(plVar18 + 1) & 0x10200000) != 0 || (*plVar18 == 0)))) goto LAB_1442e4c65;
  lVar6 = *param_2;
  if (lVar6 != DAT_14cbdef48) {
    if (lVar6 == DAT_14cbdef58) {
      if ((*(byte *)(param_1 + 0x53) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
      }
    }
    else if (((lVar6 == DAT_14cbdef50) && (lVar6 = param_1[0x51], lVar6 != 0)) &&
            ((*(char *)(lVar6 + 0x1a3) == '\x01' && (lVar9 = FUN_140391a3c(), lVar9 != 0)))) {
      iVar8 = (int)param_3[1] + -1;
      if ((int)param_3[1] == 0) {
        iVar8 = 0;
      }
      FUN_1446f82e2(&local_70,iVar8,*param_3,1);
      lVar16 = CONCAT44(uStack_6c,local_70);
      puVar7 = *(ushort **)(lVar6 + 0x80);
      if (puVar7 != (ushort *)0x0) {
        *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
      }
      if ((longlong)(int)param_1[99] != 0) {
        plVar18 = (longlong *)param_1[0x62];
        lVar10 = (longlong)(int)param_1[99] * 0x28;
        do {
          if (*plVar18 == lVar16) {
            if ((plVar18 != (longlong *)0x0) && (*(char *)((longlong)plVar18 + 0xc) == '\x01')) {
              FUN_1448d5e3c(&local_70,param_1 + 0x41);
              lVar10 = *(longlong *)(CONCAT44(uStack_6c,local_70) + 0x3c0);
              pRVar21 = (PSRWLOCK)(lVar10 + 0x68);
              AcquireSRWLockShared(pRVar21);
              if (local_68 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_68 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_68)(local_68);
                  LOCK();
                  piVar20 = (int *)((longlong)local_68 + 0xc);
                  *piVar20 = *piVar20 + -1;
                  UNLOCK();
                  if (*piVar20 == 0) {
                    (**(code **)(*local_68 + 0x10))(local_68);
                  }
                }
              }
              lVar13 = FUN_141563480(plVar18 + 2);
              if ((longlong)*(int *)(lVar10 + 0x50) == 0) goto LAB_1442e4d2f;
              lVar19 = 0;
              goto LAB_1442e4d20;
            }
            break;
          }
          plVar18 = plVar18 + 5;
          lVar10 = lVar10 + -0x28;
        } while (lVar10 != 0);
      }
LAB_1442e4d79:
      cVar3 = *(char *)(lVar6 + 0x1a0);
      puVar11 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      if (cVar3 == '\x01') {
        uVar4 = *(undefined1 *)(lVar6 + 0x1a5);
        *puVar11 = &PTR_FUN_14b9caa80;
        puVar11[1] = lVar16;
        *(undefined1 *)(puVar11 + 2) = uVar4;
        FUN_14039144e(lVar9,puVar11);
        (**(code **)(*param_1 + 0x108))(param_1,param_1 + 0x2e,1);
        *(byte *)(param_1 + 0x53) = *(byte *)(param_1 + 0x53) | 0x40;
        FUN_14129c41e(param_1,&DAT_14cbd9470,1);
      }
      else {
        *puVar11 = &PTR_FUN_14b993e18;
        puVar11[1] = lVar16;
        *(undefined2 *)(puVar11 + 2) = 1;
        FUN_14039144e(lVar9,puVar11);
        if ((*(char *)(lVar6 + 0x1a1) != '\x01') || (*(char *)((longlong)param_1 + 0x322) == '\0'))
        {
          (**(code **)(*param_1 + 0x108))(param_1,param_1 + 0x2e,1);
          *(byte *)(param_1 + 0x53) = *(byte *)(param_1 + 0x53) | 0x40;
        }
      }
    }
    goto LAB_1442e4c65;
  }
  lVar6 = param_1[0x51];
  if ((lVar6 == 0) || (lVar9 = FUN_140391a3c(), lVar9 == 0)) goto LAB_1442e4c65;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  if ((longlong)(int)param_3[1] != 0) {
    uVar15 = 0;
    do {
      if (*(short *)(*param_3 + uVar15) == 0x3a) {
        if ((int)(~uVar15 >> 1) != 0) {
          FUN_140056680(&local_70,&DAT_149e31048);
          local_b0 = 0;
          local_b8 = 1;
          FUN_1407cdbc6(param_3,&local_70,local_98 + 2,local_98);
          if (CONCAT44(uStack_6c,local_70) != 0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      uVar15 = uVar15 + 2;
    } while ((longlong)(int)param_3[1] * 2 != uVar15);
  }
  piVar20 = (int *)0x0;
  FUN_14000bbd8(&local_70,local_98 + 2,0);
  *(int *)(param_1 + 0x61) = (int)param_1[0x61] + 1;
  if ((longlong)(int)param_1[0x60] != 0) {
    piVar20 = (int *)param_1[0x5f];
    lVar16 = (longlong)(int)param_1[0x60] * 0x308;
    do {
      if (*piVar20 == local_70) goto LAB_1442e49e8;
      piVar20 = piVar20 + 0xc2;
      lVar16 = lVar16 + -0x308;
    } while (lVar16 != 0);
    piVar20 = (int *)0x0;
  }
LAB_1442e49e8:
  FUN_1448d5e3c(&local_a8,param_1 + 0x41);
  pRVar21 = (PSRWLOCK)(*(longlong *)(local_a8 + 0x3c0) + 0x68);
  AcquireSRWLockShared(pRVar21);
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_a0 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
  if (piVar20 == (int *)0x0) {
LAB_1442e4ab2:
    if (*(char *)(lVar6 + 0x1a2) == '\x01') {
      puVar11 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      if ((int)param_3[1] == 0) {
        puVar17 = &DAT_149dfb77a;
      }
      else {
        puVar17 = (undefined2 *)*param_3;
      }
      FUN_1446f470e(&local_a8,puVar17,1);
      ppuVar12 = &PTR_FUN_14b9caa50;
    }
    else {
      if (*(char *)(lVar6 + 0x1a0) != '\x01') {
        puVar11 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        if ((int)param_3[1] == 0) {
          puVar17 = &DAT_149dfb77a;
        }
        else {
          puVar17 = (undefined2 *)*param_3;
        }
        FUN_1446f470e(&local_a8,puVar17,1);
        *puVar11 = &PTR_FUN_14b9caa70;
        puVar11[1] = local_a8;
        *(undefined1 *)(puVar11 + 2) = 0;
        goto LAB_1442e4c26;
      }
      puVar11 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      if ((int)param_3[1] == 0) {
        puVar17 = &DAT_149dfb77a;
      }
      else {
        puVar17 = (undefined2 *)*param_3;
      }
      FUN_1446f470e(&local_a8,puVar17,1);
      ppuVar12 = &PTR_FUN_14b9caa60;
    }
    *puVar11 = ppuVar12;
    puVar11[1] = local_a8;
    FUN_14039144e(lVar9,puVar11);
    (**(code **)(*param_1 + 0x108))(param_1,param_1 + 0x2e,1);
    *(byte *)(param_1 + 0x53) = *(byte *)(param_1 + 0x53) | 0x40;
  }
  else {
    if (((char)piVar20[0x7c] == '\x01') && ((char)piVar20[0x7e] == '\0')) {
      puVar11 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      uVar14 = *(undefined8 *)(piVar20 + 0x86);
      *puVar11 = &PTR_FUN_14b9caa20;
      puVar11[1] = uVar14;
    }
    else {
      if ((piVar20[0x8a] == 0) || ((piVar20[0x8b] == 0 || (piVar20[0x8a] == DAT_14c948000))))
      goto LAB_1442e4ab2;
      if ((char)piVar20[0xa2] == '\0') {
        puVar11 = (undefined8 *)FUN_14001cc68(0x30,0x10);
        ppuVar12 = &PTR_FUN_14b9caa30;
      }
      else {
        if ((char)piVar20[0xa4] != '\x01') goto LAB_1442e4ab2;
        puVar11 = (undefined8 *)FUN_14001cc68(0x30,0x10);
        ppuVar12 = &PTR_FUN_14b9caa40;
      }
      *puVar11 = ppuVar12;
      FUN_1447a97f4(puVar11 + 1,piVar20 + 0x8a);
    }
LAB_1442e4c26:
    FUN_14039144e(lVar9,puVar11);
  }
  ReleaseSRWLockShared(pRVar21);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
LAB_1442e4c65:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (lVar19 = lVar19 + 8, (longlong)*(int *)(lVar10 + 0x50) * 8 != lVar19) {
LAB_1442e4d20:
    if (*(longlong *)(*(longlong *)(lVar10 + 0x48) + lVar19) == lVar13) {
      ReleaseSRWLockShared(pRVar21);
      goto LAB_1442e4d79;
    }
  }
LAB_1442e4d2f:
  puVar11 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  uVar14 = FUN_141563480(plVar18 + 2);
  *puVar11 = &PTR_FUN_14b9caa20;
  puVar11[1] = uVar14;
  FUN_14039144e(lVar9,puVar11);
  ReleaseSRWLockShared(pRVar21);
  goto LAB_1442e4c65;
}



// FUNCTION 1442e4e46 FUN_1442e4e46 body=5318 status=ok
// SIG undefined FUN_1442e4e46(void)

void FUN_1442e4e46(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  bool bVar3;
  void *_Src;
  undefined2 *puVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined4 *puVar23;
  longlong *plVar24;
  undefined2 *puVar25;
  uint uVar26;
  uint uVar27;
  longlong *_Src_00;
  int iVar28;
  float fVar29;
  undefined1 auStack_538 [32];
  longlong *local_518;
  longlong *local_510;
  longlong *local_508;
  longlong local_500;
  longlong local_4f8;
  longlong *local_4f0;
  undefined2 *local_4e8;
  undefined8 uStack_4e0;
  longlong *local_4d8;
  undefined8 uStack_4d0;
  longlong local_4c8 [22];
  longlong local_418;
  undefined8 local_410;
  longlong *local_408;
  undefined4 local_400;
  longlong *local_3f8;
  undefined4 local_3f0;
  longlong *local_3e8;
  undefined4 local_3e0;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined1 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 local_118;
  int iStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  int local_100;
  undefined8 local_f8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_538;
  lVar11 = *(longlong *)(param_1 + 0x288);
  if (lVar11 == 0) goto LAB_1442e4e7f;
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar9 = &DAT_14c9a1308;
  }
  else {
    plVar9 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdef60);
  }
  if (*plVar9 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_14000584e(*plVar9,0);
  }
  *(undefined1 *)(lVar11 + 0x1a0) = uVar5;
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar9 = &DAT_14c9a1308;
  }
  else {
    plVar9 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdef70);
  }
  if (*plVar9 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_14000584e(*plVar9,0);
  }
  *(undefined1 *)(lVar11 + 0x1a2) = uVar5;
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar9 = &DAT_14c9a1308;
  }
  else {
    plVar9 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdef78);
  }
  if (*plVar9 == 0) {
    *(undefined1 *)(lVar11 + 0x1a3) = 0;
  }
  else {
    cVar6 = FUN_14000584e(*plVar9,0);
    *(char *)(lVar11 + 0x1a3) = cVar6;
    iVar18 = DAT_14cbdef88;
    _Src = DAT_14cbdef80;
    if ((cVar6 != '\0') &&
       (puVar10 = (undefined8 *)(param_1 + 0x2c0), (void **)puVar10 != &DAT_14cbdef80)) {
      lVar15 = (longlong)DAT_14cbdef88;
      *(int *)(param_1 + 0x2c8) = DAT_14cbdef88;
      if (iVar18 == 0 && *(int *)(param_1 + 0x2cc) == 0) {
        *(undefined4 *)(param_1 + 0x2cc) = 0;
      }
      else {
        FUN_1446dd670(puVar10,iVar18);
        if (iVar18 != 0) {
          memcpy((void *)*puVar10,_Src,lVar15 * 2);
        }
      }
    }
  }
  FUN_1457464fc(param_1);
  FUN_1442e630e(lVar11);
  if (*(char *)(lVar11 + 0x1a3) == '\x01') {
    uVar7 = FUN_145746a1c(param_1,&DAT_14cbdef80);
    if ((((uVar7 == 0xffffffff) || ((int)uVar7 < 0)) || (*(int *)(param_1 + 0x2b8) <= (int)uVar7))
       || (lVar15 = (ulonglong)uVar7 * 0x30 + *(longlong *)(param_1 + 0x2b0), lVar15 == 0))
    goto LAB_1442e4e7f;
    local_4d8 = (longlong *)0x0;
    uStack_4d0 = 0;
    if (DAT_14cbe42e8 == 0) goto LAB_1442e4e7f;
    local_500 = lVar11;
    FUN_145825ecc();
    if ((longlong)(int)uStack_4d0 != 0) {
      local_508 = local_4d8 + (int)uStack_4d0;
      local_4f8 = local_500 + 0x540;
      local_4f0 = (longlong *)(param_1 + 0x310);
      local_518 = (longlong *)(lVar15 + 0x10);
      plVar9 = local_4d8;
      do {
        lVar11 = *plVar9;
        if ((lVar11 != 0) &&
           ((DAT_14c872bf2 != '\x01' || (cVar6 = FUN_148ee9368(lVar11), cVar6 != '\0')))) {
          uVar7 = (uint)local_410;
          local_418 = 0;
          local_410 = CONCAT44(0xffffffff,uVar7 & 0xffffff00);
          local_510 = plVar9;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
            DAT_14c844840 = (longlong *)FUN_14001cc68(0x30);
            DAT_14c844840[1] = 0;
            *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
            DAT_14c844840[2] = -1;
            DAT_14c844840[3] = 0;
            DAT_14c844840[4] = 0;
            DAT_14c844840[5] = 0;
            if (DAT_14c844840 != (longlong *)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
          }
          local_408 = DAT_14c844840;
          if (DAT_14c844840 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
              UNLOCK();
            }
            else {
              (**(code **)(*DAT_14c844840 + 8))();
            }
          }
          local_400 = 0;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
            DAT_14c844840 = (longlong *)FUN_14001cc68(0x30);
            DAT_14c844840[1] = 0;
            *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
            DAT_14c844840[2] = -1;
            DAT_14c844840[3] = 0;
            DAT_14c844840[4] = 0;
            DAT_14c844840[5] = 0;
            if (DAT_14c844840 != (longlong *)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
          }
          local_3f8 = DAT_14c844840;
          if (DAT_14c844840 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
              UNLOCK();
            }
            else {
              (**(code **)(*DAT_14c844840 + 8))();
            }
          }
          local_3f0 = 0;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
            DAT_14c844840 = (longlong *)FUN_14001cc68(0x30);
            DAT_14c844840[1] = 0;
            *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
            DAT_14c844840[2] = -1;
            DAT_14c844840[3] = 0;
            DAT_14c844840[4] = 0;
            DAT_14c844840[5] = 0;
            if (DAT_14c844840 != (longlong *)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
          }
          local_3e8 = DAT_14c844840;
          if (DAT_14c844840 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
              UNLOCK();
            }
            else {
              (**(code **)(*DAT_14c844840 + 8))();
            }
          }
          local_3e0 = 0;
          FUN_140056680(local_3d8,&DAT_149dfb77a);
          FUN_140056680(local_3c8,&DAT_149dfb77a);
          local_3b8 = 0;
          uStack_3b0 = 0;
          local_3a8 = 0;
          uStack_3a0 = 0;
          local_398 = 0;
          local_390 = 0;
          uStack_388 = 0;
          local_380 = 0;
          uStack_378 = 0;
          local_370 = 0;
          puVar23 = *(undefined4 **)(lVar11 + 8);
          if (puVar23 == (undefined4 *)0x0) {
            puVar23 = &DAT_14c9485f0;
          }
          if (DAT_14c947fe0 == 0) {
            lVar12 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar12);
            DAT_14c947fe0 = lVar12;
          }
          FUN_140045924(DAT_14c947fe0,&local_118,puVar23,1);
          local_418 = CONCAT35(local_118._5_3_,(undefined5)local_118);
          FUN_1400021e4(&local_418,&local_118);
          uVar20 = (ulonglong)(iStack_110 - 1);
          if (iStack_110 == 0) {
            uVar20 = 0;
          }
          iVar18 = (int)uVar20;
          if (0 < iVar18) {
            uVar14 = 0;
            do {
              uVar1 = *(ushort *)(CONCAT35(local_118._5_3_,(undefined5)local_118) + uVar14 * 2);
              *(ushort *)(CONCAT35(local_118._5_3_,(undefined5)local_118) + uVar14 * 2) =
                   (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
              uVar14 = uVar14 + 1;
            } while (uVar20 != uVar14);
            iVar18 = iStack_110 + -1;
            if (iStack_110 == 0) {
              iVar18 = 0;
            }
          }
          lVar12 = CONCAT35(local_118._5_3_,(undefined5)local_118);
          FUN_1402980a2(local_3d8,lVar12,iVar18);
          puVar23 = *(undefined4 **)(lVar11 + 8);
          if (puVar23 == (undefined4 *)0x0) {
            puVar23 = &DAT_14c9485f0;
          }
          if (DAT_14c947fe0 == 0) {
            lVar13 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar13);
            DAT_14c947fe0 = lVar13;
          }
          FUN_140045924(DAT_14c947fe0,&local_4e8,puVar23,1);
          FUN_140b6da64(local_4c8,&local_4e8);
          FUN_140233b1a(&local_118,local_4c8);
          FUN_140008f88(&local_408,&local_118);
          if ((longlong *)CONCAT35(local_118._5_3_,(undefined5)local_118) != (longlong *)0x0) {
            (**(code **)(*(longlong *)CONCAT35(local_118._5_3_,(undefined5)local_118) + 0x10))();
          }
          if (local_4c8[0] != 0) {
            FUN_1400020a8();
          }
          puVar10 = (undefined8 *)FUN_140ea5e38(&local_390);
          *puVar10 = DAT_14cbdef50;
          puVar23 = *(undefined4 **)(lVar11 + 8);
          if (puVar23 == (undefined4 *)0x0) {
            puVar23 = &DAT_14c9485f0;
          }
          local_118._0_5_ = 0;
          local_118._5_3_ = 0;
          iStack_110 = 0;
          uStack_10c = 0;
          FUN_1400b2348(puVar23,&local_118,1);
          if (puVar10 + 1 == &local_118) {
            if (CONCAT35(local_118._5_3_,(undefined5)local_118) != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (puVar10[1] != 0) {
              FUN_1400020a8();
            }
            puVar10[1] = CONCAT35(local_118._5_3_,(undefined5)local_118);
            *(int *)(puVar10 + 2) = iStack_110;
            *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_10c;
          }
          local_108 = 0;
          local_100 = 0x646c63;
          local_f8 = 0;
          local_118._0_5_ = (undefined5)local_418;
          local_118._5_3_ = (undefined3)((ulonglong)local_418 >> 0x28);
          iStack_110 = *(int *)(lVar11 + 0xa8);
          uStack_10c = CONCAT31(uStack_10c._1_3_,*(char *)(lVar11 + 0xac));
          if (*(longlong *)(lVar11 + 0xb0) != 0 || *(int *)(lVar11 + 0xb8) != 0x646c63) {
            local_108 = *(longlong *)(lVar11 + 0xb0);
            local_100 = *(int *)(lVar11 + 0xb8);
          }
          if ((*(char *)(lVar11 + 0xac) != '\0') &&
             (lVar11 = FUN_141563480(&local_108), lVar11 != 0)) {
            FUN_1402980a2(&local_3a8,lVar12,iVar18);
            FUN_1400021e4(lVar11 + 0x38,&local_4e8);
            puVar4 = local_4e8;
            uVar7 = (int)uStack_4e0 - 1;
            if ((int)uStack_4e0 == 0) {
              uVar7 = 0;
            }
            if (0 < (int)uVar7) {
              uVar20 = 0;
              do {
                local_4e8[uVar20] =
                     (ushort)((ushort)local_4e8[uVar20] - 0x41 < 0x1a) * 0x20 + local_4e8[uVar20];
                uVar20 = uVar20 + 1;
              } while (uVar7 != uVar20);
            }
            puVar25 = local_4e8;
            if ((int)uStack_4e0 == 0) {
              puVar25 = &DAT_149dfb77a;
            }
            local_4e8 = (undefined2 *)0x0;
            uStack_4e0 = 0;
            FUN_140002266(local_4c8,L"profile.dlc.%s",puVar25);
            FUN_140d07d58(local_4f8,&local_3a8,local_4c8);
            if (local_4c8[0] != 0) {
              FUN_1400020a8();
            }
            if (puVar4 != (undefined2 *)0x0) {
              FUN_1400020a8(puVar4);
            }
            if (local_4e8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_140714e1e(local_4f8,&local_3a8,*(undefined4 *)(param_1 + 0x208));
          }
          iVar18 = *(int *)(param_1 + 0x318);
          lVar11 = (longlong)iVar18;
          *(uint *)(param_1 + 0x318) = iVar18 + 1U;
          if (*(uint *)(param_1 + 0x31c) < iVar18 + 1U) {
            FUN_1466564c8(local_4f0,iVar18);
          }
          lVar13 = *local_4f0;
          *(ulonglong *)(lVar13 + 5 + lVar11 * 0x28) =
               CONCAT17((undefined1)uStack_10c,CONCAT43(iStack_110,local_118._5_3_));
          *(ulonglong *)(lVar13 + lVar11 * 0x28) = CONCAT35(local_118._5_3_,(undefined5)local_118);
          *(longlong *)(lVar13 + 0x10 + lVar11 * 0x28) = local_108;
          *(int *)(lVar13 + 0x18 + lVar11 * 0x28) = local_100;
          *(undefined8 *)(lVar13 + 0x20 + lVar11 * 0x28) = 0;
          iVar18 = *(int *)(lVar15 + 0x18);
          *(uint *)(lVar15 + 0x18) = iVar18 + 1U;
          if (*(uint *)(lVar15 + 0x1c) < iVar18 + 1U) {
            FUN_1407cce00(local_518,iVar18);
          }
          FUN_140716340((longlong)iVar18 * 0xb0 + *local_518);
          if (lVar12 != 0) {
            FUN_1400020a8(lVar12);
          }
          FUN_140716244(&local_418);
          plVar9 = local_510;
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != local_508);
    }
    iVar18 = *(int *)(lVar15 + 0x18);
    if (1 < (longlong)iVar18) {
      lVar11 = *(longlong *)(lVar15 + 0x10);
      memset(&local_408,0,0x2f0);
      local_410 = (longlong)iVar18 * 0xb0 + lVar11 + -0xb0;
      local_418 = lVar11;
      fVar29 = logf((float)iVar18);
      local_408 = (longlong *)CONCAT44(local_408._4_4_,(int)(longlong)(fVar29 + fVar29));
      plVar9 = &local_418;
      do {
        _Src_00 = (longlong *)*plVar9;
        plVar22 = (longlong *)plVar9[1];
        iVar18 = (int)plVar9[2];
        iVar8 = (int)((ulonglong)((longlong)plVar22 - (longlong)_Src_00) >> 4) * -0x45d1745d;
        plVar21 = (longlong *)(ulonglong)(iVar8 + 1);
        local_518 = plVar9;
        if (iVar18 != 0) {
LAB_1442e5981:
          local_510 = (longlong *)CONCAT44(local_510._4_4_,iVar18);
          local_508 = plVar22;
          if (8 < (int)(uint)plVar21) {
            memcpy(&local_118,_Src_00 + (ulonglong)((uint)plVar21 >> 1) * 0x16,0xb0);
            memcpy(_Src_00 + (ulonglong)((uint)plVar21 >> 1) * 0x16,_Src_00,0xb0);
            memcpy(_Src_00,&local_118,0xb0);
            plVar9 = plVar22 + 0x16;
            plVar21 = _Src_00;
LAB_1442e59dc:
            plVar21 = plVar21 + 0x16;
            if (plVar21 <= plVar22) goto code_r0x0001442e59ec;
            goto LAB_1442e5aa4;
          }
          for (; plVar21 = _Src_00, plVar9 = _Src_00, _Src_00 < plVar22; plVar22 = plVar22 + -0x16)
          {
            while (plVar9 = plVar9 + 0x16, plVar9 <= plVar22) {
              FUN_140716340(&local_118,plVar21);
              if ((longlong)*(int *)(param_1 + 0x318) != 0) {
                plVar24 = *(longlong **)(param_1 + 0x310);
                lVar11 = (longlong)*(int *)(param_1 + 0x318) * 0x28;
                do {
                  if (*plVar24 == CONCAT35(local_118._5_3_,(undefined5)local_118))
                  goto LAB_1442e61fd;
                  plVar24 = plVar24 + 5;
                  lVar11 = lVar11 + -0x28;
                } while (lVar11 != 0);
              }
              plVar24 = (longlong *)0x0;
LAB_1442e61fd:
              FUN_140716244(&local_118);
              FUN_140716340(local_4c8,plVar9);
              if ((longlong)*(int *)(param_1 + 0x318) != 0) {
                plVar17 = *(longlong **)(param_1 + 0x310);
                lVar11 = (longlong)*(int *)(param_1 + 0x318) * 0x28;
                do {
                  if (*plVar17 == local_4c8[0]) goto LAB_1442e6243;
                  plVar17 = plVar17 + 5;
                  lVar11 = lVar11 + -0x28;
                } while (lVar11 != 0);
              }
              plVar17 = (longlong *)0x0;
LAB_1442e6243:
              FUN_140716244(local_4c8);
              if ((plVar24 != (longlong *)0x0 && plVar17 != (longlong *)0x0) &&
                 ((int)plVar24[1] < (int)plVar17[1])) {
                plVar21 = plVar9;
              }
            }
            memcpy(&local_118,plVar21,0xb0);
            memcpy(plVar21,plVar22,0xb0);
            memcpy(plVar22,&local_118,0xb0);
          }
          goto LAB_1442e62d2;
        }
LAB_1442e5c8c:
        if ((int)plVar21 != 0) {
          uVar7 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
          local_510 = plVar21;
          do {
            plVar9 = (longlong *)(ulonglong)uVar7;
            uVar26 = uVar7 * 2 + 1;
            local_508 = plVar9;
            if ((int)uVar26 < (int)plVar21) {
              do {
                uVar27 = uVar7 * 2 + 2;
                uVar7 = uVar26;
                if ((int)uVar27 < (int)plVar21) {
                  FUN_140716340(&local_118,_Src_00 + (longlong)(int)uVar27 * 0x16);
                  if ((longlong)*(int *)(param_1 + 0x318) != 0) {
                    plVar22 = *(longlong **)(param_1 + 0x310);
                    lVar11 = (longlong)*(int *)(param_1 + 0x318) * 0x28;
                    do {
                      if (*plVar22 == CONCAT35(local_118._5_3_,(undefined5)local_118))
                      goto LAB_1442e5d21;
                      plVar22 = plVar22 + 5;
                      lVar11 = lVar11 + -0x28;
                    } while (lVar11 != 0);
                  }
                  plVar22 = (longlong *)0x0;
LAB_1442e5d21:
                  FUN_140716244(&local_118);
                  FUN_140716340(local_4c8,_Src_00 + (longlong)(int)uVar26 * 0x16);
                  if ((longlong)*(int *)(param_1 + 0x318) != 0) {
                    plVar24 = *(longlong **)(param_1 + 0x310);
                    lVar11 = (longlong)*(int *)(param_1 + 0x318) * 0x28;
                    do {
                      if (*plVar24 == local_4c8[0]) goto LAB_1442e5d74;
                      plVar24 = plVar24 + 5;
                      lVar11 = lVar11 + -0x28;
                    } while (lVar11 != 0);
                  }
                  plVar24 = (longlong *)0x0;
LAB_1442e5d74:
                  FUN_140716244(local_4c8);
                  plVar21 = local_510;
                  uVar7 = uVar27;
                  if ((plVar22 != (longlong *)0x0 && plVar24 != (longlong *)0x0) &&
                     ((int)plVar22[1] < (int)plVar24[1])) {
                    uVar7 = uVar26;
                  }
                }
                plVar9 = _Src_00 + (longlong)(int)plVar9 * 0x16;
                FUN_140716340(&local_118,plVar9);
                if ((longlong)*(int *)(param_1 + 0x318) != 0) {
                  plVar22 = *(longlong **)(param_1 + 0x310);
                  lVar11 = (longlong)*(int *)(param_1 + 0x318) * 0x28;
                  do {
                    if (*plVar22 == CONCAT35(local_118._5_3_,(undefined5)local_118))
                    goto LAB_1442e5def;
                    plVar22 = plVar22 + 5;
                    lVar11 = lVar11 + -0x28;
                  } while (lVar11 != 0);
                }
                plVar22 = (longlong *)0x0;
LAB_1442e5def:
                plVar24 = _Src_00 + (longlong)(int)uVar7 * 0x16;
                FUN_140716244(&local_118);
                FUN_140716340(local_4c8,plVar24);
                if ((longlong)*(int *)(param_1 + 0x318) != 0) {
                  plVar17 = *(longlong **)(param_1 + 0x310);
                  lVar11 = (longlong)*(int *)(param_1 + 0x318) * 0x28;
                  do {
                    if (*plVar17 == local_4c8[0]) goto LAB_1442e5e42;
                    plVar17 = plVar17 + 5;
                    lVar11 = lVar11 + -0x28;
                  } while (lVar11 != 0);
                }
                plVar17 = (longlong *)0x0;
LAB_1442e5e42:
                FUN_140716244(local_4c8);
                if (((plVar22 == (longlong *)0x0) || (plVar17 == (longlong *)0x0)) ||
                   ((int)plVar17[1] <= (int)plVar22[1])) break;
                memcpy(&local_118,plVar9,0xb0);
                memcpy(plVar9,plVar24,0xb0);
                memcpy(plVar24,&local_118,0xb0);
                uVar26 = uVar7 * 2 + 1;
                plVar9 = (longlong *)(ulonglong)uVar7;
              } while ((int)uVar26 < (int)plVar21);
            }
            uVar7 = (int)local_508 - 1;
          } while ((int)local_508 != 0);
          if (1 < (int)plVar21) {
            plVar9 = (longlong *)(((ulonglong)plVar21 & 0xffffffff) - 1);
            memcpy(&local_118,_Src_00,0xb0);
            memcpy(_Src_00,_Src_00 + (longlong)plVar9 * 0x16,0xb0);
            memcpy(_Src_00 + (longlong)plVar9 * 0x16,&local_118,0xb0);
            if ((int)plVar21 != 2) {
              do {
                iVar8 = 0;
                iVar18 = 1;
                local_510 = plVar9;
                iVar19 = 0;
                do {
                  iVar8 = iVar8 + 2;
                  iVar28 = iVar18;
                  if ((longlong)iVar8 < (longlong)plVar9) {
                    FUN_140716340(&local_118,_Src_00 + (longlong)iVar8 * 0x16);
                    if ((longlong)*(int *)(param_1 + 0x318) != 0) {
                      plVar9 = *(longlong **)(param_1 + 0x310);
                      lVar11 = (longlong)*(int *)(param_1 + 0x318) * 0x28;
                      do {
                        if (*plVar9 == CONCAT35(local_118._5_3_,(undefined5)local_118))
                        goto LAB_1442e5f97;
                        plVar9 = plVar9 + 5;
                        lVar11 = lVar11 + -0x28;
                      } while (lVar11 != 0);
                    }
                    plVar9 = (longlong *)0x0;
LAB_1442e5f97:
                    FUN_140716244(&local_118);
                    FUN_140716340(local_4c8,_Src_00 + (longlong)iVar18 * 0x16);
                    if ((longlong)*(int *)(param_1 + 0x318) != 0) {
                      plVar22 = *(longlong **)(param_1 + 0x310);
                      lVar11 = (longlong)*(int *)(param_1 + 0x318) * 0x28;
                      do {
                        if (*plVar22 == local_4c8[0]) goto LAB_1442e5fea;
                        plVar22 = plVar22 + 5;
                        lVar11 = lVar11 + -0x28;
                      } while (lVar11 != 0);
                    }
                    plVar22 = (longlong *)0x0;
LAB_1442e5fea:
                    FUN_140716244(local_4c8);
                    iVar28 = iVar8;
                    if ((plVar9 != (longlong *)0x0 && plVar22 != (longlong *)0x0) &&
                       ((int)plVar9[1] < (int)plVar22[1])) {
                      iVar28 = iVar18;
                    }
                  }
                  plVar22 = _Src_00 + (longlong)iVar19 * 0x16;
                  FUN_140716340(&local_118,plVar22);
                  if ((longlong)*(int *)(param_1 + 0x318) != 0) {
                    plVar21 = *(longlong **)(param_1 + 0x310);
                    lVar11 = (longlong)*(int *)(param_1 + 0x318) * 0x28;
                    do {
                      if (*plVar21 == CONCAT35(local_118._5_3_,(undefined5)local_118))
                      goto LAB_1442e6062;
                      plVar21 = plVar21 + 5;
                      lVar11 = lVar11 + -0x28;
                    } while (lVar11 != 0);
                  }
                  plVar21 = (longlong *)0x0;
LAB_1442e6062:
                  plVar24 = _Src_00 + (longlong)iVar28 * 0x16;
                  FUN_140716244(&local_118);
                  FUN_140716340(local_4c8,plVar24);
                  if ((longlong)*(int *)(param_1 + 0x318) != 0) {
                    plVar17 = *(longlong **)(param_1 + 0x310);
                    lVar11 = (longlong)*(int *)(param_1 + 0x318) * 0x28;
                    do {
                      if (*plVar17 == local_4c8[0]) goto LAB_1442e60b5;
                      plVar17 = plVar17 + 5;
                      lVar11 = lVar11 + -0x28;
                    } while (lVar11 != 0);
                  }
                  plVar17 = (longlong *)0x0;
LAB_1442e60b5:
                  FUN_140716244(local_4c8);
                  plVar9 = local_510;
                  if (((plVar21 == (longlong *)0x0) || (plVar17 == (longlong *)0x0)) ||
                     ((int)plVar17[1] <= (int)plVar21[1])) break;
                  memcpy(&local_118,plVar22,0xb0);
                  memcpy(plVar22,plVar24,0xb0);
                  memcpy(plVar24,&local_118,0xb0);
                  iVar8 = iVar28 * 2;
                  iVar18 = iVar28 * 2 + 1;
                  iVar19 = iVar28;
                } while ((longlong)iVar18 < (longlong)plVar9);
                memcpy(&local_118,_Src_00,0xb0);
                memcpy(_Src_00,_Src_00 + ((longlong)plVar9 + -1) * 0x16,0xb0);
                memcpy(_Src_00 + ((longlong)plVar9 + -1) * 0x16,&local_118,0xb0);
                bVar3 = (longlong *)0x2 < plVar9;
                plVar9 = (longlong *)((longlong)plVar9 + -1);
              } while (bVar3);
            }
          }
        }
LAB_1442e62d2:
        plVar9 = local_518 + -3;
      } while (&local_418 <= plVar9);
    }
    FUN_140715f5a(param_1);
    lVar11 = local_500;
    if (local_4d8 != (longlong *)0x0) {
      FUN_1400020a8();
      lVar11 = local_500;
    }
  }
  else {
    FUN_1408efef4(param_1,1);
  }
  puVar2 = *(ushort **)(lVar11 + 0x80);
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar11 + 0x78) & 0x3f));
  }
LAB_1442e4e7f:
  if ((local_60 ^ (ulonglong)auStack_538) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001442e59ec:
  FUN_140716340(&local_118,_Src_00);
  if ((longlong)*(int *)(param_1 + 0x318) != 0) {
    plVar24 = *(longlong **)(param_1 + 0x310);
    lVar11 = (longlong)*(int *)(param_1 + 0x318) * 0x28;
    do {
      if (*plVar24 == CONCAT35(local_118._5_3_,(undefined5)local_118)) goto LAB_1442e5a2b;
      plVar24 = plVar24 + 5;
      lVar11 = lVar11 + -0x28;
    } while (lVar11 != 0);
  }
  plVar24 = (longlong *)0x0;
LAB_1442e5a2b:
  FUN_140716244(&local_118);
  FUN_140716340(local_4c8,plVar21);
  if ((longlong)*(int *)(param_1 + 0x318) != 0) {
    plVar17 = *(longlong **)(param_1 + 0x310);
    lVar11 = (longlong)*(int *)(param_1 + 0x318) * 0x28;
    do {
      if (*plVar17 == local_4c8[0]) goto LAB_1442e5a72;
      plVar17 = plVar17 + 5;
      lVar11 = lVar11 + -0x28;
    } while (lVar11 != 0);
  }
  plVar17 = (longlong *)0x0;
LAB_1442e5a72:
  FUN_140716244(local_4c8);
  if ((plVar17 == (longlong *)0x0 || plVar24 == (longlong *)0x0) ||
     ((int)plVar17[1] <= (int)plVar24[1])) goto LAB_1442e59dc;
LAB_1442e5aa4:
  do {
    plVar24 = plVar9;
    plVar9 = plVar24 + -0x16;
    if (plVar9 <= _Src_00) break;
    FUN_140716340(&local_118,plVar9);
    if ((longlong)*(int *)(param_1 + 0x318) != 0) {
      plVar17 = *(longlong **)(param_1 + 0x310);
      lVar11 = (longlong)*(int *)(param_1 + 0x318) * 0x28;
      do {
        if (*plVar17 == CONCAT35(local_118._5_3_,(undefined5)local_118)) goto LAB_1442e5af0;
        plVar17 = plVar17 + 5;
        lVar11 = lVar11 + -0x28;
      } while (lVar11 != 0);
    }
    plVar17 = (longlong *)0x0;
LAB_1442e5af0:
    FUN_140716244(&local_118);
    FUN_140716340(local_4c8,_Src_00);
    if ((longlong)*(int *)(param_1 + 0x318) != 0) {
      plVar16 = *(longlong **)(param_1 + 0x310);
      lVar11 = (longlong)*(int *)(param_1 + 0x318) * 0x28;
      do {
        if (*plVar16 == local_4c8[0]) goto LAB_1442e5b36;
        plVar16 = plVar16 + 5;
        lVar11 = lVar11 + -0x28;
      } while (lVar11 != 0);
    }
    plVar16 = (longlong *)0x0;
LAB_1442e5b36:
    FUN_140716244(local_4c8);
  } while ((plVar16 == (longlong *)0x0 || plVar17 == (longlong *)0x0) ||
          ((int)plVar16[1] <= (int)plVar17[1]));
  if (plVar21 <= plVar9) {
    memcpy(&local_118,plVar21,0xb0);
    memcpy(plVar21,plVar9,0xb0);
    memcpy(plVar9,&local_118,0xb0);
    goto LAB_1442e59dc;
  }
  memcpy(&local_118,_Src_00,0xb0);
  memcpy(_Src_00,plVar9,0xb0);
  memcpy(plVar9,&local_118,0xb0);
  iVar18 = (int)local_510 + -1;
  plVar24 = plVar24 + -0x2c;
  if ((longlong)plVar24 - (longlong)_Src_00 < (longlong)local_508 - (longlong)plVar21) {
    if (plVar21 < plVar22) {
      *local_518 = (longlong)plVar21;
      local_518[1] = (longlong)plVar22;
      *(int *)(local_518 + 2) = iVar18;
      local_518 = local_518 + 3;
    }
    if (plVar9 <= _Src_00 + 0x16) goto LAB_1442e62d2;
  }
  else {
    if (_Src_00 + 0x16 < plVar9) {
      *local_518 = (longlong)_Src_00;
      local_518[1] = (longlong)plVar24;
      *(int *)(local_518 + 2) = iVar18;
      local_518 = local_518 + 3;
    }
    plVar24 = plVar22;
    _Src_00 = plVar21;
    if (plVar22 <= plVar21) goto LAB_1442e62d2;
  }
  iVar8 = (int)((ulonglong)((longlong)plVar24 - (longlong)_Src_00) >> 4) * -0x45d1745d;
  plVar21 = (longlong *)(ulonglong)(iVar8 + 1);
  plVar22 = plVar24;
  if (iVar18 == 0) goto LAB_1442e5c8c;
  goto LAB_1442e5981;
}



// FUNCTION 1442e630e FUN_1442e630e body=1137 status=ok
// SIG undefined FUN_1442e630e(void)

void FUN_1442e630e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar7;
  void **ppvVar8;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong local_c8 [2];
  void *local_b8;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  longlong *local_a0;
  ulonglong *local_98;
  undefined8 *local_90;
  longlong *local_88;
  undefined4 local_80;
  ulonglong local_78 [2];
  undefined8 local_68;
  ulonglong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar2 = (longlong *)(param_1 + 0x1c0);
  iVar3 = *(int *)(param_1 + 0x1cc);
  FUN_145910ef2(*(undefined8 *)(param_1 + 0x1c0),*(undefined4 *)(param_1 + 0x1c8));
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  if ((iVar3 < 0) && (*(int *)(param_1 + 0x1cc) != 0)) {
    FUN_148eb688e(plVar2);
  }
  FUN_1400b22c2(local_c8,&DAT_149e02088);
  FUN_1400b22c2(&local_b8,&DAT_149e02088);
  FUN_14020fad6(local_c8,L"action_ui_cursor_click");
  if (*(char *)(param_1 + 0x529) == '\x01') {
    local_78[0] = 0;
    local_78[1] = 0;
    local_68 = (longlong *)((ulonglong)local_68._4_4_ << 0x20);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(local_78,"SelectText",0);
    FUN_1410d1eba(&local_88,local_78);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    plVar7 = local_88;
    if (*(code **)(*local_88 + 0x50) != FUN_144828418) {
      plVar7 = (longlong *)(**(code **)(*local_88 + 0x50))(local_88);
    }
    FUN_1447a1fc0(plVar7);
    pcVar4 = *(code **)(*local_88 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      ppvVar8 = (void **)(local_88[5] + 8);
      if (local_88[5] == 0) {
        ppvVar8 = (void **)(local_88 + 3);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      ppvVar8 = (void **)(local_88 + 2);
    }
    else {
      ppvVar8 = (void **)(*pcVar4)(local_88);
    }
    if (&local_b8 != ppvVar8) {
      iVar3 = *(int *)(ppvVar8 + 1);
      pvVar5 = *ppvVar8;
      local_b0 = iVar3;
      if (iVar3 == 0 && local_ac == 0) {
        local_ac = 0;
      }
      else {
        FUN_1446dd670(&local_b8,iVar3);
        if (iVar3 != 0) {
          memcpy(local_b8,pvVar5,(longlong)iVar3 * 2);
        }
      }
    }
    if (local_88 == (longlong *)0x0) goto LAB_1442e66b4;
    lVar6 = *local_88;
  }
  else {
    local_78[0] = 0;
    local_78[1] = 0;
    local_68 = (longlong *)((ulonglong)local_68._4_4_ << 0x20);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(local_78,"StorePromptText",0);
    FUN_1410d1eba(local_d8,local_78);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    FUN_14023409e(&local_f8,local_d8,1);
    local_90 = &uStack_58;
    local_78[0] = local_78[0] & 0xffffffff00000000;
    local_78[1] = 0;
    local_68 = (longlong *)0x0;
    local_60 = local_60 & 0xffffffff00000000;
    local_98 = local_78;
    FUN_14010d304(&local_88);
    local_a8 = local_f8;
    local_a0 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_e8,&local_a8,&local_88);
    FUN_14007f2db(local_88,local_80);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_f0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f0 + 0x10))(local_f0);
        }
      }
    }
    plVar7 = local_e8[0];
    if (*(code **)(*local_e8[0] + 0x50) != FUN_144828418) {
      plVar7 = (longlong *)(**(code **)(*local_e8[0] + 0x50))(local_e8[0]);
    }
    FUN_1447a1fc0(plVar7);
    pcVar4 = *(code **)(*local_e8[0] + 0x28);
    if (pcVar4 == FUN_14482841c) {
      ppvVar8 = (void **)(local_e8[0][5] + 8);
      if (local_e8[0][5] == 0) {
        ppvVar8 = (void **)(local_e8[0] + 3);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      ppvVar8 = (void **)(local_e8[0] + 2);
    }
    else {
      ppvVar8 = (void **)(*pcVar4)(local_e8[0]);
    }
    if (&local_b8 != ppvVar8) {
      iVar3 = *(int *)(ppvVar8 + 1);
      pvVar5 = *ppvVar8;
      local_b0 = iVar3;
      if (iVar3 == 0 && local_ac == 0) {
        local_ac = 0;
      }
      else {
        FUN_1446dd670(&local_b8,iVar3);
        if (iVar3 != 0) {
          memcpy(local_b8,pvVar5,(longlong)iVar3 * 2);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))(local_e8[0]);
    }
    if (local_d8[0] == (longlong *)0x0) goto LAB_1442e66b4;
    lVar6 = *local_d8[0];
    local_88 = local_d8[0];
  }
  (**(code **)(lVar6 + 0x10))(local_88);
LAB_1442e66b4:
  iVar3 = *(int *)(param_1 + 0x1c8);
  *(uint *)(param_1 + 0x1c8) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1cc) < iVar3 + 1U) {
    FUN_14665655c(plVar2,iVar3);
  }
  FUN_146606406((longlong)iVar3 * 0x20 + *plVar2,local_c8);
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442e6780 FUN_1442e6780 body=75 status=ok
// SIG undefined FUN_1442e6780(void)

void FUN_1442e6780(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ushort *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x1a4) == '\x01')) {
    FUN_145a61fdc((char)param_1,lVar1 + 0xf0,param_2);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 1442e67cc FUN_1442e67cc body=528 status=ok
// SIG undefined FUN_1442e67cc(void)

void FUN_1442e67cc(longlong param_1)

{
  uint uVar1;
  ushort *puVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  
  lVar10 = *(longlong *)(param_1 + 0x288);
  if (lVar10 != 0) {
    if (*(char *)(lVar10 + 0x1a3) == '\0') {
      if (((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1))
         && ((int)uVar1 < DAT_14c9647dc)) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == *(int *)(param_1 + 0x34))) &&
           (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))) {
          lVar8 = FUN_140391a3c();
          if (lVar8 != 0) {
            puVar11 = (undefined8 *)FUN_14001cc68(8,0x10);
            *puVar11 = &PTR_FUN_14b9ca9d0;
            FUN_14039144e(lVar8,puVar11);
          }
        }
      }
    }
    else if (*(char *)(lVar10 + 0x1a0) == '\x01') {
      *(undefined1 *)(lVar10 + 0x1a4) = 1;
    }
    plVar7 = (longlong *)FUN_1415b95c4(param_1);
    if (plVar7 != (longlong *)0x0) {
      lVar8 = FUN_1403ca142();
      if ((*(int *)(lVar8 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
          lVar8 + 0x30)) {
        bVar4 = (**(code **)(*plVar7 + 0x498))(plVar7);
        *(bool *)(lVar10 + 0x1a1) = bVar4 < 6;
        lVar8 = plVar7[9];
        uVar6 = 1;
        if (lVar8 != 0) {
          lVar9 = FUN_140b6d0be();
          if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
            cVar5 = FUN_143f37826(lVar8);
            if (cVar5 != '\0') {
              uVar6 = FUN_14127c006(lVar8);
            }
          }
        }
        *(undefined1 *)(param_1 + 0x322) = uVar6;
      }
    }
    puVar2 = *(ushort **)(lVar10 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar10 + 0x78) & 0x3f));
    }
  }
  if (((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar7 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == *(int *)(param_1 + 0x34))) &&
       (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))) {
      lVar10 = FUN_140391a3c();
      if (lVar10 != 0) {
        puVar11 = (undefined8 *)FUN_14001cc68(0x30);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        puVar11[1] = 0;
        *(undefined4 *)(puVar11 + 2) = 0;
        puVar11[3] = 0;
        *puVar11 = &PTR_FUN_14b9ca9e0;
        puVar11[4] = uVar3;
        *(undefined1 *)(puVar11 + 5) = 1;
        FUN_14039144e(lVar10,puVar11);
      }
    }
  }
  FUN_14588cd9e(param_1);
  return;
}



// FUNCTION 1442e69dc FUN_1442e69dc body=3665 status=ok
// SIG undefined FUN_1442e69dc(void)

void FUN_1442e69dc(longlong param_1,longlong param_2,longlong param_3)

{
  void **ppvVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  void *pvVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  void **ppvVar12;
  longlong *plVar13;
  void **ppvVar14;
  longlong *plVar15;
  char *pcVar16;
  longlong lVar17;
  undefined1 auStack_1a8 [40];
  longlong *local_180;
  longlong local_178;
  longlong local_170;
  longlong *local_168;
  undefined4 local_160;
  void *local_158;
  int local_150;
  int local_14c;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138 [2];
  longlong *local_128 [2];
  longlong local_118 [2];
  void *local_108;
  int local_100;
  int local_fc;
  longlong *local_f8;
  longlong *local_f0;
  void **local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  void *local_c0;
  ulonglong uStack_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined4 local_a4;
  void *local_a0;
  longlong *plStack_98;
  void *local_90;
  longlong *plStack_88;
  void *local_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined8 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_180 = (longlong *)(param_2 + 0x1c0);
  iVar3 = *(int *)(param_2 + 0x1cc);
  FUN_145910ef2(*(undefined8 *)(param_2 + 0x1c0),*(undefined4 *)(param_2 + 0x1c8));
  *(undefined4 *)(param_2 + 0x1c8) = 0;
  if ((iVar3 < 0) && (*(int *)(param_2 + 0x1cc) != 0)) {
    FUN_148eb688e(local_180);
  }
  local_178 = param_2;
  FUN_1400b22c2(local_118,&DAT_149e02088);
  FUN_1400b22c2(&local_108,&DAT_149e02088);
  FUN_14020fad6(local_118,L"action_ui_cursor_click");
  if (*(char *)(local_178 + 0x3c8) == '\x01') {
    local_d8 = (void *)0x0;
    uStack_d0 = 0;
    local_c8 = (longlong *)((ulonglong)local_c8._4_4_ << 0x20);
    local_c0 = (void *)0x0;
    uStack_b8 = 0;
    FUN_1446ddda2(&local_d8,"SelectText",0);
    FUN_1410d1eba(&local_168,&local_d8);
    if (local_c0 != (void *)0x0) {
      FUN_1400020a8();
    }
    plVar15 = local_168;
    plVar13 = local_168;
    if (*(code **)(*local_168 + 0x50) != FUN_144828418) {
      plVar13 = (longlong *)(**(code **)(*local_168 + 0x50))(local_168);
    }
    FUN_1447a1fc0(plVar13);
    pcVar4 = *(code **)(*plVar15 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      ppvVar14 = (void **)(plVar15[5] + 8);
      if (plVar15[5] == 0) {
        ppvVar14 = (void **)(plVar15 + 3);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      ppvVar14 = (void **)(plVar15 + 2);
    }
    else {
      ppvVar14 = (void **)(*pcVar4)(plVar15);
    }
    if (&local_108 != ppvVar14) {
      iVar3 = *(int *)(ppvVar14 + 1);
      pvVar5 = *ppvVar14;
      local_100 = iVar3;
      if (iVar3 == 0 && local_fc == 0) {
        local_fc = 0;
      }
      else {
        FUN_1446dd670(&local_108,iVar3);
        if (iVar3 != 0) {
          memcpy(local_108,pvVar5,(longlong)iVar3 * 2);
        }
      }
    }
    if (plVar15 == (longlong *)0x0) goto LAB_1442e6dd2;
    lVar10 = *plVar15;
    local_128[0] = plVar15;
  }
  else {
    local_d8 = (void *)0x0;
    uStack_d0 = 0;
    local_c8 = (longlong *)((ulonglong)local_c8._4_4_ << 0x20);
    local_c0 = (void *)0x0;
    uStack_b8 = 0;
    FUN_1446ddda2(&local_d8,"StorePromptText",0);
    FUN_1410d1eba(local_128,&local_d8);
    if (local_c0 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_14023409e(&local_148,local_128,1);
    uStack_e0 = &uStack_b8;
    local_d8 = (void *)((ulonglong)local_d8 & 0xffffffff00000000);
    uStack_d0 = 0;
    local_c8 = (longlong *)0x0;
    local_c0 = (void *)((ulonglong)local_c0 & 0xffffffff00000000);
    local_e8 = &local_d8;
    FUN_14010d304(&local_168);
    local_f8 = local_148;
    local_f0 = local_140;
    if (local_140 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_140 + 1) = (int)local_140[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_138,&local_f8,&local_168);
    FUN_14007f2db(local_168,local_160);
    if (local_168 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_140 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
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
    plVar15 = local_138[0];
    if (*(code **)(*local_138[0] + 0x50) != FUN_144828418) {
      plVar15 = (longlong *)(**(code **)(*local_138[0] + 0x50))(local_138[0]);
    }
    FUN_1447a1fc0(plVar15);
    pcVar4 = *(code **)(*local_138[0] + 0x28);
    if (pcVar4 == FUN_14482841c) {
      ppvVar14 = (void **)(local_138[0][5] + 8);
      if (local_138[0][5] == 0) {
        ppvVar14 = (void **)(local_138[0] + 3);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      ppvVar14 = (void **)(local_138[0] + 2);
    }
    else {
      ppvVar14 = (void **)(*pcVar4)(local_138[0]);
    }
    if (&local_108 != ppvVar14) {
      iVar3 = *(int *)(ppvVar14 + 1);
      pvVar5 = *ppvVar14;
      local_100 = iVar3;
      if (iVar3 == 0 && local_fc == 0) {
        local_fc = 0;
      }
      else {
        FUN_1446dd670(&local_108,iVar3);
        if (iVar3 != 0) {
          memcpy(local_108,pvVar5,(longlong)iVar3 * 2);
        }
      }
    }
    if (local_138[0] != (longlong *)0x0) {
      (**(code **)(*local_138[0] + 0x10))(local_138[0]);
    }
    if (local_128[0] == (longlong *)0x0) goto LAB_1442e6dd2;
    lVar10 = *local_128[0];
  }
  (**(code **)(lVar10 + 0x10))(local_128[0]);
LAB_1442e6dd2:
  lVar10 = local_178;
  iVar3 = *(int *)(local_178 + 0x1c8);
  *(uint *)(local_178 + 0x1c8) = iVar3 + 1U;
  if (*(uint *)(local_178 + 0x1cc) < iVar3 + 1U) {
    FUN_14665655c(local_180,iVar3);
  }
  FUN_146606406((longlong)iVar3 * 0x20 + *(longlong *)(lVar10 + 0x1c0),local_118);
  if (*(char *)(lVar10 + 0x1a3) == '\0') {
    if ((*(char *)(lVar10 + 0x1a0) == '\0') &&
       ((*(char *)(lVar10 + 0x5a8) != '\x01' ||
        (((*(int *)(param_3 + 600) != 0 && (*(int *)(param_3 + 0x25c) != 0)) &&
         (*(int *)(param_3 + 600) != DAT_14c948000)))))) {
      FUN_1400b22c2(&local_168,&DAT_149e02088);
      FUN_1400b22c2(&local_158,&DAT_149e02088);
      FUN_14020fad6(&local_168,L"action_ui_delete_character");
      local_d8 = (void *)0x0;
      uStack_d0 = 0;
      local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
      local_c0 = (void *)0x0;
      uStack_b8 = 0;
      FUN_1446ddda2(&local_d8,"DeleteSaveText",0);
      FUN_1410d1eba(&local_e8,&local_d8);
      if (local_c0 != (void *)0x0) {
        FUN_1400020a8();
      }
      ppvVar14 = local_e8;
      ppvVar12 = local_e8;
      if (*(code **)((longlong)*local_e8 + 0x50) != FUN_144828418) {
        ppvVar12 = (void **)(**(code **)((longlong)*local_e8 + 0x50))(local_e8);
      }
      FUN_1447a1fc0(ppvVar12);
      pcVar4 = *(code **)((longlong)*ppvVar14 + 0x28);
      if (pcVar4 == FUN_14482841c) {
        ppvVar12 = (void **)((longlong)ppvVar14[5] + 8);
        if (ppvVar14[5] == (void *)0x0) {
          ppvVar12 = ppvVar14 + 3;
        }
      }
      else if (pcVar4 == (code *)&LAB_14010c34c) {
        ppvVar12 = ppvVar14 + 2;
      }
      else {
        ppvVar12 = (void **)(*pcVar4)(ppvVar14);
      }
      if (&local_158 != ppvVar12) {
        iVar3 = *(int *)(ppvVar12 + 1);
        pvVar5 = *ppvVar12;
        local_150 = iVar3;
        if (iVar3 == 0 && local_14c == 0) {
          local_14c = 0;
        }
        else {
          FUN_1446dd670(&local_158,iVar3);
          if (iVar3 != 0) {
            memcpy(local_158,pvVar5,(longlong)iVar3 * 2);
          }
        }
      }
      iVar3 = *(int *)(local_178 + 0x1c8);
      *(uint *)(local_178 + 0x1c8) = iVar3 + 1U;
      if (*(uint *)(local_178 + 0x1cc) < iVar3 + 1U) {
        FUN_14665655c(local_180,iVar3);
      }
      FUN_146606406((longlong)iVar3 * 0x20 + *local_180,&local_168);
      if (ppvVar14 != (void **)0x0) {
        (**(code **)((longlong)*ppvVar14 + 0x10))(ppvVar14);
      }
      lVar10 = local_178;
      if (local_158 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_168 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    if (*(char *)(lVar10 + 0x5a8) == '\x01') {
      FUN_1400b22c2(&local_168,&DAT_149e02088);
      FUN_1400b22c2(&local_158,&DAT_149e02088);
      FUN_14020fad6(&local_168,L"action_ui_shift_character");
      if (((*(int *)(param_3 + 0x228) == 0) || (*(int *)(param_3 + 0x22c) == 0)) ||
         (*(int *)(param_3 + 0x228) == DAT_14c948000)) {
        pcVar16 = "UploadCloudText";
      }
      else {
        pcVar16 = "RemoveFromCloudText";
      }
      uStack_b8 = 0;
      local_c0 = (void *)0x0;
      local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
      uStack_d0 = 0;
      local_d8 = (void *)0x0;
      FUN_1446ddda2(&local_d8,pcVar16,0);
      FUN_1410d1eba(&local_e8,&local_d8);
      if (local_c0 != (void *)0x0) {
        FUN_1400020a8();
      }
      ppvVar14 = local_e8;
      ppvVar12 = local_e8;
      if (*(code **)((longlong)*local_e8 + 0x50) != FUN_144828418) {
        ppvVar12 = (void **)(**(code **)((longlong)*local_e8 + 0x50))(local_e8);
      }
      FUN_1447a1fc0(ppvVar12);
      pcVar4 = *(code **)((longlong)*ppvVar14 + 0x28);
      if (pcVar4 == FUN_14482841c) {
        ppvVar12 = (void **)((longlong)ppvVar14[5] + 8);
        if (ppvVar14[5] == (void *)0x0) {
          ppvVar12 = ppvVar14 + 3;
        }
      }
      else if (pcVar4 == (code *)&LAB_14010c34c) {
        ppvVar12 = ppvVar14 + 2;
      }
      else {
        ppvVar12 = (void **)(*pcVar4)(ppvVar14);
      }
      if (&local_158 != ppvVar12) {
        iVar3 = *(int *)(ppvVar12 + 1);
        pvVar5 = *ppvVar12;
        local_150 = iVar3;
        if (iVar3 == 0 && local_14c == 0) {
          local_14c = 0;
        }
        else {
          FUN_1446dd670(&local_158,iVar3);
          if (iVar3 != 0) {
            memcpy(local_158,pvVar5,(longlong)iVar3 * 2);
          }
        }
      }
      iVar3 = *(int *)(local_178 + 0x1c8);
      *(uint *)(local_178 + 0x1c8) = iVar3 + 1U;
      if (*(uint *)(local_178 + 0x1cc) < iVar3 + 1U) {
        FUN_14665655c(local_180,iVar3);
      }
      FUN_146606406((longlong)iVar3 * 0x20 + *local_180,&local_168);
      if (ppvVar14 != (void **)0x0) {
        (**(code **)((longlong)*ppvVar14 + 0x10))(ppvVar14);
      }
      if (local_158 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_168 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (((*(int *)(param_1 + 0x34) != 0) && (uVar9 = *(uint *)(param_1 + 0x30), -1 < (int)uVar9)) &&
     (((int)uVar9 < DAT_14c9647dc &&
      ((((plVar15 = (longlong *)
                    ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
         plVar15 != (longlong *)0x0 && ((int)plVar15[2] == *(int *)(param_1 + 0x34))) &&
        ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)) &&
       ((*plVar15 != 0 && (lVar10 = FUN_14101baae(), lVar10 != 0)))))))) {
    lVar11 = FUN_14030d4a0();
    if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8
         ) == lVar11 + 0x30)) {
      local_e8 = (void **)0x0;
      uStack_e0 = (ulonglong *)0x0;
      local_170 = lVar10;
      if ((longlong)*(int *)(param_3 + 0x150) != 0) {
        ppvVar14 = *(void ***)(param_3 + 0x148);
        lVar10 = (longlong)*(int *)(param_3 + 0x150) * 0x78;
        do {
          local_d8 = (void *)0x0;
          uStack_d0 = 0;
          uVar6 = (ulonglong)local_c8 >> 0x20;
          local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
          if (ppvVar14 == &local_d8) {
            local_c8 = (longlong *)CONCAT44((int)uVar6,*(undefined4 *)(ppvVar14 + 2));
            local_c0 = (void *)0x0;
            uStack_b8 = 0;
          }
          else {
            uVar9 = *(uint *)(ppvVar14 + 1);
            pvVar5 = *ppvVar14;
            uStack_d0 = (ulonglong)uVar9;
            if ((longlong)(int)uVar9 != 0) {
              FUN_1446dd670(&local_d8,uVar9,0);
              memcpy(local_d8,pvVar5,(longlong)(int)uVar9 * 2);
            }
            local_c8 = (longlong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(ppvVar14 + 2));
            local_c0 = (void *)0x0;
            local_b0 = 0;
            uVar9 = *(uint *)(ppvVar14 + 4);
            pvVar5 = ppvVar14[3];
            uStack_b8 = (ulonglong)uVar9;
            if ((longlong)(int)uVar9 != 0) {
              FUN_1446dd670(&local_c0,uVar9,0);
              memcpy(local_c0,pvVar5,(longlong)(int)uVar9 * 2);
            }
          }
          local_b0 = *(undefined4 *)(ppvVar14 + 5);
          local_a8 = *(undefined1 *)(ppvVar14 + 6);
          local_a4 = *(undefined4 *)((longlong)ppvVar14 + 0x34);
          uStack_70 = 0;
          uStack_6e = 0;
          uStack_6c = 0;
          local_80 = (void *)0x0;
          iStack_78 = 0;
          uStack_74 = 0;
          local_90 = (void *)0x0;
          plStack_88 = (longlong *)0x0;
          local_a0 = (void *)0x0;
          plStack_98 = (longlong *)0x0;
          FUN_1410d422e(&local_a0,ppvVar14 + 7);
          puVar7 = uStack_e0;
          uStack_6c = CONCAT44(*(undefined4 *)(ppvVar14 + 0xe),(undefined4)uStack_6c);
          lVar11 = (longlong)(int)uStack_e0;
          uVar9 = (int)uStack_e0 + 1;
          uStack_e0 = (ulonglong *)CONCAT44(uStack_e0._4_4_,uVar9);
          if (uStack_e0._4_4_ < uVar9) {
            FUN_140cb3cca(&local_e8,(ulonglong)puVar7 & 0xffffffff);
          }
          pvVar5 = local_80;
          ppvVar12 = local_e8;
          local_e8[lVar11 * 7] = local_a0;
          local_e8[lVar11 * 7 + 1] = plStack_98;
          if (plStack_98 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_98 + 1) = (int)plStack_98[1] + 1;
            UNLOCK();
          }
          local_e8[lVar11 * 7 + 2] = local_90;
          local_e8[lVar11 * 7 + 3] = plStack_88;
          if (plStack_88 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_88 + 1) = (int)plStack_88[1] + 1;
            UNLOCK();
          }
          local_e8[lVar11 * 7 + 4] = (void *)0x0;
          lVar17 = (longlong)iStack_78;
          *(int *)(local_e8 + lVar11 * 7 + 5) = iStack_78;
          if (lVar17 == 0) {
            *(undefined4 *)((longlong)local_e8 + lVar11 * 0x38 + 0x2c) = 0;
          }
          else {
            ppvVar1 = local_e8 + lVar11 * 7 + 4;
            FUN_1446dd670(ppvVar1,iStack_78,0);
            memcpy(*ppvVar1,pvVar5,lVar17 * 2);
          }
          *(undefined2 *)(ppvVar12 + lVar11 * 7 + 6) = uStack_70;
          if (local_80 != (void *)0x0) {
            FUN_1400020a8();
          }
          plVar15 = plStack_88;
          if (plStack_88 != (longlong *)0x0) {
            LOCK();
            plVar13 = plStack_88 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)*plStack_88)(plStack_88);
              LOCK();
              piVar2 = (int *)((longlong)plVar15 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
          plVar15 = plStack_98;
          if (plStack_98 != (longlong *)0x0) {
            LOCK();
            plVar13 = plStack_98 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)*plStack_98)(plStack_98);
              LOCK();
              piVar2 = (int *)((longlong)plVar15 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
          if (local_c0 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_d8 != (void *)0x0) {
            FUN_1400020a8();
          }
          ppvVar14 = ppvVar14 + 0xf;
          lVar10 = lVar10 + -0x78;
        } while (lVar10 != 0);
      }
      cVar8 = FUN_14662f7ba(local_170,&local_e8);
      if (cVar8 != '\0') {
        FUN_1400b22c2(&local_168,&DAT_149e02088);
        FUN_1400b22c2(&local_158,&DAT_149e02088);
        FUN_14020fad6(&local_168,L"action_ui_view_recent_friend_profiles");
        local_d8 = (void *)0x0;
        uStack_d0 = 0;
        local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
        local_c0 = (void *)0x0;
        uStack_b8 = 0;
        FUN_1446ddda2(&local_d8,"ViewRecentFriendsProfilesText",0);
        FUN_1410d1eba(&local_f8,&local_d8);
        if (local_c0 != (void *)0x0) {
          FUN_1400020a8();
        }
        plVar15 = local_f8;
        plVar13 = local_f8;
        if (*(code **)(*local_f8 + 0x50) != FUN_144828418) {
          plVar13 = (longlong *)(**(code **)(*local_f8 + 0x50))(local_f8);
        }
        FUN_1447a1fc0(plVar13);
        pcVar4 = *(code **)(*plVar15 + 0x28);
        if (pcVar4 == FUN_14482841c) {
          ppvVar14 = (void **)(plVar15[5] + 8);
          if (plVar15[5] == 0) {
            ppvVar14 = (void **)(plVar15 + 3);
          }
        }
        else if (pcVar4 == (code *)&LAB_14010c34c) {
          ppvVar14 = (void **)(plVar15 + 2);
        }
        else {
          ppvVar14 = (void **)(*pcVar4)(plVar15);
        }
        if (&local_158 != ppvVar14) {
          iVar3 = *(int *)(ppvVar14 + 1);
          pvVar5 = *ppvVar14;
          local_150 = iVar3;
          if (iVar3 == 0 && local_14c == 0) {
            local_14c = 0;
          }
          else {
            FUN_1446dd670(&local_158,iVar3);
            if (iVar3 != 0) {
              memcpy(local_158,pvVar5,(longlong)iVar3 * 2);
            }
          }
        }
        iVar3 = *(int *)(local_178 + 0x1c8);
        *(uint *)(local_178 + 0x1c8) = iVar3 + 1U;
        if (*(uint *)(local_178 + 0x1cc) < iVar3 + 1U) {
          FUN_14665655c(local_180,iVar3);
        }
        FUN_146606406((longlong)iVar3 * 0x20 + *local_180,&local_168);
        if (plVar15 != (longlong *)0x0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
        if (local_158 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_168 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_140cb1696(local_e8,(ulonglong)uStack_e0 & 0xffffffff);
      if (local_e8 != (void **)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_108 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442e782e FUN_1442e782e body=608 status=ok
// SIG undefined FUN_1442e782e(void)

void FUN_1442e782e(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  char *pcVar7;
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
  code *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(int *)(param_1 + 0x34) == 0) || (uVar1 = *(uint *)(param_1 + 0x30), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) goto LAB_1442e79f5;
  plVar6 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar6 == (longlong *)0x0) || ((int)plVar6[2] != *(int *)(param_1 + 0x34))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar4 = *plVar6, lVar4 == 0))))
  goto LAB_1442e79f5;
  lVar3 = FUN_1407f492e(lVar4);
  cVar2 = '\x01';
  if (lVar3 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_50 = local_38;
      local_38[0] = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1459f2e4c;
      local_58 = &LAB_148c39de3;
      local_60 = &LAB_1457a9eb2;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      cVar2 = FUN_146207be0(lVar3);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) {
LAB_1442e794b:
    if (cVar2 != '\0') {
      pcVar7 = "MENU_NEW_GAME";
LAB_1442e79c9:
      FUN_1400b22c2(local_38,pcVar7);
      FUN_145cbc3f6(param_1,&DAT_14cbdd950,local_38);
      if (local_38[0] != (code *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1442e79f5;
    }
  }
  else {
    if (*(char *)(lVar3 + 0x1a0) != '\x01') {
      if ((*(char *)(lVar3 + 0x1a3) != '\0') || (*(char *)(lVar3 + 0x1a2) != '\0'))
      goto LAB_1442e79f5;
      goto LAB_1442e794b;
    }
    if (*(char *)(lVar3 + 0x1a3) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    }
    if (cVar2 != '\0') {
      pcVar7 = "MENU_SELECT_CHARACTER_LATE_JOIN";
      goto LAB_1442e79c9;
    }
  }
  lVar4 = FUN_140391a3c(lVar4);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)FUN_14001cc68(8,0x10);
    *puVar5 = &PTR_FUN_14b9accd0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
LAB_1442e79f5:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442e7aba FUN_1442e7aba body=1183 status=ok
// SIG undefined FUN_1442e7aba(void)

void FUN_1442e7aba(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_138 [40];
  longlong local_110;
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong *local_e8;
  undefined4 local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78 [2];
  longlong local_70;
  undefined8 uStack_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (((lVar4 != 0) && (*(char *)(lVar4 + 0x1a0) == '\0')) && (*(char *)(lVar4 + 0x1a3) == '\0')) {
    uVar2 = *(uint *)(lVar4 + 0xd8);
    if ((((ulonglong)uVar2 != 0xffffffff) && (-1 < (int)uVar2)) &&
       ((int)uVar2 < *(int *)(param_1 + 0x300))) {
      *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x308) + 1;
      lVar6 = (ulonglong)uVar2 * 0x308;
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x2f8) + lVar6);
      if (iVar3 != 0) {
        lVar6 = *(longlong *)(param_1 + 0x2f8) + lVar6;
        if ((iVar3 != DAT_14c948000 && *(int *)(lVar6 + 4) != 0) &&
           ((((*(char *)(lVar4 + 0x5a8) != '\x01' ||
              ((*(int *)(lVar6 + 600) != 0 &&
               (*(int *)(lVar6 + 600) != DAT_14c948000 && *(int *)(lVar6 + 0x25c) != 0)))) &&
             (*(int *)(param_1 + 0x34) != 0)) &&
            ((uVar2 = *(uint *)(param_1 + 0x30), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)))))
           ) {
          plVar7 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar7 != (longlong *)0x0) &&
             ((((int)plVar7[2] == *(int *)(param_1 + 0x34) &&
               ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) && (*plVar7 != 0)))) {
            lVar4 = FUN_140391a3c();
            if (lVar4 != 0) {
              local_110 = lVar4;
              if (*(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x110) < DAT_14c844850) {
                FUN_144b3d300(&DAT_14c844850);
                if (DAT_14c844850 == -1) {
                  DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
                  DAT_14c844840[1] = 0;
                  *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
                  DAT_14c844840[2] = -1;
                  DAT_14c844840[3] = 0;
                  DAT_14c844840[4] = 0;
                  DAT_14c844840[5] = 0;
                  if (DAT_14c844840 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                    UNLOCK();
                  }
                  DAT_14c844848 = 0;
                  atexit(FUN_142760bef);
                  _Init_thread_footer(&DAT_14c844850);
                }
              }
              local_c8 = DAT_14c844840;
              if (DAT_14c844840 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
                  LOCK();
                  *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                  UNLOCK();
                }
                else {
                  (**(code **)(*DAT_14c844840 + 8))();
                }
              }
              local_c0 = 0;
              local_78[0] = 0;
              local_88 = 0;
              uStack_80 = 0;
              local_70 = 0;
              uStack_68 = 0;
              FUN_1446ddda2(&local_88,"CampaignProgressInfoText",0);
              FUN_140ac6c96(&local_88,&local_c8);
              if (local_70 != 0) {
                FUN_1400020a8();
              }
              puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
              local_e8 = *(longlong **)(lVar6 + 0xe0);
              if (local_e8 != (longlong *)0x0) {
                (**(code **)(*local_e8 + 8))();
              }
              local_e0 = *(undefined4 *)(lVar6 + 0xe8);
              FUN_140009b9a(local_f8,lVar6 + 0x68);
              FUN_14023409e(&local_108,&local_c8,1);
              local_88 = CONCAT44(local_88._4_4_,4);
              FUN_14023423e(local_78,local_f8);
              uStack_68 = CONCAT44(uStack_68._4_4_,4);
              FUN_14023423e(local_58,&local_e8);
              local_a0 = &local_48;
              local_a8 = &local_88;
              FUN_14010d304(&local_98);
              local_b8 = local_108;
              local_b0 = local_100;
              if (local_100 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_100 + 1) = (int)local_100[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(&local_d8,&local_b8,&local_98);
              FUN_14007f2db(local_98,local_90);
              if (local_98 != 0) {
                FUN_1400020a8();
              }
              lVar4 = 0x30;
              do {
                if (*(longlong **)((longlong)&local_88 + lVar4) != (longlong *)0x0) {
                  (**(code **)(**(longlong **)((longlong)&local_88 + lVar4) + 0x10))();
                  *(undefined8 *)((longlong)&local_88 + lVar4) = 0;
                  *(undefined4 *)((longlong)local_78 + lVar4 + -8) = 0;
                }
                lVar4 = lVar4 + -0x20;
              } while (lVar4 != -0x10);
              if (local_100 != (longlong *)0x0) {
                LOCK();
                plVar7 = local_100 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
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
              if (local_f8[0] != (longlong *)0x0) {
                (**(code **)(*local_f8[0] + 0x10))();
              }
              if (local_e8 != (longlong *)0x0) {
                (**(code **)(*local_e8 + 0x10))();
              }
              *puVar5 = &PTR_FUN_14b9caaa0;
              puVar5[1] = local_d8;
              if (local_d8 == (longlong *)0x0) {
                *(undefined4 *)(puVar5 + 2) = local_d0;
                FUN_1447a97f4(puVar5 + 3,lVar6);
                FUN_14039144e(local_110,puVar5);
              }
              else {
                (**(code **)(*local_d8 + 8))(local_d8);
                *(undefined4 *)(puVar5 + 2) = local_d0;
                FUN_1447a97f4(puVar5 + 3,lVar6);
                FUN_14039144e(local_110,puVar5);
                (**(code **)(*local_d8 + 0x10))(local_d8);
              }
              if (local_c8 != (longlong *)0x0) {
                (**(code **)(*local_c8 + 0x10))();
              }
            }
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442e7f5a FUN_1442e7f5a body=480 status=ok
// SIG undefined FUN_1442e7f5a(void)

void FUN_1442e7f5a(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char *pcVar4;
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
  code *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) goto LAB_1442e8070;
  if (*(char *)(lVar2 + 0x1a2) == '\x01') {
    if (((((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1))
         && ((int)uVar1 < DAT_14c9647dc)) &&
        ((plVar3 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_1 + 0x34))))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
        ((*plVar3 != 0 && (lVar2 = FUN_1407f492e(), lVar2 != 0)))))) {
      if (DAT_14cbadd90 == 0) {
        local_40 = local_28;
        local_28[0] = FUN_141030f22;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1459f2e4c;
        local_48 = &LAB_148c39de3;
        local_50 = &LAB_1457a9eb2;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
         ((*(char *)(lVar2 + 0xa99) != '\x01' || (*(char *)(lVar2 + 0xa98) == '\0'))))
      goto LAB_1442e8070;
    }
LAB_1442e803d:
    pcVar4 = "MENU_PAUSE";
  }
  else {
    if (*(char *)(lVar2 + 0x1a0) == '\x01') goto LAB_1442e803d;
    pcVar4 = "MENU_OPTIONS_FRONTEND";
  }
  FUN_1400b22c2(local_28,pcVar4);
  FUN_145cbc3f6(param_1,&DAT_14cbdd950,local_28);
  if (local_28[0] != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1442e8070:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442e813c FUN_1442e813c body=344 status=ok
// SIG undefined FUN_1442e813c(void)

void FUN_1442e813c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  longlong *plVar8;
  longlong lVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((((((lVar3 != 0) && (*(char *)(lVar3 + 0x5a8) == '\x01')) &&
        (*(char *)(lVar3 + 0x1a3) == '\0')) &&
       (((-1 < *(int *)(lVar3 + 0xd8) && (*(int *)(lVar3 + 0xd8) < *(int *)(lVar3 + 200))) &&
        ((*(int *)(param_1 + 0x34) != 0 &&
         ((uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc))))))))
      && (plVar8 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar8 != (longlong *)0x0)) &&
     (((((int)plVar8[2] == *(int *)(param_1 + 0x34) && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0))
       && (*plVar8 != 0)) && (lVar5 = FUN_140391a3c(), iVar4 = DAT_14c948000, lVar5 != 0)))) {
    iVar2 = *(int *)(lVar3 + 0x3f8);
    if ((iVar2 == 0) || (*(int *)(lVar3 + 0x3fc) == 0)) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      ppuVar7 = &PTR_FUN_14b9caac0;
      lVar9 = lVar3 + 0x428;
    }
    else {
      lVar9 = lVar3 + 0x3f8;
      puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      ppuVar7 = &PTR_FUN_14b9caad0;
      if (iVar2 == iVar4) {
        ppuVar7 = &PTR_FUN_14b9caac0;
        lVar9 = lVar3 + 0x428;
      }
    }
    *puVar6 = ppuVar7;
    FUN_1447a97f4(puVar6 + 1,lVar9);
    FUN_14039144e(lVar5,puVar6);
    return;
  }
  return;
}



// FUNCTION 1442e8526 FUN_1442e8526 body=2724 status=ok
// SIG undefined FUN_1442e8526(void)

void FUN_1442e8526(longlong param_1,uint param_2,void **param_3,longlong *param_4,undefined4 param_5
                  )

{
  longlong *plVar1;
  uint uVar2;
  void *pvVar3;
  ushort *puVar4;
  longlong lVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 uVar15;
  ulonglong uVar16;
  longlong lVar18;
  PSRWLOCK SRWLock;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  void **local_158;
  PSRWLOCK local_150;
  undefined8 local_148;
  longlong *local_140;
  longlong *local_138;
  undefined4 local_130;
  undefined8 local_128;
  longlong *local_120;
  longlong *local_118;
  undefined4 local_110;
  longlong *local_108 [2];
  longlong *local_f8 [2];
  longlong local_e8;
  void *local_e0;
  int local_d8;
  undefined4 local_d4;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  longlong local_a0;
  undefined4 local_98;
  longlong local_88;
  longlong local_78;
  longlong *plStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined8 auStack_58 [2];
  ulonglong local_48;
  void **ppvVar17;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_1448d5e3c(&local_78,param_1 + 0x208);
  lVar11 = *(longlong *)(local_78 + 0x3c0);
  SRWLock = (PSRWLOCK)(lVar11 + 0x68);
  AcquireSRWLockShared(SRWLock);
  plVar14 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar10 = (int *)((longlong)plVar14 + 0xc);
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (*piVar10 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if ((*(int *)(param_1 + 0x308) == 0) || (*(int *)(param_1 + 0x308) != *(int *)(lVar11 + 0x10))) {
    *(int *)(param_1 + 0x308) = *(int *)(lVar11 + 0x10);
    FUN_145844d2a(param_1 + 0x2f8,lVar11);
  }
  local_d0 = (void *)0x0;
  local_c8 = (int)param_4[1];
  lVar19 = (longlong)local_c8;
  pvVar3 = (void *)*param_4;
  local_158 = (void **)CONCAT71(local_158._1_7_,(char)param_2);
  if (lVar19 == 0) {
    local_c4 = 0;
    ppvVar17 = (void **)(ulonglong)param_2;
  }
  else {
    FUN_1446dd670(&local_d0,local_c8,0);
    memcpy(local_d0,pvVar3,lVar19 * 2);
    ppvVar17 = param_3;
  }
  local_e0 = (void *)0x0;
  local_d8 = *(int *)(param_3 + 1);
  lVar19 = (longlong)local_d8;
  pvVar3 = *param_3;
  if (lVar19 == 0) {
    local_d4 = 0;
  }
  else {
    ppvVar17 = &local_e0;
    FUN_1446dd670(ppvVar17,local_d8,0);
    memcpy(local_e0,pvVar3,lVar19 * 2);
  }
  cVar7 = (char)local_158;
  uVar16 = CONCAT71((int7)((ulonglong)ppvVar17 >> 8),(char)local_158);
  local_168 = param_5;
  FUN_14656ed84(param_1,uVar16 & 0xffffffff,&local_e0,&local_d0);
  lVar19 = *(longlong *)(param_1 + 0x288);
  if (lVar19 == 0) goto LAB_1442e8c4d;
  if (*(char *)(lVar19 + 0x1a3) == '\x01') {
    if (cVar7 == '\0') {
      local_78 = 0;
      FUN_145e3df1e(param_1,&local_78,0,lVar19 + 0x4d8);
      goto LAB_1442e8c4d;
    }
    iVar8 = *(int *)(lVar19 + 0xd8);
    if (((longlong)iVar8 < 0) || (*(int *)(lVar19 + 200) <= iVar8)) goto LAB_1442e8c4d;
    lVar13 = *(longlong *)(*(longlong *)(lVar19 + 0xc0) + (longlong)iVar8 * 0xb0);
    local_e8 = lVar13;
    FUN_145e3df1e(param_1,&local_e8,1,lVar19 + 0x4d8);
    *(undefined1 *)(lVar19 + 0x529) = 1;
    if ((longlong)*(int *)(param_1 + 0x318) != 0) {
      plVar14 = *(longlong **)(param_1 + 0x310);
      lVar9 = (longlong)*(int *)(param_1 + 0x318) * 0x28;
      do {
        if (*plVar14 == lVar13) {
          if ((plVar14 != (longlong *)0x0) && (*(char *)((longlong)plVar14 + 0xc) == '\x01')) {
            lVar13 = FUN_141563480(plVar14 + 2);
            if (lVar13 != 0) {
              lVar9 = FUN_141563480(plVar14 + 2);
              if ((longlong)*(int *)(lVar11 + 0x50) == 0) {
                bVar20 = false;
                goto LAB_1442e8d34;
              }
              lVar18 = 0;
              goto LAB_1442e8d01;
            }
          }
          break;
        }
        plVar14 = plVar14 + 5;
        lVar9 = lVar9 + -0x28;
      } while (lVar9 != 0);
    }
    goto LAB_1442e8f86;
  }
  if (*(char *)(lVar19 + 0x1a0) == '\0') {
    FUN_1461557d8(param_1,uVar16 & 0xffffffff);
    FUN_1415e9740(param_1,uVar16 & 0xffffffff);
  }
  piVar10 = (int *)(lVar19 + 0x1a8);
  if (cVar7 != '\0') {
    piVar10 = (int *)(lVar19 + 0xd8);
  }
  iVar8 = *piVar10;
  if ((-1 < (longlong)iVar8) && (iVar8 < *(int *)(param_1 + 0x300))) {
    *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x308) + 1;
    lVar13 = (longlong)iVar8 * 0x308;
    if (*(char *)(*(longlong *)(param_1 + 0x2f8) + 0x120 + lVar13) != '\0') goto LAB_1442e8c4d;
    lVar13 = *(longlong *)(param_1 + 0x2f8) + lVar13;
    FUN_1415c1204(lVar19 + 0x1d0,lVar13);
    iVar8 = *(int *)(lVar19 + 0x3cc);
    if (*(char *)(lVar19 + 0x3c8) == '\0') {
LAB_1442e87f7:
      *(undefined1 *)(lVar19 + 0x3c8) = 1;
      iVar8 = iVar8 + 1;
      *(int *)(lVar19 + 0x3cc) = iVar8;
    }
    else if (iVar8 == 0) {
      iVar8 = 0;
      goto LAB_1442e87f7;
    }
    local_158 = param_3;
    if ((*(char *)(lVar13 + 0x1f0) == '\x01') && (lVar9 = *(longlong *)(lVar13 + 0x218), lVar9 != 0)
       ) {
      if ((longlong)*(int *)(lVar11 + 0x50) != 0) {
        lVar18 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar11 + 0x48) + lVar18) == lVar9) {
            if (iVar8 != 0) goto LAB_1442e8866;
            uVar15 = 1;
            goto LAB_1442e8856;
          }
          lVar18 = lVar18 + 8;
        } while ((longlong)*(int *)(lVar11 + 0x50) * 8 != lVar18);
      }
      uVar15 = 0;
LAB_1442e8856:
      *(undefined1 *)(lVar19 + 0x3c8) = uVar15;
      *(int *)(lVar19 + 0x3cc) = iVar8 + 1;
LAB_1442e8866:
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      local_68 = 0;
      local_60 = 0;
      auStack_58[0] = 0;
      local_150 = SRWLock;
      FUN_1446ddda2(&local_78,"RequiresText",0);
      FUN_1410d1eba(local_f8,&local_78);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      local_138 = *(longlong **)(lVar9 + 0x28);
      if (local_138 != (longlong *)0x0) {
        (**(code **)(*local_138 + 8))();
      }
      local_130 = *(undefined4 *)(lVar9 + 0x30);
      FUN_14023409e(&local_148,local_f8,1);
      local_78 = CONCAT44(local_78._4_4_,4);
      FUN_14023423e(&local_68,&local_138);
      local_a8 = auStack_58;
      local_b0 = &local_78;
      FUN_14010d304(&local_a0);
      local_c0 = local_148;
      local_b8 = local_140;
      if (local_140 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_140 + 1) = (int)local_140[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_108,&local_c0,&local_a0);
      FUN_14007f2db(local_a0,local_98);
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      if ((longlong *)CONCAT44(uStack_64,local_68) != (longlong *)0x0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10))();
      }
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_140 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar10 = (int *)((longlong)local_140 + 0xc);
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (*piVar10 == 0) {
            (**(code **)(*local_140 + 0x10))(local_140);
          }
        }
      }
      if (local_138 != (longlong *)0x0) {
        (**(code **)(*local_138 + 0x10))();
      }
      plVar14 = local_108[0];
      if (*(code **)(*local_108[0] + 0x50) != FUN_144828418) {
        plVar14 = (longlong *)(**(code **)(*local_108[0] + 0x50))(local_108[0]);
      }
      FUN_1447a1fc0(plVar14);
      pcVar6 = *(code **)(*local_108[0] + 0x28);
      if (pcVar6 == FUN_14482841c) {
        plVar14 = (longlong *)(local_108[0][5] + 8);
        if (local_108[0][5] == 0) {
          plVar14 = local_108[0] + 3;
        }
      }
      else if (pcVar6 == (code *)&LAB_14010c34c) {
        plVar14 = local_108[0] + 2;
      }
      else {
        plVar14 = (longlong *)(*pcVar6)(local_108[0]);
      }
      plVar1 = (longlong *)(lVar19 + 0x3d8);
      if (plVar1 != plVar14) {
        iVar8 = (int)plVar14[1];
        pvVar3 = (void *)*plVar14;
        *(int *)(lVar19 + 0x3e0) = iVar8;
        if (iVar8 == 0 && *(int *)(lVar19 + 0x3e4) == 0) {
          *(undefined4 *)(lVar19 + 0x3e4) = 0;
        }
        else {
          FUN_1446dd670(plVar1,iVar8);
          if (iVar8 != 0) {
            memcpy((void *)*plVar1,pvVar3,(longlong)iVar8 * 2);
          }
        }
      }
      if (local_108[0] != (longlong *)0x0) {
        (**(code **)(*local_108[0] + 0x10))(local_108[0]);
      }
      SRWLock = local_150;
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
        SRWLock = local_150;
      }
    }
    puVar4 = *(ushort **)(lVar19 + 0x80);
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar19 + 0x78) & 0x3f));
    }
    FUN_1442e69dc(param_1,lVar19,lVar13);
    param_3 = local_158;
  }
  if (((((*(int *)(param_1 + 0x34) != 0) && (uVar2 = *(uint *)(param_1 + 0x30), -1 < (int)uVar2)) &&
       ((int)uVar2 < DAT_14c9647dc)) &&
      ((plVar14 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar14 != (longlong *)0x0 && ((int)plVar14[2] == *(int *)(param_1 + 0x34))))) &&
     (((*(uint *)(plVar14 + 1) & 0x10200000) == 0 &&
      ((*plVar14 != 0 && (lVar11 = FUN_140391a3c(), lVar11 != 0)))))) {
    FUN_1447a97f4(&local_78,&DAT_14c9485f0);
    uVar2 = *(uint *)(lVar19 + 0xd8);
    if (((ulonglong)uVar2 != 0xffffffff) &&
       ((-1 < (int)uVar2 && ((int)uVar2 < *(int *)(lVar19 + 200))))) {
      FUN_1446dcdd4(&local_a0,(ulonglong)uVar2 * 0xb0 + *(longlong *)(lVar19 + 0xc0));
      FUN_1404e49fa(&local_78,&local_a0);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
    puVar12 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar12 = &PTR_FUN_14b9caa90;
    FUN_1447a97f4(puVar12 + 1,&local_78);
    FUN_14039144e(lVar11,puVar12);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1442e8c4d:
  ReleaseSRWLockShared(SRWLock);
  if (*param_3 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (bVar20 = (longlong)*(int *)(lVar11 + 0x50) * 8 + -8 != lVar18, lVar18 = lVar18 + 8, bVar20)
  {
LAB_1442e8d01:
    lVar5 = *(longlong *)(*(longlong *)(lVar11 + 0x48) + lVar18);
    if (lVar5 == lVar9) break;
  }
  bVar20 = lVar5 == lVar9;
LAB_1442e8d34:
  *(bool *)(lVar19 + 0x529) = bVar20;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  local_68 = 0;
  local_60 = 0;
  auStack_58[0] = 0;
  FUN_1446ddda2(&local_78,"RequiresText",0);
  FUN_1410d1eba(local_f8,&local_78);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_118 = *(longlong **)(lVar13 + 0x28);
  if (local_118 != (longlong *)0x0) {
    (**(code **)(*local_118 + 8))();
  }
  local_110 = *(undefined4 *)(lVar13 + 0x30);
  FUN_14023409e(&local_128,local_f8,1);
  local_78 = CONCAT44(local_78._4_4_,4);
  FUN_14023423e(&local_68,&local_118);
  local_a8 = auStack_58;
  local_b0 = &local_78;
  FUN_14010d304(&local_a0);
  local_c0 = local_128;
  local_b8 = local_120;
  if (local_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_120 + 1) = (int)local_120[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_108,&local_c0,&local_a0);
  FUN_14007f2db(local_a0,local_98);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)CONCAT44(uStack_64,local_68) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10))();
  }
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_120 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar10 = (int *)((longlong)local_120 + 0xc);
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (*piVar10 == 0) {
        (**(code **)(*local_120 + 0x10))(local_120);
      }
    }
  }
  if (local_118 != (longlong *)0x0) {
    (**(code **)(*local_118 + 0x10))();
  }
  plVar14 = local_108[0];
  if (*(code **)(*local_108[0] + 0x50) != FUN_144828418) {
    plVar14 = (longlong *)(**(code **)(*local_108[0] + 0x50))(local_108[0]);
  }
  FUN_1447a1fc0(plVar14);
  pcVar6 = *(code **)(*local_108[0] + 0x28);
  if (pcVar6 == FUN_14482841c) {
    plVar14 = (longlong *)(local_108[0][5] + 8);
    if (local_108[0][5] == 0) {
      plVar14 = local_108[0] + 3;
    }
  }
  else if (pcVar6 == (code *)&LAB_14010c34c) {
    plVar14 = local_108[0] + 2;
  }
  else {
    plVar14 = (longlong *)(*pcVar6)(local_108[0]);
  }
  plVar1 = (longlong *)(lVar19 + 0x530);
  if (plVar1 != plVar14) {
    iVar8 = (int)plVar14[1];
    pvVar3 = (void *)*plVar14;
    *(int *)(lVar19 + 0x538) = iVar8;
    if (iVar8 == 0 && *(int *)(lVar19 + 0x53c) == 0) {
      *(undefined4 *)(lVar19 + 0x53c) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar8);
      if (iVar8 != 0) {
        memcpy((void *)*plVar1,pvVar3,(longlong)iVar8 * 2);
      }
    }
  }
  if (local_108[0] != (longlong *)0x0) {
    (**(code **)(*local_108[0] + 0x10))(local_108[0]);
  }
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
LAB_1442e8f86:
  FUN_1442e630e(lVar19);
  goto LAB_1442e8c4d;
}



// FUNCTION 1442e9262 FUN_1442e9262 body=41 status=ok
// SIG undefined FUN_1442e9262(void)

void FUN_1442e9262(void)

{
  DAT_14cbdf5b8 = 0;
  if (DAT_14cbdf5b0 != 0) {
    FUN_1400020a8();
  }
  FUN_1461b58f2();
  return;
}



// FUNCTION 1442e9297 FUN_1442e9297 body=47 status=ok
// SIG undefined FUN_1442e9297(void)

void FUN_1442e9297(void)

{
  DAT_14cbdf628 = 0;
  if (DAT_14cbdf620 != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(&DAT_14cbdf5e0);
  return;
}



// FUNCTION 1442e939a FUN_1442e939a body=4508 status=ok
// SIG undefined FUN_1442e939a(void)

void FUN_1442e939a(undefined8 *****param_1,undefined8 ****param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  void *_Src;
  ulonglong uVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 ****ppppuVar10;
  longlong lVar11;
  undefined8 ***pppuVar12;
  undefined8 *****pppppuVar13;
  int iVar14;
  int iVar15;
  undefined8 ****ppppuVar16;
  undefined8 ***pppuVar17;
  longlong lVar18;
  undefined1 auStack_398 [40];
  undefined8 ****local_370;
  undefined8 ****local_368;
  undefined8 ***local_360;
  undefined1 local_358;
  undefined7 uStack_357;
  longlong *local_348;
  int local_340;
  undefined8 ****local_338;
  undefined1 *local_330;
  longlong local_328;
  ulonglong uStack_320;
  longlong local_318;
  ulonglong uStack_310;
  longlong local_308;
  ulonglong uStack_300;
  longlong local_2f8;
  ulonglong uStack_2f0;
  longlong local_2e8;
  ulonglong uStack_2e0;
  longlong local_2d8;
  ulonglong uStack_2d0;
  longlong local_2c8;
  ulonglong uStack_2c0;
  longlong local_2b8;
  ulonglong uStack_2b0;
  longlong local_2a8;
  ulonglong uStack_2a0;
  undefined8 ****local_298;
  undefined1 *puStack_290;
  longlong **local_288;
  longlong local_280;
  undefined8 uStack_278;
  undefined1 local_270 [512];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (*(int *)((longlong)param_1 + 0xacc) != 0) {
    local_70 = (undefined1 *)0x0;
    local_68 = 0x2000000000;
    local_368 = param_1 + 0x41;
    iVar15 = *(int *)(param_1 + 0x42);
    local_370 = param_1;
    local_360 = param_2;
    if ((longlong)iVar15 != 0) {
      ppppuVar16 = param_1[0x41];
      lVar11 = 0;
      do {
        uVar5 = local_68;
        if (*(char *)((longlong)ppppuVar16 + lVar11 + 0x88) < '\0') {
          lVar18 = (longlong)(int)local_68;
          uVar6 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,uVar6);
          if (local_68._4_4_ < uVar6) {
            FUN_148eb81ba(local_270,uVar5 & 0xffffffff);
          }
          puVar7 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar7 = local_270;
          }
          lVar18 = lVar18 * 0x10;
          puVar1 = (undefined8 *)(puVar7 + lVar18);
          *(undefined8 *)(puVar7 + lVar18) = 0;
          iVar14 = *(int *)((longlong)ppppuVar16 + lVar11 + 8);
          _Src = *(void **)((longlong)ppppuVar16 + lVar11);
          *(int *)(puVar7 + lVar18 + 8) = iVar14;
          if ((longlong)iVar14 == 0) {
            *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar14,0);
            memcpy((void *)*puVar1,_Src,(longlong)iVar14 * 2);
          }
        }
        lVar11 = lVar11 + 0x90;
      } while ((longlong)iVar15 * 0x90 != lVar11);
    }
    local_298 = local_370;
    FUN_148eb7dc4(local_368);
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_318 = 0;
    uStack_310 = 0;
    local_328 = 0;
    uStack_320 = 0;
    if ((longlong)*(int *)(local_360 + 1) != 0) {
      pppppuVar13 = (undefined8 *****)*local_360;
      local_368 = pppppuVar13 + (longlong)*(int *)(local_360 + 1) * 0x89;
      do {
        if (((1 < *(int *)(pppppuVar13 + 0x1f)) && (1 < *(int *)(pppppuVar13 + 0x11))) &&
           ((longlong)*(int *)(pppppuVar13 + 0x83) != 0)) {
          ppppuVar16 = pppppuVar13[0x82];
          local_360 = ppppuVar16 + (longlong)*(int *)(pppppuVar13 + 0x83) * 3;
          do {
            if ((longlong)*(int *)(ppppuVar16 + 2) != 0) {
              pppuVar17 = ppppuVar16[1];
              pppuVar12 = pppuVar17 + (longlong)*(int *)(ppppuVar16 + 2) * 0xc;
LAB_1442e9544:
              if (*(char *)((longlong)pppuVar17 + 0x5c) == '\x01') {
                FUN_144245b52(pppppuVar13,&local_338,pppuVar17,ppppuVar16);
                if (1 < (int)local_330) {
                  FUN_1442454d4(pppppuVar13,&local_348,pppuVar17,ppppuVar16);
                  if (1 < local_340) {
                    local_358 = *(char *)(*ppppuVar16 + 3) == '\a';
                    puStack_290 = &local_358;
                    iVar15 = *(int *)(pppppuVar13 + 0x1f);
                    ppppuVar10 = (undefined8 ****)&DAT_149dfb77a;
                    if (iVar15 != 0) {
                      ppppuVar10 = pppppuVar13[0x1e];
                    }
                    lVar11 = 0;
                    do {
                      uVar3 = *(ushort *)((longlong)ppppuVar10 + lVar11 * 2);
                      bVar2 = "weapon"[lVar11];
                      iVar14 = (uint)uVar3 - (uint)bVar2;
                      if (iVar14 == 0) {
                        if (uVar3 == 0) {
                          plVar9 = &local_2a8;
                          goto LAB_1442e9937;
                        }
                      }
                      else {
                        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_1442e9618;
                        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_1442e9615;
                      }
                      lVar11 = lVar11 + 1;
                    } while( true );
                  }
                  goto LAB_1442e9944;
                }
                goto LAB_1442e9953;
              }
              goto LAB_1442e9962;
            }
LAB_1442e996f:
            ppppuVar16 = ppppuVar16 + 3;
          } while (ppppuVar16 != (undefined8 ****)local_360);
        }
        pppppuVar13 = pppppuVar13 + 0x89;
      } while (pppppuVar13 != (undefined8 *****)local_368);
    }
    ppppuVar16 = local_370;
    local_338 = local_370;
    local_330 = local_270;
    local_298 = (undefined8 ****)0x0;
    puStack_290 = (undefined1 *)0x0;
    local_288 = (longlong **)((ulonglong)local_288 & 0xffffffff00000000);
    local_280 = 0;
    uStack_278 = 0;
    FUN_1446ddda2(&local_298,"WeaponSortsLabel",0);
    FUN_1410d1eba(&local_348,&local_298);
    plVar9 = local_348;
    plVar8 = local_348;
    if (*(code **)(*local_348 + 0x50) != FUN_144828418) {
      plVar8 = (longlong *)(**(code **)(*local_348 + 0x50))(local_348);
    }
    FUN_1447a1fc0(plVar8);
    pcVar4 = *(code **)(*plVar9 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar8 = (longlong *)(plVar9[5] + 8);
      if (plVar9[5] == 0) {
        plVar8 = plVar9 + 3;
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar8 = plVar9 + 2;
    }
    else {
      plVar8 = (longlong *)(*pcVar4)(plVar9);
    }
    FUN_1400b22c2(&local_358,"weapon_sorts");
    FUN_148eb7f24(&local_338,&local_358,plVar8,&local_2a8);
    if (CONCAT71(uStack_357,local_358) != 0) {
      FUN_1400020a8();
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    if (local_280 != 0) {
      FUN_1400020a8();
    }
    local_298 = (undefined8 ****)0x0;
    puStack_290 = (undefined1 *)0x0;
    local_288 = (longlong **)((ulonglong)local_288 & 0xffffffff00000000);
    local_280 = 0;
    uStack_278 = 0;
    FUN_1446ddda2(&local_298,"ShieldSortsLabel",0);
    FUN_1410d1eba(&local_348,&local_298);
    plVar9 = local_348;
    plVar8 = local_348;
    if (*(code **)(*local_348 + 0x50) != FUN_144828418) {
      plVar8 = (longlong *)(**(code **)(*local_348 + 0x50))(local_348);
    }
    FUN_1447a1fc0(plVar8);
    pcVar4 = *(code **)(*plVar9 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar8 = (longlong *)(plVar9[5] + 8);
      if (plVar9[5] == 0) {
        plVar8 = plVar9 + 3;
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar8 = plVar9 + 2;
    }
    else {
      plVar8 = (longlong *)(*pcVar4)(plVar9);
    }
    FUN_1400b22c2(&local_358,"shield_sorts");
    FUN_148eb7f24(&local_338,&local_358,plVar8,&local_2b8);
    if (CONCAT71(uStack_357,local_358) != 0) {
      FUN_1400020a8();
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    if (local_280 != 0) {
      FUN_1400020a8();
    }
    local_298 = (undefined8 ****)0x0;
    puStack_290 = (undefined1 *)0x0;
    local_288 = (longlong **)((ulonglong)local_288 & 0xffffffff00000000);
    local_280 = 0;
    uStack_278 = 0;
    FUN_1446ddda2(&local_298,"GadgetSortsLabel",0);
    FUN_1410d1eba(&local_348,&local_298);
    plVar9 = local_348;
    plVar8 = local_348;
    if (*(code **)(*local_348 + 0x50) != FUN_144828418) {
      plVar8 = (longlong *)(**(code **)(*local_348 + 0x50))(local_348);
    }
    FUN_1447a1fc0(plVar8);
    pcVar4 = *(code **)(*plVar9 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar8 = (longlong *)(plVar9[5] + 8);
      if (plVar9[5] == 0) {
        plVar8 = plVar9 + 3;
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar8 = plVar9 + 2;
    }
    else {
      plVar8 = (longlong *)(*pcVar4)(plVar9);
    }
    FUN_1400b22c2(&local_358,"gadget_sorts");
    FUN_148eb7f24(&local_338,&local_358,plVar8,&local_2c8);
    if (CONCAT71(uStack_357,local_358) != 0) {
      FUN_1400020a8();
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    if (local_280 != 0) {
      FUN_1400020a8();
    }
    local_298 = (undefined8 ****)0x0;
    puStack_290 = (undefined1 *)0x0;
    local_288 = (longlong **)((ulonglong)local_288 & 0xffffffff00000000);
    local_280 = 0;
    uStack_278 = 0;
    FUN_1446ddda2(&local_298,"GrenadeSortsLabel",0);
    FUN_1410d1eba(&local_348,&local_298);
    plVar9 = local_348;
    plVar8 = local_348;
    if (*(code **)(*local_348 + 0x50) != FUN_144828418) {
      plVar8 = (longlong *)(**(code **)(*local_348 + 0x50))(local_348);
    }
    FUN_1447a1fc0(plVar8);
    pcVar4 = *(code **)(*plVar9 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar8 = (longlong *)(plVar9[5] + 8);
      if (plVar9[5] == 0) {
        plVar8 = plVar9 + 3;
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar8 = plVar9 + 2;
    }
    else {
      plVar8 = (longlong *)(*pcVar4)(plVar9);
    }
    FUN_1400b22c2(&local_358,"grenade_sorts");
    FUN_148eb7f24(&local_338,&local_358,plVar8,&local_2d8);
    if (CONCAT71(uStack_357,local_358) != 0) {
      FUN_1400020a8();
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    if (local_280 != 0) {
      FUN_1400020a8();
    }
    local_298 = (undefined8 ****)0x0;
    puStack_290 = (undefined1 *)0x0;
    local_288 = (longlong **)((ulonglong)local_288 & 0xffffffff00000000);
    local_280 = 0;
    uStack_278 = 0;
    FUN_1446ddda2(&local_298,"HeavyWeaponSortsLabel",0);
    FUN_1410d1eba(&local_348,&local_298);
    plVar9 = local_348;
    plVar8 = local_348;
    if (*(code **)(*local_348 + 0x50) != FUN_144828418) {
      plVar8 = (longlong *)(**(code **)(*local_348 + 0x50))(local_348);
    }
    FUN_1447a1fc0(plVar8);
    pcVar4 = *(code **)(*plVar9 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar8 = (longlong *)(plVar9[5] + 8);
      if (plVar9[5] == 0) {
        plVar8 = plVar9 + 3;
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar8 = plVar9 + 2;
    }
    else {
      plVar8 = (longlong *)(*pcVar4)(plVar9);
    }
    FUN_1400b22c2(&local_358,"heavy_weapon_sorts");
    FUN_148eb7f24(&local_338,&local_358,plVar8,&local_2e8);
    if (CONCAT71(uStack_357,local_358) != 0) {
      FUN_1400020a8();
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    if (local_280 != 0) {
      FUN_1400020a8();
    }
    local_298 = (undefined8 ****)0x0;
    puStack_290 = (undefined1 *)0x0;
    local_288 = (longlong **)((ulonglong)local_288 & 0xffffffff00000000);
    local_280 = 0;
    uStack_278 = 0;
    FUN_1446ddda2(&local_298,"RepKitSortsLabel",0);
    FUN_1410d1eba(&local_348,&local_298);
    plVar9 = local_348;
    plVar8 = local_348;
    if (*(code **)(*local_348 + 0x50) != FUN_144828418) {
      plVar8 = (longlong *)(**(code **)(*local_348 + 0x50))(local_348);
    }
    FUN_1447a1fc0(plVar8);
    pcVar4 = *(code **)(*plVar9 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar8 = (longlong *)(plVar9[5] + 8);
      if (plVar9[5] == 0) {
        plVar8 = plVar9 + 3;
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar8 = plVar9 + 2;
    }
    else {
      plVar8 = (longlong *)(*pcVar4)(plVar9);
    }
    FUN_1400b22c2(&local_358,"repkit_sorts");
    FUN_148eb7f24(&local_338,&local_358,plVar8,&local_2f8);
    if (CONCAT71(uStack_357,local_358) != 0) {
      FUN_1400020a8();
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    if (local_280 != 0) {
      FUN_1400020a8();
    }
    local_298 = (undefined8 ****)0x0;
    puStack_290 = (undefined1 *)0x0;
    local_288 = (longlong **)((ulonglong)local_288 & 0xffffffff00000000);
    local_280 = 0;
    uStack_278 = 0;
    FUN_1446ddda2(&local_298,"EnhancementSortsLabel",0);
    FUN_1410d1eba(&local_348,&local_298);
    plVar9 = local_348;
    plVar8 = local_348;
    if (*(code **)(*local_348 + 0x50) != FUN_144828418) {
      plVar8 = (longlong *)(**(code **)(*local_348 + 0x50))(local_348);
    }
    FUN_1447a1fc0(plVar8);
    pcVar4 = *(code **)(*plVar9 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar8 = (longlong *)(plVar9[5] + 8);
      if (plVar9[5] == 0) {
        plVar8 = plVar9 + 3;
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar8 = plVar9 + 2;
    }
    else {
      plVar8 = (longlong *)(*pcVar4)(plVar9);
    }
    FUN_1400b22c2(&local_358,"enhancement_sorts");
    FUN_148eb7f24(&local_338,&local_358,plVar8,&local_308);
    if (CONCAT71(uStack_357,local_358) != 0) {
      FUN_1400020a8();
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    if (local_280 != 0) {
      FUN_1400020a8();
    }
    local_298 = (undefined8 ****)0x0;
    puStack_290 = (undefined1 *)0x0;
    local_288 = (longlong **)((ulonglong)local_288 & 0xffffffff00000000);
    local_280 = 0;
    uStack_278 = 0;
    FUN_1446ddda2(&local_298,"ClassModSortsLabel",0);
    FUN_1410d1eba(&local_348,&local_298);
    plVar9 = local_348;
    plVar8 = local_348;
    if (*(code **)(*local_348 + 0x50) != FUN_144828418) {
      plVar8 = (longlong *)(**(code **)(*local_348 + 0x50))(local_348);
    }
    FUN_1447a1fc0(plVar8);
    pcVar4 = *(code **)(*plVar9 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar8 = (longlong *)(plVar9[5] + 8);
      if (plVar9[5] == 0) {
        plVar8 = plVar9 + 3;
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar8 = plVar9 + 2;
    }
    else {
      plVar8 = (longlong *)(*pcVar4)(plVar9);
    }
    FUN_1400b22c2(&local_358,"classmod_sorts");
    FUN_148eb7f24(&local_338,&local_358,plVar8,&local_318);
    if (CONCAT71(uStack_357,local_358) != 0) {
      FUN_1400020a8();
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    if (local_280 != 0) {
      FUN_1400020a8();
    }
    local_298 = (undefined8 ****)0x0;
    puStack_290 = (undefined1 *)0x0;
    local_288 = (longlong **)((ulonglong)local_288 & 0xffffffff00000000);
    local_280 = 0;
    uStack_278 = 0;
    FUN_1446ddda2(&local_298,"UnsortedStatSortsLabel",0);
    FUN_1410d1eba(&local_348,&local_298);
    plVar9 = local_348;
    if (*(code **)(*local_348 + 0x50) != FUN_144828418) {
      plVar9 = (longlong *)(**(code **)(*local_348 + 0x50))(local_348);
    }
    FUN_1447a1fc0(plVar9);
    pcVar4 = *(code **)(*local_348 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar9 = (longlong *)(local_348[5] + 8);
      if (local_348[5] == 0) {
        plVar9 = local_348 + 3;
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar9 = local_348 + 2;
    }
    else {
      plVar9 = (longlong *)(*pcVar4)(local_348);
    }
    FUN_1400b22c2(&local_358,"unsorted_sorts");
    FUN_148eb7f24(&local_338,&local_358,plVar9,&local_328);
    if (CONCAT71(uStack_357,local_358) != 0) {
      FUN_1400020a8();
    }
    if (local_348 != (longlong *)0x0) {
      (**(code **)(*local_348 + 0x10))(local_348);
    }
    if (local_280 != 0) {
      FUN_1400020a8();
    }
    *(byte *)(ppppuVar16 + 0x66) = *(byte *)(ppppuVar16 + 0x66) & 0x7f;
    ppppuVar10 = (undefined8 ****)ppppuVar16[0x10];
    if (ppppuVar10 != (undefined8 ****)0x0) {
      *(ushort *)ppppuVar10 =
           *(ushort *)ppppuVar10 | (ushort)(1L << (*(byte *)(ppppuVar16 + 0xf) & 0x3f));
    }
    FUN_148eb8535(local_328,uStack_320 & 0xffffffff);
    if (local_328 != 0) {
      FUN_1400020a8();
    }
    FUN_148eb8535(local_318,uStack_310 & 0xffffffff);
    if (local_318 != 0) {
      FUN_1400020a8();
    }
    FUN_148eb8535(local_308,uStack_300 & 0xffffffff);
    if (local_308 != 0) {
      FUN_1400020a8();
    }
    FUN_148eb8535(local_2f8,uStack_2f0 & 0xffffffff);
    if (local_2f8 != 0) {
      FUN_1400020a8();
    }
    FUN_148eb8535(local_2e8,uStack_2e0 & 0xffffffff);
    if (local_2e8 != 0) {
      FUN_1400020a8();
    }
    FUN_148eb8535(local_2d8,uStack_2d0 & 0xffffffff);
    if (local_2d8 != 0) {
      FUN_1400020a8();
    }
    FUN_148eb8535(local_2c8,uStack_2c0 & 0xffffffff);
    if (local_2c8 != 0) {
      FUN_1400020a8();
    }
    FUN_148eb8535(local_2b8,uStack_2b0 & 0xffffffff);
    if (local_2b8 != 0) {
      FUN_1400020a8();
    }
    FUN_148eb8535(local_2a8,uStack_2a0 & 0xffffffff);
    if (local_2a8 != 0) {
      FUN_1400020a8();
    }
    FUN_148eb817c(local_270);
  }
  if ((local_60 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1442e9615:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_1442e9618:
  plVar9 = &local_2a8;
  if (iVar14 != 0) {
    ppppuVar10 = (undefined8 ****)&DAT_149dfb77a;
    if (iVar15 != 0) {
      ppppuVar10 = pppppuVar13[0x1e];
    }
    lVar11 = 0;
    do {
      uVar3 = *(ushort *)((longlong)ppppuVar10 + lVar11 * 2);
      bVar2 = "shield"[lVar11];
      iVar14 = (uint)uVar3 - (uint)bVar2;
      if (iVar14 == 0) {
        if (uVar3 == 0) {
          plVar9 = &local_2b8;
          break;
        }
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_1442e968a;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_1442e9687;
      }
      lVar11 = lVar11 + 1;
    } while( true );
  }
  goto LAB_1442e9937;
LAB_1442e9687:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_1442e968a:
  plVar9 = &local_2b8;
  if (iVar14 != 0) {
    ppppuVar10 = (undefined8 ****)&DAT_149dfb77a;
    if (iVar15 != 0) {
      ppppuVar10 = pppppuVar13[0x1e];
    }
    lVar11 = 0;
    do {
      uVar3 = *(ushort *)((longlong)ppppuVar10 + lVar11 * 2);
      bVar2 = "gadget"[lVar11];
      iVar14 = (uint)uVar3 - (uint)bVar2;
      if (iVar14 == 0) {
        if (uVar3 == 0) goto LAB_1442e97d6;
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_1442e96f5;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_1442e96f2;
      }
      lVar11 = lVar11 + 1;
    } while( true );
  }
  goto LAB_1442e9937;
LAB_1442e96f2:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_1442e96f5:
  if (iVar14 == 0) {
LAB_1442e97d6:
    ppppuVar10 = (undefined8 ****)&DAT_149dfb77a;
    if (*(int *)(pppppuVar13 + 0x11) != 0) {
      ppppuVar10 = pppppuVar13[0x10];
    }
    lVar11 = 0;
    do {
      uVar3 = *(ushort *)((longlong)ppppuVar10 + lVar11 * 2);
      bVar2 = "grenade_gadget"[lVar11];
      iVar15 = (uint)uVar3 - (uint)bVar2;
      if (iVar15 == 0) {
        if (uVar3 == 0) {
          plVar9 = &local_2d8;
          goto LAB_1442e9937;
        }
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_1442e983d;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_1442e983a;
      }
      lVar11 = lVar11 + 1;
    } while( true );
  }
  ppppuVar10 = (undefined8 ****)&DAT_149dfb77a;
  if (iVar15 != 0) {
    ppppuVar10 = pppppuVar13[0x1e];
  }
  lVar11 = 0;
  do {
    uVar3 = *(ushort *)((longlong)ppppuVar10 + lVar11 * 2);
    bVar2 = "repair_kit"[lVar11];
    iVar14 = (uint)uVar3 - (uint)bVar2;
    if (iVar14 == 0) {
      if (uVar3 == 0) {
        plVar9 = &local_2f8;
        goto LAB_1442e9937;
      }
    }
    else {
      if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_1442e975f;
      if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_1442e975c;
    }
    lVar11 = lVar11 + 1;
  } while( true );
LAB_1442e983a:
  iVar15 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_1442e983d:
  plVar9 = &local_2d8;
  if (iVar15 != 0) {
    ppppuVar10 = (undefined8 ****)&DAT_149dfb77a;
    if (*(int *)(pppppuVar13 + 0x11) != 0) {
      ppppuVar10 = pppppuVar13[0x10];
    }
    lVar11 = 0;
    do {
      uVar3 = *(ushort *)((longlong)ppppuVar10 + lVar11 * 2);
      bVar2 = "heavy_weapon_gadget"[lVar11];
      iVar15 = (uint)uVar3 - (uint)bVar2;
      if (iVar15 == 0) {
        if (uVar3 == 0) goto LAB_1442e9918;
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_1442e990b;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_1442e9908;
      }
      lVar11 = lVar11 + 1;
    } while( true );
  }
  goto LAB_1442e9937;
LAB_1442e9908:
  iVar15 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_1442e990b:
  plVar9 = &local_2c8;
  if (iVar15 == 0) {
LAB_1442e9918:
    plVar9 = &local_2e8;
  }
  goto LAB_1442e9937;
LAB_1442e975c:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_1442e975f:
  plVar9 = &local_2f8;
  if (iVar14 != 0) {
    ppppuVar10 = (undefined8 ****)&DAT_149dfb77a;
    if (iVar15 != 0) {
      ppppuVar10 = pppppuVar13[0x1e];
    }
    lVar11 = 0;
    do {
      uVar3 = *(ushort *)((longlong)ppppuVar10 + lVar11 * 2);
      bVar2 = "enhancement"[lVar11];
      iVar14 = (uint)uVar3 - (uint)bVar2;
      if (iVar14 == 0) {
        if (uVar3 == 0) {
          plVar9 = &local_308;
          break;
        }
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_1442e98a6;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_1442e98a3;
      }
      lVar11 = lVar11 + 1;
    } while( true );
  }
  goto LAB_1442e9937;
LAB_1442e98a3:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_1442e98a6:
  plVar9 = &local_308;
  if (iVar14 != 0) {
    ppppuVar10 = (undefined8 ****)&DAT_149dfb77a;
    if (iVar15 != 0) {
      ppppuVar10 = pppppuVar13[0x1e];
    }
    lVar11 = 0;
    do {
      uVar3 = *(ushort *)((longlong)ppppuVar10 + lVar11 * 2);
      bVar2 = "classmod"[lVar11];
      iVar15 = (uint)uVar3 - (uint)bVar2;
      if (iVar15 == 0) {
        if (uVar3 == 0) goto LAB_1442e992f;
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_1442e9925;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_1442e9922;
      }
      lVar11 = lVar11 + 1;
    } while( true );
  }
LAB_1442e9937:
  local_298 = &local_338;
  local_288 = &local_348;
  FUN_1442ed83a(&local_298,plVar9);
LAB_1442e9944:
  if (local_348 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1442e9953:
  if ((undefined8 *****)local_338 != (undefined8 *****)0x0) {
    FUN_1400020a8();
  }
LAB_1442e9962:
  pppuVar17 = pppuVar17 + 0xc;
  if (pppuVar17 == pppuVar12) goto LAB_1442e996f;
  goto LAB_1442e9544;
LAB_1442e9922:
  iVar15 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_1442e9925:
  plVar9 = &local_328;
  if (iVar15 == 0) {
LAB_1442e992f:
    plVar9 = &local_318;
  }
  goto LAB_1442e9937;
}



// FUNCTION 1442ea538 FUN_1442ea538 body=573 status=ok
// SIG undefined FUN_1442ea538(void)

void FUN_1442ea538(longlong param_1)

{
  PSRWLOCK pRVar1;
  int iVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((((lVar3 != 0) && ((*(byte *)(lVar3 + 0x8f8) & 8) != 0)) && (*(char *)(lVar3 + 0x1c0) == '\0')
      ) && (*(char *)(lVar3 + 0x928) == '\0')) {
    plVar5 = (longlong *)FUN_148e861a2();
    lVar6 = *plVar5;
    pRVar1 = (PSRWLOCK)(lVar6 + 0x58);
    AcquireSRWLockShared(pRVar1);
    FUN_144313ede(lVar3,local_78);
    lVar6 = FUN_148e1b2aa(lVar6,local_78);
    if (local_78[0] != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockShared(pRVar1);
    if (((lVar6 == 0) || (*(char *)(lVar3 + 0xc0) == '\0')) || (*(int *)(lVar6 + 0x30) == 0)) {
      local_80 = FUN_148e84d1e(param_1);
      if (local_80 != 0) {
        plVar5 = (longlong *)FUN_1408cbae2(param_1);
        lVar6 = *plVar5;
        pRVar1 = (PSRWLOCK)(lVar6 + 0xb0);
        AcquireSRWLockShared(pRVar1);
        if (*(int *)(lVar6 + 0x60) == -1) {
          iVar2 = *(int *)(lVar6 + 0x68);
          ReleaseSRWLockShared(pRVar1);
          if (iVar2 == 0) {
            puVar7 = (undefined8 *)FUN_1408cbae2(param_1);
            local_68 = (undefined ***)0x0;
            local_58 = &PTR_LAB_14b9cca10;
            local_50 = &local_80;
            local_78[0] = &LAB_1442eddb6;
            FUN_148e57a3a(*puVar7,local_78);
            if (local_78[0] != (undefined1 *)0x0) {
              pppuVar9 = local_68;
              if (local_68 == (undefined ***)0x0) {
                pppuVar9 = &local_58;
              }
              (*(code *)(*pppuVar9)[2])();
            }
            FUN_148ee29c4(lVar3,*(undefined4 *)(lVar3 + 0x328));
            iVar2 = *(int *)(local_80 + 600);
            if (iVar2 == 0) {
              uVar8 = FUN_14001cc68(0x40,0x10);
              FUN_148e83602(uVar8,*(undefined8 *)(param_1 + 0x30),1);
            }
            else {
              uVar8 = FUN_14001cc68(0x148,0x10);
              FUN_148eaaef0(uVar8,*(undefined8 *)(param_1 + 0x30),1,iVar2);
            }
            FUN_140391314(param_1,uVar8);
            FUN_140de1078(param_1,&DAT_14cbde0b8,0,0);
            puVar4 = *(ushort **)(lVar3 + 0x80);
            if (puVar4 != (ushort *)0x0) {
              *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
            }
          }
        }
        else {
          ReleaseSRWLockShared(pRVar1);
        }
      }
    }
    else {
      FUN_148e84c06(param_1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ea9ce FUN_1442ea9ce body=1042 status=ok
// SIG undefined FUN_1442ea9ce(void)

void FUN_1442ea9ce(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ushort *puVar7;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  longlong local_e8 [3];
  longlong *plStack_d0;
  longlong *local_c0 [2];
  longlong *local_b0 [2];
  longlong *local_a0 [2];
  undefined8 local_90;
  longlong *local_88;
  undefined4 *local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  longlong *local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140642c08();
  FUN_1406429e2(param_1);
  FUN_1406428ce(param_1);
  if (param_1[0x51] != 0) {
    FUN_1448d5e3c(&local_60,param_1 + 0x41);
    plVar3 = *(longlong **)(CONCAT44(uStack_5c,local_60) + 0x3a0);
    AcquireSRWLockShared((PSRWLOCK)(plVar3 + 3));
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_58 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    if ((*(int *)((longlong)param_1 + 0x304) != (int)plVar3[2]) &&
       (*(int *)((longlong)param_1 + 0x304) = (int)plVar3[2], (int)param_1[0x5f] != (int)plVar3[1]))
    {
      lVar4 = *plVar3;
      param_1[0x5e] = lVar4;
      *(int *)(param_1 + 0x5f) = (int)plVar3[1];
      lVar5 = param_1[0x51];
      if (lVar5 != 0) {
        if (lVar4 == 0) {
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110) <
              DAT_14c844850) {
            FUN_144b3d300(&DAT_14c844850);
            if (DAT_14c844850 == -1) {
              DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
              DAT_14c844840[1] = 0;
              *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
              DAT_14c844840[2] = -1;
              DAT_14c844840[3] = 0;
              DAT_14c844840[4] = 0;
              DAT_14c844840[5] = 0;
              if (DAT_14c844840 != (longlong *)0x0) {
                LOCK();
                *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                UNLOCK();
              }
              DAT_14c844848 = 0;
              atexit(FUN_142760bef);
              _Init_thread_footer(&DAT_14c844850);
            }
          }
          plVar2 = DAT_14c844840;
          plVar6 = *(longlong **)(lVar5 + 0x308);
          if (plVar6 != DAT_14c844840) {
            *(longlong **)(lVar5 + 0x308) = DAT_14c844840;
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 8))();
            }
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
          *(undefined4 *)(lVar5 + 0x310) = DAT_14c844848;
        }
        else {
          FUN_1410d1eba(local_a0,&DAT_14cbdfbc0);
          local_100 = local_e8 + 2;
          local_e8[2] = 0;
          plStack_d0 = (longlong *)0x0;
          local_108 = local_e8;
          local_e8[0] = 0;
          local_e8[1] = 0;
          FUN_1467d09ac(local_c0,param_1 + 0x5e,1,2);
          FUN_14023409e(&local_f8,local_a0,1);
          local_60 = 4;
          FUN_14023423e(local_50,local_c0);
          local_78 = &local_40;
          local_80 = &local_60;
          FUN_14010d304(&local_70);
          local_90 = local_f8;
          local_88 = local_f0;
          if (local_f0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_b0,&local_90,&local_70);
          FUN_14007f2db(local_70,local_68);
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          if (local_50[0] != (longlong *)0x0) {
            (**(code **)(*local_50[0] + 0x10))();
          }
          if (local_f0 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_f0 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*local_f0)(local_f0);
              LOCK();
              piVar1 = (int *)((longlong)local_f0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_f0 + 0x10))(local_f0);
              }
            }
          }
          if (local_c0[0] != (longlong *)0x0) {
            (**(code **)(*local_c0[0] + 0x10))();
          }
          FUN_140008f88(lVar5 + 0x308,local_b0);
          if (local_b0[0] != (longlong *)0x0) {
            (**(code **)(*local_b0[0] + 0x10))();
          }
          if (local_e8[0] != 0) {
            FUN_1400020a8();
          }
          plVar6 = plStack_d0;
          if (plStack_d0 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_d0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_d0)(plStack_d0);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          if (local_a0[0] != (longlong *)0x0) {
            (**(code **)(*local_a0[0] + 0x10))();
          }
        }
        puVar7 = *(ushort **)(lVar5 + 0x80);
        if (puVar7 != (ushort *)0x0) {
          *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
        }
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(plVar3 + 3));
  }
  (**(code **)(*param_1 + 0x170))(param_1);
  FUN_1415268bc(param_1);
  if ((char)param_1[0x58] == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_128);
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442eae00 FUN_1442eae00 body=234 status=ok
// SIG undefined FUN_1442eae00(void)

void FUN_1442eae00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    FUN_1448d5e3c(&local_40,param_1 + 0x208);
    lVar4 = *(longlong *)(local_40 + 0x2f0);
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0xc0));
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
    if (*(int *)(param_1 + 0x300) != *(int *)(lVar4 + 0xb8)) {
      *(int *)(param_1 + 0x300) = *(int *)(lVar4 + 0xb8);
      *(undefined4 *)(lVar3 + 0x280) = *(undefined4 *)(lVar4 + 0xa0);
      puVar5 = *(ushort **)(lVar3 + 0x80);
      if (puVar5 != (ushort *)0x0) {
        *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0xc0));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442eaeec FUN_1442eaeec body=1666 status=ok
// SIG undefined FUN_1442eaeec(void)

void FUN_1442eaeec(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  char cVar6;
  undefined *puVar7;
  longlong lVar8;
  undefined1 auStack_208 [40];
  longlong local_1e0;
  longlong local_1d8;
  PSRWLOCK local_1d0;
  longlong *local_1c8 [2];
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8 [2];
  longlong *local_198 [2];
  longlong *local_188 [2];
  longlong local_178;
  ulonglong uStack_170;
  undefined4 local_168;
  longlong *local_158;
  longlong *plStack_150;
  undefined8 *local_148;
  longlong *local_140;
  longlong *local_138 [2];
  longlong *local_128;
  longlong *plStack_120;
  longlong *local_110 [2];
  longlong *local_100 [2];
  undefined2 local_f0 [2];
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 *local_c8;
  ulonglong *local_c0;
  undefined8 *local_b8;
  ulonglong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (lVar4 == 0) goto LAB_1442eaf1d;
  local_f0[0] = 0;
  local_ec = 0;
  uStack_e8 = 1;
  uStack_e4 = 0x144;
  uStack_e0 = 0;
  local_dc = 3;
  FUN_1448d5e3c(&local_a8,param_1 + 0x208);
  local_1d0 = (PSRWLOCK)
              (*(longlong *)(CONCAT44(local_a8._4_4_,(undefined4)local_a8) + 0x380) + 0x6e0);
  AcquireSRWLockShared(local_1d0);
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
  local_1d8 = lVar4 + 0x268;
  FUN_140009b9a(local_100);
  local_128 = (longlong *)0x0;
  plStack_120 = (longlong *)0x0;
  FUN_145c561ae(local_110,*(undefined4 *)(lVar4 + 0x260),local_f0);
  local_1e0 = lVar4 + 0x248;
  FUN_140009b9a(local_138);
  FUN_1410d1eba(&local_158,&DAT_14cbdfb48);
  FUN_14023409e(&local_148,&local_158,1);
  local_a8._0_4_ = 4;
  FUN_14023423e(local_98,local_138);
  local_88 = 4;
  FUN_14023423e(local_78,local_110);
  local_68 = 4;
  FUN_14023423e(local_58,local_100);
  local_b0 = &local_48;
  local_b8 = &local_a8;
  FUN_14010d304(&local_178);
  local_c8 = local_148;
  local_c0 = (ulonglong *)local_140;
  if (local_140 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_140 + 1) = (int)local_140[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(&local_d8,&local_c8,&local_178);
  FUN_14007f2db(local_178,uStack_170 & 0xffffffff);
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  lVar8 = 0x50;
  do {
    if (*(longlong **)((longlong)&local_a8 + lVar8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)&local_a8 + lVar8) + 0x10))();
      *(undefined8 *)((longlong)&local_a8 + lVar8) = 0;
      *(undefined4 *)(local_98 + lVar8 + -8) = 0;
    }
    lVar8 = lVar8 + -0x20;
  } while (lVar8 != -0x10);
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_140 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (local_138[0] != (longlong *)0x0) {
    (**(code **)(*local_138[0] + 0x10))();
  }
  if (local_110[0] != (longlong *)0x0) {
    (**(code **)(*local_110[0] + 0x10))();
  }
  if (local_100[0] != (longlong *)0x0) {
    (**(code **)(*local_100[0] + 0x10))();
  }
  FUN_140008f88(lVar4 + 0x2c0,&local_d8);
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x10))();
  }
  if (local_158 != (longlong *)0x0) {
    (**(code **)(*local_158 + 0x10))();
  }
  plVar1 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_120 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  puVar7 = &DAT_14cbde860;
  if (*(char *)(lVar4 + 0x1a8) != '\0') {
    puVar7 = &DAT_14cbde888;
  }
  FUN_1410d1eba(&local_a8,puVar7);
  FUN_14615b4b0(&local_178,&local_a8);
  if ((longlong *)CONCAT44(local_a8._4_4_,(undefined4)local_a8) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(local_a8._4_4_,(undefined4)local_a8) + 0x10))();
  }
  if (DAT_14c872bf2 == '\x01') {
    FUN_140056680(&local_a8,L" DEMO");
    FUN_145aa9142(&local_178,&local_a8);
    if (CONCAT44(local_a8._4_4_,(undefined4)local_a8) != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140009b9a(local_188,local_1d8);
  local_158 = (longlong *)0x0;
  plStack_150 = (longlong *)0x0;
  FUN_145c561ae(local_198,*(undefined4 *)(lVar4 + 0x260),local_f0);
  FUN_140009b9a(local_1a8,local_1e0);
  FUN_14598dd3c(&local_178,local_1c8);
  FUN_14023409e(&local_1b8,local_1c8,1);
  local_a8._0_4_ = 4;
  FUN_14023423e(local_98,local_1a8);
  local_88 = 4;
  FUN_14023423e(local_78,local_198);
  local_68 = 4;
  FUN_14023423e(local_58,local_188);
  local_c0 = &local_48;
  local_c8 = &local_a8;
  FUN_14010d304(&local_b8);
  local_d8 = local_1b8;
  local_d0 = local_1b0;
  if (local_1b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(&local_128,&local_d8,&local_b8);
  FUN_14007f2db(local_b8,(ulonglong)local_b0 & 0xffffffff);
  if (local_b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar8 = 0x50;
  do {
    if (*(longlong **)((longlong)&local_a8 + lVar8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)&local_a8 + lVar8) + 0x10))();
      *(undefined8 *)((longlong)&local_a8 + lVar8) = 0;
      *(undefined4 *)(local_98 + lVar8 + -8) = 0;
    }
    lVar8 = lVar8 + -0x20;
  } while (lVar8 != -0x10);
  if (local_1b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (local_198[0] != (longlong *)0x0) {
    (**(code **)(*local_198[0] + 0x10))();
  }
  if (local_188[0] != (longlong *)0x0) {
    (**(code **)(*local_188[0] + 0x10))();
  }
  if (*(int *)(lVar4 + 0x220) == 0) {
LAB_1442eb553:
    FUN_140008f88(lVar4 + 0x210,&local_128);
    *(int *)(lVar4 + 0x220) = *(int *)(lVar4 + 0x220) + 1;
  }
  else {
    cVar6 = FUN_144722c14(lVar4 + 0x210,&local_128,0);
    if (cVar6 == '\0') goto LAB_1442eb553;
  }
  if (local_128 != (longlong *)0x0) {
    (**(code **)(*local_128 + 0x10))();
  }
  if (local_1c8[0] != (longlong *)0x0) {
    (**(code **)(*local_1c8[0] + 0x10))();
  }
  plVar1 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_150 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  puVar5 = *(ushort **)(lVar4 + 0x80);
  if (puVar5 != (ushort *)0x0) {
    *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
  }
  FUN_1401b9920(local_178,uStack_170 & 0xffffffff);
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockShared(local_1d0);
LAB_1442eaf1d:
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442eb570 FUN_1442eb570 body=1093 status=ok
// SIG undefined FUN_1442eb570(void)

void FUN_1442eb570(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  char *pcVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_2,&local_48);
  FUN_140056680(&local_58,L"quit");
  if (local_40 == local_50) {
    bVar14 = true;
    if (1 < local_40) {
      lVar12 = 0;
      while( true ) {
        uVar1 = *(ushort *)(CONCAT44(uStack_44,local_48) + lVar12);
        uVar4 = (uint)uVar1;
        uVar2 = *(ushort *)(local_58 + lVar12);
        uVar13 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1442eb5f4;
          }
          iVar5 = uVar4 - uVar13;
          goto LAB_1442eb62f;
        }
        if (uVar1 == 0) break;
LAB_1442eb5f4:
        lVar12 = lVar12 + 2;
      }
      iVar5 = 0;
LAB_1442eb62f:
      bVar14 = iVar5 == 0;
    }
  }
  else {
    bVar14 = local_50 + local_40 == 1;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_44,local_48) != 0) {
    FUN_1400020a8();
  }
  if (bVar14) {
    if (((*(int *)((longlong)param_1 + 0x34) == 0) ||
        (uVar4 = *(uint *)(param_1 + 6), (int)uVar4 < 0)) || (DAT_14c9647dc <= (int)uVar4))
    goto LAB_1442eb920;
    plVar10 = (longlong *)
              ((ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if (((plVar10 == (longlong *)0x0) || ((int)plVar10[2] != *(int *)((longlong)param_1 + 0x34))) ||
       (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (*plVar10 == 0)))) goto LAB_1442eb920;
    lVar12 = FUN_140391a3c();
    if (lVar12 == 0) goto LAB_1442eb920;
    puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar7 = &PTR_FUN_14b98d208;
    *(undefined1 *)(puVar7 + 1) = 0;
  }
  else {
    lVar12 = *param_2;
    if (lVar12 == DAT_14cbdfae8) {
      FUN_148ec8fa6(param_1,1);
      goto LAB_1442eb920;
    }
    if (lVar12 == DAT_14cbdfbf0) {
      uVar6 = FUN_145cc8d90(param_1);
      FUN_148ebdf3e(param_1,uVar6);
      goto LAB_1442eb920;
    }
    if (lVar12 != DAT_14cbdfbf8) {
      if (lVar12 == DAT_14cbdfbe8) {
        if (((*(int *)((longlong)param_1 + 0x34) != 0) &&
            (uVar4 = *(uint *)(param_1 + 6), -1 < (int)uVar4)) && ((int)uVar4 < DAT_14c9647dc)) {
          plVar10 = (longlong *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if (((plVar10 != (longlong *)0x0) &&
              ((int)plVar10[2] == *(int *)((longlong)param_1 + 0x34))) &&
             (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (lVar12 = *plVar10, lVar12 != 0)))) {
            lVar8 = FUN_14101baae(lVar12);
            if (lVar8 != 0) {
              uVar9 = FUN_14101baae(lVar12);
              lVar8 = FUN_1401ca7f2(uVar9);
              if (((lVar8 != 0) && (param_1[0x51] != 0)) &&
                 (*(char *)(param_1[0x51] + 0x300) == '\0')) {
                cVar3 = FUN_148b76ab2(lVar8);
                if (cVar3 != '\0') {
                  (**(code **)(*param_1 + 0x108))(param_1,param_1 + 0x2e,1);
                  *(byte *)(param_1 + 0x53) = *(byte *)(param_1 + 0x53) | 0x40;
                  uVar9 = FUN_1407f492e(lVar12);
                  FUN_14400054e(lVar8,uVar9);
                }
              }
            }
          }
        }
      }
      else {
        FUN_14621db54(param_1,param_2,param_3);
      }
      goto LAB_1442eb920;
    }
    if ((param_1[0x51] == 0) || (*(int *)(param_1[0x51] + 0x280) == 0)) goto LAB_1442eb920;
    if (*(int *)((longlong)param_1 + 0x34) == 0) {
LAB_1442eb9af:
      uVar9 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 6);
      uVar9 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((puVar7 == (undefined8 *)0x0) ||
           ((*(int *)(puVar7 + 2) != *(int *)((longlong)param_1 + 0x34) ||
            ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_1442eb9af;
        uVar9 = *puVar7;
      }
    }
    lVar12 = FUN_140391a3c(uVar9);
    if ((lVar12 == 0) || (param_1[0x51] == 0)) goto LAB_1442eb920;
    iVar5 = *(int *)(param_1[0x51] + 0x280);
    puVar7 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    if (iVar5 == 3) {
      pcVar11 = "takedown_leave_db";
    }
    else if (iVar5 == 2) {
      pcVar11 = "true_activity_leave_db";
    }
    else {
      pcVar11 = "replay_leave_db";
    }
    local_40 = 0;
    uStack_44 = 0;
    FUN_14052b5e0(&local_48,pcVar11,0);
    *puVar7 = &PTR_FUN_14b9cb8b8;
    *(undefined4 *)(puVar7 + 2) = DAT_14c948620;
    puVar7[1] = DAT_14c948618;
    *(int *)((longlong)puVar7 + 0x1c) = local_40;
    *(ulonglong *)((longlong)puVar7 + 0x14) = CONCAT44(uStack_44,local_48);
  }
  FUN_14039144e(lVar12,puVar7);
LAB_1442eb920:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442eba8a FUN_1442eba8a body=821 status=ok
// SIG undefined FUN_1442eba8a(void)

void FUN_1442eba8a(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ushort *puVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  char *local_58;
  undefined4 local_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = *(longlong *)(param_1 + 0x288);
  if ((lVar6 == 0) || (*(char *)(lVar6 + 0x1da) != '\x01')) goto LAB_1442ebb34;
  FUN_1448d5e3c(&local_58,param_1 + 0x208);
  plVar7 = *(longlong **)(local_58 + 0x2e0);
  AcquireSRWLockShared((PSRWLOCK)(plVar7 + 6));
  plVar9 = (longlong *)CONCAT44(uStack_4c,local_50);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  iVar5 = *(int *)(lVar6 + 0x13c);
  if ((-1 < (longlong)iVar5) && (iVar5 < (int)plVar7[1])) {
    lVar12 = (longlong)iVar5 * 0x130;
    lVar3 = *plVar7 + lVar12;
    if (*(int *)(*plVar7 + 0xc0 + lVar12) < 1) {
      if (*(char *)(lVar3 + 0xcc) == '\x01') {
        puVar14 = (undefined8 *)FUN_14001cc68(0x48,0x10);
        uVar13 = *(undefined8 *)(param_1 + 0x30);
        *puVar14 = &PTR_FUN_14b9cbbd0;
        local_58 = "StartMissionReplay";
        local_50 = 0x12;
        uStack_4c = uStack_4c & 0xffffff00;
        uVar10 = FUN_14001a6c0(&local_58,1);
        FUN_14039176c(puVar14,uVar13,uVar10,1);
        *puVar14 = &PTR_FUN_14b9cbbd0;
        puVar14[7] = *(undefined8 *)(lVar3 + 0xd0);
        *(undefined4 *)(puVar14 + 8) = *(undefined4 *)(lVar3 + 0xd8);
      }
      else {
        puVar14 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        uVar10 = *(undefined4 *)(lVar3 + 0xdc);
        uVar13 = *(undefined8 *)(param_1 + 0x30);
        *puVar14 = &PTR_FUN_14b9cbc00;
        local_58 = "AcceptAndTrackMission";
        local_50 = 0x15;
        uStack_4c = uStack_4c & 0xffffff00;
        uVar11 = FUN_14001a6c0(&local_58,1);
        FUN_14039176c(puVar14,uVar13,uVar11,1);
        *puVar14 = &PTR_FUN_14b9cbc00;
        puVar14[7] = *(undefined8 *)(lVar3 + 0xd0);
        *(undefined4 *)(puVar14 + 8) = *(undefined4 *)(lVar3 + 0xd8);
        *(undefined4 *)((longlong)puVar14 + 0x44) = uVar10;
        *(char *)(puVar14 + 9) = param_2;
      }
      FUN_140391314(param_1,puVar14);
      if ((*(int *)(param_1 + 0x2b8) == 1) || (*(char *)(lVar6 + 0x1db) != '\0')) {
        uVar13 = FUN_14001cc68(0x30,0x10);
        FUN_145fcee1a(uVar13,*(undefined8 *)(param_1 + 0x30));
        FUN_140391314(param_1,uVar13);
        if (param_2 == '\0') {
LAB_1442ebd6d:
          puVar14 = &DAT_14cbdfd40;
        }
        else {
          *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(lVar6 + 0x13c);
          puVar14 = &DAT_14cbdfd50;
        }
LAB_1442ebd74:
        FUN_140de1078(param_1,puVar14,0,0);
      }
      else {
        cVar4 = *(char *)(*(longlong *)(param_1 + 0x2b0) + (longlong)*(int *)(lVar6 + 0x13c));
        *(undefined1 *)(*(longlong *)(param_1 + 0x2b0) + (longlong)*(int *)(lVar6 + 0x13c)) = 1;
        *(undefined1 *)(lVar6 + 0x1d9) = 1;
        if (param_2 != '\0') {
          *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(lVar6 + 0x13c);
          puVar14 = &DAT_14cbdfd50;
          if (cVar4 != '\0') {
            puVar14 = &DAT_14cbdfd60;
          }
          goto LAB_1442ebd74;
        }
        if (cVar4 == '\0') goto LAB_1442ebd6d;
      }
      FUN_1461cf404(param_1);
      FUN_141637cfe(param_1);
      FUN_1461ce72c(param_1);
      puVar8 = *(ushort **)(lVar6 + 0x80);
      if (puVar8 != (ushort *)0x0) {
        *puVar8 = *puVar8 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
      }
    }
    else {
      uVar13 = FUN_14001cc68(0x40,0x10);
      local_68 = *(undefined8 *)(lVar3 + 0xd0);
      local_60 = *(undefined4 *)(lVar3 + 0xd8);
      FUN_148eae6aa(uVar13,*(undefined8 *)(param_1 + 0x30));
      FUN_140391314(param_1,uVar13);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 6));
LAB_1442ebb34:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442ebe80 FUN_1442ebe80 body=1555 status=ok
// SIG undefined FUN_1442ebe80(void)

void FUN_1442ebe80(longlong param_1,uint param_2)

{
  longlong *plVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x1b0) <= (int)param_2)) goto LAB_1442ebea8;
  lVar5 = *(longlong *)(param_1 + 0x1a8);
  lVar9 = (ulonglong)param_2 * 0x90;
  if ((*(byte *)(lVar5 + 0x89 + lVar9) & 1) == 0) {
    plVar1 = (longlong *)(lVar5 + lVar9);
    bVar2 = *(byte *)(lVar5 + 0x88 + lVar9);
    *(byte *)(lVar5 + 0x88 + lVar9) = bVar2 ^ 0x40;
    lVar5 = param_1 + 0x358;
    if ((bVar2 & 0x40) == 0) {
      FUN_148eb01be(lVar5,plVar1);
      FUN_1400b22c2(&local_40,"main_mission");
      iVar8 = (int)plVar1[1];
      if (iVar8 == local_38) {
        bVar11 = true;
        if (1 < iVar8) {
          lVar9 = 0;
          while( true ) {
            uVar3 = *(ushort *)(*plVar1 + lVar9);
            uVar7 = (uint)uVar3;
            uVar4 = *(ushort *)(local_40 + lVar9);
            uVar10 = (uint)uVar4;
            if (uVar3 != uVar4) {
              if ((uVar4 | uVar3) < 0x80) {
                uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1442ebf77;
              }
              iVar8 = uVar7 - uVar10;
              goto LAB_1442ec062;
            }
            if (uVar3 == 0) break;
LAB_1442ebf77:
            lVar9 = lVar9 + 2;
          }
          iVar8 = 0;
LAB_1442ec062:
          bVar11 = iVar8 == 0;
        }
      }
      else {
        bVar11 = local_38 + iVar8 == 1;
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (bVar11) {
        FUN_1400b22c2(&local_40,"dlc_main_mission");
        FUN_148eb01be(lVar5,&local_40);
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_1400b22c2(&local_40,"side_mission");
      iVar8 = (int)plVar1[1];
      if (iVar8 == local_38) {
        bVar11 = true;
        if (1 < iVar8) {
          lVar9 = 0;
          while( true ) {
            uVar3 = *(ushort *)(*plVar1 + lVar9);
            uVar7 = (uint)uVar3;
            uVar4 = *(ushort *)(local_40 + lVar9);
            uVar10 = (uint)uVar4;
            if (uVar3 != uVar4) {
              if ((uVar4 | uVar3) < 0x80) {
                uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1442ec0d0;
              }
              iVar8 = uVar7 - uVar10;
              goto LAB_1442ec1c0;
            }
            if (uVar3 == 0) break;
LAB_1442ec0d0:
            lVar9 = lVar9 + 2;
          }
          iVar8 = 0;
LAB_1442ec1c0:
          bVar11 = iVar8 == 0;
        }
      }
      else {
        bVar11 = local_38 + iVar8 == 1;
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (bVar11) {
        FUN_1400b22c2(&local_40,"dlc_side_mission");
        FUN_148eb01be(lVar5,&local_40);
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_1400b22c2(&local_40,"faction_mission");
      iVar8 = (int)plVar1[1];
      if (iVar8 == local_38) {
        bVar11 = true;
        if (1 < iVar8) {
          lVar9 = 0;
          while( true ) {
            uVar3 = *(ushort *)(*plVar1 + lVar9);
            uVar7 = (uint)uVar3;
            uVar4 = *(ushort *)(local_40 + lVar9);
            uVar10 = (uint)uVar4;
            if (uVar3 != uVar4) {
              if ((uVar4 | uVar3) < 0x80) {
                uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1442ec22e;
              }
              iVar8 = uVar7 - uVar10;
              goto LAB_1442ec314;
            }
            if (uVar3 == 0) break;
LAB_1442ec22e:
            lVar9 = lVar9 + 2;
          }
          iVar8 = 0;
LAB_1442ec314:
          bVar11 = iVar8 == 0;
        }
      }
      else {
        bVar11 = local_38 + iVar8 == 1;
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (bVar11) {
        FUN_1400b22c2(&local_40,"dlc_faction_mission");
        FUN_148eb01be(lVar5,&local_40);
LAB_1442ec47e:
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      FUN_148eb0334(lVar5,plVar1);
      FUN_1400b22c2(&local_40,"main_mission");
      iVar8 = (int)plVar1[1];
      if (iVar8 == local_38) {
        bVar11 = true;
        if (1 < iVar8) {
          lVar9 = 0;
          while( true ) {
            uVar3 = *(ushort *)(*plVar1 + lVar9);
            uVar7 = (uint)uVar3;
            uVar4 = *(ushort *)(local_40 + lVar9);
            uVar10 = (uint)uVar4;
            if (uVar3 != uVar4) {
              if ((uVar4 | uVar3) < 0x80) {
                uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1442ec011;
              }
              iVar8 = uVar7 - uVar10;
              goto LAB_1442ec111;
            }
            if (uVar3 == 0) break;
LAB_1442ec011:
            lVar9 = lVar9 + 2;
          }
          iVar8 = 0;
LAB_1442ec111:
          bVar11 = iVar8 == 0;
        }
      }
      else {
        bVar11 = local_38 + iVar8 == 1;
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (bVar11) {
        FUN_1400b22c2(&local_40,"dlc_main_mission");
        FUN_148eb0334(lVar5,&local_40);
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_1400b22c2(&local_40,"side_mission");
      iVar8 = (int)plVar1[1];
      if (iVar8 == local_38) {
        bVar11 = true;
        if (1 < iVar8) {
          lVar9 = 0;
          while( true ) {
            uVar3 = *(ushort *)(*plVar1 + lVar9);
            uVar7 = (uint)uVar3;
            uVar4 = *(ushort *)(local_40 + lVar9);
            uVar10 = (uint)uVar4;
            if (uVar3 != uVar4) {
              if ((uVar4 | uVar3) < 0x80) {
                uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1442ec17f;
              }
              iVar8 = uVar7 - uVar10;
              goto LAB_1442ec26f;
            }
            if (uVar3 == 0) break;
LAB_1442ec17f:
            lVar9 = lVar9 + 2;
          }
          iVar8 = 0;
LAB_1442ec26f:
          bVar11 = iVar8 == 0;
        }
      }
      else {
        bVar11 = local_38 + iVar8 == 1;
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (bVar11) {
        FUN_1400b22c2(&local_40,"dlc_side_mission");
        FUN_148eb0334(lVar5,&local_40);
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_1400b22c2(&local_40,"faction_mission");
      iVar8 = (int)plVar1[1];
      if (iVar8 == local_38) {
        bVar11 = true;
        if (1 < iVar8) {
          lVar9 = 0;
          while( true ) {
            uVar3 = *(ushort *)(*plVar1 + lVar9);
            uVar7 = (uint)uVar3;
            uVar4 = *(ushort *)(local_40 + lVar9);
            uVar10 = (uint)uVar4;
            if (uVar3 != uVar4) {
              if ((uVar4 | uVar3) < 0x80) {
                uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1442ec2d9;
              }
              iVar8 = uVar7 - uVar10;
              goto LAB_1442ec34f;
            }
            if (uVar3 == 0) break;
LAB_1442ec2d9:
            lVar9 = lVar9 + 2;
          }
          iVar8 = 0;
LAB_1442ec34f:
          bVar11 = iVar8 == 0;
        }
      }
      else {
        bVar11 = local_38 + iVar8 == 1;
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (bVar11) {
        FUN_1400b22c2(&local_40,"dlc_faction_mission");
        FUN_148eb0334(lVar5,&local_40);
        goto LAB_1442ec47e;
      }
    }
  }
  else {
    FUN_148e6a14e(param_1 + 0x150);
  }
  puVar6 = *(ushort **)(param_1 + 0x80);
  if (puVar6 != (ushort *)0x0) {
    *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
LAB_1442ebea8:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ec4b4 FUN_1442ec4b4 body=86 status=ok
// SIG undefined FUN_1442ec4b4(void)

longlong FUN_1442ec4b4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 0x10) <= lVar1 + 0x12U) {
    FUN_140213274(param_1,9);
    lVar1 = *(longlong *)(param_1 + 8);
  }
  lVar2 = 0;
  do {
    *(short *)(lVar1 + lVar2 * 2) = (short)"UI.State."[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 9);
  *(longlong *)(param_1 + 8) = lVar1 + 0x12;
  return param_1;
}



// FUNCTION 1442ec50a FUN_1442ec50a body=49 status=ok
// SIG undefined FUN_1442ec50a(void)

longlong FUN_1442ec50a(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ec53c FUN_1442ec53c body=95 status=ok
// SIG undefined FUN_1442ec53c(void)

ulonglong * FUN_1442ec53c(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "DownloadAndSelectCloudCharacter";
  local_18 = 0x1f;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ec59c FUN_1442ec59c body=49 status=ok
// SIG undefined FUN_1442ec59c(void)

longlong FUN_1442ec59c(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ec5ce FUN_1442ec5ce body=95 status=ok
// SIG undefined FUN_1442ec5ce(void)

ulonglong * FUN_1442ec5ce(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "SynchronizeAndSelectCloudCharacter";
  local_18 = 0x22;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ec62e FUN_1442ec62e body=49 status=ok
// SIG undefined FUN_1442ec62e(void)

longlong FUN_1442ec62e(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ec660 FUN_1442ec660 body=95 status=ok
// SIG undefined FUN_1442ec660(void)

ulonglong * FUN_1442ec660(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "UploadCharacterToCloud";
  local_18 = 0x16;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ec6c0 FUN_1442ec6c0 body=49 status=ok
// SIG undefined FUN_1442ec6c0(void)

longlong FUN_1442ec6c0(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ec6f2 FUN_1442ec6f2 body=95 status=ok
// SIG undefined FUN_1442ec6f2(void)

ulonglong * FUN_1442ec6f2(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "DeleteCharacterFromCloud";
  local_18 = 0x18;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ec752 FUN_1442ec752 body=95 status=ok
// SIG undefined FUN_1442ec752(void)

ulonglong * FUN_1442ec752(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "StartMissionReplay";
  local_18 = 0x12;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ec7b2 FUN_1442ec7b2 body=29 status=ok
// SIG undefined FUN_1442ec7b2(void)

undefined8 FUN_1442ec7b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ec7ee FUN_1442ec7ee body=319 status=ok
// SIG undefined FUN_1442ec7ee(void)

undefined8 FUN_1442ec7ee(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = (longlong)param_2 * 0x88;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar8 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 >> 4]];
      }
      else {
        if ((uVar8 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar8 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar9 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_1442ec857;
            lVar1 = uVar6 + 1 + uVar9;
            uVar9 = uVar9 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar8 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1442ec857:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar5;
  uVar4 = SUB168(auVar3 * ZEXT816(0xf0f0f0f0f0f0f0f1),0);
  uVar8 = 0x7fffffff;
  if (param_2 <= (int)(uVar5 / 0x88)) {
    uVar8 = uVar5 / 0x88 & 0xffffffff;
  }
  iVar7 = (int)uVar8;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  else {
    uVar4 = FUN_1446f8d3c(param_1,0,uVar8,0x88,8);
  }
  *(int *)(param_1 + 0xc) = iVar7;
  return uVar4;
}



// FUNCTION 1442ec92d FUN_1442ec92d body=240 status=ok
// SIG undefined FUN_1442ec92d(void)

void FUN_1442ec92d(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(param_1 + 0x78);
  do {
    puVar6[-0xf] = *param_2;
    plVar2 = (longlong *)param_2[1];
    puVar6[-0xe] = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    *(undefined4 *)(puVar6 + -0xd) = *(undefined4 *)(param_2 + 2);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar4 = *(undefined4 *)(param_2 + 4);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
    *(undefined4 *)(puVar6 + -0xc) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)puVar6 + -0x5c) = uVar3;
    *(undefined4 *)(puVar6 + -0xb) = uVar4;
    *(undefined4 *)((longlong)puVar6 + -0x54) = uVar5;
    puVar6[-6] = 0;
    *(undefined4 *)(puVar6 + -5) = 0;
    puVar6[-10] = 0;
    puVar6[-9] = 0;
    *(undefined8 *)((longlong)puVar6 + -0x24) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar6 + -0x1c) = 0;
    puVar6[-2] = 0;
    *(undefined4 *)(puVar6 + -1) = 0;
    FUN_144275d94(puVar6 + -10,param_2 + 5);
    *puVar6 = 0;
    iVar1 = *(int *)(param_2 + 0x10);
    _Src = (void *)param_2[0xf];
    *(int *)(puVar6 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    }
    else {
      FUN_1411e2848(puVar6,iVar1,0);
      memcpy((void *)*puVar6,_Src,(longlong)iVar1 << 3);
    }
    puVar6 = puVar6 + 0x11;
    param_2 = param_2 + 0x11;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1442eca1e FUN_1442eca1e body=134 status=ok
// SIG undefined FUN_1442eca1e(void)

undefined4 FUN_1442eca1e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_38 = DAT_14cb92b60;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148eb28c4(param_1,lVar4,param_2);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ecae0 FUN_1442ecae0 body=12 status=ok
// SIG undefined FUN_1442ecae0(void)

void FUN_1442ecae0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442ecae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442ecaec FUN_1442ecaec body=29 status=ok
// SIG undefined FUN_1442ecaec(void)

undefined8 FUN_1442ecaec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ecbd6 FUN_1442ecbd6 body=12 status=ok
// SIG undefined FUN_1442ecbd6(void)

void FUN_1442ecbd6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442ecbdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442ecbe2 FUN_1442ecbe2 body=29 status=ok
// SIG undefined FUN_1442ecbe2(void)

undefined8 FUN_1442ecbe2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ecc48 FUN_1442ecc48 body=29 status=ok
// SIG undefined FUN_1442ecc48(void)

undefined8 FUN_1442ecc48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442eccac FUN_1442eccac body=12 status=ok
// SIG undefined FUN_1442eccac(void)

void FUN_1442eccac(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442eccb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442eccb8 FUN_1442eccb8 body=29 status=ok
// SIG undefined FUN_1442eccb8(void)

undefined8 FUN_1442eccb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


