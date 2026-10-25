// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143d31f24 FUN_143d31f24 body=29 status=ok
// SIG undefined FUN_143d31f24(void)

undefined8 FUN_143d31f24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d320c0 FUN_143d320c0 body=93 status=ok
// SIG undefined FUN_143d320c0(void)

void FUN_143d320c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fd1f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d3211e FUN_143d3211e body=93 status=ok
// SIG undefined FUN_143d3211e(void)

void FUN_143d3211e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fd1f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d3217c FUN_143d3217c body=126 status=ok
// SIG undefined FUN_143d3217c(void)

void FUN_143d3217c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fd1f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d321eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d32204 FUN_143d32204 body=302 status=ok
// SIG undefined FUN_143d32204(void)

undefined8 FUN_143d32204(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143d3232b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d3232b;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
  }
  else {
LAB_143d3232b:
    local_48 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d322d7;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1405024be(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_143d322d7;
    }
  }
  uVar6 = 0;
LAB_143d322d7:
  if ((local_48 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d32334 FUN_143d32334 body=29 status=ok
// SIG undefined FUN_143d32334(void)

undefined8 FUN_143d32334(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d324dc FUN_143d324dc body=93 status=ok
// SIG undefined FUN_143d324dc(void)

void FUN_143d324dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fd2d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fd260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d3253a FUN_143d3253a body=93 status=ok
// SIG undefined FUN_143d3253a(void)

void FUN_143d3253a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fd2d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fd260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d32598 FUN_143d32598 body=126 status=ok
// SIG undefined FUN_143d32598(void)

void FUN_143d32598(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fd2d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fd260;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d32607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d32622 FUN_143d32622 body=275 status=ok
// SIG undefined FUN_143d32622(void)

undefined8 FUN_143d32622(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_143d3272f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d3272f;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143d3272f:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d326e2;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1411c1b34(*(undefined8 *)(param_1 + 0x20),param_3);
      uVar6 = 1;
      goto LAB_143d326e2;
    }
  }
  uVar6 = 0;
LAB_143d326e2:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d32736 FUN_143d32736 body=29 status=ok
// SIG undefined FUN_143d32736(void)

undefined8 FUN_143d32736(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d32768 FUN_143d32768 body=93 status=ok
// SIG undefined FUN_143d32768(void)

void FUN_143d32768(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fd3b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fd340;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d327c6 FUN_143d327c6 body=93 status=ok
// SIG undefined FUN_143d327c6(void)

void FUN_143d327c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fd3b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fd340;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d32824 FUN_143d32824 body=126 status=ok
// SIG undefined FUN_143d32824(void)

void FUN_143d32824(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fd3b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fd340;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d32893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d328f2 FUN_143d328f2 body=93 status=ok
// SIG undefined FUN_143d328f2(void)

undefined8 FUN_143d328f2(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (((*(int *)(param_1 + 0x24) != 0) && (uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x24))) {
      if ((*(uint *)(lVar2 + 8) & 0x10200000) == 0) {
        FUN_145c7fa32(*(undefined8 *)(param_1 + 0x18));
      }
    }
  }
  return 1;
}



// FUNCTION 143d32950 FUN_143d32950 body=29 status=ok
// SIG undefined FUN_143d32950(void)

undefined8 FUN_143d32950(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d32aec FUN_143d32aec body=93 status=ok
// SIG undefined FUN_143d32aec(void)

void FUN_143d32aec(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fd420;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d32b4a FUN_143d32b4a body=93 status=ok
// SIG undefined FUN_143d32b4a(void)

void FUN_143d32b4a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fd420;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d32ba8 FUN_143d32ba8 body=126 status=ok
// SIG undefined FUN_143d32ba8(void)

void FUN_143d32ba8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fd420;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d32c17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d32c30 FUN_143d32c30 body=266 status=ok
// SIG undefined FUN_143d32c30(void)

undefined8 FUN_143d32c30(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143d32d34;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d32d34;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143d32d34:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d32ce8;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1405a3816(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_143d32ce8;
    }
  }
  uVar6 = 0;
LAB_143d32ce8:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d32d3c FUN_143d32d3c body=29 status=ok
// SIG undefined FUN_143d32d3c(void)

undefined8 FUN_143d32d3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d32ed8 FUN_143d32ed8 body=101 status=ok
// SIG undefined FUN_143d32ed8(void)

void FUN_143d32ed8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fd490;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143d32f3e FUN_143d32f3e body=101 status=ok
// SIG undefined FUN_143d32f3e(void)

void FUN_143d32f3e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fd490;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143d32fa4 FUN_143d32fa4 body=134 status=ok
// SIG undefined FUN_143d32fa4(void)

void FUN_143d32fa4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fd490;
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
                    /* WARNING: Could not recover jumptable at 0x000143d3301b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d3303e FUN_143d3303e body=282 status=ok
// SIG undefined FUN_143d3303e(void)

undefined8 FUN_143d3303e(longlong param_1,longlong param_2)

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
    if (iVar1 == 2) goto LAB_143d33152;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d33152;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143d33152:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d33105;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1405a4872(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),param_2 + 0x38);
      uVar6 = 1;
      goto LAB_143d33105;
    }
  }
  uVar6 = 0;
LAB_143d33105:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d3315a FUN_143d3315a body=29 status=ok
// SIG undefined FUN_143d3315a(void)

undefined8 FUN_143d3315a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d332f6 FUN_143d332f6 body=101 status=ok
// SIG undefined FUN_143d332f6(void)

void FUN_143d332f6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fd500;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143d3335c FUN_143d3335c body=101 status=ok
// SIG undefined FUN_143d3335c(void)

void FUN_143d3335c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fd500;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143d333c2 FUN_143d333c2 body=134 status=ok
// SIG undefined FUN_143d333c2(void)

void FUN_143d333c2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fd500;
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
                    /* WARNING: Could not recover jumptable at 0x000143d33439. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d33452 FUN_143d33452 body=269 status=ok
// SIG undefined FUN_143d33452(void)

undefined8 FUN_143d33452(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143d33559;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d33559;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143d33559:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d3350d;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143d33560(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143d3350d;
    }
  }
  uVar6 = 0;
LAB_143d3350d:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d33560 FUN_143d33560 body=130 status=ok
// SIG undefined FUN_143d33560(void)

void FUN_143d33560(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = (ulonglong)(int)param_1[1];
  if ((-1 < (longlong)uVar3) && (lVar1 = *param_1, (int)param_1[1] < *(int *)(lVar1 + 0x38))) {
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x98 + uVar3 * 0xa8);
    if (lVar2 == 0) {
      local_28 = 0;
      uStack_20 = 0;
    }
    else {
      FUN_140a2633e(lVar2,&local_28);
      uVar3 = (ulonglong)*(uint *)(param_1 + 1);
    }
    FUN_1405a4872(lVar1,uVar3,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d335f1 FUN_143d335f1 body=39 status=ok
// SIG undefined FUN_143d335f1(void)

void FUN_143d335f1(longlong param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  return;
}



// FUNCTION 143d33618 FUN_143d33618 body=122 status=ok
// SIG undefined FUN_143d33618(void)

void FUN_143d33618(longlong *param_1,int param_2)

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



// FUNCTION 143d336a0 FUN_143d336a0 body=394 status=ok
// SIG undefined FUN_143d336a0(void)

undefined8 * FUN_143d336a0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b3fdaa0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  if (param_1[0xad] != 0) {
    FUN_1400020a8();
  }
  FUN_14654d6de(param_1 + 0xa5);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  if (param_1[0xa3] != 0) {
    FUN_1400020a8();
  }
  FUN_146149bb4(param_1 + 0x9b);
  *(undefined4 *)(param_1 + 0x9a) = 0;
  if (param_1[0x99] != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(param_1 + 0x91);
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_14654d714(param_1 + 0x87);
  *(undefined4 *)(param_1 + 0x86) = 0;
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  FUN_14654d74a(param_1 + 0x7d);
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145c9c11c(param_1 + 7);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d3382a FUN_143d3382a body=113 status=ok
// SIG undefined FUN_143d3382a(void)

void FUN_143d3382a(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447a08a2(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d3389c FUN_143d3389c body=93 status=ok
// SIG undefined FUN_143d3389c(void)

void FUN_143d3389c(longlong *param_1,int param_2)

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
  FUN_143d338fa(param_1,param_2,1);
  return;
}



// FUNCTION 143d338fa FUN_143d338fa body=96 status=ok
// SIG undefined FUN_143d338fa(void)

void FUN_143d338fa(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_3 != 0) {
    plVar3 = (longlong *)(*param_1 + (longlong)param_2 * 0x18 + 8);
    iVar2 = param_3;
    do {
      plVar1 = (longlong *)*plVar3;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x90))(plVar1,1);
      }
      plVar3 = plVar3 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_143d3395a(param_1,param_2,param_3);
  return;
}



// FUNCTION 143d3395a FUN_143d3395a body=136 status=ok
// SIG undefined FUN_143d3395a(void)

void FUN_143d3395a(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143d339e2 FUN_143d339e2 body=1627 status=ok
// SIG undefined FUN_143d339e2(void)

void FUN_143d339e2(longlong *param_1,uint *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  ulonglong uVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar19 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar19 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) == uVar19) {
      FUN_14482b872(param_1,uVar19);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar12 = iVar20 + -1;
      }
      iVar12 = iVar12 >> 5;
    }
    plVar10 = param_1 + 2;
    iVar13 = iVar20 + 1;
    iVar16 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar16 = iVar20;
    }
    if (iVar16 >> 5 == iVar12) {
      *(int *)(param_1 + 5) = iVar13;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        iVar12 = iVar20;
        if (iVar20 + 0x20U < 0xa0) {
          iVar13 = 0x80;
        }
        else {
          uVar7 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar22 = 4;
            if (4 < uVar7) {
              uVar22 = uVar7;
            }
          }
          else {
            uVar22 = uVar7 + (uVar7 * 3 >> 3) + 0x10;
          }
          uVar15 = (ulonglong)(uVar22 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar6 = (uint)(uVar15 + 0xf);
              if (uVar22 < 0x1ffd) {
                uVar15 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar15 + 0xf >> 4]];
              }
              else {
                uVar18 = (ulonglong)(uVar6 & 0xfffffff0);
                if (uVar18 < 0x7ff1) {
                  bVar11 = (&DAT_14c841e00)[uVar6 >> 4];
                  uVar21 = 0x32;
                  if (0x32 < bVar11) {
                    uVar21 = (ulonglong)bVar11;
                  }
                  uVar24 = 0x32 - (ulonglong)bVar11;
                  do {
                    uVar15 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar24 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar24 & 0xffffffff] & 0xf) == 0) goto LAB_143d33f50;
                    lVar9 = uVar21 + 1 + uVar24;
                    uVar24 = uVar24 - 1;
                  } while (lVar9 != 0x33);
                }
                uVar15 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar15 = (ulonglong)DAT_14c841df8;
                }
                uVar15 = -uVar15 & (uVar18 + uVar15) - 1;
              }
            }
            else {
              uVar15 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar15,0);
              iVar12 = (int)param_1[5];
            }
          }
LAB_143d33f50:
          iVar8 = (int)(uVar15 >> 2);
          iVar13 = -0x20;
          if ((int)uVar7 <= iVar8) {
            iVar13 = iVar8 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar13;
        FUN_1446efbd8(plVar10,iVar12);
        iVar13 = (int)param_1[5] + 1;
      }
      iVar12 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar12 = iVar13;
      }
      *(int *)(param_1 + 5) = iVar13;
      if (iVar13 % 0x20 != 0) {
        plVar17 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar17 = plVar10;
        }
        bVar11 = -(char)(iVar13 % 0x20);
        *(uint *)((longlong)plVar17 + (longlong)(iVar12 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar12 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
    }
    lVar9 = (longlong)(int)uVar19;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[4];
    }
    bVar11 = (byte)iVar20 & 0x1f;
    puVar2 = (uint *)((longlong)plVar10 + (longlong)(iVar16 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
  }
  else {
    uVar19 = *(uint *)(param_1 + 6);
    lVar9 = (longlong)(int)uVar19;
    iVar20 = *(int *)(*param_1 + 4 + lVar9 * 0x18);
    *(int *)(param_1 + 6) = iVar20;
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0x18) = 0xffffffff;
    }
  }
  puVar2 = (uint *)(param_1 + 2);
  puVar14 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar14 = puVar2;
  }
  uVar7 = uVar19 + 0x1f;
  if (-1 < (int)uVar19) {
    uVar7 = uVar19;
  }
  puVar14[(int)uVar7 >> 5] = puVar14[(int)uVar7 >> 5] | 1 << ((byte)uVar19 & 0x1f);
  puVar14 = (uint *)(*param_1 + lVar9 * 0x18);
  uVar7 = *(uint *)*param_3;
  *puVar14 = uVar7;
  puVar14[2] = 0;
  puVar14[3] = 0;
  puVar14[4] = 0xffffffff;
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    uVar22 = *(uint *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar7) * 4);
    if (uVar22 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*param_1 + (longlong)(int)uVar22 * 0x18);
        if (*puVar1 == uVar7) {
          plVar10 = *(longlong **)(puVar1 + 2);
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x90))(plVar10,1);
          }
          uVar6 = puVar14[1];
          uVar3 = puVar14[2];
          uVar4 = puVar14[3];
          *puVar1 = *puVar14;
          puVar1[1] = uVar6;
          puVar1[2] = uVar3;
          puVar1[3] = uVar4;
          FUN_143d3395a(param_1,uVar19,1);
          cVar5 = '\x01';
          goto LAB_143d33b63;
        }
        uVar22 = puVar1[4];
      } while (uVar22 != 0xffffffff);
    }
  }
  cVar5 = '\0';
  uVar22 = uVar19;
LAB_143d33b63:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar5;
  }
  if (cVar5 != '\0') goto LAB_143d33cde;
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar19 = 1;
  if (3 < uVar6) {
    uVar15 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
    lVar9 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar9 & 0x1f);
  }
  if (((int)uVar6 < 1) || ((int)uVar19 <= (int)param_1[9])) {
    uVar7 = (int)param_1[9] - 1U & uVar7;
    puVar14[5] = uVar7;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    puVar14[4] = *(uint *)((longlong)plVar10 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(uint *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         uVar22;
    goto LAB_143d33cde;
  }
  *(uint *)(param_1 + 9) = uVar19;
  plVar10 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar10,0,0,4);
    uVar19 = *(uint *)(param_1 + 9);
  }
  if (uVar19 == 0) goto LAB_143d33cde;
  plVar17 = param_1 + 7;
  if (uVar19 == 1) {
    if (*plVar10 != 0) {
      FUN_1446efa72(plVar10,0,0,4);
    }
LAB_143d33be7:
    uVar7 = 0;
    do {
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar17;
      }
      *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
           0xffffffff;
      uVar7 = uVar7 + 1;
    } while (uVar19 != uVar7);
  }
  else {
    FUN_1446efa72(plVar10,0,uVar19,4);
    if (0 < (int)uVar19) goto LAB_143d33be7;
  }
  iVar20 = (int)param_1[5];
  if (iVar20 == 0) {
    uVar15 = 0;
    uVar18 = 1;
    iVar13 = 0;
    iVar12 = 0;
  }
  else {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = puVar2;
    }
    uVar19 = *puVar14;
    if (uVar19 == 0) {
      iVar12 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar12 = iVar20 + -1;
      }
      uVar15 = 0;
      uVar18 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar18 = uVar15;
      }
      iVar13 = 0;
      do {
        if (uVar18 == uVar15) goto LAB_143d33cde;
        iVar13 = iVar13 + 0x20;
        uVar19 = puVar14[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar15 = 0;
      iVar13 = 0;
    }
    uVar18 = (ulonglong)(-uVar19 & uVar19);
    uVar21 = uVar18 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar12 = (iVar13 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar20 <= iVar12) {
      iVar12 = iVar20;
    }
  }
  if (iVar12 < iVar20) {
    uVar19 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar23 = (longlong)iVar12;
      uVar21 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar9 + lVar23 * 0x18);
      iVar20 = (int)uVar21;
      *(int *)(lVar9 + 0x14 + lVar23 * 0x18) = iVar20;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar17;
      }
      *(undefined4 *)(lVar9 + 0x10 + lVar23 * 0x18) =
           *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar21) * 4);
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar17;
      }
      *(int *)((longlong)plVar10 + ((longlong)iVar20 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
      ;
      uVar19 = ~(uint)uVar18 & uVar19;
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puVar2;
      }
      iVar20 = (int)param_1[5];
      iVar12 = (int)uVar15;
      lVar9 = (longlong)iVar12;
      uVar7 = puVar14[lVar9] & uVar19;
      if (uVar7 == 0) {
        iVar16 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar16 = iVar20 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar8 = iVar16;
        if (iVar16 < iVar12) {
          iVar8 = iVar12;
        }
        if (iVar16 <= iVar12) break;
        lVar23 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar7 = puVar14[lVar9 + lVar23 + 1];
          if (uVar7 != 0) break;
          lVar23 = lVar23 + 1;
          if (iVar8 - lVar9 == lVar23) goto LAB_143d33cde;
        }
        uVar15 = (ulonglong)(iVar12 + (int)lVar23 + 1);
        uVar19 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar7 & uVar7);
      uVar21 = uVar18 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar12 = (iVar13 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar20);
  }
LAB_143d33cde:
  *param_2 = uVar22;
  return;
}



// FUNCTION 143d3403e FUN_143d3403e body=104 status=ok
// SIG undefined FUN_143d3403e(void)

undefined8 FUN_143d3403e(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_143d3389c(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 143d340a6 FUN_143d340a6 body=48 status=ok
// SIG undefined FUN_143d340a6(void)

void FUN_143d340a6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 143d340d6 FUN_143d340d6 body=29 status=ok
// SIG undefined FUN_143d340d6(void)

undefined8 FUN_143d340d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d34108 FUN_143d34108 body=93 status=ok
// SIG undefined FUN_143d34108(void)

void FUN_143d34108(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fdcc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d34166 FUN_143d34166 body=93 status=ok
// SIG undefined FUN_143d34166(void)

void FUN_143d34166(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fdcc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d341c4 FUN_143d341c4 body=126 status=ok
// SIG undefined FUN_143d341c4(void)

void FUN_143d341c4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c7440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fdcc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d34233. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d34242 FUN_143d34242 body=66 status=ok
// SIG undefined FUN_143d34242(void)

void FUN_143d34242(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143d342cc(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d34286 FUN_143d34286 body=68 status=ok
// SIG undefined FUN_143d34286(void)

undefined8 FUN_143d34286(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143d342cc(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d342cc FUN_143d342cc body=167 status=ok
// SIG undefined FUN_143d342cc(void)

void FUN_143d342cc(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [40];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    uVar1 = *param_1;
    uVar2 = FUN_140427846();
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140427846();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
        (**(code **)(*plVar4 + 0x50))(plVar4,local_50);
        FUN_145a9ee68(uVar1,local_50);
        if (local_28 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d34374 FUN_143d34374 body=29 status=ok
// SIG undefined FUN_143d34374(void)

undefined8 FUN_143d34374(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d343a6 FUN_143d343a6 body=93 status=ok
// SIG undefined FUN_143d343a6(void)

void FUN_143d343a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fdd30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d34404 FUN_143d34404 body=93 status=ok
// SIG undefined FUN_143d34404(void)

void FUN_143d34404(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fdd30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d34462 FUN_143d34462 body=126 status=ok
// SIG undefined FUN_143d34462(void)

void FUN_143d34462(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fc100;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fdd30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d344d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d344ea FUN_143d344ea body=20 status=ok
// SIG undefined FUN_143d344ea(void)

undefined1 FUN_143d344ea(longlong param_1)

{
  FUN_143d344fe(param_1 + 0x18);
  return 1;
}



// FUNCTION 143d344fe FUN_143d344fe body=607 status=ok
// SIG undefined FUN_143d344fe(void)

void FUN_143d344fe(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  uint local_54 [2];
  uint local_4c;
  uint local_48;
  uint local_40;
  uint local_3c;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *param_3;
  uVar2 = *(undefined4 *)(param_3 + 1);
  lVar4 = *param_1;
  FUN_140ac173c(local_54);
  if (local_4c != 0) {
    uVar7 = local_4c >> 0xd ^ local_54[0] - local_4c;
    uVar5 = uVar7 << 8 ^ (-0x61c88647 - local_4c) - uVar7;
    uVar10 = uVar5 >> 0xd ^ (local_4c - uVar7) - uVar5;
    uVar7 = uVar10 >> 0xc ^ (uVar7 - uVar5) - uVar10;
    uVar5 = uVar7 << 0x10 ^ (uVar5 - uVar10) - uVar7;
    uVar10 = uVar5 >> 5 ^ (uVar10 - uVar7) - uVar5;
    uVar7 = uVar10 >> 3 ^ (uVar7 - uVar5) - uVar10;
    uVar5 = uVar7 << 10 ^ (uVar5 - uVar10) - uVar7;
    local_54[0] = uVar5 >> 0xf ^ uVar10 - (uVar7 + uVar5);
  }
  if (local_40 != 0) {
    uVar5 = local_40 >> 0xd ^ local_48 - local_40;
    uVar7 = uVar5 << 8 ^ (-0x61c88647 - local_40) - uVar5;
    uVar11 = uVar7 >> 0xd ^ (local_40 - uVar5) - uVar7;
    uVar10 = uVar11 >> 0xc ^ (uVar5 - uVar7) - uVar11;
    uVar5 = uVar10 << 0x10 ^ (uVar7 - uVar11) - uVar10;
    uVar11 = uVar5 >> 5 ^ (uVar11 - uVar10) - uVar5;
    uVar7 = uVar11 >> 3 ^ (uVar10 - uVar5) - uVar11;
    uVar5 = uVar7 << 10 ^ (uVar5 - uVar11) - uVar7;
    local_48 = uVar5 >> 0xf ^ uVar11 - (uVar7 + uVar5);
  }
  plVar1 = (longlong *)(lVar4 + 0x528);
  if (local_34 != 0) {
    uVar7 = local_34 >> 0xd ^ local_3c - local_34;
    uVar5 = uVar7 << 8 ^ (-0x61c88647 - local_34) - uVar7;
    uVar10 = uVar5 >> 0xd ^ (local_34 - uVar7) - uVar5;
    uVar7 = uVar10 >> 0xc ^ (uVar7 - uVar5) - uVar10;
    uVar5 = uVar7 << 0x10 ^ (uVar5 - uVar10) - uVar7;
    uVar10 = uVar5 >> 5 ^ (uVar10 - uVar7) - uVar5;
    uVar7 = uVar10 >> 3 ^ (uVar7 - uVar5) - uVar10;
    uVar5 = uVar7 << 10 ^ (uVar5 - uVar10) - uVar7;
    local_3c = uVar5 >> 0xf ^ uVar10 - (uVar7 + uVar5);
  }
  iVar6 = FUN_140ac163e(plVar1,local_48 ^ local_54[0] ^ local_3c,local_54);
  if ((iVar6 != -1) &&
     (lVar8 = (longlong)iVar6 * 0xb0 + *plVar1, lVar9 = lVar8 + 0x28, lVar9 != 0 && lVar8 != 0)) {
    local_68 = uVar3;
    local_60 = uVar2;
    FUN_14573f7b0(lVar4,lVar9,&local_68,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d3475e FUN_143d3475e body=114 status=ok
// SIG undefined FUN_143d3475e(void)

void FUN_143d3475e(longlong *param_1,int param_2)

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



// FUNCTION 143d347d0 FUN_143d347d0 body=265 status=ok
// SIG undefined FUN_143d347d0(void)

void FUN_143d347d0(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x300;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x300)) {
      uVar5 = uVar4 / 0x300 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x300,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143d34992 FUN_143d34992 body=2710 status=ok
// SIG undefined FUN_143d34992(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d34992(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  wchar_t *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  ram0x00014cb7bf2c = 0;
  FUN_14052b5e0(&DAT_14cb7bf28,"NameAddressValue",0);
  _DAT_14cb7bf38 = "NameAddressValue";
  local_60 = L"AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb7bf80 = (ulonglong)uVar2;
  local_60 = L"慲摮";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14cb7bf88 = (ulonglong)uVar2;
  DAT_14cb7bfb0 = 0;
  DAT_14cb7bfb8 = 0;
  DAT_14cb7bf90 = 0;
  _DAT_14cb7bf98 = 0;
  _DAT_14cb7bfbc = 0xffffffff00000080;
  DAT_14cb7bfc4 = 0;
  DAT_14cb7bfd0 = 0;
  DAT_14cb7bfd8 = 0;
  atexit(FUN_143d26f0b);
  DAT_14cb7bfe0 = 0;
  _DAT_14cb7bfe4 = 0;
  _DAT_14cb7bfec = 0;
  local_60 = L"FactsBlackboardExtensionLabel";
  local_58 = 0x1d;
  FUN_1446e940c(local_64,&local_60);
  local_60 = L"Facts";
  local_58 = 5;
  FUN_1446e940c(local_68,&local_60);
  local_60 = L"Add Fact";
  local_58 = 8;
  FUN_140208c1e(&DAT_14cb7bff0,local_68,local_64,&local_60);
  atexit((_func_5014 *)&LAB_143d270bd);
  local_60 = L"FactsBlackboardExtensionToolTip";
  local_58 = 0x1f;
  FUN_1446e940c(local_64,&local_60);
  local_60 = L"Facts";
  local_58 = 5;
  FUN_1446e940c(local_68,&local_60);
  local_60 = 
  L"Add a Fact for this Blackboard variable and synchronize them. This only works for Bool, Int, Float, Double, Name, or String variables."
  ;
  local_58 = 0x86;
  FUN_140208c1e(&DAT_14cb7c000,local_68,local_64,&local_60);
  atexit((_func_5014 *)&LAB_143d270d1);
  FUN_1446f470e(&DAT_14cb7c010,L"Fact",1);
  local_60 = L"nexus";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb7c028 = (ulonglong)uVar2;
  ram0x00014cb7c034 = 0;
  FUN_14052b5e0(&DAT_14cb7c030,"dependency",0);
  _DAT_14cb7c040 = "dependency";
  _DAT_14cb7c04c = 0;
  FUN_14052b5e0(&DAT_14cb7c048,"dependencies",0);
  _DAT_14cb7c058 = "dependencies";
  DAT_14cb7c060 = 0;
  _DAT_14cb7c068 = 0;
  atexit((_func_5014 *)&LAB_143d2791f);
  _DAT_14cb7c090 = 0;
  _DAT_14cb7c098 = 0;
  DAT_14cb7c070 = 0;
  _DAT_14cb7c078 = 0;
  _DAT_14cb7c09c = 0xffffffff00000080;
  DAT_14cb7c0a4 = 0;
  DAT_14cb7c0b0 = 0;
  DAT_14cb7c0b8 = 0;
  atexit(FUN_143d27930);
  DAT_14cb7c0f0 = 0;
  DAT_14cb7c0f8 = 0;
  DAT_14cb7c0c0 = 0;
  uRam000000014cb7c0c8 = 0;
  DAT_14cb7c0d0 = 0;
  _DAT_14cb7c0d8 = 0;
  _DAT_14cb7c0fc = 0xffffffff00000080;
  DAT_14cb7c104 = 0;
  DAT_14cb7c110 = 0;
  DAT_14cb7c118 = 0;
  DAT_14cb7c120 = 0;
  atexit((_func_5014 *)&LAB_143d2795f);
  DAT_14cb7c148 = 0;
  DAT_14cb7c150 = 0;
  DAT_14cb7c128 = 0;
  _DAT_14cb7c130 = 0;
  _DAT_14cb7c154 = 0xffffffff00000080;
  _DAT_14cb7c15c = 0;
  DAT_14cb7c168 = 0;
  _DAT_14cb7c170 = 0;
  atexit(FUN_143d27964);
  _DAT_14cb7c178 = 0;
  DAT_14cb7c180 = 0;
  atexit((_func_5014 *)&LAB_143d2798d);
  _DAT_14cb7c1a8 = 0;
  _DAT_14cb7c1b0 = 0;
  _DAT_14cb7c188 = 0;
  uRam000000014cb7c190 = 0;
  _DAT_14cb7c1b4 = 0xffffffff00000080;
  _DAT_14cb7c1bc = 0;
  DAT_14cb7c1c8 = 0;
  _DAT_14cb7c1d0 = 0;
  atexit(FUN_143d279a7);
  DAT_14cb7c228 = 0;
  DAT_14cb7c230 = 0;
  DAT_14cb7c208 = 0;
  _DAT_14cb7c210 = 0;
  _DAT_14cb7c234 = 0xffffffff00000080;
  DAT_14cb7c23c = 0;
  DAT_14cb7c248 = 0;
  DAT_14cb7c250 = 0;
  atexit(FUN_143d279d6);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cb7c264);
  if (cVar1 == '\0') {
    _DAT_14cb7c264 = 0;
    uRam000000014cb7c26c = 0;
  }
  if (local_60 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_60 = 
  L"牴敵昀污敳⤀渀o敹s慰彳慢敳楬敮慟汬捯瑡牯瑟扡敬瀀獡灟牴桟獡彨慭⽰慴汢e瀥┺畺›潦湵⁤浥瑰⁹桷湥猠瑥楴杮洠硡晟敲੥─㩰稥㩵映畯摮渠湯攭灭祴瀠条⁥桴瑡椠⁳敤摡眠敨\x206e慴楫杮氠獡⁴浥瑰⹹\n瀥┺畺›潦湵⁤浥瑰⁹慰敧琠慨⁴獩渠瑯搠慥⁤桷湥琠歡湩\x2067慬瑳攠灭祴ਮ瀀獡扟瑩楦彴楤敲瑣牯役楶睥癟捥潴⽲灳湩e慰彳楢晴瑩摟物捥潴祲癟敩彷敶瑣牯猯来敭瑮瀀獡扟瑩楦彴楤敲瑣牯役慭彸牦敥癟捥潴⽲灳湩e慰彳楢晴瑩摟物捥潴祲浟硡晟敲彥敶瑣牯猯来敭瑮瀀獡扟瑩楦彴楤敲瑣牯役敳浧湥整彤楢癴捥潴獲猯楰敮瀀獡扟瑩楦彴楤敲瑣牯役敳浧湥整彤楢癴捥潴獲猯来敭瑮瀀獡扟瑩楦彴敨灡"
  ;
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14cb7c588 = (ulonglong)uVar2;
  local_60 = 
  L"0潣浭瑩整d湩捡楴敶瀀牡楴污攀捸畬楳敶䐀䤀瀀獡瑟牨慥彤潬慣彬慣档e慰彳桴敲摡江捯污损捡敨猯潨汵彤瑳灯扟瑩敶瑣牯瀀獡瑟牨慥彤潬慣彬慣档⽥慰敧彳潣浭瑩整d敄污潬慣楴湯氠杯楧杮椠⁳楤慳汢摥映牯┠⽳猥\x202c畢⁴敨敲眠⁥牡⹥\n桳牡摥"
  ;
  local_58 = 1;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14cb7c578 = (ulonglong)uVar2;
  local_60 = L"12345678";
  local_58 = 1;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14cb7c570 = (ulonglong)uVar2;
  local_60 = 
  L"敹s慰彳慢敳楬敮慟汬捯瑡牯瑟扡敬瀀獡灟牴桟獡彨慭⽰慴汢e瀥┺畺›潦湵⁤浥瑰⁹桷湥猠瑥楴杮洠硡晟敲੥─㩰稥㩵映畯摮渠湯攭灭祴瀠条⁥桴瑡椠⁳敤摡眠敨\x206e慴楫杮氠獡⁴浥瑰⹹\n瀥┺畺›潦湵⁤浥瑰⁹慰敧琠慨⁴獩渠瑯搠慥⁤桷湥琠歡湩\x2067慬瑳攠灭祴ਮ瀀獡扟瑩楦彴楤敲瑣牯役楶睥癟捥潴⽲灳湩e慰彳楢晴瑩摟物捥潴祲癟敩彷敶瑣牯猯来敭瑮瀀獡扟瑩楦彴楤敲瑣牯役慭彸牦敥癟捥潴⽲灳湩e慰彳楢晴瑩摟物捥潴祲浟硡晟敲彥敶瑣牯猯来敭瑮瀀獡扟瑩楦彴楤敲瑣牯役敳浧湥整彤楢癴捥潴獲猯楰敮瀀獡扟瑩楦彴楤敲瑣牯役敳浧湥整彤楢癴捥潴獲猯来敭瑮瀀獡扟瑩楦彴敨灡"
  ;
  local_58 = 3;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14cb7c560 = (ulonglong)uVar2;
  local_60 = 
  L"潮礀獥瀀獡扟獡汥湩彥污潬慣潴彲慴汢e慰彳瑰彲慨桳浟灡琯扡敬─㩰稥㩵映畯摮攠灭祴眠敨\x206e敳瑴湩\x2067慭彸牦敥\n瀥┺畺›潦湵⁤潮⵮浥瑰⁹慰敧琠慨⁴獩搠慥⁤桷湥琠歡湩\x2067慬瑳攠灭祴ਮ─㩰稥㩵映畯摮攠灭祴瀠条⁥桴瑡椠⁳潮⁴敤摡眠敨\x206e慴楫杮氠獡⁴浥瑰⹹\n慰彳楢晴瑩摟物捥潴祲癟敩彷敶瑣牯猯楰敮瀀獡扟瑩楦彴楤敲瑣牯役楶睥癟捥潴⽲敳浧湥t慰彳楢晴瑩摟物捥潴祲浟硡晟敲彥敶瑣牯猯楰敮瀀獡扟瑩楦彴楤敲瑣牯役慭彸牦敥癟捥潴⽲敳浧湥t慰彳楢晴瑩摟物捥潴祲獟来敭瑮摥扟瑩敶瑣牯⽳灳湩e慰彳楢晴瑩摟物捥潴祲獟来敭瑮摥扟瑩敶瑣牯⽳敳浧湥t慰彳楢晴瑩桟慥p"
  ;
  local_58 = 2;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14cb7c568 = (ulonglong)uVar2;
  local_60 = L"false";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14cb7c580 = (ulonglong)uVar2;
  local_60 = L"湯漀晦渀縀㸀";
  local_58 = 2;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb7c278 = (ulonglong)uVar2;
  _DAT_14cb7c284 = 0;
  FUN_14052b5e0(&DAT_14cb7c280,&DAT_14a179940,0);
  _DAT_14cb7c290 = &DAT_14a179940;
  local_60 = L"waypoint";
  local_58 = 8;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb7c298 = (ulonglong)uVar2;
  DAT_14cb7c2a0 = 0;
  DAT_14cb7c2a8 = 0;
  atexit(FUN_143d299a2);
  _DAT_14cb7c590 = 0;
  uRam000000014cb7c598 = 0;
  _DAT_14cb7c5a0 = 0;
  uRam000000014cb7c5a8 = 0;
  _DAT_14cb7c5b0 = 0;
  uRam000000014cb7c5b8 = 0;
  _DAT_14cb7c2b0 = 0x47efffffe0000000;
  _DAT_14cb7c2b8 = 0x47efffffe0000000;
  _DAT_14cb7c2c0 = 0x47efffffe0000000;
  _DAT_14cb7c2c8 = 0x47efffffe0000000;
  _DAT_14cb7c2d0 = 0x47efffffe0000000;
  _DAT_14cb7c2d8 = 0x47efffffe0000000;
  _DAT_14cb7c2e0 = 0x47efffffe0000000;
  _DAT_14cb7c2e8 = 0x47efffffe0000000;
  _DAT_14cb7c2f4 = 0;
  FUN_14052b5e0(&DAT_14cb7c2f0,"PlayerAwareness",0);
  _DAT_14cb7c300 = "PlayerAwareness";
  DAT_14cb7c308 = 0;
  _DAT_14cb7c30c = 0;
  _DAT_14cb7c314 = 0;
  local_60 = L"globals";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14cb7c318 = (ulonglong)uVar2;
  _DAT_14cb7c320 = 0;
  uRam000000014cb7c328 = 0;
  _DAT_14cb7c330 = 0;
  DAT_14cb7c338 = 0;
  uRam000000014cb7c340 = 0;
  FUN_1446ddda2(&DAT_14cb7c320,"facts.globals",0);
  atexit((_func_5014 *)&LAB_143d29ac7);
  _DAT_14cb7c348 = 0;
  uRam000000014cb7c350 = 0;
  _DAT_14cb7c358 = 0;
  DAT_14cb7c360 = 0;
  uRam000000014cb7c368 = 0;
  FUN_1446ddda2(&DAT_14cb7c348,"engine.facts.globals",0);
  atexit((_func_5014 *)&LAB_143d29ad8);
  DAT_14cb7c390 = 0;
  DAT_14cb7c398 = 0;
  DAT_14cb7c370 = 0;
  _DAT_14cb7c378 = 0;
  _DAT_14cb7c39c = 0xffffffff00000080;
  DAT_14cb7c3a4 = 0;
  DAT_14cb7c3b0 = 0;
  DAT_14cb7c3b8 = 0;
  atexit(FUN_143d29c44);
  DAT_14cb7c3e0 = 0;
  DAT_14cb7c3e8 = 0;
  DAT_14cb7c3c0 = 0;
  _DAT_14cb7c3c8 = 0;
  _DAT_14cb7c3ec = 0xffffffff00000080;
  DAT_14cb7c3f4 = 0;
  DAT_14cb7c400 = 0;
  DAT_14cb7c408 = 0;
  atexit(FUN_143d29c6d);
  DAT_14cb7c410 = 4;
  DAT_14cb7c418 = 5;
  local_60._0_4_ = 10;
  local_78 = 0;
  FUN_14078dbce(&DAT_14cb7c430,L"gbx.facts.junk.max_replicated_full_elements_per_batch",&local_60,
                &DAT_149dfb77a);
  atexit(FUN_143d29eaf);
  local_60._0_4_ = 1;
  local_78 = 0;
  FUN_14078dbce(&DAT_14cb7c448,L"gbx.facts.junk.client_authoritative",&local_60,&DAT_149dfb77a);
  atexit(FUN_143d2bb52);
  local_60._0_4_ = 0xbf800000;
  local_78 = 0;
  FUN_140a6b41e(&DAT_14cb7c460,L"gbx.facts.junk.debug_lifetime",&local_60,
                L"If set to a number greater than 0, will override all lifetime rules for new pickups spawned."
               );
  atexit(FUN_143d2bb97);
  local_60._0_4_ = 0x40800000;
  local_78 = 0;
  FUN_140a6b41e(&DAT_14cb7c478,L"gbx.facts.junk.time_to_rest",&local_60,&DAT_149dfb77a);
  atexit(FUN_143d2bbdc);
  local_60._0_4_ = 0x40000000;
  local_78 = 0;
  FUN_140a6b41e(&DAT_14cb7c490,L"gbx.facts.junk.delay_try_fall_again",&local_60,&DAT_149dfb77a);
  atexit(FUN_143d2bc21);
  local_60._0_4_ = 0x461c4000;
  local_78 = 0;
  FUN_140a6b41e(&DAT_14cb7c4a8,L"gbx.facts.junk.relevance_inner",&local_60,&DAT_149dfb77a);
  atexit(FUN_143d2bc66);
  local_60._0_4_ = 0x466a6000;
  local_78 = 0;
  FUN_140a6b41e(&DAT_14cb7c4c0,L"gbx.facts.junk.relevance_outer",&local_60,&DAT_149dfb77a);
  atexit(FUN_143d2bcab);
  local_60._0_4_ = 0;
  local_78 = 0;
  FUN_14078dbce(&DAT_14cb7c4d8,L"gbx.facts.junk.debug_no_relevance",&local_60,&DAT_149dfb77a);
  atexit(FUN_143d2bcf0);
  local_60._0_4_ = 0;
  local_78 = 0;
  FUN_14078dbce(&DAT_14cb7c4f0,L"gbx.facts.junk.debug_save_all_pickups",&local_60,&DAT_149dfb77a);
  atexit(FUN_143d2bd35);
  local_60._0_4_ = 0x44fa0000;
  local_78 = 0;
  FUN_140a6b41e(&DAT_14cb7c508,L"gbx.facts.junk.flight_speed",&local_60,&DAT_149dfb77a);
  atexit(FUN_143d2bd7a);
  local_60 = (wchar_t *)CONCAT44(local_60._4_4_,10);
  local_78 = 0;
  FUN_14078dbce(&DAT_14cb7c520,L"gbx.facts.junk.max_junk_added_per_frame",&local_60,&DAT_149dfb77a);
  atexit(FUN_143d2bdbf);
  local_60 = L"__Unset";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14cb7c538 = (ulonglong)uVar2;
  local_60 = L"__Attached";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb7c540 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cb7c548,L"PickupFloorTrace",1);
  FUN_1446f470e(&DAT_14cb7c550,L"HideJunk",1);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d3542c FUN_143d3542c body=182 status=ok
// SIG undefined FUN_143d3542c(void)

void FUN_143d3542c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_1 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_1 + 0x180))(), lVar1 != 0)) &&
     (plVar2 = (longlong *)FUN_14007a5e6(lVar1), plVar2 != (longlong *)0x0)) {
    local_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar2 + 0xa0))(plVar2,param_2,&local_38);
    lVar1 = local_38;
    lVar3 = (longlong)(int)uStack_30;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(lVar1 + lVar4));
        lVar4 = lVar4 + 4;
      } while (lVar3 * 4 != lVar4);
    }
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d354e4 FUN_143d354e4 body=176 status=ok
// SIG undefined FUN_143d354e4(void)

void FUN_143d354e4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
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
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      lVar1 = FUN_14007a5e6(lVar1);
      if ((param_2 != (longlong *)0x0) && (lVar1 != 0)) {
        (**(code **)(*param_2 + 0x520))(param_2,&local_58,1,1);
        local_68 = local_28;
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
        FUN_143d3542c(param_1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d35595 FUN_143d35595 body=41 status=ok
// SIG undefined FUN_143d35595(void)

void FUN_143d35595(void)

{
  DAT_14cb7c610 = 0;
  if (DAT_14cb7c608 != 0) {
    FUN_1400020a8();
  }
  FUN_1461567e2();
  return;
}



// FUNCTION 143d355be FUN_143d355be body=41 status=ok
// SIG undefined FUN_143d355be(void)

void FUN_143d355be(void)

{
  DAT_14cb7c668 = 0;
  if (DAT_14cb7c660 != 0) {
    FUN_1400020a8();
  }
  FUN_14591fec8();
  return;
}



// FUNCTION 143d355e7 FUN_143d355e7 body=47 status=ok
// SIG undefined FUN_143d355e7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d355e7(void)

{
  _DAT_14cb7c6b8 = 0;
  if (DAT_14cb7c6b0 != 0) {
    FUN_1400020a8();
  }
  FUN_145af1a70(&DAT_14cb7c670);
  return;
}



// FUNCTION 143d35616 FUN_143d35616 body=47 status=ok
// SIG undefined FUN_143d35616(void)

void FUN_143d35616(void)

{
  DAT_14cb7c710 = 0;
  if (DAT_14cb7c708 != 0) {
    FUN_1400020a8();
  }
  FUN_145d0d506(&DAT_14cb7c6c8);
  return;
}



// FUNCTION 143d35645 FUN_143d35645 body=47 status=ok
// SIG undefined FUN_143d35645(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d35645(void)

{
  _DAT_14cb7c760 = 0;
  if (DAT_14cb7c758 != 0) {
    FUN_1400020a8();
  }
  FUN_145af1a70(&DAT_14cb7c718);
  return;
}



// FUNCTION 143d35674 FUN_143d35674 body=47 status=ok
// SIG undefined FUN_143d35674(void)

void FUN_143d35674(void)

{
  DAT_14cb7c7b0 = 0;
  if (DAT_14cb7c7a8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d0d506(&DAT_14cb7c768);
  return;
}



// FUNCTION 143d356a3 FUN_143d356a3 body=47 status=ok
// SIG undefined FUN_143d356a3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d356a3(void)

{
  _DAT_14cb7c800 = 0;
  if (DAT_14cb7c7f8 != 0) {
    FUN_1400020a8();
  }
  FUN_145af1a70(&DAT_14cb7c7b8);
  return;
}



// FUNCTION 143d356d2 FUN_143d356d2 body=187 status=ok
// SIG undefined FUN_143d356d2(void)

undefined8 FUN_143d356d2(byte param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined *puVar5;
  
  if (DAT_14cb7c770 != DAT_14cb7c79c) {
    puVar5 = &DAT_14cb7c7a0;
    if (DAT_14cb7c7a8 != (undefined *)0x0) {
      puVar5 = DAT_14cb7c7a8;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)(DAT_14cb7c7b0 - 1U & (uint)param_1) * 4);
    if (iVar4 != -1) {
      while (pbVar1 = (byte *)(DAT_14cb7c768 + (longlong)iVar4 * 0x14), *pbVar1 != param_1) {
        iVar4 = *(int *)(pbVar1 + 0xc);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if ((uint *)(pbVar1 + 4) == (uint *)0x0 || pbVar1 == (byte *)0x0) {
        return 0;
      }
      if (*(int *)(pbVar1 + 8) == 0) {
        return 0;
      }
      uVar2 = *(uint *)(pbVar1 + 4);
      if ((int)uVar2 < 0) {
        return 0;
      }
      if (DAT_14c9647dc <= (int)uVar2) {
        return 0;
      }
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (puVar3 == (undefined8 *)0x0) {
        return 0;
      }
      if (*(int *)(puVar3 + 2) != *(int *)(pbVar1 + 8)) {
        return 0;
      }
      if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
        return 0;
      }
      return *puVar3;
    }
  }
  return 0;
}



// FUNCTION 143d3578e FUN_143d3578e body=262 status=ok
// SIG undefined FUN_143d3578e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143d3578e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
    uVar6 = 0;
    uVar2 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar2 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar2 = *(uint *)(lVar4 + 0x10);
      bVar7 = uVar2 == 0;
      if (bVar7) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar2 = uVar5;
      }
    }
  }
  local_28 = CONCAT44(uVar2,uVar6);
  iVar1 = FUN_1403d4296(&DAT_14cb7c7b8,uVar2 ^ uVar6);
  lVar4 = (longlong)iVar1 * 0x14 + _DAT_14cb7c7b8;
  if (lVar4 == 0 || iVar1 == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 8));
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 143d3589a FUN_143d3589a body=404 status=ok
// SIG undefined FUN_143d3589a(void)

void FUN_143d3589a(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = FUN_141421472();
  uVar4 = FUN_1403d4194(uVar5);
  FUN_140d2f368(&local_40,uVar4);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
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
  if (local_40 == 0) goto LAB_143d359e3;
  uVar5 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(local_40 + 0x10) = uVar5;
    plVar6 = *(longlong **)(local_40 + 0x18);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(local_40 + 0x18) = 0;
LAB_143d35956:
      LOCK();
      plVar3 = plVar6 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000143d35983:
        if (iVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(undefined8 *)(local_40 + 0x10) = uVar5;
    plVar6 = *(longlong **)(local_40 + 0x18);
    if (plVar3 == plVar6) {
      LOCK();
      plVar6 = plVar3 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar6 = plVar3;
        goto joined_r0x000143d35983;
      }
    }
    else {
      *(longlong **)(local_40 + 0x18) = plVar3;
      if (plVar6 != (longlong *)0x0) goto LAB_143d35956;
    }
  }
  if (local_38 == (longlong *)0x0) {
    FUN_141000642(param_1,&local_40);
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    FUN_141000642(param_1);
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
LAB_143d359e3:
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d35a44 FUN_143d35a44 body=292 status=ok
// SIG undefined FUN_143d35a44(void)

void FUN_143d35a44(longlong param_1,undefined8 param_2,undefined4 *param_3,char param_4,
                  longlong param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong local_48;
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_39 = '\0';
  FUN_148841bba(param_1,local_50,param_2,&local_39);
  if ((local_39 == '\0') && (cVar5 = FUN_1403218c0(local_48 + 0x38,param_3), cVar5 != '\0')) {
    if (param_4 == '\0') goto LAB_143d35b20;
  }
  else {
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *(undefined4 *)(local_48 + 0x38) = *param_3;
    *(undefined4 *)(local_48 + 0x3c) = uVar2;
    *(undefined4 *)(local_48 + 0x40) = uVar3;
    *(undefined4 *)(local_48 + 0x44) = uVar4;
  }
  FUN_140f8d6d8(param_1 + 0x60,local_50,param_2,0);
  if (param_5 != 0) {
    FUN_14884a47c(local_48 + 0x58,local_50,&param_5,0);
  }
  if ((((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((puVar7 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       puVar7 != (undefined8 *)0x0 && (*(int *)(puVar7 + 2) == *(int *)(param_1 + 0xc))) &&
      ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
      uVar6 = *puVar7;
    }
    else {
      uVar6 = 0;
    }
    FUN_1405f658a(uVar6);
  }
LAB_143d35b20:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d35b6e FUN_143d35b6e body=18 status=ok
// SIG undefined FUN_143d35b6e(void)

undefined8 * FUN_143d35b6e(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x100);
  return param_2;
}



// FUNCTION 143d35b80 FUN_143d35b80 body=27 status=ok
// SIG undefined FUN_143d35b80(void)

void FUN_143d35b80(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x110);
  *param_2 = *(undefined8 *)(lVar1 + 0x108);
  return;
}



// FUNCTION 143d35b9c FUN_143d35b9c body=15 status=ok
// SIG undefined FUN_143d35b9c(void)

undefined8 FUN_143d35b9c(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                  *(int *)(*(longlong *)(param_1 + 8) + 0x108) != 0);
}



// FUNCTION 143d35bac FUN_143d35bac body=227 status=ok
// SIG undefined FUN_143d35bac(void)

void FUN_143d35bac(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [4];
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(param_2) {
  case 0:
    uVar2 = DAT_14cb888b0;
    break;
  case 1:
    uVar2 = DAT_14cb888b8;
    break;
  case 2:
    uVar2 = DAT_14cb888c0;
    break;
  case 3:
    uVar2 = DAT_14cb888c8;
    break;
  case 4:
    uVar2 = DAT_14cb88928;
    break;
  case 5:
    uVar2 = DAT_14cb888d0;
    break;
  case 6:
    uVar2 = DAT_14cb88920;
    break;
  case 7:
    uVar2 = DAT_14cb88720;
    break;
  default:
    uVar3 = 0;
    uVar2 = 0;
    goto LAB_143d35c34;
  }
  uVar3 = uVar2 & 0xffffffff00000000;
LAB_143d35c34:
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_30[0] = 0;
  local_2c = 0;
  local_24 = 0;
  FUN_144976b9c(local_30,uVar2 & 0xffffffff | uVar3);
  FUN_1410432d6(uVar1,local_30,param_3);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d35c90 FUN_143d35c90 body=1409 status=ok
// SIG undefined FUN_143d35c90(void)

void FUN_143d35c90(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  longlong *plVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x150) != '\x03') {
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x400);
    *piVar1 = *piVar1 + 1;
    *(undefined4 *)(*param_2 + 0x38) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x400);
  }
  iVar24 = *(int *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x90) = iVar24 + 1U;
  if (*(uint *)(param_1 + 0x94) < iVar24 + 1U) {
    FUN_14884c326((longlong *)(param_1 + 0x88),iVar24);
  }
  lVar28 = *(longlong *)(param_1 + 0x88);
  *(longlong *)(lVar28 + (longlong)iVar24 * 0x10) = *param_2;
  lVar22 = param_2[1];
  *(longlong *)(lVar28 + 8 + (longlong)iVar24 * 0x10) = lVar22;
  if (lVar22 == 0) {
    lVar28 = *(longlong *)(param_1 + 8);
    lVar21 = *param_2;
  }
  else {
    LOCK();
    *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
    UNLOCK();
    lVar22 = *param_2;
    lVar27 = param_2[1];
    lVar28 = *(longlong *)(param_1 + 8);
    lVar21 = lVar22;
    if (lVar27 != 0) {
      LOCK();
      *(int *)(lVar27 + 0xc) = *(int *)(lVar27 + 0xc) + 1;
      UNLOCK();
      lVar21 = *param_2;
      goto LAB_143d35d4a;
    }
  }
  lVar27 = 0;
  lVar22 = lVar21;
LAB_143d35d4a:
  plVar26 = (longlong *)(lVar28 + 0x408);
  uVar16 = *(uint *)(lVar21 + 0x38);
  if (*(int *)(lVar28 + 0x43c) == 0) {
    iVar24 = *(int *)(lVar28 + 0x410);
    *(int *)(lVar28 + 0x410) = iVar24 + 1;
    if (*(int *)(lVar28 + 0x414) == iVar24) {
      FUN_1447711aa(plVar26,iVar24);
    }
    iVar11 = *(int *)(lVar28 + 0x430);
    if (iVar11 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar11 + 0x1e;
      if (-1 < iVar11 + -1) {
        iVar10 = iVar11 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    lVar13 = lVar28 + 0x418;
    iVar17 = iVar11 + 1;
    iVar29 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar29 = iVar11;
    }
    if (iVar29 >> 5 == iVar10) {
      *(int *)(lVar28 + 0x430) = iVar17;
    }
    else {
      if (*(int *)(lVar28 + 0x434) <= iVar11) {
        iVar10 = iVar11;
        local_68 = lVar27;
        local_60 = lVar22;
        local_58 = plVar26;
        if (iVar11 + 0x20U < 0xa0) {
          iVar17 = 0x80;
        }
        else {
          uVar19 = iVar11 + 0x20U >> 5;
          local_70 = (ulonglong)uVar19;
          if (*(int *)(lVar28 + 0x434) + 0x1fU < 0xa0) {
            uVar20 = 4;
            if (4 < uVar19) {
              uVar20 = uVar19;
            }
          }
          else {
            uVar20 = uVar19 + (uVar19 * 3 >> 3) + 0x10;
          }
          uVar14 = (ulonglong)(uVar20 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar19 = (uint)(uVar14 + 0xf);
              if (uVar20 < 0x1ffd) {
                uVar14 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar14 + 0xf >> 4]];
              }
              else {
                uVar18 = (ulonglong)(uVar19 & 0xfffffff0);
                if (uVar18 < 0x7ff1) {
                  bVar15 = (&DAT_14c841e00)[uVar19 >> 4];
                  uVar23 = 0x32;
                  if (0x32 < bVar15) {
                    uVar23 = (ulonglong)bVar15;
                  }
                  uVar25 = 0x32 - (ulonglong)bVar15;
                  do {
                    uVar14 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar25 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar25 & 0xffffffff] & 0xf) == 0) goto LAB_143d36120;
                    lVar22 = uVar23 + 1 + uVar25;
                    uVar25 = uVar25 - 1;
                  } while (lVar22 != 0x33);
                }
                uVar14 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar14 = (ulonglong)DAT_14c841df8;
                }
                uVar14 = -uVar14 & (uVar18 + uVar14) - 1;
              }
            }
            else {
              uVar14 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar14,0);
              iVar10 = *(int *)(lVar28 + 0x430);
            }
          }
LAB_143d36120:
          iVar12 = (int)(uVar14 >> 2);
          iVar17 = -0x20;
          if ((int)local_70 <= iVar12) {
            iVar17 = iVar12 << 5;
          }
        }
        *(int *)(lVar28 + 0x434) = iVar17;
        FUN_1446efbd8(lVar13,iVar10);
        iVar17 = *(int *)(lVar28 + 0x430) + 1;
        plVar26 = local_58;
        lVar22 = local_60;
        lVar27 = local_68;
      }
      iVar10 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar10 = iVar17;
      }
      *(int *)(lVar28 + 0x430) = iVar17;
      if (iVar17 % 0x20 != 0) {
        lVar21 = *(longlong *)(lVar28 + 0x428);
        if (*(longlong *)(lVar28 + 0x428) == 0) {
          lVar21 = lVar13;
        }
        bVar15 = -(char)(iVar17 % 0x20);
        *(uint *)(lVar21 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)(lVar21 + (longlong)(iVar10 >> 5) * 4) << (bVar15 & 0x1f)) >>
             (bVar15 & 0x1f);
      }
    }
    lVar21 = (longlong)iVar24;
    if (*(longlong *)(lVar28 + 0x428) != 0) {
      lVar13 = *(longlong *)(lVar28 + 0x428);
    }
    bVar15 = (byte)iVar11 & 0x1f;
    puVar2 = (uint *)(lVar13 + (longlong)(iVar29 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
  }
  else {
    iVar24 = *(int *)(lVar28 + 0x438);
    lVar21 = (longlong)iVar24;
    iVar11 = *(int *)(*(longlong *)(lVar28 + 0x408) + 4 + lVar21 * 0x20);
    *(int *)(lVar28 + 0x438) = iVar11;
    iVar10 = *(int *)(lVar28 + 0x43c) + -1;
    *(int *)(lVar28 + 0x43c) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*(longlong *)(lVar28 + 0x408) + (longlong)iVar11 * 0x20) = 0xffffffff;
    }
  }
  lVar13 = lVar28 + 0x418;
  if (*(longlong *)(lVar28 + 0x428) != 0) {
    lVar13 = *(longlong *)(lVar28 + 0x428);
  }
  iVar11 = iVar24 + 0x1f;
  if (-1 < iVar24) {
    iVar11 = iVar24;
  }
  puVar2 = (uint *)(lVar13 + (longlong)(iVar11 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar24 & 0x1f);
  iVar11 = 1;
  lVar13 = *(longlong *)(lVar28 + 0x408);
  lVar21 = lVar21 * 0x20;
  puVar3 = (undefined4 *)(lVar13 + lVar21);
  *(uint *)(lVar13 + lVar21) = uVar16;
  *(longlong *)(lVar13 + 8 + lVar21) = lVar22;
  *(longlong *)(lVar13 + 0x10 + lVar21) = lVar27;
  *(undefined4 *)(lVar13 + 0x18 + lVar21) = 0xffffffff;
  uVar19 = *(int *)(lVar28 + 0x410) - *(int *)(lVar28 + 0x43c);
  if (1 < uVar19) {
    lVar22 = lVar28 + 0x440;
    if (*(longlong *)(lVar28 + 0x448) != 0) {
      lVar22 = *(longlong *)(lVar28 + 0x448);
    }
    iVar10 = *(int *)(lVar22 + (ulonglong)(*(int *)(lVar28 + 0x450) - 1U & uVar16) * 4);
    if (iVar10 != -1) {
      do {
        puVar4 = (undefined4 *)(*plVar26 + (longlong)iVar10 * 0x20);
        if (*(uint *)(*plVar26 + (longlong)iVar10 * 0x20) == uVar16) {
          plVar5 = *(longlong **)(puVar4 + 4);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))();
            }
          }
          uVar6 = *puVar3;
          uVar7 = puVar3[1];
          uVar8 = puVar3[2];
          uVar9 = puVar3[3];
          *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar3 + 4);
          *puVar4 = uVar6;
          puVar4[1] = uVar7;
          puVar4[2] = uVar8;
          puVar4[3] = uVar9;
          FUN_143d3fad4(plVar26,iVar24);
          goto LAB_143d35fd0;
        }
        iVar10 = puVar4[6];
      } while (iVar10 != -1);
    }
  }
  if (3 < uVar19) {
    uVar14 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
    lVar22 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    iVar11 = 1 << ((byte)lVar22 & 0x1f);
  }
  if (((int)uVar19 < 1) || (iVar11 <= *(int *)(lVar28 + 0x450))) {
    uVar16 = *(int *)(lVar28 + 0x450) - 1U & uVar16;
    puVar3[7] = uVar16;
    lVar22 = *(longlong *)(lVar28 + 0x448);
    if (*(longlong *)(lVar28 + 0x448) == 0) {
      lVar22 = lVar28 + 0x440;
    }
    puVar3[6] = *(undefined4 *)
                 (lVar22 + ((longlong)*(int *)(lVar28 + 0x450) - 1U & (longlong)(int)uVar16) * 4);
    lVar22 = *(longlong *)(lVar28 + 0x448);
    if (*(longlong *)(lVar28 + 0x448) == 0) {
      lVar22 = lVar28 + 0x440;
    }
    *(int *)(lVar22 + ((longlong)*(int *)(lVar28 + 0x450) - 1U & (longlong)(int)uVar16) * 4) =
         iVar24;
  }
  else {
    *(int *)(lVar28 + 0x450) = iVar11;
    FUN_143d3fb46(plVar26);
  }
LAB_143d35fd0:
  lVar28 = *(longlong *)(param_1 + 8);
  local_50 = param_1;
  FUN_14884c95e(lVar28 + 0x2a0);
  lVar22 = *(longlong *)(param_1 + 0x58) + 0x10;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98,lVar22);
  }
  FUN_148843e62(lVar28,lVar22,param_1 + 0x10,param_2);
  return;
}



// FUNCTION 143d36212 FUN_143d36212 body=115 status=ok
// SIG undefined FUN_143d36212(void)

undefined8 FUN_143d36212(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
    lVar2 = param_1 + 0x1a8;
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x1b0);
    }
    uVar3 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x1b8) - 1U & param_2) * 4);
    if (uVar3 != 0xffffffff) {
      while (puVar1 = (uint *)(*(longlong *)(param_1 + 0x170) + (longlong)(int)uVar3 * 0x18),
            *puVar1 != param_2) {
        uVar3 = puVar1[4];
        if (uVar3 == 0xffffffff) {
          return 0;
        }
      }
      if (puVar1 == (uint *)0x0) {
        return 0;
      }
      if (puVar1 + 2 == (uint *)0x0) {
        return 0;
      }
      return *(undefined8 *)(puVar1 + 2);
    }
  }
  return 0;
}



// FUNCTION 143d36286 FUN_143d36286 body=226 status=ok
// SIG undefined FUN_143d36286(void)

void FUN_143d36286(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0x410) == *(int *)(param_1 + 0x43c)) {
    return;
  }
  lVar6 = param_1 + 0x440;
  if (*(longlong *)(param_1 + 0x448) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x448);
  }
  iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x450) - 1U & *(uint *)(*param_2 + 0x18))
                           * 4);
  if (iVar5 == -1) {
    return;
  }
  while (lVar6 = *(longlong *)(param_1 + 0x408) + (longlong)iVar5 * 0x20,
        *(uint *)(*(longlong *)(param_1 + 0x408) + (longlong)iVar5 * 0x20) !=
        *(uint *)(*param_2 + 0x18)) {
    iVar5 = *(int *)(lVar6 + 0x18);
    if (iVar5 == -1) {
      return;
    }
  }
  if ((longlong *)(lVar6 + 8) == (longlong *)0x0 || lVar6 == 0) {
    return;
  }
  plVar3 = *(longlong **)(lVar6 + 0x10);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  iVar5 = (int)plVar3[1];
  do {
    if (iVar5 == 0) {
      return;
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
  lVar6 = *(longlong *)(lVar6 + 8);
  if (lVar6 != 0) {
    (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,lVar6);
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
                    /* WARNING: Could not recover jumptable at 0x000143d3635d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 143d36368 FUN_143d36368 body=228 status=ok
// SIG undefined FUN_143d36368(void)

void FUN_143d36368(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 in_stack_00000028;
  undefined1 in_stack_00000030;
  undefined8 in_stack_00000038;
  byte in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined1 in_stack_00000050;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined4 local_40;
  uint local_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x150) != '\x03') {
    local_50 = in_stack_00000030;
    local_58 = in_stack_00000028;
    local_40 = 0;
    local_48 = 1;
    lVar2 = FUN_1403a0554();
    if (lVar2 != 0) {
      local_38 = local_38 & 0xffffff00;
      uStack_34 = 0;
      uStack_2c = 0;
      FUN_144976b9c(&local_38,in_stack_00000038);
      bVar1 = FUN_1403218c0((uint *)(lVar2 + 0x38),&local_38);
      if ((byte)(bVar1 ^ 1 | in_stack_00000040) == 1) {
        *(uint *)(lVar2 + 0x38) = local_38;
        *(undefined4 *)(lVar2 + 0x3c) = (undefined4)uStack_34;
        *(undefined4 *)(lVar2 + 0x40) = uStack_34._4_4_;
        *(undefined4 *)(lVar2 + 0x44) = uStack_2c;
        *(undefined8 *)(lVar2 + 0x58) = in_stack_00000048;
        FUN_140bde2c8(*(undefined8 *)(lVar2 + 0x30),lVar2,in_stack_00000050);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d3644e FUN_143d3644e body=574 status=ok
// SIG undefined FUN_143d3644e(void)

void FUN_143d3644e(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1403a0728(param_3,&local_38);
  local_a0 = *(undefined1 *)(param_2 + 1);
  if (((*(int *)(param_2 + 0x10) == 0) || (iVar1 = *(int *)(param_2 + 0x14), iVar1 == 0)) ||
     (*(int *)(param_2 + 0x10) == DAT_14c948000)) {
    local_40 = DAT_14c948620;
    local_48 = DAT_14c948618;
    local_50 = DAT_14c948620;
    local_58 = DAT_14c948618;
    local_60 = DAT_14c948620;
    local_68 = DAT_14c948618;
  }
  else {
    lVar2 = param_2 + 0x18;
    lVar3 = lVar2;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar3 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar1) {
      lVar3 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 5)) {
      local_40 = DAT_14c948620;
      local_48 = DAT_14c948618;
    }
    else {
      local_40 = *(undefined4 *)(lVar3 + 0x38);
      local_48 = *(undefined8 *)(lVar3 + 0x30);
    }
    lVar3 = lVar2;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar3 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar1) {
      lVar3 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 4)) {
      local_50 = DAT_14c948620;
      local_58 = DAT_14c948618;
    }
    else {
      local_50 = *(undefined4 *)(lVar3 + 0x2c);
      local_58 = *(undefined8 *)(lVar3 + 0x24);
    }
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar2 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar1) {
      lVar2 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 3)) {
      local_60 = DAT_14c948620;
      local_68 = DAT_14c948618;
    }
    else {
      local_60 = *(undefined4 *)(lVar2 + 0x20);
      local_68 = *(undefined8 *)(lVar2 + 0x18);
    }
    if ((iVar1 != 1) && (1 < iVar1)) {
      local_70 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + 0x14);
      local_78 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0xc);
      goto LAB_143d3658e;
    }
  }
  local_70 = DAT_14c948620;
  local_78 = DAT_14c948618;
LAB_143d3658e:
  local_80 = param_6;
  local_88 = param_5;
  local_98 = local_38;
  local_a8 = &local_48;
  local_90 = param_4;
  (**(code **)(*param_1 + 0x50))(param_1,&local_78,&local_68,&local_58);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d3668e FUN_143d3668e body=1767 status=ok
// SIG undefined FUN_143d3668e(void)

void FUN_143d3668e(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  undefined1 uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStack_148 [35];
  undefined1 local_125;
  int local_124;
  longlong *local_120;
  longlong *local_118;
  undefined8 local_110;
  undefined8 local_108;
  int local_100;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  longlong local_b8 [2];
  uint local_a8 [2];
  longlong local_a0;
  uint *local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar16 = *(undefined1 *)((longlong)param_1 + 0x155);
  *(undefined1 *)((longlong)param_1 + 0x155) = 1;
  local_d8 = *param_2;
  local_d0 = *(undefined4 *)(param_2 + 1);
  local_110 = param_3;
  FUN_1448075d0(local_b8);
  plVar7 = (longlong *)FUN_14060eaf6(local_b8);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (plVar7 != (longlong *)0x0) {
    uVar17 = 0;
    local_125 = uVar16;
    (**(code **)(*param_1 + 0x10))(param_1,1,0);
    local_98 = (uint *)0x0;
    local_90 = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    FUN_14890bbc8(plVar7,local_b8);
    local_e0 = *(undefined4 *)(param_2 + 1);
    local_e8 = *param_2;
    (**(code **)(*param_1 + 0x160))(param_1,&local_e8,local_110,local_b8);
    local_f8 = (undefined8 *)0x0;
    uStack_f0 = 0;
    local_118 = plVar7;
    (**(code **)(*plVar7 + 0x30))(plVar7,&local_f8);
    puVar1 = local_f8;
    lVar8 = (longlong)(int)uStack_f0;
    if (lVar8 != 0) {
      lVar10 = 0;
      do {
        if (*(longlong *)((longlong)puVar1 + lVar10) != 0) {
          FUN_14890bbc8(*(longlong *)((longlong)puVar1 + lVar10),local_b8);
        }
        lVar10 = lVar10 + 0x18;
      } while (lVar8 * 0x18 != lVar10);
    }
    local_120 = param_1;
    (**(code **)(*local_118 + 0x38))(local_118,local_b8);
    iVar4 = local_90;
    uVar21 = 1;
    iVar19 = 0;
    iVar6 = 0;
    if (local_90 != 0) {
      puVar9 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar9 = local_a8;
      }
      uVar20 = *puVar9;
      if (uVar20 == 0) {
        iVar6 = local_90 + 0x1e;
        if (-1 < local_90 + -1) {
          iVar6 = local_90 + -1;
        }
        uVar17 = 0;
        uVar21 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar21 = uVar17;
        }
        iVar19 = 0;
        do {
          if (uVar21 == uVar17) goto LAB_143d36891;
          iVar19 = iVar19 + 0x20;
          uVar20 = puVar9[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar20 == 0);
      }
      else {
        uVar17 = 0;
      }
      uVar21 = (ulonglong)(-uVar20 & uVar20);
      uVar2 = uVar21 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = (iVar19 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      if (local_90 <= iVar6) {
        iVar6 = local_90;
      }
    }
    if (iVar6 != local_90) {
      uVar20 = 0xffffffff;
      do {
        lVar8 = *(longlong *)(local_b8[0] + (longlong)iVar6 * 0x10);
        lVar10 = FUN_14050cbd4(lVar8);
        plVar7 = local_120;
        if (lVar10 != 0) {
          piVar14 = *(int **)(lVar8 + 8);
          if (piVar14 == (int *)0x0) {
            piVar14 = &DAT_14c9485f0;
          }
          iVar6 = *piVar14;
          if (((iVar6 == 0) || (iVar12 = piVar14[1], iVar12 == 0)) || (iVar6 == DAT_14c948000)) {
LAB_143d36ccc:
            iStack_c0 = DAT_14c948620;
            uVar11 = DAT_14c948618;
          }
          else {
            if ((iVar12 < 2) && (piVar14[9] < 1)) {
              piVar14 = piVar14 + 2;
            }
            else {
              piVar14 = *(int **)(piVar14 + 6);
            }
            if (iVar12 < 1) goto LAB_143d36ccc;
            iStack_c0 = piVar14[2];
            uVar11 = *(undefined8 *)piVar14;
          }
          local_c8 = (uint)uVar11;
          uStack_c4 = (undefined4)((ulonglong)uVar11 >> 0x20);
          piVar14 = *(int **)(lVar10 + 8);
          if (piVar14 == (int *)0x0) {
            piVar14 = &DAT_14c9485f0;
          }
          if (((*piVar14 == 0) || (iVar12 = piVar14[1], iVar12 == 0)) || (*piVar14 == DAT_14c948000)
             ) {
LAB_143d36ce5:
            local_100 = DAT_14c948620;
            local_108 = DAT_14c948618;
          }
          else {
            if ((iVar12 < 2) && (piVar14[9] < 1)) {
              piVar14 = piVar14 + 2;
            }
            else {
              piVar14 = *(int **)(piVar14 + 6);
            }
            if (iVar12 < 1) goto LAB_143d36ce5;
            local_100 = piVar14[2];
            local_108 = *(undefined8 *)piVar14;
          }
          lVar10 = FUN_144976d68(local_120,&local_108,CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),1));
          if (lVar10 != 0) {
            lVar10 = FUN_1403a09ea(plVar7,lVar10,&local_c8,1);
            if (lVar10 != 0) {
              piVar14 = *(int **)(lVar8 + 8);
              if (piVar14 == (int *)0x0) {
                piVar14 = &DAT_14c9485f0;
              }
              if (((*piVar14 == 0) || (iVar6 = piVar14[1], iVar6 == 0)) ||
                 (*piVar14 == DAT_14c948000)) {
                iStack_c0 = DAT_14c948620;
                local_c8 = (uint)DAT_14c948618;
                uStack_c4 = (undefined4)((ulonglong)DAT_14c948618 >> 0x20);
              }
              else {
                if ((iVar6 < 2) && (piVar14[9] < 1)) {
                  piVar14 = piVar14 + 2;
                }
                else {
                  piVar14 = *(int **)(piVar14 + 6);
                }
                if (iVar6 < 1) {
                  iStack_c0 = DAT_14c948620;
                  uVar11 = DAT_14c948618;
                }
                else {
                  iStack_c0 = piVar14[2];
                  uVar11 = *(undefined8 *)piVar14;
                }
                local_c8 = (uint)uVar11;
                uStack_c4 = (undefined4)((ulonglong)uVar11 >> 0x20);
              }
              local_124 = iVar19;
              lVar8 = FUN_140d7e932(local_110,&local_c8);
              if ((lVar8 != 0) && (lVar3 = *(longlong *)(lVar8 + 0x20), lVar3 != 0)) {
                local_c8 = local_c8 & 0xffffff00;
                uStack_c4 = 0;
                iStack_c0 = 0;
                uStack_bc = 0;
                FUN_144976b9c(&local_c8,DAT_14cb88920);
                cVar5 = FUN_1403218c0(lVar3 + 0x38,&local_c8);
                if (cVar5 != '\0') {
                  FUN_1461b48ba(local_120,lVar10,lVar8);
                  iVar19 = local_124;
                  goto LAB_143d36c00;
                }
              }
              local_c8 = local_c8 & 0xffffff00;
              uStack_c4 = 0;
              iStack_c0 = 0;
              uStack_bc = 0;
              FUN_144976b9c(&local_c8,DAT_14cb88920);
              FUN_1410432d6(lVar10,&local_c8,1);
              iVar19 = local_124;
            }
          }
        }
LAB_143d36c00:
        uVar20 = uVar20 & ~(uint)uVar21;
        puVar9 = local_98;
        if (local_98 == (uint *)0x0) {
          puVar9 = local_a8;
        }
        iVar6 = (int)uVar17;
        lVar8 = (longlong)iVar6;
        uVar15 = puVar9[lVar8] & uVar20;
        if (uVar15 == 0) {
          iVar12 = local_90 + 0x1e;
          if (-1 < local_90 + -1) {
            iVar12 = local_90 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar19 = iVar19 + 0x20;
          iVar13 = iVar12;
          if (iVar12 < iVar6) {
            iVar13 = iVar6;
          }
          if (iVar6 < iVar12) {
            lVar10 = 0;
            do {
              uVar15 = (puVar9 + lVar8 + 1)[lVar10];
              if (uVar15 != 0) {
                uVar17 = (ulonglong)(iVar6 + (int)lVar10 + 1);
                uVar20 = 0xffffffff;
                goto LAB_143d36c84;
              }
              iVar19 = iVar19 + 0x20;
              lVar10 = lVar10 + 1;
            } while (iVar13 - lVar8 != lVar10);
            uVar20 = 0xffffffff;
            iVar6 = iVar13;
          }
          uVar17 = (ulonglong)(iVar6 + 1);
          iVar6 = local_90;
        }
        else {
LAB_143d36c84:
          uVar21 = (ulonglong)(-uVar15 & uVar15);
          uVar2 = uVar21 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar6 = (iVar19 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (local_90 <= iVar6) {
            iVar6 = local_90;
          }
        }
      } while (iVar6 != iVar4);
    }
LAB_143d36891:
    param_1 = local_120;
    local_c8 = 0;
    uStack_c4 = 0;
    iStack_c0 = 0;
    uStack_bc = 0;
    local_108 = 0;
    local_100 = 0;
    FUN_143d36d76(local_120,&local_c8,local_118);
    if ((longlong)(int)uStack_f0 != 0) {
      puVar1 = local_f8 + (longlong)(int)uStack_f0 * 3;
      puVar18 = local_f8;
      do {
        FUN_143d36d76(param_1,&local_c8,*puVar18,puVar18 + 1);
        puVar18 = puVar18 + 3;
      } while (puVar18 != puVar1);
    }
    FUN_14612646c(param_1,&local_c8);
    FUN_1410458c4(param_1);
    if (CONCAT44(uStack_c4,local_c8) != 0) {
      FUN_1400020a8();
    }
    uVar16 = local_125;
    if (local_f8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1401bcc5a(local_b8);
  }
  *(undefined1 *)((longlong)param_1 + 0x155) = uVar16;
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d36d76 FUN_143d36d76 body=1486 status=ok
// SIG undefined FUN_143d36d76(void)

void FUN_143d36d76(longlong *param_1,longlong *param_2,longlong param_3,int *param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_a0;
  ulonglong local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_70;
  int local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_3 == 0) || (lVar3 = FUN_14050cbd4(param_3), lVar3 == 0)) goto LAB_143d371ef;
  piVar6 = *(int **)(lVar3 + 8);
  if (piVar6 == (int *)0x0) {
    piVar6 = &DAT_14c9485f0;
  }
  if (((*piVar6 == 0) || (iVar1 = piVar6[1], iVar1 == 0)) || (*piVar6 == DAT_14c948000)) {
LAB_143d3721d:
    local_58 = DAT_14c948620;
    uVar5 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (piVar6[9] < 1)) {
      piVar6 = piVar6 + 2;
    }
    else {
      piVar6 = *(int **)(piVar6 + 6);
    }
    if (iVar1 < 1) goto LAB_143d3721d;
    local_58 = piVar6[2];
    uVar5 = *(undefined8 *)piVar6;
  }
  local_60 = (undefined4)uVar5;
  uStack_5c = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = DAT_14cb88928;
  local_a0 = 0;
  local_a8 = &DAT_14cb88978;
  (**(code **)(*param_1 + 0x50))(param_1,&local_60,&DAT_14c947fe8,&DAT_14c947fe8);
  local_54 = *(undefined4 *)(param_3 + 0x60c);
  local_60 = CONCAT31(local_60._1_3_,2);
  uStack_5c = 0;
  local_58 = 0;
  FUN_1403a0728(&local_60,&local_50);
  piVar6 = *(int **)(lVar3 + 8);
  if (piVar6 == (int *)0x0) {
    piVar6 = &DAT_14c9485f0;
  }
  if (((*piVar6 == 0) || (iVar1 = piVar6[1], iVar1 == 0)) || (*piVar6 == DAT_14c948000)) {
LAB_143d37233:
    local_68 = DAT_14c948620;
    local_70 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (piVar6[9] < 1)) {
      piVar6 = piVar6 + 2;
    }
    else {
      piVar6 = *(int **)(piVar6 + 6);
    }
    if (iVar1 < 1) goto LAB_143d37233;
    local_68 = piVar6[2];
    local_70 = *(undefined8 *)piVar6;
  }
  local_80 = 0;
  local_90 = 0;
  local_98 = local_50;
  local_a0 = 0;
  local_a8 = &DAT_14cb889c8;
  local_88 = 0;
  (**(code **)(*param_1 + 0x50))(param_1,&local_70,&DAT_14c947fe8,&DAT_14c947fe8);
  (**(code **)(*param_1 + 0x178))(param_1,param_3,lVar3);
  uVar2 = *(ulonglong *)(param_4 + 1);
  uVar4 = uVar2;
  if ((uVar2 == DAT_14c948034) && (uVar4 = DAT_14c948034, *param_4 != DAT_14c948030)) {
    FUN_14011791e(&local_60,*param_4,uVar2 >> 0x20);
    *(ulonglong *)(param_4 + 1) = CONCAT44(uStack_5c,local_60);
    uVar4 = CONCAT44(uStack_5c,local_60);
  }
  piVar6 = *(int **)(param_3 + 8);
  if (piVar6 == (int *)0x0) {
    piVar6 = &DAT_14c9485f0;
  }
  if (((*piVar6 == 0) || (iVar1 = piVar6[1], iVar1 == 0)) || (*piVar6 == DAT_14c948000)) {
LAB_143d37249:
    local_58 = DAT_14c948620;
    uVar5 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (piVar6[9] < 1)) {
      piVar6 = piVar6 + 2;
    }
    else {
      piVar6 = *(int **)(piVar6 + 6);
    }
    if (iVar1 < 1) goto LAB_143d37249;
    local_58 = piVar6[2];
    uVar5 = *(undefined8 *)piVar6;
  }
  local_60 = (undefined4)uVar5;
  uStack_5c = (undefined4)((ulonglong)uVar5 >> 0x20);
  piVar6 = *(int **)(lVar3 + 8);
  if (piVar6 == (int *)0x0) {
    piVar6 = &DAT_14c9485f0;
  }
  if (((*piVar6 == 0) || (iVar1 = piVar6[1], iVar1 == 0)) || (*piVar6 == DAT_14c948000)) {
LAB_143d3725f:
    local_68 = DAT_14c948620;
    local_70 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (piVar6[9] < 1)) {
      piVar6 = piVar6 + 2;
    }
    else {
      piVar6 = *(int **)(piVar6 + 6);
    }
    if (iVar1 < 1) goto LAB_143d3725f;
    local_68 = piVar6[2];
    local_70 = *(undefined8 *)piVar6;
  }
  local_80 = 0;
  local_90 = 0;
  local_a8 = (undefined8 *)&DAT_14cb88868;
  local_88 = 0;
  local_a0 = 1;
  local_98 = uVar4;
  (**(code **)(*param_1 + 0x50))(param_1,&local_70,&local_60,&DAT_14c947fe8);
  piVar6 = *(int **)(param_3 + 8);
  if (piVar6 == (int *)0x0) {
    piVar6 = &DAT_14c9485f0;
  }
  if (((*piVar6 == 0) || (iVar1 = piVar6[1], iVar1 == 0)) || (*piVar6 == DAT_14c948000)) {
LAB_143d37275:
    local_58 = DAT_14c948620;
    uVar5 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (piVar6[9] < 1)) {
      piVar6 = piVar6 + 2;
    }
    else {
      piVar6 = *(int **)(piVar6 + 6);
    }
    if (iVar1 < 1) goto LAB_143d37275;
    local_58 = piVar6[2];
    uVar5 = *(undefined8 *)piVar6;
  }
  local_60 = (undefined4)uVar5;
  uStack_5c = (undefined4)((ulonglong)uVar5 >> 0x20);
  piVar6 = *(int **)(lVar3 + 8);
  if (piVar6 == (int *)0x0) {
    piVar6 = &DAT_14c9485f0;
  }
  if (((*piVar6 == 0) || (iVar1 = piVar6[1], iVar1 == 0)) || (*piVar6 == DAT_14c948000)) {
    local_68 = DAT_14c948620;
    local_70 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (piVar6[9] < 1)) {
      piVar6 = piVar6 + 2;
    }
    else {
      piVar6 = *(int **)(piVar6 + 6);
    }
    if (iVar1 < 1) {
      local_68 = DAT_14c948620;
      local_70 = DAT_14c948618;
    }
    else {
      local_68 = piVar6[2];
      local_70 = *(undefined8 *)piVar6;
    }
  }
  local_80 = 0;
  local_90 = 0;
  local_98 = DAT_14cb888c8;
  local_a0 = 0;
  local_a8 = &DAT_14cb88978;
  local_88 = 0;
  (**(code **)(*param_1 + 0x50))(param_1,&local_70,&local_60,&DAT_14c947fe8);
  piVar6 = &DAT_14c9485f0;
  if (*(int **)(param_3 + 8) != (int *)0x0) {
    piVar6 = *(int **)(param_3 + 8);
  }
  if (((*piVar6 == 0) || (iVar1 = piVar6[1], iVar1 == 0)) || (*piVar6 == DAT_14c948000)) {
LAB_143d3728b:
    local_58 = DAT_14c948620;
    uVar5 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (piVar6[9] < 1)) {
      piVar6 = piVar6 + 2;
    }
    else {
      piVar6 = *(int **)(piVar6 + 6);
    }
    if (iVar1 < 1) goto LAB_143d3728b;
    local_58 = piVar6[2];
    uVar5 = *(undefined8 *)piVar6;
  }
  local_60 = (undefined4)uVar5;
  uStack_5c = (undefined4)((ulonglong)uVar5 >> 0x20);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446dd912(param_2,iVar1);
  }
  lVar3 = *param_2;
  *(int *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = local_58;
  *(ulonglong *)(lVar3 + (longlong)iVar1 * 0xc) = CONCAT44(uStack_5c,local_60);
LAB_143d371ef:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d373dc FUN_143d373dc body=903 status=ok
// SIG undefined FUN_143d373dc(void)

void FUN_143d373dc(longlong param_1,uint *param_2,uint *param_3,byte param_4,longlong param_5,
                  char *param_6,undefined8 *param_7)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_a8 [32];
  longlong local_88;
  char *local_80;
  undefined8 *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  byte local_4e;
  byte local_4d;
  char local_4c;
  char local_4b;
  char local_4a;
  char local_49;
  ulonglong local_48;
  
  iVar11 = DAT_14cb7caa8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_1;
  if (param_2 != (uint *)0x0) {
    if (*param_3 == 0) {
      param_3 = param_2;
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    lVar14 = (longlong)(int)DAT_14cb7caa8;
    if (lVar14 != 0) {
      lVar9 = 0;
      do {
        if ((*(uint *)(DAT_14cb7caa0 + lVar9) == uVar2) &&
           (*(uint *)(DAT_14cb7caa0 + 8 + lVar9) == uVar4)) goto LAB_143d37724;
        lVar9 = lVar9 + 0xc;
      } while (lVar14 * 0xc != lVar9);
    }
    DAT_14cb7caa8 = DAT_14cb7caa8 + 1;
    if (DAT_14cb7caac < DAT_14cb7caa8) {
      FUN_1446dd912(&DAT_14cb7caa0,iVar11);
    }
    lVar9 = DAT_14cb7caa0;
    *(uint *)(DAT_14cb7caa0 + lVar14 * 0xc) = uVar2;
    *(uint *)(lVar9 + 4 + lVar14 * 0xc) = uVar3;
    *(uint *)(lVar9 + 8 + lVar14 * 0xc) = uVar4;
    if (*(char *)((longlong)param_2 + 0x21) == '\x01') {
      param_6[2] = '\x01';
      param_6[3] = '\x01';
    }
    uVar5 = *param_2;
    uVar6 = param_2[2];
    uVar8 = uVar5;
    if (uVar6 != 0) {
      uVar8 = uVar6 >> 0xd ^ uVar5 - uVar6;
      uVar10 = uVar8 << 8 ^ (-0x61c88647 - uVar6) - uVar8;
      uVar12 = uVar10 >> 0xd ^ (uVar6 - uVar8) - uVar10;
      uVar8 = uVar12 >> 0xc ^ (uVar8 - uVar10) - uVar12;
      uVar13 = uVar8 << 0x10 ^ (uVar10 - uVar12) - uVar8;
      uVar10 = uVar13 >> 5 ^ (uVar12 - uVar8) - uVar13;
      uVar12 = uVar10 >> 3 ^ (uVar8 - uVar13) - uVar10;
      uVar8 = uVar12 << 10 ^ (uVar13 - uVar10) - uVar12;
      uVar8 = uVar8 >> 0xf ^ uVar10 - (uVar12 + uVar8);
    }
    if (*(int *)(local_70 + 0x280) != *(int *)(local_70 + 0x2ac)) {
      lVar14 = local_70 + 0x2b0;
      if (*(longlong *)(local_70 + 0x2b8) != 0) {
        lVar14 = *(longlong *)(local_70 + 0x2b8);
      }
      iVar11 = *(int *)(lVar14 + (ulonglong)(*(int *)(local_70 + 0x2c0) - 1U & uVar8) * 4);
      if (iVar11 != -1) {
        lVar14 = *(longlong *)(local_70 + 0x278);
        do {
          lVar9 = (longlong)iVar11 * 0x20;
          if ((*(uint *)(lVar14 + lVar9) == uVar5) &&
             (lVar1 = lVar14 + lVar9, *(uint *)(lVar1 + 8) == uVar6)) {
            if ((undefined8 *)(lVar1 + 0x10) != (undefined8 *)0x0 && lVar1 != 0) {
              FUN_143d37764(param_6,*(undefined8 *)(lVar1 + 0x10));
            }
            break;
          }
          iVar11 = *(int *)(lVar14 + 0x18 + lVar9);
        } while (iVar11 != -1);
      }
    }
    if (-1 < (char)param_4) {
      uVar7 = (ulonglong)param_4;
      *(uint *)(param_5 + uVar7 * 0xc) = uVar2;
      *(uint *)(param_5 + 4 + uVar7 * 0xc) = uVar3;
      *(uint *)(param_5 + 8 + uVar7 * 0xc) = uVar4;
      *(undefined4 *)(param_5 + 0xc + uVar7 * 0xc) = 0;
      *(undefined8 *)(param_5 + 0x10 + uVar7 * 0xc) = 0;
      if (param_6[1] == '\x01') {
        local_4d = *param_6 * '\x02';
      }
      else {
        local_4d = 0;
      }
      if (param_6[3] == '\x01') {
        local_4d = local_4d | param_6[2];
      }
      local_58 = param_5;
      local_4e = param_4;
      (*(code *)*param_7)(param_7[1]);
    }
    uVar2 = param_2[6];
    if ((longlong)(int)uVar2 != 0) {
      lVar14 = *(longlong *)(param_2 + 4);
      lVar9 = 0;
      do {
        local_68 = *param_7;
        local_60 = param_7[1];
        local_4b = param_6[1];
        if (local_4b == '\x01') {
          local_4c = *param_6;
        }
        local_49 = param_6[3];
        if (local_49 == '\x01') {
          local_4a = param_6[2];
        }
        local_88 = param_5;
        local_80 = &local_4c;
        local_78 = &local_68;
        FUN_143d373dc(local_70,*(undefined8 *)(lVar14 + lVar9),&DAT_14c948618,param_4 + 1);
        lVar9 = lVar9 + 8;
      } while ((longlong)(int)uVar2 * 8 != lVar9);
    }
    DAT_14cb7caa8 = DAT_14cb7caa8 - 1;
    FUN_140c05acc(&DAT_14cb7caa0);
  }
LAB_143d37724:
  if (param_6[3] == '\x01') {
    param_6[3] = '\0';
  }
  if (param_6[1] == '\x01') {
    param_6[1] = '\0';
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d37764 FUN_143d37764 body=549 status=ok
// SIG undefined FUN_143d37764(void)

void FUN_143d37764(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  byte *pbVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  uint local_48 [6];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    local_50 = DAT_14cb7ca30;
    local_58 = DAT_14cb7ca28;
    FUN_1448075d0(local_48);
    pbVar2 = *(byte **)(param_2 + 0x48);
    if (pbVar2 != (byte *)0x0) {
      if ((*pbVar2 & 2) == 0) {
        plVar4 = &DAT_14c9a1288;
      }
      else {
        plVar4 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
      }
      if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
        plVar7 = plVar4 + 8;
        if ((longlong *)plVar4[9] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar4[9];
        }
        iVar6 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar4[10] - 1U & local_48[0]) * 4);
        if (iVar6 != -1) {
          do {
            lVar1 = *plVar4 + (longlong)iVar6 * 0x40;
            if (*(uint *)(*plVar4 + (longlong)iVar6 * 0x40) == local_48[0]) {
              if ((((lVar1 != 0) &&
                   (puVar5 = (undefined8 *)(lVar1 + 0x28), puVar5 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar5 != (byte *)0x0)) && ((*(byte *)*puVar5 & 0x40) == 0))
              goto LAB_143d37836;
              break;
            }
            iVar6 = *(int *)(lVar1 + 0x38);
          } while (iVar6 != -1);
        }
      }
    }
    puVar5 = &DAT_14c9a1308;
LAB_143d37836:
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    pbVar2 = (byte *)*puVar5;
    if (((pbVar2 != (byte *)0x0) && ((*pbVar2 & 0x6b) == 1)) && (param_1[1] == '\0')) {
      uVar3 = FUN_14000584e(pbVar2,0);
      *param_1 = uVar3;
      param_1[1] = 1;
    }
    local_50 = DAT_14cb7ca48;
    local_58 = DAT_14cb7ca40;
    FUN_1448075d0(local_48);
    pbVar2 = *(byte **)(param_2 + 0x48);
    if (pbVar2 != (byte *)0x0) {
      if ((*pbVar2 & 2) == 0) {
        plVar4 = &DAT_14c9a1288;
      }
      else {
        plVar4 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
      }
      if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
        plVar7 = plVar4 + 8;
        if ((longlong *)plVar4[9] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar4[9];
        }
        iVar6 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar4[10] - 1U & local_48[0]) * 4);
        if (iVar6 != -1) {
          do {
            lVar1 = *plVar4 + (longlong)iVar6 * 0x40;
            if (*(uint *)(*plVar4 + (longlong)iVar6 * 0x40) == local_48[0]) {
              if (((lVar1 != 0) &&
                  (puVar5 = (undefined8 *)(lVar1 + 0x28), puVar5 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar5 != (byte *)0x0 && ((*(byte *)*puVar5 & 0x40) == 0))))
              goto LAB_143d37914;
              break;
            }
            iVar6 = *(int *)(lVar1 + 0x38);
          } while (iVar6 != -1);
        }
      }
    }
    puVar5 = &DAT_14c9a1308;
LAB_143d37914:
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    pbVar2 = (byte *)*puVar5;
    if (((pbVar2 != (byte *)0x0) && ((*pbVar2 & 0x6b) == 1)) && (param_1[3] == '\0')) {
      uVar3 = FUN_14000584e(pbVar2,0);
      param_1[2] = uVar3;
      param_1[3] = 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d3798a FUN_143d3798a body=20 status=ok
// SIG undefined FUN_143d3798a(void)

bool FUN_143d3798a(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*param_1 != 0) {
    bVar1 = *(int *)(*param_1 + 0x38) == 0;
  }
  return bVar1;
}



// FUNCTION 143d3799e FUN_143d3799e body=49 status=ok
// SIG undefined FUN_143d3799e(void)

void FUN_143d3799e(void)

{
  FUN_1447cd778(DAT_14cb7cab0,DAT_14cb7cab8);
  if (DAT_14cb7cab0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d379d0 FUN_143d379d0 body=460 status=ok
// SIG undefined FUN_143d379d0(void)

void FUN_143d379d0(longlong param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_1a8 [32];
  undefined ***local_188;
  undefined1 *local_180;
  undefined ****local_178;
  undefined **local_170;
  longlong local_168;
  int local_160;
  longlong local_158;
  undefined2 local_150;
  undefined1 local_14c [252];
  undefined8 *local_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0xc))) &&
      ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar4;
    }
    else {
      lVar3 = 0;
    }
    if ((*(longlong *)(lVar3 + 0x30) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x360), lVar3 != 0)) {
      bVar5 = *(char *)(param_1 + 0x100) == '\0';
      if (bVar5) {
        FUN_141883844(param_1);
      }
      *(bool *)(param_1 + 0x100) = bVar5;
      lVar3 = FUN_143e21f2c(lVar3);
      if ((((byte *)*param_3 != (byte *)0x0) && ((~*(byte *)*param_3 & 3) == 0)) &&
         ((param_2 != 1 ||
          (((lVar3 != 0 && (*(char *)(lVar3 + 0xd68) == '\x01')) &&
           (cVar2 = (**(code **)(*DAT_14cb8a878 + 0xa8))(), cVar2 != '\0')))))) {
        local_158 = param_1 + 0x28;
        local_150 = 0xffff;
        local_168 = lVar3;
        local_160 = param_2;
        memset(local_14c,0,0xfc);
        local_170 = &PTR_FUN_14b4003a0;
        local_48 = 0;
        lStack_40 = 0;
        local_38 = 0;
        local_188 = &local_170;
        local_178 = &local_188;
        local_180 = &LAB_143d41cda;
        local_50 = param_3;
        FUN_143d37b9e(param_1);
        local_170 = &PTR_FUN_14b4003a0;
        if (lStack_40 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d37b9e FUN_143d37b9e body=806 status=ok
// SIG undefined FUN_143d37b9e(void)

void FUN_143d37b9e(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  short sVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  char cVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  longlong local_68;
  ulonglong local_60;
  uint *local_58;
  char local_4e [3];
  undefined1 local_4b;
  char local_4a [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar13 = (uint *)(param_1 + 0x38);
  uVar3 = *(uint *)(param_1 + 0x50);
  uVar16 = (ulonglong)uVar3;
  if (uVar3 == 0) {
    uVar9 = 0;
    uVar17 = 1;
    uVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar4 = puVar13;
    }
    uVar5 = *puVar4;
    if (uVar5 == 0) {
      iVar10 = uVar3 + 0x1e;
      if (-1 < (int)(uVar3 - 1)) {
        iVar10 = uVar3 - 1;
      }
      uVar9 = 0;
      uVar17 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar17 = uVar9;
      }
      iVar10 = 0;
      do {
        if (uVar17 == uVar9) goto LAB_143d37e58;
        iVar10 = iVar10 + 0x20;
        uVar5 = puVar4[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar9 = 0;
      iVar10 = 0;
    }
    uVar17 = (ulonglong)(-uVar5 & uVar5);
    uVar1 = uVar17 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if ((int)uVar3 <= (int)uVar5) {
      uVar5 = uVar3;
    }
  }
  if (uVar5 != uVar3) {
    uVar14 = 0xffffffff;
    local_70 = param_2;
    local_60 = uVar16;
    local_58 = puVar13;
    do {
      if (*(short *)(*(longlong *)(param_1 + 0x28) + 10 + (longlong)(int)uVar5 * 0x30) == -1) {
        lVar11 = *(longlong *)(param_1 + 0x28) + (longlong)(int)uVar5 * 0x30;
        if (lVar11 != 0) {
          cVar15 = '\0';
          do {
            local_4b = 0;
            local_4e[2] = cVar15;
            (*(code *)*param_2)(param_2[1],lVar11,local_4e + 2,&local_4b);
            for (sVar2 = *(short *)(lVar11 + 8); sVar2 != -1;
                sVar2 = *(short *)(local_68 + 8 + (longlong)sVar2 * 0x30)) {
              local_68 = *(longlong *)(param_1 + 0x28);
              lVar11 = local_68 + (longlong)sVar2 * 0x30;
              cVar15 = cVar15 + '\x01';
              local_4a[1] = 0;
              local_4a[0] = cVar15;
              (*(code *)*local_70)(local_70[1],lVar11,local_4a,local_4a + 1);
              param_2 = local_70;
            }
            if ((longlong)*(short *)(lVar11 + 0xc) == -1) {
              do {
                if ((longlong)*(short *)(lVar11 + 10) == -1) goto LAB_143d37e46;
                local_68 = *(longlong *)(param_1 + 0x28);
                lVar12 = (longlong)*(short *)(lVar11 + 10) * 0x30;
                lVar11 = local_68 + lVar12;
                cVar15 = cVar15 + -1;
                local_4e[1] = 1;
                local_4e[0] = cVar15;
                (*(code *)*local_70)(local_70[1],lVar11,local_4e,local_4e + 1);
                lVar12 = (longlong)*(short *)(local_68 + 0xc + lVar12);
                param_2 = local_70;
              } while (lVar12 == -1);
              lVar12 = lVar12 * 0x30;
              if (*(short *)(*(longlong *)(param_1 + 0x28) + 10 + lVar12) == -1) break;
              lVar11 = *(longlong *)(param_1 + 0x28) + lVar12;
            }
            else {
              lVar11 = (longlong)*(short *)(lVar11 + 0xc) * 0x30 + *(longlong *)(param_1 + 0x28);
            }
          } while (lVar11 != 0);
        }
LAB_143d37e46:
        uVar3 = *(uint *)(param_1 + 0x50);
        puVar13 = local_58;
        uVar16 = local_60;
      }
      uVar14 = uVar14 & ~(uint)uVar17;
      puVar4 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar4 = puVar13;
      }
      iVar8 = (int)uVar9;
      lVar11 = (longlong)iVar8;
      uVar5 = puVar4[lVar11] & uVar14;
      if (uVar5 == 0) {
        iVar6 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar6 = uVar3 - 1;
        }
        iVar6 = iVar6 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar8) {
          iVar7 = iVar8;
        }
        if (iVar8 < iVar6) {
          lVar12 = 0;
          do {
            uVar5 = puVar4[lVar11 + lVar12 + 1];
            if (uVar5 != 0) {
              uVar9 = (ulonglong)(iVar8 + (int)lVar12 + 1);
              uVar14 = 0xffffffff;
              goto LAB_143d37ce3;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar7 - lVar11 != lVar12);
          uVar14 = 0xffffffff;
          lVar11 = (longlong)iVar7;
        }
        uVar9 = lVar11 + 1U & 0xffffffff;
        param_2 = local_70;
        uVar5 = uVar3;
      }
      else {
LAB_143d37ce3:
        uVar17 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar17 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar5) {
          uVar5 = uVar3;
        }
      }
    } while (uVar5 != (uint)uVar16);
  }
LAB_143d37e58:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d37ec6 FUN_143d37ec6 body=553 status=ok
// SIG undefined FUN_143d37ec6(void)

undefined8 FUN_143d37ec6(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_1c8 [36];
  int local_1a4;
  undefined ***local_1a0;
  code *local_198;
  undefined ****local_190;
  undefined **local_188;
  longlong local_180;
  int local_178;
  longlong local_170;
  undefined2 local_168;
  undefined1 local_164 [252];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_143d37f34:
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
    uVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar5 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar5 != (longlong *)0x0) &&
         (((int)plVar5[2] == *(int *)(param_1 + 0xc) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
         )) {
        if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
          lVar3 = *plVar5;
        }
        else {
          lVar3 = 0;
        }
        if (*(longlong *)(lVar3 + 0x30) != 0) {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
          goto LAB_143d37f59;
        }
      }
      goto LAB_143d37f34;
    }
  }
LAB_143d37f59:
  lVar3 = FUN_143e21f2c(uVar4);
  if (param_2 == 1) {
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0xd68) == '\x01')) {
      cVar2 = (**(code **)(*DAT_14cb8a878 + 0xa8))();
      if (cVar2 != '\0') goto LAB_143d37f98;
    }
    uVar4 = 0;
  }
  else {
LAB_143d37f98:
    local_168 = 0xffff;
    local_1a4 = param_2;
    local_180 = lVar3;
    local_178 = param_2;
    local_170 = param_1 + 0x28;
    memset(local_164,0,0xfc);
    local_188 = &PTR_FUN_14b4003d0;
    local_68 = 0;
    uStack_60 = 0;
    local_50 = 0;
    local_198 = (code *)&LAB_143d41ce8;
    local_1a0 = &local_188;
    local_190 = &local_1a0;
    local_58 = param_4;
    FUN_143d37b9e(param_1);
    local_188 = &PTR_FUN_14b4003d0;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    local_178 = local_1a4;
    local_168 = 0xffff;
    local_180 = lVar3;
    local_170 = param_1 + 0x28;
    memset(local_164,0,0x10c);
    local_50 = 0;
    local_188 = &PTR_FUN_14b400400;
    local_198 = FUN_143d41cf6;
    local_1a0 = &local_188;
    local_190 = &local_1a0;
    local_58 = param_4;
    FUN_143d37b9e(param_1);
    local_188 = &PTR_FUN_14b4003d0;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    uVar4 = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d38116 FUN_143d38116 body=118 status=ok
// SIG undefined FUN_143d38116(void)

byte FUN_143d38116(longlong param_1,longlong param_2,uint *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((*param_3 < 2) && (*(longlong **)(param_2 + 0x10) != (longlong *)0x0)) &&
     (lVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x2b0))(), lVar2 != 0)) {
    plVar3 = (longlong *)FUN_140d17acc(lVar2,param_2 + 0x1c);
    bVar1 = (byte)lVar2;
    if (plVar3 != (longlong *)0x0) {
      bVar1 = (**(code **)(*plVar3 + 0x88))(plVar3,*(undefined4 *)(param_1 + 0x100),param_4,param_5)
      ;
    }
    return plVar3 != (longlong *)0x0 & bVar1;
  }
  return 0;
}



// FUNCTION 143d3818c FUN_143d3818c body=136 status=ok
// SIG undefined FUN_143d3818c(void)

undefined8 * FUN_143d3818c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1412fe974(param_1,uVar1);
  *param_1 = &PTR_FUN_14b3d8800;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_1447715ec(param_1 + 5,&DAT_14cb7cae0);
  FUN_1447715ec(param_1 + 10,&DAT_14cb7cb08);
  param_1[0x10] = DAT_14cb7cad8;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x41880000;
  *(undefined1 *)((longlong)param_1 + 0xec) = 1;
  *param_1 = &PTR_FUN_14b3d8ae0;
  *(undefined4 *)(param_1 + 0x20) = 1;
  return param_1;
}



// FUNCTION 143d38214 FUN_143d38214 body=292 status=ok
// SIG undefined FUN_143d38214(void)

void FUN_143d38214(longlong param_1,undefined8 param_2,undefined4 *param_3,char param_4,
                  longlong param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  longlong local_48;
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_39 = '\0';
  FUN_148845bb8(param_1,local_58,param_2,&local_39);
  if ((local_39 == '\0') && (cVar5 = FUN_1403218c0(local_48 + 0x38,param_3), cVar5 != '\0')) {
    if (param_4 == '\0') goto LAB_143d382f0;
  }
  else {
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *(undefined4 *)(local_48 + 0x38) = *param_3;
    *(undefined4 *)(local_48 + 0x3c) = uVar2;
    *(undefined4 *)(local_48 + 0x40) = uVar3;
    *(undefined4 *)(local_48 + 0x44) = uVar4;
  }
  FUN_140f8d6d8(param_1 + 0x60,local_58,param_2,0);
  if (param_5 != 0) {
    FUN_14884a47c(local_48 + 0x58,local_58,&param_5,0);
  }
  if ((((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((puVar7 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       puVar7 != (undefined8 *)0x0 && (*(int *)(puVar7 + 2) == *(int *)(param_1 + 0xc))) &&
      ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
      uVar6 = *puVar7;
    }
    else {
      uVar6 = 0;
    }
    FUN_1405f658a(uVar6);
  }
LAB_143d382f0:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d38398 FUN_143d38398 body=41 status=ok
// SIG undefined FUN_143d38398(void)

void FUN_143d38398(void)

{
  DAT_14cb7d058 = 0;
  if (DAT_14cb7d050 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6c1c6();
  return;
}



// FUNCTION 143d383fe FUN_143d383fe body=107 status=ok
// SIG undefined FUN_143d383fe(void)

undefined4 FUN_143d383fe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x70);
  uVar7 = 0;
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
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
    if (*(longlong *)(param_1 + 0x68) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x38) + 8);
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
  return uVar7;
}



// FUNCTION 143d3846a FUN_143d3846a body=126 status=ok
// SIG undefined FUN_143d3846a(void)

undefined8 * FUN_143d3846a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x70);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_143d384ba;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar4 = *(longlong *)(param_1 + 0x68);
    if (lVar4 != 0) {
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar4 + 0x34);
      *param_2 = *(undefined8 *)(lVar4 + 0x2c);
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
    if (lVar4 != 0) {
      return param_2;
    }
  }
LAB_143d384ba:
  *(undefined4 *)(param_2 + 1) = DAT_14c948620;
  *param_2 = DAT_14c948618;
  return param_2;
}



// FUNCTION 143d384e8 FUN_143d384e8 body=96 status=ok
// SIG undefined FUN_143d384e8(void)

undefined8 FUN_143d384e8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x70);
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
    if (*(longlong *)(param_1 + 0x68) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x38);
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
  return uVar6;
}



// FUNCTION 143d38554 FUN_143d38554 body=163 status=ok
// SIG undefined FUN_143d38554(void)

void FUN_143d38554(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c947fe0 == 0) {
    lVar1 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar1);
    DAT_14c947fe0 = lVar1;
  }
  FUN_140045924(DAT_14c947fe0,local_30,param_1 + 0x80,1);
  lVar1 = FUN_14050aea0(local_30);
  if (lVar1 != 0) {
    FUN_141059214(param_1,lVar1 + 0x68);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d385f8 FUN_143d385f8 body=655 status=ok
// SIG undefined FUN_143d385f8(void)

void FUN_143d385f8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  code *local_80;
  longlong local_78 [4];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_58 = (longlong *)0x0;
  local_50 = 0x400000000;
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 == 0) {
LAB_143d3882f:
    FUN_14106c8ae(param_1,0,DAT_14cb7cbe8);
  }
  else {
    lVar2 = *param_2;
    lVar9 = 0;
    do {
      iVar1 = *(int *)(lVar2 + 4 + lVar9);
      if (((((iVar1 != 0) && (uVar6 = *(uint *)(lVar2 + lVar9), -1 < (int)uVar6)) &&
           ((int)uVar6 < DAT_14c9647dc)) &&
          ((plVar7 = (longlong *)
                     ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
           plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar1)))) &&
         (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar3 = *plVar7, lVar3 != 0)))) {
        if (DAT_14cac9ca8 == 0) {
          local_80 = FUN_141030f22;
          local_90 = FUN_14081d0ea;
          local_98 = FUN_14081d0ea;
          local_a8 = &LAB_1478c0a72;
          local_b0 = &LAB_1417b2375;
          local_b8 = L"Engine";
          local_c0 = 0x1000000000;
          local_c8 = 0x10000004;
          local_d0 = 8;
          local_d8 = 0x390;
          local_a0 = &local_80;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        uVar5 = local_50;
        if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
          lVar8 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_14885072a(local_78,uVar5 & 0xffffffff);
          }
          plVar7 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar7 = local_78;
          }
          plVar7[lVar8] = lVar3;
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar9);
    if ((int)local_50 < 1) goto LAB_143d3882f;
    plVar7 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar7 = local_58;
    }
    lVar4 = *plVar7;
    FUN_14106c8ae(param_1,lVar4,DAT_14cb7cbe8);
    if (lVar4 != 0) goto LAB_143d38848;
  }
  FUN_143d38554(param_1);
LAB_143d38848:
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d388da FUN_143d388da body=69 status=ok
// SIG undefined FUN_143d388da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d388da(void)

{
  _DAT_14cb7cfe0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d3891c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cfe8,1);
  return;
}



// FUNCTION 143d3891f FUN_143d3891f body=69 status=ok
// SIG undefined FUN_143d3891f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d3891f(void)

{
  _DAT_14cb7cfc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38961. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cfd0,1);
  return;
}



// FUNCTION 143d38964 FUN_143d38964 body=69 status=ok
// SIG undefined FUN_143d38964(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38964(void)

{
  _DAT_14cb7cd30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d389a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cd38,1);
  return;
}



// FUNCTION 143d389a9 FUN_143d389a9 body=69 status=ok
// SIG undefined FUN_143d389a9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d389a9(void)

{
  _DAT_14cb7cd48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d389eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cd50,1);
  return;
}



// FUNCTION 143d389ee FUN_143d389ee body=69 status=ok
// SIG undefined FUN_143d389ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d389ee(void)

{
  _DAT_14cb7cd60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cd68,1);
  return;
}



// FUNCTION 143d38a33 FUN_143d38a33 body=69 status=ok
// SIG undefined FUN_143d38a33(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38a33(void)

{
  _DAT_14cb7cd78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38a75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cd80,1);
  return;
}



// FUNCTION 143d38a78 FUN_143d38a78 body=69 status=ok
// SIG undefined FUN_143d38a78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38a78(void)

{
  _DAT_14cb7cd90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38aba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cd98,1);
  return;
}



// FUNCTION 143d38abd FUN_143d38abd body=69 status=ok
// SIG undefined FUN_143d38abd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38abd(void)

{
  _DAT_14cb7cda8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38aff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cdb0,1);
  return;
}



// FUNCTION 143d38b02 FUN_143d38b02 body=69 status=ok
// SIG undefined FUN_143d38b02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38b02(void)

{
  _DAT_14cb7cdc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cdc8,1);
  return;
}



// FUNCTION 143d38b47 FUN_143d38b47 body=69 status=ok
// SIG undefined FUN_143d38b47(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38b47(void)

{
  _DAT_14cb7cdd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38b89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cde0,1);
  return;
}



// FUNCTION 143d38b8c FUN_143d38b8c body=69 status=ok
// SIG undefined FUN_143d38b8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38b8c(void)

{
  _DAT_14cb7cdf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38bce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cdf8,1);
  return;
}



// FUNCTION 143d38bd1 FUN_143d38bd1 body=69 status=ok
// SIG undefined FUN_143d38bd1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38bd1(void)

{
  _DAT_14cb7ce08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38c13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7ce10,1);
  return;
}



// FUNCTION 143d38c16 FUN_143d38c16 body=69 status=ok
// SIG undefined FUN_143d38c16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38c16(void)

{
  _DAT_14cb7ce20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7ce28,1);
  return;
}



// FUNCTION 143d38c5b FUN_143d38c5b body=69 status=ok
// SIG undefined FUN_143d38c5b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38c5b(void)

{
  _DAT_14cb7ce38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38c9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7ce40,1);
  return;
}



// FUNCTION 143d38ca0 FUN_143d38ca0 body=69 status=ok
// SIG undefined FUN_143d38ca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38ca0(void)

{
  _DAT_14cb7ce50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38ce2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7ce58,1);
  return;
}



// FUNCTION 143d38ce5 FUN_143d38ce5 body=69 status=ok
// SIG undefined FUN_143d38ce5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38ce5(void)

{
  _DAT_14cb7ce68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38d27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7ce70,1);
  return;
}



// FUNCTION 143d38d2a FUN_143d38d2a body=69 status=ok
// SIG undefined FUN_143d38d2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38d2a(void)

{
  _DAT_14cb7ce80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7ce88,1);
  return;
}



// FUNCTION 143d38d6f FUN_143d38d6f body=69 status=ok
// SIG undefined FUN_143d38d6f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38d6f(void)

{
  _DAT_14cb7ce98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38db1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cea0,1);
  return;
}



// FUNCTION 143d38db4 FUN_143d38db4 body=69 status=ok
// SIG undefined FUN_143d38db4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38db4(void)

{
  _DAT_14cb7ceb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38df6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7ceb8,1);
  return;
}



// FUNCTION 143d38df9 FUN_143d38df9 body=69 status=ok
// SIG undefined FUN_143d38df9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38df9(void)

{
  _DAT_14cb7cec8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38e3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7ced0,1);
  return;
}



// FUNCTION 143d38e3e FUN_143d38e3e body=69 status=ok
// SIG undefined FUN_143d38e3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38e3e(void)

{
  _DAT_14cb7cee0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cee8,1);
  return;
}



// FUNCTION 143d38e83 FUN_143d38e83 body=69 status=ok
// SIG undefined FUN_143d38e83(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38e83(void)

{
  _DAT_14cb7cef8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38ec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cf00,1);
  return;
}



// FUNCTION 143d38ec8 FUN_143d38ec8 body=69 status=ok
// SIG undefined FUN_143d38ec8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38ec8(void)

{
  _DAT_14cb7cf10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38f0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cf18,1);
  return;
}



// FUNCTION 143d38f0d FUN_143d38f0d body=69 status=ok
// SIG undefined FUN_143d38f0d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38f0d(void)

{
  _DAT_14cb7cf28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38f4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cf30,1);
  return;
}



// FUNCTION 143d38f52 FUN_143d38f52 body=69 status=ok
// SIG undefined FUN_143d38f52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38f52(void)

{
  _DAT_14cb7cf40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cf48,1);
  return;
}



// FUNCTION 143d38f97 FUN_143d38f97 body=69 status=ok
// SIG undefined FUN_143d38f97(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38f97(void)

{
  _DAT_14cb7cf58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d38fd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cf60,1);
  return;
}



// FUNCTION 143d38fdc FUN_143d38fdc body=69 status=ok
// SIG undefined FUN_143d38fdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d38fdc(void)

{
  _DAT_14cb7cf70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d3901e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cf78,1);
  return;
}



// FUNCTION 143d39021 FUN_143d39021 body=69 status=ok
// SIG undefined FUN_143d39021(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d39021(void)

{
  _DAT_14cb7cf88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d39063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cf90,1);
  return;
}



// FUNCTION 143d39066 FUN_143d39066 body=69 status=ok
// SIG undefined FUN_143d39066(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d39066(void)

{
  _DAT_14cb7cfa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d390a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7cfa8,1);
  return;
}



// FUNCTION 143d390ab FUN_143d390ab body=270 status=ok
// SIG undefined FUN_143d390ab(void)

void FUN_143d390ab(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  void *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_1 + 0xb0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  cVar7 = FUN_143d44916(param_2,param_3);
  plVar1 = (longlong *)(param_1 + 0xa0);
  if (cVar7 != '\0') {
    lVar8 = (longlong)(int)(uint)uStack_40;
    if (lVar8 != 0) {
      iVar3 = *(int *)(param_1 + 0xa8);
      *(uint *)(param_1 + 0xa8) = iVar3 + (uint)uStack_40;
      if ((uint)(*(int *)(param_1 + 0xac) - iVar3) < (uint)uStack_40) {
        FUN_1403e3958(plVar1,iVar3);
      }
      memcpy((void *)((longlong)iVar3 * 0x18 + *plVar1),local_48,lVar8 * 0x18);
    }
  }
  iVar3 = *(int *)(param_1 + 0xa8);
  *(uint *)(param_1 + 0xa8) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xac) < iVar3 + 1U) {
    FUN_1403e3958(plVar1,iVar3);
  }
  lVar8 = *plVar1;
  *(undefined8 *)(lVar8 + 0x10 + (longlong)iVar3 * 0x18) = *(undefined8 *)(param_3 + 4);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  puVar2 = (undefined4 *)(lVar8 + (longlong)iVar3 * 0x18);
  *puVar2 = *param_3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d391ba FUN_143d391ba body=856 status=ok
// SIG undefined FUN_143d391ba(void)

void FUN_143d391ba(char *param_1,double *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  void *_Src;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  double *_Src_00;
  ulonglong uVar14;
  uint uVar15;
  bool bVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  
  param_1[0x94] = '\0';
  lVar13 = DAT_14cb7ce60;
  param_1[0x95] = '\0';
  param_1[0x96] = '\0';
  param_1[0x97] = '\0';
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar4 = *(int *)(lVar11 + 0xc60);
  if (iVar4 == 0x40000002) {
    uVar14 = 0;
  }
  else {
    bVar16 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
      if (iVar4 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        bVar16 = DVar9 == DVar10;
      }
      else {
        bVar16 = false;
      }
    }
    uVar14 = (ulonglong)(bVar16 ^ 1);
  }
  if ((*(char *)(lVar13 + uVar14) == '\0') && (*param_1 == '\0')) {
    FUN_1488487bc(param_1,param_2,param_3);
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar15 = *(uint *)(param_1 + 0xa8);
  _Src = *(void **)(param_1 + 0xa0);
  *(uint *)(param_1 + 0x78) = uVar15;
  if (uVar15 == 0 && *(int *)(param_1 + 0x7c) == 0) {
    param_1[0x7c] = '\0';
    param_1[0x7d] = '\0';
    param_1[0x7e] = '\0';
    param_1[0x7f] = '\0';
  }
  else {
    FUN_1405b70fe(plVar1,uVar15);
    if (uVar15 != 0) {
      memcpy((void *)*plVar1,_Src,(longlong)(int)uVar15 * 0x18);
    }
    uVar15 = *(uint *)(param_1 + 0x78);
  }
  if ((int)uVar15 < 1) {
    uVar17 = FUN_14884926c(param_1,plVar1);
    *(undefined4 *)(param_1 + 0x94) = uVar17;
  }
  else {
    _Src_00 = (double *)*plVar1;
    if (((9.999999747378752e-05 < ABS(*_Src_00 - *param_2)) ||
        (9.999999747378752e-05 < ABS(_Src_00[1] - param_2[1]))) ||
       (9.999999747378752e-05 < ABS(_Src_00[2] - param_2[2]))) {
      *(uint *)(param_1 + 0x78) = uVar15 + 1;
      if (*(uint *)(param_1 + 0x7c) <= uVar15) {
        FUN_1403e3958(plVar1,uVar15);
        _Src_00 = (double *)*plVar1;
      }
      memmove(_Src_00 + 3,_Src_00,(ulonglong)uVar15 * 0x18);
      puVar5 = (undefined4 *)*plVar1;
      uVar17 = *(undefined4 *)((longlong)param_2 + 4);
      uVar7 = *(undefined4 *)(param_2 + 1);
      uVar8 = *(undefined4 *)((longlong)param_2 + 0xc);
      *puVar5 = *(undefined4 *)param_2;
      puVar5[1] = uVar17;
      puVar5[2] = uVar7;
      puVar5[3] = uVar8;
      *(double *)(puVar5 + 4) = param_2[2];
    }
    if (*param_1 == '\0') {
      piVar2 = (int *)(lVar11 + 0xc60);
      iVar4 = *piVar2;
      lVar11 = DAT_14cb7cd40;
      if (param_1[0xb9] == '\x01') {
        lVar11 = DAT_14cb7cd58;
      }
      if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
        uVar14 = 0;
      }
      else if (iVar4 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        uVar14 = (ulonglong)(DVar9 != DVar10);
      }
      else {
        uVar14 = 1;
      }
      *(double *)(*plVar1 + 0x10) =
           (double)*(float *)(lVar11 + uVar14 * 4) + *(double *)(*plVar1 + 0x10);
      lVar11 = DAT_14cb7cd70;
      iVar4 = *piVar2;
      if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
        uVar12 = 0;
      }
      else if (iVar4 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        uVar12 = (ulonglong)(DVar9 != DVar10);
      }
      else {
        uVar12 = 1;
      }
      uVar14 = (ulonglong)*(uint *)(param_1 + 0x78);
      if (2 < (int)*(uint *)(param_1 + 0x78)) {
        fVar3 = *(float *)(lVar11 + uVar12 * 4);
        lVar11 = 1;
        lVar13 = 0x28;
        do {
          *(double *)(*(longlong *)(param_1 + 0x70) + lVar13) =
               *(double *)(*(longlong *)(param_1 + 0x70) + lVar13) + (double)fVar3;
          lVar11 = lVar11 + 1;
          uVar14 = (ulonglong)*(int *)(param_1 + 0x78);
          lVar13 = lVar13 + 0x18;
        } while (lVar11 < (longlong)(uVar14 - 1));
      }
    }
    else {
      uVar14 = (ulonglong)*(uint *)(param_1 + 0x78);
    }
    uVar17 = FUN_14884926c(param_1,plVar1);
    *(undefined4 *)(param_1 + 0x94) = uVar17;
    if (0 < (int)uVar14) {
      lVar11 = 0x10;
      lVar13 = 0;
      do {
        if (*param_1 == '\0') {
          dVar18 = 10.0;
          if (param_1[1] != '\x03') {
            dVar18 = 0.0;
          }
          dVar19 = 5.0;
          if (param_1[1] != '\x02') {
            dVar19 = dVar18;
          }
          lVar6 = *(longlong *)(param_1 + 0x70);
          *(double *)(lVar6 + -0x10 + lVar11) = dVar19 + *(double *)(lVar6 + -0x10 + lVar11);
          *(double *)(lVar6 + -8 + lVar11) = *(double *)(lVar6 + -8 + lVar11) + 0.0;
          *(double *)(lVar6 + lVar11) = *(double *)(lVar6 + lVar11) + 0.0;
          uVar14 = (ulonglong)*(uint *)(param_1 + 0x78);
        }
        lVar13 = lVar13 + 1;
        lVar11 = lVar11 + 0x18;
      } while (lVar13 < (int)uVar14);
    }
  }
  return;
}



// FUNCTION 143d39512 FUN_143d39512 body=1068 status=ok
// SIG undefined FUN_143d39512(void)

bool FUN_143d39512(longlong param_1,longlong *param_2,double *param_3,undefined8 param_4)

{
  int *piVar1;
  double *pdVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  double *_Dst;
  double dVar6;
  float *pfVar7;
  uint *puVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  puVar8 = DAT_14cb7cf20;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar4 = (int)param_2[1];
  if (iVar4 == 0) goto LAB_143d39547;
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar14 + 0xc60);
  local_a0 = param_1;
  if (iVar9 == 0x40000002) {
    uVar16 = *DAT_14cb7cf20;
    if ((int)(iVar4 - 1U) < (int)*DAT_14cb7cf20) {
      uVar16 = iVar4 - 1U;
    }
LAB_143d3961b:
    fVar20 = *DAT_14cb7cf08 * *DAT_14cb7cf08;
LAB_143d39632:
    uStack_80 = 0;
    local_88 = 0;
    uVar13 = 0;
    lVar14 = DAT_14cb7ce90;
  }
  else {
    piVar1 = (int *)(lVar14 + 0xc60);
    bVar17 = true;
    iVar15 = iVar4;
    if ((DAT_14c86a9f8 == '\x01') && (iVar9 != 2)) {
      if (iVar9 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        bVar17 = DVar10 == DVar11;
        iVar9 = *piVar1;
        iVar15 = (int)param_2[1];
      }
      else {
        bVar17 = false;
      }
    }
    pfVar7 = DAT_14cb7cf08;
    uVar16 = iVar15 - 1U;
    if ((int)puVar8[bVar17 ^ 1] <= (int)(iVar15 - 1U)) {
      uVar16 = puVar8[bVar17 ^ 1];
    }
    if (iVar9 == 0x40000002) goto LAB_143d3961b;
    if ((DAT_14c86a9f8 == '\x01') && (iVar9 != 2)) {
      if (iVar9 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        uVar13 = (ulonglong)(DVar10 != DVar11);
        iVar9 = *piVar1;
        param_1 = local_a0;
      }
      else {
        uVar13 = 1;
      }
    }
    else {
      uVar13 = 0;
    }
    lVar14 = DAT_14cb7ce90;
    fVar20 = pfVar7[uVar13] * pfVar7[uVar13];
    local_88 = 0;
    uStack_80 = 0;
    if (((iVar9 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar9 == 2)) goto LAB_143d39632;
    if (iVar9 == 1) {
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      uVar13 = (ulonglong)(DVar10 != DVar11);
    }
    else {
      uVar13 = 1;
    }
  }
  cVar3 = *(char *)(lVar14 + uVar13);
  local_a8 = param_1 + 0xb0;
  FUN_143d44916(param_3,*param_2,&local_88,param_4);
  if ((1 < (int)uVar16) && (cVar3 == '\0')) {
    lVar14 = (ulonglong)(uVar16 - 1) * 0x18;
    do {
      uVar16 = uVar16 - 1;
      lVar5 = *param_2;
      local_98 = 0;
      uStack_90 = 0;
      dVar6 = *(double *)(lVar5 + 0x10 + lVar14) - param_3[2];
      dVar18 = *(double *)(lVar5 + 8 + lVar14) - param_3[1];
      dVar19 = *(double *)(lVar5 + lVar14) - *param_3;
      if ((float)(dVar6 * dVar6 + dVar19 * dVar19 + dVar18 * dVar18) <= fVar20) {
        local_a8 = param_1 + 0xb0;
        FUN_143d44916(param_3,lVar5 + lVar14,&local_98,param_4);
        if ((int)uStack_90 != 0) {
          if (local_88 != 0) {
            FUN_1400020a8();
          }
          local_88 = local_98;
          uStack_80 = CONCAT44(uStack_90._4_4_,(int)uStack_90);
          iVar9 = (int)uStack_90;
          if ((int)uVar16 < 1) goto LAB_143d397e7;
          iVar9 = (int)param_2[1] - uVar16;
          uVar12 = uVar16;
          if (iVar9 != 0) {
            memmove((void *)*param_2,(void *)(*param_2 + (ulonglong)(uVar16 & 0x7fffffff) * 0x18),
                    (longlong)iVar9 * 0x18);
            uVar12 = *(uint *)(param_2 + 1);
          }
          *(uint *)(param_2 + 1) = uVar12 - uVar16;
          break;
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
      lVar14 = lVar14 + -0x18;
    } while (1 < (int)uVar16);
  }
  iVar9 = (int)uStack_80;
LAB_143d397e7:
  lVar14 = local_a0;
  if (iVar9 != 0) {
    _Dst = (double *)*param_2;
    pdVar2 = (double *)(local_88 + (longlong)(iVar9 + -1) * 0x18);
    if ((*_Dst == *pdVar2) && (!NAN(*_Dst) && !NAN(*pdVar2))) {
      lVar5 = local_88 + (longlong)(iVar9 + -1) * 0x18;
      pdVar2 = (double *)(lVar5 + 8);
      if ((_Dst[1] == *pdVar2) && (!NAN(_Dst[1]) && !NAN(*pdVar2))) {
        pdVar2 = (double *)(lVar5 + 0x10);
        if ((_Dst[2] == *pdVar2) && (!NAN(_Dst[2]) && !NAN(*pdVar2))) {
          iVar9 = 0;
          if ((int)param_2[1] != 1) {
            memmove(_Dst,_Dst + 3,(longlong)((int)param_2[1] + -1) * 0x18);
            iVar9 = (int)param_2[1] + -1;
          }
          *(int *)(param_2 + 1) = iVar9;
        }
      }
    }
    if ((longlong *)(lVar14 + 0xa0) != &local_88) {
      if (*(longlong *)(lVar14 + 0xa0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar14 + 0xa0) = local_88;
      local_88 = 0;
      *(int *)(lVar14 + 0xa8) = (int)uStack_80;
      *(undefined4 *)(lVar14 + 0xac) = uStack_80._4_4_;
      uStack_80 = 0;
    }
  }
  FUN_1488492f4(lVar14 + 0xa0,param_2);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
LAB_143d39547:
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4 != 0;
}



// FUNCTION 143d3993f FUN_143d3993f body=936 status=ok
// SIG undefined FUN_143d3993f(void)

ulonglong FUN_143d3993f(longlong param_1,undefined8 param_2,undefined1 **param_3,undefined8 param_4,
                       undefined8 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 **ppuVar8;
  char cVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 **ppuVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_118 [32];
  undefined1 **local_f8;
  undefined1 **local_f0;
  undefined8 local_e8;
  undefined1 **local_e0;
  ulonglong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 local_79;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e0 = param_3;
  lVar12 = FUN_14585a026(param_5);
  lVar13 = DAT_14cb7ce48;
  if (lVar12 == 0) {
    uVar17 = 0;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    local_e8 = param_4;
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar17 = 0;
    }
    else if (iVar3 == 1) {
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      uVar17 = (ulonglong)(DVar10 != DVar11);
    }
    else {
      uVar17 = 1;
    }
    uVar2 = *(undefined4 *)(lVar13 + uVar17 * 4);
    ppuVar18 = (undefined1 **)(param_1 + 0xb0);
    local_f8 = &local_90;
    local_90 = &LAB_143d41e5a;
    local_f0 = ppuVar18;
    local_88 = &local_79;
    lVar13 = FUN_143cd4632(lVar12,param_2,uVar2,0);
    ppuVar8 = local_e0;
    local_f8 = &local_a0;
    local_a0 = &LAB_143d41e5a;
    local_f0 = ppuVar18;
    local_98 = &local_79;
    lVar14 = FUN_143cd4632(lVar12,local_e0,uVar2,lVar13);
    if (lVar14 != lVar13 || (lVar14 == 0 || lVar13 == 0)) {
      bVar21 = false;
      if (lVar14 != lVar13 && (lVar14 != 0 && lVar13 != 0)) {
        local_d8 = local_d8 & 0xffffffff00000000;
        uStack_d0 = 0;
        local_c8 = 0;
        local_c0 = (undefined4)DAT_14c8464e0;
        uStack_bc = DAT_14c8464e0._4_4_;
        uStack_b8 = (undefined4)DAT_14c8464e8;
        uStack_b4 = DAT_14c8464e8._4_4_;
        local_b0 = DAT_14c8464f0;
        local_a8 = 0;
        local_f8 = ppuVar8;
        FUN_143cd63f2(lVar12,lVar14,lVar13,&local_d8);
        lVar12 = uStack_d0;
        lVar14 = (longlong)(int)local_c8;
        bVar21 = lVar14 != 0;
        if (bVar21) {
          local_78 = 0;
          uStack_70 = 0;
          lVar19 = 0;
          lVar15 = 0;
          do {
            uVar17 = uStack_70;
            lVar4 = *(longlong *)(lVar12 + lVar19);
            if (lVar4 != 0) {
              lVar20 = (longlong)(int)uStack_70;
              uVar16 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar16);
              if (uStack_70._4_4_ < uVar16) {
                FUN_1403e3958(&local_78,uVar17 & 0xffffffff);
                lVar15 = local_78;
              }
              *(undefined8 *)(lVar15 + 0x10 + lVar20 * 0x18) = *(undefined8 *)(lVar4 + 0x18);
              uVar2 = *(undefined4 *)(lVar4 + 0xc);
              uVar5 = *(undefined4 *)(lVar4 + 0x10);
              uVar6 = *(undefined4 *)(lVar4 + 0x14);
              puVar1 = (undefined4 *)(lVar15 + lVar20 * 0x18);
              *puVar1 = *(undefined4 *)(lVar4 + 8);
              puVar1[1] = uVar2;
              puVar1[2] = uVar5;
              puVar1[3] = uVar6;
            }
            ppuVar18 = local_e0;
            lVar19 = lVar19 + 8;
          } while (lVar14 * 8 != lVar19);
          cVar9 = FUN_143d39512(param_1,&local_78,local_e0,param_5);
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          if (cVar9 == '\0') {
            ppuVar18 = (undefined1 **)0x0;
          }
          else {
            FUN_143d390ab(param_1,lVar13 + 8,param_1 + 0x28,param_5);
            FUN_143d391ba(param_1,ppuVar18,local_e8);
            ppuVar18 = (undefined1 **)CONCAT71((int7)((ulonglong)ppuVar18 >> 8),1);
          }
        }
        if (uStack_d0 != 0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      local_d8 = 0;
      uStack_d0 = 0;
      local_f8 = ppuVar18;
      cVar9 = FUN_143d44916(ppuVar8,lVar14 + 8,&local_d8,param_5);
      uVar7 = local_e8;
      if ((cVar9 != '\0') && ((ulonglong *)(param_1 + 0xa0) != &local_d8)) {
        if (*(longlong *)(param_1 + 0xa0) != 0) {
          FUN_1400020a8();
        }
        *(ulonglong *)(param_1 + 0xa0) = local_d8;
        local_d8 = 0;
        *(undefined4 *)(param_1 + 0xa8) = (undefined4)uStack_d0;
        *(undefined4 *)(param_1 + 0xac) = uStack_d0._4_4_;
        uStack_d0 = 0;
      }
      FUN_143d390ab(param_1,lVar13 + 8,param_1 + 0x28,param_5);
      FUN_143d391ba(param_1,ppuVar8,uVar7);
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      ppuVar18 = (undefined1 **)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      bVar21 = true;
    }
    uVar17 = CONCAT71((int7)((ulonglong)ppuVar18 >> 8),(byte)ppuVar18 & bVar21);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffffff;
}



// FUNCTION 143d39ce8 FUN_143d39ce8 body=4479 status=ok
// SIG undefined FUN_143d39ce8(void)

undefined4
FUN_143d39ce8(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  void *pvVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double *pdVar16;
  char cVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  DWORD DVar20;
  DWORD DVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong lVar24;
  double *pdVar25;
  double *pdVar26;
  longlong lVar27;
  ulonglong uVar28;
  double *pdVar29;
  int iVar30;
  longlong *plVar31;
  double *pdVar32;
  longlong lVar33;
  double *pdVar34;
  double *pdVar35;
  int iVar36;
  longlong lVar37;
  longlong lVar38;
  uint uVar39;
  int iVar40;
  double *pdVar41;
  double *pdVar42;
  int iVar43;
  longlong *plVar44;
  double *pdVar45;
  bool bVar46;
  float fVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auVar50 [16];
  double dVar51;
  double dVar52;
  undefined1 auStack_508 [32];
  longlong *local_4e8;
  longlong local_4d8;
  longlong *local_4d0;
  longlong local_4c8;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  double local_4a8;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  longlong local_458;
  undefined8 uStack_450;
  longlong local_448;
  undefined8 uStack_440;
  undefined8 *local_438;
  undefined8 uStack_430;
  longlong *local_428;
  int local_420;
  longlong local_418 [4];
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined8 local_3ec;
  undefined4 local_3e4;
  longlong local_3d8;
  undefined4 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  double dStack_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_398;
  double dStack_390;
  undefined8 local_388;
  undefined4 local_380;
  longlong local_378;
  undefined8 uStack_370;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double dStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_508;
  if ((param_5 == (longlong *)0x0) ||
     (lVar22 = (**(code **)(*param_5 + 0x180))(param_5), lVar22 == 0)) {
    uVar19 = 0;
    goto LAB_143d39d6a;
  }
  lVar22 = FUN_1488dd37a(lVar22);
  uVar19 = 0;
  if (lVar22 == 0) goto LAB_143d39d6a;
  FUN_1488dd3ec(lVar22,&local_428,param_3,0x461c4000);
  local_3f8 = 0;
  local_3f0 = 0;
  local_418[0] = 0;
  local_418[1] = 0;
  local_3ec = 0xffffffff00000080;
  local_3e4 = 0;
  local_3d8 = 0;
  local_3d0 = 0;
  local_438 = (undefined8 *)0x0;
  uStack_430 = 0;
  if ((longlong)local_420 != 0) {
    plVar44 = local_428 + (longlong)local_420 * 2;
    plVar31 = local_428;
    local_4d8 = param_1;
    local_4c0 = param_4;
    do {
      plVar8 = (longlong *)plVar31[1];
      if (plVar8 != (longlong *)0x0) {
        iVar36 = (int)plVar8[1];
        do {
          if (iVar36 == 0) goto LAB_143d39f40;
          LOCK();
          iVar30 = (int)plVar8[1];
          bVar46 = iVar36 == iVar30;
          if (bVar46) {
            *(int *)(plVar8 + 1) = iVar36 + 1;
            iVar30 = iVar36;
          }
          iVar36 = iVar30;
          UNLOCK();
        } while (!bVar46);
        pvVar9 = (void *)*plVar31;
        if (pvVar9 != (void *)0x0) {
          if (DAT_14cb740f8 != 0) {
            if ((longlong)*(int *)((longlong)pvVar9 + 0x100) != 0) {
              lVar22 = 0;
              do {
                if (*(longlong *)(*(longlong *)((longlong)pvVar9 + 0xf8) + lVar22) == DAT_14cb740f8)
                goto LAB_143d39f21;
                lVar22 = lVar22 + 8;
              } while ((longlong)*(int *)((longlong)pvVar9 + 0x100) * 8 != lVar22);
            }
            if ((longlong)*(int *)((longlong)pvVar9 + 0x110) != 0) {
              lVar22 = 0;
              do {
                if (*(longlong *)(*(longlong *)((longlong)pvVar9 + 0x108) + lVar22) == DAT_14cb740f8
                   ) goto LAB_143d39f21;
                lVar22 = lVar22 + 8;
              } while ((longlong)*(int *)((longlong)pvVar9 + 0x110) * 8 != lVar22);
            }
          }
          FUN_1488daafa(pvVar9,&local_3c8,param_2,0x461c4000);
          if (dStack_3b0._0_4_ != -1) {
            LOCK();
            *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
            UNLOCK();
            local_c8 = &local_3c8;
            local_478 = pvVar9;
            uStack_470 = plVar8;
            uStack_c0 = &local_478;
            FUN_14882b844(local_418,&local_448,&local_c8,0);
            if (uStack_470 != (longlong *)0x0) {
              LOCK();
              piVar2 = (int *)((longlong)uStack_470 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*uStack_470 + 0x10))();
              }
            }
            lVar22 = (longlong)(int)uStack_430;
            uVar39 = (int)uStack_430 + 1;
            uStack_430 = CONCAT44(uStack_430._4_4_,uVar39);
            if (uStack_430._4_4_ < uVar39) {
              FUN_14882be1a(&local_438);
            }
            local_438[lVar22 * 4 + 2] = local_3b8;
            (local_438 + lVar22 * 4 + 2)[1] = dStack_3b0;
            puVar23 = local_438 + lVar22 * 4;
            *(undefined4 *)puVar23 = (undefined4)local_3c8;
            *(undefined4 *)((longlong)puVar23 + 4) = local_3c8._4_4_;
            *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_3c0;
            *(undefined4 *)((longlong)puVar23 + 0xc) = uStack_3c0._4_4_;
          }
        }
LAB_143d39f21:
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
LAB_143d39f40:
      puVar23 = local_438;
      plVar31 = plVar31 + 2;
    } while (plVar31 != plVar44);
    iVar36 = (int)uStack_430;
    uVar28 = uStack_430 & 0xffffffff;
    if (uVar28 == 0) {
      uVar19 = 0;
    }
    else {
      if (1 < (int)uStack_430) {
        dVar5 = *param_2;
        dVar6 = param_2[1];
        dVar7 = param_2[2];
        memset(&local_3b8,0,0x2f0);
        local_3c8 = puVar23;
        uStack_3c0 = puVar23 + uVar28 * 4 + -4;
        fVar47 = logf((float)iVar36);
        local_3b8 = CONCAT44(local_3b8._4_4_,(int)(longlong)(fVar47 + fVar47));
        puVar23 = &local_3c8;
        do {
          pdVar26 = (double *)*puVar23;
          pdVar29 = (double *)puVar23[1];
          iVar36 = *(int *)(puVar23 + 2);
          iVar30 = (int)((ulonglong)((longlong)pdVar29 - (longlong)pdVar26) >> 5);
          uVar39 = iVar30 + 1;
          pdVar34 = pdVar29;
          pdVar42 = pdVar26;
          if (iVar36 != 0) {
LAB_143d3a0c1:
            if (8 < (int)uVar39) {
              uVar28 = (ulonglong)(uVar39 >> 1);
              dVar52 = pdVar26[uVar28 * 4];
              dVar51 = (pdVar26 + uVar28 * 4)[1];
              dVar11 = pdVar26[uVar28 * 4 + 2];
              dVar12 = (pdVar26 + uVar28 * 4 + 2)[1];
              dVar13 = *pdVar26;
              dVar14 = pdVar26[1];
              dVar15 = pdVar26[3];
              pdVar26[uVar28 * 4 + 2] = pdVar26[2];
              (pdVar26 + uVar28 * 4 + 2)[1] = dVar15;
              pdVar26[uVar28 * 4] = dVar13;
              (pdVar26 + uVar28 * 4)[1] = dVar14;
              pdVar26[2] = dVar11;
              pdVar26[3] = dVar12;
              *pdVar26 = dVar52;
              pdVar26[1] = dVar51;
              pdVar41 = pdVar34 + 4;
              pdVar25 = pdVar26;
              do {
                pdVar16 = pdVar25 + 4;
                pdVar35 = pdVar25 + 4;
                do {
                  pdVar32 = pdVar35;
                  pdVar25 = pdVar16;
                  if (pdVar34 < pdVar25) break;
                  pdVar16 = pdVar25 + 4;
                  pdVar35 = pdVar32 + 4;
                } while ((pdVar25[2] - dVar7) * (pdVar25[2] - dVar7) +
                         (*pdVar25 - dVar5) * (*pdVar25 - dVar5) +
                         (pdVar25[1] - dVar6) * (pdVar25[1] - dVar6) <=
                         (pdVar26[2] - dVar7) * (pdVar26[2] - dVar7) +
                         (*pdVar26 - dVar5) * (*pdVar26 - dVar5) +
                         (pdVar26[1] - dVar6) * (pdVar26[1] - dVar6));
                pdVar16 = pdVar41 + -8;
                do {
                  pdVar35 = pdVar41;
                  pdVar45 = pdVar16;
                  pdVar41 = pdVar35 + -4;
                  if (pdVar41 <= pdVar26) break;
                  pdVar16 = pdVar45 + -4;
                } while ((pdVar26[2] - dVar7) * (pdVar26[2] - dVar7) +
                         (*pdVar26 - dVar5) * (*pdVar26 - dVar5) +
                         (pdVar26[1] - dVar6) * (pdVar26[1] - dVar6) <=
                         (pdVar35[-2] - dVar7) * (pdVar35[-2] - dVar7) +
                         (*pdVar41 - dVar5) * (*pdVar41 - dVar5) +
                         (pdVar35[-3] - dVar6) * (pdVar35[-3] - dVar6));
                if (pdVar41 < pdVar25) goto LAB_143d3a273;
                dVar52 = *pdVar25;
                dVar51 = pdVar25[1];
                dVar11 = pdVar25[2];
                dVar12 = pdVar25[3];
                dVar13 = *pdVar41;
                dVar14 = pdVar35[-3];
                dVar15 = pdVar35[-1];
                pdVar25[2] = pdVar35[-2];
                pdVar25[3] = dVar15;
                *pdVar25 = dVar13;
                pdVar25[1] = dVar14;
                pdVar35[-2] = dVar11;
                pdVar35[-1] = dVar12;
                *pdVar41 = dVar52;
                pdVar35[-3] = dVar51;
              } while( true );
            }
            if (pdVar26 < pdVar34) {
              do {
                pdVar29 = pdVar26;
                if (pdVar26 + 4 <= pdVar34) {
                  uVar19 = SUB84(*pdVar26,0);
                  uVar18 = (undefined4)((ulonglong)*pdVar26 >> 0x20);
                  uVar48 = 0;
                  uVar49 = 0;
                  pdVar42 = pdVar26 + 4;
                  do {
                    dVar51 = (double)CONCAT44(uVar18,uVar19) - dVar5;
                    dVar52 = *pdVar42 - dVar5;
                    dVar51 = (pdVar29[2] - dVar7) * (pdVar29[2] - dVar7) +
                             dVar51 * dVar51 + (pdVar29[1] - dVar6) * (pdVar29[1] - dVar6);
                    dVar52 = (pdVar42[2] - dVar7) * (pdVar42[2] - dVar7) +
                             dVar52 * dVar52 + (pdVar42[1] - dVar6) * (pdVar42[1] - dVar6);
                    uVar28 = -(ulonglong)(dVar51 < dVar52);
                    auVar50._0_8_ = ~uVar28 & CONCAT44(uVar18,uVar19);
                    auVar50._12_4_ = uVar49;
                    auVar50._8_4_ = uVar48;
                    if (dVar51 < dVar52) {
                      pdVar29 = pdVar42;
                    }
                    auVar10._8_8_ = 0;
                    auVar10._0_8_ = (ulonglong)*pdVar42 & uVar28;
                    auVar50 = auVar50 | auVar10;
                    pdVar42 = pdVar42 + 4;
                    uVar19 = auVar50._0_4_;
                    uVar18 = auVar50._4_4_;
                    uVar48 = auVar50._8_4_;
                    uVar49 = auVar50._12_4_;
                  } while (pdVar42 <= pdVar34);
                }
                local_c8 = (undefined8 *)*pdVar29;
                uStack_c0 = (longlong *)pdVar29[1];
                local_b8 = pdVar29[2];
                dStack_b0 = pdVar29[3];
                dVar52 = *pdVar34;
                dVar51 = pdVar34[1];
                dVar11 = pdVar34[3];
                pdVar29[2] = pdVar34[2];
                pdVar29[3] = dVar11;
                *pdVar29 = dVar52;
                pdVar29[1] = dVar51;
                pdVar34[2] = local_b8;
                pdVar34[3] = dStack_b0;
                *pdVar34 = (double)local_c8;
                pdVar34[1] = (double)uStack_c0;
                pdVar34 = pdVar34 + -4;
              } while (pdVar26 < pdVar34);
            }
            goto LAB_143d3a83b;
          }
LAB_143d3a33f:
          if (uVar39 != 0) {
            iVar36 = (iVar30 - (iVar30 + -1 >> 0x1f)) + -1 >> 1;
            iVar30 = iVar36;
joined_r0x000143d3a360:
            do {
              iVar40 = iVar36 * 2 + 1;
              if (iVar40 < (int)uVar39) {
                iVar43 = iVar36 * 2 + 2;
                if (iVar43 < (int)uVar39) {
                  lVar37 = (longlong)iVar43;
                  lVar22 = (longlong)iVar40;
                  if ((pdVar26[lVar22 * 4 + 2] - dVar7) * (pdVar26[lVar22 * 4 + 2] - dVar7) +
                      (pdVar26[lVar22 * 4] - dVar5) * (pdVar26[lVar22 * 4] - dVar5) +
                      (pdVar26[lVar22 * 4 + 1] - dVar6) * (pdVar26[lVar22 * 4 + 1] - dVar6) <=
                      (pdVar26[lVar37 * 4 + 2] - dVar7) * (pdVar26[lVar37 * 4 + 2] - dVar7) +
                      (pdVar26[lVar37 * 4] - dVar5) * (pdVar26[lVar37 * 4] - dVar5) +
                      (pdVar26[lVar37 * 4 + 1] - dVar6) * (pdVar26[lVar37 * 4 + 1] - dVar6)) {
                    iVar40 = iVar43;
                  }
                }
                lVar37 = (longlong)iVar36;
                lVar22 = (longlong)iVar40;
                if ((pdVar26[lVar37 * 4 + 2] - dVar7) * (pdVar26[lVar37 * 4 + 2] - dVar7) +
                    (pdVar26[lVar37 * 4] - dVar5) * (pdVar26[lVar37 * 4] - dVar5) +
                    (pdVar26[lVar37 * 4 + 1] - dVar6) * (pdVar26[lVar37 * 4 + 1] - dVar6) <
                    (pdVar26[lVar22 * 4 + 2] - dVar7) * (pdVar26[lVar22 * 4 + 2] - dVar7) +
                    (pdVar26[lVar22 * 4] - dVar5) * (pdVar26[lVar22 * 4] - dVar5) +
                    (pdVar26[lVar22 * 4 + 1] - dVar6) * (pdVar26[lVar22 * 4 + 1] - dVar6)) {
                  pdVar29 = pdVar26 + lVar37 * 4;
                  pdVar34 = pdVar26 + lVar22 * 4;
                  local_c8 = (undefined8 *)*pdVar29;
                  uStack_c0 = (longlong *)pdVar29[1];
                  local_b8 = pdVar29[2];
                  dStack_b0 = pdVar29[3];
                  dVar52 = *pdVar34;
                  dVar51 = pdVar34[1];
                  dVar11 = pdVar34[3];
                  pdVar29[2] = pdVar34[2];
                  pdVar29[3] = dVar11;
                  *pdVar29 = dVar52;
                  pdVar29[1] = dVar51;
                  pdVar34[2] = local_b8;
                  pdVar34[3] = dStack_b0;
                  *pdVar34 = (double)local_c8;
                  pdVar34[1] = (double)uStack_c0;
                  iVar36 = iVar40;
                  goto joined_r0x000143d3a360;
                }
              }
              bVar46 = iVar30 != 0;
              iVar36 = iVar30 + -1;
              iVar30 = iVar36;
            } while (bVar46);
            if (1 < (int)uVar39) {
              uVar28 = (ulonglong)uVar39 - 1;
              local_c8 = (undefined8 *)*pdVar26;
              uStack_c0 = (longlong *)pdVar26[1];
              local_b8 = pdVar26[2];
              dStack_b0 = pdVar26[3];
              dVar52 = pdVar26[uVar28 * 4];
              dVar51 = (pdVar26 + uVar28 * 4)[1];
              dVar11 = (pdVar26 + uVar28 * 4 + 2)[1];
              pdVar26[2] = pdVar26[uVar28 * 4 + 2];
              pdVar26[3] = dVar11;
              *pdVar26 = dVar52;
              pdVar26[1] = dVar51;
              pdVar26[uVar28 * 4 + 2] = local_b8;
              (pdVar26 + uVar28 * 4 + 2)[1] = dStack_b0;
              pdVar26[uVar28 * 4] = (double)local_c8;
              (pdVar26 + uVar28 * 4)[1] = (double)uStack_c0;
              if (uVar39 != 2) {
                do {
                  iVar36 = 0;
                  iVar40 = 1;
                  iVar30 = 0;
                  do {
                    lVar22 = (longlong)(iVar36 + 2);
                    iVar43 = iVar40;
                    if ((lVar22 < (longlong)uVar28) &&
                       (lVar37 = (longlong)iVar40,
                       (pdVar26[lVar37 * 4 + 2] - dVar7) * (pdVar26[lVar37 * 4 + 2] - dVar7) +
                       (pdVar26[lVar37 * 4] - dVar5) * (pdVar26[lVar37 * 4] - dVar5) +
                       (pdVar26[lVar37 * 4 + 1] - dVar6) * (pdVar26[lVar37 * 4 + 1] - dVar6) <=
                       (pdVar26[lVar22 * 4 + 2] - dVar7) * (pdVar26[lVar22 * 4 + 2] - dVar7) +
                       (pdVar26[lVar22 * 4] - dVar5) * (pdVar26[lVar22 * 4] - dVar5) +
                       (pdVar26[lVar22 * 4 + 1] - dVar6) * (pdVar26[lVar22 * 4 + 1] - dVar6))) {
                      iVar43 = iVar36 + 2;
                    }
                    lVar37 = (longlong)iVar30;
                    lVar22 = (longlong)iVar43;
                    if ((pdVar26[lVar22 * 4 + 2] - dVar7) * (pdVar26[lVar22 * 4 + 2] - dVar7) +
                        (pdVar26[lVar22 * 4] - dVar5) * (pdVar26[lVar22 * 4] - dVar5) +
                        (pdVar26[lVar22 * 4 + 1] - dVar6) * (pdVar26[lVar22 * 4 + 1] - dVar6) <=
                        (pdVar26[lVar37 * 4 + 2] - dVar7) * (pdVar26[lVar37 * 4 + 2] - dVar7) +
                        (pdVar26[lVar37 * 4] - dVar5) * (pdVar26[lVar37 * 4] - dVar5) +
                        (pdVar26[lVar37 * 4 + 1] - dVar6) * (pdVar26[lVar37 * 4 + 1] - dVar6))
                    break;
                    pdVar29 = pdVar26 + lVar37 * 4;
                    pdVar34 = pdVar26 + lVar22 * 4;
                    dVar52 = *pdVar29;
                    dVar51 = pdVar29[1];
                    dVar11 = pdVar29[2];
                    dVar12 = pdVar29[3];
                    dVar13 = *pdVar34;
                    dVar14 = pdVar34[1];
                    dVar15 = pdVar34[3];
                    pdVar29[2] = pdVar34[2];
                    pdVar29[3] = dVar15;
                    *pdVar29 = dVar13;
                    pdVar29[1] = dVar14;
                    pdVar34[2] = dVar11;
                    pdVar34[3] = dVar12;
                    *pdVar34 = dVar52;
                    pdVar34[1] = dVar51;
                    iVar36 = iVar43 * 2;
                    iVar40 = iVar43 * 2 + 1;
                    iVar30 = iVar43;
                  } while ((longlong)iVar40 < (longlong)uVar28);
                  uVar3 = uVar28 - 1;
                  local_c8 = (undefined8 *)*pdVar26;
                  uStack_c0 = (longlong *)pdVar26[1];
                  local_b8 = pdVar26[2];
                  dStack_b0 = pdVar26[3];
                  dVar52 = pdVar26[uVar3 * 4];
                  dVar51 = (pdVar26 + uVar3 * 4)[1];
                  dVar11 = (pdVar26 + uVar3 * 4 + 2)[1];
                  pdVar26[2] = pdVar26[uVar3 * 4 + 2];
                  pdVar26[3] = dVar11;
                  *pdVar26 = dVar52;
                  pdVar26[1] = dVar51;
                  pdVar26[uVar3 * 4 + 2] = local_b8;
                  (pdVar26 + uVar3 * 4 + 2)[1] = dStack_b0;
                  pdVar26[uVar3 * 4] = (double)local_c8;
                  (pdVar26 + uVar3 * 4)[1] = (double)uStack_c0;
                  bVar46 = 2 < uVar28;
                  uVar28 = uVar3;
                } while (bVar46);
              }
            }
          }
LAB_143d3a83b:
          puVar23 = puVar23 + -3;
        } while (&local_3c8 <= puVar23);
      }
      puVar23 = local_438;
      local_b8 = (double)DAT_14c8464f0;
      local_c8 = (undefined8 *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_c0 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      dStack_b0 = (double)CONCAT44(dStack_b0._4_4_,0xffffffff);
      uVar19 = 0;
      uVar18 = FUN_1448eb174(local_438,0x18,0);
      iVar36 = FUN_14882bb36(local_418,uVar18,puVar23);
      lVar22 = 0;
      if (iVar36 != -1) {
        lVar22 = (longlong)iVar36 * 0x30 + local_418[0];
      }
      plVar31 = *(longlong **)(lVar22 + 0x20);
      if (plVar31 != (longlong *)0x0) {
        iVar36 = (int)plVar31[1];
        do {
          if (iVar36 == 0) {
            uVar19 = 0;
            goto LAB_143d3a96d;
          }
          LOCK();
          iVar30 = (int)plVar31[1];
          bVar46 = iVar36 == iVar30;
          if (bVar46) {
            *(int *)(plVar31 + 1) = iVar36 + 1;
            iVar30 = iVar36;
          }
          iVar36 = iVar30;
          UNLOCK();
        } while (!bVar46);
        lVar22 = *(longlong *)(lVar22 + 0x18);
        if (lVar22 == 0) {
LAB_143d3a93a:
          uVar19 = 0;
        }
        else {
          local_4c8 = lVar22;
          FUN_1488daafa(lVar22,&local_3c8,param_3,0x461c4000);
          local_b8 = (double)local_3b8;
          dStack_b0 = dStack_3b0;
          dVar5 = dStack_b0;
          local_c8 = local_3c8;
          uStack_c0 = uStack_3c0;
          dStack_b0._0_4_ = SUB84(dStack_3b0,0);
          bVar46 = dStack_b0._0_4_ == -1;
          dStack_b0 = dVar5;
          if (bVar46) goto LAB_143d3a93a;
          local_3c8 = (undefined8 *)0x0;
          uStack_3c0 = (longlong *)0x0;
          local_3b8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dStack_3b0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_3a8 = DAT_14c8464f0;
          local_3a0 = 0xffffffff;
          local_388 = DAT_14c8464f0;
          local_380 = 0xffffffff;
          local_378 = 0;
          uStack_370 = 0;
          local_398 = local_3b8;
          dStack_390 = dStack_3b0;
          FUN_1412a6ab8(local_4c8,&local_3c8,&local_c8,local_438);
          if (((local_3c8 == (undefined8 *)0x0) || (uStack_3c0 == (longlong *)0x0)) ||
             ((int)uStack_3c0[1] < 1)) {
            uVar19 = 0;
          }
          else {
            local_4e8 = (longlong *)(local_4d8 + 0xb0);
            local_448 = 0;
            uStack_440 = 0;
            cVar17 = FUN_143d44916(param_3,&local_c8,&local_448,param_5);
            if (cVar17 == '\0') {
              uVar19 = 0;
            }
            else {
              local_4d0 = (longlong *)(local_4d8 + 0xa0);
              if (local_4d0 != &local_448) {
                if (*(longlong *)(local_4d8 + 0xa0) != 0) {
                  FUN_1400020a8();
                }
                *(longlong *)(local_4d8 + 0xa0) = local_448;
                local_448 = 0;
                *(undefined4 *)(local_4d8 + 0xa8) = (undefined4)uStack_440;
                *(undefined4 *)(local_4d8 + 0xac) = uStack_440._4_4_;
                uStack_440 = 0;
              }
              lVar22 = local_378;
              local_458 = 0;
              uStack_450 = 0;
              lVar37 = (longlong)(int)uStack_370;
              if (lVar37 != 0) {
                lVar33 = 0;
                lVar24 = 0;
                lVar38 = local_4c8;
                do {
                  uVar28 = uStack_450;
                  lVar27 = (longlong)*(int *)(lVar22 + lVar33) * 0x90;
                  local_468 = *(undefined8 *)(*(longlong *)(lVar38 + 0x88) + 0x10 + lVar27);
                  plVar44 = (longlong *)(*(longlong *)(lVar38 + 0x88) + lVar27);
                  local_478 = (void *)*plVar44;
                  uStack_470 = (longlong *)plVar44[1];
                  lVar27 = (longlong)(int)uStack_450;
                  uVar39 = (int)uStack_450 + 1;
                  uStack_450 = CONCAT44(uStack_450._4_4_,uVar39);
                  if (uStack_450._4_4_ < uVar39) {
                    FUN_1403e3958(&local_458,uVar28 & 0xffffffff);
                    lVar24 = local_458;
                    lVar38 = local_4c8;
                  }
                  *(undefined8 *)(lVar24 + 0x10 + lVar27 * 0x18) = local_468;
                  puVar4 = (undefined4 *)(lVar24 + lVar27 * 0x18);
                  *puVar4 = (undefined4)local_478;
                  puVar4[1] = local_478._4_4_;
                  puVar4[2] = (uint)uStack_470;
                  puVar4[3] = uStack_470._4_4_;
                  lVar33 = lVar33 + 0xc;
                } while (lVar37 * 0xc != lVar33);
              }
              uVar19 = FUN_143d39512(local_4d8,&local_458,param_3,param_5);
              if ((char)uVar19 != '\0') {
                local_478 = (void *)0x0;
                uVar39 = *(uint *)(local_4d8 + 0xa8);
                pvVar9 = *(void **)(local_4d8 + 0xa0);
                uStack_470 = (longlong *)CONCAT44(uStack_470._4_4_,uVar39);
                if ((longlong)(int)uVar39 == 0) {
                  uStack_470 = (longlong *)(ulonglong)uVar39;
                }
                else {
                  FUN_1405b70fe(&local_478,uVar39,0);
                  memcpy(local_478,pvVar9,(longlong)(int)uVar39 * 0x18);
                }
                lVar22 = DAT_14cb7cf68;
                iVar36 = *(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0xc60);
                if (iVar36 == 0x40000002) {
                  uVar28 = 0;
                }
                else {
                  bVar46 = true;
                  if ((DAT_14c86a9f8 == '\x01') && (iVar36 != 2)) {
                    if (iVar36 == 1) {
                      DVar20 = FUN_140ad26c0();
                      DVar21 = GetCurrentThreadId();
                      bVar46 = DVar20 == DVar21;
                    }
                    else {
                      bVar46 = false;
                    }
                  }
                  uVar28 = (ulonglong)(bVar46 ^ 1);
                }
                if (*(char *)(lVar22 + uVar28) == '\x01') {
                  *(undefined4 *)(local_4d8 + 0xa8) = 0;
                  if (*(int *)(local_4d8 + 0xac) < 0) {
                    FUN_1447a8aa0(local_4d0,0);
                  }
                  local_498 = *local_438;
                  uStack_490 = local_438[1];
                  local_488 = local_438[2];
                  local_4b8 = *(undefined4 *)param_2;
                  uStack_4b4 = *(undefined4 *)((longlong)param_2 + 4);
                  uStack_4b0 = *(undefined4 *)(param_2 + 1);
                  uStack_4ac = *(undefined4 *)((longlong)param_2 + 0xc);
                  local_4a8 = param_2[2];
                  local_4e8 = param_5;
                  cVar17 = FUN_143d3993f(local_4d8,&local_4b8,&local_498,local_4c0);
                  if (cVar17 == '\0') {
                    FUN_143d390ab(local_4d8,local_438,local_4d8 + 0x28,param_5);
                  }
                  lVar22 = (longlong)(int)(uint)uStack_470;
                  uVar39 = *(uint *)(local_4d8 + 0xa8);
                  *(uint *)(local_4d8 + 0xa8) = uVar39 + (uint)uStack_470;
                  if (*(int *)(local_4d8 + 0xac) - uVar39 < (uint)uStack_470) {
                    FUN_1403e3958(local_4d0,uVar39);
                  }
                  plVar44 = local_4d0;
                  memmove((void *)(*local_4d0 + lVar22 * 0x18),(void *)*local_4d0,
                          (ulonglong)uVar39 * 0x18);
                  memmove((void *)*plVar44,local_478,lVar22 * 0x18);
                  uStack_470 = (longlong *)((ulonglong)uStack_470 & 0xffffffff00000000);
                }
                else {
                  FUN_143d390ab(local_4d8,local_438,local_4d8 + 0x28,param_5);
                }
                FUN_143d391ba(local_4d8,param_3,local_4c0);
                if (local_478 != (void *)0x0) {
                  FUN_1400020a8();
                }
              }
              if (local_458 != 0) {
                FUN_1400020a8();
              }
            }
            if (local_448 != 0) {
              FUN_1400020a8();
            }
          }
          if (local_378 != 0) {
            FUN_1400020a8();
          }
          if (uStack_3c0 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)uStack_3c0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*uStack_3c0 + 0x10))();
            }
          }
        }
        LOCK();
        plVar44 = plVar31 + 1;
        *(int *)plVar44 = (int)*plVar44 + -1;
        UNLOCK();
        if ((int)*plVar44 == 0) {
          (**(code **)*plVar31)(plVar31);
          LOCK();
          piVar2 = (int *)((longlong)plVar31 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar31 + 0x10))(plVar31);
          }
        }
      }
    }
LAB_143d3a96d:
    if (local_438 != (undefined8 *)0x0) {
      FUN_1400020a8(local_438);
    }
  }
  local_3d0 = 0;
  if (local_3d8 != 0) {
    FUN_1400020a8();
  }
  FUN_148829aae(local_418);
  FUN_140b33c95(local_428,local_420);
  if (local_428 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143d39d6a:
  if ((local_a0 ^ (ulonglong)auStack_508) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19;
LAB_143d3a273:
  local_c8 = (undefined8 *)*pdVar26;
  uStack_c0 = (longlong *)pdVar26[1];
  local_b8 = pdVar26[2];
  dStack_b0 = pdVar26[3];
  dVar52 = *pdVar41;
  dVar51 = pdVar35[-3];
  dVar11 = pdVar35[-1];
  pdVar26[2] = pdVar35[-2];
  pdVar26[3] = dVar11;
  *pdVar26 = dVar52;
  pdVar26[1] = dVar51;
  pdVar35[-2] = local_b8;
  pdVar35[-1] = dStack_b0;
  *pdVar41 = (double)local_c8;
  pdVar35[-3] = (double)uStack_c0;
  iVar36 = iVar36 + -1;
  pdVar35 = pdVar35 + -8;
  if ((longlong)pdVar45 - (longlong)pdVar42 < (longlong)pdVar29 - (longlong)pdVar32) {
    if (pdVar25 < pdVar34) {
      *puVar23 = pdVar25;
      puVar23[1] = pdVar34;
      *(int *)(puVar23 + 2) = iVar36;
      puVar23 = puVar23 + 3;
    }
    pdVar32 = pdVar26;
    pdVar29 = pdVar45;
    if (pdVar41 <= pdVar26 + 4) goto LAB_143d3a83b;
  }
  else {
    if (pdVar26 + 4 < pdVar41) {
      *puVar23 = pdVar26;
      puVar23[1] = pdVar35;
      *(int *)(puVar23 + 2) = iVar36;
      puVar23 = puVar23 + 3;
    }
    pdVar26 = pdVar25;
    pdVar35 = pdVar34;
    pdVar29 = pdVar34;
    if (pdVar34 <= pdVar25) goto LAB_143d3a83b;
  }
  iVar30 = (int)((ulonglong)((longlong)pdVar29 - (longlong)pdVar32) >> 5);
  uVar39 = iVar30 + 1;
  pdVar34 = pdVar35;
  pdVar42 = pdVar32;
  if (iVar36 == 0) goto LAB_143d3a33f;
  goto LAB_143d3a0c1;
}



// FUNCTION 143d3ae68 FUN_143d3ae68 body=4775 status=ok
// SIG undefined FUN_143d3ae68(void)

undefined2 *
FUN_143d3ae68(undefined2 *param_1,undefined2 *param_2,double *param_3,double *param_4,
             undefined2 *param_5,undefined2 *param_6)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  float *pfVar4;
  longlong *plVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  void *pvVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  char *pcVar19;
  undefined4 *puVar20;
  undefined2 *puVar21;
  double dVar22;
  char cVar23;
  char cVar24;
  int iVar25;
  DWORD DVar26;
  DWORD DVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  double *pdVar34;
  uint uVar35;
  ulonglong uVar36;
  double *pdVar37;
  longlong *plVar38;
  undefined1 *puVar39;
  uint uVar40;
  undefined8 unaff_R15;
  longlong lVar41;
  bool bVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  undefined1 auStack_388 [32];
  undefined2 *local_368;
  undefined2 *local_360;
  undefined2 *local_350;
  undefined2 *local_348;
  undefined2 *local_340;
  double *local_338;
  double *local_330;
  undefined1 *local_328;
  int *local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  double local_308;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double *local_2e0;
  int local_2d8;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  double local_2b8;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  double local_268;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  double local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  double local_228;
  double local_218;
  longlong *plStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  double local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_188;
  longlong *plStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  char local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 local_140;
  undefined1 local_138 [80];
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [56];
  double *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined2 *local_90;
  undefined8 *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_388;
  local_1a8 = *param_4;
  dStack_1a0 = param_4[1];
  local_198 = param_4[2];
  local_1c8 = *(undefined4 *)param_3;
  uStack_1c4 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_1c0 = *(undefined4 *)(param_3 + 1);
  uStack_1bc = *(undefined4 *)((longlong)param_3 + 0xc);
  local_1b8 = param_3[2];
  local_338 = param_3;
  lVar28 = FUN_14067bb54(param_6);
  local_330 = param_4;
  if (lVar28 != 0) {
    lVar29 = FUN_14067bd00(lVar28,&local_1a8);
    lVar30 = FUN_14067bd00(lVar28,&local_1c8);
    if (lVar29 != lVar30) {
      uVar35 = 0;
      if (lVar29 != 0) {
        uVar35 = (uint)*(byte *)(lVar29 + 0x48);
      }
      if (lVar30 == 0) {
        uVar40 = 0;
      }
      else {
        uVar40 = (uint)CONCAT71((int7)((ulonglong)unaff_R15 >> 8),*(undefined1 *)(lVar30 + 0x48));
      }
      if (uVar35 != (uVar40 & 0xff)) {
        if ((char)uVar40 != '\0') {
          lVar29 = lVar30;
        }
        local_188 = 0.0;
        plStack_180 = (longlong *)0x0;
        local_238 = 0.0;
        uStack_230 = 0.0;
        local_218 = *(double *)(param_6 + 0xc);
        local_348 = param_2;
        FUN_1400021e4(&local_218,&local_2e0);
        FUN_1488dd744(&local_2e0,&local_188);
        if (local_2e0 != (double *)0x0) {
          FUN_1400020a8();
        }
        dVar10 = local_188;
        lVar30 = (longlong)(int)plStack_180;
        if (lVar30 == 0) {
          lVar29 = 0;
          param_2 = local_348;
        }
        else {
          local_350 = (undefined2 *)CONCAT44(local_350._4_4_,uVar40);
          lVar41 = 0;
          do {
            local_2e0 = *(double **)((longlong)dVar10 + lVar41);
            if ((local_2e0[0x15] != 0.0) && (*(int *)(local_2e0 + 0x16) - 1U < 0xfffffffe)) {
              lVar31 = FUN_14067bd00(lVar28,local_2e0 + 0xd);
              pdVar37 = local_2e0;
              if ((lVar29 == lVar31) &&
                 (((plVar38 = (longlong *)local_2e0[7], plVar38 == (longlong *)0x0 ||
                   (cVar23 = (**(code **)(*plVar38 + 0x10))(plVar38,param_6), cVar23 != '\0')) &&
                  (cVar23 = FUN_140db3cd0(pdVar37,param_6), cVar23 != '\0')))) {
                FUN_148851bbc(&local_238,&local_2e0);
              }
            }
            dVar22 = local_238;
            lVar41 = lVar41 + 8;
          } while (lVar30 * 8 != lVar41);
          lVar30 = (longlong)(int)uStack_230;
          if (lVar30 == 0) {
            lVar29 = 0;
          }
          else {
            pdVar37 = (double *)&local_1c8;
            if ((char)local_350 != '\0') {
              pdVar37 = &local_1a8;
            }
            fVar43 = 3.4028235e+38;
            lVar41 = 0;
            lVar29 = 0;
            local_340 = param_1;
            do {
              lVar31 = *(longlong *)((longlong)dVar22 + lVar41);
              lVar32 = *(longlong *)(lVar31 + 0xb8);
              if (lVar32 == 0) {
                local_2e0 = *(double **)(lVar31 + 0xa8);
                lVar32 = FUN_14050aea0(&local_2e0);
                *(longlong *)(lVar31 + 0xb8) = lVar32;
                if (lVar32 != 0) goto LAB_143d3b494;
              }
              else {
LAB_143d3b494:
                lVar33 = FUN_14067bd00(lVar28,lVar32 + 0x68);
                if ((lVar33 == 0) || (*(char *)(lVar33 + 0x48) == '\0')) {
                  if ((char)local_350 != '\0') {
                    lVar31 = lVar32;
                  }
                  dVar10 = *(double *)(lVar32 + 0x78) - pdVar37[2];
                  dVar12 = *(double *)(lVar32 + 0x70) - pdVar37[1];
                  pdVar34 = (double *)&local_1c8;
                  if ((char)local_350 != '\0') {
                    pdVar34 = &local_1a8;
                  }
                  dVar11 = *(double *)(lVar32 + 0x68) - *pdVar34;
                  fVar45 = (float)SQRT(dVar10 * dVar10 + dVar11 * dVar11 + dVar12 * dVar12);
                  if (fVar45 < fVar43) {
                    lVar29 = lVar31;
                    fVar43 = fVar45;
                  }
                }
              }
              lVar41 = lVar41 + 8;
              param_1 = local_340;
            } while (lVar30 * 8 != lVar41);
          }
          param_2 = local_348;
          if (local_238 != 0.0) {
            FUN_1400020a8(local_238);
          }
        }
        if (local_188 != 0.0) {
          FUN_1400020a8(local_188);
        }
        param_4 = local_330;
        if (lVar29 != 0) {
          *(undefined8 *)(param_2 + 0x1c) = *(undefined8 *)(lVar29 + 0x78);
          uVar18 = *(undefined8 *)(lVar29 + 0x70);
          *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(lVar29 + 0x68);
          *(undefined8 *)(param_2 + 0x18) = uVar18;
          local_1d8 = local_330[2];
          local_1e8 = *local_330;
          dStack_1e0 = local_330[1];
          local_208 = *(undefined4 *)(lVar29 + 0x68);
          uStack_204 = *(undefined4 *)(lVar29 + 0x6c);
          uStack_200 = *(undefined4 *)(lVar29 + 0x70);
          uStack_1fc = *(undefined4 *)(lVar29 + 0x74);
          local_1f8 = *(undefined8 *)(lVar29 + 0x78);
          local_360 = param_6;
          local_368 = param_5;
          FUN_143d3ae68(param_1,param_2);
          goto LAB_143d3bf6e;
        }
      }
    }
  }
  pdVar37 = (double *)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x54) = 0;
  if (*(int *)(param_2 + 0x56) < 0) {
    FUN_1447a8aa0(pdVar37,0);
  }
  puVar1 = param_2 + 0x28;
  FUN_148849358(puVar1,1);
  *(double *)(param_2 + 0x1c) = local_338[2];
  dVar10 = local_338[1];
  *(double *)(param_2 + 0x14) = *local_338;
  *(double *)(param_2 + 0x18) = dVar10;
  uVar44 = DAT_14cb1c840;
  fVar43 = (float)SQRT((local_338[2] - param_4[2]) * (local_338[2] - param_4[2]) +
                       (*local_338 - *param_4) * (*local_338 - *param_4) +
                       (local_338[1] - param_4[1]) * (local_338[1] - param_4[1]));
  puVar2 = (undefined4 *)(param_2 + 0x14);
  if (fVar43 < *(float *)(param_2 + 0x22)) {
    *(undefined1 *)(param_2 + 0x24) = 2;
    *param_1 = *param_2;
    cVar23 = *(char *)(param_2 + 0x10);
    *(char *)(param_1 + 0x10) = cVar23;
    if (cVar23 == '\x01') {
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      uVar18 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 8) = uVar18;
    }
    *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
    uVar44 = *puVar2;
    uVar7 = *(undefined4 *)(param_2 + 0x16);
    uVar13 = *(undefined4 *)(param_2 + 0x18);
    uVar14 = *(undefined4 *)(param_2 + 0x1a);
    uVar15 = *(undefined4 *)(param_2 + 0x1e);
    uVar16 = *(undefined4 *)(param_2 + 0x20);
    uVar17 = *(undefined4 *)(param_2 + 0x22);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x1e) = uVar15;
    *(undefined4 *)(param_1 + 0x20) = uVar16;
    *(undefined4 *)(param_1 + 0x22) = uVar17;
    *(undefined4 *)(param_1 + 0x14) = uVar44;
    *(undefined4 *)(param_1 + 0x16) = uVar7;
    *(undefined4 *)(param_1 + 0x18) = uVar13;
    *(undefined4 *)(param_1 + 0x1a) = uVar14;
    FUN_148849aac(param_1 + 0x28,puVar1);
    *(undefined8 *)(param_1 + 0x50) = 0;
    iVar25 = *(int *)(param_2 + 0x54);
    pvVar9 = *(void **)(param_2 + 0x50);
    *(int *)(param_1 + 0x54) = iVar25;
    if ((longlong)iVar25 == 0) {
      *(undefined4 *)(param_1 + 0x56) = 0;
    }
    else {
      FUN_1405b70fe(param_1 + 0x50,iVar25,0);
      memcpy(*(void **)(param_1 + 0x50),pvVar9,(longlong)iVar25 * 0x18);
    }
    FUN_1488494a0(param_1 + 0x58,param_2 + 0x58);
    goto LAB_143d3bf6e;
  }
  local_350 = puVar1;
  if (param_6 == (undefined2 *)0x0) {
    local_218 = 0.0;
    plStack_210 = (longlong *)0x0;
LAB_143d3b2dc:
    *param_1 = *param_2;
    cVar23 = *(char *)(param_2 + 0x10);
    *(char *)(param_1 + 0x10) = cVar23;
    if (cVar23 == '\x01') {
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      uVar18 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 8) = uVar18;
    }
    *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
    uVar44 = *puVar2;
    uVar7 = *(undefined4 *)(param_2 + 0x16);
    uVar13 = *(undefined4 *)(param_2 + 0x18);
    uVar14 = *(undefined4 *)(param_2 + 0x1a);
    uVar15 = *(undefined4 *)(param_2 + 0x1e);
    uVar16 = *(undefined4 *)(param_2 + 0x20);
    uVar17 = *(undefined4 *)(param_2 + 0x22);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x1e) = uVar15;
    *(undefined4 *)(param_1 + 0x20) = uVar16;
    *(undefined4 *)(param_1 + 0x22) = uVar17;
    *(undefined4 *)(param_1 + 0x14) = uVar44;
    *(undefined4 *)(param_1 + 0x16) = uVar7;
    *(undefined4 *)(param_1 + 0x18) = uVar13;
    *(undefined4 *)(param_1 + 0x1a) = uVar14;
    FUN_148849aac(param_1 + 0x28,local_350);
    *(undefined8 *)(param_1 + 0x50) = 0;
    iVar25 = *(int *)(param_2 + 0x54);
    pvVar9 = *(void **)(param_2 + 0x50);
    *(int *)(param_1 + 0x54) = iVar25;
    if ((longlong)iVar25 == 0) {
      *(undefined4 *)(param_1 + 0x56) = 0;
    }
    else {
      FUN_1405b70fe(param_1 + 0x50,iVar25,0);
      memcpy(*(void **)(param_1 + 0x50),pvVar9,(longlong)iVar25 * 0x18);
    }
    FUN_1488494a0(param_1 + 0x58,param_2 + 0x58);
  }
  else {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_188,uVar44,param_6);
    plVar38 = plStack_180;
    dVar10 = local_188;
    if ((local_188 == 0.0) || (plStack_180 == (longlong *)0x0)) {
      plVar38 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plStack_180 + 1) = (int)plStack_180[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plStack_180 + 0xc) = *(int *)((longlong)plStack_180 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar5 = plStack_180 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plStack_180)(plStack_180);
        LOCK();
        piVar6 = (int *)((longlong)plVar38 + 0xc);
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (*piVar6 == 0) {
          (**(code **)(*plVar38 + 0x10))(plVar38);
        }
      }
    }
    plVar5 = plStack_180;
    if (plStack_180 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_180 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_180)(plStack_180);
        LOCK();
        piVar6 = (int *)((longlong)plVar5 + 0xc);
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (*piVar6 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    local_218 = 0.0;
    plStack_210 = plVar38;
    if (plVar38 == (longlong *)0x0) goto LAB_143d3b2dc;
    iVar25 = (int)plVar38[1];
    do {
      if (iVar25 == 0) {
        plStack_210 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar8 = (int)plVar38[1];
      bVar42 = iVar25 == iVar8;
      if (bVar42) {
        *(int *)(plVar38 + 1) = iVar25 + 1;
        iVar8 = iVar25;
      }
      iVar25 = iVar8;
      UNLOCK();
    } while (!bVar42);
    LOCK();
    piVar6 = (int *)((longlong)plVar38 + 0xc);
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      (**(code **)(*plVar38 + 0x10))(plVar38);
    }
    if (plStack_210 != (longlong *)0x0) {
      local_218 = dVar10;
    }
    if (local_218 == 0.0) goto LAB_143d3b2dc;
    local_348 = param_2;
    FUN_140002266(&local_188,L"Goal: %.1f UU",(double)fVar43);
    if (local_188 != 0.0) {
      FUN_1400020a8();
    }
    puVar20 = DAT_14cb7cfd8;
    piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    iVar25 = *piVar6;
    if (iVar25 == 0x40000002) {
      uVar44 = *DAT_14cb7cfd8;
LAB_143d3b577:
      uVar36 = 0;
      lVar28 = DAT_14cb7cff0;
    }
    else {
      if (DAT_14c86a9f8 == 0) {
        uVar44 = *DAT_14cb7cfd8;
      }
      else if (iVar25 == 2) {
        uVar44 = *DAT_14cb7cfd8;
        iVar25 = 2;
      }
      else {
        if (iVar25 == 1) {
          DVar26 = FUN_140ad26c0();
          DVar27 = GetCurrentThreadId();
          bVar42 = DVar26 == DVar27;
          iVar25 = *piVar6;
        }
        else {
          bVar42 = false;
        }
        uVar44 = puVar20[bVar42 ^ 1];
        if (iVar25 == 0x40000002) goto LAB_143d3b577;
      }
      lVar28 = DAT_14cb7cff0;
      bVar42 = true;
      if (((DAT_14c86a9f8 & 1) != 0) && (iVar25 != 2)) {
        if (iVar25 == 1) {
          DVar26 = FUN_140ad26c0();
          DVar27 = GetCurrentThreadId();
          bVar42 = DVar26 == DVar27;
        }
        else {
          bVar42 = false;
        }
      }
      uVar36 = (ulonglong)(bVar42 ^ 1);
    }
    puVar1 = local_348;
    uVar7 = *(undefined4 *)(lVar28 + uVar36 * 4);
    local_228 = DAT_14c8464f0;
    local_238 = DAT_14c8464e0;
    uStack_230 = DAT_14c8464e8;
    local_188 = (double)CONCAT62(local_188._2_6_,*local_348);
    local_168 = *(char *)(local_348 + 0x10);
    if (local_168 == '\x01') {
      local_170 = *(undefined8 *)(local_348 + 0xc);
      plStack_180 = *(longlong **)(local_348 + 4);
      uStack_178 = *(undefined8 *)(local_348 + 8);
    }
    local_140 = *(undefined1 *)(param_2 + 0x24);
    local_160 = *puVar2;
    uStack_15c = *(undefined4 *)(param_2 + 0x16);
    uStack_158 = *(undefined4 *)(param_2 + 0x18);
    uStack_154 = *(undefined4 *)(param_2 + 0x1a);
    local_150 = *(undefined4 *)(param_2 + 0x1c);
    uStack_14c = *(undefined4 *)(param_2 + 0x1e);
    uStack_148 = *(undefined4 *)(param_2 + 0x20);
    uStack_144 = *(undefined4 *)(param_2 + 0x22);
    local_320 = piVar6;
    FUN_148849aac(local_138,local_350);
    local_e8 = (void *)0x0;
    local_e0 = *(int *)(puVar1 + 0x54);
    lVar28 = (longlong)local_e0;
    pvVar9 = *(void **)(puVar1 + 0x50);
    if (lVar28 == 0) {
      local_dc = 0;
    }
    else {
      FUN_1405b70fe(&local_e8,local_e0,0);
      memcpy(local_e8,pvVar9,lVar28 * 0x18);
    }
    puVar39 = local_d8;
    local_340 = puVar1 + 0x58;
    FUN_1488494a0(puVar39);
    local_a0 = &local_218;
    local_90 = param_6;
    local_88 = &local_238;
    local_258 = *(undefined4 *)local_330;
    uStack_254 = *(undefined4 *)((longlong)local_330 + 4);
    uStack_250 = *(undefined4 *)(local_330 + 1);
    uStack_24c = *(undefined4 *)((longlong)local_330 + 0xc);
    local_248 = local_330[2];
    local_98 = uVar44;
    local_94 = uVar7;
    cVar23 = FUN_143d3c1e0(&local_188);
    pdVar34 = local_338;
    local_278 = *(undefined4 *)local_338;
    uStack_274 = *(undefined4 *)((longlong)local_338 + 4);
    uStack_270 = *(undefined4 *)(local_338 + 1);
    uStack_26c = *(undefined4 *)((longlong)local_338 + 0xc);
    local_268 = local_338[2];
    cVar24 = FUN_143d3c1e0(&local_188);
    if (cVar24 == '\0') {
      local_288 = 0.0;
      uStack_280 = 0;
LAB_143d3b945:
      piVar6 = local_320;
      pcVar19 = DAT_14cb7cf80;
      iVar25 = *local_320;
      local_328 = puVar39;
      if (iVar25 == 0x40000002) {
        cVar23 = *DAT_14cb7cf80;
        uVar36 = 0;
        lVar28 = DAT_14cb7cdd0;
      }
      else {
        if (DAT_14c86a9f8 == 0) {
          cVar23 = *DAT_14cb7cf80;
        }
        else if (iVar25 == 2) {
          cVar23 = *DAT_14cb7cf80;
          iVar25 = 2;
        }
        else {
          if (iVar25 == 1) {
            DVar26 = FUN_140ad26c0();
            DVar27 = GetCurrentThreadId();
            bVar42 = DVar26 == DVar27;
            iVar25 = *piVar6;
          }
          else {
            bVar42 = false;
          }
          cVar23 = pcVar19[bVar42 ^ 1];
          if (iVar25 == 0x40000002) {
            uVar36 = 0;
            lVar28 = DAT_14cb7cdd0;
            goto LAB_143d3b9ea;
          }
        }
        lVar28 = DAT_14cb7cdd0;
        bVar42 = true;
        if (((DAT_14c86a9f8 & 1) != 0) && (iVar25 != 2)) {
          if (iVar25 == 1) {
            DVar26 = FUN_140ad26c0();
            DVar27 = GetCurrentThreadId();
            bVar42 = DVar26 == DVar27;
          }
          else {
            bVar42 = false;
          }
        }
        uVar36 = (ulonglong)(bVar42 ^ 1);
      }
LAB_143d3b9ea:
      puVar1 = local_348;
      fVar45 = 0.0;
      pfVar4 = (float *)(lVar28 + uVar36 * 4);
      if (fVar43 < *pfVar4 || fVar43 == *pfVar4) {
LAB_143d3ba8e:
        iVar25 = 0;
        pdVar37 = (double *)0x0;
      }
      else {
        local_298 = local_330[2];
        local_2a8 = *local_330;
        dStack_2a0 = local_330[1];
        local_2c8 = *(undefined4 *)local_338;
        uStack_2c4 = *(undefined4 *)((longlong)local_338 + 4);
        uStack_2c0 = *(undefined4 *)(local_338 + 1);
        uStack_2bc = *(undefined4 *)((longlong)local_338 + 0xc);
        local_2b8 = local_338[2];
        local_368 = param_6;
        cVar24 = FUN_143d39ce8(local_348,&local_2c8,&local_2a8,param_5);
        if (cVar24 == '\0') goto LAB_143d3ba8e;
        *(undefined1 *)(puVar1 + 0x24) = 2;
        if (cVar23 == '\0') {
          *param_1 = *puVar1;
          cVar23 = *(char *)(puVar1 + 0x10);
          *(char *)(param_1 + 0x10) = cVar23;
          if (cVar23 == '\x01') {
            *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(puVar1 + 0xc);
            uVar18 = *(undefined8 *)(puVar1 + 8);
            *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar1 + 4);
            *(undefined8 *)(param_1 + 8) = uVar18;
          }
          *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
          uVar44 = *puVar2;
          uVar7 = *(undefined4 *)(param_2 + 0x16);
          uVar13 = *(undefined4 *)(param_2 + 0x18);
          uVar14 = *(undefined4 *)(param_2 + 0x1a);
          uVar15 = *(undefined4 *)(param_2 + 0x1e);
          uVar16 = *(undefined4 *)(param_2 + 0x20);
          uVar17 = *(undefined4 *)(param_2 + 0x22);
          *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
          *(undefined4 *)(param_1 + 0x1e) = uVar15;
          *(undefined4 *)(param_1 + 0x20) = uVar16;
          *(undefined4 *)(param_1 + 0x22) = uVar17;
          *(undefined4 *)(param_1 + 0x14) = uVar44;
          *(undefined4 *)(param_1 + 0x16) = uVar7;
          *(undefined4 *)(param_1 + 0x18) = uVar13;
          *(undefined4 *)(param_1 + 0x1a) = uVar14;
          FUN_148849aac(param_1 + 0x28,local_350);
          *(undefined8 *)(param_1 + 0x50) = 0;
          iVar25 = *(int *)(puVar1 + 0x54);
          pvVar9 = *(void **)(puVar1 + 0x50);
          *(int *)(param_1 + 0x54) = iVar25;
          puVar39 = local_328;
          goto joined_r0x000143d3bcb9;
        }
        local_2e0 = (double *)0x0;
        local_2d8 = *(int *)(puVar1 + 0x3c);
        lVar28 = (longlong)local_2d8;
        pvVar9 = *(void **)(puVar1 + 0x38);
        if (lVar28 == 0) {
          iVar25 = 0;
        }
        else {
          FUN_1405b70fe(&local_2e0,local_2d8,0);
          memcpy(local_2e0,pvVar9,lVar28 * 0x18);
          iVar25 = local_2d8;
        }
        fVar45 = *(float *)(puVar1 + 0x4a);
        pdVar37 = local_2e0;
      }
      lVar28 = DAT_14cb7ce78;
      iVar8 = *piVar6;
      if (iVar8 == 0x40000002) {
        uVar36 = 0;
      }
      else {
        bVar42 = true;
        if ((DAT_14c86a9f8 == 1) && (iVar8 != 2)) {
          if (iVar8 == 1) {
            DVar26 = FUN_140ad26c0();
            local_338 = pdVar37;
            DVar27 = GetCurrentThreadId();
            bVar42 = DVar26 == DVar27;
            pdVar37 = local_338;
          }
          else {
            bVar42 = false;
          }
        }
        uVar36 = (ulonglong)(bVar42 ^ 1);
      }
      puVar1 = local_348;
      if (*(char *)(lVar28 + uVar36) == '\0') {
        local_2e8 = local_330[2];
        local_2f8 = *local_330;
        dStack_2f0 = local_330[1];
        local_318 = (undefined4)local_238;
        uStack_314 = local_238._4_4_;
        uStack_310 = (int)uStack_230;
        uStack_30c = uStack_230._4_4_;
        local_308 = local_228;
        local_368 = param_6;
        cVar24 = FUN_143d3993f(local_348,&local_318,&local_2f8,param_5);
        if (cVar24 == '\0') goto LAB_143d3bb6d;
        *(undefined1 *)(puVar1 + 0x24) = 2;
        if (cVar23 == '\0') goto LAB_143d3bb84;
        local_2e0 = (double *)0x0;
        local_2d8 = *(int *)(puVar1 + 0x3c);
        lVar28 = (longlong)local_2d8;
        pvVar9 = *(void **)(puVar1 + 0x38);
        local_338 = pdVar37;
        if (lVar28 == 0) {
          bVar42 = true;
        }
        else {
          FUN_1405b70fe(&local_2e0,local_2d8,0);
          memcpy(local_2e0,pvVar9,lVar28 * 0x18);
          bVar42 = local_2d8 == 0;
        }
        fVar43 = *(float *)(local_348 + 0x4a);
        pdVar37 = local_338;
        pdVar34 = local_2e0;
LAB_143d3bd93:
        lVar28 = DAT_14cb7cf98;
        iVar8 = *piVar6;
        if (((iVar8 == 0x40000002) || (DAT_14c86a9f8 != 1)) || (iVar8 == 2)) {
          uVar36 = 0;
        }
        else if (iVar8 == 1) {
          DVar26 = FUN_140ad26c0();
          DVar27 = GetCurrentThreadId();
          uVar36 = (ulonglong)(DVar26 != DVar27);
        }
        else {
          uVar36 = 1;
        }
        puVar1 = local_348;
        if (bVar42) {
          if (iVar25 == 0) {
            *(undefined1 *)(local_348 + 0x24) = 1;
          }
          else {
LAB_143d3bdfc:
            *(int *)(local_348 + 0x3c) = iVar25;
            FUN_1405b70fe(local_348 + 0x38,iVar25,*(undefined4 *)(local_348 + 0x3e));
            memcpy(*(void **)(puVar1 + 0x38),pdVar37,(longlong)iVar25 * 0x18);
            *(float *)(puVar1 + 0x4a) = fVar45;
          }
        }
        else if ((iVar25 != 0) && (fVar45 < fVar43 * *(float *)(lVar28 + uVar36 * 4)))
        goto LAB_143d3bdfc;
        *param_1 = *puVar1;
        cVar23 = *(char *)(puVar1 + 0x10);
        *(char *)(param_1 + 0x10) = cVar23;
        if (cVar23 == '\x01') {
          *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(puVar1 + 0xc);
          uVar18 = *(undefined8 *)(puVar1 + 8);
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar1 + 4);
          *(undefined8 *)(param_1 + 8) = uVar18;
        }
        *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
        uVar44 = *puVar2;
        uVar7 = *(undefined4 *)(param_2 + 0x16);
        uVar13 = *(undefined4 *)(param_2 + 0x18);
        uVar14 = *(undefined4 *)(param_2 + 0x1a);
        uVar15 = *(undefined4 *)(param_2 + 0x1e);
        uVar16 = *(undefined4 *)(param_2 + 0x20);
        uVar17 = *(undefined4 *)(param_2 + 0x22);
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
        *(undefined4 *)(param_1 + 0x1e) = uVar15;
        *(undefined4 *)(param_1 + 0x20) = uVar16;
        *(undefined4 *)(param_1 + 0x22) = uVar17;
        *(undefined4 *)(param_1 + 0x14) = uVar44;
        *(undefined4 *)(param_1 + 0x16) = uVar7;
        *(undefined4 *)(param_1 + 0x18) = uVar13;
        *(undefined4 *)(param_1 + 0x1a) = uVar14;
        FUN_148849aac(param_1 + 0x28,local_350);
        *(undefined8 *)(param_1 + 0x50) = 0;
        iVar25 = *(int *)(puVar1 + 0x54);
        pvVar9 = *(void **)(puVar1 + 0x50);
        *(int *)(param_1 + 0x54) = iVar25;
        if ((longlong)iVar25 == 0) {
          *(undefined4 *)(param_1 + 0x56) = 0;
        }
        else {
          FUN_1405b70fe(param_1 + 0x50,iVar25,0);
          memcpy(*(void **)(param_1 + 0x50),pvVar9,(longlong)iVar25 * 0x18);
        }
        FUN_1488494a0(param_1 + 0x58,local_340);
        if (pdVar34 != (double *)0x0) {
          FUN_1400020a8(pdVar34);
        }
      }
      else {
LAB_143d3bb6d:
        if (cVar23 != '\0') {
          fVar43 = 0.0;
          bVar42 = true;
          pdVar34 = (double *)0x0;
          goto LAB_143d3bd93;
        }
        *(undefined1 *)(puVar1 + 0x24) = 1;
LAB_143d3bb84:
        *param_1 = *puVar1;
        cVar23 = *(char *)(puVar1 + 0x10);
        *(char *)(param_1 + 0x10) = cVar23;
        if (cVar23 == '\x01') {
          *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(puVar1 + 0xc);
          uVar18 = *(undefined8 *)(puVar1 + 8);
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar1 + 4);
          *(undefined8 *)(param_1 + 8) = uVar18;
        }
        *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
        uVar44 = *puVar2;
        uVar7 = *(undefined4 *)(param_2 + 0x16);
        uVar13 = *(undefined4 *)(param_2 + 0x18);
        uVar14 = *(undefined4 *)(param_2 + 0x1a);
        uVar15 = *(undefined4 *)(param_2 + 0x1e);
        uVar16 = *(undefined4 *)(param_2 + 0x20);
        uVar17 = *(undefined4 *)(param_2 + 0x22);
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
        *(undefined4 *)(param_1 + 0x1e) = uVar15;
        *(undefined4 *)(param_1 + 0x20) = uVar16;
        *(undefined4 *)(param_1 + 0x22) = uVar17;
        *(undefined4 *)(param_1 + 0x14) = uVar44;
        *(undefined4 *)(param_1 + 0x16) = uVar7;
        *(undefined4 *)(param_1 + 0x18) = uVar13;
        *(undefined4 *)(param_1 + 0x1a) = uVar14;
        FUN_148849aac(param_1 + 0x28,local_350);
        *(undefined8 *)(param_1 + 0x50) = 0;
        iVar25 = *(int *)(puVar1 + 0x54);
        pvVar9 = *(void **)(puVar1 + 0x50);
        *(int *)(param_1 + 0x54) = iVar25;
        if ((longlong)iVar25 == 0) {
          *(undefined4 *)(param_1 + 0x56) = 0;
        }
        else {
          FUN_1405b70fe(param_1 + 0x50,iVar25,0);
          memcpy(*(void **)(param_1 + 0x50),pvVar9,(longlong)iVar25 * 0x18);
        }
        FUN_1488494a0(param_1 + 0x58,local_340);
      }
      puVar39 = local_328;
      if (pdVar37 != (double *)0x0) {
        FUN_1400020a8(pdVar37);
      }
    }
    else {
      pdVar34[2] = local_228;
      *pdVar34 = local_238;
      pdVar34[1] = uStack_230;
      local_288 = 0.0;
      uStack_280 = 0;
      if (cVar23 == '\0') goto LAB_143d3b945;
      local_368 = local_340;
      cVar23 = FUN_143d44916(local_330,pdVar34,&local_288,param_6);
      puVar21 = local_350;
      if (cVar23 == '\0') goto LAB_143d3b945;
      if (pdVar37 != &local_288) {
        if (*pdVar37 != 0.0) {
          FUN_1400020a8();
        }
        *(double *)(puVar1 + 0x50) = local_288;
        local_288 = 0.0;
        *(undefined4 *)(puVar1 + 0x54) = (undefined4)uStack_280;
        *(undefined4 *)(puVar1 + 0x56) = uStack_280._4_4_;
        uStack_280 = 0;
      }
      FUN_143d391ba(puVar1,local_330,param_5);
      *(undefined1 *)(puVar1 + 0x24) = 2;
      *param_1 = *puVar1;
      cVar23 = *(char *)(puVar1 + 0x10);
      *(char *)(param_1 + 0x10) = cVar23;
      if (cVar23 == '\x01') {
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(puVar1 + 0xc);
        uVar18 = *(undefined8 *)(puVar1 + 8);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar1 + 4);
        *(undefined8 *)(param_1 + 8) = uVar18;
      }
      *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
      uVar44 = *puVar2;
      uVar7 = *(undefined4 *)(param_2 + 0x16);
      uVar13 = *(undefined4 *)(param_2 + 0x18);
      uVar14 = *(undefined4 *)(param_2 + 0x1a);
      uVar15 = *(undefined4 *)(param_2 + 0x1e);
      uVar16 = *(undefined4 *)(param_2 + 0x20);
      uVar17 = *(undefined4 *)(param_2 + 0x22);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(param_1 + 0x1e) = uVar15;
      *(undefined4 *)(param_1 + 0x20) = uVar16;
      *(undefined4 *)(param_1 + 0x22) = uVar17;
      *(undefined4 *)(param_1 + 0x14) = uVar44;
      *(undefined4 *)(param_1 + 0x16) = uVar7;
      *(undefined4 *)(param_1 + 0x18) = uVar13;
      *(undefined4 *)(param_1 + 0x1a) = uVar14;
      FUN_148849aac(param_1 + 0x28,puVar21);
      *(undefined8 *)(param_1 + 0x50) = 0;
      iVar25 = *(int *)(puVar1 + 0x54);
      pvVar9 = *(void **)(puVar1 + 0x50);
      *(int *)(param_1 + 0x54) = iVar25;
joined_r0x000143d3bcb9:
      if ((longlong)iVar25 == 0) {
        *(undefined4 *)(param_1 + 0x56) = 0;
      }
      else {
        FUN_1405b70fe(param_1 + 0x50,iVar25,0);
        memcpy(*(void **)(param_1 + 0x50),pvVar9,(longlong)iVar25 * 0x18);
      }
      FUN_1488494a0(param_1 + 0x58,local_340);
    }
    if (local_288 != 0.0) {
      FUN_1400020a8();
    }
    FUN_145c5b6e4(puVar39);
    if (local_e8 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1488493ea(local_138);
  }
  plVar38 = plStack_210;
  if (plStack_210 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_210 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plStack_210)(plStack_210);
      LOCK();
      piVar6 = (int *)((longlong)plVar38 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        (**(code **)(*plVar38 + 0x10))(plVar38);
      }
    }
  }
LAB_143d3bf6e:
  if ((local_80 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143d3c110 FUN_143d3c110 body=208 status=ok
// SIG undefined FUN_143d3c110(void)

undefined2 * FUN_143d3c110(undefined2 *param_1,undefined2 *param_2)

{
  char cVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 0x10);
  *(char *)(param_1 + 0x10) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    uVar10 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 8) = uVar10;
  }
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x16);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1a);
  uVar7 = *(undefined4 *)(param_2 + 0x1e);
  uVar8 = *(undefined4 *)(param_2 + 0x20);
  uVar9 = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x1e) = uVar7;
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  *(undefined4 *)(param_1 + 0x22) = uVar9;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x16) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1a) = uVar6;
  FUN_148849aac(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x50) = 0;
  iVar2 = *(int *)(param_2 + 0x54);
  _Src = *(void **)(param_2 + 0x50);
  *(int *)(param_1 + 0x54) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x56) = 0;
  }
  else {
    FUN_1405b70fe(param_1 + 0x50,iVar2,0);
    memcpy(*(void **)(param_1 + 0x50),_Src,(longlong)iVar2 * 0x18);
  }
  FUN_1488494a0(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 143d3c1e0 FUN_143d3c1e0 body=488 status=ok
// SIG undefined FUN_143d3c1e0(void)

/* WARNING: Removing unreachable block (ram,0x000143d3c309) */
/* WARNING: Removing unreachable block (ram,0x000143d3c30f) */

undefined4 FUN_143d3c1e0(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = *(undefined8 *)(param_1 + 200);
  plVar3 = *(longlong **)(param_1 + 0xd0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_58 = (longlong *)0x0;
  local_40 = 0xffffffffffffffff;
  local_48 = *(undefined8 *)(param_1 + 0xf0);
  local_d8 = *(undefined8 *)(param_2 + 4);
  local_e8 = *param_2;
  uStack_e4 = param_2[1];
  uStack_e0 = param_2[2];
  uStack_dc = param_2[3];
  local_d0 = (undefined4)DAT_14cb1c860;
  uStack_cc = DAT_14cb1c860._4_4_;
  uStack_c8 = (undefined4)DAT_14cb1c868;
  uStack_c4 = DAT_14cb1c868._4_4_;
  local_c0 = DAT_14cb1c870;
  local_78 = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
  local_70 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
  local_68 = DAT_14cb1c870;
  local_60 = 0;
  local_98 = **(undefined8 **)(param_1 + 0xe8);
  local_50 = 0xffffffff;
  local_38 = 0;
  local_b8 = &DAT_3f8000003f800000;
  local_b0 = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  plStack_a0 = plVar3;
  local_90 = local_e8;
  uStack_8c = uStack_e4;
  uStack_88 = uStack_e0;
  uStack_84 = uStack_dc;
  local_80 = local_d8;
  uVar9 = FUN_14488954d(&local_b8,param_2,0);
  plVar8 = local_58;
  puVar4 = *(undefined4 **)(param_1 + 0x100);
  *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(param_2 + 4);
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *puVar4 = *param_2;
  puVar4[1] = uVar5;
  puVar4[2] = uVar6;
  puVar4[3] = uVar7;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_a0 + 0x10))();
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d3c3ca FUN_143d3c3ca body=3809 status=ok
// SIG undefined FUN_143d3c3ca(void)

void FUN_143d3c3ca(longlong param_1,float param_2)

{
  longlong *plVar1;
  float *pfVar2;
  undefined4 *puVar3;
  double *pdVar4;
  float *pfVar5;
  double dVar6;
  uint uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char cVar17;
  DWORD DVar18;
  DWORD DVar19;
  longlong lVar20;
  undefined8 uVar21;
  longlong lVar22;
  ulonglong uVar23;
  int iVar24;
  undefined8 *puVar25;
  longlong lVar26;
  byte bVar27;
  void *pvVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  float *pfVar32;
  bool bVar33;
  float fVar34;
  double _X;
  double dVar35;
  double dVar36;
  float fVar37;
  double dVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  uint local_280;
  double *local_278;
  bool local_269;
  int *local_268;
  float *local_260;
  double local_258;
  double local_250;
  longlong local_248;
  undefined8 uStack_240;
  double local_230;
  double local_228;
  double local_220;
  void *local_218;
  ulonglong uStack_210;
  double local_200;
  float *local_1f8;
  float local_1f0;
  float local_1ec;
  code *local_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  float *local_1c8;
  void **local_1c0;
  double *local_1b8;
  longlong local_1b0;
  undefined1 local_188 [80];
  longlong local_138;
  undefined1 local_128 [56];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (((((*(int *)(param_1 + 0x2c) != 0) && (uVar30 = *(uint *)(param_1 + 0x28), -1 < (int)uVar30))
       && ((int)uVar30 < DAT_14c9647dc)) &&
      ((puVar25 = (undefined8 *)
                  ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8)),
       puVar25 != (undefined8 *)0x0 && (*(int *)(puVar25 + 2) == *(int *)(param_1 + 0x2c))))) &&
     ((*(uint *)(puVar25 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(puVar25 + 1) & 0x10200000) == 0) {
      uVar21 = *puVar25;
    }
    else {
      uVar21 = 0;
    }
    lVar20 = FUN_1447210f0(uVar21);
    if (lVar20 != 0) {
      if ((((*(longlong *)(lVar20 + 0x30) == 0) ||
           (lVar26 = *(longlong *)(*(longlong *)(lVar20 + 0x30) + 0x2b0), lVar26 == 0)) ||
          ((*(longlong *)(lVar26 + 0x588) == 0 ||
           (*(double *)(lVar20 + 0x6d0) < *(double *)(lVar20 + 0x708))))) &&
         (((*(byte *)(lVar20 + 0x154) & 0x40) == 0 || (iVar24 = FUN_14490d72a(lVar20), iVar24 != 3))
         )) {
        if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
          lVar26 = 0;
          do {
            lVar29 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar26);
            if (*(longlong *)(lVar29 + 0x360) == lVar20) {
              if ((lVar29 != 0) && ((*(byte *)(lVar29 + 0x278) & 1) != 0)) goto LAB_143d3c5d1;
              break;
            }
            lVar26 = lVar26 + 8;
          } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar26);
        }
        cVar17 = FUN_144a80e00(lVar20);
        if ((cVar17 == '\0') || (-1 < *(char *)(lVar20 + 0x155))) {
          if (*(char *)(param_1 + 0x80) == '\x01') {
            FUN_1488494a0(&local_1d8,param_1 + 0x88);
            FUN_1416df0a0(param_1,&local_1d8);
            FUN_145c5b6e4(&local_1d8);
          }
          else if (0.0 <= *(float *)(param_1 + 0x68)) {
            if ((double)*(float *)(param_1 + 0x68) < *(double *)(lVar20 + 0x6d0))
            goto LAB_143d3c493;
          }
          else {
            uVar31 = (ulonglong)*(int *)(param_1 + 0x58);
            if (0 < (longlong)uVar31) {
              plVar1 = (longlong *)(param_1 + 0x50);
              lVar26 = uVar31 << 4;
              do {
                lVar26 = lVar26 + -0x10;
                lVar29 = *(longlong *)(*plVar1 + lVar26);
                if ((lVar29 != 0) && ((*(byte *)(lVar29 + 0x78) & 1) != 0)) {
                  FUN_14884951c(*plVar1 + lVar26,&local_1d8);
                  iVar24 = *(int *)(param_1 + 0x48);
                  *(uint *)(param_1 + 0x48) = iVar24 + 1U;
                  if (*(uint *)(param_1 + 0x4c) < iVar24 + 1U) {
                    FUN_148851eca((longlong *)(param_1 + 0x40),iVar24);
                  }
                  lVar29 = (longlong)iVar24 * 0xe8 + *(longlong *)(param_1 + 0x40);
                  FUN_148851db8(lVar29,&local_1d8);
                  FUN_145c5b6e4(local_128);
                  if (local_138 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_1488493ea(local_188);
                  FUN_143d3d360(param_1,lVar29);
                  FUN_148851f5e(plVar1,(int)uVar31 + -1);
                  FUN_148851fe6(plVar1);
                  if (((*(int *)(param_1 + 0x58) == 0) && (*(int *)(param_1 + 0x10) != 0)) &&
                     (plVar8 = *(longlong **)(param_1 + 8), plVar8 != (longlong *)0x0)) {
                    (**(code **)(*plVar8 + 0x60))(plVar8,*(undefined1 *)(param_1 + 0x81));
                  }
                }
                bVar33 = 1 < uVar31;
                uVar31 = uVar31 - 1;
              } while (bVar33);
            }
            uVar31 = (ulonglong)*(int *)(param_1 + 0x48);
            local_269 = uVar31 != 0;
            if (0 < (longlong)uVar31) {
              local_268 = (int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0xc60);
              local_269 = true;
              do {
                lVar26 = *(longlong *)(param_1 + 0x40);
                local_248 = 0;
                uStack_240 = 0;
                iVar24 = *local_268;
                lVar29 = DAT_14cb7cd88;
                if (*(char *)(param_1 + 0x91) == '\x01') {
                  lVar29 = DAT_14cb7cda0;
                }
                local_1ec = param_2;
                if (iVar24 == 0x40000002) {
                  uVar23 = 0;
                }
                else {
                  bVar33 = true;
                  if ((DAT_14c86a9f8 == '\x01') && (iVar24 != 2)) {
                    if (iVar24 == 1) {
                      DVar18 = FUN_140ad26c0();
                      DVar19 = GetCurrentThreadId();
                      bVar33 = DVar18 == DVar19;
                    }
                    else {
                      bVar33 = false;
                    }
                  }
                  uVar23 = (ulonglong)(bVar33 ^ 1);
                }
                lVar22 = DAT_14cb7cf38;
                local_1f0 = *(float *)(lVar29 + uVar23 * 4);
                iVar24 = *local_268;
                if (iVar24 == 0x40000002) {
                  uVar23 = 0;
                }
                else {
                  bVar33 = true;
                  if ((DAT_14c86a9f8 == '\x01') && (iVar24 != 2)) {
                    if (iVar24 == 1) {
                      DVar18 = FUN_140ad26c0();
                      DVar19 = GetCurrentThreadId();
                      bVar33 = DVar18 == DVar19;
                    }
                    else {
                      bVar33 = false;
                    }
                  }
                  uVar23 = (ulonglong)(bVar33 ^ 1);
                }
                uVar14 = DAT_14cb1c840;
                lVar26 = uVar31 * 0xe8 + lVar26;
                if (*(char *)(lVar22 + uVar23) == '\0') {
                  if (DAT_14c9a7d10 == (undefined8 *)0x0) {
                    DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
                    *DAT_14c9a7d10 = 0;
                    DAT_14c9a7d10[1] = 0;
                    DAT_14c9a7d10[2] = 0;
                    DAT_14c9a7d10[3] = 0;
                  }
                  FUN_14005915a(DAT_14c9a7d10,&local_1d8,uVar14,lVar20);
                  pfVar32 = uStack_1d0;
                  dVar6 = local_1d8;
                  if (local_1d8 == 0.0) {
                    pfVar32 = (float *)0x0;
LAB_143d3cb17:
                    pfVar5 = uStack_1d0;
                    if (uStack_1d0 != (float *)0x0) {
                      LOCK();
                      pfVar2 = uStack_1d0 + 2;
                      *pfVar2 = (float)((int)*pfVar2 + -1);
                      UNLOCK();
                      if (*pfVar2 == 0.0) {
                        (*(code *)**(undefined8 **)pfVar5)(pfVar5);
                        LOCK();
                        pfVar2 = pfVar5 + 3;
                        *pfVar2 = (float)((int)*pfVar2 + -1);
                        UNLOCK();
                        if (*pfVar2 == 0.0) {
                          (**(code **)(*(longlong *)pfVar5 + 0x10))(pfVar5);
                        }
                      }
                    }
                    local_200 = 0.0;
                    local_1f8 = pfVar32;
                    if (pfVar32 != (float *)0x0) {
                      fVar34 = pfVar32[2];
                      do {
                        if (fVar34 == 0.0) {
                          local_1f8 = (float *)0x0;
                          break;
                        }
                        LOCK();
                        fVar40 = pfVar32[2];
                        bVar33 = fVar34 == fVar40;
                        if (bVar33) {
                          pfVar32[2] = (float)((int)fVar34 + 1);
                          fVar40 = fVar34;
                        }
                        fVar34 = fVar40;
                        UNLOCK();
                      } while (!bVar33);
                      LOCK();
                      pfVar5 = pfVar32 + 3;
                      *pfVar5 = (float)((int)*pfVar5 + -1);
                      UNLOCK();
                      if (*pfVar5 == 0.0) {
                        (**(code **)(*(longlong *)pfVar32 + 0x10))(pfVar32);
                      }
                      pfVar32 = local_1f8;
                      if (local_1f8 != (float *)0x0) {
                        local_200 = dVar6;
                      }
                      if ((local_200 != 0.0) && (*(int *)(lVar26 + -0x70) != 0)) {
                        if (*(int *)(lVar26 + -0x58) == 0) {
                          puVar9 = *(undefined4 **)(lVar26 + -0x78);
                          iVar24 = *(int *)(lVar26 + -0x60);
                          *(uint *)(lVar26 + -0x60) = iVar24 + 1U;
                          if (*(uint *)(lVar26 + -0x5c) < iVar24 + 1U) {
                            FUN_1403e3958((longlong *)(lVar26 + -0x68),iVar24);
                          }
                          lVar29 = *(longlong *)(lVar26 + -0x68);
                          *(undefined8 *)(lVar29 + 0x10 + (longlong)iVar24 * 0x18) =
                               *(undefined8 *)(puVar9 + 4);
                          uVar14 = puVar9[1];
                          uVar15 = puVar9[2];
                          uVar16 = puVar9[3];
                          puVar3 = (undefined4 *)(lVar29 + (longlong)iVar24 * 0x18);
                          *puVar3 = *puVar9;
                          puVar3[1] = uVar14;
                          puVar3[2] = uVar15;
                          puVar3[3] = uVar16;
                        }
                        lVar29 = DAT_14cb7ce18;
                        iVar24 = *local_268;
                        if (iVar24 == 0x40000002) {
                          uVar23 = 0;
                        }
                        else {
                          bVar33 = true;
                          if ((DAT_14c86a9f8 == '\x01') && (iVar24 != 2)) {
                            if (iVar24 == 1) {
                              DVar18 = FUN_140ad26c0();
                              DVar19 = GetCurrentThreadId();
                              bVar33 = DVar18 == DVar19;
                            }
                            else {
                              bVar33 = false;
                            }
                          }
                          uVar23 = (ulonglong)(bVar33 ^ 1);
                        }
                        fVar40 = *(float *)(lVar29 + uVar23 * 4) / local_1f0;
                        fVar34 = 1.0;
                        if (1.0 <= fVar40) {
                          fVar34 = fVar40;
                        }
                        uVar30 = *(int *)(lVar26 + -0x70) - *(int *)(lVar26 + -0x58);
                        if ((int)fVar34 < (int)uVar30) {
                          uVar30 = (int)fVar34;
                        }
                        local_218 = (void *)0x0;
                        uStack_210 = (ulonglong)uVar30;
                        if (uVar30 != 0) {
                          FUN_147c64112(&local_218);
                        }
                        memset(local_218,0,(longlong)(int)uVar30 << 4);
                        uStack_1d0 = &local_1f0;
                        local_1c8 = &local_1ec;
                        local_1c0 = &local_218;
                        local_1b8 = &local_200;
                        local_230 = 0.0;
                        local_228 = (double)((ulonglong)local_228 & 0xffffffff00000000);
                        local_1e8 = FUN_143d41e5e;
                        local_1e0 = &local_1d8;
                        local_278 = &local_230;
                        local_280 = 0;
                        local_1d8 = (double)(lVar26 + -0x98);
                        local_1b0 = lVar20;
                        FUN_1401f8d10(L"ParallelFor Task",uVar30,1,&local_1e8);
                        iVar24 = *(int *)(lVar26 + -0x60);
                        lVar29 = (longlong)(int)uStack_210;
                        if (lVar29 != 0) {
                          lVar22 = 0;
                          do {
                            iVar24 = iVar24 + *(int *)((longlong)local_218 + lVar22 + 8);
                            lVar22 = lVar22 + 0x10;
                          } while (lVar29 << 4 != lVar22);
                        }
                        if (iVar24 < 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_1456afac4(iVar24);
                        }
                        plVar1 = (longlong *)(lVar26 + -0x68);
                        if (*(int *)(lVar26 + -0x5c) < iVar24) {
                          FUN_1447a8aa0(plVar1);
                          lVar29 = (longlong)(int)uStack_210;
                        }
                        if ((int)uStack_210 != 0) {
                          lVar29 = lVar29 << 4;
                          pvVar28 = local_218;
                          do {
                            FUN_14070416c(plVar1,pvVar28);
                            FUN_14070416c(&local_248,pvVar28);
                            pvVar28 = (void *)((longlong)pvVar28 + 0x10);
                            lVar29 = lVar29 + -0x10;
                          } while (lVar29 != 0);
                        }
                        iVar24 = uVar30 + *(int *)(lVar26 + -0x58);
                        *(int *)(lVar26 + -0x58) = iVar24;
                        if (iVar24 == *(int *)(lVar26 + -0x70)) {
                          local_1c8 = *(float **)
                                       (*(longlong *)(lVar26 + -0x78) + 0x10 +
                                       (longlong)(iVar24 + -1) * 0x18);
                          pdVar4 = (double *)
                                   (*(longlong *)(lVar26 + -0x78) + (longlong)(iVar24 + -1) * 0x18);
                          local_1d8 = *pdVar4;
                          uStack_1d0 = (float *)pdVar4[1];
                          iVar24 = *(int *)(lVar26 + -0x60);
                          *(uint *)(lVar26 + -0x60) = iVar24 + 1U;
                          if (*(uint *)(lVar26 + -0x5c) < iVar24 + 1U) {
                            FUN_1403e3958(plVar1,iVar24);
                          }
                          uVar23 = uStack_240;
                          lVar29 = *plVar1;
                          *(float **)(lVar29 + 0x10 + (longlong)iVar24 * 0x18) = local_1c8;
                          puVar9 = (undefined4 *)(lVar29 + (longlong)iVar24 * 0x18);
                          *puVar9 = (undefined4)local_1d8;
                          puVar9[1] = local_1d8._4_4_;
                          puVar9[2] = (undefined4)uStack_1d0;
                          puVar9[3] = uStack_1d0._4_4_;
                          lVar29 = (longlong)(int)uStack_240;
                          uVar30 = (int)uStack_240 + 1;
                          uStack_240 = CONCAT44(uStack_240._4_4_,uVar30);
                          if (uStack_240._4_4_ < uVar30) {
                            FUN_1403e3958(&local_248,uVar23 & 0xffffffff);
                          }
                          *(float **)(local_248 + 0x10 + lVar29 * 0x18) = local_1c8;
                          puVar9 = (undefined4 *)(local_248 + lVar29 * 0x18);
                          *puVar9 = (undefined4)local_1d8;
                          puVar9[1] = local_1d8._4_4_;
                          puVar9[2] = (undefined4)uStack_1d0;
                          puVar9[3] = uStack_1d0._4_4_;
                        }
                        FUN_140627eac(local_218,uStack_210 & 0xffffffff);
                        if (local_218 != (void *)0x0) {
                          FUN_1400020a8();
                        }
                        pfVar32 = local_1f8;
                        if (local_1f8 != (float *)0x0) {
                          LOCK();
                          pfVar5 = local_1f8 + 2;
                          *pfVar5 = (float)((int)*pfVar5 + -1);
                          UNLOCK();
                          if (*pfVar5 == 0.0) {
                            (*(code *)**(undefined8 **)local_1f8)(local_1f8);
                            LOCK();
                            pfVar5 = pfVar32 + 3;
                            *pfVar5 = (float)((int)*pfVar5 + -1);
                            UNLOCK();
                            if (*pfVar5 == 0.0) {
                              (**(code **)(*(longlong *)pfVar32 + 0x10))(pfVar32);
                            }
                          }
                        }
                        goto LAB_143d3c8e4;
                      }
                      if (local_1f8 != (float *)0x0) {
                        LOCK();
                        pfVar5 = local_1f8 + 2;
                        *pfVar5 = (float)((int)*pfVar5 + -1);
                        UNLOCK();
                        if (*pfVar5 == 0.0) {
                          (*(code *)**(undefined8 **)local_1f8)(local_1f8);
                          LOCK();
                          pfVar5 = pfVar32 + 3;
                          *pfVar5 = (float)((int)*pfVar5 + -1);
                          UNLOCK();
                          if (*pfVar5 == 0.0) {
                            (**(code **)(*(longlong *)pfVar32 + 0x10))(pfVar32);
                          }
                        }
                      }
                    }
                  }
                  else if (uStack_1d0 != (float *)0x0) {
                    LOCK();
                    uStack_1d0[2] = (float)((int)uStack_1d0[2] + 1);
                    UNLOCK();
                    LOCK();
                    pfVar32[3] = (float)((int)pfVar32[3] + 1);
                    UNLOCK();
                    LOCK();
                    pfVar5 = pfVar32 + 2;
                    *pfVar5 = (float)((int)*pfVar5 + -1);
                    UNLOCK();
                    if (*pfVar5 == 0.0) {
                      (*(code *)**(undefined8 **)pfVar32)(pfVar32);
                      LOCK();
                      pfVar5 = pfVar32 + 3;
                      *pfVar5 = (float)((int)*pfVar5 + -1);
                      UNLOCK();
                      if (*pfVar5 == 0.0) {
                        (**(code **)(*(longlong *)pfVar32 + 0x10))(pfVar32);
                      }
                    }
                    goto LAB_143d3cb17;
                  }
LAB_143d3d123:
                  bVar27 = 0;
                }
                else {
                  if (*(int *)(lVar26 + -0x58) == 0) {
                    FUN_14070416c(lVar26 + -0x68,lVar26 + -0x78);
                    *(int *)(lVar26 + -0x58) = *(int *)(lVar26 + -0x58) + 1;
                  }
LAB_143d3c8e4:
                  fVar34 = *(float *)(lVar26 + -0x50);
                  bVar27 = 1;
                  if (0.0 <= fVar34) {
                    uVar30 = *(uint *)(lVar26 + -0x60);
                    if (((((ulonglong)uVar30 != 0) && (*(int *)(lVar26 + -0x80) != 0)) &&
                        (uVar7 = *(uint *)(lVar26 + -0x84), -1 < (int)uVar7)) &&
                       ((((int)uVar7 < DAT_14c9647dc &&
                         (lVar29 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8),
                         lVar29 != 0)) &&
                        ((*(int *)(lVar29 + 0x10) == *(int *)(lVar26 + -0x80) &&
                         (((*(uint *)(lVar29 + 8) & 0x10200000) == 0 &&
                          (fVar34 <= *(float *)(lVar26 + -0x54) - *(float *)(lVar26 + -0x88)))))))))
                    {
                      if (0 < (int)uVar30) {
                        fVar40 = 0.0;
                        lVar29 = 0;
                        do {
                          fVar37 = fVar40;
                          if (lVar29 != 0) {
                            lVar22 = *(longlong *)(lVar26 + -0x68);
                            local_250 = *(double *)(lVar22 + -8 + lVar29);
                            dVar36 = *(double *)(lVar22 + 0x10 + lVar29) - local_250;
                            local_258 = *(double *)(lVar22 + -0x18 + lVar29);
                            dVar6 = *(double *)(lVar22 + -0x10 + lVar29);
                            dVar10 = *(double *)(lVar22 + 8 + lVar29) - dVar6;
                            _X = *(double *)(lVar22 + lVar29) - local_258;
                            dVar35 = _X * _X + dVar10 * dVar10;
                            dVar38 = dVar36 * dVar36 + dVar35;
                            if (((dVar38 != 1.0) ||
                                (dVar12 = dVar36, dVar13 = dVar10, dVar11 = _X, NAN(dVar38))) &&
                               (dVar12 = DAT_14c8464f0, dVar13 = DAT_14c8464e8,
                               dVar11 = DAT_14c8464e0, 9.99999993922529e-09 <= dVar38)) {
                              dVar11 = 1.0 / SQRT(dVar38);
                              dVar12 = dVar36 * dVar11;
                              dVar13 = dVar10 * dVar11;
                              dVar11 = dVar11 * _X;
                            }
                            fVar39 = (float)SQRT(dVar38);
                            fVar37 = fVar40 + fVar39;
                            if (fVar34 <= fVar40 + fVar39) {
                              local_260 = (float *)0x0;
                              if (((dVar10 != 0.0) || (NAN(dVar10))) || ((_X != 0.0 || (NAN(_X)))))
                              {
                                dVar10 = atan2(dVar10,_X);
                                local_260 = (float *)(dVar10 * 57.29577951308232);
                              }
                              dVar35 = SQRT(dVar35);
                              dVar10 = 0.0;
                              if (((dVar36 != 0.0) || (NAN(dVar36))) ||
                                 ((dVar35 != 0.0 || (NAN(dVar35))))) {
                                dVar10 = atan2(dVar36,dVar35);
                                dVar10 = dVar10 * 57.29577951308232;
                              }
                              fVar37 = fVar34 - fVar40;
                              if (fVar39 <= fVar34 - fVar40) {
                                fVar37 = fVar39;
                              }
                              dVar36 = (double)fVar37;
                              local_220 = local_250 + dVar12 * dVar36;
                              local_228 = dVar6 + dVar13 * dVar36;
                              local_230 = local_258 + dVar11 * dVar36;
                              uStack_1d0 = local_260;
                              local_1c8 = (float *)0x0;
                              local_288 = 0;
                              local_280 = local_280 & 0xffffff00;
                              local_1d8 = dVar10;
                              FUN_14084af84((int)local_260,&local_230,&local_1d8,0);
                              break;
                            }
                          }
                          fVar40 = fVar37;
                          lVar29 = lVar29 + 0x18;
                        } while ((ulonglong)uVar30 * 0x18 != lVar29);
                      }
                      lVar29 = DAT_14cb7ce00;
                      iVar24 = *local_268;
                      if (iVar24 == 0x40000002) {
                        iVar24 = 0x40000002;
LAB_143d3d086:
                        uVar23 = 0;
                      }
                      else {
                        if ((DAT_14c86a9f8 != '\x01') || (iVar24 == 2)) goto LAB_143d3d086;
                        if (iVar24 == 1) {
                          DVar18 = FUN_140ad26c0();
                          DVar19 = GetCurrentThreadId();
                          uVar23 = (ulonglong)(DVar18 != DVar19);
                          iVar24 = *local_268;
                        }
                        else {
                          uVar23 = 1;
                        }
                      }
                      lVar22 = DAT_14cb7cde8;
                      fVar34 = *(float *)(lVar26 + -0x50);
                      fVar40 = fVar34 / *(float *)(lVar29 + uVar23 * 4);
                      if (1.0 <= fVar40) {
                        fVar40 = 1.0;
                      }
                      if (((iVar24 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar24 == 2)) {
                        uVar23 = 0;
                      }
                      else if (iVar24 == 1) {
                        DVar18 = FUN_140ad26c0();
                        DVar19 = GetCurrentThreadId();
                        uVar23 = (ulonglong)(DVar18 != DVar19);
                        fVar34 = *(float *)(lVar26 + -0x50);
                      }
                      else {
                        uVar23 = 1;
                      }
                      if (fVar40 <= 0.0) {
                        fVar40 = 0.0;
                      }
                      fVar37 = *(float *)(lVar22 + uVar23 * 4) * local_1f0;
                      *(float *)(lVar26 + -0x50) =
                           ((local_1f0 - fVar37) * fVar40 + fVar37) * local_1ec + fVar34;
                      goto LAB_143d3d123;
                    }
                  }
                }
                if (local_248 != 0) {
                  FUN_1400020a8();
                }
                local_269 = (bool)(local_269 & bVar27);
                bVar33 = 1 < uVar31;
                uVar31 = uVar31 - 1;
              } while (bVar33);
            }
            if ((((local_269 != false) && (*(int *)(param_1 + 0x2c) != 0)) &&
                ((uVar30 = *(uint *)(param_1 + 0x28), -1 < (int)uVar30 &&
                 (((int)uVar30 < DAT_14c9647dc &&
                  (puVar25 = (undefined8 *)
                             ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8)),
                  puVar25 != (undefined8 *)0x0)))))) &&
               ((*(int *)(puVar25 + 2) == *(int *)(param_1 + 0x2c) &&
                ((*(uint *)(puVar25 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(puVar25 + 1) & 0x10200000) == 0) {
                uVar21 = *puVar25;
              }
              else {
                uVar21 = 0;
              }
              lVar20 = FUN_1447210f0(uVar21);
              if (lVar20 != 0) {
                *(float *)(param_1 + 0x68) = (float)(*(double *)(lVar20 + 0x6d0) + 45.0);
              }
            }
          }
        }
      }
LAB_143d3c5d1:
      if ((local_f0 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
LAB_143d3c493:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_2a8);
}



// FUNCTION 143d3d322 FUN_143d3d322 body=62 status=ok
// SIG undefined FUN_143d3d322(void)

void FUN_143d3d322(longlong param_1)

{
  FUN_145c5b6e4(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_1488493ea(param_1 + 0x50);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 143d3d360 FUN_143d3d360 body=2146 status=ok
// SIG undefined FUN_143d3d360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143d3d360(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double _X;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uVar15;
  byte bVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int iVar20;
  undefined8 uVar21;
  longlong lVar22;
  bool bVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined2 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  code **local_160;
  undefined1 *local_158;
  code *local_150;
  undefined8 local_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  ulonglong local_c0;
  
  uVar13 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  *(bool *)(param_1 + 0x81) = *(char *)(param_2 + 0x48) == '\x02';
  local_c0 = uVar13;
  if (((*(int *)(param_2 + 0x78) < 2) ||
      (*(float *)(param_2 + 0x94) <= 0.0001 && *(float *)(param_2 + 0x94) != 0.0001)) ||
     (*(char *)(param_2 + 0x48) == '\x01')) goto LAB_143d3d787;
  lVar14 = FUN_141023318();
  if (((*(int *)(param_2 + 0xc0) != 0) && (uVar1 = *(uint *)(param_2 + 0xbc), -1 < (int)uVar1)) &&
     (((int)uVar1 < DAT_14c9647dc &&
      ((lVar17 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar17 != 0 &&
       (*(int *)(lVar17 + 0x10) == *(int *)(param_2 + 0xc0))))))) {
    pdVar3 = *(double **)(param_2 + 0x70);
    dVar8 = pdVar3[5] - pdVar3[2];
    dVar24 = pdVar3[4] - pdVar3[1];
    dVar5 = pdVar3[3] - *pdVar3;
    if ((*(uint *)(lVar17 + 8) & 0x10200000) == 0) {
      dVar4 = 0.0;
      if ((((dVar24 != 0.0) || (NAN(dVar24))) || (dVar5 != 0.0)) || (NAN(dVar5))) {
        dVar4 = atan2(dVar24,dVar5);
        dVar4 = dVar4 * 57.29577951308232;
      }
      dVar24 = SQRT(dVar5 * dVar5 + dVar24 * dVar24);
      dVar5 = 0.0;
      if (((dVar8 != 0.0) || (NAN(dVar8))) || ((dVar24 != 0.0 || (NAN(dVar24))))) {
        dVar5 = atan2(dVar8,dVar24);
        dVar5 = dVar5 * 57.29577951308232;
      }
      auVar25._8_8_ = dVar4;
      auVar25._0_8_ = dVar5;
      auVar25 = divpd(auVar25,_DAT_1499387d0);
      auVar25 = roundpd(auVar25,auVar25,3);
      auVar26 = roundpd(in_XMM2,ZEXT816(0),3);
      dVar6 = (dVar5 - auVar25._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar7 = (dVar4 - auVar25._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar9 = (0.0 - auVar26._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      _X = (0.0 - auVar26._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar5 = sin(dVar6);
      dVar8 = sin(dVar7);
      dVar24 = sin(dVar9);
      sin(_X);
      dVar4 = cos(dVar6);
      dVar6 = cos(dVar7);
      dVar7 = cos(dVar9);
      cos(_X);
      dVar9 = dVar8 * dVar5 * dVar24 + dVar6 * dVar4 * dVar7;
      local_128 = dVar5 * dVar8 * dVar7 - dVar4 * dVar6 * dVar24;
      uStack_120 = -(dVar5 * dVar6 * dVar7) - dVar4 * dVar8 * dVar24;
      local_118._8_4_ = SUB84(dVar9,0);
      local_118._0_8_ = -(dVar6 * dVar5 * dVar24) + dVar8 * dVar4 * dVar7;
      local_118._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      local_108 = *pdVar3;
      dStack_100 = pdVar3[1];
      local_f8 = pdVar3[2];
      uStack_f0 = 0;
      local_e8 = 0x3ff0000000000000;
      uStack_e0 = 0x3ff0000000000000;
      local_d8 = 0x3ff0000000000000;
      uStack_d0 = 0;
      if (*(int *)(param_2 + 0xc0) == 0) {
LAB_143d3daab:
        uVar21 = 0;
      }
      else {
        uVar1 = *(uint *)(param_2 + 0xbc);
        uVar21 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar18 = (undefined8 *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar18 == (undefined8 *)0x0) ||
             ((*(int *)(puVar18 + 2) != *(int *)(param_2 + 0xc0) ||
              ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)))) goto LAB_143d3daab;
          uVar21 = *puVar18;
        }
      }
      if (*(int *)(param_1 + 0x2c) == 0) {
LAB_143d3dab3:
        uVar15 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x28);
        uVar15 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar18 = (undefined8 *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar18 == (undefined8 *)0x0) ||
             ((*(int *)(puVar18 + 2) != *(int *)(param_1 + 0x2c) ||
              ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)))) goto LAB_143d3dab3;
          uVar15 = *puVar18;
        }
      }
      uVar15 = FUN_1447210f0(uVar15);
      local_190 = CONCAT31(local_190._1_3_,1);
      local_198 = CONCAT31(local_198._1_3_,2);
      lVar17 = FUN_1405837ac(uVar15,uVar21,&local_128,1);
      uVar13 = 0;
      if (lVar17 == 0) goto LAB_143d3d787;
      uVar1 = *(uint *)(lVar17 + 0xc);
      *(uint *)(param_2 + 100) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar22 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar22 = 0;
      }
      iVar11 = *(int *)(lVar22 + 0x10);
      if (*(int *)(lVar22 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        iVar20 = DAT_14c964868 + 1;
        bVar23 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar23) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar20);
        }
        LOCK();
        iVar11 = *(int *)(lVar22 + 0x10);
        bVar23 = iVar11 == 0;
        if (bVar23) {
          *(int *)(lVar22 + 0x10) = iVar20;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar23) {
          iVar11 = iVar20;
        }
      }
      *(int *)(param_2 + 0x68) = iVar11;
      bVar16 = *(char *)(param_2 + 1) - 1;
      lVar22 = 100;
      if (bVar16 < 4) {
        lVar22 = (ulonglong)bVar16 * 0x10 + 0x24;
      }
      dVar5 = *(double *)(lVar14 + lVar22);
      dVar8 = ((double *)(lVar14 + lVar22))[1];
      lVar22 = 0x74;
      if (*(char *)(param_2 + 0xba) != '\x01') {
        lVar22 = (ulonglong)(*(char *)(param_2 + 0xba) == '\x03') * 4 + 0x78;
      }
      uVar12 = *(undefined4 *)(lVar14 + lVar22);
      if (iVar11 == 0) {
LAB_143d3daba:
        plVar19 = (longlong *)0x0;
      }
      else {
        uVar1 = *(uint *)(param_2 + 100);
        plVar19 = (longlong *)0x0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar18 = (undefined8 *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar18 == (undefined8 *)0x0) ||
             ((*(int *)(puVar18 + 2) != iVar11 || ((*(uint *)(puVar18 + 1) & 0x10200000) != 0))))
          goto LAB_143d3daba;
          plVar19 = (longlong *)*puVar18;
        }
      }
      local_128._0_4_ = SUB84(dVar5,0);
      local_128._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
      uStack_120._0_4_ = SUB84(dVar8,0);
      uStack_120._4_4_ = (undefined4)((ulonglong)dVar8 >> 0x20);
      local_138 = (undefined4)local_128;
      uStack_134 = local_128._4_4_;
      uStack_130 = (undefined4)uStack_120;
      uStack_12c = uStack_120._4_4_;
      uVar10 = (undefined4)local_128;
      local_128 = dVar5;
      uStack_120 = dVar8;
      (**(code **)(*plVar19 + 0xa18))(uVar10,DAT_14cb7cfb8);
      local_148 = *(undefined8 *)(param_2 + 200);
      local_140 = *(longlong *)(param_2 + 0xd0);
      if (local_140 != 0) {
        LOCK();
        *(int *)(local_140 + 0xc) = *(int *)(local_140 + 0xc) + 1;
        UNLOCK();
      }
      FUN_148849438(param_2 + 0x50,&local_148);
      if (*(int *)(param_2 + 0x68) == 0) {
LAB_143d3dac1:
        plVar19 = (longlong *)0x0;
      }
      else {
        uVar1 = *(uint *)(param_2 + 100);
        plVar19 = (longlong *)0x0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar18 = (undefined8 *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar18 == (undefined8 *)0x0) ||
             ((*(int *)(puVar18 + 2) != *(int *)(param_2 + 0x68) ||
              ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)))) goto LAB_143d3dac1;
          plVar19 = (longlong *)*puVar18;
        }
      }
      (**(code **)(*plVar19 + 0xa08))(plVar19,DAT_14cb7cfc0,uVar12);
      if (*(int *)(param_2 + 0x68) == 0) {
LAB_143d3dac8:
        plVar19 = (longlong *)0x0;
      }
      else {
        uVar1 = *(uint *)(param_2 + 100);
        plVar19 = (longlong *)0x0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar18 = (undefined8 *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar18 == (undefined8 *)0x0) ||
             ((*(int *)(puVar18 + 2) != *(int *)(param_2 + 0x68) ||
              ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)))) goto LAB_143d3dac8;
          plVar19 = (longlong *)*puVar18;
        }
      }
      (**(code **)(*plVar19 + 0xa60))(plVar19,0);
      if ((((*(int *)(param_1 + 0x2c) != 0) && (uVar1 = *(uint *)(param_1 + 0x28), -1 < (int)uVar1))
          && ((int)uVar1 < DAT_14c9647dc)) &&
         (((plVar19 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar19 != (longlong *)0x0 && ((int)plVar19[2] == *(int *)(param_1 + 0x2c))) &&
          (((*(uint *)(plVar19 + 1) & 0x10200000) == 0 &&
           (plVar19 = (longlong *)*plVar19, plVar19 != (longlong *)0x0)))))) {
        if (DAT_14cb61cd0 == 0) {
          local_160 = &local_c8;
          local_c8 = FUN_141030f22;
          local_150 = FUN_14081d0ea;
          local_158 = &LAB_1463b31ae;
          local_168 = &LAB_1486dca4f;
          local_170 = &LAB_1464f50a6;
          local_178 = &DAT_149e063b2;
          local_180 = 0;
          local_188 = 0x10000004;
          local_190 = 8;
          local_198 = 0xd70;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
        }
        if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(plVar19[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar19[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) ==
            DAT_14cb61cd0 + 0x30)) {
          uVar12 = (**(code **)(*plVar19 + 0x1068))(plVar19);
          FUN_140357fa8(lVar17,uVar12,0);
        }
      }
    }
  }
  uVar1 = *(uint *)(param_2 + 0x68);
  uVar13 = (ulonglong)uVar1;
  if ((((uVar1 != 0) && (uVar2 = *(uint *)(param_2 + 100), -1 < (int)uVar2)) &&
      ((int)uVar2 < DAT_14c9647dc)) &&
     ((lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar14 != 0 &&
      (*(uint *)(lVar14 + 0x10) == uVar1)))) {
    uVar13 = (ulonglong)*(uint *)(lVar14 + 8);
  }
LAB_143d3d787:
  if ((local_c0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 143d3dbc4 FUN_143d3dbc4 body=3440 status=ok
// SIG undefined FUN_143d3dbc4(void)

/* WARNING: Removing unreachable block (ram,0x000143d3e54e) */

ulonglong FUN_143d3dbc4(longlong param_1,longlong *param_2,double *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong *plVar24;
  bool bVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  undefined1 auStack_288 [36];
  int local_264;
  undefined8 *local_260;
  ulonglong local_258;
  uint local_24c;
  undefined8 local_248;
  ulonglong local_240;
  longlong *local_238;
  ulonglong local_230;
  longlong *local_228;
  longlong *local_220;
  longlong local_218;
  ulonglong uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  undefined1 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  double local_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a4;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined2 local_150;
  undefined1 local_14e;
  undefined8 local_14c;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  longlong local_118;
  longlong lStack_110;
  double local_108;
  char local_100;
  longlong local_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  uint auStack_e8 [3];
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  uint local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (param_1 == 0) {
    uVar23 = 0;
    goto LAB_143d3dc0a;
  }
  FUN_141506615(*param_4,*(undefined4 *)(param_4 + 1));
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    FUN_148851d88(param_4);
  }
  plVar6 = (longlong *)FUN_14041a931(param_1);
  if (plVar6 != (longlong *)0x0) {
    uStack_ec = 0;
    auStack_e8[0] = 0;
    auStack_e8[1] = 0;
    local_f8 = 0;
    uStack_f0 = uStack_f0 & 0xffffff00;
    auStack_e8[2] = (undefined4)DAT_14c8464e0;
    uStack_dc = DAT_14c8464e0._4_4_;
    uStack_d8 = (uint *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_d0 = SUB84(DAT_14c8464f0,0);
    uStack_cc = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar18 = 0;
    if (*(longlong *)(param_1 + 0x398) != 0) {
      lVar8 = FUN_140082f10();
      lVar12 = *(longlong *)(param_1 + 0x398);
      if (lVar12 == 0) {
LAB_143d3e92d:
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        if ((lVar8 != 0) && (lVar2 = *(longlong *)(lVar12 + 0x10), lVar2 != 0)) {
          if (*(int *)(lVar2 + 0x38) < *(int *)(lVar8 + 0x38)) goto LAB_143d3e92d;
          lVar18 = 0;
          if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
              lVar8 + 0x30) {
            lVar18 = lVar12;
          }
        }
      }
    }
    FUN_14654b806(uVar7,&local_118,lVar18,&local_f8);
    if (local_100 == '\x01') {
      puVar9 = (undefined8 *)FUN_1488495a0();
      local_208 = (double)((ulonglong)local_208 & 0xffffffffffff0000);
      local_1e8 = 0;
      local_1e0 = local_118;
      lVar18 = local_1e0;
      uStack_1d8 = lStack_110;
      lVar12 = uStack_1d8;
      local_1d0 = local_108;
      uStack_1c8 = CONCAT31(uStack_1c8._1_3_,1);
      uStack_1c4 = 0x42c80000;
      local_1c0 = 0;
      local_1a4 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      local_170 = 0xbf800000;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0xbf800000;
      local_150 = 0;
      local_14e = 2;
      local_14c = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_140 = 0;
      uStack_138 = 0;
      *(undefined2 *)puVar9 = 0;
      local_1e0._0_4_ = (undefined4)local_118;
      local_1e0._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
      uStack_1d8._0_4_ = (undefined4)lStack_110;
      uStack_1d8._4_4_ = (undefined4)((ulonglong)lStack_110 >> 0x20);
      local_1e0 = lVar18;
      uStack_1d8 = lVar12;
      if (&local_208 == puVar9) {
        *(undefined1 *)(puVar9 + 9) = 0;
        puVar9[7] = local_108;
        puVar9[8] = CONCAT44(0x42c80000,uStack_1c8);
        *(undefined4 *)(puVar9 + 5) = (undefined4)local_1e0;
        *(undefined4 *)((longlong)puVar9 + 0x2c) = local_1e0._4_4_;
        *(undefined4 *)(puVar9 + 6) = (undefined4)uStack_1d8;
        *(undefined4 *)((longlong)puVar9 + 0x34) = uStack_1d8._4_4_;
        FUN_148849b92(puVar9 + 10,&local_1b8);
      }
      else {
        if (*(char *)(puVar9 + 4) != '\0') {
          *(undefined1 *)(puVar9 + 4) = 0;
        }
        *(undefined1 *)(puVar9 + 9) = 0;
        puVar9[7] = local_108;
        puVar9[8] = CONCAT44(0x42c80000,uStack_1c8);
        *(undefined4 *)(puVar9 + 5) = (undefined4)local_1e0;
        *(undefined4 *)((longlong)puVar9 + 0x2c) = local_1e0._4_4_;
        *(undefined4 *)(puVar9 + 6) = (undefined4)uStack_1d8;
        *(undefined4 *)((longlong)puVar9 + 0x34) = uStack_1d8._4_4_;
        FUN_148849b92(puVar9 + 10,&local_1b8);
        if (puVar9[0x14] != 0) {
          FUN_1400020a8();
        }
        puVar9[0x14] = local_168;
        local_168 = 0;
        *(undefined4 *)(puVar9 + 0x15) = (undefined4)uStack_160;
        *(undefined4 *)((longlong)puVar9 + 0xac) = uStack_160._4_4_;
        uStack_160 = 0;
      }
      FUN_148849c0a(puVar9 + 0x16,&local_158);
      FUN_145c5b6e4(&local_158);
      if (local_168 != 0) {
        FUN_1400020a8();
      }
      FUN_1488493ea(&local_1b8);
      *(undefined1 *)((longlong)puVar9 + 1) = 4;
      uVar23 = CONCAT71((int7)((ulonglong)&local_118 >> 8),1);
      goto LAB_143d3dc0a;
    }
  }
  local_218 = 0;
  uStack_210 = 0;
  local_238 = param_2;
  (**(code **)(*param_2 + 0x50))(param_2,param_1,&local_218);
  uVar23 = 0;
  uStack_d8 = (uint *)0x0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_cc = 0x80;
  uStack_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  if (0 < (int)uStack_210) {
    lVar18 = 0;
    do {
      if (*(longlong *)(local_218 + lVar18 * 0x10) != 0) {
        plVar24 = (longlong *)(local_218 + lVar18 * 0x10);
        plVar6 = (longlong *)plVar24[1];
        if ((plVar6 != (longlong *)0x0) && (0 < (int)plVar6[1])) {
          iVar17 = (int)plVar6[1];
          do {
            if (iVar17 == 0) goto LAB_143d3df43;
            LOCK();
            iVar21 = (int)plVar6[1];
            bVar25 = iVar17 == iVar21;
            if (bVar25) {
              *(int *)(plVar6 + 1) = iVar17 + 1;
              iVar21 = iVar17;
            }
            iVar17 = iVar21;
            UNLOCK();
          } while (!bVar25);
          plVar15 = (longlong *)*plVar24;
          if ((plVar15 != (longlong *)0x0) &&
             ((**(code **)(*plVar15 + 0x10))(plVar15,&local_208), local_208 != 0.0)) {
            uVar5 = (uint)((ulonglong)local_208 >> 0x10);
            uVar20 = SUB84(local_208,0) & 0xffff;
            plVar15 = (longlong *)
                      FUN_148852326(&local_f8,
                                    (SUB84(local_208,0) << 0x10 | uVar20) +
                                    (int)((ulonglong)local_208 >> 0x20) +
                                    (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar20 >> 4),&local_208);
            iVar17 = (int)plVar15[1];
            *(uint *)(plVar15 + 1) = iVar17 + 1U;
            if (*(uint *)((longlong)plVar15 + 0xc) < iVar17 + 1U) {
              FUN_14060ef9e(plVar15,iVar17);
            }
            lVar12 = *plVar15;
            *(longlong *)(lVar12 + (longlong)iVar17 * 0x10) = *plVar24;
            lVar8 = plVar24[1];
            *(longlong *)(lVar12 + 8 + (longlong)iVar17 * 0x10) = lVar8;
            if (lVar8 != 0) {
              LOCK();
              *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
              UNLOCK();
            }
          }
          LOCK();
          plVar24 = plVar6 + 1;
          *(int *)plVar24 = (int)*plVar24 + -1;
          UNLOCK();
          if ((int)*plVar24 == 0) {
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
      }
LAB_143d3df43:
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)uStack_210);
    local_258 = (ulonglong)local_d0;
    uVar22 = 0;
    uVar23 = 0;
    if (local_d0 != 0) {
      puVar10 = uStack_d8;
      if (uStack_d8 == (uint *)0x0) {
        puVar10 = auStack_e8;
      }
      uVar5 = *puVar10;
      iVar17 = 0;
      if (uVar5 == 0) {
        iVar17 = local_d0 + 0x1e;
        if (-1 < (int)(local_d0 - 1)) {
          iVar17 = local_d0 - 1;
        }
        uVar22 = 0;
        uVar23 = (ulonglong)(uint)(iVar17 >> 5);
        if (iVar17 >> 5 < 1) {
          uVar23 = uVar22;
        }
        iVar17 = 0;
        do {
          if (uVar23 == uVar22) goto LAB_143d3e8da;
          iVar17 = iVar17 + 0x20;
          uVar5 = puVar10[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar5 == 0);
      }
      uVar19 = (ulonglong)(-uVar5 & uVar5);
      uVar23 = uVar19 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      uVar5 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if ((int)uVar5 < (int)local_d0) {
        uVar20 = 0xffffffff;
        uVar23 = 0;
        uVar7 = 0;
        do {
          lVar18 = local_f8;
          if ((char)uVar7 == '\x03') break;
          local_264 = iVar17;
          local_24c = uVar20;
          local_248 = uVar7;
          local_240 = uVar19;
          local_230 = uVar22;
          puVar9 = (undefined8 *)FUN_1488495a0(param_4);
          if (0 < *(int *)(lVar18 + 0x10 + (longlong)(int)uVar5 * 0x20)) {
            lVar18 = (longlong)(int)uVar5 * 0x20 + lVar18;
            plVar6 = (longlong *)(lVar18 + 8);
            uVar19 = 0xffffffff;
            uVar22 = 0;
            fVar31 = 3.4028235e+38;
            local_260 = puVar9;
            do {
              lVar12 = *plVar6;
              if (*(longlong *)(lVar12 + uVar22 * 0x10) != 0) {
                plVar15 = (longlong *)(lVar12 + uVar22 * 0x10);
                plVar24 = (longlong *)plVar15[1];
                if ((plVar24 != (longlong *)0x0) && (0 < (int)plVar24[1])) {
                  iVar17 = (int)plVar24[1];
                  do {
                    if (iVar17 == 0) goto LAB_143d3e298;
                    LOCK();
                    iVar21 = (int)plVar24[1];
                    bVar25 = iVar17 == iVar21;
                    if (bVar25) {
                      *(int *)(plVar24 + 1) = iVar17 + 1;
                      iVar21 = iVar17;
                    }
                    iVar17 = iVar21;
                    UNLOCK();
                  } while (!bVar25);
                  plVar15 = (longlong *)*plVar15;
                  if ((((plVar15 != (longlong *)0x0) &&
                       (uVar11 = (**(code **)(*plVar15 + 0x20))(plVar15), (uVar11 & 1) == 0)) &&
                      (uVar11 = (**(code **)(*plVar15 + 0x20))(plVar15), (uVar11 & 2) == 0)) &&
                     (cVar3 = (**(code **)(*plVar15 + 0x48))(plVar15), cVar3 == '\0')) {
                    if ((((*(int *)((longlong)plVar15 + 0x44) == 0) ||
                         (uVar5 = *(uint *)(plVar15 + 8), (int)uVar5 < 0)) ||
                        ((DAT_14c9647dc <= (int)uVar5 ||
                         ((plVar16 = (longlong *)
                                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                          plVar16 == (longlong *)0x0 ||
                          ((int)plVar16[2] != *(int *)((longlong)plVar15 + 0x44))))))) ||
                       (((*(uint *)(plVar16 + 1) & 0x10200000) != 0 ||
                        (plVar16 = (longlong *)*plVar16, plVar16 == (longlong *)0x0)))) {
                      if (((((*(int *)((longlong)plVar15 + 0x3c) == 0) ||
                            (uVar5 = *(uint *)(plVar15 + 7), (int)uVar5 < 0)) ||
                           (DAT_14c9647dc <= (int)uVar5)) ||
                          ((plVar16 = (longlong *)
                                      ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8))
                           , plVar16 == (longlong *)0x0 ||
                           ((int)plVar16[2] != *(int *)((longlong)plVar15 + 0x3c))))) ||
                         (((*(uint *)(plVar16 + 1) & 0x10200000) != 0 || (*plVar16 == 0)))) {
                        local_1f8 = (double)plVar15[0xc];
                        uVar27 = (int)plVar15[10];
                        uVar28 = *(undefined4 *)((longlong)plVar15 + 0x54);
                        uVar29 = (int)plVar15[0xb];
                        uVar30 = *(undefined4 *)((longlong)plVar15 + 0x5c);
                      }
                      else {
                        lVar12 = *(longlong *)(*plVar16 + 0x1c8);
                        if (lVar12 != 0) {
                          local_208 = *(double *)(lVar12 + 0x260);
                          uStack_200 = *(double *)(lVar12 + 0x268);
                          local_1f8 = *(double *)(lVar12 + 0x270);
                          goto LAB_143d3e227;
                        }
                        local_1f8 = DAT_14c8464f0;
                        uVar27 = (undefined4)DAT_14c8464e0;
                        uVar28 = DAT_14c8464e0._4_4_;
                        uVar29 = (undefined4)DAT_14c8464e8;
                        uVar30 = DAT_14c8464e8._4_4_;
                      }
                      local_208 = (double)CONCAT44(uVar28,uVar27);
                      uStack_200 = (double)CONCAT44(uVar30,uVar29);
                    }
                    else {
                      (**(code **)(*plVar16 + 0x4b0))(plVar16,&local_208,plVar15[9]);
                    }
LAB_143d3e227:
                    fVar26 = (float)((local_1f8 - param_3[2]) * (local_1f8 - param_3[2]) +
                                    (local_208 - *param_3) * (local_208 - *param_3) +
                                    (uStack_200 - param_3[1]) * (uStack_200 - param_3[1]));
                    if (fVar26 < fVar31) {
                      uVar19 = uVar22 & 0xffffffff;
                      fVar31 = fVar26;
                    }
                  }
                  LOCK();
                  plVar15 = plVar24 + 1;
                  *(int *)plVar15 = (int)*plVar15 + -1;
                  UNLOCK();
                  if ((int)*plVar15 == 0) {
                    (**(code **)*plVar24)(plVar24);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar24 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar24 + 0x10))(plVar24);
                    }
                  }
                }
              }
LAB_143d3e298:
              puVar9 = local_260;
              uVar22 = uVar22 + 1;
            } while ((longlong)uVar22 < (longlong)*(int *)(lVar18 + 0x10));
            if ((int)uVar19 != -1) {
              lVar18 = *plVar6;
              lVar12 = (longlong)(int)uVar19 * 0x10;
              local_228 = (longlong *)0x0;
              local_220 = *(longlong **)(lVar18 + 8 + lVar12);
              if (local_220 == (longlong *)0x0) {
                plVar6 = (longlong *)0x0;
              }
              else {
                iVar17 = (int)local_220[1];
                do {
                  if (iVar17 == 0) {
                    local_220 = (longlong *)0x0;
                    goto LAB_143d3e38d;
                  }
                  LOCK();
                  iVar21 = (int)local_220[1];
                  bVar25 = iVar17 == iVar21;
                  if (bVar25) {
                    *(int *)(local_220 + 1) = iVar17 + 1;
                    iVar21 = iVar17;
                  }
                  iVar17 = iVar21;
                  UNLOCK();
                } while (!bVar25);
                if (local_220 == (longlong *)0x0) {
LAB_143d3e38d:
                  plVar6 = (longlong *)0x0;
                }
                else {
                  local_228 = *(longlong **)(lVar18 + lVar12);
                  plVar6 = local_220;
                }
              }
              plVar24 = local_228;
              uVar27 = (**(code **)(*local_228 + 0x18))();
              if ((((*(int *)((longlong)plVar24 + 0x44) == 0) ||
                   (uVar5 = *(uint *)(plVar24 + 8), (int)uVar5 < 0)) ||
                  ((DAT_14c9647dc <= (int)uVar5 ||
                   (((plVar15 = (longlong *)
                                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                     plVar15 == (longlong *)0x0 ||
                     ((int)plVar15[2] != *(int *)((longlong)plVar24 + 0x44))) ||
                    ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))))) ||
                 (plVar15 = (longlong *)*plVar15, plVar15 == (longlong *)0x0)) {
                if ((((*(int *)((longlong)plVar24 + 0x3c) == 0) ||
                     (uVar5 = *(uint *)(plVar24 + 7), (int)uVar5 < 0)) ||
                    (((DAT_14c9647dc <= (int)uVar5 ||
                      ((plVar15 = (longlong *)
                                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                       plVar15 == (longlong *)0x0 ||
                       ((int)plVar15[2] != *(int *)((longlong)plVar24 + 0x3c))))) ||
                     ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) || (*plVar15 == 0)) {
                  local_108 = (double)plVar24[0xc];
                  local_118 = plVar24[10];
                  lStack_110 = plVar24[0xb];
                }
                else {
                  lVar18 = *(longlong *)(*plVar15 + 0x1c8);
                  puVar9 = local_260;
                  if (lVar18 == 0) {
                    local_108 = DAT_14c8464f0;
                    local_118 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                    lStack_110 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                  }
                  else {
                    local_118 = *(longlong *)(lVar18 + 0x260);
                    lStack_110 = *(longlong *)(lVar18 + 0x268);
                    local_108 = *(double *)(lVar18 + 0x270);
                  }
                }
              }
              else {
                (**(code **)(*plVar15 + 0x4b0))(plVar15,&local_118,plVar24[9]);
              }
              local_208 = (double)((ulonglong)local_208 & 0xffffffffffff0000);
              local_1e8 = 0;
              local_1d0 = local_108;
              local_1e0 = local_118;
              lVar18 = local_1e0;
              uStack_1d8 = lStack_110;
              lVar12 = uStack_1d8;
              uStack_1c8 = CONCAT31(uStack_1c8._1_3_,1);
              local_1c0 = 0;
              local_1a4 = 0;
              local_1b8 = 0;
              uStack_1b0 = 0;
              local_178 = 0;
              local_188 = 0;
              uStack_180 = 0;
              local_198 = 0;
              uStack_190 = 0;
              local_170 = 0xbf800000;
              local_168 = 0;
              uStack_160 = 0;
              local_158 = 0xbf800000;
              local_150 = 0;
              local_14e = 2;
              local_14c = 0;
              local_130 = 0;
              uStack_128 = 0;
              local_140 = 0;
              uStack_138 = 0;
              *(undefined2 *)puVar9 = 0;
              local_1e0._0_4_ = (undefined4)local_118;
              local_1e0._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
              uStack_1d8._0_4_ = (undefined4)lStack_110;
              uStack_1d8._4_4_ = (undefined4)((ulonglong)lStack_110 >> 0x20);
              local_1e0 = lVar18;
              uStack_1d8 = lVar12;
              uStack_1c4 = uVar27;
              if (&local_208 == puVar9) {
                *(undefined1 *)(puVar9 + 9) = 0;
                puVar9[7] = local_108;
                puVar9[8] = CONCAT44(uVar27,uStack_1c8);
                *(undefined4 *)(puVar9 + 5) = (undefined4)local_1e0;
                *(undefined4 *)((longlong)puVar9 + 0x2c) = local_1e0._4_4_;
                *(undefined4 *)(puVar9 + 6) = (undefined4)uStack_1d8;
                *(undefined4 *)((longlong)puVar9 + 0x34) = uStack_1d8._4_4_;
                FUN_148849b92(puVar9 + 10,&local_1b8);
              }
              else {
                if (*(char *)(puVar9 + 4) != '\0') {
                  *(undefined1 *)(puVar9 + 4) = 0;
                }
                *(undefined1 *)(puVar9 + 9) = 0;
                puVar9[7] = local_108;
                puVar9[8] = CONCAT44(uVar27,uStack_1c8);
                *(undefined4 *)(puVar9 + 5) = (undefined4)local_1e0;
                *(undefined4 *)((longlong)puVar9 + 0x2c) = local_1e0._4_4_;
                *(undefined4 *)(puVar9 + 6) = (undefined4)uStack_1d8;
                *(undefined4 *)((longlong)puVar9 + 0x34) = uStack_1d8._4_4_;
                FUN_148849b92(puVar9 + 10,&local_1b8);
                if (puVar9[0x14] != 0) {
                  FUN_1400020a8();
                }
                puVar9[0x14] = local_168;
                local_168 = 0;
                *(undefined4 *)(puVar9 + 0x15) = (undefined4)uStack_160;
                *(undefined4 *)((longlong)puVar9 + 0xac) = uStack_160._4_4_;
                uStack_160 = 0;
              }
              FUN_148849c0a(puVar9 + 0x16,&local_158);
              FUN_145c5b6e4(&local_158);
              if (local_168 != 0) {
                FUN_1400020a8();
              }
              FUN_1488493ea(&local_1b8);
              local_208 = 0.0;
              uStack_200 = 0.0;
              (**(code **)(*local_238 + 0x58))(local_238,&local_208);
              bVar4 = FUN_1488495de(&local_208,&local_228);
              *(byte *)(puVar9 + 8) = bVar4 ^ 1;
              FUN_140be4274(local_208,(ulonglong)uStack_200 & 0xffffffff);
              if (local_208 != 0.0) {
                FUN_1400020a8();
              }
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                plVar24 = plVar6 + 1;
                *(int *)plVar24 = (int)*plVar24 + -1;
                UNLOCK();
                if ((int)*plVar24 == 0) {
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
              uVar23 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
            }
          }
          uVar20 = local_24c & ~(uint)local_240;
          puVar10 = uStack_d8;
          if (uStack_d8 == (uint *)0x0) {
            puVar10 = auStack_e8;
          }
          iVar21 = (int)local_230;
          lVar18 = (longlong)iVar21;
          uVar5 = puVar10[lVar18] & uVar20;
          uVar22 = local_230;
          iVar17 = local_264;
          if (uVar5 == 0) {
            iVar13 = local_d0 + 0x1e;
            if (-1 < (int)(local_d0 - 1)) {
              iVar13 = local_d0 - 1;
            }
            iVar13 = iVar13 >> 5;
            iVar17 = local_264 + 0x20;
            iVar14 = iVar13;
            if (iVar13 < iVar21) {
              iVar14 = iVar21;
            }
            if (iVar21 < iVar13) {
              lVar12 = 0;
              do {
                uVar5 = puVar10[lVar18 + lVar12 + 1];
                if (uVar5 != 0) {
                  uVar20 = 0xffffffff;
                  uVar22 = (ulonglong)(iVar21 + (int)lVar12 + 1);
                  goto LAB_143d3e74f;
                }
                iVar17 = iVar17 + 0x20;
                lVar12 = lVar12 + 1;
              } while (iVar14 - lVar18 != lVar12);
              uVar20 = 0xffffffff;
              iVar21 = iVar14;
            }
            uVar22 = (ulonglong)(iVar21 + 1);
            uVar19 = local_240;
            uVar5 = local_d0;
          }
          else {
LAB_143d3e74f:
            uVar19 = (ulonglong)(-uVar5 & uVar5);
            uVar11 = uVar19 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            uVar5 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if ((int)local_d0 <= (int)uVar5) {
              uVar5 = local_d0;
            }
          }
          uVar7 = CONCAT71((int7)((ulonglong)local_248 >> 8),(char)local_248 + '\x01');
        } while (uVar5 != (uint)local_258);
      }
      else {
LAB_143d3e8da:
        uVar23 = 0;
      }
    }
    local_b0 = 0;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_146248800(&local_f8);
  FUN_140be4274(local_218,uStack_210 & 0xffffffff);
  if (local_218 != 0) {
    FUN_1400020a8();
  }
LAB_143d3dc0a:
  if ((local_80 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23 & 0xffffff01;
}



// FUNCTION 143d3e936 FUN_143d3e936 body=417 status=ok
// SIG undefined FUN_143d3e936(void)

void FUN_143d3e936(undefined8 param_1,undefined2 *param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined2 local_100 [4];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  char local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8;
  undefined1 local_b0 [80];
  longlong local_60;
  undefined8 local_58;
  undefined1 auStack_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_118 = *param_4;
  uStack_110 = param_4[1];
  local_108 = param_4[2];
  local_138 = *param_3;
  uStack_134 = param_3[1];
  uStack_130 = param_3[2];
  uStack_12c = param_3[3];
  local_128 = *(undefined8 *)(param_3 + 4);
  local_148 = param_5;
  uStack_140 = param_6;
  FUN_143d3ae68(local_100,local_138,&local_138,&local_118);
  *param_2 = local_100[0];
  if (local_100 == param_2) {
    *(undefined1 *)(param_2 + 0x24) = local_b8;
    *(undefined4 *)(param_2 + 0x1c) = local_c8;
    *(undefined4 *)(param_2 + 0x1e) = uStack_c4;
    *(undefined4 *)(param_2 + 0x20) = uStack_c0;
    *(undefined4 *)(param_2 + 0x22) = uStack_bc;
    *(undefined4 *)(param_2 + 0x14) = local_d8;
    *(undefined4 *)(param_2 + 0x16) = uStack_d4;
    *(undefined4 *)(param_2 + 0x18) = uStack_d0;
    *(undefined4 *)(param_2 + 0x1a) = uStack_cc;
    FUN_148849b92(param_2 + 0x28);
    goto LAB_143d3ea77;
  }
  if (local_e0 == '\x01') {
    *(undefined8 *)(param_2 + 0xc) = local_e8;
    *(undefined8 *)(param_2 + 4) = local_f8;
    *(undefined8 *)(param_2 + 8) = uStack_f0;
    uVar1 = 1;
LAB_143d3ea01:
    *(undefined1 *)(param_2 + 0x10) = uVar1;
  }
  else if (*(char *)(param_2 + 0x10) != '\0') {
    uVar1 = 0;
    goto LAB_143d3ea01;
  }
  *(undefined1 *)(param_2 + 0x24) = local_b8;
  *(undefined4 *)(param_2 + 0x1c) = local_c8;
  *(undefined4 *)(param_2 + 0x1e) = uStack_c4;
  *(undefined4 *)(param_2 + 0x20) = uStack_c0;
  *(undefined4 *)(param_2 + 0x22) = uStack_bc;
  *(undefined4 *)(param_2 + 0x14) = local_d8;
  *(undefined4 *)(param_2 + 0x16) = uStack_d4;
  *(undefined4 *)(param_2 + 0x18) = uStack_d0;
  *(undefined4 *)(param_2 + 0x1a) = uStack_cc;
  FUN_148849b92(param_2 + 0x28);
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(longlong *)(param_2 + 0x50) = local_60;
  local_60 = 0;
  *(undefined4 *)(param_2 + 0x54) = (undefined4)local_58;
  *(undefined4 *)(param_2 + 0x56) = local_58._4_4_;
  local_58 = 0;
LAB_143d3ea77:
  FUN_148849c0a(param_2 + 0x58,auStack_50);
  FUN_145c5b6e4(auStack_50);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_1488493ea(local_b0);
  if ((local_18 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d3ead8 FUN_143d3ead8 body=444 status=ok
// SIG undefined FUN_143d3ead8(void)

void FUN_143d3ead8(longlong *param_1)

{
  uint *puVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar12 = 0;
    uVar15 = 1;
    iVar13 = 0;
    iVar6 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar16 = *puVar10;
    if (uVar16 == 0) {
      iVar6 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar6 = iVar4 + -1;
      }
      uVar12 = 0;
      uVar15 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar15 = uVar12;
      }
      iVar13 = 0;
      do {
        if (uVar15 == uVar12) goto LAB_143d3ec30;
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar10[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar12 = 0;
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar3 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar6 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar6) {
      iVar6 = iVar4;
    }
  }
  if (iVar6 < iVar4) {
    uVar16 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar6 * 0x20);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar4 = (int)param_1[5];
      iVar6 = (int)uVar12;
      lVar14 = (longlong)iVar6;
      uVar7 = puVar10[lVar14] & uVar16;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) break;
        lVar11 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar7 = puVar10[lVar14 + lVar11 + 1];
          if (uVar7 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar9 - lVar14 == lVar11) goto LAB_143d3ec30;
        }
        uVar12 = (ulonglong)(iVar6 + (int)lVar11 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar6 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_143d3ec30:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(puVar1,0);
    return;
  }
  return;
}



// FUNCTION 143d3ec94 FUN_143d3ec94 body=184 status=ok
// SIG undefined FUN_143d3ec94(void)

void FUN_143d3ec94(longlong param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  short sVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  if (param_4 == '\0') {
    FUN_1400e4a30();
    puVar4 = *(undefined8 **)(param_1 + 0x128);
    if (((puVar4 != (undefined8 *)0x0) && ((byte *)*puVar4 != (byte *)0x0)) &&
       ((*(byte *)*puVar4 & 3) == 1)) {
      if ((*(uint *)(param_1 + 0x10) != (uint)((*(byte *)((longlong)param_2 + 0xe) >> 1 & 1) != 0))
         && ((*(longlong *)(param_1 + 8) == 0 ||
             (*(char *)(*(longlong *)(param_1 + 8) + 0xd68) == '\x01')))) {
        cVar1 = (**(code **)(*DAT_14cb8a878 + 0xa8))();
        if (cVar1 != '\0') {
          return;
        }
        puVar4 = *(undefined8 **)(param_1 + 0x128);
      }
      lVar2 = FUN_140d7984c(puVar4,0);
      *param_2 = lVar2;
      if (param_2 != (longlong *)0x0) {
        sVar3 = *(short *)((longlong)param_2 + 10);
        while ((sVar3 != -1 &&
               (plVar5 = (longlong *)((longlong)sVar3 * 0x30 + **(longlong **)(param_1 + 0x18)),
               plVar5 != (longlong *)0x0))) {
          *plVar5 = *plVar5 + lVar2;
          sVar3 = *(short *)((longlong)plVar5 + 10);
        }
      }
    }
  }
  return;
}



// FUNCTION 143d3ed4c FUN_143d3ed4c body=128 status=ok
// SIG undefined FUN_143d3ed4c(void)

void FUN_143d3ed4c(longlong param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  
  if (((param_4 == '\0') && (FUN_1400e4a30(), (short)param_2[1] == -1)) && (*param_2 != 0)) {
    if (((*(uint *)(param_1 + 0x10) != (uint)((*(byte *)((longlong)param_2 + 0xe) >> 1 & 1) != 0))
        && ((*(longlong *)(param_1 + 8) == 0 ||
            (*(char *)(*(longlong *)(param_1 + 8) + 0xd68) == '\x01')))) &&
       (cVar1 = (**(code **)(*DAT_14cb8a878 + 0xa8))(), cVar1 != '\0')) {
      return;
    }
    if (**(longlong **)(param_1 + 0x138) != 0) {
      FUN_14061dc9e(**(longlong **)(param_1 + 0x138),*param_2);
      return;
    }
  }
  return;
}



// FUNCTION 143d3edcc FUN_143d3edcc body=65 status=ok
// SIG undefined FUN_143d3edcc(void)

void FUN_143d3edcc(undefined8 param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  FUN_1400e4a30();
  if (param_4 != '\0') {
    FUN_143d3ee0e(param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 143d3ee0e FUN_143d3ee0e body=449 status=ok
// SIG undefined FUN_143d3ee0e(void)

void FUN_143d3ee0e(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint local_50 [6];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 0x120) + (param_3 & 0xff) * 8);
  pbVar1 = (byte *)*puVar7;
  plVar8 = &DAT_14c9a1288;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
    plVar8 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
  }
  local_60 = *(undefined8 *)(param_2 + 0x14);
  local_58 = *(undefined4 *)(param_2 + 0x1c);
  FUN_1448075d0();
  if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
    plVar5 = plVar8 + 8;
    if ((longlong *)plVar8[9] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar8[9];
    }
    iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar8[10] - 1U & local_50[0]) * 4);
    if (iVar4 != -1) {
      do {
        lVar6 = *plVar8 + (longlong)iVar4 * 0x40;
        if (*(uint *)(*plVar8 + (longlong)iVar4 * 0x40) == local_50[0]) goto LAB_143d3eebe;
        iVar4 = *(int *)(lVar6 + 0x38);
      } while (iVar4 != -1);
    }
  }
  lVar6 = 0;
LAB_143d3eebe:
  puVar3 = (undefined8 *)(lVar6 + 0x28);
  if (lVar6 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (*(short *)(param_2 + 8) == -1) {
    if ((*(uint *)(param_1 + 0x10) == (uint)((*(byte *)(param_2 + 0xe) >> 1 & 1) != 0)) ||
       (((*(longlong *)(param_1 + 8) != 0 && (*(char *)(*(longlong *)(param_1 + 8) + 0xd68) == '\0')
         ) || (cVar2 = (**(code **)(*DAT_14cb8a878 + 0xa8))(), cVar2 == '\0')))) goto LAB_143d3ef9e;
  }
  else {
    pbVar1 = (byte *)*puVar3;
    puVar3 = &DAT_14c9a1288;
    if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
      puVar3 = (undefined8 *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((*(int *)(puVar3 + 2) != *(int *)((longlong)puVar3 + 0x3c)) &&
       (cVar2 = FUN_143d3efd0(param_1,param_2), cVar2 != '\0')) goto LAB_143d3ef9e;
  }
  pbVar1 = (byte *)*puVar7;
  puVar7 = &DAT_14c9a1288;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
    puVar7 = (undefined8 *)(*(longlong *)(pbVar1 + 8) + 0x18);
  }
  local_70 = *(undefined8 *)(param_2 + 0x14);
  local_68 = *(undefined4 *)(param_2 + 0x1c);
  FUN_1448075d0(local_50);
  FUN_14045886c(puVar7,local_50);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_143d3ef9e:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d3efd0 FUN_143d3efd0 body=166 status=ok
// SIG undefined FUN_143d3efd0(void)

ulonglong FUN_143d3efd0(longlong param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong unaff_RDI;
  undefined7 uVar5;
  
  sVar2 = *(short *)(param_2 + 8);
  if (sVar2 != -1) {
    lVar3 = **(longlong **)(param_1 + 0x18);
    do {
      lVar4 = (longlong)sVar2 * 0x30;
      if (*(longlong *)(lVar3 + lVar4) != 0) {
        uVar5 = (undefined7)(unaff_RDI >> 8);
        if (*(short *)(lVar3 + lVar4 + 8) == -1) {
          unaff_RDI = CONCAT71(uVar5,1);
          if ((*(uint *)(param_1 + 0x10) == (uint)((*(byte *)(lVar3 + lVar4 + 0xe) >> 1 & 1) != 0))
             || ((*(longlong *)(param_1 + 8) != 0 &&
                 (*(char *)(*(longlong *)(param_1 + 8) + 0xd68) != '\x01')))) goto LAB_143d3f067;
          cVar1 = (**(code **)(*DAT_14cb8a878 + 0xa8))();
          if (cVar1 == '\0') goto LAB_143d3f067;
        }
        else {
          cVar1 = FUN_143d3efd0(param_1);
          if (cVar1 != '\0') {
            unaff_RDI = CONCAT71(uVar5,1);
            goto LAB_143d3f067;
          }
        }
      }
      lVar3 = **(longlong **)(param_1 + 0x18);
      sVar2 = *(short *)(lVar3 + 0xc + lVar4);
    } while (sVar2 != -1);
  }
  unaff_RDI = 0;
LAB_143d3f067:
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 143d3f17a FUN_143d3f17a body=106 status=ok
// SIG undefined FUN_143d3f17a(void)

undefined8 * FUN_143d3f17a(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
LAB_143d3f1ca:
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_143d3f1ca;
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
    if (*param_2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      FUN_148848020(*param_2,param_1);
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
  return param_1;
}



// FUNCTION 143d3f1fe FUN_143d3f1fe body=1946 status=ok
// SIG undefined FUN_143d3f1fe(void)

uint * FUN_143d3f1fe(uint *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  switch(param_3) {
  case '\x01':
    uVar3 = 0;
    if ((*param_2 != 0) && (param_2[1] != 0)) {
      uVar3 = (uint)(0 < *(int *)(param_2[1] + 8));
    }
    *(undefined2 *)(param_1 + 6) = 4;
    *param_1 = uVar3;
    uVar7 = 1;
    goto LAB_143d3f765;
  case '\x02':
  case '\x03':
  case '\x05':
    break;
  case '\x04':
    plVar8 = (longlong *)param_2[1];
    if (plVar8 != (longlong *)0x0) {
      iVar4 = (int)plVar8[1];
      do {
        if (iVar4 == 0) goto switchD_143d3f236_caseD_2;
        LOCK();
        iVar2 = (int)plVar8[1];
        bVar12 = iVar4 == iVar2;
        if (bVar12) {
          *(int *)(plVar8 + 1) = iVar4 + 1;
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
        UNLOCK();
      } while (!bVar12);
      lVar10 = *param_2;
      if (lVar10 != 0) {
        if ((((((*(int *)(lVar10 + 0x44) == 0) || (uVar3 = *(uint *)(lVar10 + 0x40), (int)uVar3 < 0)
               ) || (DAT_14c9647dc <= (int)uVar3)) ||
             ((plVar9 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
              plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(lVar10 + 0x44))))) ||
            ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) ||
           (plVar9 = (longlong *)*plVar9, plVar9 == (longlong *)0x0)) {
          if ((((*(int *)(lVar10 + 0x3c) == 0) || (uVar3 = *(uint *)(lVar10 + 0x38), (int)uVar3 < 0)
               ) || ((DAT_14c9647dc <= (int)uVar3 ||
                     (((plVar9 = (longlong *)
                                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                       plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(lVar10 + 0x3c))) ||
                      ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))))) || (*plVar9 == 0)) {
            local_48 = *(undefined8 *)(lVar10 + 0x60);
            uVar13 = *(undefined4 *)(lVar10 + 0x50);
            uVar14 = *(undefined4 *)(lVar10 + 0x54);
            uVar15 = *(undefined4 *)(lVar10 + 0x58);
            uVar16 = *(undefined4 *)(lVar10 + 0x5c);
          }
          else {
            lVar11 = *(longlong *)(*plVar9 + 0x1c8);
            if (lVar11 != 0) {
              local_58 = *(undefined8 *)(lVar11 + 0x260);
              uStack_50 = *(undefined8 *)(lVar11 + 0x268);
              local_48 = *(undefined8 *)(lVar11 + 0x270);
              goto LAB_143d3f637;
            }
            local_48 = DAT_14c8464f0;
            uVar13 = (undefined4)DAT_14c8464e0;
            uVar14 = DAT_14c8464e0._4_4_;
            uVar15 = (undefined4)DAT_14c8464e8;
            uVar16 = DAT_14c8464e8._4_4_;
          }
          local_58 = CONCAT44(uVar14,uVar13);
          uStack_50 = CONCAT44(uVar16,uVar15);
        }
        else {
          (**(code **)(*plVar9 + 0x4b0))(plVar9,&local_58,*(undefined8 *)(lVar10 + 0x48));
        }
LAB_143d3f637:
        *(undefined2 *)(param_1 + 6) = 0x18;
        *param_1 = (uint)local_58;
        param_1[1] = local_58._4_4_;
        param_1[2] = (uint)uStack_50;
        param_1[3] = uStack_50._4_4_;
        *(undefined8 *)(param_1 + 4) = local_48;
        *(undefined1 *)(param_1 + 8) = 4;
      }
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
joined_r0x000143d3f75b:
      if (lVar10 != 0) goto LAB_143d3f768;
    }
    break;
  case '\x06':
    plVar8 = (longlong *)param_2[1];
    if (plVar8 != (longlong *)0x0) {
      iVar4 = (int)plVar8[1];
      do {
        if (iVar4 == 0) goto switchD_143d3f236_caseD_2;
        LOCK();
        iVar2 = (int)plVar8[1];
        bVar12 = iVar4 == iVar2;
        if (bVar12) {
          *(int *)(plVar8 + 1) = iVar4 + 1;
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
        iVar2 = DAT_14c9647dc;
        lVar11 = DAT_14c9647c8;
        UNLOCK();
      } while (!bVar12);
      lVar10 = *param_2;
      bVar12 = true;
      if (lVar10 != 0) {
        iVar4 = *(int *)(lVar10 + 0x44);
        if ((((iVar4 == 0) || (uVar3 = *(uint *)(lVar10 + 0x40), (int)uVar3 < 0)) ||
            (DAT_14c9647dc <= (int)uVar3)) ||
           (((plVar9 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar9 == (longlong *)0x0 || ((int)plVar9[2] != iVar4)) ||
            ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) {
LAB_143d3f3d2:
          if (((*(int *)(lVar10 + 0x3c) != 0) && (uVar3 = *(uint *)(lVar10 + 0x38), -1 < (int)uVar3)
              ) && (((int)uVar3 < DAT_14c9647dc &&
                    (((plVar9 = (longlong *)
                                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                      plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(lVar10 + 0x3c))) &&
                     ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))))) {
            lVar5 = *plVar9;
            uVar7 = 7;
            if (lVar5 != 0) goto LAB_143d3f446;
          }
          if (((iVar4 != 0) && (uVar3 = *(uint *)(lVar10 + 0x40), -1 < (int)uVar3)) &&
             ((((int)uVar3 < DAT_14c9647dc &&
               ((plVar9 = (longlong *)
                          ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar4)))) &&
              (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0)))))) {
            lVar5 = *(longlong *)(*plVar9 + 0xa8);
            uVar7 = 7;
            if (lVar5 != 0) goto LAB_143d3f446;
          }
        }
        else {
          lVar5 = *plVar9;
          uVar7 = 0xe;
          if (lVar5 == 0) goto LAB_143d3f3d2;
LAB_143d3f446:
          *(undefined2 *)(param_1 + 6) = 8;
          param_1[1] = 0;
          uVar3 = *(uint *)(lVar5 + 0xc);
          *param_1 = uVar3;
          if ((int)uVar3 < iVar2) {
            lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(lVar11 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          uVar3 = *(uint *)(lVar11 + 0x10);
          if (*(uint *)(lVar11 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            uVar6 = DAT_14c964868 + 1;
            bVar12 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar12) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar6);
            }
            LOCK();
            uVar3 = *(uint *)(lVar11 + 0x10);
            bVar12 = uVar3 == 0;
            if (bVar12) {
              *(uint *)(lVar11 + 0x10) = uVar6;
              uVar3 = 0;
            }
            UNLOCK();
            if (bVar12) {
              uVar3 = uVar6;
            }
          }
          param_1[1] = uVar3;
          *(undefined1 *)(param_1 + 8) = uVar7;
          bVar12 = false;
        }
      }
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      if (!bVar12) goto LAB_143d3f768;
    }
    break;
  case '\a':
    plVar8 = (longlong *)param_2[1];
    if (plVar8 != (longlong *)0x0) {
      iVar4 = (int)plVar8[1];
      do {
        if (iVar4 == 0) goto switchD_143d3f236_caseD_2;
        LOCK();
        iVar2 = (int)plVar8[1];
        bVar12 = iVar4 == iVar2;
        if (bVar12) {
          *(int *)(plVar8 + 1) = iVar4 + 1;
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
        iVar2 = DAT_14c9647dc;
        lVar11 = DAT_14c9647c8;
        UNLOCK();
      } while (!bVar12);
      lVar10 = *param_2;
      if (lVar10 != 0) {
        if (((*(int *)(lVar10 + 0x3c) == 0) || (uVar3 = *(uint *)(lVar10 + 0x38), (int)uVar3 < 0))
           || ((DAT_14c9647dc <= (int)uVar3 ||
               ((((plVar9 = (longlong *)
                            ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                  plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(lVar10 + 0x3c))) ||
                 ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) || (lVar5 = *plVar9, lVar5 == 0))))))
        {
          if (((*(int *)(lVar10 + 0x44) == 0) || (uVar3 = *(uint *)(lVar10 + 0x40), (int)uVar3 < 0))
             || ((DAT_14c9647dc <= (int)uVar3 ||
                 (((plVar9 = (longlong *)
                             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                   plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(lVar10 + 0x44))) ||
                  (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (*plVar9 == 0)))))))) {
            *(undefined2 *)(param_1 + 6) = 8;
            param_1[1] = 0;
          }
          else {
            lVar5 = *(longlong *)(*plVar9 + 0xa8);
            *(undefined2 *)(param_1 + 6) = 8;
            param_1[1] = 0;
            if (lVar5 != 0) goto LAB_143d3f709;
          }
          *param_1 = 0;
          uVar3 = 0;
        }
        else {
          *(undefined2 *)(param_1 + 6) = 8;
          param_1[1] = 0;
LAB_143d3f709:
          uVar3 = *(uint *)(lVar5 + 0xc);
          *param_1 = uVar3;
          if ((int)uVar3 < iVar2) {
            lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(lVar11 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          uVar3 = *(uint *)(lVar11 + 0x10);
          if (*(uint *)(lVar11 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            uVar6 = DAT_14c964868 + 1;
            bVar12 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar12) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar6);
            }
            LOCK();
            uVar3 = *(uint *)(lVar11 + 0x10);
            bVar12 = uVar3 == 0;
            if (bVar12) {
              *(uint *)(lVar11 + 0x10) = uVar6;
              uVar3 = 0;
            }
            UNLOCK();
            if (bVar12) {
              uVar3 = uVar6;
            }
          }
        }
        param_1[1] = uVar3;
        *(undefined1 *)(param_1 + 8) = 7;
      }
LAB_143d3f73b:
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto joined_r0x000143d3f75b;
    }
    break;
  default:
    if ((param_3 == '\x0e') && (plVar8 = (longlong *)param_2[1], plVar8 != (longlong *)0x0)) {
      iVar4 = (int)plVar8[1];
      do {
        if (iVar4 == 0) goto switchD_143d3f236_caseD_2;
        LOCK();
        iVar2 = (int)plVar8[1];
        bVar12 = iVar4 == iVar2;
        if (bVar12) {
          *(int *)(plVar8 + 1) = iVar4 + 1;
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
        iVar2 = DAT_14c9647dc;
        lVar11 = DAT_14c9647c8;
        UNLOCK();
      } while (!bVar12);
      lVar10 = *param_2;
      if (lVar10 == 0) goto LAB_143d3f73b;
      if ((((*(int *)(lVar10 + 0x44) == 0) || (uVar3 = *(uint *)(lVar10 + 0x40), (int)uVar3 < 0)) ||
          (DAT_14c9647dc <= (int)uVar3)) ||
         (((plVar9 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(lVar10 + 0x44))) ||
          ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) {
        *(undefined2 *)(param_1 + 6) = 8;
        param_1[1] = 0;
LAB_143d3f850:
        *param_1 = 0;
        uVar3 = 0;
      }
      else {
        lVar5 = *plVar9;
        *(undefined2 *)(param_1 + 6) = 8;
        param_1[1] = 0;
        if (lVar5 == 0) goto LAB_143d3f850;
        uVar3 = *(uint *)(lVar5 + 0xc);
        *param_1 = uVar3;
        if ((int)uVar3 < iVar2) {
          lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(lVar11 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        uVar3 = *(uint *)(lVar11 + 0x10);
        if (*(uint *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          uVar6 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar6);
          }
          LOCK();
          uVar3 = *(uint *)(lVar11 + 0x10);
          bVar12 = uVar3 == 0;
          if (bVar12) {
            *(uint *)(lVar11 + 0x10) = uVar6;
            uVar3 = 0;
          }
          UNLOCK();
          if (bVar12) {
            uVar3 = uVar6;
          }
        }
      }
      param_1[1] = uVar3;
      *(undefined1 *)(param_1 + 8) = 0xe;
      goto LAB_143d3f73b;
    }
  }
switchD_143d3f236_caseD_2:
  *(undefined2 *)(param_1 + 6) = 0;
  uVar7 = 0;
LAB_143d3f765:
  *(undefined1 *)(param_1 + 8) = uVar7;
LAB_143d3f768:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143d3f9c0 FUN_143d3f9c0 body=246 status=ok
// SIG undefined FUN_143d3f9c0(void)

void FUN_143d3f9c0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  longlong *plVar9;
  
  if (DAT_14cb7c628 != DAT_14cb7c654) {
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    puVar8 = &DAT_14cb7c658;
    if (DAT_14cb7c660 != (undefined *)0x0) {
      puVar8 = DAT_14cb7c660;
    }
    iVar2 = *(int *)(puVar8 + (ulonglong)(DAT_14cb7c668 - 1U & (uint)*(byte *)(puVar4 + 1)) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14cb7c620 + (longlong)iVar2 * 0x20;
      if (*(byte *)(DAT_14cb7c620 + (longlong)iVar2 * 0x20) == *(byte *)(puVar4 + 1)) {
        plVar9 = (longlong *)(lVar1 + 8);
        if (plVar9 == (longlong *)0x0 || lVar1 == 0) {
          return;
        }
        puVar5 = (uint *)*plVar9;
        if (puVar5 == (uint *)0x0) {
          return;
        }
        if (puVar5[1] != 0) {
          uVar3 = *puVar5;
          plVar6 = (longlong *)0x0;
          if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_143d3fa88;
          puVar7 = (undefined8 *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((puVar7 != (undefined8 *)0x0) &&
             ((*(uint *)(puVar7 + 2) == puVar5[1] && ((*(uint *)(puVar7 + 1) & 0x10200000) == 0))))
          {
            plVar6 = (longlong *)*puVar7;
            goto LAB_143d3fa88;
          }
        }
        plVar6 = (longlong *)0x0;
LAB_143d3fa88:
        (**(code **)(*plVar6 + 0x2f0))(plVar6,puVar4,1);
        lVar1 = *plVar9;
        *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + -1;
        *puVar4 = *(undefined8 *)(lVar1 + 0x10);
        *(undefined8 **)(lVar1 + 0x10) = puVar4;
        return;
      }
      iVar2 = *(int *)(lVar1 + 0x18);
    }
  }
  return;
}



// FUNCTION 143d3fab6 FUN_143d3fab6 body=29 status=ok
// SIG undefined FUN_143d3fab6(void)

undefined8 FUN_143d3fab6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d3fad4 FUN_143d3fad4 body=114 status=ok
// SIG undefined FUN_143d3fad4(void)

void FUN_143d3fad4(longlong *param_1,int param_2)

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



// FUNCTION 143d3fb46 FUN_143d3fb46 body=617 status=ok
// SIG undefined FUN_143d3fb46(void)

void FUN_143d3fb46(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_143d3fbc0;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_143d3fbc0:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar4 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x20;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x1c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x18 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 143d3fdb0 FUN_143d3fdb0 body=177 status=ok
// SIG undefined FUN_143d3fdb0(void)

void FUN_143d3fdb0(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar4 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar8 != -1) {
      lVar3 = *param_1;
      do {
        lVar9 = (longlong)iVar8 * 0x20;
        lVar2 = lVar3 + lVar9;
        if (*(int *)(lVar3 + lVar9) == param_2) {
          iVar7 = *(int *)((longlong)plVar4 + (longlong)*(int *)(lVar2 + 0x1c) * 4);
          if (iVar7 == iVar8) {
            puVar6 = (undefined4 *)((longlong)plVar4 + (longlong)*(int *)(lVar2 + 0x1c) * 4);
          }
          else {
            do {
              lVar5 = (longlong)iVar7;
              iVar7 = *(int *)(lVar3 + 0x18 + lVar5 * 0x20);
            } while (iVar7 != iVar8);
            puVar6 = (undefined4 *)(lVar5 * 0x20 + lVar3 + 0x18);
          }
          *puVar6 = *(undefined4 *)(lVar2 + 0x18);
          plVar4 = *(longlong **)(*param_1 + 0x10 + lVar9);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))();
            }
          }
          FUN_143d3fad4(param_1,iVar8);
          return;
        }
        iVar8 = *(int *)(lVar2 + 0x18);
      } while (iVar8 != -1);
    }
  }
  return;
}



// FUNCTION 143d3fe71 FUN_143d3fe71 body=77 status=ok
// SIG undefined FUN_143d3fe71(void)

void FUN_143d3fe71(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x40);
    do {
      FUN_140d59bf5(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -6) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143d3febe FUN_143d3febe body=58 status=ok
// SIG undefined FUN_143d3febe(void)

void FUN_143d3febe(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      FUN_144760e21(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143d3fef8 FUN_143d3fef8 body=363 status=ok
// SIG undefined FUN_143d3fef8(void)

void FUN_143d3fef8(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x48;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143d3ff8e;
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
LAB_143d3ff8e:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 143d40064 FUN_143d40064 body=265 status=ok
// SIG undefined FUN_143d40064(void)

void FUN_143d40064(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
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



// FUNCTION 143d4016e FUN_143d4016e body=1056 status=ok
// SIG undefined FUN_143d4016e(void)

void FUN_143d4016e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  int *piVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 local_70;
  int local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = *(int *)(param_2 + 1);
  local_98 = *param_2;
  plVar12 = (longlong *)*param_1;
  lVar2 = param_1[4];
  lVar6 = *plVar12;
  iVar1 = (int)plVar12[1];
  lVar10 = (longlong)iVar1;
  if (lVar10 != 0) {
    lVar13 = 0;
    do {
      if ((*(int *)(lVar6 + lVar13) == (int)local_98) && (*(int *)(lVar6 + 8 + lVar13) == local_90))
      goto LAB_143d402d2;
      lVar13 = lVar13 + 0xc;
    } while (lVar10 * 0xc != lVar13);
  }
  *(uint *)(plVar12 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar12 + 0xc) < iVar1 + 1U) {
    FUN_1446dd912(plVar12,iVar1);
    lVar6 = *plVar12;
  }
  *(int *)(lVar6 + 8 + lVar10 * 0xc) = local_90;
  *(undefined8 *)(lVar6 + lVar10 * 0xc) = local_98;
  lVar6 = FUN_140bc5192(*(undefined8 *)param_1[1]);
  if ((lVar6 != 0) && (cVar5 = FUN_14049edd8(lVar6), cVar5 == '\x01')) {
    local_88 = *(longlong *)(lVar6 + 0x10);
    local_80 = *(undefined4 *)(lVar6 + 0x18);
    FUN_1448075d0(&local_70);
    lVar10 = FUN_14060eaf6(&local_70);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x750) == '\0')) {
      if (*(longlong *)(lVar10 + 0x618) == 0) {
        cVar5 = FUN_14654da8c(*(undefined8 *)param_1[3],lVar6,0);
        if (cVar5 != '\0') {
          cVar5 = FUN_14654da8c(lVar2,lVar6,1);
          if ((cVar5 != '\0') &&
             (lVar13 = FUN_144976d68(lVar2,*(longlong *)(lVar6 + 0x58) + 0x10,1), lVar13 != 0)) {
            lVar13 = FUN_1403a09ea(lVar2,lVar13,&local_98,1);
            if (lVar13 != 0) {
              FUN_1461b48ba(lVar2,lVar13,lVar6);
              if ((longlong)*(int *)(lVar10 + 0x4d0) != 0) {
                plVar12 = *(longlong **)(lVar10 + 0x4c8);
                plVar11 = plVar12 + *(int *)(lVar10 + 0x4d0);
                do {
                  lVar6 = *plVar12;
                  if (lVar6 != 0) {
                    piVar8 = *(int **)(lVar6 + 8);
                    if (piVar8 == (int *)0x0) {
                      piVar8 = &DAT_14c9485f0;
                    }
                    if (((*piVar8 == 0) || (iVar1 = piVar8[1], iVar1 == 0)) ||
                       (*piVar8 == DAT_14c948000)) {
LAB_143d40551:
                      local_68 = DAT_14c948620;
                      local_70 = DAT_14c948618;
                    }
                    else {
                      if ((iVar1 < 2) && (piVar8[9] < 1)) {
                        piVar8 = piVar8 + 2;
                      }
                      else {
                        piVar8 = *(int **)(piVar8 + 6);
                      }
                      if (iVar1 < 1) goto LAB_143d40551;
                      local_68 = piVar8[2];
                      local_70 = *(undefined8 *)piVar8;
                    }
                    if ((*(longlong *)(lVar6 + 0x4d8) == 0 & *(byte *)(lVar6 + 0x750)) == 1) {
                      local_80 = DAT_14cb88800;
                      local_88 = DAT_14cb887f8;
                    }
                    else {
                      local_78 = *(longlong *)(lVar6 + 0x4d8);
                      FUN_1401533ba(&local_88,&local_78,1);
                    }
                    lVar10 = FUN_144976d68(lVar2,&local_88,1);
                    if (lVar10 != 0) {
                      plVar9 = (longlong *)FUN_1403a09ea(lVar2,lVar10,&local_70,1);
                      if (plVar9 != (longlong *)0x0) {
                        piVar8 = *(int **)(lVar6 + 8);
                        if (piVar8 == (int *)0x0) {
                          piVar8 = &DAT_14c9485f0;
                        }
                        if (((*piVar8 == 0) || (iVar1 = piVar8[1], iVar1 == 0)) ||
                           (*piVar8 == DAT_14c948000)) {
LAB_143d40567:
                          local_68 = DAT_14c948620;
                          local_70 = DAT_14c948618;
                        }
                        else {
                          if ((iVar1 < 2) && (piVar8[9] < 1)) {
                            piVar8 = piVar8 + 2;
                          }
                          else {
                            piVar8 = *(int **)(piVar8 + 6);
                          }
                          if (iVar1 < 1) goto LAB_143d40567;
                          local_68 = piVar8[2];
                          local_70 = *(undefined8 *)piVar8;
                        }
                        lVar6 = FUN_140bc5192(*(undefined8 *)param_1[1],&local_70);
                        if (lVar6 == 0) {
                          (**(code **)(*plVar9 + 8))(plVar9);
                          lVar6 = plVar9[0x10];
                          if ((longlong)(int)lVar6 != 0) {
                            lVar10 = plVar9[0xf];
                            lVar13 = 0;
                            do {
                              (**(code **)(**(longlong **)(lVar10 + lVar13) + 8))();
                              lVar13 = lVar13 + 8;
                            } while ((longlong)(int)lVar6 * 8 != lVar13);
                          }
                        }
                        else {
                          FUN_1461b48ba(lVar2,plVar9,lVar6);
                        }
                      }
                    }
                  }
                  plVar12 = plVar12 + 1;
                } while (plVar12 != plVar11);
              }
            }
          }
        }
      }
      else {
        puVar3 = (undefined8 *)param_1[2];
        local_88 = *(longlong *)(lVar10 + 0x618);
        FUN_1401533ba(&local_70,&local_88,1);
        pcVar4 = (code *)*puVar3;
        plVar12 = puVar3 + 4;
        if ((longlong *)puVar3[2] != (longlong *)0x0) {
          plVar12 = (longlong *)puVar3[2];
        }
        uVar7 = (**(code **)(*plVar12 + 8))(plVar12);
        (*pcVar4)(uVar7,&local_70);
      }
    }
  }
LAB_143d402d2:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d40590 FUN_143d40590 body=78 status=ok
// SIG undefined FUN_143d40590(void)

undefined8 * FUN_143d40590(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b400620;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143d405e4 FUN_143d405e4 body=29 status=ok
// SIG undefined FUN_143d405e4(void)

void FUN_143d405e4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143d40602 FUN_143d40602 body=29 status=ok
// SIG undefined FUN_143d40602(void)

undefined8 FUN_143d40602(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d40620 FUN_143d40620 body=2830 status=ok
// SIG undefined FUN_143d40620(void)

void FUN_143d40620(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint *puVar10;
  int *piVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong *plVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  bool bVar26;
  bool bVar27;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  longlong *local_e8;
  ulonglong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  longlong local_c0;
  int local_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  int local_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  longlong local_98 [2];
  uint local_88 [2];
  longlong local_80;
  uint *local_78;
  uint local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  param_2 = (longlong *)*param_2;
  plVar9 = (longlong *)*param_1;
  plVar13 = (longlong *)param_1[3];
  lVar7 = *plVar9;
  iVar18 = (int)plVar9[1];
  lVar17 = (longlong)iVar18;
  if (lVar17 != 0) {
    lVar21 = 0;
    do {
      if ((*(int *)(lVar7 + lVar21) == (int)param_2[2]) &&
         (*(int *)(lVar7 + 8 + lVar21) == (int)param_2[3])) goto LAB_143d40778;
      lVar21 = lVar21 + 0xc;
    } while (lVar17 * 0xc != lVar21);
  }
  plVar19 = param_2 + 2;
  *(uint *)(plVar9 + 1) = iVar18 + 1U;
  if (*(uint *)((longlong)plVar9 + 0xc) < iVar18 + 1U) {
    FUN_1446dd912(plVar9,iVar18);
    lVar7 = *plVar9;
  }
  *(int *)(lVar7 + 8 + lVar17 * 0xc) = (int)param_2[3];
  *(longlong *)(lVar7 + lVar17 * 0xc) = *plVar19;
  local_b0 = *plVar19;
  local_a8 = (int)param_2[3];
  FUN_1448075d0(local_98);
  lVar7 = FUN_14060eaf6(local_98);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (lVar7 != 0) {
    if (*(longlong *)(lVar7 + 0x618) == 0) {
      iVar18 = 0;
      local_78 = (uint *)0x0;
      local_70 = 0;
      local_98[0] = 0;
      local_98[1] = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      local_f0 = plVar13;
      local_e8 = param_1;
      FUN_14890bbc8(lVar7);
      uVar15 = local_70;
      local_d8 = lVar7;
      if (local_70 == 0) {
        uVar25 = 1;
        uVar23 = 0;
        uVar6 = 0;
      }
      else {
        puVar10 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar10 = local_88;
        }
        uVar6 = *puVar10;
        if (uVar6 == 0) {
          iVar18 = local_70 + 0x1e;
          if (-1 < (int)(local_70 - 1)) {
            iVar18 = local_70 - 1;
          }
          uVar23 = 0;
          uVar25 = (ulonglong)(uint)(iVar18 >> 5);
          if (iVar18 >> 5 < 1) {
            uVar25 = uVar23;
          }
          iVar18 = 0;
          do {
            if (uVar25 == uVar23) goto LAB_143d40886;
            iVar18 = iVar18 + 0x20;
            uVar6 = puVar10[uVar23 + 1];
            uVar23 = uVar23 + 1;
          } while (uVar6 == 0);
        }
        else {
          iVar18 = 0;
          uVar23 = 0;
        }
        uVar25 = (ulonglong)(-uVar6 & uVar6);
        uVar24 = uVar25 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar6 = (iVar18 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if ((int)local_70 <= (int)uVar6) {
          uVar6 = local_70;
        }
      }
      if (uVar6 != local_70) {
        uVar20 = 0xffffffff;
        do {
          lVar7 = *(longlong *)(local_98[0] + (longlong)(int)uVar6 * 0x10);
          if (lVar7 != 0) {
            piVar11 = *(int **)(lVar7 + 8);
            if (piVar11 == (int *)0x0) {
              piVar11 = &DAT_14c9485f0;
            }
            if (((*piVar11 == 0) || (iVar22 = piVar11[1], iVar22 == 0)) ||
               (*piVar11 == DAT_14c948000)) {
LAB_143d40a88:
              local_a8 = DAT_14c948620;
              local_b0 = DAT_14c948618;
            }
            else {
              if ((iVar22 < 2) && (piVar11[9] < 1)) {
                plVar9 = (longlong *)(piVar11 + 2);
              }
              else {
                plVar9 = *(longlong **)(piVar11 + 6);
              }
              if (iVar22 < 1) goto LAB_143d40a88;
              local_a8 = (int)plVar9[1];
              local_b0 = *plVar9;
            }
            lVar7 = FUN_140bc5192(*(undefined8 *)local_e8[1],&local_b0);
            if (lVar7 != 0) {
              puVar2 = (undefined8 *)local_e8[2];
              pcVar3 = (code *)*puVar2;
              plVar9 = puVar2 + 4;
              if ((longlong *)puVar2[2] != (longlong *)0x0) {
                plVar9 = (longlong *)puVar2[2];
              }
              local_b0 = lVar7;
              uVar8 = (**(code **)(*plVar9 + 8))();
              (*pcVar3)(uVar8,&local_b0);
            }
          }
          uVar20 = uVar20 & ~(uint)uVar25;
          puVar10 = local_78;
          if (local_78 == (uint *)0x0) {
            puVar10 = local_88;
          }
          iVar22 = (int)uVar23;
          lVar7 = (longlong)iVar22;
          uVar6 = puVar10[lVar7] & uVar20;
          if (uVar6 == 0) {
            iVar16 = local_70 + 0x1e;
            if (-1 < (int)(local_70 - 1)) {
              iVar16 = local_70 - 1;
            }
            iVar16 = iVar16 >> 5;
            iVar18 = iVar18 + 0x20;
            iVar14 = iVar16;
            if (iVar16 < iVar22) {
              iVar14 = iVar22;
            }
            if (iVar22 < iVar16) {
              lVar17 = 0;
              do {
                uVar6 = (puVar10 + lVar7 + 1)[lVar17];
                if (uVar6 != 0) {
                  uVar23 = (ulonglong)(iVar22 + (int)lVar17 + 1);
                  uVar20 = 0xffffffff;
                  goto LAB_143d40a55;
                }
                iVar18 = iVar18 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar14 - lVar7 != lVar17);
              uVar20 = 0xffffffff;
              iVar22 = iVar14;
            }
            uVar23 = (ulonglong)(iVar22 + 1);
            uVar6 = local_70;
          }
          else {
LAB_143d40a55:
            uVar25 = (ulonglong)(-uVar6 & uVar6);
            uVar24 = uVar25 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            uVar6 = (iVar18 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
            if ((int)local_70 <= (int)uVar6) {
              uVar6 = local_70;
            }
          }
        } while (uVar6 != uVar15);
      }
LAB_143d40886:
      plVar9 = local_f0;
      if (*(char *)(local_d8 + 0x750) == '\0') {
        uVar23 = 0;
        cVar5 = FUN_14654da8c(local_f0,param_2,0);
        if (cVar5 == '\0') {
          (**(code **)(*param_2 + 8))(param_2);
          lVar7 = param_2[0x10];
          if ((longlong)(int)lVar7 != 0) {
            lVar17 = param_2[0xf];
            lVar21 = 0;
            do {
              (**(code **)(**(longlong **)(lVar17 + lVar21) + 8))();
              lVar21 = lVar21 + 8;
            } while ((longlong)(int)lVar7 * 8 != lVar21);
          }
        }
        else {
          uVar25 = (ulonglong)local_70;
          if (local_70 == 0) {
            uVar24 = 1;
            iVar18 = 0;
            uVar15 = 0;
          }
          else {
            puVar10 = local_78;
            if (local_78 == (uint *)0x0) {
              puVar10 = local_88;
            }
            uVar15 = *puVar10;
            if (uVar15 == 0) {
              iVar18 = local_70 + 0x1e;
              if (-1 < (int)(local_70 - 1)) {
                iVar18 = local_70 - 1;
              }
              uVar23 = 0;
              uVar24 = (ulonglong)(uint)(iVar18 >> 5);
              if (iVar18 >> 5 < 1) {
                uVar24 = uVar23;
              }
              iVar18 = 0;
              do {
                if (uVar24 == uVar23) goto LAB_143d40bbd;
                iVar18 = iVar18 + 0x20;
                uVar15 = puVar10[uVar23 + 1];
                uVar23 = uVar23 + 1;
              } while (uVar15 == 0);
            }
            else {
              uVar23 = 0;
              iVar18 = 0;
            }
            uVar24 = (ulonglong)(-uVar15 & uVar15);
            uVar1 = uVar24 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            uVar15 = (iVar18 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
            if ((int)local_70 <= (int)uVar15) {
              uVar15 = local_70;
            }
          }
          if (uVar15 != local_70) {
            uVar20 = 0xffffffff;
            uVar6 = local_70;
            local_e0 = uVar25;
            do {
              lVar7 = *(longlong *)(local_98[0] + (longlong)(int)uVar15 * 0x10);
              if (lVar7 != 0) {
                piVar11 = *(int **)(lVar7 + 8);
                if (piVar11 == (int *)0x0) {
                  piVar11 = &DAT_14c9485f0;
                }
                if (((*piVar11 == 0) || (iVar22 = piVar11[1], iVar22 == 0)) ||
                   (*piVar11 == DAT_14c948000)) {
LAB_143d41001:
                  local_b8 = DAT_14c948620;
                  local_c0 = DAT_14c948618;
                }
                else {
                  if ((iVar22 < 2) && (piVar11[9] < 1)) {
                    plVar13 = (longlong *)(piVar11 + 2);
                  }
                  else {
                    plVar13 = *(longlong **)(piVar11 + 6);
                  }
                  if (iVar22 < 1) goto LAB_143d41001;
                  local_b8 = (int)plVar13[1];
                  local_c0 = *plVar13;
                }
                (**(code **)(*plVar9 + 0x78))(plVar9,&local_b0,&local_c0);
                if (local_b0 == 0) {
                  bVar26 = false;
                }
                else {
                  cVar5 = FUN_1405f61f4();
                  bVar26 = cVar5 == '\x06';
                }
                if ((*(longlong *)(lVar7 + 0x4d8) == 0 & *(byte *)(lVar7 + 0x750)) == 1) {
                  local_c8 = DAT_14cb88800;
                  local_d0 = DAT_14cb887f8;
                }
                else {
                  local_a0 = *(longlong *)(lVar7 + 0x4d8);
                  FUN_1401533ba(&local_d0,&local_a0,CONCAT71((int7)((ulonglong)&local_d0 >> 8),1));
                }
                (**(code **)(*local_f0 + 0x68))(local_f0,&local_c0,&local_d0);
                if (local_c0 == 0) {
                  bVar27 = false;
                }
                else {
                  cVar5 = FUN_140e192e0();
                  bVar27 = cVar5 == '\x02';
                }
                plVar9 = (longlong *)CONCAT44(uStack_b4,local_b8);
                if (!(bool)(bVar26 | bVar27)) {
                  if (plVar9 != (longlong *)0x0) {
                    LOCK();
                    plVar13 = plVar9 + 1;
                    *(int *)plVar13 = (int)*plVar13 + -1;
                    UNLOCK();
                    if ((int)*plVar13 == 0) {
                      (**(code **)*plVar9)(plVar9);
                      LOCK();
                      piVar11 = (int *)((longlong)plVar9 + 0xc);
                      *piVar11 = *piVar11 + -1;
                      UNLOCK();
                      if (*piVar11 == 0) {
                        (**(code **)(*plVar9 + 0x10))(plVar9);
                      }
                    }
                  }
                  plVar9 = (longlong *)CONCAT44(uStack_a4,local_a8);
                  if (plVar9 != (longlong *)0x0) {
                    LOCK();
                    plVar13 = plVar9 + 1;
                    *(int *)plVar13 = (int)*plVar13 + -1;
                    UNLOCK();
                    if ((int)*plVar13 == 0) {
                      (**(code **)*plVar9)(plVar9);
                      LOCK();
                      piVar11 = (int *)((longlong)plVar9 + 0xc);
                      *piVar11 = *piVar11 + -1;
                      UNLOCK();
                      if (*piVar11 == 0) {
                        (**(code **)(*plVar9 + 0x10))(plVar9);
                      }
                    }
                  }
                  goto LAB_143d408ca;
                }
                if (plVar9 != (longlong *)0x0) {
                  LOCK();
                  plVar13 = plVar9 + 1;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)*plVar13 == 0) {
                    (**(code **)*plVar9)(plVar9);
                    LOCK();
                    piVar11 = (int *)((longlong)plVar9 + 0xc);
                    *piVar11 = *piVar11 + -1;
                    UNLOCK();
                    if (*piVar11 == 0) {
                      (**(code **)(*plVar9 + 0x10))(plVar9);
                    }
                  }
                }
                plVar9 = local_f0;
                plVar13 = (longlong *)CONCAT44(uStack_a4,local_a8);
                uVar25 = local_e0;
                uVar6 = local_70;
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  plVar12 = plVar13 + 1;
                  *(int *)plVar12 = (int)*plVar12 + -1;
                  UNLOCK();
                  if ((int)*plVar12 == 0) {
                    (**(code **)*plVar13)(plVar13);
                    LOCK();
                    piVar11 = (int *)((longlong)plVar13 + 0xc);
                    *piVar11 = *piVar11 + -1;
                    UNLOCK();
                    uVar25 = local_e0;
                    uVar6 = local_70;
                    if (*piVar11 == 0) {
                      (**(code **)(*plVar13 + 0x10))(plVar13);
                      uVar25 = local_e0;
                      uVar6 = local_70;
                    }
                  }
                }
              }
              uVar20 = uVar20 & ~(uint)uVar24;
              puVar10 = local_78;
              if (local_78 == (uint *)0x0) {
                puVar10 = local_88;
              }
              iVar22 = (int)uVar23;
              lVar7 = (longlong)iVar22;
              uVar15 = puVar10[lVar7] & uVar20;
              if (uVar15 == 0) {
                iVar16 = uVar6 + 0x1e;
                if (-1 < (int)(uVar6 - 1)) {
                  iVar16 = uVar6 - 1;
                }
                iVar16 = iVar16 >> 5;
                iVar18 = iVar18 + 0x20;
                iVar14 = iVar16;
                if (iVar16 < iVar22) {
                  iVar14 = iVar22;
                }
                if (iVar22 < iVar16) {
                  lVar17 = 0;
                  do {
                    uVar15 = (puVar10 + lVar7 + 1)[lVar17];
                    if (uVar15 != 0) {
                      uVar23 = (ulonglong)(iVar22 + (int)lVar17 + 1);
                      uVar20 = 0xffffffff;
                      goto LAB_143d40fcf;
                    }
                    iVar18 = iVar18 + 0x20;
                    lVar17 = lVar17 + 1;
                  } while (iVar14 - lVar7 != lVar17);
                  uVar20 = 0xffffffff;
                  iVar22 = iVar14;
                }
                uVar23 = (ulonglong)(iVar22 + 1);
                plVar9 = local_f0;
                uVar25 = local_e0;
                uVar15 = uVar6;
              }
              else {
LAB_143d40fcf:
                uVar24 = (ulonglong)(-uVar15 & uVar15);
                uVar1 = uVar24 * 2 + 1;
                lVar7 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                  }
                }
                uVar15 = (iVar18 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
                if ((int)uVar6 <= (int)uVar15) {
                  uVar15 = uVar6;
                }
              }
            } while (uVar15 != (uint)uVar25);
          }
LAB_143d40bbd:
          plVar9 = local_e8;
          puVar2 = (undefined8 *)local_e8[4];
          uVar8 = *puVar2;
          lVar7 = FUN_144976d68(uVar8,param_2[0xb] + 0x10,1);
          if ((lVar7 != 0) && (lVar7 = FUN_1403a09ea(uVar8,lVar7,plVar19,1), lVar7 != 0)) {
            FUN_1461b48ba(uVar8,lVar7,param_2);
            plVar9 = (longlong *)puVar2[1];
            iVar18 = (int)plVar9[1];
            *(uint *)(plVar9 + 1) = iVar18 + 1U;
            if (*(uint *)((longlong)plVar9 + 0xc) < iVar18 + 1U) {
              FUN_1446dd912(plVar9,iVar18);
            }
            lVar17 = *plVar9;
            *(undefined4 *)(lVar17 + 8 + (longlong)iVar18 * 0xc) = *(undefined4 *)(lVar7 + 0x18);
            *(undefined8 *)(lVar17 + (longlong)iVar18 * 0xc) = *(undefined8 *)(lVar7 + 0x10);
            (**(code **)(*param_2 + 8))(param_2);
            plVar9 = local_e8;
            lVar7 = param_2[0x10];
            if ((longlong)(int)lVar7 != 0) {
              lVar17 = param_2[0xf];
              lVar21 = 0;
              do {
                (**(code **)(**(longlong **)(lVar17 + lVar21) + 8))();
                lVar21 = lVar21 + 8;
              } while ((longlong)(int)lVar7 * 8 != lVar21);
            }
          }
          if ((longlong)*(int *)(local_d8 + 0x4d0) != 0) {
            plVar13 = *(longlong **)(local_d8 + 0x4c8);
            plVar19 = plVar13 + *(int *)(local_d8 + 0x4d0);
            do {
              if (*plVar13 != 0) {
                piVar11 = *(int **)(*plVar13 + 8);
                if (piVar11 == (int *)0x0) {
                  piVar11 = &DAT_14c9485f0;
                }
                if (((*piVar11 == 0) || (iVar18 = piVar11[1], iVar18 == 0)) ||
                   (*piVar11 == DAT_14c948000)) {
LAB_143d40d82:
                  local_a8 = DAT_14c948620;
                  local_b0 = DAT_14c948618;
                }
                else {
                  if ((iVar18 < 2) && (piVar11[9] < 1)) {
                    plVar12 = (longlong *)(piVar11 + 2);
                  }
                  else {
                    plVar12 = *(longlong **)(piVar11 + 6);
                  }
                  if (iVar18 < 1) goto LAB_143d40d82;
                  local_a8 = (int)plVar12[1];
                  local_b0 = *plVar12;
                }
                plVar12 = (longlong *)FUN_140bc5192(*(undefined8 *)plVar9[1],&local_b0);
                if (plVar12 != (longlong *)0x0) {
                  puVar2 = (undefined8 *)plVar9[4];
                  uVar8 = *puVar2;
                  lVar7 = FUN_144976d68(uVar8,plVar12[0xb] + 0x10,1);
                  if ((lVar7 != 0) && (lVar7 = FUN_1403a09ea(uVar8,lVar7,plVar12 + 2,1), lVar7 != 0)
                     ) {
                    FUN_1461b48ba(uVar8,lVar7,plVar12);
                    plVar4 = (longlong *)puVar2[1];
                    iVar18 = (int)plVar4[1];
                    *(uint *)(plVar4 + 1) = iVar18 + 1U;
                    if (*(uint *)((longlong)plVar4 + 0xc) < iVar18 + 1U) {
                      FUN_1446dd912(plVar4,iVar18);
                    }
                    lVar17 = *plVar4;
                    *(undefined4 *)(lVar17 + 8 + (longlong)iVar18 * 0xc) =
                         *(undefined4 *)(lVar7 + 0x18);
                    *(undefined8 *)(lVar17 + (longlong)iVar18 * 0xc) = *(undefined8 *)(lVar7 + 0x10)
                    ;
                    (**(code **)(*plVar12 + 8))(plVar12);
                    lVar7 = plVar12[0x10];
                    if ((longlong)(int)lVar7 != 0) {
                      lVar17 = plVar12[0xf];
                      lVar21 = 0;
                      do {
                        (**(code **)(**(longlong **)(lVar17 + lVar21) + 8))();
                        lVar21 = lVar21 + 8;
                      } while ((longlong)(int)lVar7 * 8 != lVar21);
                    }
                  }
                }
              }
              plVar13 = plVar13 + 1;
            } while (plVar13 != plVar19);
          }
        }
      }
      else {
        (**(code **)(*param_2 + 8))(param_2);
        lVar7 = param_2[0x10];
        if ((longlong)(int)lVar7 != 0) {
          lVar17 = param_2[0xf];
          lVar21 = 0;
          do {
            (**(code **)(**(longlong **)(lVar17 + lVar21) + 8))();
            lVar21 = lVar21 + 8;
          } while ((longlong)(int)lVar7 * 8 != lVar21);
        }
      }
LAB_143d408ca:
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1401bcc5a(local_98);
    }
    else {
      uVar8 = *(undefined8 *)param_1[1];
      local_b0 = *(longlong *)(lVar7 + 0x618);
      FUN_1401533ba(local_98,&local_b0,1);
      lVar7 = FUN_140bc5192(uVar8,local_98);
      if (lVar7 != 0) {
        puVar2 = (undefined8 *)param_1[2];
        pcVar3 = (code *)*puVar2;
        plVar9 = puVar2 + 4;
        if ((longlong *)puVar2[2] != (longlong *)0x0) {
          plVar9 = (longlong *)puVar2[2];
        }
        local_98[0] = lVar7;
        uVar8 = (**(code **)(*plVar9 + 8))();
        (*pcVar3)(uVar8,local_98);
      }
    }
  }
LAB_143d40778:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d41130 FUN_143d41130 body=78 status=ok
// SIG undefined FUN_143d41130(void)

undefined8 * FUN_143d41130(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b400640;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143d4117e FUN_143d4117e body=5 status=ok
// SIG undefined FUN_143d4117e(void)

longlong FUN_143d4117e(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143d41184 FUN_143d41184 body=29 status=ok
// SIG undefined FUN_143d41184(void)

void FUN_143d41184(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143d411a2 FUN_143d411a2 body=29 status=ok
// SIG undefined FUN_143d411a2(void)

undefined8 FUN_143d411a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d411c0 FUN_143d411c0 body=1050 status=ok
// SIG undefined FUN_143d411c0(void)

void FUN_143d411c0(undefined8 *param_1,int *param_2,undefined8 param_3,ulonglong *param_4,
                  byte *param_5)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  byte bVar17;
  byte bVar18;
  longlong *plVar19;
  byte bVar20;
  char cVar21;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  byte *local_90;
  undefined8 *local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  uint local_58;
  undefined1 local_51;
  byte local_50;
  byte local_4f;
  byte local_4e;
  char local_4d;
  undefined2 local_4c;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar18 = *param_5;
  piVar2 = (int *)*param_1;
  lVar3 = param_1[1];
  if (((*piVar2 == (int)DAT_14c948618) && (piVar2[2] == DAT_14c948620)) ||
     ((*param_2 == *piVar2 && (param_2[2] == piVar2[2])))) {
    local_58 = (uint)param_4[1];
    local_60 = *param_4;
    uVar8 = local_60;
    if (local_58 != 0) {
      uVar6 = local_58 >> 0xd ^ (int)local_60 - local_58;
      uVar7 = uVar6 << 8 ^ (-0x61c88647 - local_58) - uVar6;
      uVar9 = uVar7 >> 0xd ^ (local_58 - uVar6) - uVar7;
      uVar6 = uVar9 >> 0xc ^ (uVar6 - uVar7) - uVar9;
      uVar7 = uVar6 << 0x10 ^ (uVar7 - uVar9) - uVar6;
      uVar11 = uVar7 >> 5 ^ (uVar9 - uVar6) - uVar7;
      uVar9 = uVar11 >> 3 ^ (uVar6 - uVar7) - uVar11;
      uVar6 = uVar9 << 10 ^ (uVar7 - uVar11) - uVar9;
      uVar8 = (ulonglong)(uVar6 >> 0xf ^ uVar11 - (uVar9 + uVar6));
    }
    iVar5 = FUN_140e01bfc((longlong *)(lVar3 + 0x300),uVar8,&local_60);
    if (((iVar5 != -1) &&
        (lVar15 = (longlong)iVar5 * 0x20 + *(longlong *)(lVar3 + 0x300),
        plVar16 = (longlong *)(lVar15 + 0x10), plVar16 != (longlong *)0x0 && lVar15 != 0)) &&
       (*plVar16 != 0)) {
      memset((void *)param_1[2],0,0xfc);
      puVar4 = (undefined8 *)param_1[2];
      *puVar4 = *(undefined8 *)param_2;
      *(int *)(puVar4 + 1) = param_2[2];
      local_4c = local_4c & 0xff;
      local_4a = local_4a & 0xff;
      bVar20 = (bVar18 & 2) != 0;
      if ((bool)bVar20) {
        local_4c = 0x101;
      }
      cVar21 = (bVar18 & 1) != 0;
      if ((bool)cVar21) {
        local_4a = 0x101;
      }
      plVar19 = (longlong *)param_1[3];
      iVar5 = (int)plVar19[1];
      local_78 = param_3;
      if ((longlong)iVar5 != 0) {
        lVar15 = 0;
        do {
          if ((*(int *)(lVar15 + *plVar19) == *param_2) &&
             (*(int *)(lVar15 + *plVar19 + 8) == param_2[2])) {
            bVar17 = 1;
            bVar18 = 1;
            goto LAB_143d4154f;
          }
          lVar15 = lVar15 + 0xc;
        } while ((longlong)iVar5 * 0xc != lVar15);
      }
      uVar6 = *(uint *)*plVar16;
      uVar7 = ((uint *)*plVar16)[2];
      uVar9 = uVar6;
      if (uVar7 != 0) {
        uVar9 = uVar7 >> 0xd ^ uVar6 - uVar7;
        uVar11 = uVar9 << 8 ^ (-0x61c88647 - uVar7) - uVar9;
        uVar12 = uVar11 >> 0xd ^ (uVar7 - uVar9) - uVar11;
        uVar9 = uVar12 >> 0xc ^ (uVar9 - uVar11) - uVar12;
        uVar14 = uVar9 << 0x10 ^ (uVar11 - uVar12) - uVar9;
        uVar11 = uVar14 >> 5 ^ (uVar12 - uVar9) - uVar14;
        uVar12 = uVar11 >> 3 ^ (uVar9 - uVar14) - uVar11;
        uVar9 = uVar12 << 10 ^ (uVar14 - uVar11) - uVar12;
        uVar9 = uVar9 >> 0xf ^ uVar11 - (uVar12 + uVar9);
      }
      if (*(int *)(lVar3 + 0x280) != *(int *)(lVar3 + 0x2ac)) {
        lVar15 = lVar3 + 0x2b0;
        if (*(longlong *)(lVar3 + 0x2b8) != 0) {
          lVar15 = *(longlong *)(lVar3 + 0x2b8);
        }
        iVar10 = *(int *)(lVar15 + (ulonglong)(*(int *)(lVar3 + 0x2c0) - 1U & uVar9) * 4);
        if (iVar10 != -1) {
          lVar15 = *(longlong *)(lVar3 + 0x278);
          do {
            lVar13 = (longlong)iVar10 * 0x20;
            if ((*(uint *)(lVar15 + lVar13) == uVar6) &&
               (lVar1 = lVar15 + lVar13, *(uint *)(lVar1 + 8) == uVar7)) {
              if ((undefined8 *)(lVar1 + 0x10) != (undefined8 *)0x0 && lVar1 != 0) {
                FUN_143d37764(&local_4c,*(undefined8 *)(lVar1 + 0x10));
                plVar19 = (longlong *)param_1[3];
                iVar5 = (int)plVar19[1];
              }
              break;
            }
            iVar10 = *(int *)(lVar15 + 0x18 + lVar13);
          } while (iVar10 != -1);
        }
      }
      *(uint *)(plVar19 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)plVar19 + 0xc) < iVar5 + 1U) {
        FUN_1446dd912(plVar19,iVar5);
      }
      lVar15 = *plVar19;
      *(int *)(lVar15 + 8 + (longlong)iVar5 * 0xc) = param_2[2];
      *(undefined8 *)(lVar15 + (longlong)iVar5 * 0xc) = *(undefined8 *)param_2;
      local_70 = param_1[2];
      bVar18 = (byte)local_4c;
      bVar20 = local_4c._1_1_;
      cVar21 = local_4a._1_1_;
      bVar17 = (byte)local_4a;
      local_50 = 0;
      if (local_4a._1_1_ != '\0') {
        local_50 = (byte)local_4a;
      }
      local_50 = local_50 | ((byte)local_4c & local_4c._1_1_) * '\x02';
      local_51 = 0;
      (**(code **)param_1[4])(((undefined8 *)param_1[4])[1]);
LAB_143d4154f:
      local_70 = *(undefined8 *)param_1[4];
      local_68 = ((undefined8 *)param_1[4])[1];
      if (bVar20 != 0) {
        local_50 = bVar18;
      }
      if (cVar21 != '\0') {
        local_4e = bVar17;
      }
      local_98 = param_1[2];
      local_88 = &local_70;
      local_90 = &local_50;
      local_4f = bVar20;
      local_4d = cVar21;
      FUN_143d373dc(lVar3,*plVar16,local_78,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4164c FUN_143d4164c body=12 status=ok
// SIG undefined FUN_143d4164c(void)

void FUN_143d4164c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d41655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143d41658 FUN_143d41658 body=29 status=ok
// SIG undefined FUN_143d41658(void)

undefined8 FUN_143d41658(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d41676 FUN_143d41676 body=68 status=ok
// SIG undefined FUN_143d41676(void)

undefined8 * FUN_143d41676(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4006f0;
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



// FUNCTION 143d416be FUN_143d416be body=83 status=ok
// SIG undefined FUN_143d416be(void)

undefined8 FUN_143d416be(longlong param_1)

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



// FUNCTION 143d4172e FUN_143d4172e body=76 status=ok
// SIG undefined FUN_143d4172e(void)

void FUN_143d4172e(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  FUN_140c882c0(*param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d4179a FUN_143d4179a body=12 status=ok
// SIG undefined FUN_143d4179a(void)

void FUN_143d4179a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d417a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143d417a6 FUN_143d417a6 body=29 status=ok
// SIG undefined FUN_143d417a6(void)

undefined8 FUN_143d417a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d417c4 FUN_143d417c4 body=68 status=ok
// SIG undefined FUN_143d417c4(void)

undefined8 * FUN_143d417c4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4007a0;
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



// FUNCTION 143d41808 FUN_143d41808 body=1232 status=ok
// SIG undefined FUN_143d41808(void)

void FUN_143d41808(longlong *param_1,longlong *param_2,byte *param_3,byte *param_4)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  short sVar20;
  int iVar21;
  short sVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 local_80;
  undefined2 uStack_7e;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  bVar13 = *param_4;
  uVar26 = (ulonglong)*param_3;
  lVar4 = param_1[1];
  if (uVar26 == 0) {
    uVar26 = 0;
    sVar22 = -1;
  }
  else {
    sVar22 = *(short *)(*param_1 + (ulonglong)(*param_3 - 1) * 4);
  }
  local_c0 = *(undefined4 *)(*param_2 + 8 + uVar26 * 0xc);
  local_c8 = *(undefined8 *)(*param_2 + uVar26 * 0xc);
  plVar1 = (longlong *)(lVar4 + 0x28);
  local_b0 = 0;
  uStack_a8 = 0xffffffffffff;
  local_a0 = CONCAT31(local_a0._1_3_,0xff);
  local_80 = 0;
  uStack_7e = 0;
  uStack_7c = 0;
  FUN_1401533ba(&uStack_9c,&local_80,1);
  uVar5 = uStack_a8;
  local_90 = DAT_14c948618;
  uStack_88 = DAT_14c948620;
  uStack_94 = local_c0;
  uStack_9c = local_c8;
  uStack_a8._0_4_ = CONCAT22(sVar22,(undefined2)uStack_a8);
  uVar6 = uStack_a8;
  uStack_a8._6_1_ = SUB81(uVar5,6);
  bVar7 = uStack_a8._6_1_ & 0xfd;
  uStack_a8._7_1_ = SUB81(uVar5,7);
  uStack_a8._0_7_ = CONCAT16((bVar13 & 2) >> 1 | bVar13 * '\x02' & 3 | bVar7,(int6)uVar6);
  local_d0 = param_1;
  if (*(int *)(lVar4 + 0x5c) == 0) {
    iVar21 = *(int *)(lVar4 + 0x30);
    *(int *)(lVar4 + 0x30) = iVar21 + 1;
    if (*(int *)(lVar4 + 0x34) == iVar21) {
      FUN_140044672(plVar1,iVar21);
    }
    iVar14 = *(int *)(lVar4 + 0x50);
    if (iVar14 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar8 = iVar14 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    lVar18 = lVar4 + 0x38;
    iVar15 = iVar14 + 1;
    iVar23 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar23 = iVar14;
    }
    if (iVar23 >> 5 == iVar8) {
      *(int *)(lVar4 + 0x50) = iVar15;
    }
    else {
      if (*(int *)(lVar4 + 0x54) <= iVar14) {
        iVar8 = iVar14;
        if (iVar14 + 0x20U < 0xa0) {
          iVar15 = 0x80;
        }
        else {
          uVar25 = iVar14 + 0x20U >> 5;
          if (*(int *)(lVar4 + 0x54) + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar25) {
              uVar17 = uVar25;
            }
          }
          else {
            uVar17 = uVar25 + (uVar25 * 3 >> 3) + 0x10;
          }
          uVar12 = (ulonglong)(uVar17 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar9 = (uint)(uVar12 + 0xf);
              if (uVar17 < 0x1ffd) {
                uVar12 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar12 + 0xf >> 4]];
              }
              else {
                uVar16 = (ulonglong)(uVar9 & 0xfffffff0);
                if (uVar16 < 0x7ff1) {
                  bVar13 = (&DAT_14c841e00)[uVar9 >> 4];
                  uVar19 = 0x32;
                  if (0x32 < bVar13) {
                    uVar19 = (ulonglong)bVar13;
                  }
                  uVar24 = 0x32 - (ulonglong)bVar13;
                  do {
                    uVar12 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar24 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar24 & 0xffffffff] & 0xf) == 0) goto LAB_143d41bb8;
                    lVar11 = uVar19 + 1 + uVar24;
                    uVar24 = uVar24 - 1;
                  } while (lVar11 != 0x33);
                }
                uVar12 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar12 = (ulonglong)DAT_14c841df8;
                }
                uVar12 = -uVar12 & (uVar16 + uVar12) - 1;
              }
            }
            else {
              local_d8 = (ulonglong)uVar25;
              uVar12 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar12,0);
              uVar25 = (uint)local_d8;
              iVar8 = *(int *)(lVar4 + 0x50);
            }
          }
LAB_143d41bb8:
          iVar10 = (int)(uVar12 >> 2);
          iVar15 = -0x20;
          if ((int)uVar25 <= iVar10) {
            iVar15 = iVar10 << 5;
          }
        }
        *(int *)(lVar4 + 0x54) = iVar15;
        FUN_1446efbd8(lVar18,iVar8);
        iVar15 = *(int *)(lVar4 + 0x50) + 1;
      }
      iVar8 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar8 = iVar15;
      }
      *(int *)(lVar4 + 0x50) = iVar15;
      if (iVar15 % 0x20 != 0) {
        lVar11 = *(longlong *)(lVar4 + 0x48);
        if (*(longlong *)(lVar4 + 0x48) == 0) {
          lVar11 = lVar18;
        }
        bVar13 = -(char)(iVar15 % 0x20);
        *(uint *)(lVar11 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)(lVar11 + (longlong)(iVar8 >> 5) * 4) << (bVar13 & 0x1f)) >>
             (bVar13 & 0x1f);
      }
    }
    lVar11 = (longlong)iVar21;
    if (*(longlong *)(lVar4 + 0x48) != 0) {
      lVar18 = *(longlong *)(lVar4 + 0x48);
    }
    bVar13 = (byte)iVar14 & 0x1f;
    puVar2 = (uint *)(lVar18 + (longlong)(iVar23 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
  }
  else {
    iVar21 = *(int *)(lVar4 + 0x58);
    lVar11 = (longlong)iVar21;
    iVar14 = *(int *)(*(longlong *)(lVar4 + 0x28) + 4 + lVar11 * 0x30);
    *(int *)(lVar4 + 0x58) = iVar14;
    iVar8 = *(int *)(lVar4 + 0x5c) + -1;
    *(int *)(lVar4 + 0x5c) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar14 * 0x30) = 0xffffffff;
    }
  }
  lVar18 = lVar4 + 0x38;
  if (*(longlong *)(lVar4 + 0x48) != 0) {
    lVar18 = *(longlong *)(lVar4 + 0x48);
  }
  iVar14 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar14 = iVar21;
  }
  puVar2 = (uint *)(lVar18 + (longlong)(iVar14 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar21 & 0x1f);
  lVar18 = *(longlong *)(lVar4 + 0x28);
  lVar11 = lVar11 * 0x30;
  puVar3 = (undefined4 *)(lVar18 + 0x20 + lVar11);
  *puVar3 = (undefined4)local_90;
  puVar3[1] = local_90._4_4_;
  puVar3[2] = uStack_88;
  puVar3[3] = uStack_84;
  puVar3 = (undefined4 *)(lVar18 + 0x10 + lVar11);
  *puVar3 = local_a0;
  puVar3[1] = (undefined4)uStack_9c;
  puVar3[2] = uStack_9c._4_4_;
  puVar3[3] = uStack_94;
  *(undefined8 *)(lVar18 + lVar11) = local_b0;
  ((undefined8 *)(lVar18 + lVar11))[1] = uStack_a8;
  sVar20 = (short)iVar21;
  if (sVar22 != -1) {
    lVar4 = *(longlong *)(lVar4 + 0x28);
    lVar11 = (longlong)sVar22 * 0x30 + lVar4;
    if (lVar11 != 0) {
      sVar22 = *(short *)(lVar11 + 8);
      if (sVar22 == -1) {
        *(short *)(lVar11 + 8) = sVar20;
      }
      else {
        do {
          lVar11 = (longlong)sVar22;
          sVar22 = *(short *)(lVar4 + 0xc + lVar11 * 0x30);
        } while (sVar22 != -1);
        *(short *)(lVar4 + lVar11 * 0x30 + 0xc) = sVar20;
      }
    }
  }
  local_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140291cc8(&local_80,(longlong)sVar20 * 0x30 + *plVar1,plVar1);
  FUN_141881466(&local_80,&local_bc);
  lVar4 = *plVar1;
  *(undefined4 *)(lVar4 + 0x28 + (longlong)sVar20 * 0x30) = local_b4;
  *(undefined8 *)(lVar4 + 0x20 + (longlong)sVar20 * 0x30) = local_bc;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  *(int *)(*local_d0 + uVar26 * 4) = (int)sVar20;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d41cf6 FUN_143d41cf6 body=72 status=ok
// SIG undefined FUN_143d41cf6(void)

void FUN_143d41cf6(undefined8 *param_1,undefined8 param_2,undefined1 *param_3,char *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  
  cVar1 = *param_4;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*param_3);
  uVar2 = *param_1;
  FUN_1400e4a30(uVar2,param_2,uVar3 & 0xffffffff,0);
  if (cVar1 == '\x01') {
    FUN_143d3ee0e(uVar2,param_2,uVar3 & 0xffffffff);
    return;
  }
  return;
}



// FUNCTION 143d41d3e FUN_143d41d3e body=68 status=ok
// SIG undefined FUN_143d41d3e(void)

undefined8 * FUN_143d41d3e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b400850;
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



// FUNCTION 143d41d82 FUN_143d41d82 body=91 status=ok
// SIG undefined FUN_143d41d82(void)

bool FUN_143d41d82(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143d41db2;
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
LAB_143d41db2:
  return lVar6 == param_2;
}



// FUNCTION 143d41dfa FUN_143d41dfa body=68 status=ok
// SIG undefined FUN_143d41dfa(void)

undefined8 * FUN_143d41dfa(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4008c0;
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



// FUNCTION 143d41e5e FUN_143d41e5e body=2160 status=ok
// SIG undefined FUN_143d41e5e(void)

/* WARNING: Removing unreachable block (ram,0x000143d421a0) */
/* WARNING: Removing unreachable block (ram,0x000143d421a6) */

void FUN_143d41e5e(longlong *param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  char cVar16;
  uint uVar17;
  DWORD DVar18;
  DWORD DVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong lVar24;
  int iVar25;
  undefined8 *puVar26;
  longlong *plVar27;
  longlong lVar28;
  undefined4 *puVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_418 [32];
  undefined4 local_3f8;
  undefined *local_3f0;
  undefined1 *local_3e8;
  undefined8 *local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  int local_3c4;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  undefined8 local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  undefined4 local_304;
  undefined4 local_2d8;
  undefined1 local_2a8 [4];
  undefined4 local_2a4;
  double local_298;
  double local_290;
  double local_288;
  undefined4 local_204;
  undefined4 local_1d8;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined8 local_180;
  longlong *plStack_178;
  undefined8 local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  ulonglong local_f0;
  
  lVar24 = DAT_14cb7cf50;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  iVar25 = *param_2;
  puVar26 = (undefined8 *)*param_1;
  lVar20 = (longlong)*(int *)(puVar26 + 8) + (longlong)iVar25;
  if ((int)lVar20 != 0) {
    lVar5 = puVar26[4];
    lVar21 = (longlong)((int)lVar20 + -1);
    lVar28 = lVar21 * 3;
    dVar7 = *(double *)(lVar5 + 0x10 + lVar20 * 0x18) - *(double *)(lVar5 + 0x10 + lVar21 * 0x18);
    dVar9 = *(double *)(lVar5 + 8 + lVar20 * 0x18) - *(double *)(lVar5 + 8 + lVar21 * 0x18);
    dVar8 = *(double *)(lVar5 + lVar20 * 0x18) - *(double *)(lVar5 + lVar21 * 0x18);
    fVar30 = *(float *)param_1[1];
    iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
      uVar22 = 0;
    }
    else if (iVar4 == 1) {
      DVar18 = FUN_140ad26c0();
      DVar19 = GetCurrentThreadId();
      uVar22 = (ulonglong)(DVar18 != DVar19);
    }
    else {
      uVar22 = 1;
    }
    local_3c4 = (int)(((float)SQRT(dVar7 * dVar7 + dVar8 * dVar8 + dVar9 * dVar9) /
                      (fVar30 * *(float *)(lVar24 + uVar22 * 4))) / *(float *)param_1[2]);
    local_3d0 = (longlong)iVar25 * 0x10;
    plVar23 = (longlong *)(*(longlong *)param_1[3] + local_3d0);
    if (local_3c4 == 0) {
      puVar29 = (undefined4 *)(lVar21 * 0x18 + puVar26[4]);
      iVar25 = (int)plVar23[1];
      *(uint *)(plVar23 + 1) = iVar25 + 1U;
      if (*(uint *)((longlong)plVar23 + 0xc) < iVar25 + 1U) {
        FUN_1403e3958(plVar23,iVar25);
      }
      lVar24 = *plVar23;
      *(undefined8 *)(lVar24 + 0x10 + (longlong)iVar25 * 0x18) = *(undefined8 *)(puVar29 + 4);
      uVar12 = puVar29[1];
      uVar13 = puVar29[2];
      uVar14 = puVar29[3];
      puVar3 = (undefined4 *)(lVar24 + (longlong)iVar25 * 0x18);
      *puVar3 = *puVar29;
      puVar3[1] = uVar12;
      puVar3[2] = uVar13;
      puVar3[3] = uVar14;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_418);
    }
    if (local_3c4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_3c4);
    }
    if (*(int *)((longlong)plVar23 + 0xc) < local_3c4) {
      FUN_1447a8aa0(plVar23,local_3c4);
    }
    fVar30 = (float)local_3c4;
    fVar31 = 0.0;
    iVar25 = 0;
    local_3e0 = puVar26;
    local_3d8 = lVar28;
    do {
      lVar24 = puVar26[4];
      dVar6 = (double)((float)iVar25 / fVar30);
      local_f8 = dVar7 * dVar6 + *(double *)(lVar24 + 0x10 + lVar28 * 8);
      uStack_100 = dVar9 * dVar6 + *(double *)(lVar24 + 8 + lVar28 * 8);
      local_108 = dVar6 * dVar8 + *(double *)(lVar24 + lVar28 * 8);
      local_180 = *puVar26;
      plVar23 = (longlong *)puVar26[1];
      if (plVar23 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar23 + 0xc) = *(int *)((longlong)plVar23 + 0xc) + 1;
        UNLOCK();
      }
      local_130 = (longlong *)0x0;
      local_118 = 0xffffffffffffffff;
      local_158 = (double)fVar31 + local_f8;
      local_160 = uStack_100 + 0.0;
      local_168 = local_108 + 0.0;
      local_140 = DAT_14cb1c870;
      local_150 = (undefined4)DAT_14cb1c860;
      uStack_14c = DAT_14cb1c860._4_4_;
      uStack_148 = (undefined4)DAT_14cb1c868;
      uStack_144 = DAT_14cb1c868._4_4_;
      local_138 = 0;
      local_128 = 0xffffffff;
      local_120 = 0x43fa000042c80000;
      local_110 = 0;
      local_170 = *(undefined8 *)param_1[4];
      local_190 = &DAT_3f8000003f800000;
      local_188 = 0;
      if (plVar23 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar23 + 0xc) = *(int *)((longlong)plVar23 + 0xc) + 1;
        UNLOCK();
      }
      plStack_178 = plVar23;
      cVar15 = FUN_14488954d(&local_190);
      if (cVar15 == '\0') {
        memset(local_2a8,0,0x100);
        dVar11 = local_f8;
        local_1d8 = 0xffffffff;
        local_2a4 = 0x3f800000;
        local_204 = 0xffffffff;
        local_398 = local_f8 + 500.0;
        dVar10 = uStack_100 + 0.0;
        dVar6 = local_108 + 0.0;
        local_3e8 = &DAT_14cad0f10;
        local_3f0 = &DAT_14cad0f68;
        local_3f8 = 1;
        local_3a8 = dVar6;
        local_3a0 = dVar10;
        cVar15 = FUN_1400b50cc(param_1[5],local_2a8,&local_3a8,&local_108);
        memset(&local_3a8,0,0x100);
        local_2d8 = 0xffffffff;
        local_3a8 = (double)CONCAT44(0x3f800000,(undefined4)local_3a8);
        local_304 = 0xffffffff;
        local_3b0 = dVar11 + -500.0;
        local_3e8 = &DAT_14cad0f10;
        local_3f0 = &DAT_14cad0f68;
        local_3f8 = 1;
        local_3c0 = dVar6;
        local_3b8 = dVar10;
        cVar16 = FUN_1400b50cc(param_1[5],&local_3a8,&local_3c0,&local_108);
        puVar26 = local_3e0;
        if (cVar15 == '\x01' && cVar16 == '\0') {
          lVar24 = *(longlong *)param_1[3];
          plVar27 = (longlong *)(lVar24 + local_3d0);
          dVar10 = local_288 + 50.0;
          dVar11 = local_290 + 0.0;
          dVar6 = local_298 + 0.0;
          iVar4 = *(int *)(lVar24 + 8 + local_3d0);
          lVar20 = (longlong)iVar4;
          *(uint *)(lVar24 + 8 + local_3d0) = iVar4 + 1U;
          if (*(uint *)(lVar24 + 0xc + local_3d0) < iVar4 + 1U) {
            FUN_1403e3958(plVar27,iVar4);
          }
          lVar24 = *plVar27;
          *(double *)(lVar24 + lVar20 * 0x18) = dVar6;
          *(double *)(lVar24 + 8 + lVar20 * 0x18) = dVar11;
          *(double *)(lVar24 + 0x10 + lVar20 * 0x18) = dVar10;
          puVar26 = local_3e0;
          lVar28 = local_3d8;
        }
        else {
          plVar27 = (longlong *)(*(longlong *)param_1[3] + local_3d0);
          if (cVar15 == '\0' && cVar16 == '\x01') {
            dVar10 = local_388 + 50.0;
            dVar11 = local_390 + 0.0;
            dVar6 = local_398 + 0.0;
            iVar4 = (int)plVar27[1];
            lVar24 = (longlong)iVar4;
            *(uint *)(plVar27 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)plVar27 + 0xc) < iVar4 + 1U) {
              FUN_1403e3958(plVar27,iVar4);
            }
            lVar20 = *plVar27;
            *(double *)(lVar20 + lVar24 * 0x18) = dVar6;
            *(double *)(lVar20 + 8 + lVar24 * 0x18) = dVar11;
            *(double *)(lVar20 + 0x10 + lVar24 * 0x18) = dVar10;
            lVar28 = local_3d8;
          }
          else {
            iVar4 = (int)plVar27[1];
            *(uint *)(plVar27 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)plVar27 + 0xc) < iVar4 + 1U) {
              FUN_1403e3958(plVar27,iVar4);
            }
            lVar24 = *plVar27;
            *(double *)(lVar24 + 0x10 + (longlong)iVar4 * 0x18) = local_f8;
            puVar29 = (undefined4 *)(lVar24 + (longlong)iVar4 * 0x18);
            *puVar29 = (undefined4)local_108;
            puVar29[1] = local_108._4_4_;
            puVar29[2] = (undefined4)uStack_100;
            puVar29[3] = uStack_100._4_4_;
            lVar28 = local_3d8;
          }
        }
      }
      else {
        fVar31 = (float)(local_198 - local_f8);
        iVar4 = *(int *)(*(longlong *)param_1[3] + 8 + local_3d0);
        lVar24 = (longlong)iVar4;
        plVar27 = (longlong *)(*(longlong *)param_1[3] + local_3d0);
        uVar17 = iVar4 + 1;
        if (0.0 <= fVar31) {
          dVar10 = local_198 + 50.0;
          dVar11 = local_1a0 + 0.0;
          dVar6 = local_1a8 + 0.0;
          *(uint *)(plVar27 + 1) = uVar17;
          if (*(uint *)((longlong)plVar27 + 0xc) < uVar17) {
            FUN_1403e3958(plVar27,iVar4);
          }
          lVar20 = *plVar27;
          *(double *)(lVar20 + lVar24 * 0x18) = dVar6;
          *(double *)(lVar20 + 8 + lVar24 * 0x18) = dVar11;
          *(double *)(lVar20 + 0x10 + lVar24 * 0x18) = dVar10;
        }
        else {
          dVar11 = local_f8 + 50.0;
          dVar10 = uStack_100 + 0.0;
          dVar6 = local_108 + 0.0;
          *(uint *)(plVar27 + 1) = uVar17;
          if (*(uint *)((longlong)plVar27 + 0xc) < uVar17) {
            FUN_1403e3958(plVar27,iVar4);
          }
          lVar20 = *plVar27;
          *(double *)(lVar20 + lVar24 * 0x18) = dVar6;
          *(double *)(lVar20 + 8 + lVar24 * 0x18) = dVar10;
          *(double *)(lVar20 + 0x10 + lVar24 * 0x18) = dVar11;
        }
      }
      plVar27 = local_130;
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_130 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)plVar27 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar27 + 0x10))(plVar27);
          }
        }
      }
      if (plStack_178 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plStack_178 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plStack_178 + 0x10))();
        }
      }
      if (plVar23 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
      iVar25 = iVar25 + 1;
    } while (local_3c4 != iVar25);
  }
  if ((local_f0 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d426d0 FUN_143d426d0 body=29 status=ok
// SIG undefined FUN_143d426d0(void)

undefined8 FUN_143d426d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d4286c FUN_143d4286c body=93 status=ok
// SIG undefined FUN_143d4286c(void)

void FUN_143d4286c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b400b00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d428ca FUN_143d428ca body=93 status=ok
// SIG undefined FUN_143d428ca(void)

void FUN_143d428ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b400b00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d42928 FUN_143d42928 body=126 status=ok
// SIG undefined FUN_143d42928(void)

void FUN_143d42928(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3cb240;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b400b00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d42997. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d429b0 FUN_143d429b0 body=269 status=ok
// SIG undefined FUN_143d429b0(void)

undefined8 FUN_143d429b0(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143d42ab7;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d42ab7;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143d42ab7:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d42a6b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143d42abe(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143d42a6b;
    }
  }
  uVar6 = 0;
LAB_143d42a6b:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d42abe FUN_143d42abe body=134 status=ok
// SIG undefined FUN_143d42abe(void)

void FUN_143d42abe(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143d42b06;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar4 + 2) == param_1[1] && ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar4;
      goto LAB_143d42b06;
    }
  }
  uVar3 = 0;
LAB_143d42b06:
  lVar2 = FUN_145dfa8bc(uVar3);
  if (lVar2 != 0) {
    FUN_145dea454(lVar2);
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      FUN_141092d32(&DAT_14cb10ae8);
    }
    *(undefined8 *)(lVar2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 143d42b44 FUN_143d42b44 body=408 status=ok
// SIG undefined FUN_143d42b44(void)

undefined2 * FUN_143d42b44(undefined2 *param_1,undefined2 *param_2)

{
  char cVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auStack_188 [32];
  undefined2 *local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 local_118 [32];
  char local_f8;
  undefined1 local_c8 [80];
  longlong local_78;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_160 = *(undefined8 *)(param_2 + 0x8c);
  local_168 = param_2 + 0x80;
  local_128 = *(undefined8 *)(param_2 + 0x7c);
  local_138 = *(undefined8 *)(param_2 + 0x74);
  uStack_130 = *(undefined8 *)(param_2 + 0x78);
  local_158 = *(undefined4 *)(param_2 + 0x14);
  uStack_154 = *(undefined4 *)(param_2 + 0x16);
  uStack_150 = *(undefined4 *)(param_2 + 0x18);
  uStack_14c = *(undefined4 *)(param_2 + 0x1a);
  local_148 = *(undefined8 *)(param_2 + 0x1c);
  FUN_143d3ae68(local_118,param_2);
  FUN_145c5b6e4(local_68);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1488493ea(local_c8);
  if (local_f8 == '\x01') {
    local_f8 = '\0';
  }
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 0x10);
  *(char *)(param_1 + 0x10) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    uVar10 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 8) = uVar10;
  }
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x16);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1a);
  uVar7 = *(undefined4 *)(param_2 + 0x1e);
  uVar8 = *(undefined4 *)(param_2 + 0x20);
  uVar9 = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x1e) = uVar7;
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  *(undefined4 *)(param_1 + 0x22) = uVar9;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x16) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1a) = uVar6;
  FUN_148849aac(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x50) = 0;
  iVar2 = *(int *)(param_2 + 0x54);
  _Src = *(void **)(param_2 + 0x50);
  *(int *)(param_1 + 0x54) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x56) = 0;
  }
  else {
    FUN_1405b70fe(param_1 + 0x50,iVar2,0);
    memcpy(*(void **)(param_1 + 0x50),_Src,(longlong)iVar2 * 0x18);
  }
  FUN_1488494a0(param_1 + 0x58,param_2 + 0x58);
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d42ce8 FUN_143d42ce8 body=29 status=ok
// SIG undefined FUN_143d42ce8(void)

void FUN_143d42ce8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143d42d06 FUN_143d42d06 body=91 status=ok
// SIG undefined FUN_143d42d06(void)

undefined8 * FUN_143d42d06(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b400b70;
  FUN_145c5b6e4(param_1 + 0x17);
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1488493ea(param_1 + 0xb);
  if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d42d62 FUN_143d42d62 body=282 status=ok
// SIG undefined FUN_143d42d62(void)

undefined8 * FUN_143d42d62(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143d3f999);
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



// FUNCTION 143d42e7c FUN_143d42e7c body=159 status=ok
// SIG undefined FUN_143d42e7c(void)

void FUN_143d42e7c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_148852081(param_1 + 0x1e,param_1 + 0x16);
  plVar3 = (longlong *)param_1[0x1f];
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
  if (param_1[0x16] != 0) {
    plVar3 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143d42f0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143d42f1b FUN_143d42f1b body=4950 status=ok
// SIG undefined FUN_143d42f1b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d42f1b(void)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb7c5c0 = (ulonglong)uVar3;
  DAT_14cb7c5e8 = 0;
  DAT_14cb7c5f0 = 0;
  DAT_14cb7c5c8 = 0;
  _DAT_14cb7c5d0 = 0;
  _DAT_14cb7c5f4 = 0xffffffff00000080;
  DAT_14cb7c5fc = 0;
  DAT_14cb7c608 = 0;
  DAT_14cb7c610 = 0;
  atexit(FUN_143d35595);
  DAT_14cb7c640 = 0;
  DAT_14cb7c648 = 0;
  DAT_14cb7c620 = 0;
  _DAT_14cb7c628 = 0;
  _DAT_14cb7c64c = 0xffffffff00000080;
  DAT_14cb7c654 = 0;
  DAT_14cb7c660 = 0;
  DAT_14cb7c668 = 0;
  atexit(FUN_143d355be);
  _DAT_14cb7c690 = 0;
  _DAT_14cb7c698 = 0;
  _DAT_14cb7c670 = 0;
  uRam000000014cb7c678 = 0;
  _DAT_14cb7c69c = 0xffffffff00000080;
  _DAT_14cb7c6a4 = 0;
  DAT_14cb7c6b0 = 0;
  _DAT_14cb7c6b8 = 0;
  atexit(FUN_143d355e7);
  _DAT_14cb7c6e8 = 0;
  _DAT_14cb7c6f0 = 0;
  DAT_14cb7c6c8 = 0;
  _DAT_14cb7c6d0 = 0;
  _DAT_14cb7c6f4 = 0xffffffff00000080;
  DAT_14cb7c6fc = 0;
  DAT_14cb7c708 = 0;
  DAT_14cb7c710 = 0;
  atexit(FUN_143d35616);
  _DAT_14cb7c738 = 0;
  _DAT_14cb7c740 = 0;
  _DAT_14cb7c718 = 0;
  uRam000000014cb7c720 = 0;
  _DAT_14cb7c744 = 0xffffffff00000080;
  _DAT_14cb7c74c = 0;
  DAT_14cb7c758 = 0;
  _DAT_14cb7c760 = 0;
  atexit(FUN_143d35645);
  _DAT_14cb7c788 = 0;
  _DAT_14cb7c790 = 0;
  DAT_14cb7c768 = 0;
  _DAT_14cb7c770 = 0;
  _DAT_14cb7c794 = 0xffffffff00000080;
  DAT_14cb7c79c = 0;
  DAT_14cb7c7a8 = 0;
  DAT_14cb7c7b0 = 0;
  atexit(FUN_143d35674);
  _DAT_14cb7c7d8 = 0;
  _DAT_14cb7c7e0 = 0;
  _DAT_14cb7c7b8 = 0;
  uRam000000014cb7c7c0 = 0;
  _DAT_14cb7c7e4 = 0xffffffff00000080;
  _DAT_14cb7c7ec = 0;
  DAT_14cb7c7f8 = 0;
  _DAT_14cb7c800 = 0;
  atexit(FUN_143d356a3);
  _DAT_14cb7c81c = 0;
  FUN_14052b5e0(&DAT_14cb7c818,&DAT_14b3fe26c,0);
  _DAT_14cb7c828 = &DAT_14b3fe26c;
  _DAT_14cb7c834 = 0;
  FUN_14052b5e0(&DAT_14cb7c830,"_owner",0);
  _DAT_14cb7c840 = "_owner";
  _DAT_14cb7c84c = 0;
  FUN_14052b5e0(&DAT_14cb7c848,"_status",0);
  _DAT_14cb7c858 = "_status";
  _DAT_14cb7c864 = 0;
  FUN_14052b5e0(&DAT_14cb7c860,"_timer",0);
  _DAT_14cb7c870 = "_timer";
  _DAT_14cb7c87c = 0;
  FUN_14052b5e0(&DAT_14cb7c878,"_mission",0);
  _DAT_14cb7c888 = "_mission";
  ram0x00014cb7d084 = 0;
  FUN_14052b5e0(&DAT_14cb7d080,"local_sets",0);
  _DAT_14cb7d090 = "local_sets";
  ram0x00014cb7c894 = 0;
  FUN_14052b5e0(&DAT_14cb7c890,"remote_sets",0);
  _DAT_14cb7c8a0 = "remote_sets";
  ram0x00014cb7d06c = 0;
  FUN_14052b5e0(&DAT_14cb7d068,"tracked_missions",0);
  _DAT_14cb7d078 = "tracked_missions";
  ram0x00014cb7d09c = 0;
  FUN_14052b5e0(&DAT_14cb7d098,"missions",0);
  _DAT_14cb7d0a8 = "missions";
  ram0x00014cb7c8ac = 0;
  FUN_14052b5e0(&DAT_14cb7c8a8,"objectives",0);
  _DAT_14cb7c8b8 = "objectives";
  ram0x00014cb7c8c4 = 0;
  FUN_14052b5e0(&DAT_14cb7c8c0,"state",0);
  _DAT_14cb7c8d0 = "state";
  ram0x00014cb7c8dc = 0;
  FUN_14052b5e0(&DAT_14cb7c8d8,"final",0);
  _DAT_14cb7c8e8 = "final";
  DAT_14cb7c8f4 = 0;
  FUN_14052b5e0(&DAT_14cb7c8f0,&DAT_149dfd150,0);
  _DAT_14cb7c900 = &DAT_149dfd150;
  ram0x00014cb7c90c = 0;
  FUN_14052b5e0(&DAT_14cb7c908,"generated_aliases",0);
  _DAT_14cb7c918 = "generated_aliases";
  ram0x00014cb7c924 = 0;
  FUN_14052b5e0(&DAT_14cb7c920,"cached_rewards",0);
  _DAT_14cb7c930 = "cached_rewards";
  ram0x00014cb7c93c = 0;
  FUN_14052b5e0(&DAT_14cb7c938,"tracked_index",0);
  _DAT_14cb7c948 = "tracked_index";
  ram0x00014cb7c954 = 0;
  FUN_14052b5e0(&DAT_14cb7c950,"sel_int_choices",0);
  _DAT_14cb7c960 = "sel_int_choices";
  ram0x00014cb7c96c = 0;
  FUN_14052b5e0(&DAT_14cb7c968,"sel_cond_objs",0);
  _DAT_14cb7c978 = "sel_cond_objs";
  ram0x00014cb7c984 = 0;
  FUN_14052b5e0(&DAT_14cb7c980,"ui_flags",0);
  _DAT_14cb7c990 = "ui_flags";
  ram0x00014cb7c99c = 0;
  FUN_14052b5e0(&DAT_14cb7c998,"mission_giver_ui_flags",0);
  _DAT_14cb7c9a8 = "mission_giver_ui_flags";
  DAT_14cb7c9b0 = 0;
  uRam000000014cb7c9b8 = 0;
  DAT_14cb7c9c0 = 0;
  _DAT_14cb7c9c8 = 0;
  DAT_14cb7c9d0 = 0;
  _DAT_14cb7c9d8 = 0;
  DAT_14cb7c9e0 = 0;
  _DAT_14cb7c9e8 = 0;
  local_60 = "nexus";
  local_58 = 5;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb7c9f0 = (ulonglong)uVar3;
  ram0x00014cb7c9fc = 0;
  FUN_14052b5e0(&DAT_14cb7c9f8,&DAT_14a418301,0);
  _DAT_14cb7ca08 = &DAT_14a418301;
  ram0x00014cb7ca14 = 0;
  FUN_14052b5e0(&DAT_14cb7ca10,"stats",0);
  _DAT_14cb7ca20 = "stats";
  ram0x00014cb7ca2c = 0;
  FUN_14052b5e0(&DAT_14cb7ca28,"party",0);
  _DAT_14cb7ca38 = "party";
  ram0x00014cb7ca44 = 0;
  FUN_14052b5e0(&DAT_14cb7ca40,"shared",0);
  _DAT_14cb7ca50 = "shared";
  ram0x00014cb7ca5c = 0;
  FUN_14052b5e0(&DAT_14cb7ca58,"shared_stats",0);
  _DAT_14cb7ca68 = "shared_stats";
  _DAT_14cb7ca78 = &LAB_143d37391;
  _DAT_14cb7ca80 = 0x43c78000;
  DAT_14cb7ca84 = 1;
  DAT_14cb7ca70 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7ca70;
  atexit((_func_5014 *)&LAB_143d37396);
  DAT_14cb7ca90 = (undefined8 *)0x0;
  _DAT_14cb7ca98 = 0;
  puVar4 = (undefined8 *)FUN_140595974(0x3000,0);
  lVar6 = 0xff;
  puVar1 = puVar4;
  do {
    puVar5 = puVar1 + 6;
    *puVar1 = puVar5;
    lVar6 = lVar6 + -1;
    puVar1 = puVar5;
  } while (lVar6 != 0);
  _DAT_14cb7ca98 = _DAT_14cb7ca98 + 0x100;
  *puVar5 = DAT_14cb7ca90;
  DAT_14cb7ca90 = puVar4;
  DAT_14cb7caa0 = 0;
  _DAT_14cb7caa8 = 0;
  atexit((_func_5014 *)&LAB_143d373ca);
  _DAT_14cb7cac8 = 0;
  FUN_14052b5e0(&DAT_14cb7cac4,"stats",0);
  local_60 = "stats";
  local_58 = 5;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb7cad8 = (ulonglong)uVar3;
  _DAT_14cb7cae0 = 0;
  uRam000000014cb7cae8 = 0;
  _DAT_14cb7caf0 = 0;
  DAT_14cb7caf8 = 0;
  uRam000000014cb7cb00 = 0;
  FUN_1446ddda2(&DAT_14cb7cae0,"facts.stats",0);
  atexit((_func_5014 *)&LAB_143d380f3);
  _DAT_14cb7cb08 = 0;
  uRam000000014cb7cb10 = 0;
  _DAT_14cb7cb18 = 0;
  DAT_14cb7cb20 = 0;
  uRam000000014cb7cb28 = 0;
  FUN_1446ddda2(&DAT_14cb7cb08,"engine.facts.stats",0);
  atexit((_func_5014 *)&LAB_143d38104);
  _DAT_14cb7cb34 = 0;
  FUN_14052b5e0(&DAT_14cb7cb30,&DAT_14b400ca8,0);
  _DAT_14cb7cb40 = &DAT_14b400ca8;
  _DAT_14cb7cb4c = 0;
  FUN_14052b5e0(&DAT_14cb7cb48,&DAT_14b400c30,0);
  _DAT_14cb7cb58 = &DAT_14b400c30;
  ram0x00014cb7cffc = 0;
  FUN_14052b5e0(&DAT_14cb7cff8,&DAT_149e430c3,0);
  _DAT_14cb7d008 = &DAT_149e430c3;
  _DAT_14cb7d0fc = 0;
  FUN_14052b5e0(&DAT_14cb7d0f8,&DAT_14b3fe26c,0);
  _DAT_14cb7d108 = &DAT_14b3fe26c;
  _DAT_14cb7d0e4 = 0;
  FUN_14052b5e0(&DAT_14cb7d0e0,"_origin",0);
  _DAT_14cb7d0f0 = "_origin";
  _DAT_14cb7d0b4 = 0;
  FUN_14052b5e0(&DAT_14cb7d0b0,"_status",0);
  _DAT_14cb7d0c0 = "_status";
  _DAT_14cb7d0cc = 0;
  FUN_14052b5e0(&DAT_14cb7d0c8,"_remove",0);
  _DAT_14cb7d0d8 = "_remove";
  local_60 = "timed_facts";
  local_58 = 0xb;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb7cb60 = (ulonglong)uVar3;
  _DAT_14cb7cb68 = 0;
  uRam000000014cb7cb70 = 0;
  _DAT_14cb7cb78 = 0;
  DAT_14cb7cb80 = 0;
  uRam000000014cb7cb88 = 0;
  FUN_1446ddda2(&DAT_14cb7cb68,"timed_facts",0);
  atexit((_func_5014 *)&LAB_143d3833d);
  _DAT_14cb7cb90 = 0;
  uRam000000014cb7cb98 = 0;
  _DAT_14cb7cba0 = 0;
  DAT_14cb7cba8 = 0;
  uRam000000014cb7cbb0 = 0;
  FUN_1446ddda2(&DAT_14cb7cb90,"facts.timed_facts",0);
  atexit((_func_5014 *)&LAB_143d3834e);
  _DAT_14cb7cbc0 = &LAB_143d3835f;
  _DAT_14cb7cbc8 = 0x44418000;
  DAT_14cb7cbcc = 1;
  DAT_14cb7cbb8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7cbb8;
  atexit((_func_5014 *)&LAB_143d38364);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_60,&DAT_14cb7cbd8);
  if (cVar2 == '\0') {
    _DAT_14cb7cbd8 = 0;
    uRam000000014cb7cbe0 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  ram0x00014cb7cbf4 = 0;
  FUN_14052b5e0(&DAT_14cb7cbf0,"staticaddress",0);
  _DAT_14cb7cc00 = "staticaddress";
  ram0x00014cb7cc0c = 0;
  FUN_14052b5e0(&DAT_14cb7cc08,&DAT_14b3e7b50,0);
  _DAT_14cb7cc18 = &DAT_14b3e7b50;
  ram0x00014cb7cc24 = 0;
  FUN_14052b5e0(&DAT_14cb7cc20,"registry_name",0);
  _DAT_14cb7cc30 = "registry_name";
  ram0x00014cb7cc3c = 0;
  FUN_14052b5e0(&DAT_14cb7cc38,"group_name",0);
  _DAT_14cb7cc48 = "group_name";
  ram0x00014cb7cc54 = 0;
  FUN_14052b5e0(&DAT_14cb7cc50,"instanced_map",0);
  _DAT_14cb7cc60 = "instanced_map";
  DAT_14cb7d030 = 0;
  DAT_14cb7d038 = 0;
  DAT_14cb7d010 = 0;
  _DAT_14cb7d018 = 0;
  _DAT_14cb7d03c = 0xffffffff00000080;
  DAT_14cb7d044 = 0;
  DAT_14cb7d050 = 0;
  DAT_14cb7d058 = 0;
  _DAT_14cb7d060 = 0x100000000;
  atexit(FUN_143d38398);
  DAT_14cb7cc68 = (undefined8 *)0x0;
  _DAT_14cb7cc70 = 0;
  puVar4 = (undefined8 *)FUN_140595974(0x1e00,0);
  lVar6 = 0x3f;
  puVar1 = puVar4;
  do {
    puVar5 = puVar1 + 0xf;
    *puVar1 = puVar5;
    lVar6 = lVar6 + -1;
    puVar1 = puVar5;
  } while (lVar6 != 0);
  _DAT_14cb7cc70 = _DAT_14cb7cc70 + 0x40;
  *puVar5 = DAT_14cb7cc68;
  DAT_14cb7cc68 = puVar4;
  _DAT_14cb7cc78 = L"GbxGame.EWaypointInfoFlag";
  _DAT_14cb7cc80 = &DAT_14c872af8;
  _DAT_14cb7cc88 = L"WaypointInfoFlagNames";
  _DAT_14cb7cc90 = 0;
  uRam000000014cb7cc98 = 0;
  _DAT_14cb7cca0 = 0;
  uRam000000014cb7cca8 = 0;
  _DAT_14cb7cca9 = 0;
  uRam000000014cb7ccb0 = 0;
  uRam000000014cb7ccb1 = 0;
  atexit((_func_5014 *)&LAB_143d383c1);
  local_60 = "Waypoint";
  local_58 = 8;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb7cbe8 = (ulonglong)uVar3;
  _DAT_14cb7ccc8 = 0;
  DAT_14cb7ccd0 = 0;
  atexit((_func_5014 *)&LAB_143d383e4);
  _DAT_14cb7cce0 = &LAB_143d3f076;
  DAT_14cb7cce8 = 0x10;
  if (DAT_14c9aad88 == '\x01') {
    DAT_14c9a9710 = 0x10;
    _DAT_14c9a97a8 = &LAB_148849a6c;
    DAT_14c9a97d0 = &LAB_141883bbe;
    DAT_14c9a97b0 = &LAB_143d3f11a;
    _DAT_14c9a97b8 = &LAB_143d3f132;
    _DAT_14c9a97c0 = &LAB_143d3f148;
    _DAT_14c9a97c8 = &LAB_148849a74;
    _DAT_14c9a9718 = 0x3f800000;
    uRam000000014c9a971c = 0x3f6b851f;
    uRam000000014c9a9720 = 0;
    uRam000000014c9a9724 = 0x3f800000;
    DAT_14c9a97a1 = 0;
    DAT_14c9a9714 = 0x1e;
    _DAT_14c9a97d8 = FUN_143d3f17a;
    _DAT_14c9a97e0 = &LAB_143d3f1e4;
    _DAT_14c9a9760 = &LAB_143d3f1ee;
    _DAT_14c9a9770 = FUN_143d3f1fe;
  }
  else {
    _DAT_14cb7ccd8 = DAT_14c9a84f8;
    DAT_14c9a84f8 = &DAT_14cb7ccd8;
  }
  _DAT_14cb7ccf0 = 0x47efffffe0000000;
  _DAT_14cb7ccf8 = 0x47efffffe0000000;
  _DAT_14cb7cd00 = 0x47efffffe0000000;
  _DAT_14cb7cd08 = 0x47efffffe0000000;
  _DAT_14cb7cd10 = 0x47efffffe0000000;
  _DAT_14cb7cd18 = 0x47efffffe0000000;
  _DAT_14cb7cd20 = 0x47efffffe0000000;
  _DAT_14cb7cd28 = 0x47efffffe0000000;
  local_60._0_4_ = 0x45dac000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7cfe0,L"gbx.player.waypoint_path_goal_max_height_above_navmesh",&local_60,
                L"Echoloc: The maximum height above navmesh that a waypoint is expected to be");
  atexit(FUN_143d388da);
  local_60._0_4_ = 0x43fa0000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7cfc8,L"gbx.player.waypoint_path_goal_max_navmesh_radius",&local_60,
                L"Echoloc: The maximum height above navmesh that a waypoint is expected to be");
  atexit(FUN_143d3891f);
  local_60._0_4_ = 0xc2960000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7cd30,L"gbx.player.waypoint_path_first_point_z_offset",&local_60,
                L"Echoloc: Offset the first point\'s Z-value by this much to ensure it\'s not right in the center of the camera"
               );
  atexit(FUN_143d38964);
  local_60._0_4_ = 0x43480000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7cd48,L"gbx.player.waypoint_path_first_point_z_offset_vehicle",&local_60,
                L"Echoloc: Offset the first point\'s Z-value by this when in a vehicle");
  atexit(FUN_143d389a9);
  local_60._0_4_ = 0x42480000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7cd60,L"gbx.player.waypoint_path_other_points_z_offset",&local_60,
                L"Echoloc: Offset the other points\' Z-value by this much to ensure it\'s above the landscape"
               );
  atexit(FUN_143d389ee);
  local_60._0_4_ = 0x45fa0000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7cd78,L"gbx.player.waypoint_path_zip_speed",&local_60,&DAT_149dfb77a);
  atexit(FUN_143d38a33);
  local_60._0_4_ = 0x466a6000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7cd90,L"gbx.player.waypoint_path_zip_speed_vehicle",&local_60,
                &DAT_149dfb77a);
  atexit(FUN_143d38a78);
  local_60._0_4_ = 0x451c4000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7cda8,L"gbx.player_waypoint_path_distance_ahead_of_vehicle_to_insert_point"
                ,&local_60,
                L"Echoloc: When inserting a point ahead of the vehicle so that the player can see the path, this is the distance ahead of the vehicle location for that."
               );
  atexit(FUN_143d38abd);
  local_60._0_4_ = 0x469c4000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7cdc0,L"gbx.player.waypoint_path_consider_road_pathing_dist",&local_60,
                L"Echoloc: Distance to the waypoint to consider road pathing");
  atexit(FUN_143d38b02);
  local_60._0_4_ = 0x3e800000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7cdd8,L"gbx.player.waypoint_path_zip_speed_starting_percentage",&local_60,
                L"Echoloc: When ramping up the path-zip velocity, start at this percentage of maximum velocity and ramp up gradually."
               );
  atexit(FUN_143d38b47);
  local_60._0_4_ = 0x459c4000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7cdf0,L"gbx.player.waypoint_path_zip_ramp_up_max_dist",&local_60,
                L"Echoloc: When ramping up the path-zip velocity, ramp up to max velocity over the course of this distance. Larger numbers will result in a slower acceleration, shorter numbers a faster acceleration."
               );
  atexit(FUN_143d38b8c);
  local_60 = (char *)CONCAT44(local_60._4_4_,0x471c4000);
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7ce08,L"gbx.player.waypoint_Reinterpolation_distance_by_frame",&local_60,
                &DAT_149dfb77a);
  atexit(FUN_143d38bd1);
  local_60 = (char *)((ulonglong)local_60 & 0xffffffffffffff00);
  local_68 = 0;
  FUN_140bd5914(&DAT_14cb7ce20,L"gbx.player.waypoint_path_force_failure",&local_60,
                L"Echoloc: Set this to 1 to force pathfinds to fail. Good for testing the drone\'s reaction to a failed path."
               );
  atexit(FUN_143d38c16);
  local_60 = (char *)CONCAT44(local_60._4_4_,0x47435000);
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7ce38,L"gbx.player.waypoint_path_breadcrumb_max_candidate_dist",&local_60,
                L"Echoloc: When finding a breadcrumb close to a waypoint, that candidate must be no more than this distance away."
               );
  atexit(FUN_143d38c5b);
  local_60 = (char *)((ulonglong)local_60 & 0xffffffffffffff00);
  local_68 = 0;
  FUN_140bd5914(&DAT_14cb7ce50,L"gbx.player.waypoint_path_no_adjustment",&local_60,
                L"Echoloc: Set this to 1 to skip path adjustment.");
  atexit(FUN_143d38ca0);
  local_60 = (char *)((ulonglong)local_60 & 0xffffffffffffff00);
  local_68 = 0;
  FUN_140bd5914(&DAT_14cb7ce68,L"gbx.player.waypoint_path_no_breadcrumb_paths",&local_60,
                L"Echoloc: Set this to 1 to skip breadcrumb pathing.");
  atexit(FUN_143d38ce5);
  local_60 = (char *)((ulonglong)local_60 & 0xffffffffffffff00);
  local_68 = 0;
  FUN_140bd5914(&DAT_14cb7ce80,L"gbx.player.waypoint_path_no_breadcrumb_adjustment",&local_60,
                L"Echoloc: Set this to 1 to skip breadcrumb path adjustment.");
  atexit(FUN_143d38d2a);
  local_60 = (char *)CONCAT71(local_60._1_7_,1);
  local_68 = 0;
  FUN_140bd5914(&DAT_14cb7ce98,L"gbx.player.waypoint_path_find_closest_point_on_breadcrumb_path",
                &local_60,
                L"Echoloc: If true, will adjust a breadcrumb path to find the closest point to the player on the first segment in the path"
               );
  atexit(FUN_143d38d6f);
  local_60._0_4_ = 0x461c4000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7ceb0,L"gbx.player.waypoint_path_navmesh_retry_distance_min",&local_60,
                L"Echoloc: If a navmesh path can\'t be found, try again using a destination point that is closer to the player, along the trajectory at this distance away (min dist)."
               );
  atexit(FUN_143d38db4);
  local_60._0_4_ = 0x48435000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7cec8,L"gbx.player.waypoint_path_navmesh_retry_distance_max",&local_60,
                L"Echoloc: If a navmesh path can\'t be found, try again using a destination point that is closer to the player, along the trajectory at this distance away (max dist)."
               );
  atexit(FUN_143d38df9);
  local_60._0_4_ = 0x43fa0000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7cee0,L"gbx.player.waypoint_path_adjusted_camera_dist",&local_60,
                &DAT_149dfb77a);
  atexit(FUN_143d38e3e);
  local_60._0_4_ = 0x45fa0000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7cef8,L"gbx.player.waypoint_path_max_breadcrumb_skip_distance",&local_60,
                &DAT_149dfb77a);
  atexit(FUN_143d38e83);
  local_60 = (char *)CONCAT44(local_60._4_4_,0x1e);
  local_68 = 0;
  FUN_14078dbce(&DAT_14cb7cf10,L"gbx.player.waypoint_path_max_start_breadcrumb_index",&local_60,
                &DAT_149dfb77a);
  atexit(FUN_143d38ec8);
  local_60 = (char *)((ulonglong)local_60 & 0xffffffffffffff00);
  local_68 = 0;
  FUN_140bd5914(&DAT_14cb7cf28,L"gbx.player.waypoint_update_disable_navmesh_projection",&local_60,
                &DAT_149dfb77a);
  atexit(FUN_143d38f0d);
  local_60 = (char *)CONCAT44(local_60._4_4_,0x40400000);
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7cf40,L"gbx.player.waypoint_update_speed_for_interpolation_weight",
                &local_60,&DAT_149dfb77a);
  atexit(FUN_143d38f52);
  local_60._0_1_ = 1;
  local_68 = 0;
  FUN_140bd5914(&DAT_14cb7cf58,L"gbx.player.waypoint_path_enable_breadcrumb_and_road_mix_path",
                &local_60,&DAT_149dfb77a);
  atexit(FUN_143d38f97);
  local_60 = (char *)CONCAT71(local_60._1_7_,1);
  local_68 = 0;
  FUN_140bd5914(&DAT_14cb7cf70,L"gbx.player.waypoint_path_enable_road_breadcrumb_selection",
                &local_60,
                L"Echoloc : enable the selection between road and breadcrumb path according to their path length"
               );
  atexit(FUN_143d38fdc);
  local_60 = (char *)CONCAT44(local_60._4_4_,0x3fc00000);
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7cf88,
                L"gbx.player.waypoint_path_Breadcrumb_weight_for_Road_Breadcrumb_Selection",
                &local_60,L"Echoloc : we prefer to take a road rather than a breadcrumb path");
  atexit(FUN_143d39021);
  local_60 = (char *)CONCAT71(local_60._1_7_,1);
  local_68 = 0;
  FUN_140bd5914(&DAT_14cb7cfa0,L"gbx.player.waypoint_path_enable_async_build_path_to",&local_60,
                L"Echoloc : enable async build path to");
  atexit(FUN_143d39066);
  local_60 = "Color";
  local_58 = 5;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb7cfb8 = (ulonglong)uVar3;
  local_60 = "Lifetime";
  local_58 = 8;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb7cfc0 = (ulonglong)uVar3;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d44274 FUN_143d44274 body=41 status=ok
// SIG undefined FUN_143d44274(void)

void FUN_143d44274(void)

{
  DAT_14cb7d170 = 0;
  if (DAT_14cb7d168 != 0) {
    FUN_1400020a8();
  }
  FUN_14615697a();
  return;
}



// FUNCTION 143d442a1 FUN_143d442a1 body=91 status=ok
// SIG undefined FUN_143d442a1(void)

void FUN_143d442a1(void)

{
  if (DAT_14cb7d6a0 != 0) {
    if (DAT_14cb7d698 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb7d698)(DAT_14cb7d698,0);
    FUN_1446efa72(&DAT_14cb7d698,0,0,0x10);
    DAT_14cb7d6a0 = 0;
  }
  if (DAT_14cb7d698 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143d44300 FUN_143d44300 body=1553 status=ok
// SIG undefined FUN_143d44300(void)

void FUN_143d44300(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  longlong *plVar12;
  uint *puVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  undefined8 *puVar21;
  bool bVar22;
  undefined8 *puVar23;
  uint uVar24;
  int iVar25;
  uint *puVar26;
  bool bVar27;
  bool bVar28;
  undefined1 auStack_f8 [36];
  int local_d4;
  longlong local_d0;
  uint *local_c8;
  uint *local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  uint *local_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar11 = param_1 + -8;
  lVar9 = FUN_1400bd1c2(lVar11);
  if ((lVar9 == 0) || (iVar7 = FUN_14490d72a(lVar9), iVar7 == 1)) goto LAB_143d4460c;
  iVar7 = *(int *)(param_1 + 0x70);
  lVar9 = (longlong)iVar7;
  if (lVar9 != 0) {
    local_c0 = *(uint **)(param_1 + 0x68);
    if (local_c0[1] == 0) {
LAB_143d443c8:
      bVar27 = false;
    }
    else {
      uVar4 = *local_c0;
      bVar27 = false;
      if ((int)uVar4 < 0) goto LAB_143d443c8;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        if ((lVar15 == 0) || (*(uint *)(lVar15 + 0x10) != local_c0[1])) {
          bVar27 = false;
        }
        else {
          bVar27 = (*(uint *)(lVar15 + 8) & 0x10200000) == 0;
        }
      }
    }
    iVar17 = 0;
    local_c8 = local_c0 + 7;
    iVar25 = 0;
    local_d0 = param_1;
    local_b8 = lVar11;
    do {
      lVar11 = (longlong)iVar25;
      iVar14 = iVar25 + 1;
      iVar16 = iVar14;
      if (iVar14 < iVar7) {
        iVar16 = iVar7;
      }
      if (lVar11 + 1 < lVar9) {
        puVar26 = local_c8 + lVar11 * 6;
        bVar22 = true;
        lVar15 = lVar11 + 2;
        do {
          iVar20 = iVar14;
          local_d4 = iVar17;
          if ((((*puVar26 == 0) || (uVar4 = puVar26[-1], (int)uVar4 < 0)) ||
              (DAT_14c9647dc <= (int)uVar4)) ||
             ((lVar18 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar18 == 0
              || (*(uint *)(lVar18 + 0x10) != *puVar26)))) {
            if (bVar27) break;
          }
          else if ((bool)((*(uint *)(lVar18 + 8) & 0x10200000) == 0 ^ bVar27)) break;
          bVar22 = lVar15 < lVar9;
          iVar14 = iVar14 + 1;
          puVar26 = puVar26 + 6;
          bVar28 = lVar15 != lVar9;
          lVar15 = lVar15 + 1;
          iVar20 = iVar16;
        } while (bVar28);
      }
      else {
        bVar22 = false;
        iVar20 = iVar16;
      }
      iVar16 = iVar20 - iVar25;
      if (bVar27) {
        if (iVar17 != iVar25) {
          memmove(local_c0 + (longlong)iVar17 * 6,local_c0 + lVar11 * 6,(longlong)iVar16 * 0x18);
        }
        iVar17 = iVar17 + iVar16;
      }
      else {
        FUN_145e1f5c5(local_c0 + lVar11 * 6,iVar16);
      }
      bVar27 = (bool)(bVar27 ^ 1);
      iVar25 = iVar20;
    } while (bVar22);
    *(int *)(local_d0 + 0x70) = iVar17;
    param_1 = local_d0;
    lVar11 = local_b8;
  }
  if (*(char *)(param_1 + 0xf1) == '\x01') {
    *(undefined1 *)(param_1 + 0xf1) = 0;
    FUN_1447f69b6(param_1 + 0xb8);
  }
  if (*(char *)(param_1 + 0xf2) == '\x01') {
    *(undefined1 *)(param_1 + 0xf2) = 0;
    (**(code **)(*(longlong *)(param_1 + -8) + 0xd0))(lVar11);
  }
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    *(undefined1 *)(param_1 + 0xf0) = 0;
    iVar7 = *(int *)(param_1 + 0x114);
    FUN_140be4274(*(undefined8 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x110));
    *(undefined4 *)(param_1 + 0x110) = 0;
    if ((iVar7 < 0) && (*(int *)(param_1 + 0x114) != 0)) {
      FUN_140be42dc((uint *)(param_1 + 0x108),0);
    }
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    FUN_141277154(lVar11,0,&local_78);
    if ((longlong)(int)uStack_70 != 0) {
      local_98 = local_78 + (longlong)(int)uStack_70 * 2;
      plVar12 = local_78;
      local_d0 = param_1;
      local_c8 = (uint *)(param_1 + 0x108);
      local_b8 = lVar11;
      do {
        lVar11 = *plVar12;
        uVar4 = *(uint *)(lVar11 + 0x38);
        local_a0 = plVar12;
        if (uVar4 == 0) {
          uVar19 = 1;
          puVar26 = (uint *)0x0;
          uVar8 = 0;
          iVar7 = 0;
        }
        else {
          puVar10 = *(uint **)(lVar11 + 0x30);
          if (*(uint **)(lVar11 + 0x30) == (uint *)0x0) {
            puVar10 = (uint *)(lVar11 + 0x20);
          }
          uVar8 = *puVar10;
          if (uVar8 == 0) {
            iVar7 = uVar4 + 0x1e;
            if (-1 < (int)(uVar4 - 1)) {
              iVar7 = uVar4 - 1;
            }
            puVar26 = (uint *)0x0;
            puVar13 = (uint *)(ulonglong)(uint)(iVar7 >> 5);
            if (iVar7 >> 5 < 1) {
              puVar13 = puVar26;
            }
            iVar7 = 0;
            do {
              if (puVar13 == puVar26) goto LAB_143d448c8;
              iVar7 = iVar7 + 0x20;
              uVar8 = puVar10[(longlong)puVar26 + 1];
              puVar26 = (uint *)((longlong)puVar26 + 1);
            } while (uVar8 == 0);
          }
          else {
            puVar26 = (uint *)0x0;
            iVar7 = 0;
          }
          uVar19 = (ulonglong)(-uVar8 & uVar8);
          uVar3 = uVar19 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar8 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
          if ((int)uVar4 <= (int)uVar8) {
            uVar8 = uVar4;
          }
        }
        if (uVar8 != uVar4) {
          uVar24 = 0xffffffff;
          local_b0 = (ulonglong)uVar4;
          local_a8 = lVar11;
          local_90 = (uint *)(lVar11 + 0x20);
          do {
            lVar11 = *(longlong *)
                      (*(longlong *)(local_a8 + 0x10) + 0x10 + (longlong)(int)uVar8 * 0x28);
            plVar12 = *(longlong **)
                       (*(longlong *)(local_a8 + 0x10) + 0x18 + (longlong)(int)uVar8 * 0x28);
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
            }
            local_d4 = iVar7;
            local_c0 = puVar26;
            cVar6 = FUN_1412770ea(lVar11);
            if ((cVar6 != '\0') && ((longlong)*(int *)(lVar11 + 0xa8) != 0)) {
              puVar23 = *(undefined8 **)(lVar11 + 0xa0);
              puVar21 = puVar23 + (longlong)*(int *)(lVar11 + 0xa8) * 2;
              do {
                uVar5 = *puVar23;
                lVar11 = puVar23[1];
                if (lVar11 != 0) {
                  LOCK();
                  *(int *)(lVar11 + 0xc) = *(int *)(lVar11 + 0xc) + 1;
                  UNLOCK();
                }
                iVar7 = *(int *)(local_d0 + 0x110);
                *(uint *)(local_d0 + 0x110) = iVar7 + 1U;
                if (*(uint *)(local_d0 + 0x114) < iVar7 + 1U) {
                  FUN_14060ef9e(local_c8,iVar7);
                }
                lVar9 = *(longlong *)local_c8;
                *(undefined8 *)(lVar9 + (longlong)iVar7 * 0x10) = uVar5;
                *(longlong *)(lVar9 + 8 + (longlong)iVar7 * 0x10) = lVar11;
                puVar23 = puVar23 + 2;
              } while (puVar23 != puVar21);
            }
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar12 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar2 = (int *)((longlong)plVar12 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
            uVar24 = uVar24 & ~(uint)uVar19;
            puVar10 = *(uint **)(local_a8 + 0x30);
            if (*(uint **)(local_a8 + 0x30) == (uint *)0x0) {
              puVar10 = local_90;
            }
            uVar4 = *(uint *)(local_a8 + 0x38);
            iVar25 = (int)local_c0;
            lVar11 = (longlong)iVar25;
            uVar8 = puVar10[lVar11] & uVar24;
            puVar26 = local_c0;
            iVar7 = local_d4;
            if (uVar8 == 0) {
              iVar17 = uVar4 + 0x1e;
              if (-1 < (int)(uVar4 - 1)) {
                iVar17 = uVar4 - 1;
              }
              iVar17 = iVar17 >> 5;
              iVar7 = local_d4 + 0x20;
              iVar16 = iVar17;
              if (iVar17 < iVar25) {
                iVar16 = iVar25;
              }
              if (iVar25 < iVar17) {
                lVar9 = 0;
                do {
                  uVar8 = puVar10[lVar11 + lVar9 + 1];
                  if (uVar8 != 0) {
                    puVar26 = (uint *)(ulonglong)(iVar25 + (int)lVar9 + 1);
                    uVar24 = 0xffffffff;
                    goto LAB_143d44864;
                  }
                  iVar7 = iVar7 + 0x20;
                  lVar9 = lVar9 + 1;
                } while (iVar16 - lVar11 != lVar9);
                uVar24 = 0xffffffff;
                iVar25 = iVar16;
              }
              puVar26 = (uint *)(ulonglong)(iVar25 + 1);
              uVar8 = uVar4;
            }
            else {
LAB_143d44864:
              uVar19 = (ulonglong)(-uVar8 & uVar8);
              uVar3 = uVar19 * 2 + 1;
              lVar11 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              uVar8 = (iVar7 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
              if ((int)uVar4 <= (int)uVar8) {
                uVar8 = uVar4;
              }
            }
          } while (uVar8 != (uint)local_b0);
        }
LAB_143d448c8:
        plVar12 = local_a0 + 2;
        param_1 = local_d0;
        lVar11 = local_b8;
      } while (plVar12 != local_98);
    }
    local_88 = 0;
    uStack_80 = 0;
    FUN_140be3fb2(lVar11);
    FUN_143d48d10(param_1 + 0x88,&local_88);
    FUN_140be4274(local_88,uStack_80 & 0xffffffff);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    FUN_141276ec9(local_78,uStack_70 & 0xffffffff);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143d4460c:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d44916 FUN_143d44916 body=2345 status=ok
// SIG undefined FUN_143d44916(void)

/* WARNING: Removing unreachable block (ram,0x000143d44de6) */
/* WARNING: Removing unreachable block (ram,0x000143d44dec) */
/* WARNING: Removing unreachable block (ram,0x000143d44c42) */
/* WARNING: Removing unreachable block (ram,0x000143d44c48) */
/* WARNING: Removing unreachable block (ram,0x000143d44ed6) */
/* WARNING: Removing unreachable block (ram,0x000143d44edc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_143d44916(ulonglong *param_1,ulonglong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  double dVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  char cVar12;
  byte bVar13;
  bool bVar14;
  int iVar15;
  DWORD DVar16;
  DWORD DVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  ulonglong uStack_1e0;
  ulonglong local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  ulonglong local_1c0;
  undefined8 local_1b8;
  ulonglong uStack_1b0;
  ulonglong local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulonglong local_190;
  ulonglong uStack_188;
  ulonglong local_180;
  undefined8 local_178;
  longlong *plStack_170;
  undefined4 local_168;
  undefined1 *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong *plStack_140;
  undefined1 *local_138;
  ulonglong local_130;
  ulonglong uStack_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong uStack_110;
  ulonglong local_108;
  undefined8 local_100;
  longlong *plStack_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_c8;
  int local_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  ulonglong local_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_1447a8aa0(param_3,0);
  }
  uVar24 = DAT_14cb1c840;
  if (param_4 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_158,uVar24,param_4);
    plVar19 = uStack_150;
    puVar10 = local_158;
    if ((local_158 == (undefined1 *)0x0) || (uStack_150 == (longlong *)0x0)) {
      plVar19 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(uStack_150 + 1) = (int)uStack_150[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)uStack_150 + 0xc) = *(int *)((longlong)uStack_150 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar20 = uStack_150 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*uStack_150)(uStack_150);
        LOCK();
        piVar2 = (int *)((longlong)plVar19 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
    plVar20 = uStack_150;
    if (uStack_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_150 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*uStack_150)(uStack_150);
        LOCK();
        piVar2 = (int *)((longlong)plVar20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
    }
    if (plVar19 != (longlong *)0x0) {
      iVar15 = (int)plVar19[1];
      do {
        plVar20 = (longlong *)0x0;
        if (iVar15 == 0) break;
        LOCK();
        iVar11 = (int)plVar19[1];
        bVar23 = iVar15 == iVar11;
        if (bVar23) {
          *(int *)(plVar19 + 1) = iVar15 + 1;
          iVar11 = iVar15;
        }
        iVar15 = iVar11;
        UNLOCK();
        plVar20 = plVar19;
      } while (!bVar23);
      LOCK();
      piVar2 = (int *)((longlong)plVar19 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
      puVar9 = DAT_14cb7cfd8;
      if (plVar20 != (longlong *)0x0) {
        if (puVar10 == (undefined1 *)0x0) {
          bVar13 = 0;
        }
        else {
          lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          iVar15 = *(int *)(lVar21 + 0xc60);
          if (iVar15 == 0x40000002) {
            uVar24 = *DAT_14cb7cfd8;
LAB_143d44aa7:
            uVar18 = 0;
            lVar21 = DAT_14cb7cff0;
          }
          else {
            if (DAT_14c86a9f8 == 0) {
              uVar24 = *DAT_14cb7cfd8;
            }
            else if (iVar15 == 2) {
              uVar24 = *DAT_14cb7cfd8;
              iVar15 = 2;
            }
            else {
              if (iVar15 == 1) {
                DVar16 = FUN_140ad26c0();
                DVar17 = GetCurrentThreadId();
                bVar23 = DVar16 == DVar17;
                iVar15 = *(int *)(lVar21 + 0xc60);
              }
              else {
                bVar23 = false;
              }
              uVar24 = puVar9[bVar23 ^ 1];
              if (iVar15 == 0x40000002) goto LAB_143d44aa7;
            }
            lVar21 = DAT_14cb7cff0;
            bVar23 = true;
            if (((DAT_14c86a9f8 & 1) != 0) && (iVar15 != 2)) {
              if (iVar15 == 1) {
                DVar16 = FUN_140ad26c0();
                DVar17 = GetCurrentThreadId();
                bVar23 = DVar16 == DVar17;
              }
              else {
                bVar23 = false;
              }
            }
            uVar18 = (ulonglong)(bVar23 ^ 1);
          }
          uVar5 = *(undefined4 *)(lVar21 + uVar18 * 4);
          uVar7 = *(undefined8 *)(param_5 + 0x18);
          plVar19 = *(longlong **)(param_5 + 0x20);
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
            UNLOCK();
          }
          local_c8 = 0xffffffffffffffff;
          local_c0 = 0;
          local_b8 = _DAT_14cb7d1a0;
          uStack_b0 = _DAT_14cb7d1a8;
          local_a8 = DAT_14cb7d1b0;
          local_a0 = _DAT_14cb7d1a0;
          uStack_98 = _DAT_14cb7d1a8;
          local_90 = DAT_14cb7d1b0;
          local_88 = 0;
          plStack_80 = (longlong *)0x0;
          local_78 = 0xffffffff;
          plStack_f8 = (longlong *)0x0;
          local_e0 = 0xffffffffffffffff;
          local_1a8 = param_1[2];
          local_1b8 = *param_1;
          uStack_1b0 = param_1[1];
          uStack_1a0 = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
          uStack_198 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
          local_190 = DAT_14cb1c870;
          local_118 = uStack_1a0;
          uStack_110 = uStack_198;
          local_108 = DAT_14cb1c870;
          local_100 = 0;
          local_f0 = 0xffffffff;
          local_d8 = 0;
          local_138 = puVar10;
          local_158 = &DAT_3f8000003f800000;
          uStack_150 = (longlong *)((ulonglong)uStack_150._4_4_ << 0x20);
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
            UNLOCK();
          }
          local_148 = uVar7;
          plStack_140 = plVar19;
          local_130 = local_1b8;
          uStack_128 = uStack_1b0;
          local_120 = local_1a8;
          local_e8 = uVar24;
          local_e4 = uVar5;
          cVar12 = FUN_14488902f(&local_158,&local_c8);
          plVar1 = plStack_f8;
          if (plStack_f8 != (longlong *)0x0) {
            LOCK();
            plVar3 = plStack_f8 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plStack_f8)(plStack_f8);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
          if (plStack_140 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plStack_140 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plStack_140 + 0x10))();
            }
          }
          bVar13 = 0;
          if (cVar12 != '\0') {
            local_1b8 = 0xffffffffffffffff;
            uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
            local_1a8 = _DAT_14cb7d1a0;
            uStack_1a0 = _DAT_14cb7d1a8;
            uStack_198 = DAT_14cb7d1b0;
            local_190 = _DAT_14cb7d1a0;
            uStack_188 = _DAT_14cb7d1a8;
            local_180 = DAT_14cb7d1b0;
            local_178 = 0;
            plStack_170 = (longlong *)0x0;
            local_168 = 0xffffffff;
            plStack_f8 = (longlong *)0x0;
            local_e0 = 0xffffffffffffffff;
            local_1d8 = param_2[2];
            local_1e8 = *param_2;
            uStack_1e0 = param_2[1];
            local_1d0 = (undefined4)DAT_14cb1c860;
            uStack_1cc = DAT_14cb1c860._4_4_;
            uStack_1c8 = (undefined4)DAT_14cb1c868;
            uStack_1c4 = DAT_14cb1c868._4_4_;
            local_1c0 = DAT_14cb1c870;
            local_118 = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
            uStack_110 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
            local_108 = DAT_14cb1c870;
            local_100 = 0;
            local_f0 = 0xffffffff;
            local_d8 = 0;
            local_138 = puVar10;
            local_158 = &DAT_3f8000003f800000;
            uStack_150 = (longlong *)((ulonglong)uStack_150 & 0xffffffff00000000);
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
              UNLOCK();
            }
            local_148 = uVar7;
            plStack_140 = plVar19;
            local_130 = local_1e8;
            uStack_128 = uStack_1e0;
            local_120 = local_1d8;
            local_e8 = uVar24;
            local_e4 = uVar5;
            cVar12 = FUN_14488902f(&local_158,&local_1b8);
            plVar1 = plStack_f8;
            if (plStack_f8 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_f8 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plStack_f8)(plStack_f8);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
            if (plStack_140 != (longlong *)0x0) {
              LOCK();
              piVar2 = (int *)((longlong)plStack_140 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plStack_140 + 0x10))();
              }
            }
            if (cVar12 == '\0') {
              bVar13 = 0;
            }
            else {
              local_1e8 = 0;
              uStack_1e0 = 0;
              local_158 = &DAT_3f8000003f800000;
              uStack_150 = (longlong *)((ulonglong)uStack_150 & 0xffffffff00000000);
              if (plVar19 == (longlong *)0x0) {
                plStack_140 = (longlong *)0x0;
              }
              else {
                LOCK();
                *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
                UNLOCK();
                plStack_140 = plVar19;
              }
              local_138 = puVar10;
              local_120 = local_a8;
              local_130 = local_b8;
              uStack_128 = uStack_b0;
              uVar24 = local_c8._4_4_;
              if (local_c0 != 1) {
                uVar24 = 0xffffffff;
              }
              uVar5 = (undefined4)local_c8;
              if (local_c0 != 1) {
                uVar5 = 0xffffffff;
              }
              local_100 = CONCAT44(uVar24,uVar5);
              local_108 = uStack_198;
              uVar24 = local_1b8._4_4_;
              if ((int)uStack_1b0 != 1) {
                uVar24 = 0xffffffff;
              }
              uVar5 = 0xffffffff;
              if ((int)uStack_1b0 == 1) {
                uVar5 = (undefined4)local_1b8;
              }
              local_118 = local_1a8;
              uStack_110 = uStack_1a0;
              plStack_f8 = (longlong *)CONCAT44(uVar24,uVar5);
              local_148 = uVar7;
              bVar13 = FUN_147e48101(&local_158,&local_1e8);
              if (plStack_140 != (longlong *)0x0) {
                LOCK();
                piVar2 = (int *)((longlong)plStack_140 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plStack_140 + 0x10))();
                }
              }
              bVar23 = (int)uStack_1e0 != 0;
              if ((0 < (int)uStack_1e0 & bVar13) == 1) {
                bVar14 = true;
                lVar21 = 0x10;
                lVar22 = 0;
                do {
                  puVar4 = (undefined8 *)((local_1e8 - 0x10) + lVar21);
                  local_158 = (undefined1 *)*puVar4;
                  uStack_150 = (longlong *)puVar4[1];
                  dVar6 = *(double *)(local_1e8 + lVar21);
                  if (!bVar14) {
                    dVar6 = dVar6 + (double)*(float *)(param_5 + 4);
                  }
                  iVar15 = (int)param_3[1];
                  *(uint *)(param_3 + 1) = iVar15 + 1U;
                  if (*(uint *)((longlong)param_3 + 0xc) < iVar15 + 1U) {
                    FUN_1403e3958(param_3,iVar15);
                  }
                  lVar8 = *param_3;
                  puVar4 = (undefined8 *)(lVar8 + (longlong)iVar15 * 0x18);
                  *puVar4 = local_158;
                  puVar4[1] = uStack_150;
                  *(double *)(lVar8 + 0x10 + (longlong)iVar15 * 0x18) = dVar6;
                  lVar22 = lVar22 + 1;
                  lVar21 = lVar21 + 0x18;
                  bVar14 = false;
                } while (lVar22 < (int)uStack_1e0);
              }
              if (local_1e8 != 0) {
                FUN_1400020a8();
              }
              bVar13 = bVar13 & bVar23;
            }
            plVar1 = plStack_170;
            if (plStack_170 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_170 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plStack_170)(plStack_170);
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
          plVar1 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            plVar3 = plStack_80 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plStack_80)(plStack_80);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar19 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
          }
        }
        LOCK();
        plVar19 = plVar20 + 1;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)*plVar19 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar2 = (int *)((longlong)plVar20 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
        goto LAB_143d450d0;
      }
    }
  }
  bVar13 = 0;
LAB_143d450d0:
  if ((local_70 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return bVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d45262 FUN_143d45262 body=762 status=ok
// SIG undefined FUN_143d45262(void)

longlong FUN_143d45262(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                      int *param_5,uint *param_6,uint *param_7,undefined1 *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  undefined1 local_58 [8];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_8 = 0;
  *param_7 = 0xffffffff;
  iVar1 = *param_5;
  iVar2 = param_5[2];
  iVar3 = *(int *)(param_4 + 7);
  if ((longlong)iVar3 != 0) {
    lVar10 = (longlong)iVar3 * 4;
    lVar12 = 0;
    do {
      lVar13 = (longlong)*(int *)(param_4[6] + lVar12 * 4) * 0x68;
      if ((*(int *)(*(longlong *)(param_1 + 0x40) + 0x2c + lVar13) == iVar1) &&
         (*(int *)(*(longlong *)(param_1 + 0x40) + 0x34 + lVar13) == iVar2)) {
        uVar8 = (uint)lVar12;
        if ((int)uVar8 < iVar3 && -1 < (int)uVar8) {
          uVar8 = *(uint *)(param_4[6] + (ulonglong)(uVar8 & 0x7fffffff) * 4);
          *param_7 = uVar8;
          lVar10 = (longlong)(int)uVar8 * 0x68 + *(longlong *)(param_1 + 0x40);
          goto LAB_143d454ff;
        }
        break;
      }
      lVar12 = lVar12 + 1;
      lVar10 = lVar10 + -4;
    } while (lVar10 != 0);
  }
  uVar8 = *param_6;
  if (((int)uVar8 < 0) || (*(int *)(param_1 + 0x68) <= (int)uVar8)) {
LAB_143d45351:
    local_68 = (longlong *)(param_1 + 0x40);
    uVar6 = *param_2;
    uVar4 = *(undefined4 *)(param_2 + 1);
    uVar7 = *param_3;
    uVar5 = *(undefined4 *)(param_3 + 1);
    local_70 = *param_4;
    local_78 = *(undefined4 *)(param_4 + 1);
    local_74 = param_5[1];
    *param_6 = uVar8 + 1;
    *param_7 = uVar8;
    local_60 = param_1;
    FUN_141885b96(local_68,local_58,uVar8);
    *local_50 = 0xc69c4000;
    local_50[1] = uVar6;
    *(undefined4 *)(local_50 + 2) = uVar4;
    *(undefined8 *)((longlong)local_50 + 0x14) = uVar7;
    *(undefined4 *)((longlong)local_50 + 0x1c) = uVar5;
    local_50[4] = local_70;
    *(undefined4 *)(local_50 + 5) = local_78;
    *(int *)((longlong)local_50 + 0x2c) = iVar1;
    *(int *)(local_50 + 6) = local_74;
    *(int *)((longlong)local_50 + 0x34) = iVar2;
    local_50[7] = 0;
    local_50[8] = 0;
    *(undefined1 *)(local_50 + 9) = 0;
    local_50[10] = 0;
    local_50[0xb] = 0;
    local_50[0xc] = 0;
    lVar10 = param_4[6];
    lVar12 = (longlong)*(int *)(param_4 + 7);
    if (lVar12 != 0) {
      uVar9 = 0;
      do {
        if (*(uint *)(lVar10 + uVar9) == *param_7) {
          if ((~uVar9 & 0x3fffffffc) != 0) goto LAB_143d45462;
          break;
        }
        uVar9 = uVar9 + 4;
      } while (lVar12 * 4 - uVar9 != 0);
    }
    uVar8 = *(int *)(param_4 + 7) + 1;
    *(uint *)(param_4 + 7) = uVar8;
    if (*(uint *)((longlong)param_4 + 0x3c) < uVar8) {
      FUN_1447808da(param_4 + 6);
      lVar10 = param_4[6];
    }
    *(uint *)(lVar10 + lVar12 * 4) = *param_7;
LAB_143d45462:
    *param_8 = 1;
    lVar10 = (longlong)(int)*param_7 * 0x68 + *local_68;
    if (*(int *)((longlong)param_4 + 0xc) == 2) {
      lVar12 = *(longlong *)(local_60 + 0x1c0);
      iVar1 = *(int *)(local_60 + 0x1c8);
      lVar13 = (longlong)iVar1;
      if (lVar13 != 0) {
        uVar9 = 0;
        do {
          if (*(uint *)(lVar12 + uVar9) == *param_7) {
            if ((~uVar9 & 0x3fffffffc) != 0) goto LAB_143d454f6;
            break;
          }
          uVar9 = uVar9 + 4;
        } while (lVar13 * 4 - uVar9 != 0);
      }
      *(uint *)(local_60 + 0x1c8) = iVar1 + 1U;
      if (*(uint *)(local_60 + 0x1cc) < iVar1 + 1U) {
        plVar11 = (longlong *)(local_60 + 0x1c0);
        FUN_1447808da(plVar11,iVar1);
        lVar12 = *plVar11;
      }
      *(uint *)(lVar12 + lVar13 * 4) = *param_7;
    }
LAB_143d454f6:
    FUN_1402954e1(0,0);
LAB_143d454ff:
    if (lVar10 != 0) {
      if ((longlong)*(int *)(param_4 + 9) != 0) {
        lVar12 = param_4[8];
        lVar13 = (longlong)*(int *)(param_4 + 9) << 4;
        do {
          FUN_1401aa203(lVar10 + 0x50,lVar12);
          lVar12 = lVar12 + 0x10;
          lVar13 = lVar13 + -0x10;
        } while (lVar13 != 0);
      }
      goto LAB_143d45532;
    }
  }
  else {
    lVar10 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x60);
    }
    if ((*(uint *)(lVar10 + (ulonglong)(uVar8 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0)
    goto LAB_143d45351;
  }
  lVar10 = 0;
LAB_143d45532:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 143d4555e FUN_143d4555e body=1682 status=ok
// SIG undefined FUN_143d4555e(void)

void FUN_143d4555e(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  char param_5,undefined8 *param_6,longlong param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  double dVar3;
  byte bVar4;
  char cVar5;
  float *pfVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 unaff_RBP;
  ulonglong uVar11;
  float fVar12;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 *local_170;
  undefined4 *local_168;
  byte *pbStack_160;
  float local_158;
  uint local_14c;
  undefined8 *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  float local_108;
  undefined8 local_100;
  undefined4 local_f8;
  byte local_ed;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined1 uStack_a7;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [24];
  longlong local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_ec = 0;
  local_ed = 0;
  if (param_5 == '\0') {
    local_170 = (undefined8 *)(param_1 + 0x38);
    local_c0 = *(undefined4 *)(param_6 + 1);
    local_178 = &local_c8;
    local_c8 = *param_6;
    local_d8 = *param_3;
    local_d0 = *(undefined4 *)(param_3 + 1);
    local_e8 = *param_2;
    local_e0 = *(undefined4 *)(param_2 + 1);
    pbStack_160 = &local_ed;
    local_168 = &local_ec;
    pfVar6 = (float *)FUN_143d45262(param_1,&local_e8,&local_d8,param_4);
    if (pfVar6 == (float *)0x0) goto LAB_143d45ba1;
    uVar11 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),local_ed);
  }
  else {
    iStack_a0 = *(int *)(param_6 + 1);
    uVar7 = *param_6;
    local_a8 = (undefined1)uVar7;
    uStack_a7 = (undefined1)((ulonglong)uVar7 >> 8);
    uStack_a6 = (undefined2)((ulonglong)uVar7 >> 0x10);
    uStack_a4 = (undefined4)((ulonglong)uVar7 >> 0x20);
    pfVar6 = (float *)FUN_14045a5f8(param_4,&local_a8,param_1 + 0x40);
    if (pfVar6 == (float *)0x0) {
      if (*(longlong **)(param_7 + 0x20) != (longlong *)0x0 && *(int *)(param_7 + 0x28) != 0) {
        cVar5 = (**(code **)(**(longlong **)(param_7 + 0x20) + 0x30))();
        if (cVar5 != '\0') {
          local_b0 = *(undefined4 *)(param_6 + 1);
          local_b8 = *param_6;
          lVar10 = FUN_140bcac51(param_4);
          local_a8 = 0;
          uStack_a7 = 0;
          uStack_a6 = 0;
          uStack_a4 = 0;
          iStack_a0 = 0;
          FUN_1401aa3da(&local_a8,param_7 + 0x20);
          FUN_1401aa203(lVar10 + 0x10,&local_a8);
          if (iStack_a0 != 0) {
            puVar9 = (undefined8 *)
                     CONCAT44(uStack_a4,CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8)));
            if (puVar9 == (undefined8 *)0x0) goto LAB_143d45ba1;
            (**(code **)*puVar9)(puVar9,0);
            FUN_1446efa72(&local_a8,0,0,0x10);
            iStack_a0 = 0;
          }
          if (CONCAT44(uStack_a4,CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8))) != 0) {
            FUN_1400020a8();
          }
        }
      }
      goto LAB_143d45ba1;
    }
    uVar11 = 0;
  }
  if (*(char *)(param_7 + 0x93) == '\0' && (uVar11 & 1) == 0) {
LAB_143d45864:
    uVar11 = 0;
  }
  else {
    if (*(char *)(param_7 + 0x93) == '\0') {
      fVar12 = -20000.0;
    }
    else if (*(float **)(param_7 + 0x38) == (float *)0x0) {
      fVar12 = 0.0;
      if (((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
         ((int)uVar1 < DAT_14c9647dc)) {
        plVar8 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((plVar8 != (longlong *)0x0) && ((int)plVar8[2] == *(int *)(param_1 + 0xc))) &&
           ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
            lVar10 = *plVar8;
          }
          else {
            lVar10 = 0;
          }
          if (((*(longlong *)(lVar10 + 0x30) != 0) &&
              (lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x30) + 0x360), lVar10 != 0)) &&
             (plVar8 = *(longlong **)(lVar10 + 0x178), plVar8 != (longlong *)0x0)) {
            dVar3 = (double)(**(code **)(*plVar8 + 0x640))();
            fVar12 = (float)dVar3;
          }
        }
      }
    }
    else {
      fVar12 = **(float **)(param_7 + 0x38);
    }
    if (((uVar11 & 1) == 0) &&
       ((*(char *)(param_7 + 0x93) != '\x01' || (fVar12 < *pfVar6 || fVar12 == *pfVar6))))
    goto LAB_143d45864;
    local_170 = (undefined8 *)CONCAT44(local_170._4_4_,fVar12);
    local_178 = (undefined8 *)CONCAT71(local_178._1_7_,(char)(uVar11 & 0xffffffffffffff01));
    local_168 = (undefined4 *)0x0;
    FUN_1405f63aa(param_1,pfVar6,local_ec,param_7);
    uVar11 = CONCAT71((int7)((uVar11 & 0xffffffffffffff01) >> 8),1);
  }
  local_a8 = 0;
  uStack_a4 = 0;
  iStack_a0 = 0;
  uStack_9c = 0;
  FUN_144976b9c(&local_a8,*(undefined8 *)(pfVar6 + 0xe));
  *(ulonglong *)(param_7 + 0x10) =
       CONCAT44(uStack_a4,CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8)));
  *(ulonglong *)(param_7 + 0x18) = CONCAT44(uStack_9c,iStack_a0);
  *(float *)(param_7 + 0x30) = *pfVar6;
  if (*(longlong **)(param_7 + 0x20) != (longlong *)0x0 && *(int *)(param_7 + 0x28) != 0) {
    cVar5 = (**(code **)(**(longlong **)(param_7 + 0x20) + 0x30))();
    if (cVar5 != '\0') {
      local_a8 = 0;
      uStack_a7 = 0;
      uStack_a6 = 0;
      uStack_a4 = 0;
      iStack_a0 = 0;
      FUN_1401aa3da(&local_a8,param_7 + 0x20);
      FUN_1401aa203(pfVar6 + 0x14,&local_a8);
      if (iStack_a0 != 0) {
        puVar9 = (undefined8 *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8)));
        if (puVar9 == (undefined8 *)0x0) goto LAB_143d45950;
        (**(code **)*puVar9)(puVar9,0);
        FUN_1446efa72(&local_a8,0,0,0x10);
        iStack_a0 = 0;
      }
      if (CONCAT44(uStack_a4,CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8))) != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143d45950:
  if (*(longlong *)(param_7 + 0x50) != 0) {
    local_14c = (uint)uVar11;
    local_100 = *(undefined8 *)(param_1 + 0x2c);
    local_f8 = *(undefined4 *)(param_1 + 0x34);
    local_148 = param_3;
    FUN_14013e9cc(&local_a8,pfVar6);
    puVar2 = *(undefined1 **)(param_7 + 0x50);
    *puVar2 = local_a8;
    local_a8 = 0;
    *(ulonglong *)(puVar2 + 4) = CONCAT44(iStack_a0,uStack_a4);
    uStack_a4 = 0;
    iStack_a0 = 0;
    FUN_1404e49fa(puVar2 + 0x10,local_98);
    puVar2[1] = uStack_a7;
    uStack_a7 = 0;
    *(undefined8 *)(puVar2 + 0x38) = local_70;
    *(undefined8 *)(puVar2 + 0x40) = uStack_68;
    *(undefined8 *)(puVar2 + 0x58) = local_50;
    *(undefined4 *)(puVar2 + 0x48) = local_60;
    *(undefined4 *)(puVar2 + 0x4c) = uStack_5c;
    *(undefined4 *)(puVar2 + 0x50) = uStack_58;
    *(undefined4 *)(puVar2 + 0x54) = uStack_54;
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    uVar11 = (ulonglong)local_14c;
    param_3 = local_148;
  }
  bVar4 = local_ed;
  if ((byte)((byte)uVar11 | local_ed) == 1) {
    FUN_1449fc321(local_ec,param_1 + 0x180,param_1 + 0x40);
    if (((*(int *)(param_1 + 0xc) == 0) || (uVar1 = *(uint *)(param_1 + 8), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) goto LAB_143d45ba1;
    puVar9 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar9 == (undefined8 *)0x0) || (*(int *)(puVar9 + 2) != *(int *)(param_1 + 0xc))) ||
       ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) goto LAB_143d45ba1;
    if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
      uVar7 = *puVar9;
    }
    else {
      uVar7 = 0;
    }
    FUN_1405f658a(uVar7);
  }
  else if (((((*(int *)(param_1 + 0xc) == 0) || (uVar1 = *(uint *)(param_1 + 8), (int)uVar1 < 0)) ||
            (DAT_14c9647dc <= (int)uVar1)) ||
           ((lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar10 == 0 ||
            (*(int *)(lVar10 + 0x10) != *(int *)(param_1 + 0xc))))) ||
          ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)) goto LAB_143d45ba1;
  if (bVar4 == 0) {
    if ((byte)uVar11 != 0) {
      FUN_1405f6ef0(param_1,local_ec,*(undefined8 *)(pfVar6 + 0xe),*pfVar6);
    }
  }
  else {
    local_158 = *pfVar6;
    local_168 = *(undefined4 **)(pfVar6 + 0xe);
    pbStack_160 = *(byte **)(pfVar6 + 0x10);
    local_108 = pfVar6[0xd];
    local_170 = &local_110;
    local_110 = *(undefined8 *)(pfVar6 + 0xb);
    local_118 = *(undefined4 *)(param_4 + 1);
    local_178 = &local_120;
    local_120 = *param_4;
    local_130 = *param_3;
    local_128 = *(undefined4 *)(param_3 + 1);
    local_140 = *param_2;
    local_138 = *(undefined4 *)(param_2 + 1);
    FUN_1405f6b4e(param_1,local_ec);
  }
LAB_143d45ba1:
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d45bf2 FUN_143d45bf2 body=1287 status=ok
// SIG undefined FUN_143d45bf2(void)

void FUN_143d45bf2(longlong param_1,char *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined1 auStack_c8 [44];
  undefined4 local_9c;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_71;
  undefined1 local_70 [8];
  undefined8 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_2 == '\x02') {
    uVar7 = *(uint *)(param_2 + 4);
    uVar6 = *(uint *)(param_2 + 0x10);
    if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 0x68))) {
      lVar11 = param_1 + 0x50;
      if (*(longlong *)(param_1 + 0x60) != 0) {
        lVar11 = *(longlong *)(param_1 + 0x60);
      }
      if ((*(uint *)(lVar11 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0)
      goto LAB_143d4609c;
    }
    uVar7 = *(uint *)(param_2 + 0x18);
    if (uVar7 != 0) {
      uVar6 = uVar7 >> 0xd ^ uVar6 - uVar7;
      uVar14 = uVar6 << 8 ^ (-0x61c88647 - uVar7) - uVar6;
      uVar18 = uVar14 >> 0xd ^ (uVar7 - uVar6) - uVar14;
      uVar6 = uVar18 >> 0xc ^ (uVar6 - uVar14) - uVar18;
      uVar7 = uVar6 << 0x10 ^ (uVar14 - uVar18) - uVar6;
      uVar14 = uVar7 >> 5 ^ (uVar18 - uVar6) - uVar7;
      uVar6 = uVar14 >> 3 ^ (uVar6 - uVar7) - uVar14;
      uVar7 = uVar6 << 10 ^ (uVar7 - uVar14) - uVar6;
      uVar6 = uVar7 >> 0xf ^ uVar14 - (uVar6 + uVar7);
    }
    uVar9 = FUN_140726908(param_1 + 0x78,uVar6,param_2 + 0x10);
    uVar7 = *(uint *)(param_2 + 0x1c);
    uVar6 = *(uint *)(param_2 + 0x24);
    if (uVar6 != 0) {
      uVar7 = uVar6 >> 0xd ^ uVar7 - uVar6;
      uVar14 = uVar7 << 8 ^ (-0x61c88647 - uVar6) - uVar7;
      uVar18 = uVar14 >> 0xd ^ (uVar6 - uVar7) - uVar14;
      uVar6 = uVar18 >> 0xc ^ (uVar7 - uVar14) - uVar18;
      uVar7 = uVar6 << 0x10 ^ (uVar14 - uVar18) - uVar6;
      uVar14 = uVar7 >> 5 ^ (uVar18 - uVar6) - uVar7;
      uVar6 = uVar14 >> 3 ^ (uVar6 - uVar7) - uVar14;
      uVar7 = uVar6 << 10 ^ (uVar7 - uVar14) - uVar6;
      uVar7 = uVar7 >> 0xf ^ uVar14 - (uVar6 + uVar7);
    }
    local_98 = (longlong *)(param_1 + 0x40);
    local_88 = param_1;
    uVar9 = FUN_140726d02(uVar9,uVar7,param_2 + 0x1c);
    local_80 = *(undefined8 *)(param_2 + 0x28);
    local_78 = *(undefined4 *)(param_2 + 0x30);
    puVar10 = (undefined8 *)FUN_14072739f(&local_80,uVar9,&local_71);
    iVar8 = *(int *)(param_2 + 4);
    local_90 = (longlong)iVar8;
    uVar9 = *(undefined8 *)(param_2 + 0x34);
    local_9c = *(undefined4 *)(param_2 + 0x3c);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    uVar3 = *puVar10;
    uVar1 = *(undefined4 *)(puVar10 + 1);
    FUN_141885b96(local_98,local_70);
    lVar17 = local_88;
    *local_68 = 0xc69c4000;
    local_68[1] = uVar4;
    local_68[2] = uVar5;
    local_68[3] = uVar2;
    local_68[4] = uVar3;
    *(undefined4 *)(local_68 + 5) = uVar1;
    *(undefined8 *)((longlong)local_68 + 0x2c) = uVar9;
    *(undefined4 *)((longlong)local_68 + 0x34) = local_9c;
    local_68[7] = 0;
    local_68[8] = 0;
    *(undefined1 *)(local_68 + 9) = 0;
    local_68[10] = 0;
    local_68[0xb] = 0;
    local_68[0xc] = 0;
    lVar11 = puVar10[6];
    iVar12 = *(int *)(puVar10 + 7);
    lVar19 = (longlong)iVar12;
    if (lVar19 != 0) {
      uVar13 = 0;
      do {
        if (*(int *)(lVar11 + uVar13) == iVar8) {
          if ((int)(~uVar13 >> 2) != 0) goto LAB_143d45ea6;
          break;
        }
        uVar13 = uVar13 + 4;
      } while (lVar19 * 4 - uVar13 != 0);
    }
    *(uint *)(puVar10 + 7) = iVar12 + 1U;
    if (*(uint *)((longlong)puVar10 + 0x3c) < iVar12 + 1U) {
      FUN_1447808da(puVar10 + 6,iVar12);
      lVar11 = puVar10[6];
    }
    *(int *)(lVar11 + lVar19 * 4) = iVar8;
LAB_143d45ea6:
    FUN_1402954e1(0,0);
    puVar20 = (undefined8 *)(local_90 * 0x68 + *local_98);
    if ((longlong)*(int *)(puVar10 + 9) != 0) {
      lVar11 = puVar10[8];
      lVar19 = (longlong)*(int *)(puVar10 + 9) << 4;
      do {
        FUN_1401aa203(puVar20 + 10,lVar11);
        lVar11 = lVar11 + 0x10;
        lVar19 = lVar19 + -0x10;
      } while (lVar19 != 0);
    }
    *(undefined1 *)(puVar20 + 9) = 1;
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    puVar20[8] = puVar20[7];
    uVar9 = *(undefined8 *)(param_2 + 0x48);
    puVar20[7] = uVar9;
    *puVar20 = 0xbf800000;
    puVar20[8] = uVar9;
    puVar20[7] = *(undefined8 *)(param_2 + 0x40);
    *(undefined4 *)puVar20 = uVar1;
    *(undefined4 *)((longlong)puVar20 + 4) = 0;
    FUN_1449fc321(*(undefined4 *)(param_2 + 4),lVar17 + 0x180);
    if (((((*(int *)(lVar17 + 0xc) != 0) && (uVar7 = *(uint *)(lVar17 + 8), -1 < (int)uVar7)) &&
         ((int)uVar7 < DAT_14c9647dc)) &&
        ((puVar16 = (undefined8 *)
                    ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
         puVar16 != (undefined8 *)0x0 && (*(int *)(puVar16 + 2) == *(int *)(lVar17 + 0xc))))) &&
       ((*(uint *)(puVar16 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar16 + 1) & 0x10200000) == 0) {
        uVar9 = *puVar16;
      }
      else {
        uVar9 = 0;
      }
      FUN_1405f658a(uVar9);
    }
    iVar8 = *(int *)(puVar10 + 0xf);
    lVar11 = (longlong)iVar8;
    if (0 < lVar11) {
      iVar12 = *(int *)((longlong)puVar20 + 0x2c);
      iVar15 = *(int *)((longlong)puVar20 + 0x34);
      lVar17 = puVar10[0xe];
      lVar19 = 0;
      while ((*(int *)(lVar17 + lVar19) != iVar12 || (*(int *)(lVar17 + 8 + lVar19) != iVar15))) {
        lVar19 = lVar19 + 0x20;
        if (lVar11 << 5 == lVar19) goto LAB_143d4609c;
      }
      if (lVar17 + lVar19 == 0) goto LAB_143d4609c;
      lVar21 = (longlong)*(int *)(lVar17 + 0x18 + lVar19);
      if (lVar21 != 0) {
        lVar11 = *(longlong *)(lVar17 + 0x10 + lVar19);
        lVar21 = lVar21 << 4;
        do {
          FUN_1401aa203(puVar20 + 10,lVar11);
          lVar11 = lVar11 + 0x10;
          lVar21 = lVar21 + -0x10;
        } while (lVar21 != 0);
        iVar12 = *(int *)((longlong)puVar20 + 0x2c);
        iVar15 = *(int *)((longlong)puVar20 + 0x34);
        lVar17 = puVar10[0xe];
        iVar8 = *(int *)(puVar10 + 0xf);
        lVar11 = (longlong)iVar8;
      }
      if (iVar8 == 0) goto LAB_143d4609c;
      lVar19 = 0;
      uVar7 = 0;
      do {
        if ((*(int *)(lVar17 + lVar19) == iVar12) && (*(int *)(lVar17 + 8 + lVar19) == iVar15)) {
          if ((-1 < (int)uVar7) && ((int)uVar7 < iVar8)) {
            lVar11 = (ulonglong)(uVar7 & 0x7fffffff) * 0x20;
            FUN_1402954e1(*(undefined8 *)(lVar17 + 0x10 + lVar11),
                          *(undefined4 *)(lVar17 + 0x18 + lVar11));
            if (*(longlong *)(lVar17 + 0x10 + lVar11) != 0) {
              FUN_1400020a8();
            }
            iVar8 = *(int *)(puVar10 + 0xf);
            if (iVar8 - 1U != uVar7) {
              memmove((void *)(lVar17 + lVar11),(void *)(lVar17 + lVar11 + 0x20),
                      (longlong)(int)((iVar8 - 1U) - uVar7) << 5);
              iVar8 = *(int *)(puVar10 + 0xf);
            }
            *(int *)(puVar10 + 0xf) = iVar8 + -1;
            FUN_141885eba(puVar10 + 0xe);
          }
          break;
        }
        uVar7 = uVar7 + 1;
        lVar19 = lVar19 + 0x20;
      } while (lVar11 * 0x20 != lVar19);
    }
  }
LAB_143d4609c:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d460fa FUN_143d460fa body=235 status=ok
// SIG undefined FUN_143d460fa(void)

void FUN_143d460fa(longlong param_1,char *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if (*param_2 == '\x03') {
    uVar2 = *(uint *)(param_2 + 4);
    if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 0x68))) {
      lVar4 = param_1 + 0x50;
      if (*(longlong *)(param_1 + 0x60) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x60);
      }
      if ((*(uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x40);
        lVar3 = (ulonglong)uVar2 * 0x68;
        uVar1 = *(undefined4 *)(param_2 + 0xc);
        *(undefined8 *)(lVar4 + 0x40 + lVar3) = *(undefined8 *)(lVar4 + 0x38 + lVar3);
        *(undefined8 *)(lVar4 + 0x38 + lVar3) = *(undefined8 *)(param_2 + 0x40);
        *(undefined4 *)(lVar4 + lVar3) = uVar1;
        *(undefined4 *)(lVar4 + 4 + lVar3) = 0;
        FUN_1449fc321(*(undefined4 *)(param_2 + 4),param_1 + 0x180,param_1 + 0x40);
        if (((*(int *)(param_1 + 0xc) != 0) && (uVar2 = *(uint *)(param_1 + 8), -1 < (int)uVar2)) &&
           ((int)uVar2 < DAT_14c9647dc)) {
          puVar6 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (((puVar6 != (undefined8 *)0x0) && (*(int *)(puVar6 + 2) == *(int *)(param_1 + 0xc)))
             && ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
              uVar5 = *puVar6;
            }
            else {
              uVar5 = 0;
            }
            FUN_1405f658a(uVar5);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143d461e6 FUN_143d461e6 body=1045 status=ok
// SIG undefined FUN_143d461e6(void)

void FUN_143d461e6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar7 = *(uint *)(param_2 + 4);
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 0x68))) {
    lVar1 = param_1 + 0x50;
    lVar10 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar10 = lVar1;
    }
    if ((*(uint *)(lVar10 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x40);
      lVar10 = lVar16 + (ulonglong)uVar7 * 0x68;
      uVar5 = *(uint *)(lVar10 + 8);
      uVar8 = *(uint *)(lVar10 + 0x10);
      if (uVar8 != 0) {
        uVar5 = uVar8 >> 0xd ^ uVar5 - uVar8;
        uVar9 = uVar5 << 8 ^ (-0x61c88647 - uVar8) - uVar5;
        uVar13 = uVar9 >> 0xd ^ (uVar8 - uVar5) - uVar9;
        uVar8 = uVar13 >> 0xc ^ (uVar5 - uVar9) - uVar13;
        uVar5 = uVar8 << 0x10 ^ (uVar9 - uVar13) - uVar8;
        uVar9 = uVar5 >> 5 ^ (uVar13 - uVar8) - uVar5;
        uVar8 = uVar9 >> 3 ^ (uVar8 - uVar5) - uVar9;
        uVar5 = uVar8 << 10 ^ (uVar5 - uVar9) - uVar8;
        uVar5 = uVar5 >> 0xf ^ uVar9 - (uVar8 + uVar5);
      }
      iVar6 = FUN_140502a60((longlong *)(param_1 + 0x78),uVar5);
      if ((iVar6 != -1) &&
         (lVar10 = (longlong)iVar6 * 0x70 + *(longlong *)(param_1 + 0x78),
         plVar11 = (longlong *)(lVar10 + 0x10), plVar11 != (longlong *)0x0 && lVar10 != 0)) {
        lVar16 = lVar16 + (ulonglong)uVar7 * 0x68;
        uVar7 = *(uint *)(lVar16 + 0x14);
        uVar5 = *(uint *)(lVar16 + 0x1c);
        if (uVar5 != 0) {
          uVar7 = uVar5 >> 0xd ^ uVar7 - uVar5;
          uVar8 = uVar7 << 8 ^ (-0x61c88647 - uVar5) - uVar7;
          uVar9 = uVar8 >> 0xd ^ (uVar5 - uVar7) - uVar8;
          uVar5 = uVar9 >> 0xc ^ (uVar7 - uVar8) - uVar9;
          uVar7 = uVar5 << 0x10 ^ (uVar8 - uVar9) - uVar5;
          uVar8 = uVar7 >> 5 ^ (uVar9 - uVar5) - uVar7;
          uVar5 = uVar8 >> 3 ^ (uVar5 - uVar7) - uVar8;
          uVar7 = uVar5 << 10 ^ (uVar7 - uVar8) - uVar5;
          uVar7 = uVar7 >> 0xf ^ uVar8 - (uVar5 + uVar7);
        }
        iVar6 = FUN_144a24328(plVar11,uVar7,lVar16 + 0x14);
        if ((iVar6 != -1) &&
           (lVar10 = (longlong)iVar6 * 0x68 + *plVar11, plVar11 = (longlong *)(lVar10 + 0x10),
           plVar11 != (longlong *)0x0 && lVar10 != 0)) {
          uVar7 = *(uint *)(lVar16 + 0x20);
          uVar5 = *(uint *)(lVar16 + 0x28);
          if (uVar5 != 0) {
            uVar7 = uVar5 >> 0xd ^ uVar7 - uVar5;
            uVar8 = uVar7 << 8 ^ (-0x61c88647 - uVar5) - uVar7;
            uVar9 = uVar8 >> 0xd ^ (uVar5 - uVar7) - uVar8;
            uVar5 = uVar9 >> 0xc ^ (uVar7 - uVar8) - uVar9;
            uVar7 = uVar5 << 0x10 ^ (uVar8 - uVar9) - uVar5;
            uVar8 = uVar7 >> 5 ^ (uVar9 - uVar5) - uVar7;
            uVar5 = uVar8 >> 3 ^ (uVar5 - uVar7) - uVar8;
            uVar7 = uVar5 << 10 ^ (uVar7 - uVar8) - uVar5;
            uVar7 = uVar7 >> 0xf ^ uVar8 - (uVar5 + uVar7);
          }
          iVar6 = FUN_140727b76(plVar11,uVar7,lVar16 + 0x20);
          if ((iVar6 != -1) &&
             (lVar10 = (longlong)iVar6 * 0xa8 + *plVar11, lVar10 != -0x10 && lVar10 != 0)) {
            local_60 = lVar10;
            if (0 < *(int *)(lVar16 + 0x58)) {
              local_50 = *(undefined4 *)(lVar16 + 0x34);
              local_58 = *(undefined8 *)(lVar16 + 0x2c);
              lVar10 = FUN_140bcac51();
              if ((longlong)*(int *)(lVar16 + 0x58) != 0) {
                lVar17 = *(longlong *)(lVar16 + 0x50);
                lVar16 = (longlong)*(int *)(lVar16 + 0x58) << 4;
                do {
                  FUN_1401aa203(lVar10 + 0x10,lVar17);
                  lVar17 = lVar17 + 0x10;
                  lVar16 = lVar16 + -0x10;
                } while (lVar16 != 0);
              }
            }
            FUN_14082845c(param_1 + 0x40,*(undefined4 *)(param_2 + 4));
            uVar7 = *(uint *)(local_60 + 0x48);
            uVar12 = (ulonglong)(int)uVar7;
            if (uVar12 != 0) {
              puVar2 = *(uint **)(local_60 + 0x40);
              uVar5 = *puVar2;
              bVar18 = true;
              if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x68))) {
                lVar10 = *(longlong *)(param_1 + 0x60);
                if (*(longlong *)(param_1 + 0x60) == 0) {
                  lVar10 = lVar1;
                }
                bVar18 = (*(uint *)(lVar10 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) ==
                         0;
              }
              iVar6 = 0;
              uVar15 = 0;
LAB_143d46526:
              do {
                iVar4 = (int)uVar15;
                uVar15 = (ulonglong)(iVar4 + 1U);
                if ((int)(iVar4 + 1U) < (int)uVar7) {
                  uVar15 = (longlong)iVar4 + 1;
                  bVar3 = true;
                  do {
                    uVar5 = puVar2[uVar15];
                    if (((int)uVar5 < 0) || (*(int *)(param_1 + 0x68) <= (int)uVar5)) {
                      if (bVar18 == false) goto LAB_143d4659c;
                    }
                    else {
                      lVar10 = *(longlong *)(param_1 + 0x60);
                      if (*(longlong *)(param_1 + 0x60) == 0) {
                        lVar10 = lVar1;
                      }
                      if (((*(uint *)(lVar10 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1)
                          == 0) != bVar18) goto LAB_143d46584;
                    }
                    uVar15 = uVar15 + 1;
                    bVar3 = (longlong)uVar15 < (longlong)uVar12;
                  } while (uVar15 != uVar12);
                  uVar15 = (ulonglong)uVar7;
LAB_143d46584:
                  if (bVar18 != false) {
                    bVar18 = false;
                    if (!bVar3) break;
                    goto LAB_143d46526;
                  }
                }
                else {
                  if (bVar18 != false) break;
                  bVar3 = false;
                }
LAB_143d4659c:
                iVar14 = (int)uVar15 - iVar4;
                if (iVar6 != iVar4) {
                  memmove(puVar2 + iVar6,puVar2 + iVar4,(longlong)iVar14 << 2);
                }
                iVar6 = iVar6 + iVar14;
                bVar18 = true;
              } while (bVar3);
              *(int *)(local_60 + 0x48) = iVar6;
            }
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d46600 FUN_143d46600 body=10 status=ok
// SIG undefined FUN_143d46600(void)

undefined4 FUN_143d46600(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1c);
}



// FUNCTION 143d46643 FUN_143d46643 body=41 status=ok
// SIG undefined FUN_143d46643(void)

void FUN_143d46643(void)

{
  DAT_14cb7d2b0 = 0;
  if (DAT_14cb7d2a8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d65d16();
  return;
}



// FUNCTION 143d466aa FUN_143d466aa body=69 status=ok
// SIG undefined FUN_143d466aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d466aa(void)

{
  _DAT_14cb7d370 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d466ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7d378,1);
  return;
}



// FUNCTION 143d466ef FUN_143d466ef body=69 status=ok
// SIG undefined FUN_143d466ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d466ef(void)

{
  _DAT_14cb7d388 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d46731. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7d390,1);
  return;
}



// FUNCTION 143d46734 FUN_143d46734 body=323 status=ok
// SIG undefined FUN_143d46734(void)

void FUN_143d46734(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = *param_2;
  FUN_1446dcdd4(local_50);
  if (DAT_14cb7d258 == 0) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar3 = FUN_144837462(DAT_14cb7d258,local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if ((lVar3 != 0) && (fVar1 = *(float *)(lVar3 + 0x1c), 0.0001 < fVar1)) {
      fVar5 = *(float *)(param_1[1] + 0x6c) / fVar1;
      auVar4 = roundps(ZEXT416((uint)(*(float *)*param_1 / fVar1)),
                       ZEXT416((uint)(*(float *)*param_1 / fVar1)),1);
      if (auVar4._0_4_ < (float)((int)ROUND(fVar5 + fVar5 + -0.5) >> 1)) {
        plVar2 = *(longlong **)(param_1[1] + 8);
        local_88 = &local_78;
        local_68 = DAT_14c846508;
        local_78 = DAT_14c8464f8;
        uStack_70 = DAT_14c846500;
        local_80 = 0;
        (**(code **)(*plVar2 + 0x60))(plVar2,param_2,0x3f800000,0);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d46878 FUN_143d46878 body=155 status=ok
// SIG undefined FUN_143d46878(void)

bool FUN_143d46878(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))();
  if ((longlong)(int)plVar3[1] != 0) {
    lVar2 = *plVar3;
    lVar4 = 0;
    do {
      if (((param_3 != 0) && (*(longlong *)(lVar2 + lVar4) == param_3)) ||
         ((lVar1 = lVar2 + lVar4, param_2 != 0 && (*(longlong *)(lVar1 + 8) == param_2)))) {
        iVar5 = (int)(lVar4 >> 3) * -0x49249249;
        if (iVar5 == -1) {
          return true;
        }
        plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
        return *DAT_14cb7d398 <= *(int *)(*plVar3 + 0x34 + (longlong)iVar5 * 0x38);
      }
      lVar4 = lVar4 + 0x38;
    } while (lVar1 + 0x38 != (longlong)(int)plVar3[1] * 0x38 + lVar2);
  }
  return true;
}



// FUNCTION 143d46914 FUN_143d46914 body=924 status=ok
// SIG undefined FUN_143d46914(void)

void FUN_143d46914(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 *param_4,
                  longlong param_5,float param_6,char param_7,longlong param_8,longlong param_9)

{
  float fVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined1 auStack_f8 [32];
  longlong **local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined1 *puStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar5 = (**(code **)(*param_1 + 0x20))();
  if (param_3 == (longlong *)0x0 || param_2 == (longlong *)0x0) goto LAB_143d469ed;
  plVar10 = (longlong *)(lVar5 + 0x10);
  if ((longlong)*(int *)(lVar5 + 0x18) != 0) {
    plVar9 = *(longlong **)(lVar5 + 0x10);
    lVar6 = (longlong)*(int *)(lVar5 + 0x18) * 0x38;
    do {
      if (((((longlong *)*plVar9 == param_2) && ((longlong *)plVar9[1] == param_3)) &&
          ((undefined1 *)plVar9[2] == param_4)) && (plVar9[3] == param_5)) {
        if (plVar9 != (longlong *)0x0) goto LAB_143d46b7e;
        break;
      }
      plVar9 = plVar9 + 7;
      lVar6 = lVar6 + -0x38;
    } while (lVar6 != 0);
  }
  if ((((param_6 < *(float *)(param_2 + 6)) && ((char)param_2[7] != '\0')) ||
      ((*(float *)((longlong)param_2 + 0x34) <= param_6 &&
        param_6 != *(float *)((longlong)param_2 + 0x34) &&
       (*(char *)((longlong)param_2 + 0x39) != '\0')))) ||
     ((*(char *)((longlong)param_2 + 0x3a) == '\x01' &&
      (cVar2 = (**(code **)(*param_1 + 0x40))(param_1), cVar2 != '\0')))) goto LAB_143d469ed;
  local_d0 = param_2;
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  local_c8 = param_3;
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(param_3);
  }
  local_b8 = param_5;
  uStack_b0 = 0;
  puStack_a8 = (undefined1 *)0x0;
  uStack_a0 = 0;
  puStack_c0 = param_4;
  uVar4 = FUN_148859012(plVar10);
  if (((int)uVar4 < 0) || (*(int *)(lVar5 + 0x18) <= (int)uVar4)) goto LAB_143d469ed;
  plVar9 = (longlong *)((ulonglong)uVar4 * 0x38 + *plVar10);
  uStack_a0 = 0;
  cVar2 = FUN_140691b73();
  cVar3 = FUN_140691bc1();
  local_c8._0_2_ = CONCAT11(cVar3 << 3 | cVar2 << 2,(undefined1)local_c8);
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_3);
  }
  puStack_c0 = &DAT_4030000000000000;
  local_b8 = 0x4022000000000000;
  uStack_b0 = CONCAT35(uStack_b0._5_3_,0x442c80000);
  local_c8 = (longlong *)CONCAT71(local_c8._1_7_,0xce);
  local_78 = 0;
  uStack_70 = 0;
  local_d0 = param_3;
  puStack_a8 = param_4;
  FUN_140e99050(param_1);
  if ((param_8 == 0) || (plVar9 == (longlong *)0x0)) {
    if (plVar9 == (longlong *)0x0) goto LAB_143d469ed;
  }
  else {
    uVar7 = (**(code **)(*param_1 + 0x28))(param_1);
    pplVar8 = (longlong **)FUN_1411403ca(uVar7,param_8,0,0);
    if ((pplVar8 == (longlong **)0x0) || (DAT_14c950c29 == 0)) {
      plVar9[5] = (longlong)pplVar8;
      plVar9[6] = param_9;
      if (pplVar8 == (longlong **)0x0) goto LAB_143d46b7e;
    }
    else {
      FUN_1456cec3c(pplVar8);
      plVar9[5] = (longlong)pplVar8;
      plVar9[6] = param_9;
    }
    local_d8 = pplVar8;
    FUN_148855ab0(param_1,param_3,param_4);
  }
LAB_143d46b7e:
  if (param_7 != '\0') {
    param_6 = param_6 + *(float *)(plVar9 + 4);
  }
  *(float *)(plVar9 + 4) = param_6;
  if (((param_6 < *(float *)(param_2 + 6)) && ((char)param_2[7] != '\0')) ||
     ((*(float *)((longlong)param_2 + 0x34) <= param_6 &&
       param_6 != *(float *)((longlong)param_2 + 0x34) &&
      (*(char *)((longlong)param_2 + 0x39) == '\x01')))) {
    if (*(char *)((longlong)param_2 + 0x3b) == '\x01') {
      FUN_14107e4c6(param_1,param_3,param_4,0);
    }
    local_d0 = plVar9;
    FUN_14885927c(plVar10);
  }
  else {
    fVar1 = *(float *)(*plVar9 + 0x34);
    if (fVar1 <= param_6) {
      param_6 = fVar1;
    }
    fVar1 = *(float *)(*plVar9 + 0x30);
    if (param_6 <= fVar1) {
      param_6 = fVar1;
    }
    *(float *)(plVar9 + 4) = param_6;
    if (plVar9[5] == 0) {
      local_d8 = (longlong **)CONCAT44(local_d8._4_4_,param_6);
      FUN_140aaa4f8(param_1,param_3,param_4,param_5);
    }
    else {
      local_78 = param_5;
      uStack_70 = CONCAT71(uStack_70._1_7_,2);
      uStack_70 = CONCAT44(0xffffffff,(undefined4)uStack_70);
      local_d8 = &local_d0;
      local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffffffffff00);
      local_c8 = (longlong *)0x0;
      puStack_c0 = (undefined1 *)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      puStack_a8 = (undefined1 *)0x0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      FUN_140042bb4(plVar9[5],&local_78,param_6,0);
    }
    uVar11 = (**(code **)(*param_1 + 0x48))(param_1);
    *(undefined4 *)((longlong)plVar9 + 0x24) = uVar11;
  }
LAB_143d469ed:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d46cba FUN_143d46cba body=41 status=ok
// SIG undefined FUN_143d46cba(void)

void FUN_143d46cba(void)

{
  DAT_14cb7d408 = 0;
  if (DAT_14cb7d400 != 0) {
    FUN_1400020a8();
  }
  FUN_145d65db4();
  return;
}



// FUNCTION 143d46ce8 FUN_143d46ce8 body=69 status=ok
// SIG undefined FUN_143d46ce8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d46ce8(void)

{
  _DAT_14cb7d4b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d46d2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7d4b8,1);
  return;
}



// FUNCTION 143d46d2d FUN_143d46d2d body=49 status=ok
// SIG undefined FUN_143d46d2d(void)

void FUN_143d46d2d(void)

{
  FUN_14051f497(DAT_14cb7d3a0,DAT_14cb7d3a8);
  if (DAT_14cb7d3a0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d46d97 FUN_143d46d97 body=41 status=ok
// SIG undefined FUN_143d46d97(void)

void FUN_143d46d97(void)

{
  DAT_14cb7d538 = 0;
  if (DAT_14cb7d530 != 0) {
    FUN_1400020a8();
  }
  FUN_145d65e52();
  return;
}



// FUNCTION 143d46e5a FUN_143d46e5a body=41 status=ok
// SIG undefined FUN_143d46e5a(void)

float FUN_143d46e5a(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x24);
  fVar1 = 0.0;
  if ((fVar2 != 0.0) || (NAN(fVar2))) {
    fVar1 = (*(float *)(param_1 + 200) - *(float *)(param_1 + 0x24)) / fVar2;
  }
  return fVar1;
}



// FUNCTION 143d46e84 FUN_143d46e84 body=33 status=ok
// SIG undefined FUN_143d46e84(void)

ulonglong FUN_143d46e84(longlong param_1)

{
  undefined1 auVar1 [16];
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x18) + 0x18) == '\x01')) {
    auVar1 = roundps(ZEXT416(*(uint *)(param_1 + 0x30)),ZEXT416(*(uint *)(param_1 + 0x30)),3);
    return auVar1._0_8_;
  }
  return (ulonglong)*(uint *)(param_1 + 0x30);
}



// FUNCTION 143d46ea6 FUN_143d46ea6 body=9 status=ok
// SIG undefined FUN_143d46ea6(void)

undefined4 FUN_143d46ea6(longlong param_1)

{
  return *(undefined4 *)(param_1 + 200);
}



// FUNCTION 143d46eb0 FUN_143d46eb0 body=413 status=ok
// SIG undefined FUN_143d46eb0(void)

undefined8 * FUN_143d46eb0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined4 local_50;
  byte local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 == 0) || (param_3 == 0)) {
LAB_143d47005:
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
  uVar2 = FUN_1403c7982();
  plVar3 = (longlong *)FUN_144718840(param_3,uVar2);
  if (plVar3 == (longlong *)0x0) goto LAB_143d47005;
  uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  local_4c = 0xff;
  local_50 = 0;
  local_58 = 0;
  FUN_14488cef8(uVar2,&local_68,param_2,0);
  if ((((plStack_60 != (longlong *)0x0) && (local_68._4_4_ != 0)) && (-1 < (int)(uint)local_68)) &&
     ((int)(uint)local_68 < DAT_14c9647dc)) {
    lVar5 = (ulonglong)(((uint)local_68 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_68 >> 0x10) * 8);
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == local_68._4_4_)) &&
       ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) {
      if (*(code **)(*plStack_60 + 0x10) == (code *)&LAB_1447a1f2e) {
        plVar4 = plStack_60 + 0xd9;
      }
      else {
        plVar4 = (longlong *)(**(code **)(*plStack_60 + 0x10))();
      }
      cVar1 = FUN_14486eb0e(plVar4,&local_68);
      if (cVar1 != '\0') {
        lVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
        lVar5 = *(longlong *)(lVar5 + 0x18);
        *param_1 = *(undefined8 *)(lVar5 + (ulonglong)local_4c * 0x10);
        lVar5 = *(longlong *)(lVar5 + 8 + (ulonglong)local_4c * 0x10);
        param_1[1] = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
          UNLOCK();
        }
        goto LAB_143d4702d;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_143d4702d:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143d4704e FUN_143d4704e body=91 status=ok
// SIG undefined FUN_143d4704e(void)

void FUN_143d4704e(void)

{
  if (DAT_14cb7d688 != 0) {
    if (DAT_14cb7d680 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb7d680)(DAT_14cb7d680,0);
    FUN_1446efa72(&DAT_14cb7d680,0,0,0x10);
    DAT_14cb7d688 = 0;
  }
  if (DAT_14cb7d680 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143d470aa FUN_143d470aa body=45 status=ok
// SIG undefined FUN_143d470aa(void)

longlong FUN_143d470aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145e1f3c0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d4720e FUN_143d4720e body=160 status=ok
// SIG undefined FUN_143d4720e(void)

undefined8 * FUN_143d4720e(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\x12') {
    FUN_14883d694(*param_2,&local_30);
    puVar1 = local_30;
    if (local_28 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_20,puVar1,1);
    *(undefined2 *)(param_1 + 3) = 8;
    *param_1 = local_20;
    *(undefined1 *)(param_1 + 4) = 0x12;
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined2 *)(param_1 + 3) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143d472be FUN_143d472be body=1043 status=ok
// SIG undefined FUN_143d472be(void)

longlong * FUN_143d472be(longlong *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_80;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  int local_5c;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((char)param_2[8] == '\a') {
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    if (((((param_2[1] != 0) && (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)
         ) && ((plVar6 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar6 != (longlong *)0x0 && (*(uint *)(plVar6 + 2) == param_2[1])))) &&
       (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
        (plVar6 = (longlong *)*plVar6, plVar6 != (longlong *)0x0)))) {
      uVar2 = FUN_140427846();
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar2);
      if (plVar6 != (longlong *)0x0) {
        uVar2 = FUN_140427846();
        plVar3 = (longlong *)FUN_144718840(plVar6,uVar2);
        if (plVar3 != (longlong *)0x0 && plVar6 != plVar3) {
          (**(code **)(*plVar3 + 0x50))(plVar3,&local_80);
          FUN_140ca9cce(&local_b8,&local_80);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
    *(undefined2 *)(param_1 + 3) = 0x30;
    puVar4 = (undefined4 *)FUN_14001cc68(0x30,0);
    *param_1 = (longlong)puVar4;
    *puVar4 = (undefined4)local_b8;
    puVar4[1] = local_b8._4_4_;
    puVar4[2] = (undefined4)uStack_b0;
    puVar4[3] = uStack_b0._4_4_;
    *(undefined8 *)(puVar4 + 4) = local_a8;
    *(undefined8 *)(puVar4 + 6) = uStack_a0;
    *(undefined8 *)(puVar4 + 8) = local_98;
    *(undefined8 *)(puVar4 + 10) = uStack_90;
    *(undefined1 *)(param_1 + 4) = 0x13;
  }
  else if ((char)param_2[8] == '\x12') {
    FUN_1446dcdd4(&local_80);
    uVar14 = DAT_14c948618._4_4_;
    uVar10 = DAT_14c948620;
    uVar15 = DAT_14c948620;
    uVar13 = (undefined4)DAT_14c948618;
    uVar12 = DAT_14c948618._4_4_;
    if (local_7c == 3) {
      if (local_80 == 0) {
        local_bc = DAT_14c948620;
        local_c0 = (undefined4)DAT_14c948618;
        uVar8 = (undefined4)DAT_14c948618;
        uVar9 = DAT_14c948618._4_4_;
      }
      else {
        puVar7 = (undefined8 *)((longlong)local_68 + 0xc);
        bVar16 = local_80 == DAT_14c948000;
        puVar11 = local_68;
        if (bVar16) {
          puVar11 = &DAT_14c948618;
          puVar7 = &DAT_14c948618;
        }
        puVar5 = (undefined8 *)((longlong)&DAT_14c948618 + 4);
        if (!bVar16) {
          puVar5 = local_68 + 2;
        }
        puVar4 = &DAT_14c948620;
        if (!bVar16) {
          puVar4 = (undefined4 *)((longlong)local_68 + 0x14);
        }
        local_bc = *(undefined4 *)(puVar11 + 1);
        uVar15 = *puVar4;
        uVar13 = *(undefined4 *)puVar7;
        uVar12 = *(undefined4 *)puVar5;
        uVar8 = *(undefined4 *)puVar11;
        uVar9 = *(undefined4 *)((longlong)puVar11 + 4);
        if (bVar16) {
          local_c0 = (undefined4)DAT_14c948618;
        }
        else {
          local_c0 = *(undefined4 *)(local_68 + 3);
          uVar14 = *(undefined4 *)((longlong)local_68 + 0x1c);
          uVar10 = *(undefined4 *)(local_68 + 4);
        }
      }
    }
    else {
      if (local_7c == 2) {
        if (local_80 == 0) {
          local_c0 = (undefined4)DAT_14c948618;
        }
        else {
          puVar7 = &DAT_14c948618;
          if (local_80 != DAT_14c948000) {
            puVar7 = local_68;
          }
          uVar15 = *(undefined4 *)(puVar7 + 1);
          uVar13 = *(undefined4 *)puVar7;
          uVar12 = *(undefined4 *)((longlong)puVar7 + 4);
          if (local_80 == DAT_14c948000) {
            local_c0 = (undefined4)DAT_14c948618;
          }
          else {
            local_c0 = *(undefined4 *)((longlong)local_68 + 0xc);
            uVar14 = *(undefined4 *)(local_68 + 2);
            uVar10 = *(undefined4 *)((longlong)local_68 + 0x14);
          }
        }
      }
      else {
        if (local_7c == 1) {
          if ((local_80 == 0) || (local_80 == DAT_14c948000)) {
            local_c0 = (undefined4)DAT_14c948618;
          }
          else {
            puVar7 = &local_78;
            if (0 < local_5c) {
              puVar7 = local_68;
            }
            local_c0 = *(undefined4 *)puVar7;
            puVar7 = &local_78;
            if (0 < local_5c) {
              puVar7 = local_68;
            }
            puVar11 = &local_70;
            if (0 < local_5c) {
              puVar11 = local_68 + 1;
            }
            uVar14 = *(undefined4 *)((longlong)puVar7 + 4);
            uVar10 = *(undefined4 *)puVar11;
          }
        }
        else {
          uVar10 = 0;
          uVar14 = 0;
          local_c0 = 0;
        }
        uVar15 = 0;
        uVar13 = 0;
        uVar12 = 0;
      }
      local_bc = 0;
      uVar8 = 0;
      uVar9 = 0;
    }
    *(undefined2 *)(param_1 + 3) = 0x30;
    puVar4 = (undefined4 *)FUN_14001cc68(0x30,0);
    *param_1 = (longlong)puVar4;
    *puVar4 = uVar8;
    puVar4[1] = uVar9;
    puVar4[2] = local_bc;
    *(undefined8 *)(puVar4 + 3) = 0;
    puVar4[5] = 0;
    puVar4[6] = uVar13;
    puVar4[7] = uVar12;
    puVar4[8] = uVar15;
    puVar4[9] = local_c0;
    puVar4[10] = uVar14;
    puVar4[0xb] = uVar10;
    *(undefined1 *)(param_1 + 4) = 0x13;
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined2 *)(param_1 + 3) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143d476d2 FUN_143d476d2 body=28 status=ok
// SIG undefined FUN_143d476d2(void)

undefined8 FUN_143d476d2(undefined8 param_1,undefined8 param_2)

{
  FUN_14883d694(param_2,param_1);
  return param_1;
}



// FUNCTION 143d4770b FUN_143d4770b body=1086 status=ok
// SIG undefined FUN_143d4770b(void)

uint * FUN_143d4770b(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_60;
  undefined2 local_58 [2];
  undefined8 local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58[0] = 0;
  local_54 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  plVar3 = (longlong *)FUN_143d481fa(param_2,param_3);
  if ((plVar3 == (longlong *)0x0) ||
     (lVar4 = (**(code **)(*plVar3 + 0x68))(plVar3,local_58), lVar4 == 0)) {
    *(undefined2 *)(param_1 + 6) = 0;
    uVar1 = 0;
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_80 = &local_60;
      local_60 = FUN_141030f22;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_14081d0ea;
      local_88 = &LAB_1478c0a72;
      local_90 = &LAB_1417b2375;
      local_98 = L"Engine";
      local_a0 = 0x1000000000;
      local_a8 = 0x10000004;
      local_b0 = 8;
      local_b8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    lVar5 = *(longlong *)(lVar4 + 0x10);
    iVar6 = *(int *)(lVar5 + 0x38);
    if ((iVar6 < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
        DAT_14cac9ca8 + 0x30)) {
      if (DAT_14cac7648 == 0) {
        local_80 = &local_60;
        local_60 = FUN_144a7958c;
        local_70 = FUN_14081d0ea;
        local_78 = FUN_143242436;
        local_88 = &LAB_14789ef1f;
        local_90 = &LAB_1417b008f;
        local_98 = L"Engine";
        local_a0 = 0x8000000000;
        local_a8 = 0x10000004;
        local_b0 = 0x10;
        local_b8 = 0x2b0;
        FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
        lVar5 = *(longlong *)(lVar4 + 0x10);
        iVar6 = *(int *)(lVar5 + 0x38);
      }
      if ((iVar6 < *(int *)(DAT_14cac7648 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8)
          != DAT_14cac7648 + 0x30)) {
        *(undefined2 *)(param_1 + 6) = 8;
        param_1[1] = 0;
        uVar2 = *(uint *)(lVar4 + 0xc);
        *param_1 = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        uVar2 = *(uint *)(lVar4 + 0x10);
        if (*(uint *)(lVar4 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          uVar7 = DAT_14c964868 + 1;
          bVar8 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar8) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar7);
          }
          LOCK();
          uVar2 = *(uint *)(lVar4 + 0x10);
          bVar8 = uVar2 == 0;
          if (bVar8) {
            *(uint *)(lVar4 + 0x10) = uVar7;
            uVar2 = 0;
          }
          UNLOCK();
          if (bVar8) {
            uVar2 = uVar7;
          }
        }
        param_1[1] = uVar2;
        uVar1 = 6;
      }
      else {
        *(undefined2 *)(param_1 + 6) = 8;
        param_1[1] = 0;
        uVar2 = *(uint *)(lVar4 + 0xc);
        *param_1 = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        uVar2 = *(uint *)(lVar4 + 0x10);
        if (*(uint *)(lVar4 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          uVar7 = DAT_14c964868 + 1;
          bVar8 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar8) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar7);
          }
          LOCK();
          uVar2 = *(uint *)(lVar4 + 0x10);
          bVar8 = uVar2 == 0;
          if (bVar8) {
            *(uint *)(lVar4 + 0x10) = uVar7;
            uVar2 = 0;
          }
          UNLOCK();
          if (bVar8) {
            uVar2 = uVar7;
          }
        }
        param_1[1] = uVar2;
        uVar1 = 0xe;
      }
    }
    else {
      *(undefined2 *)(param_1 + 6) = 8;
      param_1[1] = 0;
      uVar2 = *(uint *)(lVar4 + 0xc);
      *param_1 = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar2 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar2 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar2 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar2 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar2 = uVar7;
        }
      }
      param_1[1] = uVar2;
      uVar1 = 7;
    }
  }
  *(undefined1 *)(param_1 + 8) = uVar1;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143d47b5c FUN_143d47b5c body=136 status=ok
// SIG undefined FUN_143d47b5c(void)

void FUN_143d47b5c(undefined8 param_1,longlong param_2)

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
  *(undefined1 *)(lVar2 + iVar1) = 6;
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
  iVar1 = *(int *)(param_2 + 0x30);
  *(uint *)(param_2 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x34) < iVar1 + 1U) {
    FUN_142b3d46e(param_2,iVar1);
  }
  lVar2 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(param_2 + 0x28) == 0) {
    lVar2 = param_2;
  }
  *(undefined1 *)(lVar2 + iVar1) = 0xe;
  return;
}



// FUNCTION 143d47be4 FUN_143d47be4 body=36 status=ok
// SIG undefined FUN_143d47be4(void)

bool FUN_143d47be4(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  
  if (*(int *)(*param_1 + 0x24) == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_14049cbd6(param_2);
    bVar2 = lVar1 != 0;
  }
  return bVar2;
}



// FUNCTION 143d47c08 FUN_143d47c08 body=1308 status=ok
// SIG undefined FUN_143d47c08(void)

undefined8 *
FUN_143d47c08(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  code *pcVar11;
  bool bVar12;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  undefined8 *local_a8;
  int local_a0;
  code *local_98;
  undefined8 *local_90;
  int local_88;
  undefined2 local_80 [2];
  undefined8 local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_80[0] = 0;
  local_7c = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  plVar4 = (longlong *)FUN_143d481fa(param_2,param_3);
  if (plVar4 == (longlong *)0x0) {
    *param_1 = 0;
    goto LAB_143d48062;
  }
  lVar5 = (**(code **)(*plVar4 + 0x60))(plVar4,local_80);
  if (lVar5 != 0) {
    lVar9 = *(longlong *)(lVar5 + 0x10);
    if (*(longlong *)(lVar5 + 0x10) == 0) {
      lVar9 = lVar5;
    }
    iVar3 = *(int *)(lVar5 + 0x18);
    if ((longlong)iVar3 != 0) {
      lVar5 = 0;
      do {
        iVar10 = *(int *)(lVar9 + 4 + lVar5);
        if (((((iVar10 != 0) && (uVar1 = *(uint *)(lVar9 + lVar5), -1 < (int)uVar1)) &&
             ((int)uVar1 < DAT_14c9647dc)) &&
            ((plVar8 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar10)))) &&
           (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
            (pcVar11 = (code *)*plVar8, pcVar11 != (code *)0x0)))) {
          if (DAT_14cac9ca8 == 0) {
            local_98 = FUN_141030f22;
            local_b0 = FUN_14081d0ea;
            local_b8 = FUN_14081d0ea;
            local_c8 = &LAB_1478c0a72;
            local_d0 = &LAB_1417b2375;
            local_d8 = L"Engine";
            local_e0 = 0x1000000000;
            local_e8 = 0x10000004;
            local_f0 = 8;
            local_f8 = 0x390;
            local_c0 = &local_98;
            FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
          }
          if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(pcVar11 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(pcVar11 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30))
          goto LAB_143d47df7;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar3 * 8 != lVar5);
    }
  }
  pcVar11 = (code *)0x0;
LAB_143d47df7:
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  local_98 = pcVar11;
  FUN_141741876(&local_90,param_4);
  if (((longlong *)*param_4 == (longlong *)0x0 || (int)param_4[1] == 0) ||
     (lVar5 = (**(code **)(*(longlong *)*param_4 + 8))(), lVar5 == 0)) {
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    FUN_1446efa72(&local_a8,0,3,0x10);
    local_a0 = 3;
    *local_a8 = &PTR_LAB_14b3fc100;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_a8[2] = lVar9;
    *local_a8 = &PTR_FUN_14b401960;
    local_a8[3] = local_98;
    puVar7 = local_a8 + 4;
    local_a8[4] = 0;
    *(undefined4 *)(local_a8 + 5) = 0;
  }
  else {
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    FUN_1446efa72(&local_a8,0,4,0x10);
    puVar2 = local_a8;
    local_a0 = 4;
    *local_a8 = &PTR_LAB_14b3fc100;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_a8[2] = lVar6;
    *local_a8 = &PTR_FUN_14b4018f0;
    local_a8[3] = 0;
    uVar1 = *(uint *)(lVar5 + 0xc);
    *(uint *)(local_a8 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar12 = iVar3 == 0;
      if (bVar12) {
        *(int *)(lVar5 + 0x10) = iVar10;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar3 = iVar10;
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar3;
    puVar2[4] = local_98;
    puVar7 = puVar2 + 5;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0;
  }
  FUN_141741876(puVar7,&local_90);
  (**(code **)(*plVar4 + 0x70))(plVar4,param_1,local_80,&local_a8);
  if (local_a0 == 0) {
LAB_143d47ffd:
    if (local_a8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_143d47ffd;
  }
  if (local_88 != 0) {
    if (local_90 == (undefined8 *)0x0) goto LAB_143d48062;
    (**(code **)*local_90)(local_90,0);
    FUN_1446efa72(&local_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_90 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143d48062:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143d48125 FUN_143d48125 body=136 status=ok
// SIG undefined FUN_143d48125(void)

void FUN_143d48125(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined2 local_48 [2];
  undefined8 local_44;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  longlong local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_44 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  plVar1 = (longlong *)FUN_143d481fa();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x78))(plVar1,local_48,*param_3);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d481fa FUN_143d481fa body=239 status=ok
// SIG undefined FUN_143d481fa(void)

longlong FUN_143d481fa(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char local_58;
  undefined7 uStack_57;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar1 = (undefined4 *)*param_1;
  local_88 = *puVar1;
  uStack_84 = puVar1[1];
  uStack_80 = puVar1[2];
  uStack_7c = puVar1[3];
  local_78 = puVar1[4];
  uStack_74 = puVar1[5];
  uStack_70 = puVar1[6];
  uStack_6c = puVar1[7];
  local_68 = puVar1[8];
  iStack_64 = puVar1[9];
  uStack_60 = puVar1[10];
  uStack_5c = puVar1[0xb];
  if (iStack_64 != 0) {
    FUN_1409c4e4e(&local_88,&local_58);
    if (local_58 == '\x01') {
      uVar2 = FUN_14049cbd6(param_2);
      lVar3 = FUN_140149a73(uVar2,0);
      if (lVar3 != 0) {
        lVar3 = FUN_1401499e8(lVar3);
        if (lVar3 != 0) {
          *(undefined4 *)(param_3 + 1) = local_50;
          *param_3 = CONCAT71(uStack_57,local_58);
          FUN_1447715ec(param_3 + 2,local_48);
          if (local_30 != 0) {
            FUN_1400020a8();
          }
          goto LAB_143d482bb;
        }
      }
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  lVar3 = 0;
LAB_143d482bb:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d482ea FUN_143d482ea body=111 status=ok
// SIG undefined FUN_143d482ea(void)

undefined8 * FUN_143d482ea(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b4018f0;
  plVar1 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143d4833b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143d4833b:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d484d8 FUN_143d484d8 body=131 status=ok
// SIG undefined FUN_143d484d8(void)

void FUN_143d484d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4018f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_141741876(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 143d4855c FUN_143d4855c body=131 status=ok
// SIG undefined FUN_143d4855c(void)

void FUN_143d4855c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4018f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_141741876(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 143d485e0 FUN_143d485e0 body=165 status=ok
// SIG undefined FUN_143d485e0(void)

void FUN_143d485e0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fc100;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4018f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  FUN_141741876(&p_Var1->Flags,param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d48676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d48692 FUN_143d48692 body=278 status=ok
// SIG undefined FUN_143d48692(void)

undefined8 FUN_143d48692(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_143d487a2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d487a2;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143d487a2:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d48755;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143d487aa(param_1 + 0x20,param_3);
      uVar6 = 1;
      goto LAB_143d48755;
    }
  }
  uVar6 = 0;
LAB_143d48755:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d487aa FUN_143d487aa body=763 status=ok
// SIG undefined FUN_143d487aa(void)

void FUN_143d487aa(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  code *local_88;
  code *local_80;
  undefined8 local_70;
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((longlong *)param_1[1] != (longlong *)0x0 && (int)param_1[2] != 0) {
    lVar7 = *param_2;
    lVar3 = param_2[1];
    cVar4 = (**(code **)(*(longlong *)param_1[1] + 0x30))();
    if (cVar4 != '\0') {
      if ((int)lVar3 != 0) {
        lVar8 = 0;
        do {
          iVar5 = *(int *)(lVar7 + 4 + lVar8);
          if (((((iVar5 != 0) && (uVar1 = *(uint *)(lVar7 + lVar8), -1 < (int)uVar1)) &&
               ((int)uVar1 < DAT_14c9647dc)) &&
              ((plVar6 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar5)))) &&
             (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar11 = *plVar6, lVar11 != 0)))) {
            if (DAT_14cac9ca8 == 0) {
              local_70 = FUN_141030f22;
              local_80 = FUN_14081d0ea;
              local_88 = FUN_14081d0ea;
              local_98 = &LAB_1478c0a72;
              local_a0 = &LAB_1417b2375;
              local_a8 = L"Engine";
              local_b0 = 0x1000000000;
              local_b8 = 0x10000004;
              local_c0 = 8;
              local_c8 = 0x390;
              local_90 = &local_70;
              FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
            }
            if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30))
            goto LAB_143d48951;
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)(int)lVar3 * 8 != lVar8);
      }
      lVar11 = 0;
LAB_143d48951:
      if (*param_1 != lVar11) {
        *param_1 = lVar11;
        local_58 = 8;
        if (lVar11 == 0) {
          local_70._0_4_ = 0;
          iVar5 = 0;
          uVar1 = (uint)local_70;
        }
        else {
          uVar1 = *(uint *)(lVar11 + 0xc);
          local_70 = (code *)(ulonglong)uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          iVar5 = *(int *)(lVar7 + 0x10);
          if (*(int *)(lVar7 + 0x10) == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            iVar10 = DAT_14c964868 + 1;
            bVar12 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar12) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar10);
            }
            LOCK();
            iVar5 = *(int *)(lVar7 + 0x10);
            bVar12 = iVar5 == 0;
            if (bVar12) {
              *(int *)(lVar7 + 0x10) = iVar10;
              iVar5 = 0;
            }
            UNLOCK();
            uVar1 = (uint)local_70;
            if (bVar12) {
              iVar5 = iVar10;
            }
          }
        }
        local_70._0_4_ = uVar1;
        local_70 = (code *)CONCAT44(iVar5,(uint)local_70);
        local_50 = 7;
        if ((int)param_1[2] == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)param_1[1];
        }
        (**(code **)(*plVar6 + 0x58))(plVar6,&local_70);
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
        if (pcVar2 != (code *)0x0) {
          pcVar9 = (code *)&local_70;
          if (0x18 < local_58) {
            pcVar9 = local_70;
          }
          (*pcVar2)(pcVar9);
        }
        if (0x18 < local_58) {
          FUN_1400020a8(local_70);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d48aa6 FUN_143d48aa6 body=111 status=ok
// SIG undefined FUN_143d48aa6(void)

undefined8 * FUN_143d48aa6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b401960;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143d48af7;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143d48af7:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d48b2a FUN_143d48b2a body=123 status=ok
// SIG undefined FUN_143d48b2a(void)

void FUN_143d48b2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401960;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_141741876(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143d48ba6 FUN_143d48ba6 body=123 status=ok
// SIG undefined FUN_143d48ba6(void)

void FUN_143d48ba6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401960;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_141741876(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143d48c22 FUN_143d48c22 body=157 status=ok
// SIG undefined FUN_143d48c22(void)

void FUN_143d48c22(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fc100;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b401960;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_141741876(&p_Var1->EntryCount,param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d48cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d48ccc FUN_143d48ccc body=23 status=ok
// SIG undefined FUN_143d48ccc(void)

undefined1 FUN_143d48ccc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143d487aa(param_1 + 0x18,param_3);
  return 1;
}



// FUNCTION 143d48ce4 FUN_143d48ce4 body=31 status=ok
// SIG undefined FUN_143d48ce4(void)

undefined8 FUN_143d48ce4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d48d10 FUN_143d48d10 body=162 status=ok
// SIG undefined FUN_143d48d10(void)

void FUN_143d48d10(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_143d48d9d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_143d48d9d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 143d48db2 FUN_143d48db2 body=29 status=ok
// SIG undefined FUN_143d48db2(void)

undefined8 FUN_143d48db2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d48de4 FUN_143d48de4 body=93 status=ok
// SIG undefined FUN_143d48de4(void)

void FUN_143d48de4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401ba0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d48e42 FUN_143d48e42 body=93 status=ok
// SIG undefined FUN_143d48e42(void)

void FUN_143d48e42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401ba0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d48ea0 FUN_143d48ea0 body=126 status=ok
// SIG undefined FUN_143d48ea0(void)

void FUN_143d48ea0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b401ba0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d48f0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d48f1e FUN_143d48f1e body=20 status=ok
// SIG undefined FUN_143d48f1e(void)

undefined8 FUN_143d48f1e(longlong param_1)

{
  FUN_145876fd6(*(undefined8 *)(param_1 + 0x18));
  return 0;
}



// FUNCTION 143d48f32 FUN_143d48f32 body=20 status=ok
// SIG undefined FUN_143d48f32(void)

undefined1 FUN_143d48f32(longlong param_1)

{
  FUN_145876fd6(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143d48f46 FUN_143d48f46 body=29 status=ok
// SIG undefined FUN_143d48f46(void)

undefined8 FUN_143d48f46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d48f78 FUN_143d48f78 body=93 status=ok
// SIG undefined FUN_143d48f78(void)

void FUN_143d48f78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401c10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d48fd6 FUN_143d48fd6 body=93 status=ok
// SIG undefined FUN_143d48fd6(void)

void FUN_143d48fd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401c10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d49034 FUN_143d49034 body=126 status=ok
// SIG undefined FUN_143d49034(void)

void FUN_143d49034(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e62a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b401c10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d490a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


