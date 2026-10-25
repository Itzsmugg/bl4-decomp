// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1480f2b44 FUN_1480f2b44 body=251 status=ok
// SIG undefined FUN_1480f2b44(void)

void FUN_1480f2b44(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480f301e(param_1,param_3);
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 800) + 0xb0) == '\x01') {
    local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14ad9a1d0;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480f2dca(param_1,param_3);
  return;
}



// FUNCTION 1480f2c42 FUN_1480f2c42 body=29 status=ok
// SIG undefined FUN_1480f2c42(void)

undefined8 FUN_1480f2c42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f2c74 FUN_1480f2c74 body=93 status=ok
// SIG undefined FUN_1480f2c74(void)

void FUN_1480f2c74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a1d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f2cd2 FUN_1480f2cd2 body=93 status=ok
// SIG undefined FUN_1480f2cd2(void)

void FUN_1480f2cd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a1d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f2d30 FUN_1480f2d30 body=126 status=ok
// SIG undefined FUN_1480f2d30(void)

void FUN_1480f2d30(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a1d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f2d9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f2db6 FUN_1480f2db6 body=19 status=ok
// SIG undefined FUN_1480f2db6(void)

undefined1 FUN_1480f2db6(undefined8 param_1,undefined8 param_2)

{
  FUN_14395b658(param_2);
  return 1;
}



// FUNCTION 1480f2dca FUN_1480f2dca body=202 status=ok
// SIG undefined FUN_1480f2dca(void)

void FUN_1480f2dca(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9a240;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f2e96 FUN_1480f2e96 body=29 status=ok
// SIG undefined FUN_1480f2e96(void)

undefined8 FUN_1480f2e96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f2ec8 FUN_1480f2ec8 body=93 status=ok
// SIG undefined FUN_1480f2ec8(void)

void FUN_1480f2ec8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a240;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f2f26 FUN_1480f2f26 body=93 status=ok
// SIG undefined FUN_1480f2f26(void)

void FUN_1480f2f26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a240;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f2f84 FUN_1480f2f84 body=126 status=ok
// SIG undefined FUN_1480f2f84(void)

void FUN_1480f2f84(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a240;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f2ff3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f300a FUN_1480f300a body=19 status=ok
// SIG undefined FUN_1480f300a(void)

undefined1 FUN_1480f300a(undefined8 param_1,undefined8 param_2)

{
  FUN_14395d41c(param_2);
  return 1;
}



// FUNCTION 1480f301e FUN_1480f301e body=202 status=ok
// SIG undefined FUN_1480f301e(void)

void FUN_1480f301e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9a2b0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f30ea FUN_1480f30ea body=29 status=ok
// SIG undefined FUN_1480f30ea(void)

undefined8 FUN_1480f30ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f311c FUN_1480f311c body=93 status=ok
// SIG undefined FUN_1480f311c(void)

void FUN_1480f311c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a2b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f317a FUN_1480f317a body=93 status=ok
// SIG undefined FUN_1480f317a(void)

void FUN_1480f317a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a2b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f31d8 FUN_1480f31d8 body=126 status=ok
// SIG undefined FUN_1480f31d8(void)

void FUN_1480f31d8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a2b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f3247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f325e FUN_1480f325e body=19 status=ok
// SIG undefined FUN_1480f325e(void)

undefined1 FUN_1480f325e(undefined8 param_1,undefined8 param_2)

{
  FUN_14395f1e0(param_2);
  return 1;
}



// FUNCTION 1480f3272 FUN_1480f3272 body=31 status=ok
// SIG undefined FUN_1480f3272(void)

undefined8 FUN_1480f3272(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f32a6 FUN_1480f32a6 body=93 status=ok
// SIG undefined FUN_1480f32a6(void)

void FUN_1480f32a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a320;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f3304 FUN_1480f3304 body=93 status=ok
// SIG undefined FUN_1480f3304(void)

void FUN_1480f3304(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a320;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f3362 FUN_1480f3362 body=126 status=ok
// SIG undefined FUN_1480f3362(void)

void FUN_1480f3362(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a320;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f33d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f33e0 FUN_1480f33e0 body=19 status=ok
// SIG undefined FUN_1480f33e0(void)

undefined1 FUN_1480f33e0(undefined8 param_1,undefined8 param_2)

{
  FUN_141004b64(param_2);
  return 1;
}



// FUNCTION 1480f33f4 FUN_1480f33f4 body=251 status=ok
// SIG undefined FUN_1480f33f4(void)

void FUN_1480f33f4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480f38ce(param_1,param_3);
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 800) + 0xb0) == '\x01') {
    local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14ad9a390;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480f367a(param_1,param_3);
  return;
}



// FUNCTION 1480f34f2 FUN_1480f34f2 body=29 status=ok
// SIG undefined FUN_1480f34f2(void)

undefined8 FUN_1480f34f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f3524 FUN_1480f3524 body=93 status=ok
// SIG undefined FUN_1480f3524(void)

void FUN_1480f3524(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a390;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f3582 FUN_1480f3582 body=93 status=ok
// SIG undefined FUN_1480f3582(void)

void FUN_1480f3582(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a390;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f35e0 FUN_1480f35e0 body=126 status=ok
// SIG undefined FUN_1480f35e0(void)

void FUN_1480f35e0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a390;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f364f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f3666 FUN_1480f3666 body=19 status=ok
// SIG undefined FUN_1480f3666(void)

undefined1 FUN_1480f3666(undefined8 param_1,undefined8 param_2)

{
  FUN_143960fa4(param_2);
  return 1;
}



// FUNCTION 1480f367a FUN_1480f367a body=202 status=ok
// SIG undefined FUN_1480f367a(void)

void FUN_1480f367a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9a400;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f3746 FUN_1480f3746 body=29 status=ok
// SIG undefined FUN_1480f3746(void)

undefined8 FUN_1480f3746(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f3778 FUN_1480f3778 body=93 status=ok
// SIG undefined FUN_1480f3778(void)

void FUN_1480f3778(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a400;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f37d6 FUN_1480f37d6 body=93 status=ok
// SIG undefined FUN_1480f37d6(void)

void FUN_1480f37d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a400;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f3834 FUN_1480f3834 body=126 status=ok
// SIG undefined FUN_1480f3834(void)

void FUN_1480f3834(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a400;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f38a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f38ba FUN_1480f38ba body=19 status=ok
// SIG undefined FUN_1480f38ba(void)

undefined1 FUN_1480f38ba(undefined8 param_1,undefined8 param_2)

{
  FUN_1439629a2(param_2);
  return 1;
}



// FUNCTION 1480f38ce FUN_1480f38ce body=202 status=ok
// SIG undefined FUN_1480f38ce(void)

void FUN_1480f38ce(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9a470;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f399a FUN_1480f399a body=29 status=ok
// SIG undefined FUN_1480f399a(void)

undefined8 FUN_1480f399a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f39cc FUN_1480f39cc body=93 status=ok
// SIG undefined FUN_1480f39cc(void)

void FUN_1480f39cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a470;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f3a2a FUN_1480f3a2a body=93 status=ok
// SIG undefined FUN_1480f3a2a(void)

void FUN_1480f3a2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a470;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f3a88 FUN_1480f3a88 body=126 status=ok
// SIG undefined FUN_1480f3a88(void)

void FUN_1480f3a88(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a470;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f3af7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f3b0e FUN_1480f3b0e body=19 status=ok
// SIG undefined FUN_1480f3b0e(void)

undefined1 FUN_1480f3b0e(undefined8 param_1,undefined8 param_2)

{
  FUN_1439643a0(param_2);
  return 1;
}



// FUNCTION 1480f3b22 FUN_1480f3b22 body=251 status=ok
// SIG undefined FUN_1480f3b22(void)

void FUN_1480f3b22(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480f3ffc(param_1,param_3);
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 800) + 0xb0) == '\x01') {
    local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14ad9a4e0;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480f3da8(param_1,param_3);
  return;
}



// FUNCTION 1480f3c20 FUN_1480f3c20 body=29 status=ok
// SIG undefined FUN_1480f3c20(void)

undefined8 FUN_1480f3c20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f3c52 FUN_1480f3c52 body=93 status=ok
// SIG undefined FUN_1480f3c52(void)

void FUN_1480f3c52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a4e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f3cb0 FUN_1480f3cb0 body=93 status=ok
// SIG undefined FUN_1480f3cb0(void)

void FUN_1480f3cb0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a4e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f3d0e FUN_1480f3d0e body=126 status=ok
// SIG undefined FUN_1480f3d0e(void)

void FUN_1480f3d0e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a4e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f3d7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f3d94 FUN_1480f3d94 body=19 status=ok
// SIG undefined FUN_1480f3d94(void)

undefined1 FUN_1480f3d94(undefined8 param_1,undefined8 param_2)

{
  FUN_143965d9e(param_2);
  return 1;
}



// FUNCTION 1480f3da8 FUN_1480f3da8 body=202 status=ok
// SIG undefined FUN_1480f3da8(void)

void FUN_1480f3da8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9a550;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f3e74 FUN_1480f3e74 body=29 status=ok
// SIG undefined FUN_1480f3e74(void)

undefined8 FUN_1480f3e74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f3ea6 FUN_1480f3ea6 body=93 status=ok
// SIG undefined FUN_1480f3ea6(void)

void FUN_1480f3ea6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a550;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f3f04 FUN_1480f3f04 body=93 status=ok
// SIG undefined FUN_1480f3f04(void)

void FUN_1480f3f04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a550;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f3f62 FUN_1480f3f62 body=126 status=ok
// SIG undefined FUN_1480f3f62(void)

void FUN_1480f3f62(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a550;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f3fd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f3fe8 FUN_1480f3fe8 body=19 status=ok
// SIG undefined FUN_1480f3fe8(void)

undefined1 FUN_1480f3fe8(undefined8 param_1,undefined8 param_2)

{
  FUN_143967930(param_2);
  return 1;
}



// FUNCTION 1480f3ffc FUN_1480f3ffc body=202 status=ok
// SIG undefined FUN_1480f3ffc(void)

void FUN_1480f3ffc(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9a5c0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f40c8 FUN_1480f40c8 body=29 status=ok
// SIG undefined FUN_1480f40c8(void)

undefined8 FUN_1480f40c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f40fa FUN_1480f40fa body=93 status=ok
// SIG undefined FUN_1480f40fa(void)

void FUN_1480f40fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a5c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f4158 FUN_1480f4158 body=93 status=ok
// SIG undefined FUN_1480f4158(void)

void FUN_1480f4158(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a5c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f41b6 FUN_1480f41b6 body=126 status=ok
// SIG undefined FUN_1480f41b6(void)

void FUN_1480f41b6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a5c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f4225. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f423c FUN_1480f423c body=19 status=ok
// SIG undefined FUN_1480f423c(void)

undefined1 FUN_1480f423c(undefined8 param_1,undefined8 param_2)

{
  FUN_1439694c2(param_2);
  return 1;
}



// FUNCTION 1480f4250 FUN_1480f4250 body=251 status=ok
// SIG undefined FUN_1480f4250(void)

void FUN_1480f4250(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480f472a(param_1,param_3);
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 800) + 0xb0) == '\x01') {
    local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14ad9a630;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480f44d6(param_1,param_3);
  return;
}



// FUNCTION 1480f434e FUN_1480f434e body=29 status=ok
// SIG undefined FUN_1480f434e(void)

undefined8 FUN_1480f434e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f4380 FUN_1480f4380 body=93 status=ok
// SIG undefined FUN_1480f4380(void)

void FUN_1480f4380(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a630;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f43de FUN_1480f43de body=93 status=ok
// SIG undefined FUN_1480f43de(void)

void FUN_1480f43de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a630;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f443c FUN_1480f443c body=126 status=ok
// SIG undefined FUN_1480f443c(void)

void FUN_1480f443c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a630;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f44ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f44c2 FUN_1480f44c2 body=19 status=ok
// SIG undefined FUN_1480f44c2(void)

undefined1 FUN_1480f44c2(undefined8 param_1,undefined8 param_2)

{
  FUN_14396b054(param_2);
  return 1;
}



// FUNCTION 1480f44d6 FUN_1480f44d6 body=202 status=ok
// SIG undefined FUN_1480f44d6(void)

void FUN_1480f44d6(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9a6a0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f45a2 FUN_1480f45a2 body=29 status=ok
// SIG undefined FUN_1480f45a2(void)

undefined8 FUN_1480f45a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f45d4 FUN_1480f45d4 body=93 status=ok
// SIG undefined FUN_1480f45d4(void)

void FUN_1480f45d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a6a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f4632 FUN_1480f4632 body=93 status=ok
// SIG undefined FUN_1480f4632(void)

void FUN_1480f4632(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a6a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f4690 FUN_1480f4690 body=126 status=ok
// SIG undefined FUN_1480f4690(void)

void FUN_1480f4690(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a6a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f46ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f4716 FUN_1480f4716 body=19 status=ok
// SIG undefined FUN_1480f4716(void)

undefined1 FUN_1480f4716(undefined8 param_1,undefined8 param_2)

{
  FUN_14396cda8(param_2);
  return 1;
}



// FUNCTION 1480f472a FUN_1480f472a body=202 status=ok
// SIG undefined FUN_1480f472a(void)

void FUN_1480f472a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9a710;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f47f6 FUN_1480f47f6 body=29 status=ok
// SIG undefined FUN_1480f47f6(void)

undefined8 FUN_1480f47f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f4828 FUN_1480f4828 body=93 status=ok
// SIG undefined FUN_1480f4828(void)

void FUN_1480f4828(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a710;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f4886 FUN_1480f4886 body=93 status=ok
// SIG undefined FUN_1480f4886(void)

void FUN_1480f4886(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a710;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f48e4 FUN_1480f48e4 body=126 status=ok
// SIG undefined FUN_1480f48e4(void)

void FUN_1480f48e4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a710;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f4953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f496a FUN_1480f496a body=19 status=ok
// SIG undefined FUN_1480f496a(void)

undefined1 FUN_1480f496a(undefined8 param_1,undefined8 param_2)

{
  FUN_14396eafc(param_2);
  return 1;
}



// FUNCTION 1480f497e FUN_1480f497e body=29 status=ok
// SIG undefined FUN_1480f497e(void)

undefined8 FUN_1480f497e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f49b0 FUN_1480f49b0 body=93 status=ok
// SIG undefined FUN_1480f49b0(void)

void FUN_1480f49b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a780;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f4a0e FUN_1480f4a0e body=93 status=ok
// SIG undefined FUN_1480f4a0e(void)

void FUN_1480f4a0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a780;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f4a6c FUN_1480f4a6c body=126 status=ok
// SIG undefined FUN_1480f4a6c(void)

void FUN_1480f4a6c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a780;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f4adb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f4af2 FUN_1480f4af2 body=19 status=ok
// SIG undefined FUN_1480f4af2(void)

undefined1 FUN_1480f4af2(undefined8 param_1,undefined8 param_2)

{
  FUN_143970850(param_2);
  return 1;
}



// FUNCTION 1480f4b06 FUN_1480f4b06 body=251 status=ok
// SIG undefined FUN_1480f4b06(void)

void FUN_1480f4b06(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480f4fe0(param_1,param_3);
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 800) + 0xb0) == '\x01') {
    local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14ad9a7f0;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480f4d8c(param_1,param_3);
  return;
}



// FUNCTION 1480f4c04 FUN_1480f4c04 body=29 status=ok
// SIG undefined FUN_1480f4c04(void)

undefined8 FUN_1480f4c04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f4c36 FUN_1480f4c36 body=93 status=ok
// SIG undefined FUN_1480f4c36(void)

void FUN_1480f4c36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a7f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f4c94 FUN_1480f4c94 body=93 status=ok
// SIG undefined FUN_1480f4c94(void)

void FUN_1480f4c94(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a7f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f4cf2 FUN_1480f4cf2 body=126 status=ok
// SIG undefined FUN_1480f4cf2(void)

void FUN_1480f4cf2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a7f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f4d61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f4d78 FUN_1480f4d78 body=19 status=ok
// SIG undefined FUN_1480f4d78(void)

undefined1 FUN_1480f4d78(undefined8 param_1,undefined8 param_2)

{
  FUN_143970bf0(param_2);
  return 1;
}



// FUNCTION 1480f4d8c FUN_1480f4d8c body=202 status=ok
// SIG undefined FUN_1480f4d8c(void)

void FUN_1480f4d8c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9a860;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f4e58 FUN_1480f4e58 body=29 status=ok
// SIG undefined FUN_1480f4e58(void)

undefined8 FUN_1480f4e58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f4e8a FUN_1480f4e8a body=93 status=ok
// SIG undefined FUN_1480f4e8a(void)

void FUN_1480f4e8a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a860;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f4ee8 FUN_1480f4ee8 body=93 status=ok
// SIG undefined FUN_1480f4ee8(void)

void FUN_1480f4ee8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a860;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f4f46 FUN_1480f4f46 body=126 status=ok
// SIG undefined FUN_1480f4f46(void)

void FUN_1480f4f46(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a860;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f4fb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f4fcc FUN_1480f4fcc body=19 status=ok
// SIG undefined FUN_1480f4fcc(void)

undefined1 FUN_1480f4fcc(undefined8 param_1,undefined8 param_2)

{
  FUN_143972bf0(param_2);
  return 1;
}



// FUNCTION 1480f4fe0 FUN_1480f4fe0 body=202 status=ok
// SIG undefined FUN_1480f4fe0(void)

void FUN_1480f4fe0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9a8d0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f50ac FUN_1480f50ac body=29 status=ok
// SIG undefined FUN_1480f50ac(void)

undefined8 FUN_1480f50ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f50de FUN_1480f50de body=93 status=ok
// SIG undefined FUN_1480f50de(void)

void FUN_1480f50de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a8d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f513c FUN_1480f513c body=93 status=ok
// SIG undefined FUN_1480f513c(void)

void FUN_1480f513c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a8d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f519a FUN_1480f519a body=126 status=ok
// SIG undefined FUN_1480f519a(void)

void FUN_1480f519a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a8d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f5209. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f5220 FUN_1480f5220 body=19 status=ok
// SIG undefined FUN_1480f5220(void)

undefined1 FUN_1480f5220(undefined8 param_1,undefined8 param_2)

{
  FUN_143974bf0(param_2);
  return 1;
}



// FUNCTION 1480f5234 FUN_1480f5234 body=251 status=ok
// SIG undefined FUN_1480f5234(void)

void FUN_1480f5234(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480f570e(param_1,param_3);
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 800) + 0xb0) == '\x01') {
    local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14ad9a940;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480f54ba(param_1,param_3);
  return;
}



// FUNCTION 1480f5332 FUN_1480f5332 body=29 status=ok
// SIG undefined FUN_1480f5332(void)

undefined8 FUN_1480f5332(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f5364 FUN_1480f5364 body=93 status=ok
// SIG undefined FUN_1480f5364(void)

void FUN_1480f5364(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a940;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f53c2 FUN_1480f53c2 body=93 status=ok
// SIG undefined FUN_1480f53c2(void)

void FUN_1480f53c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a940;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f5420 FUN_1480f5420 body=126 status=ok
// SIG undefined FUN_1480f5420(void)

void FUN_1480f5420(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a940;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f548f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f54a6 FUN_1480f54a6 body=19 status=ok
// SIG undefined FUN_1480f54a6(void)

undefined1 FUN_1480f54a6(undefined8 param_1,undefined8 param_2)

{
  FUN_143976bf0(param_2);
  return 1;
}



// FUNCTION 1480f54ba FUN_1480f54ba body=202 status=ok
// SIG undefined FUN_1480f54ba(void)

void FUN_1480f54ba(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9a9b0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f5586 FUN_1480f5586 body=29 status=ok
// SIG undefined FUN_1480f5586(void)

undefined8 FUN_1480f5586(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f55b8 FUN_1480f55b8 body=93 status=ok
// SIG undefined FUN_1480f55b8(void)

void FUN_1480f55b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a9b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f5616 FUN_1480f5616 body=93 status=ok
// SIG undefined FUN_1480f5616(void)

void FUN_1480f5616(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a9b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f5674 FUN_1480f5674 body=126 status=ok
// SIG undefined FUN_1480f5674(void)

void FUN_1480f5674(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a9b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f56e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f56fa FUN_1480f56fa body=19 status=ok
// SIG undefined FUN_1480f56fa(void)

undefined1 FUN_1480f56fa(undefined8 param_1,undefined8 param_2)

{
  FUN_143978d92(param_2);
  return 1;
}



// FUNCTION 1480f570e FUN_1480f570e body=202 status=ok
// SIG undefined FUN_1480f570e(void)

void FUN_1480f570e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9aa20;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f57da FUN_1480f57da body=29 status=ok
// SIG undefined FUN_1480f57da(void)

undefined8 FUN_1480f57da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f580c FUN_1480f580c body=93 status=ok
// SIG undefined FUN_1480f580c(void)

void FUN_1480f580c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9aa20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f586a FUN_1480f586a body=93 status=ok
// SIG undefined FUN_1480f586a(void)

void FUN_1480f586a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9aa20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f58c8 FUN_1480f58c8 body=126 status=ok
// SIG undefined FUN_1480f58c8(void)

void FUN_1480f58c8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9aa20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f5937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f594e FUN_1480f594e body=19 status=ok
// SIG undefined FUN_1480f594e(void)

undefined1 FUN_1480f594e(undefined8 param_1,undefined8 param_2)

{
  FUN_14397af34(param_2);
  return 1;
}



// FUNCTION 1480f5962 FUN_1480f5962 body=251 status=ok
// SIG undefined FUN_1480f5962(void)

void FUN_1480f5962(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480f5e3c(param_1,param_3);
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 800) + 0xb0) == '\x01') {
    local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14ad9aa90;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480f5be8(param_1,param_3);
  return;
}



// FUNCTION 1480f5a60 FUN_1480f5a60 body=29 status=ok
// SIG undefined FUN_1480f5a60(void)

undefined8 FUN_1480f5a60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f5a92 FUN_1480f5a92 body=93 status=ok
// SIG undefined FUN_1480f5a92(void)

void FUN_1480f5a92(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9aa90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f5af0 FUN_1480f5af0 body=93 status=ok
// SIG undefined FUN_1480f5af0(void)

void FUN_1480f5af0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9aa90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f5b4e FUN_1480f5b4e body=126 status=ok
// SIG undefined FUN_1480f5b4e(void)

void FUN_1480f5b4e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9aa90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f5bbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f5bd4 FUN_1480f5bd4 body=19 status=ok
// SIG undefined FUN_1480f5bd4(void)

undefined1 FUN_1480f5bd4(undefined8 param_1,undefined8 param_2)

{
  FUN_14397d0d6(param_2);
  return 1;
}



// FUNCTION 1480f5be8 FUN_1480f5be8 body=202 status=ok
// SIG undefined FUN_1480f5be8(void)

void FUN_1480f5be8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9ab00;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f5cb4 FUN_1480f5cb4 body=29 status=ok
// SIG undefined FUN_1480f5cb4(void)

undefined8 FUN_1480f5cb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f5ce6 FUN_1480f5ce6 body=93 status=ok
// SIG undefined FUN_1480f5ce6(void)

void FUN_1480f5ce6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9ab00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f5d44 FUN_1480f5d44 body=93 status=ok
// SIG undefined FUN_1480f5d44(void)

void FUN_1480f5d44(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9ab00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f5da2 FUN_1480f5da2 body=126 status=ok
// SIG undefined FUN_1480f5da2(void)

void FUN_1480f5da2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9ab00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f5e11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f5e28 FUN_1480f5e28 body=19 status=ok
// SIG undefined FUN_1480f5e28(void)

undefined1 FUN_1480f5e28(undefined8 param_1,undefined8 param_2)

{
  FUN_14397f3fa(param_2);
  return 1;
}



// FUNCTION 1480f5e3c FUN_1480f5e3c body=202 status=ok
// SIG undefined FUN_1480f5e3c(void)

void FUN_1480f5e3c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9ab70;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f5f08 FUN_1480f5f08 body=29 status=ok
// SIG undefined FUN_1480f5f08(void)

undefined8 FUN_1480f5f08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f5f3a FUN_1480f5f3a body=93 status=ok
// SIG undefined FUN_1480f5f3a(void)

void FUN_1480f5f3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9ab70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f5f98 FUN_1480f5f98 body=93 status=ok
// SIG undefined FUN_1480f5f98(void)

void FUN_1480f5f98(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9ab70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f5ff6 FUN_1480f5ff6 body=126 status=ok
// SIG undefined FUN_1480f5ff6(void)

void FUN_1480f5ff6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9ab70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f6065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f607c FUN_1480f607c body=19 status=ok
// SIG undefined FUN_1480f607c(void)

undefined1 FUN_1480f607c(undefined8 param_1,undefined8 param_2)

{
  FUN_14398171e(param_2);
  return 1;
}



// FUNCTION 1480f6090 FUN_1480f6090 body=29 status=ok
// SIG undefined FUN_1480f6090(void)

undefined8 FUN_1480f6090(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f60c2 FUN_1480f60c2 body=93 status=ok
// SIG undefined FUN_1480f60c2(void)

void FUN_1480f60c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9abe0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f6120 FUN_1480f6120 body=93 status=ok
// SIG undefined FUN_1480f6120(void)

void FUN_1480f6120(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9abe0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f617e FUN_1480f617e body=126 status=ok
// SIG undefined FUN_1480f617e(void)

void FUN_1480f617e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9abe0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f61ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f6204 FUN_1480f6204 body=19 status=ok
// SIG undefined FUN_1480f6204(void)

undefined1 FUN_1480f6204(undefined8 param_1,undefined8 param_2)

{
  FUN_143983a42(param_2);
  return 1;
}



// FUNCTION 1480f6218 FUN_1480f6218 body=251 status=ok
// SIG undefined FUN_1480f6218(void)

void FUN_1480f6218(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480f68a2(param_1,param_3);
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 800) + 0xb0) == '\x01') {
    local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14ad9ac50;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480f6576(param_1,param_3);
  return;
}



// FUNCTION 1480f6316 FUN_1480f6316 body=29 status=ok
// SIG undefined FUN_1480f6316(void)

undefined8 FUN_1480f6316(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f6348 FUN_1480f6348 body=93 status=ok
// SIG undefined FUN_1480f6348(void)

void FUN_1480f6348(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9ac50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f63a6 FUN_1480f63a6 body=93 status=ok
// SIG undefined FUN_1480f63a6(void)

void FUN_1480f63a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9ac50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f6404 FUN_1480f6404 body=126 status=ok
// SIG undefined FUN_1480f6404(void)

void FUN_1480f6404(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9ac50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f6473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f648a FUN_1480f648a body=19 status=ok
// SIG undefined FUN_1480f648a(void)

undefined1 FUN_1480f648a(undefined8 param_1,undefined8 param_2)

{
  FUN_143984036(param_2);
  return 1;
}



// FUNCTION 1480f649e FUN_1480f649e body=216 status=ok
// SIG undefined FUN_1480f649e(void)

longlong FUN_1480f649e(longlong param_1,undefined8 param_2)

{
  FUN_144a76c20();
  FUN_144a76c20(param_1 + 0x10,param_2);
  FUN_144a76c20(param_1 + 0x20,param_2);
  FUN_144a76c20(param_1 + 0x30,param_2);
  FUN_144a76c20(param_1 + 0x40,param_2);
  FUN_144a76c20(param_1 + 0x50,param_2);
  FUN_144a76c20(param_1 + 0x60,param_2);
  FUN_144a76c20(param_1 + 0x70,param_2);
  FUN_144a76c20(param_1 + 0x80,param_2);
  FUN_144a76c20(param_1 + 0x90,param_2);
  FUN_144a76c20(param_1 + 0xa0,param_2);
  FUN_144a76c20(param_1 + 0xb0,param_2);
  FUN_144a76c20(param_1 + 0xc0,param_2);
  FUN_144a76c20(param_1 + 0xd0,param_2);
  FUN_144a76c20(param_1 + 0xe0,param_2);
  return param_1;
}



// FUNCTION 1480f6576 FUN_1480f6576 body=202 status=ok
// SIG undefined FUN_1480f6576(void)

void FUN_1480f6576(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9acc0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f6642 FUN_1480f6642 body=29 status=ok
// SIG undefined FUN_1480f6642(void)

undefined8 FUN_1480f6642(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f6674 FUN_1480f6674 body=93 status=ok
// SIG undefined FUN_1480f6674(void)

void FUN_1480f6674(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9acc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f66d2 FUN_1480f66d2 body=93 status=ok
// SIG undefined FUN_1480f66d2(void)

void FUN_1480f66d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9acc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f6730 FUN_1480f6730 body=126 status=ok
// SIG undefined FUN_1480f6730(void)

void FUN_1480f6730(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9acc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f679f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f67b6 FUN_1480f67b6 body=19 status=ok
// SIG undefined FUN_1480f67b6(void)

undefined1 FUN_1480f67b6(undefined8 param_1,undefined8 param_2)

{
  FUN_143984f70(param_2);
  return 1;
}



// FUNCTION 1480f67ca FUN_1480f67ca body=216 status=ok
// SIG undefined FUN_1480f67ca(void)

longlong FUN_1480f67ca(longlong param_1,undefined8 param_2)

{
  FUN_144a76c20();
  FUN_144a76c20(param_1 + 0x10,param_2);
  FUN_144a76c20(param_1 + 0x20,param_2);
  FUN_144a76c20(param_1 + 0x30,param_2);
  FUN_144a76c20(param_1 + 0x40,param_2);
  FUN_144a76c20(param_1 + 0x50,param_2);
  FUN_144a76c20(param_1 + 0x60,param_2);
  FUN_144a76c20(param_1 + 0x70,param_2);
  FUN_144a76c20(param_1 + 0x80,param_2);
  FUN_144a76c20(param_1 + 0x90,param_2);
  FUN_144a76c20(param_1 + 0xa0,param_2);
  FUN_144a76c20(param_1 + 0xb0,param_2);
  FUN_144a76c20(param_1 + 0xc0,param_2);
  FUN_144a76c20(param_1 + 0xd0,param_2);
  FUN_144a76c20(param_1 + 0xe0,param_2);
  return param_1;
}



// FUNCTION 1480f68a2 FUN_1480f68a2 body=202 status=ok
// SIG undefined FUN_1480f68a2(void)

void FUN_1480f68a2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9ad30;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f696e FUN_1480f696e body=29 status=ok
// SIG undefined FUN_1480f696e(void)

undefined8 FUN_1480f696e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f69a0 FUN_1480f69a0 body=93 status=ok
// SIG undefined FUN_1480f69a0(void)

void FUN_1480f69a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9ad30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f69fe FUN_1480f69fe body=93 status=ok
// SIG undefined FUN_1480f69fe(void)

void FUN_1480f69fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9ad30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f6a5c FUN_1480f6a5c body=126 status=ok
// SIG undefined FUN_1480f6a5c(void)

void FUN_1480f6a5c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9ad30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f6acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f6ae2 FUN_1480f6ae2 body=19 status=ok
// SIG undefined FUN_1480f6ae2(void)

undefined1 FUN_1480f6ae2(undefined8 param_1,undefined8 param_2)

{
  FUN_143985eaa(param_2);
  return 1;
}



// FUNCTION 1480f6af6 FUN_1480f6af6 body=216 status=ok
// SIG undefined FUN_1480f6af6(void)

longlong FUN_1480f6af6(longlong param_1,undefined8 param_2)

{
  FUN_144a76c20();
  FUN_144a76c20(param_1 + 0x10,param_2);
  FUN_144a76c20(param_1 + 0x20,param_2);
  FUN_144a76c20(param_1 + 0x30,param_2);
  FUN_144a76c20(param_1 + 0x40,param_2);
  FUN_144a76c20(param_1 + 0x50,param_2);
  FUN_144a76c20(param_1 + 0x60,param_2);
  FUN_144a76c20(param_1 + 0x70,param_2);
  FUN_144a76c20(param_1 + 0x80,param_2);
  FUN_144a76c20(param_1 + 0x90,param_2);
  FUN_144a76c20(param_1 + 0xa0,param_2);
  FUN_144a76c20(param_1 + 0xb0,param_2);
  FUN_144a76c20(param_1 + 0xc0,param_2);
  FUN_144a76c20(param_1 + 0xd0,param_2);
  FUN_144a76c20(param_1 + 0xe0,param_2);
  return param_1;
}



// FUNCTION 1480f6bce FUN_1480f6bce body=251 status=ok
// SIG undefined FUN_1480f6bce(void)

void FUN_1480f6bce(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480f7258(param_1,param_3);
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 800) + 0xb0) == '\x01') {
    local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14ad9ada0;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480f6f2c(param_1,param_3);
  return;
}



// FUNCTION 1480f6ccc FUN_1480f6ccc body=29 status=ok
// SIG undefined FUN_1480f6ccc(void)

undefined8 FUN_1480f6ccc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f6cfe FUN_1480f6cfe body=93 status=ok
// SIG undefined FUN_1480f6cfe(void)

void FUN_1480f6cfe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9ada0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f6d5c FUN_1480f6d5c body=93 status=ok
// SIG undefined FUN_1480f6d5c(void)

void FUN_1480f6d5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9ada0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f6dba FUN_1480f6dba body=126 status=ok
// SIG undefined FUN_1480f6dba(void)

void FUN_1480f6dba(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9ada0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f6e29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f6e40 FUN_1480f6e40 body=19 status=ok
// SIG undefined FUN_1480f6e40(void)

undefined1 FUN_1480f6e40(undefined8 param_1,undefined8 param_2)

{
  FUN_143986de4(param_2);
  return 1;
}



// FUNCTION 1480f6e54 FUN_1480f6e54 body=216 status=ok
// SIG undefined FUN_1480f6e54(void)

longlong FUN_1480f6e54(longlong param_1,undefined8 param_2)

{
  FUN_144a76c20();
  FUN_144a76c20(param_1 + 0x10,param_2);
  FUN_144a76c20(param_1 + 0x20,param_2);
  FUN_144a76c20(param_1 + 0x30,param_2);
  FUN_144a76c20(param_1 + 0x40,param_2);
  FUN_144a76c20(param_1 + 0x50,param_2);
  FUN_144a76c20(param_1 + 0x60,param_2);
  FUN_144a76c20(param_1 + 0x70,param_2);
  FUN_144a76c20(param_1 + 0x80,param_2);
  FUN_144a76c20(param_1 + 0x90,param_2);
  FUN_144a76c20(param_1 + 0xa0,param_2);
  FUN_144a76c20(param_1 + 0xb0,param_2);
  FUN_144a76c20(param_1 + 0xc0,param_2);
  FUN_144a76c20(param_1 + 0xd0,param_2);
  FUN_144a76c20(param_1 + 0xe0,param_2);
  return param_1;
}



// FUNCTION 1480f6f2c FUN_1480f6f2c body=202 status=ok
// SIG undefined FUN_1480f6f2c(void)

void FUN_1480f6f2c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9ae10;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f6ff8 FUN_1480f6ff8 body=29 status=ok
// SIG undefined FUN_1480f6ff8(void)

undefined8 FUN_1480f6ff8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f702a FUN_1480f702a body=93 status=ok
// SIG undefined FUN_1480f702a(void)

void FUN_1480f702a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9ae10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f7088 FUN_1480f7088 body=93 status=ok
// SIG undefined FUN_1480f7088(void)

void FUN_1480f7088(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9ae10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f70e6 FUN_1480f70e6 body=126 status=ok
// SIG undefined FUN_1480f70e6(void)

void FUN_1480f70e6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9ae10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f7155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f716c FUN_1480f716c body=19 status=ok
// SIG undefined FUN_1480f716c(void)

undefined1 FUN_1480f716c(undefined8 param_1,undefined8 param_2)

{
  FUN_143987d60(param_2);
  return 1;
}



// FUNCTION 1480f7180 FUN_1480f7180 body=216 status=ok
// SIG undefined FUN_1480f7180(void)

longlong FUN_1480f7180(longlong param_1,undefined8 param_2)

{
  FUN_144a76c20();
  FUN_144a76c20(param_1 + 0x10,param_2);
  FUN_144a76c20(param_1 + 0x20,param_2);
  FUN_144a76c20(param_1 + 0x30,param_2);
  FUN_144a76c20(param_1 + 0x40,param_2);
  FUN_144a76c20(param_1 + 0x50,param_2);
  FUN_144a76c20(param_1 + 0x60,param_2);
  FUN_144a76c20(param_1 + 0x70,param_2);
  FUN_144a76c20(param_1 + 0x80,param_2);
  FUN_144a76c20(param_1 + 0x90,param_2);
  FUN_144a76c20(param_1 + 0xa0,param_2);
  FUN_144a76c20(param_1 + 0xb0,param_2);
  FUN_144a76c20(param_1 + 0xc0,param_2);
  FUN_144a76c20(param_1 + 0xd0,param_2);
  FUN_144a76c20(param_1 + 0xe0,param_2);
  return param_1;
}



// FUNCTION 1480f7258 FUN_1480f7258 body=202 status=ok
// SIG undefined FUN_1480f7258(void)

void FUN_1480f7258(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9ae80;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f7324 FUN_1480f7324 body=29 status=ok
// SIG undefined FUN_1480f7324(void)

undefined8 FUN_1480f7324(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f7356 FUN_1480f7356 body=93 status=ok
// SIG undefined FUN_1480f7356(void)

void FUN_1480f7356(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9ae80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f73b4 FUN_1480f73b4 body=93 status=ok
// SIG undefined FUN_1480f73b4(void)

void FUN_1480f73b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9ae80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f7412 FUN_1480f7412 body=126 status=ok
// SIG undefined FUN_1480f7412(void)

void FUN_1480f7412(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9ae80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f7481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f7498 FUN_1480f7498 body=19 status=ok
// SIG undefined FUN_1480f7498(void)

undefined1 FUN_1480f7498(undefined8 param_1,undefined8 param_2)

{
  FUN_143988cdc(param_2);
  return 1;
}



// FUNCTION 1480f74ac FUN_1480f74ac body=216 status=ok
// SIG undefined FUN_1480f74ac(void)

longlong FUN_1480f74ac(longlong param_1,undefined8 param_2)

{
  FUN_144a76c20();
  FUN_144a76c20(param_1 + 0x10,param_2);
  FUN_144a76c20(param_1 + 0x20,param_2);
  FUN_144a76c20(param_1 + 0x30,param_2);
  FUN_144a76c20(param_1 + 0x40,param_2);
  FUN_144a76c20(param_1 + 0x50,param_2);
  FUN_144a76c20(param_1 + 0x60,param_2);
  FUN_144a76c20(param_1 + 0x70,param_2);
  FUN_144a76c20(param_1 + 0x80,param_2);
  FUN_144a76c20(param_1 + 0x90,param_2);
  FUN_144a76c20(param_1 + 0xa0,param_2);
  FUN_144a76c20(param_1 + 0xb0,param_2);
  FUN_144a76c20(param_1 + 0xc0,param_2);
  FUN_144a76c20(param_1 + 0xd0,param_2);
  FUN_144a76c20(param_1 + 0xe0,param_2);
  return param_1;
}



// FUNCTION 1480f7584 FUN_1480f7584 body=251 status=ok
// SIG undefined FUN_1480f7584(void)

void FUN_1480f7584(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480f7c0e(param_1,param_3);
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 800) + 0xb0) == '\x01') {
    local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14ad9aef0;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480f78e2(param_1,param_3);
  return;
}



// FUNCTION 1480f7682 FUN_1480f7682 body=29 status=ok
// SIG undefined FUN_1480f7682(void)

undefined8 FUN_1480f7682(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f76b4 FUN_1480f76b4 body=93 status=ok
// SIG undefined FUN_1480f76b4(void)

void FUN_1480f76b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9aef0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f7712 FUN_1480f7712 body=93 status=ok
// SIG undefined FUN_1480f7712(void)

void FUN_1480f7712(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9aef0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f7770 FUN_1480f7770 body=126 status=ok
// SIG undefined FUN_1480f7770(void)

void FUN_1480f7770(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9aef0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f77df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f77f6 FUN_1480f77f6 body=19 status=ok
// SIG undefined FUN_1480f77f6(void)

undefined1 FUN_1480f77f6(undefined8 param_1,undefined8 param_2)

{
  FUN_143989c58(param_2);
  return 1;
}



// FUNCTION 1480f780a FUN_1480f780a body=216 status=ok
// SIG undefined FUN_1480f780a(void)

longlong FUN_1480f780a(longlong param_1,undefined8 param_2)

{
  FUN_144a76c20();
  FUN_144a76c20(param_1 + 0x10,param_2);
  FUN_144a76c20(param_1 + 0x20,param_2);
  FUN_144a76c20(param_1 + 0x30,param_2);
  FUN_144a76c20(param_1 + 0x40,param_2);
  FUN_144a76c20(param_1 + 0x50,param_2);
  FUN_144a76c20(param_1 + 0x60,param_2);
  FUN_144a76c20(param_1 + 0x70,param_2);
  FUN_144a76c20(param_1 + 0x80,param_2);
  FUN_144a76c20(param_1 + 0x90,param_2);
  FUN_144a76c20(param_1 + 0xa0,param_2);
  FUN_144a76c20(param_1 + 0xb0,param_2);
  FUN_144a76c20(param_1 + 0xc0,param_2);
  FUN_144a76c20(param_1 + 0xd0,param_2);
  FUN_144a76c20(param_1 + 0xe0,param_2);
  return param_1;
}



// FUNCTION 1480f78e2 FUN_1480f78e2 body=202 status=ok
// SIG undefined FUN_1480f78e2(void)

void FUN_1480f78e2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9af60;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f79ae FUN_1480f79ae body=29 status=ok
// SIG undefined FUN_1480f79ae(void)

undefined8 FUN_1480f79ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f79e0 FUN_1480f79e0 body=93 status=ok
// SIG undefined FUN_1480f79e0(void)

void FUN_1480f79e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9af60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f7a3e FUN_1480f7a3e body=93 status=ok
// SIG undefined FUN_1480f7a3e(void)

void FUN_1480f7a3e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9af60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f7a9c FUN_1480f7a9c body=126 status=ok
// SIG undefined FUN_1480f7a9c(void)

void FUN_1480f7a9c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9af60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f7b0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f7b22 FUN_1480f7b22 body=19 status=ok
// SIG undefined FUN_1480f7b22(void)

undefined1 FUN_1480f7b22(undefined8 param_1,undefined8 param_2)

{
  FUN_14398aa7a(param_2);
  return 1;
}



// FUNCTION 1480f7b36 FUN_1480f7b36 body=216 status=ok
// SIG undefined FUN_1480f7b36(void)

longlong FUN_1480f7b36(longlong param_1,undefined8 param_2)

{
  FUN_144a76c20();
  FUN_144a76c20(param_1 + 0x10,param_2);
  FUN_144a76c20(param_1 + 0x20,param_2);
  FUN_144a76c20(param_1 + 0x30,param_2);
  FUN_144a76c20(param_1 + 0x40,param_2);
  FUN_144a76c20(param_1 + 0x50,param_2);
  FUN_144a76c20(param_1 + 0x60,param_2);
  FUN_144a76c20(param_1 + 0x70,param_2);
  FUN_144a76c20(param_1 + 0x80,param_2);
  FUN_144a76c20(param_1 + 0x90,param_2);
  FUN_144a76c20(param_1 + 0xa0,param_2);
  FUN_144a76c20(param_1 + 0xb0,param_2);
  FUN_144a76c20(param_1 + 0xc0,param_2);
  FUN_144a76c20(param_1 + 0xd0,param_2);
  FUN_144a76c20(param_1 + 0xe0,param_2);
  return param_1;
}



// FUNCTION 1480f7c0e FUN_1480f7c0e body=202 status=ok
// SIG undefined FUN_1480f7c0e(void)

void FUN_1480f7c0e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9afd0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f7cda FUN_1480f7cda body=29 status=ok
// SIG undefined FUN_1480f7cda(void)

undefined8 FUN_1480f7cda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f7d0c FUN_1480f7d0c body=93 status=ok
// SIG undefined FUN_1480f7d0c(void)

void FUN_1480f7d0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9afd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f7d6a FUN_1480f7d6a body=93 status=ok
// SIG undefined FUN_1480f7d6a(void)

void FUN_1480f7d6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9afd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f7dc8 FUN_1480f7dc8 body=126 status=ok
// SIG undefined FUN_1480f7dc8(void)

void FUN_1480f7dc8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9afd0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f7e37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f7e4e FUN_1480f7e4e body=19 status=ok
// SIG undefined FUN_1480f7e4e(void)

undefined1 FUN_1480f7e4e(undefined8 param_1,undefined8 param_2)

{
  FUN_14398b89c(param_2);
  return 1;
}



// FUNCTION 1480f7e62 FUN_1480f7e62 body=216 status=ok
// SIG undefined FUN_1480f7e62(void)

longlong FUN_1480f7e62(longlong param_1,undefined8 param_2)

{
  FUN_144a76c20();
  FUN_144a76c20(param_1 + 0x10,param_2);
  FUN_144a76c20(param_1 + 0x20,param_2);
  FUN_144a76c20(param_1 + 0x30,param_2);
  FUN_144a76c20(param_1 + 0x40,param_2);
  FUN_144a76c20(param_1 + 0x50,param_2);
  FUN_144a76c20(param_1 + 0x60,param_2);
  FUN_144a76c20(param_1 + 0x70,param_2);
  FUN_144a76c20(param_1 + 0x80,param_2);
  FUN_144a76c20(param_1 + 0x90,param_2);
  FUN_144a76c20(param_1 + 0xa0,param_2);
  FUN_144a76c20(param_1 + 0xb0,param_2);
  FUN_144a76c20(param_1 + 0xc0,param_2);
  FUN_144a76c20(param_1 + 0xd0,param_2);
  FUN_144a76c20(param_1 + 0xe0,param_2);
  return param_1;
}



// FUNCTION 1480f7f3a FUN_1480f7f3a body=251 status=ok
// SIG undefined FUN_1480f7f3a(void)

void FUN_1480f7f3a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480f85c4(param_1,param_3);
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 800) + 0xb0) == '\x01') {
    local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14ad9b040;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480f8298(param_1,param_3);
  return;
}



// FUNCTION 1480f8038 FUN_1480f8038 body=29 status=ok
// SIG undefined FUN_1480f8038(void)

undefined8 FUN_1480f8038(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f806a FUN_1480f806a body=93 status=ok
// SIG undefined FUN_1480f806a(void)

void FUN_1480f806a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b040;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f80c8 FUN_1480f80c8 body=93 status=ok
// SIG undefined FUN_1480f80c8(void)

void FUN_1480f80c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b040;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f8126 FUN_1480f8126 body=126 status=ok
// SIG undefined FUN_1480f8126(void)

void FUN_1480f8126(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b040;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f8195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f81ac FUN_1480f81ac body=19 status=ok
// SIG undefined FUN_1480f81ac(void)

undefined1 FUN_1480f81ac(undefined8 param_1,undefined8 param_2)

{
  FUN_14398c6be(param_2);
  return 1;
}



// FUNCTION 1480f81c0 FUN_1480f81c0 body=216 status=ok
// SIG undefined FUN_1480f81c0(void)

longlong FUN_1480f81c0(longlong param_1,undefined8 param_2)

{
  FUN_144a76c20();
  FUN_144a76c20(param_1 + 0x10,param_2);
  FUN_144a76c20(param_1 + 0x20,param_2);
  FUN_144a76c20(param_1 + 0x30,param_2);
  FUN_144a76c20(param_1 + 0x40,param_2);
  FUN_144a76c20(param_1 + 0x50,param_2);
  FUN_144a76c20(param_1 + 0x60,param_2);
  FUN_144a76c20(param_1 + 0x70,param_2);
  FUN_144a76c20(param_1 + 0x80,param_2);
  FUN_144a76c20(param_1 + 0x90,param_2);
  FUN_144a76c20(param_1 + 0xa0,param_2);
  FUN_144a76c20(param_1 + 0xb0,param_2);
  FUN_144a76c20(param_1 + 0xc0,param_2);
  FUN_144a76c20(param_1 + 0xd0,param_2);
  FUN_144a76c20(param_1 + 0xe0,param_2);
  return param_1;
}



// FUNCTION 1480f8298 FUN_1480f8298 body=202 status=ok
// SIG undefined FUN_1480f8298(void)

void FUN_1480f8298(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9b0b0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f8364 FUN_1480f8364 body=29 status=ok
// SIG undefined FUN_1480f8364(void)

undefined8 FUN_1480f8364(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f8396 FUN_1480f8396 body=93 status=ok
// SIG undefined FUN_1480f8396(void)

void FUN_1480f8396(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b0b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f83f4 FUN_1480f83f4 body=93 status=ok
// SIG undefined FUN_1480f83f4(void)

void FUN_1480f83f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b0b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f8452 FUN_1480f8452 body=126 status=ok
// SIG undefined FUN_1480f8452(void)

void FUN_1480f8452(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b0b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f84c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f84d8 FUN_1480f84d8 body=19 status=ok
// SIG undefined FUN_1480f84d8(void)

undefined1 FUN_1480f84d8(undefined8 param_1,undefined8 param_2)

{
  FUN_14398de94(param_2);
  return 1;
}



// FUNCTION 1480f84ec FUN_1480f84ec body=216 status=ok
// SIG undefined FUN_1480f84ec(void)

longlong FUN_1480f84ec(longlong param_1,undefined8 param_2)

{
  FUN_144a76c20();
  FUN_144a76c20(param_1 + 0x10,param_2);
  FUN_144a76c20(param_1 + 0x20,param_2);
  FUN_144a76c20(param_1 + 0x30,param_2);
  FUN_144a76c20(param_1 + 0x40,param_2);
  FUN_144a76c20(param_1 + 0x50,param_2);
  FUN_144a76c20(param_1 + 0x60,param_2);
  FUN_144a76c20(param_1 + 0x70,param_2);
  FUN_144a76c20(param_1 + 0x80,param_2);
  FUN_144a76c20(param_1 + 0x90,param_2);
  FUN_144a76c20(param_1 + 0xa0,param_2);
  FUN_144a76c20(param_1 + 0xb0,param_2);
  FUN_144a76c20(param_1 + 0xc0,param_2);
  FUN_144a76c20(param_1 + 0xd0,param_2);
  FUN_144a76c20(param_1 + 0xe0,param_2);
  return param_1;
}



// FUNCTION 1480f85c4 FUN_1480f85c4 body=202 status=ok
// SIG undefined FUN_1480f85c4(void)

void FUN_1480f85c4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9b120;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f8690 FUN_1480f8690 body=29 status=ok
// SIG undefined FUN_1480f8690(void)

undefined8 FUN_1480f8690(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f86c2 FUN_1480f86c2 body=93 status=ok
// SIG undefined FUN_1480f86c2(void)

void FUN_1480f86c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b120;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f8720 FUN_1480f8720 body=93 status=ok
// SIG undefined FUN_1480f8720(void)

void FUN_1480f8720(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b120;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f877e FUN_1480f877e body=126 status=ok
// SIG undefined FUN_1480f877e(void)

void FUN_1480f877e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b120;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f87ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f8804 FUN_1480f8804 body=19 status=ok
// SIG undefined FUN_1480f8804(void)

undefined1 FUN_1480f8804(undefined8 param_1,undefined8 param_2)

{
  FUN_14398f66a(param_2);
  return 1;
}



// FUNCTION 1480f8818 FUN_1480f8818 body=216 status=ok
// SIG undefined FUN_1480f8818(void)

longlong FUN_1480f8818(longlong param_1,undefined8 param_2)

{
  FUN_144a76c20();
  FUN_144a76c20(param_1 + 0x10,param_2);
  FUN_144a76c20(param_1 + 0x20,param_2);
  FUN_144a76c20(param_1 + 0x30,param_2);
  FUN_144a76c20(param_1 + 0x40,param_2);
  FUN_144a76c20(param_1 + 0x50,param_2);
  FUN_144a76c20(param_1 + 0x60,param_2);
  FUN_144a76c20(param_1 + 0x70,param_2);
  FUN_144a76c20(param_1 + 0x80,param_2);
  FUN_144a76c20(param_1 + 0x90,param_2);
  FUN_144a76c20(param_1 + 0xa0,param_2);
  FUN_144a76c20(param_1 + 0xb0,param_2);
  FUN_144a76c20(param_1 + 0xc0,param_2);
  FUN_144a76c20(param_1 + 0xd0,param_2);
  FUN_144a76c20(param_1 + 0xe0,param_2);
  return param_1;
}



// FUNCTION 1480f88f0 FUN_1480f88f0 body=251 status=ok
// SIG undefined FUN_1480f88f0(void)

void FUN_1480f88f0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480f8f7a(param_1,param_3);
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 800) + 0xb0) == '\x01') {
    local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14ad9b190;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480f8c4e(param_1,param_3);
  return;
}



// FUNCTION 1480f89ee FUN_1480f89ee body=29 status=ok
// SIG undefined FUN_1480f89ee(void)

undefined8 FUN_1480f89ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f8a20 FUN_1480f8a20 body=93 status=ok
// SIG undefined FUN_1480f8a20(void)

void FUN_1480f8a20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b190;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f8a7e FUN_1480f8a7e body=93 status=ok
// SIG undefined FUN_1480f8a7e(void)

void FUN_1480f8a7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b190;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f8adc FUN_1480f8adc body=126 status=ok
// SIG undefined FUN_1480f8adc(void)

void FUN_1480f8adc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b190;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f8b4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f8b62 FUN_1480f8b62 body=19 status=ok
// SIG undefined FUN_1480f8b62(void)

undefined1 FUN_1480f8b62(undefined8 param_1,undefined8 param_2)

{
  FUN_143990e40(param_2);
  return 1;
}



// FUNCTION 1480f8b76 FUN_1480f8b76 body=216 status=ok
// SIG undefined FUN_1480f8b76(void)

longlong FUN_1480f8b76(longlong param_1,undefined8 param_2)

{
  FUN_144a76c20();
  FUN_144a76c20(param_1 + 0x10,param_2);
  FUN_144a76c20(param_1 + 0x20,param_2);
  FUN_144a76c20(param_1 + 0x30,param_2);
  FUN_144a76c20(param_1 + 0x40,param_2);
  FUN_144a76c20(param_1 + 0x50,param_2);
  FUN_144a76c20(param_1 + 0x60,param_2);
  FUN_144a76c20(param_1 + 0x70,param_2);
  FUN_144a76c20(param_1 + 0x80,param_2);
  FUN_144a76c20(param_1 + 0x90,param_2);
  FUN_144a76c20(param_1 + 0xa0,param_2);
  FUN_144a76c20(param_1 + 0xb0,param_2);
  FUN_144a76c20(param_1 + 0xc0,param_2);
  FUN_144a76c20(param_1 + 0xd0,param_2);
  FUN_144a76c20(param_1 + 0xe0,param_2);
  return param_1;
}



// FUNCTION 1480f8c4e FUN_1480f8c4e body=202 status=ok
// SIG undefined FUN_1480f8c4e(void)

void FUN_1480f8c4e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9b200;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f8d1a FUN_1480f8d1a body=29 status=ok
// SIG undefined FUN_1480f8d1a(void)

undefined8 FUN_1480f8d1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f8d4c FUN_1480f8d4c body=93 status=ok
// SIG undefined FUN_1480f8d4c(void)

void FUN_1480f8d4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b200;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f8daa FUN_1480f8daa body=93 status=ok
// SIG undefined FUN_1480f8daa(void)

void FUN_1480f8daa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b200;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f8e08 FUN_1480f8e08 body=126 status=ok
// SIG undefined FUN_1480f8e08(void)

void FUN_1480f8e08(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b200;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f8e77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f8e8e FUN_1480f8e8e body=19 status=ok
// SIG undefined FUN_1480f8e8e(void)

undefined1 FUN_1480f8e8e(undefined8 param_1,undefined8 param_2)

{
  FUN_143992622(param_2);
  return 1;
}



// FUNCTION 1480f8ea2 FUN_1480f8ea2 body=216 status=ok
// SIG undefined FUN_1480f8ea2(void)

longlong FUN_1480f8ea2(longlong param_1,undefined8 param_2)

{
  FUN_144a76c20();
  FUN_144a76c20(param_1 + 0x10,param_2);
  FUN_144a76c20(param_1 + 0x20,param_2);
  FUN_144a76c20(param_1 + 0x30,param_2);
  FUN_144a76c20(param_1 + 0x40,param_2);
  FUN_144a76c20(param_1 + 0x50,param_2);
  FUN_144a76c20(param_1 + 0x60,param_2);
  FUN_144a76c20(param_1 + 0x70,param_2);
  FUN_144a76c20(param_1 + 0x80,param_2);
  FUN_144a76c20(param_1 + 0x90,param_2);
  FUN_144a76c20(param_1 + 0xa0,param_2);
  FUN_144a76c20(param_1 + 0xb0,param_2);
  FUN_144a76c20(param_1 + 0xc0,param_2);
  FUN_144a76c20(param_1 + 0xd0,param_2);
  FUN_144a76c20(param_1 + 0xe0,param_2);
  return param_1;
}



// FUNCTION 1480f8f7a FUN_1480f8f7a body=202 status=ok
// SIG undefined FUN_1480f8f7a(void)

void FUN_1480f8f7a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9b270;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f9046 FUN_1480f9046 body=29 status=ok
// SIG undefined FUN_1480f9046(void)

undefined8 FUN_1480f9046(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f9078 FUN_1480f9078 body=93 status=ok
// SIG undefined FUN_1480f9078(void)

void FUN_1480f9078(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b270;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f90d6 FUN_1480f90d6 body=93 status=ok
// SIG undefined FUN_1480f90d6(void)

void FUN_1480f90d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b270;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f9134 FUN_1480f9134 body=126 status=ok
// SIG undefined FUN_1480f9134(void)

void FUN_1480f9134(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b270;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f91a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f91ba FUN_1480f91ba body=19 status=ok
// SIG undefined FUN_1480f91ba(void)

undefined1 FUN_1480f91ba(undefined8 param_1,undefined8 param_2)

{
  FUN_143993e04(param_2);
  return 1;
}



// FUNCTION 1480f91ce FUN_1480f91ce body=216 status=ok
// SIG undefined FUN_1480f91ce(void)

longlong FUN_1480f91ce(longlong param_1,undefined8 param_2)

{
  FUN_144a76c20();
  FUN_144a76c20(param_1 + 0x10,param_2);
  FUN_144a76c20(param_1 + 0x20,param_2);
  FUN_144a76c20(param_1 + 0x30,param_2);
  FUN_144a76c20(param_1 + 0x40,param_2);
  FUN_144a76c20(param_1 + 0x50,param_2);
  FUN_144a76c20(param_1 + 0x60,param_2);
  FUN_144a76c20(param_1 + 0x70,param_2);
  FUN_144a76c20(param_1 + 0x80,param_2);
  FUN_144a76c20(param_1 + 0x90,param_2);
  FUN_144a76c20(param_1 + 0xa0,param_2);
  FUN_144a76c20(param_1 + 0xb0,param_2);
  FUN_144a76c20(param_1 + 0xc0,param_2);
  FUN_144a76c20(param_1 + 0xd0,param_2);
  FUN_144a76c20(param_1 + 0xe0,param_2);
  return param_1;
}



// FUNCTION 1480f92a6 FUN_1480f92a6 body=251 status=ok
// SIG undefined FUN_1480f92a6(void)

void FUN_1480f92a6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480f9930(param_1,param_3);
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 800) + 0xb0) == '\x01') {
    local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14ad9b2e0;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480f9604(param_1,param_3);
  return;
}



// FUNCTION 1480f93a4 FUN_1480f93a4 body=29 status=ok
// SIG undefined FUN_1480f93a4(void)

undefined8 FUN_1480f93a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f93d6 FUN_1480f93d6 body=93 status=ok
// SIG undefined FUN_1480f93d6(void)

void FUN_1480f93d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b2e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f9434 FUN_1480f9434 body=93 status=ok
// SIG undefined FUN_1480f9434(void)

void FUN_1480f9434(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b2e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}


