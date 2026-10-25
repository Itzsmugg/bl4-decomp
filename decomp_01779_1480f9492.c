// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1480f9492 FUN_1480f9492 body=126 status=ok
// SIG undefined FUN_1480f9492(void)

void FUN_1480f9492(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b2e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f9501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f9518 FUN_1480f9518 body=19 status=ok
// SIG undefined FUN_1480f9518(void)

undefined1 FUN_1480f9518(undefined8 param_1,undefined8 param_2)

{
  FUN_1439955e6(param_2);
  return 1;
}



// FUNCTION 1480f952c FUN_1480f952c body=216 status=ok
// SIG undefined FUN_1480f952c(void)

longlong FUN_1480f952c(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480f9604 FUN_1480f9604 body=202 status=ok
// SIG undefined FUN_1480f9604(void)

void FUN_1480f9604(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_FUN_14ad9b350;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f96d0 FUN_1480f96d0 body=29 status=ok
// SIG undefined FUN_1480f96d0(void)

undefined8 FUN_1480f96d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f9702 FUN_1480f9702 body=93 status=ok
// SIG undefined FUN_1480f9702(void)

void FUN_1480f9702(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b350;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f9760 FUN_1480f9760 body=93 status=ok
// SIG undefined FUN_1480f9760(void)

void FUN_1480f9760(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b350;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f97be FUN_1480f97be body=126 status=ok
// SIG undefined FUN_1480f97be(void)

void FUN_1480f97be(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b350;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f982d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f9844 FUN_1480f9844 body=19 status=ok
// SIG undefined FUN_1480f9844(void)

undefined1 FUN_1480f9844(undefined8 param_1,undefined8 param_2)

{
  FUN_143996da4(param_2);
  return 1;
}



// FUNCTION 1480f9858 FUN_1480f9858 body=216 status=ok
// SIG undefined FUN_1480f9858(void)

longlong FUN_1480f9858(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480f9930 FUN_1480f9930 body=202 status=ok
// SIG undefined FUN_1480f9930(void)

void FUN_1480f9930(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_FUN_14ad9b3c0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f99fc FUN_1480f99fc body=29 status=ok
// SIG undefined FUN_1480f99fc(void)

undefined8 FUN_1480f99fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f9a2e FUN_1480f9a2e body=93 status=ok
// SIG undefined FUN_1480f9a2e(void)

void FUN_1480f9a2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b3c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f9a8c FUN_1480f9a8c body=93 status=ok
// SIG undefined FUN_1480f9a8c(void)

void FUN_1480f9a8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b3c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f9aea FUN_1480f9aea body=126 status=ok
// SIG undefined FUN_1480f9aea(void)

void FUN_1480f9aea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b3c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f9b59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f9b70 FUN_1480f9b70 body=19 status=ok
// SIG undefined FUN_1480f9b70(void)

undefined1 FUN_1480f9b70(undefined8 param_1,undefined8 param_2)

{
  FUN_143998562(param_2);
  return 1;
}



// FUNCTION 1480f9b84 FUN_1480f9b84 body=216 status=ok
// SIG undefined FUN_1480f9b84(void)

longlong FUN_1480f9b84(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480f9c5c FUN_1480f9c5c body=251 status=ok
// SIG undefined FUN_1480f9c5c(void)

void FUN_1480f9c5c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480fa2e6(param_1,param_3);
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
    *local_30 = &PTR_FUN_14ad9b430;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480f9fba(param_1,param_3);
  return;
}



// FUNCTION 1480f9d5a FUN_1480f9d5a body=29 status=ok
// SIG undefined FUN_1480f9d5a(void)

undefined8 FUN_1480f9d5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f9d8c FUN_1480f9d8c body=93 status=ok
// SIG undefined FUN_1480f9d8c(void)

void FUN_1480f9d8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b430;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f9dea FUN_1480f9dea body=93 status=ok
// SIG undefined FUN_1480f9dea(void)

void FUN_1480f9dea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b430;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f9e48 FUN_1480f9e48 body=126 status=ok
// SIG undefined FUN_1480f9e48(void)

void FUN_1480f9e48(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b430;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f9eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f9ece FUN_1480f9ece body=19 status=ok
// SIG undefined FUN_1480f9ece(void)

undefined1 FUN_1480f9ece(undefined8 param_1,undefined8 param_2)

{
  FUN_143999d20(param_2);
  return 1;
}



// FUNCTION 1480f9ee2 FUN_1480f9ee2 body=216 status=ok
// SIG undefined FUN_1480f9ee2(void)

longlong FUN_1480f9ee2(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480f9fba FUN_1480f9fba body=202 status=ok
// SIG undefined FUN_1480f9fba(void)

void FUN_1480f9fba(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_FUN_14ad9b4a0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480fa086 FUN_1480fa086 body=29 status=ok
// SIG undefined FUN_1480fa086(void)

undefined8 FUN_1480fa086(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fa0b8 FUN_1480fa0b8 body=93 status=ok
// SIG undefined FUN_1480fa0b8(void)

void FUN_1480fa0b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b4a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fa116 FUN_1480fa116 body=93 status=ok
// SIG undefined FUN_1480fa116(void)

void FUN_1480fa116(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b4a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fa174 FUN_1480fa174 body=126 status=ok
// SIG undefined FUN_1480fa174(void)

void FUN_1480fa174(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b4a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fa1e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fa1fa FUN_1480fa1fa body=19 status=ok
// SIG undefined FUN_1480fa1fa(void)

undefined1 FUN_1480fa1fa(undefined8 param_1,undefined8 param_2)

{
  FUN_14399adfe(param_2);
  return 1;
}



// FUNCTION 1480fa20e FUN_1480fa20e body=216 status=ok
// SIG undefined FUN_1480fa20e(void)

longlong FUN_1480fa20e(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480fa2e6 FUN_1480fa2e6 body=202 status=ok
// SIG undefined FUN_1480fa2e6(void)

void FUN_1480fa2e6(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_FUN_14ad9b510;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480fa3b2 FUN_1480fa3b2 body=29 status=ok
// SIG undefined FUN_1480fa3b2(void)

undefined8 FUN_1480fa3b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fa3e4 FUN_1480fa3e4 body=93 status=ok
// SIG undefined FUN_1480fa3e4(void)

void FUN_1480fa3e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b510;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fa442 FUN_1480fa442 body=93 status=ok
// SIG undefined FUN_1480fa442(void)

void FUN_1480fa442(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b510;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fa4a0 FUN_1480fa4a0 body=126 status=ok
// SIG undefined FUN_1480fa4a0(void)

void FUN_1480fa4a0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b510;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fa50f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fa526 FUN_1480fa526 body=19 status=ok
// SIG undefined FUN_1480fa526(void)

undefined1 FUN_1480fa526(undefined8 param_1,undefined8 param_2)

{
  FUN_14399bedc(param_2);
  return 1;
}



// FUNCTION 1480fa53a FUN_1480fa53a body=216 status=ok
// SIG undefined FUN_1480fa53a(void)

longlong FUN_1480fa53a(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480fa612 FUN_1480fa612 body=251 status=ok
// SIG undefined FUN_1480fa612(void)

void FUN_1480fa612(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480fac9c(param_1,param_3);
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
    *local_30 = &PTR_FUN_14ad9b580;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480fa970(param_1,param_3);
  return;
}



// FUNCTION 1480fa710 FUN_1480fa710 body=29 status=ok
// SIG undefined FUN_1480fa710(void)

undefined8 FUN_1480fa710(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fa742 FUN_1480fa742 body=93 status=ok
// SIG undefined FUN_1480fa742(void)

void FUN_1480fa742(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b580;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fa7a0 FUN_1480fa7a0 body=93 status=ok
// SIG undefined FUN_1480fa7a0(void)

void FUN_1480fa7a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b580;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fa7fe FUN_1480fa7fe body=126 status=ok
// SIG undefined FUN_1480fa7fe(void)

void FUN_1480fa7fe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b580;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fa86d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fa884 FUN_1480fa884 body=19 status=ok
// SIG undefined FUN_1480fa884(void)

undefined1 FUN_1480fa884(undefined8 param_1,undefined8 param_2)

{
  FUN_14399cfba(param_2);
  return 1;
}



// FUNCTION 1480fa898 FUN_1480fa898 body=216 status=ok
// SIG undefined FUN_1480fa898(void)

longlong FUN_1480fa898(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480fa970 FUN_1480fa970 body=202 status=ok
// SIG undefined FUN_1480fa970(void)

void FUN_1480fa970(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_FUN_14ad9b5f0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480faa3c FUN_1480faa3c body=29 status=ok
// SIG undefined FUN_1480faa3c(void)

undefined8 FUN_1480faa3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480faa6e FUN_1480faa6e body=93 status=ok
// SIG undefined FUN_1480faa6e(void)

void FUN_1480faa6e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b5f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480faacc FUN_1480faacc body=93 status=ok
// SIG undefined FUN_1480faacc(void)

void FUN_1480faacc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b5f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fab2a FUN_1480fab2a body=126 status=ok
// SIG undefined FUN_1480fab2a(void)

void FUN_1480fab2a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b5f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fab99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fabb0 FUN_1480fabb0 body=19 status=ok
// SIG undefined FUN_1480fabb0(void)

undefined1 FUN_1480fabb0(undefined8 param_1,undefined8 param_2)

{
  FUN_14399e118(param_2);
  return 1;
}



// FUNCTION 1480fabc4 FUN_1480fabc4 body=216 status=ok
// SIG undefined FUN_1480fabc4(void)

longlong FUN_1480fabc4(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480fac9c FUN_1480fac9c body=202 status=ok
// SIG undefined FUN_1480fac9c(void)

void FUN_1480fac9c(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_FUN_14ad9b660;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480fad68 FUN_1480fad68 body=29 status=ok
// SIG undefined FUN_1480fad68(void)

undefined8 FUN_1480fad68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fad9a FUN_1480fad9a body=93 status=ok
// SIG undefined FUN_1480fad9a(void)

void FUN_1480fad9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b660;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fadf8 FUN_1480fadf8 body=93 status=ok
// SIG undefined FUN_1480fadf8(void)

void FUN_1480fadf8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b660;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fae56 FUN_1480fae56 body=126 status=ok
// SIG undefined FUN_1480fae56(void)

void FUN_1480fae56(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b660;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480faec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480faedc FUN_1480faedc body=19 status=ok
// SIG undefined FUN_1480faedc(void)

undefined1 FUN_1480faedc(undefined8 param_1,undefined8 param_2)

{
  FUN_14399f276(param_2);
  return 1;
}



// FUNCTION 1480faef0 FUN_1480faef0 body=216 status=ok
// SIG undefined FUN_1480faef0(void)

longlong FUN_1480faef0(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480fafc8 FUN_1480fafc8 body=251 status=ok
// SIG undefined FUN_1480fafc8(void)

void FUN_1480fafc8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480fb652(param_1,param_3);
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
    *local_30 = &PTR_FUN_14ad9b6d0;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480fb326(param_1,param_3);
  return;
}



// FUNCTION 1480fb0c6 FUN_1480fb0c6 body=29 status=ok
// SIG undefined FUN_1480fb0c6(void)

undefined8 FUN_1480fb0c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fb0f8 FUN_1480fb0f8 body=93 status=ok
// SIG undefined FUN_1480fb0f8(void)

void FUN_1480fb0f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b6d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fb156 FUN_1480fb156 body=93 status=ok
// SIG undefined FUN_1480fb156(void)

void FUN_1480fb156(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b6d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fb1b4 FUN_1480fb1b4 body=126 status=ok
// SIG undefined FUN_1480fb1b4(void)

void FUN_1480fb1b4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b6d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fb223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fb23a FUN_1480fb23a body=19 status=ok
// SIG undefined FUN_1480fb23a(void)

undefined1 FUN_1480fb23a(undefined8 param_1,undefined8 param_2)

{
  FUN_1439a03d4(param_2);
  return 1;
}



// FUNCTION 1480fb24e FUN_1480fb24e body=216 status=ok
// SIG undefined FUN_1480fb24e(void)

longlong FUN_1480fb24e(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480fb326 FUN_1480fb326 body=202 status=ok
// SIG undefined FUN_1480fb326(void)

void FUN_1480fb326(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_FUN_14ad9b740;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480fb3f2 FUN_1480fb3f2 body=29 status=ok
// SIG undefined FUN_1480fb3f2(void)

undefined8 FUN_1480fb3f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fb424 FUN_1480fb424 body=93 status=ok
// SIG undefined FUN_1480fb424(void)

void FUN_1480fb424(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b740;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fb482 FUN_1480fb482 body=93 status=ok
// SIG undefined FUN_1480fb482(void)

void FUN_1480fb482(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b740;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fb4e0 FUN_1480fb4e0 body=126 status=ok
// SIG undefined FUN_1480fb4e0(void)

void FUN_1480fb4e0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b740;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fb54f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fb566 FUN_1480fb566 body=19 status=ok
// SIG undefined FUN_1480fb566(void)

undefined1 FUN_1480fb566(undefined8 param_1,undefined8 param_2)

{
  FUN_1439a1376(param_2);
  return 1;
}



// FUNCTION 1480fb57a FUN_1480fb57a body=216 status=ok
// SIG undefined FUN_1480fb57a(void)

longlong FUN_1480fb57a(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480fb652 FUN_1480fb652 body=202 status=ok
// SIG undefined FUN_1480fb652(void)

void FUN_1480fb652(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_FUN_14ad9b7b0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480fb71e FUN_1480fb71e body=29 status=ok
// SIG undefined FUN_1480fb71e(void)

undefined8 FUN_1480fb71e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fb750 FUN_1480fb750 body=93 status=ok
// SIG undefined FUN_1480fb750(void)

void FUN_1480fb750(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b7b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fb7ae FUN_1480fb7ae body=93 status=ok
// SIG undefined FUN_1480fb7ae(void)

void FUN_1480fb7ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b7b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fb80c FUN_1480fb80c body=126 status=ok
// SIG undefined FUN_1480fb80c(void)

void FUN_1480fb80c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b7b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fb87b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fb892 FUN_1480fb892 body=19 status=ok
// SIG undefined FUN_1480fb892(void)

undefined1 FUN_1480fb892(undefined8 param_1,undefined8 param_2)

{
  FUN_1439a2318(param_2);
  return 1;
}



// FUNCTION 1480fb8a6 FUN_1480fb8a6 body=216 status=ok
// SIG undefined FUN_1480fb8a6(void)

longlong FUN_1480fb8a6(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480fb97e FUN_1480fb97e body=251 status=ok
// SIG undefined FUN_1480fb97e(void)

void FUN_1480fb97e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480fc008(param_1,param_3);
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
    *local_30 = &PTR_FUN_14ad9b820;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480fbcdc(param_1,param_3);
  return;
}



// FUNCTION 1480fba7c FUN_1480fba7c body=29 status=ok
// SIG undefined FUN_1480fba7c(void)

undefined8 FUN_1480fba7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fbaae FUN_1480fbaae body=93 status=ok
// SIG undefined FUN_1480fbaae(void)

void FUN_1480fbaae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b820;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fbb0c FUN_1480fbb0c body=93 status=ok
// SIG undefined FUN_1480fbb0c(void)

void FUN_1480fbb0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b820;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fbb6a FUN_1480fbb6a body=126 status=ok
// SIG undefined FUN_1480fbb6a(void)

void FUN_1480fbb6a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b820;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fbbd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fbbf0 FUN_1480fbbf0 body=19 status=ok
// SIG undefined FUN_1480fbbf0(void)

undefined1 FUN_1480fbbf0(undefined8 param_1,undefined8 param_2)

{
  FUN_1439a32ba(param_2);
  return 1;
}



// FUNCTION 1480fbc04 FUN_1480fbc04 body=216 status=ok
// SIG undefined FUN_1480fbc04(void)

longlong FUN_1480fbc04(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480fbcdc FUN_1480fbcdc body=202 status=ok
// SIG undefined FUN_1480fbcdc(void)

void FUN_1480fbcdc(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_FUN_14ad9b890;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480fbda8 FUN_1480fbda8 body=29 status=ok
// SIG undefined FUN_1480fbda8(void)

undefined8 FUN_1480fbda8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fbdda FUN_1480fbdda body=93 status=ok
// SIG undefined FUN_1480fbdda(void)

void FUN_1480fbdda(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b890;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fbe38 FUN_1480fbe38 body=93 status=ok
// SIG undefined FUN_1480fbe38(void)

void FUN_1480fbe38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b890;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fbe96 FUN_1480fbe96 body=126 status=ok
// SIG undefined FUN_1480fbe96(void)

void FUN_1480fbe96(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b890;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fbf05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fbf1c FUN_1480fbf1c body=19 status=ok
// SIG undefined FUN_1480fbf1c(void)

undefined1 FUN_1480fbf1c(undefined8 param_1,undefined8 param_2)

{
  FUN_1439a4bac(param_2);
  return 1;
}



// FUNCTION 1480fbf30 FUN_1480fbf30 body=216 status=ok
// SIG undefined FUN_1480fbf30(void)

longlong FUN_1480fbf30(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480fc008 FUN_1480fc008 body=202 status=ok
// SIG undefined FUN_1480fc008(void)

void FUN_1480fc008(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_FUN_14ad9b900;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480fc0d4 FUN_1480fc0d4 body=29 status=ok
// SIG undefined FUN_1480fc0d4(void)

undefined8 FUN_1480fc0d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fc106 FUN_1480fc106 body=93 status=ok
// SIG undefined FUN_1480fc106(void)

void FUN_1480fc106(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b900;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fc164 FUN_1480fc164 body=93 status=ok
// SIG undefined FUN_1480fc164(void)

void FUN_1480fc164(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b900;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fc1c2 FUN_1480fc1c2 body=126 status=ok
// SIG undefined FUN_1480fc1c2(void)

void FUN_1480fc1c2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b900;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fc231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fc248 FUN_1480fc248 body=19 status=ok
// SIG undefined FUN_1480fc248(void)

undefined1 FUN_1480fc248(undefined8 param_1,undefined8 param_2)

{
  FUN_1439a649e(param_2);
  return 1;
}



// FUNCTION 1480fc25c FUN_1480fc25c body=216 status=ok
// SIG undefined FUN_1480fc25c(void)

longlong FUN_1480fc25c(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480fc334 FUN_1480fc334 body=251 status=ok
// SIG undefined FUN_1480fc334(void)

void FUN_1480fc334(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480fc9be(param_1,param_3);
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
    *local_30 = &PTR_FUN_14ad9b970;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480fc692(param_1,param_3);
  return;
}



// FUNCTION 1480fc432 FUN_1480fc432 body=29 status=ok
// SIG undefined FUN_1480fc432(void)

undefined8 FUN_1480fc432(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fc464 FUN_1480fc464 body=93 status=ok
// SIG undefined FUN_1480fc464(void)

void FUN_1480fc464(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b970;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fc4c2 FUN_1480fc4c2 body=93 status=ok
// SIG undefined FUN_1480fc4c2(void)

void FUN_1480fc4c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b970;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fc520 FUN_1480fc520 body=126 status=ok
// SIG undefined FUN_1480fc520(void)

void FUN_1480fc520(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b970;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fc58f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fc5a6 FUN_1480fc5a6 body=19 status=ok
// SIG undefined FUN_1480fc5a6(void)

undefined1 FUN_1480fc5a6(undefined8 param_1,undefined8 param_2)

{
  FUN_1439a7d90(param_2);
  return 1;
}



// FUNCTION 1480fc5ba FUN_1480fc5ba body=216 status=ok
// SIG undefined FUN_1480fc5ba(void)

longlong FUN_1480fc5ba(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480fc692 FUN_1480fc692 body=202 status=ok
// SIG undefined FUN_1480fc692(void)

void FUN_1480fc692(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_FUN_14ad9b9e0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480fc75e FUN_1480fc75e body=29 status=ok
// SIG undefined FUN_1480fc75e(void)

undefined8 FUN_1480fc75e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fc790 FUN_1480fc790 body=93 status=ok
// SIG undefined FUN_1480fc790(void)

void FUN_1480fc790(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b9e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fc7ee FUN_1480fc7ee body=93 status=ok
// SIG undefined FUN_1480fc7ee(void)

void FUN_1480fc7ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9b9e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fc84c FUN_1480fc84c body=126 status=ok
// SIG undefined FUN_1480fc84c(void)

void FUN_1480fc84c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9b9e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fc8bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fc8d2 FUN_1480fc8d2 body=19 status=ok
// SIG undefined FUN_1480fc8d2(void)

undefined1 FUN_1480fc8d2(undefined8 param_1,undefined8 param_2)

{
  FUN_1439a9790(param_2);
  return 1;
}



// FUNCTION 1480fc8e6 FUN_1480fc8e6 body=216 status=ok
// SIG undefined FUN_1480fc8e6(void)

longlong FUN_1480fc8e6(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480fc9be FUN_1480fc9be body=202 status=ok
// SIG undefined FUN_1480fc9be(void)

void FUN_1480fc9be(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_FUN_14ad9ba50;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480fca8a FUN_1480fca8a body=29 status=ok
// SIG undefined FUN_1480fca8a(void)

undefined8 FUN_1480fca8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fcabc FUN_1480fcabc body=93 status=ok
// SIG undefined FUN_1480fcabc(void)

void FUN_1480fcabc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9ba50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fcb1a FUN_1480fcb1a body=93 status=ok
// SIG undefined FUN_1480fcb1a(void)

void FUN_1480fcb1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9ba50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fcb78 FUN_1480fcb78 body=126 status=ok
// SIG undefined FUN_1480fcb78(void)

void FUN_1480fcb78(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9ba50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fcbe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fcbfe FUN_1480fcbfe body=19 status=ok
// SIG undefined FUN_1480fcbfe(void)

undefined1 FUN_1480fcbfe(undefined8 param_1,undefined8 param_2)

{
  FUN_1439ab190(param_2);
  return 1;
}



// FUNCTION 1480fcc12 FUN_1480fcc12 body=216 status=ok
// SIG undefined FUN_1480fcc12(void)

longlong FUN_1480fcc12(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480fccea FUN_1480fccea body=251 status=ok
// SIG undefined FUN_1480fccea(void)

void FUN_1480fccea(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480fd374(param_1,param_3);
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
    *local_30 = &PTR_FUN_14ad9bac0;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480fd048(param_1,param_3);
  return;
}



// FUNCTION 1480fcde8 FUN_1480fcde8 body=29 status=ok
// SIG undefined FUN_1480fcde8(void)

undefined8 FUN_1480fcde8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fce1a FUN_1480fce1a body=93 status=ok
// SIG undefined FUN_1480fce1a(void)

void FUN_1480fce1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9bac0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fce78 FUN_1480fce78 body=93 status=ok
// SIG undefined FUN_1480fce78(void)

void FUN_1480fce78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9bac0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fced6 FUN_1480fced6 body=126 status=ok
// SIG undefined FUN_1480fced6(void)

void FUN_1480fced6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9bac0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fcf45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fcf5c FUN_1480fcf5c body=19 status=ok
// SIG undefined FUN_1480fcf5c(void)

undefined1 FUN_1480fcf5c(undefined8 param_1,undefined8 param_2)

{
  FUN_1439acb90(param_2);
  return 1;
}



// FUNCTION 1480fcf70 FUN_1480fcf70 body=216 status=ok
// SIG undefined FUN_1480fcf70(void)

longlong FUN_1480fcf70(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480fd048 FUN_1480fd048 body=202 status=ok
// SIG undefined FUN_1480fd048(void)

void FUN_1480fd048(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_FUN_14ad9bb30;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480fd114 FUN_1480fd114 body=29 status=ok
// SIG undefined FUN_1480fd114(void)

undefined8 FUN_1480fd114(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fd146 FUN_1480fd146 body=93 status=ok
// SIG undefined FUN_1480fd146(void)

void FUN_1480fd146(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9bb30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fd1a4 FUN_1480fd1a4 body=93 status=ok
// SIG undefined FUN_1480fd1a4(void)

void FUN_1480fd1a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9bb30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fd202 FUN_1480fd202 body=126 status=ok
// SIG undefined FUN_1480fd202(void)

void FUN_1480fd202(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9bb30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fd271. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fd288 FUN_1480fd288 body=19 status=ok
// SIG undefined FUN_1480fd288(void)

undefined1 FUN_1480fd288(undefined8 param_1,undefined8 param_2)

{
  FUN_1439ae45c(param_2);
  return 1;
}



// FUNCTION 1480fd29c FUN_1480fd29c body=216 status=ok
// SIG undefined FUN_1480fd29c(void)

longlong FUN_1480fd29c(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480fd374 FUN_1480fd374 body=202 status=ok
// SIG undefined FUN_1480fd374(void)

void FUN_1480fd374(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_FUN_14ad9bba0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480fd440 FUN_1480fd440 body=29 status=ok
// SIG undefined FUN_1480fd440(void)

undefined8 FUN_1480fd440(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fd472 FUN_1480fd472 body=93 status=ok
// SIG undefined FUN_1480fd472(void)

void FUN_1480fd472(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9bba0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fd4d0 FUN_1480fd4d0 body=93 status=ok
// SIG undefined FUN_1480fd4d0(void)

void FUN_1480fd4d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9bba0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fd52e FUN_1480fd52e body=126 status=ok
// SIG undefined FUN_1480fd52e(void)

void FUN_1480fd52e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9bba0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fd59d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fd5b4 FUN_1480fd5b4 body=19 status=ok
// SIG undefined FUN_1480fd5b4(void)

undefined1 FUN_1480fd5b4(undefined8 param_1,undefined8 param_2)

{
  FUN_1439afd28(param_2);
  return 1;
}



// FUNCTION 1480fd5c8 FUN_1480fd5c8 body=216 status=ok
// SIG undefined FUN_1480fd5c8(void)

longlong FUN_1480fd5c8(longlong param_1,undefined8 param_2)

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



// FUNCTION 1480fd838 FUN_1480fd838 body=29 status=ok
// SIG undefined FUN_1480fd838(void)

undefined8 FUN_1480fd838(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fd86a FUN_1480fd86a body=93 status=ok
// SIG undefined FUN_1480fd86a(void)

void FUN_1480fd86a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9bc10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fd8c8 FUN_1480fd8c8 body=93 status=ok
// SIG undefined FUN_1480fd8c8(void)

void FUN_1480fd8c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9bc10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fd926 FUN_1480fd926 body=126 status=ok
// SIG undefined FUN_1480fd926(void)

void FUN_1480fd926(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9bc10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fd995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fd9ac FUN_1480fd9ac body=19 status=ok
// SIG undefined FUN_1480fd9ac(void)

undefined1 FUN_1480fd9ac(undefined8 param_1,undefined8 param_2)

{
  FUN_1439b15f4(param_2);
  return 1;
}



// FUNCTION 1480fd9c0 FUN_1480fd9c0 body=29 status=ok
// SIG undefined FUN_1480fd9c0(void)

undefined8 FUN_1480fd9c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fd9f2 FUN_1480fd9f2 body=93 status=ok
// SIG undefined FUN_1480fd9f2(void)

void FUN_1480fd9f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9bc80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fda50 FUN_1480fda50 body=93 status=ok
// SIG undefined FUN_1480fda50(void)

void FUN_1480fda50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9bc80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fdaae FUN_1480fdaae body=126 status=ok
// SIG undefined FUN_1480fdaae(void)

void FUN_1480fdaae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9bc80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fdb1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fdb34 FUN_1480fdb34 body=19 status=ok
// SIG undefined FUN_1480fdb34(void)

undefined1 FUN_1480fdb34(undefined8 param_1,undefined8 param_2)

{
  FUN_1439b1d6e(param_2);
  return 1;
}



// FUNCTION 1480fdb48 FUN_1480fdb48 body=31 status=ok
// SIG undefined FUN_1480fdb48(void)

undefined8 FUN_1480fdb48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fdb7c FUN_1480fdb7c body=93 status=ok
// SIG undefined FUN_1480fdb7c(void)

void FUN_1480fdb7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9bcf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fdbda FUN_1480fdbda body=93 status=ok
// SIG undefined FUN_1480fdbda(void)

void FUN_1480fdbda(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9bcf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fdc38 FUN_1480fdc38 body=126 status=ok
// SIG undefined FUN_1480fdc38(void)

void FUN_1480fdc38(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9bcf0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fdca7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fdcb6 FUN_1480fdcb6 body=19 status=ok
// SIG undefined FUN_1480fdcb6(void)

undefined1 FUN_1480fdcb6(undefined8 param_1,undefined8 param_2)

{
  FUN_140e8bcb2(param_2);
  return 1;
}



// FUNCTION 1480fe270 FUN_1480fe270 body=29 status=ok
// SIG undefined FUN_1480fe270(void)

undefined8 FUN_1480fe270(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fe2a2 FUN_1480fe2a2 body=93 status=ok
// SIG undefined FUN_1480fe2a2(void)

void FUN_1480fe2a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9beb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fe300 FUN_1480fe300 body=93 status=ok
// SIG undefined FUN_1480fe300(void)

void FUN_1480fe300(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9beb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fe35e FUN_1480fe35e body=126 status=ok
// SIG undefined FUN_1480fe35e(void)

void FUN_1480fe35e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9beb0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fe3cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fe3e4 FUN_1480fe3e4 body=19 status=ok
// SIG undefined FUN_1480fe3e4(void)

undefined1 FUN_1480fe3e4(undefined8 param_1,undefined8 param_2)

{
  FUN_1439b2b8e(param_2);
  return 1;
}



// FUNCTION 1480fe3f8 FUN_1480fe3f8 body=29 status=ok
// SIG undefined FUN_1480fe3f8(void)

undefined8 FUN_1480fe3f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fe42a FUN_1480fe42a body=93 status=ok
// SIG undefined FUN_1480fe42a(void)

void FUN_1480fe42a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9bf20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fe488 FUN_1480fe488 body=93 status=ok
// SIG undefined FUN_1480fe488(void)

void FUN_1480fe488(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9bf20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fe4e6 FUN_1480fe4e6 body=126 status=ok
// SIG undefined FUN_1480fe4e6(void)

void FUN_1480fe4e6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9bf20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fe555. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fe56c FUN_1480fe56c body=19 status=ok
// SIG undefined FUN_1480fe56c(void)

undefined1 FUN_1480fe56c(undefined8 param_1,undefined8 param_2)

{
  FUN_1439b30fc(param_2);
  return 1;
}



// FUNCTION 1480fe718 FUN_1480fe718 body=29 status=ok
// SIG undefined FUN_1480fe718(void)

undefined8 FUN_1480fe718(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fe74a FUN_1480fe74a body=93 status=ok
// SIG undefined FUN_1480fe74a(void)

void FUN_1480fe74a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9bf90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fe7a8 FUN_1480fe7a8 body=93 status=ok
// SIG undefined FUN_1480fe7a8(void)

void FUN_1480fe7a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9bf90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fe806 FUN_1480fe806 body=126 status=ok
// SIG undefined FUN_1480fe806(void)

void FUN_1480fe806(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9bf90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fe875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fe88c FUN_1480fe88c body=19 status=ok
// SIG undefined FUN_1480fe88c(void)

undefined1 FUN_1480fe88c(undefined8 param_1,undefined8 param_2)

{
  FUN_1439b366a(param_2);
  return 1;
}



// FUNCTION 1480fe8a0 FUN_1480fe8a0 body=29 status=ok
// SIG undefined FUN_1480fe8a0(void)

undefined8 FUN_1480fe8a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fe8d2 FUN_1480fe8d2 body=93 status=ok
// SIG undefined FUN_1480fe8d2(void)

void FUN_1480fe8d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c000;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fe930 FUN_1480fe930 body=93 status=ok
// SIG undefined FUN_1480fe930(void)

void FUN_1480fe930(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c000;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fe98e FUN_1480fe98e body=126 status=ok
// SIG undefined FUN_1480fe98e(void)

void FUN_1480fe98e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9c000;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fe9fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fea14 FUN_1480fea14 body=19 status=ok
// SIG undefined FUN_1480fea14(void)

undefined1 FUN_1480fea14(undefined8 param_1,undefined8 param_2)

{
  FUN_1439b3bf2(param_2);
  return 1;
}



// FUNCTION 1480febc0 FUN_1480febc0 body=29 status=ok
// SIG undefined FUN_1480febc0(void)

undefined8 FUN_1480febc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480febf2 FUN_1480febf2 body=93 status=ok
// SIG undefined FUN_1480febf2(void)

void FUN_1480febf2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c070;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fec50 FUN_1480fec50 body=93 status=ok
// SIG undefined FUN_1480fec50(void)

void FUN_1480fec50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c070;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fecae FUN_1480fecae body=126 status=ok
// SIG undefined FUN_1480fecae(void)

void FUN_1480fecae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9c070;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fed1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fed34 FUN_1480fed34 body=19 status=ok
// SIG undefined FUN_1480fed34(void)

undefined1 FUN_1480fed34(undefined8 param_1,undefined8 param_2)

{
  FUN_1439b417a(param_2);
  return 1;
}



// FUNCTION 1480fed48 FUN_1480fed48 body=29 status=ok
// SIG undefined FUN_1480fed48(void)

undefined8 FUN_1480fed48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fed7a FUN_1480fed7a body=93 status=ok
// SIG undefined FUN_1480fed7a(void)

void FUN_1480fed7a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c0e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fedd8 FUN_1480fedd8 body=93 status=ok
// SIG undefined FUN_1480fedd8(void)

void FUN_1480fedd8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c0e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fee36 FUN_1480fee36 body=126 status=ok
// SIG undefined FUN_1480fee36(void)

void FUN_1480fee36(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9c0e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480feea5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480feebc FUN_1480feebc body=19 status=ok
// SIG undefined FUN_1480feebc(void)

undefined1 FUN_1480feebc(undefined8 param_1,undefined8 param_2)

{
  FUN_1439b46e6(param_2);
  return 1;
}



// FUNCTION 1480ff476 FUN_1480ff476 body=29 status=ok
// SIG undefined FUN_1480ff476(void)

undefined8 FUN_1480ff476(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480ff4a8 FUN_1480ff4a8 body=93 status=ok
// SIG undefined FUN_1480ff4a8(void)

void FUN_1480ff4a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c150;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ff506 FUN_1480ff506 body=93 status=ok
// SIG undefined FUN_1480ff506(void)

void FUN_1480ff506(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c150;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ff564 FUN_1480ff564 body=126 status=ok
// SIG undefined FUN_1480ff564(void)

void FUN_1480ff564(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9c150;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480ff5d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480ff5ea FUN_1480ff5ea body=19 status=ok
// SIG undefined FUN_1480ff5ea(void)

undefined1 FUN_1480ff5ea(undefined8 param_1,undefined8 param_2)

{
  FUN_1439b4c26(param_2);
  return 1;
}



// FUNCTION 1480ff5fe FUN_1480ff5fe body=29 status=ok
// SIG undefined FUN_1480ff5fe(void)

undefined8 FUN_1480ff5fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480ff630 FUN_1480ff630 body=93 status=ok
// SIG undefined FUN_1480ff630(void)

void FUN_1480ff630(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c1c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ff68e FUN_1480ff68e body=93 status=ok
// SIG undefined FUN_1480ff68e(void)

void FUN_1480ff68e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c1c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ff6ec FUN_1480ff6ec body=126 status=ok
// SIG undefined FUN_1480ff6ec(void)

void FUN_1480ff6ec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9c1c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480ff75b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480ff772 FUN_1480ff772 body=19 status=ok
// SIG undefined FUN_1480ff772(void)

undefined1 FUN_1480ff772(undefined8 param_1,undefined8 param_2)

{
  FUN_1439b5714(param_2);
  return 1;
}



// FUNCTION 1480ff91e FUN_1480ff91e body=29 status=ok
// SIG undefined FUN_1480ff91e(void)

undefined8 FUN_1480ff91e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480ff950 FUN_1480ff950 body=93 status=ok
// SIG undefined FUN_1480ff950(void)

void FUN_1480ff950(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c230;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ff9ae FUN_1480ff9ae body=93 status=ok
// SIG undefined FUN_1480ff9ae(void)

void FUN_1480ff9ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c230;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ffa0c FUN_1480ffa0c body=126 status=ok
// SIG undefined FUN_1480ffa0c(void)

void FUN_1480ffa0c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9c230;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480ffa7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480ffa92 FUN_1480ffa92 body=19 status=ok
// SIG undefined FUN_1480ffa92(void)

undefined1 FUN_1480ffa92(undefined8 param_1,undefined8 param_2)

{
  FUN_1439b6202(param_2);
  return 1;
}



// FUNCTION 1480ffaa6 FUN_1480ffaa6 body=29 status=ok
// SIG undefined FUN_1480ffaa6(void)

undefined8 FUN_1480ffaa6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480ffad8 FUN_1480ffad8 body=93 status=ok
// SIG undefined FUN_1480ffad8(void)

void FUN_1480ffad8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c2a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ffb36 FUN_1480ffb36 body=93 status=ok
// SIG undefined FUN_1480ffb36(void)

void FUN_1480ffb36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c2a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ffb94 FUN_1480ffb94 body=126 status=ok
// SIG undefined FUN_1480ffb94(void)

void FUN_1480ffb94(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9c2a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480ffc03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480ffc1a FUN_1480ffc1a body=19 status=ok
// SIG undefined FUN_1480ffc1a(void)

undefined1 FUN_1480ffc1a(undefined8 param_1,undefined8 param_2)

{
  FUN_1439b6d0e(param_2);
  return 1;
}



// FUNCTION 1480ffdc6 FUN_1480ffdc6 body=29 status=ok
// SIG undefined FUN_1480ffdc6(void)

undefined8 FUN_1480ffdc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480ffdf8 FUN_1480ffdf8 body=93 status=ok
// SIG undefined FUN_1480ffdf8(void)

void FUN_1480ffdf8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c310;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ffe56 FUN_1480ffe56 body=93 status=ok
// SIG undefined FUN_1480ffe56(void)

void FUN_1480ffe56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c310;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ffeb4 FUN_1480ffeb4 body=126 status=ok
// SIG undefined FUN_1480ffeb4(void)

void FUN_1480ffeb4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9c310;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480fff23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480fff3a FUN_1480fff3a body=19 status=ok
// SIG undefined FUN_1480fff3a(void)

undefined1 FUN_1480fff3a(undefined8 param_1,undefined8 param_2)

{
  FUN_1439b781a(param_2);
  return 1;
}



// FUNCTION 1480fff4e FUN_1480fff4e body=29 status=ok
// SIG undefined FUN_1480fff4e(void)

undefined8 FUN_1480fff4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480fff80 FUN_1480fff80 body=93 status=ok
// SIG undefined FUN_1480fff80(void)

void FUN_1480fff80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c380;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480fffde FUN_1480fffde body=93 status=ok
// SIG undefined FUN_1480fffde(void)

void FUN_1480fffde(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c380;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14810003c FUN_14810003c body=126 status=ok
// SIG undefined FUN_14810003c(void)

void FUN_14810003c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9c380;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481000ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481000c2 FUN_1481000c2 body=19 status=ok
// SIG undefined FUN_1481000c2(void)

undefined1 FUN_1481000c2(undefined8 param_1,undefined8 param_2)

{
  FUN_1439b825e(param_2);
  return 1;
}



// FUNCTION 14810033a FUN_14810033a body=29 status=ok
// SIG undefined FUN_14810033a(void)

undefined8 FUN_14810033a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14810036c FUN_14810036c body=93 status=ok
// SIG undefined FUN_14810036c(void)

void FUN_14810036c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c3f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481003ca FUN_1481003ca body=93 status=ok
// SIG undefined FUN_1481003ca(void)

void FUN_1481003ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c3f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148100428 FUN_148100428 body=126 status=ok
// SIG undefined FUN_148100428(void)

void FUN_148100428(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9c3f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148100497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481004ae FUN_1481004ae body=19 status=ok
// SIG undefined FUN_1481004ae(void)

undefined1 FUN_1481004ae(undefined8 param_1,undefined8 param_2)

{
  FUN_1439b8d04(param_2);
  return 1;
}



// FUNCTION 1481004c2 FUN_1481004c2 body=29 status=ok
// SIG undefined FUN_1481004c2(void)

undefined8 FUN_1481004c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481004f4 FUN_1481004f4 body=93 status=ok
// SIG undefined FUN_1481004f4(void)

void FUN_1481004f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c460;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148100552 FUN_148100552 body=93 status=ok
// SIG undefined FUN_148100552(void)

void FUN_148100552(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c460;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481005b0 FUN_1481005b0 body=126 status=ok
// SIG undefined FUN_1481005b0(void)

void FUN_1481005b0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9c460;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014810061f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148100636 FUN_148100636 body=19 status=ok
// SIG undefined FUN_148100636(void)

undefined1 FUN_148100636(undefined8 param_1,undefined8 param_2)

{
  FUN_1439b95e6(param_2);
  return 1;
}



// FUNCTION 14810064a FUN_14810064a body=29 status=ok
// SIG undefined FUN_14810064a(void)

undefined8 FUN_14810064a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14810067c FUN_14810067c body=93 status=ok
// SIG undefined FUN_14810067c(void)

void FUN_14810067c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c4d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481006da FUN_1481006da body=93 status=ok
// SIG undefined FUN_1481006da(void)

void FUN_1481006da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c4d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148100738 FUN_148100738 body=126 status=ok
// SIG undefined FUN_148100738(void)

void FUN_148100738(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9c4d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481007a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481007be FUN_1481007be body=19 status=ok
// SIG undefined FUN_1481007be(void)

undefined1 FUN_1481007be(undefined8 param_1,undefined8 param_2)

{
  FUN_1480d6952(param_2);
  return 1;
}



// FUNCTION 148100a36 FUN_148100a36 body=29 status=ok
// SIG undefined FUN_148100a36(void)

undefined8 FUN_148100a36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148100a68 FUN_148100a68 body=93 status=ok
// SIG undefined FUN_148100a68(void)

void FUN_148100a68(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c540;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148100ac6 FUN_148100ac6 body=93 status=ok
// SIG undefined FUN_148100ac6(void)

void FUN_148100ac6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c540;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148100b24 FUN_148100b24 body=126 status=ok
// SIG undefined FUN_148100b24(void)

void FUN_148100b24(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9c540;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148100b93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148100baa FUN_148100baa body=19 status=ok
// SIG undefined FUN_148100baa(void)

undefined1 FUN_148100baa(undefined8 param_1,undefined8 param_2)

{
  FUN_1439b9ec8(param_2);
  return 1;
}



// FUNCTION 148100bbe FUN_148100bbe body=29 status=ok
// SIG undefined FUN_148100bbe(void)

undefined8 FUN_148100bbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148100bf0 FUN_148100bf0 body=93 status=ok
// SIG undefined FUN_148100bf0(void)

void FUN_148100bf0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c5b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148100c4e FUN_148100c4e body=93 status=ok
// SIG undefined FUN_148100c4e(void)

void FUN_148100c4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c5b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148100cac FUN_148100cac body=126 status=ok
// SIG undefined FUN_148100cac(void)

void FUN_148100cac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9c5b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148100d1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148100d32 FUN_148100d32 body=19 status=ok
// SIG undefined FUN_148100d32(void)

undefined1 FUN_148100d32(undefined8 param_1,undefined8 param_2)

{
  FUN_1439ba8bc(param_2);
  return 1;
}



// FUNCTION 148100d46 FUN_148100d46 body=29 status=ok
// SIG undefined FUN_148100d46(void)

undefined8 FUN_148100d46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148100d78 FUN_148100d78 body=93 status=ok
// SIG undefined FUN_148100d78(void)

void FUN_148100d78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c620;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148100dd6 FUN_148100dd6 body=93 status=ok
// SIG undefined FUN_148100dd6(void)

void FUN_148100dd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c620;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148100e34 FUN_148100e34 body=126 status=ok
// SIG undefined FUN_148100e34(void)

void FUN_148100e34(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9c620;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148100ea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148100eba FUN_148100eba body=19 status=ok
// SIG undefined FUN_148100eba(void)

undefined1 FUN_148100eba(undefined8 param_1,undefined8 param_2)

{
  FUN_1480d6b18(param_2);
  return 1;
}



// FUNCTION 148101132 FUN_148101132 body=29 status=ok
// SIG undefined FUN_148101132(void)

undefined8 FUN_148101132(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148101164 FUN_148101164 body=93 status=ok
// SIG undefined FUN_148101164(void)

void FUN_148101164(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9c690;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}


