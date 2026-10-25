// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1440b1b62 FUN_1440b1b62 body=126 status=ok
// SIG undefined FUN_1440b1b62(void)

void FUN_1440b1b62(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95bc80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440b1bd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440b1bf2 FUN_1440b1bf2 body=271 status=ok
// SIG undefined FUN_1440b1bf2(void)

undefined8 FUN_1440b1bf2(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440b1cfb;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440b1cfb;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440b1cfb:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440b1caf;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1447f69b6(*(longlong *)(param_1 + 0x20) + 0x4f68);
      uVar6 = 1;
      goto LAB_1440b1caf;
    }
  }
  uVar6 = 0;
LAB_1440b1caf:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b1d02 FUN_1440b1d02 body=29 status=ok
// SIG undefined FUN_1440b1d02(void)

undefined8 FUN_1440b1d02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b1e9e FUN_1440b1e9e body=93 status=ok
// SIG undefined FUN_1440b1e9e(void)

void FUN_1440b1e9e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95bcf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b1efc FUN_1440b1efc body=93 status=ok
// SIG undefined FUN_1440b1efc(void)

void FUN_1440b1efc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95bcf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b1f5a FUN_1440b1f5a body=126 status=ok
// SIG undefined FUN_1440b1f5a(void)

void FUN_1440b1f5a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95bcf0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440b1fc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440b1fea FUN_1440b1fea body=271 status=ok
// SIG undefined FUN_1440b1fea(void)

undefined8 FUN_1440b1fea(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440b20f3;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440b20f3;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440b20f3:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440b20a7;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1447f69b6(*(longlong *)(param_1 + 0x20) + 0x4f88);
      uVar6 = 1;
      goto LAB_1440b20a7;
    }
  }
  uVar6 = 0;
LAB_1440b20a7:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b20fa FUN_1440b20fa body=29 status=ok
// SIG undefined FUN_1440b20fa(void)

undefined8 FUN_1440b20fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b2296 FUN_1440b2296 body=93 status=ok
// SIG undefined FUN_1440b2296(void)

void FUN_1440b2296(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95bd60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b22f4 FUN_1440b22f4 body=93 status=ok
// SIG undefined FUN_1440b22f4(void)

void FUN_1440b22f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95bd60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b2352 FUN_1440b2352 body=126 status=ok
// SIG undefined FUN_1440b2352(void)

void FUN_1440b2352(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95bd60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440b23c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440b23e2 FUN_1440b23e2 body=271 status=ok
// SIG undefined FUN_1440b23e2(void)

undefined8 FUN_1440b23e2(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440b24eb;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440b24eb;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440b24eb:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440b249f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1447f69b6(*(longlong *)(param_1 + 0x20) + 0x4fa8);
      uVar6 = 1;
      goto LAB_1440b249f;
    }
  }
  uVar6 = 0;
LAB_1440b249f:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b24f2 FUN_1440b24f2 body=31 status=ok
// SIG undefined FUN_1440b24f2(void)

undefined8 FUN_1440b24f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b25b4 FUN_1440b25b4 body=31 status=ok
// SIG undefined FUN_1440b25b4(void)

undefined8 FUN_1440b25b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b2622 FUN_1440b2622 body=29 status=ok
// SIG undefined FUN_1440b2622(void)

undefined8 FUN_1440b2622(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b27be FUN_1440b27be body=93 status=ok
// SIG undefined FUN_1440b27be(void)

void FUN_1440b27be(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95bf90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b281c FUN_1440b281c body=93 status=ok
// SIG undefined FUN_1440b281c(void)

void FUN_1440b281c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95bf90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b287a FUN_1440b287a body=126 status=ok
// SIG undefined FUN_1440b287a(void)

void FUN_1440b287a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95bf90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440b28e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440b28f8 FUN_1440b28f8 body=66 status=ok
// SIG undefined FUN_1440b28f8(void)

void FUN_1440b28f8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1440b2a54(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b293c FUN_1440b293c body=279 status=ok
// SIG undefined FUN_1440b293c(void)

undefined8 FUN_1440b293c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440b2a4d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440b2a4d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440b2a4d:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440b2a01;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1440b2a54(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_1440b2a01;
    }
  }
  uVar6 = 0;
LAB_1440b2a01:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b2a54 FUN_1440b2a54 body=1846 status=ok
// SIG undefined FUN_1440b2a54(void)

void FUN_1440b2a54(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  longlong local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined8 uStack_214;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined **local_1a8;
  undefined *local_1a0;
  longlong local_198;
  ulonglong uStack_190;
  undefined4 local_188;
  undefined1 local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined **local_88;
  undefined *local_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  param_2 = (longlong *)*param_2;
  lVar1 = *param_1;
  lVar5 = FUN_1447210f0(lVar1);
  if (lVar5 != 0) {
    *(float *)(lVar1 + 0x4d50) = (float)*(double *)(lVar5 + 0x6d8);
  }
  if ((param_2 != (longlong *)0x0) && (*(char *)(lVar1 + 0x178) == '\x03')) {
    uVar9 = 0;
    local_188 = 0;
    local_184 = 0;
    local_180 = 0;
    local_178 = 0x3002;
    local_170 = 0;
    local_138 = 0;
    local_130 = 0x200000000;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_108 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_100 = DAT_14c8464f0;
    local_e8 = DAT_14c8464f0;
    local_e0 = 0;
    local_d8 = 0x3006;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_b0 = (undefined4)DAT_14c8464e0;
    uStack_ac = DAT_14c8464e0._4_4_;
    uStack_a8 = (undefined4)DAT_14c8464e8;
    uStack_a4 = DAT_14c8464e8._4_4_;
    local_a0 = DAT_14c8464f0;
    local_98 = 0;
    local_94 = 0;
    local_90 = 0;
    local_8c = 0;
    local_f8 = local_110;
    uStack_f0 = uStack_108;
    FUN_1405c5fa2();
    local_80 = &DAT_14cb769e8;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = &PTR_FUN_14b0394b0;
    local_68 = 0x1000000;
    local_280 = 0;
    local_278 = 0x3002;
    local_270 = 0;
    local_238 = 0;
    local_230 = 0x200000000;
    local_228 = 0;
    uStack_220 = 0;
    uStack_21c = 0;
    uStack_218 = 0;
    uStack_214 = 0;
    local_208 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_200 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_1f8 = DAT_14c8464f0;
    local_1e0 = DAT_14c8464f0;
    local_1d8 = (undefined4)DAT_14c8464e0;
    uStack_1d4 = DAT_14c8464e0._4_4_;
    uStack_1d0 = (undefined4)DAT_14c8464e8;
    uStack_1cc = DAT_14c8464e8._4_4_;
    local_1c8 = DAT_14c8464f0;
    local_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1f0 = local_208;
    uStack_1e8 = uStack_200;
    FUN_1405c5fa2();
    local_1a0 = &DAT_14cb769e8;
    local_198 = 0;
    uStack_190 = 0;
    local_1a8 = &PTR_FUN_14b0394b0;
    lVar5 = (**(code **)(*param_2 + 0xf8))(param_2);
    uVar4 = 0;
    if (lVar5 != 0) {
      uVar4 = *(uint *)(lVar5 + 0xc);
      uVar9 = (ulonglong)uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      uVar4 = *(uint *)(lVar5 + 0x10);
      if (*(uint *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        uVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar8);
        }
        LOCK();
        uVar4 = *(uint *)(lVar5 + 0x10);
        bVar10 = uVar4 == 0;
        if (bVar10) {
          *(uint *)(lVar5 + 0x10) = uVar8;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar4 = uVar8;
        }
      }
    }
    plVar6 = (longlong *)(**(code **)(*param_2 + 0xd8))(param_2);
    if ((longlong)*(int *)(lVar1 + 0x53b8) != 0) {
      lVar5 = 0;
      do {
        if ((*(int *)(*(longlong *)(lVar1 + 0x53b0) + 8 + lVar5) != 0) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x53b0) + lVar5) != 0)) {
          uVar11 = (**(code **)(*param_2 + 0x140))(param_2,0);
          bVar10 = true;
          FUN_14095f044(&local_188,uVar11,1,param_2);
          FUN_14187b2d4(&local_280);
          if ((int)param_2[0xa2] == 2) {
            FUN_1440b318c(lVar1 + 0x53b0,uVar9 | (ulonglong)uVar4 << 0x20,&local_280,&local_188);
          }
          goto LAB_1440b2d1c;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(lVar1 + 0x53b8) * 0x10 != lVar5);
    }
    bVar10 = false;
LAB_1440b2d1c:
    if (0 < (int)plVar6[7]) {
      plVar7 = plVar6;
      if ((longlong *)plVar6[6] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar6[6];
      }
      if ((*plVar7 != 0) && ((int)plVar7[1] - 1U < 0xfffffffe)) {
        if ((longlong)*(int *)(lVar1 + 0x5400) != 0) {
          lVar5 = 0;
          do {
            if ((*(int *)(*(longlong *)(lVar1 + 0x53f8) + 8 + lVar5) != 0) &&
               (*(longlong *)(*(longlong *)(lVar1 + 0x53f8) + lVar5) != 0)) {
              local_298 = DAT_14cbc1d68;
              local_290 = 0x3003;
              local_288 = 0;
              cVar3 = FUN_140334510(plVar6,&local_298,0);
              if (cVar3 != '\0') {
                if (!bVar10) {
                  uVar11 = (**(code **)(*param_2 + 0x140))(param_2,0);
                  bVar10 = true;
                  FUN_14095f044(&local_188,uVar11,1,param_2);
                  FUN_14187b2d4(&local_280,param_2);
                }
                FUN_1440b318c(lVar1 + 0x53f8,uVar9 | (ulonglong)uVar4 << 0x20,&local_280,&local_188)
                ;
              }
              break;
            }
            lVar5 = lVar5 + 0x10;
          } while ((longlong)*(int *)(lVar1 + 0x5400) * 0x10 != lVar5);
        }
        if ((longlong)*(int *)(lVar1 + 0x5428) != 0) {
          lVar5 = 0;
          do {
            if ((*(int *)(*(longlong *)(lVar1 + 0x5420) + 8 + lVar5) != 0) &&
               (*(longlong *)(*(longlong *)(lVar1 + 0x5420) + lVar5) != 0)) {
              local_298 = DAT_14cbc1d70;
              local_290 = 0x3003;
              local_288 = 0;
              cVar3 = FUN_140334510(plVar6,&local_298,0);
              if (cVar3 != '\0') {
                if (!bVar10) {
                  uVar11 = (**(code **)(*param_2 + 0x140))(param_2,0);
                  bVar10 = true;
                  FUN_14095f044(&local_188,uVar11,1,param_2);
                  FUN_14187b2d4(&local_280,param_2);
                }
                FUN_1440b318c(lVar1 + 0x5420,uVar9 | (ulonglong)uVar4 << 0x20,&local_280,&local_188)
                ;
              }
              break;
            }
            lVar5 = lVar5 + 0x10;
          } while ((longlong)*(int *)(lVar1 + 0x5428) * 0x10 != lVar5);
        }
        if ((longlong)*(int *)(lVar1 + 0x5448) != 0) {
          lVar5 = 0;
          do {
            if ((*(int *)(*(longlong *)(lVar1 + 0x5440) + 8 + lVar5) != 0) &&
               (*(longlong *)(*(longlong *)(lVar1 + 0x5440) + lVar5) != 0)) {
              local_298 = DAT_14cbc1d78;
              local_290 = 0x3003;
              local_288 = 0;
              cVar3 = FUN_140334510(plVar6,&local_298,0);
              if (cVar3 != '\0') {
                if (!bVar10) {
                  uVar11 = (**(code **)(*param_2 + 0x140))(param_2,0);
                  FUN_14095f044(&local_188,uVar11,1,param_2);
                  FUN_14187b2d4(&local_280,param_2);
                }
                FUN_1440b318c(lVar1 + 0x5440,uVar9 | (ulonglong)uVar4 << 0x20,&local_280,&local_188)
                ;
              }
              break;
            }
            lVar5 = lVar5 + 0x10;
          } while ((longlong)*(int *)(lVar1 + 0x5448) * 0x10 != lVar5);
        }
      }
    }
    local_1a8 = (undefined **)&DAT_14a171d50;
    uVar9 = uStack_190 >> 0x20;
    uStack_190 = uStack_190 & 0xffffffff00000000;
    if ((int)uVar9 != 0) {
      FUN_140115c12(&local_198,0);
    }
    local_1a0 = (undefined *)0x0;
    if (local_198 != 0) {
      FUN_1400020a8();
    }
    if (local_1b8 != 0) {
      FUN_1400020a8();
    }
    if (local_238 != 0) {
      FUN_1400020a8();
    }
    local_88 = (undefined **)&DAT_14a171d50;
    uVar9 = uStack_70 >> 0x20;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    if ((int)uVar9 != 0) {
      FUN_140115c12(&local_78,0);
    }
    local_80 = (undefined *)0x0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
    if (local_138 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440b318c FUN_1440b318c body=187 status=ok
// SIG undefined FUN_1440b318c(void)

void FUN_1440b318c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1440b322f;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1440b322f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1440b3248 FUN_1440b3248 body=29 status=ok
// SIG undefined FUN_1440b3248(void)

undefined8 FUN_1440b3248(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b33e4 FUN_1440b33e4 body=93 status=ok
// SIG undefined FUN_1440b33e4(void)

void FUN_1440b33e4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95c000;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b3442 FUN_1440b3442 body=93 status=ok
// SIG undefined FUN_1440b3442(void)

void FUN_1440b3442(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95c000;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b34a0 FUN_1440b34a0 body=126 status=ok
// SIG undefined FUN_1440b34a0(void)

void FUN_1440b34a0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95c000;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440b350f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440b351e FUN_1440b351e body=66 status=ok
// SIG undefined FUN_1440b351e(void)

void FUN_1440b351e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1440b367a(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b3562 FUN_1440b3562 body=279 status=ok
// SIG undefined FUN_1440b3562(void)

undefined8 FUN_1440b3562(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440b3673;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440b3673;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440b3673:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440b3627;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1440b367a(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_1440b3627;
    }
  }
  uVar6 = 0;
LAB_1440b3627:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b367a FUN_1440b367a body=3547 status=ok
// SIG undefined FUN_1440b367a(void)

void FUN_1440b367a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  wchar_t *local_1d8;
  code *local_1d0;
  undefined1 *local_1c8;
  code **local_1c0;
  code *local_1b8;
  code *local_1b0;
  code *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined1 local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined **local_88;
  undefined *local_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  param_2 = (longlong *)*param_2;
  if (((param_2 != (longlong *)0x0) && (lVar1 = *param_1, *(char *)(lVar1 + 0x178) == '\x03')) &&
     (plVar7 = (longlong *)(**(code **)(*param_2 + 0xd8))(param_2), 0 < (int)plVar7[7])) {
    plVar9 = (longlong *)plVar7[6];
    if ((longlong *)plVar7[6] == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    if ((*plVar9 != 0) && ((int)plVar9[1] - 1U < 0xfffffffe)) {
      lVar8 = (**(code **)(*param_2 + 0xf8))(param_2);
      bVar3 = false;
      uVar11 = 0;
      uVar10 = 0;
      if (lVar8 != 0) {
        uVar11 = *(uint *)(lVar8 + 0xc);
        if ((int)uVar11 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        uVar10 = (ulonglong)*(uint *)(lVar8 + 0x10);
        if (*(uint *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          uVar12 = DAT_14c964868 + 1;
          bVar13 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar13) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar12);
          }
          LOCK();
          uVar6 = *(uint *)(lVar8 + 0x10);
          bVar13 = uVar6 == 0;
          if (bVar13) {
            *(uint *)(lVar8 + 0x10) = uVar12;
            uVar6 = 0;
          }
          UNLOCK();
          if (bVar13) {
            uVar6 = uVar12;
          }
          uVar10 = (ulonglong)uVar6;
        }
      }
      local_188 = 0;
      local_184 = 0;
      local_180 = 0;
      local_178 = 0x3002;
      local_170 = 0;
      local_138 = 0;
      local_130 = 0x200000000;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      local_110 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_108 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_100 = DAT_14c8464f0;
      local_e8 = DAT_14c8464f0;
      local_e0 = 0;
      local_d8 = 0x3006;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_b0 = (undefined4)DAT_14c8464e0;
      uStack_ac = DAT_14c8464e0._4_4_;
      uStack_a8 = (undefined4)DAT_14c8464e8;
      uStack_a4 = DAT_14c8464e8._4_4_;
      local_a0 = DAT_14c8464f0;
      local_98 = 0;
      local_94 = 0;
      local_90 = 0;
      local_8c = 0;
      local_f8 = local_110;
      uStack_f0 = uStack_108;
      FUN_1405c5fa2();
      local_80 = &DAT_14cb769e8;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = &PTR_FUN_14b0394b0;
      local_68 = 0x1000000;
      if ((longlong)*(int *)(lVar1 + 0x5468) != 0) {
        lVar8 = 0;
        do {
          if ((*(int *)(*(longlong *)(lVar1 + 0x5460) + 8 + lVar8) != 0) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x5460) + lVar8) != 0)) {
            lVar8 = (**(code **)(*param_2 + 0xf8))(param_2);
            if (lVar8 == 0) {
LAB_1440b38f4:
              uVar5 = 0;
            }
            else {
              if (DAT_14cb56270 == 0) {
                local_1c0 = &local_1a0;
                local_1a0 = FUN_1449e2820;
                local_1b0 = FUN_14081d0ea;
                local_1b8 = FUN_1427b09ee;
                local_1c8 = &LAB_148630fef;
                local_1d0 = FUN_1464b6a91;
                local_1d8 = L"Engine";
                local_1e0 = 0;
                local_1e8 = 0x10004001;
                local_1f0 = 8;
                local_1f8 = 0x28;
                FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,
                              &DAT_148630fee);
              }
              plVar9 = (longlong *)FUN_144718840(lVar8,DAT_14cb56270);
              if (plVar9 == (longlong *)0x0) goto LAB_1440b38f4;
              uVar5 = (**(code **)(*plVar9 + 0x40))(plVar9);
            }
            uVar14 = (**(code **)(*param_2 + 0x140))(param_2,0);
            FUN_14095f044(&local_188,uVar14,uVar5,param_2);
            FUN_1415097ba(lVar1 + 0x5460,(ulonglong)uVar11 | uVar10 << 0x20,&local_188);
            bVar3 = true;
            goto LAB_1440b3938;
          }
          lVar8 = lVar8 + 0x10;
        } while ((longlong)*(int *)(lVar1 + 0x5468) * 0x10 != lVar8);
        bVar3 = false;
      }
LAB_1440b3938:
      if ((longlong)*(int *)(lVar1 + 0x5490) != 0) {
        lVar8 = 0;
        do {
          if ((*(int *)(*(longlong *)(lVar1 + 0x5488) + 8 + lVar8) != 0) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x5488) + lVar8) != 0)) {
            lVar8 = (**(code **)(*param_2 + 0xe0))(param_2);
            if ((lVar8 == 0) ||
               (lVar8 = (**(code **)(*param_2 + 0xe0))(param_2), *(char *)(lVar8 + 0x39) == '\0')) {
              if (!bVar3) {
                lVar8 = (**(code **)(*param_2 + 0xf8))(param_2);
                if (lVar8 == 0) {
LAB_1440b39e2:
                  uVar5 = 0;
                }
                else {
                  if (DAT_14cb56270 == 0) {
                    local_1c0 = &local_1a0;
                    local_1a0 = FUN_1449e2820;
                    local_1b0 = FUN_14081d0ea;
                    local_1b8 = FUN_1427b09ee;
                    local_1c8 = &LAB_148630fef;
                    local_1d0 = FUN_1464b6a91;
                    local_1d8 = L"Engine";
                    local_1e0 = 0;
                    local_1e8 = 0x10004001;
                    local_1f0 = 8;
                    local_1f8 = 0x28;
                    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,
                                  &DAT_148630fee);
                  }
                  plVar9 = (longlong *)FUN_144718840(lVar8,DAT_14cb56270);
                  if (plVar9 == (longlong *)0x0) goto LAB_1440b39e2;
                  uVar5 = (**(code **)(*plVar9 + 0x40))(plVar9);
                }
                uVar14 = (**(code **)(*param_2 + 0x140))(param_2,0);
                FUN_14095f044(&local_188,uVar14,uVar5,param_2);
                bVar3 = true;
              }
              FUN_1415097ba(lVar1 + 0x5488,(ulonglong)uVar11 | uVar10 << 0x20,&local_188);
            }
            break;
          }
          lVar8 = lVar8 + 0x10;
        } while ((longlong)*(int *)(lVar1 + 0x5490) * 0x10 != lVar8);
      }
      if ((longlong)*(int *)(lVar1 + 0x54b0) != 0) {
        lVar8 = 0;
        do {
          if ((*(int *)(*(longlong *)(lVar1 + 0x54a8) + 8 + lVar8) != 0) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x54a8) + lVar8) != 0)) {
            local_1a0 = DAT_14cbc1d68;
            local_198 = 0x3003;
            local_190 = 0;
            cVar4 = FUN_140334510(plVar7,&local_1a0,0);
            if (cVar4 != '\0') {
              if (!bVar3) {
                lVar8 = (**(code **)(*param_2 + 0xf8))(param_2);
                if (lVar8 == 0) {
LAB_1440b3ae3:
                  uVar5 = 0;
                }
                else {
                  if (DAT_14cb56270 == 0) {
                    local_1a0 = FUN_1449e2820;
                    local_1b0 = FUN_14081d0ea;
                    local_1b8 = FUN_1427b09ee;
                    local_1c8 = &LAB_148630fef;
                    local_1d0 = FUN_1464b6a91;
                    local_1d8 = L"Engine";
                    local_1e0 = 0;
                    local_1e8 = 0x10004001;
                    local_1f0 = 8;
                    local_1f8 = 0x28;
                    local_1c0 = &local_1a0;
                    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,
                                  &DAT_148630fee);
                  }
                  plVar9 = (longlong *)FUN_144718840(lVar8,DAT_14cb56270);
                  if (plVar9 == (longlong *)0x0) goto LAB_1440b3ae3;
                  uVar5 = (**(code **)(*plVar9 + 0x40))(plVar9);
                }
                uVar14 = (**(code **)(*param_2 + 0x140))(param_2,0);
                FUN_14095f044(&local_188,uVar14,uVar5,param_2);
                bVar3 = true;
              }
              FUN_1415097ba(lVar1 + 0x54a8,(ulonglong)uVar11 | uVar10 << 0x20,&local_188);
            }
            break;
          }
          lVar8 = lVar8 + 0x10;
        } while ((longlong)*(int *)(lVar1 + 0x54b0) * 0x10 != lVar8);
      }
      if ((longlong)*(int *)(lVar1 + 0x54d0) != 0) {
        lVar8 = 0;
        do {
          if ((*(int *)(*(longlong *)(lVar1 + 0x54c8) + 8 + lVar8) != 0) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x54c8) + lVar8) != 0)) {
            local_1a0 = DAT_14cbc1d70;
            local_198 = 0x3003;
            local_190 = 0;
            cVar4 = FUN_140334510(plVar7,&local_1a0,0);
            if (cVar4 != '\0') {
              if (!bVar3) {
                lVar8 = (**(code **)(*param_2 + 0xf8))(param_2);
                if (lVar8 == 0) {
LAB_1440b3be4:
                  uVar5 = 0;
                }
                else {
                  if (DAT_14cb56270 == 0) {
                    local_1a0 = FUN_1449e2820;
                    local_1b0 = FUN_14081d0ea;
                    local_1b8 = FUN_1427b09ee;
                    local_1c8 = &LAB_148630fef;
                    local_1d0 = FUN_1464b6a91;
                    local_1d8 = L"Engine";
                    local_1e0 = 0;
                    local_1e8 = 0x10004001;
                    local_1f0 = 8;
                    local_1f8 = 0x28;
                    local_1c0 = &local_1a0;
                    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,
                                  &DAT_148630fee);
                  }
                  plVar9 = (longlong *)FUN_144718840(lVar8,DAT_14cb56270);
                  if (plVar9 == (longlong *)0x0) goto LAB_1440b3be4;
                  uVar5 = (**(code **)(*plVar9 + 0x40))(plVar9);
                }
                uVar14 = (**(code **)(*param_2 + 0x140))(param_2,0);
                FUN_14095f044(&local_188,uVar14,uVar5,param_2);
                bVar3 = true;
              }
              FUN_1415097ba(lVar1 + 0x54c8,(ulonglong)uVar11 | uVar10 << 0x20,&local_188);
            }
            break;
          }
          lVar8 = lVar8 + 0x10;
        } while ((longlong)*(int *)(lVar1 + 0x54d0) * 0x10 != lVar8);
      }
      if ((longlong)*(int *)(lVar1 + 0x54f0) != 0) {
        lVar8 = 0;
        do {
          if ((*(int *)(*(longlong *)(lVar1 + 0x54e8) + 8 + lVar8) != 0) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x54e8) + lVar8) != 0)) {
            local_1a0 = DAT_14cbc1d78;
            local_198 = 0x3003;
            local_190 = 0;
            cVar4 = FUN_140334510(plVar7,&local_1a0,0);
            if (cVar4 != '\0') {
              if (!bVar3) {
                lVar8 = (**(code **)(*param_2 + 0xf8))(param_2);
                if (lVar8 == 0) {
LAB_1440b3ce5:
                  uVar5 = 0;
                }
                else {
                  if (DAT_14cb56270 == 0) {
                    local_1a0 = FUN_1449e2820;
                    local_1b0 = FUN_14081d0ea;
                    local_1b8 = FUN_1427b09ee;
                    local_1c8 = &LAB_148630fef;
                    local_1d0 = FUN_1464b6a91;
                    local_1d8 = L"Engine";
                    local_1e0 = 0;
                    local_1e8 = 0x10004001;
                    local_1f0 = 8;
                    local_1f8 = 0x28;
                    local_1c0 = &local_1a0;
                    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,
                                  &DAT_148630fee);
                  }
                  plVar9 = (longlong *)FUN_144718840(lVar8,DAT_14cb56270);
                  if (plVar9 == (longlong *)0x0) goto LAB_1440b3ce5;
                  uVar5 = (**(code **)(*plVar9 + 0x40))(plVar9);
                }
                uVar14 = (**(code **)(*param_2 + 0x140))(param_2,0);
                FUN_14095f044(&local_188,uVar14,uVar5,param_2);
                bVar3 = true;
              }
              FUN_1415097ba(lVar1 + 0x54e8,(ulonglong)uVar11 | uVar10 << 0x20,&local_188);
            }
            break;
          }
          lVar8 = lVar8 + 0x10;
        } while ((longlong)*(int *)(lVar1 + 0x54f0) * 0x10 != lVar8);
      }
      if ((longlong)*(int *)(lVar1 + 0x5510) != 0) {
        lVar8 = 0;
        do {
          if ((*(int *)(*(longlong *)(lVar1 + 0x5508) + 8 + lVar8) != 0) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x5508) + lVar8) != 0)) {
            local_1a0 = DAT_14cbc1d80;
            local_198 = 0x3003;
            local_190 = 0;
            cVar4 = FUN_140334510(plVar7,&local_1a0,0);
            if (cVar4 != '\0') {
              if (!bVar3) {
                lVar8 = (**(code **)(*param_2 + 0xf8))(param_2);
                if (lVar8 == 0) {
LAB_1440b3de6:
                  uVar5 = 0;
                }
                else {
                  if (DAT_14cb56270 == 0) {
                    local_1a0 = FUN_1449e2820;
                    local_1b0 = FUN_14081d0ea;
                    local_1b8 = FUN_1427b09ee;
                    local_1c8 = &LAB_148630fef;
                    local_1d0 = FUN_1464b6a91;
                    local_1d8 = L"Engine";
                    local_1e0 = 0;
                    local_1e8 = 0x10004001;
                    local_1f0 = 8;
                    local_1f8 = 0x28;
                    local_1c0 = &local_1a0;
                    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,
                                  &DAT_148630fee);
                  }
                  plVar7 = (longlong *)FUN_144718840(lVar8,DAT_14cb56270);
                  if (plVar7 == (longlong *)0x0) goto LAB_1440b3de6;
                  uVar5 = (**(code **)(*plVar7 + 0x40))(plVar7);
                }
                uVar14 = (**(code **)(*param_2 + 0x140))(param_2,0);
                FUN_14095f044(&local_188,uVar14,uVar5,param_2);
                bVar3 = true;
              }
              FUN_1415097ba(lVar1 + 0x5508,(ulonglong)uVar11 | uVar10 << 0x20,&local_188);
            }
            break;
          }
          lVar8 = lVar8 + 0x10;
        } while ((longlong)*(int *)(lVar1 + 0x5510) * 0x10 != lVar8);
      }
      if ((longlong)*(int *)(lVar1 + 0x5580) != 0) {
        lVar8 = 0;
        do {
          if ((*(int *)(*(longlong *)(lVar1 + 0x5578) + 8 + lVar8) != 0) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x5578) + lVar8) != 0)) {
            lVar8 = (**(code **)(*param_2 + 8))(param_2);
            if ((*(byte *)(lVar8 + 0x7c) & 1) != 0) {
              if (!bVar3) {
                lVar8 = (**(code **)(*param_2 + 0xf8))(param_2);
                if (lVar8 == 0) {
LAB_1440b3ec2:
                  uVar5 = 0;
                }
                else {
                  if (DAT_14cb56270 == 0) {
                    local_1c0 = &local_1a0;
                    local_1a0 = FUN_1449e2820;
                    local_1b0 = FUN_14081d0ea;
                    local_1b8 = FUN_1427b09ee;
                    local_1c8 = &LAB_148630fef;
                    local_1d0 = FUN_1464b6a91;
                    local_1d8 = L"Engine";
                    local_1e0 = 0;
                    local_1e8 = 0x10004001;
                    local_1f0 = 8;
                    local_1f8 = 0x28;
                    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,
                                  &DAT_148630fee);
                  }
                  plVar7 = (longlong *)FUN_144718840(lVar8,DAT_14cb56270);
                  if (plVar7 == (longlong *)0x0) goto LAB_1440b3ec2;
                  uVar5 = (**(code **)(*plVar7 + 0x40))(plVar7);
                }
                uVar14 = (**(code **)(*param_2 + 0x140))(param_2,0);
                FUN_14095f044(&local_188,uVar14,uVar5,param_2);
              }
              FUN_1415097ba(lVar1 + 0x5578,(ulonglong)uVar11 | uVar10 << 0x20,&local_188);
            }
            break;
          }
          lVar8 = lVar8 + 0x10;
        } while ((longlong)*(int *)(lVar1 + 0x5580) * 0x10 != lVar8);
      }
      local_88 = (undefined **)&DAT_14a171d50;
      uVar10 = uStack_70 >> 0x20;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      if ((int)uVar10 != 0) {
        FUN_140115c12(&local_78,0);
      }
      local_80 = (undefined *)0x0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
      if (local_138 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440b4456 FUN_1440b4456 body=29 status=ok
// SIG undefined FUN_1440b4456(void)

undefined8 FUN_1440b4456(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b45f2 FUN_1440b45f2 body=93 status=ok
// SIG undefined FUN_1440b45f2(void)

void FUN_1440b45f2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95c070;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b4650 FUN_1440b4650 body=93 status=ok
// SIG undefined FUN_1440b4650(void)

void FUN_1440b4650(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95c070;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b46ae FUN_1440b46ae body=126 status=ok
// SIG undefined FUN_1440b46ae(void)

void FUN_1440b46ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95c070;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440b471d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440b472c FUN_1440b472c body=66 status=ok
// SIG undefined FUN_1440b472c(void)

void FUN_1440b472c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1440b4888(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b4770 FUN_1440b4770 body=279 status=ok
// SIG undefined FUN_1440b4770(void)

undefined8 FUN_1440b4770(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440b4881;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440b4881;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440b4881:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440b4835;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1440b4888(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_1440b4835;
    }
  }
  uVar6 = 0;
LAB_1440b4835:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b4888 FUN_1440b4888 body=2169 status=ok
// SIG undefined FUN_1440b4888(void)

void FUN_1440b4888(longlong *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  longlong local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined **local_88;
  undefined *local_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  param_2 = (longlong *)*param_2;
  if ((param_2 != (longlong *)0x0) &&
     (param_1 = (longlong *)*param_1, (char)param_1[0x2f] == '\x03')) {
    bVar12 = false;
    local_1a0 = 0;
    local_19c = 0;
    local_198 = 0;
    local_190 = 0x3002;
    local_188 = 0;
    local_150 = 0;
    local_148 = 0x200000000;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_118 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_110 = DAT_14c8464f0;
    local_f8 = DAT_14c8464f0;
    local_e0 = DAT_14c8464f0;
    local_d8 = 0;
    local_d0 = 0x3006;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = (undefined4)DAT_14c8464e0;
    uStack_a4 = DAT_14c8464e0._4_4_;
    uStack_a0 = (undefined4)DAT_14c8464e8;
    uStack_9c = DAT_14c8464e8._4_4_;
    local_98 = DAT_14c8464f0;
    local_90 = 0;
    local_8c = 0;
    local_108 = local_120;
    uStack_100 = uStack_118;
    local_f0 = local_120;
    uStack_e8 = uStack_118;
    FUN_1405c5fa2();
    local_80 = &DAT_14cb769e8;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = &PTR_FUN_14b0394b0;
    local_68 = 0x3f800000;
    cVar4 = (**(code **)(*param_2 + 0x38))(param_2);
    if (cVar4 != '\0') {
      if ((longlong)(int)param_1[0xa2a] != 0) {
        lVar9 = 0;
        do {
          if ((*(int *)(param_1[0xa29] + 8 + lVar9) != 0) &&
             (*(longlong *)(param_1[0xa29] + lVar9) != 0)) {
            uVar13 = (**(code **)(*param_2 + 0x140))(param_2,0);
            FUN_14095f42a(&local_1a0,uVar13,param_2);
            FUN_1440b5102(param_1 + 0xa29);
            bVar12 = true;
            goto LAB_1440b4a66;
          }
          lVar9 = lVar9 + 0x10;
        } while ((longlong)(int)param_1[0xa2a] * 0x10 != lVar9);
      }
      bVar12 = false;
    }
LAB_1440b4a66:
    fVar1 = *(float *)(param_2 + 0xac);
    fVar2 = *(float *)((longlong)param_2 + 0x564);
    lVar9 = (**(code **)(*param_1 + 0x5d8))(param_1);
    if (lVar9 != 0) {
      if (!bVar12) {
        uVar13 = (**(code **)(*param_2 + 0x140))(param_2,0);
        FUN_14095f42a(&local_1a0,uVar13,param_2);
        bVar12 = true;
      }
      FUN_1440b5102(param_1 + 0xab3);
    }
    plVar6 = (longlong *)(**(code **)(*param_2 + 0xd8))(param_2);
    if (0 < (int)plVar6[7]) {
      plVar7 = (longlong *)plVar6[6];
      if ((longlong *)plVar6[6] == (longlong *)0x0) {
        plVar7 = plVar6;
      }
      if ((*plVar7 != 0) && ((int)plVar7[1] - 1U < 0xfffffffe)) {
        if ((longlong)(int)param_1[0xa2e] != 0) {
          lVar9 = 0;
          do {
            if ((*(int *)(param_1[0xa2d] + 8 + lVar9) != 0) &&
               (*(longlong *)(param_1[0xa2d] + lVar9) != 0)) {
              if (!bVar12) {
                uVar13 = (**(code **)(*param_2 + 0x140))(param_2,0);
                FUN_14095f42a(&local_1a0,uVar13,param_2);
                bVar12 = true;
              }
              FUN_1440b5102(param_1 + 0xa2d);
              break;
            }
            lVar9 = lVar9 + 0x10;
          } while ((longlong)(int)param_1[0xa2e] * 0x10 != lVar9);
        }
        if ((0.0 < fVar1) && ((longlong)(int)param_1[0xa3e] != 0)) {
          lVar9 = 0;
          do {
            if ((*(int *)(param_1[0xa3d] + 8 + lVar9) != 0) &&
               (*(longlong *)(param_1[0xa3d] + lVar9) != 0)) {
              if (!bVar12) {
                uVar13 = (**(code **)(*param_2 + 0x140))(param_2,0);
                FUN_14095f42a(&local_1a0,uVar13,param_2);
                bVar12 = true;
              }
              FUN_1440b5102(param_1 + 0xa3d);
              break;
            }
            lVar9 = lVar9 + 0x10;
          } while ((longlong)(int)param_1[0xa3e] * 0x10 != lVar9);
        }
        if ((0.0 < fVar2) && ((longlong)(int)param_1[0xa4e] != 0)) {
          lVar9 = 0;
          do {
            if ((*(int *)(param_1[0xa4d] + 8 + lVar9) != 0) &&
               (*(longlong *)(param_1[0xa4d] + lVar9) != 0)) {
              if (!bVar12) {
                uVar13 = (**(code **)(*param_2 + 0x140))(param_2,0);
                FUN_14095f42a(&local_1a0,uVar13,param_2);
                bVar12 = true;
              }
              FUN_1440b5102(param_1 + 0xa4d,&local_1a0);
              break;
            }
            lVar9 = lVar9 + 0x10;
          } while ((longlong)(int)param_1[0xa4e] * 0x10 != lVar9);
        }
        local_1b8 = DAT_14cbc1d68;
        local_1b0 = 0x3003;
        local_1a8 = 0;
        cVar4 = FUN_140334510(plVar6,&local_1b8,0);
        if (cVar4 != '\0') {
          if ((longlong)(int)param_1[0xa32] != 0) {
            lVar9 = 0;
            do {
              if ((*(int *)(param_1[0xa31] + 8 + lVar9) != 0) &&
                 (*(longlong *)(param_1[0xa31] + lVar9) != 0)) {
                if (!bVar12) {
                  uVar13 = (**(code **)(*param_2 + 0x140))(param_2,0);
                  FUN_14095f42a(&local_1a0,uVar13,param_2);
                  bVar12 = true;
                }
                FUN_1440b5102(param_1 + 0xa31);
                break;
              }
              lVar9 = lVar9 + 0x10;
            } while ((longlong)(int)param_1[0xa32] * 0x10 != lVar9);
          }
          if ((0.0 < fVar1) && ((longlong)(int)param_1[0xa42] != 0)) {
            lVar9 = 0;
            do {
              if ((*(int *)(param_1[0xa41] + 8 + lVar9) != 0) &&
                 (*(longlong *)(param_1[0xa41] + lVar9) != 0)) {
                if (!bVar12) {
                  uVar13 = (**(code **)(*param_2 + 0x140))(param_2,0);
                  FUN_14095f42a(&local_1a0,uVar13,param_2);
                  bVar12 = true;
                }
                FUN_1440b5102(param_1 + 0xa41,&local_1a0);
                break;
              }
              lVar9 = lVar9 + 0x10;
            } while ((longlong)(int)param_1[0xa42] * 0x10 != lVar9);
          }
        }
        local_1b8 = DAT_14cbc1d70;
        local_1b0 = 0x3003;
        local_1a8 = 0;
        cVar4 = FUN_140334510(plVar6,&local_1b8,0);
        if (cVar4 != '\0') {
          if ((longlong)(int)param_1[0xa36] != 0) {
            lVar9 = 0;
            do {
              if ((*(int *)(param_1[0xa35] + 8 + lVar9) != 0) &&
                 (*(longlong *)(param_1[0xa35] + lVar9) != 0)) {
                if (!bVar12) {
                  uVar13 = (**(code **)(*param_2 + 0x140))(param_2,0);
                  FUN_14095f42a(&local_1a0,uVar13,param_2);
                  bVar12 = true;
                }
                FUN_1440b5102(param_1 + 0xa35);
                break;
              }
              lVar9 = lVar9 + 0x10;
            } while ((longlong)(int)param_1[0xa36] * 0x10 != lVar9);
          }
          if ((0.0 < fVar1) && ((longlong)(int)param_1[0xa46] != 0)) {
            lVar9 = 0;
            do {
              if ((*(int *)(param_1[0xa45] + 8 + lVar9) != 0) &&
                 (*(longlong *)(param_1[0xa45] + lVar9) != 0)) {
                if (!bVar12) {
                  uVar13 = (**(code **)(*param_2 + 0x140))(param_2,0);
                  FUN_14095f42a(&local_1a0,uVar13,param_2);
                  bVar12 = true;
                }
                FUN_1440b5102(param_1 + 0xa45,&local_1a0);
                break;
              }
              lVar9 = lVar9 + 0x10;
            } while ((longlong)(int)param_1[0xa46] * 0x10 != lVar9);
          }
        }
        local_1b8 = DAT_14cbc1d78;
        local_1b0 = 0x3003;
        local_1a8 = 0;
        cVar4 = FUN_140334510(plVar6,&local_1b8,0);
        if (cVar4 != '\0') {
          if ((longlong)(int)param_1[0xa3a] != 0) {
            lVar9 = 0;
            do {
              if ((*(int *)(param_1[0xa39] + 8 + lVar9) != 0) &&
                 (*(longlong *)(param_1[0xa39] + lVar9) != 0)) {
                if (!bVar12) {
                  uVar13 = (**(code **)(*param_2 + 0x140))(param_2,0);
                  FUN_14095f42a(&local_1a0,uVar13,param_2);
                  bVar12 = true;
                }
                FUN_1440b5102(param_1 + 0xa39);
                break;
              }
              lVar9 = lVar9 + 0x10;
            } while ((longlong)(int)param_1[0xa3a] * 0x10 != lVar9);
          }
          if ((0.0 < fVar1) && ((longlong)(int)param_1[0xa4a] != 0)) {
            lVar9 = 0;
            do {
              if ((*(int *)(param_1[0xa49] + 8 + lVar9) != 0) &&
                 (*(longlong *)(param_1[0xa49] + lVar9) != 0)) {
                if (!bVar12) {
                  uVar13 = (**(code **)(*param_2 + 0x140))(param_2,0);
                  FUN_14095f42a(&local_1a0,uVar13,param_2);
                }
                FUN_1440b5102(param_1 + 0xa49,&local_1a0);
                break;
              }
              lVar9 = lVar9 + 0x10;
            } while ((longlong)(int)param_1[0xa4a] * 0x10 != lVar9);
          }
        }
      }
    }
    if ((param_2[10] != 0) && (*(char *)(param_2[10] + 0x121) == '\x02')) {
      if (param_2[7] == 0) {
        uVar10 = 0;
        uVar8 = 0;
      }
      else {
        uVar10 = *(uint *)(param_2[7] + 0xc);
        if ((int)uVar10 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        uVar8 = (ulonglong)*(uint *)(lVar9 + 0x10);
        if (*(uint *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          uVar11 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar11);
          }
          LOCK();
          uVar5 = *(uint *)(lVar9 + 0x10);
          bVar12 = uVar5 == 0;
          if (bVar12) {
            *(uint *)(lVar9 + 0x10) = uVar11;
            uVar5 = 0;
          }
          UNLOCK();
          if (bVar12) {
            uVar5 = uVar11;
          }
          uVar8 = (ulonglong)uVar5;
        }
      }
      FUN_14422a72e(param_1 + 0x136c,(ulonglong)uVar10 | uVar8 << 0x20);
    }
    local_88 = (undefined **)&DAT_14a171d50;
    uVar8 = uStack_70 >> 0x20;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    if ((int)uVar8 != 0) {
      FUN_140115c12(&local_78,0);
    }
    local_80 = (undefined *)0x0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    if (local_150 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440b5102 FUN_1440b5102 body=162 status=ok
// SIG undefined FUN_1440b5102(void)

void FUN_1440b5102(longlong *param_1,undefined8 param_2)

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
        goto LAB_1440b518f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1440b518f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1440b51a4 FUN_1440b51a4 body=31 status=ok
// SIG undefined FUN_1440b51a4(void)

undefined8 FUN_1440b51a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b525e FUN_1440b525e body=29 status=ok
// SIG undefined FUN_1440b525e(void)

undefined8 FUN_1440b525e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b53fa FUN_1440b53fa body=93 status=ok
// SIG undefined FUN_1440b53fa(void)

void FUN_1440b53fa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95c150;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b5458 FUN_1440b5458 body=93 status=ok
// SIG undefined FUN_1440b5458(void)

void FUN_1440b5458(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95c150;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b54b6 FUN_1440b54b6 body=126 status=ok
// SIG undefined FUN_1440b54b6(void)

void FUN_1440b54b6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95c150;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440b5525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440b5534 FUN_1440b5534 body=35 status=ok
// SIG undefined FUN_1440b5534(void)

void FUN_1440b5534(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = FUN_1403ca227();
  FUN_1409ca94a(uVar1,*(undefined4 *)(lVar2 + 0x31c));
  return;
}



// FUNCTION 1440b5558 FUN_1440b5558 body=282 status=ok
// SIG undefined FUN_1440b5558(void)

undefined8 FUN_1440b5558(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440b566c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440b566c;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440b566c:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440b5620;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      lVar5 = FUN_1403ca227();
      FUN_1409ca94a(uVar6,*(undefined4 *)(lVar5 + 0x31c));
      uVar6 = 1;
      goto LAB_1440b5620;
    }
  }
  uVar6 = 0;
LAB_1440b5620:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b5674 FUN_1440b5674 body=23 status=ok
// SIG undefined FUN_1440b5674(void)

void FUN_1440b5674(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001440b5687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1440b568c FUN_1440b568c body=31 status=ok
// SIG undefined FUN_1440b568c(void)

undefined8 FUN_1440b568c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b56ac FUN_1440b56ac body=29 status=ok
// SIG undefined FUN_1440b56ac(void)

undefined8 FUN_1440b56ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b5848 FUN_1440b5848 body=93 status=ok
// SIG undefined FUN_1440b5848(void)

void FUN_1440b5848(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95c3a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b58a6 FUN_1440b58a6 body=93 status=ok
// SIG undefined FUN_1440b58a6(void)

void FUN_1440b58a6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95c3a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b5904 FUN_1440b5904 body=126 status=ok
// SIG undefined FUN_1440b5904(void)

void FUN_1440b5904(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95c3a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440b5973. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440b5982 FUN_1440b5982 body=68 status=ok
// SIG undefined FUN_1440b5982(void)

void FUN_1440b5982(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (0 < *(int *)(lVar1 + 0x47c0)) {
    fVar2 = (float)FUN_14055830e(*(undefined8 *)(lVar1 + 0x47b8));
    if ((fVar2 <= 0.0) && (*(char *)(lVar1 + 0x5d30) == '\0')) {
      FUN_140f3209a(lVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 1440b59c6 FUN_1440b59c6 body=309 status=ok
// SIG undefined FUN_1440b59c6(void)

undefined8 FUN_1440b59c6(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440b5af5;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440b5af5;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar7 = local_28;
  }
  else {
LAB_1440b5af5:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440b5a71;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      uVar6 = 1;
      if (0 < *(int *)(lVar5 + 0x47c0)) {
        fVar8 = (float)FUN_14055830e(*(undefined8 *)(lVar5 + 0x47b8));
        if ((fVar8 <= 0.0) && (*(char *)(lVar5 + 0x5d30) == '\0')) {
          FUN_140f3209a(lVar5,0);
        }
      }
      goto LAB_1440b5a71;
    }
  }
  uVar6 = 0;
LAB_1440b5a71:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b5afc FUN_1440b5afc body=31 status=ok
// SIG undefined FUN_1440b5afc(void)

undefined8 FUN_1440b5afc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b5bfe FUN_1440b5bfe body=29 status=ok
// SIG undefined FUN_1440b5bfe(void)

undefined8 FUN_1440b5bfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b5d9a FUN_1440b5d9a body=93 status=ok
// SIG undefined FUN_1440b5d9a(void)

void FUN_1440b5d9a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95c410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b5df8 FUN_1440b5df8 body=93 status=ok
// SIG undefined FUN_1440b5df8(void)

void FUN_1440b5df8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95c410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b5e56 FUN_1440b5e56 body=126 status=ok
// SIG undefined FUN_1440b5e56(void)

void FUN_1440b5e56(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95c410;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440b5ec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440b5ee6 FUN_1440b5ee6 body=271 status=ok
// SIG undefined FUN_1440b5ee6(void)

undefined8 FUN_1440b5ee6(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440b5fef;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440b5fef;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440b5fef:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440b5fa3;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_141877464(*(longlong *)(param_1 + 0x20) + 0x4de8);
      uVar6 = 1;
      goto LAB_1440b5fa3;
    }
  }
  uVar6 = 0;
LAB_1440b5fa3:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b6008 FUN_1440b6008 body=66 status=ok
// SIG undefined FUN_1440b6008(void)

undefined8 FUN_1440b6008(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong *)*param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*(longlong *)*param_2 + 8))();
    lVar2 = FUN_14025678a();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),
                      *(longlong *)
                       (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
                      lVar2 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 1440b6068 FUN_1440b6068 body=12 status=ok
// SIG undefined FUN_1440b6068(void)

void FUN_1440b6068(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001440b6071. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1440b6074 FUN_1440b6074 body=29 status=ok
// SIG undefined FUN_1440b6074(void)

undefined8 FUN_1440b6074(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b6092 FUN_1440b6092 body=66 status=ok
// SIG undefined FUN_1440b6092(void)

undefined8 FUN_1440b6092(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong *)*param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*(longlong *)*param_2 + 8))();
    lVar2 = FUN_1418c3a38();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),
                      *(longlong *)
                       (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
                      lVar2 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 1440b60f2 FUN_1440b60f2 body=12 status=ok
// SIG undefined FUN_1440b60f2(void)

void FUN_1440b60f2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001440b60fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1440b60fe FUN_1440b60fe body=29 status=ok
// SIG undefined FUN_1440b60fe(void)

undefined8 FUN_1440b60fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b611c FUN_1440b611c body=538 status=ok
// SIG undefined FUN_1440b611c(void)

void FUN_1440b611c(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(int *)((longlong)param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 1), -1 < (int)uVar1)
      ) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar7 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == *(int *)((longlong)param_1 + 0xc))) &&
       ((lVar2 = *param_1, (*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
        (lVar3 = *plVar7, lVar3 != 0)))) {
      local_88 = local_88 & 0xffffff00;
      FUN_14113775c(lVar3,&DAT_14c846480,CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),1),0);
      FUN_144181da8(lVar3,lVar2,(int)param_1[2],0);
      iVar5 = FUN_14042831e(lVar2);
      lVar4 = param_1[2];
      iVar6 = FUN_1403ae46b();
      if ((int)lVar4 == iVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
      }
      if (((int)param_1[2] == iVar5) || (*(char *)((longlong)param_1 + 0x14) == '\0')) {
        if (DAT_14cb939a8 == 0) {
          local_50 = &local_38;
          local_38 = FUN_140940982;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_146522c26;
          local_58 = &LAB_148a0db91;
          local_60 = &LAB_146572ba7;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x10000004;
          local_80 = 8;
          local_88 = 0xdd8;
          FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
        }
        if ((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) {
          if (*(char *)(lVar2 + 0x178) == '\x03') {
            local_88 = (uint)local_88._1_3_ << 8;
            FUN_141145750(lVar2,lVar3,0,0);
          }
          else {
            local_80 = 0xffffffff;
            local_88 = (uint)local_88._1_3_ << 8;
            FUN_1465cf5d6(lVar2,lVar3,0,0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b6384 FUN_1440b6384 body=29 status=ok
// SIG undefined FUN_1440b6384(void)

undefined8 FUN_1440b6384(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b63a2 FUN_1440b63a2 body=796 status=ok
// SIG undefined FUN_1440b63a2(void)

void FUN_1440b63a2(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = param_1[2];
  if ((((lVar2 != 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 1), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == *(int *)((longlong)param_1 + 0xc))) &&
       (plVar3 = (longlong *)*param_1, (*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
      lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3);
      if (lVar7 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_50 = &local_38;
          local_38 = FUN_141030f22;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_1459f2e4c;
          local_58 = &LAB_148c39de3;
          local_60 = &LAB_1457a9eb2;
          local_68 = L"Game";
          local_70 = 0;
          local_78 = 0x10000004;
          local_80 = 0x10;
          local_88 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
          local_88 = local_88 & 0xffffff00;
          FUN_14113775c(lVar2,&DAT_14c846480,1,0);
          FUN_144181da8(lVar2,plVar3,(int)(char)param_1[0x2f],0);
          FUN_1461bbc1a(plVar3,param_1 + 3,(char)param_1[0x32]);
          iVar5 = FUN_14042831e(plVar3);
          lVar7 = param_1[0x2f];
          iVar6 = FUN_1403ae46b();
          if (iVar6 == (char)lVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
          }
          if ((iVar5 == (char)param_1[0x2f]) || (*(char *)((longlong)param_1 + 0x179) != -1)) {
            if (DAT_14cb939a8 == 0) {
              local_50 = &local_38;
              local_38 = FUN_140940982;
              local_40 = FUN_14081d0ea;
              local_48 = &LAB_146522c26;
              local_58 = &LAB_148a0db91;
              local_60 = &LAB_146572ba7;
              local_68 = L"Engine";
              local_70 = 0;
              local_78 = 0x10000004;
              local_80 = 8;
              local_88 = 0xdd8;
              FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
            }
            if ((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) {
              bVar4 = *(byte *)((longlong)param_1 + 0x17c) >> 5;
              if ((char)plVar3[0x2f] == '\x03') {
                local_88 = CONCAT31(local_88._1_3_,bVar4) & 0xffffff02;
                FUN_141145750(plVar3,lVar2,0,1);
              }
              else {
                local_88 = CONCAT31(local_88._1_3_,bVar4) & 0xffffff02;
                local_80 = 0xffffffff;
                FUN_1465cf5d6(plVar3,lVar2,0,1);
              }
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
            }
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b66dc FUN_1440b66dc body=100 status=ok
// SIG undefined FUN_1440b66dc(void)

undefined8 * FUN_1440b66dc(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x1a0,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b95c670;
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar1;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  FUN_14154dd46(puVar4 + 4,param_1 + 0x20);
  *(undefined1 *)(puVar4 + 0x33) = *(undefined1 *)(param_1 + 0x198);
  return puVar4 + 1;
}



// FUNCTION 1440b6746 FUN_1440b6746 body=29 status=ok
// SIG undefined FUN_1440b6746(void)

void FUN_1440b6746(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1440b6764 FUN_1440b6764 body=71 status=ok
// SIG undefined FUN_1440b6764(void)

undefined8 * FUN_1440b6764(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b95c670;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_140368b56(param_1 + 0xe);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b67ac FUN_1440b67ac body=898 status=ok
// SIG undefined FUN_1440b67ac(void)

void FUN_1440b67ac(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)*param_1;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
LAB_1440b6a11:
    lVar7 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 1);
    lVar7 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != *(int *)((longlong)param_1 + 0xc) ||
          ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_1440b6a11;
      lVar7 = *plVar8;
    }
  }
  if (((((*(int *)((longlong)param_1 + 0x14) == 0) ||
        (uVar1 = *(uint *)(param_1 + 2), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)((longlong)param_1 + 0x14))))) ||
     (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || ((lVar7 == 0 || (lVar3 = *plVar8, lVar3 == 0))))
     )) goto LAB_1440b69b4;
  local_88 = local_88 & 0xffffff00;
  FUN_14113775c(lVar3,&DAT_14c846480,CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),1),0);
  FUN_144181da8(lVar3,lVar7,(int)param_1[3],*(undefined4 *)((longlong)param_1 + 0x24));
  if ((*(byte *)(plVar2 + 0xc2d) & 1) == 0) goto LAB_1440b69b4;
  iVar6 = FUN_14042831e(lVar7);
  if ((int)param_1[3] != iVar6) {
    if (*(int *)((longlong)param_1 + 0x1c) < 1) goto LAB_1440b69b4;
    pcVar4 = *(code **)(*plVar2 + 0x5e8);
    if (pcVar4 == FUN_140972dde) {
      if (plVar2[0x76] != 0) goto LAB_1440b69b4;
      pcVar4 = *(code **)(*plVar2 + 0x5f8);
      if (pcVar4 == FUN_144784df4) {
        if (*(code **)(plVar2[0x784] + 0x18) == (code *)&LAB_144904684) {
          if ((((*(int *)((longlong)plVar2 + 0x75b4) == 0) ||
               (uVar1 = *(uint *)(plVar2 + 0xeb6), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)
              ) || (((plVar8 = (longlong *)
                               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                     plVar8 == (longlong *)0x0 ||
                     ((int)plVar8[2] != *(int *)((longlong)plVar2 + 0x75b4))) ||
                    ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_1440b6989;
          if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
            lVar7 = *plVar8;
          }
          else {
            lVar7 = 0;
          }
          lVar7 = lVar7 + 0x110;
        }
        else {
          lVar7 = (**(code **)(plVar2[0x784] + 0x18))(plVar2 + 0x784);
        }
        if (lVar7 == 0) goto LAB_1440b6989;
        lVar7 = *(longlong *)(lVar7 + 0x20);
      }
      else {
        lVar7 = (*pcVar4)(plVar2);
      }
      if (lVar7 == 0) goto LAB_1440b6989;
      lVar7 = *(longlong *)(lVar7 + 0x3b0);
    }
    else {
      lVar7 = (*pcVar4)(plVar2);
    }
    if (lVar7 != 0) goto LAB_1440b69b4;
  }
LAB_1440b6989:
  if (DAT_14cb939a8 == 0) {
    local_50 = &local_30;
    local_30 = FUN_140940982;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_146522c26;
    local_58 = &LAB_148a0db91;
    local_60 = &LAB_146572ba7;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000004;
    local_80 = 8;
    local_88 = 0xdd8;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
  }
  if ((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) {
    cVar5 = (char)param_1[4] * '\x02';
    if ((char)plVar2[0x2f] == '\x03') {
      local_88 = CONCAT31(local_88._1_3_,cVar5);
      FUN_141145750(plVar2,lVar3);
    }
    else {
      local_88 = CONCAT31(local_88._1_3_,cVar5);
      local_80 = 0xffffffff;
      FUN_1465cf5d6(plVar2,lVar3,*(undefined4 *)((longlong)param_1 + 0x1c));
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
LAB_1440b69b4:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440b6b32 FUN_1440b6b32 body=78 status=ok
// SIG undefined FUN_1440b6b32(void)

undefined8 * FUN_1440b6b32(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b95c690;
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



// FUNCTION 1440b6b86 FUN_1440b6b86 body=29 status=ok
// SIG undefined FUN_1440b6b86(void)

void FUN_1440b6b86(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1440b6ba4 FUN_1440b6ba4 body=29 status=ok
// SIG undefined FUN_1440b6ba4(void)

undefined8 FUN_1440b6ba4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b6bc2 FUN_1440b6bc2 body=31 status=ok
// SIG undefined FUN_1440b6bc2(void)

undefined8 FUN_1440b6bc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b6c30 FUN_1440b6c30 body=29 status=ok
// SIG undefined FUN_1440b6c30(void)

undefined8 FUN_1440b6c30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b6dcc FUN_1440b6dcc body=93 status=ok
// SIG undefined FUN_1440b6dcc(void)

void FUN_1440b6dcc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95c8b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b6e2a FUN_1440b6e2a body=93 status=ok
// SIG undefined FUN_1440b6e2a(void)

void FUN_1440b6e2a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95c8b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b6e88 FUN_1440b6e88 body=126 status=ok
// SIG undefined FUN_1440b6e88(void)

void FUN_1440b6e88(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95c8b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440b6ef7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440b6f10 FUN_1440b6f10 body=269 status=ok
// SIG undefined FUN_1440b6f10(void)

undefined8 FUN_1440b6f10(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440b7017;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440b7017;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440b7017:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440b6fcb;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1440b701e(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1440b6fcb;
    }
  }
  uVar6 = 0;
LAB_1440b6fcb:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b701e FUN_1440b701e body=248 status=ok
// SIG undefined FUN_1440b701e(void)

void FUN_1440b701e(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *param_1;
  lVar2 = FUN_1447210f0(uVar1);
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
    lVar3 = FUN_1405e677a(DAT_14cb0d2b0,lVar2);
    if ((*(char *)(lVar3 + 0x88) == '\0') && (*(char *)(lVar2 + 0x158) == '\0')) {
      local_b0[0] = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0xffffffff;
      local_34 = 0;
      local_32 = 1;
      local_31 = 0;
      lVar3 = FUN_140316ff8();
      uVar4 = FUN_140115352(lVar2);
      local_b8 = local_b0;
      FUN_140d5168f(uVar4,lVar3 + 0x60,uVar1,0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b7118 FUN_1440b7118 body=29 status=ok
// SIG undefined FUN_1440b7118(void)

undefined8 FUN_1440b7118(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b72b4 FUN_1440b72b4 body=93 status=ok
// SIG undefined FUN_1440b72b4(void)

void FUN_1440b72b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95c920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b7312 FUN_1440b7312 body=93 status=ok
// SIG undefined FUN_1440b7312(void)

void FUN_1440b7312(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95c920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b7370 FUN_1440b7370 body=126 status=ok
// SIG undefined FUN_1440b7370(void)

void FUN_1440b7370(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95c920;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440b73df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440b73fc FUN_1440b73fc body=271 status=ok
// SIG undefined FUN_1440b73fc(void)

undefined8 FUN_1440b73fc(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440b7505;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440b7505;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440b7505:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440b74b9;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      FUN_140aeefbc(*(undefined8 *)(param_1 + 0x20),CONCAT71((int7)((ulonglong)lVar5 >> 8),1),1);
      goto LAB_1440b74b9;
    }
  }
  uVar6 = 0;
LAB_1440b74b9:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b750c FUN_1440b750c body=29 status=ok
// SIG undefined FUN_1440b750c(void)

undefined8 FUN_1440b750c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b753e FUN_1440b753e body=93 status=ok
// SIG undefined FUN_1440b753e(void)

void FUN_1440b753e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95c990;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1440b759c FUN_1440b759c body=93 status=ok
// SIG undefined FUN_1440b759c(void)

void FUN_1440b759c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95c990;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1440b75fa FUN_1440b75fa body=126 status=ok
// SIG undefined FUN_1440b75fa(void)

void FUN_1440b75fa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95c990;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440b7669. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440b76d2 FUN_1440b76d2 body=98 status=ok
// SIG undefined FUN_1440b76d2(void)

undefined8 FUN_1440b76d2(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar2 = *puVar3;
      }
      else {
        uVar2 = 0;
      }
      FUN_14661de9a(uVar2);
    }
  }
  return 1;
}



// FUNCTION 1440b7734 FUN_1440b7734 body=29 status=ok
// SIG undefined FUN_1440b7734(void)

undefined8 FUN_1440b7734(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b7766 FUN_1440b7766 body=93 status=ok
// SIG undefined FUN_1440b7766(void)

void FUN_1440b7766(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95ca00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1440b77c4 FUN_1440b77c4 body=93 status=ok
// SIG undefined FUN_1440b77c4(void)

void FUN_1440b77c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95ca00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1440b7822 FUN_1440b7822 body=126 status=ok
// SIG undefined FUN_1440b7822(void)

void FUN_1440b7822(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95ca00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440b7891. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440b78aa FUN_1440b78aa body=20 status=ok
// SIG undefined FUN_1440b78aa(void)

undefined1 FUN_1440b78aa(longlong param_1)

{
  FUN_1440b78be(param_1 + 0x18);
  return 1;
}



// FUNCTION 1440b78be FUN_1440b78be body=251 status=ok
// SIG undefined FUN_1440b78be(void)

void FUN_1440b78be(uint *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar3 = FUN_1403ca227();
  lVar4 = FUN_141842d78(lVar3 + 0x3e0);
  iVar2 = DAT_14c9647dc;
  lVar3 = DAT_14c9647c8;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && (((plVar7 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar7 != (longlong *)0x0 && (*(uint *)(plVar7 + 2) == param_1[1])) &&
         ((lVar4 != 0 && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
      lVar6 = *plVar7;
    }
    else {
      lVar6 = 0;
    }
    uVar1 = *(uint *)(lVar4 + 0xc);
    *(uint *)(lVar6 + 0x9cc0) = uVar1;
    if ((int)uVar1 < iVar2) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(lVar3 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar8 = iVar2 == 0;
      if (bVar8) {
        *(int *)(lVar3 + 0x10) = iVar5;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar2 = iVar5;
      }
    }
    *(int *)(lVar6 + 0x9cc4) = iVar2;
  }
  return;
}



// FUNCTION 1440b79b9 FUN_1440b79b9 body=4388 status=ok
// SIG undefined FUN_1440b79b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440b79b9(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  char *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = "AssetRegistry";
  local_50 = 0xd;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1a38 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14cbc1a40);
  if (cVar1 == '\0') {
    _DAT_14cbc1a40 = 0;
    uRam000000014cbc1a48 = 0;
  }
  if (local_58 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_58 = "Enabled";
  local_50 = 7;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  DAT_14cbc2018 = (ulonglong)uVar2;
  local_58 = "EnabledInternal";
  local_50 = 0xf;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  DAT_14cbc2020 = (ulonglong)uVar2;
  _DAT_14cbc2060 = 0;
  LOCK();
  DAT_14cbc2058 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_1440a9c56);
  _DAT_14cbc1a58 = &LAB_1440a9c5b;
  _DAT_14cbc1a60 = 0x461e9800;
  DAT_14cbc1a64 = 1;
  DAT_14cbc1a50 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc1a50;
  atexit((_func_5014 *)&LAB_1440a9c60);
  DAT_14cbc1a90 = 0;
  DAT_14cbc1a98 = 0;
  DAT_14cbc1a70 = 0;
  _DAT_14cbc1a78 = 0;
  _DAT_14cbc1a9c = 0xffffffff00000080;
  DAT_14cbc1aa4 = 0;
  DAT_14cbc1ab0 = 0;
  DAT_14cbc1ab8 = 0;
  atexit(FUN_1440a9cb4);
  local_68 = 0;
  FUN_14153156c(&DAT_14cbc1ac0,L"r.gbx.pso.PrecacheOakActorGlow",&DAT_14c763fc8,
                L"Whether or not to try and precache the CustomGlowMaterial PSO for actors using the IOakActorGlow interface"
               );
  atexit(FUN_1440a9d5a);
  _DAT_14cbc1ae8 = 0x47efffffe0000000;
  _DAT_14cbc1af0 = 0x47efffffe0000000;
  _DAT_14cbc1af8 = 0x47efffffe0000000;
  _DAT_14cbc1b00 = 0x47efffffe0000000;
  _DAT_14cbc1b08 = 0x47efffffe0000000;
  _DAT_14cbc1b10 = 0x47efffffe0000000;
  _DAT_14cbc1b18 = 0x47efffffe0000000;
  _DAT_14cbc1b20 = 0x47efffffe0000000;
  local_58 = "Cash";
  local_50 = 4;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1b28 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbc1b30,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1440a9db0);
  local_58 = "bone";
  local_50 = 4;
  local_4c = 0;
  FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1b44 = 0;
  FUN_14052b5e0(&DAT_14cbc1b40,"PlayerAwareness",0);
  _DAT_14cbc1b50 = "PlayerAwareness";
  local_58 = "basic";
  local_50 = 5;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1b58 = (ulonglong)uVar2;
  local_58 = "challenge";
  local_50 = 9;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1b60 = (ulonglong)uVar2;
  local_58 = "online";
  local_50 = 6;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1b68 = (ulonglong)uVar2;
  local_58 = "social";
  local_50 = 6;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1b70 = (ulonglong)uVar2;
  local_58 = "alert";
  local_50 = 5;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1b78 = (ulonglong)uVar2;
  local_58 = "photo_mode";
  local_50 = 10;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1b80 = (ulonglong)uVar2;
  local_58 = "generic_task";
  local_50 = 0xc;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1b88 = (ulonglong)uVar2;
  local_58 = "mission";
  local_50 = 7;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1b90 = (ulonglong)uVar2;
  local_58 = "mail";
  local_50 = 4;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1b98 = (ulonglong)uVar2;
  local_58 = "respawn";
  local_50 = 7;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1ba0 = (ulonglong)uVar2;
  local_58 = "tutorial";
  local_50 = 8;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1ba8 = (ulonglong)uVar2;
  local_58 = "special_notification";
  local_50 = 0x14;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1bb0 = (ulonglong)uVar2;
  local_58 = "generic_notification";
  local_50 = 0x14;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1bb8 = (ulonglong)uVar2;
  local_58 = "vault_card";
  local_50 = 10;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1bc0 = (ulonglong)uVar2;
  local_58 = "ONLINE_MESSAGE";
  local_50 = 0xe;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1bc8 = (ulonglong)uVar2;
  local_58 = "INGAME_MESSAGE";
  local_50 = 0xe;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1bd0 = (ulonglong)uVar2;
  local_58 = "NOTIFICATION_MESSAGE";
  local_50 = 0x14;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1bd8 = (ulonglong)uVar2;
  local_58 = "MENU_TUTORIAL_MESSAGE";
  local_50 = 0x15;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1be0 = (ulonglong)uVar2;
  local_58 = "collectible";
  local_50 = 0xb;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1be8 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbc1bf0,L"UNSET",1);
  local_58 = "init";
  local_50 = 4;
  local_4c = 0;
  FUN_14001a6c0(&local_58,1);
  local_58 = "update";
  local_50 = 6;
  local_4c = 0;
  FUN_14001a6c0(&local_58,1);
  local_58 = "config_update";
  local_50 = 0xd;
  local_4c = 0;
  FUN_14001a6c0(&local_58,1);
  local_58 = "deinit";
  local_50 = 6;
  local_4c = 0;
  FUN_14001a6c0(&local_58,1);
  FUN_1446f470e(&DAT_14cbc1bf8,L"Party",1);
  FUN_1446f470e(&DAT_14cbc1c00,&DAT_149e063b2,1);
  local_58 = "Use";
  local_50 = 3;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1c08 = (ulonglong)uVar2;
  local_58 = "Sight";
  local_50 = 5;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1c10 = (ulonglong)uVar2;
  local_58 = "TargetLock";
  local_50 = 10;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1c18 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbc1c20,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1440a9dc1);
  FUN_140056680(&DAT_14cbc1c30,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1440a9dd2);
  FUN_140056680(&DAT_14cbc1c40,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_1440a9de3);
  FUN_140056680(&DAT_14cbc1c50,L"GoreFX_");
  atexit((_func_5014 *)&LAB_1440a9df4);
  FUN_1446f470e(&DAT_14cbc1c60,L"LIMB_GORED",1);
  _DAT_14cbc1c68 = 0x4072c00000000000;
  _DAT_14cbc1c70 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbc1c78,L"body",1);
  FUN_1446f470e(&DAT_14cbc1c80,L"title_card",1);
  FUN_1446f470e(&DAT_14cbc1c88,L"LockMovementForPerch",1);
  local_58 = "Use";
  local_50 = 3;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1c90 = (ulonglong)uVar2;
  local_58 = "StopUse";
  local_50 = 7;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1c98 = (ulonglong)uVar2;
  local_58 = "SecondaryUse";
  local_50 = 0xc;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1ca0 = (ulonglong)uVar2;
  local_58 = "StopSecondaryUse";
  local_50 = 0x10;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1ca8 = (ulonglong)uVar2;
  local_58 = "Use";
  local_50 = 3;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1cb0 = (ulonglong)uVar2;
  local_58 = "Reload";
  local_50 = 6;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1cb8 = (ulonglong)uVar2;
  local_58 = "Equip";
  local_50 = 5;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  DAT_14cbc1cc0 = (ulonglong)uVar2;
  local_58 = "PutDown";
  local_50 = 7;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  DAT_14cbc1cc8 = (ulonglong)uVar2;
  local_58 = "SwitchUseMode";
  local_50 = 0xd;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1cd0 = (ulonglong)uVar2;
  local_58 = "ResetFireSequence";
  local_50 = 0x11;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1cd8 = (ulonglong)uVar2;
  local_58 = "PickupEquip";
  local_50 = 0xb;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1ce0 = (ulonglong)uVar2;
  local_58 = "Standard";
  local_50 = 8;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1ce8 = (ulonglong)uVar2;
  local_58 = "PrologueSkip";
  local_50 = 0xc;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1cf0 = (ulonglong)uVar2;
  local_58 = "UltimateVaultHunterSkip";
  local_50 = 0x17;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1cf8 = (ulonglong)uVar2;
  local_58 = "SkipToDLC_Cowbell";
  local_50 = 0x11;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1d00 = (ulonglong)uVar2;
  local_58 = "SkipToDLC_Harmonica";
  local_50 = 0x13;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1d08 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbc1d10,"tint_siren");
  atexit((_func_5014 *)&LAB_1440a9e50);
  FUN_1400b22c2(&DAT_14cbc1d20,"tint_health");
  atexit((_func_5014 *)&LAB_1440a9e61);
  _DAT_14cbc1d30 = 0xffffffff;
  _DAT_14cbc1d34 = 0;
  FUN_1446f470e(&DAT_14cbc1d38,L"TimeOfDayBlueprintEvents",1);
  FUN_1446f470e(&DAT_14cbc1d40,L"TimeOfDayStateEvents",1);
  FUN_1446f470e(&DAT_14cbc1d48,L"TimeOfDayCloudscapeEvents",1);
  FUN_1446f470e(&DAT_14cbc1d50,L"TimeOfDayForecastEvents",1);
  FUN_1446f470e(&DAT_14cbc1d58,L"Death",1);
  FUN_1446f470e(&DAT_14cbc1d60,L"MovingOnLadder",1);
  FUN_1446f470e(&DAT_14cbc1d68,L"DmgSrc_Melee",1);
  FUN_1446f470e(&DAT_14cbc1d70,L"DmgSrc_Gun",1);
  FUN_1446f470e(&DAT_14cbc1d78,L"DmgSrc_Gadget",1);
  FUN_1446f470e(&DAT_14cbc1d80,L"DmgSrc_Skill",1);
  FUN_1446f470e(&DAT_14cbc1d88,L"SkillPossession",1);
  FUN_1446f470e(&DAT_14cbc1d90,L"Dashing",1);
  FUN_1446f470e(&DAT_14cbc1d98,L"MissionGiver",1);
  FUN_1446f470e(&DAT_14cbc1da0,L"WorldRT_Position",1);
  FUN_1446f470e(&DAT_14cbc1da8,L"FX_CenterMass",1);
  FUN_1446f470e(&DAT_14cbc1db0,L"waypoint",1);
  FUN_1446f470e(&DAT_14cbc1db8,L"WaitingForSpawnTrick",1);
  local_58 = "Dodging";
  local_50 = 7;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  DAT_14cbc1dc0 = (ulonglong)uVar2;
  local_58 = "OakCharLock";
  local_50 = 0xb;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1dc8 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbc1dd0,L"GbxActor.Character.Rank.Boss",1);
  DAT_14cbc1dd8._0_4_ = 0;
  DAT_14cbc1dd8._4_4_ = 0;
  local_58 = "DeathLootState";
  local_50 = 0xe;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  DAT_14cbc1de0 = (ulonglong)uVar2;
  local_58 = "char";
  local_50 = 4;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbc1e48 = (ulonglong)uVar2;
  FUN_1446f470e(&local_58,L"Corpse",1);
  FUN_14598ad7a(&DAT_14cbc1e50,&local_58,5);
  FUN_1446f470e(&DAT_14cbc1eb0,L"HideWeapon",1);
  FUN_1446f470e(&DAT_14cbc1eb8,L"Weapon3rd",1);
  FUN_1446f470e(&DAT_14cbc1ec0,L"Weapon1st",1);
  FUN_1446f470e(&DAT_14cbc1ec8,L"Vehicle3rd",1);
  FUN_1446f470e(&DAT_14cbc1ed0,L"Gadget3rd",1);
  FUN_1446f470e(&DAT_14cbc1ed8,L"Gadget1st",1);
  FUN_1446f470e(&DAT_14cbc1ee0,L"RepairKit3rd",1);
  FUN_1446f470e(&DAT_14cbc1ee8,L"RepairKit1st",1);
  FUN_1446f470e(&DAT_14cbc1ef0,L"Cover",1);
  FUN_1446f470e(&DAT_14cbc1ef8,L"Singularity");
  DAT_14cbc1f04._0_4_ = 0;
  DAT_14cbc1f04._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cbc1f00,"aiweaponusesettings",0);
  _DAT_14cbc1f10 = "aiweaponusesettings";
  DAT_14cbc1f1c._0_4_ = 0;
  DAT_14cbc1f1c._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cbc1f18,"ammoregenrate",0);
  _DAT_14cbc1f28 = "ammoregenrate";
  DAT_14cbc1f34._0_4_ = 0;
  DAT_14cbc1f34._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cbc1f30,"lifestealpercent",0);
  _DAT_14cbc1f40 = "lifestealpercent";
  DAT_14cbc1f4c._0_4_ = 0;
  DAT_14cbc1f4c._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cbc1f48,"lifestealrate",0);
  _DAT_14cbc1f58 = "lifestealrate";
  DAT_14cbc1f64._0_4_ = 0;
  DAT_14cbc1f64._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cbc1f60,"lifestealratecap",0);
  _DAT_14cbc1f70 = "lifestealratecap";
  DAT_14cbc1f7c._0_4_ = 0;
  DAT_14cbc1f7c._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cbc1f78,"lifestealinstancecap",0);
  _DAT_14cbc1f88 = "lifestealinstancecap";
  DAT_14cbc1f94._0_4_ = 0;
  DAT_14cbc1f94._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cbc1f90,"minhealthpercentmissingtoheal",0);
  _DAT_14cbc1fa0 = "minhealthpercentmissingtoheal";
  DAT_14cbc1fac._0_4_ = 0;
  DAT_14cbc1fac._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cbc1fa8,"traitchancemodifier",0);
  _DAT_14cbc1fb8 = "traitchancemodifier";
  DAT_14cbc1fc0._4_4_ = 0;
  DAT_14cbc1fc8 = 0;
  FUN_14052b5e0(&DAT_14cbc1fc0,"healthtypes",0);
  _DAT_14cbc1fd0 = "healthtypes";
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b8b8e FUN_1440b8b8e body=385 status=ok
// SIG undefined FUN_1440b8b8e(void)

longlong * FUN_1440b8b8e(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x1c88);
  if (lVar3 == 0) {
    uVar2 = FUN_14036a63e();
    lVar3 = FUN_14477b664(uVar2);
    *(longlong *)(param_1 + 0x1c88) = lVar3;
  }
  plVar5 = *(longlong **)(param_1 + 0x1c90);
  if (plVar5 == (longlong *)0x0) {
    if ((lVar3 == 0) || (*(longlong *)(param_1 + 0x1c80) == 0)) goto LAB_1440b8c56;
    plVar5 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar1 == '\0')) {
      *(undefined8 *)(param_1 + 0x1c90) = 0;
      goto LAB_1440b8c56;
    }
    uVar2 = (**(code **)(*plVar5 + 0x110))(plVar5);
    plVar5 = (longlong *)FUN_144aff482(uVar2,(longlong *)(param_1 + 0x1c80));
    *(longlong **)(param_1 + 0x1c90) = plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_1440b8c56;
  }
  lVar3 = (**(code **)(*plVar5 + 8))(plVar5);
  lVar4 = FUN_140da11b8();
  if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return plVar5;
  }
LAB_1440b8c56:
  lVar3 = *(longlong *)(param_1 + 0x1c70);
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x4a8) != '\x01')) {
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x4b8);
    if (lVar4 == 0) {
      uVar2 = FUN_140da11b8();
      lVar4 = FUN_14477b664(uVar2);
      *(longlong *)(lVar3 + 0x4b8) = lVar4;
    }
    plVar5 = *(longlong **)(lVar3 + 0x4c0);
    if (((plVar5 == (longlong *)0x0) && (plVar5 = (longlong *)0x0, lVar4 != 0)) &&
       (*(longlong *)(lVar3 + 0x4b0) != 0)) {
      plVar5 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar5 == (longlong *)0x0) ||
         (cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar1 == '\0')) {
        plVar5 = (longlong *)0x0;
      }
      else {
        uVar2 = (**(code **)(*plVar5 + 0x110))(plVar5);
        plVar5 = (longlong *)FUN_144aff482(uVar2,(longlong *)(lVar3 + 0x4b0));
      }
      *(longlong **)(lVar3 + 0x4c0) = plVar5;
    }
  }
  return plVar5;
}



// FUNCTION 1440b8d10 FUN_1440b8d10 body=621 status=ok
// SIG undefined FUN_1440b8d10(void)

undefined8 FUN_1440b8d10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  void *_Src;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 == 0) {
    uVar5 = FUN_14036a63e();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x20) = lVar6;
  }
  plVar8 = *(longlong **)(param_1 + 0x28);
  if (plVar8 == (longlong *)0x0) {
    if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      plVar8 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar8 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 == '\0')) {
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar8 + 0x110))(plVar8);
        plVar8 = (longlong *)FUN_144aff482(uVar5,(longlong *)(param_1 + 0x18));
        *(longlong **)(param_1 + 0x28) = plVar8;
        if (plVar8 != (longlong *)0x0) goto LAB_1440b8d51;
      }
    }
LAB_1440b8e0e:
    lVar6 = FUN_1440b8b8e(param_1 + -0x1c68);
    if (lVar6 != 0) {
      iVar2 = *(int *)(param_1 + 0x10);
      if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(lVar6 + 0x30))) {
        puVar1 = (undefined8 *)(*(longlong *)(lVar6 + 0x28) + (longlong)iVar2 * 0x48);
        plVar8 = (longlong *)*puVar1;
        if (*(code **)(*plVar8 + 0x50) != FUN_144828418) {
          plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))();
        }
        FUN_1447a1fc0(plVar8);
        plVar8 = (longlong *)*puVar1;
        goto LAB_1440b8e5b;
      }
    }
    local_30 = *(undefined8 *)(param_1 + -0x1c50);
    FUN_1400021e4(&local_30,&local_40);
    if (&local_40 == param_2) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_40;
      *(undefined4 *)(param_2 + 1) = local_38;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_34;
    }
  }
  else {
LAB_1440b8d51:
    lVar6 = (**(code **)(*plVar8 + 8))(plVar8);
    lVar7 = FUN_140da11f2();
    if (((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) goto LAB_1440b8e0e;
    plVar9 = (longlong *)plVar8[3];
    if (*(code **)(*plVar9 + 0x50) != FUN_144828418) {
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x50))();
    }
    FUN_1447a1fc0(plVar9);
    plVar8 = (longlong *)plVar8[3];
LAB_1440b8e5b:
    pcVar3 = *(code **)(*plVar8 + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar9 = plVar8 + 3;
      if (plVar8[5] != 0) {
        plVar9 = (longlong *)(plVar8[5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar9 = plVar8 + 2;
    }
    else {
      plVar9 = (longlong *)(*pcVar3)(plVar8);
    }
    if (plVar9 != param_2) {
      iVar2 = (int)plVar9[1];
      _Src = (void *)*plVar9;
      *(int *)(param_2 + 1) = iVar2;
      if (iVar2 == 0 && *(int *)((longlong)param_2 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_2,iVar2);
        if (iVar2 != 0) {
          memcpy((void *)*param_2,_Src,(longlong)iVar2 * 2);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1440b90a4 FUN_1440b90a4 body=103 status=ok
// SIG undefined FUN_1440b90a4(void)

undefined8 FUN_1440b90a4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x1da8);
  plVar4 = *(longlong **)(param_1 + 0x1db0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  return uVar3;
}



// FUNCTION 1440b910c FUN_1440b910c body=236 status=ok
// SIG undefined FUN_1440b910c(void)

void FUN_1440b910c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((*(longlong *)(param_1 + 0x1da8) != 0) && ((*(byte *)(param_1 + 0x1d39) & 1) != 0)) {
    if (((*(byte *)(param_1 + 0x1e15) & 1) != 0) &&
       (*(char *)(param_1 + 0x1e14) == *(char *)(param_1 + 0x1e16))) {
      FUN_140ececb8();
      return;
    }
    FUN_140ecec32(param_1 + 0x1dc0);
    lVar3 = *(longlong *)(param_1 + 0x1da8);
    plVar4 = *(longlong **)(param_1 + 0x1db0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
    if (lVar3 != 0) {
      FUN_140ecea3e(lVar3);
    }
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
                    /* WARNING: Could not recover jumptable at 0x0001440b91f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1440b921a FUN_1440b921a body=540 status=ok
// SIG undefined FUN_1440b921a(void)

bool FUN_1440b921a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  double *pdVar4;
  double dVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  double local_38;
  double local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar2 = FUN_1433c2488();
  bVar3 = true;
  if (cVar2 != '\0') goto LAB_1440b934d;
  if (param_2 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_60 = &local_40;
      local_40 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1459f2e4c;
      local_68 = &LAB_148c39de3;
      local_70 = &LAB_1457a9eb2;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      if (*(longlong *)(param_2 + 0xf40) == 0) {
        if ((((*(longlong *)(param_2 + 0x2370) != 0) &&
             (*(int *)(param_2 + 0x2378) - 1U < 0xfffffffe)) ||
            (*(char *)(param_2 + 0x2368) != '\0')) || (*(char *)(param_2 + 0x23b8) == '\x01'))
        goto LAB_1440b92a6;
      }
      else if (*(char *)(*(longlong *)(param_2 + 0xf40) + 0x1990) != '\0') {
LAB_1440b92a6:
        FUN_1442017ac(param_2,&local_40);
        if (local_28 == '\x01') {
          lVar1 = *(longlong *)(param_1 + 0x1c8);
          if (lVar1 == 0) {
            pdVar4 = (double *)&DAT_14c8464e0;
            dVar5 = DAT_14c8464f0;
          }
          else {
            pdVar4 = (double *)(lVar1 + 0x260);
            dVar5 = *(double *)(lVar1 + 0x270);
          }
          bVar3 = (dVar5 - local_30) * (dVar5 - local_30) +
                  (pdVar4[1] - local_38) * (pdVar4[1] - local_38) +
                  (*pdVar4 - (double)local_40) * (*pdVar4 - (double)local_40) <
                  (double)*(float *)(param_1 + 0x194);
          goto LAB_1440b934d;
        }
      }
    }
  }
  bVar3 = false;
LAB_1440b934d:
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}



// FUNCTION 1440b9438 FUN_1440b9438 body=872 status=ok
// SIG undefined FUN_1440b9438(void)

void FUN_1440b9438(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_1[0x3b4] == 0) || (*(char *)(param_1[0x3b4] + 0x348) != '\x01')) goto LAB_1440b9713;
  plVar4 = (longlong *)param_1[0x3b5];
  if (plVar4 == (longlong *)0x0) {
    lVar5 = FUN_14069c71e();
    if (lVar5 == 0) {
LAB_1440b975a:
      lVar7 = 0;
    }
    else {
      lVar6 = FUN_14069c71e();
      if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_1440b975a;
      lVar7 = 0;
      if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30) {
        lVar7 = lVar5;
      }
    }
    FUN_140005f6c(param_1 + 0x3b5,lVar7,0,0);
    plVar4 = (longlong *)param_1[0x3b5];
    plVar8 = (longlong *)param_1[0x3b6];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
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
    if (plVar4 != (longlong *)0x0) {
      if ((param_1 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
        if (param_1 != (longlong *)0x0) goto LAB_1440b958b;
        local_48 = (longlong *)0x0;
      }
      else {
        FUN_1456cec3c(param_1);
LAB_1440b958b:
        local_48 = param_1 + 0x89;
      }
      local_50 = param_1;
      (**(code **)(*plVar4 + 0x10))(plVar4);
      if (param_1[0x3b4] != 0) {
        *(byte *)((longlong)plVar4 + 0x7c) =
             *(byte *)((longlong)plVar4 + 0x7c) & 0xbf | *(char *)(param_1[0x3b4] + 0x349) << 6;
        *(byte *)((longlong)plVar4 + 0x7d) =
             *(byte *)((longlong)plVar4 + 0x7d) & 0x7f | *(char *)(param_1[0x3b4] + 0x34a) << 7;
      }
      if ((char)param_1[0x2f] == '\x03') {
        if ((param_1[0x3b5] != 0) && (param_1[0x3b4] != 0)) {
          uVar3 = *(ushort *)(param_1[0x3b4] + 0x34c);
          AcquireSRWLockShared((PSRWLOCK)&DAT_14cb77c40);
          lVar5 = (ulonglong)uVar3 * 0x10 + DAT_14cb77c48;
          ReleaseSRWLockShared((PSRWLOCK)&DAT_14cb77c40);
          FUN_14036a960(param_1 + 0x3b8,lVar5);
          lVar5 = param_1[0x3b5];
          plVar4 = (longlong *)param_1[0x3b6];
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
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
          if (lVar5 != 0) {
            FUN_14036ce6a(param_1[0x3b4] + 0x350,lVar5);
            FUN_140ecea3e(lVar5);
          }
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
      }
      else {
        FUN_1440b910c(param_1);
      }
      (**(code **)(*param_1 + 0x658))(param_1);
    }
  }
  else {
    plVar8 = (longlong *)param_1[0x3b6];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
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
    if ((param_1 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
      if (param_1 != (longlong *)0x0) goto LAB_1440b94cf;
      local_38 = (longlong *)0x0;
    }
    else {
      FUN_1456cec3c(param_1);
LAB_1440b94cf:
      local_38 = param_1 + 0x89;
    }
    local_40 = param_1;
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_1440b9713:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b97e8 FUN_1440b97e8 body=69 status=ok
// SIG undefined FUN_1440b97e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440b97e8(void)

{
  _DAT_14cbc28c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001440b982a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbc28d0,1);
  return;
}



// FUNCTION 1440b982e FUN_1440b982e body=4137 status=ok
// SIG undefined FUN_1440b982e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440b982e(longlong *param_1)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auVar6 [32];
  longlong *plVar7;
  double dVar8;
  double dVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  char cVar15;
  byte bVar16;
  longlong lVar17;
  double *pdVar18;
  longlong lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int iVar23;
  double *pdVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  undefined1 in_XMM1 [16];
  undefined1 auVar38 [16];
  double dVar39;
  float fVar40;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStack_528 [32];
  undefined8 *local_508;
  undefined4 local_500;
  undefined1 local_4f8;
  longlong local_4f0;
  longlong *local_4e8;
  longlong *local_4e0;
  longlong *local_4d8;
  longlong local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  double local_4b0;
  double local_4a8;
  double local_4a0;
  undefined8 local_498;
  double local_490;
  double local_488;
  double local_480;
  double local_478;
  double local_470;
  longlong *local_468;
  double local_460;
  double local_458;
  double local_450;
  undefined8 local_448 [2];
  undefined8 local_438;
  double local_408;
  double dStack_400;
  longlong *local_3f8;
  longlong *plStack_3f0;
  undefined8 local_3e8;
  ulonglong local_3e0;
  undefined8 local_3c8;
  longlong local_3c0 [7];
  undefined4 local_384;
  longlong local_380;
  longlong local_378;
  undefined1 local_370 [296];
  byte local_248;
  ulonglong local_f0;
  
  plVar7 = (longlong *)CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
  fVar32 = in_XMM1._0_4_;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_528;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_408 = (double)CONCAT44(local_408._4_4_,fVar32);
    uVar22 = FUN_14477b072(param_1,DAT_14cac9bd0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar22,&local_408);
    lVar17 = FUN_1447210f0(param_1);
    if (lVar17 != 0) {
      uVar22 = FUN_14119d0a4(lVar17);
      FUN_140e65914(uVar22,param_1);
    }
  }
  if (param_1[0x76] != 0) {
    lVar17 = FUN_1447210f0(param_1);
    if ((lVar17 != 0) && (*(char *)(param_1[0x76] + 0x5a8) != '\0')) {
      lVar17 = FUN_1447210f0(param_1);
      fVar37 = (float)(*(double *)(lVar17 + 0x6d0) - (double)*(float *)((longlong)param_1 + 0x4ac));
      lVar17 = param_1[0x76];
      fVar40 = *(float *)(lVar17 + 0x5b0);
      if (fVar37 - fVar32 < fVar40) {
        fVar31 = (float)(-(uint)(fVar37 < fVar40) & (uint)fVar32 |
                        ~-(uint)(fVar37 < fVar40) & (uint)(fVar40 - (fVar37 - fVar32))) *
                 *(float *)(lVar17 + 0x5ac);
        if (*(char *)(lVar17 + 0x5a8) == '\x02') {
          fVar31 = fVar31 * (float)(~-(uint)(fVar40 <= fVar37) & 0x3f800000 |
                                   (uint)(fVar37 / fVar40) & -(uint)(fVar40 <= fVar37));
        }
        plVar4 = (longlong *)param_1[0x39];
        if (plVar4 != (longlong *)0x0) {
          local_450 = ((double)fVar31 + (double)plVar4[0x4e]) - (double)plVar4[0x4e];
          local_458 = ((double)plVar4[0x4d] + 0.0) - (double)plVar4[0x4d];
          local_460 = ((double)plVar4[0x4c] + 0.0) - (double)plVar4[0x4c];
          local_408 = (double)plVar4[0x48];
          dStack_400 = (double)plVar4[0x49];
          local_3f8 = (longlong *)plVar4[0x4a];
          plStack_3f0 = (longlong *)plVar4[0x4b];
          local_4f8 = 0;
          local_500 = 0;
          local_508 = (undefined8 *)0x0;
          (**(code **)(*plVar4 + 0x510))(plVar4,&local_460,&local_408,0);
        }
      }
    }
    if ((longlong)(int)param_1[0x83] != 0) {
      lVar17 = param_1[0x82];
      local_4e0 = param_1 + 0x75;
      plVar4 = param_1 + 0x86;
      local_4d8 = param_1 + 0x90;
      local_4d0 = (longlong)(int)param_1[0x83] * 0x18;
      lVar29 = 0;
      local_4e8 = param_1;
      do {
        iVar27 = *(int *)(lVar17 + 4 + lVar29);
        if ((iVar27 == 0) || (uVar3 = *(uint *)(lVar17 + lVar29), (int)uVar3 < 0)) {
LAB_1440b9ba0:
          lVar30 = 0;
        }
        else {
          lVar30 = 0;
          if ((int)uVar3 < DAT_14c9647dc) {
            plVar26 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if (((plVar26 == (longlong *)0x0) || ((int)plVar26[2] != iVar27)) ||
               ((*(uint *)(plVar26 + 1) & 0x10200000) != 0)) goto LAB_1440b9ba0;
            lVar30 = *plVar26;
          }
        }
        iVar27 = *(int *)(lVar17 + 0xc + lVar29);
        if (((((iVar27 != 0) && (uVar3 = *(uint *)(lVar17 + 8 + lVar29), -1 < (int)uVar3)) &&
             (((int)uVar3 < DAT_14c9647dc &&
              ((plVar26 = (longlong *)
                          ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
               plVar26 != (longlong *)0x0 && ((int)plVar26[2] == iVar27)))))) &&
            ((*(uint *)(plVar26 + 1) & 0x10200000) == 0)) &&
           (((lVar30 != 0 && (plVar26 = (longlong *)*plVar26, plVar26 != (longlong *)0x0)) &&
            (cVar15 = FUN_140e2583c(param_1,lVar30), cVar15 == '\0')))) {
          lVar19 = param_1[0x39];
          if (lVar19 == 0) {
            uVar41 = SUB84(DAT_14c8464f0,0);
            uVar42 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            pdVar18 = &DAT_14c8464e0;
          }
          else {
            uVar41 = (undefined4)*(undefined8 *)(lVar19 + 0x270);
            uVar42 = (undefined4)((ulonglong)*(undefined8 *)(lVar19 + 0x270) >> 0x20);
            pdVar18 = (double *)(lVar19 + 0x260);
          }
          lVar19 = *(longlong *)(lVar30 + 0x1c8);
          if (lVar19 == 0) {
            pdVar24 = &DAT_14c8464e0;
            plVar11 = DAT_14c8464f0;
          }
          else {
            plVar11 = *(longlong **)(lVar19 + 0x270);
            pdVar24 = (double *)(lVar19 + 0x260);
          }
          plVar11 = (longlong *)((double)CONCAT44(uVar42,uVar41) - (double)plVar11);
          dVar8 = *pdVar18 - *pdVar24;
          dVar33 = pdVar18[1] - pdVar24[1];
          uVar41 = SUB84(dVar33,0);
          uVar42 = (undefined4)((ulonglong)dVar33 >> 0x20);
          fVar40 = (float)SQRT((double)plVar11 * (double)plVar11 + dVar8 * dVar8 + dVar33 * dVar33);
          lVar19 = param_1[0x76];
          if ((*(char *)(lVar19 + 0x240) != '\0') && (fVar40 < *(float *)(param_1 + 0x93))) {
            local_478 = dVar8;
            local_470 = dVar33;
            local_468 = plVar11;
            FUN_148cd67c2(param_1,&local_408,&local_478,fVar40);
            uVar41 = SUB84(dStack_400,0);
            uVar42 = (undefined4)((ulonglong)dStack_400 >> 0x20);
            lVar19 = param_1[0x76];
            plVar11 = local_3f8;
            dVar8 = local_408;
          }
          plVar10 = (longlong *)CONCAT44(uVar42,uVar41);
          local_408 = (double)((ulonglong)local_408 & 0xffffffffffffff00);
          local_3e0 = local_3e0 & 0xffffffff00000000;
          FUN_1456bb102(&local_408,lVar30);
          fVar37 = (float)FUN_140a8b8c6(lVar19 + 0x1a8,&local_408);
          if ((longlong)(int)local_3e0 != 0) {
            lVar19 = (longlong)(int)local_3e0 + -1;
            local_4f0 = DAT_14c9a3da0;
            lVar28 = lVar19 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar28),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar28));
            if (*(longlong *)(local_4f0 + lVar28) != 0) {
              FUN_1400020a8();
            }
            lVar14 = DAT_14c9a3da0;
            iVar27 = (int)lVar19;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar27;
            }
            *(undefined4 *)(lVar14 + lVar28) = 0xffffffff;
            iVar23 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar23 = DAT_14c9a3dd0;
            }
            *(int *)(lVar14 + 4 + lVar28) = iVar23;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar20 = DAT_14c9a3dc0;
            if (DAT_14c9a3dc0 == (undefined *)0x0) {
              puVar20 = &DAT_14c9a3db0;
            }
            iVar23 = iVar27 + 0x1f;
            if (-1 < iVar27) {
              iVar23 = iVar27;
            }
            bVar16 = (byte)lVar19 & 0x1f;
            DAT_14c9a3dd0 = iVar27;
            *(uint *)(puVar20 + (longlong)(iVar23 >> 5) * 4) =
                 *(uint *)(puVar20 + (longlong)(iVar23 >> 5) * 4) &
                 (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
            local_3e0 = local_3e0 & 0xffffffff00000000;
          }
          param_1 = local_4e8;
          if ((local_408._0_1_ == '\x03') && (local_3f8 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_3f8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_3f8 + 0x10))();
            }
          }
          fVar37 = fVar37 * *(float *)((longlong)param_1 + 0x4a4);
          fVar31 = *(float *)(param_1 + 0x7c);
          fVar2 = *(float *)((longlong)param_1 + 0x3e4);
          auVar35._4_4_ = unaff_XMM7_Db;
          auVar35._0_4_ = fVar40;
          auVar35._8_4_ = (int)plVar7;
          auVar35._12_4_ = (int)((ulonglong)plVar7 >> 0x20);
          if (fVar2 <= fVar40) {
            auVar35._0_4_ = fVar2;
          }
          if (auVar35._0_4_ <= fVar31) {
            auVar35._0_4_ = fVar31;
          }
          fVar37 = (*(float *)(param_1 + 0x95) * fVar37 - fVar37) *
                   (auVar35._0_4_ / ABS(fVar2 - fVar31)) + fVar37;
          if (*(char *)(lVar17 + 0x14 + lVar29) == '\x01') {
            if (*(longlong **)(&DAT_00006850 + lVar30) != (longlong *)0x0) {
              dVar33 = (double)plVar11 * (double)plVar11 +
                       dVar8 * dVar8 +
                       (double)CONCAT44(uVar42,uVar41) * (double)CONCAT44(uVar42,uVar41);
              if (9.99999993922529e-09 < dVar33) {
                dVar33 = 1.0 / SQRT(dVar33);
                dVar8 = dVar8 * dVar33;
                plVar10 = (longlong *)((double)CONCAT44(uVar42,uVar41) * dVar33);
                plVar11 = (longlong *)((double)plVar11 * dVar33);
              }
              fVar40 = (float)(**(code **)(**(longlong **)(&DAT_00006850 + lVar30) + 0x478))();
              if (((double)plVar11 < 0.0) || ((double)fVar37 * (double)plVar11 <= (double)fVar40)) {
                plVar11 = (longlong *)0x0;
              }
              bVar16 = (**(code **)(*(longlong *)(*(longlong *)(&DAT_00006850 + lVar30) + 0x178) +
                                   0xe0))(*(longlong *)(&DAT_00006850 + lVar30) + 0x178);
              auVar38 = in_XMM1;
              if (1.0 / DAT_14c763fcc <= fVar32) {
                auVar38._4_12_ = in_XMM1._4_12_;
                auVar38._0_4_ = 1.0 / DAT_14c763fcc;
              }
              dVar33 = (double)(fVar37 * *(float *)(param_1[0x76] + 0x238 +
                                                   (ulonglong)(bVar16 ^ 1) * 4));
              local_490 = (double)(float)(~-(uint)(0.0 < DAT_14c763fcc) & (uint)fVar32 |
                                         auVar38._0_4_ & -(uint)(0.0 < DAT_14c763fcc));
              local_480 = (double)plVar11 * dVar33 * local_490;
              local_488 = (double)plVar10 * dVar33 * local_490;
              local_490 = dVar8 * dVar33 * local_490;
              (**(code **)(**(longlong **)(&DAT_00006850 + lVar30) + 0x848))
                        (*(longlong **)(&DAT_00006850 + lVar30),&local_490,0);
            }
          }
          else {
            cVar15 = (**(code **)(*plVar26 + 0x480))(plVar26,DAT_14c9abbf0);
            if (cVar15 == '\0') {
              cVar15 = FUN_140c4e528(lVar30 + 0x7c78);
              if (cVar15 != '\x04') goto LAB_1440b9b6e;
              local_408 = 0.0;
              plStack_3f0 = DAT_14c8464f0;
              dStack_400 = DAT_14c8464e0;
              local_3f8 = DAT_14c8464e8;
              local_3e8 = 0;
              FUN_140e26dfa(lVar30 + 0x7c78,4,1,&local_408);
            }
            dVar33 = (double)plVar11 * (double)plVar11 +
                     dVar8 * dVar8 +
                     (double)CONCAT44(uVar42,uVar41) * (double)CONCAT44(uVar42,uVar41);
            if (((dVar33 != 1.0) || (dVar9 = dVar8, plVar12 = plVar11, NAN(dVar33))) &&
               (dVar9 = DAT_14c8464e0, plVar12 = DAT_14c8464f0, plVar10 = DAT_14c8464e8,
               9.99999993922529e-09 <= dVar33)) {
              dVar33 = 1.0 / SQRT(dVar33);
              dVar9 = dVar8 * dVar33;
              plVar12 = (longlong *)((double)plVar11 * dVar33);
              plVar10 = (longlong *)((double)CONCAT44(uVar42,uVar41) * dVar33);
            }
            dVar34 = (double)(fVar37 * fVar32);
            dVar33 = (double)plVar12 * dVar34;
            dVar8 = (double)plVar10 * dVar34;
            dVar9 = dVar9 * dVar34;
            lVar19 = param_1[0x76];
            if ((*(char *)(lVar19 + 0x240) != '\0') && (fVar40 < *(float *)(param_1 + 0x93))) {
              local_408 = (double)((ulonglong)local_408 & 0xffffffffffffff00);
              local_3e0 = local_3e0 & 0xffffffff00000000;
              FUN_1456bb102(&local_408,lVar30);
              fVar40 = (float)FUN_140a8b8c6(lVar19 + 0x1f0,&local_408);
              if ((longlong)(int)local_3e0 != 0) {
                lVar19 = (longlong)(int)local_3e0 + -1;
                local_4f0 = DAT_14c9a3da0;
                lVar28 = lVar19 * 0x10;
                FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar28),
                              *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar28));
                if (*(longlong *)(local_4f0 + lVar28) != 0) {
                  FUN_1400020a8();
                }
                lVar14 = DAT_14c9a3da0;
                iVar27 = (int)lVar19;
                if (DAT_14c9a3dd4 != 0) {
                  *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar27;
                }
                *(undefined4 *)(lVar14 + lVar28) = 0xffffffff;
                iVar23 = -1;
                if (0 < DAT_14c9a3dd4) {
                  iVar23 = DAT_14c9a3dd0;
                }
                *(int *)(lVar14 + 4 + lVar28) = iVar23;
                DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                puVar20 = DAT_14c9a3dc0;
                if (DAT_14c9a3dc0 == (undefined *)0x0) {
                  puVar20 = &DAT_14c9a3db0;
                }
                iVar23 = iVar27 + 0x1f;
                if (-1 < iVar27) {
                  iVar23 = iVar27;
                }
                bVar16 = (byte)lVar19 & 0x1f;
                DAT_14c9a3dd0 = iVar27;
                *(uint *)(puVar20 + (longlong)(iVar23 >> 5) * 4) =
                     *(uint *)(puVar20 + (longlong)(iVar23 >> 5) * 4) &
                     (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
                local_3e0 = local_3e0 & 0xffffffff00000000;
              }
              param_1 = local_4e8;
              if ((local_408._0_1_ == '\x03') && (local_3f8 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_3f8 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_3f8 + 0x10))();
                }
              }
              lVar19 = param_1[0x39];
              if (lVar19 == 0) {
                uVar41 = SUB84(DAT_14c8464f0,0);
                uVar42 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                pdVar18 = &DAT_14c8464e0;
              }
              else {
                uVar41 = (undefined4)*(undefined8 *)(lVar19 + 0x270);
                uVar42 = (undefined4)((ulonglong)*(undefined8 *)(lVar19 + 0x270) >> 0x20);
                pdVar18 = (double *)(lVar19 + 0x260);
              }
              lVar19 = *(longlong *)(lVar30 + 0x1c8);
              if (lVar19 == 0) {
                pdVar24 = &DAT_14c8464e0;
                plVar11 = DAT_14c8464f0;
              }
              else {
                plVar11 = *(longlong **)(lVar19 + 0x270);
                pdVar24 = (double *)(lVar19 + 0x260);
              }
              plVar11 = (longlong *)((double)CONCAT44(uVar42,uVar41) - (double)plVar11);
              dVar34 = *pdVar18 - *pdVar24;
              plVar7 = (longlong *)(pdVar18[1] - pdVar24[1]);
              dVar39 = (double)plVar11 * (double)plVar11 +
                       dVar34 * dVar34 + (double)plVar7 * (double)plVar7;
              if ((dVar39 != 1.0) || (plVar10 = plVar7, NAN(dVar39))) {
                if (9.99999993922529e-09 <= dVar39) {
                  dVar39 = 1.0 / SQRT(dVar39);
                  plVar11 = (longlong *)((double)plVar11 * dVar39);
                  plVar10 = (longlong *)((double)plVar7 * dVar39);
                  dVar34 = dVar34 * dVar39;
                }
                else {
                  plVar7 = (longlong *)0x0;
                  plVar11 = DAT_14c8464f0;
                  dVar34 = DAT_14c8464e0;
                  plVar10 = DAT_14c8464e8;
                }
              }
              dVar39 = (double)(fVar40 * fVar32);
              FUN_1446f470e(&local_498,L"Primary",1);
              FUN_1488116c4(plVar26,&local_408,0,local_498);
              dVar34 = dVar34 * dVar39 - local_408;
              unaff_XMM7_Db = (undefined4)((ulonglong)dVar34 >> 0x20);
              dVar9 = dVar9 + dVar34;
              dVar8 = dVar8 + ((double)plVar10 * dVar39 - dStack_400);
              dVar33 = dVar33 + ((double)plVar11 * dVar39 - (double)local_3f8);
            }
            local_4b0 = dVar9;
            local_4a8 = dVar8;
            local_4a0 = dVar33;
            (**(code **)(*plVar26 + 0x6d0))(plVar26,&local_4b0,0,0);
          }
          fVar40 = *(float *)(lVar17 + 0x10 + lVar29) + fVar32;
          *(float *)(lVar17 + 0x10 + lVar29) = fVar40;
          if (*(float *)(param_1 + 0x84) <= 0.0001) {
            lVar19 = (**(code **)(*local_4e0 + 0x18))();
            if (lVar19 == 0) goto LAB_1440b9b6e;
            fVar40 = *(float *)(lVar17 + 0x10 + lVar29);
          }
          if (*(float *)((longlong)param_1 + 0x424) <= fVar40) {
            FUN_14082cf0e(&local_408,lVar30,0,0);
            uVar5 = param_1[0x2d];
            if ((uVar5 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(uVar5);
            }
            local_248 = local_248 | 8;
            local_3e0 = uVar5;
            local_3c8 = (**(code **)(*local_4e0 + 0x18))();
            if (local_3c0 != plVar4) {
              plVar26 = (longlong *)param_1[0x8c];
              if ((longlong *)param_1[0x8c] == (longlong *)0x0) {
                plVar26 = plVar4;
              }
              FUN_1400709d4(local_3c0,plVar26,(int)param_1[0x8d],local_384);
            }
            (**(code **)(local_380 + 0x20))(&local_380,0);
            local_378 = param_1[0x8f];
            FUN_1406022fe(local_370,local_4d8);
            local_448[0] = 0;
            local_438 = 0;
            local_508 = local_448;
            FUN_14082d216(&local_408);
            param_1 = local_4e8;
            *(undefined4 *)(lVar17 + 0x10 + lVar29) = 0;
            FUN_1403dfdc4(&local_408);
          }
        }
LAB_1440b9b6e:
        lVar29 = lVar29 + 0x18;
      } while (local_4d0 != lVar29);
    }
    if ((longlong *)param_1[0xad] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0xad] + 0x20))();
    }
    lVar17 = param_1[0xab];
    if (lVar17 != 0) {
      lVar29 = param_1[0x78];
      if (lVar29 == 0) {
        fVar32 = 0.0;
      }
      else {
        auVar38 = *(undefined1 (*) [16])(lVar29 + 0x280) & _DAT_149931180;
        auVar35 = _DAT_149931180 & *(undefined1 (*) [16])(lVar29 + 0x290);
        auVar6._16_16_ = auVar35;
        auVar6._0_16_ = auVar38;
        auVar36._0_8_ = auVar35._0_8_;
        auVar36._8_8_ = auVar38._0_8_;
        auVar35 = minpd(auVar38,auVar6._8_16_);
        auVar35 = minpd(auVar35,auVar36);
        fVar32 = (float)auVar35._0_8_ * *(float *)(lVar29 + 0x640);
      }
      lVar29 = param_1[0x39];
      if (lVar29 == 0) {
        puVar25 = &DAT_14c8464e0;
        plVar7 = DAT_14c8464f0;
      }
      else {
        puVar25 = (undefined8 *)(lVar29 + 0x260);
        plVar7 = *(longlong **)(lVar29 + 0x270);
      }
      uVar22 = *puVar25;
      uVar13 = puVar25[1];
      *(float *)(lVar17 + 0x48) = fVar32;
      *(undefined8 *)(lVar17 + 0x50) = uVar22;
      *(undefined8 *)(lVar17 + 0x58) = uVar13;
      *(longlong **)(lVar17 + 0x60) = plVar7;
    }
    lVar17 = param_1[0x39];
    if (lVar17 == 0) {
      puVar25 = &DAT_14c8464e0;
      uVar41 = SUB84(DAT_14c8464f0,0);
      uVar42 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar41 = (undefined4)*(undefined8 *)(lVar17 + 0x270);
      uVar42 = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 0x270) >> 0x20);
      puVar25 = (undefined8 *)(lVar17 + 0x260);
    }
    uVar22 = *puVar25;
    uVar13 = puVar25[1];
    uVar21 = FUN_140ccfc10();
    local_408 = (double)((ulonglong)local_408 & 0xffffffffffffff00);
    local_3e0 = local_3e0 & 0xffffffff00000000;
    FUN_140a8b8c6(param_1[0x76] + 0x1a8,&local_408);
    FUN_140ccfb96(uVar21);
    lVar17 = DAT_14c9a3da0;
    if ((longlong)(int)local_3e0 != 0) {
      lVar30 = (longlong)(int)local_3e0 + -1;
      lVar29 = lVar30 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar29),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar29));
      if (*(longlong *)(lVar17 + lVar29) != 0) {
        FUN_1400020a8();
      }
      lVar17 = DAT_14c9a3da0;
      iVar27 = (int)lVar30;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar27;
      }
      *(undefined4 *)(lVar17 + lVar29) = 0xffffffff;
      iVar23 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar23 = DAT_14c9a3dd0;
      }
      *(int *)(lVar17 + 4 + lVar29) = iVar23;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar20 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar20 = DAT_14c9a3dc0;
      }
      iVar23 = iVar27 + 0x1f;
      if (-1 < iVar27) {
        iVar23 = iVar27;
      }
      bVar16 = (byte)lVar30 & 0x1f;
      DAT_14c9a3dd0 = iVar27;
      *(uint *)(puVar20 + (longlong)(iVar23 >> 5) * 4) =
           *(uint *)(puVar20 + (longlong)(iVar23 >> 5) * 4) &
           (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
      local_3e0 = local_3e0 & 0xffffffff00000000;
    }
    if ((local_408._0_1_ == '\x03') && (local_3f8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_3f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3f8 + 0x10))();
      }
    }
    local_4b8 = CONCAT44(uVar42,uVar41);
    local_4c8 = uVar22;
    uStack_4c0 = uVar13;
    uVar22 = FUN_1447210f0(param_1);
    FUN_140ccfdcb(uVar22,&local_4c8);
  }
  if ((local_f0 ^ (ulonglong)auStack_528) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440ba8c0 FUN_1440ba8c0 body=41 status=ok
// SIG undefined FUN_1440ba8c0(void)

void FUN_1440ba8c0(void)

{
  DAT_14cbc2928 = 0;
  if (DAT_14cbc2920 != 0) {
    FUN_1400020a8();
  }
  FUN_145d68c26();
  return;
}



// FUNCTION 1440ba8ea FUN_1440ba8ea body=44 status=ok
// SIG undefined FUN_1440ba8ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440ba8ea(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbc2944 = _DAT_14cbc2944 + -1;
  *param_1 = DAT_14cbc2938;
  DAT_14cbc2938 = param_1;
  return;
}



// FUNCTION 1440ba996 FUN_1440ba996 body=45 status=ok
// SIG undefined FUN_1440ba996(void)

ulonglong FUN_1440ba996(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x15a0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)(param_1 + -0x460) + 0x688))(param_1 + -0x460);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}



// FUNCTION 1440ba9c4 FUN_1440ba9c4 body=4157 status=ok
// SIG undefined FUN_1440ba9c4(void)

void FUN_1440ba9c4(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 uVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  void *_Src;
  code *pcVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined4 uVar22;
  int iVar23;
  byte *pbVar24;
  ulonglong uVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  longlong *plVar29;
  bool bVar30;
  undefined1 auStack_3c8 [32];
  byte *local_3a8;
  longlong local_3a0;
  ulonglong local_398;
  longlong local_390;
  ulonglong local_388;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  double local_370;
  code *local_368 [2];
  undefined8 *local_358;
  char local_328 [16];
  longlong *local_318;
  int local_300;
  void *local_2f8;
  uchar auStack_2f0 [8];
  longlong local_2e8;
  undefined1 local_2d8 [32];
  byte local_2b8;
  undefined4 local_220 [2];
  longlong local_218;
  longlong local_210;
  longlong lStack_208;
  undefined8 local_200;
  longlong lStack_1f8;
  undefined8 local_1f0;
  undefined **local_1e8;
  undefined *local_1e0;
  longlong local_1d8;
  ulonglong uStack_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  longlong local_198 [8];
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  uint local_148;
  uint local_144;
  longlong local_140;
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined2 local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  byte local_d8 [32];
  byte local_b8 [48];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  if (*(byte *)(param_1 + 0x2f) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_3c8);
  }
  local_68 = 0;
  local_3a0 = param_2;
  FUN_140056680(&local_1b8,L"Enter");
  (*(code *)(&PTR_FUN_14a1842f0)[local_68])(&local_88);
  local_88 = (undefined4)local_1b8;
  uStack_84 = local_1b8._4_4_;
  uStack_80 = (int)uStack_1b0;
  uStack_7c = uStack_1b0._4_4_;
  local_68 = 4;
  local_3a8 = (byte *)&local_88;
  FUN_140d767d6(&local_2f8,&DAT_14cbc29f0,3,L"Begin");
  if ((*(longlong *)((longlong)local_2f8 + 0x3c) == 0) ||
     (*(char *)((longlong)local_2f8 + 0x38) < (char)auStack_2f0[0])) {
    pbVar24 = local_d8;
  }
  else {
    pbVar24 = local_b8 + 8;
  }
  pbVar24[0x20] = 0;
  FUN_140056680(&local_1b8,L"Enter");
  (*(code *)(&PTR_FUN_14a1842f0)[pbVar24[0x20]])(pbVar24);
  *(undefined4 *)pbVar24 = (undefined4)local_1b8;
  *(undefined4 *)(pbVar24 + 4) = local_1b8._4_4_;
  *(int *)(pbVar24 + 8) = (int)uStack_1b0;
  *(undefined4 *)(pbVar24 + 0xc) = uStack_1b0._4_4_;
  pbVar24[0x20] = 4;
  local_3a8 = pbVar24;
  FUN_140d767d6(local_220,&DAT_14cbc29f0,3,L"Begin");
  FUN_140d76846(&local_1b8,local_220);
  (*(code *)(&PTR_FUN_14a1842f0)[(ulonglong)local_1e0 & 0xff])(&local_200);
  if (local_210 != 0) {
    FUN_1400020a8();
  }
  lVar28 = local_3a0;
  (*(code *)(&PTR_FUN_14a1842f0)[local_2b8])(local_2d8);
  if (local_2e8 != 0) {
    FUN_1400020a8();
  }
  if ((*(longlong *)(local_1b8 + 0x3c) != 0) && ((char)uStack_1b0 <= (char)local_1b8[0x38])) {
    lVar28 = FUN_145adaa3c(param_1,lVar28);
    if (lVar28 == 0) {
      uVar13 = 0;
      iVar23 = 0;
    }
    else {
      uVar13 = *(uint *)(lVar28 + 0xc);
      if ((int)uVar13 < DAT_14c9647dc) {
        lVar27 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
      }
      else {
        lVar27 = 0;
      }
      iVar23 = *(int *)(lVar27 + 0x10);
      if (*(int *)(lVar27 + 0x10) == 0) {
        LOCK();
        iVar23 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar30 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar23;
        if (bVar30) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar23 = *(int *)(lVar27 + 0x10);
        bVar30 = iVar23 == 0;
        if (bVar30) {
          *(int *)(lVar27 + 0x10) = iVar12;
          iVar23 = 0;
        }
        UNLOCK();
        if (bVar30) {
          iVar23 = iVar12;
        }
      }
    }
    uVar15 = local_148;
    uVar16 = DAT_14c9a3c28;
    if ((*(longlong *)(local_1b8 + 0x3c) != 0) && ((char)uStack_1b0 <= (char)local_1b8[0x38])) {
      lVar27 = (longlong)(int)local_148;
      local_148 = local_148 + 1;
      if (local_144 < local_148) {
        FUN_141225836(&local_150,uVar15);
      }
      lVar19 = CONCAT44(uStack_14c,local_150);
      lVar27 = lVar27 * 0x40;
      *(undefined8 *)(lVar19 + lVar27) = uVar16;
      *(ulonglong *)(lVar19 + 8 + lVar27) = CONCAT44(iVar23,uVar13);
      puVar2 = (undefined8 *)(lVar19 + 0x10 + lVar27);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar19 + 0x20 + lVar27);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar19 + 0x30 + lVar27);
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_1404eec70(0,0);
    }
    local_2f8 = (void *)0x0;
    auStack_2f0[0] = '\0';
    auStack_2f0[1] = '\0';
    auStack_2f0[2] = '\0';
    auStack_2f0[3] = '\0';
    auStack_2f0[4] = '\0';
    auStack_2f0[5] = '\0';
    auStack_2f0[6] = '\0';
    auStack_2f0[7] = '\0';
    CoCreateGuid((GUID *)&local_2f8);
    FUN_14111b8d6(local_1b8,lVar28,(GUID *)&local_2f8);
    FUN_140d76916(&local_1b8);
    if ((*(longlong *)(local_1b8 + 0x3c) != 0) && ((char)uStack_1b0 <= (char)local_1b8[0x38])) {
      plVar29 = (longlong *)FUN_14027bf48();
      lVar28 = plVar29[1];
      uVar13 = (int)lVar28 + 1;
      *(uint *)(plVar29 + 1) = uVar13;
      if (*(uint *)((longlong)plVar29 + 0xc) < uVar13) {
        FUN_140eed74c();
      }
      _Src = DAT_14cbc2bf8;
      plVar29 = (longlong *)((longlong)(int)lVar28 * 0x30 + *plVar29);
      local_2f8 = (void *)0x0;
      lVar28 = (longlong)DAT_14cbc2c00;
      auStack_2f0[0] = (undefined1)DAT_14cbc2c00;
      auStack_2f0[1] = DAT_14cbc2c00._1_1_;
      auStack_2f0[2] = DAT_14cbc2c00._2_1_;
      auStack_2f0[3] = DAT_14cbc2c00._3_1_;
      if (lVar28 == 0) {
        uVar14._0_1_ = '\0';
        uVar14._1_1_ = '\0';
        uVar14._2_1_ = '\0';
        uVar14._3_1_ = '\0';
        uVar22._0_1_ = '\0';
        uVar22._1_1_ = '\0';
        uVar22._2_1_ = '\0';
        uVar22._3_1_ = '\0';
      }
      else {
        FUN_1446dd670(&local_2f8,DAT_14cbc2c00,0);
        memcpy(local_2f8,_Src,lVar28 * 2);
        uVar22 = auStack_2f0._0_4_;
        uVar14 = auStack_2f0._4_4_;
      }
      *plVar29 = (longlong)local_2f8;
      *(undefined4 *)(plVar29 + 1) = uVar22;
      *(undefined4 *)((longlong)plVar29 + 0xc) = uVar14;
      *(undefined1 *)(plVar29 + 4) = 4;
      plVar29[5] = DAT_14cbc2ba8;
    }
    FUN_14027c70a(&local_1b8);
    lVar28 = local_3a0;
  }
  FUN_1404eec70(local_140,local_138 & 0xffffffff);
  if (local_140 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(CONCAT44(uStack_14c,local_150),local_148);
  if (CONCAT44(uStack_14c,local_150) != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(local_198 + 5);
  (*(code *)(&PTR_FUN_14a1842f0)[local_198[4] & 0xff])(local_198);
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  plVar29 = local_198;
  if (param_1 != (longlong *)0x0) {
    uVar16 = FUN_1401b0f18();
    plVar17 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar16);
    if (plVar17 != (longlong *)0x0) {
      uVar16 = FUN_1401b0f18();
      plVar18 = (longlong *)FUN_144718840(plVar17,uVar16);
      plVar29 = plVar17;
      if (((((plVar17 != plVar18) && (plVar18 != (longlong *)0x0)) &&
           (plVar17 = (longlong *)(**(code **)(*plVar18 + 0x28))(plVar18),
           plVar17 != (longlong *)0x0)) &&
          (plVar29 = plVar17, *(byte *)((longlong)plVar17 + 0x101) < 5)) &&
         ((*(byte *)((longlong)plVar17 + 0x101) != 4 || (plVar17[0x1b] == 0)))) {
        local_1b8 = (code *)0x0;
        uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
        FUN_1446efa72(&local_1b8,0,3,0x10);
        pcVar10 = local_1b8;
        uStack_1b0 = CONCAT44(uStack_1b0._4_4_,3);
        *(undefined ***)local_1b8 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar27 = DAT_14c758608 + 1;
        lVar28 = DAT_14c758608 + 1;
        if (lVar27 == 0) {
          LOCK();
          UNLOCK();
          lVar27 = DAT_14c758608 + 2;
          lVar28 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar28;
        *(longlong *)(local_1b8 + 0x10) = lVar27;
        *(undefined ***)local_1b8 = &PTR_FUN_14b95f4f0;
        *(longlong *)(local_1b8 + 0x18) = 0;
        uVar13 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_1b8 + 0x18) = uVar13;
        if ((int)uVar13 < DAT_14c9647dc) {
          lVar28 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
        }
        else {
          lVar28 = 0;
        }
        iVar23 = *(int *)(lVar28 + 0x10);
        if (*(int *)(lVar28 + 0x10) == 0) {
          LOCK();
          iVar23 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar30 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar23;
          if (bVar30) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
          }
          LOCK();
          iVar23 = *(int *)(lVar28 + 0x10);
          bVar30 = iVar23 == 0;
          if (bVar30) {
            *(int *)(lVar28 + 0x10) = iVar12;
            iVar23 = 0;
          }
          UNLOCK();
          if (bVar30) {
            iVar23 = iVar12;
          }
        }
        *(int *)(pcVar10 + 0x1c) = iVar23;
        *(longlong **)(pcVar10 + 0x20) = param_1;
        *(longlong *)(pcVar10 + 0x28) = local_3a0;
        if (((int)uStack_1b0 == 0) || (local_1b8 == (code *)0x0)) {
LAB_1440bb99b:
          if ((int)uStack_1b0 != 0) {
            if (local_1b8 == (code *)0x0) goto LAB_1440bac69;
            (*(code *)**(undefined8 **)local_1b8)(local_1b8,0);
            FUN_1446efa72(&local_1b8,0,0,0x10);
            goto LAB_1440bb209;
          }
        }
        else {
          cVar11 = (**(code **)(*(longlong *)local_1b8 + 0x30))();
          if (cVar11 == '\0') {
            goto LAB_1440bb99b;
          }
          plVar29 = plVar17 + 5;
          if (*(int *)((longlong)plVar17 + 0x3c) < 1) {
            iVar23 = (int)plVar17[6];
            iVar12 = (int)plVar17[7] + -1;
            *(int *)(plVar17 + 7) = iVar12;
            if (iVar12 <= iVar23) {
              iVar12 = iVar23;
              if (0 < iVar23) {
                iVar26 = 0;
                do {
                  if (((*(int *)(*plVar29 + 8 + (longlong)iVar26 * 0x10) == 0) ||
                      (plVar18 = *(longlong **)(*plVar29 + (longlong)iVar26 * 0x10),
                      plVar18 == (longlong *)0x0)) ||
                     (cVar11 = (**(code **)(*plVar18 + 0x28))(), cVar11 != '\0')) {
                    FUN_14005b288(plVar29,iVar26);
                    FUN_14005b248(plVar29);
                  }
                  else {
                    iVar26 = iVar26 + 1;
                  }
                  iVar12 = (int)plVar17[6];
                } while (iVar26 < iVar12);
              }
              iVar26 = 2;
              if (2 < iVar12 * 2) {
                iVar26 = iVar12 * 2;
              }
              *(int *)(plVar17 + 7) = iVar26;
              if ((iVar26 < iVar23) && (*(int *)((longlong)plVar17 + 0x34) != iVar12)) {
                FUN_14045812c();
              }
            }
          }
          if (((int)uStack_1b0 != 0) && (local_1b8 != (code *)0x0)) {
            (**(code **)(*(longlong *)local_1b8 + 0x38))(local_1b8,&local_2f8);
          }
          iVar23 = (int)plVar17[6];
          *(uint *)(plVar17 + 6) = iVar23 + 1U;
          if (*(uint *)((longlong)plVar17 + 0x34) < iVar23 + 1U) {
            FUN_1447a71f6(plVar29,iVar23);
          }
          lVar28 = *plVar29;
          lVar27 = (longlong)iVar23 * 0x10;
          *(undefined8 *)(lVar28 + lVar27) = 0;
          *(undefined4 *)(lVar28 + 8 + lVar27) = 0;
          *(code **)(lVar28 + lVar27) = local_1b8;
          local_1b8 = (code *)0x0;
          *(int *)(lVar28 + 8 + lVar27) = (int)uStack_1b0;
LAB_1440bb209:
          uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
        }
        if (local_1b8 != (code *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_1440bac69;
      }
    }
  }
  if (lVar28 != 0) {
    local_1b8 = FUN_145b23ba4;
    uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
    FUN_14661f4ec(lVar28 + 0x3268,&local_2f8,param_1);
    if ((longlong)(int)param_1[0x28c] != 0) {
      uVar6 = *(undefined1 *)(local_3a0 + 0x3260);
      lVar28 = param_1[0x28b];
      lVar27 = (longlong)(int)param_1[0x28c] * 0x88;
      do {
        FUN_140f2f85c(lVar28,CONCAT71((int7)((ulonglong)plVar29 >> 8),uVar6) & 0xffffffff);
        lVar28 = lVar28 + 0x88;
        lVar27 = lVar27 + -0x88;
      } while (lVar27 != 0);
    }
    lVar27 = local_3a0;
    lVar28 = *(longlong *)(local_3a0 + 0xf40);
    if (lVar28 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar28);
    }
    bVar7 = DAT_14c950c29;
    param_1[0x2e2] = lVar28;
    if ((lVar28 != 0) && ((bVar7 & 1) != 0)) {
      FUN_1456cec3c(lVar28);
      lVar28 = param_1[0x2e2];
    }
    param_1[0x2e4] = lVar28;
    FUN_1414a9a2a(param_1);
    FUN_148cdd0f4(param_1 + 0x3d7,param_1,param_1[0x2e2]);
    if (param_1[0x2e0] != 0) {
      FUN_1458af080();
    }
    lVar28 = (**(code **)(*(longlong *)(param_1[0x2e2] + 0x3c20) + 0x28))(param_1[0x2e2] + 0x3c20);
    if ((lVar28 != 0) && (0 < *(int *)(lVar28 + 0xac))) {
      FUN_1459c2608(param_1[0x2e2],1);
    }
    if (param_1[0x2e2] != 0) {
      lVar28 = param_1[0x341];
      FUN_14583ea82(param_1[0x2e2],0);
      (**(code **)(*(longlong *)param_1[0x2e2] + 0x328))((longlong *)param_1[0x2e2],&local_380);
      param_1[0x2f8] = (longlong)local_370;
      *(undefined4 *)(param_1 + 0x2f6) = local_380;
      *(undefined4 *)((longlong)param_1 + 0x17b4) = uStack_37c;
      *(undefined4 *)(param_1 + 0x2f7) = uStack_378;
      *(undefined4 *)((longlong)param_1 + 0x17bc) = uStack_374;
      FUN_1414aa5b0(param_1);
      lVar19 = FUN_1402a1246(lVar27);
      if (lVar19 != 0) {
        *(undefined1 *)(lVar19 + 0xe0a) = 1;
      }
      if ((char)param_1[0x2f] == '\x03') {
        *(byte *)(param_1 + 0xc) =
             *(byte *)(param_1 + 0xc) & 0xf7 | *(byte *)(param_1[0x2e2] + 0x60) & 8;
      }
      lVar19 = param_1[0x2e0];
      if (lVar28 != 0 && lVar19 != 0) {
        dVar3 = *(double *)(lVar28 + 0x670);
        dVar4 = *(double *)(lVar28 + 0x668);
        dVar5 = *(double *)(lVar28 + 0x660);
        *(undefined1 *)(lVar19 + 0x19c0) = 1;
        *(double *)(lVar19 + 0x19a8) = (double)CONCAT44(uStack_37c,local_380) * dVar5;
        *(double *)(lVar19 + 0x19b0) = (double)CONCAT44(uStack_374,uStack_378) * dVar4;
        *(double *)(lVar19 + 0x19b8) = local_370 * dVar3;
      }
      lVar28 = param_1[0x340];
      iVar23 = 0;
      if (lVar28 != 0) {
        iVar23 = *(int *)(lVar28 + 0xf38) * *(int *)(lVar28 + 0xf48);
      }
      FUN_145c7ae66(param_1 + 0x496,iVar23);
      lVar28 = param_1[0x340];
      uVar25 = 0;
      while( true ) {
        iVar23 = 0;
        if (lVar28 != 0) {
          iVar23 = *(int *)(lVar28 + 0xf48);
        }
        if ((longlong)iVar23 <= (longlong)uVar25) break;
        uVar13 = *(uint *)(lVar27 + 0x3990);
        iVar23 = 0;
        while( true ) {
          iVar12 = 0;
          if (lVar28 != 0) {
            iVar12 = *(int *)(lVar28 + 0xf38);
          }
          if (iVar12 <= iVar23) break;
          if ((((lVar28 != 0) && ((char)param_1[0x2f] == '\x03')) &&
              (lVar28 = FUN_1447210f0(param_1), lVar28 != 0)) &&
             ((longlong)uVar25 < (longlong)*(int *)(param_1[0x340] + 0xf48))) {
            lVar28 = *(longlong *)(param_1[0x340] + 0xf40);
            lVar19 = *(longlong *)(lVar28 + 8 + uVar25 * 0x68);
            plVar29 = (longlong *)(lVar28 + uVar25 * 0x68);
            if (lVar19 == 0) {
              uVar16 = FUN_14042c486();
              lVar19 = FUN_14477b664(uVar16);
              plVar29[1] = lVar19;
            }
            lVar28 = plVar29[2];
            if (lVar28 == 0) {
              if (lVar19 == 0) {
                lVar28 = 0;
              }
              else {
                lVar28 = 0;
                if (*plVar29 != 0) {
                  plVar17 = *(longlong **)(lVar19 + 0xb8);
                  if ((plVar17 == (longlong *)0x0) ||
                     (cVar11 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar11 == '\0')) {
                    lVar28 = 0;
                  }
                  else {
                    uVar16 = (**(code **)(*plVar17 + 0x110))(plVar17);
                    lVar28 = FUN_144aff482(uVar16,plVar29);
                  }
                  plVar29[2] = lVar28;
                }
              }
            }
            uVar16 = FUN_1447210f0(param_1);
            uVar20 = FUN_141416a8c();
            lVar19 = FUN_14598a5d0(uVar16,uVar20,param_1,param_1);
            if (lVar19 != 0 && lVar28 != 0) {
              uVar15 = *(uint *)(lVar19 + 0xc);
              local_388 = (ulonglong)uVar15;
              if ((int)uVar15 < DAT_14c9647dc) {
                lVar27 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
              }
              else {
                lVar27 = 0;
              }
              uVar15 = *(uint *)(lVar27 + 0x10);
              if (*(uint *)(lVar27 + 0x10) == 0) {
                LOCK();
                iVar12 = DAT_14c964868 + 1;
                UNLOCK();
                local_398._0_4_ = DAT_14c964868 + 1;
                bVar30 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar12;
                if (bVar30) {
                  local_398 = (ulonglong)(uint)local_398;
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,local_398);
                }
                LOCK();
                uVar15 = *(uint *)(lVar27 + 0x10);
                bVar30 = uVar15 == 0;
                if (bVar30) {
                  *(uint *)(lVar27 + 0x10) = (uint)local_398;
                  uVar15 = 0;
                }
                UNLOCK();
                if (bVar30) {
                  uVar15 = (uint)local_398;
                }
              }
              local_398 = (ulonglong)uVar15;
              local_158 = 0;
              local_150 = 0;
              local_1b8 = (code *)0x0;
              uStack_1b0 = 0;
              local_1a8 = 0;
              uStack_1a0 = 0;
              local_198[0] = 0;
              local_198[1] = 0;
              local_198[2] = 0;
              local_198[3] = 0;
              local_198[4] = 0;
              local_198[5] = 0;
              uStack_14c = 0x80;
              local_148 = 0xffffffff;
              local_144 = 0;
              local_138 = 0;
              local_130 = 0;
              local_108 = 0;
              local_118 = 0;
              uStack_110 = 0;
              local_128 = 0;
              uStack_120 = 0;
              local_100 = 0xf;
              local_f8 = 1;
              local_f4 = 0;
              uStack_ec = 0;
              uVar16 = FUN_1401e6c61();
              local_220[0] = FUN_140df7d8e(local_3a0,uVar16);
              local_1f0 = 0;
              local_200 = 0;
              lStack_1f8 = 0;
              local_210 = 0;
              lStack_208 = 0;
              local_218 = lVar28;
              FUN_140265f12();
              local_1e0 = &DAT_14cb83310;
              local_1d8 = 0;
              uStack_1d0 = 0;
              local_1e8 = &PTR_FUN_14b1828b0;
              local_1c8 = 0;
              uStack_1c0 = 0;
              uVar16 = FUN_1447210f0(param_1);
              local_328[0] = '\0';
              local_300 = 0;
              FUN_1456bb102(local_328,uVar16);
              FUN_140368c94(local_220,&local_2f8,local_328,0);
              FUN_140a6a9d4(&local_1b8);
              FUN_140368b56(&local_2f8);
              if ((longlong)local_300 != 0) {
                lVar28 = (longlong)local_300 + -1;
                local_390 = DAT_14c9a3da0;
                lVar27 = lVar28 * 0x10;
                FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar27),
                              *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar27));
                if (*(longlong *)(local_390 + lVar27) != 0) {
                  FUN_1400020a8();
                }
                lVar9 = DAT_14c9a3da0;
                iVar12 = (int)lVar28;
                if (DAT_14c9a3dd4 != 0) {
                  *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
                }
                *(undefined4 *)(lVar9 + lVar27) = 0xffffffff;
                iVar26 = -1;
                if (0 < DAT_14c9a3dd4) {
                  iVar26 = DAT_14c9a3dd0;
                }
                *(int *)(lVar9 + 4 + lVar27) = iVar26;
                DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                puVar21 = DAT_14c9a3dc0;
                if (DAT_14c9a3dc0 == (undefined *)0x0) {
                  puVar21 = &DAT_14c9a3db0;
                }
                iVar26 = iVar12 + 0x1f;
                if (-1 < iVar12) {
                  iVar26 = iVar12;
                }
                bVar7 = (byte)lVar28 & 0x1f;
                DAT_14c9a3dd0 = iVar12;
                *(uint *)(puVar21 + (longlong)(iVar26 >> 5) * 4) =
                     *(uint *)(puVar21 + (longlong)(iVar26 >> 5) * 4) &
                     (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
                local_300 = 0;
              }
              if ((local_328[0] == '\x03') && (local_318 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_318 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_318 + 0x10))();
                }
              }
              lVar27 = local_3a0;
              if (local_1b8 != (code *)0x0) {
                if ((longlong)(int)uStack_1a0 != 0) {
                  lVar28 = 0;
                  do {
                    if (*(longlong *)(local_1a8 + lVar28) == 0) goto LAB_1440bb6e5;
                    lVar28 = lVar28 + 8;
                  } while ((longlong)(int)uStack_1a0 * 8 != lVar28);
                }
                lVar28 = (local_398 << 0x20) + local_388;
                local_368[0] = (code *)0x0;
                local_358 = (undefined8 *)0x0;
                local_358 = (undefined8 *)FUN_14001cc68(0x28,8);
                *local_358 = &PTR_FUN_14b95f5d0;
                local_358[1] = param_1;
                local_358[2] = lVar28;
                *(int *)(local_358 + 3) = (int)uVar25;
                *(int *)((longlong)local_358 + 0x1c) = iVar23;
                *(bool *)(local_358 + 4) = uVar25 == uVar13;
                if (local_358 + 1 != (undefined8 *)0x0) {
                  local_368[0] = FUN_1440c58c0;
                }
                FUN_140f6405a(lVar19,&local_1b8,local_368);
              }
LAB_1440bb6e5:
              if (local_1c8 != 0) {
                FUN_1400020a8();
              }
              local_1e8 = (undefined **)&DAT_14a171d50;
              uVar8 = uStack_1d0 >> 0x20;
              uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
              if ((int)uVar8 != 0) {
                FUN_140115c12(&local_1d8,0);
              }
              local_1e0 = (undefined *)0x0;
              if (local_1d8 != 0) {
                FUN_1400020a8();
              }
              if (lStack_1f8 != 0) {
                FUN_1400020a8();
              }
              if (lStack_208 != 0) {
                FUN_1400020a8();
              }
              FUN_140368b56(&local_1b8);
            }
          }
          iVar23 = iVar23 + 1;
          lVar28 = param_1[0x340];
        }
        uVar25 = uVar25 + 1;
      }
    }
    FUN_1414b167c(lVar27,param_1);
    FUN_14661f5ec(param_1);
  }
LAB_1440bac69:
  if ((local_60 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440bba28 FUN_1440bba28 body=1728 status=ok
// SIG undefined FUN_1440bba28(void)

/* WARNING: Removing unreachable block (ram,0x0001440bc066) */

void FUN_1440bba28(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  char param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  code *pcVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  undefined8 ****ppppuVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 ****ppppuVar15;
  undefined4 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 **local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 **local_118;
  char local_110 [8];
  undefined8 local_108;
  longlong *local_100;
  longlong local_f8;
  char local_f0;
  undefined4 local_e8 [2];
  char local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 **local_a0;
  ushort local_98;
  byte local_90;
  undefined8 ***local_88 [3];
  ushort local_70;
  byte local_68;
  undefined8 ***local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar4 = *param_1;
  lVar12 = *(longlong *)(param_4 + 0x18);
  if (lVar12 == 0) {
    local_88[0] = *(undefined8 ****)(param_4 + 8);
    FUN_1446dcdd4(local_110);
    lVar12 = FUN_1448fdc6e(local_110);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_4 + 0x18) = lVar12;
    if (lVar12 != 0) goto LAB_1440bba66;
  }
  else {
LAB_1440bba66:
    pcVar5 = (char *)param_1[1];
    local_110[0] = *pcVar5;
    if (local_110[0] == '\x01') {
      local_110[0] = '\x02';
      if (*(longlong *)(pcVar5 + 8) == 0) {
        local_108._0_4_ = 0;
        iVar9 = 0;
        uVar3 = (uint)local_108;
      }
      else {
        uVar3 = *(uint *)(*(longlong *)(pcVar5 + 8) + 0xc);
        local_108 = (ulonglong)uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar17 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar17 = 0;
        }
        iVar9 = *(int *)(lVar17 + 0x10);
        if (*(int *)(lVar17 + 0x10) == 0) {
          LOCK();
          iVar9 = DAT_14c964868 + 1;
          UNLOCK();
          iVar14 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar14);
          }
          LOCK();
          iVar9 = *(int *)(lVar17 + 0x10);
          bVar19 = iVar9 == 0;
          if (bVar19) {
            *(int *)(lVar17 + 0x10) = iVar14;
            iVar9 = 0;
          }
          UNLOCK();
          uVar3 = (uint)local_108;
          if (bVar19) {
            iVar9 = iVar14;
          }
        }
      }
      local_108._0_4_ = uVar3;
      local_108 = CONCAT44(iVar9,(uint)local_108);
    }
    else if (local_110[0] == '\x02') {
      local_108 = *(ulonglong *)(pcVar5 + 8);
    }
    else if (local_110[0] == '\x03') {
      local_108 = *(undefined8 *)(pcVar5 + 8);
      local_100 = *(longlong **)(pcVar5 + 0x10);
      if (local_100 == (longlong *)0x0) {
        local_f8 = *(longlong *)(pcVar5 + 0x18);
        local_f0 = pcVar5[0x20];
      }
      else {
        LOCK();
        *(int *)((longlong)local_100 + 0xc) = *(int *)((longlong)local_100 + 0xc) + 1;
        UNLOCK();
        local_f8 = *(longlong *)(pcVar5 + 0x18);
        local_f0 = pcVar5[0x20];
      }
    }
    local_e8[0] = 0;
    if (*(int *)(pcVar5 + 0x28) != 0) {
      uVar11 = FUN_1448174c4(local_e8);
      FUN_1400e08b0(uVar11,DAT_14c9a3da0 + (longlong)*(int *)(pcVar5 + 0x28) * 0x10 + -0x10);
    }
    local_e0 = '\0';
    local_b8[0] = 0;
    FUN_1400606f6(local_88,lVar12);
    ppppuVar10 = (undefined8 ****)local_58;
    if ((undefined8 ****)local_58 == (undefined8 ****)0x0) {
      ppppuVar10 = local_88;
    }
    ppppuVar15 = (undefined8 ****)&DAT_14c9a40e0;
    if (0 < local_50) {
      ppppuVar15 = ppppuVar10;
    }
    puVar16 = &local_b0;
    FUN_1400603ec(puVar16,lVar12,ppppuVar15);
    ppppuVar10 = (undefined8 ****)local_58;
    if ((undefined8 ****)local_58 == (undefined8 ****)0x0) {
      ppppuVar10 = local_88;
    }
    FUN_1446fdf58(ppppuVar10,local_50);
    if ((undefined8 ****)local_58 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
    if (local_90 == 4) {
      local_118 = local_a0;
      local_128 = local_b0;
      uStack_124 = uStack_ac;
      uStack_120 = uStack_a8;
      uStack_11c = uStack_a4;
      local_90 = 4;
    }
    else {
      FUN_1400b56fe(local_88,&local_b0,4);
      ppppuVar10 = (undefined8 ****)&DAT_14c9ab228;
      if (local_68 != 0) {
        ppppuVar10 = local_88;
      }
      local_118 = ppppuVar10[2];
      local_128 = *(undefined4 *)ppppuVar10;
      uStack_124 = *(undefined4 *)((longlong)ppppuVar10 + 4);
      uStack_120 = *(undefined4 *)(ppppuVar10 + 1);
      uStack_11c = *(undefined4 *)((longlong)ppppuVar10 + 0xc);
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar6 != (code *)0x0) {
        ppppuVar10 = local_88;
        if (0x18 < local_70) {
          ppppuVar10 = (undefined8 ****)local_88[0];
        }
        (*pcVar6)(ppppuVar10);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(local_88[0]);
      }
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_98) {
        puVar16 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
      }
      (*pcVar6)(puVar16);
    }
    if (0x18 < local_98) {
      FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
    }
    FUN_1448173f8(local_b8);
    if (local_e0 != '\0') {
      if (local_e0 == '\x01') {
        local_d8 = 0;
      }
      else if ((local_e0 == '\x03') && (local_d0 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d0 + 0x10))();
        }
      }
      local_e0 = '\0';
    }
    FUN_1448173f8(local_e8);
    if ((local_110[0] == '\x03') && (local_100 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_100 + 0x10))();
      }
    }
    local_148 = local_128;
    uStack_144 = uStack_124;
    uStack_140 = uStack_120;
    uStack_13c = uStack_11c;
    local_138 = local_118;
    local_158 = 0;
    FUN_140d93b16(param_2,&local_148,0,0);
  }
  lVar12 = *(longlong *)(lVar4 + 0x1700);
  if (lVar12 != 0) {
    local_110[0] = '\0';
    local_e8[0] = 0;
    FUN_1456bb102(local_110,lVar4);
    if ((longlong)*(int *)(param_3 + 200) != 0) {
      puVar13 = *(undefined8 **)(param_3 + 0xc0);
      lVar17 = (longlong)*(int *)(param_3 + 200) * 0xe8;
      do {
        uVar11 = FUN_1443454f2(puVar13,*(undefined4 *)(lVar12 + 0x1d00));
        FUN_140b00610(lVar4,param_2,*puVar13,uVar11);
        puVar13 = puVar13 + 0x1d;
        lVar17 = lVar17 + -0xe8;
      } while (lVar17 != 0);
    }
    FUN_1448173f8(local_e8);
    if ((local_110[0] == '\x03') && (local_100 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_100 + 0x10))();
      }
    }
  }
  if (param_5 == '\0') goto LAB_1440bbf28;
  lVar12 = *(longlong *)(lVar4 + 0x540);
  if (lVar12 == 0) {
    uVar11 = FUN_140aff5aa();
    lVar12 = FUN_14477b664(uVar11);
    *(longlong *)(lVar4 + 0x540) = lVar12;
  }
  plVar2 = (longlong *)(lVar4 + 0x538);
  lVar17 = *(longlong *)(lVar4 + 0x548);
  if (lVar17 == 0) {
    if ((lVar12 == 0) || (*plVar2 == 0)) goto LAB_1440bbf28;
    plVar7 = *(longlong **)(lVar12 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar8 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar8 == '\0')) {
      *(undefined8 *)(lVar4 + 0x548) = 0;
      goto LAB_1440bbf28;
    }
    uVar11 = (**(code **)(*plVar7 + 0x110))(plVar7);
    lVar17 = FUN_144aff482(uVar11,plVar2);
    *(longlong *)(lVar4 + 0x548) = lVar17;
    if (lVar17 == 0) goto LAB_1440bbf28;
    lVar12 = *(longlong *)(lVar4 + 0x540);
  }
  if (lVar12 == 0) {
    uVar11 = FUN_140aff5aa();
    lVar12 = FUN_14477b664(uVar11);
    *(longlong *)(lVar4 + 0x540) = lVar12;
    lVar17 = *(longlong *)(lVar4 + 0x548);
    if (((lVar17 == 0) && (lVar17 = 0, lVar12 != 0)) && (*plVar2 != 0)) {
      plVar7 = *(longlong **)(lVar12 + 0xb8);
      if ((plVar7 == (longlong *)0x0) ||
         (cVar8 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar8 == '\0')) {
        lVar17 = 0;
      }
      else {
        uVar11 = (**(code **)(*plVar7 + 0x110))(plVar7);
        lVar17 = FUN_144aff482(uVar11,plVar2);
      }
      *(longlong *)(lVar4 + 0x548) = lVar17;
    }
  }
  if ((longlong)*(int *)(lVar17 + 0xa8) != 0) {
    puVar13 = *(undefined8 **)(lVar17 + 0xa0);
    puVar18 = puVar13 + (longlong)*(int *)(lVar17 + 0xa8) * 0x13;
    do {
      FUN_140b00610(lVar4,param_2,*puVar13,puVar13 + 1);
      puVar13 = puVar13 + 0x13;
    } while (puVar13 != puVar18);
  }
LAB_1440bbf28:
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440bc0ea FUN_1440bc0ea body=418 status=ok
// SIG undefined FUN_1440bc0ea(void)

void FUN_1440bc0ea(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [24];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x1a00);
  if (lVar1 == 0) goto LAB_1440bc1b6;
  lVar5 = *(longlong *)(lVar1 + 0x15e8);
  if (lVar5 == 0) {
    uVar4 = FUN_140067708();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0x15e8) = lVar5;
  }
  if (*(longlong *)(lVar1 + 0x15f0) == 0) {
    if ((lVar5 != 0) && (*(longlong *)(lVar1 + 0x15e0) != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(lVar1 + 0x15f0) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x15e0));
        *(longlong *)(lVar1 + 0x15f0) = lVar5;
        if (lVar5 != 0) goto LAB_1440bc137;
      }
    }
    if ((*(char *)(lVar1 + 0x15d0) == '\x01') && (*(longlong *)(lVar1 + 0x15d4) != 0))
    goto LAB_1440bc137;
    if ((param_2 == '\0') || (cVar3 = FUN_144904448(param_1 + 0x1b00), cVar3 != '\0'))
    goto LAB_1440bc1b6;
  }
  else {
LAB_1440bc137:
    if (param_2 == '\0') {
      local_68 = 0;
      FUN_140b32deb(local_60,param_1,*(longlong *)(param_1 + 0x1a00) + 0x15d0,
                    *(undefined8 *)(*(longlong *)(param_1 + 0x1a00) + 0x1598));
      goto LAB_1440bc1b6;
    }
  }
  local_68 = 0;
  FUN_140b32deb(&local_48,param_1,*(longlong *)(param_1 + 0x1a00) + 0x15a0,
                *(undefined8 *)(*(longlong *)(param_1 + 0x1a00) + 0x1598));
  *(undefined8 *)(param_1 + 0x1b00) = local_48;
  *(undefined8 *)(param_1 + 0x1b08) = local_40;
  *(undefined8 *)(param_1 + 0x1b10) = local_38;
LAB_1440bc1b6:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440bc292 FUN_1440bc292 body=943 status=ok
// SIG undefined FUN_1440bc292(void)

void FUN_1440bc292(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  
  lVar8 = 0x1a20;
  if (param_2 != '\0') {
    lVar8 = 0x1a70;
  }
  plVar1 = (longlong *)(*param_1 + lVar8);
  lVar8 = *param_1 + lVar8;
  puVar12 = (uint *)(lVar8 + 0x10);
  iVar2 = *(int *)(lVar8 + 0x28);
  if (iVar2 == 0) {
    uVar17 = 1;
    uVar10 = 0;
    iVar11 = 0;
    iVar3 = 0;
  }
  else {
    puVar6 = (uint *)plVar1[4];
    if ((uint *)plVar1[4] == (uint *)0x0) {
      puVar6 = puVar12;
    }
    uVar18 = *puVar6;
    if (uVar18 == 0) {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      uVar10 = 0;
      uVar17 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar17 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar17 == uVar10) goto LAB_1440bc434;
        iVar11 = iVar11 + 0x20;
        uVar18 = puVar6[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar17 = (ulonglong)(-uVar18 & uVar18);
    uVar16 = uVar17 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar3 = (iVar11 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 < iVar2) {
    uVar18 = 0xffffffff;
    do {
      lVar8 = (longlong)*(int *)(*plVar1 + 0x10 + (longlong)iVar3 * 0x20);
      if (lVar8 != 0) {
        lVar9 = *(longlong *)(*plVar1 + 8 + (longlong)iVar3 * 0x20);
        lVar15 = 0;
        do {
          plVar7 = *(longlong **)(lVar9 + lVar15);
          if ((plVar7 != (longlong *)0x0) && ((*(byte *)((longlong)plVar7 + 0x9e) & 0x10) != 0)) {
            (**(code **)(*plVar7 + 0x2b0))();
          }
          lVar15 = lVar15 + 8;
        } while (lVar8 * 8 != lVar15);
        iVar2 = (int)plVar1[5];
      }
      uVar18 = uVar18 & ~(uint)uVar17;
      puVar6 = (uint *)plVar1[4];
      if ((uint *)plVar1[4] == (uint *)0x0) {
        puVar6 = puVar12;
      }
      iVar3 = (int)uVar10;
      lVar8 = (longlong)iVar3;
      uVar4 = puVar6[lVar8] & uVar18;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar13 = iVar5;
        if (iVar5 < iVar3) {
          iVar13 = iVar3;
        }
        if (iVar5 <= iVar3) break;
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar4 = puVar6[lVar8 + lVar9 + 1];
          if (uVar4 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar13 - lVar8 == lVar9) goto LAB_1440bc434;
        }
        uVar10 = (ulonglong)(iVar3 + (int)lVar9 + 1);
        uVar18 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar4 & uVar4);
      uVar16 = uVar17 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar3 = (iVar11 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar2);
  }
LAB_1440bc434:
  iVar3 = (int)plVar1[9];
  if (1 < iVar3) {
    FUN_1413f3ec6(plVar1,0);
    *(undefined4 *)(plVar1 + 9) = 1;
    FUN_140b00a46(plVar1);
    return;
  }
  plVar7 = plVar1 + 7;
  if ((longlong *)plVar1[8] != (longlong *)0x0) {
    plVar7 = (longlong *)plVar1[8];
  }
  iVar11 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar11 = iVar3;
  }
  if ((int)plVar1[1] - *(int *)((longlong)plVar1 + 0x34) < iVar11 >> 2) {
    if (iVar2 != 0) {
      puVar6 = (uint *)plVar1[4];
      if ((uint *)plVar1[4] == (uint *)0x0) {
        puVar6 = puVar12;
      }
      uVar18 = *puVar6;
      if (uVar18 == 0) {
        iVar3 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar3 = iVar2 + -1;
        }
        uVar10 = 0;
        uVar17 = (ulonglong)(uint)(iVar3 >> 5);
        if (iVar3 >> 5 < 1) {
          uVar17 = uVar10;
        }
        iVar3 = 0;
        do {
          if (uVar17 == uVar10) goto LAB_1440bc480;
          iVar3 = iVar3 + 0x20;
          uVar18 = puVar6[uVar10 + 1];
          uVar10 = uVar10 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar10 = 0;
        iVar3 = 0;
      }
      uVar16 = (ulonglong)(-uVar18 & uVar18);
      uVar17 = uVar16 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar11 = (iVar3 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      if (iVar11 < iVar2) {
        uVar18 = 0xffffffff;
        do {
          *(undefined4 *)
           ((longlong)plVar7 + (longlong)*(int *)(*plVar1 + 0x1c + (longlong)iVar11 * 0x20) * 4) =
               0xffffffff;
          uVar18 = ~(uint)uVar16 & uVar18;
          puVar6 = (uint *)plVar1[4];
          if ((uint *)plVar1[4] == (uint *)0x0) {
            puVar6 = puVar12;
          }
          iVar5 = (int)plVar1[5];
          iVar11 = (int)uVar10;
          lVar8 = (longlong)iVar11;
          uVar4 = puVar6[lVar8] & uVar18;
          if (uVar4 == 0) {
            iVar13 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar13 = iVar5 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar3 = iVar3 + 0x20;
            iVar14 = iVar13;
            if (iVar13 < iVar11) {
              iVar14 = iVar11;
            }
            if (iVar11 < iVar13) {
              lVar9 = 0;
              do {
                uVar4 = puVar6[lVar8 + lVar9 + 1];
                if (uVar4 != 0) {
                  uVar10 = (ulonglong)(iVar11 + (int)lVar9 + 1);
                  uVar18 = 0xffffffff;
                  goto LAB_1440bc5ea;
                }
                iVar3 = iVar3 + 0x20;
                lVar9 = lVar9 + 1;
              } while (iVar14 - lVar8 != lVar9);
              uVar18 = 0xffffffff;
              iVar11 = iVar14;
            }
            uVar10 = (ulonglong)(iVar11 + 1);
            iVar11 = iVar5;
          }
          else {
LAB_1440bc5ea:
            uVar16 = (ulonglong)(-uVar4 & uVar4);
            uVar17 = uVar16 * 2 + 1;
            lVar8 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            iVar11 = (iVar3 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
            if (iVar5 <= iVar11) {
              iVar11 = iVar5;
            }
          }
        } while (iVar11 != iVar2);
      }
    }
  }
  else if (iVar3 == 1) {
    lVar8 = 0;
    do {
      *(undefined4 *)((longlong)plVar7 + lVar8 * 4) = 0xffffffff;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)plVar1[9]);
  }
LAB_1440bc480:
  FUN_1413f3ec6(plVar1,0);
  return;
}



// FUNCTION 1440bc666 FUN_1440bc666 body=1369 status=ok
// SIG undefined FUN_1440bc666(void)

void FUN_1440bc666(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  
  plVar2 = *(longlong **)(param_1 + 0x1228);
  if (plVar2 != (longlong *)0x0) {
    lVar7 = (**(code **)(*plVar2 + 0x6d8))(plVar2);
    dVar1 = (double)plVar2[0x37d];
    uVar3 = *param_2;
    lVar4 = *(longlong *)(param_1 + 0x1528);
    lVar9 = *(longlong *)(lVar4 + 0x1380);
    if (lVar9 == 0) {
      uVar8 = FUN_1407f787c();
      lVar9 = FUN_14477b664(uVar8);
      *(longlong *)(lVar4 + 0x1380) = lVar9;
    }
    lVar10 = *(longlong *)(lVar4 + 5000);
    if (((lVar10 == 0) && (lVar10 = 0, lVar9 != 0)) && (*(longlong *)(lVar4 + 0x1378) != 0)) {
      plVar5 = *(longlong **)(lVar9 + 0xb8);
      if ((plVar5 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar6 == '\0')) {
        lVar10 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar10 = FUN_144aff482(uVar8,(longlong *)(lVar4 + 0x1378));
      }
      *(longlong *)(lVar4 + 5000) = lVar10;
    }
    FUN_1447997cc(uVar3,lVar10,(float)dVar1,0,0);
    dVar1 = (double)plVar2[0x37e];
    uVar3 = *param_2;
    lVar4 = *(longlong *)(param_1 + 0x1528);
    lVar9 = *(longlong *)(lVar4 + 0x1398);
    if (lVar9 == 0) {
      uVar8 = FUN_1407f787c();
      lVar9 = FUN_14477b664(uVar8);
      *(longlong *)(lVar4 + 0x1398) = lVar9;
    }
    lVar10 = *(longlong *)(lVar4 + 0x13a0);
    if (((lVar10 == 0) && (lVar10 = 0, lVar9 != 0)) && (*(longlong *)(lVar4 + 0x1390) != 0)) {
      plVar5 = *(longlong **)(lVar9 + 0xb8);
      if ((plVar5 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar6 == '\0')) {
        lVar10 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar10 = FUN_144aff482(uVar8,(longlong *)(lVar4 + 0x1390));
      }
      *(longlong *)(lVar4 + 0x13a0) = lVar10;
    }
    FUN_1447997cc(uVar3,lVar10,(float)dVar1,0,0);
    uVar3 = *param_2;
    uVar11 = *(undefined4 *)((longlong)plVar2 + 0x1cf4);
    lVar4 = *(longlong *)(param_1 + 0x1528);
    lVar9 = *(longlong *)(lVar4 + 0x13b0);
    if (lVar9 == 0) {
      uVar8 = FUN_1407f787c();
      lVar9 = FUN_14477b664(uVar8);
      *(longlong *)(lVar4 + 0x13b0) = lVar9;
    }
    lVar10 = *(longlong *)(lVar4 + 0x13b8);
    if (((lVar10 == 0) && (lVar10 = 0, lVar9 != 0)) && (*(longlong *)(lVar4 + 0x13a8) != 0)) {
      plVar5 = *(longlong **)(lVar9 + 0xb8);
      if ((plVar5 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar6 == '\0')) {
        lVar10 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar10 = FUN_144aff482(uVar8,(longlong *)(lVar4 + 0x13a8));
      }
      *(longlong *)(lVar4 + 0x13b8) = lVar10;
    }
    FUN_1447997cc(uVar3,lVar10,uVar11,0,0);
    uVar3 = *param_2;
    uVar11 = *(undefined4 *)(param_1 + 0x1600);
    lVar4 = *(longlong *)(param_1 + 0x1528);
    lVar9 = *(longlong *)(lVar4 + 0x1410);
    if (lVar9 == 0) {
      uVar8 = FUN_1407f787c();
      lVar9 = FUN_14477b664(uVar8);
      *(longlong *)(lVar4 + 0x1410) = lVar9;
    }
    lVar10 = *(longlong *)(lVar4 + 0x1418);
    if (((lVar10 == 0) && (lVar10 = 0, lVar9 != 0)) && (*(longlong *)(lVar4 + 0x1408) != 0)) {
      plVar5 = *(longlong **)(lVar9 + 0xb8);
      if ((plVar5 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar6 == '\0')) {
        lVar10 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar10 = FUN_144aff482(uVar8,(longlong *)(lVar4 + 0x1408));
      }
      *(longlong *)(lVar4 + 0x1418) = lVar10;
    }
    FUN_1447997cc(uVar3,lVar10,uVar11,0,0);
    uVar3 = *param_2;
    cVar6 = FUN_1402096b0(*(undefined8 *)(param_1 + 0x1228));
    if (cVar6 == '\0') {
      uVar11 = 0;
    }
    else {
      uVar11 = 0x3f800000;
    }
    lVar4 = *(longlong *)(param_1 + 0x1528);
    lVar9 = *(longlong *)(lVar4 + 0x13c8);
    if (lVar9 == 0) {
      uVar8 = FUN_1407f787c();
      lVar9 = FUN_14477b664(uVar8);
      *(longlong *)(lVar4 + 0x13c8) = lVar9;
    }
    lVar10 = *(longlong *)(lVar4 + 0x13d0);
    if (((lVar10 == 0) && (lVar10 = 0, lVar9 != 0)) && (*(longlong *)(lVar4 + 0x13c0) != 0)) {
      plVar5 = *(longlong **)(lVar9 + 0xb8);
      if ((plVar5 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar6 == '\0')) {
        lVar10 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar10 = FUN_144aff482(uVar8,(longlong *)(lVar4 + 0x13c0));
      }
      *(longlong *)(lVar4 + 0x13d0) = lVar10;
    }
    FUN_1447997cc(uVar3,lVar10,uVar11,0,0);
    uVar3 = *param_2;
    if (lVar7 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_14020975c(lVar7);
    }
    lVar4 = *(longlong *)(param_1 + 0x1528);
    lVar9 = *(longlong *)(lVar4 + 0x13e0);
    if (lVar9 == 0) {
      uVar8 = FUN_1407f787c();
      lVar9 = FUN_14477b664(uVar8);
      *(longlong *)(lVar4 + 0x13e0) = lVar9;
    }
    lVar7 = *(longlong *)(lVar4 + 0x13e8);
    if (((lVar7 == 0) && (lVar7 = 0, lVar9 != 0)) && (*(longlong *)(lVar4 + 0x13d8) != 0)) {
      plVar5 = *(longlong **)(lVar9 + 0xb8);
      if ((plVar5 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar6 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar7 = FUN_144aff482(uVar8,(longlong *)(lVar4 + 0x13d8));
      }
      *(longlong *)(lVar4 + 0x13e8) = lVar7;
    }
    FUN_1447997cc(uVar3,lVar7,uVar11,0,0);
    uVar3 = *param_2;
    lVar7 = plVar2[0x39a];
    lVar4 = *(longlong *)(param_1 + 0x1528);
    lVar9 = *(longlong *)(lVar4 + 0x13f8);
    if (lVar9 == 0) {
      uVar8 = FUN_1407f787c();
      lVar9 = FUN_14477b664(uVar8);
      *(longlong *)(lVar4 + 0x13f8) = lVar9;
    }
    lVar10 = *(longlong *)(lVar4 + 0x1400);
    if (((lVar10 == 0) && (lVar10 = 0, lVar9 != 0)) && (*(longlong *)(lVar4 + 0x13f0) != 0)) {
      plVar2 = *(longlong **)(lVar9 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar6 == '\0')) {
        lVar10 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar10 = FUN_144aff482(uVar8,(longlong *)(lVar4 + 0x13f0));
      }
      *(longlong *)(lVar4 + 0x1400) = lVar10;
    }
    FUN_1447997cc(uVar3,lVar10,(int)lVar7,0,0);
    return;
  }
  return;
}



// FUNCTION 1440bcbc0 FUN_1440bcbc0 body=81 status=ok
// SIG undefined FUN_1440bcbc0(void)

longlong * FUN_1440bcbc0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar1 = *(longlong **)(param_1 + -0x310);
  plVar3 = &DAT_14c846480;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1 + 0x48;
  }
  plVar4 = param_2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar4 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar4 = plVar4 + 1;
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x4a8))(plVar1,param_2,param_3,0);
  }
  return param_2;
}



// FUNCTION 1440bcd4a FUN_1440bcd4a body=358 status=ok
// SIG undefined FUN_1440bcd4a(void)

longlong FUN_1440bcd4a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = *(longlong *)(param_1 + 0x228);
  if (lVar7 == 0) {
    if ((longlong)*(int *)(param_1 + 0x30) == 0) {
      lVar7 = 0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x28);
      plVar1 = plVar9 + *(int *)(param_1 + 0x30);
      lVar7 = 0;
      do {
        plVar2 = (longlong *)*plVar9;
        if (plVar2 != (longlong *)0x0) {
          lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
          lVar5 = FUN_140076f80();
          if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)) {
            lVar4 = FUN_143d57208(plVar2 + 8);
            if (((lVar4 != 0) && (lVar5 = FUN_144a74fb4(), lVar5 != 0)) &&
               ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
                 == lVar5 + 0x30)))) {
              FUN_14886b9b0(plVar2 + 8,&local_58);
              lVar4 = local_58;
              lVar5 = (longlong)local_50;
              if (lVar5 != 0) {
                lVar8 = 0;
                do {
                  lVar3 = *(longlong *)(lVar4 + lVar8);
                  if (lVar3 != 0) {
                    lVar6 = FUN_141027778();
                    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                         (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
                      lVar7 = (**(code **)(*(longlong *)(lVar3 + 0x50) + 0x20))(lVar3 + 0x50);
                      goto LAB_1440bcd75;
                    }
                  }
                  lVar8 = lVar8 + 8;
                } while (lVar5 << 3 != lVar8);
              }
            }
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar1);
    }
  }
LAB_1440bcd75:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 1440bcebe FUN_1440bcebe body=59 status=ok
// SIG undefined FUN_1440bcebe(void)

void FUN_1440bcebe(longlong param_1)

{
  longlong lVar1;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  else {
    lVar1 = 0;
  }
  *(longlong *)(param_1 + 0x40) = lVar1;
  return;
}



// FUNCTION 1440bcefa FUN_1440bcefa body=180 status=ok
// SIG undefined FUN_1440bcefa(void)

void FUN_1440bcefa(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((*(byte *)(param_1 + 0xd0) | 2) == 3) {
    return;
  }
  if (((((*(longlong *)(param_1 + 0xc0) != 0) &&
        (plVar2 = *(longlong **)(param_1 + 0x78), plVar2 != (longlong *)0x0)) &&
       (*(int *)(param_1 + 0x74) != 0)) &&
      ((uVar1 = *(uint *)(param_1 + 0x70), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) &&
     ((lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0 &&
      ((*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x74) &&
       ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))))) {
    (**(code **)(*plVar2 + 0x30))
              (plVar2,CONCAT31((int3)(*(uint *)(lVar4 + 8) >> 8),
                               *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 0x40)));
  }
  FUN_140cfb2cc(param_1,0);
  if (*(char *)(param_1 + 0xd0) == '\0') {
    uVar3 = 3;
  }
  else {
    if (*(char *)(param_1 + 0xd0) != '\x02') {
      return;
    }
    uVar3 = 1;
  }
  FUN_1440bd36e(param_1,uVar3);
  return;
}



// FUNCTION 1440bcfae FUN_1440bcfae body=959 status=ok
// SIG undefined FUN_1440bcfae(void)

void FUN_1440bcfae(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_140cfb332(param_1,0);
  if (*(char *)(param_1 + 0x1a8) == '\0') {
    FUN_1414118b8(param_1,1);
  }
  if (*(char *)(param_1 + 0x1a9) == '\0') {
    if ((*(longlong **)(param_1 + 0xa8) != (longlong *)0x0) && (*(int *)(param_1 + 0xa4) != 0)) {
      uVar1 = *(uint *)(param_1 + 0xa0);
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0xa4))) &&
           ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
          uVar2 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x10))();
          local_58 = &local_48;
          local_38 = 0x700000006;
          uStack_30 = 0xf00000010;
          local_48 = 0;
          uStack_44 = 1;
          uStack_40 = 2;
          uStack_3c = 5;
          local_28 = 0x11;
          local_50 = 9;
          local_68 = 0;
          FUN_140f718e4(uVar2,&DAT_14cbc2ce8,*(undefined8 *)(param_1 + 0x48));
          FUN_1409e8d8c(uVar2,&DAT_14cbc2ce8,1,&DAT_14c9a8414);
        }
      }
    }
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      FUN_1400bc96c(*(longlong *)(param_1 + 0xb0) + 0x1218,&DAT_14cbc2cd0);
    }
  }
  if (((*(char *)(param_1 + 0x1aa) == '\0') && (*(longlong **)(param_1 + 0x58) != (longlong *)0x0))
     && (*(int *)(param_1 + 0x54) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x50);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar6 != 0) &&
         ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x54) &&
          ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
        lVar6 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))();
        FUN_1400bc96c(lVar6 + 0x18,&DAT_14cbc2cd0);
        FUN_1400bc96c(lVar6 + 0x40,&DAT_14cbc2cd0);
      }
    }
  }
  if ((*(longlong **)(param_1 + 0x68) != (longlong *)0x0) && (*(int *)(param_1 + 100) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x60);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 100))) &&
         ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
        lVar6 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x20))();
        if (lVar6 != 0) {
          if (*(char *)(param_1 + 0x1ab) == '\x01') {
            FUN_1400bc96c(lVar6 + 0x90,&DAT_14cbc2cd0);
          }
          if (*(char *)(param_1 + 0x1ac) == '\x01') {
            FUN_1400bc96c(lVar6 + 0xb8,&DAT_14cbc2cd0);
          }
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x1e1) == '\x01') {
    FUN_14588d13e(*(undefined8 *)(param_1 + 0x48));
  }
  if (*(char *)(param_1 + 0x1e0) == '\x01') {
    FUN_145a29b0b(*(undefined8 *)(param_1 + 0x48));
  }
  if (*(char *)(param_1 + 0x1e2) == '\x01') {
    FUN_1460ad2ce(*(undefined8 *)(param_1 + 0x48));
  }
  if (((*(longlong *)(param_1 + 0x88) != 0) && (*(int *)(param_1 + 0x84) != 0)) &&
     ((uVar1 = *(uint *)(param_1 + 0x80), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
    lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x84))) &&
       ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
      lVar6 = FUN_140bed534(param_1 + 0xd8);
      if (lVar6 != 0) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
        uVar3 = FUN_140bed534(param_1 + 0xd8);
        FUN_14084412e(uVar2,&DAT_14cbc2cd0,uVar3);
      }
    }
  }
  if ((*(char *)(param_1 + 0x1e3) == '\0') &&
     (plVar4 = *(longlong **)(param_1 + 0x48), plVar4 != (longlong *)0x0)) {
    uVar2 = FUN_140d929b2();
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar2);
    if (plVar4 != (longlong *)0x0) {
      uVar2 = FUN_140d929b2();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar2);
      if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
        (**(code **)(*plVar5 + 0x28))(plVar5,DAT_14cbc2cf8,1);
      }
    }
  }
  FUN_1440bd36e(param_1,1);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440bd36e FUN_1440bd36e body=128 status=ok
// SIG undefined FUN_1440bd36e(void)

void FUN_1440bd36e(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0xd0) == param_2) {
switchD_1440bd3cd_default:
    return;
  }
  *(char *)(param_1 + 0xd0) = param_2;
  if ((*(longlong *)(param_1 + 0x48) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x48) + 0x178) == '\x03')) {
    *(char *)(param_1 + 0x238) = param_2;
    FUN_1418d8502(param_1);
  }
  FUN_14036fbfe(param_1);
  switch(*(undefined1 *)(param_1 + 0xd0)) {
  case 0:
    break;
  case 1:
    param_1 = param_1 + 0x10;
    break;
  case 2:
    param_1 = param_1 + 0x20;
    break;
  case 3:
    param_1 = param_1 + 0x30;
    break;
  default:
    goto switchD_1440bd3cd_default;
  }
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 1440bd3ee FUN_1440bd3ee body=105 status=ok
// SIG undefined FUN_1440bd3ee(void)

void FUN_1440bd3ee(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 unaff_RBX;
  
  if (((*(char *)(param_1 + 0x161) == '\x01') && (*(char *)(param_1 + 0xd0) == '\x01')) &&
     (*(longlong *)(param_1 + 0xb0) != 0)) {
    cVar3 = FUN_14586148a();
    if ((cVar3 == '\0') && ((*(byte *)(param_1 + 0xd0) & 0xfe) != 2)) {
      uVar1 = *(undefined1 *)(param_1 + 0x162);
      uVar2 = FUN_140963a30(param_1 + 0x108);
      FUN_1440bd69a(param_1,uVar2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
      return;
    }
  }
  return;
}



// FUNCTION 1440bd458 FUN_1440bd458 body=466 status=ok
// SIG undefined FUN_1440bd458(void)

void FUN_1440bd458(longlong param_1,char param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar6 = *(longlong **)(param_1 + 0x78);
  if (((((plVar6 == (longlong *)0x0) || (*(int *)(param_1 + 0x74) == 0)) ||
       (uVar3 = *(uint *)(param_1 + 0x70), (int)uVar3 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar3 ||
       (lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar7 == 0)))) ||
     ((*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x74) ||
      ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)))) goto LAB_1440bd4c4;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0xc0) + 0x18,param_1);
    plVar6 = *(longlong **)(param_1 + 0x78);
  }
  uVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,param_3);
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x50))();
  FUN_140dc01da(uVar5,&local_38,uVar4);
  plVar1 = local_30;
  *(undefined8 *)(param_1 + 0xc0) = local_38;
  local_38 = 0;
  plVar6 = *(longlong **)(param_1 + 200);
  if (local_30 == plVar6) {
LAB_1440bd586:
    plVar6 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
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
    local_30 = (longlong *)0x0;
    *(longlong **)(param_1 + 200) = plVar1;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      goto LAB_1440bd586;
    }
  }
  if (param_2 == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  if ((*(longlong *)(param_1 + 0x48) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x48) + 0x178) == '\x03')) {
    if (*(longlong *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    FUN_14661fa44(*(longlong *)(param_1 + 0xc0) + 0x18,&local_38,param_1);
    if (param_2 == '\0') {
      if (*(char *)(param_1 + 0xd0) == '\x02') {
        FUN_14037010a(param_1);
      }
      else if (*(char *)(param_1 + 0xd0) == '\0') {
        FUN_1440bcfae(param_1);
      }
    }
  }
LAB_1440bd4c4:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440bd63e FUN_1440bd63e body=92 status=ok
// SIG undefined FUN_1440bd63e(void)

void FUN_1440bd63e(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  
  FUN_1440bd36e(param_1,0);
  if (param_3 != '\0') {
    FUN_140cfb2cc(param_1,1);
  }
  FUN_140cfb332(param_1,1);
  lVar1 = FUN_140963a30(param_1 + 0xd8);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0x100);
  }
  FUN_1440bd458(param_1,uVar2,param_2);
  return;
}



// FUNCTION 1440bd69a FUN_1440bd69a body=92 status=ok
// SIG undefined FUN_1440bd69a(void)

void FUN_1440bd69a(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  
  FUN_1440bd36e(param_1,2);
  if (param_3 != '\0') {
    FUN_140cfb2cc(param_1,1);
  }
  FUN_140cfb332(param_1,1);
  lVar1 = FUN_140963a30(param_1 + 0x108);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0x130);
  }
  FUN_1440bd458(param_1,uVar2,param_2);
  return;
}



// FUNCTION 1440bd6f6 FUN_1440bd6f6 body=97 status=ok
// SIG undefined FUN_1440bd6f6(void)

undefined8 FUN_1440bd6f6(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1412c0c36();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1412c0c36();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001440bd753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 1440bed76 FUN_1440bed76 body=333 status=ok
// SIG undefined FUN_1440bed76(void)

void FUN_1440bed76(longlong param_1,undefined1 param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x1c))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
        plVar2 = (longlong *)FUN_148cdf2f4();
        if (((((plVar2 != (longlong *)0x0) && ((char)plVar2[0x2f] == '\x03')) &&
             (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) &&
            ((*(int *)(param_1 + 0x1c) != 0 && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1))
            )) && ((int)uVar1 < DAT_14c9647dc)) {
          lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x1c))) &&
             ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
            lVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
            if (lVar3 != 0) {
              (**(code **)(*plVar2 + 0x578))(plVar2);
              *(undefined1 *)(lVar3 + 1) = param_2;
              if (((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) &&
                  (*(int *)(param_1 + 0x1c) != 0)) &&
                 ((uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1 &&
                  ((int)uVar1 < DAT_14c9647dc)))) {
                lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x1c))) &&
                   ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
                  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))();
                  param_2 = *(undefined1 *)(lVar3 + 1);
                }
              }
              FUN_148cd8c3a(param_1,param_2);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1440beec4 FUN_1440beec4 body=112 status=ok
// SIG undefined FUN_1440beec4(void)

undefined8 FUN_1440beec4(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x1c))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
        lVar3 = FUN_148cdf2f4();
        if (lVar3 != 0) {
          uVar2 = FUN_1447210f0(lVar3);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1440bef34 FUN_1440bef34 body=2217 status=ok
// SIG undefined FUN_1440bef34(void)

void FUN_1440bef34(longlong param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int7 iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  float fVar15;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined8 *local_40;
  int local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) goto switchD_1440bf0da_default;
  if (((*(int *)(param_1 + 0x1c) == 0) || (uVar3 = *(uint *)(param_1 + 0x18), (int)uVar3 < 0)) ||
     (DAT_14c9647dc <= (int)uVar3)) {
switchD_1440bf0da_caseD_0:
    if ((*(longlong *)(param_1 + 0x20) == 0) || (iVar4 = *(int *)(param_1 + 0x1c), iVar4 == 0))
    goto switchD_1440bf0da_default;
    uVar3 = *(uint *)(param_1 + 0x18);
    if (((-1 < (int)uVar3) &&
        ((((int)uVar3 < DAT_14c9647dc &&
          (lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar11 != 0)) &&
         (*(int *)(lVar11 + 0x10) == iVar4)))) && ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)) {
      if (*(longlong *)(param_1 + 0x68) == 0) {
        if (*(longlong *)(param_1 + 0x440) == 0) goto switchD_1440bf0da_caseD_5;
        if ((longlong)*(int *)(param_1 + 0x458) != 0) {
          lVar11 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x450) + lVar11) == 0)
            goto switchD_1440bf0da_caseD_5;
            lVar11 = lVar11 + 8;
          } while ((longlong)*(int *)(param_1 + 0x458) * 8 != lVar11);
        }
      }
      if (*(longlong *)(param_1 + 0x430) == 0) goto switchD_1440bf0da_caseD_5;
      lVar11 = FUN_148cdf8ed();
      cVar2 = *(char *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x578) = 0;
      if (((*(longlong *)(param_1 + 0x20) != 0) &&
          ((*(int *)(param_1 + 0x1c) != 0 && (uVar3 = *(uint *)(param_1 + 0x18), -1 < (int)uVar3))))
         && ((((int)uVar3 < DAT_14c9647dc &&
              (((lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar12 != 0
                && (*(int *)(lVar12 + 0x10) == *(int *)(param_1 + 0x1c))) &&
               ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)))) &&
             (plVar6 = (longlong *)FUN_148cdf2f4(), plVar6 != (longlong *)0x0)))) {
        uVar7 = FUN_140b040c0();
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar7);
        if (plVar6 != (longlong *)0x0) {
          uVar7 = FUN_140b040c0();
          plVar8 = (longlong *)FUN_144718840(plVar6,uVar7);
          if (((plVar8 != (longlong *)0x0 && plVar6 != plVar8) &&
              (lVar12 = (**(code **)(*plVar8 + 0x20))(plVar8), lVar12 != 0)) &&
             (lVar11 = FUN_1402b9204(lVar12,lVar11 + (ulonglong)(cVar2 != '\0') * 8 + 0x30),
             lVar11 != 0)) {
            uVar3 = *(uint *)(lVar11 + 0xc);
            *(uint *)(param_1 + 0x578) = uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar13 = 0;
            }
            iVar4 = *(int *)(lVar13 + 0x10);
            if (*(int *)(lVar13 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar10 = DAT_14c964868 + 1;
              bVar14 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar14) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar10);
              }
              LOCK();
              iVar4 = *(int *)(lVar13 + 0x10);
              bVar14 = iVar4 == 0;
              if (bVar14) {
                *(int *)(lVar13 + 0x10) = iVar10;
                iVar4 = 0;
              }
              UNLOCK();
              if (bVar14) {
                iVar4 = iVar10;
              }
            }
            *(int *)(param_1 + 0x57c) = iVar4;
            FUN_148cda6c4(&local_40,param_1);
            uVar7 = *(undefined8 *)(lVar11 + 0x30);
            plVar6 = *(longlong **)(lVar11 + 0x38);
            if (plVar6 == (longlong *)0x0) {
              local_48 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
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
              LOCK();
              *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
              UNLOCK();
              local_48 = plVar6;
            }
            local_50 = uVar7;
            FUN_14123f11a(lVar12,2,&local_50,&local_40);
            if (local_48 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)local_48 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_48 + 0x10))();
              }
            }
            if (plVar6 != (longlong *)0x0) {
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
            if (local_38 != 0) {
              if (local_40 == (undefined8 *)0x0) goto LAB_1440bf26a;
              (**(code **)*local_40)(local_40,0);
              FUN_1446efa72(&local_40,0,0,0x10);
              local_38 = 0;
            }
            if (local_40 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
LAB_1440bf26a:
      FUN_1440bfa2e(param_1);
      goto switchD_1440bf0da_default;
    }
    goto LAB_1440bf055;
  }
  lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  if (((lVar11 == 0) || (*(int *)(lVar11 + 0x10) != *(int *)(param_1 + 0x1c))) ||
     (((*(uint *)(lVar11 + 8) & 0x10200000) != 0 ||
      (lVar11 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))(), lVar11 == 0))))
  goto switchD_1440bf0da_caseD_0;
  switch(*(undefined1 *)(lVar11 + 1)) {
  case 0:
    goto switchD_1440bf0da_caseD_0;
  case 1:
    lVar11 = *(longlong *)(param_1 + 0x30);
    if ((((lVar11 == 0) || (*(char *)(lVar11 + 0x30) != '\0')) || (*(char *)(lVar11 + 0x31) != '\0')
        ) || ((*(int *)(lVar11 + 0x6c) != 2 || ((*(byte *)(param_1 + 0x58c) & 1) != 0)))) break;
    if (*(char *)(param_1 + 0x48) == '\x01') {
      FUN_1440c1ed2(param_1,1);
      FUN_1440c1326(param_1,1);
      goto LAB_1440bf1c5;
    }
    if ((((*(int *)(param_1 + 0x57c) != 0) && (uVar3 = *(uint *)(param_1 + 0x578), -1 < (int)uVar3))
        && (((int)uVar3 < DAT_14c9647dc &&
            (((plVar6 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
              plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_1 + 0x57c))) &&
             ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))))) && (lVar11 = *plVar6, lVar11 != 0)) {
      if ((*(longlong *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x1c) == 0)) {
LAB_1440bf32f:
        uVar7 = 0;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x18);
        uVar7 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          if (((lVar12 == 0) || (*(int *)(lVar12 + 0x10) != *(int *)(param_1 + 0x1c))) ||
             ((*(uint *)(lVar12 + 8) & 0x10200000) != 0)) goto LAB_1440bf32f;
          uVar7 = FUN_148cdf2f4();
        }
      }
      lVar12 = FUN_140f48a60(uVar7);
      if ((lVar12 != 0) &&
         (lVar12 = FUN_1402b91c4((ulonglong)*(byte *)(lVar12 + 0x3c0) * 0x138 + lVar12 + 0x18),
         lVar12 != lVar11)) break;
    }
    if (((*(longlong *)(param_1 + 0x20) != 0) &&
        (((((*(int *)(param_1 + 0x1c) != 0 && (uVar3 = *(uint *)(param_1 + 0x18), -1 < (int)uVar3))
           && ((int)uVar3 < DAT_14c9647dc)) &&
          ((lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar11 != 0 &&
           (*(int *)(lVar11 + 0x10) == *(int *)(param_1 + 0x1c))))) &&
         ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)))) &&
       (plVar6 = (longlong *)FUN_148cdf2f4(), plVar6 != (longlong *)0x0)) {
      uVar7 = FUN_1407ca880();
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar7);
      if (plVar6 != (longlong *)0x0) {
        uVar7 = FUN_1407ca880();
        plVar8 = (longlong *)FUN_144718840(plVar6,uVar7);
        if (plVar8 != (longlong *)0x0 && plVar6 != plVar8) {
          uVar7 = (**(code **)(*plVar8 + 0x50))(plVar8);
          uVar5 = FUN_1458993e6();
          FUN_140d92a98(uVar7,&local_40,uVar5);
          if (local_40 != (undefined8 *)0x0) {
            lVar11 = local_40[6];
            lVar12 = FUN_140ed0e8c();
            iVar4 = *(int *)(lVar12 + 0x38);
            iVar9 = (int7)(int3)((uint)iVar4 >> 8);
            if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < iVar4) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
                lVar12 + 0x30)) {
              FUN_1440c1ed2(param_1,CONCAT71(iVar9,1));
              FUN_1440c1326(param_1,1);
              FUN_1440bfa2e(param_1);
            }
            else {
              plVar6 = (longlong *)CONCAT44(uStack_34,local_38);
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                UNLOCK();
              }
              if (*(char *)(local_40 + 0x24) == '\x02') {
                FUN_1440c1ed2(param_1,CONCAT71(iVar9,1));
                FUN_1440c1326(param_1,1);
                FUN_1440bfa2e(param_1);
              }
              if (plVar6 != (longlong *)0x0) {
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
            }
          }
          plVar6 = (longlong *)CONCAT44(uStack_34,local_38);
          if (plVar6 != (longlong *)0x0) {
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
        }
      }
    }
    break;
  case 2:
    if (*(char *)(param_1 + 0x2c) == '\x01') goto LAB_1440bf1c5;
    break;
  case 3:
    if (((*(longlong *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
       ((uVar3 = *(uint *)(param_1 + 0x18), -1 < (int)uVar3 &&
        (((((int)uVar3 < DAT_14c9647dc &&
           (lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar11 != 0)) &&
          (*(int *)(lVar11 + 0x10) == *(int *)(param_1 + 0x1c))) &&
         (((*(uint *)(lVar11 + 8) & 0x10200000) == 0 &&
          (plVar6 = (longlong *)FUN_148cdf2f4(), plVar6 != (longlong *)0x0)))))))) {
      uVar7 = FUN_140b040c0();
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar7);
      if (plVar6 != (longlong *)0x0) {
        uVar7 = FUN_140b040c0();
        plVar8 = (longlong *)FUN_144718840(plVar6,uVar7);
        if ((plVar8 != (longlong *)0x0 && plVar6 != plVar8) &&
           (lVar11 = (**(code **)(*plVar8 + 0x20))(plVar8), lVar11 != 0)) {
          lVar12 = FUN_148cdf8ed();
          lVar12 = FUN_1402b9204(lVar11,lVar12 + (ulonglong)(*(char *)(param_1 + 0x58) != '\0') * 8
                                        + 0x30);
          if ((lVar12 != 0) && (lVar11 = FUN_1402b91c4(lVar11 + 0x288), lVar11 == lVar12)) break;
        }
      }
    }
    FUN_1440c1ed2(param_1,0);
LAB_1440bf1c5:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  case 4:
    lVar11 = FUN_1440beec4(param_1);
    fVar15 = 0.0;
    if (lVar11 != 0) {
      fVar15 = *(float *)(lVar11 + 0x930);
    }
    if (0.0 <= *(float *)(param_1 + 0x28)) {
      if (1.0 <= fVar15 - *(float *)(param_1 + 0x28)) goto LAB_1440bf1c5;
      break;
    }
  case 5:
switchD_1440bf0da_caseD_5:
    if ((*(longlong *)(param_1 + 0x20) != 0) && (iVar4 = *(int *)(param_1 + 0x1c), iVar4 != 0)) {
LAB_1440bf055:
      uVar3 = *(uint *)(param_1 + 0x18);
      if (((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) &&
         ((lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar11 != 0 &&
          ((*(int *)(lVar11 + 0x10) == iVar4 && ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)))))) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
    }
  }
switchD_1440bf0da_default:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440bf802 FUN_1440bf802 body=555 status=ok
// SIG undefined FUN_1440bf802(void)

void FUN_1440bf802(longlong param_1)

{
  undefined2 **ppuVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined2 *local_58;
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  DAT_14cbc2d14 = DAT_14cbc2d14 + 1;
  FUN_140002266(&local_58,L"NPCGiveTake%d");
  puVar6 = local_58;
  if ((int)local_50 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_48,puVar6,1);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  local_40 = (ulonglong)DAT_14c892e8c;
  local_38 = local_48;
  local_30 = 0;
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar5 = FUN_14050fd64();
  FUN_140b0c6f6(uVar5,&local_58,&local_40);
  plVar2 = local_50;
  ppuVar1 = (undefined2 **)(param_1 + 0x30);
  if (ppuVar1 != &local_58) {
    *(undefined2 **)(param_1 + 0x30) = local_58;
    local_58 = (undefined2 *)0x0;
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (local_50 != plVar4) {
      local_50 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x38) = plVar2;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
  }
  plVar2 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  puVar6 = *ppuVar1;
  if (*(int *)(puVar6 + 0x30) < 1) {
    FUN_148cda1f2(local_68,param_1);
    FUN_140844560(puVar6,&local_58,local_68);
    if (*(longlong *)(param_1 + 0x520) != 0) {
      (**(code **)(*(longlong *)*ppuVar1 + 8))(*ppuVar1,param_1 + 0x520,0);
    }
    if (*(longlong *)(param_1 + 0x548) != 0) {
      (**(code **)(*(longlong *)*ppuVar1 + 8))(*ppuVar1,param_1 + 0x548,0);
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
      (**(code **)(*(longlong *)*ppuVar1 + 8))(*ppuVar1,param_1 + 0x68,0);
    }
    FUN_1407d097e(*ppuVar1);
  }
  if ((*(char *)(param_1 + 0x58) == '\x01') && (*(longlong *)(param_1 + 0x440) != 0)) {
    if ((longlong)*(int *)(param_1 + 0x458) != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x450) + lVar7) == 0) goto LAB_1440bf98f;
        lVar7 = lVar7 + 8;
      } while ((longlong)*(int *)(param_1 + 0x458) * 8 != lVar7);
    }
    FUN_1440c1692(param_1,1);
  }
LAB_1440bf98f:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440bfa2e FUN_1440bfa2e body=302 status=ok
// SIG undefined FUN_1440bfa2e(void)

void FUN_1440bfa2e(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (((((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
     ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x1c) &&
      (((*(uint *)(lVar3 + 8) & 0x10200000) == 0 &&
       (lVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))(), lVar3 != 0)))))) {
    switch(*(undefined1 *)(lVar3 + 1)) {
    case 0:
      goto switchD_1440bfadf_caseD_0;
    case 1:
      uVar2 = 2;
      break;
    case 2:
      FUN_1440bed76(param_1,3);
      lVar3 = FUN_1440beec4(param_1);
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(lVar3 + 0x930);
      }
      *(undefined4 *)(param_1 + 0x28) = uVar4;
      FUN_1440c1e0e(param_1);
      return;
    case 3:
      FUN_1440bed76(param_1,4);
      lVar3 = FUN_1440beec4(param_1);
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(lVar3 + 0x930);
      }
      *(undefined4 *)(param_1 + 0x28) = uVar4;
      return;
    case 4:
      uVar2 = 5;
      break;
    default:
      return;
    }
    FUN_1440bed76(param_1,uVar2);
    return;
  }
switchD_1440bfadf_caseD_0:
  FUN_1440bed76(param_1,1);
  lVar3 = FUN_1440beec4(param_1);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(lVar3 + 0x930);
  }
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  FUN_1440bf802(param_1);
  return;
}



// FUNCTION 1440bfb5c FUN_1440bfb5c body=277 status=ok
// SIG undefined FUN_1440bfb5c(void)

void FUN_1440bfb5c(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  if ((((*(char *)(param_1 + 0x378) == '\x01') && (*(longlong *)(param_1 + 0x20) != 0)) &&
      (*(int *)(param_1 + 0x1c) != 0)) &&
     ((uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar3 != 0) &&
       ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      lVar3 = FUN_148cdf2f4();
      if ((lVar3 != 0) && (*(char *)(param_1 + 0x584) == '\x01')) {
        local_40 = *(undefined8 *)(param_1 + 0x380);
        uVar2 = FUN_14477b664(*(undefined8 *)(param_1 + 0x388));
        local_38 = FUN_14477b664(uVar2);
        local_30 = *(undefined8 *)(param_1 + 0x390);
        FUN_148840f40(lVar3,param_1 + 0x580,&local_40);
        FUN_148841212(lVar3,param_1 + 0x580);
        if (*(char *)(param_1 + 0x584) == '\x01') {
          *(undefined1 *)(param_1 + 0x584) = 0;
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



// FUNCTION 1440bfc72 FUN_1440bfc72 body=1922 status=ok
// SIG undefined FUN_1440bfc72(void)

void FUN_1440bfc72(longlong param_1,char param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined4 local_240;
  undefined4 local_238;
  undefined8 local_230;
  wchar_t *local_228;
  code *local_220;
  undefined1 *local_218;
  code **local_210;
  code *local_208;
  code *local_200;
  code *local_1f8;
  longlong local_1f0;
  int local_1e8;
  undefined8 local_1e0;
  undefined **local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined **local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined1 local_184;
  undefined4 local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined2 local_148;
  undefined4 local_144;
  undefined2 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  longlong *local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined2 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  ulonglong local_6c;
  undefined8 local_60;
  undefined4 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_268;
  cVar3 = FUN_1440c03f6();
  if (cVar3 == '\0') goto LAB_1440bffb4;
  if (param_2 == '\0') {
    if ((((((*(int *)(param_1 + 0x588) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) &&
          (*(int *)(param_1 + 0x1c) != 0)) &&
         ((uVar4 = *(uint *)(param_1 + 0x18), -1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)))) &&
        (lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar9 != 0)) &&
       (((*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x1c) &&
         ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) && (lVar9 = FUN_148cdf2f4(), lVar9 != 0)))) {
      if (DAT_14cb6f900 == 0) {
        local_210 = &local_1f8;
        local_1f8 = FUN_1449e2820;
        local_200 = FUN_14081d0ea;
        local_208 = FUN_1427b09ee;
        local_218 = &LAB_1487a9c57;
        local_220 = FUN_146541d03;
        local_228 = L"Engine";
        local_230 = 0;
        local_238 = 0x10004001;
        local_240 = 8;
        local_248 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"Usable",&DAT_14cb6f900,&DAT_1487a9c56);
      }
      plVar5 = (longlong *)FUN_144718840(lVar9,DAT_14cb6f900);
      if (plVar5 != (longlong *)0x0) {
        uVar1 = *(undefined4 *)(param_1 + 0x588);
        uVar7 = (**(code **)(*plVar5 + 0x40))(plVar5);
        FUN_14573d240(uVar7,uVar1,1);
        *(undefined4 *)(param_1 + 0x588) = 0;
      }
    }
    goto LAB_1440bffb4;
  }
  if (((((*(int *)(param_1 + 0x588) != 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
       (*(int *)(param_1 + 0x1c) == 0)) ||
      ((uVar4 = *(uint *)(param_1 + 0x18), (int)uVar4 < 0 || (DAT_14c9647dc <= (int)uVar4)))) ||
     (((lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar9 == 0 ||
       ((*(int *)(lVar9 + 0x10) != *(int *)(param_1 + 0x1c) ||
        ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)))) || (lVar9 = FUN_148cdf2f4(), lVar9 == 0))))
  goto LAB_1440bffb4;
  if (DAT_14cb6f900 == 0) {
    local_210 = &local_1f8;
    local_1f8 = FUN_1449e2820;
    local_200 = FUN_14081d0ea;
    local_208 = FUN_1427b09ee;
    local_218 = &LAB_1487a9c57;
    local_220 = FUN_146541d03;
    local_228 = L"Engine";
    local_230 = 0;
    local_238 = 0x10004001;
    local_240 = 8;
    local_248 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"Usable",&DAT_14cb6f900,&DAT_1487a9c56);
  }
  plVar5 = (longlong *)FUN_144718840(lVar9,DAT_14cb6f900);
  if (plVar5 == (longlong *)0x0) goto LAB_1440bffb4;
  local_1f8 = (code *)(((ulonglong)local_1f8 >> 0x10 & 0xffff) << 0x10);
  local_1f0 = 0;
  local_1e8 = 0x10;
  local_1e0 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1d8 = &PTR_FUN_14b023b20;
  local_1c0 = &PTR_FUN_14b023b40;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = &PTR_FUN_14b00be70;
  local_1a0 = 0;
  local_198 = 0xf00000d0;
  local_190 = 0;
  local_188 = 0;
  local_184 = 0;
  local_180 = 0;
  local_17c = 1;
  local_178 = 0;
  local_170 = 0xf00000d0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0xf00000d0;
  local_150 = 0;
  local_148 = 0;
  local_144 = 0;
  local_140 = 0;
  local_13c = 6;
  local_138 = 0;
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
  local_130 = DAT_14c844840;
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
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0xf00000d0;
  local_d0 = 0;
  local_c8 = 0x3f800000;
  local_60 = 0;
  local_58 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_1f8 = *(code **)(param_1 + 0x1e8);
  if (local_1f0 == *(longlong *)(param_1 + 0x1f0)) {
    iVar8 = *(int *)(param_1 + 0x1f8);
    if (local_1e8 != iVar8) goto LAB_1440c0038;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x1f8);
LAB_1440c0038:
    local_1e0 = 0;
    local_1f0 = *(longlong *)(param_1 + 0x1f0);
    local_1e8 = iVar8;
  }
  FUN_14070e2ba(&local_1d8,param_1 + 0x208);
  if ((local_1f0 == 0) || (0xfffffffd < local_1e8 - 1U)) {
    cVar3 = *(char *)(param_1 + 0x58);
    lVar9 = FUN_148cdf8ed();
    if (cVar3 == '\0') {
      lVar6 = *(longlong *)(lVar9 + 0xb8);
      if (lVar6 == 0) {
        lVar6 = FUN_141862950();
      }
      lVar9 = *(longlong *)(lVar9 + 0xb0);
    }
    else {
      lVar6 = *(longlong *)(lVar9 + 0xa0);
      if (lVar6 == 0) {
        lVar6 = FUN_141862950();
      }
      lVar9 = *(longlong *)(lVar9 + 0x98);
    }
    uVar7 = FUN_14477b664(lVar6);
    uVar7 = FUN_14477b664(uVar7);
    lVar6 = FUN_14477b664(uVar7);
    if (((lVar6 != 0) && (plVar2 = *(longlong **)(lVar6 + 0xb8), plVar2 != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 != '\0')) {
      uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
      FUN_144aff48c(uVar7);
    }
    if ((local_1f0 != lVar9) || (local_1e8 != 0x10)) {
      local_1e8 = 0x10;
      local_1e0 = 0;
      local_1f0 = lVar9;
    }
  }
  local_70 = *(undefined4 *)(param_1 + 0x3a0);
  uStack_78 = (undefined4)*(undefined8 *)(param_1 + 0x398);
  uStack_74 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x398) >> 0x20);
  FUN_148cd8e20(&local_60,param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbc2d10) && (FUN_144b3d300(&DAT_14cbc2d10), DAT_14cbc2d10 == -1)) {
    local_50 = "MissionObjective";
    local_48 = 0x10;
    local_44 = 0;
    uVar4 = FUN_14001a6c0(&local_50,1);
    DAT_14cbc2d08 = (ulonglong)uVar4;
    _Init_thread_footer(&DAT_14cbc2d10);
  }
  local_6c = DAT_14cbc2d08;
  uVar7 = (**(code **)(*plVar5 + 0x40))(plVar5);
  FUN_14070dfbe(uVar7,&local_50,&local_1f8,1);
  *(undefined4 *)(param_1 + 0x588) = local_50._0_4_;
  FUN_1404967de(&local_1f8);
LAB_1440bffb4:
  if ((local_40 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440c03f6 FUN_1440c03f6 body=115 status=ok
// SIG undefined FUN_1440c03f6(void)

bool FUN_1440c03f6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x1c))) &&
        ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) && (lVar2 = FUN_148cdf2f4(), lVar2 != 0)) {
      return *(char *)(lVar2 + 0x178) == '\x03';
    }
  }
  return false;
}



// FUNCTION 1440c046a FUN_1440c046a body=1035 status=ok
// SIG undefined FUN_1440c046a(void)

void FUN_1440c046a(longlong param_1,char param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  ulonglong local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar3 = *(int *)(param_1 + 0x574);
  if (iVar3 == 0) {
LAB_1440c04e0:
    bVar9 = false;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x570);
    bVar9 = false;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar5 == 0) || (*(int *)(lVar5 + 0x10) != iVar3)) goto LAB_1440c04e0;
      bVar9 = (*(uint *)(lVar5 + 8) & 0x10200000) == 0;
    }
  }
  if (param_2 == '\0') {
    if (!bVar9) goto LAB_1440c0701;
    if (iVar3 == 0) {
LAB_1440c072d:
      plVar6 = (longlong *)0x0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x570);
      plVar6 = (longlong *)0x0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar7 == (undefined8 *)0x0) ||
           ((*(int *)(puVar7 + 2) != iVar3 || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0))))
        goto LAB_1440c072d;
        plVar6 = (longlong *)*puVar7;
      }
    }
    (**(code **)(*plVar6 + 0x420))(plVar6,0);
    *(undefined8 *)(param_1 + 0x570) = 0;
    goto LAB_1440c0701;
  }
  if (bVar9) goto LAB_1440c0701;
  lVar5 = FUN_1412fe774(param_1 + 0x518);
  if (((lVar5 == 0) || (plVar6 = *(longlong **)(param_1 + 0x20), plVar6 == (longlong *)0x0)) ||
     (*(int *)(param_1 + 0x1c) == 0)) goto LAB_1440c0701;
  uVar1 = *(uint *)(param_1 + 0x18);
  bVar9 = false;
  if ((-1 < (int)uVar1) && (bVar9 = false, (int)uVar1 < DAT_14c9647dc)) {
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar5 == 0) ||
       ((*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0x1c) ||
        ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)))) {
      bVar9 = false;
    }
    else {
      lVar5 = FUN_148cdf2f4();
      bVar9 = lVar5 != 0;
      plVar6 = *(longlong **)(param_1 + 0x20);
      if (plVar6 == (longlong *)0x0) goto LAB_1440c0701;
    }
  }
  if (((((*(int *)(param_1 + 0x1c) == 0) || (uVar1 = *(uint *)(param_1 + 0x18), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 == 0 ||
       (*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0x1c))))) ||
     (((*(uint *)(lVar5 + 8) & 0x10200000) != 0 ||
      (lVar5 = (**(code **)(*plVar6 + 0x10))(), !bVar9 || lVar5 == 0)))) goto LAB_1440c0701;
  local_58 = DAT_14c846508;
  local_68 = DAT_14c8464f8;
  uStack_60 = DAT_14c846500;
  local_88 = (undefined4)DAT_14c8464e0;
  uStack_84 = DAT_14c8464e0._4_4_;
  uStack_80 = (undefined4)DAT_14c8464e8;
  uStack_7c = DAT_14c8464e8._4_4_;
  local_78 = DAT_14c8464f0;
  uVar2 = *(undefined8 *)(param_1 + 0x430);
  uVar4 = FUN_1412fe774(param_1 + 0x518);
  local_b8 = (wchar_t *)CONCAT71(local_b8._1_7_,1);
  local_c8 = CONCAT31(local_c8._1_3_,1);
  local_c0 = local_c0 & 0xffffffffffffff00;
  local_d0 = 2;
  local_d8 = &local_68;
  lVar5 = FUN_140a44468(uVar4,lVar5,uVar2,&local_88);
  if (lVar5 == 0) {
LAB_1440c068b:
    *(undefined4 *)(param_1 + 0x570) = 0;
    iVar3 = 0;
  }
  else {
    if (DAT_14cb39ca0 == 0) {
      local_a0 = &local_48;
      local_48 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_14638c6c0;
      local_a8 = &LAB_14811044c;
      local_b0 = &LAB_1407f5cf8;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000004;
      local_d0 = 0x10;
      local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,0x8e0);
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
    }
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cb39ca0 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb39ca0 + 0x38) * 8) != DAT_14cb39ca0 + 0x30)) goto LAB_1440c068b;
    uVar1 = *(uint *)(lVar5 + 0xc);
    *(uint *)(param_1 + 0x570) = uVar1;
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
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(lVar5 + 0x10) = iVar8;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar3 = iVar8;
      }
    }
  }
  *(int *)(param_1 + 0x574) = iVar3;
LAB_1440c0701:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440c0876 FUN_1440c0876 body=1201 status=ok
// SIG undefined FUN_1440c0876(void)

void FUN_1440c0876(longlong param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  iVar2 = *(int *)(param_1 + 0x56c);
  if (iVar2 == 0) {
LAB_1440c08d3:
    bVar10 = false;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x568);
    bVar10 = false;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar4 == 0) || (*(int *)(lVar4 + 0x10) != iVar2)) goto LAB_1440c08d3;
      bVar10 = (*(uint *)(lVar4 + 8) & 0x10200000) == 0;
    }
  }
  if (param_2 == '\0') {
    if (!bVar10) {
      return;
    }
    if (iVar2 != 0) {
      uVar1 = *(uint *)(param_1 + 0x568);
      plVar6 = (longlong *)0x0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1440c0c62;
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 != (undefined8 *)0x0) &&
         ((*(int *)(puVar5 + 2) == iVar2 && ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
        plVar6 = (longlong *)*puVar5;
        goto LAB_1440c0c62;
      }
    }
    plVar6 = (longlong *)0x0;
LAB_1440c0c62:
    (**(code **)(*plVar6 + 0x420))(plVar6,0);
    *(undefined8 *)(param_1 + 0x568) = 0;
    return;
  }
  if (bVar10) {
    return;
  }
  lVar4 = FUN_1401ca522(param_1 + 0x60);
  if (lVar4 == 0) {
    return;
  }
  plVar6 = *(longlong **)(param_1 + 0x20);
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  lVar4 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar4 == 0) ||
       ((*(int *)(lVar4 + 0x10) != *(int *)(param_1 + 0x1c) ||
        ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_148cdf2f4();
      plVar6 = *(longlong **)(param_1 + 0x20);
      if (plVar6 == (longlong *)0x0) {
        return;
      }
    }
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return;
  }
  lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (lVar9 == 0) {
    return;
  }
  if (*(int *)(lVar9 + 0x10) != *(int *)(param_1 + 0x1c)) {
    return;
  }
  if ((*(uint *)(lVar9 + 8) & 0x10200000) != 0) {
    return;
  }
  lVar9 = (**(code **)(*plVar6 + 0x10))();
  if (lVar4 == 0) {
    return;
  }
  if (lVar9 == 0) {
    return;
  }
  lVar4 = FUN_140995b6b(lVar4);
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x568) = 0;
LAB_1440c0ca8:
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar4 + 0xc);
    *(uint *)(param_1 + 0x568) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (iVar2 == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      uVar3 = 0;
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar10 = iVar2 == 0;
      if (bVar10) {
        *(int *)(lVar4 + 0x10) = iVar8;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 0x56c) = iVar2;
      if (iVar2 != 0) goto LAB_1440c0a1f;
    }
    else {
      *(int *)(param_1 + 0x56c) = iVar2;
LAB_1440c0a1f:
      uVar1 = *(uint *)(param_1 + 0x568);
      uVar3 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar5 == (undefined8 *)0x0) ||
           ((*(int *)(puVar5 + 2) != iVar2 || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
        goto LAB_1440c0ca8;
        uVar3 = *puVar5;
      }
    }
  }
  FUN_140486fc4(uVar3,lVar9,*(undefined8 *)(param_1 + 0x430));
  if (*(int *)(param_1 + 0x56c) == 0) {
LAB_1440c0caf:
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x568);
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x56c) ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_1440c0caf;
      uVar3 = *puVar5;
    }
  }
  FUN_148cd8f98(param_1,uVar3);
  if (*(int *)(param_1 + 0x56c) == 0) {
LAB_1440c0cb6:
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x568);
    plVar6 = (longlong *)0x0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x56c) ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_1440c0cb6;
      plVar6 = (longlong *)*puVar5;
    }
  }
  plVar7 = (longlong *)0x0;
  (**(code **)(*plVar6 + 0x720))(plVar6,0);
  if (*(int *)(param_1 + 0x56c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x568);
    plVar7 = (longlong *)0x0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x56c) ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)*puVar5;
      }
    }
  }
  uVar3 = FUN_1401ca522(param_1 + 0x60);
  (**(code **)(*plVar7 + 0xa78))(plVar7,uVar3);
  if (*(int *)(param_1 + 0x56c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x568);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1440c0c0b;
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar5 != (undefined8 *)0x0) &&
       ((*(int *)(puVar5 + 2) == *(int *)(param_1 + 0x56c) &&
        ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar5;
      goto LAB_1440c0c0b;
    }
  }
  uVar3 = 0;
LAB_1440c0c0b:
  FUN_140b506a4(uVar3);
  return;
}



// FUNCTION 1440c0d28 FUN_1440c0d28 body=1509 status=ok
// SIG undefined FUN_1440c0d28(void)

void FUN_1440c0d28(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_1440beec4();
  if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x155) & 0x20) == 0)) {
    if (param_4 == '\x06') {
      if ((((((*(longlong *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
            (uVar2 = *(uint *)(param_1 + 0x18), -1 < (int)uVar2)) &&
           (((int)uVar2 < DAT_14c9647dc &&
            (lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar3 != 0))))
          && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x1c))) &&
         (((*(uint *)(lVar3 + 8) & 0x10200000) == 0 &&
          (plVar4 = (longlong *)FUN_148cdf2f4(), plVar4 != (longlong *)0x0)))) {
        if (DAT_14cb1c498 == 0) {
          local_40 = &local_28;
          local_28 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_1427b09ee;
          local_48 = &LAB_147e36893;
          local_50 = FUN_146420564;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10004001;
          local_70 = 8;
          local_78 = 0x28;
          FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
        }
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,DAT_14cb1c498);
        if (plVar4 != (longlong *)0x0) {
          if (DAT_14cb1c498 == 0) {
            local_40 = &local_28;
            local_28 = FUN_1449e2820;
            local_30 = FUN_14081d0ea;
            local_38 = FUN_1427b09ee;
            local_48 = &LAB_147e36893;
            local_50 = FUN_146420564;
            local_58 = L"Engine";
            local_60 = 0;
            local_68 = 0x10004001;
            local_70 = 8;
            local_78 = 0x28;
            FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
          }
          plVar5 = (longlong *)FUN_144718840(plVar4,DAT_14cb1c498);
          if (((plVar4 != plVar5) && (plVar5 != (longlong *)0x0)) &&
             (lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5), lVar3 != 0)) {
            if (0 < *(int *)(lVar3 + 0x230)) {
              local_28 = (code *)&DAT_14cbc2d00;
              FUN_140b042ce(lVar3 + 0x1a8);
            }
            if (*(char *)(lVar3 + 0x118) == '\0') {
              uVar6 = FUN_144836af6(lVar3);
              FUN_1448367ba(lVar3,uVar6);
            }
            if (((*(char *)(lVar3 + 0x160) == '\x01') &&
                (4 < DAT_14c872be0 - *(longlong *)(lVar3 + 0x158))) &&
               ((*(longlong *)(lVar3 + 0x150) + 4U <= DAT_14c872be0 ||
                (*(char *)(lVar3 + 0x148) == '\0')))) {
              FUN_14012b994(lVar3);
            }
          }
        }
      }
    }
    else if ((((param_4 == '\x01') && (lVar3 = FUN_148cdf8ed(), *(longlong *)(param_1 + 0x20) != 0))
             && ((*(int *)(param_1 + 0x1c) != 0 &&
                 (((uVar2 = *(uint *)(param_1 + 0x18), -1 < (int)uVar2 &&
                   ((int)uVar2 < DAT_14c9647dc)) &&
                  (lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8),
                  lVar10 != 0)))))) &&
            (((*(int *)(lVar10 + 0x10) == *(int *)(param_1 + 0x1c) &&
              (cVar1 = *(char *)(param_1 + 0x58), (*(uint *)(lVar10 + 8) & 0x10200000) == 0)) &&
             (plVar4 = (longlong *)FUN_148cdf2f4(), plVar4 != (longlong *)0x0)))) {
      if (DAT_14cb1c498 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_147e36893;
        local_50 = FUN_146420564;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
      }
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,DAT_14cb1c498);
      if (plVar4 != (longlong *)0x0) {
        if (DAT_14cb1c498 == 0) {
          local_40 = &local_28;
          local_28 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_1427b09ee;
          local_48 = &LAB_147e36893;
          local_50 = FUN_146420564;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10004001;
          local_70 = 8;
          local_78 = 0x28;
          FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
        }
        plVar5 = (longlong *)FUN_144718840(plVar4,DAT_14cb1c498);
        if (((plVar4 != plVar5) && (plVar5 != (longlong *)0x0)) &&
           ((lVar10 = (**(code **)(*plVar5 + 0x10))(plVar5), lVar10 != 0 &&
            (*(int *)(lVar10 + 0xb8) != *(int *)(lVar10 + 0xe4))))) {
          lVar3 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(cVar1 != '\0') * 8);
          uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
          uVar9 = (uint)lVar3 & 0xffff;
          lVar8 = lVar10 + 0xe8;
          if (*(longlong *)(lVar10 + 0xf0) != 0) {
            lVar8 = *(longlong *)(lVar10 + 0xf0);
          }
          iVar7 = *(int *)(lVar8 + (ulonglong)
                                   (*(int *)(lVar10 + 0xf8) - 1U &
                                   (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar9) +
                                   (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 4);
          if (iVar7 != -1) {
            do {
              plVar4 = (longlong *)(*(longlong *)(lVar10 + 0xb0) + (longlong)iVar7 * 0x28);
              if (*plVar4 == lVar3) {
                if ((plVar4 != (longlong *)0x0) && (plVar4 != (longlong *)&DAT_fffffffffffffff8)) {
                  FUN_14058d91e();
                    /* WARNING: Subroutine does not return */
                  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
                }
                break;
              }
              iVar7 = (int)plVar4[4];
            } while (iVar7 != -1);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440c1326 FUN_1440c1326 body=874 status=ok
// SIG undefined FUN_1440c1326(void)

void FUN_1440c1326(longlong param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_1f8 [40];
  undefined4 local_1d0;
  byte local_1cc;
  undefined8 local_1c8 [2];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined1 local_114;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8 [12];
  char local_68;
  undefined8 local_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 local_48;
  undefined7 uStack_47;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  cVar2 = FUN_1440c03f6();
  if (cVar2 == '\0') goto LAB_1440c1659;
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x584) == '\x01') {
      uVar4 = FUN_1440beec4(param_1);
      plVar5 = (longlong *)FUN_14007a5e6(uVar4);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x48))(plVar5,*(undefined4 *)(param_1 + 0x580));
        if (*(char *)(param_1 + 0x584) == '\x01') {
          *(undefined1 *)(param_1 + 0x584) = 0;
        }
      }
    }
    goto LAB_1440c1659;
  }
  if ((*(char *)(param_1 + 0x58) != '\0') || (*(longlong *)(param_1 + 0x440) == 0))
  goto LAB_1440c1659;
  if ((longlong)*(int *)(param_1 + 0x458) != 0) {
    lVar7 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x450) + lVar7) == 0) goto LAB_1440c1659;
      lVar7 = lVar7 + 8;
    } while ((longlong)*(int *)(param_1 + 0x458) * 8 != lVar7);
  }
  if (*(char *)(param_1 + 0x584) != '\0') goto LAB_1440c1659;
  FUN_1440beec4(param_1);
  if ((*(longlong *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x1c) == 0)) {
LAB_1440c1410:
    lVar7 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x18);
    lVar7 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar7 == 0) || (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x1c))) ||
         ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) goto LAB_1440c1410;
      lVar7 = FUN_148cdf2f4();
    }
  }
  uVar4 = FUN_1440beec4(param_1);
  plVar5 = (longlong *)FUN_14007a5e6(uVar4);
  if (lVar7 == 0 || plVar5 == (longlong *)0x0) goto LAB_1440c1659;
  local_1c8[0] = 0;
  local_1c8[1] = 0;
  local_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0x3ff00000;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_184 = 0x3ff00000;
  uStack_180 = 0;
  uStack_17c = 0x3ff00000;
  local_178 = 0x3ff0000000000000;
  uStack_170 = 0;
  local_168 = DAT_14c8464e0;
  uStack_160 = DAT_14c8464e8;
  local_158 = DAT_14c8464f0;
  local_150 = 0;
  local_14c = DAT_14cb7bd68;
  local_144 = DAT_14cb7bd70;
  local_140 = DAT_14cb7bd80;
  local_138 = DAT_14cb7bd88;
  local_114 = 0;
  local_124 = 0;
  uStack_11c = 0;
  local_134 = 0;
  uStack_12c = 0;
  local_110 = 0xffffffff;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  lStack_f0 = 0;
  local_e8 = 0;
  local_e0 = *(undefined4 *)(param_1 + 0x430);
  uStack_dc = *(undefined4 *)(param_1 + 0x434);
  uStack_d8 = *(undefined4 *)(param_1 + 0x438);
  uStack_d4 = *(undefined4 *)(param_1 + 0x43c);
  local_68 = '\0';
  local_d0 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_4f = 0;
  local_48 = 0;
  uStack_47 = 0;
  local_40 = '\0';
  uVar4 = FUN_140427846();
  local_d0 = FUN_144718840(lVar7,uVar4);
  if ((undefined8 *)(param_1 + 0x3d0) != local_c8) {
    puVar8 = (undefined8 *)(param_1 + 0x3d0);
    puVar9 = local_c8;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    local_68 = '\x01';
  }
  puVar8 = &DAT_14c846480;
  if (*(longlong *)(lVar7 + 0x1c8) != 0) {
    puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x1c8) + 0x240);
  }
  puVar9 = local_1c8;
  for (lVar7 = 0xc; uVar4 = uStack_11c, lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  uStack_11c._0_5_ = CONCAT14(1,(undefined4)uStack_11c);
  if (*(char *)(param_1 + 0x368) == '\0') {
    uStack_11c._6_2_ = SUB82(uVar4,6);
    uStack_11c._0_6_ = CONCAT15(1,(undefined5)uStack_11c);
  }
  else {
    local_48 = (undefined1)*(undefined8 *)(param_1 + 0x36c);
    uStack_47 = (undefined7)((ulonglong)*(undefined8 *)(param_1 + 0x36c) >> 8);
    local_40 = *(char *)(param_1 + 0x368);
  }
  (**(code **)(*plVar5 + 0x10))(plVar5,&local_1d0,param_1 + 0x440,local_1c8);
  if (&local_1d0 != (undefined4 *)(param_1 + 0x580)) {
    if ((local_1cc & 1) == 0) {
      if (*(char *)(param_1 + 0x584) != '\x01') goto LAB_1440c1635;
      uVar3 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x580) = local_1d0;
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 0x584) = uVar3;
  }
LAB_1440c1635:
  if (local_68 == '\x01') {
    local_68 = '\0';
  }
  if (lStack_f0 != 0) {
    FUN_1400020a8();
  }
LAB_1440c1659:
  if ((local_38 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c1692 FUN_1440c1692 body=1187 status=ok
// SIG undefined FUN_1440c1692(void)

void FUN_1440c1692(undefined8 *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x58c) = 0;
    if (((((*(int *)((longlong)param_1 + 0x594) == 0) ||
          (uVar3 = *(uint *)(param_1 + 0xb2), (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3)) ||
        ((puVar7 = (undefined8 *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         puVar7 == (undefined8 *)0x0 ||
         (*(int *)(puVar7 + 2) != *(int *)((longlong)param_1 + 0x594))))) ||
       ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_1440c185a;
    if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
      uVar5 = *puVar7;
    }
    else {
      uVar5 = 0;
    }
    FUN_140aeefbc(uVar5,0,CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),1));
  }
  else {
    if (param_1[0x88] == 0) goto LAB_1440c185a;
    if ((longlong)*(int *)(param_1 + 0x8b) != 0) {
      lVar8 = 0;
      do {
        if (*(longlong *)(param_1[0x8a] + lVar8) == 0) goto LAB_1440c185a;
        lVar8 = lVar8 + 8;
      } while ((longlong)*(int *)(param_1 + 0x8b) * 8 != lVar8);
    }
    if ((((param_1[4] == 0) || (*(int *)((longlong)param_1 + 0x1c) == 0)) ||
        ((uVar3 = *(uint *)(param_1 + 3), (int)uVar3 < 0 ||
         (((DAT_14c9647dc <= (int)uVar3 ||
           (lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar8 == 0)) ||
          (*(int *)(lVar8 + 0x10) != *(int *)((longlong)param_1 + 0x1c))))))) ||
       (((*(uint *)(lVar8 + 8) & 0x10200000) != 0 || (lVar8 = FUN_148cdf2f4(), lVar8 == 0))))
    goto LAB_1440c185a;
    uVar5 = FUN_1440beec4(param_1);
    if ((param_1[4] == 0) || (*(int *)((longlong)param_1 + 0x1c) == 0)) {
LAB_1440c187d:
      lVar8 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 3);
      lVar8 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        if ((lVar8 == 0) ||
           ((*(int *)(lVar8 + 0x10) != *(int *)((longlong)param_1 + 0x1c) ||
            ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)))) goto LAB_1440c187d;
        lVar8 = FUN_148cdf2f4();
      }
    }
    puVar7 = &DAT_14c846480;
    if (*(longlong *)(lVar8 + 0x1c8) != 0) {
      puVar7 = (undefined8 *)(*(longlong *)(lVar8 + 0x1c8) + 0x240);
    }
    uVar6 = FUN_140126fc0();
    lVar8 = FUN_148cd959a(uVar5,uVar6,puVar7);
    if (lVar8 != 0) {
      uVar3 = *(uint *)(lVar8 + 0xc);
      *(uint *)(param_1 + 0xb2) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar4 = *(int *)(lVar8 + 0x10);
      if (iVar4 == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar4 = *(int *)(lVar8 + 0x10);
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(lVar8 + 0x10) = iVar10;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar4 = iVar10;
        }
        *(int *)((longlong)param_1 + 0x594) = iVar4;
        if (iVar4 == 0) goto LAB_1440c185a;
      }
      else {
        *(int *)((longlong)param_1 + 0x594) = iVar4;
      }
      uVar3 = *(uint *)(param_1 + 0xb2);
      if (((((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) ||
          (lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar8 == 0)) ||
         ((*(int *)(lVar8 + 0x10) != iVar4 || ((*(uint *)(lVar8 + 8) & 0x10200000) != 0))))
      goto LAB_1440c185a;
      *(undefined1 *)((longlong)param_1 + 0x58c) = 1;
      plVar9 = (longlong *)param_1[1];
      if (plVar9 == (longlong *)0x0) {
LAB_1440c1a27:
        uVar3 = *(uint *)(param_1 + 0xb2);
        uVar5 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          puVar7 = (undefined8 *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((puVar7 == (undefined8 *)0x0) ||
             ((*(int *)(puVar7 + 2) != iVar4 || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) {
LAB_1440c1acc:
            uVar5 = 0;
          }
          else {
            uVar5 = *puVar7;
          }
        }
        bVar11 = true;
        plVar9 = (longlong *)0x0;
        uVar6 = 0;
      }
      else {
        iVar4 = (int)plVar9[1];
        do {
          if (iVar4 == 0) {
            iVar4 = *(int *)((longlong)param_1 + 0x594);
            if (iVar4 == 0) goto LAB_1440c1acc;
            goto LAB_1440c1a27;
          }
          LOCK();
          iVar10 = (int)plVar9[1];
          bVar11 = iVar4 == iVar10;
          if (bVar11) {
            *(int *)(plVar9 + 1) = iVar4 + 1;
            iVar10 = iVar4;
          }
          iVar4 = iVar10;
          UNLOCK();
        } while (!bVar11);
        uVar6 = *param_1;
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
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
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
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
        iVar4 = *(int *)((longlong)param_1 + 0x594);
        if (iVar4 == 0) {
LAB_1440c1b0b:
          uVar5 = 0;
        }
        else {
          uVar3 = *(uint *)(param_1 + 0xb2);
          uVar5 = 0;
          if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
            puVar7 = (undefined8 *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if ((puVar7 == (undefined8 *)0x0) ||
               ((*(int *)(puVar7 + 2) != iVar4 || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0))))
            goto LAB_1440c1b0b;
            uVar5 = *puVar7;
          }
        }
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        bVar11 = false;
      }
      local_68 = 0;
      local_58 = &PTR_LAB_14b95fe20;
      local_78 = FUN_1440c757a;
      local_50 = uVar6;
      local_48 = plVar9;
      FUN_140f6405a(uVar5,param_1 + 0x88);
      if (!bVar11) {
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      goto LAB_1440c185a;
    }
  }
  param_1[0xb2] = 0;
LAB_1440c185a:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440c1b36 FUN_1440c1b36 body=728 status=ok
// SIG undefined FUN_1440c1b36(void)

void FUN_1440c1b36(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    cVar4 = FUN_1440c03f6();
    *(undefined1 *)(param_1 + 0x11) = 1;
    lVar5 = FUN_1440beec4(param_1);
    if (lVar5 != 0) {
      if (*(longlong *)(lVar5 + 0x1f0) == 0) {
        plVar6 = (longlong *)(lVar5 + 0x458);
      }
      else {
        plVar6 = (longlong *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
      }
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (lVar3 != 0) {
        lVar10 = *plVar6;
        uVar7 = (uint)lVar3;
        if ((int)(uVar7 & 0xffffff) < *(int *)(lVar10 + 0x10)) {
          lVar9 = lVar10 + 0x18;
          if (*(longlong *)(lVar10 + 0x28) != 0) {
            lVar9 = *(longlong *)(lVar10 + 0x28);
          }
          if ((*(uint *)(lVar9 + (ulonglong)((uVar7 & 0xffffff) >> 5) * 4) >> (uVar7 & 0x1f) & 1) !=
              0) {
            lVar10 = *(longlong *)(lVar10 + 8);
            lVar9 = (ulonglong)(uVar7 & 0xffffff) * 0x70;
            if (((lVar10 + lVar9 != 0) && (*(longlong *)(lVar10 + 0x60 + lVar9) == lVar3)) &&
               (*(char *)(lVar10 + 1 + lVar9) != '\x04')) {
              FUN_1405a424c();
            }
          }
        }
      }
      *(undefined8 *)(param_1 + 0x40) = 0;
      if (*(longlong *)(lVar5 + 0x1f0) == 0) {
        plVar6 = (longlong *)(lVar5 + 0x458);
      }
      else {
        plVar6 = (longlong *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
      }
      lVar5 = *(longlong *)(param_1 + 0x50);
      if (lVar5 != 0) {
        lVar3 = *plVar6;
        uVar7 = (uint)lVar5;
        if ((int)(uVar7 & 0xffffff) < *(int *)(lVar3 + 0x10)) {
          lVar10 = lVar3 + 0x18;
          if (*(longlong *)(lVar3 + 0x28) != 0) {
            lVar10 = *(longlong *)(lVar3 + 0x28);
          }
          if ((*(uint *)(lVar10 + (ulonglong)((uVar7 & 0xffffff) >> 5) * 4) >> (uVar7 & 0x1f) & 1)
              != 0) {
            lVar3 = *(longlong *)(lVar3 + 8);
            lVar10 = (ulonglong)(uVar7 & 0xffffff) * 0x70;
            if (((lVar3 + lVar10 != 0) && (*(longlong *)(lVar3 + 0x60 + lVar10) == lVar5)) &&
               (*(char *)(lVar3 + 1 + lVar10) != '\x04')) {
              FUN_1405a424c();
            }
          }
        }
      }
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    if (cVar4 != '\0') {
      FUN_1440bed76(param_1,0);
      FUN_1440c1e0e(param_1);
      FUN_1440c1ed2(param_1,0);
    }
    FUN_148cd9670(param_1,0);
    FUN_1440bfc72(param_1,0);
    FUN_1440c1326(param_1,0);
    FUN_1440c1692(param_1,0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    plVar6 = *(longlong **)(param_1 + 0x38);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    if (((*(int *)(param_1 + 0x56c) != 0) && (uVar7 = *(uint *)(param_1 + 0x568), -1 < (int)uVar7))
       && ((int)uVar7 < DAT_14c9647dc)) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if (((puVar8 != (undefined8 *)0x0) && (*(int *)(puVar8 + 2) == *(int *)(param_1 + 0x56c))) &&
         ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
          plVar6 = (longlong *)*puVar8;
        }
        else {
          plVar6 = (longlong *)0x0;
        }
        (**(code **)(*plVar6 + 0x420))(plVar6,0);
        *(undefined8 *)(param_1 + 0x568) = 0;
      }
    }
    if (((*(int *)(param_1 + 0x574) != 0) && (uVar7 = *(uint *)(param_1 + 0x570), -1 < (int)uVar7))
       && ((int)uVar7 < DAT_14c9647dc)) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if (((puVar8 != (undefined8 *)0x0) && (*(int *)(puVar8 + 2) == *(int *)(param_1 + 0x574))) &&
         ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
          plVar6 = (longlong *)*puVar8;
        }
        else {
          plVar6 = (longlong *)0x0;
        }
        (**(code **)(*plVar6 + 0x420))(plVar6,0);
        *(undefined8 *)(param_1 + 0x570) = 0;
      }
    }
    if ((*(int *)(param_1 + 0x3c0) != 0) && (*(longlong **)(param_1 + 0x3b8) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001440c1de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x60))();
      return;
    }
  }
  return;
}



// FUNCTION 1440c1e0e FUN_1440c1e0e body=196 status=ok
// SIG undefined FUN_1440c1e0e(void)

void FUN_1440c1e0e(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c))) &&
         ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) {
        plVar2 = (longlong *)FUN_148cdf2f4();
        if (plVar2 != (longlong *)0x0) {
          uVar3 = FUN_140b040c0();
          plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
          if (plVar2 != (longlong *)0x0) {
            uVar3 = FUN_140b040c0();
            plVar4 = (longlong *)FUN_144718840(plVar2,uVar3);
            if (plVar4 != (longlong *)0x0 && plVar2 != plVar4) {
              lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4);
              if (lVar5 != 0) {
                FUN_140356f00(lVar5,2,1);
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1440c1ed2 FUN_1440c1ed2 body=695 status=ok
// SIG undefined FUN_1440c1ed2(void)

void FUN_1440c1ed2(longlong param_1,char param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  uint local_78;
  uint local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c))) &&
         ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) {
        plVar2 = (longlong *)FUN_148cdf2f4();
        if (plVar2 != (longlong *)0x0) {
          if (DAT_14cb94538 == 0) {
            local_40 = &local_28;
            local_28 = FUN_1449e2820;
            local_30 = FUN_14081d0ea;
            local_38 = FUN_1427b09ee;
            local_48 = &LAB_148a18249;
            local_50 = FUN_14657713c;
            local_58 = L"Engine";
            local_60 = 0;
            local_68 = 0x10004001;
            local_70 = 8;
            local_78 = 0x28;
            FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248)
            ;
          }
          plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,DAT_14cb94538);
          if (plVar2 != (longlong *)0x0) {
            if (DAT_14cb94538 == 0) {
              local_40 = &local_28;
              local_28 = FUN_1449e2820;
              local_30 = FUN_14081d0ea;
              local_38 = FUN_1427b09ee;
              local_48 = &LAB_148a18249;
              local_50 = FUN_14657713c;
              local_58 = L"Engine";
              local_60 = 0;
              local_68 = 0x10004001;
              local_70 = 8;
              local_78 = 0x28;
              FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,
                            &DAT_148a18248);
            }
            plVar3 = (longlong *)FUN_144718840(plVar2,DAT_14cb94538);
            if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
              uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
              if (param_2 != '\0') {
                local_78 = (uint)local_78._1_3_ << 8;
                FUN_140e16d82(uVar4,DAT_14cbc2d00,1,1);
                uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
                local_70 = local_70 & 0xffffff00;
                local_78 = local_78 & 0xffffff00;
                FUN_140d78b8a(uVar4,DAT_14cbc2d00,0xff,1);
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
              }
              local_78 = (uint)local_78._1_3_ << 8;
              FUN_140e16d82(uVar4,DAT_14cbc2d00,0,1);
              (**(code **)(*plVar3 + 0x18))(plVar3);
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c21ae FUN_1440c21ae body=48 status=ok
// SIG undefined FUN_1440c21ae(void)

longlong FUN_1440c21ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c21de FUN_1440c21de body=48 status=ok
// SIG undefined FUN_1440c21de(void)

longlong FUN_1440c21de(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c220e FUN_1440c220e body=48 status=ok
// SIG undefined FUN_1440c220e(void)

longlong FUN_1440c220e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c223e FUN_1440c223e body=48 status=ok
// SIG undefined FUN_1440c223e(void)

longlong FUN_1440c223e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c226e FUN_1440c226e body=48 status=ok
// SIG undefined FUN_1440c226e(void)

longlong FUN_1440c226e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c229e FUN_1440c229e body=48 status=ok
// SIG undefined FUN_1440c229e(void)

longlong FUN_1440c229e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c22ce FUN_1440c22ce body=48 status=ok
// SIG undefined FUN_1440c22ce(void)

longlong FUN_1440c22ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c22fe FUN_1440c22fe body=48 status=ok
// SIG undefined FUN_1440c22fe(void)

longlong FUN_1440c22fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c232e FUN_1440c232e body=48 status=ok
// SIG undefined FUN_1440c232e(void)

longlong FUN_1440c232e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c235e FUN_1440c235e body=31 status=ok
// SIG undefined FUN_1440c235e(void)

undefined8 FUN_1440c235e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c248e FUN_1440c248e body=12 status=ok
// SIG undefined FUN_1440c248e(void)

void FUN_1440c248e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001440c2497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1440c249a FUN_1440c249a body=29 status=ok
// SIG undefined FUN_1440c249a(void)

undefined8 FUN_1440c249a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c24b8 FUN_1440c24b8 body=29 status=ok
// SIG undefined FUN_1440c24b8(void)

undefined8 FUN_1440c24b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c2654 FUN_1440c2654 body=93 status=ok
// SIG undefined FUN_1440c2654(void)

void FUN_1440c2654(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95eb30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95eac0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c26b2 FUN_1440c26b2 body=93 status=ok
// SIG undefined FUN_1440c26b2(void)

void FUN_1440c26b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95eb30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95eac0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c2710 FUN_1440c2710 body=126 status=ok
// SIG undefined FUN_1440c2710(void)

void FUN_1440c2710(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b95eb30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95eac0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c277f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440c27a0 FUN_1440c27a0 body=280 status=ok
// SIG undefined FUN_1440c27a0(void)

undefined8 FUN_1440c27a0(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_1440c28b2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440c28b2;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1440c28b2:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440c284f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_145c7c168(*(longlong *)(param_1 + 0x20) + 0x4ea0,param_2);
      uVar6 = 1;
      goto LAB_1440c284f;
    }
  }
  uVar6 = 0;
LAB_1440c284f:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c28ba FUN_1440c28ba body=29 status=ok
// SIG undefined FUN_1440c28ba(void)

undefined8 FUN_1440c28ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c2a56 FUN_1440c2a56 body=93 status=ok
// SIG undefined FUN_1440c2a56(void)

void FUN_1440c2a56(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95eba0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c2ab4 FUN_1440c2ab4 body=93 status=ok
// SIG undefined FUN_1440c2ab4(void)

void FUN_1440c2ab4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95eba0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c2b12 FUN_1440c2b12 body=126 status=ok
// SIG undefined FUN_1440c2b12(void)

void FUN_1440c2b12(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95eba0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c2b81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440c2c00 FUN_1440c2c00 body=390 status=ok
// SIG undefined FUN_1440c2c00(void)

undefined8 FUN_1440c2c00(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440c2d80;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1440c2d80;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440c2d80:
    local_28 = 0;
  }
  iVar1 = DAT_14c9647dc;
  lVar3 = DAT_14c9647c8;
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440c2cb6;
    lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar8 != 0) &&
       ((*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
      lVar8 = *(longlong *)(param_1 + 0x20);
      uVar7 = 1;
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x4f38) = 0;
        if (((*(int *)(lVar8 + 0x4eec) != 0) && (uVar2 = *(uint *)(lVar8 + 0x4ee8), -1 < (int)uVar2)
            ) && ((int)uVar2 < iVar1)) {
          plVar6 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(lVar3 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)(lVar8 + 0x4eec))) &&
             (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))) {
            FUN_1447cd2ec(*plVar6 + 0xf0,0);
          }
        }
      }
      goto LAB_1440c2cb6;
    }
  }
  uVar7 = 0;
LAB_1440c2cb6:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c2d88 FUN_1440c2d88 body=29 status=ok
// SIG undefined FUN_1440c2d88(void)

undefined8 FUN_1440c2d88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c2f24 FUN_1440c2f24 body=93 status=ok
// SIG undefined FUN_1440c2f24(void)

void FUN_1440c2f24(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95ec10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c2f82 FUN_1440c2f82 body=93 status=ok
// SIG undefined FUN_1440c2f82(void)

void FUN_1440c2f82(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95ec10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c2fe0 FUN_1440c2fe0 body=126 status=ok
// SIG undefined FUN_1440c2fe0(void)

void FUN_1440c2fe0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b438ba0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95ec10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c304f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440c3078 FUN_1440c3078 body=284 status=ok
// SIG undefined FUN_1440c3078(void)

undefined8 FUN_1440c3078(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440c318e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440c318e;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440c318e:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440c3134;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x4f10) == '\x01') {
        FUN_148cd4da6(*(longlong *)(param_1 + 0x20) + 0x4ea0);
      }
      goto LAB_1440c3134;
    }
  }
  uVar6 = 0;
LAB_1440c3134:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c3196 FUN_1440c3196 body=29 status=ok
// SIG undefined FUN_1440c3196(void)

undefined8 FUN_1440c3196(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c3332 FUN_1440c3332 body=93 status=ok
// SIG undefined FUN_1440c3332(void)

void FUN_1440c3332(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95ec80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c3390 FUN_1440c3390 body=93 status=ok
// SIG undefined FUN_1440c3390(void)

void FUN_1440c3390(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95ec80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c33ee FUN_1440c33ee body=126 status=ok
// SIG undefined FUN_1440c33ee(void)

void FUN_1440c33ee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95ec80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c345d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440c346c FUN_1440c346c body=132 status=ok
// SIG undefined FUN_1440c346c(void)

void FUN_1440c346c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x4ef4);
  if (((iVar1 != 0) && (uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x4ef0), -1 < (int)uVar2))
     && ((int)uVar2 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == iVar1)) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar3 = *plVar4, lVar3 != 0)))) {
      plVar4 = (longlong *)(**(code **)(*(longlong *)(lVar3 + 0x3e0) + 0x20))(lVar3 + 0x3e0);
      if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c34e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x40))(plVar4,0,*(code **)(*plVar4 + 0x40));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1440c34f0 FUN_1440c34f0 body=390 status=ok
// SIG undefined FUN_1440c34f0(void)

undefined8 FUN_1440c34f0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440c3670;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440c3670;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar6 = local_28;
  }
  else {
LAB_1440c3670:
    lVar6 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440c35a6;
    lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar8 != 0) &&
       ((*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x4ef4);
      uVar7 = 1;
      if ((iVar1 != 0) &&
         ((uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x4ef0), -1 < (int)uVar2 &&
          ((int)uVar2 < DAT_14c9647dc)))) {
        plVar5 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar5 != (longlong *)0x0) &&
           ((((int)plVar5[2] == iVar1 && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) &&
            (lVar8 = *plVar5, lVar8 != 0)))) {
          plVar5 = (longlong *)(**(code **)(*(longlong *)(lVar8 + 0x3e0) + 0x20))(lVar8 + 0x3e0);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x40))(plVar5,0);
          }
        }
      }
      goto LAB_1440c35a6;
    }
  }
  uVar7 = 0;
LAB_1440c35a6:
  if ((lVar6 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar6);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c3678 FUN_1440c3678 body=29 status=ok
// SIG undefined FUN_1440c3678(void)

undefined8 FUN_1440c3678(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c3814 FUN_1440c3814 body=93 status=ok
// SIG undefined FUN_1440c3814(void)

void FUN_1440c3814(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95fed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95ecf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c3872 FUN_1440c3872 body=93 status=ok
// SIG undefined FUN_1440c3872(void)

void FUN_1440c3872(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95fed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95ecf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c38d0 FUN_1440c38d0 body=126 status=ok
// SIG undefined FUN_1440c38d0(void)

void FUN_1440c38d0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b95fed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95ecf0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c393f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440c3958 FUN_1440c3958 body=269 status=ok
// SIG undefined FUN_1440c3958(void)

undefined8 FUN_1440c3958(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440c3a5f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440c3a5f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440c3a5f:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440c3a13;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1440c3a66(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1440c3a13;
    }
  }
  uVar6 = 0;
LAB_1440c3a13:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c3a66 FUN_1440c3a66 body=150 status=ok
// SIG undefined FUN_1440c3a66(void)

void FUN_1440c3a66(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_148cd4da6(*param_1 + 0x4ea0);
  iVar1 = *(int *)(*param_1 + 0x4ef4);
  if (((iVar1 != 0) && (uVar2 = *(uint *)(*param_1 + 0x4ef0), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == iVar1)) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar3 = *plVar4, lVar3 != 0)))) {
      plVar4 = (longlong *)(**(code **)(*(longlong *)(lVar3 + 0x3e0) + 0x20))(lVar3 + 0x3e0);
      if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c3af2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x40))(plVar4,0,*(code **)(*plVar4 + 0x40));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1440c3afc FUN_1440c3afc body=29 status=ok
// SIG undefined FUN_1440c3afc(void)

undefined8 FUN_1440c3afc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c3c98 FUN_1440c3c98 body=93 status=ok
// SIG undefined FUN_1440c3c98(void)

void FUN_1440c3c98(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95edd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c3cf6 FUN_1440c3cf6 body=93 status=ok
// SIG undefined FUN_1440c3cf6(void)

void FUN_1440c3cf6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95edd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c3d54 FUN_1440c3d54 body=126 status=ok
// SIG undefined FUN_1440c3d54(void)

void FUN_1440c3d54(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95edd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c3dc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440c3de8 FUN_1440c3de8 body=280 status=ok
// SIG undefined FUN_1440c3de8(void)

undefined8 FUN_1440c3de8(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440c3efa;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440c3efa;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440c3efa:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440c3ea0;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_145c7c360(*(longlong *)(param_1 + 0x20) + 0x4ea0);
      }
      goto LAB_1440c3ea0;
    }
  }
  uVar6 = 0;
LAB_1440c3ea0:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c3f02 FUN_1440c3f02 body=29 status=ok
// SIG undefined FUN_1440c3f02(void)

undefined8 FUN_1440c3f02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c409e FUN_1440c409e body=93 status=ok
// SIG undefined FUN_1440c409e(void)

void FUN_1440c409e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95ee40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c40fc FUN_1440c40fc body=93 status=ok
// SIG undefined FUN_1440c40fc(void)

void FUN_1440c40fc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95ee40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c415a FUN_1440c415a body=126 status=ok
// SIG undefined FUN_1440c415a(void)

void FUN_1440c415a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95ee40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c41c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440c41ee FUN_1440c41ee body=280 status=ok
// SIG undefined FUN_1440c41ee(void)

undefined8 FUN_1440c41ee(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440c4300;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440c4300;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440c4300:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440c42a6;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_14614f286(*(longlong *)(param_1 + 0x20) + 0x4ea0);
      }
      goto LAB_1440c42a6;
    }
  }
  uVar6 = 0;
LAB_1440c42a6:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c4308 FUN_1440c4308 body=29 status=ok
// SIG undefined FUN_1440c4308(void)

undefined8 FUN_1440c4308(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c44a4 FUN_1440c44a4 body=93 status=ok
// SIG undefined FUN_1440c44a4(void)

void FUN_1440c44a4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95eeb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c4502 FUN_1440c4502 body=93 status=ok
// SIG undefined FUN_1440c4502(void)

void FUN_1440c4502(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95eeb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c4560 FUN_1440c4560 body=126 status=ok
// SIG undefined FUN_1440c4560(void)

void FUN_1440c4560(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95eeb0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c45cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440c45f4 FUN_1440c45f4 body=280 status=ok
// SIG undefined FUN_1440c45f4(void)

undefined8 FUN_1440c45f4(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440c4706;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440c4706;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440c4706:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440c46ac;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_148cd50d4(*(longlong *)(param_1 + 0x20) + 0x4ea0);
      }
      goto LAB_1440c46ac;
    }
  }
  uVar6 = 0;
LAB_1440c46ac:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c470e FUN_1440c470e body=205 status=ok
// SIG undefined FUN_1440c470e(void)

void FUN_1440c470e(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(uint *)(puVar3 + 2) == param_1[1])) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar2 = *puVar3;
      }
      else {
        uVar2 = 0;
      }
      uVar4 = 0;
      FUN_14113775c(uVar2,&DAT_14c846480,CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),1),0,0);
      if (param_1[1] != 0) {
        uVar1 = *param_1;
        uVar4 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar3 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar3 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar3 + 2) != param_1[1] || ((*(uint *)(puVar3 + 1) & 0x10200000) != 0))))
          {
            uVar4 = 0;
          }
          else {
            uVar4 = *puVar3;
          }
        }
      }
      FUN_140e2509e(uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1440c4806 FUN_1440c4806 body=29 status=ok
// SIG undefined FUN_1440c4806(void)

undefined8 FUN_1440c4806(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c4824 FUN_1440c4824 body=29 status=ok
// SIG undefined FUN_1440c4824(void)

undefined8 FUN_1440c4824(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c4856 FUN_1440c4856 body=93 status=ok
// SIG undefined FUN_1440c4856(void)

void FUN_1440c4856(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95ef40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1440c48b4 FUN_1440c48b4 body=93 status=ok
// SIG undefined FUN_1440c48b4(void)

void FUN_1440c48b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95ef40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1440c4912 FUN_1440c4912 body=126 status=ok
// SIG undefined FUN_1440c4912(void)

void FUN_1440c4912(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95ef40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c4981. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440c49a0 FUN_1440c49a0 body=27 status=ok
// SIG undefined FUN_1440c49a0(void)

undefined1 FUN_1440c49a0(longlong param_1,undefined4 param_2)

{
  FUN_148cdafd6(*(longlong *)(param_1 + 0x18) + 0x18,*(longlong *)(param_1 + 0x18),param_2);
  return 1;
}



// FUNCTION 1440c49bc FUN_1440c49bc body=31 status=ok
// SIG undefined FUN_1440c49bc(void)

undefined8 FUN_1440c49bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c4a3a FUN_1440c4a3a body=31 status=ok
// SIG undefined FUN_1440c4a3a(void)

undefined8 FUN_1440c4a3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c4ab8 FUN_1440c4ab8 body=31 status=ok
// SIG undefined FUN_1440c4ab8(void)

undefined8 FUN_1440c4ab8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c4b2a FUN_1440c4b2a body=29 status=ok
// SIG undefined FUN_1440c4b2a(void)

undefined8 FUN_1440c4b2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c4cc6 FUN_1440c4cc6 body=93 status=ok
// SIG undefined FUN_1440c4cc6(void)

void FUN_1440c4cc6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95f410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c4d24 FUN_1440c4d24 body=93 status=ok
// SIG undefined FUN_1440c4d24(void)

void FUN_1440c4d24(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95f410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c4d82 FUN_1440c4d82 body=126 status=ok
// SIG undefined FUN_1440c4d82(void)

void FUN_1440c4d82(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f410;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c4df1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440c4e0a FUN_1440c4e0a body=269 status=ok
// SIG undefined FUN_1440c4e0a(void)

undefined8 FUN_1440c4e0a(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440c4f11;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440c4f11;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440c4f11:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440c4ec5;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1440c4f18(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1440c4ec5;
    }
  }
  uVar6 = 0;
LAB_1440c4ec5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c4f18 FUN_1440c4f18 body=90 status=ok
// SIG undefined FUN_1440c4f18(void)

void FUN_1440c4f18(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(uint *)(puVar3 + 2) == param_1[1])) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar2 = *puVar3;
      }
      else {
        uVar2 = 0;
      }
      FUN_14045627c(uVar2,CONCAT71((int7)((ulonglong)puVar3 >> 8),1),
                    CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),1));
      return;
    }
  }
  return;
}



// FUNCTION 1440c4f72 FUN_1440c4f72 body=29 status=ok
// SIG undefined FUN_1440c4f72(void)

undefined8 FUN_1440c4f72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c510e FUN_1440c510e body=93 status=ok
// SIG undefined FUN_1440c510e(void)

void FUN_1440c510e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9b40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c516c FUN_1440c516c body=93 status=ok
// SIG undefined FUN_1440c516c(void)

void FUN_1440c516c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9b40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c51ca FUN_1440c51ca body=126 status=ok
// SIG undefined FUN_1440c51ca(void)

void FUN_1440c51ca(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9b40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f480;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c5239. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440c5252 FUN_1440c5252 body=278 status=ok
// SIG undefined FUN_1440c5252(void)

undefined8 FUN_1440c5252(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_1440c5362;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440c5362;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1440c5362:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440c5315;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1440c536a(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_1440c5315;
    }
  }
  uVar6 = 0;
LAB_1440c5315:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c536a FUN_1440c536a body=307 status=ok
// SIG undefined FUN_1440c536a(void)

void FUN_1440c536a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
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
  plVar1 = (longlong *)0x0;
  if (*param_2 != 0) {
    plVar1 = (longlong *)param_2[1];
  }
  lVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
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
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c54b2 FUN_1440c54b2 body=29 status=ok
// SIG undefined FUN_1440c54b2(void)

undefined8 FUN_1440c54b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c564e FUN_1440c564e body=101 status=ok
// SIG undefined FUN_1440c564e(void)

void FUN_1440c564e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95f4f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1440c56b4 FUN_1440c56b4 body=101 status=ok
// SIG undefined FUN_1440c56b4(void)

void FUN_1440c56b4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95f4f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1440c571a FUN_1440c571a body=134 status=ok
// SIG undefined FUN_1440c571a(void)

void FUN_1440c571a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f4f0;
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
                    /* WARNING: Could not recover jumptable at 0x0001440c5791. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440c57b0 FUN_1440c57b0 body=270 status=ok
// SIG undefined FUN_1440c57b0(void)

undefined8 FUN_1440c57b0(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440c58b8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440c58b8;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440c58b8:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440c586c;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1440ba9c4(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_1440c586c;
    }
  }
  uVar6 = 0;
LAB_1440c586c:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c58c0 FUN_1440c58c0 body=277 status=ok
// SIG undefined FUN_1440c58c0(void)

void FUN_1440c58c0(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  
  lVar3 = *param_1;
  if (*(longlong *)(lVar3 + 0x1a00) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(*(longlong *)(lVar3 + 0x1a00) + 0xf38);
  }
  if ((((*(int *)((longlong)param_1 + 0xc) != 0) &&
       (uVar1 = *(uint *)(param_1 + 1), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
     ((plVar8 = (longlong *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
      plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)((longlong)param_1 + 0xc))))) {
    iVar2 = *(int *)((longlong)param_1 + 0x14);
    lVar6 = param_1[2];
    if (((*(uint *)(plVar8 + 1) & 0x10200000) == 0) && (lVar4 = *plVar8, lVar4 != 0)) {
      FUN_14113775c(lVar4,&DAT_14c846480,CONCAT71((int7)((ulonglong)plVar8 >> 8),1),0,0);
      lVar5 = *(longlong *)(lVar3 + 0x24b0);
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar4);
      }
      *(longlong *)(lVar5 + ((longlong)iVar7 * (longlong)(int)lVar6 + (longlong)iVar2) * 8) = lVar4;
      if ((char)param_1[3] == '\x01') {
        if (*(char *)(lVar3 + 0x178) == '\x03') {
          FUN_145beb61a(lVar3,lVar4);
          return;
        }
        FUN_148c97934(lVar3,lVar4,*(undefined4 *)((longlong)param_1 + 0x14),(int)param_1[2]);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1440c59d6 FUN_1440c59d6 body=70 status=ok
// SIG undefined FUN_1440c59d6(void)

undefined8 * FUN_1440c59d6(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b95f5d0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 1440c5a22 FUN_1440c5a22 body=29 status=ok
// SIG undefined FUN_1440c5a22(void)

void FUN_1440c5a22(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1440c5a40 FUN_1440c5a40 body=29 status=ok
// SIG undefined FUN_1440c5a40(void)

undefined8 FUN_1440c5a40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c5a5e FUN_1440c5a5e body=31 status=ok
// SIG undefined FUN_1440c5a5e(void)

undefined8 FUN_1440c5a5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c5a7e FUN_1440c5a7e body=29 status=ok
// SIG undefined FUN_1440c5a7e(void)

undefined8 FUN_1440c5a7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c5c1a FUN_1440c5c1a body=93 status=ok
// SIG undefined FUN_1440c5c1a(void)

void FUN_1440c5c1a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95f660;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c5c78 FUN_1440c5c78 body=93 status=ok
// SIG undefined FUN_1440c5c78(void)

void FUN_1440c5c78(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95f660;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c5cd6 FUN_1440c5cd6 body=126 status=ok
// SIG undefined FUN_1440c5cd6(void)

void FUN_1440c5cd6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f660;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c5d45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440c5db4 FUN_1440c5db4 body=360 status=ok
// SIG undefined FUN_1440c5db4(void)

undefined8 FUN_1440c5db4(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440c5f16;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440c5f16;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440c5f16:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440c5e6a;
    lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar8 != 0) &&
       ((*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
      iVar1 = *(int *)(param_1 + 0x24);
      uVar7 = 1;
      if ((iVar1 != 0) &&
         ((uVar2 = *(uint *)(param_1 + 0x20), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)))) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar5 != (undefined8 *)0x0) &&
           ((*(int *)(puVar5 + 2) == iVar1 && ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
            plVar6 = (longlong *)*puVar5;
          }
          else {
            plVar6 = (longlong *)0x0;
          }
          uVar7 = 1;
          (**(code **)(*plVar6 + 0x330))(plVar6,CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1));
        }
      }
      goto LAB_1440c5e6a;
    }
  }
  uVar7 = 0;
LAB_1440c5e6a:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c5f1e FUN_1440c5f1e body=29 status=ok
// SIG undefined FUN_1440c5f1e(void)

undefined8 FUN_1440c5f1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c60ba FUN_1440c60ba body=93 status=ok
// SIG undefined FUN_1440c60ba(void)

void FUN_1440c60ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f6d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c6118 FUN_1440c6118 body=93 status=ok
// SIG undefined FUN_1440c6118(void)

void FUN_1440c6118(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f6d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c6176 FUN_1440c6176 body=126 status=ok
// SIG undefined FUN_1440c6176(void)

void FUN_1440c6176(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f6d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c61e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440c61fe FUN_1440c61fe body=269 status=ok
// SIG undefined FUN_1440c61fe(void)

undefined8 FUN_1440c61fe(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440c6305;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440c6305;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440c6305:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440c62b9;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1440c630c(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1440c62b9;
    }
  }
  uVar6 = 0;
LAB_1440c62b9:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c630c FUN_1440c630c body=124 status=ok
// SIG undefined FUN_1440c630c(void)

void FUN_1440c630c(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = 0;
      }
      lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x3c20) + 0x18))(lVar2 + 0x3c20);
      if (lVar2 != 0) {
        FUN_145897c1a(lVar2,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1440c6388 FUN_1440c6388 body=29 status=ok
// SIG undefined FUN_1440c6388(void)

undefined8 FUN_1440c6388(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c6524 FUN_1440c6524 body=93 status=ok
// SIG undefined FUN_1440c6524(void)

void FUN_1440c6524(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95f740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c6582 FUN_1440c6582 body=93 status=ok
// SIG undefined FUN_1440c6582(void)

void FUN_1440c6582(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95f740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c65e0 FUN_1440c65e0 body=126 status=ok
// SIG undefined FUN_1440c65e0(void)

void FUN_1440c65e0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f740;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c664f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440c6668 FUN_1440c6668 body=269 status=ok
// SIG undefined FUN_1440c6668(void)

undefined8 FUN_1440c6668(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440c676f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440c676f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440c676f:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440c6723;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1440c6776(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1440c6723;
    }
  }
  uVar6 = 0;
LAB_1440c6723:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c6776 FUN_1440c6776 body=124 status=ok
// SIG undefined FUN_1440c6776(void)

void FUN_1440c6776(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = 0;
      }
      lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x3c20) + 0x18))(lVar2 + 0x3c20);
      if (lVar2 != 0) {
        FUN_145897c1a(lVar2,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1440c6846 FUN_1440c6846 body=29 status=ok
// SIG undefined FUN_1440c6846(void)

undefined8 FUN_1440c6846(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c69e2 FUN_1440c69e2 body=93 status=ok
// SIG undefined FUN_1440c69e2(void)

void FUN_1440c69e2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95f820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c6a40 FUN_1440c6a40 body=93 status=ok
// SIG undefined FUN_1440c6a40(void)

void FUN_1440c6a40(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95f820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c6a9e FUN_1440c6a9e body=126 status=ok
// SIG undefined FUN_1440c6a9e(void)

void FUN_1440c6a9e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f820;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c6b0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440c6b26 FUN_1440c6b26 body=269 status=ok
// SIG undefined FUN_1440c6b26(void)

undefined8 FUN_1440c6b26(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440c6c2d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440c6c2d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440c6c2d:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440c6be1;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1440c6c34(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1440c6be1;
    }
  }
  uVar6 = 0;
LAB_1440c6be1:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c6c34 FUN_1440c6c34 body=87 status=ok
// SIG undefined FUN_1440c6c34(void)

void FUN_1440c6c34(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(uint *)(puVar3 + 2) == param_1[1])) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar2 = *puVar3;
      }
      else {
        uVar2 = 0;
      }
      FUN_141303942(uVar2,CONCAT71((int7)((ulonglong)puVar3 >> 8),1));
      return;
    }
  }
  return;
}


