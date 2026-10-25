// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1433d0b9e FUN_1433d0b9e body=118 status=ok
// SIG undefined FUN_1433d0b9e(void)

void FUN_1433d0b9e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79d280;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a79bc60;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001433d0c05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1433d0c1c FUN_1433d0c1c body=29 status=ok
// SIG undefined FUN_1433d0c1c(void)

undefined8 FUN_1433d0c1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433d0db8 FUN_1433d0db8 body=93 status=ok
// SIG undefined FUN_1433d0db8(void)

void FUN_1433d0db8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79bd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a79bcd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1433d0e16 FUN_1433d0e16 body=93 status=ok
// SIG undefined FUN_1433d0e16(void)

void FUN_1433d0e16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79bd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a79bcd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1433d0e74 FUN_1433d0e74 body=126 status=ok
// SIG undefined FUN_1433d0e74(void)

void FUN_1433d0e74(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a79bd40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a79bcd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001433d0ee3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1433d0f04 FUN_1433d0f04 body=276 status=ok
// SIG undefined FUN_1433d0f04(void)

undefined8 FUN_1433d0f04(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_1433d1012;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1433d1012;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1433d1012:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1433d0fc5;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),param_3);
      uVar6 = 1;
      goto LAB_1433d0fc5;
    }
  }
  uVar6 = 0;
LAB_1433d0fc5:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d101a FUN_1433d101a body=29 status=ok
// SIG undefined FUN_1433d101a(void)

undefined8 FUN_1433d101a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433d11b6 FUN_1433d11b6 body=93 status=ok
// SIG undefined FUN_1433d11b6(void)

void FUN_1433d11b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79be20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a79bdb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1433d1214 FUN_1433d1214 body=93 status=ok
// SIG undefined FUN_1433d1214(void)

void FUN_1433d1214(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79be20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a79bdb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1433d1272 FUN_1433d1272 body=126 status=ok
// SIG undefined FUN_1433d1272(void)

void FUN_1433d1272(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a79be20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a79bdb0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001433d12e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1433d12f0 FUN_1433d12f0 body=29 status=ok
// SIG undefined FUN_1433d12f0(void)

void FUN_1433d12f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x60))
                    (*(longlong **)(param_1 + 0x20),param_3);
  *param_4 = uVar1;
  return;
}



// FUNCTION 1433d130e FUN_1433d130e body=287 status=ok
// SIG undefined FUN_1433d130e(void)

undefined8 FUN_1433d130e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1433d1427;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1433d1427;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1433d1427:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1433d13d8;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x60))
                        (*(longlong **)(param_1 + 0x20),param_3);
      *param_4 = uVar3;
      uVar7 = 1;
      goto LAB_1433d13d8;
    }
  }
  uVar7 = 0;
LAB_1433d13d8:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d142e FUN_1433d142e body=29 status=ok
// SIG undefined FUN_1433d142e(void)

undefined8 FUN_1433d142e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433d15ca FUN_1433d15ca body=93 status=ok
// SIG undefined FUN_1433d15ca(void)

void FUN_1433d15ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79bf00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a79be90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1433d1628 FUN_1433d1628 body=93 status=ok
// SIG undefined FUN_1433d1628(void)

void FUN_1433d1628(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79bf00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a79be90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1433d1686 FUN_1433d1686 body=126 status=ok
// SIG undefined FUN_1433d1686(void)

void FUN_1433d1686(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a79bf00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a79be90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001433d16f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1433d1704 FUN_1433d1704 body=53 status=ok
// SIG undefined FUN_1433d1704(void)

void FUN_1433d1704(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x0001433d1736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))
            (*(longlong **)(param_1 + 0x20),param_3,param_4);
  return;
}



// FUNCTION 1433d173a FUN_1433d173a body=297 status=ok
// SIG undefined FUN_1433d173a(void)

undefined8 FUN_1433d173a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    if (iVar1 == 2) goto LAB_1433d185c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1433d185c;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1433d185c:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1433d180d;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))();
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))
                (*(longlong **)(param_1 + 0x20),param_3,param_4);
      uVar6 = 1;
      goto LAB_1433d180d;
    }
  }
  uVar6 = 0;
LAB_1433d180d:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d1864 FUN_1433d1864 body=43 status=ok
// SIG undefined FUN_1433d1864(void)

void FUN_1433d1864(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1433d188f FUN_1433d188f body=43 status=ok
// SIG undefined FUN_1433d188f(void)

void FUN_1433d188f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1433d18ba FUN_1433d18ba body=363 status=ok
// SIG undefined FUN_1433d18ba(void)

void FUN_1433d18ba(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1433d1950;
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
LAB_1433d1950:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1433d1a26 FUN_1433d1a26 body=561 status=ok
// SIG undefined FUN_1433d1a26(void)

void FUN_1433d1a26(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100;
  LARGE_INTEGER local_f8 [5];
  byte local_d0;
  longlong *local_a0;
  longlong local_80;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[2];
  lVar4 = param_1[1];
  lVar5 = (**(code **)(*(longlong *)*param_3 + 0x18))((longlong *)*param_3);
  EnterCriticalSection((LPCRITICAL_SECTION)(plVar1 + 3));
  lVar3 = plVar1[1];
  lVar9 = -1;
  if ((longlong)(int)plVar1[2] != 0) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      if (*(int *)(lVar3 + 0x18 + lVar7) == (int)lVar4) {
        lVar9 = lVar8 >> 0x20;
        break;
      }
      lVar8 = lVar8 + 0x100000000;
      lVar7 = lVar7 + 0x20;
    } while ((longlong)(int)plVar1[2] * 0x20 != lVar7);
  }
  QueryPerformanceCounter(local_f8);
  if (lVar5 == 0) {
    local_f8[0].s.LowPart = (int)lVar4;
    FUN_141733646(plVar1 + 0xc);
  }
  else {
    lVar9 = lVar9 * 0x20;
    puVar6 = (undefined8 *)FUN_14001cc68(0x80);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x6c) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x74) = 0;
    memset(local_f8,0,0x90);
    FUN_144869430(local_f8);
    local_68 = 0;
    local_f8[0].QuadPart = (LONGLONG)&PTR_FUN_149e1ddc0;
    local_50 = 0x7fffffffffffffff;
    local_d0 = local_d0 | 1;
    local_60 = lVar5;
    local_58 = lVar2;
    FUN_1449c2eca(local_f8,0);
    lVar2 = *plVar1;
    local_108 = *(undefined8 *)(lVar2 + 0xe8);
    local_118 = *(undefined8 *)(lVar2 + 0x40);
    local_110 = *(undefined8 *)(lVar2 + 0xe0);
    local_100 = 1;
    FUN_144869e00(puVar6,local_f8,0);
    LOCK();
    *(undefined8 **)(lVar3 + lVar9) = puVar6;
    UNLOCK();
    *(undefined1 *)(lVar3 + 0x1c + lVar9) = 1;
    *(undefined8 *)(lVar3 + 0x10 + lVar9) = 0xc000000000000000;
    FUN_1400020a8(lVar5);
    local_f8[0].QuadPart = (LONGLONG)&PTR__purecall_149e35f70;
    if (local_a0 != (longlong *)0x0) {
      if (*local_a0 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_a0);
    }
    if (local_80 != 0) {
      if (*(longlong *)(local_80 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_80);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(plVar1 + 3));
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433d1c7e FUN_1433d1c7e body=12 status=ok
// SIG undefined FUN_1433d1c7e(void)

void FUN_1433d1c7e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433d1c87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433d1c8a FUN_1433d1c8a body=29 status=ok
// SIG undefined FUN_1433d1c8a(void)

undefined8 FUN_1433d1c8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433d1cc4 FUN_1433d1cc4 body=152 status=ok
// SIG undefined FUN_1433d1cc4(void)

undefined8 FUN_1433d1cc4(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  uVar3 = *param_2;
  iVar1 = *(int *)(lVar2 + 0x610);
  *(uint *)(lVar2 + 0x610) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x614) < iVar1 + 1U) {
    FUN_1417b4380((longlong *)(lVar2 + 0x608),iVar1);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0x608) + (longlong)iVar1 * 8) = uVar3;
  local_38 = param_1[1];
  local_40 = param_2;
  (**(code **)(*(longlong *)*param_2 + 0x28))();
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d1d5e FUN_1433d1d5e body=85 status=ok
// SIG undefined FUN_1433d1d5e(void)

undefined8 FUN_1433d1d5e(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_1 + 0x3b0;
  local_18 = param_2;
  (**(code **)(*(longlong *)*param_2 + 0x30))((longlong *)*param_2,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d1db4 FUN_1433d1db4 body=2528 status=ok
// SIG undefined FUN_1433d1db4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433d1db4(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a78e5c0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a78ecb0,1,0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar3 = FUN_140b10a34(&local_50,&DAT_14cac9fe0);
  if (cVar3 == '\0') {
    _DAT_14cac9fe0 = 0;
    uRam000000014cac9fe8 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14caca008,L"Net.RepMovement.DrawDebug",&local_50,&DAT_149dfb77a);
  atexit(FUN_1433c2443);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a78eeb0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14a78f360;
  local_68 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a78f380,1,0);
  FUN_14639e97c();
  atexit((_func_5014 *)&LAB_1433c29f6);
  DAT_14caca3e8 = 0;
  DAT_14caca3f0 = 0;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a78fb40,2,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7905f0,1,&PTR_FUN_14a7905c0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7909f0,1,0);
  DAT_14cacb0f8 = (undefined8 *)0x0;
  DAT_14cacb100 = 0;
  atexit(FUN_1433c3d07);
  if (DAT_14cacb100 != 2) {
    FUN_1446efa72(&DAT_14cacb0f8,0,2,0x10);
    DAT_14cacb100 = 2;
  }
  puVar2 = DAT_14cacb0f8;
  *DAT_14cacb0f8 = &PTR_LAB_14a79d280;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar2[2] = lVar6;
  *puVar2 = &PTR_FUN_14a79bc60;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a790da0,1,0);
  _DAT_14cacb140 = 0;
  DAT_14cacb148 = 0xffffffffffffffff;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caca4a8,L"ai.nav.EnableNavMeshResolutions",&DAT_14c76124c,
                L"When set to false, navmesh resoutions will be ignored.");
  atexit(FUN_1433c4332);
  ppuStack_60 = &PTR_FUN_14a791ad0;
  local_58 = 5;
  local_68 = 6;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a791b70);
  DAT_14cacb108 = DAT_14cacb108 & 0xe0;
  _DAT_14cacb10c = 0xbf800000bf800000;
  uRam000000014cacb114 = 0x3f000000bf800000;
  _DAT_14cacb120 = 0;
  uRam000000014cacb128 = 0;
  DAT_14cacb130 = 0;
  uRam000000014cacb138 = 0;
  atexit((_func_5014 *)&LAB_1433c5c70);
  ppuStack_60 = &PTR_FUN_14a7920a0;
  local_58 = 1;
  local_68 = 2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7920c0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a792bc0,1,0);
  FUN_140056680(&DAT_14caca680,L"Timestamp");
  atexit((_func_5014 *)&LAB_1433c5d6d);
  FUN_140056680(&DAT_14caca690,L"LastTickTimestamp");
  atexit((_func_5014 *)&LAB_1433c5d7e);
  FUN_140056680(&DAT_14caca6a0,L"SessionDuration");
  atexit((_func_5014 *)&LAB_1433c5d8f);
  FUN_140056680(&DAT_14caca6b0,L"EngineTickCount");
  atexit((_func_5014 *)&LAB_1433c5da0);
  FUN_140056680(&DAT_14caca6c0,L"SessionTickCount");
  atexit((_func_5014 *)&LAB_1433c5db1);
  FUN_140056680(&DAT_14caca6d0,L"CurrentUserActivity");
  atexit((_func_5014 *)&LAB_1433c5dc2);
  FUN_140056680(&DAT_14caca6e0,L"MonitorExitCode");
  atexit((_func_5014 *)&LAB_1433c5dd3);
  FUN_140056680(&DAT_14caca6f0,L"AverageFPS");
  atexit((_func_5014 *)&LAB_1433c5de4);
  FUN_140056680(&DAT_14caca700,L"IsTerminating");
  atexit((_func_5014 *)&LAB_1433c5df5);
  FUN_140056680(&DAT_14caca710,L"WasShutdown");
  atexit((_func_5014 *)&LAB_1433c5e06);
  FUN_140056680(&DAT_14caca720,L"IsCrash");
  atexit((_func_5014 *)&LAB_1433c5e17);
  FUN_140056680(&DAT_14caca730,L"GPUCrash");
  atexit((_func_5014 *)&LAB_1433c5e28);
  FUN_140056680(&DAT_14caca740,L"IsVanilla");
  atexit((_func_5014 *)&LAB_1433c5e39);
  FUN_140056680(&DAT_14caca750,L"IsLowDriveSpace");
  atexit((_func_5014 *)&LAB_1433c5e4a);
  FUN_140056680(&DAT_14caca760,L"WasDebuggerIgnored");
  atexit((_func_5014 *)&LAB_1433c5e5b);
  FUN_140056680(&DAT_14caca770,L"WasDebugged");
  atexit((_func_5014 *)&LAB_1433c5e6c);
  FUN_140056680(&DAT_14caca780,L"IsCrcMissing");
  atexit((_func_5014 *)&LAB_1433c5e7d);
  FUN_140056680(&DAT_14caca790,L"RunningOnBattery");
  atexit((_func_5014 *)&LAB_1433c5e8e);
  pvVar1 = DAT_14c991180;
  DAT_14caca7a0 = (void *)0x0;
  lVar5 = (longlong)DAT_14c991188;
  _DAT_14caca7a8 = DAT_14c991188;
  if (lVar5 == 0) {
    _DAT_14caca7ac = 0;
  }
  else {
    FUN_1446dd670(&DAT_14caca7a0,DAT_14c991188,0);
    memcpy(DAT_14caca7a0,pvVar1,lVar5 * 2);
  }
  atexit((_func_5014 *)&LAB_1433c5e9f);
  pvVar1 = DAT_14c991170;
  DAT_14caca7b0 = (void *)0x0;
  lVar5 = (longlong)DAT_14c991178;
  _DAT_14caca7b8 = DAT_14c991178;
  if (lVar5 == 0) {
    _DAT_14caca7bc = 0;
  }
  else {
    FUN_1446dd670(&DAT_14caca7b0,DAT_14c991178,0);
    memcpy(DAT_14caca7b0,pvVar1,lVar5 * 2);
  }
  atexit((_func_5014 *)&LAB_1433c5eb0);
  FUN_140056680(&DAT_14caca7c0,L"Unknown");
  atexit((_func_5014 *)&LAB_1433c5ec1);
  DAT_14caca950 = 0;
  _DAT_14caca958 = 0;
  _DAT_14caca960 = 2;
  atexit(FUN_1433c9878);
  DAT_14caca968 = 0;
  _DAT_14caca970 = 0;
  _DAT_14caca978 = 2;
  atexit(FUN_1433c98a9);
  local_50 = (char *)CONCAT44(local_50._4_4_,0x14);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14caca980,L"net.RPCDoSAnalyticsMaxRPCs",&local_50,
                L"The top \'x\' number of RPC\'s to include in RPC DoS analytics, ranked by RPC rate per Second."
               );
  atexit(FUN_1433c98da);
  _DAT_14cacac38 = 0;
  uRam000000014cacac40 = 0;
  atexit((_func_5014 *)&LAB_1433cb5a5);
  _DAT_14cacac48 = 0;
  DAT_14cacac50 = 0;
  atexit(FUN_1433cb5b1);
  DAT_14cacac58 = 0;
  _DAT_14cacac60 = 0;
  atexit(FUN_1433cb5ec);
  ppuStack_60 = &PTR_FUN_14a794650;
  local_58 = 3;
  local_68 = 7;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7947d0,1,&PTR_FUN_14a7946b0);
  _DAT_14cacb0e0 = 0x3ff0000000000000;
  DAT_14cacb0e8 = 0x3ff0000000000000;
  DAT_14cacb0f0 = 0x3ff0000000000000;
  DAT_14cacb0c0 = 0;
  _DAT_14cacb0c8 = 0;
  atexit((_func_5014 *)&LAB_1433cb749);
  FUN_1446f470e(&DAT_14cacb0b0,L"FAnimNotifyMontageInstanceContext",1);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7948e0);
  FUN_1446f470e(&DAT_14cacb0d0,L"FAnimNotifyStateMachineContext",1);
  FUN_1446f470e(&DAT_14cacb0b8,L"FActiveStateMachineScope",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a794dc0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a795220,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a795880);
  DAT_14cacade0 = 0x10000001e;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a796800,1,0);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacae10,L"a.Streaming.SpoofFailedChunkLoad",&DAT_14cacae20,
                L"Forces failing to load streamed animation chunks.\n0: Not Enabled, 1: Enabled");
  atexit(FUN_1433cfa06);
  local_50 = "Pose";
  local_48 = 4;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  _DAT_14cacae28 = (ulonglong)uVar4;
  local_50 = "Curves";
  local_48 = 6;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  _DAT_14cacae30 = (ulonglong)uVar4;
  local_50 = "Attributes";
  local_48 = 10;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  _DAT_14cacae38 = (ulonglong)uVar4;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 6;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a798250,2,&PTR_FUN_14a798160);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d2798 FUN_1433d2798 body=213 status=ok
// SIG undefined FUN_1433d2798(void)

void FUN_1433d2798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [96];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140d2967c(param_2,&local_38);
  if (0 < (int)uStack_30) {
    lVar3 = 0xc;
    lVar4 = 0;
    iVar2 = (int)uStack_30;
    do {
      lVar1 = *(longlong *)(local_38 + -0xc + lVar3);
      if (*(char *)(lVar1 + 0x179) == '\x01') {
        FUN_1409cd860(lVar1,local_98,*(undefined4 *)(local_38 + -4 + lVar3),
                      *(undefined4 *)(local_38 + lVar3));
        FUN_140167042(param_5,local_98);
        iVar2 = (int)uStack_30;
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < iVar2);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d287f FUN_1433d287f body=69 status=ok
// SIG undefined FUN_1433d287f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433d287f(void)

{
  _DAT_14cacb2c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433d28c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacb2c8,1);
  return;
}



// FUNCTION 1433d28c4 FUN_1433d28c4 body=20 status=ok
// SIG undefined FUN_1433d28c4(void)

undefined8 * FUN_1433d28c4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 1433d28d8 FUN_1433d28d8 body=496 status=ok
// SIG undefined FUN_1433d28d8(void)

void FUN_1433d28d8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
    uVar16 = 1;
    uVar15 = 0;
    iVar12 = 0;
    iVar9 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x18);
    }
    uVar11 = *puVar5;
    if (uVar11 == 0) {
      iVar12 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar12 = iVar1 + -1;
      }
      uVar15 = 0;
      uVar10 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar10 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar10 == uVar15) goto LAB_1433d29cc;
        iVar12 = iVar12 + 0x20;
        uVar11 = puVar5[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar11 & uVar11);
    uVar10 = uVar16 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar9) {
      iVar9 = iVar1;
    }
  }
  if (iVar9 != iVar1) {
    uVar11 = 0xffffffff;
    iVar4 = iVar1;
    do {
      lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar9 * 0x28);
      if (lVar13 != 0) {
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 8) + 8 + (longlong)iVar9 * 0x28);
        lVar13 = lVar13 << 4;
        do {
          FUN_140900ef4(lVar14,param_2);
          lVar14 = lVar14 + 0x10;
          lVar13 = lVar13 + -0x10;
        } while (lVar13 != 0);
        iVar4 = *(int *)(param_1 + 0x30);
      }
      uVar11 = uVar11 & ~(uint)uVar16;
      puVar5 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x18);
      }
      iVar9 = (int)uVar15;
      lVar13 = (longlong)iVar9;
      uVar6 = puVar5[lVar13] & uVar11;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar9) {
          iVar8 = iVar9;
        }
        if (iVar9 < iVar7) {
          lVar14 = 0;
          do {
            uVar6 = puVar5[lVar13 + lVar14 + 1];
            if (uVar6 != 0) {
              uVar15 = (ulonglong)(iVar9 + (int)lVar14 + 1);
              uVar11 = 0xffffffff;
              goto LAB_1433d299d;
            }
            iVar12 = iVar12 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar8 - lVar13 != lVar14);
          uVar11 = 0xffffffff;
          iVar9 = iVar8;
        }
        uVar15 = (ulonglong)(iVar9 + 1);
        iVar9 = iVar4;
      }
      else {
LAB_1433d299d:
        uVar16 = (ulonglong)(-uVar6 & uVar6);
        uVar10 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar9) {
          iVar9 = iVar4;
        }
      }
    } while (iVar9 != iVar1);
  }
LAB_1433d29cc:
  sVar2 = (short)*(undefined4 *)(param_1 + 0x70);
  sVar3 = sVar2 + 1;
  if (sVar3 == 0) {
    sVar3 = sVar2 + 2;
  }
  *(short *)(param_1 + 0x70) = sVar3;
  return;
}



// FUNCTION 1433d2ada FUN_1433d2ada body=2398 status=ok
// SIG undefined FUN_1433d2ada(void)

void FUN_1433d2ada(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  longlong lVar26;
  longlong lVar27;
  uint *puVar28;
  longlong lVar29;
  bool bVar30;
  float fVar31;
  undefined4 uVar32;
  undefined1 auStack_3c8 [40];
  longlong *local_3a0;
  longlong *local_398;
  ulonglong local_390;
  longlong local_388;
  undefined8 uStack_380;
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [190];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  plVar11 = (longlong *)param_2[3];
  uVar22 = *(uint *)(param_1 + 1);
  uVar17 = (ulonglong)uVar22;
  local_3a0 = param_2;
  if (((plVar11 == (longlong *)0x0) || ((char)plVar11[3] == '\0')) ||
     (((char)plVar11[3] == '\x03' && ((int)plVar11[1] == 0)))) {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) < 0) {
      FUN_14480ffb8(param_2,0);
    }
    *(undefined1 *)(local_3a0 + 2) = 0;
    if ((int)uVar22 < 0) {
LAB_1433d342a:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar17);
    }
    if (*(int *)((longlong)local_3a0 + 0xc) < (int)uVar22) {
      FUN_14480ffb8(local_3a0,uVar22);
    }
    if (uVar17 != 0) {
      lVar29 = 0;
      do {
        uVar32 = FUN_1448c9f94(*param_1 + lVar29 + 0x10,param_3,0);
        uVar4 = *(undefined8 *)(*param_1 + lVar29);
        iVar20 = (int)local_3a0[1];
        *(uint *)(local_3a0 + 1) = iVar20 + 1U;
        if (*(uint *)((longlong)local_3a0 + 0xc) < iVar20 + 1U) {
          FUN_1406de67a(local_3a0,iVar20);
        }
        lVar27 = *local_3a0;
        lVar26 = (longlong)iVar20 * 0x10;
        *(undefined8 *)(lVar27 + lVar26) = uVar4;
        *(undefined4 *)(lVar27 + 8 + lVar26) = uVar32;
        *(undefined1 *)(lVar27 + 0xc + lVar26) = 0;
        lVar29 = lVar29 + 0x90;
      } while (uVar17 * 0x90 != lVar29);
    }
  }
  else {
    local_388 = 0;
    uStack_380 = 0;
    FUN_14015cbac();
    lVar29 = local_388;
    if (0 < (int)uVar22) {
      uVar9 = 0;
      do {
        *(int *)(local_388 + uVar9 * 4) = (int)uVar9;
        uVar9 = uVar9 + 1;
      } while (uVar17 != uVar9);
    }
    iVar20 = (int)uStack_380;
    lVar27 = (longlong)(int)uStack_380;
    local_398 = plVar11;
    if (1 < lVar27) {
      local_390 = uVar17;
      memset(local_368,0,0x2f0);
      local_378 = lVar29;
      local_370 = lVar29 + lVar27 * 4 + -4;
      fVar31 = logf((float)iVar20);
      local_368[0] = (int)(longlong)(fVar31 + fVar31);
      plVar11 = &local_378;
      do {
        puVar14 = (uint *)*plVar11;
        puVar10 = (uint *)plVar11[1];
        iVar20 = (int)plVar11[2];
        iVar15 = (int)((ulonglong)((longlong)puVar10 - (longlong)puVar14) >> 2);
        uVar22 = iVar15 + 1;
        puVar18 = puVar10;
        puVar24 = puVar14;
        if (iVar20 != 0) {
LAB_1433d2bfc:
          if (8 < (int)uVar22) {
            uVar3 = puVar14[uVar22 >> 1];
            puVar14[uVar22 >> 1] = *puVar14;
            *puVar14 = uVar3;
            puVar23 = puVar18 + 1;
            puVar13 = puVar14;
            do {
              puVar6 = puVar13 + 1;
              puVar19 = puVar13 + 1;
              do {
                puVar25 = puVar19;
                puVar13 = puVar6;
                if (puVar18 < puVar13) break;
                uVar4 = *(undefined8 *)(*param_1 + (longlong)(int)*puVar14 * 0x90);
                uVar5 = *(undefined8 *)(*param_1 + (longlong)(int)*puVar13 * 0x90);
                iVar15 = (int)uVar4 - (int)uVar5;
                if (iVar15 == 0) {
                  iVar15 = (int)((ulonglong)uVar4 >> 0x20) - (int)((ulonglong)uVar5 >> 0x20);
                }
                puVar6 = puVar13 + 1;
                puVar19 = puVar25 + 1;
              } while (-1 < iVar15);
              puVar6 = puVar23 + -2;
              do {
                puVar19 = puVar23;
                puVar28 = puVar6;
                puVar23 = puVar19 + -1;
                if (puVar23 <= puVar14) break;
                uVar4 = *(undefined8 *)(*param_1 + (longlong)(int)*puVar23 * 0x90);
                uVar5 = *(undefined8 *)(*param_1 + (longlong)(int)*puVar14 * 0x90);
                iVar15 = (int)uVar4 - (int)uVar5;
                if (iVar15 == 0) {
                  iVar15 = (int)((ulonglong)uVar4 >> 0x20) - (int)((ulonglong)uVar5 >> 0x20);
                }
                puVar6 = puVar28 + -1;
              } while (-1 < iVar15);
              if (puVar23 < puVar13) goto LAB_1433d2ce8;
              uVar22 = *puVar13;
              *puVar13 = *puVar23;
              *puVar23 = uVar22;
            } while( true );
          }
          if (puVar14 < puVar18) {
            do {
              puVar10 = puVar14;
              if (puVar14 + 1 <= puVar18) {
                uVar17 = (ulonglong)*puVar14;
                puVar24 = puVar14 + 1;
                puVar23 = puVar14;
                do {
                  uVar4 = *(undefined8 *)(*param_1 + (longlong)(int)uVar17 * 0x90);
                  uVar5 = *(undefined8 *)(*param_1 + (longlong)(int)*puVar24 * 0x90);
                  iVar20 = (int)uVar4 - (int)uVar5;
                  if (iVar20 == 0) {
                    iVar20 = (int)((ulonglong)uVar4 >> 0x20) - (int)((ulonglong)uVar5 >> 0x20);
                  }
                  puVar10 = puVar24;
                  uVar9 = (longlong)(int)*puVar24;
                  if (-1 < iVar20) {
                    puVar10 = puVar23;
                    uVar9 = uVar17;
                  }
                  puVar24 = puVar24 + 1;
                  uVar17 = uVar9 & 0xffffffff;
                  puVar23 = puVar10;
                } while (puVar24 <= puVar18);
              }
              uVar22 = *puVar10;
              *puVar10 = *puVar18;
              *puVar18 = uVar22;
              puVar18 = puVar18 + -1;
            } while (puVar14 < puVar18);
          }
          goto LAB_1433d300d;
        }
LAB_1433d2d7b:
        if (uVar22 != 0) {
          iVar20 = (iVar15 - (iVar15 + -1 >> 0x1f)) + -1 >> 1;
          iVar15 = iVar20;
joined_r0x0001433d2da0:
          do {
            iVar8 = iVar20 * 2 + 1;
            if (iVar8 < (int)uVar22) {
              iVar16 = iVar20 * 2 + 2;
              lVar29 = *param_1;
              if (iVar16 < (int)uVar22) {
                uVar4 = *(undefined8 *)(lVar29 + (longlong)(int)puVar14[iVar16] * 0x90);
                uVar5 = *(undefined8 *)(lVar29 + (longlong)(int)puVar14[iVar8] * 0x90);
                iVar7 = (int)uVar4 - (int)uVar5;
                if (iVar7 == 0) {
                  iVar7 = (int)((ulonglong)uVar4 >> 0x20) - (int)((ulonglong)uVar5 >> 0x20);
                }
                if (-1 < iVar7) {
                  iVar8 = iVar16;
                }
              }
              uVar3 = puVar14[iVar20];
              uVar4 = *(undefined8 *)(lVar29 + (longlong)(int)uVar3 * 0x90);
              uVar5 = *(undefined8 *)(lVar29 + (longlong)(int)puVar14[iVar8] * 0x90);
              iVar16 = (int)uVar4 - (int)uVar5;
              if (iVar16 == 0) {
                iVar16 = (int)((ulonglong)uVar4 >> 0x20) - (int)((ulonglong)uVar5 >> 0x20);
              }
              if (iVar16 < 0) {
                puVar14[iVar20] = puVar14[iVar8];
                puVar14[iVar8] = uVar3;
                iVar20 = iVar8;
                goto joined_r0x0001433d2da0;
              }
            }
            bVar30 = iVar15 != 0;
            iVar20 = iVar15 + -1;
            iVar15 = iVar20;
          } while (bVar30);
          if (1 < (int)uVar22) {
            uVar17 = (ulonglong)uVar22;
            uVar3 = *puVar14;
            *puVar14 = puVar14[uVar17 - 1];
            puVar14[uVar17 - 1] = uVar3;
            if (uVar22 != 2) {
              do {
                uVar9 = uVar17 - 1;
                iVar20 = 0;
                iVar8 = 1;
                iVar15 = 0;
                do {
                  iVar20 = iVar20 + 2;
                  lVar29 = *param_1;
                  iVar16 = iVar8;
                  if ((longlong)iVar20 < (longlong)uVar9) {
                    uVar4 = *(undefined8 *)(lVar29 + (longlong)(int)puVar14[iVar20] * 0x90);
                    uVar5 = *(undefined8 *)(lVar29 + (longlong)(int)puVar14[iVar8] * 0x90);
                    iVar8 = (int)uVar4 - (int)uVar5;
                    if (iVar8 == 0) {
                      iVar8 = (int)((ulonglong)uVar4 >> 0x20) - (int)((ulonglong)uVar5 >> 0x20);
                    }
                    if (-1 < iVar8) {
                      iVar16 = iVar20;
                    }
                  }
                  uVar22 = puVar14[iVar15];
                  uVar4 = *(undefined8 *)(lVar29 + (longlong)(int)uVar22 * 0x90);
                  uVar5 = *(undefined8 *)(lVar29 + (longlong)(int)puVar14[iVar16] * 0x90);
                  iVar20 = (int)uVar4 - (int)uVar5;
                  if (iVar20 == 0) {
                    iVar20 = (int)((ulonglong)uVar4 >> 0x20) - (int)((ulonglong)uVar5 >> 0x20);
                  }
                  if (-1 < iVar20) break;
                  puVar14[iVar15] = puVar14[iVar16];
                  puVar14[iVar16] = uVar22;
                  iVar20 = iVar16 * 2;
                  iVar8 = iVar16 * 2 + 1;
                  iVar15 = iVar16;
                } while ((longlong)iVar8 < (longlong)uVar9);
                uVar22 = *puVar14;
                *puVar14 = puVar14[uVar17 - 2];
                puVar14[uVar17 - 2] = uVar22;
                uVar17 = uVar9;
              } while (2 < uVar9);
            }
          }
        }
LAB_1433d300d:
        plVar11 = plVar11 + -3;
        uVar17 = local_390;
      } while (&local_378 <= plVar11);
    }
    plVar11 = local_398;
    *(undefined1 *)(local_3a0 + 2) = 1;
    if ((char)local_398[3] == '\x01') {
      *(undefined4 *)(local_3a0 + 1) = 0;
      if (*(int *)((longlong)local_3a0 + 0xc) < 0) {
        FUN_14480ffb8(local_3a0,0);
      }
      *(undefined1 *)(local_3a0 + 2) = 0;
    }
    else {
      if ((char)local_398[2] == '\0') {
        FUN_146264839(*local_398,(int)local_398[1]);
        *(undefined1 *)(plVar11 + 2) = 1;
      }
      *(undefined4 *)(local_3a0 + 1) = 0;
      if (*(int *)((longlong)local_3a0 + 0xc) < 0) {
        FUN_14480ffb8(local_3a0,0);
      }
      *(undefined1 *)(local_3a0 + 2) = 0;
      iVar20 = (int)uVar17;
      if (iVar20 < 0) goto LAB_1433d342a;
      if (*(int *)((longlong)local_3a0 + 0xc) < iVar20) {
        FUN_14480ffb8(local_3a0,uVar17 & 0xffffffff);
      }
      iVar15 = (int)plVar11[1];
      bVar30 = uVar17 != 0;
      if ((bVar30 || 0 < iVar15) && (uVar17 != 0 || 0 >= iVar15)) {
        iVar8 = 0;
        iVar16 = 0;
        plVar12 = local_3a0;
        while ((!bVar30 || (iVar16 != iVar15))) {
          lVar29 = *param_1;
          lVar21 = (longlong)*(int *)(local_388 + (longlong)iVar8 * 4) * 0x90;
          lVar27 = *(longlong *)(lVar29 + lVar21);
          lVar26 = *(longlong *)(*plVar11 + (longlong)iVar16 * 0xc);
          if (lVar27 == lVar26) {
            bVar1 = *(byte *)(*plVar11 + (longlong)iVar16 * 0xc + 8);
            if ((bVar1 & 1) != 0) goto LAB_1433d3318;
            cVar2 = (char)plVar11[3];
            if (cVar2 == '\0') {
LAB_1433d32c3:
              uVar32 = FUN_1448c9f94(lVar29 + lVar21 + 0x10,param_3,0);
              iVar7 = (int)local_3a0[1];
              *(uint *)(local_3a0 + 1) = iVar7 + 1U;
              if (*(uint *)((longlong)local_3a0 + 0xc) < iVar7 + 1U) {
                FUN_1406de67a(local_3a0,iVar7);
              }
              lVar29 = *local_3a0;
              lVar26 = (longlong)iVar7 * 0x10;
              *(longlong *)(lVar29 + lVar26) = lVar27;
              *(undefined4 *)(lVar29 + 8 + lVar26) = uVar32;
              *(undefined1 *)(lVar29 + 0xc + lVar26) = 0;
              plVar12 = local_3a0;
              plVar11 = local_398;
            }
            else if (cVar2 == '\x02') {
              if ((bVar1 & 2) != 0) goto LAB_1433d32c3;
            }
            else if ((cVar2 == '\x03') && ((bVar1 & 2) == 0)) goto LAB_1433d32c3;
LAB_1433d3318:
            iVar8 = iVar8 + 1;
LAB_1433d331a:
            iVar16 = iVar16 + 1;
          }
          else {
            iVar7 = (int)lVar27 - (int)lVar26;
            if (iVar7 == 0) {
              iVar7 = (int)((ulonglong)lVar27 >> 0x20) - (int)((ulonglong)lVar26 >> 0x20);
            }
            if (-1 < iVar7) goto LAB_1433d331a;
            if (((char)plVar11[3] == '\x03') || ((char)plVar11[3] == '\0')) {
              uVar32 = FUN_1448c9f94(lVar29 + lVar21 + 0x10,param_3,0);
              iVar7 = (int)local_3a0[1];
              *(uint *)(local_3a0 + 1) = iVar7 + 1U;
              if (*(uint *)((longlong)local_3a0 + 0xc) < iVar7 + 1U) {
                FUN_1406de67a(local_3a0,iVar7);
              }
              lVar29 = *local_3a0;
              lVar26 = (longlong)iVar7 * 0x10;
              *(longlong *)(lVar29 + lVar26) = lVar27;
              *(undefined4 *)(lVar29 + 8 + lVar26) = uVar32;
              *(undefined1 *)(lVar29 + 0xc + lVar26) = 0;
              plVar12 = local_3a0;
              plVar11 = local_398;
            }
            iVar8 = iVar8 + 1;
          }
          bVar30 = iVar8 < iVar20;
          if ((!bVar30 && iVar15 <= iVar16) || (iVar8 == iVar20 && iVar15 > iVar16))
          goto LAB_1433d3107;
        }
        iVar15 = (iVar20 - iVar8) + (int)plVar12[1];
        if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar15);
        }
        if (*(int *)((longlong)plVar12 + 0xc) < iVar15) {
          FUN_14480ffb8();
        }
        if (iVar8 < iVar20) {
          lVar29 = (longlong)iVar8;
          iVar20 = iVar20 - iVar8;
          do {
            if (((char)plVar11[3] == '\x03') || ((char)plVar11[3] == '\0')) {
              uVar32 = FUN_1448c9f94(*param_1 + (longlong)*(int *)(local_388 + lVar29 * 4) * 0x90 +
                                     0x10,param_3,0);
              uVar4 = *(undefined8 *)(*param_1 + (longlong)*(int *)(local_388 + lVar29 * 4) * 0x90);
              iVar15 = (int)local_3a0[1];
              *(uint *)(local_3a0 + 1) = iVar15 + 1U;
              if (*(uint *)((longlong)local_3a0 + 0xc) < iVar15 + 1U) {
                FUN_1406de67a(local_3a0,iVar15);
              }
              lVar27 = *local_3a0;
              lVar26 = (longlong)iVar15 * 0x10;
              *(undefined8 *)(lVar27 + lVar26) = uVar4;
              *(undefined4 *)(lVar27 + 8 + lVar26) = uVar32;
              *(undefined1 *)(lVar27 + 0xc + lVar26) = 0;
              plVar11 = local_398;
            }
            lVar29 = lVar29 + 1;
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
        }
      }
    }
  }
LAB_1433d3107:
  if ((local_70 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1433d2ce8:
  uVar22 = *puVar14;
  *puVar14 = *puVar23;
  *puVar23 = uVar22;
  iVar20 = iVar20 + -1;
  puVar19 = puVar19 + -2;
  if ((longlong)puVar28 - (longlong)puVar24 < (longlong)puVar10 - (longlong)puVar25) {
    if (puVar13 < puVar18) {
      *plVar11 = (longlong)puVar13;
      plVar11[1] = (longlong)puVar18;
      *(int *)(plVar11 + 2) = iVar20;
      plVar11 = plVar11 + 3;
    }
    puVar10 = puVar28;
    puVar25 = puVar14;
    if (puVar23 <= puVar14 + 1) goto LAB_1433d300d;
  }
  else {
    if (puVar14 + 1 < puVar23) {
      *plVar11 = (longlong)puVar14;
      plVar11[1] = (longlong)puVar19;
      *(int *)(plVar11 + 2) = iVar20;
      plVar11 = plVar11 + 3;
    }
    puVar14 = puVar13;
    puVar19 = puVar18;
    puVar10 = puVar18;
    if (puVar18 <= puVar13) goto LAB_1433d300d;
  }
  iVar15 = (int)((ulonglong)((longlong)puVar10 - (longlong)puVar25) >> 2);
  uVar22 = iVar15 + 1;
  puVar18 = puVar19;
  puVar24 = puVar25;
  if (iVar20 == 0) goto LAB_1433d2d7b;
  goto LAB_1433d2bfc;
}



// FUNCTION 1433d343a FUN_1433d343a body=113 status=ok
// SIG undefined FUN_1433d343a(void)

void FUN_1433d343a(undefined8 *param_1,longlong param_2)

{
  FUN_140c54e34(*(undefined8 *)*param_1,param_2 + 0x68,4);
  FUN_140c54e34(*(undefined8 *)param_1[1],*(undefined8 *)(param_2 + 0x70),
                *(int *)(param_2 + 0x78) * 0x1c);
  FUN_140c54e34(*(undefined8 *)*param_1,param_2 + 0x6c,1);
  FUN_140c54e34(*(undefined8 *)*param_1,param_2 + 0x6d,1);
  return;
}



// FUNCTION 1433d34ac FUN_1433d34ac body=184 status=ok
// SIG undefined FUN_1433d34ac(void)

void FUN_1433d34ac(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  float fVar1;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar1 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    FUN_1422a09f0(*param_2,*param_3,*(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x10),
                  *(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar1,*(undefined1 *)(param_4 + 4),0
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d3564 FUN_1433d3564 body=184 status=ok
// SIG undefined FUN_1433d3564(void)

void FUN_1433d3564(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  float fVar1;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar1 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    FUN_1422a0cb0(*param_2,*param_3,*(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x10),
                  *(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar1,*(undefined1 *)(param_4 + 4),0
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d361c FUN_1433d361c body=199 status=ok
// SIG undefined FUN_1433d361c(void)

void FUN_1433d361c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    lVar1 = *(longlong *)(param_4 + 0x10);
    FUN_1422a0b40(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x30),
                  *(undefined8 *)(lVar1 + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar2,*(undefined1 *)(param_4 + 4),0
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d36e4 FUN_1433d36e4 body=184 status=ok
// SIG undefined FUN_1433d36e4(void)

void FUN_1433d36e4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  float fVar1;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar1 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    FUN_1422a09f0(*param_2,*param_3,*(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x10),
                  *(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar1,*(undefined1 *)(param_4 + 4),1
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d379c FUN_1433d379c body=184 status=ok
// SIG undefined FUN_1433d379c(void)

void FUN_1433d379c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  float fVar1;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar1 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    FUN_1422a0cb0(*param_2,*param_3,*(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x10),
                  *(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar1,*(undefined1 *)(param_4 + 4),1
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d3854 FUN_1433d3854 body=199 status=ok
// SIG undefined FUN_1433d3854(void)

void FUN_1433d3854(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    lVar1 = *(longlong *)(param_4 + 0x10);
    FUN_1422a0b40(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x30),
                  *(undefined8 *)(lVar1 + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar2,*(undefined1 *)(param_4 + 4),1
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d391c FUN_1433d391c body=184 status=ok
// SIG undefined FUN_1433d391c(void)

void FUN_1433d391c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  float fVar1;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar1 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    FUN_1422a09f0(*param_2,*param_3,*(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x10),
                  *(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar1,*(undefined1 *)(param_4 + 4),2
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d39d4 FUN_1433d39d4 body=184 status=ok
// SIG undefined FUN_1433d39d4(void)

void FUN_1433d39d4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  float fVar1;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar1 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    FUN_1422a0cb0(*param_2,*param_3,*(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x10),
                  *(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar1,*(undefined1 *)(param_4 + 4),2
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d3a8c FUN_1433d3a8c body=199 status=ok
// SIG undefined FUN_1433d3a8c(void)

void FUN_1433d3a8c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    lVar1 = *(longlong *)(param_4 + 0x10);
    FUN_1422a0b40(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x30),
                  *(undefined8 *)(lVar1 + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar2,*(undefined1 *)(param_4 + 4),2
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d3b54 FUN_1433d3b54 body=184 status=ok
// SIG undefined FUN_1433d3b54(void)

void FUN_1433d3b54(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  float fVar1;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar1 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    FUN_1422a09f0(*param_2,*param_3,*(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x10),
                  *(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar1,*(undefined1 *)(param_4 + 4),3
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d3c0c FUN_1433d3c0c body=184 status=ok
// SIG undefined FUN_1433d3c0c(void)

void FUN_1433d3c0c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  float fVar1;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar1 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    FUN_1422a0cb0(*param_2,*param_3,*(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x10),
                  *(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar1,*(undefined1 *)(param_4 + 4),3
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d3cc4 FUN_1433d3cc4 body=199 status=ok
// SIG undefined FUN_1433d3cc4(void)

void FUN_1433d3cc4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    lVar1 = *(longlong *)(param_4 + 0x10);
    FUN_1422a0b40(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x30),
                  *(undefined8 *)(lVar1 + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar2,*(undefined1 *)(param_4 + 4),3
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d3d8c FUN_1433d3d8c body=184 status=ok
// SIG undefined FUN_1433d3d8c(void)

void FUN_1433d3d8c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  float fVar1;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar1 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    FUN_1422a09f0(*param_2,*param_3,*(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x10),
                  *(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar1,*(undefined1 *)(param_4 + 4),4
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d3e44 FUN_1433d3e44 body=184 status=ok
// SIG undefined FUN_1433d3e44(void)

void FUN_1433d3e44(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  float fVar1;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar1 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    FUN_1422a0cb0(*param_2,*param_3,*(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x10),
                  *(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar1,*(undefined1 *)(param_4 + 4),4
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d3efc FUN_1433d3efc body=199 status=ok
// SIG undefined FUN_1433d3efc(void)

void FUN_1433d3efc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    lVar1 = *(longlong *)(param_4 + 0x10);
    FUN_1422a0b40(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x30),
                  *(undefined8 *)(lVar1 + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar2,*(undefined1 *)(param_4 + 4),4
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d3fc4 FUN_1433d3fc4 body=184 status=ok
// SIG undefined FUN_1433d3fc4(void)

void FUN_1433d3fc4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  float fVar1;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar1 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    FUN_1422a09f0(*param_2,*param_3,*(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x10),
                  *(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar1,*(undefined1 *)(param_4 + 4),5
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d407c FUN_1433d407c body=184 status=ok
// SIG undefined FUN_1433d407c(void)

void FUN_1433d407c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  float fVar1;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar1 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    FUN_1422a0cb0(*param_2,*param_3,*(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x10),
                  *(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar1,*(undefined1 *)(param_4 + 4),5
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4134 FUN_1433d4134 body=199 status=ok
// SIG undefined FUN_1433d4134(void)

void FUN_1433d4134(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    lVar1 = *(longlong *)(param_4 + 0x10);
    FUN_1422a0b40(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x30),
                  *(undefined8 *)(lVar1 + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar2,*(undefined1 *)(param_4 + 4),5
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d41fc FUN_1433d41fc body=184 status=ok
// SIG undefined FUN_1433d41fc(void)

void FUN_1433d41fc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  float fVar1;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar1 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    FUN_1422a09f0(*param_2,*param_3,*(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x10),
                  *(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar1,*(undefined1 *)(param_4 + 4),6
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d42b4 FUN_1433d42b4 body=184 status=ok
// SIG undefined FUN_1433d42b4(void)

void FUN_1433d42b4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  float fVar1;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar1 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    FUN_1422a0cb0(*param_2,*param_3,*(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x10),
                  *(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar1,*(undefined1 *)(param_4 + 4),6
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d436c FUN_1433d436c body=199 status=ok
// SIG undefined FUN_1433d436c(void)

void FUN_1433d436c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    lVar1 = *(longlong *)(param_4 + 0x10);
    FUN_1422a0b40(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x30),
                  *(undefined8 *)(lVar1 + 0x38),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar2,*(undefined1 *)(param_4 + 4),6
                  ,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4434 FUN_1433d4434 body=186 status=ok
// SIG undefined FUN_1433d4434(void)

void FUN_1433d4434(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    lVar1 = *(longlong *)(param_4 + 0x10);
    FUN_14237c370(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x38),
                  *(undefined4 *)(lVar1 + 8),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar2,*(undefined1 *)(param_4 + 4),
                  *(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d44ee FUN_1433d44ee body=186 status=ok
// SIG undefined FUN_1433d44ee(void)

void FUN_1433d44ee(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    lVar1 = *(longlong *)(param_4 + 0x10);
    FUN_14237c630(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x38),
                  *(undefined4 *)(lVar1 + 8),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar2,*(undefined1 *)(param_4 + 4),
                  *(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d45a8 FUN_1433d45a8 body=200 status=ok
// SIG undefined FUN_1433d45a8(void)

void FUN_1433d45a8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_14237c4c0(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x30),
                  *(undefined8 *)(lVar1 + 0x38),*(undefined4 *)(lVar1 + 8),
                  (float)(((double)((longlong)*(int *)(param_4 + 0x44) *
                                   (longlong)*(int *)(param_4 + 0x50)) +
                          (double)((ulonglong)(double)*(int *)(param_4 + 0x44) & 0x8000000000000000)
                          ) / (double)*(int *)(param_4 + 0x40)),fVar2,*(undefined1 *)(param_4 + 4),
                  *(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4670 FUN_1433d4670 body=129 status=ok
// SIG undefined FUN_1433d4670(void)

void FUN_1433d4670(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fce70(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x38),
                  *(undefined4 *)(lVar1 + 8),fVar2,*(undefined1 *)(param_4 + 4),0,
                  *(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d46f2 FUN_1433d46f2 body=129 status=ok
// SIG undefined FUN_1433d46f2(void)

void FUN_1433d46f2(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fd110(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x38),
                  *(undefined4 *)(lVar1 + 8),fVar2,*(undefined1 *)(param_4 + 4),0,
                  *(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4774 FUN_1433d4774 body=144 status=ok
// SIG undefined FUN_1433d4774(void)

void FUN_1433d4774(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fcfb0(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x30),
                  *(undefined8 *)(lVar1 + 0x38),*(undefined4 *)(lVar1 + 8),fVar2,
                  *(undefined1 *)(param_4 + 4),0,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4804 FUN_1433d4804 body=129 status=ok
// SIG undefined FUN_1433d4804(void)

void FUN_1433d4804(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fce70(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x38),
                  *(undefined4 *)(lVar1 + 8),fVar2,*(undefined1 *)(param_4 + 4),1,
                  *(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4886 FUN_1433d4886 body=129 status=ok
// SIG undefined FUN_1433d4886(void)

void FUN_1433d4886(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fd110(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x38),
                  *(undefined4 *)(lVar1 + 8),fVar2,*(undefined1 *)(param_4 + 4),1,
                  *(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4908 FUN_1433d4908 body=144 status=ok
// SIG undefined FUN_1433d4908(void)

void FUN_1433d4908(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fcfb0(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x30),
                  *(undefined8 *)(lVar1 + 0x38),*(undefined4 *)(lVar1 + 8),fVar2,
                  *(undefined1 *)(param_4 + 4),1,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4998 FUN_1433d4998 body=129 status=ok
// SIG undefined FUN_1433d4998(void)

void FUN_1433d4998(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fce70(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x38),
                  *(undefined4 *)(lVar1 + 8),fVar2,*(undefined1 *)(param_4 + 4),2,
                  *(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4a1a FUN_1433d4a1a body=129 status=ok
// SIG undefined FUN_1433d4a1a(void)

void FUN_1433d4a1a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fd110(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x38),
                  *(undefined4 *)(lVar1 + 8),fVar2,*(undefined1 *)(param_4 + 4),2,
                  *(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4a9c FUN_1433d4a9c body=144 status=ok
// SIG undefined FUN_1433d4a9c(void)

void FUN_1433d4a9c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fcfb0(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x30),
                  *(undefined8 *)(lVar1 + 0x38),*(undefined4 *)(lVar1 + 8),fVar2,
                  *(undefined1 *)(param_4 + 4),2,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4b2c FUN_1433d4b2c body=129 status=ok
// SIG undefined FUN_1433d4b2c(void)

void FUN_1433d4b2c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fce70(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x38),
                  *(undefined4 *)(lVar1 + 8),fVar2,*(undefined1 *)(param_4 + 4),3,
                  *(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4bae FUN_1433d4bae body=129 status=ok
// SIG undefined FUN_1433d4bae(void)

void FUN_1433d4bae(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fd110(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x38),
                  *(undefined4 *)(lVar1 + 8),fVar2,*(undefined1 *)(param_4 + 4),3,
                  *(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4c30 FUN_1433d4c30 body=144 status=ok
// SIG undefined FUN_1433d4c30(void)

void FUN_1433d4c30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fcfb0(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x30),
                  *(undefined8 *)(lVar1 + 0x38),*(undefined4 *)(lVar1 + 8),fVar2,
                  *(undefined1 *)(param_4 + 4),3,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4cc0 FUN_1433d4cc0 body=129 status=ok
// SIG undefined FUN_1433d4cc0(void)

void FUN_1433d4cc0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fce70(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x38),
                  *(undefined4 *)(lVar1 + 8),fVar2,*(undefined1 *)(param_4 + 4),4,
                  *(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4d42 FUN_1433d4d42 body=129 status=ok
// SIG undefined FUN_1433d4d42(void)

void FUN_1433d4d42(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fd110(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x38),
                  *(undefined4 *)(lVar1 + 8),fVar2,*(undefined1 *)(param_4 + 4),4,
                  *(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4dc4 FUN_1433d4dc4 body=144 status=ok
// SIG undefined FUN_1433d4dc4(void)

void FUN_1433d4dc4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fcfb0(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x30),
                  *(undefined8 *)(lVar1 + 0x38),*(undefined4 *)(lVar1 + 8),fVar2,
                  *(undefined1 *)(param_4 + 4),4,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4e54 FUN_1433d4e54 body=129 status=ok
// SIG undefined FUN_1433d4e54(void)

void FUN_1433d4e54(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fce70(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x38),
                  *(undefined4 *)(lVar1 + 8),fVar2,*(undefined1 *)(param_4 + 4),5,
                  *(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4ed6 FUN_1433d4ed6 body=129 status=ok
// SIG undefined FUN_1433d4ed6(void)

void FUN_1433d4ed6(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fd110(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x38),
                  *(undefined4 *)(lVar1 + 8),fVar2,*(undefined1 *)(param_4 + 4),5,
                  *(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4f58 FUN_1433d4f58 body=144 status=ok
// SIG undefined FUN_1433d4f58(void)

void FUN_1433d4f58(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fcfb0(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x30),
                  *(undefined8 *)(lVar1 + 0x38),*(undefined4 *)(lVar1 + 8),fVar2,
                  *(undefined1 *)(param_4 + 4),5,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d4fe8 FUN_1433d4fe8 body=129 status=ok
// SIG undefined FUN_1433d4fe8(void)

void FUN_1433d4fe8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fce70(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x38),
                  *(undefined4 *)(lVar1 + 8),fVar2,*(undefined1 *)(param_4 + 4),6,
                  *(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d506a FUN_1433d506a body=129 status=ok
// SIG undefined FUN_1433d506a(void)

void FUN_1433d506a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fd110(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x38),
                  *(undefined4 *)(lVar1 + 8),fVar2,*(undefined1 *)(param_4 + 4),6,
                  *(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d50ec FUN_1433d50ec body=144 status=ok
// SIG undefined FUN_1433d50ec(void)

void FUN_1433d50ec(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (*(int *)(param_3 + 1) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x10);
    fVar2 = (*(float *)(param_4 + 0x4c) + (float)*(int *)(param_4 + 0x48)) /
            (float)*(int *)(param_4 + 0x50);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    FUN_1423fcfb0(*param_2,*param_3,*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x30),
                  *(undefined8 *)(lVar1 + 0x38),*(undefined4 *)(lVar1 + 8),fVar2,
                  *(undefined1 *)(param_4 + 4),6,*(int *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1433d517c FUN_1433d517c body=55 status=ok
// SIG undefined FUN_1433d517c(void)

void FUN_1433d517c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacb408 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacb408 = FUN_14171c317(FUN_1463a22b2,uVar1,L"EAnimExecutionContextConversionResult");
  }
  return;
}



// FUNCTION 1433d51b3 FUN_1433d51b3 body=55 status=ok
// SIG undefined FUN_1433d51b3(void)

void FUN_1433d51b3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacb498 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacb498 = FUN_14171c317(FUN_1463a2576,uVar1,L"EMontagePlayReturnType");
  }
  return;
}



// FUNCTION 1433d520a FUN_1433d520a body=21 status=ok
// SIG undefined FUN_1433d520a(void)

void FUN_1433d520a(longlong param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = (byte)*(undefined4 *)(param_1 + 0x1b8);
  if (param_2 < bVar1) {
    param_2 = bVar1;
  }
  *(byte *)(param_1 + 0x1b8) = param_2;
  return;
}



// FUNCTION 1433d5220 FUN_1433d5220 body=333 status=ok
// SIG undefined FUN_1433d5220(void)

void FUN_1433d5220(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x90);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x88) + lVar3 * 8);
      if (lVar4 != 0) {
        FUN_14790515c(lVar4,param_2);
        iVar2 = *(int *)(param_1 + 0x90);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if (0 < *(int *)(param_1 + 400)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      (**(code **)(*param_2 + 0x88))(param_2,*(longlong *)(param_1 + 0x188) + lVar3,0,0);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x20;
    } while (lVar4 < *(int *)(param_1 + 400));
  }
  if (0 < *(int *)(param_1 + 0x1a0)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      (**(code **)(*param_2 + 0x88))(param_2,*(longlong *)(param_1 + 0x198) + lVar3,0,0);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (lVar4 < *(int *)(param_1 + 0x1a0));
  }
  if (0 < *(int *)(param_1 + 0x1b0)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      (**(code **)(*param_2 + 0x88))(param_2,*(longlong *)(param_1 + 0x1a8) + lVar3,0,0);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x20;
    } while (lVar4 < *(int *)(param_1 + 0x1b0));
  }
  plVar1 = *(longlong **)(param_1 + 0x3e0);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001433d5285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x90))(plVar1,param_1,param_2);
  return;
}



// FUNCTION 1433d536d FUN_1433d536d body=69 status=ok
// SIG undefined FUN_1433d536d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433d536d(void)

{
  _DAT_14cacb8d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433d53af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacb8d8,1);
  return;
}



// FUNCTION 1433d53b2 FUN_1433d53b2 body=69 status=ok
// SIG undefined FUN_1433d53b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433d53b2(void)

{
  _DAT_14cacb8e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433d53f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacb8e8,1);
  return;
}



// FUNCTION 1433d53f7 FUN_1433d53f7 body=69 status=ok
// SIG undefined FUN_1433d53f7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433d53f7(void)

{
  _DAT_14cacb8f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433d5439. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacb8f8,1);
  return;
}



// FUNCTION 1433d543c FUN_1433d543c body=69 status=ok
// SIG undefined FUN_1433d543c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433d543c(void)

{
  _DAT_14cacb900 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433d547e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacb908,1);
  return;
}



// FUNCTION 1433d54a2 FUN_1433d54a2 body=330 status=ok
// SIG undefined FUN_1433d54a2(void)

void FUN_1433d54a2(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_48 [40];
  ulonglong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *param_2;
  if (uVar2 == 0) {
    FUN_1478f79f0((longlong *)(param_1 + 0x98),param_2);
  }
  else if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0xd0;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xd8);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xe0) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar5 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 0x18);
        if (*puVar1 == uVar2) {
          if ((puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) &&
             ((ulonglong *)puVar1[1] == param_2)) {
            FUN_1478fd67e();
          }
          break;
        }
        iVar5 = (int)puVar1[2];
      } while (iVar5 != -1);
    }
  }
  if (*(ulonglong **)(param_1 + 0x358) == param_2) {
    *(undefined8 *)(param_1 + 0x358) = 0;
  }
  if (param_2[0x39] != 0) {
    local_20 = param_2;
    FUN_1479054b8(param_2[0x39] + 0x1b8,&local_20,1);
    param_2[0x39] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14790545e(param_2);
  return;
}



// FUNCTION 1433d55ee FUN_1433d55ee body=1212 status=ok
// SIG undefined FUN_1433d55ee(void)

void FUN_1433d55ee(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
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
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | 4;
  if (param_1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1[4];
    if (lVar3 != 0) {
      if (DAT_14cad2858 == 0) {
        local_70 = &local_58;
        local_58 = FUN_144a7958c;
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
      lVar3 = *(longlong *)(lVar3 + 0x10);
      iVar1 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    lVar3 = param_1[0x7c];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar3;
    }
  }
  iVar1 = (int)param_1[0x3b];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  plVar4 = (longlong *)(lVar3 + 0x5b0);
  if (*(int *)(lVar3 + 0x5bc) < iVar1) {
    FUN_14052b462(plVar4);
  }
  else {
    FUN_1448262fc(*(undefined8 *)(lVar3 + 0x5b0),*(undefined4 *)(lVar3 + 0x5b8));
    *(undefined4 *)(lVar3 + 0x5b8) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x3b);
  if (uVar2 != 0) {
    iVar1 = *(int *)(lVar3 + 0x5b8);
    *(uint *)(lVar3 + 0x5b8) = iVar1 + uVar2;
    if ((uint)(*(int *)(lVar3 + 0x5bc) - iVar1) < uVar2) {
      FUN_140166dde(plVar4,iVar1);
    }
    FUN_14052b3b1((longlong)iVar1 * 0x30 + *plVar4,param_1[0x3a],uVar2);
  }
  FUN_144826242(param_1 + 0x38,param_1[4]);
  if (*(int *)((longlong)param_1 + 0x36c) < 0) {
    *(undefined4 *)(param_1 + 0x6d) = 0;
    FUN_1478fc136();
  }
  else {
    *(undefined4 *)(param_1 + 0x6d) = 0;
  }
  if (param_1 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    lVar3 = param_1[4];
    if (lVar3 != 0) {
      if (DAT_14cad2858 == 0) {
        local_70 = &local_58;
        local_58 = FUN_144a7958c;
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
      lVar3 = *(longlong *)(lVar3 + 0x10);
      iVar1 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    plVar4 = (longlong *)param_1[0x7c];
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = (longlong)plVar4;
    }
  }
  (**(code **)(*plVar4 + 0x98))(plVar4,param_1,param_2);
  if ((*(byte *)(param_1 + 0x86) & 1) == 0) {
    if (param_1 != (longlong *)0x0) {
      lVar3 = param_1[4];
      if (lVar3 != 0) {
        if (DAT_14cad2858 == 0) {
          local_70 = &local_58;
          local_58 = FUN_144a7958c;
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
        lVar3 = *(longlong *)(lVar3 + 0x10);
        iVar1 = *(int *)(DAT_14cad2858 + 0x38);
        if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30
           )) {
          FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
        }
      }
      if (param_1[0x7c] == 0) {
        lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
        param_1[0x7c] = lVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433d5ad2 FUN_1433d5ad2 body=994 status=ok
// SIG undefined FUN_1433d5ad2(void)

void FUN_1433d5ad2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  longlong *local_118;
  longlong local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  code *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined6 uStack_80;
  undefined8 uStack_7a;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((((*(byte *)((longlong)param_1 + 0x31) & 0x40) == 0) || (param_1[4] == 0)) ||
     (*(longlong **)(param_1[4] + 0xae8) == param_1)) {
    if (param_1 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = param_1[4];
      if (lVar4 != 0) {
        if (DAT_14cad2858 == 0) {
          local_f0 = &local_c8;
          local_c8 = FUN_144a7958c;
          local_e0 = FUN_14081d0ea;
          local_e8 = &LAB_146395584;
          local_f8 = &LAB_147a0ba80;
          local_100 = &LAB_14575ccce;
          local_108 = L"Engine";
          local_110 = 0x40000000000;
          local_118 = (longlong *)CONCAT44(local_118._4_4_,0x10000004);
          local_120 = 0x10;
          local_128 = 0x1180;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        }
        lVar4 = *(longlong *)(lVar4 + 0x10);
        iVar1 = *(int *)(DAT_14cad2858 + 0x38);
        if ((iVar1 <= *(int *)(lVar4 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30
           )) {
          FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
        }
      }
      lVar4 = param_1[0x7c];
      if (lVar4 == 0) {
        lVar4 = (**(code **)(*param_1 + 0x350))(param_1);
        param_1[0x7c] = lVar4;
      }
    }
    lVar5 = lVar4;
    if (((*(byte *)(lVar4 + 0x7e1) & 0x10) != 0) &&
       (lVar5 = *(longlong *)(lVar4 + 0x150), *(longlong *)(lVar4 + 0x150) == 0)) {
      lVar5 = lVar4;
    }
    iVar1 = (int)param_1[0x12];
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    *(undefined4 *)(lVar5 + 0x6c8) = 0;
    if (*(int *)(lVar5 + 0x6cc) < iVar1) {
      FUN_1478fef34(lVar5 + 0x6c0);
    }
    lVar5 = param_1[0x12];
    if ((longlong)(int)lVar5 != 0) {
      lVar2 = param_1[0x11];
      lVar8 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar8);
        if ((*plVar3 != 0) && (1e-05 < *(float *)(plVar3 + 0x2d))) {
          lVar7 = lVar4;
          if (((*(byte *)(lVar4 + 0x7e1) & 0x10) != 0) &&
             (lVar7 = *(longlong *)(lVar4 + 0x150), *(longlong *)(lVar4 + 0x150) == 0)) {
            lVar7 = lVar4;
          }
          local_110 = plVar3[0x33];
          local_118 = plVar3 + 0x2a;
          local_d0 = (undefined4)plVar3[9];
          local_d8 = plVar3[8];
          local_108 = (wchar_t *)CONCAT44(local_108._4_4_,*(undefined4 *)((longlong)plVar3 + 0x18c))
          ;
          local_120 = CONCAT31(local_120._1_3_,*(float *)(plVar3 + 0x2e) != 0.0);
          local_128 = CONCAT31(local_128._1_3_,(char)plVar3[7]);
          FUN_1478f7f3c(&local_c8,*plVar3,(int)plVar3[0x29],&local_d8);
          iVar1 = *(int *)(lVar7 + 0x6c8);
          *(uint *)(lVar7 + 0x6c8) = iVar1 + 1U;
          if (*(uint *)(lVar7 + 0x6cc) < iVar1 + 1U) {
            FUN_1478fefa2((longlong *)(lVar7 + 0x6c0),iVar1);
          }
          lVar7 = *(longlong *)(lVar7 + 0x6c0);
          lVar6 = (longlong)iVar1 * 0x58;
          *(code **)(lVar7 + lVar6) = local_c8;
          *(longlong *)(lVar7 + 8 + lVar6) = local_c0;
          if ((local_c0 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          lVar7 = lVar7 + lVar6;
          *(undefined4 *)(lVar7 + 0x30) = local_98;
          *(undefined8 *)(lVar7 + 0x20) = local_a8;
          *(undefined8 *)(lVar7 + 0x28) = uStack_a0;
          *(undefined8 *)(lVar7 + 0x10) = local_b8;
          *(undefined8 *)(lVar7 + 0x18) = uStack_b0;
          *(undefined4 *)(lVar7 + 0x38) = local_90;
          *(undefined4 *)(lVar7 + 0x3c) = uStack_8c;
          *(undefined4 *)(lVar7 + 0x40) = uStack_88;
          *(uint *)(lVar7 + 0x44) = CONCAT22(uStack_82,uStack_84);
          *(ulonglong *)(lVar7 + 0x46) = CONCAT62(uStack_80,uStack_82);
          *(undefined8 *)(lVar7 + 0x4e) = uStack_7a;
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)lVar5 * 8 != lVar8);
    }
    plVar3 = param_1 + 0x27;
    if (((*(byte *)(lVar4 + 0x7e1) & 0x10) != 0) && (*(longlong *)(lVar4 + 0x150) != 0)) {
      lVar4 = *(longlong *)(lVar4 + 0x150);
    }
    FUN_144a79f32(lVar4 + 0x720,plVar3);
    if ((int)param_1[0x28] != *(int *)((longlong)param_1 + 0x16c)) {
      FUN_1478fbe42(plVar3);
      FUN_1478fbf8a(plVar3);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433d5eb6 FUN_1433d5eb6 body=319 status=ok
// SIG undefined FUN_1433d5eb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433d5eb6(char *param_1,double *param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  if (*param_1 == '\x01') {
    dVar13 = (double)param_3;
    dVar14 = (double)param_3;
    dVar15 = *param_2 * dVar13;
    dVar16 = param_2[1] * dVar14;
    dVar17 = param_2[2] * dVar13;
    dVar18 = param_2[3] * dVar14;
    dVar19 = dVar17 * *(double *)(param_1 + 0x20) + dVar15 * *(double *)(param_1 + 0x10);
    dVar22 = dVar18 * *(double *)(param_1 + 0x28) + dVar16 * *(double *)(param_1 + 0x18);
    lVar9 = -(ulonglong)(0.0 <= dVar19 + dVar22);
    lVar10 = -(ulonglong)(0.0 <= dVar19 + dVar22);
    uVar11 = (undefined4)lVar10;
    uVar12 = (undefined4)((ulonglong)lVar10 >> 0x20);
    auVar20._0_8_ = 0.0 - dVar15;
    auVar20._8_8_ = 0.0 - dVar16;
    auVar23._0_8_ = 0.0 - dVar17;
    auVar23._8_8_ = 0.0 - dVar18;
    auVar21._8_4_ = uVar11;
    auVar21._0_8_ = lVar9;
    auVar21._12_4_ = uVar12;
    auVar3._8_8_ = dVar16;
    auVar3._0_8_ = dVar15;
    auVar21 = blendvpd(auVar20,auVar3,auVar21);
    auVar24._8_4_ = uVar11;
    auVar24._0_8_ = lVar9;
    auVar24._12_4_ = uVar12;
    auVar4._8_8_ = dVar18;
    auVar4._0_8_ = dVar17;
    auVar24 = blendvpd(auVar23,auVar4,auVar24);
    *(double *)(param_1 + 0x10) = auVar21._0_8_ + *(double *)(param_1 + 0x10);
    *(double *)(param_1 + 0x18) = auVar21._8_8_ + *(double *)(param_1 + 0x18);
    *(double *)(param_1 + 0x20) = auVar24._0_8_ + *(double *)(param_1 + 0x20);
    *(double *)(param_1 + 0x28) = auVar24._8_8_ + *(double *)(param_1 + 0x28);
    dVar16 = param_2[6];
    dVar17 = param_2[7];
    dVar15 = param_2[5] * dVar14 + *(double *)(param_1 + 0x38);
    auVar2._8_4_ = SUB84(dVar15,0);
    auVar2._0_8_ = param_2[4] * dVar13 + *(double *)(param_1 + 0x30);
    auVar2._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x30) = auVar2;
    *(double *)(param_1 + 0x40) = dVar13 * dVar16 + *(double *)(param_1 + 0x40);
    *(double *)(param_1 + 0x48) = dVar14 * dVar17 + *(double *)(param_1 + 0x48);
    uVar8 = DAT_14cacb0f0;
    uVar7 = DAT_14cacb0e8;
    *(undefined8 *)(param_1 + 0x50) = _DAT_14cacb0e0;
    *(undefined8 *)(param_1 + 0x58) = uVar7;
    *(undefined8 *)(param_1 + 0x60) = uVar8;
    param_1[0x68] = '\0';
    param_1[0x69] = '\0';
    param_1[0x6a] = '\0';
    param_1[0x6b] = '\0';
    param_1[0x6c] = '\0';
    param_1[0x6d] = '\0';
    param_1[0x6e] = '\0';
    param_1[0x6f] = '\0';
    param_3 = param_3 + *(float *)(param_1 + 4);
  }
  else {
    dVar15 = (double)param_3;
    dVar16 = (double)param_3;
    dVar17 = param_2[4];
    dVar13 = param_2[5];
    dVar14 = param_2[6];
    dVar18 = param_2[7];
    dVar19 = *param_2;
    dVar22 = param_2[1];
    dVar5 = param_2[2];
    dVar6 = param_2[3];
    *param_1 = '\x01';
    *(double *)(param_1 + 0x10) = dVar19 * dVar15;
    *(double *)(param_1 + 0x18) = dVar22 * dVar16;
    auVar1._8_4_ = SUB84(dVar16 * dVar6,0);
    auVar1._0_8_ = dVar15 * dVar5;
    auVar1._12_4_ = (int)((ulonglong)(dVar16 * dVar6) >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar1;
    *(double *)(param_1 + 0x30) = dVar17 * dVar15;
    *(double *)(param_1 + 0x38) = dVar13 * dVar16;
    *(double *)(param_1 + 0x40) = dVar14 * dVar15;
    *(double *)(param_1 + 0x48) = dVar18 * dVar16;
    uVar8 = DAT_14cacb0f0;
    uVar7 = DAT_14cacb0e8;
    *(undefined8 *)(param_1 + 0x50) = _DAT_14cacb0e0;
    *(undefined8 *)(param_1 + 0x58) = uVar7;
    *(undefined8 *)(param_1 + 0x60) = uVar8;
    param_1[0x68] = '\0';
    param_1[0x69] = '\0';
    param_1[0x6a] = '\0';
    param_1[0x6b] = '\0';
    param_1[0x6c] = '\0';
    param_1[0x6d] = '\0';
    param_1[0x6e] = '\0';
    param_1[0x6f] = '\0';
  }
  *(float *)(param_1 + 4) = param_3;
  return;
}



// FUNCTION 1433d5ff6 FUN_1433d5ff6 body=263 status=ok
// SIG undefined FUN_1433d5ff6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433d5ff6(longlong param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  float fVar8;
  double dVar9;
  double dVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  fVar8 = 1.0 - *(float *)(param_1 + 4);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (0.0001 < fVar8) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0x3ff00000;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_34 = 0x3ff00000;
    uStack_30 = 0;
    uStack_2c = 0x3ff00000;
    local_28 = 0x3ff0000000000000;
    uStack_20 = 0;
    FUN_1433d5eb6(param_1);
  }
  dVar3 = *(double *)(param_1 + 0x10);
  dVar4 = *(double *)(param_1 + 0x18);
  dVar5 = *(double *)(param_1 + 0x20);
  dVar6 = *(double *)(param_1 + 0x28);
  dVar9 = dVar5 * dVar5 + dVar3 * dVar3;
  dVar12 = dVar6 * dVar6 + dVar4 * dVar4;
  auVar10._0_8_ = dVar9 + dVar12;
  auVar10._8_8_ = dVar9 + dVar12;
  uVar7 = -(ulonglong)(1e-08 <= auVar10._8_8_);
  auVar11 = sqrtpd(auVar10,auVar10);
  auVar13 = divpd(_DAT_149934d80,auVar11);
  auVar14._0_8_ = auVar13._0_8_ * dVar5;
  auVar14._8_8_ = auVar13._8_8_ * dVar6;
  uVar2 = (ulonglong)(dVar4 * auVar13._8_8_) & uVar7;
  auVar11._8_4_ = (int)uVar7;
  auVar11._0_8_ = -(ulonglong)(1e-08 <= auVar10._0_8_);
  auVar11._12_4_ = (int)(uVar7 >> 0x20);
  auVar11 = blendvpd(_DAT_149935300,auVar14,auVar11);
  auVar1._8_4_ = (int)uVar2;
  auVar1._0_8_ = (ulonglong)(dVar3 * auVar13._0_8_) & -(ulonglong)(1e-08 <= auVar10._0_8_);
  auVar1._12_4_ = (int)(uVar2 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar1;
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar11;
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d60fe FUN_1433d60fe body=1516 status=ok
// SIG undefined FUN_1433d60fe(void)

void FUN_1433d60fe(longlong *param_1,char param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  void **ppvVar5;
  DWORD DVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  code *pcVar10;
  LPVOID lpTlsValue;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  wchar_t *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  code **local_120;
  undefined1 *local_118;
  code *local_110;
  code *local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f4;
  void *local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  int local_c8;
  undefined4 uStack_c4;
  undefined1 local_c0;
  longlong local_b8;
  longlong lStack_b0;
  ulonglong local_a8;
  longlong lStack_a0;
  ulonglong local_98;
  longlong lStack_90;
  ulonglong local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 uStack_77;
  undefined1 local_61;
  undefined8 *local_60;
  undefined8 local_58;
  longlong local_50;
  char local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar12 = param_1[4];
  if (lVar12 != 0) {
    if (DAT_14cad2858 == 0) {
      local_120 = &local_108;
      local_108 = FUN_144a7958c;
      local_110 = FUN_14081d0ea;
      local_118 = &LAB_146395584;
      local_128 = &LAB_147a0ba80;
      local_130 = &LAB_14575ccce;
      local_138 = L"Engine";
      local_140 = 0x40000000000;
      local_148 = 0x10000004;
      local_150 = 0x10;
      local_158 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    lVar12 = *(longlong *)(lVar12 + 0x10);
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8)
        == DAT_14cad2858 + 0x30)) {
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar7 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60), iVar7 != 2)) {
        if (iVar7 != 1) goto LAB_1433d6193;
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 != DVar9) goto LAB_1433d6193;
      }
      FUN_14036294a(param_1[4],1,1);
    }
  }
LAB_1433d6193:
  pcVar10 = (code *)param_1[0x7c];
  if (pcVar10 == (code *)0x0) {
    pcVar10 = (code *)(**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = (longlong)pcVar10;
  }
  lVar12 = param_4[1];
  lVar2 = *(longlong *)(pcVar10 + 0x6a0);
  *(longlong *)(lVar12 + 0x10) = lVar2;
  uVar1 = *(uint *)(lVar2 + 8);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  iVar7 = *(int *)(lVar12 + 0xc);
  *(undefined4 *)(lVar12 + 8) = 0;
  if (iVar7 < (int)uVar1) {
    FUN_144717690(lVar12,uVar1);
    iVar11 = *(int *)(lVar12 + 8);
    iVar7 = *(int *)(lVar12 + 0xc);
  }
  else {
    iVar11 = 0;
  }
  *(uint *)(lVar12 + 8) = iVar11 + uVar1;
  if ((uint)(iVar7 - iVar11) < uVar1) {
    FUN_1406600da(lVar12);
  }
  DVar8 = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    DVar8 = TlsAlloc();
    DVar9 = 0xffffffff;
    LOCK();
    bVar13 = DAT_14c7585d0 != 0xffffffff;
    DVar6 = DVar8;
    if (bVar13) {
      DVar9 = DAT_14c7585d0;
      DVar6 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar6;
    UNLOCK();
    if (bVar13) {
      TlsFree(DVar8);
      DVar8 = DVar9;
    }
  }
  lpTlsValue = TlsGetValue(DVar8);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_108);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(DVar8,lpTlsValue);
  }
  local_60 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_58 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_50 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_48 = '\0';
  local_40 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_60;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  FUN_144ae0b6c(&local_61);
  if (param_2 == '\0') {
    local_100 = 0;
    local_f8 = 1;
    local_f4 = 0xffffffffffffffff;
    local_e8 = (void *)0x0;
    uStack_e0 = 0;
    uStack_d0 = 0;
    uStack_cf = 0;
    local_c8 = 0;
    uStack_c4 = 0;
    local_c0 = 0;
    local_b8 = 0;
    lStack_b0 = 0;
    local_a8 = 0;
    lStack_a0 = 0;
    local_98 = 0;
    lStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_78 = 0;
    uStack_77 = 0;
    pvVar3 = *(void **)(pcVar10 + 0x6a0);
    uVar1 = *(uint *)((longlong)pvVar3 + 8);
    local_108 = pcVar10;
    local_d8 = pvVar3;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar1);
    }
    if (uVar1 == 0) {
      iVar7 = 0;
      iVar11 = 0;
    }
    else {
      FUN_144717690(&local_e8,uVar1);
      iVar11 = (int)uStack_e0;
      iVar7 = uStack_e0._4_4_;
    }
    uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar11 + uVar1);
    if ((uint)(iVar7 - iVar11) < uVar1) {
      FUN_1406600da(&local_e8);
    }
    local_b8 = (longlong)pvVar3 + 0xb0;
    if (uStack_77._7_1_ == '\x01') {
      FUN_142400d60(local_e8,uStack_e0 & 0xffffffff);
    }
    else {
      FUN_1448859f0(&local_e8,local_d8);
    }
    FUN_14005af20(pcVar10,&local_108,*(undefined8 *)(pcVar10 + 0x170));
    iVar7 = local_c8;
    puVar4 = (undefined8 *)*param_4;
    lVar12 = (longlong)local_c8;
    pvVar3 = (void *)CONCAT71(uStack_cf,uStack_d0);
    *(int *)(puVar4 + 1) = local_c8;
    if (local_c8 == 0 && *(int *)((longlong)puVar4 + 0xc) == 0) {
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    }
    else {
      FUN_1447563a6(puVar4,local_c8);
      if (iVar7 != 0) {
        memcpy((void *)*puVar4,pvVar3,lVar12 << 4);
      }
    }
    pvVar3 = local_e8;
    *(undefined1 *)(puVar4 + 2) = local_c0;
    ppvVar5 = (void **)param_4[1];
    if (ppvVar5 != &local_e8) {
      iVar7 = (int)uStack_e0;
      lVar12 = (longlong)(int)uStack_e0;
      *(int *)(ppvVar5 + 1) = (int)uStack_e0;
      if ((int)uStack_e0 == 0 && *(int *)((longlong)ppvVar5 + 0xc) == 0) {
        *(undefined4 *)((longlong)ppvVar5 + 0xc) = 0;
      }
      else {
        FUN_14470ea6a(ppvVar5,uStack_e0 & 0xffffffff);
        if (iVar7 != 0) {
          memcpy(*ppvVar5,pvVar3,lVar12 * 0x60);
        }
      }
      ppvVar5[2] = local_d8;
    }
    FUN_14495568a(param_4[2],&lStack_b0);
    if (CONCAT71(uStack_7f,uStack_80) != 0) {
      FUN_1400020a8();
    }
    FUN_144716785(lStack_90,local_88 & 0xffffffff);
    if (lStack_90 != 0) {
      FUN_1400020a8();
    }
    FUN_144716758(lStack_a0,local_98 & 0xffffffff);
    if (lStack_a0 != 0) {
      FUN_1400020a8();
    }
    FUN_144716727(lStack_b0,local_a8 & 0xffffffff);
    if (lStack_b0 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_1448859f0(param_4[1],*(undefined8 *)(param_4[1] + 0x10));
  }
  FUN_1447a6182(&local_61);
  if (local_48 == '\0') {
    local_48 = '\x01';
    *(int *)(local_60 + 4) = *(int *)(local_60 + 4) + -1;
    if (local_50 != local_60[2]) {
      FUN_14004673c();
    }
    *local_60 = local_58;
    local_60[3] = local_40;
  }
  if ((local_38 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433d66f0 FUN_1433d66f0 body=56 status=ok
// SIG undefined FUN_1433d66f0(void)

void FUN_1433d66f0(longlong *param_1)

{
  if (param_1[0x7c] != 0) {
    (**(code **)(*param_1 + 0x358))(param_1);
    param_1[0x7c] = 0;
  }
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 1433d6728 FUN_1433d6728 body=183 status=ok
// SIG undefined FUN_1433d6728(void)

void FUN_1433d6728(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  
  pcVar1 = *(code **)(*(longlong *)param_1[2] + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)((longlong *)param_1[2],param_1,1,0,0);
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
  if (param_1[0x7c] == 0) {
    lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar2;
  }
  return;
}



// FUNCTION 1433d67e0 FUN_1433d67e0 body=82 status=ok
// SIG undefined FUN_1433d67e0(void)

void FUN_1433d67e0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x90);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + lVar3 * 8);
      if (lVar1 != 0) {
        FUN_1433dabf6(lVar1,param_2);
        iVar2 = *(int *)(param_1 + 0x90);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 1433d6832 FUN_1433d6832 body=641 status=ok
// SIG undefined FUN_1433d6832(void)

float FUN_1433d6832(longlong param_1,longlong *param_2,undefined8 param_3,float param_4,char param_5
                   ,float param_6,char param_7)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong **local_78;
  longlong *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = param_2;
  if (param_2 == (longlong *)0x0) {
    fVar5 = 0.0;
  }
  else {
    fVar4 = (float)(**(code **)(*param_2 + 0x2b0))(param_2);
    fVar5 = 0.0;
    if (0.0 < fVar4) {
      cVar2 = FUN_1433d9d1c(param_2);
      fVar5 = 0.0;
      if (((cVar2 != '\0') && (fVar5 = 0.0, *(longlong *)(param_1 + 0x28) != 0)) &&
         (fVar5 = 0.0, param_2[8] != 0)) {
        FUN_147903b66(param_2,&local_88);
        if (param_7 != '\0') {
          FUN_1406582c4(param_1,local_88,param_3);
          FUN_140ed2910(param_1,local_88,(int)param_2[0x1a]);
          FUN_140671584(param_1,&local_88);
          if ((*(byte *)(param_1 + 0x33) & 2) != 0) {
            fVar5 = 0.0;
            if (DAT_14c7612c8 != '\0') goto LAB_1433d6a79;
          }
          if (DAT_14cacb910 == '\x01') {
            FUN_1478f6f24(param_1);
          }
        }
        if ((((char)param_2[0x2f] != '\0') || (*(char *)((longlong)param_2 + 0x179) == '\x01')) &&
           (*(longlong *)(param_1 + 0x358) != 0)) {
          FUN_1433da1c6(*(longlong *)(param_1 + 0x358),param_3,1);
        }
        lVar3 = FUN_14001cc68(0x1d8,0x10);
        FUN_147904908(lVar3,param_1);
        local_90 = lVar3;
        fVar5 = (float)(**(code **)(*param_2 + 0x2b0))(param_2);
        FUN_147904f16(lVar3,param_2);
        FUN_147904b6e(lVar3,param_4,param_3);
        if (fVar5 <= param_6) {
          param_6 = fVar5;
        }
        if (param_6 <= 0.0) {
          param_6 = 0.0;
        }
        *(float *)(lVar3 + 0x148) = param_6;
        *(undefined4 *)(lVar3 + 0x4c) = 0xfffffffe;
        *(undefined4 *)(lVar3 + 0x54) = 0xfffffffe;
        iVar1 = *(int *)(param_1 + 0x90);
        *(uint *)(param_1 + 0x90) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x94) < iVar1 + 1U) {
          FUN_1478fd2d8(param_1 + 0x88,iVar1);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar1 * 8) = lVar3;
        local_78 = &local_80;
        local_70 = &local_90;
        FUN_1478fd35e(param_1 + 0x98,local_64);
        cVar2 = (**(code **)(*local_80 + 0x340))();
        if (cVar2 != '\0') {
          *(longlong *)(param_1 + 0x358) = local_90;
        }
        local_78 = (longlong **)local_80;
        FUN_1447cd2ec(param_1 + 0x58);
        if (param_5 != '\0') {
          fVar5 = fVar5 / (param_4 * *(float *)(local_80 + 0x16));
        }
      }
    }
  }
LAB_1433d6a79:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return fVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d6ab4 FUN_1433d6ab4 body=74 status=ok
// SIG undefined FUN_1433d6ab4(void)

longlong * FUN_1433d6ab4(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if ((longlong)*(int *)(param_1 + 0x90) < 1) {
    return (longlong *)0x0;
  }
  uVar2 = (longlong)*(int *)(param_1 + 0x90) + 1;
  do {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + -0x10 + uVar2 * 8);
    if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
      if (*(float *)(plVar1 + 0x2e) != 0.0) {
        return plVar1;
      }
      if (NAN(*(float *)(plVar1 + 0x2e))) {
        return plVar1;
      }
    }
    uVar2 = uVar2 - 1;
    if (uVar2 < 2) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 1433d6afe FUN_1433d6afe body=373 status=ok
// SIG undefined FUN_1433d6afe(void)

void FUN_1433d6afe(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    if (DAT_14cacb1f8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_1478defb1;
      local_60 = FUN_1463a1b02;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/Engine",L"AnimClassInterface",&DAT_14cacb1f8,&DAT_1478defb0);
    }
    plVar1 = (longlong *)FUN_144718840(lVar2,DAT_14cacb1f8);
  }
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x40))();
  if ((longlong)(int)plVar1[1] != 0) {
    plVar5 = (longlong *)*plVar1;
    plVar1 = plVar5 + (int)plVar1[1];
    do {
      if ((longlong)*(int *)(param_2 + 1) != 0) {
        lVar3 = *(int *)(*plVar5 + 0x44) + param_1;
        plVar4 = (longlong *)*param_2;
        lVar2 = (longlong)*(int *)(param_2 + 1) << 3;
        do {
          if (*(longlong *)(*plVar4 + 200) == *(longlong *)(lVar3 + 200)) {
            if (plVar4 != (longlong *)0x0) {
              FUN_1433e0676(lVar3,param_1);
            }
            break;
          }
          plVar4 = plVar4 + 1;
          lVar2 = lVar2 + -8;
        } while (lVar2 != 0);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433d6c74 FUN_1433d6c74 body=450 status=ok
// SIG undefined FUN_1433d6c74(void)

void FUN_1433d6c74(undefined8 param_1,code *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
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
  code *local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_5c;
  code *local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_4 + 0x80))(param_4,param_3);
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x20) + 0x658);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x20) + 0x660);
    if ((DAT_14c950c29 & lVar1 != 0) != 0) goto LAB_1433d6e2a;
    if (lVar1 == 0) goto LAB_1433d6d3e;
  }
  else if (DAT_14c950c29 == 1) {
LAB_1433d6e2a:
    FUN_1456cec3c(lVar1);
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
  if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
    local_48 = 0;
    local_40 = 1;
    local_3c = 0xffffffffffffffff;
    local_50 = param_2;
    FUN_1478ff71a(param_1);
    local_68 = 0;
    local_60 = 1;
    local_5c = 0xffffffffffffffff;
    local_70 = param_2;
    FUN_1478ff7f0(param_1);
  }
LAB_1433d6d3e:
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433d6e38 FUN_1433d6e38 body=61 status=ok
// SIG undefined FUN_1433d6e38(void)

longlong * FUN_1433d6e38(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x410) == 0) {
    return (longlong *)0x0;
  }
  lVar2 = 0;
  while ((plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x408) + lVar2), *plVar1 != *param_3 ||
         (plVar1[1] != param_2))) {
    lVar2 = lVar2 + 8;
    if ((longlong)*(int *)(param_1 + 0x410) * 8 == lVar2) {
      return (longlong *)0x0;
    }
  }
  return plVar1;
}



// FUNCTION 1433d6f74 FUN_1433d6f74 body=141 status=ok
// SIG undefined FUN_1433d6f74(void)

void FUN_1433d6f74(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 6);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 6);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,param_4);
  return;
}



// FUNCTION 1433d7002 FUN_1433d7002 body=107 status=ok
// SIG undefined FUN_1433d7002(void)

float FUN_1433d7002(undefined8 *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  
  uVar1 = *(uint *)(*(longlong *)*param_1 + 8 + (longlong)param_2 * 0xc);
  uVar3 = uVar1 + 0x1f;
  if (-1 < (int)uVar1) {
    uVar3 = uVar1;
  }
  if ((*(uint *)(param_1[1] + (longlong)((int)uVar3 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0) {
    piVar2 = (int *)param_1[3];
    iVar4 = *piVar2;
    fVar5 = *(float *)(param_1[5] + (longlong)iVar4 * 4);
    fVar5 = (*(float *)(param_1[6] + (longlong)iVar4 * 4) - fVar5) * *(float *)(param_1 + 7) + fVar5
    ;
  }
  else {
    piVar2 = (int *)param_1[2];
    iVar4 = *piVar2;
    fVar5 = *(float *)(param_1[4] + (longlong)iVar4 * 4);
  }
  *piVar2 = iVar4 + 1;
  return fVar5;
}



// FUNCTION 1433d706e FUN_1433d706e body=89 status=ok
// SIG undefined FUN_1433d706e(void)

undefined8 FUN_1433d706e(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_1;
  local_10 = *(undefined4 *)(param_1 + 1);
  local_20 = param_2;
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_20);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d70c8 FUN_1433d70c8 body=89 status=ok
// SIG undefined FUN_1433d70c8(void)

undefined8 FUN_1433d70c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_1;
  local_10 = *(undefined4 *)(param_1 + 1);
  local_20 = param_2;
  (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_20);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d7122 FUN_1433d7122 body=151 status=ok
// SIG undefined FUN_1433d7122(void)

void FUN_1433d7122(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x30);
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
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x30 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x30 + lVar3),(longlong)iVar6 * 0x30);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1433d71ba FUN_1433d71ba body=433 status=ok
// SIG undefined FUN_1433d71ba(void)

void FUN_1433d71ba(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined *puVar2;
  bool bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_2 = (longlong *)*param_2;
  if ((((longlong *)*param_1 == param_2) || ((*(byte *)((longlong)param_2 + 0x31) & 0x10) != 0)) &&
     (lVar1 = FUN_1400796d0(param_2[2],param_1[2],1), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0xb4) == '\x01') {
      if (*(longlong *)(lVar1 + 0x70) != 0) {
        puVar2 = *(undefined **)(*(longlong *)(lVar1 + 0x70) + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c952478) &&
           (FUN_144b3d300(&DAT_14c952478), DAT_14c952478 == -1)) {
          FUN_1446f4b16();
          local_40 = FUN_1403a5f94;
          local_48 = &DAT_14c951c78;
          local_50 = 0;
          local_58 = 0x4018001;
          FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
          atexit(FUN_1428170e8);
          _Init_thread_footer(&DAT_14c952478);
        }
        if (DAT_14c952430 == 0) {
          bVar3 = puVar2 != (undefined *)0x0;
          if (puVar2 != &DAT_14c952428 && bVar3) {
            do {
              puVar2 = *(undefined **)(puVar2 + 0x30);
              bVar3 = puVar2 != (undefined *)0x0;
              if (puVar2 == &DAT_14c952428) break;
            } while (puVar2 != (undefined *)0x0);
          }
          if (!bVar3) goto LAB_1433d72ac;
        }
        else if ((*(ulonglong *)(puVar2 + 0x18) & DAT_14c952430) == 0) goto LAB_1433d72ac;
        local_30 = *(undefined8 *)(param_1[1] + 0x48);
        (**(code **)(*param_2 + 0x248))(param_2,lVar1);
      }
    }
    else if (*(char *)(lVar1 + 0xb4) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
    }
  }
LAB_1433d72ac:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433d7384 FUN_1433d7384 body=211 status=ok
// SIG undefined FUN_1433d7384(void)

longlong * FUN_1433d7384(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)*param_3;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x3e4ccccd;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar5 = *(longlong *)(lVar3 + 0xf8);
    if (lVar5 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar5);
    }
    uVar1 = *(undefined1 *)(lVar3 + 0x11c);
    if ((~DAT_14c950c29 & 1) == 0 && lVar5 != 0) {
      FUN_1456cec3c(lVar5);
    }
    bVar4 = DAT_14c950c29;
    param_1[1] = lVar5;
    *(undefined1 *)((longlong)param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 2) = *param_2;
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(lVar3 + 0xc1);
    lVar5 = *(longlong *)(lVar3 + 0x188);
    if ((bVar4 & 1) != 0) {
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar5 = *(longlong *)(lVar3 + 0x188);
      }
    }
    *param_1 = lVar5;
  }
  return param_1;
}



// FUNCTION 1433d7458 FUN_1433d7458 body=161 status=ok
// SIG undefined FUN_1433d7458(void)

longlong * FUN_1433d7458(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_3;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x3e4ccccd;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    lVar4 = *param_2;
    if (DAT_14c950c29 == 1) {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *param_2;
      }
    }
    bVar3 = DAT_14c950c29;
    param_1[1] = lVar4;
    *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0xc);
    *(int *)(param_1 + 2) = (int)param_2[1];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(lVar2 + 0xc1);
    lVar4 = *(longlong *)(lVar2 + 0x188);
    if ((bVar3 & 1) != 0) {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *(longlong *)(lVar2 + 0x188);
      }
    }
    *param_1 = lVar4;
  }
  return param_1;
}



// FUNCTION 1433d74fa FUN_1433d74fa body=22 status=ok
// SIG undefined FUN_1433d74fa(void)

undefined8 FUN_1433d74fa(undefined8 param_1)

{
  FUN_1478f7838();
  return param_1;
}



// FUNCTION 1433d7510 FUN_1433d7510 body=429 status=ok
// SIG undefined FUN_1433d7510(void)

void FUN_1433d7510(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_2 = (longlong *)*param_2;
  lVar2 = param_2[4];
  if (lVar2 != 0) {
    if (DAT_14cad2858 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146395584;
      local_48 = &LAB_147a0ba80;
      local_50 = &LAB_14575ccce;
      local_58 = L"Engine";
      local_60 = 0x40000000000;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      if (DAT_14c86a9f8 == '\x01') {
        iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (iVar1 != 2) {
          if (iVar1 != 1) goto LAB_1433d759a;
          DVar3 = FUN_140ad26c0();
          DVar4 = GetCurrentThreadId();
          if (DVar3 != DVar4) goto LAB_1433d759a;
        }
      }
      FUN_14036294a(param_2[4],1,1);
    }
  }
LAB_1433d759a:
  plVar5 = (longlong *)param_2[0x7c];
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*param_2 + 0x350))(param_2);
    param_2[0x7c] = (longlong)plVar5;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001433d75e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x80))(plVar5,param_2,*(code **)(*plVar5 + 0x80));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 1433d76be FUN_1433d76be body=80 status=ok
// SIG undefined FUN_1433d76be(void)

longlong FUN_1433d76be(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    lVar3 = *param_3;
    lVar1 = *(longlong *)(lVar3 + 0x80);
    if ((((lVar1 != 0) && (lVar2 = FUN_1402e44f4(), lVar2 != 0)) &&
        (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      return *(longlong *)(lVar3 + 0x80);
    }
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 1433d770e FUN_1433d770e body=124 status=ok
// SIG undefined FUN_1433d770e(void)

undefined8 FUN_1433d770e(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = *param_3;
  lVar1 = *param_2;
  lVar2 = FUN_147508a86(lVar3);
  if (lVar2 == 0) {
    return 0;
  }
  if ((lVar1 == 0) || (lVar2 = FUN_147508a86(lVar3), *(longlong *)(lVar2 + 0x10) != lVar1)) {
    lVar3 = FUN_147508a86(lVar3);
    puVar4 = (undefined8 *)(lVar3 + 0x10);
  }
  else {
    lVar1 = *(longlong *)(lVar3 + 0x80);
    if (lVar1 == 0) {
      return 0;
    }
    lVar2 = FUN_1402e44f4();
    if (lVar2 == 0) {
      return 0;
    }
    if (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38)) {
      return 0;
    }
    if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30) {
      return 0;
    }
    puVar4 = (undefined8 *)(lVar3 + 0x80);
  }
  return *puVar4;
}



// FUNCTION 1433d778a FUN_1433d778a body=80 status=ok
// SIG undefined FUN_1433d778a(void)

longlong FUN_1433d778a(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    lVar3 = *param_3;
    lVar1 = *(longlong *)(lVar3 + 0x80);
    if ((((lVar1 != 0) && (lVar2 = FUN_1402e44f4(), lVar2 != 0)) &&
        (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      return *(longlong *)(lVar3 + 0x80);
    }
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 1433d77f8 FUN_1433d77f8 body=96 status=ok
// SIG undefined FUN_1433d77f8(void)

void FUN_1433d77f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *param_2;
  local_18 = *(longlong *)*param_1;
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147901a5e(uVar1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d785a FUN_1433d785a body=107 status=ok
// SIG undefined FUN_1433d785a(void)

void FUN_1433d785a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  local_20 = *(longlong *)param_1[1];
  if ((local_20 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147901b36(uVar1,*(undefined4 *)*param_1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d78c6 FUN_1433d78c6 body=114 status=ok
// SIG undefined FUN_1433d78c6(void)

void FUN_1433d78c6(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  local_20 = *(longlong *)param_1[2];
  if ((local_20 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147901c22(uVar1,*(undefined4 *)*param_1,*(undefined4 *)param_1[1],&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d793a FUN_1433d793a body=114 status=ok
// SIG undefined FUN_1433d793a(void)

void FUN_1433d793a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  local_20 = *(longlong *)param_1[2];
  if ((local_20 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147901d18(uVar1,*(undefined4 *)*param_1,*(undefined4 *)param_1[1],&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d79cc FUN_1433d79cc body=107 status=ok
// SIG undefined FUN_1433d79cc(void)

void FUN_1433d79cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  local_20 = *(longlong *)param_1[1];
  if ((local_20 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147901f24(uVar1,*(undefined4 *)*param_1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d7a50 FUN_1433d7a50 body=96 status=ok
// SIG undefined FUN_1433d7a50(void)

void FUN_1433d7a50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *param_2;
  local_18 = *(longlong *)*param_1;
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147902010(uVar1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d7ac3 FUN_1433d7ac3 body=1411 status=ok
// SIG undefined FUN_1433d7ac3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433d7ac3(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a79d820,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a79dc20,1,0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cacb188);
  if (cVar1 == '\0') {
    _DAT_14cacb188 = 0;
    uRam000000014cacb190 = 0;
  }
  if (local_50 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_50 = &DAT_14a19662d;
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a79e6a0,1,&PTR_FUN_14a79e600);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a79ec40,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a79f810,1,&PTR_FUN_14a79f790);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a79fd70,1,0);
  DAT_14cacb2b0 = 0;
  uRam000000014cacb2b8 = 0;
  atexit((_func_5014 *)&LAB_1433d286e);
  local_68 = CONCAT44(local_68._4_4_,1);
  FUN_141707242(&DAT_14cacb2c0,L"a.Compression.CompressibleDataOutput",&DAT_14cacb2b0,
                L"Whether to output any JSON file containing the compressible data. (comma delimited)\n position: output track positional data\n rotation: output track rotational data\n scale: output track scale data\n curve: output rich curve data\n"
               );
  atexit(FUN_1433d287f);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7a04b0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7a0890,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7a14b0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7a1950,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7a2030,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7a24d0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7a2890,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7a2c50,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7a3000,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7a33b0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7a3770,1,0);
  DAT_14cacb3d8 = 0;
  uRam000000014cacb3e0 = 0;
  atexit((_func_5014 *)&LAB_1433d2ac8);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7a4030,1,0);
  FUN_1446f470e(&DAT_14cacb91c,L"UE::Anim::IAnimEventsFilterContext",1);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14a7a4d90;
  local_68 = 5;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7a4db0);
  FUN_1446f470e(&DAT_14cacb914,L"UE::Anim::FAnimInertializationSyncScope",1);
  FUN_1446f470e(&DAT_14cacb518,L"BlueprintBeginPlay",1);
  FUN_1446f470e(&DAT_14cacb528,L"BlueprintInitializeAnimation",1);
  FUN_1446f470e(&DAT_14cacb538,L"BlueprintLinkedAnimationLayersInitialized",1);
  FUN_1446f470e(&DAT_14cacb548,L"BlueprintPostEvaluateAnimation",1);
  FUN_1446f470e(&DAT_14cacb558,L"BlueprintThreadSafeUpdateAnimation",1);
  FUN_1446f470e(&DAT_14cacb568,L"BlueprintUpdateAnimation",1);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14a7ae3c0;
  local_68 = 2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7ae430,1,&PTR_FUN_14a7ae3e0);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cacb8d0,L"p.RK4SpringInterpolator.UpdateRate",&DAT_14c7612cc,
                L"RK4 Spring Interpolator\'s rate of update");
  atexit(FUN_1433d536d);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacb8e0,L"p.RK4SpringInterpolator.MaxIter",&DAT_14c7612d0,
                L"RK4 Spring Interpolator\'s max number of iterations");
  atexit(FUN_1433d53b2);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cacb8f0,L"a.Montage.EarlyOutMontageWhenUninitialized",&DAT_14c7612c8,
                L"Exit early when playing or stopping montage(s) if the animation instance was uninitialized while we are performing the action due to triggering montage events. Use this to avoid reading from bad memory."
               );
  atexit(FUN_1433d53f7);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cacb900,L"a.Montage.FlushCompletedMontagesOnPlay",&DAT_14cacb910,
                L"Whether we should flush all completed montages IMMEDIATELY when a new montage stomps the group. Use this to prevent accumulating montages when animation tick is paused, and firing all at once when we unpause."
               );
  atexit(FUN_1433d543c);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d8048 FUN_1433d8048 body=55 status=ok
// SIG undefined FUN_1433d8048(void)

void FUN_1433d8048(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacb940 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacb940 = FUN_14171c317(FUN_1463a42a7,uVar1,L"EDrawDebugItemType");
  }
  return;
}



// FUNCTION 1433d8096 FUN_1433d8096 body=1895 status=ok
// SIG undefined FUN_1433d8096(void)

void FUN_1433d8096(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  undefined1 auStack_e8 [39];
  char local_c1;
  undefined8 local_c0;
  code *local_b8;
  longlong **local_b0;
  code *local_a8;
  longlong **local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined1 local_88;
  undefined8 local_84;
  longlong *local_78;
  undefined8 local_70;
  bool local_68;
  undefined8 local_64;
  code *local_58;
  longlong **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1[0x26] + 0x32) != '\0') {
    if (param_1[0x2e] == param_3) {
      bVar5 = *(byte *)((longlong)param_1 + 0x7e1);
      if (((bVar5 & 8) != 0) && ((longlong *)param_1[0x27] != (longlong *)0x0)) {
        local_50 = &local_78;
        local_58 = FUN_1433e37ba;
        local_78 = param_1;
        (**(code **)(*(longlong *)param_1[0x27] + 0xb0))();
        bVar5 = *(byte *)((longlong)param_1 + 0x7e1) & 0xf7;
        *(byte *)((longlong)param_1 + 0x7e1) = bVar5;
      }
      if ((bVar5 & 4) != 0) {
        FUN_140c4a63e(param_1,param_1[0x2e]);
        if ((longlong *)param_1[0x27] != (longlong *)0x0) {
          plVar7 = (longlong *)(**(code **)(*(longlong *)param_1[0x27] + 0x40))();
          lVar18 = plVar7[1];
          if ((longlong)(int)lVar18 != 0) {
            lVar17 = *plVar7;
            lVar19 = 0;
            do {
              lVar21 = (longlong)*(int *)(*(longlong *)(lVar17 + lVar19) + 0x44) + param_1[0x26];
              if ((lVar21 != 0) && (lVar8 = FUN_147508a86(lVar21), lVar8 != 0)) {
                local_70 = 0;
                local_68 = true;
                local_64 = 0xffffffffffffffff;
                local_78 = param_1;
                FUN_1478ff71a(lVar21,&local_78);
                local_90 = (longlong *)0x0;
                local_88 = 1;
                local_84 = 0xffffffffffffffff;
                local_98 = param_1;
                FUN_1478ff7f0(lVar21,&local_98);
              }
              lVar19 = lVar19 + 8;
            } while ((longlong)(int)lVar18 * 8 != lVar19);
          }
        }
        *(byte *)((longlong)param_1 + 0x7e1) = *(byte *)((longlong)param_1 + 0x7e1) & 0xfb;
      }
      (**(code **)(*param_1 + 0x50))(param_1);
    }
    else {
      (**(code **)(*param_1 + 0x58))(param_1,param_3);
    }
    local_c1 = (char)param_1[0xfc];
    if ((local_c1 == '\0') && (param_1[0xc2] != DAT_14c872be0)) {
      plVar7 = (longlong *)param_1[0x27];
      if (plVar7 != (longlong *)0x0) {
        local_a0 = &local_78;
        local_a8 = FUN_1433e37d2;
        local_78 = param_1;
        (**(code **)(*plVar7 + 0xb0))(plVar7,param_1[0x26]);
      }
      (**(code **)(*(longlong *)param_1[0x26] + 0x318))
                ((longlong *)param_1[0x26],(int)param_1[0x2b]);
      FUN_144adf6d6(param_1[0x26],(int)param_1[0x2b]);
      (**(code **)(*param_1 + 0x20))(param_1,(int)param_1[0x2b]);
      plVar7 = (longlong *)param_1[0x27];
      if (plVar7 != (longlong *)0x0) {
        local_b0 = &local_78;
        local_b8 = FUN_1433e3830;
        local_78 = param_1;
        (**(code **)(*plVar7 + 0xb0))(plVar7,param_1[0x26]);
      }
      param_1[0xc2] = DAT_14c872be0;
      local_c1 = (char)param_1[0xfc];
    }
    *(undefined1 *)(param_1 + 0xfc) = 1;
    plVar7 = DAT_14caccb08;
    if ((param_1[0x26] != *(longlong *)(param_1[0x29] + 0xae8)) &&
       (param_1[0x26] != *(longlong *)(param_1[0x29] + 0xaf8))) {
      lVar18 = param_2[1];
      local_c0 = param_4;
      if ((lVar18 != 0) && (*(int *)(lVar18 + 0xa50) != *(int *)(lVar18 + 0xa74))) {
        uVar16 = (uint)((ulonglong)DAT_14caccb08 >> 0x10);
        uVar13 = (uint)DAT_14caccb08 & 0xffff;
        lVar17 = lVar18 + 0xa78;
        if (*(longlong *)(lVar18 + 0xa88) != 0) {
          lVar17 = *(longlong *)(lVar18 + 0xa88);
        }
        iVar11 = *(int *)(lVar17 + (ulonglong)
                                   (*(int *)(lVar18 + 0xa90) - 1U &
                                   (int)((ulonglong)DAT_14caccb08 >> 0x20) +
                                   ((uint)DAT_14caccb08 << 0x10 | uVar13) +
                                   (uVar16 << 0x13 | uVar16 & 0xffff) + (uVar13 >> 4)) * 4);
        if (iVar11 != -1) {
          lVar17 = lVar18 + 0x148;
          if (*(longlong *)(lVar18 + 0xa48) != 0) {
            lVar17 = *(longlong *)(lVar18 + 0xa48);
          }
          do {
            lVar18 = lVar17 + (longlong)iVar11 * 0x120;
            if (*(longlong **)(lVar17 + (longlong)iVar11 * 0x120) == DAT_14caccb08) {
              if (((lVar18 != 0) && (lVar18 + 8 != 0)) && (*(int *)(lVar18 + 0x110) != 0)) {
                lVar17 = lVar18 + 8;
                if (*(longlong *)(lVar18 + 0x108) != 0) {
                  lVar17 = *(longlong *)(lVar18 + 0x108);
                }
                lVar18 = (longlong)(*(int *)(lVar18 + 0x110) + -1) * 0x20;
                plVar3 = *(longlong **)(lVar17 + lVar18);
                (**(code **)(*plVar3 + 8))(plVar3,&local_78);
                param_4 = local_c0;
                if (local_78 == plVar7) {
                  local_68 = *(longlong *)(lVar17 + lVar18) == 0;
                  local_78 = (longlong *)param_2[1];
                  local_70 = 0;
                  if (!local_68) goto LAB_1433d850e;
                  goto LAB_1433d8493;
                }
              }
              break;
            }
            iVar11 = *(int *)(lVar18 + 0x118);
          } while (iVar11 != -1);
        }
      }
    }
    local_78 = (longlong *)param_2[1];
    local_68 = true;
LAB_1433d8493:
    local_70 = 0;
    plVar9 = (longlong *)FUN_14001cc68(0x40,0x10);
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_14a42d8e0;
    plVar7 = plVar9 + 2;
    FUN_144b205cc(plVar7,param_2,0,0);
    plVar3 = DAT_14caccb08;
    local_98 = plVar7;
    local_90 = plVar9;
    if (plVar9 == (longlong *)0x0) {
      FUN_1447d2a40(&local_78,param_2,&local_98,DAT_14caccb08);
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      FUN_1447d2a40(&local_78,param_2,&local_98,plVar3);
      LOCK();
      plVar7 = plVar9 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
LAB_1433d850e:
    if (param_1[0x2e] == param_3) {
      (**(code **)(*param_1 + 0x28))(param_1,param_2);
    }
    else {
      (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4);
    }
    iVar11 = (int)param_1[0x104];
    if (iVar11 == 0) {
      uVar22 = 1;
      uVar20 = 0;
      iVar12 = 0;
      iVar23 = 0;
    }
    else {
      puVar10 = (uint *)param_1[0x103];
      if ((uint *)param_1[0x103] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 0x101);
      }
      uVar16 = *puVar10;
      if (uVar16 == 0) {
        iVar12 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar12 = iVar11 + -1;
        }
        uVar20 = 0;
        uVar22 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar22 = uVar20;
        }
        iVar23 = 0;
        do {
          if (uVar22 == uVar20) goto LAB_1433d8748;
          iVar23 = iVar23 + 0x20;
          uVar16 = puVar10[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar20 = 0;
        iVar23 = 0;
      }
      uVar22 = (ulonglong)(-uVar16 & uVar16);
      uVar2 = uVar22 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar12 = (iVar23 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if (iVar11 <= iVar12) {
        iVar12 = iVar11;
      }
    }
    if (iVar12 != iVar11) {
      uVar16 = 0xffffffff;
      iVar6 = iVar11;
      do {
        plVar7 = *(longlong **)(param_1[0xff] + 8 + (longlong)iVar12 * 0x18);
        if (plVar7 != (longlong *)0x0) {
          pcVar4 = *(code **)(*plVar7 + 0x128);
          if (pcVar4 == (code *)&LAB_144ade9d8) {
            lVar18 = *param_2;
            if ((((lVar18 != 0) && (*(short *)(lVar18 + 0x5e8) != -1)) &&
                (*(longlong *)(lVar18 + 0x5e0) != -1)) &&
               ((((short)plVar7[0x1c4] == -1 || (plVar7[0x1c3] != *(longlong *)(lVar18 + 0x5e0))) ||
                (((short)plVar7[0x1c4] != *(short *)(lVar18 + 0x5e8) || (plVar7[0x1c3] == -1)))))) {
              pcVar4 = *(code **)(*plVar7 + 0x20);
              if (pcVar4 == FUN_14477ca96) {
                FUN_14477ca96(plVar7,param_2);
              }
              else {
                (*pcVar4)(plVar7,param_2);
              }
            }
          }
          else {
            (*pcVar4)(plVar7,param_2);
          }
          iVar6 = (int)param_1[0x104];
        }
        uVar16 = uVar16 & ~(uint)uVar22;
        puVar10 = (uint *)param_1[0x103];
        if ((uint *)param_1[0x103] == (uint *)0x0) {
          puVar10 = (uint *)(param_1 + 0x101);
        }
        iVar12 = (int)uVar20;
        lVar18 = (longlong)iVar12;
        uVar13 = puVar10[lVar18] & uVar16;
        if (uVar13 == 0) {
          iVar14 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar14 = iVar6 + -1;
          }
          iVar14 = iVar14 >> 5;
          iVar23 = iVar23 + 0x20;
          iVar15 = iVar14;
          if (iVar14 < iVar12) {
            iVar15 = iVar12;
          }
          if (iVar12 < iVar14) {
            lVar17 = 0;
            do {
              uVar13 = puVar10[lVar18 + lVar17 + 1];
              if (uVar13 != 0) {
                uVar20 = (ulonglong)(iVar12 + (int)lVar17 + 1);
                uVar16 = 0xffffffff;
                goto LAB_1433d86ef;
              }
              iVar23 = iVar23 + 0x20;
              lVar17 = lVar17 + 1;
            } while (iVar15 - lVar18 != lVar17);
            uVar16 = 0xffffffff;
            iVar12 = iVar15;
          }
          uVar20 = (ulonglong)(iVar12 + 1);
          iVar12 = iVar6;
        }
        else {
LAB_1433d86ef:
          uVar22 = (ulonglong)(-uVar13 & uVar13);
          uVar2 = uVar22 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar12 = (iVar23 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if (iVar6 <= iVar12) {
            iVar12 = iVar6;
          }
        }
      } while (iVar12 != iVar11);
    }
LAB_1433d8748:
    if (local_68 == true) {
      FUN_1447d2706(local_78 + 0x29,local_70);
    }
    *(char *)(param_1 + 0xfc) = local_c1;
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433d87fe FUN_1433d87fe body=230 status=ok
// SIG undefined FUN_1433d87fe(void)

void FUN_1433d87fe(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  short sVar2;
  longlong lVar3;
  longlong *plVar4;
  short sVar5;
  
  if (param_3 != (longlong *)0x0) {
    if (*(longlong **)(param_1 + 0x170) == param_3) {
      sVar2 = (short)*(undefined4 *)(param_1 + 0x5f8);
      sVar5 = sVar2 + 1;
      *(short *)(param_1 + 0x5f8) = sVar5;
      *(undefined8 *)(param_1 + 0x5f0) = DAT_14c872be0;
      if (sVar5 == -1) {
        *(short *)(param_1 + 0x5f8) = sVar2 + 2;
      }
      if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x80))();
        if (0 < *(int *)(lVar3 + 8)) {
          *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_2 + 0x14);
          *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
          plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x80))();
          uVar1 = *(undefined4 *)(*plVar4 + 0x10);
          *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_2 + 0x14);
          *(undefined4 *)(param_2 + 0x14) = uVar1;
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001433d8830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x28))(param_3,param_2);
    return;
  }
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_142400d60(*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28));
    return;
  }
  FUN_1448859f0(param_2 + 0x20,*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1433d88e4 FUN_1433d88e4 body=187 status=ok
// SIG undefined FUN_1433d88e4(void)

void FUN_1433d88e4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  undefined1 local_20;
  undefined8 local_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x7e1) & 1) != 0)) {
    *(int *)(param_1 + 0x6b4) = *(int *)(param_1 + 0x6b4) + 1;
    if (*(longlong **)(param_1 + 0x170) == param_2) {
      sVar2 = (short)*(undefined4 *)(param_1 + 0x5d8);
      sVar3 = sVar2 + 1;
      *(short *)(param_1 + 0x5d8) = sVar3;
      *(undefined8 *)(param_1 + 0x5d0) = DAT_14c872be0;
      if (sVar3 == -1) {
        *(short *)(param_1 + 0x5d8) = sVar2 + 2;
      }
    }
    local_30[1] = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_30[0] = param_1;
    (**(code **)(*param_2 + 0x18))(param_2,local_30);
    piVar1 = (int *)(param_1 + 0x6b4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(byte *)(param_1 + 0x7e1) = *(byte *)(param_1 + 0x7e1) & 0xfe;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d89a0 FUN_1433d89a0 body=35 status=ok
// SIG undefined FUN_1433d89a0(void)

longlong FUN_1433d89a0(longlong param_1)

{
  if (((*(byte *)(param_1 + 0x7e1) & 0x10) != 0) && (*(longlong *)(param_1 + 0x150) != 0)) {
    param_1 = *(longlong *)(param_1 + 0x150);
  }
  return param_1 + 0x6c0;
}



// FUNCTION 1433d89c4 FUN_1433d89c4 body=232 status=ok
// SIG undefined FUN_1433d89c4(void)

void FUN_1433d89c4(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
  }
  if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x1b4)) {
    uVar2 = (uint)((ulonglong)param_4 >> 0x10);
    uVar4 = (uint)param_4 & 0xffff;
    lVar3 = param_1 + 0x1b8;
    if (*(longlong *)(param_1 + 0x1c0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1c0);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x1c8) - 1U &
                             (int)((ulonglong)param_4 >> 0x20) + ((uint)param_4 << 0x10 | uVar4) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x180) + (longlong)iVar5 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar5 * 0x20) == param_4) {
          if ((lVar3 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          iVar5 = *(int *)(lVar3 + 0x10);
          if ((longlong)iVar5 == 0) {
            return;
          }
          lVar3 = *(longlong *)(lVar3 + 8);
          lVar6 = 0;
          do {
            plVar1 = *(longlong **)(lVar3 + lVar6);
            (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
            lVar6 = lVar6 + 8;
          } while ((longlong)iVar5 * 8 != lVar6);
          return;
        }
        iVar5 = *(int *)(lVar3 + 0x18);
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 1433d8aac FUN_1433d8aac body=222 status=ok
// SIG undefined FUN_1433d8aac(void)

undefined8 FUN_1433d8aac(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x90);
    lVar2 = lVar1;
    do {
      if ((*(int *)(lVar2 + 0x40) == (int)*param_3) &&
         (*(int *)(lVar2 + 0x44) == (int)((ulonglong)*param_3 >> 0x20))) {
        lVar3 = *(longlong *)(lVar2 + 0x20);
        if (*(longlong *)(lVar2 + 0x20) == 0) {
          lVar3 = lVar2;
        }
        if ((longlong)*(int *)(lVar2 + 0x28) == 0) {
LAB_1433d8b21:
          iVar4 = (int)(lVar2 - lVar1 >> 4) * -0x33333333;
          if (iVar4 == -1) {
            return 0;
          }
          lVar5 = (longlong)iVar4 * 0x50;
          lVar2 = lVar1 + lVar5;
          lVar3 = *(longlong *)(lVar1 + 0x20 + lVar5);
          iVar4 = *(int *)(lVar1 + 0x28 + lVar5);
          *(uint *)(lVar1 + 0x28 + lVar5) = iVar4 + 1U;
          if (*(uint *)(lVar1 + 0x2c + lVar5) < iVar4 + 1U) {
            FUN_1400cc390(lVar2,iVar4);
            lVar3 = *(longlong *)(lVar2 + 0x20);
          }
          if (lVar3 != 0) {
            lVar2 = lVar3;
          }
          *(int *)(lVar2 + (longlong)iVar4 * 4) = param_2;
          return 1;
        }
        lVar5 = 0;
        while (*(int *)(lVar3 + lVar5) != param_2) {
          lVar5 = lVar5 + 4;
          if ((longlong)*(int *)(lVar2 + 0x28) * 4 == lVar5) goto LAB_1433d8b21;
        }
      }
      lVar2 = lVar2 + 0x50;
    } while (lVar2 != (longlong)*(int *)(param_1 + 0x98) * 0x50 + lVar1);
  }
  return 0;
}



// FUNCTION 1433d8b8a FUN_1433d8b8a body=431 status=ok
// SIG undefined FUN_1433d8b8a(void)

void FUN_1433d8b8a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  code **local_98;
  code *local_88;
  longlong *local_80;
  code *local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  code *local_58;
  longlong *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 0x170) != 0) &&
     (local_48 = param_1, *(longlong *)(param_1 + 0x138) != 0)) {
    if ((longlong)*(int *)(param_1 + 0x7a8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x7a0);
      lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x7a8) * 0x28;
      do {
        local_58 = FUN_1433e3af6;
        local_98 = &local_58;
        local_68 = param_1;
        local_60 = lVar2;
        local_50 = &local_68;
        FUN_1433d8d3a(&local_48,*(undefined8 *)(param_1 + 0x138),lVar2,lVar2 + 8);
        lVar2 = lVar2 + 0x28;
      } while (lVar2 != lVar1);
    }
    if ((longlong)*(int *)(param_1 + 0x7b8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x7b0);
      lVar2 = (longlong)*(int *)(param_1 + 0x7b8) * 0x20 + lVar1;
      do {
        local_78 = FUN_1433e3c14;
        local_98 = &local_78;
        local_70 = &local_68;
        local_68 = lVar1;
        FUN_1433d8d3a(&local_48,*(undefined8 *)(param_1 + 0x138),lVar1,lVar1 + 8);
        lVar1 = lVar1 + 0x20;
      } while (lVar1 != lVar2);
    }
    if ((longlong)*(int *)(param_1 + 0x7c8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x7c0);
      lVar2 = (longlong)*(int *)(param_1 + 0x7c8) * 0x20 + lVar1;
      do {
        local_88 = FUN_1433e3c56;
        local_98 = &local_88;
        local_80 = &local_68;
        local_68 = lVar1;
        FUN_1433d8d3a(&local_48,*(undefined8 *)(param_1 + 0x138),lVar1,lVar1 + 8);
        lVar1 = lVar1 + 0x20;
      } while (lVar1 != lVar2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433d8d3a FUN_1433d8d3a body=373 status=ok
// SIG undefined FUN_1433d8d3a(void)

void FUN_1433d8d3a(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *param_1;
  local_68 = param_3;
  plVar1 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2);
  if ((longlong)(int)plVar1[1] != 0) {
    plVar7 = (longlong *)*plVar1;
    plVar1 = plVar7 + (int)plVar1[1];
    do {
      lVar8 = *plVar7;
      if (lVar8 != 0) {
        lVar5 = *(longlong *)(lVar8 + 0x70);
        if (DAT_14cacbf18 == 0) {
          uVar2 = FUN_140002dac();
          DAT_14cacbf18 = FUN_140002ddd(FUN_1463a5bfa,uVar2,L"AnimNode_StateMachine");
          if (DAT_14cacbf18 == 0) goto LAB_1433d8de7;
        }
        if (((*(int *)(DAT_14cacbf18 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cacbf18 + 0x38) * 8) ==
             DAT_14cacbf18 + 0x30)) &&
           (lVar8 = (longlong)*(int *)(lVar8 + 0x44) + *(longlong *)(local_60 + 0x130), lVar8 != 0))
        {
          plVar3 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
          iVar6 = *(int *)(lVar8 + 0x18);
          if (((-1 < (longlong)iVar6) && (iVar6 < (int)plVar3[1])) &&
             ((plVar3 = (longlong *)((longlong)iVar6 * 0x38 + *plVar3), plVar3 != (longlong *)0x0 &&
              ((*local_68 == *plVar3 && ((longlong)(int)plVar3[3] != 0)))))) {
            plVar4 = (longlong *)plVar3[2];
            lVar5 = (longlong)(int)plVar3[3] * 0x78;
            iVar6 = 0;
            do {
              if (*plVar4 == *param_4) {
                local_58 = lVar8;
                local_4c = iVar6;
                (*(code *)*param_5)(param_5[1],&local_58,plVar4,&local_4c);
              }
              iVar6 = iVar6 + 1;
              plVar4 = plVar4 + 0xf;
              lVar5 = lVar5 + -0x78;
            } while (lVar5 != 0);
          }
        }
      }
LAB_1433d8de7:
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433d8eb0 FUN_1433d8eb0 body=146 status=ok
// SIG undefined FUN_1433d8eb0(void)

undefined4 FUN_1433d8eb0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  
  uVar2 = *(uint *)(param_1 + 0x648);
  lVar3 = *(longlong *)(param_1 + 0x640);
  uVar6 = 0;
  iVar8 = (int)((ulonglong)param_2 >> 0x20);
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar1 = (uVar9 >> 1) + uVar6;
      lVar7 = (ulonglong)uVar1 * 0x30;
      iVar5 = *(int *)(lVar3 + lVar7) - (int)param_2;
      if (iVar5 == 0) {
        iVar5 = *(int *)(lVar3 + 4 + lVar7) - iVar8;
      }
      if (iVar5 < 0) {
        uVar6 = uVar1 + (uVar9 & 1);
      }
      bVar4 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar4);
  }
  uVar10 = 0;
  if ((int)uVar6 < (int)uVar2) {
    lVar7 = (ulonglong)uVar6 * 0x30;
    iVar5 = (int)param_2 - *(int *)(lVar3 + lVar7);
    if (iVar5 == 0) {
      iVar5 = iVar8 - *(int *)(lVar3 + 4 + lVar7);
    }
    if ((-1 < iVar5) && (lVar3 + lVar7 != -8)) {
      uVar10 = *(undefined4 *)(lVar3 + lVar7 + 0x28);
    }
  }
  return uVar10;
}



// FUNCTION 1433d8f42 FUN_1433d8f42 body=55 status=ok
// SIG undefined FUN_1433d8f42(void)

void FUN_1433d8f42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacb990 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacb990 = FUN_14171c317(FUN_1463a43a5,uVar1,L"EAnimLinkMethod");
  }
  return;
}



// FUNCTION 1433d8f79 FUN_1433d8f79 body=228 status=ok
// SIG undefined FUN_1433d8f79(void)

longlong FUN_1433d8f79(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cacbb10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463a1b5a;
    local_38 = &LAB_147903fa7;
    local_40 = &LAB_1459b1fdd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1e8;
    FUN_14081cfa3(L"/Script/Engine",L"AnimMontage",&DAT_14cacbb10,FUN_1463a4b6e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacbb10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d905e FUN_1433d905e body=55 status=ok
// SIG undefined FUN_1433d905e(void)

void FUN_1433d905e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacba20 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacba20 = FUN_14171c317(FUN_1463a4686,uVar1,L"EAnimNotifyEventType");
  }
  return;
}



// FUNCTION 1433d9095 FUN_1433d9095 body=55 status=ok
// SIG undefined FUN_1433d9095(void)

void FUN_1433d9095(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacba38 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacba38 = FUN_14171c317(FUN_1463a46b5,uVar1,L"EMontageBlendMode");
  }
  return;
}



// FUNCTION 1433d90cc FUN_1433d90cc body=55 status=ok
// SIG undefined FUN_1433d90cc(void)

void FUN_1433d90cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacba68 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacba68 = FUN_14171c317(FUN_1463a477c,uVar1,L"EMontageSubStepResult");
  }
  return;
}



// FUNCTION 1433d9104 FUN_1433d9104 body=1384 status=ok
// SIG undefined FUN_1433d9104(void)

longlong FUN_1433d9104(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                      undefined8 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined ***local_140;
  undefined1 *local_138;
  code *local_130;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined **local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  char local_d7;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  float local_90;
  undefined4 local_8c;
  int local_88;
  undefined1 local_84;
  longlong local_80;
  undefined8 uStack_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (param_1 != (longlong *)0x0) {
    if (DAT_14cacbb10 == 0) {
      local_140 = &local_f0;
      local_f0 = (undefined **)FUN_1449e2820;
      local_130 = FUN_14081d0ea;
      local_138 = &LAB_1463a1b5a;
      local_148 = &LAB_147903fa7;
      local_150 = &LAB_1459b1fdd;
      local_158 = L"Engine";
      local_160 = 0;
      local_168 = 0x10000000;
      local_170 = 8;
      local_178 = 0x1e8;
      FUN_14081cfa3(L"/Script/Engine",L"AnimMontage",&DAT_14cacbb10,FUN_1463a4b6e);
    }
    if (*(int *)(param_1[2] + 0x38) < *(int *)(DAT_14cacbb10 + 0x38)) {
      bVar7 = false;
    }
    else {
      bVar7 = *(longlong *)
               (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14cacbb10 + 0x38) * 8) ==
              DAT_14cacbb10 + 0x30;
    }
    if (param_2 != 0 && !bVar7) {
      lVar6 = param_1[8];
      cVar3 = (**(code **)(*param_1 + 0x3c8))(param_1);
      if (cVar3 != '\0') {
        lVar5 = FUN_1479064ef(DAT_14c951640);
        bVar4 = DAT_14c950c29;
        if (lVar6 == 0 || DAT_14c950c29 != 1) {
          *(longlong *)(lVar5 + 0x40) = lVar6;
          if (lVar6 != 0) goto LAB_1433d920c;
          uVar11 = 0;
          uVar12 = 0;
        }
        else {
          FUN_1456cec3c(lVar6);
          *(longlong *)(lVar5 + 0x40) = lVar6;
          bVar4 = DAT_14c950c29;
LAB_1433d920c:
          uVar11 = *(undefined8 *)(lVar6 + 0x168);
          uVar12 = *(undefined8 *)(lVar6 + 0x170);
        }
        *(undefined8 *)(lVar5 + 0x48) = uVar11;
        *(undefined8 *)(lVar5 + 0x50) = uVar12;
        plVar2 = *(longlong **)(lVar5 + 0x168);
        *plVar2 = param_2;
        local_84 = 1;
        local_80 = 0;
        uStack_78 = 0;
        local_70 = 0;
        uStack_68 = 0;
        if ((bVar4 & 1) != 0) {
          FUN_1456cec3c(param_1);
        }
        local_94 = 0;
        local_a0 = param_1;
        local_90 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
        local_8c = 0x3f800000;
        local_98 = 0;
        local_88 = param_6;
        uVar8 = -(uint)(ABS(*(float *)(param_1 + 0x16)) <= 1e-08);
        *(float *)(lVar5 + 0x98) =
             ((float)param_6 * local_90) /
             (float)(~uVar8 & (uint)ABS(*(float *)(param_1 + 0x16)) | uVar8 & 0x3f800000);
        iVar1 = (int)plVar2[2];
        *(uint *)(plVar2 + 2) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar2 + 0x14) < iVar1 + 1U) {
          FUN_14791d3d6(plVar2 + 1,iVar1);
        }
        FUN_1478f97fc((longlong)iVar1 * 0x40 + plVar2[1],&local_a0);
        local_e8 = 0;
        local_e0 = 0xffffffff00000000;
        local_d8 = 0;
        local_d7 = '\0';
        local_d4 = 0;
        uStack_cc = 0;
        local_c4 = 0;
        local_f0 = &PTR_FUN_14a7b9fd0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        FUN_1446f470e(&local_c0,L"Default",1);
        uVar9 = (**(code **)(*param_1 + 0x2b0))(param_1);
        FUN_140b5f9e2(&local_f0,param_1,uVar9,0);
        if (local_d7 == '\0') {
          fVar10 = 0.0;
LAB_1433d93d5:
          uStack_cc = CONCAT44(uStack_cc._4_4_,fVar10);
        }
        else {
          if (local_d7 == '\x02') {
            fVar10 = 0.0;
            if ((local_d4._4_4_ != 0.0) || (NAN(local_d4._4_4_))) {
              fVar10 = (0.0 - (float)local_d4) / local_d4._4_4_;
            }
            goto LAB_1433d93d5;
          }
          if (local_d7 == '\x01') {
            fVar10 = 0.0 - (float)local_d4;
            goto LAB_1433d93d5;
          }
        }
        iVar1 = *(int *)(lVar5 + 0x160);
        *(uint *)(lVar5 + 0x160) = iVar1 + 1U;
        if (*(uint *)(lVar5 + 0x164) < iVar1 + 1U) {
          FUN_14791d4ce(lVar5 + 0x158,iVar1);
        }
        FUN_14791d45c((longlong)iVar1 * 0x50 + *(longlong *)(lVar5 + 0x158),&local_f0);
        FUN_1478cdf00(&local_120,param_3 + 1);
        lVar6 = local_120;
        if (DAT_14c950c29 == 1) {
          if (local_120 == 0) {
            lVar6 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar6 = local_120;
          }
        }
        bVar4 = DAT_14c950c29;
        *(longlong *)(lVar5 + 200) = lVar6;
        *(undefined8 *)(lVar5 + 0xd0) = local_118;
        *(undefined8 *)(lVar5 + 0xd8) = uStack_110;
        *(undefined4 *)(lVar5 + 0xe0) = local_108;
        *(undefined4 *)(lVar5 + 0xe4) = uStack_104;
        *(undefined4 *)(lVar5 + 0xe8) = uStack_100;
        *(undefined4 *)(lVar5 + 0xec) = uStack_fc;
        *(undefined4 *)(lVar5 + 0xf0) = local_f8;
        *(char *)(lVar5 + 0xc0) = (char)param_3[3];
        lVar6 = *param_3;
        if ((bVar4 & 1) != 0) {
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar6 = *param_3;
          }
        }
        *(longlong *)(lVar5 + 0x180) = lVar6;
        FUN_1478cdf00(&local_120,param_4 + 1);
        lVar6 = local_120;
        if (DAT_14c950c29 == 1) {
          if (local_120 == 0) {
            lVar6 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar6 = local_120;
          }
        }
        bVar4 = DAT_14c950c29;
        *(longlong *)(lVar5 + 0xf8) = lVar6;
        *(undefined8 *)(lVar5 + 0x100) = local_118;
        *(undefined8 *)(lVar5 + 0x108) = uStack_110;
        *(undefined4 *)(lVar5 + 0x110) = local_108;
        *(undefined4 *)(lVar5 + 0x114) = uStack_104;
        *(undefined4 *)(lVar5 + 0x118) = uStack_100;
        *(undefined4 *)(lVar5 + 0x11c) = uStack_fc;
        *(undefined4 *)(lVar5 + 0x120) = local_f8;
        *(char *)(lVar5 + 0xc1) = (char)param_4[3];
        lVar6 = *param_4;
        if ((bVar4 & 1) != 0) {
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar6 = *param_4;
          }
        }
        *(longlong *)(lVar5 + 0x188) = lVar6;
        *(undefined4 *)(lVar5 + 0x128) = param_7;
        (**(code **)(*param_1 + 0x318))(param_1,&local_120);
        *(longlong *)(lVar5 + 0xb8) = local_120;
        local_f0 = &PTR_FUN_14a7b9fd0;
        if (local_b0 != 0) {
          FUN_1400020a8();
        }
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1433d9192;
      }
    }
  }
  lVar5 = 0;
LAB_1433d9192:
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433d966d FUN_1433d966d body=69 status=ok
// SIG undefined FUN_1433d966d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433d966d(void)

{
  _DAT_14cacbb30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433d96af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacbb38,1);
  return;
}



// FUNCTION 1433d96b2 FUN_1433d96b2 body=1351 status=ok
// SIG undefined FUN_1433d96b2(void)

void FUN_1433d96b2(longlong *param_1)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((longlong)(int)param_1[0x12] != 0) {
    lVar12 = param_1[0x11];
    lVar10 = (longlong)(int)param_1[0x12] * 0xb8;
    do {
      if (*(char *)(lVar12 + 0x19) == '\x02') {
        fVar18 = *(float *)(lVar12 + 0x24) * *(float *)(lVar12 + 0x20) + *(float *)(lVar12 + 0x1c);
      }
      else if (*(char *)(lVar12 + 0x19) == '\x01') {
        fVar18 = *(float *)(lVar12 + 0x1c) + *(float *)(lVar12 + 0x24);
      }
      else {
        fVar18 = *(float *)(lVar12 + 0x24);
      }
      FUN_140b5f9e2(lVar12,param_1,fVar18,0);
      fVar18 = *(float *)(lVar12 + 0x58);
      if ((fVar18 != 0.0) || (NAN(fVar18))) {
        if (*(char *)(lVar12 + 0x19) == '\x02') {
          fVar17 = *(float *)(lVar12 + 0x24) * *(float *)(lVar12 + 0x20) + *(float *)(lVar12 + 0x1c)
          ;
        }
        else if (*(char *)(lVar12 + 0x19) == '\x01') {
          fVar17 = *(float *)(lVar12 + 0x1c) + *(float *)(lVar12 + 0x24);
        }
        else {
          fVar17 = *(float *)(lVar12 + 0x24);
        }
        FUN_140b5f9e2(lVar12 + 0x60,param_1,fVar18 + fVar17,0);
      }
      lVar12 = lVar12 + 0xb8;
      lVar10 = lVar10 + -0xb8;
    } while (lVar10 != 0);
  }
  FUN_140df634a(param_1);
  (**(code **)(*param_1 + 1000))(param_1);
  if (0 < (int)param_1[0x2e]) {
    lVar12 = 0;
    do {
      FUN_1463a1e2c(param_1[0x2d] + lVar12 * 0x18 + 8);
      lVar10 = (longlong)(int)param_1[0x2e];
      if (lVar10 < 1) {
        fVar18 = 0.0;
      }
      else {
        lVar13 = param_1[0x2d] + 8;
        fVar18 = 0.0;
        do {
          if ((0 < *(int *)(lVar13 + 8)) &&
             (fVar17 = (float)FUN_140cc2c92(lVar13), fVar18 <= fVar17)) {
            fVar18 = fVar17;
          }
          lVar13 = lVar13 + 0x18;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      fVar17 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
      if (0.0001 < ABS(fVar18 - fVar17)) {
        (**(code **)(*param_1 + 0x3f8))(param_1,fVar18);
      }
      lVar12 = lVar12 + 1;
    } while ((int)lVar12 < (int)param_1[0x2e]);
  }
  if ((longlong)(int)param_1[0x2c] != 0) {
    lVar12 = param_1[0x2b];
    lVar10 = (longlong)(int)param_1[0x2c] * 0x50 + lVar12;
    do {
      FUN_147903496(lVar12);
      if (*(char *)(lVar12 + 0x19) == '\x02') {
        fVar18 = *(float *)(lVar12 + 0x24) * *(float *)(lVar12 + 0x20) + *(float *)(lVar12 + 0x1c);
      }
      else if (*(char *)(lVar12 + 0x19) == '\x01') {
        fVar18 = *(float *)(lVar12 + 0x1c) + *(float *)(lVar12 + 0x24);
      }
      else {
        fVar18 = *(float *)(lVar12 + 0x24);
      }
      FUN_140b5f9e2(lVar12,param_1,fVar18,0);
      lVar12 = lVar12 + 0x50;
    } while (lVar12 != lVar10);
  }
  if ((((char)param_1[0x2f] != '\0') || (*(char *)((longlong)param_1 + 0x179) == '\x01')) &&
     ((longlong)(int)param_1[0x2e] != 0)) {
    lVar10 = param_1[0x2d];
    lVar12 = lVar10 + (longlong)(int)param_1[0x2e] * 0x18;
    do {
      iVar11 = *(int *)(lVar10 + 0x10);
      if ((longlong)iVar11 != 0) {
        lVar13 = *(longlong *)(lVar10 + 8);
        lVar14 = 0;
        do {
          plVar7 = *(longlong **)(lVar13 + lVar14);
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x3d0))(plVar7,1,(char)param_1[0x32]);
          }
          lVar14 = lVar14 + 0x40;
        } while ((longlong)iVar11 * 0x40 != lVar14);
      }
      lVar10 = lVar10 + 0x18;
    } while (lVar10 != lVar12);
  }
  lVar12 = param_1[8];
  if ((lVar12 != 0) && (0 < (int)param_1[0x2e])) {
    lVar10 = 0;
    lVar13 = 0;
    do {
      local_88 = *(undefined8 *)(param_1[0x2d] + lVar10);
      FUN_145bf75c8(lVar12,&local_88);
      lVar13 = lVar13 + 1;
      lVar10 = lVar10 + 0x18;
    } while (lVar13 < (int)param_1[0x2e]);
  }
  iVar11 = *(int *)((longlong)param_1 + 0xc);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  iVar9 = iVar11 + 0xffff;
  if (-1 < iVar11) {
    iVar9 = iVar11;
  }
  if ((iVar9 >> 0x10 < DAT_14c964390) &&
     (lVar12 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar9 >> 0x10) * 0x10), lVar12 != 0)) {
    lVar12 = *(longlong *)(lVar12 + (longlong)(iVar11 % 0x10000) * 0x10);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
    if (lVar12 == 0) goto LAB_1433d99c5;
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
LAB_1433d99c5:
  plVar7 = param_1 + 0x27;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)((longlong)param_1 + 0x144) < 0) {
    FUN_14791cc74(plVar7);
  }
  if (*(longlong *)((longlong)param_1 + 300) != 0) {
    lVar12 = (longlong)*(int *)((longlong)param_1 + 0x134);
    if ((-1 < lVar12) && (*(int *)((longlong)param_1 + 0x134) < (int)param_1[0x2e])) {
      lVar10 = (longlong)*(int *)(param_1[0x2d] + 0x10 + lVar12 * 0x18);
      if (lVar10 != 0) {
        plVar16 = *(longlong **)(param_1[0x2d] + 8 + lVar12 * 0x18);
        local_90 = plVar16 + lVar10 * 8;
        do {
          if (*plVar16 != 0) {
            lVar10 = FUN_1402576f0();
            lVar12 = *plVar16;
            if (((((lVar12 != 0) && (lVar10 != 0)) &&
                 (lVar13 = *(longlong *)(lVar12 + 0x10), lVar13 != 0)) &&
                ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar13 + 0x38) &&
                 (*(longlong *)
                   (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
                  lVar10 + 0x30)))) && (0 < (longlong)*(int *)(lVar12 + 0x188))) {
              puVar15 = *(undefined8 **)(lVar12 + 0x180);
              puVar1 = (undefined8 *)((longlong)puVar15 + (longlong)*(int *)(lVar12 + 0x188) * 0xc);
              do {
                fVar18 = *(float *)((longlong)plVar16 + 0xc);
                if (((fVar18 <= *(float *)(puVar15 + 1)) &&
                    (fVar17 = *(float *)(plVar16 + 2), *(float *)(puVar15 + 1) <= fVar17)) &&
                   (0 < (int)plVar16[3])) {
                  fVar2 = *(float *)((longlong)plVar16 + 0x14);
                  iVar11 = 0;
                  do {
                    fVar3 = *(float *)(puVar15 + 1);
                    fVar4 = *(float *)((longlong)plVar16 + 0xc);
                    fVar5 = *(float *)((longlong)plVar16 + 0x14);
                    fVar6 = *(float *)(plVar16 + 1);
                    uVar8 = *puVar15;
                    iVar9 = (int)param_1[0x28];
                    *(uint *)(param_1 + 0x28) = iVar9 + 1U;
                    if (*(uint *)((longlong)param_1 + 0x144) < iVar9 + 1U) {
                      FUN_14791cca4(plVar7,iVar9);
                    }
                    lVar12 = *plVar7;
                    *(undefined8 *)(lVar12 + (longlong)iVar9 * 0xc) = uVar8;
                    *(float *)(lVar12 + 8 + (longlong)iVar9 * 0xc) =
                         (float)iVar11 * (fVar17 - fVar18) * fVar2 + (fVar3 - fVar4) * fVar5 + fVar6
                    ;
                    iVar11 = iVar11 + 1;
                  } while (iVar11 < (int)plVar16[3]);
                }
                puVar15 = (undefined8 *)((longlong)puVar15 + 0xc);
              } while (puVar15 != puVar1);
            }
          }
          plVar16 = plVar16 + 8;
        } while (plVar16 != local_90);
      }
      FUN_14792ec1c(plVar7);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433d9bfa FUN_1433d9bfa body=289 status=ok
// SIG undefined FUN_1433d9bfa(void)

void FUN_1433d9bfa(longlong param_1,int *param_2,longlong *param_3)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  int *local_48;
  longlong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_14791c736((longlong *)(param_1 + 0x198),iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x198);
  *(int *)(lVar4 + 8 + (longlong)iVar2 * 0xc) = param_2[2];
  *(undefined8 *)(lVar4 + (longlong)iVar2 * 0xc) = *(undefined8 *)param_2;
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    fVar3 = (float)param_2[1];
    plVar6 = param_3 + 7;
    if ((longlong *)param_3[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[8];
    }
    fVar5 = *(float *)((longlong)plVar6 + (ulonglong)((int)param_3[9] - 1U & (uint)fVar3) * 4);
    if (fVar5 != -NAN) {
      do {
        pfVar1 = (float *)(*param_3 + (longlong)(int)fVar5 * 0x18);
        if ((*pfVar1 == fVar3) && (!NAN(*pfVar1) && !NAN(fVar3))) {
          if ((pfVar1 != (float *)0x0) && (pfVar1 != (float *)&DAT_fffffffffffffff8))
          goto LAB_1433d9ce9;
          break;
        }
        fVar5 = pfVar1[4];
      } while (fVar5 != -NAN);
    }
  }
  local_48 = param_2 + 1;
  local_50 = (longlong)*param_2 * 0xb8 + *(longlong *)(param_1 + 0x88);
  local_40 = &local_50;
  FUN_14791c7ca(param_3,local_34);
LAB_1433d9ce9:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433d9d1c FUN_1433d9d1c body=634 status=ok
// SIG undefined FUN_1433d9d1c(void)

undefined8 FUN_1433d9d1c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar13 = (ulonglong)*(int *)(param_1 + 0x170);
  if ((1 < (longlong)uVar13) && (lVar1 = *(longlong *)(param_1 + 0x40), lVar1 != 0)) {
    plVar6 = *(longlong **)(param_1 + 0x168);
    if (*(int *)(lVar1 + 0x290) != *(int *)(lVar1 + 700)) {
      lVar2 = *plVar6;
      uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar8 = (uint)lVar2 & 0xffff;
      lVar11 = lVar1 + 0x2c0;
      if (*(longlong *)(lVar1 + 0x2c8) != 0) {
        lVar11 = *(longlong *)(lVar1 + 0x2c8);
      }
      iVar4 = *(int *)(lVar11 + (ulonglong)
                                (*(int *)(lVar1 + 0x2d0) - 1U &
                                (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar8) +
                                (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          plVar9 = (longlong *)(*(longlong *)(lVar1 + 0x288) + (longlong)iVar4 * 0x18);
          if (*plVar9 == lVar2) goto LAB_1433d9dec;
          iVar4 = (int)plVar9[2];
        } while (iVar4 != -1);
      }
    }
    plVar9 = (longlong *)0x0;
LAB_1433d9dec:
    plVar5 = plVar9 + 1;
    if (plVar9 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    if (plVar5 == (longlong *)0x0) {
      plVar5 = &DAT_14cacd708;
    }
    local_60 = *plVar5;
    local_58 = (longlong *)0x0;
    uStack_50 = 1;
    FUN_1446f84a2(&local_58);
    *local_58 = *plVar6;
    bVar14 = true;
    uVar12 = 1;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x168) + uVar12 * 0x18);
      lVar11 = (longlong)(int)uStack_50;
      if (lVar11 != 0) {
        lVar10 = 0;
        do {
          if (*(longlong *)((longlong)local_58 + lVar10) == lVar2) goto LAB_1433d9f59;
          lVar10 = lVar10 + 8;
        } while (lVar11 * 8 - lVar10 != 0);
      }
      uVar3 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
      if (uStack_50._4_4_ < uVar3) {
        FUN_1446f84a2(&local_58);
      }
      local_58[lVar11] = lVar2;
      if (*(int *)(lVar1 + 0x290) != *(int *)(lVar1 + 700)) {
        uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar8 = (uint)lVar2 & 0xffff;
        lVar11 = *(longlong *)(lVar1 + 0x2c8);
        if (*(longlong *)(lVar1 + 0x2c8) == 0) {
          lVar11 = lVar1 + 0x2c0;
        }
        iVar4 = *(int *)(lVar11 + (ulonglong)
                                  (*(int *)(lVar1 + 0x2d0) - 1U &
                                  (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar8) +
                                  (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
        if (iVar4 != -1) {
          do {
            plVar6 = (longlong *)(*(longlong *)(lVar1 + 0x288) + (longlong)iVar4 * 0x18);
            if (*plVar6 == lVar2) goto LAB_1433d9f21;
            iVar4 = (int)plVar6[2];
          } while (iVar4 != -1);
        }
      }
      plVar6 = (longlong *)0x0;
LAB_1433d9f21:
      plVar9 = plVar6 + 1;
      if (plVar6 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      if (plVar9 == (longlong *)0x0) {
        plVar9 = &DAT_14cacd708;
      }
      if (*plVar9 != local_60) break;
      uVar12 = uVar12 + 1;
      bVar14 = uVar12 < uVar13;
    } while (uVar12 != uVar13);
LAB_1433d9f59:
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (bVar14) {
      uVar7 = 0;
      goto LAB_1433d9f6f;
    }
  }
  uVar7 = 1;
LAB_1433d9f6f:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1433d9f98 FUN_1433d9f98 body=556 status=ok
// SIG undefined FUN_1433d9f98(void)

void FUN_1433d9f98(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_c8 [32];
  int *local_a8;
  int *local_a0;
  int local_94 [2];
  int local_8c [2];
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  ulonglong local_70;
  int iVar4;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_4 + 0xc9) == '\x01') {
    fVar1 = *(float *)(param_2 + 0x40);
    fVar9 = **(float **)(param_2 + 0x60);
    fVar2 = (*(float **)(param_2 + 0x60))[1];
    *(float *)(param_4 + 0xbc) = fVar9;
    fVar8 = (float)(**(code **)(*param_1 + 0x2b0))();
    *(float *)(param_4 + 0xc0) = fVar2 / fVar8;
    if ((((fVar9 != 0.0) || (NAN(fVar9))) && (*(char *)(param_2 + 0x70) == '\x01')) &&
       ((piVar5 = *(int **)(param_2 + 0x68), piVar5 != (int *)0x0 &&
        (*(char *)(param_4 + 200) == '\x01')))) {
      uVar7 = *(uint *)(param_2 + 0x1c) | 0xfffffffe;
      if ((*piVar5 <= (int)uVar7) || (iVar3 = *piVar5, iVar4 = piVar5[2], piVar5[2] <= (int)uVar7))
      {
        local_a8 = local_8c;
        local_8c[0] = -2;
        local_a0 = local_94;
        local_94[0] = -2;
        (**(code **)(*param_1 + 0x380))(param_1,fVar2,0,*(undefined8 *)(param_4 + 0xb0));
        iVar3 = local_8c[0];
        iVar4 = local_94[0];
      }
      local_a8 = (int *)CONCAT44(local_a8._4_4_,fVar2);
      local_a0 = (int *)0x0;
      (**(code **)(*param_1 + 0x390))(param_1,&local_84,iVar3,iVar4);
      *(undefined4 *)(param_4 + 0x98) = local_74;
      *(undefined4 *)(param_4 + 0x88) = local_84;
      *(undefined4 *)(param_4 + 0x8c) = uStack_80;
      *(undefined4 *)(param_4 + 0x90) = uStack_7c;
      *(undefined4 *)(param_4 + 0x94) = uStack_78;
      local_a0 = piVar5 + 2;
      local_a8 = piVar5;
      (**(code **)(*param_1 + 0x380))(param_1,fVar1,0,*(undefined8 *)(param_4 + 0xb0));
      local_a8 = (int *)CONCAT44(local_a8._4_4_,fVar1);
      local_a0 = (int *)0x0;
      (**(code **)(*param_1 + 0x390))(param_1,&local_84,*piVar5,piVar5[2]);
      *(undefined4 *)(param_4 + 0xac) = local_74;
      *(undefined4 *)(param_4 + 0x9c) = local_84;
      *(undefined4 *)(param_4 + 0xa0) = uStack_80;
      *(undefined4 *)(param_4 + 0xa4) = uStack_7c;
      *(undefined4 *)(param_4 + 0xa8) = uStack_78;
      FUN_1478da7c8(param_4 + 0x78,*(undefined8 *)(param_2 + 0x48));
      fVar9 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
      *(float *)(param_4 + 0xc4) = fVar1 / fVar9;
      goto LAB_1433da061;
    }
    fVar9 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
    *(float *)(param_4 + 0xc4) = fVar1 / fVar9;
  }
  puVar6 = *(undefined4 **)(param_2 + 0x68);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0xfffffffe;
    puVar6[2] = 0xfffffffe;
  }
LAB_1433da061:
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433da1c6 FUN_1433da1c6 body=1226 status=ok
// SIG undefined FUN_1433da1c6(void)

void FUN_1433da1c6(longlong *param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined6 uStack_96;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_3 != '\0') && ((char)param_1[0x30] == '\0')) {
    *(char *)(param_1 + 0x30) = param_3;
  }
  if ((*(float *)(param_1 + 0x2e) == 0.0) && (!NAN(*(float *)(param_1 + 0x2e)))) {
    fVar6 = *(float *)(param_2 + 2);
    fVar7 = *(float *)(param_1 + 0x2b);
    if (fVar6 < *(float *)(param_1 + 0x2b)) {
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      *(float *)(param_1 + 0x2b) = fVar6;
      *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)((longlong)param_1 + 0x15c);
      *(int *)((longlong)param_1 + 0x16c) = (int)param_1[0x2d];
      *(undefined4 *)(param_1 + 0x2e) = 0;
      *(undefined2 *)((longlong)param_1 + 0x175) = 0x101;
      *(undefined1 *)((longlong)param_1 + 0x177) = 1;
      fVar7 = fVar6;
    }
    goto LAB_1433da27a;
  }
  local_48 = param_2[1];
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_3c = *(undefined1 *)((longlong)param_2 + 0x14);
  lVar4 = param_2[3];
  local_40 = 0;
  if ((char)lVar4 != '\x01') {
    local_40 = (int)param_2[2];
  }
  FUN_1478cdf00(&local_a8);
  *(undefined1 *)((longlong)param_1 + 0x174) = local_88._4_1_;
  *(undefined1 *)((longlong)param_1 + 0x177) = 1;
  lVar3 = CONCAT44(uStack_a4,local_a8);
  if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0x2a] = lVar3;
  fVar7 = (float)local_a0;
  if ((float)local_a0 <= 0.0) {
    fVar7 = 0.0;
  }
  *(float *)(param_1 + 0x2b) = fVar7;
  *(undefined1 *)((longlong)param_1 + 0x176) = 1;
  *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)((longlong)param_1 + 0x15c);
  *(int *)((longlong)param_1 + 0x16c) = (int)param_1[0x2d];
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x175) = 1;
  *(undefined1 *)((longlong)param_1 + 0x177) = 1;
  FUN_14470c566(param_1 + 0x2a,0);
  param_1[0x33] = *param_2;
  if ((((*param_1 != 0) && (*(int *)((longlong)param_1 + 300) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x25), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)((longlong)param_1 + 300))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
        (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))) {
      (**(code **)(*plVar5 + 0x2c0))(plVar5,param_1);
      local_58 = 0;
      local_50 = 0;
      FUN_1478fced8(&local_58,param_1 + 3);
      FUN_147904dd8(&local_a8,*param_1,(char)param_1[0x30],&local_58);
      FUN_1478f7112(plVar5,&local_a8);
      if ((int)local_90 == 0) {
LAB_1433da49d:
        if (CONCAT62(uStack_96,CONCAT11(uStack_97,local_98)) != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar2 = (undefined8 *)CONCAT62(uStack_96,CONCAT11(uStack_97,local_98));
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,0);
          FUN_1446efa72(&local_98,0,0,0x10);
          local_90 = (ulonglong)local_90._4_4_ << 0x20;
          goto LAB_1433da49d;
        }
      }
      if ((char)lVar4 == '\x01') {
        local_a8 = 0xbf800000;
        local_a0 = 0;
        local_98 = 0;
        uStack_97 = 0;
        local_90 = 0;
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c844850) {
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
        local_88 = DAT_14c844840;
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
        local_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0xffffffff;
        local_60 = 0;
        local_a8 = (undefined4)param_2[2];
        uStack_97 = *(undefined1 *)((longlong)param_2 + 0x14);
        lVar4 = param_2[1];
        if (DAT_14c950c29 == 1) {
          if (lVar4 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar4 = param_2[1];
          }
        }
        lVar3 = *param_2;
        local_90 = lVar4;
        if ((DAT_14c950c29 & 1) != 0) {
          if (lVar3 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_1456cec3c(lVar3);
            lVar3 = *param_2;
            lVar4 = param_2[1];
          }
        }
        local_98 = lVar4 != 0 || *(char *)((longlong)param_2 + 0x14) != '\0';
        local_a0 = lVar3;
        FUN_1478f7070(plVar5,*param_1,&local_a8);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (local_88 != (longlong *)0x0) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
    }
  }
  fVar7 = *(float *)(param_1 + 0x2b);
LAB_1433da27a:
  if (fVar7 <= 0.0) {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433da692 FUN_1433da692 body=988 status=ok
// SIG undefined FUN_1433da692(void)

void FUN_1433da692(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  longlong *local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 *local_58;
  int local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_1433da72d;
  if ((*(int *)((longlong)param_1 + 300) != 0) &&
     (uVar11 = *(uint *)(param_1 + 0x25), -1 < (int)uVar11)) {
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      if (((lVar10 != 0) && (*(int *)(lVar10 + 0x10) == *(int *)((longlong)param_1 + 300))) &&
         ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)) {
        plVar7 = param_1 + 0x27;
        uVar12 = (ulonglong)(int)param_1[0x28];
        if (0 < (longlong)uVar12) {
          uVar3 = param_1[0x25];
          uVar11 = (uint)uVar3;
          lVar13 = uVar12 * 0xb8;
          uVar12 = uVar12 + 1;
          local_80 = (ulonglong)((uVar11 & 0xffff) * 0x18);
          lVar10 = DAT_14c9647c8;
          iVar4 = DAT_14c9647dc;
          local_88 = plVar7;
          do {
            lVar13 = lVar13 + -0xb8;
            if (*(longlong *)(*plVar7 + 0x50 + lVar13) != 0) {
              local_50 = (int)param_1[0x26];
              local_60 = *param_1;
              if ((*(int *)((longlong)param_1 + 300) == 0) ||
                 (uVar1 = *(uint *)(param_1 + 0x25), (int)uVar1 < 0)) {
LAB_1433da8df:
                lVar9 = 0;
              }
              else {
                lVar9 = 0;
                if ((int)uVar1 < iVar4) {
                  plVar5 = (longlong *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(lVar10 + (ulonglong)(uVar1 >> 0x10) * 8));
                  if (((plVar5 == (longlong *)0x0) ||
                      ((int)plVar5[2] != *(int *)((longlong)param_1 + 300))) ||
                     ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) goto LAB_1433da8df;
                  lVar9 = *plVar5;
                }
              }
              local_58 = (undefined8 *)(*plVar7 + lVar13);
              local_68 = *(undefined8 *)(lVar9 + 0x20);
              local_4c = 0;
              (**(code **)(*(longlong *)local_58[10] + 0x2f0))((longlong *)local_58[10],&local_68);
              if ((uVar3 >> 0x20 == 0) || ((int)uVar11 < 0)) goto LAB_1433da72d;
              if (DAT_14c9647dc <= (int)uVar11) goto LAB_1433da72d;
              plVar7 = (longlong *)
                       (*(longlong *)
                         (DAT_14c9647c8 + (ulonglong)((uint)(uVar3 >> 0x10) & 0x7fff) * 8) +
                       local_80);
              if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != (int)(uVar3 >> 0x20))) ||
                 ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_1433da72d;
              if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
                lVar9 = *plVar7;
              }
              else {
                lVar9 = 0;
              }
              lVar10 = DAT_14c9647c8;
              plVar7 = local_88;
              iVar4 = DAT_14c9647dc;
              if (*(int *)(lVar9 + 0x90) == 0) goto LAB_1433da72d;
            }
            uVar12 = uVar12 - 1;
          } while (1 < uVar12);
          uVar12 = (ulonglong)*(uint *)(param_1 + 0x28);
        }
        FUN_14499183d(param_1[0x27],uVar12 & 0xffffffff);
        *(undefined4 *)(param_1 + 0x28) = 0;
        if (*(int *)((longlong)param_1 + 0x144) != 0) {
          FUN_1417b4232(plVar7,0);
        }
        if (*(int *)((longlong)param_1 + 300) == 0) {
LAB_1433daa5d:
          uVar6 = 0;
        }
        else {
          uVar11 = *(uint *)(param_1 + 0x25);
          uVar6 = 0;
          if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
            puVar8 = (undefined8 *)
                     ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
            if ((puVar8 == (undefined8 *)0x0) ||
               ((*(int *)(puVar8 + 2) != *(int *)((longlong)param_1 + 300) ||
                ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_1433daa5d;
            uVar6 = *puVar8;
          }
        }
        local_78 = 0;
        local_70 = 0;
        FUN_1478fced8(&local_78,param_1 + 1);
        local_98 = &local_78;
        FUN_147905180(&local_68,lVar2,(int)param_1[0x26],(char)param_1[0x30]);
        FUN_1478f72bc(uVar6,&local_68);
        if (local_50 == 0) {
LAB_1433da9fc:
          if (local_58 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_58 != (undefined8 *)0x0) {
          (**(code **)*local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          local_50 = 0;
          goto LAB_1433da9fc;
        }
        if (*(int *)((longlong)param_1 + 300) == 0) {
LAB_1433daa64:
          uVar6 = 0;
        }
        else {
          uVar11 = *(uint *)(param_1 + 0x25);
          uVar6 = 0;
          if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
            puVar8 = (undefined8 *)
                     ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
            if ((puVar8 == (undefined8 *)0x0) ||
               ((*(int *)(puVar8 + 2) != *(int *)((longlong)param_1 + 300) ||
                ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_1433daa64;
            uVar6 = *puVar8;
          }
        }
        FUN_1433d54a2(uVar6,param_1);
      }
    }
  }
  param_1[0x2a] = 0;
  *(undefined1 *)((longlong)param_1 + 0x174) = 0;
  *(undefined1 *)((longlong)param_1 + 0x177) = 1;
  param_1[0x33] = 0;
  *param_1 = 0;
LAB_1433da72d:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433daa70 FUN_1433daa70 body=213 status=ok
// SIG undefined FUN_1433daa70(void)

ulonglong FUN_1433daa70(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = (longlong)*(int *)(*param_1 + 0x160);
  if (0 < lVar1) {
    pcVar3 = (char *)(*(longlong *)(*param_1 + 0x158) + 0x19);
    lVar2 = 0;
    do {
      if (*(longlong *)(pcVar3 + 0x17) == *param_2) {
        fVar5 = 0.0;
        if (param_3 != '\0') {
          fVar5 = (float)FUN_14790427a();
          fVar5 = fVar5 + -0.0001;
        }
        if (*pcVar3 == '\x02') {
          fVar6 = *(float *)(pcVar3 + 0xb) * *(float *)(pcVar3 + 7) + *(float *)(pcVar3 + 3);
        }
        else if (*pcVar3 == '\x01') {
          fVar6 = *(float *)(pcVar3 + 3) + *(float *)(pcVar3 + 0xb);
        }
        else {
          fVar6 = *(float *)(pcVar3 + 0xb);
        }
        *(float *)(param_1 + 0x29) = fVar5 + fVar6;
        *(undefined4 *)((longlong)param_1 + 0x4c) = 0xfffffffe;
        *(undefined4 *)((longlong)param_1 + 0x54) = 0xfffffffe;
        uVar4 = CONCAT71((int7)((ulonglong)pcVar3 >> 8),1);
        if ((char)param_1[7] == '\x01') {
          if ((*(float *)(param_1 + 0x2e) == 0.0) && (!NAN(*(float *)(param_1 + 0x2e)))) {
            FUN_147904a70(param_1,*(undefined4 *)((longlong)param_1 + 0x14c));
          }
        }
        goto LAB_1433daaac;
      }
      lVar2 = lVar2 + 1;
      pcVar3 = pcVar3 + 0x50;
    } while (lVar1 != lVar2);
  }
  uVar4 = 0;
LAB_1433daaac:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1433dab46 FUN_1433dab46 body=176 status=ok
// SIG undefined FUN_1433dab46(void)

undefined4 FUN_1433dab46(longlong param_1,int *param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 unaff_RSI;
  
  iVar2 = *param_2;
  if (((longlong)iVar2 < 0) || (*(int *)(param_1 + 0x110) <= iVar2)) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar2 * 4);
    uVar4 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((((ulonglong)uVar3 != 0xffffffff) && (-1 < (int)uVar3)) &&
       ((int)uVar3 < *(int *)(param_1 + 0x120))) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x118) + (ulonglong)uVar3 * 4) = 0xffffffff;
    }
  }
  iVar2 = *param_3;
  if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(param_1 + 0x120))) {
    *(int *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar2 * 4) = *param_2;
  }
  if ((char)uVar4 != '\0') {
    *(int *)(*(longlong *)(param_1 + 0x108) + (longlong)*param_2 * 4) = *param_3;
    if (*(char *)(param_1 + 0x38) == '\x01') {
      fVar1 = *(float *)(param_1 + 0x170);
      if ((fVar1 == 0.0) && (!NAN(fVar1))) {
        FUN_147904a70(fVar1,*(undefined4 *)(param_1 + 0x14c));
      }
    }
  }
  return uVar4;
}



// FUNCTION 1433dabf6 FUN_1433dabf6 body=673 status=ok
// SIG undefined FUN_1433dabf6(void)

void FUN_1433dabf6(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 *local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*param_1 == 0) goto LAB_1433dad2e;
  fVar4 = *(float *)(param_1 + 0x2d);
  *(float *)((longlong)param_1 + 0x184) = fVar4;
  if (*(char *)((longlong)param_1 + 0x177) == '\0') {
    fVar6 = *(float *)(param_1 + 0x2f);
  }
  else {
    fVar6 = *(float *)((longlong)param_1 + 0x16c);
    fVar4 = *(float *)(param_1 + 0x2e);
    fVar5 = (float)FUN_14002c5a6(0x3f800000,*(undefined1 *)((longlong)param_1 + 0x174),param_1[0x2a]
                                );
    fVar6 = fVar5 * (fVar4 - fVar6) + fVar6;
    *(float *)(param_1 + 0x2f) = fVar6;
    *(undefined1 *)((longlong)param_1 + 0x177) = 0;
    fVar4 = *(float *)(param_1 + 0x2d);
  }
  FUN_14470c566(param_1 + 0x2a,param_2);
  if (*(float *)((longlong)param_1 + 0x164) <= 0.0001 &&
      *(float *)((longlong)param_1 + 0x164) != 0.0001) {
    param_1[0x33] = 0;
  }
  if ((fVar6 != fVar4) || (NAN(fVar6) || NAN(fVar4))) {
    fVar4 = *(float *)(param_1 + 0x2e);
    if ((fVar4 != 0.0) || (NAN(fVar4))) {
      if (*(char *)((longlong)param_1 + 0x177) == '\0') {
        fVar6 = *(float *)(param_1 + 0x2f);
      }
      else {
        fVar6 = *(float *)((longlong)param_1 + 0x16c);
        fVar5 = (float)FUN_14002c5a6(0x3f800000,*(undefined1 *)((longlong)param_1 + 0x174),
                                     param_1[0x2a]);
        fVar6 = fVar5 * (fVar4 - fVar6) + fVar6;
        *(float *)(param_1 + 0x2f) = fVar6;
        *(undefined1 *)((longlong)param_1 + 0x177) = 0;
      }
      if ((((fVar6 == *(float *)(param_1 + 0x2d)) &&
           (!NAN(fVar6) && !NAN(*(float *)(param_1 + 0x2d)))) &&
          (*(int *)((longlong)param_1 + 300) != 0)) &&
         ((uVar1 = *(uint *)(param_1 + 0x25), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
        plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((plVar3 != (longlong *)0x0) &&
            (((int)plVar3[2] == *(int *)((longlong)param_1 + 300) &&
             ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) && (lVar2 = *plVar3, lVar2 != 0)) {
          local_98 = 0;
          local_90 = 0;
          FUN_1478fd040(&local_98,param_1 + 5);
          FUN_147905684(local_88,*param_1,&local_98);
          FUN_1478f71ec(lVar2,local_88);
          if (local_78 != 0) {
            if (local_80 == (undefined8 *)0x0) goto LAB_1433dad16;
            (**(code **)*local_80)(local_80,0);
            FUN_1446efa72(&local_80,0,0,0x10);
            local_78 = 0;
          }
          if (local_80 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
LAB_1433dad16:
  fVar4 = *(float *)((longlong)param_1 + 0x184);
  if (*(float *)((longlong)param_1 + 0x184) <= *(float *)(param_1 + 0x2d)) {
    fVar4 = *(float *)(param_1 + 0x2d);
  }
  *(float *)(param_1 + 0x31) = fVar4;
LAB_1433dad2e:
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433dae98 FUN_1433dae98 body=3090 status=ok
// SIG undefined FUN_1433dae98(void)

void FUN_1433dae98(longlong *param_1,float param_2,longlong param_3,char param_4)

{
  uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  code **local_190;
  undefined1 *local_188;
  code *local_180;
  byte local_16a;
  char local_169;
  longlong local_168;
  longlong local_160;
  longlong *local_158;
  float *local_150;
  longlong *local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  undefined4 local_120;
  undefined1 local_11c;
  longlong local_d0;
  code *local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (((longlong *)*param_1 != (longlong *)0x0) && ((char)param_1[7] == '\x01')) {
    local_169 = param_4;
    if (param_3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*(longlong *)*param_1 + 0x340))();
    }
    *(int *)((longlong)param_1 + 0x44) = (int)param_1[0x29];
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 9) = 1;
    if (param_1[0x32] == 0) {
LAB_1433dafb1:
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    else {
      fVar19 = *(float *)(param_1 + 0x2e);
      if ((fVar19 != 0.0) || (NAN(fVar19))) goto LAB_1433dafb1;
      if (*(char *)((longlong)param_1 + 0x177) == '\0') {
        fVar21 = *(float *)(param_1 + 0x2f);
      }
      else {
        fVar21 = *(float *)((longlong)param_1 + 0x16c);
        fVar20 = (float)FUN_14002c5a6(0x3f800000,*(undefined1 *)((longlong)param_1 + 0x174),
                                      param_1[0x2a]);
        fVar21 = fVar20 * (fVar19 - fVar21) + fVar21;
        *(float *)(param_1 + 0x2f) = fVar21;
        *(undefined1 *)((longlong)param_1 + 0x177) = 0;
      }
      fVar19 = *(float *)(param_1 + 0x2d);
      *(bool *)(param_1 + 0xe) = fVar21 != fVar19;
      if ((fVar21 != fVar19) || (NAN(fVar21) || NAN(fVar19))) {
        if (*(int *)((longlong)param_1 + 0x6c) < 0) {
          *(undefined4 *)(param_1 + 0xd) = 0;
          FUN_1478fc0c4(param_1 + 0xc,0);
        }
        else {
          *(undefined4 *)(param_1 + 0xd) = 0;
        }
      }
    }
    plVar9 = param_1 + 0xe;
    if (*(float *)(param_1 + 0x11) < 10.0) {
      *(float *)(param_1 + 0x11) = *(float *)(param_1 + 0x11) + param_2;
    }
    if ((param_2 == 0.0) && (!NAN(param_2))) {
      FUN_1433dbaac(param_1);
    }
    if ((char)param_1[7] == '\x01') {
      pfVar16 = (float *)(param_1 + 0x29);
      local_148 = param_1 + 0xf;
      local_140 = param_1 + 0xc;
      iVar10 = 10;
      do {
        if ((*(float *)(param_1 + 0x11) <= 1e-08) || (iVar10 = iVar10 + -1, iVar10 == 0)) break;
        fVar19 = *pfVar16;
        local_d0 = 0;
        bVar3 = FUN_1479056d6(local_148,pfVar16,&local_d0);
        if (1 < bVar3) {
          FUN_1478cde98(&local_138,*param_1 + 0xf8,
                        *(float *)(*param_1 + 0x100) * *(float *)((longlong)param_1 + 0x3c));
          FUN_147904e32(param_1,&local_138,0);
          break;
        }
        fVar21 = *(float *)((longlong)param_1 + 0x94);
        *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + fVar21;
        bVar13 = *(byte *)(param_1 + 0x13);
        if ((((*(float *)(param_1 + 0x2e) != 0.0) || (NAN(*(float *)(param_1 + 0x2e)))) &&
            (*(char *)((longlong)param_1 + 0x71) == '\x01')) &&
           (*(int *)(param_1[(ulonglong)(bVar13 ^ 1) * 2 + 0x21] +
                    (longlong)*(int *)((longlong)param_1 + 0x9c) * 4) == -1)) {
          local_16a = bVar13;
          fVar18 = (float)FUN_147905ce6(local_148,(int)param_1[0x29]);
          lVar14 = *param_1;
          uVar17 = -(uint)(0.0 <= *(float *)(lVar14 + 0x128));
          fVar20 = (float)((uint)*(float *)(lVar14 + 0x128) & uVar17 |
                          ~uVar17 & (uint)(*(float *)(lVar14 + 0x100) *
                                          *(float *)((longlong)param_1 + 0x3c)));
          if (fVar20 <= 0.0001) {
            fVar20 = 0.0001;
          }
          bVar13 = local_16a;
          if (fVar18 <= fVar20) {
            FUN_1478cde98(&local_138,lVar14 + 0xf8);
            FUN_147904e32(param_1,&local_138,0);
            bVar13 = local_16a;
          }
        }
        if (bVar3 == 0) {
          if ((char)*plVar9 == '\x01') {
            local_1c8 = CONCAT44(local_1c8._4_4_,fVar21);
            local_160 = param_3;
            FUN_14792ed02(*param_1 + 0x138,fVar19);
            param_3 = local_160;
          }
          if (((((char)uVar4 != '\0') && (*(int *)((longlong)param_1 + 300) != 0)) &&
              ((uVar17 = *(uint *)(param_1 + 0x25), -1 < (int)uVar17 &&
               (((int)uVar17 < DAT_14c9647dc &&
                (plVar6 = (longlong *)
                          ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
                plVar6 != (longlong *)0x0)))))) &&
             (((int)plVar6[2] == *(int *)((longlong)param_1 + 300) &&
              (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
               (*(int *)((longlong)param_1 + 0x1b4) < 1)))))) {
            if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
              lVar14 = *plVar6;
            }
            else {
              lVar14 = 0;
            }
            lVar11 = *param_1;
            lVar15 = *(longlong *)(*(longlong *)(lVar14 + 0x20) + 0x658);
            if (lVar15 == 0) {
              lVar15 = *(longlong *)(*(longlong *)(lVar14 + 0x20) + 0x660);
              if ((DAT_14c950c29 == '\x01') && (lVar15 != 0)) goto LAB_1433db693;
              if (lVar15 != 0) goto LAB_1433db1b9;
LAB_1433db1e4:
              lVar15 = 0;
            }
            else {
              if (DAT_14c950c29 == '\x01') {
LAB_1433db693:
                local_168 = lVar15;
                local_160 = param_3;
                local_150 = pfVar16;
                FUN_1456cec3c(lVar15);
                param_3 = local_160;
                lVar15 = local_168;
                pfVar16 = local_150;
              }
LAB_1433db1b9:
              if (DAT_14cb06da8 == 0) {
                local_c8 = FUN_1449e2820;
                local_180 = FUN_14081d0ea;
                local_188 = &LAB_1464003b0;
                local_190 = &local_c8;
                local_198 = &LAB_147d17bdf;
                local_1a0 = &LAB_1417edf22;
                local_1a8 = L"Engine";
                local_1b0 = 0;
                local_1b8 = 0x10000000;
                local_1c0 = 8;
                local_1c8 = CONCAT44(local_1c8._4_4_,0x588);
                local_168 = lVar11;
                local_160 = param_3;
                local_150 = pfVar16;
                FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
                param_3 = local_160;
                lVar11 = local_168;
                pfVar16 = local_150;
              }
              if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38))
                 || (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
              goto LAB_1433db1e4;
            }
            local_1c8 = lVar15;
            local_16a = bVar13;
            FUN_1433dbeea(lVar11,&local_138);
            if (local_169 == '\0') {
              FUN_140167042(param_3,&local_138);
              bVar13 = local_16a;
            }
            else {
              if ((*(int *)((longlong)param_1 + 300) == 0) ||
                 (uVar17 = *(uint *)(param_1 + 0x25), (int)uVar17 < 0)) {
LAB_1433db539:
                uVar7 = 0;
              }
              else {
                uVar7 = 0;
                if ((int)uVar17 < DAT_14c9647dc) {
                  puVar8 = (undefined8 *)
                           ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
                  if (((puVar8 == (undefined8 *)0x0) ||
                      (*(int *)(puVar8 + 2) != *(int *)((longlong)param_1 + 300))) ||
                     ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_1433db539;
                  uVar7 = *puVar8;
                }
              }
              FUN_1478f8594(uVar7,&local_138,*(undefined8 *)(*param_1 + 0x168));
              bVar13 = local_16a;
            }
          }
          fVar21 = *(float *)(param_1 + 0x29);
          if ((char)param_1[0x30] == '\0') {
            local_168 = CONCAT44(local_168._4_4_,uVar4);
            uVar2 = param_1[0x25];
            local_160 = param_3;
            local_158 = plVar9;
            FUN_1433dbaac(param_1,fVar19);
            param_3 = local_160;
            plVar9 = local_158;
            uVar4 = (undefined4)local_168;
            if ((((uVar2 >> 0x20 != 0) && (uVar17 = (uint)uVar2, -1 < (int)uVar17)) &&
                (((int)uVar17 < DAT_14c9647dc &&
                 ((plVar6 = (longlong *)
                            ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0xd & 0x3fff8))),
                  plVar6 != (longlong *)0x0 && ((int)plVar6[2] == (int)(uVar2 >> 0x20))))))) &&
               ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) {
              if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
                lVar14 = *plVar6;
              }
              else {
                lVar14 = 0;
              }
              if (*(int *)(lVar14 + 0x90) == 0) goto LAB_1433db869;
            }
          }
        }
        else {
          fVar21 = *pfVar16;
        }
        if ((((DAT_14cacbb40 != '\0') && (*(float *)(param_1 + 0x11) <= 1e-08)) ||
            ((char)param_1[0x15] != '\x01')) || (local_d0 != 0)) {
LAB_1433db367:
          if (bVar3 == 1) break;
        }
        else {
          if ((fVar21 != *pfVar16) || (NAN(fVar21) || NAN(*pfVar16))) goto LAB_1433db367;
          iVar5 = *(int *)(param_1[(ulonglong)(bVar13 ^ 1) * 2 + 0x21] +
                          (longlong)*(int *)((longlong)param_1 + 0x9c) * 4);
          if (iVar5 == -1) {
            *(undefined1 *)(param_1 + 7) = 0;
            FUN_147904194(*param_1,(longlong)*(int *)((longlong)param_1 + 0x9c),&local_138,&local_c8
                         );
            if (bVar13 == 0) {
              fVar19 = (float)local_138;
            }
            else {
              fVar19 = local_c8._0_4_ + -5e-05;
            }
            *(float *)(param_1 + 0x29) = fVar19;
            break;
          }
          FUN_147904194(*param_1,iVar5,&local_138,&local_c8);
          fVar19 = local_c8._0_4_ + -5e-05;
          if (bVar13 != 0) {
            fVar19 = (float)local_138;
          }
          *(float *)(param_1 + 0x29) = fVar19;
        }
      } while ((char)param_1[7] != '\0');
    }
    if ((char)param_1[0x36] == '\x01') {
      *(undefined1 *)(param_1 + 0x36) = 0;
    }
    if ((char)param_1[0x35] == '\x01') {
      *(undefined1 *)(param_1 + 0x35) = 0;
    }
  }
  fVar19 = *(float *)(param_1 + 0x2e);
  if ((fVar19 == 0.0) && (!NAN(fVar19))) {
    if (*(char *)((longlong)param_1 + 0x177) == '\0') {
      fVar21 = *(float *)(param_1 + 0x2f);
    }
    else {
      fVar21 = *(float *)((longlong)param_1 + 0x16c);
      fVar20 = (float)FUN_14002c5a6(0x3f800000,*(undefined1 *)((longlong)param_1 + 0x174),
                                    param_1[0x2a]);
      fVar21 = fVar20 * (fVar19 - fVar21) + fVar21;
      *(float *)(param_1 + 0x2f) = fVar21;
      *(undefined1 *)((longlong)param_1 + 0x177) = 0;
    }
    if ((fVar21 == *(float *)(param_1 + 0x2d)) && (!NAN(fVar21) && !NAN(*(float *)(param_1 + 0x2d)))
       ) {
      FUN_1433da692(param_1);
      goto LAB_1433db869;
    }
  }
  if (((((((char)param_1[0x30] == '\0') && (*(int *)((longlong)param_1 + 300) != 0)) &&
        (uVar17 = *(uint *)(param_1 + 0x25), -1 < (int)uVar17)) &&
       (((int)uVar17 < DAT_14c9647dc &&
        (lVar14 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8), lVar14 != 0)))) &&
      (*(int *)(lVar14 + 0x10) == *(int *)((longlong)param_1 + 300))) &&
     (((*(uint *)(lVar14 + 8) & 0x10200000) == 0 && (iVar10 = (int)param_1[0x28], 0 < iVar10)))) {
    uVar2 = param_1[0x25];
    uVar17 = (uint)uVar2;
    lVar15 = 0;
    lVar11 = 0;
    lVar14 = DAT_14c9647c8;
    iVar5 = DAT_14c9647dc;
    do {
      if (*(longlong *)(param_1[0x27] + 0x50 + lVar15) != 0) {
        local_120 = (undefined4)param_1[0x26];
        local_130 = *param_1;
        if ((*(int *)((longlong)param_1 + 300) == 0) ||
           (uVar1 = *(uint *)(param_1 + 0x25), (int)uVar1 < 0)) {
LAB_1433dba5b:
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          if ((int)uVar1 < iVar5) {
            plVar9 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(lVar14 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((plVar9 == (longlong *)0x0) ||
                ((int)plVar9[2] != *(int *)((longlong)param_1 + 300))) ||
               ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_1433dba5b;
            lVar12 = *plVar9;
          }
        }
        local_128 = param_1[0x27] + lVar15;
        local_138 = *(undefined8 *)(lVar12 + 0x20);
        local_11c = 0;
        (**(code **)(**(longlong **)(local_128 + 0x50) + 0x2e8))
                  (*(longlong **)(local_128 + 0x50),&local_138);
        if ((((uVar2 >> 0x20 == 0) || ((int)uVar17 < 0)) ||
            ((DAT_14c9647dc <= (int)uVar17 ||
             ((plVar9 = (longlong *)
                        (*(longlong *)
                          (DAT_14c9647c8 + (ulonglong)((uint)(uVar2 >> 0x10) & 0x7fff) * 8) +
                        (ulonglong)((uVar17 & 0xffff) * 0x18)), plVar9 == (longlong *)0x0 ||
              ((int)plVar9[2] != (int)(uVar2 >> 0x20))))))) ||
           ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) break;
        if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
          lVar14 = *plVar9;
        }
        else {
          lVar14 = 0;
        }
        if (*(int *)(lVar14 + 0x90) == 0) break;
        iVar10 = (int)param_1[0x28];
        lVar14 = DAT_14c9647c8;
        iVar5 = DAT_14c9647dc;
      }
      lVar11 = lVar11 + 1;
      lVar15 = lVar15 + 0xb8;
    } while (lVar11 < iVar10);
  }
LAB_1433db869:
  if ((local_c0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433dbaac FUN_1433dbaac body=1085 status=ok
// SIG undefined FUN_1433dbaac(void)

void FUN_1433dbaac(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined8 *local_170;
  longlong local_168;
  ulonglong uStack_160;
  undefined8 local_158;
  undefined4 *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined2 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  longlong *local_120;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined6 local_e4;
  undefined2 uStack_de;
  undefined6 uStack_dc;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_d0 = param_2;
  local_cc = param_3;
  if ((char)param_1[0x30] != '\0') goto LAB_1433dbaf4;
  if (((((*(int *)((longlong)param_1 + 300) != 0) &&
        (uVar3 = *(uint *)(param_1 + 0x25), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) &&
      ((lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar8 != 0 &&
       (*(int *)(lVar8 + 0x10) == *(int *)((longlong)param_1 + 300))))) &&
     ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)) {
    local_158 = 0;
    local_148 = 0x3f800000;
    uStack_144 = 0;
    uStack_140 = 0x3f800000;
    uStack_13c = 0;
    local_138 = 0x100;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = (longlong *)0x0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    local_e4 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    local_150 = &local_cc;
    FUN_147905dbe(&local_158,param_1 + 0x26);
    local_168 = 0;
    uStack_160 = 0;
    local_170 = &local_158;
    (**(code **)(*(longlong *)*param_1 + 0x2c8))
              ((longlong *)*param_1,&local_d0,&local_cc,&local_170);
    FUN_147904428(&local_168);
    lVar8 = 0;
    if (*(int *)((longlong)param_1 + 300) != 0) {
      uVar3 = *(uint *)(param_1 + 0x25);
      lVar8 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar9 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar9 == (longlong *)0x0) ||
           (((int)plVar9[2] != *(int *)((longlong)param_1 + 300) ||
            ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) {
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar9;
        }
      }
    }
    local_178 = (undefined4)param_1[0x31];
    FUN_14094ddd6(lVar8 + 0x1c0,1,&local_168,lVar8 + 0x1d0);
    local_a8 = 0;
    local_a0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_9c = 0xffffffff00000080;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    lVar8 = *param_1;
    if (0 < *(int *)(lVar8 + 0x170)) {
      lVar12 = 0;
      iVar11 = 0;
      do {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar8 + 0x168) + lVar12);
        uVar3 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar10 = (uint)uVar4 & 0xffff;
        plVar9 = (longlong *)
                 FUN_14791cda4(&local_c8,
                               ((uint)uVar4 << 0x10 | uVar10) + (int)((ulonglong)uVar4 >> 0x20) +
                               (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar10 >> 4),
                               *(longlong *)(lVar8 + 0x168) + lVar12);
        uVar6 = uStack_160;
        FUN_1448262fc(local_168,uStack_160 & 0xffffffff);
        uVar5 = uStack_160 >> 0x20;
        uStack_160 = uStack_160 & 0xffffffff00000000;
        if (((longlong)uVar6 < 0) && ((int)uVar5 != 0)) {
          FUN_14052b4a8(&local_168,0);
        }
        FUN_1478df05e(*(longlong *)(lVar8 + 0x168) + lVar12 + 8,&local_d0,&local_cc,&local_170);
        local_78 = *plVar9;
        uStack_70 = plVar9[1];
        *plVar9 = local_168;
        plVar9[1] = uStack_160;
        iVar11 = iVar11 + 1;
        lVar12 = lVar12 + 0x18;
        local_168 = local_78;
        uStack_160 = uStack_70;
      } while (iVar11 < *(int *)(lVar8 + 0x170));
    }
    if (*(int *)((longlong)param_1 + 300) == 0) {
LAB_1433dbedb:
      lVar8 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x25);
      lVar8 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar9 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar9 == (longlong *)0x0) ||
           (((int)plVar9[2] != *(int *)((longlong)param_1 + 300) ||
            ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_1433dbedb;
        lVar8 = *plVar9;
      }
    }
    FUN_147921634(lVar8 + 0x1c0,1,&local_c8,(int)param_1[0x31]);
    local_80 = 0;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    FUN_147915730(&local_c8);
    FUN_1448262fc(local_168,uStack_160 & 0xffffffff);
    if (local_168 != 0) {
      FUN_1400020a8();
    }
    plVar9 = local_120;
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_120 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  cVar7 = FUN_147905e22(param_1,local_cc);
  if ((param_4 != 0) && (cVar7 != '\0')) {
    FUN_14790615e(param_1,param_4);
  }
LAB_1433dbaf4:
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433dbeea FUN_1433dbeea body=196 status=ok
// SIG undefined FUN_1433dbeea(void)

undefined8 *
FUN_1433dbeea(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98[0] = 0;
  local_94 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  if (0 < *(int *)(param_1 + 0x170)) {
    local_a0 = param_5;
    local_a8 = local_98;
    FUN_140e3f228(0,*(longlong *)(param_1 + 0x168) + 8);
  }
  puVar2 = local_88;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433dbfaf FUN_1433dbfaf body=55 status=ok
// SIG undefined FUN_1433dbfaf(void)

void FUN_1433dbfaf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbb50 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbb50 = FUN_14171c317(FUN_1463a4bdc,uVar1,L"EPinHidingMode");
  }
  return;
}



// FUNCTION 1433dbfe6 FUN_1433dbfe6 body=19 status=ok
// SIG undefined FUN_1433dbfe6(void)

undefined8 FUN_1433dbfe6(longlong *param_1)

{
  if (*param_1 != 0) {
    return *(undefined8 *)(*param_1 + 0x130);
  }
  return 0;
}



// FUNCTION 1433dbffa FUN_1433dbffa body=1 status=ok
// SIG undefined FUN_1433dbffa(void)

void FUN_1433dbffa(void)

{
  return;
}



// FUNCTION 1433dc002 FUN_1433dc002 body=4 status=ok
// SIG undefined FUN_1433dc002(void)

void FUN_1433dc002(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



// FUNCTION 1433dc006 FUN_1433dc006 body=4 status=ok
// SIG undefined FUN_1433dc006(void)

undefined8 FUN_1433dc006(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 1433dc00a FUN_1433dc00a body=55 status=ok
// SIG undefined FUN_1433dc00a(void)

void FUN_1433dc00a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbbc8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbbc8 = FUN_14171c317(FUN_1463a4d9a,uVar1,L"EAnimNodeDataFlags");
  }
  return;
}



// FUNCTION 1433dc041 FUN_1433dc041 body=373 status=ok
// SIG undefined FUN_1433dc041(void)

void FUN_1433dc041(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (*(short *)(*(longlong *)(param_1 + 0x18) + 0xb6) == 0x20)) {
    if (*param_2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(*param_2 + 0x130);
    }
    plVar2 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar2[1] = (longlong)&DAT_100000001;
    *plVar2 = (longlong)&PTR_FUN_14a7be080;
    local_50 = plVar2 + 2;
    plVar2[2] = (longlong)param_2;
    *(undefined4 *)(plVar2 + 3) = 3;
    if (plVar2 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      local_48 = plVar2;
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    local_38 = 0;
    local_40 = param_3;
    plVar3 = (longlong *)FUN_140721bac(*(undefined8 *)(lVar4 + 0x10));
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
    local_38 = *(undefined8 *)
                (*(longlong *)(*plVar3 + (longlong)*(int *)(*(longlong *)(param_3 + 8) + 0x20) * 8)
                + 0x70);
    FUN_140fbde72(param_1,lVar4,&local_50);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar2 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433dc1b7 FUN_1433dc1b7 body=55 status=ok
// SIG undefined FUN_1433dc1b7(void)

void FUN_1433dc1b7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbc38 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbc38 = FUN_14171c317(FUN_1463a4f56,uVar1,L"EAnimNodeReferenceConversionResult");
  }
  return;
}



// FUNCTION 1433dc1ee FUN_1433dc1ee body=2034 status=ok
// SIG undefined FUN_1433dc1ee(void)

void FUN_1433dc1ee(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_78;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  float local_68;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar9 = (longlong *)param_1[3];
  if (plVar9 != (longlong *)0x0) {
    uStack_84 = (undefined4)param_1[4];
    local_98 = (undefined4)*param_2;
    uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_90 = (undefined4)param_2[1];
    uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_88 = (undefined4)param_2[2];
    uStack_80 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_78 = *(float *)(param_2 + 4);
    uStack_74 = *(undefined8 *)((longlong)param_2 + 0x24);
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
    if ((plVar9[1] != 0) && (uVar1 = *(uint *)(plVar9[1] + 0x24), (uVar1 & 7) != 0)) {
      if (((uVar1 & 1) != 0) && (lVar6 = FUN_147906846(plVar9), *(longlong *)(lVar6 + 0x18) != 0)) {
        if (CONCAT44(uStack_94,local_98) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(CONCAT44(uStack_94,local_98) + 0x130);
        }
        uVar8 = FUN_1463a8172();
        uVar5 = FUN_140108626(uVar5,uVar8);
        iVar4 = FUN_14792d46c(uVar5,&local_98,plVar9);
        if (iVar4 == 1) {
          FUN_1433dc041(lVar6,&local_98,plVar9);
        }
      }
      lVar6 = param_1[3];
      if (((*(longlong *)(lVar6 + 8) != 0) &&
          ((*(byte *)(*(longlong *)(lVar6 + 8) + 0x24) & 2) != 0)) &&
         (lVar7 = FUN_1479069ec(lVar6), *(longlong *)(lVar7 + 0x18) != 0)) {
        if (CONCAT44(uStack_94,local_98) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(CONCAT44(uStack_94,local_98) + 0x130);
        }
        uVar8 = FUN_1463a8172();
        uVar5 = FUN_140108626(uVar5,uVar8);
        FUN_14792d318(uVar5,&local_68,&local_98,lVar6);
        if ((local_68 <= 1e-05) && (1e-05 < local_64)) {
          FUN_1433dc041(lVar7,&local_98,lVar6);
        }
      }
      plVar9 = (longlong *)param_1[3];
      if ((plVar9[1] != 0) && ((*(byte *)(plVar9[1] + 0x24) & 4) != 0)) {
        uVar5 = FUN_147906b92(plVar9);
        FUN_1433dc041(uVar5,&local_98,plVar9);
        plVar9 = (longlong *)param_1[3];
      }
    }
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_98);
  }
  plVar9 = (longlong *)*param_2;
  iVar4 = (**(code **)(*param_1 + 0x98))(param_1);
  if ((iVar4 != -1) && (iVar4 < (int)plVar9[0xd6])) goto LAB_1433dc567;
  bVar3 = *(byte *)(param_1 + 2);
  if ((bVar3 & 1) == 0) {
    uVar5 = (**(code **)(*param_1 + 8))(param_1);
    cVar2 = (**(code **)(*plVar9 + 0xc0))(plVar9,uVar5,(longlong)param_1 + 0x11);
    bVar3 = (cVar2 * '\x02' | *(byte *)(param_1 + 2) & 0xfc) + 1;
    *(byte *)(param_1 + 2) = bVar3;
  }
  if (((bVar3 & 2) != 0) &&
     (cVar2 = (**(code **)(*plVar9 + 0xb8))(plVar9,*(undefined1 *)((longlong)param_1 + 0x11)),
     cVar2 == '\0')) goto LAB_1433dc567;
  uVar5 = FUN_14477dc2a(param_1);
  plVar9 = param_2;
  FUN_14477dadc(uVar5,param_2);
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  cVar2 = (char)param_1[7];
  if (cVar2 == '\x02') {
    lVar6 = *(longlong *)(*param_2 + 0x130);
    if (lVar6 != 0) {
      lVar7 = FUN_1402e44f4();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        fVar10 = *(float *)(param_2 + 5);
        fVar11 = (float)FUN_144945460(lVar6,param_1[0x12]);
        if ((char)param_1[0x14] == '\x01') {
          fVar12 = *(float *)(param_1 + 0x15) - *(float *)((longlong)param_1 + 0xa4);
          if (ABS(fVar12) <= 1e-08) {
            fVar12 = (float)(-(uint)(*(float *)(param_1 + 0x15) <= fVar11) & 0x3f800000);
          }
          else {
            fVar12 = (fVar11 - *(float *)((longlong)param_1 + 0xa4)) / fVar12;
          }
          fVar11 = (*(float *)(param_1 + 0x16) - *(float *)((longlong)param_1 + 0xac)) * fVar12 +
                   *(float *)((longlong)param_1 + 0xac);
        }
        fVar11 = fVar11 * *(float *)((longlong)param_1 + 0xb4) + *(float *)(param_1 + 0x17);
        if (*(char *)((longlong)param_1 + 0xa1) == '\x01') {
          if (*(float *)(param_1 + 0x18) <= fVar11) {
            fVar11 = *(float *)(param_1 + 0x18);
          }
          if (fVar11 <= *(float *)((longlong)param_1 + 0xbc)) {
            fVar11 = *(float *)((longlong)param_1 + 0xbc);
          }
        }
        if (*(char *)((longlong)param_1 + 0xa2) == '\x01') {
          if (*(char *)((longlong)param_1 + 0xa3) == '\x01') {
            fVar12 = *(float *)((longlong)param_1 + 0xcc);
            fVar14 = *(float *)((longlong)param_1 + (ulonglong)(fVar11 < fVar12) * 4 + 0xc4);
            if ((0.0 < fVar14) && (fVar13 = fVar11 - fVar12, 1e-08 <= fVar13 * fVar13)) {
              fVar10 = fVar10 * fVar14;
              if (1.0 <= fVar10) {
                fVar10 = 1.0;
              }
              if (fVar10 <= 0.0) {
                fVar10 = 0.0;
              }
              fVar11 = fVar12 + fVar13 * fVar10;
            }
          }
          goto LAB_1433dc49a;
        }
        goto LAB_1433dc4a2;
      }
    }
  }
  else {
    if (cVar2 == '\x01') {
      fVar11 = (float)FUN_1447f0fd6(param_1 + 9,
                                    CONCAT71((int7)((ulonglong)plVar9 >> 8),(char)param_1[8]) &
                                    0xffffffffffffff01,(int)param_2[5]);
    }
    else {
      if (cVar2 != '\0') goto LAB_1433dc4b1;
      fVar10 = *(float *)((longlong)param_1 + 0x3c) * *(float *)(param_1 + 0x13) +
               *(float *)((longlong)param_1 + 0x9c);
      if (1.0 <= fVar10) {
        fVar10 = 1.0;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      if ((char)param_1[0x14] == '\x01') {
        fVar11 = *(float *)(param_1 + 0x15) - *(float *)((longlong)param_1 + 0xa4);
        if (ABS(fVar11) <= 1e-08) {
          fVar11 = (float)(-(uint)(*(float *)(param_1 + 0x15) <= fVar10) & 0x3f800000);
        }
        else {
          fVar11 = (fVar10 - *(float *)((longlong)param_1 + 0xa4)) / fVar11;
        }
        fVar10 = (*(float *)(param_1 + 0x16) - *(float *)((longlong)param_1 + 0xac)) * fVar11 +
                 *(float *)((longlong)param_1 + 0xac);
      }
      fVar11 = fVar10 * *(float *)((longlong)param_1 + 0xb4) + *(float *)(param_1 + 0x17);
      if (*(char *)((longlong)param_1 + 0xa1) == '\x01') {
        if (*(float *)(param_1 + 0x18) <= fVar11) {
          fVar11 = *(float *)(param_1 + 0x18);
        }
        if (fVar11 <= *(float *)((longlong)param_1 + 0xbc)) {
          fVar11 = *(float *)((longlong)param_1 + 0xbc);
        }
      }
      if (*(char *)((longlong)param_1 + 0xa2) == '\x01') {
        if (*(char *)((longlong)param_1 + 0xa3) == '\x01') {
          fVar10 = *(float *)((longlong)param_1 + 0xcc);
          fVar12 = *(float *)((longlong)param_1 + (ulonglong)(fVar11 < fVar10) * 4 + 0xc4);
          if ((0.0 < fVar12) && (fVar14 = fVar11 - fVar10, 1e-08 <= fVar14 * fVar14)) {
            fVar12 = fVar12 * *(float *)(param_2 + 5);
            if (1.0 <= fVar12) {
              fVar12 = 1.0;
            }
            if (fVar12 <= 0.0) {
              fVar12 = 0.0;
            }
            fVar11 = fVar10 + fVar14 * fVar12;
          }
        }
LAB_1433dc49a:
        *(float *)((longlong)param_1 + 0xcc) = fVar11;
      }
LAB_1433dc4a2:
      *(undefined1 *)((longlong)param_1 + 0xa3) = 1;
    }
    *(float *)((longlong)param_1 + 0xd4) = fVar11;
  }
LAB_1433dc4b1:
  fVar10 = *(float *)((longlong)param_1 + 0xd4);
  if (1.0 <= fVar10) {
    fVar10 = 1.0;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  *(float *)((longlong)param_1 + 0xd4) = fVar10;
  if ((char)param_1[0x1b] == '\x01') {
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    fVar10 = 1.0 - fVar10;
    *(float *)((longlong)param_1 + 0xd4) = fVar10;
  }
  if ((1e-05 < fVar10) && (plVar9 = (longlong *)param_1[5], plVar9 != (longlong *)0x0)) {
    local_78 = fVar10 * *(float *)(param_2 + 4);
    uStack_84 = (undefined4)param_1[6];
    local_98 = (undefined4)*param_2;
    uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_90 = (undefined4)param_2[1];
    uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_88 = (undefined4)param_2[2];
    uStack_80 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_74 = *(undefined8 *)((longlong)param_2 + 0x24);
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
    if ((plVar9[1] != 0) && (uVar1 = *(uint *)(plVar9[1] + 0x24), (uVar1 & 7) != 0)) {
      if (((uVar1 & 1) != 0) && (lVar6 = FUN_147906846(plVar9), *(longlong *)(lVar6 + 0x18) != 0)) {
        if (CONCAT44(uStack_94,local_98) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(CONCAT44(uStack_94,local_98) + 0x130);
        }
        uVar8 = FUN_1463a8172();
        uVar5 = FUN_140108626(uVar5,uVar8);
        iVar4 = FUN_14792d46c(uVar5,&local_98,plVar9);
        if (iVar4 == 1) {
          FUN_1433dc041(lVar6,&local_98,plVar9);
        }
      }
      lVar6 = param_1[5];
      if (((*(longlong *)(lVar6 + 8) != 0) &&
          ((*(byte *)(*(longlong *)(lVar6 + 8) + 0x24) & 2) != 0)) &&
         (lVar7 = FUN_1479069ec(lVar6), *(longlong *)(lVar7 + 0x18) != 0)) {
        if (CONCAT44(uStack_94,local_98) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(CONCAT44(uStack_94,local_98) + 0x130);
        }
        uVar8 = FUN_1463a8172();
        uVar5 = FUN_140108626(uVar5,uVar8);
        FUN_14792d318(uVar5,&local_68,&local_98,lVar6);
        if ((local_68 <= 1e-05) && (1e-05 < local_64)) {
          FUN_1433dc041(lVar7,&local_98,lVar6);
        }
      }
      plVar9 = (longlong *)param_1[5];
      if ((plVar9[1] != 0) && ((*(byte *)(plVar9[1] + 0x24) & 4) != 0)) {
        uVar5 = FUN_147906b92(plVar9);
        FUN_1433dc041(uVar5,&local_98,plVar9);
        plVar9 = (longlong *)param_1[5];
      }
    }
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_98);
  }
LAB_1433dc567:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433dca10 FUN_1433dca10 body=69 status=ok
// SIG undefined FUN_1433dca10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433dca10(void)

{
  _DAT_14cacbcf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433dca52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacbcf8,1);
  return;
}



// FUNCTION 1433dca56 FUN_1433dca56 body=7252 status=ok
// SIG undefined FUN_1433dca56(void)

void FUN_1433dca56(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  int iVar9;
  double dVar10;
  longlong lVar11;
  double dVar12;
  int iVar13;
  undefined8 uVar14;
  char cVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  float *pfVar27;
  longlong *plVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  double dVar40;
  float fVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  float fVar49;
  double dVar50;
  double dVar51;
  undefined1 auStack_258 [32];
  double local_238;
  longlong *local_230;
  longlong *local_228;
  double local_220;
  double local_218;
  longlong *local_210;
  longlong *local_208;
  longlong *local_200;
  longlong *local_1f8;
  double local_1f0;
  double local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  double local_1a8;
  double dStack_1a0;
  float local_198;
  float fStack_194;
  float local_190;
  undefined4 uStack_18c;
  double local_188;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  lVar26 = param_2[2];
  iVar25 = 0;
  if (*(int *)(lVar26 + 0x44) == 0) {
LAB_1433de64c:
    lVar22 = 0;
  }
  else {
    uVar8 = *(uint *)(lVar26 + 0x40);
    lVar22 = 0;
    if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
      plVar19 = (longlong *)
                ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
      if ((plVar19 == (longlong *)0x0) ||
         (((int)plVar19[2] != *(int *)(lVar26 + 0x44) ||
          ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)))) goto LAB_1433de64c;
      lVar22 = *plVar19;
    }
  }
  local_230 = (longlong *)(param_1 + 0x3e0);
  local_198 = -NAN;
  local_228 = param_2;
  local_210 = param_3;
  FUN_1448156a8(local_230,&local_198,*(undefined4 *)(lVar22 + 0x78));
  uVar8 = *(uint *)(local_228 + 1);
  if ((ulonglong)uVar8 != 0) {
    uVar20 = 0;
    iVar25 = 0;
    do {
      lVar22 = (longlong)*(int *)(*(longlong *)(lVar26 + 0x70) + uVar20 * 4);
      if (((lVar22 != -1) && (*(int *)(*(longlong *)(param_6 + 0xd0) + lVar22 * 4) != -1)) &&
         (*(int *)(*(longlong *)(param_5 + 0xd0) + lVar22 * 4) != -1)) {
        *(int *)(*local_230 + lVar22 * 4) = iVar25;
        iVar25 = iVar25 + 1;
      }
      uVar20 = uVar20 + 1;
    } while (uVar8 != uVar20);
    if (iVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar25);
    }
  }
  plVar19 = (longlong *)(param_1 + 0x3f0);
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  iVar13 = iVar25;
  local_1e0 = param_4;
  if (*(int *)(param_1 + 0x3fc) != iVar25) {
    FUN_1447a8aa0(plVar19,iVar25);
  }
  for (; iVar13 != 0; iVar13 = iVar13 + -1) {
    iVar9 = *(int *)(param_1 + 0x3f8);
    *(uint *)(param_1 + 0x3f8) = iVar9 + 1U;
    if (*(uint *)(param_1 + 0x3fc) < iVar9 + 1U) {
      FUN_1403e3958(plVar19,iVar9);
    }
    lVar22 = *plVar19;
    *(undefined8 *)(lVar22 + 0x10 + (longlong)iVar9 * 0x18) = DAT_14c8464f0;
    uVar14 = DAT_14c8464e8;
    puVar17 = (undefined8 *)(lVar22 + (longlong)iVar9 * 0x18);
    *puVar17 = DAT_14c8464e0;
    puVar17[1] = uVar14;
  }
  local_1b8 = (longlong *)(param_1 + 0x400);
  local_1b0 = plVar19;
  FUN_144815716(local_1b8,iVar25);
  FUN_147908078(param_1 + 0x410,0x14c846340,iVar25);
  plVar19 = (longlong *)(param_1 + 0x420);
  *(undefined4 *)(param_1 + 0x428) = 0;
  iVar13 = iVar25;
  if (*(int *)(param_1 + 0x42c) != iVar25) {
    FUN_1447a8aa0(plVar19,iVar25);
  }
  for (; iVar13 != 0; iVar13 = iVar13 + -1) {
    iVar9 = *(int *)(param_1 + 0x428);
    *(uint *)(param_1 + 0x428) = iVar9 + 1U;
    if (*(uint *)(param_1 + 0x42c) < iVar9 + 1U) {
      FUN_1403e3958(plVar19,iVar9);
    }
    lVar22 = *plVar19;
    *(undefined8 *)(lVar22 + 0x10 + (longlong)iVar9 * 0x18) = DAT_14c846520;
    uVar14 = DAT_14c846518;
    puVar17 = (undefined8 *)(lVar22 + (longlong)iVar9 * 0x18);
    *puVar17 = DAT_14c846510;
    puVar17[1] = uVar14;
  }
  local_1f8 = (longlong *)(param_1 + 0x430);
  FUN_144815938(local_1f8,&DAT_14c846330,iVar25);
  local_200 = (longlong *)(param_1 + 0x440);
  FUN_144815938(local_200,&DAT_14c846330,iVar25);
  local_208 = (longlong *)(param_1 + 0x450);
  FUN_144815938(local_208,&DAT_14c846330,iVar25);
  local_198 = *(float *)(param_1 + 0x8c);
  local_190 = DAT_14c846358 * local_198;
  fStack_194 = DAT_14c846350._4_4_ * local_198;
  local_198 = local_198 * (float)DAT_14c846350;
  FUN_144815938(param_1 + 0x460,&local_198,iVar25);
  local_198 = *(float *)(param_1 + 0x8c);
  local_190 = DAT_14c846358 * local_198;
  fStack_194 = DAT_14c846350._4_4_ * local_198;
  local_198 = local_198 * (float)DAT_14c846350;
  FUN_144815938(param_1 + 0x470,&local_198,iVar25);
  local_198 = *(float *)(param_1 + 0x8c);
  local_190 = DAT_14c846358 * local_198;
  fStack_194 = DAT_14c846350._4_4_ * local_198;
  local_198 = local_198 * (float)DAT_14c846350;
  local_1d8 = (longlong *)(param_1 + 0x480);
  FUN_144815938(local_1d8,&local_198,iVar25);
  uVar8 = *(uint *)(local_228 + 1);
  if ((ulonglong)uVar8 != 0) {
    lVar22 = 0x50;
    uVar20 = 0;
    plVar28 = local_230;
    do {
      lVar21 = (longlong)*(int *)(*(longlong *)(lVar26 + 0x70) + uVar20 * 4);
      if (((lVar21 != -1) &&
          (lVar16 = (longlong)*(int *)(*(longlong *)(param_6 + 0xd0) + lVar21 * 4), lVar16 != -1))
         && (lVar23 = (longlong)*(int *)(*(longlong *)(param_5 + 0xd0) + lVar21 * 4), lVar23 != -1))
      {
        lVar29 = (longlong)*(int *)(*plVar28 + lVar21 * 4);
        lVar11 = lVar16 * 0x18;
        lVar21 = *(longlong *)(param_6 + 0xe0);
        dVar42 = *(double *)(lVar21 + lVar11);
        dVar36 = *(double *)(lVar21 + 8 + lVar11);
        dVar34 = *(double *)(lVar21 + 0x10 + lVar11);
        pdVar1 = (double *)(*(longlong *)(param_6 + 0xf0) + lVar16 * 0x20);
        dVar4 = *pdVar1;
        dVar5 = pdVar1[1];
        pdVar1 = (double *)(*(longlong *)(param_6 + 0xf0) + 0x10 + lVar16 * 0x20);
        dVar50 = *pdVar1;
        dVar51 = pdVar1[1];
        lVar21 = *(longlong *)(param_6 + 0x100);
        local_238 = *(double *)(lVar21 + lVar11);
        local_218 = *(double *)(lVar21 + 8 + lVar11);
        local_220 = *(double *)(lVar21 + 0x10 + lVar11);
        lVar21 = *local_1b0;
        lVar16 = lVar29 * 0x18;
        *(double *)(lVar21 + lVar16) = dVar42;
        *(double *)(lVar21 + 8 + lVar16) = dVar36;
        *(double *)(lVar21 + 0x10 + lVar16) = dVar34;
        lVar21 = *local_1b8;
        pdVar1 = (double *)(lVar21 + lVar29 * 0x20);
        *pdVar1 = dVar4;
        pdVar1[1] = dVar5;
        pdVar1 = (double *)(lVar21 + 0x10 + lVar29 * 0x20);
        *pdVar1 = dVar50;
        pdVar1[1] = dVar51;
        lVar21 = *plVar19;
        *(double *)(lVar21 + lVar16) = local_238;
        *(double *)(lVar21 + 8 + lVar16) = local_218;
        *(double *)(lVar21 + 0x10 + lVar16) = local_220;
        if (1e-08 < *(float *)(param_6 + 0x148)) {
          lVar11 = lVar23 * 0x18;
          lVar21 = *(longlong *)(param_5 + 0xe0);
          pdVar1 = (double *)(*(longlong *)(param_5 + 0xf0) + lVar23 * 0x20);
          dVar6 = *pdVar1;
          dVar12 = pdVar1[1];
          lVar16 = *(longlong *)(param_5 + 0x100);
          local_1f0 = *(double *)(lVar16 + lVar11);
          local_1e8 = *(double *)(lVar16 + 8 + lVar11);
          dVar2 = *(double *)(lVar21 + 0x10 + lVar11);
          pdVar1 = (double *)(*(longlong *)(param_5 + 0xf0) + 0x10 + lVar23 * 0x20);
          dVar40 = *pdVar1 * -1.0;
          dVar10 = pdVar1[1] * 1.0;
          dVar3 = *(double *)(lVar21 + 8 + lVar11);
          dVar35 = *(double *)(lVar16 + 0x10 + lVar11);
          uVar43 = SUB84(dVar35,0);
          uVar44 = (undefined4)((ulonglong)dVar35 >> 0x20);
          local_118 = (dVar40 * dVar5 + (dVar4 * dVar10 * 1.0 - dVar51 * dVar6)) -
                      dVar12 * dVar50 * -1.0;
          local_110 = (dVar10 * dVar5 + (dVar4 * dVar40 * -1.0 - dVar51 * dVar12)) -
                      dVar6 * dVar50 * 1.0;
          local_108 = dVar10 * dVar50 * 1.0 +
                      dVar5 * dVar6 + (dVar51 * dVar40 - dVar4 * dVar12 * 1.0);
          dVar40 = dVar40 * dVar50 * -1.0 +
                   dVar5 * dVar12 + (dVar51 * dVar10 - dVar4 * dVar6 * -1.0);
          uVar31 = -(ulonglong)
                    (0.0 <= DAT_14c8463e8 * dVar40 +
                            DAT_14c8463e0 * local_108 +
                            DAT_14c8463d0 * local_118 + DAT_14c8463d8 * local_110);
          local_100 = (double)(~uVar31 & 0xbff0000000000000 | uVar31 & 0x3ff0000000000000);
          local_118 = local_118 * local_100;
          local_110 = local_110 * local_100;
          local_108 = local_108 * local_100;
          local_100 = local_100 * dVar40;
          dVar40 = 1.0 / (double)*(float *)(param_6 + 0x148);
          lVar16 = *(longlong *)(param_1 + 0x430);
          lVar23 = lVar29 * 0xc;
          *(float *)(lVar16 + lVar23) = (float)(dVar40 * (dVar42 - *(double *)(lVar21 + lVar11)));
          *(float *)(lVar16 + 4 + lVar23) = (float)((dVar36 - dVar3) * dVar40);
          *(float *)(lVar16 + 8 + lVar23) = (float)((dVar34 - dVar2) * dVar40);
          local_1d0 = dVar34;
          local_1c8 = dVar42;
          local_1c0 = dVar36;
          local_1a8 = dVar4;
          dStack_1a0 = dVar5;
          FUN_14093ab46(&local_118,&local_198);
          dVar42 = 1.0 / (double)*(float *)(param_6 + 0x148);
          lVar21 = *(longlong *)(param_1 + 0x440);
          *(float *)(lVar21 + lVar23) =
               (float)(dVar42 * ((double)CONCAT44(fStack_194,local_198) +
                                (double)CONCAT44(fStack_194,local_198)));
          *(float *)(lVar21 + 4 + lVar23) =
               (float)(((double)CONCAT44(uStack_18c,local_190) +
                       (double)CONCAT44(uStack_18c,local_190)) * dVar42);
          *(float *)(lVar21 + 8 + lVar23) = (float)((local_188 + local_188) * dVar42);
          if (*(char *)(param_1 + 0x54) == '\x01') {
            dVar42 = local_238 - local_1f0;
            dVar36 = local_218 - local_1e8;
            dVar35 = local_220 - dVar35;
          }
          else {
            dVar42 = local_1f0;
            if (local_1f0 <= 9.99999993922529e-09) {
              dVar42 = 9.99999993922529e-09;
            }
            dVar42 = local_238 / dVar42;
            dVar36 = local_1e8;
            if (local_1e8 <= 9.99999993922529e-09) {
              dVar36 = 9.99999993922529e-09;
            }
            dVar36 = local_218 / dVar36;
            if (dVar35 <= 9.99999993922529e-09) {
              uVar43 = 0xe0000000;
              uVar44 = 0x3e45798e;
            }
            dVar34 = local_220 / (double)CONCAT44(uVar44,uVar43);
            if (dVar34 <= 9.99999993922529e-09) {
              dVar34 = 9.99999993922529e-09;
            }
            dVar35 = log(dVar34);
            if (dVar36 <= 9.99999993922529e-09) {
              dVar36 = 9.99999993922529e-09;
            }
            dVar36 = log(dVar36);
            if (dVar42 <= 9.99999993922529e-09) {
              dVar42 = 9.99999993922529e-09;
            }
            dVar42 = log(dVar42);
          }
          dVar34 = 1.0 / (double)*(float *)(param_6 + 0x148);
          lVar21 = *(longlong *)(param_1 + 0x450);
          *(float *)(lVar21 + lVar29 * 0xc) = (float)(dVar34 * dVar42);
          *(float *)(lVar21 + 4 + lVar29 * 0xc) = (float)(dVar36 * dVar34);
          *(float *)(lVar21 + 8 + lVar29 * 0xc) = (float)(dVar35 * dVar34);
          fVar39 = *(float *)(param_1 + 0x94);
          if (0.0001 <= fVar39) {
            lVar21 = *local_1f8;
            fVar38 = *(float *)(lVar21 + lVar29 * 0xc);
            fVar33 = *(float *)(lVar21 + 4 + lVar29 * 0xc);
            fVar37 = *(float *)(lVar21 + 8 + lVar29 * 0xc);
            fVar41 = fVar37 * fVar37 + fVar38 * fVar38 + fVar33 * fVar33;
            if (fVar39 * fVar39 < fVar41) {
              fVar39 = fVar39 * (1.0 / SQRT(fVar41));
              fVar37 = fVar37 * fVar39;
              fVar33 = fVar33 * fVar39;
              fVar38 = fVar38 * fVar39;
            }
          }
          else {
            lVar21 = *local_1f8;
            fVar37 = DAT_14c846338;
            fVar38 = (float)DAT_14c846330;
            fVar33 = DAT_14c846330._4_4_;
          }
          *(float *)(lVar21 + lVar29 * 0xc) = fVar38;
          *(float *)(lVar21 + 4 + lVar29 * 0xc) = fVar33;
          *(float *)(lVar21 + 8 + lVar29 * 0xc) = fVar37;
          fVar39 = *(float *)(param_1 + 0x98) * 0.017453292;
          if (0.0001 <= fVar39) {
            lVar21 = *local_200;
            fVar38 = *(float *)(lVar21 + lVar29 * 0xc);
            fVar33 = *(float *)(lVar21 + 4 + lVar29 * 0xc);
            fVar37 = *(float *)(lVar21 + 8 + lVar29 * 0xc);
            fVar41 = fVar37 * fVar37 + fVar38 * fVar38 + fVar33 * fVar33;
            if (fVar39 * fVar39 < fVar41) {
              fVar39 = fVar39 * (1.0 / SQRT(fVar41));
              fVar37 = fVar37 * fVar39;
              fVar33 = fVar33 * fVar39;
              fVar38 = fVar38 * fVar39;
            }
          }
          else {
            lVar21 = *local_200;
            fVar37 = DAT_14c846338;
            fVar38 = (float)DAT_14c846330;
            fVar33 = DAT_14c846330._4_4_;
          }
          *(float *)(lVar21 + lVar29 * 0xc) = fVar38;
          *(float *)(lVar21 + 4 + lVar29 * 0xc) = fVar33;
          *(float *)(lVar21 + 8 + lVar29 * 0xc) = fVar37;
          fVar39 = *(float *)(param_1 + 0x9c);
          if (0.0001 <= fVar39) {
            lVar21 = *local_208;
            fVar38 = *(float *)(lVar21 + lVar29 * 0xc);
            fVar33 = *(float *)(lVar21 + 4 + lVar29 * 0xc);
            fVar37 = *(float *)(lVar21 + 8 + lVar29 * 0xc);
            fVar41 = fVar37 * fVar37 + fVar38 * fVar38 + fVar33 * fVar33;
            if (fVar39 * fVar39 < fVar41) {
              fVar39 = fVar39 * (1.0 / SQRT(fVar41));
              fVar37 = fVar37 * fVar39;
              fVar33 = fVar33 * fVar39;
              fVar38 = fVar38 * fVar39;
            }
          }
          else {
            lVar21 = *local_208;
            fVar37 = DAT_14c846338;
            fVar38 = (float)DAT_14c846330;
            fVar33 = DAT_14c846330._4_4_;
          }
          *(float *)(lVar21 + lVar23) = fVar38;
          *(float *)(lVar21 + 4 + lVar23) = fVar33;
          *(float *)(lVar21 + 8 + lVar23) = fVar37;
          lVar21 = *local_228;
          pdVar1 = (double *)(lVar21 + -0x38 + lVar22);
          dVar42 = *pdVar1;
          dVar36 = *pdVar1;
          pdVar1 = (double *)(lVar21 + -0x50 + lVar22);
          dVar34 = *pdVar1;
          dVar4 = *pdVar1;
          pdVar1 = (double *)(lVar21 + -0x48 + lVar22);
          dVar2 = *pdVar1;
          dVar5 = *pdVar1;
          dVar50 = dVar50 * -1.0;
          dVar51 = dVar51 * 1.0;
          pdVar1 = (double *)(lVar21 + -0x40 + lVar22);
          dVar35 = *pdVar1;
          dVar3 = *pdVar1;
          dVar40 = *(double *)(lVar21 + lVar22);
          dVar10 = *(double *)(lVar21 + -8 + lVar22);
          dVar6 = *(double *)(lVar21 + -0x10 + lVar22);
          local_138 = (dVar50 * dVar2 + (dVar51 * dVar34 * 1.0 - dVar42 * local_1a8)) -
                      dStack_1a0 * dVar35 * -1.0;
          dStack_130 = (dVar51 * dVar5 + (dVar50 * dVar4 * -1.0 - dVar36 * dStack_1a0)) -
                       local_1a8 * dVar3 * 1.0;
          local_128 = dVar51 * dVar35 * 1.0 +
                      local_1a8 * dVar2 + (dVar50 * dVar42 - dVar34 * dStack_1a0 * 1.0);
          dVar42 = dVar50 * dVar3 * -1.0 +
                   dStack_1a0 * dVar5 + (dVar51 * dVar36 - dVar4 * local_1a8 * -1.0);
          uVar31 = -(ulonglong)
                    (0.0 <= DAT_14c8463e8 * dVar42 +
                            DAT_14c8463e0 * local_128 +
                            DAT_14c8463d0 * local_138 + DAT_14c8463d8 * dStack_130);
          dStack_120 = (double)(~uVar31 & 0xbff0000000000000 | uVar31 & 0x3ff0000000000000);
          local_138 = local_138 * dStack_120;
          dStack_130 = dStack_130 * dStack_120;
          local_128 = local_128 * dStack_120;
          dStack_120 = dStack_120 * dVar42;
          fVar39 = *(float *)(param_1 + 0x90);
          fVar38 = *(float *)(param_1 + 0x88);
          fVar33 = *(float *)(param_1 + 0x8c);
          lVar16 = *(longlong *)(param_1 + 0x430);
          fVar37 = *(float *)(lVar16 + lVar23);
          fVar41 = *(float *)(lVar16 + 4 + lVar23);
          fVar32 = *(float *)(lVar16 + 8 + lVar23);
          if ((fVar32 < 0.0) || (fVar49 = 0.0001, 0.0001 <= fVar32)) {
            fVar49 = -0.0001;
            if (fVar32 <= -0.0001) {
              fVar49 = fVar32;
            }
            fVar49 = (float)(~-(uint)(fVar32 < 0.0) & (uint)fVar32 |
                            (uint)fVar49 & -(uint)(fVar32 < 0.0));
          }
          if ((fVar41 < 0.0) || (fVar32 = 0.0001, 0.0001 <= fVar41)) {
            fVar32 = -0.0001;
            if (fVar41 <= -0.0001) {
              fVar32 = fVar41;
            }
            fVar32 = (float)(~-(uint)(fVar41 < 0.0) & (uint)fVar41 |
                            (uint)fVar32 & -(uint)(fVar41 < 0.0));
          }
          if ((fVar37 < 0.0) || (fVar41 = 0.0001, 0.0001 <= fVar37)) {
            fVar41 = -0.0001;
            if (fVar37 <= -0.0001) {
              fVar41 = fVar37;
            }
            fVar41 = (float)(~-(uint)(fVar37 < 0.0) & (uint)fVar37 |
                            (uint)fVar41 & -(uint)(fVar37 < 0.0));
          }
          fVar37 = ((float)(*(double *)(lVar21 + -0x28 + lVar22) - local_1c0) / fVar32) * fVar38;
          if (fVar39 <= fVar37) {
            fVar37 = fVar39;
          }
          if (fVar37 <= fVar33) {
            fVar37 = fVar33;
          }
          fVar32 = ((float)(*(double *)(lVar21 + -0x20 + lVar22) - local_1d0) / fVar49) * fVar38;
          if (fVar39 <= fVar32) {
            fVar32 = fVar39;
          }
          if (fVar32 <= fVar33) {
            fVar32 = fVar33;
          }
          fVar38 = ((float)(*(double *)(lVar21 + -0x30 + lVar22) - local_1c8) / fVar41) * fVar38;
          if (fVar39 <= fVar38) {
            fVar38 = fVar39;
          }
          if (fVar38 <= fVar33) {
            fVar38 = fVar33;
          }
          lVar21 = *(longlong *)(param_1 + 0x460);
          *(float *)(lVar21 + lVar23) = fVar38;
          *(float *)(lVar21 + 4 + lVar23) = fVar37;
          *(float *)(lVar21 + 8 + lVar23) = fVar32;
          fVar39 = *(float *)(param_1 + 0x90);
          fVar38 = *(float *)(param_1 + 0x88);
          fVar33 = *(float *)(param_1 + 0x8c);
          lVar21 = *(longlong *)(param_1 + 0x440);
          fVar37 = *(float *)(lVar21 + lVar23);
          fVar41 = *(float *)(lVar21 + 4 + lVar23);
          fVar32 = *(float *)(lVar21 + 8 + lVar23);
          FUN_14093ab46(&local_138,&local_198);
          if ((fVar32 < 0.0) || (fVar49 = 0.0001, 0.0001 <= fVar32)) {
            fVar49 = -0.0001;
            if (fVar32 <= -0.0001) {
              fVar49 = fVar32;
            }
            fVar49 = (float)(~-(uint)(fVar32 < 0.0) & (uint)fVar32 |
                            (uint)fVar49 & -(uint)(fVar32 < 0.0));
          }
          if ((fVar41 < 0.0) || (fVar32 = 0.0001, 0.0001 <= fVar41)) {
            fVar32 = -0.0001;
            if (fVar41 <= -0.0001) {
              fVar32 = fVar41;
            }
            fVar32 = (float)(~-(uint)(fVar41 < 0.0) & (uint)fVar41 |
                            (uint)fVar32 & -(uint)(fVar41 < 0.0));
          }
          if ((fVar37 < 0.0) || (fVar41 = 0.0001, 0.0001 <= fVar37)) {
            fVar41 = -0.0001;
            if (fVar37 <= -0.0001) {
              fVar41 = fVar37;
            }
            fVar41 = (float)(~-(uint)(fVar37 < 0.0) & (uint)fVar37 |
                            (uint)fVar41 & -(uint)(fVar37 < 0.0));
          }
          fVar37 = ((float)((double)CONCAT44(uStack_18c,local_190) +
                           (double)CONCAT44(uStack_18c,local_190)) / fVar32) * fVar38;
          if (fVar39 <= fVar37) {
            fVar37 = fVar39;
          }
          if (fVar37 <= fVar33) {
            fVar37 = fVar33;
          }
          fVar32 = ((float)(local_188 + local_188) / fVar49) * fVar38;
          if (fVar39 <= fVar32) {
            fVar32 = fVar39;
          }
          if (fVar32 <= fVar33) {
            fVar32 = fVar33;
          }
          fVar38 = ((float)((double)CONCAT44(fStack_194,local_198) +
                           (double)CONCAT44(fStack_194,local_198)) / fVar41) * fVar38;
          if (fVar39 <= fVar38) {
            fVar38 = fVar39;
          }
          if (fVar38 <= fVar33) {
            fVar38 = fVar33;
          }
          lVar21 = *(longlong *)(param_1 + 0x470);
          *(float *)(lVar21 + lVar23) = fVar38;
          *(float *)(lVar21 + 4 + lVar23) = fVar37;
          *(float *)(lVar21 + 8 + lVar23) = fVar32;
          fVar39 = *(float *)(param_1 + 0x90);
          fVar38 = *(float *)(param_1 + 0x88);
          fVar33 = *(float *)(param_1 + 0x8c);
          lVar21 = *(longlong *)(param_1 + 0x450);
          fVar37 = *(float *)(lVar21 + lVar23);
          fVar41 = *(float *)(lVar21 + 4 + lVar23);
          fVar32 = *(float *)(lVar21 + 8 + lVar23);
          if ((fVar32 < 0.0) || (fVar49 = 0.0001, 0.0001 <= fVar32)) {
            fVar49 = -0.0001;
            if (fVar32 <= -0.0001) {
              fVar49 = fVar32;
            }
            fVar49 = (float)(~-(uint)(fVar32 < 0.0) & (uint)fVar32 |
                            (uint)fVar49 & -(uint)(fVar32 < 0.0));
          }
          if ((fVar41 < 0.0) || (fVar32 = 0.0001, 0.0001 <= fVar41)) {
            fVar32 = -0.0001;
            if (fVar41 <= -0.0001) {
              fVar32 = fVar41;
            }
            fVar32 = (float)(~-(uint)(fVar41 < 0.0) & (uint)fVar41 |
                            (uint)fVar32 & -(uint)(fVar41 < 0.0));
          }
          if ((fVar37 < 0.0) || (fVar41 = 0.0001, 0.0001 <= fVar37)) {
            fVar41 = -0.0001;
            if (fVar37 <= -0.0001) {
              fVar41 = fVar37;
            }
            fVar41 = (float)(~-(uint)(fVar37 < 0.0) & (uint)fVar37 |
                            (uint)fVar41 & -(uint)(fVar37 < 0.0));
          }
          dVar42 = local_220;
          if (local_220 <= 9.99999993922529e-09) {
            dVar42 = 9.99999993922529e-09;
          }
          dVar36 = local_218;
          if (local_218 <= 9.99999993922529e-09) {
            dVar36 = 9.99999993922529e-09;
          }
          dVar34 = local_238;
          if (local_238 <= 9.99999993922529e-09) {
            dVar34 = 9.99999993922529e-09;
          }
          fVar37 = ((float)(dVar10 / dVar36) / fVar32) * fVar38;
          if (fVar39 <= fVar37) {
            fVar37 = fVar39;
          }
          if (fVar37 <= fVar33) {
            fVar37 = fVar33;
          }
          fVar32 = ((float)(dVar40 / dVar42) / fVar49) * fVar38;
          if (fVar39 <= fVar32) {
            fVar32 = fVar39;
          }
          if (fVar32 <= fVar33) {
            fVar32 = fVar33;
          }
          fVar38 = ((float)(dVar6 / dVar34) / fVar41) * fVar38;
          if (fVar39 <= fVar38) {
            fVar38 = fVar39;
          }
          if (fVar38 <= fVar33) {
            fVar38 = fVar33;
          }
          lVar21 = *local_1d8;
          *(float *)(lVar21 + lVar29 * 0xc) = fVar38;
          *(float *)(lVar21 + 4 + lVar29 * 0xc) = fVar37;
          *(float *)(lVar21 + 8 + lVar29 * 0xc) = fVar32;
          plVar28 = local_230;
        }
      }
      uVar20 = uVar20 + 1;
      lVar22 = lVar22 + 0x60;
    } while (uVar8 != uVar20);
  }
  dVar42 = (double)(param_1 + 0x4b8);
  plVar19 = (longlong *)(param_6 + 0x110);
  FUN_1479080f0(dVar42,plVar19);
  uVar8 = *(uint *)(param_6 + 0x118);
  local_238 = dVar42;
  if (uVar8 != 0) {
    uVar24 = *(uint *)(param_1 + 0x580);
    if (*(char *)(param_1 + 0x588) == '\0') {
      lVar26 = *(longlong *)(param_1 + 0x578);
      if (*(longlong *)(param_1 + 0x578) == 0) {
        lVar26 = (longlong)dVar42;
      }
      FUN_14791ebc2(lVar26,uVar24);
      *(undefined1 *)(param_1 + 0x588) = 1;
    }
    if (*(char *)(param_6 + 0x120) == '\0') {
      FUN_140102786(*(undefined8 *)(param_6 + 0x110),*(undefined4 *)(param_6 + 0x118));
      *(undefined1 *)(param_6 + 0x120) = 1;
    }
    uVar30 = uVar24;
    if ((int)uVar24 < (int)uVar8) {
      uVar30 = uVar8;
    }
    iVar25 = (int)uVar30 / 2 + uVar30;
    if (iVar25 < 0) goto LAB_1433de69d;
    if (*(int *)(param_1 + 0x584) < iVar25) {
      FUN_14791ea6c(local_238);
    }
    uVar30 = 0;
    dVar42 = local_238;
    if (uVar24 != 0 || (int)uVar8 < 1) {
      lVar26 = 0x14;
      uVar20 = 0;
      uVar30 = 0;
      do {
        if ((uVar30 == uVar8) && ((longlong)uVar20 <= (longlong)(int)uVar24)) goto LAB_1433ddc93;
        lVar22 = *(longlong *)(param_1 + 0x578);
        if (*(longlong *)(param_1 + 0x578) == 0) {
          lVar22 = (longlong)dVar42;
        }
        puVar17 = (undefined8 *)(*plVar19 + (longlong)(int)uVar30 * 0x10);
        lVar21 = *(longlong *)(*plVar19 + (longlong)(int)uVar30 * 0x10);
        lVar16 = *(longlong *)(lVar22 + -0x14 + lVar26);
        if (lVar16 == lVar21) {
          *(undefined4 *)(lVar22 + -0xc + lVar26) = *(undefined4 *)(puVar17 + 1);
          *(undefined4 *)(lVar22 + -4 + lVar26) = 0;
          *(undefined4 *)(lVar22 + lVar26) = *(undefined4 *)(param_1 + 0x8c);
LAB_1433de100:
          uVar30 = uVar30 + 1;
        }
        else {
          iVar25 = (int)lVar16 - (int)lVar21;
          if (iVar25 == 0) {
            iVar25 = (int)((ulonglong)lVar16 >> 0x20) - (int)((ulonglong)lVar21 >> 0x20);
          }
          if (-1 < iVar25) {
            puVar18 = (undefined8 *)FUN_14791eb38(dVar42,uVar20 & 0xffffffff);
            uVar24 = *(uint *)(param_1 + 0x580);
            *puVar18 = *puVar17;
            *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar17 + 1);
            *(undefined4 *)(puVar18 + 2) = 0;
            *(undefined4 *)((longlong)puVar18 + 0x14) = *(undefined4 *)(param_1 + 0x8c);
            dVar42 = local_238;
            goto LAB_1433de100;
          }
          *(undefined4 *)(lVar22 + -0xc + lVar26) = 0;
          *(undefined4 *)(lVar22 + -4 + lVar26) = 0;
          *(undefined4 *)(lVar22 + lVar26) = *(undefined4 *)(param_1 + 0x8c);
        }
        uVar20 = uVar20 + 1;
        lVar26 = lVar26 + 0x18;
      } while (uVar20 != uVar24 || (int)uVar8 <= (int)uVar30);
    }
    iVar25 = (uVar8 - uVar30) + *(int *)(param_1 + 0x580);
    if (iVar25 < 0) goto LAB_1433de69d;
    if (*(int *)(param_1 + 0x584) < iVar25) {
      FUN_14791ea6c(dVar42);
      dVar42 = local_238;
    }
    iVar25 = uVar8 - uVar30;
    if (iVar25 != 0 && (int)uVar30 <= (int)uVar8) {
      uVar20 = (longlong)(int)uVar30 << 4 | 8;
      do {
        lVar26 = *plVar19;
        puVar17 = (undefined8 *)FUN_14791eae4(dVar42);
        *puVar17 = *(undefined8 *)(lVar26 + -8 + uVar20);
        *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(lVar26 + uVar20);
        *(undefined4 *)(puVar17 + 2) = 0;
        *(undefined4 *)((longlong)puVar17 + 0x14) = *(undefined4 *)(param_1 + 0x8c);
        uVar20 = uVar20 + 0x10;
        iVar25 = iVar25 + -1;
        dVar42 = local_238;
      } while (iVar25 != 0);
    }
  }
LAB_1433ddc93:
  fVar39 = *(float *)(param_6 + 0x148);
  if ((1e-08 < fVar39) && (uVar8 = *(uint *)(param_5 + 0x118), uVar8 != 0)) {
    uVar24 = *(uint *)(param_1 + 0x580);
    if (*(char *)(param_1 + 0x588) == '\0') {
      lVar26 = *(longlong *)(param_1 + 0x578);
      if (*(longlong *)(param_1 + 0x578) == 0) {
        lVar26 = (longlong)dVar42;
      }
      FUN_14791ebc2(lVar26,uVar24);
      *(undefined1 *)(param_1 + 0x588) = 1;
      dVar42 = local_238;
    }
    if (*(char *)(param_5 + 0x120) == '\0') {
      FUN_140102786(*(undefined8 *)(param_5 + 0x110),*(undefined4 *)(param_5 + 0x118));
      *(undefined1 *)(param_5 + 0x120) = 1;
      dVar42 = local_238;
    }
    uVar30 = uVar24;
    if ((int)uVar24 < (int)uVar8) {
      uVar30 = uVar8;
    }
    iVar25 = (int)uVar30 / 2 + uVar30;
    if (iVar25 < 0) goto LAB_1433de69d;
    if (*(int *)(param_1 + 0x584) < iVar25) {
      FUN_14791ea6c(dVar42);
      dVar42 = local_238;
    }
    uVar30 = 0;
    if (uVar24 != 0 || (int)uVar8 < 1) {
      uVar20 = 0;
      lVar26 = 0x10;
      uVar30 = 0;
      do {
        if ((uVar30 == uVar8) && ((longlong)uVar20 <= (longlong)(int)uVar24)) goto LAB_1433ddd8e;
        lVar22 = *(longlong *)(param_1 + 0x578);
        if (*(longlong *)(param_1 + 0x578) == 0) {
          lVar22 = (longlong)dVar42;
        }
        puVar17 = (undefined8 *)(*(longlong *)(param_5 + 0x110) + (longlong)(int)uVar30 * 0x10);
        lVar21 = *(longlong *)(*(longlong *)(param_5 + 0x110) + (longlong)(int)uVar30 * 0x10);
        lVar16 = *(longlong *)(lVar22 + -0x10 + lVar26);
        if (lVar16 == lVar21) {
          fVar33 = (*(float *)(lVar22 + -8 + lVar26) - *(float *)(puVar17 + 1)) / fVar39;
          *(float *)(lVar22 + lVar26) = fVar33;
          fVar38 = *(float *)(param_1 + 0xa0);
          if (fVar38 <= fVar33) {
            fVar33 = fVar38;
          }
          if (fVar33 <= -fVar38) {
            fVar33 = -fVar38;
          }
          *(float *)(lVar22 + lVar26) = fVar33;
LAB_1433de3fa:
          uVar30 = uVar30 + 1;
        }
        else {
          iVar25 = (int)lVar16 - (int)lVar21;
          if (iVar25 == 0) {
            iVar25 = (int)((ulonglong)lVar16 >> 0x20) - (int)((ulonglong)lVar21 >> 0x20);
          }
          if (-1 < iVar25) {
            puVar18 = (undefined8 *)FUN_14791eb38(dVar42,uVar20 & 0xffffffff);
            uVar24 = *(uint *)(param_1 + 0x580);
            *puVar18 = *puVar17;
            dVar42 = local_238;
            goto LAB_1433de3fa;
          }
        }
        uVar20 = uVar20 + 1;
        lVar26 = lVar26 + 0x18;
      } while (uVar20 != uVar24 || (int)uVar8 <= (int)uVar30);
    }
    iVar25 = (uVar8 - uVar30) + *(int *)(param_1 + 0x580);
    if (iVar25 < 0) goto LAB_1433de69d;
    if (*(int *)(param_1 + 0x584) < iVar25) {
      FUN_14791ea6c(dVar42);
      dVar42 = local_238;
    }
    iVar25 = uVar8 - uVar30;
    if (iVar25 != 0 && (int)uVar30 <= (int)uVar8) {
      lVar26 = (longlong)(int)uVar30 << 4;
      do {
        lVar22 = *(longlong *)(param_5 + 0x110);
        puVar17 = (undefined8 *)FUN_14791eae4(dVar42);
        *puVar17 = *(undefined8 *)(lVar22 + lVar26);
        lVar26 = lVar26 + 0x10;
        iVar25 = iVar25 + -1;
        dVar42 = local_238;
      } while (iVar25 != 0);
    }
  }
LAB_1433ddd8e:
  plVar19 = local_210;
  uVar8 = *(uint *)(local_210 + 1);
  if (uVar8 == 0) {
LAB_1433ddec4:
    if (0 < *(int *)(param_1 + 0xb0)) {
      FUN_147908134(dVar42,param_1 + 0xa8);
      dVar42 = local_238;
    }
    if (0 < *(int *)(param_1 + 0xd0)) {
      FUN_147908134(dVar42,param_1 + 200);
    }
    *(float *)(param_1 + 0x498) = DAT_14c846338;
    *(ulonglong *)(param_1 + 0x490) = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
    *(ulonglong *)(param_1 + 0x49c) = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
    *(float *)(param_1 + 0x4a4) = DAT_14c846338;
    *(ulonglong *)(param_1 + 0x4a8) = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
    *(float *)(param_1 + 0x4b0) = DAT_14c846338;
    plVar19 = (longlong *)FUN_14010173e();
    if (plVar19 != (longlong *)0x0) {
      puVar17 = &DAT_14c846480;
      pfVar27 = &local_198;
      for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
        *(undefined8 *)pfVar27 = *puVar17;
        puVar17 = puVar17 + 1;
        pfVar27 = pfVar27 + 2;
      }
      cVar15 = (**(code **)(*plVar19 + 0x20))(plVar19,local_1e0);
      if (((cVar15 != '\0') && (*(char *)(param_6 + 0x60) == '\x01')) &&
         (0.0001 < *(float *)(param_6 + 0x148))) {
        dVar42 = *(double *)(param_6 + 0xa0);
        dVar36 = *(double *)(param_6 + 0x98);
        fVar39 = 1.0 / *(float *)(param_6 + 0x148);
        *(float *)(param_1 + 0x490) = fVar39 * (float)*(double *)(param_6 + 0x90);
        *(float *)(param_1 + 0x494) = (float)dVar36 * fVar39;
        *(float *)(param_1 + 0x498) = (float)dVar42 * fVar39;
        local_138 = *(double *)(param_6 + 0x70);
        dStack_130 = *(double *)(param_6 + 0x78);
        local_128 = *(double *)(param_6 + 0x80);
        dStack_120 = *(double *)(param_6 + 0x88);
        FUN_14093ab46(&local_138,&local_118);
        fVar39 = 1.0 / *(float *)(param_6 + 0x148);
        *(float *)(param_1 + 0x49c) = fVar39 * (float)(local_118 + local_118);
        *(float *)(param_1 + 0x4a0) = (float)(local_110 + local_110) * fVar39;
        *(float *)(param_1 + 0x4a4) = (float)(local_108 + local_108) * fVar39;
        auVar7 = *(undefined1 (*) [16])(param_6 + 0xb0);
        uVar43 = auVar7._0_4_;
        uVar44 = auVar7._4_4_;
        dVar36 = auVar7._8_8_;
        dVar42 = *(double *)(param_6 + 0xc0);
        uVar45 = SUB84(dVar42,0);
        uVar46 = (undefined4)((ulonglong)dVar42 >> 0x20);
        if (*(char *)(param_1 + 0x54) == '\x01') {
          uVar47 = auVar7._8_4_;
          uVar48 = auVar7._12_4_;
        }
        else {
          if (dVar42 <= 9.99999993922529e-09) {
            uVar45 = 0xe0000000;
            uVar46 = 0x3e45798e;
          }
          dVar42 = log((double)CONCAT44(uVar46,uVar45));
          uVar45 = SUB84(dVar42,0);
          uVar46 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (dVar36 <= 9.99999993922529e-09) {
            dVar36 = 9.99999993922529e-09;
          }
          dVar42 = log(dVar36);
          uVar47 = SUB84(dVar42,0);
          uVar48 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (auVar7._0_8_ <= 9.99999993922529e-09) {
            uVar43 = 0xe0000000;
            uVar44 = 0x3e45798e;
          }
          dVar42 = log((double)CONCAT44(uVar44,uVar43));
          uVar43 = SUB84(dVar42,0);
          uVar44 = (undefined4)((ulonglong)dVar42 >> 0x20);
        }
        fVar39 = 1.0 / *(float *)(param_6 + 0x148);
        *(float *)(param_1 + 0x4a8) = fVar39 * (float)(double)CONCAT44(uVar44,uVar43);
        *(float *)(param_1 + 0x4ac) = (float)(double)CONCAT44(uVar48,uVar47) * fVar39;
        *(float *)(param_1 + 0x4b0) = (float)(double)CONCAT44(uVar46,uVar45) * fVar39;
      }
    }
    if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  uVar24 = *(uint *)(param_1 + 0x580);
  if (*(char *)(param_1 + 0x588) == '\0') {
    lVar26 = *(longlong *)(param_1 + 0x578);
    if (*(longlong *)(param_1 + 0x578) == 0) {
      lVar26 = (longlong)dVar42;
    }
    FUN_14791ebc2(lVar26,uVar24);
    *(undefined1 *)(param_1 + 0x588) = 1;
    dVar42 = local_238;
  }
  if ((char)plVar19[2] == '\0') {
    FUN_144716af1(*plVar19,(int)plVar19[1]);
    *(undefined1 *)(plVar19 + 2) = 1;
    dVar42 = local_238;
  }
  uVar30 = uVar24;
  if ((int)uVar24 < (int)uVar8) {
    uVar30 = uVar8;
  }
  iVar25 = (int)uVar30 / 2 + uVar30;
  if (-1 < iVar25) {
    if (*(int *)(param_1 + 0x584) < iVar25) {
      FUN_14791ea6c(dVar42);
      dVar42 = local_238;
    }
    uVar30 = 0;
    if (uVar24 != 0 || (int)uVar8 < 1) {
      uVar20 = 0;
      lVar26 = 0x14;
      uVar30 = 0;
      do {
        if ((uVar30 == uVar8) && ((longlong)uVar20 <= (longlong)(int)uVar24)) goto LAB_1433ddec4;
        lVar22 = *(longlong *)(param_1 + 0x578);
        if (*(longlong *)(param_1 + 0x578) == 0) {
          lVar22 = (longlong)dVar42;
        }
        puVar17 = (undefined8 *)(*plVar19 + (longlong)(int)uVar30 * 0x10);
        lVar21 = *(longlong *)(*plVar19 + (longlong)(int)uVar30 * 0x10);
        lVar16 = *(longlong *)(lVar22 + -0x14 + lVar26);
        if (lVar16 == lVar21) {
          fVar39 = *(float *)(lVar22 + -4 + lVar26);
          if ((fVar39 < 0.0) || (fVar38 = 0.0001, 0.0001 <= fVar39)) {
            fVar38 = -0.0001;
            if (fVar39 <= -0.0001) {
              fVar38 = fVar39;
            }
            fVar38 = (float)(~-(uint)(fVar39 < 0.0) & (uint)fVar39 |
                            (uint)fVar38 & -(uint)(fVar39 < 0.0));
          }
          fVar39 = ((*(float *)(puVar17 + 1) - *(float *)(lVar22 + -0xc + lVar26)) / fVar38) *
                   *(float *)(param_1 + 0x88);
          if (*(float *)(param_1 + 0x90) <= fVar39) {
            fVar39 = *(float *)(param_1 + 0x90);
          }
          if (fVar39 <= *(float *)(param_1 + 0x8c)) {
            fVar39 = *(float *)(param_1 + 0x8c);
          }
          *(float *)(lVar22 + lVar26) = fVar39;
          uVar30 = uVar30 + 1;
        }
        else {
          iVar25 = (int)lVar16 - (int)lVar21;
          if (iVar25 == 0) {
            iVar25 = (int)((ulonglong)lVar16 >> 0x20) - (int)((ulonglong)lVar21 >> 0x20);
          }
          if (iVar25 < 0) {
            fVar39 = *(float *)(lVar22 + -4 + lVar26);
            if ((fVar39 < 0.0) || (fVar38 = 0.0001, 0.0001 <= fVar39)) {
              fVar38 = -0.0001;
              if (fVar39 <= -0.0001) {
                fVar38 = fVar39;
              }
              fVar38 = (float)(~-(uint)(fVar39 < 0.0) & (uint)fVar39 |
                              (uint)fVar38 & -(uint)(fVar39 < 0.0));
            }
            fVar39 = ((0.0 - *(float *)(lVar22 + -0xc + lVar26)) / fVar38) *
                     *(float *)(param_1 + 0x88);
            if (*(float *)(param_1 + 0x90) <= fVar39) {
              fVar39 = *(float *)(param_1 + 0x90);
            }
            if (fVar39 <= *(float *)(param_1 + 0x8c)) {
              fVar39 = *(float *)(param_1 + 0x8c);
            }
            *(float *)(lVar22 + lVar26) = fVar39;
          }
          else {
            puVar18 = (undefined8 *)FUN_14791eb38(dVar42,uVar20 & 0xffffffff);
            uVar24 = *(uint *)(param_1 + 0x580);
            *puVar18 = *puVar17;
            fVar39 = *(float *)(puVar18 + 2);
            if ((fVar39 < 0.0) || (fVar38 = 0.0001, 0.0001 <= fVar39)) {
              fVar38 = -0.0001;
              if (fVar39 <= -0.0001) {
                fVar38 = fVar39;
              }
              fVar38 = (float)(~-(uint)(fVar39 < 0.0) & (uint)fVar39 |
                              (uint)fVar38 & -(uint)(fVar39 < 0.0));
            }
            fVar39 = ((*(float *)(puVar17 + 1) - *(float *)(puVar18 + 1)) / fVar38) *
                     *(float *)(param_1 + 0x88);
            if (*(float *)(param_1 + 0x90) <= fVar39) {
              fVar39 = *(float *)(param_1 + 0x90);
            }
            if (fVar39 <= *(float *)(param_1 + 0x8c)) {
              fVar39 = *(float *)(param_1 + 0x8c);
            }
            *(float *)((longlong)puVar18 + 0x14) = fVar39;
            uVar30 = uVar30 + 1;
            dVar42 = local_238;
          }
        }
        uVar20 = uVar20 + 1;
        lVar26 = lVar26 + 0x18;
      } while (uVar20 != uVar24 || (int)uVar8 <= (int)uVar30);
    }
    iVar25 = (uVar8 - uVar30) + *(int *)(param_1 + 0x580);
    if (-1 < iVar25) {
      if (*(int *)(param_1 + 0x584) < iVar25) {
        FUN_14791ea6c(dVar42);
        dVar42 = local_238;
      }
      iVar25 = uVar8 - uVar30;
      if (iVar25 != 0 && (int)uVar30 <= (int)uVar8) {
        uVar20 = (longlong)(int)uVar30 << 4 | 8;
        do {
          lVar26 = *plVar19;
          puVar17 = (undefined8 *)FUN_14791eae4(dVar42);
          *puVar17 = *(undefined8 *)(lVar26 + -8 + uVar20);
          fVar39 = *(float *)(puVar17 + 2);
          if ((fVar39 < 0.0) || (fVar38 = 0.0001, 0.0001 <= fVar39)) {
            fVar38 = -0.0001;
            if (fVar39 <= -0.0001) {
              fVar38 = fVar39;
            }
            fVar38 = (float)(~-(uint)(fVar39 < 0.0) & (uint)fVar39 |
                            (uint)fVar38 & -(uint)(fVar39 < 0.0));
          }
          fVar39 = ((*(float *)(lVar26 + uVar20) - *(float *)(puVar17 + 1)) / fVar38) *
                   *(float *)(param_1 + 0x88);
          if (*(float *)(param_1 + 0x90) <= fVar39) {
            fVar39 = *(float *)(param_1 + 0x90);
          }
          if (fVar39 <= *(float *)(param_1 + 0x8c)) {
            fVar39 = *(float *)(param_1 + 0x8c);
          }
          *(float *)((longlong)puVar17 + 0x14) = fVar39;
          uVar20 = uVar20 + 0x10;
          iVar25 = iVar25 + -1;
          plVar19 = local_210;
          dVar42 = local_238;
        } while (iVar25 != 0);
      }
      goto LAB_1433ddec4;
    }
  }
LAB_1433de69d:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar25);
}



// FUNCTION 1433de6ac FUN_1433de6ac body=7491 status=ok
// SIG undefined FUN_1433de6ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433de6ac(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double *pdVar17;
  int iVar18;
  double *pdVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 *puVar22;
  int iVar23;
  ulonglong uVar24;
  bool bVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar43;
  undefined1 auVar42 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  float fVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong local_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  longlong *local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  undefined8 uStack_190;
  undefined8 local_180;
  double local_178 [4];
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uVar12 = *(uint *)(param_2 + 1);
  local_180 = param_4;
  if ((ulonglong)uVar12 != 0) {
    lVar16 = param_2[2];
    local_1c0 = param_1 + 0xe8;
    uVar24 = 0;
    local_1c8 = lVar16;
    do {
      lVar20 = (longlong)*(int *)(*(longlong *)(lVar16 + 0x70) + uVar24 * 4);
      if ((lVar20 != -1) &&
         (lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x3e0) + lVar20 * 4), lVar15 != -1)) {
        lVar21 = *(longlong *)(param_1 + 0x108);
        if (*(longlong *)(param_1 + 0x108) == 0) {
          lVar21 = local_1c0;
        }
        if ((longlong)*(int *)(param_1 + 0x110) != 0) {
          lVar14 = 0;
          do {
            if (uVar24 == *(uint *)(lVar21 + lVar14)) goto LAB_1433df73d;
            lVar14 = lVar14 + 4;
          } while ((longlong)*(int *)(param_1 + 0x110) * 4 != lVar14);
        }
        fVar27 = *(float *)(param_1 + 0x640);
        lVar16 = *(longlong *)(param_1 + 0x3f0);
        lVar21 = *(longlong *)(param_1 + 0x430);
        fVar28 = *(float *)(lVar21 + lVar15 * 0xc);
        fVar36 = *(float *)(lVar21 + 4 + lVar15 * 0xc);
        fVar44 = *(float *)(lVar21 + 8 + lVar15 * 0xc);
        dVar34 = *(double *)(lVar16 + lVar15 * 0x18);
        local_198 = *(double *)(lVar16 + 8 + lVar15 * 0x18);
        local_1a8 = *(longlong **)(lVar16 + 0x10 + lVar15 * 0x18);
        if (1e-08 < fVar44 * fVar44 + fVar28 * fVar28 + fVar36 * fVar36) {
          lVar16 = *(longlong *)(param_1 + 0x460);
          fVar49 = *(float *)(lVar16 + 8 + lVar15 * 0xc);
          fVar54 = *(float *)(lVar16 + lVar15 * 0xc);
          fVar47 = *(float *)(lVar16 + 4 + lVar15 * 0xc);
          if (fVar49 <= 1e-08) {
            fVar49 = 1e-08;
          }
          fVar49 = 0.6931472 / fVar49;
          if (fVar47 <= 1e-08) {
            fVar47 = 1e-08;
          }
          fVar47 = 0.6931472 / fVar47;
          if (fVar54 <= 1e-08) {
            fVar54 = 1e-08;
          }
          fVar54 = 0.6931472 / fVar54;
          fVar48 = fVar27 * fVar49;
          if (fVar49 <= 1e-08) {
            fVar49 = 1e-08;
          }
          fVar46 = fVar27 * fVar47;
          if (fVar47 <= 1e-08) {
            fVar47 = 1e-08;
          }
          fVar45 = fVar27 * fVar54;
          if (fVar54 <= 1e-08) {
            fVar54 = 1e-08;
          }
          local_1a8 = (longlong *)
                      ((double)local_1a8 +
                      (double)((DAT_14c846358 -
                               1.0 / (fVar48 * 0.25724632 * fVar48 * fVar48 +
                                     fVar48 * 0.45053902 * fVar48 + fVar48 * 1.0074606 + 1.0)) *
                              (fVar44 / fVar49)));
          local_198 = local_198 +
                      (double)((DAT_14c846350._4_4_ -
                               1.0 / (fVar46 * 0.25724632 * fVar46 * fVar46 +
                                     fVar46 * 0.45053902 * fVar46 + fVar46 * 1.0074606 + 1.0)) *
                              (fVar36 / fVar47));
          dVar34 = dVar34 + (double)(((float)DAT_14c846350 -
                                     1.0 / (fVar45 * 0.25724632 * fVar45 * fVar45 +
                                           fVar45 * 0.45053902 * fVar45 + fVar45 * 1.0074606 + 1.0))
                                    * (fVar28 / fVar54));
        }
        uStack_190 = 0;
        uStack_1a0 = 0;
        lVar16 = *(longlong *)(param_1 + 0x440);
        fVar28 = *(float *)(lVar16 + lVar15 * 0xc);
        fVar36 = *(float *)(lVar16 + 4 + lVar15 * 0xc);
        fVar44 = *(float *)(lVar16 + 8 + lVar15 * 0xc);
        pdVar17 = (double *)(*(longlong *)(param_1 + 0x400) + lVar15 * 0x20);
        dVar31 = *pdVar17;
        dVar35 = pdVar17[1];
        pdVar17 = (double *)(*(longlong *)(param_1 + 0x400) + 0x10 + lVar15 * 0x20);
        dVar37 = *pdVar17;
        dVar39 = pdVar17[1];
        if (1e-08 < fVar44 * fVar44 + fVar28 * fVar28 + fVar36 * fVar36) {
          lVar16 = *(longlong *)(param_1 + 0x470);
          fVar49 = *(float *)(lVar16 + 8 + lVar15 * 0xc);
          fVar54 = *(float *)(lVar16 + lVar15 * 0xc);
          fVar47 = *(float *)(lVar16 + 4 + lVar15 * 0xc);
          if (fVar49 <= 1e-08) {
            fVar49 = 1e-08;
          }
          fVar49 = 0.6931472 / fVar49;
          if (fVar47 <= 1e-08) {
            fVar47 = 1e-08;
          }
          fVar47 = 0.6931472 / fVar47;
          if (fVar54 <= 1e-08) {
            fVar54 = 1e-08;
          }
          fVar54 = 0.6931472 / fVar54;
          fVar48 = fVar27 * fVar49;
          if (fVar49 <= 1e-08) {
            fVar49 = 1e-08;
          }
          fVar46 = fVar27 * fVar47;
          if (fVar47 <= 1e-08) {
            fVar47 = 1e-08;
          }
          fVar27 = fVar27 * fVar54;
          if (fVar54 <= 1e-08) {
            fVar54 = 1e-08;
          }
          dVar5 = (double)((DAT_14c846358 -
                           1.0 / (fVar48 * 0.25724632 * fVar48 * fVar48 +
                                 fVar48 * 0.45053902 * fVar48 + fVar48 * 1.0074606 + 1.0)) *
                          (fVar44 / fVar49)) * 0.5;
          dVar32 = (double)((DAT_14c846350._4_4_ -
                            1.0 / (fVar46 * 0.25724632 * fVar46 * fVar46 +
                                  fVar46 * 0.45053902 * fVar46 + fVar46 * 1.0074606 + 1.0)) *
                           (fVar36 / fVar47)) * 0.5;
          dVar33 = (double)(((float)DAT_14c846350 -
                            1.0 / (fVar27 * 0.25724632 * fVar27 * fVar27 +
                                  fVar27 * 0.45053902 * fVar27 + fVar27 * 1.0074606 + 1.0)) *
                           (fVar28 / fVar54)) * 0.5;
          dVar4 = SQRT(dVar5 * dVar5 + dVar33 * dVar33 + dVar32 * dVar32);
          dVar29 = sin(dVar4);
          dVar30 = cos(dVar4);
          dVar4 = dVar29 / dVar4;
          if (9.99999993922529e-09 <= ABS(dVar29)) {
            dVar32 = dVar32 * dVar4;
            dVar5 = dVar5 * dVar4;
          }
          uVar26 = -(ulonglong)(ABS(dVar29) < 9.99999993922529e-09);
          dVar40 = (double)(uVar26 & (ulonglong)dVar33 | ~uVar26 & (ulonglong)(dVar4 * dVar33));
          dVar41 = dVar40 * dVar35;
          dVar43 = dVar40 * dVar31;
          dVar4 = dVar31 * dVar32;
          dVar33 = dVar35 * dVar32;
          dVar29 = dVar31 * dVar5;
          dVar38 = dVar37 * dVar5;
          dVar31 = dVar35 * dVar5 * -1.0 + dVar37 * dVar32 + dVar39 * dVar40 * 1.0 + dVar31 * dVar30
          ;
          dVar35 = dVar29 * 1.0 + dVar39 * dVar32 + dVar37 * dVar40 * -1.0 + dVar35 * dVar30;
          dVar37 = dVar39 * dVar5 * 1.0 + ((dVar41 * 1.0 + dVar30 * dVar37) - dVar4);
          dVar39 = dVar38 * -1.0 + ((dVar43 * -1.0 + dVar30 * dVar39) - dVar33);
        }
        lVar16 = *(longlong *)(param_1 + 0x450);
        fVar27 = *(float *)(lVar16 + lVar15 * 0xc);
        fVar28 = *(float *)(lVar16 + 4 + lVar15 * 0xc);
        fVar36 = *(float *)(lVar16 + 8 + lVar15 * 0xc);
        lVar16 = *(longlong *)(param_1 + 0x420);
        dVar4 = *(double *)(lVar16 + lVar15 * 0x18);
        dVar5 = *(double *)(lVar16 + 8 + lVar15 * 0x18);
        local_1b8 = *(double *)(lVar16 + 0x10 + lVar15 * 0x18);
        uStack_1b0 = 0;
        fVar44 = fVar36 * fVar36 + fVar27 * fVar27 + fVar28 * fVar28;
        if (*(char *)(param_1 + 0x54) == '\x01') {
          if (1e-08 < fVar44) {
            fVar44 = *(float *)(param_1 + 0x640);
            lVar16 = *(longlong *)(param_1 + 0x480);
            fVar49 = *(float *)(lVar16 + 8 + lVar15 * 0xc);
            fVar54 = *(float *)(lVar16 + lVar15 * 0xc);
            fVar47 = *(float *)(lVar16 + 4 + lVar15 * 0xc);
            if (fVar49 <= 1e-08) {
              fVar49 = 1e-08;
            }
            fVar49 = 0.6931472 / fVar49;
            if (fVar47 <= 1e-08) {
              fVar47 = 1e-08;
            }
            fVar47 = 0.6931472 / fVar47;
            if (fVar54 <= 1e-08) {
              fVar54 = 1e-08;
            }
            fVar54 = 0.6931472 / fVar54;
            fVar48 = fVar44 * fVar49;
            if (fVar49 <= 1e-08) {
              fVar49 = 1e-08;
            }
            fVar46 = fVar44 * fVar47;
            if (fVar47 <= 1e-08) {
              fVar47 = 1e-08;
            }
            fVar44 = fVar44 * fVar54;
            if (fVar54 <= 1e-08) {
              fVar54 = 1e-08;
            }
            local_1b8 = local_1b8 +
                        (double)((DAT_14c846358 -
                                 1.0 / (fVar48 * 0.25724632 * fVar48 * fVar48 +
                                       fVar48 * 0.45053902 * fVar48 + fVar48 * 1.0074606 + 1.0)) *
                                (fVar36 / fVar49));
            uStack_1b0 = 0;
            dVar5 = dVar5 + (double)((DAT_14c846350._4_4_ -
                                     1.0 / (fVar46 * 0.25724632 * fVar46 * fVar46 +
                                           fVar46 * 0.45053902 * fVar46 + fVar46 * 1.0074606 + 1.0))
                                    * (fVar28 / fVar47));
            dVar4 = dVar4 + (double)(((float)DAT_14c846350 -
                                     1.0 / (fVar44 * 0.25724632 * fVar44 * fVar44 +
                                           fVar44 * 0.45053902 * fVar44 + fVar44 * 1.0074606 + 1.0))
                                    * (fVar27 / fVar54));
          }
        }
        else if (1e-08 < fVar44) {
          fVar44 = *(float *)(param_1 + 0x640);
          lVar16 = *(longlong *)(param_1 + 0x480);
          fVar49 = *(float *)(lVar16 + 8 + lVar15 * 0xc);
          fVar54 = *(float *)(lVar16 + lVar15 * 0xc);
          fVar47 = *(float *)(lVar16 + 4 + lVar15 * 0xc);
          if (fVar49 <= 1e-08) {
            fVar49 = 1e-08;
          }
          fVar49 = 0.6931472 / fVar49;
          if (fVar47 <= 1e-08) {
            fVar47 = 1e-08;
          }
          fVar47 = 0.6931472 / fVar47;
          if (fVar54 <= 1e-08) {
            fVar54 = 1e-08;
          }
          fVar54 = 0.6931472 / fVar54;
          fVar48 = fVar44 * fVar49;
          if (fVar49 <= 1e-08) {
            fVar49 = 1e-08;
          }
          fVar46 = fVar44 * fVar47;
          if (fVar47 <= 1e-08) {
            fVar47 = 1e-08;
          }
          fVar44 = fVar44 * fVar54;
          if (fVar54 <= 1e-08) {
            fVar54 = 1e-08;
          }
          fVar46 = DAT_14c846350._4_4_ -
                   1.0 / (fVar46 * 0.25724632 * fVar46 * fVar46 +
                         fVar46 * 0.45053902 * fVar46 + fVar46 * 1.0074606 + 1.0);
          fVar44 = (float)DAT_14c846350 -
                   1.0 / (fVar44 * 0.25724632 * fVar44 * fVar44 +
                         fVar44 * 0.45053902 * fVar44 + fVar44 * 1.0074606 + 1.0);
          dVar32 = exp((double)((DAT_14c846358 -
                                1.0 / (fVar48 * 0.25724632 * fVar48 * fVar48 +
                                      fVar48 * 0.45053902 * fVar48 + fVar48 * 1.0074606 + 1.0)) *
                               (fVar36 / fVar49)));
          dVar33 = exp((double)(fVar46 * (fVar28 / fVar47)));
          dVar29 = exp((double)(fVar44 * (fVar27 / fVar54)));
          local_1b8 = local_1b8 * dVar32;
          dVar5 = dVar5 * dVar33;
          dVar4 = dVar4 * dVar29;
        }
        lVar16 = local_1c8;
        pdVar17 = (double *)(*param_2 + uVar24 * 0x60);
        dVar32 = *pdVar17;
        dVar33 = pdVar17[1];
        pdVar17 = (double *)(*param_2 + 0x10 + uVar24 * 0x60);
        dVar29 = *pdVar17 * DAT_149931160;
        dVar30 = pdVar17[1] * DAT_149931160._8_8_;
        local_118 = (dVar29 * dVar35 + (dVar31 * dVar30 * 1.0 - dVar39 * dVar32)) -
                    dVar33 * dVar37 * DAT_149931160;
        dStack_110 = (dVar30 * dVar35 + (dVar31 * dVar29 * -1.0 - dVar39 * dVar33)) -
                     dVar32 * dVar37 * DAT_149931160._8_8_;
        local_108 = dVar30 * dVar37 * 1.0 +
                    dVar35 * dVar32 + (dVar39 * dVar29 - dVar31 * dVar33 * 1.0);
        dVar31 = dVar29 * dVar37 * -1.0 +
                 dVar35 * dVar33 + (dVar39 * dVar30 - dVar31 * dVar32 * -1.0);
        lVar21 = *(longlong *)(param_1 + 0x410);
        lVar15 = lVar15 * 0x10;
        uVar26 = -(ulonglong)
                  (0.0 <= (double)*(float *)(lVar21 + 0xc + lVar15) * dVar31 +
                          (double)*(float *)(lVar21 + 8 + lVar15) * local_108 +
                          (double)*(float *)(lVar21 + lVar15) * local_118 +
                          (double)*(float *)(lVar21 + 4 + lVar15) * dStack_110);
        dStack_100 = (double)(~uVar26 & 0xbff0000000000000 | uVar26 & 0x3ff0000000000000);
        local_118 = local_118 * dStack_100;
        dStack_110 = dStack_110 * dStack_100;
        local_108 = local_108 * dStack_100;
        dStack_100 = dStack_100 * dVar31;
        *(float *)(lVar21 + lVar15) = (float)local_118;
        *(float *)(lVar21 + 4 + lVar15) = (float)dStack_110;
        *(float *)(lVar21 + 8 + lVar15) = (float)local_108;
        *(float *)(lVar21 + 0xc + lVar15) = (float)dStack_100;
        fVar27 = *(float *)(*(longlong *)(param_1 + 0x648) + lVar20 * 4);
        if (fVar27 <= 1e-08) {
          fVar27 = 1e-08;
        }
        fVar27 = *(float *)(param_1 + 0x640) / fVar27;
        if (1.0 <= fVar27) {
          fVar27 = 1.0;
        }
        if (fVar27 <= 0.0) {
          fVar27 = 0.0;
        }
        fVar27 = (float)FUN_14002c5a6(fVar27,*(undefined1 *)(param_1 + 0x65c),
                                      *(undefined8 *)(param_1 + 0x660));
        fVar27 = 1.0 - fVar27;
        if ((fVar27 != 0.0) || (NAN(fVar27))) {
          lVar20 = *param_2;
          lVar15 = uVar24 * 0x60;
          dVar31 = *(double *)(lVar20 + 0x30 + lVar15);
          dVar35 = *(double *)(lVar20 + 0x20 + lVar15);
          dVar37 = *(double *)(lVar20 + 0x28 + lVar15);
          dVar39 = (double)fVar27;
          dVar37 = (local_198 - dVar37) * dVar39 + dVar37;
          auVar2._8_4_ = SUB84(dVar37,0);
          auVar2._0_8_ = (dVar34 - dVar35) * dVar39 + dVar35;
          auVar2._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
          *(undefined1 (*) [16])(lVar20 + 0x20 + lVar15) = auVar2;
          pdVar17 = (double *)(lVar20 + 0x30 + lVar15);
          *pdVar17 = ((double)local_1a8 - dVar31) * dVar39 + dVar31;
          pdVar17[1] = 0.0;
          lVar20 = *param_2;
          FUN_14093ab46(&local_118);
          dVar31 = (local_178[2] + local_178[2]) * dVar39 * 0.5;
          dVar35 = (local_178[1] + local_178[1]) * dVar39 * 0.5;
          dVar37 = (local_178[0] + local_178[0]) * dVar39 * 0.5;
          dVar34 = SQRT(dVar31 * dVar31 + dVar37 * dVar37 + dVar35 * dVar35);
          dVar32 = sin(dVar34);
          dVar33 = cos(dVar34);
          uVar50 = 0xe0000000;
          uVar52 = 0x3e45798e;
          dVar34 = dVar32 / dVar34;
          if (9.99999993922529e-09 <= ABS(dVar32)) {
            dVar35 = dVar35 * dVar34;
            dVar31 = dVar31 * dVar34;
          }
          uVar26 = -(ulonglong)(ABS(dVar32) < 9.99999993922529e-09);
          dVar30 = (double)(uVar26 & (ulonglong)dVar37 | ~uVar26 & (ulonglong)(dVar34 * dVar37));
          pdVar17 = (double *)(*param_2 + lVar15);
          dVar34 = *pdVar17;
          dVar37 = pdVar17[1];
          pdVar17 = (double *)(*param_2 + 0x10 + lVar15);
          dVar32 = *pdVar17;
          dVar29 = pdVar17[1];
          auVar42._0_8_ =
               dVar29 * dVar31 * 1.0 + ((dVar30 * dVar37 * 1.0 + dVar33 * dVar32) - dVar34 * dVar35)
          ;
          auVar42._8_8_ =
               dVar32 * dVar31 * -1.0 +
               ((dVar30 * dVar34 * -1.0 + dVar33 * dVar29) - dVar37 * dVar35);
          pdVar17 = (double *)(lVar20 + lVar15);
          *pdVar17 = dVar37 * dVar31 * -1.0 +
                     dVar32 * dVar35 + dVar29 * dVar30 * 1.0 + dVar34 * dVar33;
          pdVar17[1] = dVar34 * dVar31 * 1.0 +
                       dVar29 * dVar35 + dVar32 * dVar30 * -1.0 + dVar37 * dVar33;
          *(undefined1 (*) [16])(lVar20 + 0x10 + lVar15) = auVar42;
          lVar20 = *param_2;
          auVar2 = *(undefined1 (*) [16])(lVar20 + 0x40 + lVar15);
          dVar31 = auVar2._0_8_;
          uVar51 = auVar2._0_4_;
          uVar53 = auVar2._4_4_;
          dVar35 = auVar2._8_8_;
          dVar34 = *(double *)(lVar20 + 0x50 + lVar15);
          if (*(char *)(param_1 + 0x54) == '\x01') {
            dVar4 = dVar4 - dVar31;
            dVar34 = (local_1b8 - dVar34) * dVar39 + dVar34;
            dVar35 = (dVar5 - dVar35) * dVar39 + dVar35;
LAB_1433df673:
            dVar37 = dVar4 * dVar39 + (double)CONCAT44(uVar53,uVar51);
          }
          else {
            dVar37 = local_1b8 - dVar34;
            uVar55 = SUB84(local_1b8,0);
            uVar56 = (int)((ulonglong)local_1b8 >> 0x20);
            if (local_1b8 <= 9.99999993922529e-09) {
              uVar55 = uVar50;
              uVar56 = uVar52;
            }
            if (dVar34 <= 9.99999993922529e-09) {
              dVar34 = 9.99999993922529e-09;
            }
            if (dVar37 * dVar37 +
                (dVar5 - dVar35) * (dVar5 - dVar35) + (dVar4 - dVar31) * (dVar4 - dVar31) <
                9.99999993922529e-09) {
              dVar34 = ((double)CONCAT44(uVar56,uVar55) - dVar34) * dVar39 + dVar34;
              if (dVar5 <= 9.99999993922529e-09) {
                dVar5 = 9.99999993922529e-09;
              }
              uVar55 = auVar2._8_4_;
              uVar56 = auVar2._12_4_;
              if (dVar35 <= 9.99999993922529e-09) {
                uVar55 = uVar50;
                uVar56 = uVar52;
              }
              dVar35 = (dVar5 - (double)CONCAT44(uVar56,uVar55)) * dVar39 +
                       (double)CONCAT44(uVar56,uVar55);
              if (dVar4 <= 9.99999993922529e-09) {
                dVar4 = 9.99999993922529e-09;
              }
              if (dVar31 <= 9.99999993922529e-09) {
                uVar51 = uVar50;
                uVar53 = uVar52;
              }
              dVar4 = dVar4 - (double)CONCAT44(uVar53,uVar51);
              goto LAB_1433df673;
            }
            dVar37 = (double)(1.0 - fVar27);
            dVar32 = pow(dVar34,dVar37);
            dVar34 = pow((double)CONCAT44(uVar56,uVar55),dVar39);
            dVar34 = dVar34 * dVar32;
            uVar55 = auVar2._8_4_;
            uVar56 = auVar2._12_4_;
            if (dVar35 <= 9.99999993922529e-09) {
              uVar55 = uVar50;
              uVar56 = uVar52;
            }
            dVar32 = pow((double)CONCAT44(uVar56,uVar55),dVar37);
            if (dVar5 <= 9.99999993922529e-09) {
              dVar5 = 9.99999993922529e-09;
            }
            dVar35 = pow(dVar5,dVar39);
            dVar35 = dVar35 * dVar32;
            if (dVar31 <= 9.99999993922529e-09) {
              uVar51 = uVar50;
              uVar53 = uVar52;
            }
            dVar31 = pow((double)CONCAT44(uVar53,uVar51),dVar37);
            if (dVar4 <= 9.99999993922529e-09) {
              dVar4 = 9.99999993922529e-09;
            }
            dVar37 = pow(dVar4,dVar39);
            dVar37 = dVar37 * dVar31;
          }
          lVar20 = lVar20 + lVar15;
          auVar3._8_4_ = SUB84(dVar35,0);
          auVar3._0_8_ = dVar37;
          auVar3._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
          *(undefined1 (*) [16])(lVar20 + 0x40) = auVar3;
          *(double *)(lVar20 + 0x50) = dVar34;
          *(undefined8 *)(lVar20 + 0x58) = 0;
        }
      }
LAB_1433df73d:
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar12);
  }
  fVar27 = *(float *)(param_1 + 0x644);
  if (fVar27 <= 1e-08) {
    fVar27 = 1e-08;
  }
  fVar27 = *(float *)(param_1 + 0x640) / fVar27;
  if (1.0 <= fVar27) {
    fVar27 = 1.0;
  }
  if (fVar27 <= 0.0) {
    fVar27 = 0.0;
  }
  fVar27 = (float)FUN_14002c5a6(fVar27,*(undefined1 *)(param_1 + 0x65c));
  local_1c0 = param_1 + 0x598;
  FUN_140101a52(local_1c0,param_3);
  *(char *)(param_1 + 0x628) = (char)param_3[2];
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_14480ffb8(param_3,0);
  }
  iVar10 = *(int *)(param_1 + 0x580);
  local_198 = (double)CONCAT44(local_198._4_4_,*(undefined4 *)(param_1 + 0x620));
  if (*(char *)(param_1 + 0x628) == '\0') {
    lVar16 = *(longlong *)(param_1 + 0x618);
    if (*(longlong *)(param_1 + 0x618) == 0) {
      lVar16 = local_1c0;
    }
    FUN_1401024cf(lVar16,*(undefined4 *)(param_1 + 0x620));
    *(undefined1 *)(param_1 + 0x628) = 1;
  }
  local_1b8 = (double)(param_1 + 0x4b8);
  if (*(char *)(param_1 + 0x588) == '\0') {
    lVar16 = *(longlong *)(param_1 + 0x578);
    if (*(longlong *)(param_1 + 0x578) == 0) {
      lVar16 = (longlong)local_1b8;
    }
    FUN_14791ebc2(lVar16,*(undefined4 *)(param_1 + 0x580));
    *(undefined1 *)(param_1 + 0x588) = 1;
  }
  iVar13 = local_198._0_4_;
  if (local_198._0_4_ < iVar10) {
    iVar13 = iVar10;
  }
  iVar13 = iVar13 / 2 + iVar13;
  if (iVar13 < 0) {
LAB_1433e03e9:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar13);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar13) {
    FUN_14480ffb8(param_3);
  }
  fVar27 = 1.0 - fVar27;
  bVar25 = local_198._0_4_ == 0;
  iVar23 = 0;
  if (!bVar25 || iVar10 < 1) {
    iVar18 = 0;
    iVar23 = 0;
    local_1c8 = CONCAT44(local_1c8._4_4_,iVar10);
    local_1a8 = param_3;
    do {
      param_3 = local_1a8;
      if (iVar23 == iVar10) {
        if (local_198._0_4_ - iVar18 == 0 || local_198._0_4_ < iVar18) {
          if (!bVar25) goto LAB_1433dfa4c;
          goto LAB_1433dfe93;
        }
        lVar16 = (longlong)(int)local_1a8[1];
        iVar13 = (local_198._0_4_ - iVar18) + (int)local_1a8[1];
        if (-1 < iVar13) {
          if (*(int *)((longlong)local_1a8 + 0xc) < iVar13) {
            FUN_14480ffb8(local_1a8);
          }
          lVar20 = (longlong)iVar18;
          do {
            lVar15 = *(longlong *)(param_1 + 0x618);
            if (*(longlong *)(param_1 + 0x618) == 0) {
              lVar15 = local_1c0;
            }
            iVar10 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar10 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar10 + 1U) {
              FUN_1406de67a(param_3,iVar10);
            }
            puVar22 = (undefined8 *)(lVar15 + lVar20 * 0x10);
            lVar15 = *param_3;
            FUN_14470c6f4((longlong)iVar10 * 0x10 + lVar15,1);
            *(undefined8 *)(lVar15 + (longlong)iVar10 * 0x10) = *puVar22;
            plVar11 = (longlong *)(lVar16 * 0x10 + *param_3);
            if ((longlong)*(int *)(param_1 + 0x60) != 0) {
              lVar15 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_1 + 0x58) + lVar15) == *plVar11) {
                  fVar28 = *(float *)(puVar22 + 1);
                  goto LAB_1433dfe64;
                }
                lVar15 = lVar15 + 8;
              } while ((longlong)*(int *)(param_1 + 0x60) * 8 != lVar15);
            }
            fVar28 = (0.0 - *(float *)(puVar22 + 1)) * fVar27 + *(float *)(puVar22 + 1);
LAB_1433dfe64:
            *(float *)(plVar11 + 1) = fVar28;
            *(undefined1 *)((longlong)plVar11 + 0xc) = *(undefined1 *)((longlong)puVar22 + 0xc);
            lVar16 = lVar16 + 1;
            lVar20 = lVar20 + 1;
          } while (local_198._0_4_ != (int)lVar20);
          goto LAB_1433dfe93;
        }
        goto LAB_1433e03e9;
      }
LAB_1433dfa4c:
      lVar16 = *(longlong *)(param_1 + 0x618);
      if (*(longlong *)(param_1 + 0x618) == 0) {
        lVar16 = local_1c0;
      }
      plVar11 = (longlong *)(lVar16 + (longlong)iVar18 * 0x10);
      dVar34 = (double)*(longlong *)(param_1 + 0x578);
      if (*(longlong *)(param_1 + 0x578) == 0) {
        dVar34 = local_1b8;
      }
      plVar1 = (longlong *)((longlong)dVar34 + (longlong)iVar23 * 0x18);
      lVar20 = *plVar1;
      lVar16 = *(longlong *)(lVar16 + (longlong)iVar18 * 0x10);
      if (lVar16 == lVar20) {
        iVar10 = (int)local_1a8[1];
        *(uint *)(local_1a8 + 1) = iVar10 + 1U;
        if (*(uint *)((longlong)local_1a8 + 0xc) < iVar10 + 1U) {
          FUN_1406de67a(local_1a8,iVar10);
        }
        lVar20 = *local_1a8;
        lVar16 = lVar20 + (longlong)iVar10 * 0x10;
        FUN_14470c6f4(lVar16,1);
        lVar15 = *plVar11;
        *(longlong *)(lVar20 + (longlong)iVar10 * 0x10) = lVar15;
        if ((longlong)*(int *)(param_1 + 0x60) != 0) {
          lVar20 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x58) + lVar20) == lVar15) {
              *(int *)(lVar16 + 8) = (int)plVar11[1];
              bVar8 = *(byte *)((longlong)plVar11 + 0xc);
              goto LAB_1433dfd30;
            }
            lVar20 = lVar20 + 8;
          } while ((longlong)*(int *)(param_1 + 0x60) * 8 != lVar20);
        }
        fVar28 = *(float *)(plVar1 + 1);
        fVar36 = *(float *)(plVar1 + 2);
        if (1e-08 < fVar36 * fVar36) {
          fVar44 = *(float *)((longlong)plVar1 + 0x14);
          if (fVar44 <= 1e-08) {
            fVar44 = 1e-08;
          }
          fVar36 = fVar36 / (0.6931472 / fVar44);
          if (fVar36 <= 1e-08) {
            fVar36 = 1e-08;
          }
          fVar44 = (0.6931472 / fVar44) * *(float *)(param_1 + 0x640);
          fVar28 = fVar28 + (1.0 - 1.0 / (fVar44 * 0.25724632 * fVar44 * fVar44 +
                                         fVar44 * 0.45053902 * fVar44 + fVar44 * 1.0074606 + 1.0)) *
                            fVar36;
        }
        *(float *)(lVar16 + 8) =
             (fVar28 - *(float *)(plVar11 + 1)) * fVar27 + *(float *)(plVar11 + 1);
        bVar8 = *(byte *)((longlong)plVar11 + 0xc) | *(byte *)((longlong)plVar1 + 0xc);
LAB_1433dfd30:
        *(byte *)(lVar16 + 0xc) = bVar8;
        iVar18 = iVar18 + 1;
LAB_1433dfd46:
        iVar23 = iVar23 + 1;
        iVar10 = (int)local_1c8;
      }
      else {
        iVar10 = (int)lVar16 - (int)lVar20;
        if (iVar10 == 0) {
          iVar10 = (int)((ulonglong)lVar16 >> 0x20) - (int)((ulonglong)lVar20 >> 0x20);
        }
        iVar13 = (int)local_1a8[1];
        uVar12 = iVar13 + 1;
        *(uint *)(local_1a8 + 1) = uVar12;
        if (-1 < iVar10) {
          if (*(uint *)((longlong)local_1a8 + 0xc) < uVar12) {
            FUN_1406de67a(local_1a8,iVar13);
          }
          lVar20 = *local_1a8;
          lVar21 = (longlong)iVar13 * 0x10;
          lVar16 = lVar20 + lVar21;
          FUN_14470c6f4(lVar16,1);
          lVar15 = *plVar1;
          *(longlong *)(lVar20 + lVar21) = lVar15;
          if ((longlong)*(int *)(param_1 + 0x60) != 0) {
            lVar20 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0x58) + lVar20) == lVar15) {
                *(undefined4 *)(lVar16 + 8) = 0;
                uVar7 = 0;
                goto LAB_1433dfd42;
              }
              lVar20 = lVar20 + 8;
            } while ((longlong)*(int *)(param_1 + 0x60) * 8 != lVar20);
          }
          fVar28 = *(float *)(plVar1 + 1);
          fVar36 = *(float *)(plVar1 + 2);
          if (1e-08 < fVar36 * fVar36) {
            fVar44 = *(float *)((longlong)plVar1 + 0x14);
            if (fVar44 <= 1e-08) {
              fVar44 = 1e-08;
            }
            fVar36 = fVar36 / (0.6931472 / fVar44);
            if (fVar36 <= 1e-08) {
              fVar36 = 1e-08;
            }
            fVar44 = (0.6931472 / fVar44) * *(float *)(param_1 + 0x640);
            fVar28 = fVar28 + (1.0 - 1.0 / (fVar44 * 0.25724632 * fVar44 * fVar44 +
                                           fVar44 * 0.45053902 * fVar44 + fVar44 * 1.0074606 + 1.0))
                              * fVar36;
          }
          *(float *)(lVar16 + 8) = fVar28 * fVar27 + 0.0;
          uVar7 = *(undefined1 *)((longlong)plVar1 + 0xc);
LAB_1433dfd42:
          *(undefined1 *)(lVar16 + 0xc) = uVar7;
          goto LAB_1433dfd46;
        }
        if (*(uint *)((longlong)local_1a8 + 0xc) < uVar12) {
          FUN_1406de67a(local_1a8,iVar13);
        }
        lVar20 = *local_1a8;
        lVar21 = (longlong)iVar13 * 0x10;
        lVar16 = lVar20 + lVar21;
        FUN_14470c6f4(lVar16,1);
        lVar15 = *plVar11;
        *(longlong *)(lVar20 + lVar21) = lVar15;
        if ((longlong)*(int *)(param_1 + 0x60) != 0) {
          lVar20 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x58) + lVar20) == lVar15) {
              fVar28 = *(float *)(plVar11 + 1);
              goto LAB_1433dfd6c;
            }
            lVar20 = lVar20 + 8;
          } while ((longlong)*(int *)(param_1 + 0x60) * 8 != lVar20);
        }
        fVar28 = (0.0 - *(float *)(plVar11 + 1)) * fVar27 + *(float *)(plVar11 + 1);
LAB_1433dfd6c:
        *(float *)(lVar16 + 8) = fVar28;
        *(undefined1 *)(lVar16 + 0xc) = *(undefined1 *)((longlong)plVar11 + 0xc);
        iVar18 = iVar18 + 1;
        iVar10 = (int)local_1c8;
      }
      bVar25 = iVar18 == local_198._0_4_;
      param_3 = local_1a8;
    } while (!bVar25 || iVar10 <= iVar23);
  }
  iVar13 = (iVar10 - iVar23) + (int)param_3[1];
  if (iVar13 < 0) goto LAB_1433e03e9;
  if (*(int *)((longlong)param_3 + 0xc) < iVar13) {
    FUN_14480ffb8(param_3);
  }
  if (iVar23 < iVar10) {
    lVar16 = (longlong)iVar23;
    do {
      dVar34 = (double)*(longlong *)(param_1 + 0x578);
      if (*(longlong *)(param_1 + 0x578) == 0) {
        dVar34 = local_1b8;
      }
      iVar13 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar13 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar13 + 1U) {
        FUN_1406de67a(param_3,iVar13);
      }
      plVar11 = (longlong *)((longlong)dVar34 + lVar16 * 0x18);
      lVar15 = *param_3;
      lVar20 = (longlong)iVar13 * 0x10 + lVar15;
      FUN_14470c6f4(lVar20,1);
      lVar21 = *plVar11;
      *(longlong *)(lVar15 + (longlong)iVar13 * 0x10) = lVar21;
      if ((longlong)*(int *)(param_1 + 0x60) != 0) {
        lVar15 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x58) + lVar15) == lVar21) {
            *(undefined4 *)(lVar20 + 8) = 0;
            uVar7 = 0;
            goto LAB_1433df9d2;
          }
          lVar15 = lVar15 + 8;
        } while ((longlong)*(int *)(param_1 + 0x60) * 8 != lVar15);
      }
      fVar28 = *(float *)(plVar11 + 1);
      fVar36 = *(float *)(plVar11 + 2);
      if (1e-08 < fVar36 * fVar36) {
        fVar44 = *(float *)((longlong)plVar11 + 0x14);
        if (fVar44 <= 1e-08) {
          fVar44 = 1e-08;
        }
        fVar36 = fVar36 / (0.6931472 / fVar44);
        if (fVar36 <= 1e-08) {
          fVar36 = 1e-08;
        }
        fVar44 = (0.6931472 / fVar44) * *(float *)(param_1 + 0x640);
        fVar28 = fVar28 + (1.0 - 1.0 / (fVar44 * 0.25724632 * fVar44 * fVar44 +
                                       fVar44 * 0.45053902 * fVar44 + fVar44 * 1.0074606 + 1.0)) *
                          fVar36;
      }
      *(float *)(lVar20 + 8) = fVar28 * fVar27 + 0.0;
      uVar7 = *(undefined1 *)((longlong)plVar11 + 0xc);
LAB_1433df9d2:
      *(undefined1 *)(lVar20 + 0xc) = uVar7;
      lVar16 = lVar16 + 1;
    } while (iVar10 != (int)lVar16);
  }
LAB_1433dfe93:
  *(undefined1 *)(param_3 + 2) = 1;
  plVar11 = (longlong *)FUN_14010173e();
  if (plVar11 == (longlong *)0x0) goto LAB_1433e0363;
  fVar27 = **(float **)(param_1 + 0x648);
  if (fVar27 <= 1e-08) {
    fVar27 = 1e-08;
  }
  fVar27 = *(float *)(param_1 + 0x640) / fVar27;
  if (1.0 <= fVar27) {
    fVar27 = 1.0;
  }
  if (fVar27 <= 0.0) {
    fVar27 = 0.0;
  }
  fVar27 = (float)FUN_14002c5a6(fVar27,*(undefined1 *)(param_1 + 0x65c),
                                *(undefined8 *)(param_1 + 0x660));
  uVar6 = local_180;
  fVar27 = 1.0 - fVar27;
  if ((fVar27 == 0.0) && (!NAN(fVar27))) goto LAB_1433e0363;
  pdVar17 = (double *)&DAT_14c846480;
  pdVar19 = local_178;
  for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
    *pdVar19 = *pdVar17;
    pdVar17 = pdVar17 + 1;
    pdVar19 = pdVar19 + 1;
  }
  cVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,local_180);
  if (cVar9 == '\0') goto LAB_1433e0363;
  dVar31 = (double)*(float *)(param_1 + 0x638);
  dVar34 = (double)fVar27;
  local_148 = ((double)*(float *)(param_1 + 0x498) * dVar31 - local_148) * dVar34 + local_148;
  dStack_150 = ((double)*(float *)(param_1 + 0x494) * dVar31 - dStack_150) * dVar34 + dStack_150;
  local_158 = ((double)*(float *)(param_1 + 0x490) * dVar31 - local_158) * dVar34 + local_158;
  uStack_140 = 0;
  dVar35 = (double)*(float *)(param_1 + 0x4a4) * dVar31 * dVar34 * 0.5;
  dVar37 = (double)*(float *)(param_1 + 0x4a0) * dVar31 * dVar34 * 0.5;
  dVar39 = (double)*(float *)(param_1 + 0x49c) * dVar31 * dVar34 * 0.5;
  dVar31 = SQRT(dVar35 * dVar35 + dVar39 * dVar39 + dVar37 * dVar37);
  dVar32 = sin(dVar31);
  dVar33 = cos(dVar31);
  uVar50 = 0xe0000000;
  uVar52 = 0x3e45798e;
  dVar5 = 9.99999993922529e-09;
  dVar4 = 9.99999993922529e-09;
  dVar31 = dVar32 / dVar31;
  uVar24 = -(ulonglong)(ABS(dVar32) < 9.99999993922529e-09);
  dVar39 = (double)(uVar24 & (ulonglong)dVar39 | ~uVar24 & (ulonglong)(dVar39 * dVar31));
  if (9.99999993922529e-09 <= ABS(dVar32)) {
    dVar37 = dVar37 * dVar31;
    dVar35 = dVar35 * dVar31;
  }
  dVar31 = local_138._0_8_;
  uVar51 = local_138._0_4_;
  uVar53 = local_138._4_4_;
  dVar32 = local_138._8_8_;
  dVar38 = dVar39 * local_178[1];
  dVar40 = dVar39 * local_178[0];
  dVar41 = local_178[0] * dVar37;
  dVar43 = local_178[1] * dVar37;
  dVar29 = local_178[0] * dVar35;
  dVar30 = local_178[2] * dVar35;
  local_178[0] = local_178[1] * dVar35 * -1.0 +
                 local_178[2] * dVar37 + local_178[3] * dVar39 * 1.0 + local_178[0] * dVar33;
  local_178[1] = dVar29 * 1.0 +
                 local_178[3] * dVar37 + local_178[2] * dVar39 * -1.0 + local_178[1] * dVar33;
  local_178[2] = local_178[3] * dVar35 * 1.0 + ((dVar38 * 1.0 + dVar33 * local_178[2]) - dVar41);
  local_178[3] = dVar30 * -1.0 + ((dVar40 * -1.0 + dVar33 * local_178[3]) - dVar43);
  dVar37 = (double)*(float *)(param_1 + 0x638);
  dVar35 = (double)*(float *)(param_1 + 0x4b0) * dVar37;
  dVar39 = (double)*(float *)(param_1 + 0x4ac) * dVar37;
  dVar37 = (double)*(float *)(param_1 + 0x4a8) * dVar37;
  if (*(char *)(param_1 + 0x54) == '\x01') {
    dVar37 = dVar37 - dVar31;
    dVar35 = (dVar35 - local_128) * dVar34 + local_128;
    dVar32 = (dVar39 - dVar32) * dVar34 + dVar32;
LAB_1433e026a:
    dVar34 = dVar37 * dVar34 + (double)CONCAT44(uVar53,uVar51);
  }
  else {
    if ((dVar35 - local_128) * (dVar35 - local_128) +
        (dVar39 - dVar32) * (dVar39 - dVar32) + (dVar37 - dVar31) * (dVar37 - dVar31) <
        9.99999993922529e-09) {
      if (dVar35 <= 9.99999993922529e-09) {
        dVar35 = dVar5;
      }
      if (local_128 <= 9.99999993922529e-09) {
        local_128 = 9.99999993922529e-09;
      }
      dVar35 = (dVar35 - local_128) * dVar34 + local_128;
      if (dVar39 <= 9.99999993922529e-09) {
        dVar39 = dVar5;
      }
      uVar55 = local_138._8_4_;
      uVar56 = local_138._12_4_;
      if (dVar32 <= 9.99999993922529e-09) {
        uVar55 = uVar50;
        uVar56 = uVar52;
      }
      dVar32 = (dVar39 - (double)CONCAT44(uVar56,uVar55)) * dVar34 + (double)CONCAT44(uVar56,uVar55)
      ;
      if (dVar37 <= 9.99999993922529e-09) {
        dVar37 = dVar5;
      }
      if (dVar31 <= 9.99999993922529e-09) {
        uVar51 = uVar50;
        uVar53 = uVar52;
      }
      dVar37 = dVar37 - (double)CONCAT44(uVar53,uVar51);
      goto LAB_1433e026a;
    }
    if (local_128 <= 9.99999993922529e-09) {
      local_128 = 9.99999993922529e-09;
    }
    dVar5 = (double)(1.0 - fVar27);
    dVar33 = pow(local_128,dVar5);
    if (dVar35 <= 9.99999993922529e-09) {
      dVar35 = dVar4;
    }
    dVar35 = pow(dVar35,dVar34);
    dVar35 = dVar35 * dVar33;
    uVar55 = local_138._8_4_;
    uVar56 = local_138._12_4_;
    if (dVar32 <= 9.99999993922529e-09) {
      uVar55 = uVar50;
      uVar56 = uVar52;
    }
    dVar33 = pow((double)CONCAT44(uVar56,uVar55),dVar5);
    if (dVar39 <= 9.99999993922529e-09) {
      dVar39 = dVar4;
    }
    dVar32 = pow(dVar39,dVar34);
    dVar32 = dVar32 * dVar33;
    if (dVar31 <= 9.99999993922529e-09) {
      uVar51 = uVar50;
      uVar53 = uVar52;
    }
    dVar31 = pow((double)CONCAT44(uVar53,uVar51),dVar5);
    if (dVar37 <= 9.99999993922529e-09) {
      dVar37 = dVar4;
    }
    dVar34 = pow(dVar37,dVar34);
    dVar34 = dVar34 * dVar31;
  }
  local_138._8_4_ = SUB84(dVar32,0);
  local_138._0_8_ = dVar34;
  local_138._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  uStack_120 = 0;
  local_128 = dVar35;
  (**(code **)(*plVar11 + 0x18))(plVar11,local_178,uVar6);
LAB_1433e0363:
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433e03f1 FUN_1433e03f1 body=55 status=ok
// SIG undefined FUN_1433e03f1(void)

void FUN_1433e03f1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbd10 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbd10 = FUN_14171c317(FUN_1463a53a8,uVar1,L"EInertializationState");
  }
  return;
}



// FUNCTION 1433e0428 FUN_1433e0428 body=55 status=ok
// SIG undefined FUN_1433e0428(void)

void FUN_1433e0428(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbd28 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbd28 = FUN_14171c317(FUN_1463a53d7,uVar1,L"EInertializationBoneState");
  }
  return;
}



// FUNCTION 1433e045f FUN_1433e045f body=55 status=ok
// SIG undefined FUN_1433e045f(void)

void FUN_1433e045f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbd40 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbd40 = FUN_14171c317(FUN_1463a5406,uVar1,L"EInertializationSpace");
  }
  return;
}



// FUNCTION 1433e0496 FUN_1433e0496 body=69 status=ok
// SIG undefined FUN_1433e0496(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433e0496(void)

{
  _DAT_14cacbdb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433e04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacbdc0,1);
  return;
}



// FUNCTION 1433e04db FUN_1433e04db body=69 status=ok
// SIG undefined FUN_1433e04db(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433e04db(void)

{
  _DAT_14cacbdd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433e051d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacbdd8,1);
  return;
}



// FUNCTION 1433e0520 FUN_1433e0520 body=69 status=ok
// SIG undefined FUN_1433e0520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433e0520(void)

{
  _DAT_14cacbde8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433e0562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacbdf0,1);
  return;
}



// FUNCTION 1433e056c FUN_1433e056c body=264 status=ok
// SIG undefined FUN_1433e056c(void)

ulonglong FUN_1433e056c(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_147508a86();
  uVar5 = 0;
  if (((lVar4 != 0) && (uVar5 = FUN_1433e0676(param_1,param_2), lVar4 != param_2)) &&
     (uVar5 = (**(code **)(*param_1 + 0x118))(param_1,lVar4), (char)uVar5 != '\0')) {
    lVar3 = *(longlong *)(param_2 + 0x20);
    local_38 = lVar4;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar4);
    }
    local_30 = &local_38;
    FUN_14791b116(lVar3 + 0xb78);
    FUN_140107fd2(lVar4);
    FUN_144757f48(lVar4,0x40000000);
    uVar2 = *(uint *)(lVar4 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    do {
      uVar2 = *(uint *)(lVar4 + 8);
      uVar5 = (ulonglong)uVar2;
      if ((uVar2 >> 0x15 & 1) != 0) break;
      LOCK();
      uVar1 = *(uint *)(lVar4 + 8);
      if (uVar2 == uVar1) {
        *(uint *)(lVar4 + 8) = uVar2 | 0x200000;
      }
      else {
        uVar5 = (ulonglong)uVar1;
      }
      UNLOCK();
    } while (uVar2 != uVar1);
  }
  param_1[7] = 0;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1433e0676 FUN_1433e0676 body=325 status=ok
// SIG undefined FUN_1433e0676(void)

void FUN_1433e0676(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[0x11] = 0;
  lVar2 = (**(code **)(*param_1 + 0x110))();
  if ((lVar2 != 0) &&
     (plVar3 = (longlong *)FUN_140721bac(*(undefined8 *)(lVar2 + 0x10)), plVar3 != (longlong *)0x0))
  {
    (**(code **)(*param_1 + 0x108))(param_1,&local_38);
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x80))(plVar3);
    if ((longlong)(int)plVar3[1] != 0) {
      lVar1 = *plVar3;
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar1 + lVar4) == local_38) {
          uVar5 = *(uint *)(lVar1 + 0x20 + lVar4);
          if (0 < (int)uVar5) {
            lVar7 = 0;
            goto LAB_1433e0726;
          }
          break;
        }
        lVar4 = lVar4 + 0x78;
      } while ((longlong)(int)plVar3[1] * 0x78 - lVar4 != 0);
    }
  }
  goto LAB_1433e078f;
LAB_1433e0726:
  do {
    if ((int)param_1[0xd] <= lVar7) break;
    if (0 < (int)uVar5) {
      lVar6 = *(longlong *)(lVar1 + 0x18 + lVar4);
      uVar8 = 0;
      do {
        if (*(longlong *)(lVar6 + lVar7 * 8) == *(longlong *)(lVar6 + uVar8 * 8)) {
          lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x40 + lVar4) + uVar8 * 8);
          if (lVar6 != 0) {
            lVar6 = (longlong)*(int *)(lVar6 + 0x44);
            *(undefined8 *)(lVar2 + 0xb8 + lVar6) = 0;
            *(undefined8 *)(lVar2 + 0x28 + lVar6) = 0;
            *(undefined4 *)(lVar2 + 0x30 + lVar6) = 0xffffffff;
            *(undefined4 *)(lVar2 + 0xb4 + lVar6) = 0xffffffff;
            uVar5 = *(uint *)(lVar1 + 0x20 + lVar4);
          }
          break;
        }
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 < (int)uVar5);
LAB_1433e078f:
  *(undefined4 *)((longlong)param_1 + 0x94) = 0xffffffff;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433e07bc FUN_1433e07bc body=829 status=ok
// SIG undefined FUN_1433e07bc(void)

void FUN_1433e07bc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
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
  code *local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_5c;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0xffffffff;
  lVar6 = (**(code **)(*param_1 + 0x110))();
  if ((lVar6 == 0) ||
     (plVar7 = (longlong *)FUN_140721bac(*(undefined8 *)(lVar6 + 0x10)), plVar7 == (longlong *)0x0))
  goto LAB_1433e0a00;
  lVar1 = param_2[4];
  if (lVar1 != 0) {
    if (DAT_14cad2858 == 0) {
      local_90 = &local_70;
      local_70 = FUN_144a7958c;
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
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar3 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60), iVar3 != 2)) {
        if (iVar3 == 1) {
          DVar4 = FUN_140ad26c0();
          DVar5 = GetCurrentThreadId();
          if (DVar4 == DVar5) goto LAB_1433e0ae7;
        }
      }
      else {
LAB_1433e0ae7:
        FUN_14036294a(param_2[4],1,1);
      }
    }
  }
  pcVar8 = (code *)param_2[0x7c];
  if (pcVar8 == (code *)0x0) {
    pcVar8 = (code *)(**(code **)(*param_2 + 0x350))(param_2);
    param_2[0x7c] = (longlong)pcVar8;
  }
  (**(code **)(*param_1 + 0x108))(param_1,&local_50);
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x80))(plVar7);
  if (0 < (longlong)(int)plVar7[1]) {
    lVar1 = *plVar7;
    lVar12 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar12) == local_50) {
        *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(lVar1 + 0x10 + lVar12);
        if (*(int *)(lVar1 + 0x20 + lVar12) < 1) goto LAB_1433e09e8;
        lVar13 = 0;
        goto LAB_1433e091b;
      }
      lVar12 = lVar12 + 0x78;
    } while ((longlong)(int)plVar7[1] * 0x78 - lVar12 != 0);
  }
LAB_1433e0a00:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1433e091b:
  do {
    if ((int)param_1[0xd] <= lVar13) break;
    local_68 = 0;
    local_60 = 1;
    local_5c = 0xffffffffffffffff;
    local_70 = pcVar8;
    FUN_1403204a6(param_1[0xc] + lVar13 * 0x10);
    iVar3 = *(int *)(lVar1 + 0x20 + lVar12);
    if (0 < (longlong)iVar3) {
      lVar2 = *(longlong *)(lVar1 + 0x18 + lVar12);
      lVar10 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar13 * 8) == *(longlong *)(lVar2 + lVar10 * 8)) {
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x40 + lVar12) + lVar10 * 8);
          if (lVar2 != 0) {
            lVar10 = (longlong)*(int *)(lVar2 + 0x44);
            lVar2 = param_1[0x12];
            puVar11 = (undefined8 *)(lVar13 * 0x10 + param_1[0xc]);
            *(code **)(lVar6 + 0xb8 + lVar10) = pcVar8;
            if (puVar11 == (undefined8 *)0x0) {
              *(undefined8 *)(lVar6 + 0x28 + lVar10) = 0;
              uVar9 = 0xffffffff;
            }
            else {
              *(undefined8 *)(lVar6 + 0x28 + lVar10) = *puVar11;
              uVar9 = *(undefined4 *)(puVar11 + 1);
            }
            *(undefined4 *)(lVar6 + 0x30 + lVar10) = uVar9;
            *(int *)(lVar6 + 0xb4 + lVar10) = (int)lVar2;
            iVar3 = *(int *)(lVar1 + 0x20 + lVar12);
          }
          break;
        }
        lVar10 = lVar10 + 1;
      } while (iVar3 != lVar10);
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 < iVar3);
LAB_1433e09e8:
  lVar1 = *(longlong *)(lVar1 + 0x38 + lVar12);
  if (lVar1 != 0) {
    param_1[0x11] = lVar6 + *(int *)(lVar1 + 0x44);
  }
  goto LAB_1433e0a00;
}



// FUNCTION 1433e0b02 FUN_1433e0b02 body=722 status=ok
// SIG undefined FUN_1433e0b02(void)

void FUN_1433e0b02(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  if (*param_2 == 0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = *(longlong **)(*param_2 + 0x138);
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  if ((lVar3 != 0) && (*(undefined8 *)(param_1 + 0x2c) = 0xffffffff, 0 < *(int *)(lVar3 + 0x18))) {
    plVar1 = (longlong *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x5c) < 0) {
      FUN_14179bb54(plVar1,0);
    }
    iVar9 = *(int *)(lVar3 + 0x18);
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if (*(int *)(param_1 + 0x5c) < iVar9) {
      FUN_14179bb54();
      iVar9 = *(int *)(lVar3 + 0x18);
    }
    if (0 < iVar9) {
      lVar8 = 0;
      do {
        lVar11 = lVar8 * 0x78 + *(longlong *)(lVar3 + 0x10);
        iVar9 = *(int *)(param_1 + 0x58);
        *(uint *)(param_1 + 0x58) = iVar9 + 1U;
        if (*(uint *)(param_1 + 0x5c) < iVar9 + 1U) {
          FUN_140554e38(plVar1,iVar9);
        }
        lVar12 = (longlong)iVar9 * 0x10 + *plVar1;
        FUN_140554e1c(lVar12,1);
        if (*(int *)(lVar11 + 0x18) != -1) {
          lVar5 = (**(code **)(*plVar10 + 0x20))(plVar10);
          *(uint *)(lVar12 + 8) = ~*(uint *)(lVar11 + 0x18) + *(int *)(lVar5 + 8);
        }
        uVar2 = *(uint *)(lVar11 + 0x2c);
        if (uVar2 != 0xffffffff) {
          lVar12 = *(longlong *)(*param_2 + 0x130);
          plVar6 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10);
          lVar5 = (**(code **)(*plVar10 + 0x20))(plVar10);
          plVar6 = (longlong *)
                   (*(int *)(*(longlong *)
                              (*plVar6 + (longlong)(int)(~uVar2 + *(int *)(lVar5 + 8)) * 8) + 0x44)
                   + lVar12);
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6,param_2);
          }
        }
        if (0 < *(int *)(lVar11 + 0x10)) {
          lVar5 = 0;
          lVar12 = 0;
          do {
            uVar2 = *(uint *)(*(longlong *)(lVar11 + 8) + lVar5);
            if (uVar2 != 0xffffffff) {
              lVar4 = *(longlong *)(*param_2 + 0x130);
              plVar6 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10);
              lVar7 = (**(code **)(*plVar10 + 0x20))(plVar10);
              plVar6 = (longlong *)
                       (*(int *)(*(longlong *)
                                  (*plVar6 + (longlong)(int)(~uVar2 + *(int *)(lVar7 + 8)) * 8) +
                                0x44) + lVar4);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 0x10))(plVar6,param_2);
              }
            }
            lVar12 = lVar12 + 1;
            lVar5 = lVar5 + 0x30;
          } while (lVar12 < *(int *)(lVar11 + 0x10));
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(lVar3 + 0x18));
    }
    if (*(int *)(param_1 + 0x6c) < 0) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      FUN_14481578e(param_1 + 0x60,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    iVar9 = *(int *)(param_1 + 0x4c);
    FUN_1407c4b0e(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
    if ((iVar9 < 0) && (*(int *)(param_1 + 0x4c) != 0)) {
      FUN_1479205f2(param_1 + 0x40);
    }
    iVar9 = *(int *)(param_1 + 0x9c);
    FUN_1407c4add(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
    *(undefined4 *)(param_1 + 0x98) = 0;
    if ((iVar9 < 0) && (*(int *)(param_1 + 0x9c) != 0)) {
      FUN_145753d5e(param_1 + 0x90,0);
    }
    FUN_14066f67a(param_1 + 0xc0,*(undefined4 *)(lVar3 + 0x18));
    FUN_14066f6a6(param_1 + 0xc0,*(undefined4 *)(lVar3 + 0x18));
    FUN_1408b8e5c(param_1,param_2,*(undefined4 *)(lVar3 + 8));
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}



// FUNCTION 1433e0dd6 FUN_1433e0dd6 body=412 status=ok
// SIG undefined FUN_1433e0dd6(void)

void FUN_1433e0dd6(longlong param_1,longlong *param_2)

{
  float fVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined1 local_60;
  undefined8 local_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x38);
  if ((lVar3 != 0) && (iVar5 = *(int *)(lVar3 + 0x18), 0 < iVar5)) {
    uVar8 = 0;
    do {
      if ((longlong)*(int *)(param_1 + 0x48) < 1) {
        if (uVar8 == *(uint *)(param_1 + 0x2c)) {
LAB_1433e0ea8:
          lVar4 = *param_2;
          lVar6 = uVar8 * 0x10;
          sVar2 = *(short *)(*(longlong *)(param_1 + 0xc0) + 8 + lVar6);
          plVar7 = (longlong *)(*(longlong *)(param_1 + 0xc0) + lVar6);
          if ((((sVar2 == -1) || (*plVar7 == -1)) || (sVar2 != *(short *)(lVar4 + 0x5d8))) ||
             (*plVar7 != *(longlong *)(lVar4 + 0x5d0))) {
            *(undefined2 *)(plVar7 + 1) = *(undefined2 *)(lVar4 + 0x5d8);
            *plVar7 = *(longlong *)(lVar4 + 0x5d0);
            *(undefined2 *)((longlong)plVar7 + 10) = *(undefined2 *)(lVar4 + 0x5da);
            local_70[1] = 0;
            local_60 = 1;
            local_5c = 0xffffffffffffffff;
            plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x50) + lVar6);
            local_70[0] = lVar4;
            if (plVar7 != (longlong *)0x0) {
              (**(code **)(*plVar7 + 0x18))(plVar7,local_70);
            }
            iVar5 = *(int *)(lVar3 + 0x18);
          }
        }
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x40);
        fVar9 = 0.0;
        lVar6 = 0;
        do {
          fVar1 = *(float *)(lVar4 + 4 + lVar6);
          fVar10 = 1.0 - fVar1;
          if (lVar6 == 0) {
            if (uVar8 == *(uint *)(lVar4 + 0x34)) {
              fVar9 = fVar9 + fVar10;
            }
          }
          else {
            fVar9 = fVar9 * fVar10;
          }
          if (uVar8 == *(uint *)(lVar4 + 0x30 + lVar6)) {
            fVar9 = fVar9 + fVar1;
          }
          lVar6 = lVar6 + 200;
        } while ((longlong)*(int *)(param_1 + 0x48) * 200 - lVar6 != 0);
        if (1.0 <= fVar9) {
          fVar9 = 1.0;
        }
        if (0.0 < fVar9) goto LAB_1433e0ea8;
      }
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < (longlong)iVar5);
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433e0f73 FUN_1433e0f73 body=69 status=ok
// SIG undefined FUN_1433e0f73(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433e0f73(void)

{
  _DAT_14cacbf30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433e0fb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacbf38,1);
  return;
}



// FUNCTION 1433e0fb8 FUN_1433e0fb8 body=6321 status=ok
// SIG undefined FUN_1433e0fb8(void)

void FUN_1433e0fb8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 (*pauVar2) [12];
  LARGE_INTEGER LVar3;
  int *piVar4;
  char *pcVar5;
  double dVar6;
  char cVar7;
  short sVar8;
  void *_Dst;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  byte bVar14;
  bool bVar15;
  short sVar16;
  uint uVar17;
  int iVar18;
  DWORD DVar19;
  DWORD DVar20;
  int iVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  longlong *plVar24;
  longlong lVar25;
  uint uVar26;
  float *pfVar27;
  bool bVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong *plVar31;
  undefined1 *puVar32;
  longlong lVar33;
  int iVar34;
  longlong *plVar35;
  ulonglong uVar36;
  longlong lVar37;
  bool bVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_1b8 [32];
  char **local_198;
  undefined1 local_190;
  longlong *local_180;
  ulonglong local_178;
  float *local_170;
  undefined8 local_168;
  undefined8 local_160;
  char local_158;
  float local_150;
  float local_14c;
  LARGE_INTEGER local_148;
  longlong *plStack_140;
  undefined4 local_138;
  undefined8 uStack_134;
  undefined4 uStack_12c;
  longlong local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined4 uStack_118;
  int iStack_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  char *local_f8;
  longlong lStack_f0;
  undefined1 local_e8 [4];
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [4];
  undefined1 auStack_d4 [12];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  *(int *)(*(longlong *)(*param_2 + 0x2a0 + (longlong)*(int *)(*param_2 + 0x330) * 0x10) +
          (longlong)(int)param_1[3] * 4) = (int)param_2[4];
  lVar29 = DAT_14cacbf40;
  local_180 = param_2;
  if (((((char)param_1[5] == '\0') && (*(char *)((longlong)param_1 + 0x25) == '\x01')) &&
      (sVar8 = (short)param_1[0x17], sVar8 != -1)) &&
     ((param_1[0x16] != -1 && (sVar8 != *(short *)(*param_2 + 0x5e8))))) {
    sVar16 = sVar8 + 2;
    if ((short)(sVar8 + 1) != -1) {
      sVar16 = sVar8 + 1;
    }
    if (((sVar16 != *(short *)(*param_2 + 0x5e8)) || (sVar16 == -1)) || (DAT_14c872be0 == -1)) {
      iVar21 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar21 == 0x40000002) {
        uVar36 = 0;
      }
      else {
        bVar38 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar21 != 2)) {
          if (iVar21 == 1) {
            DVar19 = FUN_140ad26c0();
            DVar20 = GetCurrentThreadId();
            bVar38 = DVar19 == DVar20;
          }
          else {
            bVar38 = false;
          }
        }
        uVar36 = (ulonglong)(bVar38 ^ 1);
      }
      param_2 = local_180;
      if (*(int *)(lVar29 + uVar36 * 4) == 1) {
        local_148.QuadPart = *local_180;
        plStack_140 = (longlong *)local_180[1];
        local_138 = CONCAT31(local_138._1_3_,1);
        uStack_134 = 0xffffffffffffffff;
        (**(code **)(*param_1 + 0x10))(param_1);
      }
    }
  }
  lVar29 = *param_2;
  *(undefined2 *)(param_1 + 0x17) = *(undefined2 *)(lVar29 + 0x5e8);
  param_1[0x16] = *(longlong *)(lVar29 + 0x5e0);
  *(undefined2 *)((longlong)param_1 + 0xba) = *(undefined2 *)(lVar29 + 0x5ea);
  plVar31 = param_1 + 0x12;
  iVar21 = (int)param_1[0x13];
  uVar36 = (ulonglong)iVar21;
  if (0 < (longlong)uVar36) {
    lVar29 = uVar36 * 0x50 + -0x18;
    do {
      lVar37 = *plVar31;
      dVar6 = *(double *)(lVar37 + lVar29);
      QueryPerformanceCounter(&local_148);
      if (dVar6 - (((double)local_148.QuadPart * DAT_14c83f420 + 16777216.0) -
                  *(double *)(lVar37 + -8 + lVar29)) <= 0.0) {
        FUN_145753cfe(plVar31,(int)uVar36 + -1);
      }
      lVar29 = lVar29 + -0x50;
      bVar38 = 1 < uVar36;
      uVar36 = uVar36 - 1;
    } while (bVar38);
    iVar21 = (int)param_1[0x13];
    param_2 = local_180;
  }
  if (*(int *)((longlong)param_1 + 0x9c) != iVar21) {
    FUN_145753d5e(plVar31,iVar21);
  }
  lVar29 = param_1[7];
  if ((lVar29 != 0) && (*(int *)(lVar29 + 0x18) != 0)) {
    uVar17 = *(uint *)((longlong)param_1 + 0x2c);
    if ((int)uVar17 < *(int *)(lVar29 + 0x18) && -1 < (int)uVar17) {
      if ((char)param_1[5] == '\x01') {
        FUN_1408b8952(*param_2,*(undefined4 *)
                                (*(longlong *)(lVar29 + 0x10) + 0x1c + (ulonglong)uVar17 * 0x78));
        iVar21 = *(int *)((longlong)param_1 + 0x2c);
        if (((longlong)iVar21 != -1) && (iVar21 < (int)param_1[0xf])) {
          lVar29 = (longlong)iVar21 * 0x10;
          if ((*(int *)(param_1[0xe] + 8 + lVar29) != 0) &&
             (plVar31 = *(longlong **)(param_1[0xe] + lVar29), plVar31 != (longlong *)0x0)) {
            (**(code **)(*plVar31 + 0x60))(plVar31,param_1,0xffffffff);
          }
        }
      }
      iVar21 = 0;
      do {
        local_148.QuadPart = (LONGLONG)&DAT_ffffffff;
        plStack_140 = (longlong *)0x0;
        local_128 = 0;
        uStack_120 = 0;
        uStack_11c = 3;
        _local_e8 = ZEXT816(0x400000000) << 0x40;
        local_198 = &local_f8;
        FUN_14488c35c(param_1,local_180,
                      (longlong)*(int *)((longlong)param_1 + 0x2c) * 0x78 +
                      *(longlong *)(param_1[7] + 0x10));
        if (_local_e8 != 0) {
          FUN_1400020a8();
        }
        if ((((local_148.s.LowPart == 0xffffffff) || (plStack_140 == (longlong *)0x0)) ||
            ((longlong)(int)plStack_140[1] == -1)) ||
           (local_148.s.LowPart == *(DWORD *)((longlong)param_1 + 0x2c))) {
          bVar38 = false;
        }
        else {
          FUN_1408b824a(param_1,local_180,
                        (longlong)(int)plStack_140[1] * 0x40 + *(longlong *)(param_1[7] + 0x20));
          iVar21 = iVar21 + 1;
          bVar38 = true;
        }
        if (local_128 != 0) {
          FUN_1400020a8();
        }
      } while ((bVar38) && (iVar21 < *(int *)((longlong)param_1 + 0x1c)));
      plVar31 = local_180;
      if ((char)param_1[5] == '\x01') {
        if (*(char *)((longlong)param_1 + 0x24) == '\x01') {
          iVar21 = *(int *)((longlong)param_1 + 0x4c);
          FUN_1407c4b0e(param_1[8],(int)param_1[9]);
          plVar31 = local_180;
          *(undefined4 *)(param_1 + 9) = 0;
          if ((iVar21 < 0) && (*(int *)((longlong)param_1 + 0x4c) != 0)) {
            FUN_1479205f2();
          }
        }
        *(undefined1 *)(param_1 + 5) = 0;
      }
      *(undefined4 *)(param_1 + 0xd) = 0;
      if (*(int *)((longlong)param_1 + 0x6c) < 0) {
        FUN_14481578e(param_1 + 0xc,0);
      }
      plVar1 = param_1 + 8;
      iVar21 = (int)param_1[9];
      if (iVar21 < 1) {
        local_178 = 0;
      }
      else {
        local_128 = 0;
        uStack_120 = 0;
        local_148.QuadPart = 0;
        plStack_140 = (longlong *)0x0;
        uStack_11c = 0x80;
        uStack_118 = 0xffffffff;
        iStack_114 = 0;
        local_108 = (undefined1 *)0x0;
        local_178 = 0;
        local_100 = 0;
        pauVar2 = (undefined1 (*) [12])((longlong)plVar31 + 0x24);
        uVar36 = 0;
        plVar24 = plVar31;
        do {
          lVar29 = *plVar1;
          lVar37 = uVar36 * 200;
          bVar14 = *(byte *)(lVar29 + 0xc2 + lVar37);
          if (bVar14 == 1) {
            pfVar27 = (float *)(lVar29 + lVar37);
            *pfVar27 = *(float *)(plVar24 + 5) + *pfVar27;
            FUN_14470c566(pfVar27 + 0x22,(int)plVar24[5]);
            fVar39 = 0.0;
            if (0.0 < pfVar27[2]) {
              fVar39 = *pfVar27 / pfVar27[2];
            }
            fVar39 = (float)FUN_14002c5a6(fVar39,*(undefined1 *)(pfVar27 + 0x2b),
                                          *(undefined8 *)(pfVar27 + 0x22));
            pfVar27[1] = fVar39;
            if (*(char *)((longlong)pfVar27 + 0xaf) == '\0') {
              fVar39 = pfVar27[0x2c];
            }
            else {
              fVar39 = pfVar27[0x29];
              fVar41 = pfVar27[0x2a];
              fVar40 = (float)FUN_14002c5a6(0x3f800000,*(undefined1 *)(pfVar27 + 0x2b),
                                            *(undefined8 *)(pfVar27 + 0x22));
              fVar39 = fVar40 * (fVar41 - fVar39) + fVar39;
              pfVar27[0x2c] = fVar39;
              *(undefined1 *)((longlong)pfVar27 + 0xaf) = 0;
            }
            fVar41 = pfVar27[0x28];
            if ((fVar39 == fVar41) && (!NAN(fVar39) && !NAN(fVar41))) {
              *(undefined1 *)((longlong)pfVar27 + 0xc2) = 0;
            }
            if (*(longlong *)(pfVar27 + 0x2e) != 0) {
              local_170 = pfVar27 + 0x16;
              bVar15 = false;
              lVar29 = 0;
              bVar38 = true;
              do {
                bVar28 = bVar38;
                fVar40 = pfVar27[1];
                if (bVar15) {
                  fVar40 = 1.0 - fVar40;
                }
                lVar29 = lVar29 * 0x60;
                *(float *)(*(longlong *)(pfVar27 + 0x16) + 0x10 + lVar29) = fVar40;
                local_198 = (char **)CONCAT44(local_198._4_4_,
                                              *(undefined4 *)
                                               (*(longlong *)(pfVar27 + 0x16) + 0x10 + lVar29));
                local_190 = bVar15;
                FUN_147938c28(*(undefined8 *)(pfVar27 + 0x2e),*(longlong *)(pfVar27 + 0x16) + lVar29
                              ,pfVar27 + 0x22,0);
                lVar29 = 1;
                bVar15 = true;
                bVar38 = false;
              } while (bVar28);
              FUN_1448d859c();
              plVar24 = local_180;
            }
            lVar29 = *plVar1;
            if ((fVar39 != fVar41) || (NAN(fVar39) || NAN(fVar41))) {
              bVar14 = *(byte *)(lVar29 + 0xc2 + lVar37);
              goto LAB_1433e17dd;
            }
            uVar17 = *(uint *)(lVar29 + 0x34 + lVar37);
            local_f8 = (char *)CONCAT44(local_f8._4_4_,uVar17);
            if (((-1 < (longlong)(int)uVar17) && (uVar17 != *(uint *)((longlong)param_1 + 0x2c))) &&
               ((int)uVar17 < (int)param_1[0xb])) {
              lVar25 = (longlong)(int)uVar17 * 0x10;
              if (*(int *)(param_1[10] + 8 + lVar25) != -1) {
                if ((int)plStack_140 != iStack_114) {
                  puVar32 = local_108;
                  if (local_108 == (undefined1 *)0x0) {
                    puVar32 = local_110;
                  }
                  for (iVar21 = *(int *)(puVar32 + (ulonglong)(local_100 + 0x7fffffffU & uVar17) * 4
                                        ); iVar21 != -1;
                      iVar21 = *(int *)((undefined1 *)(local_148.QuadPart + (longlong)iVar21 * 0xc)
                                       + 4)) {
                    if (*(uint *)(local_148.QuadPart + (longlong)iVar21 * 0xc) == uVar17)
                    goto LAB_1433e15e0;
                  }
                }
                if (0 < (longlong)(int)param_1[9]) {
                  fVar39 = 0.0;
                  lVar33 = 0;
                  do {
                    fVar41 = *(float *)(lVar29 + 4 + lVar33);
                    fVar40 = 1.0 - fVar41;
                    if (lVar33 == 0) {
                      if (*(uint *)(lVar29 + 0x34) == uVar17) {
                        fVar39 = fVar39 + fVar40;
                      }
                    }
                    else {
                      fVar39 = fVar39 * fVar40;
                    }
                    if (*(uint *)(lVar29 + 0x30 + lVar33) == uVar17) {
                      fVar39 = fVar39 + fVar41;
                    }
                    lVar33 = lVar33 + 200;
                  } while ((longlong)(int)param_1[9] * 200 - lVar33 != 0);
                  if (1.0 <= fVar39) {
                    fVar39 = 1.0;
                  }
                  if ((0.0 < fVar39) && (1e-08 < fVar39)) goto LAB_1433e15e0;
                }
                uVar22 = FUN_1409379ec(*(undefined8 *)(param_1[10] + lVar25));
                FUN_140fbdcea(uVar22,plVar24,param_1);
                FUN_1447cbafe(&local_148,&local_168,&local_f8);
              }
            }
LAB_1433e15e0:
            if (uVar36 == (int)param_1[9] - 1) {
              FUN_1408b8952(*plVar24,*(undefined4 *)(param_1[8] + 0x3c + lVar37));
              FUN_1408b8952(*plVar24,*(undefined4 *)
                                      (*(longlong *)(param_1[7] + 0x10) + 0x24 +
                                      (longlong)*(int *)((longlong)param_1 + 0x2c) * 0x78));
              iVar21 = *(int *)(param_1[8] + 0x30 + lVar37);
              if ((-1 < (longlong)iVar21) && (iVar18 = (int)param_1[0xb], iVar21 < iVar18)) {
                if ((uVar36 != 0) && (1 < (int)param_1[9])) {
                  uVar30 = 0;
                  do {
                    uVar17 = *(uint *)(param_1[8] + 0x34 + uVar30 * 200);
                    local_f8 = (char *)CONCAT44(local_f8._4_4_,uVar17);
                    if (((-1 < (longlong)(int)uVar17) &&
                        (uVar17 != *(uint *)((longlong)param_1 + 0x2c))) &&
                       ((int)uVar17 < (int)param_1[0xb])) {
                      lVar29 = (longlong)(int)uVar17 * 0x10;
                      if (*(int *)(param_1[10] + 8 + lVar29) != -1) {
                        if ((int)plStack_140 != iStack_114) {
                          puVar32 = local_108;
                          if (local_108 == (undefined1 *)0x0) {
                            puVar32 = local_110;
                          }
                          for (iVar18 = *(int *)(puVar32 +
                                                (ulonglong)(local_100 + 0x7fffffffU & uVar17) * 4);
                              iVar18 != -1;
                              iVar18 = *(int *)((undefined1 *)
                                                (local_148.QuadPart + (longlong)iVar18 * 0xc) + 4))
                          {
                            if (*(uint *)(local_148.QuadPart + (longlong)iVar18 * 0xc) == uVar17)
                            goto LAB_1433e172d;
                          }
                        }
                        uVar22 = FUN_1409379ec(*(undefined8 *)(param_1[10] + lVar29));
                        FUN_140fbdcea(uVar22,local_180,param_1);
                        FUN_1447cbafe(&local_148,&local_168,&local_f8);
                      }
                    }
LAB_1433e172d:
                    uVar30 = uVar30 + 1;
                  } while (uVar30 != uVar36);
                  iVar18 = (int)param_1[0xb];
                  plVar24 = local_180;
                }
                if (iVar21 < iVar18) {
                  lVar29 = (longlong)iVar21 * 0x10;
                  if (*(int *)(param_1[10] + 8 + lVar29) != -1) {
                    lVar29 = *(longlong *)(param_1[10] + lVar29);
                    if ((*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x110) < DAT_14cacc310) &&
                       (FUN_144b3d300(&DAT_14cacc310), DAT_14cacc310 == -1)) {
                      DAT_14cacc30c = -1;
                      _Init_thread_footer(&DAT_14cacc310);
                    }
                    if (DAT_14cacc30c == -1) {
                      if ((*(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0x110) < DAT_14cacc320) &&
                         (FUN_144b3d300(), DAT_14cacc320 == -1)) {
                        local_f8 = "StateFullyBlendedInFunction";
                        lStack_f0 = CONCAT35(lStack_f0._5_3_,0x1b);
                        uVar17 = FUN_14001a6c0(&local_f8,1);
                        DAT_14cacc318 = (ulonglong)uVar17;
                        _Init_thread_footer();
                      }
                      if (DAT_14cacbf50 == 0) {
                        uVar22 = FUN_140002dac();
                        DAT_14cacbf50 = FUN_140002ddd(FUN_1463a5c91,uVar22,L"AnimNode_StateResult");
                      }
                      plVar24 = *(longlong **)(lVar29 + 8);
                      if (plVar24 == (longlong *)0x0) {
                        DAT_14cacc30c = -1;
                      }
                      else {
                        if (*plVar24 == 0) {
                          plVar24 = (longlong *)0x0;
                        }
                        else {
                          plVar24 = (longlong *)plVar24[1];
                        }
                        DAT_14cacc30c =
                             (**(code **)(*plVar24 + 0x130))(plVar24,DAT_14cacbf50,DAT_14cacc318);
                      }
                    }
                    plVar24 = *(longlong **)(lVar29 + 8);
                    lVar25 = *plVar24;
                    uVar17 = *(uint *)(plVar24[2] + (longlong)DAT_14cacc30c * 4);
                    uVar26 = uVar17 & 0x7fffffff;
                    if ((int)uVar17 < 0) {
                      if (lVar25 == 0) {
                        plVar35 = (longlong *)0x0;
                      }
                      else {
                        plVar35 = (longlong *)plVar24[1];
                      }
                      if (*(code **)(*plVar35 + 0x20) == (code *)&LAB_14488c8ee) {
                        plVar35 = plVar35 + 0x12;
                        pfVar27 = (float *)(longlong)(int)plVar24[4];
                      }
                      else {
                        local_170 = (float *)(longlong)(int)plVar24[4];
                        plVar35 = (longlong *)(**(code **)(*plVar35 + 0x20))(plVar35);
                        lVar25 = *plVar24;
                        pfVar27 = local_170;
                      }
                      if (lVar25 == 0) {
                        plVar24 = (longlong *)0x0;
                      }
                      else {
                        plVar24 = (longlong *)plVar24[1];
                      }
                      uVar22 = (**(code **)(*plVar24 + 0x108))
                                         (plVar24,uVar26,
                                          lVar29 - *(int *)(*(longlong *)
                                                             (*plVar35 + (longlong)pfVar27 * 8) +
                                                           0x44));
                    }
                    else {
                      if (lVar25 == 0) {
                        plVar24 = (longlong *)0x0;
                      }
                      else {
                        plVar24 = (longlong *)plVar24[1];
                      }
                      uVar22 = (**(code **)(*plVar24 + 0x100))(plVar24,uVar26);
                    }
                    plVar24 = local_180;
                    FUN_140fbdcea(uVar22,local_180,param_1);
                  }
                }
              }
            }
            uVar17 = *(uint *)(param_1 + 9);
            if (*(char *)(param_1[8] + 0xc1 + lVar37) == '\x01') {
              local_178 = CONCAT71((int7)(local_178 >> 8),(byte)local_178 | uVar36 == uVar17 - 1);
            }
          }
          else {
LAB_1433e17dd:
            plVar24 = local_180;
            if ((bVar14 & 1) != 0) {
              lVar37 = lVar37 + lVar29;
              cVar7 = *(char *)(lVar37 + 0xc1);
              if (cVar7 == '\0') {
                if (*(char *)(lVar37 + 0xc3) == '\0') {
                  iVar21 = *(int *)(lVar37 + 0x34);
                  if ((longlong)(int)param_1[9] < 1) {
                    iVar18 = *(int *)((longlong)param_1 + 0x2c);
                    fVar39 = 1.0;
                    if (iVar18 != iVar21) {
                      fVar39 = 0.0;
                    }
                  }
                  else {
                    fVar39 = 0.0;
                    lVar25 = 0;
                    do {
                      fVar41 = *(float *)(lVar29 + 4 + lVar25);
                      fVar40 = 1.0 - fVar41;
                      if (lVar25 == 0) {
                        if (*(int *)(lVar29 + 0x34) == iVar21) {
                          fVar39 = fVar39 + fVar40;
                        }
                      }
                      else {
                        fVar39 = fVar39 * fVar40;
                      }
                      if (*(int *)(lVar29 + 0x30 + lVar25) == iVar21) {
                        fVar39 = fVar39 + fVar41;
                      }
                      lVar25 = lVar25 + 200;
                    } while ((longlong)(int)param_1[9] * 200 - lVar25 != 0);
                    if (1.0 <= fVar39) {
                      fVar39 = 1.0;
                    }
                    if (fVar39 <= 0.0) {
                      fVar39 = 0.0;
                    }
                    iVar18 = *(int *)((longlong)param_1 + 0x2c);
                  }
                  local_f8 = (char *)*local_180;
                  lStack_f0 = local_180[1];
                  _local_e8 = *(undefined1 (*) [16])(local_180 + 2);
                  if (iVar21 != iVar18) {
                    auVar9[0xf] = 0;
                    auVar9._0_15_ = stack0xffffffffffffff19;
                    _local_e8 = auVar9 << 8;
                  }
                  auStack_d4 = *pauVar2;
                  local_d8 = (undefined1  [4])(fVar39 * *(float *)(local_180 + 4));
                  FUN_14022c8da(param_1);
                  iVar21 = *(int *)(lVar37 + 0x30);
                  if ((longlong)(int)param_1[9] < 1) {
                    iVar18 = *(int *)((longlong)param_1 + 0x2c);
                    fVar39 = 1.0;
                    if (iVar18 != iVar21) {
                      fVar39 = 0.0;
                    }
                  }
                  else {
                    lVar29 = *plVar1;
                    fVar39 = 0.0;
                    lVar37 = 0;
                    do {
                      fVar41 = *(float *)(lVar29 + 4 + lVar37);
                      fVar40 = 1.0 - fVar41;
                      if (lVar37 == 0) {
                        if (*(int *)(lVar29 + 0x34) == iVar21) {
                          fVar39 = fVar39 + fVar40;
                        }
                      }
                      else {
                        fVar39 = fVar39 * fVar40;
                      }
                      if (*(int *)(lVar29 + 0x30 + lVar37) == iVar21) {
                        fVar39 = fVar39 + fVar41;
                      }
                      lVar37 = lVar37 + 200;
                    } while ((longlong)(int)param_1[9] * 200 - lVar37 != 0);
                    if (1.0 <= fVar39) {
                      fVar39 = 1.0;
                    }
                    if (fVar39 <= 0.0) {
                      fVar39 = 0.0;
                    }
                    iVar18 = *(int *)((longlong)param_1 + 0x2c);
                  }
                  local_f8 = (char *)*plVar24;
                  lStack_f0 = plVar24[1];
                  _local_e8 = *(undefined1 (*) [16])(plVar24 + 2);
                  if (iVar21 != iVar18) {
                    auVar10[0xf] = 0;
                    auVar10._0_15_ = stack0xffffffffffffff19;
                    _local_e8 = auVar10 << 8;
                  }
                  auStack_d4 = *pauVar2;
                  local_d8 = (undefined1  [4])(fVar39 * *(float *)(plVar24 + 4));
                }
                else {
                  fVar39 = 1.0;
                  fVar41 = 0.0;
                  if (*(char *)(lVar37 + 0xc3) != '\x01') {
                    fVar39 = 0.0;
                    fVar41 = 1.0;
                  }
                  local_f8 = (char *)*local_180;
                  lStack_f0 = local_180[1];
                  _local_e8 = *(undefined1 (*) [16])(local_180 + 2);
                  fVar40 = (1.0 - *(float *)(lVar37 + 4)) * *(float *)(local_180 + 4);
                  auStack_d4._4_8_ = SUB168(*(undefined1 (*) [16])(local_180 + 4),8);
                  _local_d8 = CONCAT44(fVar39 / (float)(~-(uint)(0.0 < fVar40) & 0x3f800000 |
                                                       (uint)fVar40 & -(uint)(0.0 < fVar40)),fVar40)
                  ;
                  FUN_14022c8da(param_1,*(undefined4 *)(lVar37 + 0x34),&local_f8);
                  local_f8 = (char *)*plVar24;
                  lStack_f0 = plVar24[1];
                  _local_e8 = *(undefined1 (*) [16])(plVar24 + 2);
                  auVar12._4_8_ = auStack_d4._4_8_;
                  auVar12._0_4_ = *(undefined4 *)((longlong)plVar24 + 0x24);
                  _local_d8 = auVar12._0_8_ << 0x20;
                  auStack_d4._4_4_ = (int)plVar24[5];
                  auStack_d4._8_4_ = *(undefined4 *)((longlong)plVar24 + 0x2c);
                  fVar39 = *(float *)(lVar37 + 4) * *(float *)(plVar24 + 4);
                  auStack_d4._0_4_ =
                       fVar41 / (float)(~-(uint)(0.0 < fVar39) & 0x3f800000 |
                                       (uint)fVar39 & -(uint)(0.0 < fVar39));
                  local_d8 = (undefined1  [4])fVar39;
                  iVar21 = *(int *)(lVar37 + 0x30);
                }
                FUN_14022c8da(param_1,iVar21,&local_f8);
              }
              else if (cVar7 == '\x01') {
                FUN_147912a24(&local_168,local_180);
                local_f8 = (char *)*plVar24;
                lStack_f0 = plVar24[1];
                _local_e8 = *(undefined1 (*) [16])(plVar24 + 2);
                _local_d8 = *(undefined1 (*) [16])(plVar24 + 4);
                if (*(int *)(lVar37 + 0x30) != *(int *)((longlong)param_1 + 0x2c)) {
                  auVar11[0xf] = 0;
                  auVar11._0_15_ = stack0xffffffffffffff19;
                  _local_e8 = auVar11 << 8;
                }
                FUN_14022c8da(param_1,*(int *)(lVar37 + 0x30),&local_f8);
                FUN_1447d2706(local_168 + 0x148,local_160);
              }
              else if ((cVar7 == '\x02') && (*(int *)(lVar37 + 0x28) != -1)) {
                plVar24 = *(longlong **)(lVar37 + 0x20);
                if (plVar24 != (longlong *)0x0) {
                  local_f8 = (char *)*local_180;
                  lStack_f0 = local_180[1];
                  auVar12 = *(undefined1 (*) [12])(local_180 + 2);
                  _local_d8 = *(undefined1 (*) [16])(local_180 + 4);
                  iStack_e4 = auVar12._4_4_;
                  uStack_e0 = iStack_e4;
                  _local_e8 = auVar12._0_8_;
                  uStack_dc = *(undefined4 *)((longlong)local_180 + 0x1c);
                  local_e8 = auVar12._0_4_;
                  iStack_e4 = *(int *)(lVar37 + 0x28);
                  if ((plVar24[1] != 0) &&
                     (uVar17 = *(uint *)(plVar24[1] + 0x24), (uVar17 & 7) != 0)) {
                    if (((uVar17 & 1) != 0) &&
                       (lVar29 = FUN_147906846(plVar24), *(longlong *)(lVar29 + 0x18) != 0)) {
                      if (local_f8 == (char *)0x0) {
                        uVar22 = 0;
                      }
                      else {
                        uVar22 = *(undefined8 *)(local_f8 + 0x130);
                      }
                      uVar23 = FUN_1463a8172();
                      uVar22 = FUN_140108626(uVar22,uVar23);
                      iVar21 = FUN_14792d46c(uVar22,&local_f8,plVar24);
                      if (iVar21 == 1) {
                        FUN_1433dc041(lVar29,&local_f8,plVar24);
                      }
                    }
                    lVar29 = *(longlong *)(lVar37 + 0x20);
                    if (((*(longlong *)(lVar29 + 8) != 0) &&
                        ((*(byte *)(*(longlong *)(lVar29 + 8) + 0x24) & 2) != 0)) &&
                       (lVar25 = FUN_1479069ec(lVar29), *(longlong *)(lVar25 + 0x18) != 0)) {
                      if (local_f8 == (char *)0x0) {
                        uVar22 = 0;
                      }
                      else {
                        uVar22 = *(undefined8 *)(local_f8 + 0x130);
                      }
                      uVar23 = FUN_1463a8172();
                      uVar22 = FUN_140108626(uVar22,uVar23);
                      FUN_14792d318(uVar22,&local_168,&local_f8);
                      if (((float)local_168 <= 1e-05) && (1e-05 < local_168._4_4_)) {
                        FUN_1433dc041(lVar25,&local_f8,lVar29);
                      }
                    }
                    plVar24 = *(longlong **)(lVar37 + 0x20);
                    if ((plVar24[1] != 0) && ((*(byte *)(plVar24[1] + 0x24) & 4) != 0)) {
                      uVar22 = FUN_147906b92(plVar24);
                      FUN_1433dc041(uVar22,&local_f8,plVar24);
                      plVar24 = *(longlong **)(lVar37 + 0x20);
                    }
                  }
                  (**(code **)(*plVar24 + 0x20))(plVar24,&local_f8);
                }
                iVar21 = *(int *)(lVar37 + 0x50);
                if (0 < iVar21) {
                  lVar29 = 0;
                  do {
                    lVar25 = *(longlong *)(*(longlong *)(lVar37 + 0x48) + lVar29 * 8);
                    if ((*(char *)(lVar25 + 0x99) == '\0') ||
                       (((((*(char *)(lVar25 + 0x99) == '\x02' && (0 < *(int *)(lVar25 + 0x94))) ||
                          (*(short *)(lVar25 + 0xa8) == -1)) ||
                         ((*(longlong *)(lVar25 + 0xa0) == -1 ||
                          (*(short *)(lVar25 + 0xa8) != *(short *)(*local_180 + 0x5d8))))) ||
                        (*(longlong *)(lVar25 + 0xa0) != *(longlong *)(*local_180 + 0x5d0))))) {
                      bVar38 = *(char *)(lVar25 + 0x98) == '\0';
                      fVar39 = *(float *)(lVar37 + 4);
                      if (bVar38) {
                        fVar39 = 1.0 - fVar39;
                      }
                      iVar21 = *(int *)(lVar37 + 0x30 + (ulonglong)bVar38 * 4);
                      local_f8 = (char *)*local_180;
                      lStack_f0 = local_180[1];
                      _local_e8 = *(undefined1 (*) [16])(local_180 + 2);
                      auStack_d4._0_8_ = *(undefined8 *)*pauVar2;
                      local_d8 = (undefined1  [4])(fVar39 * *(float *)(local_180 + 4));
                      auStack_d4._8_4_ = *(undefined4 *)((longlong)plVar31 + 0x2c);
                      if (iVar21 != *(int *)((longlong)param_1 + 0x2c)) {
                        auVar13[0xf] = 0;
                        auVar13._0_15_ = stack0xffffffffffffff19;
                        _local_e8 = auVar13 << 8;
                      }
                      FUN_14022c8da(param_1,iVar21,&local_f8);
                      iVar21 = *(int *)(lVar37 + 0x50);
                    }
                    lVar29 = lVar29 + 1;
                  } while ((int)lVar29 < iVar21);
                }
              }
            }
            uVar17 = *(uint *)(param_1 + 9);
            plVar24 = local_180;
          }
          uVar36 = uVar36 + 1;
        } while ((longlong)uVar36 < (longlong)(int)uVar17);
        uVar36 = (ulonglong)uVar17 + 1;
        lVar29 = (ulonglong)uVar17 * 200 + -6;
        do {
          if ((int)uVar36 + -1 < 1) goto LAB_1433e21c1;
          _Dst = (void *)*plVar1;
          uVar36 = uVar36 - 1;
          pcVar5 = (char *)((longlong)_Dst + lVar29);
          lVar29 = lVar29 + -200;
        } while (*pcVar5 != '\0');
        uVar26 = (uint)uVar36;
        FUN_1407c4b0e(_Dst,uVar36 & 0xffffffff);
        uVar17 = uVar26;
        if (*(uint *)(param_1 + 9) != uVar26) {
          memmove(_Dst,(void *)((ulonglong)(uVar26 & 0x7fffffff) * 200 + (longlong)_Dst),
                  (longlong)(int)(*(uint *)(param_1 + 9) - uVar26) * 200);
          uVar17 = *(uint *)(param_1 + 9);
        }
        *(uint *)(param_1 + 9) = uVar17 - uVar26;
        FUN_1417b6472(plVar1);
LAB_1433e21c1:
        local_100 = 0;
        if (local_108 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        uVar36 = (ulonglong)plStack_140 >> 0x20;
        plStack_140 = (longlong *)((ulonglong)plStack_140 & 0xffffffff00000000);
        if ((int)uVar36 != 0) {
          FUN_1447a08a2(&local_148,0);
        }
        uStack_118 = 0xffffffff;
        iStack_114 = 0;
        uStack_120 = 0;
        if (0x80 < uStack_11c) {
          uStack_11c = 0x80;
          FUN_1446efbd8(&local_138,0);
        }
        if (local_128 != 0) {
          FUN_1400020a8();
        }
        if ((longlong *)local_148.QuadPart != (longlong *)0x0) {
          FUN_1400020a8();
        }
        iVar21 = (int)param_1[9];
        plVar31 = plVar24;
      }
      if (iVar21 == 0) {
        uVar17 = *(uint *)((longlong)param_1 + 0x2c);
        lVar29 = param_1[7];
        if ((((int)uVar17 < 0 || lVar29 == 0) || (*(int *)(lVar29 + 0x18) <= (int)uVar17)) ||
           (*(char *)(*(longlong *)(lVar29 + 0x10) + 0x28 + (ulonglong)uVar17 * 0x78) == '\0')) {
          if ((longlong)(int)param_1[0xd] != 0) {
            lVar29 = 0;
            do {
              if (*(uint *)(param_1[0xc] + lVar29) == uVar17) goto LAB_1433e224c;
              lVar29 = lVar29 + 4;
            } while ((longlong)(int)param_1[0xd] * 4 != lVar29);
          }
          local_f8 = (char *)plVar31[1];
          lStack_f0 = 0;
          local_e8[0] = (byte)local_178 & 1;
          if ((local_178 & 1) != 0) {
            plVar24 = (longlong *)FUN_14001cc68(0x18,0x10);
            plVar31 = local_180;
            plVar24[1] = (longlong)&DAT_100000001;
            *plVar24 = (longlong)&PTR_FUN_14a42d900;
            local_148.QuadPart = (LONGLONG)(plVar24 + 2);
            plVar24[2] = (longlong)&PTR_FUN_14a42d920;
            plStack_140 = plVar24;
            if (plVar24 == (longlong *)0x0) {
              FUN_1447d2a40(&local_f8,local_180,&local_148);
            }
            else {
              LOCK();
              *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
              UNLOCK();
              FUN_1447d2a40(&local_f8,local_180,&local_148);
              LOCK();
              plVar35 = plVar24 + 1;
              *(int *)plVar35 = (int)*plVar35 + -1;
              UNLOCK();
              if ((int)*plVar35 == 0) {
                (**(code **)*plVar24)(plVar24);
                LOCK();
                piVar4 = (int *)((longlong)plVar24 + 0xc);
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (*piVar4 == 0) {
                  (**(code **)(*plVar24 + 0x10))(plVar24);
                }
              }
            }
          }
          local_158 = *(char *)((longlong)param_1 + 0x26);
          local_168 = plVar31[1];
          local_160 = 0;
          if (local_158 == '\x01') {
            plVar24 = (longlong *)FUN_14001cc68(0x48,0x10);
            plVar24[1] = (longlong)&DAT_100000001;
            *plVar24 = (longlong)&PTR_FUN_14a7be1f0;
            LVar3.QuadPart = (LONGLONG)(plVar24 + 2);
            FUN_144905dee(LVar3.QuadPart,plVar31,param_1,*(undefined4 *)((longlong)param_1 + 0x2c));
            local_148.QuadPart = LVar3.QuadPart;
            plStack_140 = plVar24;
            if (plVar24 == (longlong *)0x0) {
              FUN_1447d2a40(&local_168,plVar31,&local_148);
            }
            else {
              LOCK();
              *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
              UNLOCK();
              FUN_1447d2a40(&local_168,plVar31,&local_148);
              LOCK();
              plVar35 = plVar24 + 1;
              *(int *)plVar35 = (int)*plVar35 + -1;
              UNLOCK();
              if ((int)*plVar35 == 0) {
                (**(code **)*plVar24)(plVar24);
                LOCK();
                piVar4 = (int *)((longlong)plVar24 + 0xc);
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (*piVar4 == 0) {
                  (**(code **)(*plVar24 + 0x10))(plVar24);
                }
              }
            }
          }
          lVar29 = (longlong)*(int *)((longlong)param_1 + 0x2c) * 0x10;
          plVar24 = *(longlong **)(param_1[10] + lVar29);
          if (plVar24 != (longlong *)0x0) {
            plVar35 = (longlong *)(param_1[10] + lVar29);
            local_148.QuadPart = *plVar31;
            plStack_140 = (longlong *)plVar31[1];
            local_138 = (undefined4)plVar31[2];
            uStack_12c = *(undefined4 *)((longlong)plVar31 + 0x1c);
            local_128 = plVar31[4];
            uStack_120 = (undefined4)plVar31[5];
            uStack_11c = (uint)((ulonglong)plVar31[5] >> 0x20);
            uStack_134 = CONCAT44(*(undefined4 *)((longlong)plVar31 + 0x14),(int)plVar35[1]);
            if ((plVar24[1] != 0) && (uVar17 = *(uint *)(plVar24[1] + 0x24), (uVar17 & 7) != 0)) {
              if (((uVar17 & 1) != 0) &&
                 (lVar29 = FUN_147906846(plVar24), *(longlong *)(lVar29 + 0x18) != 0)) {
                if ((longlong *)local_148.QuadPart == (longlong *)0x0) {
                  lVar37 = 0;
                }
                else {
                  lVar37 = *(longlong *)(local_148.QuadPart + 0x130);
                }
                uVar22 = FUN_1463a8172();
                uVar22 = FUN_140108626(lVar37,uVar22);
                iVar21 = FUN_14792d46c(uVar22,&local_148,plVar24);
                if (iVar21 == 1) {
                  FUN_1433dc041(lVar29,&local_148,plVar24);
                }
              }
              lVar29 = *plVar35;
              if (((*(longlong *)(lVar29 + 8) != 0) &&
                  ((*(byte *)(*(longlong *)(lVar29 + 8) + 0x24) & 2) != 0)) &&
                 (lVar37 = FUN_1479069ec(lVar29), *(longlong *)(lVar37 + 0x18) != 0)) {
                if ((longlong *)local_148.QuadPart == (longlong *)0x0) {
                  lVar25 = 0;
                }
                else {
                  lVar25 = *(longlong *)(local_148.QuadPart + 0x130);
                }
                uVar22 = FUN_1463a8172();
                uVar22 = FUN_140108626(lVar25,uVar22);
                FUN_14792d318(uVar22,&local_150,&local_148);
                if ((local_150 <= 1e-05) && (1e-05 < local_14c)) {
                  FUN_1433dc041(lVar37,&local_148,lVar29);
                }
              }
              plVar24 = (longlong *)*plVar35;
              plVar31 = local_180;
              if ((plVar24[1] != 0) && ((*(byte *)(plVar24[1] + 0x24) & 4) != 0)) {
                uVar22 = FUN_147906b92(plVar24);
                FUN_1433dc041(uVar22,&local_148,plVar24);
                plVar24 = (longlong *)*plVar35;
                plVar31 = local_180;
              }
            }
            (**(code **)(*plVar24 + 0x20))(plVar24,&local_148);
          }
          if (local_158 == '\x01') {
            FUN_1447d2706(local_168 + 0x148,local_160);
          }
          if (local_e8[0] == '\x01') {
            FUN_1447d2706(local_f8 + 0x148,lStack_f0);
          }
        }
      }
LAB_1433e224c:
      *(float *)(param_1 + 6) = *(float *)(plVar31 + 5) + *(float *)(param_1 + 6);
      iVar21 = (int)param_1[0xb];
      if (0 < iVar21) {
        iVar18 = 0;
        do {
          if ((longlong)(int)param_1[9] < 1) {
            fVar39 = 1.0;
            if (*(int *)((longlong)param_1 + 0x2c) == iVar18) {
LAB_1433e22e3:
              lVar29 = *plVar31;
              if (*(int *)(lVar29 + 0x2e8) != *(int *)(lVar29 + 0x314)) {
                lVar37 = lVar29 + 0x318;
                if (*(longlong *)(lVar29 + 800) != 0) {
                  lVar37 = *(longlong *)(lVar29 + 800);
                }
                iVar34 = *(int *)(lVar37 + (ulonglong)
                                           (*(int *)(lVar29 + 0x328) - 1U & *(uint *)(param_1 + 3))
                                           * 4);
                if (iVar34 != -1) {
                  do {
                    lVar37 = *(longlong *)(lVar29 + 0x2e0) + (longlong)iVar34 * 0x10;
                    if (*(uint *)(*(longlong *)(lVar29 + 0x2e0) + (longlong)iVar34 * 0x10) ==
                        *(uint *)(param_1 + 3)) {
                      if ((lVar37 != 0) && ((int *)(lVar37 + 4) != (int *)0x0)) {
                        *(float *)(*(longlong *)
                                    (lVar29 + 0x2c0 + (longlong)*(int *)(lVar29 + 0x330) * 0x10) +
                                  ((longlong)iVar18 + (longlong)*(int *)(lVar37 + 4)) * 4) = fVar39;
                        iVar21 = (int)param_1[0xb];
                      }
                      break;
                    }
                    iVar34 = *(int *)(lVar37 + 8);
                  } while (iVar34 != -1);
                }
              }
            }
          }
          else {
            lVar29 = *plVar1;
            fVar39 = 0.0;
            lVar37 = 0;
            do {
              fVar41 = *(float *)(lVar29 + 4 + lVar37);
              fVar40 = 1.0 - fVar41;
              if (lVar37 == 0) {
                if (*(int *)(lVar29 + 0x34) == iVar18) {
                  fVar39 = fVar39 + fVar40;
                }
              }
              else {
                fVar39 = fVar39 * fVar40;
              }
              if (*(int *)(lVar29 + 0x30 + lVar37) == iVar18) {
                fVar39 = fVar39 + fVar41;
              }
              lVar37 = lVar37 + 200;
            } while ((longlong)(int)param_1[9] * 200 - lVar37 != 0);
            if (1.0 <= fVar39) {
              fVar39 = 1.0;
            }
            if (0.0 < fVar39) goto LAB_1433e22e3;
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < iVar21);
      }
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433e286a FUN_1433e286a body=1335 status=ok
// SIG undefined FUN_1433e286a(void)

void FUN_1433e286a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100 [2];
  undefined1 local_f0;
  undefined8 local_ec;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  undefined1 uStack_c8;
  undefined7 local_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  longlong local_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  ulonglong local_90;
  longlong lStack_88;
  ulonglong local_80;
  longlong lStack_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar14 = *(longlong *)(param_1 + 0x38);
  if (lVar14 != 0) {
    lVar8 = (longlong)*(int *)(param_1 + 0x2c);
    if (((-1 < lVar8) && (*(int *)(param_1 + 0x2c) < *(int *)(lVar14 + 0x18))) &&
       (*(char *)(*(longlong *)(lVar14 + 0x10) + 0x28 + lVar8 * 0x78) != '\x01')) {
      if (*(int *)(param_1 + 0x48) < 1) {
        lVar14 = *param_2;
        lVar11 = lVar8 * 0x10;
        sVar3 = *(short *)(*(longlong *)(param_1 + 0xc0) + 8 + lVar11);
        plVar15 = (longlong *)(*(longlong *)(param_1 + 0xc0) + lVar11);
        if (((sVar3 == -1) || (*plVar15 == -1)) ||
           ((sVar3 != *(short *)(lVar14 + 0x5d8) || (*plVar15 != *(longlong *)(lVar14 + 0x5d0))))) {
          *(undefined2 *)(plVar15 + 1) = *(undefined2 *)(lVar14 + 0x5d8);
          *plVar15 = *(longlong *)(lVar14 + 0x5d0);
          *(undefined2 *)((longlong)plVar15 + 10) = *(undefined2 *)(lVar14 + 0x5da);
          local_100[1] = 0;
          local_f0 = 1;
          local_ec = 0xffffffffffffffff;
          plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x50) + lVar11);
          local_100[0] = lVar14;
          if (plVar15 != (longlong *)0x0) {
            (**(code **)(*plVar15 + 0x18))(plVar15,local_100);
          }
          lVar8 = (longlong)*(int *)(param_1 + 0x2c);
        }
        if (*(longlong *)(*(longlong *)(param_1 + 0x50) + lVar8 * 0x10) == 0) {
          if ((char)param_2[0x13] == '\x01') {
            FUN_142400d60(param_2[4],(int)param_2[5]);
          }
          else {
            FUN_1448859f0(param_2 + 4,param_2[6]);
          }
        }
        else {
          puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar8 * 0x10);
          uVar5 = *(undefined4 *)(puVar12 + 1);
          *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)param_2 + 0x14);
          *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
          plVar15 = (longlong *)*puVar12;
          (**(code **)(*plVar15 + 0x28))(plVar15,param_2);
        }
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x58);
        iVar7 = *(int *)(param_1 + 0xa8);
        *(uint *)(param_1 + 0xa8) = iVar7 + uVar4;
        if ((uint)(*(int *)(param_1 + 0xac) - iVar7) < uVar4) {
          FUN_1417b6512(param_1 + 0xa0);
        }
        local_108 = param_1 + 0xa0;
        memset((void *)((longlong)iVar7 * 8 + *(longlong *)(param_1 + 0xa0)),0,
               (longlong)(int)uVar4 << 3);
        if (0 < *(int *)(param_1 + 0x48)) {
          lVar14 = 0;
          lVar8 = 0;
          do {
            lVar11 = *(longlong *)(param_1 + 0x40);
            if (*(char *)(lVar11 + 0xc2 + lVar14) == '\x01') {
              lVar1 = lVar11 + lVar14;
              cVar2 = *(char *)(lVar11 + 0xc1 + lVar14);
              if (cVar2 == '\0') {
                if (lVar8 == 0) {
                  uVar9 = FUN_140c12f06(param_1,*(undefined4 *)(lVar11 + 0x34 + lVar14),param_2);
                  uVar10 = FUN_140c12f06(param_1,*(undefined4 *)(lVar11 + 0x30 + lVar14),param_2);
                  FUN_144a292f6(param_2,lVar1,uVar9,uVar10);
                }
                else {
                  local_100[0] = *param_2;
                  local_100[1] = 0;
                  local_f0 = 1;
                  local_ec = 0xffffffffffffffff;
                  uStack_c0 = 0;
                  uStack_bf = 0;
                  uStack_c8 = 0;
                  local_c7 = 0;
                  local_e0 = 0;
                  uStack_d8 = 0;
                  local_70 = 0;
                  local_80 = 0;
                  lStack_78 = 0;
                  local_90 = 0;
                  lStack_88 = 0;
                  local_a0 = 0;
                  lStack_98 = 0;
                  local_b0 = 0;
                  lStack_a8 = 0;
                  local_68 = (undefined1)param_2[0x13];
                  lVar6 = *(longlong *)(local_100[0] + 0x6a0);
                  uVar4 = *(uint *)(lVar6 + 8);
                  local_d0 = lVar6;
                  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_1456afac4(uVar4);
                  }
                  if (uVar4 == 0) {
                    iVar7 = 0;
                    iVar13 = 0;
                  }
                  else {
                    FUN_144717690(&local_e0,uVar4);
                    iVar13 = (int)uStack_d8;
                    iVar7 = uStack_d8._4_4_;
                  }
                  uStack_d8 = CONCAT44(uStack_d8._4_4_,iVar13 + uVar4);
                  if ((uint)(iVar7 - iVar13) < uVar4) {
                    FUN_1406600da(&local_e0);
                  }
                  local_b0 = lVar6 + 0xb0;
                  local_ec = *(undefined8 *)((longlong)param_2 + 0x14);
                  FUN_140341844(local_100,param_2);
                  uVar9 = FUN_140c12f06(param_1,*(undefined4 *)(lVar11 + 0x30 + lVar14),param_2);
                  FUN_144a292f6(param_2,lVar1,local_100,uVar9);
                  if (lStack_78 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_144716785(lStack_88,local_80 & 0xffffffff);
                  if (lStack_88 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_144716758(lStack_98,local_90 & 0xffffffff);
                  if (lStack_98 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_144716727(lStack_a8);
                  if (lStack_a8 != 0) {
                    FUN_1400020a8();
                  }
                }
              }
              else if (cVar2 == '\x01') {
                FUN_140c12f06(param_1,*(undefined4 *)(lVar11 + 0x30 + lVar14),param_2);
              }
              else if (cVar2 == '\x02') {
                FUN_147912b04(param_1,param_2,lVar1,lVar8 != 0);
              }
            }
            lVar8 = lVar8 + 1;
            lVar14 = lVar14 + 200;
          } while (lVar8 < *(int *)(param_1 + 0x48));
        }
        FUN_142400cf0(param_2[4],(int)param_2[5]);
        iVar7 = *(int *)(param_1 + 0xa8);
        if ((longlong)iVar7 != 0) {
          lVar14 = *(longlong *)(param_1 + 0xa0);
          lVar8 = 0;
          do {
            lVar11 = *(longlong *)(lVar14 + lVar8);
            if (lVar11 != 0) {
              if (*(longlong *)(lVar11 + 0x88) != 0) {
                FUN_1400020a8();
              }
              FUN_144716785(*(undefined8 *)(lVar11 + 0x78),*(undefined4 *)(lVar11 + 0x80));
              if (*(longlong *)(lVar11 + 0x78) != 0) {
                FUN_1400020a8();
              }
              FUN_144716758(*(undefined8 *)(lVar11 + 0x68),*(undefined4 *)(lVar11 + 0x70));
              if (*(longlong *)(lVar11 + 0x68) != 0) {
                FUN_1400020a8();
              }
              FUN_144716727(*(undefined8 *)(lVar11 + 0x58),*(undefined4 *)(lVar11 + 0x60));
              if (*(longlong *)(lVar11 + 0x58) != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(lVar11);
            }
            lVar8 = lVar8 + 8;
          } while ((longlong)iVar7 * 8 != lVar8);
        }
        *(undefined4 *)(param_1 + 0xa8) = 0;
        if (*(int *)(param_1 + 0xac) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_128);
        }
      }
      if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_128);
}



// FUNCTION 1433e2dee FUN_1433e2dee body=786 status=ok
// SIG undefined FUN_1433e2dee(void)

void FUN_1433e2dee(longlong param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined2 *puVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_f8 [40];
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined2 *local_b0;
  int local_a8;
  undefined2 *local_a0;
  int local_98;
  void *local_90;
  int local_88;
  void *local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_147912cd8(param_2,&local_80);
  FUN_1400021e4((longlong)*(int *)(param_1 + 0x2c) * 0x78 +
                *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10),&local_a0);
  puVar9 = &DAT_149dfb77a;
  if (local_98 != 0) {
    puVar9 = local_a0;
  }
  FUN_1400021e4(*(undefined8 *)(param_1 + 0x38),&local_b0);
  puVar11 = &DAT_149dfb77a;
  if (local_a8 != 0) {
    puVar11 = local_b0;
  }
  FUN_140002266(&local_90,L"(%s->%s)",puVar11,puVar9);
  iVar4 = local_88 + -1;
  if (local_88 == 0) {
    iVar4 = 0;
  }
  FUN_1400020e8(&local_80,local_90,iVar4);
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  pvVar5 = local_80;
  local_c0 = (void *)0x0;
  local_b8 = local_78;
  if ((longlong)local_78 == 0) {
    local_b4 = 0;
  }
  else {
    FUN_1446dd670(&local_c0,local_78,0);
    memcpy(local_c0,pvVar5,(longlong)local_78 * 2);
  }
  FUN_147906d4c(param_2,&local_c0,0);
  if (0 < *(int *)(param_1 + 0x58)) {
    uVar8 = 0;
    do {
      FUN_1400021e4(uVar8 * 0x78 + *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10),&local_a0);
      puVar9 = &DAT_149dfb77a;
      if (local_98 != 0) {
        puVar9 = local_a0;
      }
      FUN_140002266(&local_90,L"(State: %s)",puVar9);
      if (local_a0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      pvVar5 = local_90;
      lVar2 = *(longlong *)(param_1 + 0x50);
      local_d0 = (void *)0x0;
      lVar10 = (longlong)local_88;
      local_c8 = local_88;
      if (lVar10 == 0) {
        local_c4 = 0;
      }
      else {
        FUN_1446dd670(&local_d0,local_88,0);
        memcpy(local_d0,pvVar5,lVar10 * 2);
      }
      if ((longlong)*(int *)(param_1 + 0x48) < 1) {
        fVar12 = 1.0;
        if (uVar8 != *(uint *)(param_1 + 0x2c)) {
          fVar12 = 0.0;
        }
      }
      else {
        lVar10 = *(longlong *)(param_1 + 0x40);
        fVar12 = 0.0;
        lVar7 = 0;
        do {
          fVar1 = *(float *)(lVar10 + 4 + lVar7);
          fVar13 = 1.0 - fVar1;
          if (lVar7 == 0) {
            if (uVar8 == *(uint *)(lVar10 + 0x34)) {
              fVar12 = fVar12 + fVar13;
            }
          }
          else {
            fVar12 = fVar12 * fVar13;
          }
          if (uVar8 == *(uint *)(lVar10 + 0x30 + lVar7)) {
            fVar12 = fVar12 + fVar1;
          }
          lVar7 = lVar7 + 200;
        } while ((longlong)*(int *)(param_1 + 0x48) * 200 - lVar7 != 0);
        if (1.0 <= fVar12) {
          fVar12 = 1.0;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
      }
      uVar6 = FUN_147906f5e(param_2,fVar12,&local_d0);
      plVar3 = *(longlong **)(uVar8 * 0x10 + lVar2);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,uVar6);
      }
      if (local_90 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < (longlong)*(int *)(param_1 + 0x58));
  }
  if (local_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433e3101 FUN_1433e3101 body=55 status=ok
// SIG undefined FUN_1433e3101(void)

void FUN_1433e3101(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbf68 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbf68 = FUN_14171c317(FUN_1463a5cf0,uVar1,L"EEvaluatorDataSource");
  }
  return;
}



// FUNCTION 1433e3138 FUN_1433e3138 body=55 status=ok
// SIG undefined FUN_1433e3138(void)

void FUN_1433e3138(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbf80 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbf80 = FUN_14171c317(FUN_1463a5d1f,uVar1,L"EEvaluatorMode");
  }
  return;
}



// FUNCTION 1433e31aa FUN_1433e31aa body=114 status=ok
// SIG undefined FUN_1433e31aa(void)

longlong FUN_1433e31aa(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == 1) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 8);
    }
  }
  bVar4 = DAT_14c950c29;
  *(longlong *)(param_1 + 8) = lVar5;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  lVar5 = *(longlong *)(param_2 + 0x28);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 0x28);
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar5;
  return param_1;
}



// FUNCTION 1433e36f6 FUN_1433e36f6 body=196 status=ok
// SIG undefined FUN_1433e36f6(void)

undefined4 * FUN_1433e36f6(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = *(undefined4 *)((longlong)param_2 + 0xd);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x11);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x15);
  *(undefined4 *)((longlong)param_1 + 9) = *(undefined4 *)((longlong)param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0xd) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x11) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x15) = uVar10;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar2 = param_2[10];
  pvVar3 = *(void **)(param_2 + 8);
  param_1[10] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1474d60b6(param_1 + 8,iVar2,0);
    memcpy(*(void **)(param_1 + 8),pvVar3,(longlong)iVar2 << 4);
  }
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar2 = param_2[0xe];
  pvVar3 = *(void **)(param_2 + 0xc);
  param_1[0xe] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0xf] = 0;
  }
  else {
    FUN_1447cd5fa(param_1 + 0xc,iVar2,0);
    memcpy(*(void **)(param_1 + 0xc),pvVar3,(longlong)iVar2);
  }
  cVar1 = *(char *)((longlong)param_2 + 0x41);
  *(char *)((longlong)param_1 + 0x41) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  }
  return param_1;
}



// FUNCTION 1433e37ba FUN_1433e37ba body=24 status=ok
// SIG undefined FUN_1433e37ba(void)

undefined8 FUN_1433e37ba(undefined8 param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
  return 1;
}



// FUNCTION 1433e37d2 FUN_1433e37d2 body=92 status=ok
// SIG undefined FUN_1433e37d2(void)

undefined8 FUN_1433e37d2(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  longlong local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_1;
  local_10 = *(undefined4 *)(local_18 + 0x158);
  local_20 = param_2;
  (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&local_20);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433e3830 FUN_1433e3830 body=92 status=ok
// SIG undefined FUN_1433e3830(void)

undefined8 FUN_1433e3830(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  longlong local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_1;
  local_10 = *(undefined4 *)(local_18 + 0x158);
  local_20 = param_2;
  (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&local_20);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433e388e FUN_1433e388e body=379 status=ok
// SIG undefined FUN_1433e388e(void)

void FUN_1433e388e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [32];
  longlong local_60;
  int local_40;
  int local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(double *)(param_1 + 0x38) <= 0.0) || (*(int *)(param_2 + 0x20) < 1)) goto LAB_1433e38c2;
  FUN_147902516(local_80,param_1);
  iVar10 = -1;
  if ((longlong)*(int *)(param_2 + 0x98) != 0) {
    uVar8 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_2 + 0x90) + 0x40 + uVar8) == local_40) &&
         (*(int *)(*(longlong *)(param_2 + 0x90) + 0x44 + uVar8) == local_3c)) {
        iVar10 = (int)(uVar8 >> 4) * -0x33333333;
        break;
      }
      uVar8 = uVar8 + 0x50;
    } while ((longlong)*(int *)(param_2 + 0x98) * 0x50 != uVar8);
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_2 + 0x90);
  if (iVar10 != -1) {
    if (*(char *)(param_1 + 0x49) == '\x02') {
      lVar3 = *plVar1;
      lVar9 = (longlong)iVar10 * 0x50;
      FUN_14791aa54(lVar3 + lVar9,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      uVar5 = *(undefined8 *)(param_1 + 0x3a);
      uVar6 = *(undefined8 *)(param_1 + 0x42);
      puVar2 = (undefined8 *)(lVar3 + 0x30 + lVar9);
      *puVar2 = *(undefined8 *)(param_1 + 0x30);
      puVar2[1] = uVar4;
      puVar2 = (undefined8 *)(lVar3 + 0x3a + lVar9);
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      goto LAB_1433e38c2;
    }
    if (*(char *)(param_1 + 0x49) != '\0') goto LAB_1433e38c2;
  }
  if (*(int *)(param_2 + 0x98) == *(int *)(param_2 + 0x20)) {
    lVar3 = *(longlong *)(param_2 + 0x90);
    lVar7 = (longlong)*(int *)(param_2 + 0x98) * 0x50;
    lVar9 = *(longlong *)(lVar3 + -0x30 + lVar7);
    *(undefined8 *)(lVar3 + -0x30 + lVar7) = 0;
    *(undefined8 *)(lVar3 + -0x28 + lVar7) = 0x800000000;
    FUN_145753cfe(plVar1,*(int *)(param_2 + 0x98) + -1);
    if (lVar9 != 0) {
      FUN_1400020a8(lVar9);
    }
  }
  FUN_147912e26(plVar1,param_1);
LAB_1433e38c2:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433e3a0a FUN_1433e3a0a body=150 status=ok
// SIG undefined FUN_1433e3a0a(void)

void FUN_1433e3a0a(int *param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_2 + 0x90);
  iVar3 = *(int *)(param_2 + 0x98);
  uVar4 = (ulonglong)iVar3;
  if (0 < (longlong)uVar4) {
    lVar5 = uVar4 * 0x50 + -0xc;
    do {
      if ((*(int *)(*plVar1 + -4 + lVar5) == *param_1) && (*(int *)(*plVar1 + lVar5) == param_1[1]))
      {
        FUN_145753cfe(plVar1,(int)uVar4 + -1);
      }
      lVar5 = lVar5 + -0x50;
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar2);
    iVar3 = *(int *)(param_2 + 0x98);
  }
  if (*(int *)(param_2 + 0x9c) == iVar3) {
    return;
  }
  FUN_145753d5e(plVar1,iVar3);
  return;
}



// FUNCTION 1433e3aa0 FUN_1433e3aa0 body=86 status=ok
// SIG undefined FUN_1433e3aa0(void)

void FUN_1433e3aa0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x9c);
  FUN_1407c4add(*(undefined8 *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x98));
  *(undefined4 *)(param_2 + 0x98) = 0;
  if ((iVar1 < 0) && (*(int *)(param_2 + 0x9c) != 0)) {
    FUN_145753d5e(param_2 + 0x90,0);
    return;
  }
  return;
}



// FUNCTION 1433e3af6 FUN_1433e3af6 body=285 status=ok
// SIG undefined FUN_1433e3af6(void)

void FUN_1433e3af6(longlong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar1 = *(int *)(param_3 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_3 + 8);
    lVar5 = *param_1;
    lVar6 = *param_2;
    lVar11 = 0;
    do {
      if (*(int *)(lVar4 + lVar11) != -1) {
        plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar5 + 0x138) + 0x10))();
        iVar2 = *(int *)(lVar6 + 0x18);
        lVar10 = (longlong)iVar2 * 0x38 + *plVar7;
        if ((int)plVar7[1] <= iVar2) {
          lVar10 = 0;
        }
        if (iVar2 < 0) {
          lVar10 = 0;
        }
        if ((*(longlong *)
              (*(longlong *)(lVar10 + 0x10) +
              (longlong)
              *(int *)(*(longlong *)(lVar10 + 0x20) + 0xc +
                      (longlong)*(int *)(lVar4 + 8 + lVar11) * 0x40) * 0x78) ==
             *(longlong *)(param_1[1] + 0x10)) &&
           (uVar3 = *(uint *)(lVar4 + lVar11), uVar3 != 0xffffffff)) {
          lVar10 = *(longlong *)(lVar5 + 0x130);
          plVar7 = *(longlong **)(lVar5 + 0x138);
          plVar8 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7);
          lVar9 = (**(code **)(*plVar7 + 0x20))(plVar7);
          lVar10 = *(int *)(*(longlong *)
                             (*plVar8 + (longlong)(int)(~uVar3 + *(int *)(lVar9 + 8)) * 8) + 0x44) +
                   lVar10;
          if (lVar10 != 0) {
            FUN_14096c7c0(lVar10 + 0x20,param_1[1] + 0x18);
          }
        }
      }
      lVar11 = lVar11 + 0x30;
    } while ((longlong)iVar1 * 0x30 != lVar11);
  }
  return;
}



// FUNCTION 1433e3c14 FUN_1433e3c14 body=66 status=ok
// SIG undefined FUN_1433e3c14(void)

void FUN_1433e3c14(longlong *param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = *param_4;
  lVar2 = *param_2;
  iVar3 = iVar1 + 1;
  if (iVar3 < *(int *)(lVar2 + 0x78)) {
    iVar3 = *(int *)(lVar2 + 0x78);
  }
  FUN_14791bfec(lVar2 + 0x70,iVar3);
  FUN_14791467e((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x70),*param_1 + 0x10);
  return;
}



// FUNCTION 1433e3c56 FUN_1433e3c56 body=75 status=ok
// SIG undefined FUN_1433e3c56(void)

void FUN_1433e3c56(longlong *param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = *param_4;
  lVar2 = *param_2;
  iVar3 = iVar1 + 1;
  if (iVar3 < *(int *)(lVar2 + 0x88)) {
    iVar3 = *(int *)(lVar2 + 0x88);
  }
  FUN_14791bfec(lVar2 + 0x80,iVar3);
  FUN_14791467e((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x80),*param_1 + 0x10);
  return;
}



// FUNCTION 1433e3ca1 FUN_1433e3ca1 body=822 status=ok
// SIG undefined FUN_1433e3ca1(void)

void FUN_1433e3ca1(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  longlong *plVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  float fVar18;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [190];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0xc + -0xc;
    local_358 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar18 + fVar18);
    plVar13 = &local_358;
    do {
      piVar5 = (int *)*plVar13;
      piVar14 = (int *)plVar13[1];
      iVar15 = (int)plVar13[2];
      iVar12 = (int)((ulonglong)((longlong)piVar14 - (longlong)piVar5) >> 2);
      piVar6 = piVar5;
      piVar10 = piVar14;
      piVar16 = piVar5;
      if (iVar15 != 0) {
LAB_1433e3d6e:
        uVar7 = iVar12 * -0x55555555 + 1;
        if (8 < (int)uVar7) {
          uVar8 = (ulonglong)(uVar7 >> 1);
          iVar12 = piVar5[uVar8 * 3 + 2];
          uVar1 = *(undefined8 *)(piVar5 + uVar8 * 3);
          piVar5[uVar8 * 3 + 2] = piVar5[2];
          *(undefined8 *)(piVar5 + uVar8 * 3) = *(undefined8 *)piVar5;
          piVar5[2] = iVar12;
          *(undefined8 *)piVar5 = uVar1;
          piVar9 = piVar14 + 3;
          piVar6 = piVar5;
          do {
            piVar2 = piVar6 + 3;
            piVar3 = piVar6 + 3;
            do {
              piVar6 = piVar3;
              piVar11 = piVar2;
              if (piVar14 < piVar6) break;
              iVar12 = *piVar5 - *piVar6;
              if (*piVar5 - *piVar6 == 0) {
                iVar12 = piVar5[1] - piVar6[1];
              }
              piVar2 = piVar11 + 3;
              piVar3 = piVar6 + 3;
            } while (-1 < iVar12);
            piVar2 = piVar9 + -6;
            do {
              piVar3 = piVar9;
              piVar17 = piVar2;
              piVar9 = piVar3 + -3;
              if (piVar9 <= piVar5) break;
              iVar12 = *piVar9 - *piVar5;
              if (*piVar9 - *piVar5 == 0) {
                iVar12 = piVar3[-2] - piVar5[1];
              }
              piVar2 = piVar17 + -3;
            } while (-1 < iVar12);
            if (piVar9 < piVar6) goto LAB_1433e3e61;
            iVar12 = piVar6[2];
            uVar1 = *(undefined8 *)piVar6;
            piVar6[2] = piVar3[-1];
            *(undefined8 *)piVar6 = *(undefined8 *)piVar9;
            piVar3[-1] = iVar12;
            *(undefined8 *)piVar9 = uVar1;
          } while( true );
        }
        if (piVar5 < piVar14) {
          do {
            piVar6 = piVar5;
            if (piVar5 + 3 <= piVar14) {
              iVar15 = *piVar5;
              piVar10 = piVar5 + 3;
              piVar16 = piVar5;
              do {
                iVar12 = iVar15 - *piVar10;
                if (iVar12 == 0) {
                  iVar12 = piVar16[1] - piVar10[1];
                }
                piVar6 = piVar10;
                iVar4 = *piVar10;
                if (-1 < iVar12) {
                  piVar6 = piVar16;
                  iVar4 = iVar15;
                }
                iVar15 = iVar4;
                piVar10 = piVar10 + 3;
                piVar16 = piVar6;
              } while (piVar10 <= piVar14);
            }
            local_48 = piVar6[2];
            local_50 = *(undefined8 *)piVar6;
            piVar6[2] = piVar14[2];
            *(undefined8 *)piVar6 = *(undefined8 *)piVar14;
            piVar14[2] = local_48;
            *(undefined8 *)piVar14 = local_50;
            piVar14 = piVar14 + -3;
          } while (piVar5 < piVar14);
        }
        goto LAB_1433e3fbc;
      }
LAB_1433e3fd1:
      FUN_14791c428(piVar6);
LAB_1433e3fbc:
      plVar13 = plVar13 + -3;
    } while (&local_358 <= plVar13);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1433e3e61:
  local_48 = piVar5[2];
  local_50 = *(undefined8 *)piVar5;
  piVar5[2] = piVar3[-1];
  *(undefined8 *)piVar5 = *(undefined8 *)piVar9;
  piVar3[-1] = local_48;
  *(undefined8 *)piVar9 = local_50;
  iVar15 = iVar15 + -1;
  if ((longlong)piVar17 - (longlong)piVar16 < (longlong)piVar10 - (longlong)piVar11) {
    if (piVar6 < piVar14) {
      *plVar13 = (longlong)piVar6;
      plVar13[1] = (longlong)piVar14;
      *(int *)(plVar13 + 2) = iVar15;
      plVar13 = plVar13 + 3;
    }
    piVar6 = piVar5;
    piVar11 = piVar5;
    piVar14 = piVar3 + -6;
    if (piVar9 <= piVar5 + 3) goto LAB_1433e3fbc;
  }
  else {
    if (piVar5 + 3 < piVar9) {
      *plVar13 = (longlong)piVar5;
      plVar13[1] = (longlong)(piVar3 + -6);
      *(int *)(plVar13 + 2) = iVar15;
      plVar13 = plVar13 + 3;
    }
    piVar17 = piVar14;
    if (piVar14 <= piVar6) goto LAB_1433e3fbc;
  }
  iVar12 = (int)((ulonglong)((longlong)piVar17 - (longlong)piVar11) >> 2);
  piVar5 = piVar6;
  piVar10 = piVar17;
  piVar16 = piVar11;
  if (iVar15 == 0) goto LAB_1433e3fd1;
  goto LAB_1433e3d6e;
}



// FUNCTION 1433e3fd8 FUN_1433e3fd8 body=1 status=ok
// SIG undefined FUN_1433e3fd8(void)

void FUN_1433e3fd8(void)

{
  return;
}



// FUNCTION 1433e3fda FUN_1433e3fda body=41 status=ok
// SIG undefined FUN_1433e3fda(void)

void FUN_1433e3fda(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a7be1a0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x0001433e3ffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1433e4004 FUN_1433e4004 body=222 status=ok
// SIG undefined FUN_1433e4004(void)

void FUN_1433e4004(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  code *local_70;
  longlong *local_68;
  code **local_60;
  undefined1 *local_58;
  undefined8 **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_1;
  if ((0 < *(int *)(lVar1 + 0x310)) && ((int)param_2[1] != 0)) {
    lVar2 = *param_2;
    lVar3 = (longlong)(int)param_2[1] * 0xb18;
    do {
      local_80 = (undefined4)param_1[1];
      local_78 = param_1[2];
      local_68 = &local_88;
      local_70 = FUN_1433e4118;
      local_58 = &LAB_14791f598;
      local_88 = lVar1;
      local_60 = &local_70;
      local_50 = &local_60;
      FUN_1479073e2(lVar2,DAT_14cacc368,&local_58);
      lVar2 = lVar2 + 0xb18;
      lVar3 = lVar3 + -0xb18;
    } while (lVar3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433e40fa FUN_1433e40fa body=29 status=ok
// SIG undefined FUN_1433e40fa(void)

undefined8 FUN_1433e40fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433e4118 FUN_1433e4118 body=96 status=ok
// SIG undefined FUN_1433e4118(void)

undefined8 FUN_1433e4118(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (longlong)*(int *)(*param_1 + 0x310);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(*param_1 + 0x308);
    lVar1 = lVar1 * 0x50;
    do {
      (**(code **)(*param_2 + 0x20))(param_2,lVar2);
      lVar2 = lVar2 + 0x50;
      lVar1 = lVar1 + -0x50;
    } while (lVar1 != 0);
  }
  (**(code **)(*param_2 + 0x30))(param_2,param_1[2],(int)param_1[1]);
  return 0;
}



// FUNCTION 1433e4178 FUN_1433e4178 body=119 status=ok
// SIG undefined FUN_1433e4178(void)

undefined8 FUN_1433e4178(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  local_28 = *(longlong *)(lVar1 + 0x2c60);
  if (*(longlong *)(lVar1 + 0x2c60) == 0) {
    local_28 = lVar1;
  }
  local_20 = *(undefined4 *)(lVar1 + 0x2c68);
  pcVar2 = *(code **)(param_2 + 0x10);
  plVar4 = (longlong *)(param_2 + 0x30);
  if (*(longlong **)(param_2 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433e41f0 FUN_1433e41f0 body=1874 status=ok
// SIG undefined FUN_1433e41f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433e41f0(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cacb924);
  if (cVar1 == '\0') {
    _DAT_14cacb924 = 0;
    uRam000000014cacb92c = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_70 = &DAT_14a19662d;
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14a7b0b20;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b0b40);
  FUN_1446f470e(&DAT_14cacb968,L"AnimBlueprintLog",1);
  FUN_1446f470e(&DAT_14cacb970,&DAT_14a7be2f8,1);
  FUN_1446f470e(&DAT_14cacb978,L"Evaluate",1);
  FUN_1446f470e(&DAT_14cacb980,L"Update",1);
  FUN_1446f470e(&DAT_14cacc360,L"AnimGraph",1);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14a7b11c0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b11e0);
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7b1530,1,0);
  local_78 = 3;
  ppuStack_80 = &PTR_FUN_14a7b3bd0;
  local_88 = 6;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7b3d20,1,&PTR_FUN_14a7b3c30);
  FUN_1446f470e(&DAT_14cacbb28,L"MontageTimeStretchCurve",1);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cacbb30,L"a.Montage.EndSectionRequiresTimeRemaining",&DAT_14cacbb40,
                L"Montage EndOfSection is only checked if there is remaining time (default false).")
  ;
  atexit(FUN_1433d966d);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14a7b4130;
  local_88 = 4;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b4150);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14a7b45f0;
  local_88 = 2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b4610);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b47f0);
  local_70 = "IGraphMessage";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cacbc20 = (ulonglong)uVar2;
  local_70 = "IAnimNotifyEventContextDataInterface";
  local_68 = 0x24;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cacbc28 = (ulonglong)uVar2;
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14a7b4930;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b4950);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b4b70);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b5190);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b53e0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b5620);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b6120);
  local_70 = (char *)CONCAT44(local_70._4_4_,1);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cacbcf0,L"a.AnimNode.DeadBlending.Enable",&local_70,
                L"Enable / Disable DeadBlending");
  atexit(FUN_1433dca10);
  local_78 = 3;
  ppuStack_80 = &PTR_FUN_14a7b69a0;
  local_88 = 4;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b6a00);
  FUN_1446f470e(&DAT_14cacc368,L"UE::Anim::IInertializationRequester",1);
  local_70 = "InertialBlending";
  local_68 = 0x10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cacbdb0 = (ulonglong)uVar2;
  local_70._0_4_ = 1;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cacbdb8,L"a.AnimNode.Inertialization.Enable",&local_70,
                L"Enable / Disable Inertialization");
  atexit(FUN_1433e0496);
  local_70._0_4_ = 0;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cacbdd0,L"a.AnimNode.Inertialization.IgnoreVelocity",&local_70,
                L"Ignore velocity information during Inertialization (effectively reverting to a quintic diff blend)"
               );
  atexit(FUN_1433e04db);
  local_70 = (char *)((ulonglong)local_70._4_4_ << 0x20);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cacbde8,L"a.AnimNode.Inertialization.IgnoreDeficit",&local_70,
                L"Ignore inertialization time deficit caused by interruptions");
  atexit(FUN_1433e0520);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b7150);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b73e0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b75c0);
  local_70 = "InPose";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70);
  DAT_14cacc358 = (ulonglong)uVar2;
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b7690);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b7770);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b79b0);
  FUN_1446f470e(&DAT_14cacbe90,L"UE::Anim::FCachedPoseSkippedUpdateHandler",1);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b8150);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b86a0);
  local_70 = "AnimGraph";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cacbf28 = (ulonglong)uVar2;
  local_70 = (char *)CONCAT44(local_70._4_4_,1);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cacbf30,L"a.AnimNode.StateMachine.EnableRelevancyReset",&local_70,
                L"Reset State Machine when it becomes relevant");
  atexit(FUN_1433e0f73);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b8870);
  local_78 = 2;
  ppuStack_80 = &PTR_FUN_14a7b8b60;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b8ba0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b8df0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7b9030);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433e4944 FUN_1433e4944 body=1499 status=ok
// SIG undefined FUN_1433e4944(void)

void FUN_1433e4944(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  longlong local_160;
  ulonglong local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [64];
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong *local_d8 [3];
  longlong local_c0 [8];
  longlong *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  (**(code **)(*param_1 + 0x2b8))();
  lVar5 = *(longlong *)(param_2 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_2);
  }
  iVar4 = FUN_14490d72a(lVar5);
  if (iVar4 == 1) goto LAB_1433e4e52;
  lVar5 = (**(code **)(*param_1 + 0x308))(param_1,param_2,param_3);
  if (lVar5 == 0) {
    if (param_1[6] == 0) goto LAB_1433e4e52;
  }
  else {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar5);
    }
    param_1[6] = lVar5;
  }
  local_80 = (longlong *)0x0;
  local_78 = 0x800000000;
  FUN_1433e4f20(param_2,local_c0);
  uVar14 = (**(code **)(*param_1 + 0x310))(param_1,param_2);
  local_d8[2] = (longlong *)0x0;
  local_d8[0] = (longlong *)0x0;
  local_d8[1] = (longlong *)0x0;
  plVar8 = local_80;
  if (local_80 == (longlong *)0x0) {
    plVar8 = local_c0;
  }
  local_160 = param_2;
  if ((longlong)(int)local_78 == 0) {
LAB_1433e4c3b:
    plVar8 = local_d8[2];
    if (local_d8[1] != (longlong *)0x0) {
      plVar8 = local_d8[1];
    }
    if (local_d8[0] != (longlong *)0x0) {
      plVar8 = local_d8[0];
    }
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)FUN_147922815(param_2);
      bVar3 = ~*(byte *)((longlong)param_1 + 0x54) & 1;
    }
    else {
      bVar3 = 0;
    }
    *(byte *)((longlong)plVar8 + 0x693) = *(byte *)((longlong)plVar8 + 0x693) & 0xfe | bVar3;
    *(byte *)((longlong)plVar8 + 0x691) = *(byte *)((longlong)plVar8 + 0x691) | 0x10;
    *(undefined4 *)((longlong)plVar8 + 0x734) = 0;
    *(byte *)((longlong)plVar8 + 0x9e) = *(byte *)((longlong)plVar8 + 0x9e) & 0xf7;
    *(byte *)((longlong)plVar8 + 0x692) = *(byte *)((longlong)plVar8 + 0x692) & 0xf7;
    local_140 = 0x3ff0000000000000;
    local_138 = 0x3ff0000000000000;
    local_130 = 0x3ff0000000000000;
    FUN_14084f00a(plVar8);
    *(byte *)((longlong)plVar8 + 0x691) = *(byte *)((longlong)plVar8 + 0x691) | 0x20;
    if (param_2 == 0) {
      *(undefined4 *)(plVar8 + 0xfa) = 0;
      iVar4 = 0;
    }
    else {
      uVar1 = *(uint *)(param_2 + 0xc);
      *(uint *)(plVar8 + 0xfa) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar4 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar4 = *(int *)(lVar5 + 0x10);
        bVar13 = iVar4 == 0;
        if (bVar13) {
          *(int *)(lVar5 + 0x10) = iVar12;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar4 = iVar12;
        }
      }
    }
    *(int *)((longlong)plVar8 + 0x7d4) = iVar4;
    plVar8[0xfb] = 0;
    *(undefined4 *)((longlong)plVar8 + 0x7df) = 0;
    lVar5 = param_1[6];
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    lVar11 = local_160;
    if (plVar8[0xcd] != lVar5) {
      FUN_1435c4c78(plVar8,param_1[6]);
    }
    if ((*(byte *)((longlong)plVar8 + 0x9c) & 1) == 0) {
      lVar5 = *(longlong *)(lVar11 + 0xb0);
      if (lVar5 == 0) {
        lVar5 = FUN_1448abda6(lVar11);
      }
      FUN_140b506dc(plVar8,lVar5,0);
    }
    (**(code **)(*plVar8 + 0x490))(plVar8,lVar11,&DAT_14cadad98,0);
    (**(code **)(*plVar8 + 0xa60))(plVar8,1);
    local_e8 = (undefined1 *)0x0;
    local_e0 = 0x800000000;
    (**(code **)(*plVar8 + 0xb70))(plVar8,local_128,param_1,1);
    puVar10 = local_e8;
    if (local_e8 == (undefined1 *)0x0) {
      puVar10 = local_128;
    }
    lVar5 = (longlong)(int)local_e0;
    if (lVar5 != 0) {
      lVar11 = 0;
      do {
        plVar8 = *(longlong **)(puVar10 + lVar11);
        (**(code **)(*plVar8 + 0x1f8))(plVar8);
        local_168 = CONCAT44(local_168._4_4_,uVar14);
        (**(code **)(*plVar8 + 0x208))(plVar8,param_1[7],param_1[8],(char)param_1[9]);
        lVar11 = lVar11 + 8;
      } while (lVar5 * 8 != lVar11);
    }
    param_2 = local_160;
    if (local_e8 != (undefined1 *)0x0) {
      FUN_1400020a8();
      param_2 = local_160;
    }
  }
  else {
    plVar9 = plVar8 + (int)local_78;
    local_158 = 0;
    local_150 = plVar9;
    local_148 = param_3;
    do {
      plVar2 = (longlong *)*plVar8;
      if ((*(byte *)((longlong)plVar2 + 0x9e) & 0x10) == 0) {
        if ((*(byte *)((longlong)plVar2 + 0x691) & 0x10) != 0) {
          lVar5 = param_1[6];
          if ((lVar5 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar5);
          }
          uVar6 = 2;
          if (plVar2[0xcd] == lVar5) {
            uVar6 = (ulonglong)(plVar2[4] != param_2);
          }
          local_d8[uVar6] = plVar2;
        }
      }
      else {
        local_e8 = (undefined1 *)0x0;
        local_e0 = 0x800000000;
        (**(code **)(*plVar2 + 0xb70))(plVar2,local_128,param_1,0);
        iVar4 = (int)local_e0;
        if (0 < (int)local_e0) {
          lVar5 = plVar2[0xcd];
          if ((DAT_14c950c29 == 1) && (lVar5 != 0)) {
            FUN_1456cec3c(lVar5);
          }
          if ((param_1[6] == lVar5) || (plVar2[4] != param_2)) {
            puVar10 = local_e8;
            if (local_e8 == (undefined1 *)0x0) {
              puVar10 = local_128;
            }
            lVar5 = (longlong)(int)local_e0;
            local_158 = CONCAT71((int7)((ulonglong)local_128 >> 8),1);
            plVar9 = local_150;
            if (lVar5 != 0) {
              lVar11 = 0;
              do {
                plVar9 = *(longlong **)(puVar10 + lVar11);
                (**(code **)(*plVar9 + 0x1f8))(plVar9);
                local_168 = CONCAT44(local_168._4_4_,uVar14);
                (**(code **)(*plVar9 + 0x208))(plVar9,param_1[7],param_1[8]);
                lVar11 = lVar11 + 8;
                plVar9 = local_150;
                param_2 = local_160;
              } while (lVar5 * 8 != lVar11);
            }
          }
          else {
            uVar7 = (**(code **)(*plVar2 + 0x420))(plVar2,0);
            local_158 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          }
        }
        if (local_e8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (0 < iVar4) break;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar9);
    param_3 = local_148;
    if ((local_158 & 1) == 0) goto LAB_1433e4c3b;
  }
  local_168 = param_5;
  FUN_140bbc088(param_1,param_2,param_3,param_4);
  if (local_80 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1433e4e52:
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433e4f20 FUN_1433e4f20 body=143 status=ok
// SIG undefined FUN_1433e4f20(void)

void FUN_1433e4f20(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 *local_30;
  code *local_28;
  code **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  local_30 = &local_40;
  local_20 = &local_38;
  local_38 = FUN_1433e9b1e;
  local_28 = FUN_1449cc908;
  local_48 = 0x200000;
  local_40 = param_2;
  FUN_14482c30e(param_1,&local_28,0,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433e4fc2 FUN_1433e4fc2 body=803 status=ok
// SIG undefined FUN_1433e4fc2(void)

undefined8 FUN_1433e4fc2(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined4 local_198;
  undefined1 local_190;
  undefined1 local_188;
  undefined1 local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar5 = *(longlong *)(param_1 + 0x38);
  if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0xf2) & 1) != 0)) {
    uVar4 = 0;
  }
  else if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    (**(code **)(*param_2 + 0x4a8))(param_2,&local_118,*(undefined8 *)(param_1 + 0xb4),0);
    local_d8 = *(double *)(param_1 + 0x40) * local_d8;
    dStack_d0 = *(double *)(param_1 + 0x48) * dStack_d0;
    local_c8 = *(double *)(param_1 + 0x50) * local_c8;
    dVar6 = dStack_d0 * local_118 - local_d8 * dStack_110;
    dVar1 = local_c8 * dStack_110 - dStack_d0 * local_108;
    dVar2 = local_d8 * local_108 - local_118 * local_c8;
    dVar1 = dVar1 + dVar1;
    dVar2 = dVar2 + dVar2;
    dVar6 = dVar6 + dVar6;
    local_158 = (dVar6 * dStack_110 - dVar2 * local_108) + dStack_100 * dVar1 + local_d8 + local_f8;
    dStack_150 = (local_108 * dVar1 - local_118 * dVar6) + dStack_100 * dVar2 + dStack_d0 +
                 dStack_f0;
    local_148 = dVar6 * dStack_100 + local_c8 + (dVar2 * local_118 - dVar1 * dStack_110) + local_e8;
    uStack_140 = 0;
    dVar6 = *(double *)(param_1 + 0x90);
    dVar1 = *(double *)(param_1 + 0x98);
    dVar2 = *(double *)(param_1 + 0xa0);
    dVar3 = *(double *)(param_1 + 0xa8);
    local_178 = dVar1 * local_108 * -1.0 +
                dVar2 * dStack_110 + local_118 * dVar3 * 1.0 + dStack_100 * dVar6;
    dStack_170 = dVar6 * local_108 * 1.0 +
                 dVar3 * dStack_110 + local_118 * dVar2 * -1.0 + dStack_100 * dVar1;
    local_168 = dVar3 * local_108 * 1.0 +
                ((local_118 * dVar1 * 1.0 + dStack_100 * dVar2) - dStack_110 * dVar6);
    dStack_160 = dVar2 * local_108 * -1.0 +
                 ((local_118 * dVar6 * -1.0 + dStack_100 * dVar3) - dStack_110 * dVar1);
    local_138 = *(undefined4 *)(param_1 + 0x70);
    uStack_134 = *(undefined4 *)(param_1 + 0x74);
    uStack_130 = *(undefined4 *)(param_1 + 0x78);
    uStack_12c = *(undefined4 *)(param_1 + 0x7c);
    local_128 = *(undefined8 *)(param_1 + 0x80);
    uStack_120 = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar5 = param_2[0x16];
    if (lVar5 == 0) {
      lVar5 = FUN_1448abda6(param_2);
    }
    local_1a0 = (undefined8 *)CONCAT71(local_1a0._1_7_,1);
    local_1a8 = (undefined8 *)((ulonglong)local_1a8 & 0xffffffffffffff00);
    uVar4 = FUN_147ac718c(lVar5,uVar4,&local_178,1);
  }
  else {
    local_68 = *(undefined8 *)(param_1 + 0x80);
    local_1a0 = &local_78;
    local_78 = *(undefined8 *)(param_1 + 0x70);
    uStack_70 = *(undefined8 *)(param_1 + 0x78);
    local_88 = *(undefined8 *)(param_1 + 0x68);
    local_1a8 = &local_98;
    local_98 = *(undefined8 *)(param_1 + 0x58);
    uStack_90 = *(undefined8 *)(param_1 + 0x60);
    local_b8 = *(undefined4 *)(param_1 + 0x40);
    uStack_b4 = *(undefined4 *)(param_1 + 0x44);
    uStack_b0 = *(undefined4 *)(param_1 + 0x48);
    uStack_ac = *(undefined4 *)(param_1 + 0x4c);
    local_a8 = *(undefined8 *)(param_1 + 0x50);
    local_180 = 1;
    local_190 = 1;
    local_188 = 0;
    local_198 = 0;
    uVar4 = FUN_1434f638e(lVar5,param_2,*(undefined8 *)(param_1 + 0xb4));
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433e52e6 FUN_1433e52e6 body=454 status=ok
// SIG undefined FUN_1433e52e6(void)

void FUN_1433e52e6(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined4 local_e0;
  uint local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulonglong local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  (**(code **)(*param_1 + 0x2b8))();
  if (param_2 != 0 && (longlong *)param_1[7] != (longlong *)0x0) {
    cVar7 = (**(code **)(*(longlong *)param_1[7] + 0x308))();
    if (cVar7 != '\0') {
      lVar6 = param_1[8];
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x44);
      if ((*(byte *)(param_1 + 9) & 1) == 0) {
        uVar4 = *(undefined8 *)(param_2 + 0x260);
        uVar5 = *(undefined8 *)(param_2 + 0x268);
        uVar2 = *(undefined8 *)(param_2 + 0x270);
        lVar3 = param_1[7];
        lVar8 = *(longlong *)(param_2 + 0xb0);
        if (lVar8 == 0) {
          lVar8 = FUN_1448abda6(param_2);
        }
        local_78 = DAT_14c8464f8;
        uStack_70 = DAT_14c846500;
        local_68 = DAT_14c846508;
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,(int)lVar6);
        local_d8 = 0;
        local_e0 = uVar1;
        local_98 = uVar4;
        uStack_90 = uVar5;
        local_88 = uVar2;
        FUN_147abea3c(lVar8,lVar3);
      }
      else {
        local_e8 = &local_78;
        local_78 = DAT_14c8464f8;
        uStack_70 = DAT_14c846500;
        local_68 = DAT_14c846508;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar1);
        local_d0 = CONCAT44(local_d0._4_4_,(int)lVar6);
        local_a8 = 1;
        local_c0 = local_c0 & 0xffffffff00000000;
        local_d8 = local_d8 & 0xffffff00;
        local_e0 = 2;
        FUN_1434f6e2c(param_1[7],param_2,*(undefined8 *)((longlong)param_1 + 0x4c));
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433e54ad FUN_1433e54ad body=69 status=ok
// SIG undefined FUN_1433e54ad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433e54ad(void)

{
  _DAT_14cacc648 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433e54ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacc650,1);
  return;
}



// FUNCTION 1433e54f2 FUN_1433e54f2 body=1562 status=ok
// SIG undefined FUN_1433e54f2(void)

void FUN_1433e54f2(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,undefined8 param_6,double *param_7,double *param_8,int param_9,
                  int param_10)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  double *pdVar8;
  double *pdVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  double local_280 [51];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  fVar14 = (float)param_1;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_308;
  lVar11 = param_2[1];
  if ((longlong)(int)lVar11 != 0) {
    lVar6 = 0;
    do {
      FUN_1479285ee(fVar14);
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar11 * 8 != lVar6);
  }
  if ((((9.999999747378752e-05 < ABS(*param_7)) || (9.999999747378752e-05 < ABS(param_7[1]))) ||
      (9.999999747378752e-05 < ABS(param_7[2]))) &&
     (lVar11 = param_2[1], (longlong)(int)lVar11 != 0)) {
    lVar6 = *param_2;
    dVar15 = (double)fVar14;
    lVar10 = 0;
    do {
      lVar4 = *(longlong *)(lVar6 + lVar10);
      dVar2 = param_7[2];
      dVar3 = param_7[1];
      *(double *)(lVar4 + 0x40) = *param_7 * dVar15 + *(double *)(lVar4 + 0x40);
      *(double *)(lVar4 + 0x48) = dVar3 * dVar15 + *(double *)(lVar4 + 0x48);
      *(double *)(lVar4 + 0x50) = dVar2 * dVar15 + *(double *)(lVar4 + 0x50);
      lVar10 = lVar10 + 8;
    } while ((longlong)(int)lVar11 * 8 != lVar10);
  }
  if ((((9.999999747378752e-05 < ABS(*param_8)) || (9.999999747378752e-05 < ABS(param_8[1]))) ||
      (9.999999747378752e-05 < ABS(param_8[2]))) &&
     (lVar11 = param_2[1], (longlong)(int)lVar11 != 0)) {
    lVar6 = *param_2;
    dVar15 = (double)fVar14;
    lVar10 = 0;
    do {
      lVar4 = *(longlong *)(lVar6 + lVar10);
      if (0.0001 < *(float *)(lVar4 + 0x74)) {
        dVar16 = 1.0 / (double)*(float *)(lVar4 + 0x74);
        dVar2 = param_8[2];
        dVar3 = param_8[1];
        *(double *)(lVar4 + 0x40) = dVar16 * *param_8 * dVar15 + *(double *)(lVar4 + 0x40);
        *(double *)(lVar4 + 0x48) = dVar3 * dVar16 * dVar15 + *(double *)(lVar4 + 0x48);
        *(double *)(lVar4 + 0x50) = dVar2 * dVar16 * dVar15 + *(double *)(lVar4 + 0x50);
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)(int)lVar11 * 8 != lVar10);
  }
  if ((longlong)(int)param_5[1] != 0) {
    lVar11 = *param_5;
    lVar6 = (longlong)(int)param_5[1] * 0x90;
    do {
      FUN_147928bac(lVar11);
      lVar11 = lVar11 + 0x90;
      lVar6 = lVar6 + -0x90;
    } while (lVar6 != 0);
  }
  if (0 < param_9) {
    iVar13 = 0;
    do {
      if ((longlong)(int)param_3[1] != 0) {
        lVar11 = *param_3;
        lVar6 = (longlong)(int)param_3[1] * 0xa0;
        do {
          FUN_147924b68(lVar11);
          lVar11 = lVar11 + 0xa0;
          lVar6 = lVar6 + -0xa0;
        } while (lVar6 != 0);
      }
      if ((longlong)(int)param_4[1] != 0) {
        lVar11 = *param_4;
        lVar6 = (longlong)(int)param_4[1] << 6;
        do {
          FUN_14792432e(lVar11);
          lVar11 = lVar11 + 0x40;
          lVar6 = lVar6 + -0x40;
        } while (lVar6 != 0);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != param_9);
  }
  lVar11 = param_2[1];
  if ((longlong)(int)lVar11 != 0) {
    lVar6 = 0;
    do {
      FUN_147928a8a(fVar14);
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar11 * 8 != lVar6);
  }
  lVar11 = param_3[1];
  if ((longlong)(int)lVar11 != 0) {
    lVar6 = *param_3;
    lVar10 = 0;
    do {
      *(undefined4 *)(lVar6 + 0x58 + lVar10) = *(undefined4 *)(lVar6 + 0x5c + lVar10);
      lVar10 = lVar10 + 0xa0;
    } while ((longlong)(int)lVar11 * 0xa0 != lVar10);
  }
  lVar11 = param_4[1];
  if ((longlong)(int)lVar11 != 0) {
    lVar6 = *param_4;
    lVar10 = 0;
    do {
      pfVar1 = (float *)(lVar6 + 0x30 + lVar10);
      fVar14 = 0.0;
      if ((0.0 < *pfVar1 || *pfVar1 == 0.0) &&
         (fVar14 = *(float *)(lVar6 + 0x2c + lVar10), 0.0 <= fVar14)) {
        fVar14 = 0.0;
      }
      *(float *)(lVar6 + 0x2c + lVar10) = fVar14;
      lVar10 = lVar10 + 0x40;
    } while ((longlong)(int)lVar11 * 0x40 != lVar10);
  }
  if (0 < param_10) {
    iVar13 = 0;
    do {
      if ((longlong)(int)param_3[1] != 0) {
        lVar11 = *param_3;
        lVar6 = (longlong)(int)param_3[1] * 0xa0;
        do {
          FUN_147924b68(lVar11,param_1);
          lVar11 = lVar11 + 0xa0;
          lVar6 = lVar6 + -0xa0;
        } while (lVar6 != 0);
      }
      if ((longlong)(int)param_4[1] != 0) {
        lVar11 = *param_4;
        lVar6 = (longlong)(int)param_4[1] << 6;
        do {
          FUN_14792432e(lVar11,param_1);
          lVar11 = lVar11 + 0x40;
          lVar6 = lVar6 + -0x40;
        } while (lVar6 != 0);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != param_10);
  }
  if ((longlong)(int)param_2[1] != 0) {
    plVar7 = (longlong *)*param_2;
    plVar12 = plVar7 + (int)param_2[1];
    do {
      puVar5 = (undefined8 *)*plVar7;
      puVar5[0x3a] = puVar5[2];
      puVar5[0x38] = *puVar5;
      puVar5[0x39] = puVar5[1];
      puVar5[0x3c] = puVar5[4];
      puVar5[0x3d] = puVar5[5];
      puVar5[0x3e] = puVar5[6];
      puVar5[0x3f] = puVar5[7];
      *puVar5 = puVar5[0x30];
      puVar5[1] = puVar5[0x31];
      puVar5[2] = puVar5[0x32];
      puVar5[4] = puVar5[0x34];
      puVar5[5] = puVar5[0x35];
      *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(puVar5 + 0x36);
      *(undefined4 *)((longlong)puVar5 + 0x34) = *(undefined4 *)((longlong)puVar5 + 0x1b4);
      *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(puVar5 + 0x37);
      *(undefined4 *)((longlong)puVar5 + 0x3c) = *(undefined4 *)((longlong)puVar5 + 0x1bc);
      FUN_1403d6372(&local_e8,puVar5 + 4);
      FUN_1447fea8d(local_280 + 3,&local_e8,puVar5 + 0x10);
      dVar15 = (double)*(float *)((longlong)puVar5 + 0x74);
      lVar11 = 0x18;
      do {
        *(double *)((longlong)local_280 + lVar11 + 0x80) =
             *(double *)((longlong)local_280 + lVar11) * dVar15;
        *(double *)((longlong)local_280 + lVar11 + 0x88) =
             *(double *)((longlong)local_280 + lVar11 + 8) * dVar15;
        *(double *)((longlong)local_280 + lVar11 + 0x90) =
             *(double *)((longlong)local_280 + lVar11 + 0x10) * dVar15;
        *(double *)((longlong)local_280 + lVar11 + 0x98) =
             *(double *)((longlong)local_280 + lVar11 + 0x18) * dVar15;
        lVar11 = lVar11 + 0x20;
      } while (lVar11 != 0x98);
      local_2e8 = local_e8;
      local_2e0 = local_c8;
      local_2d8 = local_a8;
      local_2d0 = local_88;
      local_2c8 = local_e0;
      local_2c0 = local_c0;
      local_2b8 = local_a0;
      local_2b0 = local_80;
      local_2a8 = local_d8;
      local_2a0 = local_b8;
      local_298 = local_98;
      local_290 = local_78;
      local_288 = local_d0;
      local_280[0] = local_b0;
      local_280[1] = (double)local_90;
      local_280[2] = (double)local_70;
      FUN_1447fea8d(local_280 + 0x23,local_280 + 0x13,&local_2e8);
      pdVar8 = local_280 + 0x23;
      pdVar9 = (double *)(puVar5 + 0x20);
      for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
        *pdVar9 = *pdVar8;
        pdVar8 = pdVar8 + 1;
        pdVar9 = pdVar9 + 1;
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar12);
  }
  if ((local_60 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433e5b0d FUN_1433e5b0d body=55 status=ok
// SIG undefined FUN_1433e5b0d(void)

void FUN_1433e5b0d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacc710 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacc710 = FUN_14171c317(FUN_1463a74a6,uVar1,L"EStripAnimDataOnDedicatedServerSettings");
  }
  return;
}



// FUNCTION 1433e5b44 FUN_1433e5b44 body=75 status=ok
// SIG undefined FUN_1433e5b44(void)

void FUN_1433e5b44(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x130,0,0);
                    /* WARNING: Could not recover jumptable at 0x0001433e5b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x138,0,0);
  return;
}



// FUNCTION 1433e5b90 FUN_1433e5b90 body=1048 status=ok
// SIG undefined FUN_1433e5b90(void)

void FUN_1433e5b90(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  byte bVar2;
  ulonglong *puVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined1 local_80;
  undefined8 local_78;
  ulonglong uStack_70;
  uint local_60;
  undefined1 local_5a [2];
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  local_58 = 0;
  uStack_50 = 0;
  if (param_2[0xd] != 0) {
    if (*(longlong *)(param_2[0xd] + 0x10) != 0) {
      FUN_147929862(&local_58,param_1 + 0x14);
      iVar5 = *(int *)((longlong)param_1 + 0xac);
      FUN_14040f326(param_1[0x14],(int)param_1[0x15]);
      *(undefined4 *)(param_1 + 0x15) = 0;
      if ((iVar5 < 0) && (*(int *)((longlong)param_1 + 0xac) != 0)) {
        FUN_1478faba8(param_1 + 0x14,0);
      }
    }
    if ((((param_2[0xd] != 0) && (*(longlong *)(param_2[0xd] + 0x10) != 0)) &&
        ((*(byte *)(param_2 + 5) & 4) != 0)) &&
       ((DAT_14cacc760 != 0 && (iVar5 = (**(code **)(*param_1 + 0x3c0))(param_1), iVar5 != 0)))) {
      lVar8 = param_1[0x2b];
      param_1[0x2b] = 0;
      FUN_140191926(param_1,param_2);
      if (lVar8 != 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar8);
        }
        param_1[0x2b] = lVar8;
      }
      goto LAB_1433e5c6a;
    }
  }
  FUN_140191926(param_1,param_2);
LAB_1433e5c6a:
  if ((param_2[0xd] != 0) && (*(longlong *)(param_2[0xd] + 0x10) != 0)) {
    FUN_147929862(param_1 + 0x14,&local_58);
  }
  FUN_140562eea(local_5a,param_2,0,&DAT_14c896044);
  iVar5 = FUN_1448332aa(param_2,&DAT_149e3cbd8);
  if (iVar5 < 5) {
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_60,4);
      }
      else {
        FUN_14572512c(param_2,&local_60);
      }
    }
    else {
      local_60 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    local_78 = 0;
    uStack_70 = (ulonglong)local_60;
    if (local_60 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1447403be(&local_78,0);
      lVar8 = (longlong)(int)local_60;
    }
    (**(code **)(*param_2 + 0x170))(param_2,local_78,lVar8);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar8 = param_2[0xd];
    if (lVar8 == 0) {
      uVar7 = *(uint *)((longlong)param_2 + 0x34);
      cVar4 = '\x01';
      bVar10 = 0;
    }
    else {
      uVar7 = *(uint *)((longlong)param_2 + 0x34);
      if (*(longlong *)(lVar8 + 0x10) == 0) {
        bVar10 = 0;
        cVar4 = '\x01';
      }
      else {
        cVar4 = (**(code **)(*(longlong *)(*(longlong *)(lVar8 + 8) + 8) + 0x168))
                          (*(longlong *)(lVar8 + 8) + 8);
        bVar10 = 1;
      }
    }
    bVar2 = *(byte *)((longlong)param_2 + 0x2b);
    if (*(char *)((longlong)param_1 + 0x17e) == '\0') {
      plVar6 = (longlong *)FUN_14143f0c0();
      lVar8 = plVar6[0x22];
      if (lVar8 == 0) {
        (**(code **)(*plVar6 + 1000))(plVar6);
        lVar8 = plVar6[0x22];
      }
      bVar11 = *(byte *)(lVar8 + 0x55);
    }
    else {
      bVar11 = *(char *)((longlong)param_1 + 0x17e) == '\x01';
    }
    if (cVar4 == '\0' && (bVar11 & bVar10) == 1) {
      bVar10 = *(byte *)((longlong)param_1 + 0x179);
    }
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      uVar9 = bVar2 >> 3 & 1;
      if (bVar10 != 0) {
        uVar9 = 1;
      }
      if ((uVar7 & 0x401000) != 0) {
        uVar9 = 1;
      }
      local_78 = CONCAT44(local_78._4_4_,uVar9);
      (**(code **)(*param_2 + 0x170))(param_2,&local_78,4);
      uVar7 = (uint)local_78;
      if (1 < (uint)local_78) {
        FUN_14572541c(param_2);
        uVar7 = (uint)local_78;
      }
    }
    else {
      uVar7 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (uVar7 != 0) {
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        local_88 = param_1[0x18];
        local_98 = param_1[8];
        local_90 = param_1[0x17];
        local_80 = 1;
        FUN_144869e00(param_1 + 0x19,param_2,0,param_1);
      }
      puVar3 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar1) {
        local_78 = CONCAT44(local_78._4_4_,(uint)*(byte *)((longlong)param_1 + 0x17f)) &
                   0xffffffff00000001;
        (**(code **)(*param_2 + 0x170))(param_2,&local_78,4);
        uVar7 = (uint)local_78;
        if (1 < (uint)local_78) {
          FUN_14572541c(param_2);
          uVar7 = (uint)local_78;
        }
      }
      else {
        uVar7 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar1;
      }
      LOCK();
      *(bool *)((longlong)param_1 + 0x17f) = uVar7 != 0;
      UNLOCK();
    }
  }
  FUN_14040f326(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433e5fa9 FUN_1433e5fa9 body=69 status=ok
// SIG undefined FUN_1433e5fa9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433e5fa9(void)

{
  _DAT_14cacc740 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433e5feb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacc748,1);
  return;
}



// FUNCTION 1433e5fee FUN_1433e5fee body=69 status=ok
// SIG undefined FUN_1433e5fee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433e5fee(void)

{
  _DAT_14cacc750 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433e6030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacc758,1);
  return;
}



// FUNCTION 1433e6033 FUN_1433e6033 body=69 status=ok
// SIG undefined FUN_1433e6033(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433e6033(void)

{
  _DAT_14cacc768 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433e6075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacc770,1);
  return;
}



// FUNCTION 1433e6078 FUN_1433e6078 body=151 status=ok
// SIG undefined FUN_1433e6078(void)

void FUN_1433e6078(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,0x1427dd501,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
      return;
    }
  }
  return;
}



// FUNCTION 1433e6110 FUN_1433e6110 body=893 status=ok
// SIG undefined FUN_1433e6110(void)

void FUN_1433e6110(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_2b8 [32];
  undefined2 *local_298;
  undefined2 *local_288;
  int local_280;
  undefined2 *local_278;
  undefined8 uStack_270;
  longlong local_268;
  undefined2 *local_260;
  undefined2 *local_258;
  ulonglong *local_250;
  char local_248;
  undefined2 local_240 [256];
  ulonglong local_40 [4];
  
  local_40[0] = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  FUN_140d77aa8();
  (**(code **)(*param_1 + 800))(param_1);
  cVar5 = (**(code **)(*param_1 + 0x2c0))(param_1);
  if (((cVar5 != '\0') && (param_1[0x2b] != 0)) && (*(longlong *)(param_1[0x2b] + 0x40) == 0)) {
    param_1[0x2b] = 0;
  }
  FUN_14089b021(param_1[0x11],(int)param_1[0x12]);
  plVar6 = param_1;
LAB_1433e6192:
  plVar7 = plVar6;
  plVar6 = plVar7;
  if ((longlong *)plVar7[4] != (longlong *)0x0) goto code_r0x0001433e61a1;
  goto LAB_1433e61b2;
code_r0x0001433e61a1:
  plVar6 = (longlong *)plVar7[4];
  if ((*(uint *)(plVar7 + 1) >> 0x1c & 1) != 0) {
    plVar6 = (longlong *)FUN_142840154(plVar7);
LAB_1433e61b2:
    if (plVar6 != (longlong *)0x0) {
      if (((*(uint *)((longlong)plVar6 + 0x2c) & 0x80000200) != 0) &&
         (lVar9 = param_1[8], lVar9 != 0)) {
        uVar1 = *(undefined4 *)(lVar9 + 0x17c);
        uVar2 = *(undefined4 *)(lVar9 + 0x180);
        uVar3 = *(undefined4 *)(lVar9 + 0x184);
        *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(lVar9 + 0x178);
        *(undefined4 *)((longlong)param_1 + 0x5c) = uVar1;
        *(undefined4 *)(param_1 + 0xc) = uVar2;
        *(undefined4 *)((longlong)param_1 + 100) = uVar3;
        if ((param_1[0x25] == 0) && ((int)param_1[0x1a] != 0)) {
          lVar9 = param_1[4];
          if (lVar9 == 0) {
            FUN_144750a86(param_1,&local_260,0,0);
            puVar11 = local_260;
            iVar4 = (int)local_258;
          }
          else {
            local_278 = (undefined2 *)0x0;
            uStack_270 = 0;
            FUN_14005eb28(&local_278,0x80);
            local_260 = local_240;
            local_248 = '\0';
            local_250 = local_40;
            local_288 = *(undefined2 **)(*(longlong *)(lVar9 + 0x10) + 0x18);
            local_258 = local_260;
            FUN_14005eb5c(&local_288,&local_260);
            if (local_250 <= local_258 + 1) {
              FUN_140213274(&local_260,1);
            }
            *local_258 = 0x20;
            local_258 = local_258 + 1;
            FUN_144750bde(lVar9,0,&local_260);
            FUN_1400020e8(&local_278,local_260,
                          (ulonglong)((longlong)local_258 - (longlong)local_260) >> 1);
            if (local_248 == '\x01') {
              FUN_1400020a8(local_260);
            }
            puVar11 = local_278;
            iVar4 = (int)uStack_270;
          }
          if (iVar4 == 0) {
            puVar11 = &DAT_149dfb77a;
          }
          local_268 = param_1[3];
          FUN_1400021e4(&local_268,&local_288);
          puVar10 = local_288;
          if (local_280 == 0) {
            puVar10 = &DAT_149dfb77a;
          }
          local_298 = puVar11;
          FUN_140033559(".\\Runtime/Engine/Private/Animation/AnimSequence.cpp",0x421,
                        L"No animation compression exists for sequence %s (%s)",puVar10);
          if (local_288 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          puVar11 = local_260;
          if (lVar9 != 0) {
            puVar11 = local_278;
          }
          if (puVar11 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      if ((longlong)(int)param_1[0x12] != 0) {
        lVar9 = param_1[0x11];
        lVar8 = (longlong)(int)param_1[0x12] * 0xb8;
        do {
          if (*(char *)(lVar9 + 0x19) == '\x02') {
            fVar13 = *(float *)(lVar9 + 0x24) * *(float *)(lVar9 + 0x20) + *(float *)(lVar9 + 0x1c);
          }
          else if (*(char *)(lVar9 + 0x19) == '\x01') {
            fVar13 = *(float *)(lVar9 + 0x1c) + *(float *)(lVar9 + 0x24);
          }
          else {
            fVar13 = *(float *)(lVar9 + 0x24);
          }
          FUN_140b5f9e2(lVar9,param_1,fVar13,0);
          fVar13 = *(float *)(lVar9 + 0x58);
          if ((fVar13 != 0.0) || (NAN(fVar13))) {
            if (*(char *)(lVar9 + 0x19) == '\x02') {
              fVar12 = *(float *)(lVar9 + 0x24) * *(float *)(lVar9 + 0x20) +
                       *(float *)(lVar9 + 0x1c);
            }
            else if (*(char *)(lVar9 + 0x19) == '\x01') {
              fVar12 = *(float *)(lVar9 + 0x1c) + *(float *)(lVar9 + 0x24);
            }
            else {
              fVar12 = *(float *)(lVar9 + 0x24);
            }
            FUN_140b5f9e2(lVar9 + 0x60,param_1,fVar13 + fVar12,0);
          }
          lVar9 = lVar9 + 0xb8;
          lVar8 = lVar8 + -0xb8;
        } while (lVar8 != 0);
      }
      if (*(float *)(param_1 + 0x3f) <= 0.0 && *(float *)(param_1 + 0x3f) != 0.0) {
        FUN_14792999e(param_1);
      }
      if ((local_40[0] ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    plVar6 = (longlong *)plVar7[4];
  }
  goto LAB_1433e6192;
}



// FUNCTION 1433e6492 FUN_1433e6492 body=3409 status=ok
// SIG undefined FUN_1433e6492(void)

void FUN_1433e6492(longlong *param_1,longlong *param_2,double *param_3,byte param_4)

{
  ulonglong uVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  uint *puVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  double *pdVar15;
  int iVar16;
  bool bVar17;
  longlong *plVar18;
  undefined4 uVar19;
  undefined8 unaff_RBP;
  undefined7 uVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  ulonglong uVar31;
  uint uVar32;
  longlong lVar33;
  float fVar34;
  double dVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  undefined8 *local_1e0;
  longlong local_1d0;
  longlong *local_1c8;
  double *local_1c0;
  longlong *local_1b8;
  ulonglong local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  longlong local_170;
  undefined4 local_168;
  longlong local_160;
  undefined8 local_158;
  int local_150;
  longlong local_148;
  uint local_140;
  undefined1 local_13c;
  undefined8 local_138 [12];
  undefined8 local_d8 [12];
  uint local_78;
  undefined1 local_74;
  undefined1 local_73;
  byte local_72;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  plVar10 = (longlong *)*param_2;
  lVar14 = plVar10[2];
  local_1c0 = param_3;
  local_1a8 = param_2;
  bVar5 = (**(code **)(*param_1 + 1000))();
  uVar20 = (undefined7)((ulonglong)unaff_RBP >> 8);
  local_1d0 = lVar14;
  if ((bVar5 & param_4) == 0) {
    if ((*(code **)(*param_1 + 1000) != (code *)&LAB_144b202e0) &&
       (cVar8 = (**(code **)(*param_1 + 1000))(param_1), cVar8 != '\0')) {
      lVar14 = local_1d0;
      if ((((*(byte *)((longlong)param_1 + 0x17f) & 1) != 0) ||
          (((lVar26 = param_1[8], (int)param_1[0xb] != *(int *)(lVar26 + 0x178) ||
            (*(int *)((longlong)param_1 + 0x5c) != *(int *)(lVar26 + 0x17c))) ||
           ((int)param_1[0xc] != *(int *)(lVar26 + 0x180))))) ||
         ((*(int *)((longlong)param_1 + 100) != *(int *)(lVar26 + 0x184) ||
          (*(char *)(local_1d0 + 0xfb) != '\0')))) {
        cVar8 = '\0';
        uVar19 = (undefined4)CONCAT71(uVar20,1);
        goto LAB_1433e6518;
      }
      if (*(char *)(local_1d0 + 0xfc) != '\0') goto LAB_1433e64ec;
    }
    cVar8 = (**(code **)(*param_1 + 0x2c0))(param_1);
    uVar19 = 0;
  }
  else {
LAB_1433e64ec:
    uVar19 = (undefined4)CONCAT71(uVar20,1);
    cVar8 = '\0';
    lVar14 = local_1d0;
  }
LAB_1433e6518:
  lVar26 = param_1[8];
  if (lVar26 == 0) {
    if (cVar8 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_208);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_208);
  }
  if (cVar8 == '\0') {
    if (((*(char *)(lVar14 + 0xfa) == '\x01') && (*(int *)(lVar14 + 0x44) != 0)) &&
       ((uVar32 = *(uint *)(lVar14 + 0x40), -1 < (int)uVar32 &&
        (((((int)uVar32 < DAT_14c9647dc &&
           (plVar24 = (longlong *)
                      ((ulonglong)((uVar32 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar32 >> 0x10) * 8)),
           plVar24 != (longlong *)0x0)) && ((int)plVar24[2] == *(int *)(lVar14 + 0x44))) &&
         (((*(uint *)(plVar24 + 1) & 0x10200000) == 0 && (lVar26 == *plVar24)))))))) {
      lVar33 = param_1[0x2c];
      if (lVar33 == 0) {
        if ((int)param_1[0x2e] < 1) {
LAB_1433e674c:
          plVar18 = (longlong *)(lVar26 + 0x80);
        }
        else {
          plVar18 = param_1 + 0x2d;
        }
      }
      else {
        if (*(int *)(lVar26 + 0x1c0) != *(int *)(lVar26 + 0x1ec)) {
          uVar32 = (uint)((ulonglong)lVar33 >> 0x10);
          uVar30 = (uint)lVar33 & 0xffff;
          lVar27 = lVar26 + 0x1f0;
          if (*(longlong *)(lVar26 + 0x1f8) != 0) {
            lVar27 = *(longlong *)(lVar26 + 0x1f8);
          }
          iVar16 = *(int *)(lVar27 + (ulonglong)
                                     (*(int *)(lVar26 + 0x200) - 1U &
                                     (int)((ulonglong)lVar33 >> 0x20) +
                                     ((uint)lVar33 << 0x10 | uVar30) +
                                     (uVar32 << 0x13 | uVar32 & 0xffff) + (uVar30 >> 4)) * 4);
          if (iVar16 != -1) {
            do {
              plVar24 = (longlong *)(*(longlong *)(lVar26 + 0x1b8) + (longlong)iVar16 * 0x28);
              if (*plVar24 == lVar33) goto LAB_1433e6f2e;
              iVar16 = (int)plVar24[4];
            } while (iVar16 != -1);
          }
        }
        plVar24 = (longlong *)0x0;
LAB_1433e6f2e:
        plVar18 = plVar24 + 1;
        if (plVar24 == (longlong *)0x0) {
          plVar18 = (longlong *)0x0;
        }
        if (plVar18 == (longlong *)0x0) goto LAB_1433e674c;
        plVar18 = plVar18 + 1;
      }
      puVar11 = (uint *)FUN_14481774e(DAT_14cacd528);
      uVar32 = *(uint *)(plVar10 + 1);
      if ((ulonglong)uVar32 != 0) {
        lVar26 = 0;
        uVar12 = 0;
        do {
          uVar30 = 0xffffffff;
          if ((longlong)uVar12 < (longlong)*(int *)(lVar14 + 0x78)) {
            uVar30 = *(uint *)(*(longlong *)(lVar14 + 0x70) + uVar12 * 4);
          }
          if ((((puVar11[1] != 0) && (uVar3 = *puVar11, -1 < (int)uVar3)) &&
              (((int)uVar3 < DAT_14c9647dc &&
               (((lVar33 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8),
                 lVar33 != 0 && (*(uint *)(lVar33 + 0x10) == puVar11[1])) &&
                ((*(uint *)(lVar33 + 8) & 0x10200000) == 0)))))) &&
             (((((puVar11[3] != 0 && (uVar3 = puVar11[2], -1 < (int)uVar3)) &&
                ((int)uVar3 < DAT_14c9647dc)) &&
               ((lVar33 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar33 != 0
                && (*(uint *)(lVar33 + 0x10) == puVar11[3])))) &&
              ((*(uint *)(lVar33 + 8) & 0x10200000) == 0)))) {
            if (((int)uVar30 < 0) || ((int)puVar11[10] <= (int)uVar30)) goto LAB_1433e65db;
            uVar30 = *(uint *)(*(longlong *)(puVar11 + 8) + (ulonglong)uVar30 * 4);
          }
          if (((int)uVar30 < 0) || ((int)plVar18[1] <= (int)uVar30)) goto LAB_1433e65db;
          puVar22 = (undefined8 *)((ulonglong)uVar30 * 0x60 + *plVar18);
          puVar23 = (undefined8 *)(*plVar10 + lVar26);
          for (lVar33 = 0xc; lVar33 != 0; lVar33 = lVar33 + -1) {
            *puVar23 = *puVar22;
            puVar22 = puVar22 + 1;
            puVar23 = puVar23 + 1;
          }
          uVar12 = uVar12 + 1;
          lVar26 = lVar26 + 0x60;
        } while (uVar32 != uVar12);
      }
    }
    else {
LAB_1433e65db:
      FUN_1448859f0(plVar10,plVar10[2]);
    }
  }
  else {
    FUN_142400d60(*plVar10,(int)plVar10[1]);
  }
  lVar26 = param_1[0x1a];
  bVar6 = (**(code **)(*param_1 + 0x2c0))(param_1);
  local_1b0 = CONCAT44(local_1b0._4_4_,uVar19);
  bVar6 = ((byte)uVar19 ^ 1) & bVar6;
  FUN_144943c1c(param_1,local_138,0,lVar14);
  local_74 = *(undefined1 *)((longlong)param_1 + 0x179);
  local_73 = *(undefined1 *)((longlong)param_1 + 0x17b);
  bVar5 = *(byte *)((longlong)param_1 + 0x17a);
  puVar22 = local_138;
  puVar23 = local_d8;
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar23 = *puVar22;
    puVar22 = puVar22 + 1;
    puVar23 = puVar23 + 1;
  }
  local_78 = (uint)bVar5;
  pdVar15 = local_1c0;
  local_72 = bVar6;
  if ((int)lVar26 != 0) {
    pdVar15 = (double *)(param_1 + 0x2f);
    if (*(char *)((longlong)local_1c0 + 0x41) != '\0') {
      pdVar15 = local_1c0 + 8;
    }
    uVar2 = *(undefined1 *)pdVar15;
    bVar5 = *(byte *)(param_1 + 0x2a);
    local_1c8 = plVar10;
    uVar7 = (**(code **)(*param_1 + 0x2c0))(param_1);
    lVar14 = param_1[8];
    lVar26 = param_1[0x25];
    lVar33 = param_1[0x2c];
    if (lVar33 == 0) {
      plVar10 = param_1;
      if (0 < (int)param_1[0x2e]) {
LAB_1433e66c0:
        plVar24 = plVar10;
        plVar10 = plVar24;
        if ((longlong *)plVar24[4] != (longlong *)0x0) goto code_r0x0001433e66cf;
        goto LAB_1433e66e0;
      }
      lVar33 = 0;
    }
    goto LAB_1433e6886;
  }
  goto LAB_1433e6a4b;
code_r0x0001433e66cf:
  plVar10 = (longlong *)plVar24[4];
  if ((*(uint *)(plVar24 + 1) >> 0x1c & 1) == 0) goto LAB_1433e66c0;
  plVar10 = (longlong *)FUN_142840154(plVar24);
LAB_1433e66e0:
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)plVar24[4];
    goto LAB_1433e66c0;
  }
  lVar33 = plVar10[3];
LAB_1433e6886:
  local_1b8 = param_1 + 0x19;
  fVar34 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
  dVar35 = (double)*(int *)((longlong)param_1 + 0x1a4);
  dVar37 = ((double)fVar34 * (double)(int)param_1[0x34]) / dVar35;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = dVar37;
  auVar39 = roundpd(auVar39,auVar39,1);
  dVar38 = auVar39._0_8_;
  dVar37 = dVar37 - dVar38;
  if (2147483647.0 <= dVar38) {
    dVar38 = 2147483647.0;
  }
  if (dVar38 <= -2147483648.0) {
    dVar38 = -2147483648.0;
  }
  iVar16 = (int)dVar37;
  fVar36 = (float)dVar37 - (float)iVar16;
  fVar34 = fVar36;
  if (0.99999994 <= fVar36) {
    fVar34 = 0.99999994;
  }
  fVar34 = (float)(~-(uint)(0.0 < fVar36) & (uint)fVar36 | (uint)fVar34 & -(uint)(0.0 < fVar36)) +
           0.5 + -0.5;
  if (0.99999994 <= fVar34) {
    fVar34 = 0.99999994;
  }
  if (fVar34 <= 0.0) {
    fVar34 = 0.0;
  }
  local_150 = (uint)(0.5 <= fVar34) + (int)dVar38 + iVar16;
  local_1a0._0_5_ =
       CONCAT14(uVar2,(float)(((double)((longlong)*(int *)((longlong)param_1 + 0x1a4) *
                                       (longlong)local_150) +
                              (double)((ulonglong)dVar35 & 0x8000000000000000)) /
                             (double)(int)param_1[0x34]));
  local_188 = 0;
  local_178 = *(undefined4 *)(lVar14 + 0x88);
  local_180 = *(undefined8 *)(lVar14 + 0x80);
  local_168 = (undefined4)param_1[0x1a];
  local_170 = param_1[0x19];
  local_160 = param_1[0x34];
  local_158 = 0;
  local_140 = (uint)bVar5;
  lVar27 = param_1[0x2c];
  local_198 = lVar33;
  local_190 = lVar26;
  local_148 = lVar14;
  local_13c = uVar7;
  if (lVar27 == 0) {
    if ((int)param_1[0x2e] < 1) {
      lVar14 = param_1[8];
      if (lVar14 == 0) goto LAB_1433e7106;
LAB_1433e6a26:
      plVar24 = (longlong *)(lVar14 + 0x80);
    }
    else {
      plVar24 = param_1 + 0x2d;
    }
  }
  else {
    lVar14 = param_1[8];
    if (lVar14 == 0) {
LAB_1433e7106:
      plVar24 = &DAT_14cacc778;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cacc788) && (FUN_144b3d300(&DAT_14cacc788), DAT_14cacc788 == -1))
      {
        DAT_14cacc778 = 0;
        uRam000000014cacc780 = 0;
        atexit((_func_5014 *)&LAB_1433e740c);
        _Init_thread_footer(&DAT_14cacc788);
      }
    }
    else {
      if (*(int *)(lVar14 + 0x1c0) != *(int *)(lVar14 + 0x1ec)) {
        uVar32 = (uint)((ulonglong)lVar27 >> 0x10);
        uVar30 = (uint)lVar27 & 0xffff;
        lVar26 = lVar14 + 0x1f0;
        if (*(longlong *)(lVar14 + 0x1f8) != 0) {
          lVar26 = *(longlong *)(lVar14 + 0x1f8);
        }
        iVar16 = *(int *)(lVar26 + (ulonglong)
                                   (*(int *)(lVar14 + 0x200) - 1U &
                                   (int)((ulonglong)lVar27 >> 0x20) +
                                   ((uint)lVar27 << 0x10 | uVar30) +
                                   (uVar32 << 0x13 | uVar32 & 0xffff) + (uVar30 >> 4)) * 4);
        if (iVar16 != -1) {
          do {
            plVar10 = (longlong *)(*(longlong *)(lVar14 + 0x1b8) + (longlong)iVar16 * 0x28);
            if (*plVar10 == lVar27) goto LAB_1433e6e77;
            iVar16 = (int)plVar10[4];
          } while (iVar16 != -1);
        }
      }
      plVar10 = (longlong *)0x0;
LAB_1433e6e77:
      plVar24 = plVar10 + 1;
      if (plVar10 == (longlong *)0x0) {
        plVar24 = (longlong *)0x0;
      }
      if (plVar24 == (longlong *)0x0) goto LAB_1433e6a26;
      plVar24 = plVar24 + 1;
    }
  }
  pdVar15 = local_1c0;
  local_1e8 = plVar24;
  local_1e0 = local_d8;
  FUN_1433cb8bb(local_1c8,local_1b8,local_1c0,&local_1a0);
LAB_1433e6a4b:
  plVar24 = local_1a8;
  (**(code **)(*param_1 + 0x2e8))(param_1,local_1a8[1],(float)*pdVar15,local_1b0 & 0xffffffff);
  plVar10 = (longlong *)plVar24[2];
  local_1b0 = *(longlong *)(*plVar24 + 0x10);
  iVar16 = (int)param_1[0x3a];
  if (iVar16 == 0) {
    uVar12 = 1;
    uVar31 = 0;
    iVar21 = 0;
    iVar25 = 0;
  }
  else {
    puVar11 = (uint *)param_1[0x39];
    if ((uint *)param_1[0x39] == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 0x37);
    }
    uVar32 = *puVar11;
    if (uVar32 == 0) {
      iVar25 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar25 = iVar16 + -1;
      }
      uVar31 = 0;
      uVar12 = (ulonglong)(uint)(iVar25 >> 5);
      if (iVar25 >> 5 < 1) {
        uVar12 = uVar31;
      }
      iVar21 = 0;
      do {
        if (uVar12 == uVar31) goto LAB_1433e6b15;
        iVar21 = iVar21 + 0x20;
        uVar32 = puVar11[uVar31 + 1];
        uVar31 = uVar31 + 1;
      } while (uVar32 == 0);
    }
    else {
      uVar31 = 0;
      iVar21 = 0;
    }
    uVar12 = (ulonglong)(-uVar32 & uVar32);
    uVar1 = uVar12 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar25 = (iVar21 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar16 <= iVar25) {
      iVar25 = iVar16;
    }
  }
  if (iVar25 != iVar16) {
    uVar32 = 0xffffffff;
    iVar9 = iVar16;
    do {
      iVar28 = *(int *)(param_1[0x35] + 0x10 + (longlong)iVar25 * 0xf8);
      if (((-1 < (longlong)iVar28) && (iVar28 < *(int *)(local_1b0 + 0x88))) &&
         (iVar28 = *(int *)(*(longlong *)(local_1b0 + 0x80) + (longlong)iVar28 * 4), iVar28 != -1))
      {
        plVar24 = (longlong *)(param_1[0x35] + (longlong)iVar25 * 0xf8);
        local_1a0 = DAT_14cacc380;
        local_198 = *plVar24;
        local_190 = CONCAT44(local_190._4_4_,iVar28);
        local_1b8 = plVar10;
        uVar13 = FUN_14792a902(plVar10,plVar24[3],&local_1a0);
        FUN_1478b0bb8(plVar24 + 8,plVar24[3],(float)*local_1c0,uVar13);
        iVar9 = (int)param_1[0x3a];
        plVar10 = local_1b8;
      }
      uVar32 = uVar32 & ~(uint)uVar12;
      puVar11 = (uint *)param_1[0x39];
      if ((uint *)param_1[0x39] == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 0x37);
      }
      iVar25 = (int)uVar31;
      lVar14 = (longlong)iVar25;
      uVar30 = puVar11[lVar14] & uVar32;
      if (uVar30 == 0) {
        iVar28 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar28 = iVar9 + -1;
        }
        iVar28 = iVar28 >> 5;
        iVar21 = iVar21 + 0x20;
        iVar29 = iVar28;
        if (iVar28 < iVar25) {
          iVar29 = iVar25;
        }
        if (iVar25 < iVar28) {
          lVar26 = 0;
          do {
            uVar30 = puVar11[lVar14 + lVar26 + 1];
            if (uVar30 != 0) {
              uVar31 = (ulonglong)(iVar25 + (int)lVar26 + 1);
              uVar32 = 0xffffffff;
              goto LAB_1433e6c77;
            }
            iVar21 = iVar21 + 0x20;
            lVar26 = lVar26 + 1;
          } while (iVar29 - lVar14 != lVar26);
          uVar32 = 0xffffffff;
          iVar25 = iVar29;
        }
        uVar31 = (ulonglong)(iVar25 + 1);
        iVar25 = iVar9;
      }
      else {
LAB_1433e6c77:
        uVar12 = (ulonglong)(-uVar30 & uVar30);
        uVar1 = uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar25 = (iVar21 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar9 <= iVar25) {
          iVar25 = iVar9;
        }
      }
    } while (iVar25 != iVar16);
  }
LAB_1433e6b15:
  dVar35 = *local_1c0;
  lVar14 = param_1[0x2c];
  if (lVar14 == 0) {
    if (0 < (int)param_1[0x2e]) {
      plVar24 = param_1 + 0x2d;
      goto LAB_1433e6b52;
    }
    lVar26 = param_1[8];
    if (lVar26 == 0) goto LAB_1433e7059;
  }
  else {
    lVar26 = param_1[8];
    if (lVar26 == 0) {
LAB_1433e7059:
      plVar24 = &DAT_14cacc778;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cacc788) && (FUN_144b3d300(&DAT_14cacc788), DAT_14cacc788 == -1))
      {
        DAT_14cacc778 = 0;
        uRam000000014cacc780 = 0;
        atexit((_func_5014 *)&LAB_1433e740c);
        _Init_thread_footer(&DAT_14cacc788);
      }
      goto LAB_1433e6b52;
    }
    if (*(int *)(lVar26 + 0x1c0) != *(int *)(lVar26 + 0x1ec)) {
      uVar32 = (uint)((ulonglong)lVar14 >> 0x10);
      uVar30 = (uint)lVar14 & 0xffff;
      lVar33 = lVar26 + 0x1f0;
      if (*(longlong *)(lVar26 + 0x1f8) != 0) {
        lVar33 = *(longlong *)(lVar26 + 0x1f8);
      }
      iVar16 = *(int *)(lVar33 + (ulonglong)
                                 (*(int *)(lVar26 + 0x200) - 1U &
                                 (int)((ulonglong)lVar14 >> 0x20) + ((uint)lVar14 << 0x10 | uVar30)
                                 + (uVar32 << 0x13 | uVar32 & 0xffff) + (uVar30 >> 4)) * 4);
      if (iVar16 != -1) {
        do {
          plVar10 = (longlong *)(*(longlong *)(lVar26 + 0x1b8) + (longlong)iVar16 * 0x28);
          if (*plVar10 == lVar14) goto LAB_1433e6db8;
          iVar16 = (int)plVar10[4];
        } while (iVar16 != -1);
      }
    }
    plVar10 = (longlong *)0x0;
LAB_1433e6db8:
    plVar24 = plVar10 + 1;
    if (plVar10 == (longlong *)0x0) {
      plVar24 = (longlong *)0x0;
    }
    if (plVar24 != (longlong *)0x0) {
      plVar24 = plVar24 + 1;
      goto LAB_1433e6b52;
    }
  }
  plVar24 = (longlong *)(lVar26 + 0x80);
LAB_1433e6b52:
  iVar16 = *(int *)(local_1d0 + 0x164);
  *(int *)(local_1d0 + 0x164) = iVar16 + 1;
  uVar12 = (ulonglong)*(int *)(local_1d0 + 0x158);
  if ((longlong)uVar12 < 1) {
    *(int *)(local_1d0 + 0x164) = iVar16;
  }
  else {
    plVar10 = (longlong *)(local_1d0 + 0x150);
    bVar17 = false;
    do {
      lVar14 = uVar12 * 0x10 + -8;
      uVar31 = uVar12;
      while ((*(int *)(*plVar10 + lVar14) != 0 &&
             (plVar18 = *(longlong **)(*plVar10 + -8 + lVar14), plVar18 != (longlong *)0x0))) {
        local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,(float)dVar35);
        cVar8 = (**(code **)(*plVar18 + 0x60))(plVar18,local_1a8,param_1,plVar24);
        if (cVar8 == '\0') break;
        lVar14 = lVar14 + -0x10;
        bVar4 = uVar31 < 2;
        uVar31 = uVar31 - 1;
        if (bVar4) {
          iVar16 = *(int *)(local_1d0 + 0x164) + -1;
          *(int *)(local_1d0 + 0x164) = iVar16;
          if (!bVar17) goto LAB_1433e6b7a;
          goto LAB_1433e6fc9;
        }
      }
      uVar12 = uVar31 - 1;
      bVar17 = true;
    } while (1 < uVar31);
    iVar16 = *(int *)(local_1d0 + 0x164) + -1;
    *(int *)(local_1d0 + 0x164) = iVar16;
LAB_1433e6fc9:
    if (iVar16 < 1) {
      iVar16 = *(int *)(local_1d0 + 0x158);
      iVar25 = iVar16;
      if (0 < iVar16) {
        iVar21 = 0;
        do {
          if (((*(int *)(*plVar10 + 8 + (longlong)iVar21 * 0x10) == 0) ||
              (plVar24 = *(longlong **)(*plVar10 + (longlong)iVar21 * 0x10),
              plVar24 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar24 + 0x28))(), cVar8 != '\0')) {
            FUN_14005b288(plVar10,iVar21);
            FUN_14005b248(plVar10);
          }
          else {
            iVar21 = iVar21 + 1;
          }
          iVar25 = *(int *)(local_1d0 + 0x158);
        } while (iVar21 < iVar25);
      }
      iVar21 = 2;
      if (2 < iVar25 * 2) {
        iVar21 = iVar25 * 2;
      }
      *(int *)(local_1d0 + 0x160) = iVar21;
      if ((iVar21 < iVar16) && (*(int *)(local_1d0 + 0x15c) != iVar25)) {
        FUN_14045812c(plVar10);
      }
    }
  }
LAB_1433e6b7a:
  if ((local_60 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433e722f FUN_1433e722f body=476 status=ok
// SIG undefined FUN_1433e722f(void)

void FUN_1433e722f(undefined8 param_1,double *param_2,longlong *param_3,int param_4,
                  undefined1 param_5)

{
  void *pvVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  size_t _Size;
  float fVar5;
  undefined1 auStack_c8 [32];
  double local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined4 uStack_97;
  undefined4 uStack_93;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68;
  char local_67;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar3 = (**(code **)(*param_3 + 0x310))(param_3);
  if (iVar3 < 1) {
    dVar2 = 0.0;
  }
  else {
    iVar3 = (**(code **)(*param_3 + 0x310))(param_3);
    dVar2 = (double)param_4 / (double)iVar3;
    if (1.0 <= dVar2) {
      dVar2 = 1.0;
    }
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
  }
  fVar5 = (float)(**(code **)(*param_3 + 0x2b0))(param_3);
  local_a8 = *param_2;
  uStack_a0 = *(undefined4 *)(param_2 + 1);
  uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_97 = *(undefined4 *)((longlong)param_2 + 0x11);
  uStack_93 = *(undefined4 *)((longlong)param_2 + 0x15);
  uStack_98 = (undefined1)((uint)*(undefined4 *)((longlong)param_2 + 0xd) >> 0x18);
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_2 + 5);
  lVar4 = (longlong)local_80;
  pvVar1 = (void *)param_2[4];
  if (lVar4 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1474d60b6(&local_88,local_80,0);
    memcpy(local_88,pvVar1,lVar4 << 4);
  }
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_2 + 7);
  _Size = (size_t)local_70;
  pvVar1 = (void *)param_2[6];
  if (_Size == 0) {
    local_6c = 0;
  }
  else {
    FUN_1447cd5fa(&local_78,local_70,0);
    memcpy(local_78,pvVar1,_Size);
  }
  local_a8 = dVar2 * (double)fVar5;
  local_67 = *(char *)((longlong)param_2 + 0x41);
  if (local_67 == '\x01') {
    local_68 = *(undefined1 *)(param_2 + 8);
  }
  FUN_1433e6492(param_3,param_1,&local_a8,param_5);
  if (local_67 == '\x01') {
    local_67 = '\0';
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433e741e FUN_1433e741e body=207 status=ok
// SIG undefined FUN_1433e741e(void)

int FUN_1433e741e(longlong *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  
  if (param_1[0x25] == 0) {
    fVar2 = (float)(**(code **)(*param_1 + 0x2b0))();
    dVar6 = ((double)(int)param_1[0x34] * (double)fVar2) /
            (double)*(int *)((longlong)param_1 + 0x1a4);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar6;
    auVar5 = roundpd(auVar5,auVar5,1);
    dVar4 = auVar5._0_8_;
    dVar6 = dVar6 - dVar4;
    if (2147483647.0 <= dVar4) {
      dVar4 = 2147483647.0;
    }
    if (dVar4 <= -2147483648.0) {
      dVar4 = -2147483648.0;
    }
    iVar1 = (int)dVar6;
    fVar3 = (float)dVar6 - (float)iVar1;
    fVar2 = fVar3;
    if (0.99999994 <= fVar3) {
      fVar2 = 0.99999994;
    }
    fVar2 = (float)(~-(uint)(0.0 < fVar3) & (uint)fVar3 | (uint)fVar2 & -(uint)(0.0 < fVar3)) + 0.5
            + -0.5;
    if (0.99999994 <= fVar2) {
      fVar2 = 0.99999994;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    iVar1 = (int)dVar4 + iVar1 + (uint)(0.5 <= fVar2) + 1;
  }
  else {
    iVar1 = *(int *)(param_1[0x25] + 8);
  }
  return iVar1;
}



// FUNCTION 1433e74ee FUN_1433e74ee body=147 status=ok
// SIG undefined FUN_1433e74ee(void)

void FUN_1433e74ee(longlong *param_1,undefined8 param_2,undefined4 param_3,byte param_4)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x17f);
  cVar3 = (**(code **)(*param_1 + 1000))();
  if ((((bVar1 | param_4) & 1) != 0) && (cVar3 != '\0')) {
    FUN_1433d2ada(param_1 + 0x14,param_2,param_3);
    return;
  }
  plVar2 = (longlong *)param_1[0x27];
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001433e7571. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2b0))(plVar2,param_1 + 0x19,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1433e7582 FUN_1433e7582 body=198 status=ok
// SIG undefined FUN_1433e7582(void)

undefined8 FUN_1433e7582(longlong *param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x17f);
  cVar2 = (**(code **)(*param_1 + 1000))();
  if ((((bVar1 | param_4) & 1) == 0) || (cVar2 == '\0')) {
    plVar4 = (longlong *)param_1[0x27];
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001433e7615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(*plVar4 + 0x2c0))(plVar4,param_1 + 0x19,param_2,param_3);
      return uVar5;
    }
  }
  else if ((longlong)(int)param_1[0x15] != 0) {
    plVar4 = (longlong *)param_1[0x14];
    lVar3 = (longlong)(int)param_1[0x15] * 0x90;
    do {
      if (*plVar4 == param_2) {
        if (plVar4 == (longlong *)0x0) {
          return 0;
        }
        uVar5 = FUN_1448c9f94(plVar4 + 2,param_3,0);
        return uVar5;
      }
      plVar4 = plVar4 + 0x12;
      lVar3 = lVar3 + -0x90;
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 1433e764c FUN_1433e764c body=407 status=ok
// SIG undefined FUN_1433e764c(void)

void FUN_1433e764c(longlong *param_1,int *param_2,longlong param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 param_6,byte param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined1 auStack_c8 [32];
  int *local_a8;
  int *local_a0;
  int *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  ulonglong local_60;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_7);
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  piVar1 = param_2 + 2;
  if ((*param_2 <= (int)(param_7 | 0xfffffffe)) || (param_2[2] <= (int)(param_7 | 0xfffffffe))) {
    if ((*(longlong *)(param_3 + 0x10) == 0) || (*(longlong *)(param_3 + 0x18) == 0)) {
      local_a8 = param_2;
      local_a0 = piVar1;
      (**(code **)(*param_1 + 0x380))
                (param_1,*param_4,uVar2 & 0xffffffff,*(undefined8 *)(param_3 + 0x38));
    }
    else {
      local_98 = (int *)param_8;
      local_a8 = piVar1;
      local_a0 = param_4;
      (**(code **)(*param_1 + 0x398))(param_1,param_3 + 0x10,uVar2 & 0xffffffff,param_2);
    }
  }
  local_a0 = (int *)param_8;
  local_a8 = (int *)CONCAT44(local_a8._4_4_,*param_4);
  (**(code **)(*param_1 + 0x390))(param_1,&local_74,*param_2,param_2[2]);
  *(undefined4 *)(param_3 + 0x20) = local_64;
  *(ulonglong *)(param_3 + 0x10) = CONCAT44(uStack_70,local_74);
  *(ulonglong *)(param_3 + 0x18) = CONCAT44(uStack_68,uStack_6c);
  *param_5 = *param_4;
  local_88 = param_8;
  local_a8 = param_4;
  local_a0 = param_2;
  local_98 = piVar1;
  local_90 = param_3;
  (**(code **)(*param_1 + 0x360))
            (param_1,uVar2 & 0xffffffff,param_6,*(undefined8 *)(param_3 + 0x38));
  local_a0 = (int *)param_8;
  local_a8 = (int *)CONCAT44(local_a8._4_4_,*param_4);
  (**(code **)(*param_1 + 0x390))(param_1,&local_74,*param_2,param_2[2]);
  *(undefined4 *)(param_3 + 0x34) = local_64;
  *(undefined4 *)(param_3 + 0x24) = local_74;
  *(undefined4 *)(param_3 + 0x28) = uStack_70;
  *(undefined4 *)(param_3 + 0x2c) = uStack_6c;
  *(undefined4 *)(param_3 + 0x30) = uStack_68;
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433e77e4 FUN_1433e77e4 body=194 status=ok
// SIG undefined FUN_1433e77e4(void)

void FUN_1433e77e4(longlong *param_1,int *param_2,longlong param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 param_6,byte param_7,undefined8 param_8)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_7);
  if ((*param_2 <= (int)(param_7 | 0xfffffffe)) || (param_2[2] <= (int)(param_7 | 0xfffffffe))) {
    (**(code **)(*param_1 + 0x398))
              (param_1,param_3 + 0x10,uVar1 & 0xffffffff,param_2,param_2 + 2,param_4,param_8);
  }
  *param_5 = *param_4;
  (**(code **)(*param_1 + 0x370))
            (param_1,param_3,param_6,uVar1 & 0xffffffff,param_4,param_2,param_2 + 2,param_8);
  return;
}



// FUNCTION 1433e78a6 FUN_1433e78a6 body=1174 status=ok
// SIG undefined FUN_1433e78a6(void)

void FUN_1433e78a6(longlong *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
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
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong *)param_1[0x87] != param_2) {
    if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(param_2);
    }
    param_1[0x87] = (longlong)param_2;
  }
  if (param_1 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    lVar3 = param_1[4];
    if (lVar3 != 0) {
      if (DAT_14cad2858 == 0) {
        local_70 = &local_58;
        local_58 = FUN_144a7958c;
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
      lVar3 = *(longlong *)(lVar3 + 0x10);
      iVar1 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    plVar2 = (longlong *)param_1[0x7c];
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = (longlong)plVar2;
    }
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x2c0))(param_2);
  }
  lVar3 = param_1[4];
  if (lVar3 == 0) {
    lVar3 = 0;
    goto LAB_1433e79f8;
  }
  lVar4 = *(longlong *)(lVar3 + 0x658);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(lVar3 + 0x660);
    if ((DAT_14c950c29 & lVar4 != 0) != 0) goto LAB_1433e7d51;
    if (lVar4 != 0) goto LAB_1433e799e;
LAB_1433e79dc:
    param_1[0x87] = 0;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_1433e7d51:
      FUN_1456cec3c(lVar4);
    }
LAB_1433e799e:
    if (DAT_14cb06da8 == 0) {
      local_70 = &local_58;
      local_58 = FUN_1449e2820;
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
    if (((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) ||
       ((param_1[0x87] != 0 && (*(longlong *)(param_1[0x87] + 0x40) == 0)))) goto LAB_1433e79dc;
  }
  *(undefined1 *)(lVar3 + 0xc5e) = 2;
  lVar3 = param_1[4];
LAB_1433e79f8:
  local_a8 = param_4;
  (**(code **)(*plVar2 + 200))(plVar2,param_2,lVar3,param_3);
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_140f18b90();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      (**(code **)(*param_2 + 1000))(param_2);
    }
    if (DAT_14cacbb10 == 0) {
      local_70 = &local_58;
      local_58 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1463a1b5a;
      local_78 = &LAB_147903fa7;
      local_80 = &LAB_1459b1fdd;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000000;
      local_a0 = 8;
      local_a8 = 0x1e8;
      FUN_14081cfa3(L"/Script/Engine",L"AnimMontage",&DAT_14cacbb10,FUN_1463a4b6e);
    }
    if ((*(int *)(DAT_14cacbb10 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cacbb10 + 0x38) * 8) ==
        DAT_14cacbb10 + 0x30)) {
      FUN_14005ea3e(plVar2);
      if (0 < (longlong)(int)param_2[0x2e]) {
        lVar3 = param_2[0x2d];
        lVar4 = (longlong)(int)param_2[0x2e] * 0x18;
        do {
          FUN_14066f7ea(plVar2,lVar3);
          lVar3 = lVar3 + 0x18;
          lVar4 = lVar4 + -0x18;
        } while (lVar4 != 0);
        plVar2[0x126] = *(longlong *)param_2[0x2d];
      }
      (**(code **)(*param_1 + 0x398))(param_1,param_2,0);
      FUN_14099141a(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8,0x3e800000);
  }
  FUN_140108570(param_1);
  return;
}



// FUNCTION 1433e7d5e FUN_1433e7d5e body=126 status=ok
// SIG undefined FUN_1433e7d5e(void)

void FUN_1433e7d5e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  if (((*(byte *)(param_1 + 0x7e1) & 0x10) != 0) && (*(longlong *)(param_1 + 0x150) != 0)) {
    param_1 = *(longlong *)(param_1 + 0x150);
  }
  iVar1 = *(int *)(param_2 + 0x90);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x88);
    lVar4 = 0;
    iVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if ((*plVar3 != 0) && (1e-05 < *(float *)(plVar3 + 0x2d))) {
        *(undefined1 *)(plVar3 + 7) =
             *(undefined1 *)(*(longlong *)(param_1 + 0x6c0) + 0x54 + (longlong)iVar5 * 0x58);
        iVar5 = iVar5 + 1;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1433e7df7 FUN_1433e7df7 body=55 status=ok
// SIG undefined FUN_1433e7df7(void)

void FUN_1433e7df7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacc8a0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacc8a0 = FUN_14171c317(FUN_1463a7b60,uVar1,L"ETransitionRequestQueueMode");
  }
  return;
}



// FUNCTION 1433e7e2e FUN_1433e7e2e body=55 status=ok
// SIG undefined FUN_1433e7e2e(void)

void FUN_1433e7e2e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacc8b8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacc8b8 = FUN_14171c317(FUN_1463a7b8f,uVar1,L"ETransitionRequestOverwriteMode");
  }
  return;
}



// FUNCTION 1433e7e65 FUN_1433e7e65 body=55 status=ok
// SIG undefined FUN_1433e7e65(void)

void FUN_1433e7e65(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacc8d0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacc8d0 = FUN_14171c317(FUN_1463a7bbe,uVar1,L"ETransitionBlendMode");
  }
  return;
}



// FUNCTION 1433e7e9c FUN_1433e7e9c body=55 status=ok
// SIG undefined FUN_1433e7e9c(void)

void FUN_1433e7e9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacc8e8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacc8e8 = FUN_14171c317(FUN_1463a7bed,uVar1,L"ETransitionLogicType");
  }
  return;
}



// FUNCTION 1433e7ed3 FUN_1433e7ed3 body=55 status=ok
// SIG undefined FUN_1433e7ed3(void)

void FUN_1433e7ed3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacc900 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacc900 = FUN_14171c317(FUN_1463a7c1c,uVar1,L"ERootMotionBlendType");
  }
  return;
}



// FUNCTION 1433e7f0a FUN_1433e7f0a body=69 status=ok
// SIG undefined FUN_1433e7f0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433e7f0a(void)

{
  _DAT_14cacc9e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433e7f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacc9f0,1);
  return;
}



// FUNCTION 1433e7f50 FUN_1433e7f50 body=928 status=ok
// SIG undefined FUN_1433e7f50(void)

void FUN_1433e7f50(undefined4 *param_1,longlong *param_2,longlong param_3,int param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *_Dst;
  undefined8 *puVar5;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined **local_100 [5];
  byte local_d8;
  byte local_d5;
  longlong *local_a8;
  longlong local_88;
  undefined8 local_70;
  void **local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar4 = 0;
  if (param_2[0xd] != 0) {
    uVar4 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_100[0] = (undefined **)CONCAT44(local_100[0]._4_4_,uVar4);
    (**(code **)(*param_2 + 0x170))(param_2,local_100,4);
    uVar4 = (uint)local_100[0];
    if (1 < (uint)local_100[0]) {
      FUN_14572541c(param_2);
      uVar4 = (uint)local_100[0];
    }
  }
  else {
    uVar4 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    param_1[1] = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if (uVar4 != 0) {
    if (param_4 == 0) {
      if ((*(byte *)(param_2 + 5) & 1) == 0) {
        puVar5 = *(undefined8 **)(param_1 + 4);
      }
      else {
        puVar5 = (undefined8 *)FUN_14001cc68(0x80,0x10);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5[0xc] = 0;
        puVar5[0xd] = 0;
        *(undefined8 *)((longlong)puVar5 + 0x6c) = 0;
        *(undefined8 *)((longlong)puVar5 + 0x74) = 0;
        *(undefined8 **)(param_1 + 4) = puVar5;
      }
      local_118 = *(undefined8 *)(param_3 + 0xe8);
      local_128 = *(undefined8 *)(param_3 + 0x40);
      local_120 = *(ulonglong *)(param_3 + 0xe0);
      local_110 = 0;
      FUN_144869e00(puVar5,param_2,0,param_3);
    }
    else {
      *(byte *)((longlong)param_1 + 0x2d) = *(byte *)((longlong)param_1 + 0x2d) | 4;
      puVar3 = param_1 + 6;
      if ((*(byte *)(param_2 + 5) & 4) != 0) {
        local_58 = (void *)0x0;
        uStack_50 = 0;
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 4) + 0x60) + 0x20))();
        FUN_1400ec3e6(&local_58);
        memset(local_100,0,0x90);
        FUN_144869430(local_100);
        local_70 = 0;
        local_100[0] = &PTR_FUN_149e1e590;
        local_60 = 0;
        local_d8 = local_d8 | 4;
        local_68 = &local_58;
        FUN_1449c2eca(local_100,1);
        local_100[0] = &PTR_FUN_149e1e330;
        local_d5 = local_d5 & 0xdf | *(byte *)((longlong)param_2 + 0x2b) & 0x20;
        local_118 = *(undefined8 *)(param_3 + 0xe8);
        local_128 = *(undefined8 *)(param_3 + 0x40);
        local_120 = *(ulonglong *)(param_3 + 0xe0);
        local_110 = 0;
        FUN_144869e00(*(undefined8 *)(param_1 + 4),local_100,0,param_3);
        FUN_14031515e(puVar3);
        *(undefined1 *)((longlong)param_1 + 0x2b) = 2;
        *(byte *)((longlong)param_1 + 0x2e) = *(byte *)((longlong)param_1 + 0x2e) & 0xfb;
        _Dst = (void *)FUN_1427d8a06(puVar3,(longlong)(int)uStack_50,1);
        memcpy(_Dst,local_58,(longlong)(int)uStack_50);
        *(undefined1 *)((longlong)param_1 + 0x2b) = 0;
        if ((*(byte *)(param_1 + 0xb) & 8) != 0) {
          FUN_1400ea36e(puVar3,puVar3);
        }
        local_100[0] = &PTR__purecall_149e35f70;
        if (local_a8 != (longlong *)0x0) {
          if (*local_a8 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(local_a8);
        }
        if (local_88 != 0) {
          if (*(longlong *)(local_88 + 0x40) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(local_88);
        }
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      local_120 = local_120 & 0xffffffffffffff00;
      local_128 = CONCAT44(local_128._4_4_,1);
      FUN_140430222(puVar3,param_2,param_3,0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433e82f2 FUN_1433e82f2 body=1328 status=ok
// SIG undefined FUN_1433e82f2(void)

float * FUN_1433e82f2(longlong param_1,longlong *param_2,double *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Src;
  ulonglong uVar3;
  double dVar4;
  double *pdVar5;
  longlong *plVar6;
  float *pfVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  float *pfVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 *local_180;
  float *local_178;
  double *local_170;
  float local_168;
  undefined1 local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_120;
  float local_118;
  longlong local_110;
  undefined4 local_108;
  undefined1 local_104;
  double local_100;
  undefined1 local_f8;
  undefined8 local_f4;
  undefined1 local_ec;
  undefined2 local_eb;
  undefined1 local_e9;
  undefined1 local_e8;
  longlong local_e0 [2];
  void *local_d0;
  ulonglong uStack_c8;
  char local_bf;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  byte local_54;
  undefined1 local_53;
  undefined1 local_52;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar1 = (longlong *)*param_2;
  lVar2 = param_2[1];
  FUN_1448859f0(plVar1,plVar1[2]);
  lVar8 = plVar1[2];
  lVar18 = *(longlong *)(param_1 + 0x40);
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1a8);
  }
  if (*(char *)(lVar8 + 0xfa) != '\x01') {
    FUN_1448859f0(plVar1,lVar8);
    goto LAB_1433e83d1;
  }
  lVar10 = *(longlong *)(param_1 + 0xc0);
  if (lVar10 == 0) {
LAB_1433e8357:
    plVar6 = (longlong *)(lVar18 + 0x80);
  }
  else {
    if (*(int *)(lVar18 + 0x1c0) != *(int *)(lVar18 + 0x1ec)) {
      uVar15 = (uint)((ulonglong)lVar10 >> 0x10);
      uVar17 = (uint)lVar10 & 0xffff;
      lVar13 = lVar18 + 0x1f0;
      if (*(longlong *)(lVar18 + 0x1f8) != 0) {
        lVar13 = *(longlong *)(lVar18 + 0x1f8);
      }
      iVar12 = *(int *)(lVar13 + (ulonglong)
                                 (*(int *)(lVar18 + 0x200) - 1U &
                                 (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar17)
                                 + (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar17 >> 4)) * 4);
      if (iVar12 != -1) {
        do {
          plVar14 = (longlong *)(*(longlong *)(lVar18 + 0x1b8) + (longlong)iVar12 * 0x28);
          if (*plVar14 == lVar10) goto LAB_1433e8821;
          iVar12 = (int)plVar14[4];
        } while (iVar12 != -1);
      }
    }
    plVar14 = (longlong *)0x0;
LAB_1433e8821:
    plVar6 = plVar14 + 1;
    if (plVar14 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    if (plVar6 == (longlong *)0x0) goto LAB_1433e8357;
    plVar6 = plVar6 + 1;
  }
  uVar15 = *(uint *)(plVar1 + 1);
  if ((ulonglong)uVar15 != 0) {
    lVar18 = 0;
    uVar19 = 0;
    do {
      puVar9 = (undefined8 *)
               ((longlong)*(int *)(*(longlong *)(lVar8 + 0x70) + uVar19 * 4) * 0x60 + *plVar6);
      puVar16 = (undefined8 *)(*plVar1 + lVar18);
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar16 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar16 = puVar16 + 1;
      }
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 0x60;
    } while (uVar15 != uVar19);
  }
LAB_1433e83d1:
  local_54 = *(byte *)(param_1 + 0xf8);
  pfVar7 = (float *)(ulonglong)local_54;
  local_53 = *(undefined1 *)(param_1 + 0xfa);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0x3ff00000;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  local_58 = (uint)*(byte *)(param_1 + 0xf9);
  local_52 = 0;
  uVar15 = *(uint *)(param_1 + 0xd8);
  if ((int)uVar15 < 1) {
    uVar15 = uVar15 - 1;
  }
  else {
    fVar21 = (float)*param_3;
    fVar22 = *(float *)(*(longlong *)(param_1 + 0xd0) + 4);
    if (fVar21 < fVar22) {
      bVar20 = true;
      pfVar7 = (float *)0x0;
    }
    else {
      pfVar11 = (float *)(*(longlong *)(param_1 + 0xd0) + 0x44);
      pfVar7 = (float *)0x0;
      do {
        if ((float *)((longlong)(ulonglong)uVar15 + -1) == pfVar7) {
          bVar20 = false;
          pfVar7 = (float *)(ulonglong)uVar15;
          goto LAB_1433e84b2;
        }
        fVar21 = fVar21 - fVar22;
        fVar22 = *pfVar11;
        pfVar11 = pfVar11 + 0x10;
        pfVar7 = (float *)((longlong)pfVar7 + 1);
      } while (fVar22 <= fVar21);
      bVar20 = pfVar7 < (float *)(ulonglong)uVar15;
    }
LAB_1433e84b2:
    uVar15 = uVar15 - 1;
    if (bVar20) {
      uVar15 = (uint)pfVar7;
    }
  }
  local_170 = param_3;
  if (uVar15 != 0xffffffff) {
    local_178 = (float *)((longlong)(int)uVar15 * 0x40 + *(longlong *)(param_1 + 0xd0));
    lVar8 = FUN_140083894();
    plVar14 = *(longlong **)(lVar8 + 0x40);
    puVar9 = (undefined8 *)(**(code **)(*plVar14 + 0xb0))(plVar14,param_1,0,uVar15 == 0);
    pdVar5 = local_170;
    pfVar7 = (float *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)(*(longlong *)puVar9[0xe] + 0x2b0))
                ((longlong *)puVar9[0xe],puVar9,lVar2,(float)*local_170);
      if ((uVar15 == 0) ||
         (puVar9 = (undefined8 *)(**(code **)(*plVar14 + 0xb0))(plVar14,param_1,uVar15,1),
         puVar9 != (undefined8 *)0x0)) {
        dVar4 = *pdVar5 - (double)*local_178;
        pfVar7 = local_178;
      }
      else {
        iVar12 = *(int *)(param_1 + 0xd8);
        uVar19 = (ulonglong)uVar15;
        do {
          lVar2 = (longlong)((int)uVar19 + iVar12 + -1);
          pfVar7 = (float *)(lVar2 / (longlong)iVar12 & 0xffffffff);
          uVar3 = lVar2 % (longlong)iVar12;
          if ((uint)uVar3 == uVar15) goto LAB_1433e8716;
          uVar19 = uVar3 & 0xffffffff;
          puVar9 = (undefined8 *)
                   (**(code **)(*plVar14 + 0xb0))(plVar14,param_1,uVar3 & 0xffffffff,0);
        } while (puVar9 == (undefined8 *)0x0);
        pfVar7 = *(float **)(param_1 + 0xd0);
        dVar4 = (double)pfVar7[(longlong)(int)(uint)uVar3 * 0x10 + 1];
      }
      pdVar5 = local_170;
      if (*(int *)(puVar9 + 1) != 0) {
        local_e9 = 0;
        local_eb = 0;
        local_f8 = *(undefined1 *)(local_170 + 1);
        local_ec = 0;
        local_f4 = 0;
        local_e8 = 0;
        local_bf = '\0';
        local_e0[0] = 0;
        local_e0[1] = 0;
        local_d0 = (void *)0x0;
        uStack_c8 = 0;
        local_100 = dVar4;
        if (&local_100 != local_170) {
          uVar15 = *(uint *)(local_170 + 7);
          _Src = (void *)local_170[6];
          uStack_c8 = (ulonglong)uVar15;
          if ((longlong)(int)uVar15 != 0) {
            FUN_1447cd5fa(&local_d0,uVar15,0);
            memcpy(local_d0,_Src,(longlong)(int)uVar15);
          }
        }
        FUN_140e012e4(local_e0,pdVar5 + 4);
        local_118 = local_178[2];
        local_110 = *(longlong *)(param_1 + 0x40);
        local_158 = puVar9[0xc];
        local_168 = (float)(((double)((longlong)*(int *)(param_1 + 0xcc) * (longlong)(int)local_118)
                            + (double)((ulonglong)(double)*(int *)(param_1 + 0xcc) &
                                      0x8000000000000000)) / (double)*(int *)(param_1 + 200));
        local_164 = *(undefined1 *)(param_1 + 0xbc);
        local_188 = *(undefined8 *)(param_1 + 0xc0);
        local_150 = 0;
        local_140 = *(undefined4 *)(local_110 + 0x88);
        local_148 = *(undefined8 *)(local_110 + 0x80);
        local_130 = *(undefined4 *)(puVar9 + 1);
        local_138 = *puVar9;
        local_128 = *(undefined8 *)(param_1 + 200);
        local_120 = 0;
        local_108 = 0;
        local_104 = 0;
        local_180 = &local_b8;
        local_160 = local_188;
        pfVar7 = (float *)FUN_1433cb7d5(plVar1,puVar9,&local_100);
        if (local_bf == '\x01') {
          local_bf = '\0';
        }
        if (local_d0 != (void *)0x0) {
          pfVar7 = (float *)FUN_1400020a8();
        }
        if (local_e0[0] != 0) {
          pfVar7 = (float *)FUN_1400020a8();
        }
      }
    }
  }
LAB_1433e8716:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pfVar7;
}



// FUNCTION 1433e8841 FUN_1433e8841 body=55 status=ok
// SIG undefined FUN_1433e8841(void)

void FUN_1433e8841(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacca30 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacca30 = FUN_14171c317(FUN_1463a8208,uVar1,L"EAnimPropertyAccessCallSite");
  }
  return;
}



// FUNCTION 1433e8878 FUN_1433e8878 body=69 status=ok
// SIG undefined FUN_1433e8878(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433e8878(void)

{
  _DAT_14caccaa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433e88ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caccaa8,1);
  return;
}



// FUNCTION 1433e88be FUN_1433e88be body=4430 status=ok
// SIG undefined FUN_1433e88be(void)

void FUN_1433e88be(longlong param_1,longlong param_2,undefined4 param_3)

{
  void **ppvVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  void *_Src;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  longlong lVar21;
  ulonglong *puVar22;
  uint *puVar23;
  int iVar24;
  int iVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong *plVar32;
  int iVar33;
  ulonglong uVar34;
  bool bVar35;
  bool bVar36;
  float fVar37;
  ulonglong uVar38;
  uint uVar39;
  undefined1 auStack_2c8 [40];
  int local_2a0;
  uint local_29c;
  ulonglong local_298;
  longlong *local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  int local_264;
  longlong *local_260;
  longlong *local_258;
  longlong local_250;
  ulonglong local_248;
  uint *local_240;
  ulonglong local_238;
  ulonglong local_230;
  char local_228 [4];
  undefined4 local_224;
  ulonglong local_218 [2];
  undefined4 local_208;
  uint uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  ulonglong local_1f8;
  ulonglong uStack_1f0;
  ulonglong local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  int local_1b8;
  void *local_1b0;
  ulonglong uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined8 local_16c;
  uint local_164;
  char local_160;
  undefined2 local_15f;
  undefined1 local_15d;
  ulonglong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  ulonglong local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  iVar25 = *(int *)(param_2 + 0x3f8);
  iVar33 = *(int *)(param_1 + 200);
  lVar31 = (longlong)iVar33;
  lVar21 = param_1 + lVar31 * 0x50;
  plVar27 = (longlong *)(lVar21 + 0x20);
  lVar29 = param_1 + lVar31 * 0x50;
  puVar23 = (uint *)(lVar29 + 0x30);
  uVar39 = *(uint *)(lVar29 + 0x48);
  uVar30 = (ulonglong)uVar39;
  local_2a0 = iVar25;
  local_288 = param_2;
  local_270 = param_1;
  if (uVar39 == 0) {
    uVar38 = 1;
    uVar34 = 0;
    iVar24 = 0;
    uVar17 = 0;
  }
  else {
    puVar20 = *(uint **)(lVar21 + 0x40);
    if (puVar20 == (uint *)0x0) {
      puVar20 = puVar23;
    }
    uVar17 = *puVar20;
    if (uVar17 == 0) {
      iVar24 = uVar39 + 0x1e;
      if (-1 < (int)(uVar39 - 1)) {
        iVar24 = uVar39 - 1;
      }
      uVar34 = 0;
      uVar38 = (ulonglong)(uint)(iVar24 >> 5);
      if (iVar24 >> 5 < 1) {
        uVar38 = uVar34;
      }
      iVar24 = 0;
      do {
        if (uVar38 == uVar34) goto LAB_1433e9648;
        iVar24 = iVar24 + 0x20;
        uVar17 = puVar20[uVar34 + 1];
        uVar34 = uVar34 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar34 = 0;
      iVar24 = 0;
    }
    uVar38 = (ulonglong)(-uVar17 & uVar17);
    uVar2 = uVar38 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    uVar17 = (iVar24 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
    if ((int)uVar39 <= (int)uVar17) {
      uVar17 = uVar39;
    }
  }
  if (uVar17 != uVar39) {
    local_250 = param_1 + (1 - lVar31) * 0x50;
    plVar32 = (longlong *)(local_250 + 0x20);
    local_250 = local_250 + 0x58;
    local_280 = param_2 + 0x338;
    local_278 = param_2 + 0x630;
    local_29c = 0xffffffff;
    local_260 = plVar32;
    local_258 = plVar27;
    local_248 = uVar30;
    local_240 = puVar23;
LAB_1433e8aa8:
    lVar31 = local_280;
    lVar21 = *plVar27;
    lVar29 = (longlong)(int)uVar17 * 0x88;
    if (0 < *(int *)(lVar21 + 0x10 + lVar29)) {
      plVar27 = (longlong *)(lVar21 + lVar29);
      if ((int)plVar32[1] == *(int *)((longlong)plVar32 + 0x34)) {
        lVar28 = 0;
      }
      else {
        lVar4 = *plVar27;
        uVar39 = (uint)((ulonglong)lVar4 >> 0x10);
        uVar17 = (uint)lVar4 & 0xffff;
        lVar28 = plVar32[8];
        if (plVar32[8] == 0) {
          lVar28 = local_250;
        }
        iVar33 = *(int *)(lVar28 + (ulonglong)
                                   ((int)plVar32[9] - 1U &
                                   (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar17)
                                   + (uVar39 << 0x13 | uVar39 & 0xffff) + (uVar17 >> 4)) * 4);
        if (iVar33 != -1) {
          do {
            lVar28 = *plVar32 + (longlong)iVar33 * 0x88;
            if (*(longlong *)(*plVar32 + (longlong)iVar33 * 0x88) == lVar4) goto LAB_1433e8b83;
            iVar33 = *(int *)(lVar28 + 0x80);
          } while (iVar33 != -1);
        }
        lVar28 = 0;
      }
LAB_1433e8b83:
      local_290 = (longlong *)(lVar29 + lVar21 + 8);
      plVar32 = (longlong *)(lVar28 + 8);
      if (lVar28 == 0) {
        plVar32 = (longlong *)0x0;
      }
      local_264 = iVar24;
      local_230 = uVar34;
      FUN_140633fa0(local_290,plVar32);
      uStack_178 = plVar27 + 4;
      local_228[0] = '\0';
      local_224 = 0;
      local_218[0] = 0;
      local_218[1] = 0;
      local_208 = 0;
      uStack_204 = 0;
      uStack_200 = 0;
      uStack_1fc = 0x3ff00000;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1d8 = 0x3ff0000000000000;
      uStack_1d0 = 0x3ff0000000000000;
      local_1c8 = 0x3ff0000000000000;
      uStack_1c0 = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      local_190 = 0;
      uStack_18c = 0;
      uStack_188 = 0;
      uStack_184 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      local_1b0 = (void *)0x0;
      uStack_1a8 = 0;
      local_16c = 0;
      local_164 = 0;
      local_160 = 0 < (int)plVar27[5];
      local_15f = CONCAT11((int)plVar27[2] == 1,1);
      local_15d = 0;
      if (plVar32 != (longlong *)0x0) {
        local_164 = *(uint *)((longlong)plVar32 + 0x74);
        local_16c = (ulonglong)local_164 << 0x20;
        if (((*(longlong *)((longlong)plVar32 + 0x54) != 0) &&
            (*(longlong *)((longlong)plVar32 + 0x5c) != 0)) && ((longlong)(int)plVar27[5] != 0)) {
          lVar21 = (longlong)(int)plVar27[5] * 8;
          lVar29 = 0;
          do {
            if (*(longlong *)(plVar27[4] + lVar29) == *(longlong *)((longlong)plVar32 + 0x54)) {
              lVar29 = 0;
              goto LAB_1433e8cb0;
            }
            lVar29 = lVar29 + 8;
          } while (lVar21 != lVar29);
        }
      }
      goto LAB_1433e8cd9;
    }
    goto LAB_1433e9540;
  }
LAB_1433e9648:
  iVar25 = local_2a0;
  if (0 < *(int *)(param_1 + 8 + lVar31 * 0x10)) {
    plVar27 = (longlong *)(lVar31 * 0x10 + param_1);
    local_290 = (longlong *)(local_288 + 0x338);
    local_288 = local_288 + 0x630;
    lVar29 = 0;
    lVar21 = 0;
    do {
      lVar31 = *plVar27;
      uStack_178 = (longlong *)(**(code **)(**(longlong **)(lVar31 + lVar29) + 0x2b8))();
      if (uStack_178 == (longlong *)0x0) {
        uStack_178 = &DAT_14cacb0c0;
      }
      local_228[0] = '\0';
      local_224 = 0;
      local_218[0] = 0;
      local_218[1] = 0;
      local_208 = 0;
      uStack_204 = 0;
      uStack_200 = 0;
      uStack_1fc = 0x3ff00000;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1d8 = 0x3ff0000000000000;
      uStack_1d0 = 0x3ff0000000000000;
      local_1c8 = 0x3ff0000000000000;
      uStack_1c0 = 0;
      local_1b8 = iVar25;
      uStack_180 = 0;
      uStack_17c = 0;
      local_190 = 0;
      uStack_18c = 0;
      uStack_188 = 0;
      uStack_184 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      local_1b0 = (void *)0x0;
      uStack_1a8 = 0;
      local_16c = 0;
      local_164 = 0;
      local_160 = 0 < (int)uStack_178[1];
      local_15f = 0x101;
      local_15d = 0;
      local_170 = param_3;
      (**(code **)(**(longlong **)(lVar31 + lVar29) + 0x2a0))
                (*(longlong **)(lVar31 + lVar29),lVar31 + lVar29,local_290,local_228);
      uVar16 = local_1c8;
      uVar39 = uStack_204;
      uVar11 = local_208;
      uVar38 = local_218[1];
      uVar30 = local_218[0];
      if ((iVar25 == 2) && (local_228[0] == '\x01')) {
        lVar4 = *(longlong *)(lVar31 + 0x28 + lVar29);
        if (lVar4 == 0) {
          fVar37 = *(float *)(lVar31 + 0x14 + lVar29) * *(float *)(lVar31 + 0x18 + lVar29);
          puVar22 = local_218;
        }
        else {
          auVar10._4_4_ = uStack_204;
          auVar10._0_4_ = local_208;
          auVar10._8_4_ = uStack_200;
          auVar10._12_4_ = uStack_1fc;
          uVar12 = (undefined4)local_1d8;
          uVar13 = local_1d8._4_4_;
          uVar14 = (undefined4)uStack_1d0;
          uVar15 = uStack_1d0._4_4_;
          local_138 = (undefined4)local_1f8;
          uStack_134 = (undefined4)(local_1f8 >> 0x20);
          uStack_130 = (undefined4)uStack_1f0;
          uStack_12c = (undefined4)(uStack_1f0 >> 0x20);
          cVar3 = *(char *)(lVar4 + 0xc0);
          local_158 = local_1f8;
          local_f8 = uStack_1f0;
          local_298 = local_1e8;
          if (cVar3 == '\x02') {
            puVar22 = &local_f8;
LAB_1433e9825:
            *puVar22 = *puVar22 ^ 0x8000000000000000;
            local_138 = (undefined4)local_158;
            uStack_134 = (undefined4)(local_158 >> 0x20);
            uStack_130 = (undefined4)local_f8;
            uStack_12c = (undefined4)(local_f8 >> 0x20);
          }
          else {
            puVar22 = &local_158;
            if (cVar3 == '\x01') goto LAB_1433e9825;
            if (cVar3 == '\x03') {
              puVar22 = &local_298;
              goto LAB_1433e9825;
            }
          }
          uVar17 = (uint)(uVar38 >> 0x20);
          if (cVar3 == '\x02') {
            uVar30 = uVar30 ^ 0x8000000000000000;
LAB_1433e9866:
            uVar39 = uVar39 ^ 0x80000000;
          }
          else if (cVar3 == '\x03') {
            uVar30 = uVar30 ^ 0x8000000000000000;
            uVar17 = uVar17 ^ 0x80000000;
          }
          else if (cVar3 == '\x01') {
            uVar17 = uVar17 ^ 0x80000000;
            goto LAB_1433e9866;
          }
          uStack_150 = CONCAT44(uVar17,(int)uVar38);
          local_148 = CONCAT44(uVar39,uVar11);
          uStack_120 = 0;
          local_118 = uVar12;
          uStack_114 = uVar13;
          uStack_110 = uVar14;
          uStack_10c = uVar15;
          local_108 = uVar16;
          uStack_100 = 0;
          fVar37 = *(float *)(lVar31 + 0x14 + lVar29) * *(float *)(lVar31 + 0x18 + lVar29);
          puVar22 = &local_158;
          local_158 = uVar30;
          uStack_140 = auVar10._8_8_;
          local_128 = local_298;
        }
        FUN_1433d5eb6(local_288,puVar22,fVar37);
      }
      if (local_1b0 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar21 = lVar21 + 1;
      lVar29 = lVar29 + 0x88;
    } while (lVar21 < (int)plVar27[1]);
    iVar33 = *(int *)(local_270 + 200);
    param_1 = local_270;
  }
  *(int *)(param_1 + 200) = 1 - iVar33;
  if ((local_f0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (lVar29 = lVar29 + 8, lVar21 != lVar29) {
LAB_1433e8cb0:
    if (*(longlong *)(plVar27[4] + lVar29) == *(longlong *)((longlong)plVar32 + 0x5c)) {
      local_190 = *(undefined4 *)((longlong)plVar32 + 100);
      local_1a0 = *(longlong *)((longlong)plVar32 + 0x54);
      uStack_198 = *(longlong *)((longlong)plVar32 + 0x5c);
      break;
    }
  }
LAB_1433e8cd9:
  local_238 = uVar38;
  local_1b8 = iVar25;
  if ((int)plVar27[2] < 1) {
    uVar30 = 0;
    local_170 = param_3;
  }
  else {
    lVar21 = 0;
    uVar30 = 0;
    local_170 = param_3;
    do {
      lVar29 = *local_290;
      if (*(char *)(lVar29 + 0x1f + lVar21) == '\x01') {
        if (plVar32 != (longlong *)0x0) {
          iVar33 = (int)plVar32[2];
          if ((-1 < (longlong)iVar33) && (iVar33 < (int)plVar32[1])) {
            if ((local_160 == '\x01') && ((int)plVar32[4] != 0)) {
              plVar26 = (longlong *)((longlong)iVar33 * 0x88 + *plVar32);
              lVar4 = plVar26[0xd];
              lVar28 = *(longlong *)(lVar29 + 0x68 + lVar21);
              lVar5 = *(longlong *)(lVar29 + lVar21);
              lVar6 = *(longlong *)(lVar29 + 0x60 + lVar21);
              lVar7 = plVar26[0xc];
              if ((DAT_14c950c29 == '\x01') && (lVar5 != 0)) {
                FUN_1456cec3c(lVar5);
              }
              lVar31 = local_280;
              iVar25 = local_2a0;
              if (!(bool)(~(lVar6 != lVar7 || lVar4 != lVar28) & *plVar26 == lVar5)) {
                local_1a0 = 0;
                uStack_198 = 0;
                local_190 = 0;
              }
            }
            else {
              local_15d = 0;
            }
          }
        }
      }
      else if (((plVar32 != (longlong *)0x0) && (*(char *)(lVar29 + 0x1e + lVar21) != '\0')) &&
              (((int)plVar32[1] != 0 && ((local_160 != '\x01' || ((int)plVar32[4] < 1)))))) {
        local_15d = *(float *)(lVar29 + 0x74 + lVar21) <=
                    *(float *)(*plVar32 + 0x74 + (longlong)(int)plVar32[2] * 0x88);
      }
      bVar36 = (longlong)uStack_1a8 < 0;
      uStack_1a8 = uStack_1a8 & 0xffffffff00000000;
      if (bVar36) {
        FUN_1478fc0c4(&local_1b0,0);
      }
      local_228[0] = '\0';
      local_224 = 0;
      plVar26 = *(longlong **)(lVar21 + lVar29);
      (**(code **)(*plVar26 + 0x2a0))(plVar26,(undefined8 *)(lVar21 + lVar29),lVar31);
      uVar16 = local_1c8;
      uVar39 = uStack_204;
      uVar11 = local_208;
      uVar34 = local_218[1];
      uVar38 = local_218[0];
      if ((iVar25 == 2) && (local_228[0] == '\x01')) {
        lVar4 = *(longlong *)(lVar29 + 0x28 + lVar21);
        if (lVar4 == 0) {
          fVar37 = *(float *)(lVar29 + 0x14 + lVar21) * *(float *)(lVar29 + 0x18 + lVar21);
          puVar22 = local_218;
        }
        else {
          auVar8._4_4_ = uStack_204;
          auVar8._0_4_ = local_208;
          auVar8._8_4_ = uStack_200;
          auVar8._12_4_ = uStack_1fc;
          uVar12 = (undefined4)local_1d8;
          uVar13 = local_1d8._4_4_;
          uVar14 = (undefined4)uStack_1d0;
          uVar15 = uStack_1d0._4_4_;
          local_138 = (undefined4)local_1f8;
          uStack_134 = (undefined4)(local_1f8 >> 0x20);
          uStack_130 = (undefined4)uStack_1f0;
          uStack_12c = (undefined4)(uStack_1f0 >> 0x20);
          cVar3 = *(char *)(lVar4 + 0xc0);
          local_158 = local_1f8;
          local_f8 = uStack_1f0;
          local_298 = local_1e8;
          if (cVar3 == '\x02') {
            puVar22 = &local_f8;
LAB_1433e8edc:
            *puVar22 = *puVar22 ^ 0x8000000000000000;
            local_138 = (undefined4)local_158;
            uStack_134 = (undefined4)(local_158 >> 0x20);
            uStack_130 = (undefined4)local_f8;
            uStack_12c = (undefined4)(local_f8 >> 0x20);
          }
          else {
            puVar22 = &local_158;
            if (cVar3 == '\x01') goto LAB_1433e8edc;
            if (cVar3 == '\x03') {
              puVar22 = &local_298;
              goto LAB_1433e8edc;
            }
          }
          uVar17 = (uint)(uVar34 >> 0x20);
          if (cVar3 == '\x02') {
            uVar38 = uVar38 ^ 0x8000000000000000;
LAB_1433e8f1d:
            uVar39 = uVar39 ^ 0x80000000;
          }
          else if (cVar3 == '\x03') {
            uVar38 = uVar38 ^ 0x8000000000000000;
            uVar17 = uVar17 ^ 0x80000000;
          }
          else if (cVar3 == '\x01') {
            uVar17 = uVar17 ^ 0x80000000;
            goto LAB_1433e8f1d;
          }
          uStack_150 = CONCAT44(uVar17,(int)uVar34);
          local_148 = CONCAT44(uVar39,uVar11);
          uStack_120 = 0;
          local_118 = uVar12;
          uStack_114 = uVar13;
          uStack_110 = uVar14;
          uStack_10c = uVar15;
          local_108 = uVar16;
          uStack_100 = 0;
          fVar37 = *(float *)(lVar29 + 0x14 + lVar21) * *(float *)(lVar29 + 0x18 + lVar21);
          puVar22 = &local_158;
          local_158 = uVar38;
          uStack_140 = auVar8._8_8_;
          local_128 = local_298;
        }
        FUN_1433d5eb6(local_278,puVar22,fVar37);
      }
      _Src = local_1b0;
      if (local_160 == '\0') {
        *(undefined4 *)(plVar27 + 0xf) = local_16c._4_4_;
        *(uint *)((longlong)plVar27 + 0x7c) = local_164;
LAB_1433e912c:
        *(int *)(plVar27 + 3) = (int)uVar30;
        break;
      }
      if ((CONCAT44(uStack_188,uStack_18c) != 0) && (CONCAT44(uStack_180,uStack_184) != 0)) {
        *(undefined4 *)(plVar27 + 0xf) = local_16c._4_4_;
        *(uint *)((longlong)plVar27 + 0x7c) = local_164;
        ppvVar1 = (void **)(plVar27 + 7);
        if (ppvVar1 != &local_1b0) {
          iVar25 = (int)uStack_1a8;
          lVar21 = (longlong)(int)uStack_1a8;
          *(int *)(plVar27 + 8) = (int)uStack_1a8;
          if ((int)uStack_1a8 == 0 && *(int *)((longlong)plVar27 + 0x44) == 0) {
            *(undefined4 *)((longlong)plVar27 + 0x44) = 0;
          }
          else {
            FUN_1463a1620(ppvVar1,uStack_1a8 & 0xffffffff);
            if (iVar25 != 0) {
              memcpy(*ppvVar1,_Src,lVar21 * 0xc);
            }
          }
        }
        *(undefined4 *)(plVar27 + 0xd) = uStack_180;
        *(undefined4 *)((longlong)plVar27 + 0x6c) = uStack_17c;
        *(undefined4 *)(plVar27 + 0xe) = (undefined4)uStack_178;
        *(undefined4 *)((longlong)plVar27 + 0x74) = uStack_178._4_4_;
        plVar27[0xb] = CONCAT44(uStack_18c,local_190);
        plVar27[0xc] = CONCAT44(uStack_184,uStack_188);
        *(undefined4 *)(plVar27 + 9) = (undefined4)local_1a0;
        *(undefined4 *)((longlong)plVar27 + 0x4c) = local_1a0._4_4_;
        *(undefined4 *)(plVar27 + 10) = (undefined4)uStack_198;
        *(undefined4 *)((longlong)plVar27 + 0x54) = uStack_198._4_4_;
        goto LAB_1433e912c;
      }
      *(undefined4 *)(plVar27 + 0xf) = local_16c._4_4_;
      *(uint *)((longlong)plVar27 + 0x7c) = local_164;
      *(int *)(plVar27 + 3) = (int)uVar30;
      uVar30 = uVar30 + 1;
      lVar21 = lVar21 + 0x88;
    } while ((longlong)uVar30 < (longlong)(int)plVar27[2]);
  }
  FUN_1433cb75a(local_290,plVar32);
  iVar24 = (int)uVar30 + 1;
  iVar33 = (int)plVar27[2];
  if (iVar24 < iVar33) {
    iVar25 = (int)uVar30 + 1;
    lVar21 = (uVar30 & 0xffffffff) * 0x88;
    do {
      lVar21 = lVar21 + 0x88;
      lVar29 = *local_290;
      if (*(char *)(lVar29 + 0x20 + lVar21) == '\x01') {
        lVar31 = (longlong)*(int *)(local_270 + 200) * 0x10;
        plVar32 = (longlong *)(local_270 + lVar31);
        iVar33 = *(int *)(local_270 + 8 + lVar31);
        *(uint *)(local_270 + 8 + lVar31) = iVar33 + 1U;
        if (*(uint *)(local_270 + 0xc + lVar31) < iVar33 + 1U) {
          FUN_14015f5ee(plVar32,iVar33);
        }
        FUN_144b1f840((longlong)iVar33 * 0x88 + *plVar32,lVar29 + lVar21);
        iVar33 = (int)plVar27[2];
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 < iVar33);
  }
  lVar21 = local_280;
  iVar25 = local_2a0;
  if (local_160 == '\0') goto LAB_1433e92c1;
  local_f8 = *(ulonglong *)(*(longlong *)(plVar27[1] + (longlong)(int)plVar27[3] * 0x88) + 0x18);
  FUN_1400021e4(&local_f8,&local_158);
  if (local_1a0 == 0) {
    bVar36 = false;
  }
  else if ((longlong)(int)plVar27[5] == 0) {
    bVar36 = true;
  }
  else {
    lVar29 = 0;
    do {
      bVar35 = *(longlong *)(plVar27[4] + lVar29) == local_1a0;
      bVar36 = !bVar35;
      if (bVar35) break;
      bVar35 = (longlong)(int)plVar27[5] * 8 + -8 != lVar29;
      lVar29 = lVar29 + 8;
    } while (bVar35);
  }
  if (uStack_198 == 0) {
LAB_1433e929f:
    if (bVar36) goto LAB_1433e92a3;
  }
  else {
    if ((longlong)(int)plVar27[5] != 0) {
      lVar29 = 0;
      do {
        if (*(longlong *)(plVar27[4] + lVar29) == uStack_198) goto LAB_1433e929f;
        lVar29 = lVar29 + 8;
      } while ((longlong)(int)plVar27[5] * 8 != lVar29);
    }
LAB_1433e92a3:
    local_160 = '\0';
  }
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  iVar33 = (int)plVar27[2];
LAB_1433e92c1:
  if ((iVar24 < iVar33) && (local_15f = local_15f & 0xff00, iVar24 < (int)plVar27[2])) {
    lVar29 = (uVar30 & 0xffffffff) * 0x88;
    do {
      lVar29 = lVar29 + 0x88;
      lVar31 = *local_290;
      if (*(char *)(lVar31 + 0x20 + lVar29) == '\0') {
        local_15d = *(undefined1 *)(lVar31 + 0x1e + lVar29);
        local_228[0] = '\0';
        local_224 = 0;
        (**(code **)(**(longlong **)(lVar31 + lVar29) + 0x2a0))
                  (*(longlong **)(lVar31 + lVar29),lVar31 + lVar29,lVar21,local_228);
        uVar16 = local_1c8;
        uVar39 = uStack_204;
        uVar11 = local_208;
        uVar38 = local_218[1];
        uVar30 = local_218[0];
        if ((iVar25 == 2) && (local_228[0] == '\x01')) {
          lVar4 = *(longlong *)(lVar31 + 0x28 + lVar29);
          if (lVar4 == 0) {
            fVar37 = *(float *)(lVar31 + 0x14 + lVar29) * *(float *)(lVar31 + 0x18 + lVar29);
            puVar22 = local_218;
          }
          else {
            auVar9._4_4_ = uStack_204;
            auVar9._0_4_ = local_208;
            auVar9._8_4_ = uStack_200;
            auVar9._12_4_ = uStack_1fc;
            uVar12 = (undefined4)local_1d8;
            uVar13 = local_1d8._4_4_;
            uVar14 = (undefined4)uStack_1d0;
            uVar15 = uStack_1d0._4_4_;
            local_138 = (undefined4)local_1f8;
            uStack_134 = (undefined4)(local_1f8 >> 0x20);
            uStack_130 = (undefined4)uStack_1f0;
            uStack_12c = (undefined4)(uStack_1f0 >> 0x20);
            cVar3 = *(char *)(lVar4 + 0xc0);
            local_158 = local_1f8;
            local_f8 = uStack_1f0;
            local_298 = local_1e8;
            if (cVar3 == '\x02') {
              puVar22 = &local_f8;
LAB_1433e93ce:
              *puVar22 = *puVar22 ^ 0x8000000000000000;
              local_138 = (undefined4)local_158;
              uStack_134 = (undefined4)(local_158 >> 0x20);
              uStack_130 = (undefined4)local_f8;
              uStack_12c = (undefined4)(local_f8 >> 0x20);
            }
            else {
              puVar22 = &local_158;
              if (cVar3 == '\x01') goto LAB_1433e93ce;
              if (cVar3 == '\x03') {
                puVar22 = &local_298;
                goto LAB_1433e93ce;
              }
            }
            uVar17 = (uint)(uVar38 >> 0x20);
            if (cVar3 == '\x02') {
              uVar30 = uVar30 ^ 0x8000000000000000;
LAB_1433e940f:
              uVar39 = uVar39 ^ 0x80000000;
            }
            else if (cVar3 == '\x03') {
              uVar30 = uVar30 ^ 0x8000000000000000;
              uVar17 = uVar17 ^ 0x80000000;
            }
            else if (cVar3 == '\x01') {
              uVar17 = uVar17 ^ 0x80000000;
              goto LAB_1433e940f;
            }
            uStack_150 = CONCAT44(uVar17,(int)uVar38);
            local_148 = CONCAT44(uVar39,uVar11);
            uStack_120 = 0;
            local_118 = uVar12;
            uStack_114 = uVar13;
            uStack_110 = uVar14;
            uStack_10c = uVar15;
            local_108 = uVar16;
            uStack_100 = 0;
            fVar37 = *(float *)(lVar31 + 0x14 + lVar29) * *(float *)(lVar31 + 0x18 + lVar29);
            puVar22 = &local_158;
            local_158 = uVar30;
            uStack_140 = auVar9._8_8_;
            local_128 = local_298;
          }
          FUN_1433d5eb6(local_278,puVar22,fVar37);
        }
      }
      iVar24 = iVar24 + 1;
    } while (iVar24 < (int)plVar27[2]);
  }
  if (local_1b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar39 = *(uint *)(local_258 + 5);
  puVar23 = local_240;
  plVar27 = local_258;
  param_1 = local_270;
  uVar38 = local_238;
  plVar32 = local_260;
  uVar30 = local_248;
  uVar34 = local_230;
  iVar24 = local_264;
LAB_1433e9540:
  local_29c = local_29c & ~(uint)uVar38;
  puVar20 = (uint *)plVar27[4];
  if ((uint *)plVar27[4] == (uint *)0x0) {
    puVar20 = puVar23;
  }
  iVar33 = (int)uVar34;
  lVar21 = (longlong)iVar33;
  uVar17 = puVar20[lVar21] & local_29c;
  if (uVar17 == 0) {
    iVar18 = uVar39 + 0x1e;
    if (-1 < (int)(uVar39 - 1)) {
      iVar18 = uVar39 - 1;
    }
    iVar18 = iVar18 >> 5;
    iVar24 = iVar24 + 0x20;
    iVar19 = iVar18;
    if (iVar18 < iVar33) {
      iVar19 = iVar33;
    }
    if (iVar33 < iVar18) {
      lVar29 = 0;
      do {
        uVar17 = puVar20[lVar21 + lVar29 + 1];
        if (uVar17 != 0) {
          uVar34 = (ulonglong)(iVar33 + (int)lVar29 + 1);
          local_29c = 0xffffffff;
          goto LAB_1433e95c3;
        }
        iVar24 = iVar24 + 0x20;
        lVar29 = lVar29 + 1;
      } while (iVar19 - lVar21 != lVar29);
      local_29c = 0xffffffff;
      iVar33 = iVar19;
    }
    uVar34 = (ulonglong)(iVar33 + 1);
    plVar27 = local_258;
    param_1 = local_270;
    plVar32 = local_260;
    iVar25 = local_2a0;
    uVar17 = uVar39;
  }
  else {
LAB_1433e95c3:
    uVar38 = (ulonglong)(-uVar17 & uVar17);
    uVar2 = uVar38 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    uVar17 = (iVar24 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
    if ((int)uVar39 <= (int)uVar17) {
      uVar17 = uVar39;
    }
  }
  if (uVar17 == (uint)uVar30) goto LAB_1433e963e;
  goto LAB_1433e8aa8;
LAB_1433e963e:
  iVar33 = *(int *)(param_1 + 200);
  lVar31 = (longlong)iVar33;
  goto LAB_1433e9648;
}



// FUNCTION 1433e9a0e FUN_1433e9a0e body=179 status=ok
// SIG undefined FUN_1433e9a0e(void)

void FUN_1433e9a0e(longlong *param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  float *pfVar4;
  
  lVar3 = *param_1;
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_1479343c6(param_2,iVar2);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = param_3;
  iVar2 = (int)param_2[3];
  *(uint *)(param_2 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0x1c) < iVar2 + 1U) {
    FUN_1446f48e2(param_2 + 2,iVar2);
  }
  *(int *)(param_2[2] + (longlong)iVar2 * 4) = param_4;
  if (*(int *)(lVar3 + 0x30) == 0) {
    pfVar4 = (float *)(lVar3 + 0x20);
  }
  else {
    if (*(int *)(lVar3 + 0x40) != 0) {
      param_4 = *(int *)(*(longlong *)(lVar3 + 0x38) + (longlong)param_4 * 4);
    }
    pfVar4 = (float *)((longlong)param_4 * 4 + *(longlong *)(lVar3 + 0x28));
  }
  fVar1 = *pfVar4;
  if (*(float *)(param_2 + 5) <= fVar1 && fVar1 != *(float *)(param_2 + 5)) {
    *(float *)(param_2 + 5) = fVar1;
    *(int *)((longlong)param_2 + 0x2c) = (int)param_2[1] + -1;
  }
  return;
}



// FUNCTION 1433e9b1e FUN_1433e9b1e body=103 status=ok
// SIG undefined FUN_1433e9b1e(void)

void FUN_1433e9b1e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar3 = FUN_140791f3e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar3 = *param_1;
      iVar1 = *(int *)(lVar3 + 0x48);
      *(uint *)(lVar3 + 0x48) = iVar1 + 1U;
      if (*(uint *)(lVar3 + 0x4c) < iVar1 + 1U) {
        FUN_147930940(lVar3,iVar1);
      }
      lVar4 = *(longlong *)(lVar3 + 0x40);
      if (*(longlong *)(lVar3 + 0x40) == 0) {
        lVar4 = lVar3;
      }
      *(longlong *)(lVar4 + (longlong)iVar1 * 8) = lVar2;
    }
  }
  return;
}



// FUNCTION 1433e9dcc FUN_1433e9dcc body=1842 status=ok
// SIG undefined FUN_1433e9dcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433e9dcc(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cacc370);
  if (cVar1 == '\0') {
    _DAT_14cacc370 = 0;
    uRam000000014cacc378 = 0;
  }
  if (local_60 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_60 = &DAT_14a19662d;
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14cacc380 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cacc3a0,L"GetDefaultTriggerWeightThreshold",1);
  FUN_1446f470e(&DAT_14cacc3b0,L"GetNotifyName",1);
  FUN_1446f470e(&DAT_14cacc3c0,L"Received_Notify",1);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7becd0,1,&PTR_FUN_14a7beca0);
  FUN_1446f470e(&DAT_14cacc3e8,L"FAnimNotifyEndDataContext",1);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7bf6c0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7bfc40,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 4;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7c0100);
  FUN_1446f470e(&DAT_14cacc4c0,L"GetDefaultTriggerWeightThreshold",1);
  FUN_1446f470e(&DAT_14cacc4d0,L"GetNotifyName",1);
  FUN_1446f470e(&DAT_14cacc4e0,L"Received_NotifyBegin",1);
  FUN_1446f470e(&DAT_14cacc4f0,L"Received_NotifyEnd",1);
  FUN_1446f470e(&DAT_14cacc500,L"Received_NotifyTick",1);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7c0ce0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7c15b0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7c1990,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7c1ef0,1,0);
  FUN_1446f470e(&DAT_14cacc588,L"OverridePSTemplate",1);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7c2630,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7c29e0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7c2f60,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7c3460,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7c3810,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7c3be0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7c3fb0,1,0);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cacc648,L"p.AnimDynamicsDetailedStats",&DAT_14cacc640,
                L"When set to 1, will enable more detailed stats.");
  atexit(FUN_1433e54ad);
  FUN_1446f470e(&DAT_14cacc668,L"AnimationWarping",1);
  FUN_1446f470e(&DAT_14cacc670,L"RootMotionDelta",1);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14a7c58e0;
  local_78 = 6;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7c59f0,1,&PTR_FUN_14a7c5900);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacc740,L"a.StripFramesOnCompression",&DAT_14cacc738,
                L"1 = Strip every other frame on animations that have an even number of frames. 0 = off"
               );
  atexit(FUN_1433e5fa9);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacc750,L"a.StripOddFramesWhenFrameStripping",&DAT_14cacc73c,
                L"1 = When frame stripping apply to animations with an odd number of frames too. 0 = only even framed animations"
               );
  atexit(FUN_1433e5fee);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacc768,L"a.StripAdditiveRefPose",&DAT_14cacc760,
                L"1 = Strip additive ref poses on cook. 0 = off");
  atexit(FUN_1433e6033);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7c6750,1,&PTR_FUN_14a7c6720);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7c79e0,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7c7b60);
  ppuStack_70 = &PTR_FUN_14a7c9740;
  uStack_68 = 5;
  local_78 = 7;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7c9900,1,&PTR_FUN_14a7c97e0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7ca1a0,1,0);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cacc9e8,L"a.Streaming.ChunkSizeSeconds",&DAT_14c7612dc,
                L"Size of streaming animation chunk in seconds, 0 or negative signifies only have 1 chunk"
               );
  atexit(FUN_1433e7f0a);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7ca3d0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7ca4a0);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14a7ca660;
  local_78 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7ca680);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7cab80);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caccaa0,L"a.MarkLayerAsGarbageOnUninitialize",&DAT_14caccab0,
                L"Whether to mark the layers as garbage after uinitializing them.");
  atexit(FUN_1433e8878);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7cae20);
  local_60 = &DAT_14a7cae48;
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14caccad0 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14caccb08,L"UE::Anim::FAnimSyncGroupScope",1);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7cb3c0,1,&PTR_FUN_14a7cb390);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433ea500 FUN_1433ea500 body=1255 status=ok
// SIG undefined FUN_1433ea500(void)

void FUN_1433ea500(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  undefined1 auStack_1d8 [40];
  undefined8 local_1b0;
  int local_1a4;
  longlong *local_1a0;
  undefined8 *local_198;
  undefined1 local_190 [152];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [64];
  undefined1 *local_90;
  ulonglong local_88;
  uint local_80 [2];
  uint *local_78;
  int local_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_198 = param_2;
  if ((longlong)(int)param_1[1] != 0) {
    local_90 = (undefined1 *)0x0;
    local_88 = 0x400000000;
    local_78 = (uint *)0x0;
    local_70 = 0;
    uStack_6c = 0x20;
    uStack_68 = 0xffffffff;
    local_58 = 0;
    local_50 = 0;
    lVar14 = *param_1;
    lVar13 = (longlong)(int)param_1[1] * 0x40 + lVar14;
    local_1a0 = param_1;
    do {
      lVar19 = *(longlong *)(lVar14 + 0x30);
      iVar2 = *(int *)(lVar14 + 0x38);
      uVar20 = ((longlong)(int)local_88 - (longlong)uStack_68._4_4_) + (longlong)iVar2;
      uVar18 = (uint)uVar20;
      if ((uint)((longlong)(int)local_88 - (longlong)uStack_68._4_4_) < uVar18) {
        local_1b0 = param_3;
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b(uVar20);
        }
        FUN_147943e6a(local_d0,uVar20 & 0xffffffff);
        param_3 = local_1b0;
        uVar20 = (ulonglong)
                 ((((uint)(uVar20 >> 1) & 0x7fffffff) - 1) + (uint)((uVar20 >> 1 & 0x7fffffff) == 0)
                 ) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar12 & 0x1f);
        if (lVar12 == 0) {
          iVar5 = 2;
        }
        if (uVar18 < 4) {
          iVar5 = 2;
        }
        if (local_50 < iVar5) {
          local_50 = iVar5;
          FUN_14794402e(local_d0);
        }
      }
      if (iVar2 != 0) {
        lVar12 = (longlong)iVar2 << 3;
        do {
          FUN_14794426e(local_d0,local_190,lVar19,0);
          lVar19 = lVar19 + 8;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
      iVar2 = local_70;
      lVar14 = lVar14 + 0x40;
    } while (lVar14 != lVar13);
    if (local_70 == 0) {
      uVar15 = 1;
      uVar20 = 0;
      iVar5 = 0;
      iVar17 = 0;
    }
    else {
      puVar6 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar6 = local_80;
      }
      uVar18 = *puVar6;
      if (uVar18 == 0) {
        iVar5 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar5 = local_70 + -1;
        }
        uVar20 = 0;
        uVar15 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar15 = uVar20;
        }
        iVar17 = 0;
        do {
          if (uVar15 == uVar20) goto LAB_1433ea706;
          iVar17 = iVar17 + 0x20;
          uVar18 = puVar6[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar20 = 0;
        iVar17 = 0;
      }
      uVar15 = (ulonglong)(-uVar18 & uVar18);
      uVar1 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar5 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (local_70 <= iVar5) {
        iVar5 = local_70;
      }
    }
    if (iVar5 != local_70) {
      uVar18 = 0xffffffff;
      local_1b0 = param_3;
      do {
        puVar21 = local_90;
        if (local_90 == (undefined1 *)0x0) {
          puVar21 = local_d0;
        }
        lVar14 = (longlong)iVar5 * 0x10;
        local_1a4 = iVar17;
        plVar7 = (longlong *)FUN_1478b0794(*(undefined8 *)(puVar21 + lVar14));
        uVar4 = local_1b0;
        if ((*(int *)(puVar21 + lVar14 + 4) == 0) ||
           (uVar10 = *(uint *)(puVar21 + lVar14), (int)uVar10 < 0)) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          if ((int)uVar10 < DAT_14c9647dc) {
            puVar11 = (undefined8 *)
                      ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
            if (((puVar11 == (undefined8 *)0x0) ||
                (*(int *)(puVar11 + 2) != *(int *)(puVar21 + lVar14 + 4))) ||
               ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) {
              uVar16 = 0;
            }
            else {
              uVar16 = *puVar11;
            }
          }
        }
        local_e8 = *local_198;
        uStack_e0 = local_198[1];
        local_f8 = (undefined4)*local_1a0;
        uStack_f4 = *(undefined4 *)((longlong)local_1a0 + 4);
        uStack_f0 = (undefined4)local_1a0[1];
        uStack_ec = *(undefined4 *)((longlong)local_1a0 + 0xc);
        FUN_14792edee(local_190,&local_f8,&local_e8,uVar16);
        (**(code **)(*plVar7 + 8))(plVar7,local_190,uVar4);
        FUN_147937dd2(local_190);
        uVar18 = uVar18 & ~(uint)uVar15;
        puVar6 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar6 = local_80;
        }
        iVar5 = (int)uVar20;
        lVar14 = (longlong)iVar5;
        uVar10 = puVar6[lVar14] & uVar18;
        iVar17 = local_1a4;
        if (uVar10 == 0) {
          iVar8 = local_70 + 0x1e;
          if (-1 < local_70 + -1) {
            iVar8 = local_70 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar17 = local_1a4 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar5) {
            iVar9 = iVar5;
          }
          iVar3 = iVar5;
          if (iVar5 < iVar8) {
            lVar13 = 0;
            do {
              uVar10 = puVar6[lVar14 + lVar13 + 1];
              if (uVar10 != 0) {
                uVar20 = (ulonglong)(iVar5 + (int)lVar13 + 1);
                uVar18 = 0xffffffff;
                goto LAB_1433ea908;
              }
              iVar17 = iVar17 + 0x20;
              lVar13 = lVar13 + 1;
              uVar18 = 0xffffffff;
              iVar3 = iVar9;
            } while (iVar9 - lVar14 != lVar13);
          }
          uVar20 = (ulonglong)(iVar3 + 1);
          iVar5 = local_70;
        }
        else {
LAB_1433ea908:
          uVar15 = (ulonglong)(-uVar10 & uVar10);
          uVar1 = uVar15 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar5 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (local_70 <= iVar5) {
            iVar5 = local_70;
          }
        }
      } while (iVar5 != iVar2);
    }
LAB_1433ea706:
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    uVar20 = local_88 >> 0x20;
    local_88 = local_88 & 0xffffffff00000000;
    if ((int)uVar20 != 0) {
      FUN_144b20932(local_d0,0);
    }
    uStack_68 = 0xffffffff;
    local_70 = 0;
    if (0x20 < uStack_6c) {
      uStack_6c = 0x20;
      FUN_14008f53c(local_80,0);
    }
    if (local_78 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_90 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433ea9e8 FUN_1433ea9e8 body=1256 status=ok
// SIG undefined FUN_1433ea9e8(void)

void FUN_1433ea9e8(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 *puVar20;
  undefined1 auStack_1d8 [40];
  undefined8 local_1b0;
  int local_1a4;
  longlong *local_1a0;
  undefined8 *local_198;
  undefined1 local_190 [152];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [64];
  undefined1 *local_90;
  ulonglong local_88;
  uint local_80 [2];
  uint *local_78;
  int local_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_198 = param_2;
  if ((longlong)(int)param_1[1] != 0) {
    local_90 = (undefined1 *)0x0;
    local_88 = 0x400000000;
    local_78 = (uint *)0x0;
    local_70 = 0;
    uStack_6c = 0x20;
    uStack_68 = 0xffffffff;
    local_58 = 0;
    local_50 = 0;
    plVar12 = (longlong *)*param_1;
    plVar7 = plVar12 + (int)param_1[1];
    local_1a0 = param_1;
    do {
      lVar19 = *(longlong *)(*plVar12 + 0x30);
      iVar2 = *(int *)(*plVar12 + 0x38);
      uVar18 = ((longlong)(int)local_88 - (longlong)uStack_68._4_4_) + (longlong)iVar2;
      uVar17 = (uint)uVar18;
      if ((uint)((longlong)(int)local_88 - (longlong)uStack_68._4_4_) < uVar17) {
        local_1b0 = param_3;
        if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b(uVar18);
        }
        FUN_147943e6a(local_d0,uVar18 & 0xffffffff);
        param_3 = local_1b0;
        uVar18 = (ulonglong)
                 ((((uint)(uVar18 >> 1) & 0x7fffffff) - 1) + (uint)((uVar18 >> 1 & 0x7fffffff) == 0)
                 ) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar14 & 0x1f);
        if (lVar14 == 0) {
          iVar5 = 2;
        }
        if (uVar17 < 4) {
          iVar5 = 2;
        }
        if (local_50 < iVar5) {
          local_50 = iVar5;
          FUN_14794402e(local_d0);
        }
      }
      if (iVar2 != 0) {
        lVar14 = (longlong)iVar2 << 3;
        do {
          FUN_14794426e(local_d0,local_190,lVar19,0);
          lVar19 = lVar19 + 8;
          lVar14 = lVar14 + -8;
        } while (lVar14 != 0);
      }
      iVar2 = local_70;
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar7);
    if (local_70 == 0) {
      uVar13 = 1;
      uVar18 = 0;
      iVar5 = 0;
      iVar16 = 0;
    }
    else {
      puVar6 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar6 = local_80;
      }
      uVar17 = *puVar6;
      if (uVar17 == 0) {
        iVar5 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar5 = local_70 + -1;
        }
        uVar18 = 0;
        uVar13 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar13 = uVar18;
        }
        iVar16 = 0;
        do {
          if (uVar13 == uVar18) goto LAB_1433eabef;
          iVar16 = iVar16 + 0x20;
          uVar17 = puVar6[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar17 == 0);
      }
      else {
        uVar18 = 0;
        iVar16 = 0;
      }
      uVar13 = (ulonglong)(-uVar17 & uVar17);
      uVar1 = uVar13 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar5 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if (local_70 <= iVar5) {
        iVar5 = local_70;
      }
    }
    if (iVar5 != local_70) {
      uVar17 = 0xffffffff;
      local_1b0 = param_3;
      do {
        puVar20 = local_90;
        if (local_90 == (undefined1 *)0x0) {
          puVar20 = local_d0;
        }
        lVar19 = (longlong)iVar5 * 0x10;
        local_1a4 = iVar16;
        plVar7 = (longlong *)FUN_1478b0794(*(undefined8 *)(puVar20 + lVar19));
        uVar4 = local_1b0;
        if ((*(int *)(puVar20 + lVar19 + 4) == 0) ||
           (uVar10 = *(uint *)(puVar20 + lVar19), (int)uVar10 < 0)) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          if ((int)uVar10 < DAT_14c9647dc) {
            puVar11 = (undefined8 *)
                      ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
            if (((puVar11 == (undefined8 *)0x0) ||
                (*(int *)(puVar11 + 2) != *(int *)(puVar20 + lVar19 + 4))) ||
               ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) {
              uVar15 = 0;
            }
            else {
              uVar15 = *puVar11;
            }
          }
        }
        local_e8 = *local_198;
        uStack_e0 = local_198[1];
        local_f8 = (undefined4)*local_1a0;
        uStack_f4 = *(undefined4 *)((longlong)local_1a0 + 4);
        uStack_f0 = (undefined4)local_1a0[1];
        uStack_ec = *(undefined4 *)((longlong)local_1a0 + 0xc);
        FUN_14792f1c2(local_190,&local_f8,&local_e8,uVar15);
        (**(code **)(*plVar7 + 8))(plVar7,local_190,uVar4);
        FUN_147937dd2(local_190);
        uVar17 = uVar17 & ~(uint)uVar13;
        puVar6 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar6 = local_80;
        }
        iVar5 = (int)uVar18;
        lVar19 = (longlong)iVar5;
        uVar10 = puVar6[lVar19] & uVar17;
        iVar16 = local_1a4;
        if (uVar10 == 0) {
          iVar8 = local_70 + 0x1e;
          if (-1 < local_70 + -1) {
            iVar8 = local_70 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar16 = local_1a4 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar5) {
            iVar9 = iVar5;
          }
          iVar3 = iVar5;
          if (iVar5 < iVar8) {
            lVar14 = 0;
            do {
              uVar10 = puVar6[lVar19 + lVar14 + 1];
              if (uVar10 != 0) {
                uVar18 = (ulonglong)(iVar5 + (int)lVar14 + 1);
                uVar17 = 0xffffffff;
                goto LAB_1433eadf1;
              }
              iVar16 = iVar16 + 0x20;
              lVar14 = lVar14 + 1;
              uVar17 = 0xffffffff;
              iVar3 = iVar9;
            } while (iVar9 - lVar19 != lVar14);
          }
          uVar18 = (ulonglong)(iVar3 + 1);
          iVar5 = local_70;
        }
        else {
LAB_1433eadf1:
          uVar13 = (ulonglong)(-uVar10 & uVar10);
          uVar1 = uVar13 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar5 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if (local_70 <= iVar5) {
            iVar5 = local_70;
          }
        }
      } while (iVar5 != iVar2);
    }
LAB_1433eabef:
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    uVar18 = local_88 >> 0x20;
    local_88 = local_88 & 0xffffffff00000000;
    if ((int)uVar18 != 0) {
      FUN_144b20932(local_d0,0);
    }
    uStack_68 = 0xffffffff;
    local_70 = 0;
    if (0x20 < uStack_6c) {
      uStack_6c = 0x20;
      FUN_14008f53c(local_80,0);
    }
    if (local_78 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_90 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433eaed2 FUN_1433eaed2 body=665 status=ok
// SIG undefined FUN_1433eaed2(void)

void FUN_1433eaed2(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  ulonglong *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_1;
  local_80 = param_2;
  local_78 = param_4;
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    puVar14 = *(ulonglong **)(param_1 + 0x30);
    local_70 = puVar14 + *(int *)(param_1 + 0x38);
    local_68 = param_3 + 7;
    do {
      uVar15 = *puVar14;
      if ((uVar15 >> 0x20 == 0) || (uVar5 = (uint)uVar15, (int)uVar5 < 0)) {
LAB_1433eb13c:
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        if ((int)uVar5 < DAT_14c9647dc) {
          puVar6 = (undefined8 *)
                   ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0xd & 0x3fff8)));
          if (((puVar6 == (undefined8 *)0x0) || (*(int *)(puVar6 + 2) != (int)(uVar15 >> 0x20))) ||
             ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)) goto LAB_1433eb13c;
          uVar13 = *puVar6;
        }
      }
      iVar3 = *(int *)(local_88 + 0x38);
      if ((longlong)iVar3 != 0) {
        lVar10 = *(longlong *)(local_88 + 0x30);
        uVar15 = 0;
        lVar9 = 0;
        do {
          cVar2 = FUN_1400063ec(uVar15 + lVar10,uVar13);
          if (cVar2 != '\0') {
            if ((~uVar15 & 0x7fffffff8) != 0) {
              lVar10 = (lVar9 >> 0x20) * 0x10;
              iVar3 = *(int *)(*(longlong *)(local_88 + 0x10) + 8 + lVar10);
              if (0 < iVar3) {
                plVar8 = (longlong *)(*(longlong *)(local_88 + 0x10) + lVar10);
                lVar9 = *(longlong *)(local_88 + 0x20);
                lVar7 = 0;
                do {
                  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
                    lVar1 = *plVar8;
                    uVar5 = *(uint *)(lVar1 + 0x10 + lVar7 * 0x14);
                    plVar12 = (longlong *)param_3[8];
                    if ((longlong *)param_3[8] == (longlong *)0x0) {
                      plVar12 = local_68;
                    }
                    iVar11 = *(int *)((longlong)plVar12 +
                                     (ulonglong)((int)param_3[9] - 1U & uVar5) * 4);
                    if (iVar11 != -1) {
                      puVar6 = (undefined8 *)(lVar1 + lVar7 * 0x14);
                      do {
                        lVar1 = *param_3 + (longlong)iVar11 * 0x10;
                        if (*(uint *)(*param_3 + (longlong)iVar11 * 0x10) == uVar5) {
                          if ((int *)(lVar1 + 4) != (int *)0x0 && lVar1 != 0) {
                            iVar11 = *(int *)(lVar1 + 4);
                            if ((-1 < (longlong)iVar11) && (iVar11 < *(int *)(local_78 + 0x68))) {
                              iVar11 = *(int *)(*(longlong *)(local_78 + 0x60) +
                                               (longlong)iVar11 * 4);
                              if ((-1 < (longlong)iVar11) &&
                                 ((iVar11 < *(int *)(local_78 + 0x88) &&
                                  (iVar11 = *(int *)(*(longlong *)(local_78 + 0x80) +
                                                    (longlong)iVar11 * 4), iVar11 != -1)))) {
                                local_60 = *puVar6;
                                local_58 = puVar6[1];
                                local_50 = iVar11;
                                uVar4 = FUN_14792a902(local_80,uVar13,&local_60);
                                FUN_1449b16b6(uVar13,uVar4,
                                              *(undefined8 *)
                                               (*(longlong *)(lVar10 + lVar9) + lVar7 * 0x10),1);
                                iVar3 = (int)plVar8[1];
                              }
                            }
                          }
                          break;
                        }
                        iVar11 = *(int *)(lVar1 + 8);
                      } while (iVar11 != -1);
                    }
                  }
                  lVar7 = lVar7 + 1;
                } while (lVar7 < iVar3);
              }
            }
            break;
          }
          lVar9 = lVar9 + 0x100000000;
          uVar15 = uVar15 + 8;
        } while ((longlong)iVar3 * 8 != uVar15);
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != local_70);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433eb16c FUN_1433eb16c body=2171 status=ok
// SIG undefined FUN_1433eb16c(void)

void FUN_1433eb16c(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  float fVar23;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined8 local_1f8;
  longlong *local_1f0;
  int local_1e4;
  longlong *local_1e0;
  longlong *local_1d8;
  undefined1 local_1d0 [152];
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  undefined1 local_108 [64];
  undefined1 *local_c8;
  ulonglong local_c0;
  uint local_b8 [2];
  uint *local_b0;
  uint local_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  longlong local_90;
  int local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0x400000000;
  local_b0 = (uint *)0x0;
  local_a8 = 0;
  uStack_a4 = 0x20;
  uStack_a0 = 0xffffffff;
  local_90 = 0;
  local_88 = 0;
  local_1e0 = param_2;
  local_1d8 = param_1;
  if ((longlong)(int)param_1[1] != 0) {
    lVar19 = *param_1;
    lVar15 = (longlong)(int)param_1[1] * 0x40 + lVar19;
    do {
      lVar18 = *(longlong *)(lVar19 + 0x30);
      iVar17 = *(int *)(lVar19 + 0x38);
      uVar14 = ((longlong)(int)local_c0 - (longlong)uStack_a0._4_4_) + (longlong)iVar17;
      uVar6 = (uint)uVar14;
      if ((uint)((longlong)(int)local_c0 - (longlong)uStack_a0._4_4_) < uVar6) {
        local_1f0 = param_3;
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b(uVar14);
        }
        FUN_147943e6a(local_108,uVar14 & 0xffffffff);
        uVar14 = (ulonglong)
                 ((((uint)(uVar14 >> 1) & 0x7fffffff) - 1) + (uint)((uVar14 >> 1 & 0x7fffffff) == 0)
                 ) * 2 + 1;
        lVar20 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar20 & 0x1f);
        if (lVar20 == 0) {
          iVar5 = 2;
        }
        if (uVar6 < 4) {
          iVar5 = 2;
        }
        param_3 = local_1f0;
        if (local_88 < iVar5) {
          local_88 = iVar5;
          FUN_14794402e(local_108);
          param_3 = local_1f0;
        }
      }
      if (iVar17 != 0) {
        lVar20 = (longlong)iVar17 << 3;
        do {
          FUN_14794426e(local_108,local_1d0,lVar18,0);
          lVar18 = lVar18 + 8;
          lVar20 = lVar20 + -8;
        } while (lVar20 != 0);
      }
      lVar19 = lVar19 + 0x40;
    } while (lVar19 != lVar15);
  }
  uVar6 = local_a8;
  lVar19 = *param_3;
  if (*(int *)(lVar19 + 0x48) < 1) {
    local_138 = 0;
    uStack_130 = 0;
    lVar15 = param_3[1];
    if ((longlong)(int)lVar15 != 0) {
      lVar18 = 0;
      do {
        uVar14 = uStack_130;
        fVar23 = *(float *)(lVar19 + 0x10 + lVar18);
        if (1.0 <= fVar23) {
          fVar23 = 1.0;
        }
        lVar20 = (longlong)(int)uStack_130;
        uVar6 = (int)uStack_130 + 1;
        uStack_130 = CONCAT44(uStack_130._4_4_,uVar6);
        if (uStack_130._4_4_ < uVar6) {
          FUN_14475e4ac(&local_138,uVar14 & 0xffffffff);
        }
        if (fVar23 <= 0.0) {
          fVar23 = 0.0;
        }
        *(float *)(local_138 + lVar20 * 4) = fVar23;
        lVar18 = lVar18 + 0x60;
      } while ((longlong)(int)lVar15 * 0x60 != lVar18);
    }
    if (local_a8 == 0) {
      uVar14 = 1;
      uVar21 = 0;
      uVar6 = 0;
      iVar17 = 0;
    }
    else {
      puVar8 = local_b0;
      if (local_b0 == (uint *)0x0) {
        puVar8 = local_b8;
      }
      uVar6 = *puVar8;
      if (uVar6 == 0) {
        iVar17 = local_a8 + 0x1e;
        if (-1 < (int)(local_a8 - 1)) {
          iVar17 = local_a8 - 1;
        }
        uVar21 = 0;
        uVar14 = (ulonglong)(uint)(iVar17 >> 5);
        if (iVar17 >> 5 < 1) {
          uVar14 = uVar21;
        }
        iVar17 = 0;
        do {
          if (uVar14 == uVar21) goto LAB_1433eb8e1;
          iVar17 = iVar17 + 0x20;
          uVar6 = puVar8[uVar21 + 1];
          uVar21 = uVar21 + 1;
        } while (uVar6 == 0);
      }
      else {
        uVar21 = 0;
        iVar17 = 0;
      }
      uVar14 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar14 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar6 = (iVar17 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if ((int)local_a8 <= (int)uVar6) {
        uVar6 = local_a8;
      }
    }
    if (uVar6 != local_a8) {
      uVar7 = 0xffffffff;
      local_1f8 = param_4;
      local_1e0 = (longlong *)(ulonglong)local_a8;
      do {
        puVar13 = local_c8;
        if (local_c8 == (undefined1 *)0x0) {
          puVar13 = local_108;
        }
        lVar19 = (longlong)(int)uVar6 * 0x10;
        plVar9 = (longlong *)FUN_1478b0794(*(undefined8 *)(puVar13 + lVar19));
        uVar4 = local_1f8;
        if ((*(int *)(puVar13 + lVar19 + 4) == 0) ||
           (uVar6 = *(uint *)(puVar13 + lVar19), (int)uVar6 < 0)) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          if ((int)uVar6 < DAT_14c9647dc) {
            puVar12 = (undefined8 *)
                      ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
            if (((puVar12 == (undefined8 *)0x0) ||
                (*(int *)(puVar12 + 2) != *(int *)(puVar13 + lVar19 + 4))) ||
               ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) {
              uVar16 = 0;
            }
            else {
              uVar16 = *puVar12;
            }
          }
        }
        local_128 = *local_1d8;
        lStack_120 = local_1d8[1];
        local_118 = local_138;
        lStack_110 = CONCAT44(lStack_110._4_4_,(int)uStack_130);
        FUN_14792edee(local_1d0,&local_128,&local_118,uVar16);
        (**(code **)(*plVar9 + 8))(plVar9,local_1d0,uVar4);
        FUN_147937dd2(local_1d0);
        uVar7 = uVar7 & ~(uint)uVar14;
        puVar8 = local_b0;
        if (local_b0 == (uint *)0x0) {
          puVar8 = local_b8;
        }
        iVar5 = (int)uVar21;
        lVar19 = (longlong)iVar5;
        uVar6 = puVar8[lVar19] & uVar7;
        if (uVar6 == 0) {
          iVar10 = local_a8 + 0x1e;
          if (-1 < (int)(local_a8 - 1)) {
            iVar10 = local_a8 - 1;
          }
          iVar10 = iVar10 >> 5;
          iVar17 = iVar17 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar5) {
            iVar11 = iVar5;
          }
          if (iVar5 < iVar10) {
            lVar15 = 0;
            do {
              uVar6 = puVar8[lVar19 + lVar15 + 1];
              if (uVar6 != 0) {
                uVar21 = (ulonglong)(iVar5 + (int)lVar15 + 1);
                uVar7 = 0xffffffff;
                goto LAB_1433eb8b0;
              }
              iVar17 = iVar17 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar11 - lVar19 != lVar15);
            uVar7 = 0xffffffff;
            iVar5 = iVar11;
          }
          uVar21 = (ulonglong)(iVar5 + 1);
          uVar6 = local_a8;
        }
        else {
LAB_1433eb8b0:
          uVar14 = (ulonglong)(-uVar6 & uVar6);
          uVar1 = uVar14 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          uVar6 = (iVar17 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if ((int)local_a8 <= (int)uVar6) {
            uVar6 = local_a8;
          }
        }
      } while (uVar6 != (uint)local_1e0);
    }
LAB_1433eb8e1:
    if (local_138 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_1f0 = param_3;
    if (local_a8 == 0) {
      uVar21 = 1;
      uVar7 = 0;
      iVar17 = 0;
      uVar14 = 0;
    }
    else {
      puVar8 = local_b0;
      if (local_b0 == (uint *)0x0) {
        puVar8 = local_b8;
      }
      uVar7 = *puVar8;
      if (uVar7 == 0) {
        iVar17 = local_a8 + 0x1e;
        if (-1 < (int)(local_a8 - 1)) {
          iVar17 = local_a8 - 1;
        }
        uVar14 = 0;
        uVar21 = (ulonglong)(uint)(iVar17 >> 5);
        if (iVar17 >> 5 < 1) {
          uVar21 = uVar14;
        }
        iVar17 = 0;
        do {
          if (uVar21 == uVar14) goto LAB_1433eb8f3;
          iVar17 = iVar17 + 0x20;
          uVar7 = puVar8[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar7 == 0);
      }
      else {
        iVar17 = 0;
        uVar14 = 0;
      }
      uVar21 = (ulonglong)(-uVar7 & uVar7);
      uVar1 = uVar21 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar7 = (iVar17 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if ((int)local_a8 <= (int)uVar7) {
        uVar7 = local_a8;
      }
    }
    if (uVar7 != local_a8) {
      uVar22 = 0xffffffff;
      local_1f8 = param_4;
      do {
        puVar13 = local_c8;
        if (local_c8 == (undefined1 *)0x0) {
          puVar13 = local_108;
        }
        local_1e4 = iVar17;
        plVar9 = (longlong *)FUN_1478b0794();
        uVar4 = local_1f8;
        if (*(int *)(puVar13 + (longlong)(int)uVar7 * 0x10 + 4) == 0) {
          local_208 = 0;
        }
        else {
          uVar2 = *(uint *)(puVar13 + (longlong)(int)uVar7 * 0x10);
          if ((int)uVar2 < 0) {
            local_208 = 0;
          }
          else {
            local_208 = 0;
            if ((int)uVar2 < DAT_14c9647dc) {
              puVar12 = (undefined8 *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if (((puVar12 == (undefined8 *)0x0) ||
                  (*(int *)(puVar12 + 2) != *(int *)(puVar13 + (longlong)(int)uVar7 * 0x10 + 4))) ||
                 ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) {
                local_208 = 0;
              }
              else {
                local_208 = *puVar12;
              }
            }
          }
        }
        local_118 = *local_1f0;
        lStack_110 = local_1f0[1];
        local_128 = *local_1e0;
        lStack_120 = local_1e0[1];
        local_138 = *local_1d8;
        uStack_130 = local_1d8[1];
        FUN_14792f37c(local_1d0,&local_138,&local_128,&local_118);
        (**(code **)(*plVar9 + 0x10))(plVar9,local_1d0,uVar4);
        FUN_147937dd2(local_1d0);
        uVar22 = uVar22 & ~(uint)uVar21;
        puVar8 = local_b0;
        if (local_b0 == (uint *)0x0) {
          puVar8 = local_b8;
        }
        iVar5 = (int)uVar14;
        lVar19 = (longlong)iVar5;
        uVar7 = puVar8[lVar19] & uVar22;
        iVar17 = local_1e4;
        if (uVar7 == 0) {
          iVar10 = local_a8 + 0x1e;
          if (-1 < (int)(local_a8 - 1)) {
            iVar10 = local_a8 - 1;
          }
          iVar10 = iVar10 >> 5;
          iVar17 = local_1e4 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar5) {
            iVar11 = iVar5;
          }
          iVar3 = iVar5;
          if (iVar5 < iVar10) {
            lVar15 = 0;
            do {
              uVar7 = puVar8[lVar19 + lVar15 + 1];
              if (uVar7 != 0) {
                uVar14 = (ulonglong)(iVar5 + (int)lVar15 + 1);
                uVar22 = 0xffffffff;
                goto LAB_1433eb620;
              }
              iVar17 = iVar17 + 0x20;
              lVar15 = lVar15 + 1;
              uVar22 = 0xffffffff;
              iVar3 = iVar11;
            } while (iVar11 - lVar19 != lVar15);
          }
          uVar14 = (ulonglong)(iVar3 + 1);
          uVar7 = local_a8;
        }
        else {
LAB_1433eb620:
          uVar21 = (ulonglong)(-uVar7 & uVar7);
          uVar1 = uVar21 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          uVar7 = (iVar17 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if ((int)local_a8 <= (int)uVar7) {
            uVar7 = local_a8;
          }
        }
      } while (uVar7 != uVar6);
    }
  }
LAB_1433eb8f3:
  local_88 = 0;
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  uVar14 = local_c0 >> 0x20;
  local_c0 = local_c0 & 0xffffffff00000000;
  if ((int)uVar14 != 0) {
    FUN_144b20932(local_108,0);
  }
  uStack_a0 = 0xffffffff;
  local_a8 = 0;
  if (0x20 < uStack_a4) {
    uStack_a4 = 0x20;
    FUN_14008f53c(local_b8,0);
  }
  if (local_b0 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433eb9e8 FUN_1433eb9e8 body=2191 status=ok
// SIG undefined FUN_1433eb9e8(void)

void FUN_1433eb9e8(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  float fVar21;
  undefined1 auStack_238 [32];
  longlong *local_218;
  undefined8 local_210;
  longlong *local_200;
  longlong *local_1f8;
  ulonglong local_1f0;
  longlong *local_1e8;
  undefined1 local_1e0 [152];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  undefined1 local_108 [64];
  undefined1 *local_c8;
  ulonglong local_c0;
  uint local_b8 [2];
  uint *local_b0;
  uint local_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  longlong local_90;
  int local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0x400000000;
  local_b0 = (uint *)0x0;
  local_a8 = 0;
  uStack_a4 = 0x20;
  uStack_a0 = 0xffffffff;
  local_90 = 0;
  local_88 = 0;
  local_200 = param_1;
  local_1e8 = param_2;
  if ((longlong)(int)param_1[1] != 0) {
    lVar19 = *param_1;
    lVar13 = (longlong)(int)param_1[1] * 0x40 + lVar19;
    do {
      lVar16 = *(longlong *)(lVar19 + 0x30);
      iVar10 = *(int *)(lVar19 + 0x38);
      uVar11 = ((longlong)(int)local_c0 - (longlong)uStack_a0._4_4_) + (longlong)iVar10;
      uVar4 = (uint)uVar11;
      if ((uint)((longlong)(int)local_c0 - (longlong)uStack_a0._4_4_) < uVar4) {
        local_1f8 = param_4;
        if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b(uVar11);
        }
        FUN_147943e6a(local_108,uVar11 & 0xffffffff);
        uVar11 = (ulonglong)
                 ((((uint)(uVar11 >> 1) & 0x7fffffff) - 1) + (uint)((uVar11 >> 1 & 0x7fffffff) == 0)
                 ) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar17 & 0x1f);
        if (lVar17 == 0) {
          iVar3 = 2;
        }
        if (uVar4 < 4) {
          iVar3 = 2;
        }
        param_4 = local_1f8;
        if (local_88 < iVar3) {
          local_88 = iVar3;
          FUN_14794402e();
          param_4 = local_1f8;
        }
      }
      if (iVar10 != 0) {
        lVar17 = (longlong)iVar10 << 3;
        do {
          FUN_14794426e(local_108,local_1e0,lVar16,0);
          lVar16 = lVar16 + 8;
          lVar17 = lVar17 + -8;
        } while (lVar17 != 0);
      }
      lVar19 = lVar19 + 0x40;
    } while (lVar19 != lVar13);
  }
  if (*(int *)(*param_3 + 0x48) < 1) {
    local_138 = 0;
    uStack_130 = 0;
    lVar19 = param_4[1];
    if ((longlong)(int)lVar19 != 0) {
      lVar13 = *param_4;
      lVar16 = 0;
      do {
        uVar11 = uStack_130;
        fVar21 = *(float *)(*param_3 + 0x10 + (longlong)*(int *)(lVar13 + lVar16) * 0x60);
        if (1.0 <= fVar21) {
          fVar21 = 1.0;
        }
        lVar17 = (longlong)(int)uStack_130;
        uVar4 = (int)uStack_130 + 1;
        uStack_130 = CONCAT44(uStack_130._4_4_,uVar4);
        if (uStack_130._4_4_ < uVar4) {
          FUN_14475e4ac(&local_138,uVar11 & 0xffffffff);
        }
        if (fVar21 <= 0.0) {
          fVar21 = 0.0;
        }
        *(float *)(local_138 + lVar17 * 4) = fVar21;
        lVar16 = lVar16 + 4;
      } while ((longlong)(int)lVar19 * 4 != lVar16);
    }
    uVar4 = local_a8;
    if (local_a8 == 0) {
      uVar11 = 1;
      uVar20 = 0;
      uVar14 = 0;
      iVar10 = 0;
    }
    else {
      puVar5 = local_b0;
      if (local_b0 == (uint *)0x0) {
        puVar5 = local_b8;
      }
      uVar14 = *puVar5;
      if (uVar14 == 0) {
        iVar10 = local_a8 + 0x1e;
        if (-1 < (int)(local_a8 - 1)) {
          iVar10 = local_a8 - 1;
        }
        uVar20 = 0;
        uVar11 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar11 = uVar20;
        }
        iVar10 = 0;
        do {
          if (uVar11 == uVar20) goto LAB_1433ec171;
          iVar10 = iVar10 + 0x20;
          uVar14 = puVar5[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar20 = 0;
        iVar10 = 0;
      }
      uVar11 = (ulonglong)(-uVar14 & uVar14);
      uVar1 = uVar11 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar14 = (iVar10 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if ((int)local_a8 <= (int)uVar14) {
        uVar14 = local_a8;
      }
    }
    if (uVar14 != local_a8) {
      uVar12 = 0xffffffff;
      do {
        puVar18 = local_c8;
        if (local_c8 == (undefined1 *)0x0) {
          puVar18 = local_108;
        }
        lVar19 = (longlong)(int)uVar14 * 0x10;
        plVar6 = (longlong *)FUN_1478b0794(*(undefined8 *)(puVar18 + lVar19));
        if ((*(int *)(puVar18 + lVar19 + 4) == 0) ||
           (uVar14 = *(uint *)(puVar18 + lVar19), (int)uVar14 < 0)) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          if ((int)uVar14 < DAT_14c9647dc) {
            puVar9 = (undefined8 *)
                     ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
            if (((puVar9 == (undefined8 *)0x0) ||
                (*(int *)(puVar9 + 2) != *(int *)(puVar18 + lVar19 + 4))) ||
               ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) {
              uVar15 = 0;
            }
            else {
              uVar15 = *puVar9;
            }
          }
        }
        local_128 = *local_200;
        lStack_120 = local_200[1];
        local_118 = local_138;
        lStack_110 = CONCAT44(lStack_110._4_4_,(int)uStack_130);
        FUN_14792edee(local_1e0,&local_128,&local_118,uVar15);
        (**(code **)(*plVar6 + 8))(plVar6,local_1e0,param_5);
        FUN_147937dd2(local_1e0);
        uVar12 = uVar12 & ~(uint)uVar11;
        puVar5 = local_b0;
        if (local_b0 == (uint *)0x0) {
          puVar5 = local_b8;
        }
        iVar3 = (int)uVar20;
        lVar19 = (longlong)iVar3;
        uVar14 = puVar5[lVar19] & uVar12;
        if (uVar14 == 0) {
          iVar7 = local_a8 + 0x1e;
          if (-1 < (int)(local_a8 - 1)) {
            iVar7 = local_a8 - 1;
          }
          iVar7 = iVar7 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar3) {
            iVar8 = iVar3;
          }
          iVar2 = iVar3;
          if (iVar3 < iVar7) {
            lVar13 = 0;
            do {
              uVar14 = puVar5[lVar19 + lVar13 + 1];
              if (uVar14 != 0) {
                uVar20 = (ulonglong)(iVar3 + (int)lVar13 + 1);
                uVar12 = 0xffffffff;
                goto LAB_1433ec145;
              }
              iVar10 = iVar10 + 0x20;
              lVar13 = lVar13 + 1;
              uVar12 = 0xffffffff;
              iVar2 = iVar8;
            } while (iVar8 - lVar19 != lVar13);
          }
          uVar20 = (ulonglong)(iVar2 + 1);
          uVar14 = local_a8;
        }
        else {
LAB_1433ec145:
          uVar11 = (ulonglong)(-uVar14 & uVar14);
          uVar1 = uVar11 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          uVar14 = (iVar10 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if ((int)local_a8 <= (int)uVar14) {
            uVar14 = local_a8;
          }
        }
      } while (uVar14 != uVar4);
    }
LAB_1433ec171:
    if (local_138 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_1f8 = param_4;
    if (local_a8 == 0) {
      uVar11 = 1;
      uVar4 = 0;
      iVar10 = 0;
      uVar20 = 0;
    }
    else {
      puVar5 = local_b0;
      if (local_b0 == (uint *)0x0) {
        puVar5 = local_b8;
      }
      uVar4 = *puVar5;
      if (uVar4 == 0) {
        iVar10 = local_a8 + 0x1e;
        if (-1 < (int)(local_a8 - 1)) {
          iVar10 = local_a8 - 1;
        }
        uVar20 = 0;
        uVar11 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar11 = uVar20;
        }
        iVar10 = 0;
        do {
          if (uVar11 == uVar20) goto LAB_1433ec183;
          iVar10 = iVar10 + 0x20;
          uVar4 = puVar5[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar4 == 0);
      }
      else {
        iVar10 = 0;
        uVar20 = 0;
      }
      uVar11 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar11 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar4 = (iVar10 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if ((int)local_a8 <= (int)uVar4) {
        uVar4 = local_a8;
      }
    }
    if (uVar4 != local_a8) {
      uVar14 = 0xffffffff;
      local_1f0 = (ulonglong)local_a8;
      do {
        puVar18 = local_c8;
        if (local_c8 == (undefined1 *)0x0) {
          puVar18 = local_108;
        }
        plVar6 = (longlong *)FUN_1478b0794();
        if ((*(int *)(puVar18 + (longlong)(int)uVar4 * 0x10 + 4) == 0) ||
           (uVar12 = *(uint *)(puVar18 + (longlong)(int)uVar4 * 0x10), (int)uVar12 < 0)) {
          local_210 = 0;
        }
        else {
          local_210 = 0;
          if ((int)uVar12 < DAT_14c9647dc) {
            puVar9 = (undefined8 *)
                     ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
            if (((puVar9 == (undefined8 *)0x0) ||
                (*(int *)(puVar9 + 2) != *(int *)(puVar18 + (longlong)(int)uVar4 * 0x10 + 4))) ||
               ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) {
              local_210 = 0;
            }
            else {
              local_210 = *puVar9;
            }
          }
        }
        local_118 = *local_1f8;
        lStack_110 = local_1f8[1];
        local_128 = *param_3;
        lStack_120 = param_3[1];
        local_138 = *local_1e8;
        uStack_130 = local_1e8[1];
        local_148 = (undefined4)*local_200;
        uStack_144 = *(undefined4 *)((longlong)local_200 + 4);
        uStack_140 = (undefined4)local_200[1];
        uStack_13c = *(undefined4 *)((longlong)local_200 + 0xc);
        local_218 = &local_118;
        FUN_14792f5c2(local_1e0,&local_148,&local_138,&local_128);
        (**(code **)(*plVar6 + 0x10))(plVar6,local_1e0,param_5);
        FUN_147937dd2(local_1e0);
        uVar14 = uVar14 & ~(uint)uVar11;
        puVar5 = local_b0;
        if (local_b0 == (uint *)0x0) {
          puVar5 = local_b8;
        }
        iVar3 = (int)uVar20;
        lVar19 = (longlong)iVar3;
        uVar4 = puVar5[lVar19] & uVar14;
        if (uVar4 == 0) {
          iVar7 = local_a8 + 0x1e;
          if (-1 < (int)(local_a8 - 1)) {
            iVar7 = local_a8 - 1;
          }
          iVar7 = iVar7 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar3) {
            iVar8 = iVar3;
          }
          if (iVar3 < iVar7) {
            lVar13 = 0;
            do {
              uVar4 = puVar5[lVar19 + lVar13 + 1];
              if (uVar4 != 0) {
                uVar20 = (ulonglong)(iVar3 + (int)lVar13 + 1);
                uVar14 = 0xffffffff;
                goto LAB_1433ebf1e;
              }
              iVar10 = iVar10 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar8 - lVar19 != lVar13);
            uVar14 = 0xffffffff;
            iVar3 = iVar8;
          }
          uVar20 = (ulonglong)(iVar3 + 1);
          uVar4 = local_a8;
        }
        else {
LAB_1433ebf1e:
          uVar11 = (ulonglong)(-uVar4 & uVar4);
          uVar1 = uVar11 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          uVar4 = (iVar10 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if ((int)local_a8 <= (int)uVar4) {
            uVar4 = local_a8;
          }
        }
      } while (uVar4 != (uint)local_1f0);
    }
  }
LAB_1433ec183:
  local_88 = 0;
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  uVar11 = local_c0 >> 0x20;
  local_c0 = local_c0 & 0xffffffff00000000;
  if ((int)uVar11 != 0) {
    FUN_144b20932(local_108,0);
  }
  uStack_a0 = 0xffffffff;
  local_a8 = 0;
  if (0x20 < uStack_a4) {
    uStack_a4 = 0x20;
    FUN_14008f53c(local_b8,0);
  }
  if (local_b0 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433ec278 FUN_1433ec278 body=1578 status=ok
// SIG undefined FUN_1433ec278(void)

void FUN_1433ec278(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 *local_1b8;
  longlong local_1b0;
  int local_1a4;
  undefined8 local_1a0;
  longlong *local_198;
  undefined1 local_190 [152];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d0 [64];
  undefined1 *local_90;
  ulonglong local_88;
  uint local_80 [2];
  uint *local_78;
  int local_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uVar5 = 0;
  local_90 = (undefined1 *)0x0;
  local_88 = 0x400000000;
  local_78 = (uint *)0x0;
  local_70 = 0;
  uStack_6c = 0x20;
  uStack_68 = 0xffffffff;
  local_58 = 0;
  local_50 = 0;
  local_1b0 = param_1;
  local_198 = param_2;
  if ((longlong)(int)param_2[1] != 0) {
    lVar16 = *param_2;
    lVar15 = (longlong)(int)param_2[1] * 0x40 + lVar16;
    do {
      lVar18 = *(longlong *)(lVar16 + 0x30);
      iVar2 = *(int *)(lVar16 + 0x38);
      uVar14 = ((longlong)(int)local_88 - (longlong)uStack_68._4_4_) + (longlong)iVar2;
      uVar5 = (uint)uVar14;
      if ((uint)((longlong)(int)local_88 - (longlong)uStack_68._4_4_) < uVar5) {
        local_1b8 = param_3;
        if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b(uVar14);
        }
        FUN_147943e6a(local_d0,uVar14 & 0xffffffff);
        param_3 = local_1b8;
        uVar14 = (ulonglong)
                 ((((uint)(uVar14 >> 1) & 0x7fffffff) - 1) + (uint)((uVar14 >> 1 & 0x7fffffff) == 0)
                 ) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar19 & 0x1f);
        if (lVar19 == 0) {
          iVar6 = 2;
        }
        if (uVar5 < 4) {
          iVar6 = 2;
        }
        param_1 = local_1b0;
        if (local_50 < iVar6) {
          local_50 = iVar6;
          FUN_14794402e(local_d0);
          param_1 = local_1b0;
        }
      }
      if (iVar2 != 0) {
        lVar19 = (longlong)iVar2 << 3;
        do {
          FUN_14794426e(local_d0,local_190,lVar18,0);
          lVar18 = lVar18 + 8;
          lVar19 = lVar19 + -8;
          param_1 = local_1b0;
        } while (lVar19 != 0);
      }
      lVar16 = lVar16 + 0x40;
    } while (lVar16 != lVar15);
    uVar5 = (int)local_88 - uStack_68._4_4_;
  }
  lVar16 = *(longlong *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x38);
  uVar14 = (longlong)iVar2 + (longlong)(int)uVar5;
  uVar12 = (uint)uVar14;
  if (uVar5 < uVar12) {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar14);
    }
    FUN_147943e6a(local_d0,uVar14 & 0xffffffff);
    uVar14 = (ulonglong)
             ((((uint)(uVar14 >> 1) & 0x7fffffff) - 1) + (uint)((uVar14 >> 1 & 0x7fffffff) == 0)) *
             2 + 1;
    lVar15 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar15 & 0x1f);
    if (lVar15 == 0) {
      iVar6 = 2;
    }
    if (uVar12 < 4) {
      iVar6 = 2;
    }
    if (local_50 < iVar6) {
      local_50 = iVar6;
      FUN_14794402e();
    }
  }
  if (iVar2 != 0) {
    lVar15 = (longlong)iVar2 << 3;
    do {
      FUN_14794426e(local_d0,local_190,lVar16,0);
      lVar16 = lVar16 + 8;
      lVar15 = lVar15 + -8;
    } while (lVar15 != 0);
  }
  iVar2 = local_70;
  if (local_70 == 0) {
    uVar14 = 1;
    uVar20 = 0;
    iVar6 = 0;
    iVar17 = 0;
  }
  else {
    puVar7 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar7 = local_80;
    }
    uVar5 = *puVar7;
    if (uVar5 == 0) {
      iVar6 = local_70 + 0x1e;
      if (-1 < local_70 + -1) {
        iVar6 = local_70 + -1;
      }
      uVar20 = 0;
      uVar14 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar14 = uVar20;
      }
      iVar17 = 0;
      do {
        if (uVar14 == uVar20) goto LAB_1433ec4da;
        iVar17 = iVar17 + 0x20;
        uVar5 = puVar7[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar20 = 0;
      iVar17 = 0;
    }
    uVar14 = (ulonglong)(-uVar5 & uVar5);
    uVar1 = uVar14 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar6 = (iVar17 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (local_70 <= iVar6) {
      iVar6 = local_70;
    }
  }
  if (iVar6 != local_70) {
    uVar5 = 0xffffffff;
    local_1b8 = param_3;
    local_1a0 = param_4;
    do {
      puVar13 = local_90;
      if (local_90 == (undefined1 *)0x0) {
        puVar13 = local_d0;
      }
      local_1a4 = iVar17;
      plVar8 = (longlong *)FUN_1478b0794();
      uVar4 = local_1a0;
      if (*(int *)(puVar13 + (longlong)iVar6 * 0x10 + 4) == 0) {
        local_1c8 = 0;
      }
      else {
        uVar12 = *(uint *)(puVar13 + (longlong)iVar6 * 0x10);
        if ((int)uVar12 < 0) {
          local_1c8 = 0;
        }
        else {
          local_1c8 = 0;
          if ((int)uVar12 < DAT_14c9647dc) {
            puVar11 = (undefined8 *)
                      ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
            if (((puVar11 == (undefined8 *)0x0) ||
                (*(int *)(puVar11 + 2) != *(int *)(puVar13 + (longlong)iVar6 * 0x10 + 4))) ||
               ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) {
              local_1c8 = 0;
            }
            else {
              local_1c8 = *puVar11;
            }
          }
        }
      }
      local_e0 = *local_1b8;
      local_d8 = *(undefined4 *)(local_1b8 + 1);
      local_f8 = (undefined4)*local_198;
      uStack_f4 = *(undefined4 *)((longlong)local_198 + 4);
      uStack_f0 = (undefined4)local_198[1];
      uStack_ec = *(undefined4 *)((longlong)local_198 + 0xc);
      FUN_14792f748(local_190,local_1b0,&local_f8,&local_e0);
      (**(code **)(*plVar8 + 0x10))(plVar8,local_190,uVar4);
      FUN_147937dd2(local_190);
      uVar5 = uVar5 & ~(uint)uVar14;
      puVar7 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar7 = local_80;
      }
      iVar6 = (int)uVar20;
      lVar16 = (longlong)iVar6;
      uVar12 = puVar7[lVar16] & uVar5;
      iVar17 = local_1a4;
      if (uVar12 == 0) {
        iVar9 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar9 = local_70 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar17 = local_1a4 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar6) {
          iVar10 = iVar6;
        }
        iVar3 = iVar6;
        if (iVar6 < iVar9) {
          lVar15 = 0;
          do {
            uVar12 = puVar7[lVar16 + lVar15 + 1];
            if (uVar12 != 0) {
              uVar20 = (ulonglong)(iVar6 + (int)lVar15 + 1);
              uVar5 = 0xffffffff;
              goto LAB_1433ec706;
            }
            iVar17 = iVar17 + 0x20;
            lVar15 = lVar15 + 1;
            uVar5 = 0xffffffff;
            iVar3 = iVar10;
          } while (iVar10 - lVar16 != lVar15);
        }
        uVar20 = (ulonglong)(iVar3 + 1);
        iVar6 = local_70;
      }
      else {
LAB_1433ec706:
        uVar14 = (ulonglong)(-uVar12 & uVar12);
        uVar1 = uVar14 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar6 = (iVar17 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (local_70 <= iVar6) {
          iVar6 = local_70;
        }
      }
    } while (iVar6 != iVar2);
  }
LAB_1433ec4da:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar14 = local_88 >> 0x20;
  local_88 = local_88 & 0xffffffff00000000;
  if ((int)uVar14 != 0) {
    FUN_144b20932(local_d0,0);
  }
  uStack_68 = 0xffffffff;
  local_70 = 0;
  if (0x20 < uStack_6c) {
    uStack_6c = 0x20;
    FUN_14008f53c(local_80,0);
  }
  if (local_78 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433ec8a4 FUN_1433ec8a4 body=152 status=ok
// SIG undefined FUN_1433ec8a4(void)

void FUN_1433ec8a4(longlong *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  param_1 = (longlong *)*param_1;
  lVar5 = *param_1;
  iVar2 = (int)param_1[1];
  lVar7 = (longlong)iVar2;
  if (lVar7 != 0) {
    lVar6 = 0;
    do {
      iVar3 = *(int *)(lVar5 + 0x40 + lVar6);
      iVar4 = *(int *)(lVar5 + 0x44 + lVar6);
      if ((iVar3 == param_2) && (iVar4 == param_3)) {
        return;
      }
      if ((iVar3 == param_3) && (iVar4 == param_2)) {
        return;
      }
      lVar6 = lVar6 + 0x48;
    } while (lVar7 * 0x48 != lVar6);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1433f4a10(param_1,iVar2);
    lVar5 = *param_1;
  }
  puVar1 = (undefined8 *)(lVar5 + 0x30 + lVar7 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar7 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar7 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + lVar7 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(int *)(lVar5 + 0x40 + lVar7 * 0x48) = param_2;
  *(int *)(lVar5 + 0x44 + lVar7 * 0x48) = param_3;
  return;
}



// FUNCTION 1433ec94d FUN_1433ec94d body=49 status=ok
// SIG undefined FUN_1433ec94d(void)

void FUN_1433ec94d(void)

{
  FUN_1459e08c1(DAT_14cacd6d8,DAT_14cacd6e0);
  if (DAT_14cacd6d8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1433ec98f FUN_1433ec98f body=49 status=ok
// SIG undefined FUN_1433ec98f(void)

void FUN_1433ec98f(void)

{
  FUN_144760e21(DAT_14caccb58,DAT_14caccb60);
  if (DAT_14caccb58 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1433ec9c0 FUN_1433ec9c0 body=55 status=ok
// SIG undefined FUN_1433ec9c0(void)

void FUN_1433ec9c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14caccb80 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caccb80 = FUN_14171c317(FUN_1463a8cb7,uVar1,L"EBlendProfileMode");
  }
  return;
}



// FUNCTION 1433ec9f8 FUN_1433ec9f8 body=4946 status=ok
// SIG undefined FUN_1433ec9f8(void)

void FUN_1433ec9f8(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  DWORD DVar9;
  char cVar10;
  int iVar11;
  DWORD DVar12;
  DWORD dwTlsIndex;
  undefined8 *puVar13;
  float *pfVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong *plVar26;
  bool bVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_238 [32];
  longlong *local_218;
  ulonglong local_210;
  undefined8 local_208;
  undefined8 local_200;
  uint local_1ec;
  longlong local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  undefined8 *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
  double local_1a8 [2];
  double local_198;
  float local_148;
  float local_144;
  longlong local_140;
  longlong local_138;
  ulonglong uStack_130;
  double local_128 [4];
  double local_108 [3];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  dwTlsIndex = DAT_14c7612e8;
  local_1e8 = param_2;
  if (DAT_14c7612e8 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar12 = 0xffffffff;
    LOCK();
    bVar27 = DAT_14c7612e8 != 0xffffffff;
    DVar9 = dwTlsIndex;
    if (bVar27) {
      DVar12 = DAT_14c7612e8;
      DVar9 = DAT_14c7612e8;
    }
    DAT_14c7612e8 = DVar9;
    UNLOCK();
    if (bVar27) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar12;
    }
  }
  lVar22 = local_1e8;
  puVar13 = TlsGetValue(dwTlsIndex);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)FUN_14001cc68(0xb0);
    memset(puVar13,0,0xa0);
    DVar12 = GetCurrentThreadId();
    *(DWORD *)(puVar13 + 1) = DVar12;
    *puVar13 = &PTR_FUN_14a7df7e8;
    puVar13[0x14] = 0;
    puVar13[0x15] = 0x400000000;
    puVar13[2] = 0;
    puVar13[3] = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    FUN_140fddf04(puVar13);
    TlsSetValue(dwTlsIndex,puVar13);
  }
  plVar26 = *(longlong **)(lVar22 + 0x48);
  fVar35 = *(float *)(param_4 + 0xb8);
  fVar34 = 0.0;
  if (*(char *)(*(longlong *)(lVar22 + 0x60) + 8) == '\x01') {
    fVar34 = **(float **)(lVar22 + 8) - *(float *)(*(longlong *)(lVar22 + 0x60) + 4);
    if (-0.5 <= fVar34) {
      if (0.5 < fVar34) {
        fVar34 = (float)FUN_1447c7e44(*(float **)(lVar22 + 8),0x3f800000);
        fVar34 = (float)(~-(uint)(fVar34 != 0.0) & 0x3f000000 |
                        (uint)(fVar34 + -0.5) & -(uint)(fVar34 != 0.0));
      }
    }
    else {
      fVar34 = (float)FUN_1447c7e44(-0.5 - fVar34,0x3f800000);
      fVar34 = (float)(~-(uint)(fVar34 != 0.0) & 0xbf000000 |
                      (uint)(0.5 - fVar34) & -(uint)(fVar34 != 0.0));
    }
  }
  pfVar16 = *(float **)(lVar22 + 0x60);
  fVar36 = *(float *)(lVar22 + 0x10);
  pfVar16[1] = **(float **)(lVar22 + 8);
  *pfVar16 = fVar36 * fVar35;
  *(undefined1 *)(pfVar16 + 2) = 1;
  dVar5 = (double)*(float *)(lVar22 + 0x58);
  local_1b0 = puVar13 + 2;
  dVar6 = (double)*(float *)(lVar22 + 0x54);
  local_108[0] = dVar6;
  local_108[1] = dVar5;
  local_108[2] = 0.0;
  plVar2 = *(longlong **)(lVar22 + 0x40);
  local_128[2] = 0.0;
  local_1e0 = plVar26;
  local_1c8 = param_4;
  local_128[0] = dVar6;
  local_128[1] = dVar5;
  if ((plVar2 != (longlong *)0x0) && (0 < (int)plVar2[1])) {
    pfVar16 = (float *)(param_1 + 0x2c);
    lVar20 = 0;
    lVar25 = 0;
    do {
      if (*(char *)((longlong)pfVar16 + 0xd) == '\0') {
        fVar36 = (float)local_108[lVar25];
      }
      else {
        fVar36 = (float)local_108[lVar25];
        FUN_1401e0b7e(*plVar2 + lVar20,fVar36,pfVar16[1] - *pfVar16);
      }
      fVar36 = (float)FUN_144ae0490(*plVar2 + lVar20,fVar36,fVar35);
      local_128[lVar25] = (double)fVar36;
      lVar25 = lVar25 + 1;
      lVar20 = lVar20 + 0x38;
      pfVar16 = pfVar16 + 8;
    } while (lVar25 < (int)plVar2[1]);
  }
  plVar26 = local_1e0;
  local_210 = lVar22 + 0x50;
  local_218 = local_1e0;
  cVar10 = FUN_1448d6e62(param_1,local_128,fVar35,local_1b0);
  lVar20 = local_1c8;
  if (cVar10 == '\0') goto LAB_1433ed965;
  fVar35 = 0.0;
  fVar36 = 0.0;
  if (0 < (longlong)(int)plVar26[1]) {
    lVar25 = *plVar26;
    lVar17 = 0;
    do {
      iVar11 = *(int *)(lVar25 + lVar17);
      if (((-1 < (longlong)iVar11) && (iVar11 < (int)param_1[0x23])) &&
         (lVar15 = *(longlong *)(param_1[0x22] + (longlong)iVar11 * 0x28), lVar15 != 0)) {
        fVar30 = *(float *)(lVar15 + 0xb0) * *(float *)(lVar25 + 0x20 + lVar17);
        uVar28 = -(uint)(fVar30 != 0.0);
        fVar32 = *(float *)(lVar25 + 0x10 + lVar17);
        if (1.0 <= fVar32) {
          fVar32 = 1.0;
        }
        if (fVar32 <= 0.0) {
          fVar32 = 0.0;
        }
        fVar36 = fVar36 + fVar32 * (float)(~uVar28 & 0x3f800000 | (uint)ABS(fVar30) & uVar28) *
                                   *(float *)(lVar15 + 0x1f8);
      }
      lVar17 = lVar17 + 0x60;
    } while ((longlong)(int)plVar26[1] * 0x60 != lVar17);
  }
  if (0.0 < *(float *)((longlong)param_1 + 0xc4)) {
    fVar35 = (float)FUN_1405b2250(param_1,*(undefined8 *)(lVar22 + 0x48));
  }
  iVar11 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if (iVar11 != 0) {
    if (((9.999999747378752e-05 < ABS(dVar6 - local_128[0])) ||
        (9.999999747378752e-05 < ABS(dVar5 - local_128[1]))) ||
       (9.999999747378752e-05 < ABS(0.0 - local_128[2]))) {
      if (iVar11 == 1) {
        if ((local_128[0] == 0.0) && (!NAN(local_128[0]))) goto LAB_1433ece37;
        fVar32 = (float)(dVar6 / local_128[0]);
      }
      else {
        fVar32 = 1.0;
        if ((iVar11 == 2) && ((local_128[1] != 0.0 || (NAN(local_128[1]))))) {
          fVar32 = (float)(dVar5 / local_128[1]);
        }
      }
    }
    else {
LAB_1433ece37:
      fVar32 = 1.0;
    }
    local_198 = local_128[2];
    local_1a8[0] = local_128[0];
    local_1a8[1] = local_128[1];
    lVar25 = 0;
    do {
      if (*(char *)((longlong)param_1 + lVar25 * 4 + 0x16d) == '\0') {
        dVar5 = (double)*(float *)((longlong)param_1 + lVar25 * 4 + 0x164);
        dVar6 = *(double *)((longlong)local_1a8 + lVar25);
        if (dVar5 <= *(double *)((longlong)local_1a8 + lVar25)) {
          dVar6 = dVar5;
        }
        dVar5 = (double)*(float *)((longlong)param_1 + lVar25 * 4 + 0x160);
        if (dVar6 <= dVar5) {
          dVar6 = dVar5;
        }
        *(double *)((longlong)local_1a8 + lVar25) = dVar6;
      }
      lVar25 = lVar25 + 8;
    } while (lVar25 != 0x18);
    if (((9.999999747378752e-05 < ABS(local_1a8[0] - local_128[0])) ||
        (9.999999747378752e-05 < ABS(local_1a8[1] - local_128[1]))) ||
       (9.999999747378752e-05 < ABS(local_198 - local_128[2]))) {
      if (iVar11 == 1) {
        if ((*(char *)((longlong)param_1 + 0x16d) == '\0') &&
           ((local_1a8[0] != 0.0 || (NAN(local_1a8[0]))))) {
          fVar32 = (float)((double)fVar32 * (local_128[0] / local_1a8[0]));
        }
      }
      else if (((iVar11 == 2) && ((local_1a8[1] != 0.0 || (NAN(local_1a8[1]))))) &&
              (*(char *)((longlong)param_1 + 0x18d) == '\0')) {
        fVar32 = (float)((double)fVar32 * (local_128[1] / local_1a8[1]));
      }
    }
    **(float **)(lVar22 + 0x60) = fVar32 * **(float **)(lVar22 + 0x60);
  }
  if ((int)param_1[0x21] == -1) {
    local_1ec = 0;
    bVar27 = false;
  }
  else {
    if (*(char *)(lVar20 + 0xca) == '\0') {
      local_1ec = 0;
      bVar27 = false;
      if ((*(char *)(lVar22 + 0x70) != '\x01') || (local_1ec = 0, *(char *)(lVar20 + 200) != '\x01')
         ) goto LAB_1433ed0bd;
    }
    iVar11 = *(int *)(puVar13 + 3);
    if ((longlong)iVar11 == 0) {
      local_1ec = (uint)CONCAT71((int7)(int3)((uint)iVar11 >> 8),1);
      bVar27 = true;
    }
    else {
      lVar22 = puVar13[2];
      lVar20 = (longlong)iVar11 * 0x60 + lVar22;
      local_1d0 = puVar13;
      local_1c0 = param_3;
      do {
        lVar17 = plVar26[1];
        lVar25 = 0;
        if ((longlong)(int)lVar17 != 0) {
          lVar15 = *local_1e0;
          lVar23 = 0;
          do {
            lVar25 = *(longlong *)(lVar22 + 8);
            if (lVar25 != 0) {
              lVar3 = *(longlong *)(lVar15 + 8 + lVar23);
              if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
                FUN_1456cec3c(lVar3);
                lVar25 = *(longlong *)(lVar22 + 8);
              }
              if (lVar25 == lVar3) {
                *(undefined4 *)(lVar15 + 0x18 + lVar23) = *(undefined4 *)(lVar22 + 0x18);
                *(undefined4 *)(lVar15 + 0x1c + lVar23) = *(undefined4 *)(lVar22 + 0x1c);
                uVar8 = *(undefined8 *)(lVar22 + 0x38);
                puVar13 = (undefined8 *)(lVar15 + 0x30 + lVar23);
                *puVar13 = *(undefined8 *)(lVar22 + 0x30);
                puVar13[1] = uVar8;
              }
            }
            lVar23 = lVar23 + 0x60;
          } while ((longlong)(int)lVar17 * 0x60 != lVar23);
        }
        lVar22 = lVar22 + 0x60;
        plVar26 = local_1e0;
      } while (lVar22 != lVar20);
      local_1ec = (uint)CONCAT71((int7)((ulonglong)lVar25 >> 8),1);
      bVar27 = true;
      puVar13 = local_1d0;
      param_3 = local_1c0;
      lVar22 = local_1e8;
      lVar20 = local_1c8;
    }
  }
LAB_1433ed0bd:
  fVar32 = (float)FUN_1405b2250(param_1);
  fVar30 = 0.0;
  if (0 < (longlong)(int)plVar26[1]) {
    lVar25 = *plVar26;
    lVar17 = 0;
    do {
      iVar11 = *(int *)(lVar25 + lVar17);
      if (((-1 < (longlong)iVar11) && (iVar11 < (int)param_1[0x23])) &&
         (lVar15 = *(longlong *)(param_1[0x22] + (longlong)iVar11 * 0x28), lVar15 != 0)) {
        fVar33 = *(float *)(lVar15 + 0xb0) * *(float *)(lVar25 + 0x20 + lVar17);
        uVar28 = -(uint)(fVar33 != 0.0);
        fVar37 = *(float *)(lVar25 + 0x10 + lVar17);
        if (1.0 <= fVar37) {
          fVar37 = 1.0;
        }
        if (fVar37 <= 0.0) {
          fVar37 = 0.0;
        }
        fVar30 = fVar30 + fVar37 * (float)(~uVar28 & 0x3f800000 | (uint)ABS(fVar33) & uVar28) *
                                   *(float *)(lVar15 + 0x1f8);
      }
      lVar17 = lVar17 + 0x60;
    } while ((longlong)(int)plVar26[1] * 0x60 != lVar17);
  }
  if ((0.0 < fVar35) && (0.0 < fVar32)) {
    if (*(char *)(lVar22 + 0x81) == '\0') {
      fVar35 = fVar35 / fVar32;
    }
    else {
      fVar35 = fVar32 / fVar35;
    }
    **(float **)(lVar22 + 0x60) = fVar35 * **(float **)(lVar22 + 0x60);
  }
  if (((*(char *)(lVar22 + 0x80) == '\x01') && (0.0 < fVar36)) && (0.0 < fVar30)) {
    **(float **)(lVar22 + 0x60) = (fVar36 / fVar30) * **(float **)(lVar22 + 0x60);
  }
  pfVar16 = *(float **)(lVar22 + 8);
  if ((*(char *)(lVar20 + 0xcb) == '\x01') && (*(char *)(lVar22 + 0x1d) == '\0')) {
    *pfVar16 = *(float *)(lVar20 + 0xc4);
  }
  fVar35 = *pfVar16;
  if (*(char *)(lVar20 + 0xc9) == '\x01') {
    *(float *)(lVar20 + 0xc0) = fVar35;
    if ((bVar27) && (0 < (longlong)(int)plVar26[1])) {
      lVar25 = *plVar26;
      pfVar14 = (float *)(lVar25 + 0x10);
      auVar29._0_12_ = ZEXT812(0x800000);
      auVar29._12_4_ = 0;
      uVar24 = 0xffffffff;
      uVar18 = 0;
      do {
        auVar31 = ZEXT416((uint)*pfVar14);
        if (1.0 <= *pfVar14) {
          auVar31._4_12_ = ZEXT812(0);
          auVar31._0_4_ = 0x3f800000;
        }
        if (auVar31._0_4_ <= 0.0) {
          auVar7._12_4_ = 0;
          auVar7._0_12_ = auVar31._4_12_;
          auVar31 = auVar7 << 0x20;
        }
        if (((auVar29._0_4_ < auVar31._0_4_) &&
            (lVar22 = *(longlong *)(param_1[0x22] + (longlong)(int)pfVar14[-4] * 0x28), lVar22 != 0)
            ) && (0 < *(int *)(lVar22 + 0x188))) {
          uVar24 = uVar18 & 0xffffffff;
          auVar29 = auVar31;
        }
        uVar18 = uVar18 + 1;
        pfVar14 = pfVar14 + 0x18;
      } while ((longlong)(int)plVar26[1] != uVar18);
      lVar22 = local_1e8;
      if ((int)uVar24 == -1) {
        local_1ec = 0;
        goto LAB_1433ed4bf;
      }
      if ((char)local_1ec == '\0') goto LAB_1433ed4bf;
      lVar17 = (longlong)(int)uVar24 * 0x60;
      lVar15 = (longlong)*(int *)(lVar25 + lVar17);
      plVar2 = *(longlong **)(param_1[0x22] + lVar15 * 0x28);
      if (plVar2 != (longlong *)0x0) {
        lVar25 = lVar25 + lVar17;
        plVar1 = (longlong *)(param_1[0x22] + lVar15 * 0x28);
        uVar28 = *(uint *)(local_1e8 + 0x1c) | 0xfffffffe;
        local_1d8 = lVar25;
        local_1d0 = puVar13;
        if (((int)uVar28 < **(int **)(local_1e8 + 0x68)) &&
           ((int)uVar28 < (*(int **)(local_1e8 + 0x68))[2])) {
          if ((*(int *)(lVar25 + 0x30) <= (int)uVar28) || (*(int *)(lVar25 + 0x38) <= (int)uVar28))
          {
            uVar21 = 0;
            if ((*(longlong *)(lVar20 + 0x88) == 0) ||
               (uVar21 = 0, *(longlong *)(lVar20 + 0x90) == 0)) goto LAB_1433eda4f;
            local_208 = *(undefined8 *)(local_1e8 + 0x28);
            local_210 = lVar25 + 0x18;
            local_218 = (longlong *)(lVar25 + 0x38);
            (**(code **)(*plVar2 + 0x398))
                      (plVar2,lVar20 + 0x88,CONCAT71((int7)(local_210 >> 8),1),lVar25 + 0x30);
          }
          uVar21 = 0;
        }
        else {
          *(undefined4 *)(lVar25 + 0x30) = 0xfffffffe;
          *(undefined4 *)(lVar25 + 0x38) = 0xfffffffe;
          fVar36 = *pfVar16;
          fVar32 = (float)(**(code **)(*(longlong *)*plVar1 + 0x2b0))();
          *(float *)(lVar25 + 0x18) = fVar32 * fVar36;
          uVar21 = 1;
        }
LAB_1433eda4f:
        lVar25 = local_1d8;
        lVar22 = local_1e8;
        fVar36 = **(float **)(local_1e8 + 0x60) * *(float *)(plVar1 + 4) *
                 *(float *)(*plVar1 + 0xb0);
        *(float *)(lVar20 + 0xbc) = fVar36;
        if (1e-08 < ABS(fVar36)) {
          local_1b8 = *plVar1;
          local_200 = *(undefined8 *)(local_1e8 + 0x28);
          local_218 = (longlong *)(local_1d8 + 0x1c);
          local_208 = CONCAT71(local_208._1_7_,*(undefined1 *)(local_1e8 + 0x1c));
          local_210 = CONCAT44(local_210._4_4_,fVar36);
          FUN_1433e764c(local_1b8,local_1d8 + 0x30,lVar20 + 0x78,local_1d8 + 0x18);
          local_208 = *(undefined8 *)(lVar22 + 0x28);
          local_210 = CONCAT71(local_210._1_7_,*(undefined1 *)(lVar22 + 0x1c));
          local_218 = (longlong *)CONCAT71(local_218._1_7_,uVar21);
LAB_1433edc97:
          plVar26 = local_1e0;
          FUN_147938d68(param_1,local_1e0,uVar24,local_1c8);
        }
        else {
          uVar28 = *(uint *)(local_1e8 + 0x1c) | 0xfffffffe;
          if ((**(int **)(local_1e8 + 0x68) <= (int)uVar28) ||
             (plVar26 = local_1e0, (*(int **)(local_1e8 + 0x68))[2] <= (int)uVar28)) {
            local_218 = (longlong *)(local_1d8 + 0x30);
            local_210 = local_1d8 + 0x38;
            (**(code **)(*(longlong *)*plVar1 + 0x380))
                      ((longlong *)*plVar1,*(undefined4 *)(local_1d8 + 0x18),
                       *(uint *)(local_1e8 + 0x1c),*(undefined8 *)(lVar20 + 0xb0));
            lVar22 = local_1e8;
            local_210 = *(undefined8 *)(local_1e8 + 0x28);
            local_218 = (longlong *)CONCAT44(local_218._4_4_,*(undefined4 *)(lVar25 + 0x18));
            (**(code **)(*(longlong *)*plVar1 + 0x390))
                      ((longlong *)*plVar1,local_1a8,*(undefined4 *)(lVar25 + 0x30),
                       *(undefined4 *)(lVar25 + 0x38));
            *(undefined4 *)(local_1c8 + 0x98) = local_198._0_4_;
            *(double *)(local_1c8 + 0x88) = local_1a8[0];
            *(double *)(local_1c8 + 0x90) = local_1a8[1];
            *(double *)(local_1c8 + 0x9c) = local_1a8[0];
            *(double *)(local_1c8 + 0xa4) = local_1a8[1];
            *(undefined4 *)(local_1c8 + 0xac) = local_198._0_4_;
            local_208 = *(undefined8 *)(lVar22 + 0x28);
            local_210 = CONCAT71(local_210._1_7_,*(undefined1 *)(lVar22 + 0x1c));
            local_218 = (longlong *)CONCAT71(local_218._1_7_,1);
            goto LAB_1433edc97;
          }
        }
        lVar22 = local_1d8;
        fVar36 = *(float *)(local_1d8 + 0x18);
        fVar32 = (float)(**(code **)(*(longlong *)*plVar1 + 0x2b0))();
        *pfVar16 = fVar36 / fVar32;
        puVar13 = *(undefined8 **)(local_1e8 + 0x68);
        uVar8 = *(undefined8 *)(lVar22 + 0x38);
        *puVar13 = *(undefined8 *)(lVar22 + 0x30);
        puVar13[1] = uVar8;
        puVar13 = local_1d0;
        lVar22 = local_1e8;
      }
    }
    else {
      local_1ec = 0;
LAB_1433ed4bf:
      fVar30 = *pfVar16 * fVar32 + **(float **)(lVar22 + 0x60);
      fVar36 = fVar30;
      if ((fVar30 < 0.0) || (fVar32 < fVar30)) {
        if (*(char *)(lVar22 + 0x1c) == '\x01') {
          if (((fVar32 != 0.0) || (fVar36 = 0.0, NAN(fVar32))) &&
             (fVar36 = (float)FUN_1447c7e44(fVar30,fVar32), fVar36 < 0.0)) {
            fVar36 = fVar36 + fVar32;
          }
        }
        else {
          if (fVar32 <= fVar30) {
            fVar36 = fVar32;
          }
          if (fVar36 <= 0.0) {
            fVar36 = 0.0;
          }
        }
      }
      *pfVar16 = (float)(-(uint)(fVar32 != 0.0) & (uint)(fVar36 / fVar32));
    }
    fVar36 = *pfVar16;
    *(float *)(lVar20 + 0xc4) = fVar36;
  }
  else {
    local_1ec = local_1ec & 0xff;
    if (*(longlong *)(lVar20 + 0x90) == 0) {
      local_1ec = 0;
    }
    if (*(longlong *)(lVar20 + 0x88) == 0) {
      local_1ec = 0;
    }
    if ((char)local_1ec == '\x01') {
      lVar25 = *plVar26;
      uVar18 = 0;
      if (1 < (longlong)(int)plVar26[1]) {
        fVar36 = *(float *)(lVar25 + 0x10);
        if (1.0 <= fVar36) {
          fVar36 = 1.0;
        }
        if (fVar36 <= 0.0) {
          fVar36 = 0.0;
        }
        pfVar14 = (float *)(lVar25 + 0x70);
        uVar24 = 1;
        do {
          fVar32 = *pfVar14;
          if (1.0 <= fVar32) {
            fVar32 = 1.0;
          }
          if (fVar32 <= 0.0) {
            fVar32 = 0.0;
          }
          if (fVar36 < fVar32) {
            uVar18 = uVar24 & 0xffffffff;
            fVar36 = fVar32;
          }
          uVar24 = uVar24 + 1;
          pfVar14 = pfVar14 + 0x18;
        } while ((longlong)(int)plVar26[1] != uVar24);
        uVar18 = (ulonglong)(int)uVar18;
      }
      lVar15 = (longlong)*(int *)(lVar25 + uVar18 * 0x60);
      lVar17 = param_1[0x22];
      plVar2 = *(longlong **)(lVar17 + lVar15 * 0x28);
      fVar36 = fVar35;
      if (plVar2 != (longlong *)0x0) {
        lVar25 = lVar25 + uVar18 * 0x60;
        if ((*(float *)(lVar20 + 0xb8) != 0.0) || (NAN(*(float *)(lVar20 + 0xb8)))) {
          uVar28 = *(uint *)(lVar22 + 0x1c);
          if ((**(int **)(lVar22 + 0x68) <= (int)(uVar28 | 0xfffffffe)) ||
             ((*(int **)(lVar22 + 0x68))[2] <= (int)(uVar28 | 0xfffffffe))) {
            fVar36 = (float)(**(code **)(*plVar2 + 0x2b0))();
            *(float *)(lVar25 + 0x18) = fVar36 * fVar35;
            uVar28 = (uint)*(byte *)(lVar22 + 0x1c);
          }
          local_208 = *(undefined8 *)(lVar22 + 0x28);
          local_210 = CONCAT71(local_210._1_7_,(char)uVar28) & 0xffffffffffffff01;
          local_218 = (longlong *)((ulonglong)local_218 & 0xffffffffffffff00);
          FUN_147938d68(param_1,local_1e0,0xffffffff,lVar20);
        }
        puVar4 = *(undefined8 **)(lVar22 + 0x68);
        uVar8 = *(undefined8 *)(lVar25 + 0x38);
        *puVar4 = *(undefined8 *)(lVar25 + 0x30);
        puVar4[1] = uVar8;
        fVar36 = *(float *)(lVar25 + 0x18);
        fVar32 = (float)(**(code **)(**(longlong **)(lVar17 + lVar15 * 0x28) + 0x2b0))();
        fVar36 = fVar36 / fVar32;
        *pfVar16 = fVar36;
        plVar26 = local_1e0;
      }
    }
    else {
      fVar35 = *(float *)(lVar20 + 0xc0);
      fVar36 = *(float *)(lVar20 + 0xc4);
      *pfVar16 = fVar36;
    }
  }
  fVar32 = fVar35;
  if (1.0 <= fVar35) {
    fVar32 = 1.0;
  }
  if (fVar32 <= 0.0) {
    fVar32 = 0.0;
  }
  if (1.0 <= fVar36) {
    fVar36 = 1.0;
  }
  if (fVar36 <= 0.0) {
    fVar36 = 0.0;
  }
  local_138 = 0;
  uStack_130 = 0;
  fVar30 = fVar32;
  local_140 = lVar22;
  if ((*(char *)(lVar22 + 0x1d) == '\x01') && (*(char *)(lVar22 + 0x5c) == '\0')) {
    fVar30 = fVar32 - fVar34;
    fVar36 = fVar32;
    if (0.0 <= fVar30) {
      if (1.0 < fVar30) {
        fVar34 = (float)FUN_1447c7e44(fVar30 + -1.0);
        fVar30 = (float)(~-(uint)(fVar34 != 0.0) & 0x3f800000 |
                        (uint)(fVar34 + 0.0) & -(uint)(fVar34 != 0.0));
      }
    }
    else {
      fVar34 = (float)FUN_1447c7e44();
      fVar30 = (float)(-(uint)(fVar34 != 0.0) & (uint)(1.0 - fVar34));
    }
  }
  local_1d8 = CONCAT44(local_1d8._4_4_,*pfVar16);
  cVar10 = (char)param_1[0x1a];
  uVar28 = *(uint *)(plVar26 + 1);
  uVar24 = (ulonglong)uVar28;
  uVar18 = 0xffffffff;
  if (cVar10 == '\x01') {
    if ((int)uVar28 < 1) goto LAB_1433ed944;
    uVar18 = 0;
    if (uVar28 != 1) {
      fVar34 = *(float *)(*plVar26 + 0x10);
      if (1.0 <= fVar34) {
        fVar34 = 1.0;
      }
      if (fVar34 <= 0.0) {
        fVar34 = 0.0;
      }
      pfVar16 = (float *)(*plVar26 + 0x70);
      uVar19 = 1;
      do {
        fVar32 = *pfVar16;
        if (1.0 <= *pfVar16) {
          fVar32 = 1.0;
        }
        if (fVar32 <= 0.0) {
          fVar32 = 0.0;
        }
        if (fVar34 < fVar32) {
          uVar18 = uVar19 & 0xffffffff;
          fVar34 = fVar32;
        }
        uVar19 = uVar19 + 1;
        pfVar16 = pfVar16 + 0x18;
      } while (uVar24 != uVar19);
      goto LAB_1433ed679;
    }
LAB_1433ed681:
    local_1b8 = CONCAT44(local_1b8._4_4_,1.0 - fVar36);
    lVar22 = 0x2c;
    uVar19 = 0;
    local_1d0 = puVar13;
    local_1c0 = param_3;
    do {
      lVar25 = *plVar26;
      iVar11 = *(int *)(lVar25 + -0x2c + lVar22);
      lVar17 = (longlong)iVar11;
      if (((-1 < lVar17) && (iVar11 < (int)param_1[0x23])) &&
         (1e-05 < *(float *)(lVar25 + -0x1c + lVar22))) {
        plVar2 = *(longlong **)(param_1[0x22] + lVar17 * 0x28);
        if (plVar2 != (longlong *)0x0) {
          plVar26 = (longlong *)(param_1[0x22] + lVar17 * 0x28);
          fVar34 = *(float *)(plVar2 + 0x16) * *(float *)(plVar26 + 4);
          if (((char)local_1ec == '\0') || ((int)plVar2[0x31] == 0)) {
            fVar32 = fVar36;
            if (fVar34 < 0.0) {
              fVar32 = (float)local_1b8;
            }
            fVar33 = (float)(**(code **)(*plVar2 + 0x2b0))();
            fVar33 = fVar33 * (float)(~-(uint)(0.0 <= fVar34) & (uint)(1.0 - fVar30) |
                                     -(uint)(0.0 <= fVar34) & (uint)fVar30);
            local_144 = fVar33;
            fVar37 = (float)(**(code **)(*(longlong *)*plVar26 + 0x2b0))();
            fVar37 = fVar37 * fVar32;
            *(float *)(lVar25 + -0x14 + lVar22) = fVar37;
          }
          else {
            local_144 = *(float *)(lVar25 + -0x10 + lVar22);
            fVar37 = *(float *)(lVar25 + -0x14 + lVar22);
            fVar33 = local_144;
          }
          fVar37 = fVar37 - fVar33;
          fVar34 = fVar34 * **(float **)(local_1e8 + 0x60);
          if (fVar37 * fVar34 < 0.0) {
            local_148 = fVar37;
            fVar32 = (float)(**(code **)(*(longlong *)*plVar26 + 0x2b0))();
            fVar37 = fVar37 + fVar32 * (float)(-(uint)(0.0 < fVar34) & 0x3f800000 |
                                              ~-(uint)(0.0 < fVar34) &
                                              -(uint)(fVar34 < 0.0) & 0xbf800000);
          }
          local_148 = fVar37;
          if ((cVar10 != '\x02') && (cVar10 != '\x01' || uVar18 == uVar19)) {
            FUN_144ae0dc6(*plVar26,&local_144,&local_148,&local_140);
          }
          if (((((float)local_1d8 != fVar35) || (NAN((float)local_1d8) || NAN(fVar35))) &&
              (*(int *)(lVar20 + 0x70) == 2)) && (*(char *)(*plVar26 + 0x179) == '\x01')) {
            fVar34 = *(float *)(lVar25 + -0x1c + lVar22);
            if (1.0 <= fVar34) {
              fVar34 = 1.0;
            }
            if (fVar34 <= 0.0) {
              fVar34 = 0.0;
            }
            local_210 = *(ulonglong *)(local_1e8 + 0x78);
            local_218 = (longlong *)CONCAT71(local_218._1_7_,*(undefined1 *)(local_1e8 + 0x1c));
            FUN_141445440(*plVar26,local_1a8,fVar33);
            FUN_1433d5eb6(lVar20,local_1a8,fVar34);
          }
          *(float *)(lVar25 + -4 + lVar22) = fVar33;
          *(float *)(lVar25 + -8 + lVar22) = fVar37;
          *(undefined1 *)(lVar25 + lVar22) = 1;
          uVar24 = (ulonglong)*(uint *)(local_1e0 + 1);
          plVar26 = local_1e0;
        }
      }
      puVar13 = local_1d0;
      uVar19 = uVar19 + 1;
      lVar22 = lVar22 + 0x60;
    } while ((longlong)uVar19 < (longlong)(int)uVar24);
    uVar18 = uStack_130 & 0xffffffff;
    if (cVar10 != '\x02' && 0 < (int)uStack_130) {
      local_218 = (longlong *)CONCAT44(local_218._4_4_,*(undefined4 *)(local_1e8 + 0x14));
      FUN_14094ddd6(local_1c0,*(undefined1 *)(lVar20 + 0xc9),&local_138,local_1c0 + 0x10);
      uVar18 = uStack_130 & 0xffffffff;
    }
  }
  else {
LAB_1433ed679:
    if (0 < (int)uVar28) goto LAB_1433ed681;
LAB_1433ed944:
    uVar18 = 0;
  }
  FUN_1448262fc(local_138,uVar18);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
LAB_1433ed965:
  iVar11 = *(int *)((longlong)puVar13 + 0x1c);
  FUN_1448d844e(puVar13[2],*(undefined4 *)(puVar13 + 3));
  *(undefined4 *)(puVar13 + 3) = 0;
  if ((iVar11 < 0) && (*(int *)((longlong)puVar13 + 0x1c) != 0)) {
    FUN_1405b2360(local_1b0,0);
  }
  if ((local_f0 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433edd58 FUN_1433edd58 body=11 status=ok
// SIG undefined FUN_1433edd58(void)

void FUN_1433edd58(undefined8 *param_1)

{
  FUN_142400d60(*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1433edd63 FUN_1433edd63 body=67 status=ok
// SIG undefined FUN_1433edd63(void)

void FUN_1433edd63(void)

{
  if (DAT_14caccd69 == '\x01') {
    DAT_14caccd69 = '\0';
  }
  if (DAT_14caccd58 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caccd48 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1433edda6 FUN_1433edda6 body=11 status=ok
// SIG undefined FUN_1433edda6(void)

void FUN_1433edda6(undefined8 *param_1)

{
  FUN_142400cf0(*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1433eddb2 FUN_1433eddb2 body=17 status=ok
// SIG undefined FUN_1433eddb2(void)

longlong FUN_1433eddb2(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x20 + param_1 + 0x150;
}



// FUNCTION 1433eddcc FUN_1433eddcc body=11 status=ok
// SIG undefined FUN_1433eddcc(void)

void FUN_1433eddcc(undefined8 *param_1)

{
  FUN_142400cf0(*param_1,*(undefined4 *)(param_1 + 1));
  return;
}


