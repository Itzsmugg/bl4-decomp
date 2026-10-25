// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14461af66 FUN_14461af66 body=52 status=ok
// SIG undefined FUN_14461af66(void)

undefined8 * FUN_14461af66(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14be787e0;
  FUN_14190ad60(param_1[1]);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461af9a FUN_14461af9a body=282 status=ok
// SIG undefined FUN_14461af9a(void)

undefined8 * FUN_14461af9a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1446187fd);
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



// FUNCTION 14461b0b4 FUN_14461b0b4 body=192 status=ok
// SIG undefined FUN_14461b0b4(void)

void FUN_14461b0b4(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  lVar2 = **(longlong **)(param_1 + 0xa8);
  local_30 = *(longlong **)(param_1 + 0xa8) + 1;
  FUN_140bd9bca(lVar2 + 0x10,&local_24);
  FUN_14461aa3c(*(longlong *)(lVar2 + 0x10) + (longlong)local_24 * 0x120 + 0x10,&DAT_14ca85100,
                *(undefined8 *)(param_1 + 0xa8));
  FUN_14190ad60(*(undefined8 *)(param_1 + 0xa8));
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14461b1a8 FUN_14461b1a8 body=12 status=ok
// SIG undefined FUN_14461b1a8(void)

void FUN_14461b1a8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014461b1b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14461b1b4 FUN_14461b1b4 body=29 status=ok
// SIG undefined FUN_14461b1b4(void)

undefined8 FUN_14461b1b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461b1d2 FUN_14461b1d2 body=282 status=ok
// SIG undefined FUN_14461b1d2(void)

undefined8 * FUN_14461b1d2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1446187fd);
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



// FUNCTION 14461b2ec FUN_14461b2ec body=117 status=ok
// SIG undefined FUN_14461b2ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14461b2ec(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14090c6da(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14090c6da(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014461b333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14461b362 FUN_14461b362 body=29 status=ok
// SIG undefined FUN_14461b362(void)

undefined8 FUN_14461b362(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461b394 FUN_14461b394 body=93 status=ok
// SIG undefined FUN_14461b394(void)

void FUN_14461b394(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78840;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461b3f2 FUN_14461b3f2 body=93 status=ok
// SIG undefined FUN_14461b3f2(void)

void FUN_14461b3f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78840;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461b450 FUN_14461b450 body=126 status=ok
// SIG undefined FUN_14461b450(void)

void FUN_14461b450(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be78840;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014461b4bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14461b4d8 FUN_14461b4d8 body=20 status=ok
// SIG undefined FUN_14461b4d8(void)

undefined1 FUN_14461b4d8(longlong param_1)

{
  FUN_1497d2b66(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14461b4ec FUN_14461b4ec body=29 status=ok
// SIG undefined FUN_14461b4ec(void)

undefined8 FUN_14461b4ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461b51e FUN_14461b51e body=93 status=ok
// SIG undefined FUN_14461b51e(void)

void FUN_14461b51e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be788b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461b57c FUN_14461b57c body=93 status=ok
// SIG undefined FUN_14461b57c(void)

void FUN_14461b57c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be788b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461b5da FUN_14461b5da body=126 status=ok
// SIG undefined FUN_14461b5da(void)

void FUN_14461b5da(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be788b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014461b649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14461b662 FUN_14461b662 body=20 status=ok
// SIG undefined FUN_14461b662(void)

undefined1 FUN_14461b662(longlong param_1)

{
  FUN_1497d2c72(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14461b676 FUN_14461b676 body=29 status=ok
// SIG undefined FUN_14461b676(void)

undefined8 FUN_14461b676(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461b6a8 FUN_14461b6a8 body=93 status=ok
// SIG undefined FUN_14461b6a8(void)

void FUN_14461b6a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78920;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461b706 FUN_14461b706 body=93 status=ok
// SIG undefined FUN_14461b706(void)

void FUN_14461b706(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78920;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461b764 FUN_14461b764 body=126 status=ok
// SIG undefined FUN_14461b764(void)

void FUN_14461b764(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be78920;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014461b7d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14461b7ec FUN_14461b7ec body=20 status=ok
// SIG undefined FUN_14461b7ec(void)

undefined1 FUN_14461b7ec(longlong param_1)

{
  FUN_1497d2f3c(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14461b800 FUN_14461b800 body=29 status=ok
// SIG undefined FUN_14461b800(void)

undefined8 FUN_14461b800(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461b832 FUN_14461b832 body=93 status=ok
// SIG undefined FUN_14461b832(void)

void FUN_14461b832(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78990;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461b890 FUN_14461b890 body=93 status=ok
// SIG undefined FUN_14461b890(void)

void FUN_14461b890(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78990;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461b8ee FUN_14461b8ee body=126 status=ok
// SIG undefined FUN_14461b8ee(void)

void FUN_14461b8ee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be78990;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014461b95d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14461b976 FUN_14461b976 body=20 status=ok
// SIG undefined FUN_14461b976(void)

undefined1 FUN_14461b976(longlong param_1)

{
  FUN_1497d73ea(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14461b98a FUN_14461b98a body=29 status=ok
// SIG undefined FUN_14461b98a(void)

undefined8 FUN_14461b98a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461b9bc FUN_14461b9bc body=93 status=ok
// SIG undefined FUN_14461b9bc(void)

void FUN_14461b9bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78a00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461ba1a FUN_14461ba1a body=93 status=ok
// SIG undefined FUN_14461ba1a(void)

void FUN_14461ba1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78a00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461ba78 FUN_14461ba78 body=126 status=ok
// SIG undefined FUN_14461ba78(void)

void FUN_14461ba78(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be78a00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014461bae7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14461bb00 FUN_14461bb00 body=20 status=ok
// SIG undefined FUN_14461bb00(void)

undefined1 FUN_14461bb00(longlong param_1)

{
  FUN_1497d76b4(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14461bb14 FUN_14461bb14 body=29 status=ok
// SIG undefined FUN_14461bb14(void)

undefined8 FUN_14461bb14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461bb46 FUN_14461bb46 body=93 status=ok
// SIG undefined FUN_14461bb46(void)

void FUN_14461bb46(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78ae0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461bba4 FUN_14461bba4 body=93 status=ok
// SIG undefined FUN_14461bba4(void)

void FUN_14461bba4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78ae0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461bc02 FUN_14461bc02 body=126 status=ok
// SIG undefined FUN_14461bc02(void)

void FUN_14461bc02(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be78ae0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014461bc71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14461bc8a FUN_14461bc8a body=20 status=ok
// SIG undefined FUN_14461bc8a(void)

undefined1 FUN_14461bc8a(longlong param_1)

{
  FUN_1497d2ffa(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14461bc9e FUN_14461bc9e body=29 status=ok
// SIG undefined FUN_14461bc9e(void)

undefined8 FUN_14461bc9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461bcd0 FUN_14461bcd0 body=93 status=ok
// SIG undefined FUN_14461bcd0(void)

void FUN_14461bcd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78b50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461bd2e FUN_14461bd2e body=93 status=ok
// SIG undefined FUN_14461bd2e(void)

void FUN_14461bd2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78b50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461bd8c FUN_14461bd8c body=126 status=ok
// SIG undefined FUN_14461bd8c(void)

void FUN_14461bd8c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be78b50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014461bdfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14461be14 FUN_14461be14 body=20 status=ok
// SIG undefined FUN_14461be14(void)

undefined1 FUN_14461be14(longlong param_1)

{
  FUN_1497d7c84(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14461be28 FUN_14461be28 body=29 status=ok
// SIG undefined FUN_14461be28(void)

undefined8 FUN_14461be28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461be5a FUN_14461be5a body=93 status=ok
// SIG undefined FUN_14461be5a(void)

void FUN_14461be5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78bc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461beb8 FUN_14461beb8 body=93 status=ok
// SIG undefined FUN_14461beb8(void)

void FUN_14461beb8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78bc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461bf16 FUN_14461bf16 body=126 status=ok
// SIG undefined FUN_14461bf16(void)

void FUN_14461bf16(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be78bc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014461bf85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14461bf9e FUN_14461bf9e body=20 status=ok
// SIG undefined FUN_14461bf9e(void)

undefined1 FUN_14461bf9e(longlong param_1)

{
  FUN_1497d3106(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14461bfb2 FUN_14461bfb2 body=29 status=ok
// SIG undefined FUN_14461bfb2(void)

undefined8 FUN_14461bfb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461bfe4 FUN_14461bfe4 body=93 status=ok
// SIG undefined FUN_14461bfe4(void)

void FUN_14461bfe4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78c30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461c042 FUN_14461c042 body=93 status=ok
// SIG undefined FUN_14461c042(void)

void FUN_14461c042(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78c30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461c0a0 FUN_14461c0a0 body=126 status=ok
// SIG undefined FUN_14461c0a0(void)

void FUN_14461c0a0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be78c30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014461c10f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14461c128 FUN_14461c128 body=20 status=ok
// SIG undefined FUN_14461c128(void)

undefined1 FUN_14461c128(longlong param_1)

{
  FUN_1497d8196(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14461c13c FUN_14461c13c body=29 status=ok
// SIG undefined FUN_14461c13c(void)

undefined8 FUN_14461c13c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461c16e FUN_14461c16e body=93 status=ok
// SIG undefined FUN_14461c16e(void)

void FUN_14461c16e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78ca0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461c1cc FUN_14461c1cc body=93 status=ok
// SIG undefined FUN_14461c1cc(void)

void FUN_14461c1cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78ca0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461c22a FUN_14461c22a body=126 status=ok
// SIG undefined FUN_14461c22a(void)

void FUN_14461c22a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be78ca0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014461c299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14461c2b2 FUN_14461c2b2 body=20 status=ok
// SIG undefined FUN_14461c2b2(void)

undefined1 FUN_14461c2b2(longlong param_1)

{
  FUN_1497d86aa(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14461c2c6 FUN_14461c2c6 body=29 status=ok
// SIG undefined FUN_14461c2c6(void)

undefined8 FUN_14461c2c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461c2f8 FUN_14461c2f8 body=93 status=ok
// SIG undefined FUN_14461c2f8(void)

void FUN_14461c2f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78d10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461c356 FUN_14461c356 body=93 status=ok
// SIG undefined FUN_14461c356(void)

void FUN_14461c356(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78d10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461c3b4 FUN_14461c3b4 body=126 status=ok
// SIG undefined FUN_14461c3b4(void)

void FUN_14461c3b4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be78d10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014461c423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14461c43a FUN_14461c43a body=19 status=ok
// SIG undefined FUN_14461c43a(void)

undefined1 FUN_14461c43a(undefined8 param_1,undefined8 param_2)

{
  FUN_1497d31c4(param_2);
  return 1;
}



// FUNCTION 14461c44e FUN_14461c44e body=29 status=ok
// SIG undefined FUN_14461c44e(void)

undefined8 FUN_14461c44e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461c480 FUN_14461c480 body=93 status=ok
// SIG undefined FUN_14461c480(void)

void FUN_14461c480(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78d80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461c4de FUN_14461c4de body=93 status=ok
// SIG undefined FUN_14461c4de(void)

void FUN_14461c4de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78d80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461c53c FUN_14461c53c body=126 status=ok
// SIG undefined FUN_14461c53c(void)

void FUN_14461c53c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be78d80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014461c5ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14461c5c2 FUN_14461c5c2 body=19 status=ok
// SIG undefined FUN_14461c5c2(void)

undefined1 FUN_14461c5c2(undefined8 param_1,undefined8 param_2)

{
  FUN_1497d3304(param_2);
  return 1;
}



// FUNCTION 14461c5d6 FUN_14461c5d6 body=29 status=ok
// SIG undefined FUN_14461c5d6(void)

undefined8 FUN_14461c5d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461c608 FUN_14461c608 body=93 status=ok
// SIG undefined FUN_14461c608(void)

void FUN_14461c608(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78df0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461c666 FUN_14461c666 body=93 status=ok
// SIG undefined FUN_14461c666(void)

void FUN_14461c666(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78df0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461c6c4 FUN_14461c6c4 body=126 status=ok
// SIG undefined FUN_14461c6c4(void)

void FUN_14461c6c4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be78df0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014461c733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14461c74a FUN_14461c74a body=19 status=ok
// SIG undefined FUN_14461c74a(void)

undefined1 FUN_14461c74a(undefined8 param_1,undefined8 param_2)

{
  FUN_1497d36fc(param_2);
  return 1;
}



// FUNCTION 14461c76a FUN_14461c76a body=29 status=ok
// SIG undefined FUN_14461c76a(void)

undefined8 FUN_14461c76a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461c906 FUN_14461c906 body=101 status=ok
// SIG undefined FUN_14461c906(void)

void FUN_14461c906(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be78e60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14461c96c FUN_14461c96c body=101 status=ok
// SIG undefined FUN_14461c96c(void)

void FUN_14461c96c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be78e60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14461c9d2 FUN_14461c9d2 body=134 status=ok
// SIG undefined FUN_14461c9d2(void)

void FUN_14461c9d2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be78e60;
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
                    /* WARNING: Could not recover jumptable at 0x00014461ca49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14461ca62 FUN_14461ca62 body=269 status=ok
// SIG undefined FUN_14461ca62(void)

undefined8 FUN_14461ca62(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14461cb69;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14461cb69;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14461cb69:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14461cb1d;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14461cb70(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14461cb1d;
    }
  }
  uVar6 = 0;
LAB_14461cb1d:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14461cb70 FUN_14461cb70 body=244 status=ok
// SIG undefined FUN_14461cb70(void)

void FUN_14461cb70(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  bool bVar10;
  
  iVar3 = DAT_14c9647dc;
  lVar6 = DAT_14c9647c8;
  if ((((*(int *)((longlong)param_1 + 0xc) == 0) || (uVar8 = *(uint *)(param_1 + 1), (int)uVar8 < 0)
       ) || (DAT_14c9647dc <= (int)uVar8)) ||
     (((plVar9 = (longlong *)
                 ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
       plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)((longlong)param_1 + 0xc))) ||
      ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) {
    piVar1 = (int *)(*param_1 + 0x84);
    *piVar1 = *piVar1 + 1;
  }
  else {
    lVar2 = *plVar9;
    piVar1 = (int *)(*param_1 + 0x84);
    *piVar1 = *piVar1 + 1;
    if (lVar2 != 0) {
      uVar8 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar8 < iVar3) {
        lVar6 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(lVar6 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      uVar5 = (ulonglong)*(uint *)(lVar6 + 0x10);
      if (*(uint *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar4 = *(uint *)(lVar6 + 0x10);
        bVar10 = uVar4 == 0;
        if (bVar10) {
          *(uint *)(lVar6 + 0x10) = uVar7;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar4 = uVar7;
        }
        uVar5 = (ulonglong)uVar4;
      }
      goto LAB_14461cbff;
    }
  }
  uVar8 = 0;
  uVar5 = 0;
LAB_14461cbff:
  FUN_14190adca((ulonglong)uVar8 | uVar5 << 0x20);
  return;
}



// FUNCTION 14461cc82 FUN_14461cc82 body=12 status=ok
// SIG undefined FUN_14461cc82(void)

void FUN_14461cc82(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014461cc8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14461cc8e FUN_14461cc8e body=29 status=ok
// SIG undefined FUN_14461cc8e(void)

undefined8 FUN_14461cc8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461ccac FUN_14461ccac body=282 status=ok
// SIG undefined FUN_14461ccac(void)

undefined8 * FUN_14461ccac(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1446187fd);
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



// FUNCTION 14461cdc6 FUN_14461cdc6 body=117 status=ok
// SIG undefined FUN_14461cdc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14461cdc6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1497d933c(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1497d933c(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014461ce31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14461ce3c FUN_14461ce3c body=29 status=ok
// SIG undefined FUN_14461ce3c(void)

undefined8 FUN_14461ce3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461ce6e FUN_14461ce6e body=93 status=ok
// SIG undefined FUN_14461ce6e(void)

void FUN_14461ce6e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78f00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461cecc FUN_14461cecc body=93 status=ok
// SIG undefined FUN_14461cecc(void)

void FUN_14461cecc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78f00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461cf2a FUN_14461cf2a body=126 status=ok
// SIG undefined FUN_14461cf2a(void)

void FUN_14461cf2a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be78f00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014461cf99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14461cfb0 FUN_14461cfb0 body=19 status=ok
// SIG undefined FUN_14461cfb0(void)

undefined1 FUN_14461cfb0(undefined8 param_1,undefined8 param_2)

{
  FUN_1497d4374(param_2);
  return 1;
}



// FUNCTION 14461cfcf FUN_14461cfcf body=2156 status=ok
// SIG undefined FUN_14461cfcf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14461cfcf(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  char *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400b22c2(&local_68,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_68,&DAT_14cc26228);
  if (cVar1 == '\0') {
    _DAT_14cc26228 = 0;
    uRam000000014cc26230 = 0;
  }
  if (local_68 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_68 = "AssetRegistry";
  local_60 = 0xd;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc26238 = (ulonglong)uVar2;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNiagaraExtensions",&PTR_FUN_14be71f60,1,0);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14be727f0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxNiagaraExtensions",&PTR_FUN_14be72840,1,&PTR_FUN_14be72810);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNiagaraExtensions",&PTR_FUN_14be72db0,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNiagaraExtensions",&PTR_FUN_14be73400,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNiagaraExtensions",&PTR_FUN_14be73950,1,0);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14be741e0;
  local_88 = 0;
  FUN_14282b410(L"/Script/GbxNiagaraExtensions",&PTR_FUN_14be74200,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNiagaraExtensions",&PTR_FUN_14be74760,1,0);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14be74d30;
  local_88 = 0;
  FUN_14282b410(L"/Script/GbxNiagaraExtensions",&PTR_FUN_14be74d50,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNiagaraExtensions",&PTR_FUN_14be753f0,1,0);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14be765b0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxNiagaraExtensions",&PTR_FUN_14be76600,2,&PTR_FUN_14be765d0);
  local_68 = "bone";
  local_60 = 4;
  local_5c = 0;
  FUN_14001a6c0(&local_68,1);
  FUN_1446f470e(&DAT_14cc26420,L"AddSourceLocation",1);
  FUN_1446f470e(&DAT_14cc26428,L"SetGameParameter",1);
  FUN_1446f470e(&DAT_14cc26430,L"UpdateSourceLocation",1);
  FUN_1446f470e(&DAT_14cc26438,L"UpdateSourceRotation",1);
  FUN_1446f470e(&DAT_14cc26440,L"UpdateSourceGain",1);
  FUN_1446f470e(&DAT_14cc26448,L"UpdateSourceRadius",1);
  FUN_1446f470e(&DAT_14cc26450,L"PostWwiseEventAtLocation",1);
  FUN_1446f470e(&DAT_14cc26458,L"PostPersistentWwiseEvent",1);
  FUN_1446f470e(&DAT_14cc26460,L"SetGameParameter",1);
  FUN_1446f470e(&DAT_14cc26468,L"UpdateWwiseEventLocation",1);
  FUN_1446f470e(&DAT_14cc26470,L"UpdateWwiseEventRotation",1);
  FUN_1446f470e(&DAT_14cc26478,L"UpdateWwiseEventGain",1);
  FUN_1446f470e(&DAT_14cc26480,L"UpdateWwiseEventRadius",1);
  local_68 = "IsValidVertex";
  local_60 = 0xd;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cc26488 = (ulonglong)uVar2;
  local_68 = "RandomVertex";
  local_60 = 0xc;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cc26490 = (ulonglong)uVar2;
  local_68 = "GetVertexCount";
  local_60 = 0xe;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cc26498 = (ulonglong)uVar2;
  local_68 = "GetVertex";
  local_60 = 9;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cc264a0 = (ulonglong)uVar2;
  local_68 = "GetVertexWS";
  local_60 = 0xb;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cc264a8 = (ulonglong)uVar2;
  local_68 = "GetVertexWSInterpolated";
  local_60 = 0x17;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cc264b0 = (ulonglong)uVar2;
  local_68 = "GetVertexColor";
  local_60 = 0xe;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc264b8 = (ulonglong)uVar2;
  local_68 = "GetVertexUV";
  local_60 = 0xb;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc264c0 = (ulonglong)uVar2;
  local_68 = "IsValidTriangle";
  local_60 = 0xf;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cc264c8 = (ulonglong)uVar2;
  local_68 = "RandomTriangle";
  local_60 = 0xe;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cc264d0 = (ulonglong)uVar2;
  local_68 = "GetTriangleCount";
  local_60 = 0x10;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cc264d8 = (ulonglong)uVar2;
  local_68 = "GetTriangle";
  local_60 = 0xb;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cc264e0 = (ulonglong)uVar2;
  local_68 = "GetTriangleWS";
  local_60 = 0xd;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cc264e8 = (ulonglong)uVar2;
  local_68 = "GetTriangleWSInterpolated";
  local_60 = 0x19;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cc264f0 = (ulonglong)uVar2;
  local_68 = "GetTriangleColor";
  local_60 = 0x10;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc264f8 = (ulonglong)uVar2;
  local_68 = "GetTriangleUV";
  local_60 = 0xd;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc26500 = (ulonglong)uVar2;
  local_68 = "GetTriangleIndices";
  local_60 = 0x12;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cc26508 = (ulonglong)uVar2;
  local_68 = "IsValid";
  local_60 = 7;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cc26510 = (ulonglong)uVar2;
  local_68 = "GetPreSkinnedLocalBounds";
  local_60 = 0x18;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cc26518 = (ulonglong)uVar2;
  local_68 = "GetMeshBounds";
  local_60 = 0xd;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cc26520 = (ulonglong)uVar2;
  local_68 = "GetMeshBoundsWS";
  local_60 = 0xf;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cc26528 = (ulonglong)uVar2;
  local_68 = "GetLocalToWorld";
  local_60 = 0xf;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cc26530 = (ulonglong)uVar2;
  local_68 = "GetLocalToWorldInverseTransposed";
  local_60 = 0x20;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14cc26538 = (ulonglong)uVar2;
  DAT_14cc26560 = 0;
  DAT_14cc26568 = 0;
  DAT_14cc26540 = 0;
  _DAT_14cc26548 = 0;
  _DAT_14cc2656c = 0xffffffff00000080;
  DAT_14cc26574 = 0;
  DAT_14cc26580 = 0;
  DAT_14cc26588 = 0;
  atexit(FUN_1446163da);
  FUN_1446f470e(&DAT_14cc26598,L"GetParticleToScreenScale",1);
  local_68 = (char *)0x800000014be77452;
  local_54 = 0x14;
  local_60 = FUN_14577453c();
  local_5c = 1;
  FUN_14675c222(&local_68);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14461d83c FUN_14461d83c body=55 status=ok
// SIG undefined FUN_14461d83c(void)

void FUN_14461d83c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc266c8 == 0) {
    uVar1 = FUN_14461d873();
    DAT_14cc266c8 = FUN_140002ddd(FUN_14461d8a2,uVar1,L"GbxNiagaraProfilingResult");
  }
  return;
}



// FUNCTION 14461d873 FUN_14461d873 body=47 status=ok
// SIG undefined FUN_14461d873(void)

longlong FUN_14461d873(void)

{
  if (DAT_14cc266f8 == 0) {
    FUN_140f50038(&DAT_14cc266f8,&PTR_s__Script_GbxAnalytics_Niagara_14be79990);
  }
  return DAT_14cc266f8;
}



// FUNCTION 14461d8a2 FUN_14461d8a2 body=47 status=ok
// SIG undefined FUN_14461d8a2(void)

longlong FUN_14461d8a2(void)

{
  if (DAT_14cc266c0 == 0) {
    FUN_14086a14e(&DAT_14cc266c0,&PTR_FUN_14be796a0);
  }
  return DAT_14cc266c0;
}



// FUNCTION 14461d8d2 FUN_14461d8d2 body=48 status=ok
// SIG undefined FUN_14461d8d2(void)

void FUN_14461d8d2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14be79a00;
  return;
}



// FUNCTION 14461d902 FUN_14461d902 body=55 status=ok
// SIG undefined FUN_14461d902(void)

void FUN_14461d902(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc266e0 == 0) {
    uVar1 = FUN_14461d873();
    DAT_14cc266e0 = FUN_140002ddd(FUN_14461d939,uVar1,L"GbxNiagaraProfilingResults");
  }
  return;
}



// FUNCTION 14461d939 FUN_14461d939 body=47 status=ok
// SIG undefined FUN_14461d939(void)

longlong FUN_14461d939(void)

{
  if (DAT_14cc266d8 == 0) {
    FUN_14086a14e(&DAT_14cc266d8,&PTR_FUN_14be798c8);
  }
  return DAT_14cc266d8;
}



// FUNCTION 14461d968 FUN_14461d968 body=48 status=ok
// SIG undefined FUN_14461d968(void)

void FUN_14461d968(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14be79b70;
  return;
}



// FUNCTION 14461d998 FUN_14461d998 body=29 status=ok
// SIG undefined FUN_14461d998(void)

undefined8 FUN_14461d998(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461da2c FUN_14461da2c body=39 status=ok
// SIG undefined FUN_14461da2c(void)

undefined8 FUN_14461da2c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14461da7c FUN_14461da7c body=59 status=ok
// SIG undefined FUN_14461da7c(void)

undefined8 FUN_14461da7c(longlong *param_1)

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



// FUNCTION 14461db1e FUN_14461db1e body=29 status=ok
// SIG undefined FUN_14461db1e(void)

undefined8 FUN_14461db1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461db90 FUN_14461db90 body=141 status=ok
// SIG undefined FUN_14461db90(void)

undefined8 FUN_14461db90(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x10);
    do {
      *(undefined4 *)(puVar2 + -1) = *(undefined4 *)(param_3 + 1);
      puVar2[-2] = *param_3;
      if (puVar2 + -2 != param_3) {
        iVar1 = *(int *)(param_3 + 3);
        _Src = (void *)param_3[2];
        *(int *)(puVar2 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar2 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        else {
          FUN_14461dd00(puVar2,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 0x78);
          }
        }
      }
      param_3 = param_3 + 4;
      puVar2 = puVar2 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14461dc46 FUN_14461dc46 body=59 status=ok
// SIG undefined FUN_14461dc46(void)

undefined8 FUN_14461dc46(longlong *param_1)

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



// FUNCTION 14461dc8c FUN_14461dc8c body=38 status=ok
// SIG undefined FUN_14461dc8c(void)

void FUN_14461dc8c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14461dd00 FUN_14461dd00 body=323 status=ok
// SIG undefined FUN_14461dd00(void)

void FUN_14461dd00(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x78;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14461dd6a;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_14461dd6a:
    iVar5 = (int)(uVar4 / 0x78);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x78,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14461de44 FUN_14461de44 body=34 status=ok
// SIG undefined FUN_14461de44(void)

void FUN_14461de44(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14be79d50;
  return;
}



// FUNCTION 14461de66 FUN_14461de66 body=29 status=ok
// SIG undefined FUN_14461de66(void)

undefined8 FUN_14461de66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461dea0 FUN_14461dea0 body=93 status=ok
// SIG undefined FUN_14461dea0(void)

void FUN_14461dea0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be79ce0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14461defe FUN_14461defe body=93 status=ok
// SIG undefined FUN_14461defe(void)

void FUN_14461defe(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be79ce0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14461df5c FUN_14461df5c body=126 status=ok
// SIG undefined FUN_14461df5c(void)

void FUN_14461df5c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be79ce0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014461dfcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14461dfe6 FUN_14461dfe6 body=21 status=ok
// SIG undefined FUN_14461dfe6(void)

undefined8 FUN_14461dfe6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14461dffc FUN_14461dffc body=29 status=ok
// SIG undefined FUN_14461dffc(void)

undefined8 FUN_14461dffc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461e01d FUN_14461e01d body=509 status=ok
// SIG undefined FUN_14461e01d(void)

void FUN_14461e01d(void)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_3b;
  undefined1 local_39;
  undefined8 *local_38;
  int local_30;
  undefined2 local_23;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxAnalytics_Niagara",0,0,&PTR_FUN_14be79900);
  local_38 = (undefined8 *)CONCAT44(local_38._4_4_,0x14);
  uVar2 = FUN_14577453c(L"GbxAnalytics_Niagara",&local_38);
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14be79ce0;
  local_38[3] = &DAT_14cc26708;
  local_38[4] = FUN_14461de44;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  local_48 = 0x800000014be799ce;
  local_3c = 1;
  local_3b = local_23;
  local_39 = local_21;
  local_40 = uVar2;
  FUN_140da023c(&DAT_14c874628,&local_48,&local_38);
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_14461e195;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14461e195:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14461e21c FUN_14461e21c body=57 status=ok
// SIG undefined FUN_14461e21c(void)

void FUN_14461e21c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26718 == 0) {
    uVar1 = FUN_145a25dd1();
    DAT_14cc26718 = FUN_14171c317(FUN_14675c635,uVar1,L"EAutomationState");
  }
  return;
}



// FUNCTION 14461e255 FUN_14461e255 body=57 status=ok
// SIG undefined FUN_14461e255(void)

void FUN_14461e255(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26748 == 0) {
    uVar1 = FUN_145a25dd1();
    DAT_14cc26748 = FUN_14171c317(FUN_14675c664,uVar1,L"ETEST_RHI_Options");
  }
  return;
}



// FUNCTION 14461e28e FUN_14461e28e body=57 status=ok
// SIG undefined FUN_14461e28e(void)

void FUN_14461e28e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26760 == 0) {
    uVar1 = FUN_145a25dd1();
    DAT_14cc26760 = FUN_14171c317(FUN_14675c693,uVar1,L"ETEST_RHI_FeatureLevel_Options");
  }
  return;
}



// FUNCTION 14461e316 FUN_14461e316 body=329 status=ok
// SIG undefined FUN_14461e316(void)

void FUN_14461e316(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **ppuStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14098d3d2(FUN_14461e21c,L"/Script/AutomationTest",L"EAutomationState",&DAT_14cc26710);
  local_38 = 2;
  ppuStack_40 = &PTR_FUN_14be7b140;
  local_48 = 2;
  FUN_14282b410(L"/Script/AutomationTest",&PTR_FUN_14be7b1d0,3,&PTR_FUN_14be7b180);
  FUN_140056680(&DAT_14cc267e8,L"Project.Functional Tests.");
  atexit((_func_5014 *)&LAB_14461e2c7);
  FUN_140056680(&DAT_14cc267f8,L"URLHashtag");
  atexit((_func_5014 *)&LAB_14461e2d8);
  FUN_140056680(&DAT_14cc26808,L"URLBase");
  atexit((_func_5014 *)&LAB_14461e2e9);
  local_30 = 0x800000014be7b2b2;
  local_1c = 0xe;
  local_28 = FUN_14577453c();
  local_24 = 1;
  FUN_14675d264(&local_30);
  local_48 = 0;
  ppuStack_40 = (undefined **)0x0;
  local_38 = 0;
  FUN_14282b410(L"/Script/AutomationTest",&PTR_FUN_14be7b620,1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14461e460 FUN_14461e460 body=55 status=ok
// SIG undefined FUN_14461e460(void)

void FUN_14461e460(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26868 == 0) {
    uVar1 = FUN_14132581e();
    DAT_14cc26868 = FUN_14171c317(FUN_14675d467,uVar1,L"EGbxVegetationCollisionType");
  }
  return;
}



// FUNCTION 14461e49d FUN_14461e49d body=69 status=ok
// SIG undefined FUN_14461e49d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14461e49d(void)

{
  _DAT_14cc26980 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014461e4df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc26988,1);
  return;
}



// FUNCTION 14461e4e2 FUN_14461e4e2 body=69 status=ok
// SIG undefined FUN_14461e4e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14461e4e2(void)

{
  _DAT_14cc26998 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014461e524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc269a0,1);
  return;
}



// FUNCTION 14461e527 FUN_14461e527 body=69 status=ok
// SIG undefined FUN_14461e527(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14461e527(void)

{
  _DAT_14cc269b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014461e569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc269b8,1);
  return;
}



// FUNCTION 14461e56c FUN_14461e56c body=4855 status=ok
// SIG undefined FUN_14461e56c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14461e56c(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  double *pdVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar39;
  undefined1 auVar38 [16];
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  double dVar54;
  undefined1 auStack_388 [32];
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
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
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  cVar4 = FUN_1497de636();
  if (cVar4 != '\0') {
    FUN_1497de724(param_1);
  }
  if ((*(longlong *)(param_1 + 0x2b4) == 0) || (lVar7 = FUN_1497dc498(param_1), lVar7 == 0))
  goto LAB_14461f78b;
  if (*(longlong *)(lVar7 + 0x658) == 0) {
    if ((DAT_14c950c29 & *(longlong *)(lVar7 + 0x660) != 0) != 0) goto LAB_14461f85a;
    if (*(longlong *)(lVar7 + 0x660) == 0) goto LAB_14461f78b;
  }
  else if (DAT_14c950c29 == 1) {
LAB_14461f85a:
    FUN_14689c22e();
  }
  iVar5 = FUN_144909502(lVar7,*(undefined8 *)(param_1 + 0x2b4));
  if (iVar5 == -1) goto LAB_14461f78b;
  local_318 = *(double *)(param_1 + 0x240);
  dStack_310 = *(double *)(param_1 + 0x248);
  local_308 = *(double *)(param_1 + 0x250);
  dStack_300 = *(double *)(param_1 + 600);
  local_2f8 = *(double *)(param_1 + 0x260);
  dStack_2f0 = *(double *)(param_1 + 0x268);
  local_2e8 = *(double *)(param_1 + 0x270);
  dStack_2e0 = *(double *)(param_1 + 0x278);
  local_328 = *(double *)(param_1 + 0x280);
  dStack_320 = *(double *)(param_1 + 0x288);
  local_358 = *(double *)(param_1 + 0x290);
  dStack_350 = *(double *)(param_1 + 0x298);
  dVar34 = *(double *)(lVar7 + 0x240);
  dVar27 = *(double *)(lVar7 + 0x248);
  dVar36 = *(double *)(lVar7 + 0x250);
  dVar26 = *(double *)(lVar7 + 600);
  dVar37 = *(double *)*(undefined1 (*) [16])(lVar7 + 0x260);
  dVar40 = *(double *)(lVar7 + 0x268);
  auVar33 = *(undefined1 (*) [16])(lVar7 + 0x260);
  local_368 = *(double *)(lVar7 + 0x270);
  dStack_360 = *(double *)(lVar7 + 0x278);
  auVar21 = *(undefined1 (*) [16])(lVar7 + 0x280);
  dVar46 = auVar21._0_8_;
  dVar53 = auVar21._8_8_;
  auVar44 = *(undefined1 (*) [16])(lVar7 + 0x290);
  dVar47 = auVar44._0_8_;
  plVar12 = *(longlong **)(lVar7 + 0x658);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = *(longlong **)(lVar7 + 0x660);
    if ((DAT_14c950c29 & plVar12 != (longlong *)0x0) != 0) goto LAB_14461f84d;
  }
  else if (DAT_14c950c29 == 1) {
LAB_14461f84d:
    FUN_14689c22e(plVar12);
  }
  uVar8 = (**(code **)(*plVar12 + 0x310))(plVar12);
  pdVar11 = &local_2d8;
  uVar6 = FUN_1497dbc8e(pdVar11,uVar8,iVar5);
  dVar54 = local_298._0_8_;
  dVar43 = local_298._8_8_;
  dVar41 = local_288._0_8_;
  auVar21 = minpd(local_298,auVar21);
  auVar29 = minpd(local_288,auVar44);
  auVar22._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
  auVar22._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
  iVar5 = movmskpd(uVar6,auVar22);
  auVar21._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
  auVar21._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
  uVar9 = movmskpd((int)pdVar11,auVar21);
  if ((uVar9 & 0x3fffffff) == 0 && iVar5 == 0) {
    dVar20 = dStack_2d0 * dVar36 * -1.0 +
             local_2c8 * dVar27 + dVar34 * dStack_2c0 * 1.0 + dVar26 * local_2d8;
    dVar25 = local_2d8 * dVar36 * 1.0 +
             dStack_2c0 * dVar27 + dVar34 * local_2c8 * -1.0 + dVar26 * dStack_2d0;
    auVar51._0_8_ =
         dStack_2c0 * dVar36 * 1.0 +
         ((dVar34 * dStack_2d0 * 1.0 + dVar26 * local_2c8) - dVar27 * local_2d8);
    auVar51._8_8_ =
         local_2c8 * dVar36 * -1.0 +
         ((dVar34 * local_2d8 * -1.0 + dVar26 * dStack_2c0) - dVar27 * dStack_2d0);
    local_2b8 = local_2b8 * dVar46;
    dStack_2b0 = dStack_2b0 * dVar53;
    local_2a8 = local_2a8 * dVar47;
    dVar35 = dStack_2b0 * dVar34 - dVar27 * local_2b8;
    dVar39 = local_2a8 * dVar27 - dVar36 * dStack_2b0;
    dVar28 = local_2b8 * dVar36 - dVar34 * local_2a8;
    dVar39 = dVar39 + dVar39;
    dVar28 = dVar28 + dVar28;
    dVar35 = dVar35 + dVar35;
    auVar29._8_8_ = local_288._8_8_ * auVar44._8_8_;
    auVar29._0_8_ = dVar41 * dVar47;
    auVar44._8_8_ = dVar43 * dVar53;
    auVar44._0_8_ = dVar54 * dVar46;
    uVar6 = 0;
    dVar46 = dVar37 + (dVar35 * dVar27 - dVar36 * dVar28) + dVar26 * dVar39 + local_2b8;
    dVar47 = dVar40 + (dVar39 * dVar36 - dVar35 * dVar34) + dVar26 * dVar28 + dStack_2b0;
    dVar53 = local_368 + (dVar28 * dVar34 - dVar27 * dVar39) + dVar26 * dVar35 + local_2a8;
    local_348 = auVar33;
  }
  else {
    dVar20 = dVar27 + dVar27;
    dVar28 = dVar36 + dVar36;
    dVar25 = dVar34 * (dVar34 + dVar34);
    local_1d8 = (1.0 - (dVar36 * dVar28 + dVar27 * dVar20)) * dVar46;
    dStack_1b0 = (1.0 - (dVar36 * dVar28 + dVar25)) * dVar53;
    dVar35 = (dVar34 + dVar34) * dVar26;
    local_1b8 = (dVar20 * dVar34 - dVar28 * dVar26) * dVar53;
    dStack_190 = (dVar28 * dVar27 - dVar35) * dVar47;
    local_198 = (dVar20 * dVar26 + dVar34 * dVar28) * dVar47;
    local_188 = (1.0 - (dVar25 + dVar27 * dVar20)) * dVar47;
    dVar36 = auVar44._8_8_ * local_288._8_8_;
    local_348._8_4_ = SUB84(dVar36,0);
    local_348._0_8_ = dVar47 * dVar41;
    local_348._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
    dStack_1d0 = (dVar20 * dVar34 + dVar28 * dVar26) * dVar46;
    local_1a8 = (dVar28 * dVar27 + dVar35) * dVar53;
    local_1c8 = (dVar34 * dVar28 - dVar20 * dVar26) * dVar46;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_168 = local_368;
    uStack_160 = 0x3ff0000000000000;
    dVar47 = dStack_2d0 + dStack_2d0;
    dVar34 = local_2c8 + local_2c8;
    dVar36 = local_2d8 * (local_2d8 + local_2d8);
    local_208 = (1.0 - (dVar36 + dStack_2d0 * dVar47)) * dVar41;
    dVar27 = (local_2d8 + local_2d8) * dStack_2c0;
    local_218 = (dVar47 * dStack_2c0 + local_2d8 * dVar34) * dVar41;
    local_238 = (dVar47 * local_2d8 - dVar34 * dStack_2c0) * dVar43;
    dStack_210 = (dVar34 * dStack_2d0 - dVar27) * dVar41;
    local_368 = dVar46 * dVar54;
    dStack_360 = dVar53 * dVar43;
    local_258 = (1.0 - (local_2c8 * dVar34 + dStack_2d0 * dVar47)) * dVar54;
    dStack_230 = (1.0 - (local_2c8 * dVar34 + dVar36)) * dVar43;
    dStack_250 = (dVar47 * local_2d8 + dVar34 * dStack_2c0) * dVar54;
    local_228 = (dVar34 * dStack_2d0 + dVar27) * dVar43;
    local_248 = (local_2d8 * dVar34 - dVar47 * dStack_2c0) * dVar54;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = local_2b8;
    dStack_1f0 = dStack_2b0;
    local_1e8 = local_2a8;
    uStack_1e0 = 0x3ff0000000000000;
    local_178 = dVar37;
    dStack_170 = dVar40;
    FUN_1447fea8d(&local_158);
    auVar29 = local_348;
    auVar21 = _DAT_149934d80;
    dVar47 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    local_338 = local_138;
    dVar53 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    dVar46 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
    uVar13 = -(ulonglong)(0.0 <= dVar47 + -9.99999993922529e-09);
    dVar47 = (double)(~uVar13 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar47)) & uVar13);
    uVar13 = -(ulonglong)(0.0 <= dVar53 + -9.99999993922529e-09);
    dVar53 = (double)(~uVar13 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar53)) & uVar13);
    uVar13 = -(ulonglong)(0.0 <= dVar46 + -9.99999993922529e-09);
    dVar34 = (double)(~uVar13 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar46)) & uVar13);
    auVar44._8_8_ = dStack_360;
    auVar44._0_8_ = local_368;
    auVar33._8_8_ = -(ulonglong)(0.0 <= dStack_360);
    auVar33._0_8_ = -(ulonglong)(0.0 <= local_368);
    auVar33 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar33);
    uVar13 = -(ulonglong)(0.0 <= local_348._0_8_);
    dVar46 = (double)(~uVar13 & 0xbff0000000000000 | uVar13 & 0x3ff0000000000000);
    dVar27 = auVar33._0_8_;
    local_158 = local_158 * dVar47 * dVar27;
    local_150 = local_150 * dVar47 * dVar27;
    local_148 = dVar47 * local_148 * dVar27;
    dVar47 = auVar33._8_8_;
    local_128 = dVar53 * local_128 * dVar47;
    local_130 = local_130 * dVar53 * dVar47;
    local_138 = dVar47 * local_138 * dVar53;
    local_108 = dVar34 * local_108 * dVar46;
    local_110 = local_110 * dVar34 * dVar46;
    local_118 = dVar46 * local_118 * dVar34;
    pdVar11 = &local_278;
    iVar5 = FUN_14481fd10(pdVar11,&local_158);
    uVar6 = SUB84(pdVar11,0);
    dVar46 = local_268 * local_268 + local_278 * local_278;
    dVar47 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar30._0_8_ = dVar46 + dVar47;
    auVar30._8_8_ = dVar46 + dVar47;
    auVar14._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
    auVar14._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
    auVar33 = sqrtpd(auVar30,auVar30);
    auVar21 = divpd(auVar21,auVar33);
    auVar38._0_8_ = auVar21._0_8_ * local_268;
    auVar38._8_8_ = auVar21._8_8_ * dStack_260;
    dVar20 = (double)((ulonglong)(local_278 * auVar21._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_));
    dVar25 = (double)((ulonglong)(dStack_270 * auVar21._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_));
    auVar51 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar38,auVar14);
    dVar46 = local_f8;
    dVar47 = dStack_f0;
    dVar53 = local_e8;
  }
  auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar44._8_8_));
  auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar44._0_8_));
  uVar9 = movmskpd(iVar5,auVar31);
  auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar29._8_8_));
  auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar29._0_8_));
  iVar5 = movmskpd(uVar6,auVar32);
  uVar10 = iVar5 << 2 | uVar9;
  auVar15 = _DAT_14c8464c0;
  auVar18 = _DAT_14c8464d0;
  dVar34 = DAT_14c846490;
  dVar27 = DAT_14c846498;
  dVar36 = DAT_14c8464a0;
  dVar26 = DAT_14c8464a8;
  dVar37 = DAT_14c846480;
  dVar40 = DAT_14c846488;
  local_368 = DAT_14c8464b0;
  dStack_360 = DAT_14c8464b8;
  if (uVar10 != 0) {
    auVar33 = divpd(_DAT_149934d80,auVar44);
    auVar21 = divpd(ZEXT816(0x3ff0000000000000),auVar29);
    auVar15._0_8_ =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar44._0_8_)) & auVar33._0_8_);
    auVar15._8_8_ =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar44._8_8_)) & auVar33._8_8_);
    dVar36 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar29._0_8_)) & auVar21._0_8_);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = dVar36;
    dVar37 = -dVar20;
    dVar40 = -dVar25;
    dVar34 = auVar51._0_8_ * -1.0;
    dVar27 = auVar51._8_8_ * 1.0;
    dVar46 = dVar46 * auVar15._0_8_;
    dVar47 = dVar47 * auVar15._8_8_;
    dVar53 = dVar53 * dVar36;
    dVar54 = dVar47 * dVar37 - dVar46 * dVar40;
    dVar41 = dVar53 * dVar40 - dVar47 * dVar34;
    dVar43 = dVar46 * dVar34 - dVar37 * dVar53;
    dVar41 = dVar41 + dVar41;
    dVar43 = dVar43 + dVar43;
    dVar54 = dVar54 + dVar54;
    dVar36 = 0.0 - ((dVar54 * dVar40 - dVar43 * dVar34) + dVar27 * dVar41 + dVar46);
    dVar26 = 0.0 - (dVar54 * dVar20 + dVar34 * dVar41 + dVar27 * dVar43 + dVar47);
    local_368 = 0.0 - (dVar27 * dVar54 + dVar53 + (dVar43 * dVar37 - dVar41 * dVar40));
    dStack_360 = 0.0;
  }
  auVar1._8_8_ = dStack_350;
  auVar1._0_8_ = local_358;
  auVar3._8_8_ = dStack_320;
  auVar3._0_8_ = local_328;
  auVar21 = minpd(auVar3,auVar15);
  auVar44 = minpd(auVar1,auVar18);
  auVar42._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
  auVar42._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
  iVar5 = movmskpd(uVar9,auVar42);
  auVar45._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
  auVar45._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
  uVar9 = movmskpd(uVar10,auVar45);
  dVar53 = auVar15._0_8_;
  dVar54 = auVar15._8_8_;
  dVar47 = auVar18._8_8_;
  dVar46 = auVar18._0_8_;
  if ((uVar9 & 0x3fffffff) == 0 && iVar5 == 0) {
    dVar41 = dStack_310 * dVar34 * -1.0 +
             local_308 * dVar40 + dStack_300 * dVar37 * 1.0 + local_318 * dVar27;
    dVar43 = local_318 * dVar34 * 1.0 +
             dStack_300 * dVar40 + local_308 * dVar37 * -1.0 + dStack_310 * dVar27;
    auVar52._0_8_ =
         dStack_300 * dVar34 * 1.0 +
         ((dVar37 * dStack_310 * 1.0 + local_308 * dVar27) - dVar40 * local_318);
    auVar52._8_8_ =
         local_308 * dVar34 * -1.0 +
         ((dVar37 * local_318 * -1.0 + dStack_300 * dVar27) - dVar40 * dStack_310);
    dVar20 = local_2f8 * dVar53;
    dVar25 = dStack_2f0 * dVar54;
    dVar49 = local_2e8 * dVar46;
    dVar50 = dStack_2e0 * dVar47;
    dVar28 = dVar25 * dVar37 - dVar20 * dVar40;
    dVar35 = dVar49 * dVar40 - dVar25 * dVar34;
    dVar39 = dVar20 * dVar34 - dVar49 * dVar37;
    dVar48 = dVar50 * dVar27 - dVar50 * dVar27;
    dVar35 = dVar35 + dVar35;
    dVar39 = dVar39 + dVar39;
    dVar28 = dVar28 + dVar28;
    dVar48 = dVar48 + dVar48;
    local_f8 = dVar36 + (dVar28 * dVar40 - dVar34 * dVar39) + dVar27 * dVar35 + dVar20;
    dStack_f0 = dVar26 + (dVar35 * dVar34 - dVar28 * dVar37) + dVar27 * dVar39 + dVar25;
    local_e8 = local_368 + (dVar39 * dVar37 - dVar40 * dVar35) + dVar27 * dVar28 + dVar49;
    dVar34 = dStack_360 + (dVar48 * dVar27 - dVar48 * dVar27) + dVar27 * dVar48 + dVar50;
    dVar53 = local_328 * dVar53;
    dVar54 = dStack_320 * dVar54;
    dVar46 = local_358 * dVar46;
    dVar47 = dStack_350 * dVar47;
  }
  else {
    dVar41 = dVar40 + dVar40;
    dVar20 = dVar34 + dVar34;
    dVar43 = dVar37 * (dVar37 + dVar37);
    dVar25 = (dVar37 + dVar37) * dVar27;
    local_348._8_8_ = dStack_350 * dVar47;
    local_348._0_8_ = local_358 * dVar46;
    local_188 = (1.0 - (dVar43 + dVar40 * dVar41)) * dVar46;
    local_198 = (dVar37 * dVar20 + dVar41 * dVar27) * dVar46;
    local_1b8 = (dVar41 * dVar37 - dVar20 * dVar27) * dVar54;
    dStack_190 = (dVar20 * dVar40 - dVar25) * dVar46;
    local_338 = local_328 * dVar53;
    dStack_330 = dStack_320 * dVar54;
    local_1d8 = (1.0 - (dVar34 * dVar20 + dVar40 * dVar41)) * dVar53;
    dStack_1b0 = (1.0 - (dVar34 * dVar20 + dVar43)) * dVar54;
    dStack_1d0 = (dVar41 * dVar37 + dVar20 * dVar27) * dVar53;
    local_1a8 = (dVar20 * dVar40 + dVar25) * dVar54;
    local_1c8 = (dVar37 * dVar20 - dVar41 * dVar27) * dVar53;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    uStack_180 = 0;
    uStack_160 = 0x3ff0000000000000;
    dVar46 = dStack_310 + dStack_310;
    dVar53 = local_308 + local_308;
    dVar47 = local_318 * (local_318 + local_318);
    local_208 = (1.0 - (dVar47 + dStack_310 * dVar46)) * local_358;
    dVar34 = (local_318 + local_318) * dStack_300;
    local_218 = (dVar46 * dStack_300 + local_318 * dVar53) * local_358;
    local_238 = (dVar46 * local_318 - dVar53 * dStack_300) * dStack_320;
    dStack_210 = (dVar53 * dStack_310 - dVar34) * local_358;
    local_258 = (1.0 - (local_308 * dVar53 + dStack_310 * dVar46)) * local_328;
    dStack_230 = (1.0 - (local_308 * dVar53 + dVar47)) * dStack_320;
    dStack_250 = (dVar46 * local_318 + dVar53 * dStack_300) * local_328;
    local_228 = (dVar53 * dStack_310 + dVar34) * dStack_320;
    local_248 = (local_318 * dVar53 - dVar46 * dStack_300) * local_328;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = local_2f8;
    dStack_1f0 = dStack_2f0;
    local_1e8 = local_2e8;
    uStack_1e0 = 0x3ff0000000000000;
    local_178 = dVar36;
    dStack_170 = dVar26;
    local_168 = local_368;
    FUN_1447fea8d(&local_158);
    dVar54 = dStack_330;
    dVar53 = local_338;
    local_328 = local_148;
    dVar46 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    dVar34 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    dVar47 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
    uVar13 = -(ulonglong)(0.0 <= dVar46 + -9.99999993922529e-09);
    dVar27 = (double)(~uVar13 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar46)) & uVar13);
    uVar13 = -(ulonglong)(0.0 <= dVar34 + -9.99999993922529e-09);
    local_358 = 0.0;
    dStack_350 = 0.0;
    dVar36 = (double)(~uVar13 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar34)) & uVar13);
    uVar13 = -(ulonglong)(0.0 <= dVar47 + -9.99999993922529e-09);
    dVar26 = (double)(~uVar13 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar47)) & uVar13);
    dVar46 = (double)local_348._0_8_;
    dVar47 = (double)local_348._8_8_;
    auVar16._8_8_ = -(ulonglong)(0.0 <= dStack_330);
    auVar16._0_8_ = -(ulonglong)(0.0 <= local_338);
    auVar21 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar16);
    dVar34 = (double)(~-(ulonglong)(0.0 <= (double)local_348._0_8_) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= (double)local_348._0_8_) & 0x3ff0000000000000);
    dVar37 = auVar21._0_8_;
    local_158 = local_158 * dVar27 * dVar37;
    local_150 = local_150 * dVar27 * dVar37;
    local_148 = dVar27 * local_148 * dVar37;
    dVar27 = auVar21._8_8_;
    local_128 = dVar36 * local_128 * dVar27;
    local_130 = local_130 * dVar36 * dVar27;
    local_138 = dVar27 * local_138 * dVar36;
    local_108 = dVar26 * local_108 * dVar34;
    local_110 = local_110 * dVar26 * dVar34;
    local_118 = dVar34 * local_118 * dVar26;
    FUN_14481fd10(&local_278,&local_158);
    auVar19._0_8_ = local_278 * local_278;
    auVar19._8_8_ = dStack_270 * dStack_270;
    dVar34 = local_268 * local_268 + auVar19._0_8_;
    dVar27 = dStack_260 * dStack_260 + auVar19._8_8_;
    auVar23._0_8_ = dVar34 + dVar27;
    auVar23._8_8_ = dVar34 + dVar27;
    auVar21 = sqrtpd(auVar19,auVar23);
    auVar21 = divpd(_DAT_149934d80,auVar21);
    auVar24._0_8_ = auVar21._0_8_ * local_268;
    auVar24._8_8_ = auVar21._8_8_ * dStack_260;
    dVar41 = (double)((ulonglong)(local_278 * auVar21._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_));
    dVar43 = (double)((ulonglong)(dStack_270 * auVar21._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_));
    auVar17._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
    auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
    dStack_350 = 1.0;
    auVar2._8_8_ = 0x3ff0000000000000;
    auVar2._0_8_ = local_358;
    auVar52 = blendvpd(auVar2,auVar24,auVar17);
    dVar34 = 0.0;
  }
  *(double *)(param_1 + 0x350) = dVar41;
  *(double *)(param_1 + 0x358) = dVar43;
  *(undefined1 (*) [16])(param_1 + 0x360) = auVar52;
  *(double *)(param_1 + 0x370) = local_f8;
  *(double *)(param_1 + 0x378) = dStack_f0;
  *(double *)(param_1 + 0x380) = local_e8;
  *(double *)(param_1 + 0x388) = dVar34;
  *(double *)(param_1 + 0x390) = dVar53;
  *(double *)(param_1 + 0x398) = dVar54;
  *(double *)(param_1 + 0x3a0) = dVar46;
  *(double *)(param_1 + 0x3a8) = dVar47;
LAB_14461f78b:
  if ((local_d0 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1497de310(param_1);
  return;
}



// FUNCTION 14461f864 FUN_14461f864 body=26 status=ok
// SIG undefined FUN_14461f864(void)

void FUN_14461f864(undefined8 param_1)

{
  FUN_1497dccd2();
  FUN_1497de310(param_1);
  return;
}



// FUNCTION 14461f87e FUN_14461f87e body=69 status=ok
// SIG undefined FUN_14461f87e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14461f87e(void)

{
  _DAT_14cc269c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014461f8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc269d0,1);
  return;
}



// FUNCTION 14461f8c3 FUN_14461f8c3 body=69 status=ok
// SIG undefined FUN_14461f8c3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14461f8c3(void)

{
  _DAT_14cc269e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014461f905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc269e8,1);
  return;
}



// FUNCTION 14461f908 FUN_14461f908 body=974 status=ok
// SIG undefined FUN_14461f908(void)

void FUN_14461f908(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_288;
  undefined8 local_280;
  wchar_t *local_278;
  undefined1 *local_270;
  undefined1 *local_268;
  code **local_260;
  undefined1 *local_258;
  code *local_250;
  undefined4 local_23c;
  undefined8 local_238;
  int local_230;
  undefined8 local_228;
  int local_220;
  undefined1 local_218 [96];
  code *local_1b8 [13];
  longlong local_150;
  undefined1 local_148 [272];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (*(int *)(param_1 + 0x1198) != -1) {
    FUN_1497decd0(param_1);
  }
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (((lVar4 == 0) && (lVar4 = FUN_1448abda6(param_1), lVar4 == 0)) ||
     (lVar4 = FUN_1497df500(lVar4), lVar4 == 0)) goto LAB_14461f952;
  plVar6 = *(longlong **)(param_1 + 0x658);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar6 != (longlong *)0x0) != 0) goto LAB_14461fcbd;
    if (plVar6 == (longlong *)0x0) goto LAB_14461f952;
  }
  else if (DAT_14c950c29 == 1) {
LAB_14461fcbd:
    FUN_14689c22e(plVar6);
  }
  if (DAT_14cb06da8 == 0) {
    local_260 = local_1b8;
    local_1b8[0] = FUN_1449e2820;
    local_250 = FUN_14081d0ea;
    local_258 = &LAB_1464003b0;
    local_268 = &LAB_147d17bdf;
    local_270 = &LAB_1417edf22;
    local_278 = L"Engine";
    local_280 = 0;
    local_288 = 0x10000000;
    local_290 = 8;
    local_298 = CONCAT44(local_298._4_4_,0x588);
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if (((*(int *)(plVar6[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
      (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8)
       != DAT_14cb06da8 + 0x30)) ||
     (lVar5 = (**(code **)(*plVar6 + 0x308))(plVar6), *(int *)(lVar5 + 0x28) == 0))
  goto LAB_14461f952;
  lVar5 = (**(code **)(*plVar6 + 0x308))(plVar6);
  iVar1 = *(int *)(lVar5 + 0x38);
  if ((iVar1 == 0) || (iVar1 != *(int *)(lVar5 + 0x28))) goto LAB_14461f952;
  uVar2 = *(undefined8 *)(lVar5 + 0x30);
  uVar3 = *(undefined8 *)(lVar5 + 0x20);
  FUN_1497ded8c(param_1,local_218);
  plVar6 = *(longlong **)(param_1 + 0x658);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar6 != (longlong *)0x0) != 0) goto LAB_14461fcca;
    if (plVar6 != (longlong *)0x0) goto LAB_14461fa43;
LAB_14461fb74:
    plVar6 = (longlong *)0x0;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_14461fcca:
      FUN_14689c22e(plVar6);
    }
LAB_14461fa43:
    if (DAT_14cb06da8 == 0) {
      local_260 = local_1b8;
      local_1b8[0] = FUN_1449e2820;
      local_250 = FUN_14081d0ea;
      local_258 = &LAB_1464003b0;
      local_268 = &LAB_147d17bdf;
      local_270 = &LAB_1417edf22;
      local_278 = L"Engine";
      local_280 = 0;
      local_288 = 0x10000000;
      local_290 = 8;
      local_298 = CONCAT44(local_298._4_4_,0x588);
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(plVar6[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
        DAT_14cb06da8 + 0x30)) goto LAB_14461fb74;
  }
  local_298 = (**(code **)(*plVar6 + 0x370))(plVar6);
  local_238 = uVar2;
  local_230 = iVar1;
  local_228 = uVar3;
  local_220 = iVar1;
  FUN_1497df568(local_1b8,local_218);
  local_150 = param_1 + 0x1178;
  FUN_1497daf05(param_1,local_148);
  FUN_1497df7ca(local_1b8);
  FUN_1497de826(local_1b8,param_1,lVar4);
  FUN_1497e005e(lVar4 + 0xd0,&local_23c,local_1b8);
  *(undefined4 *)(param_1 + 0x1198) = local_23c;
  FUN_1497df99e(local_1b8);
LAB_14461f952:
  if ((local_38 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14461fce6 FUN_14461fce6 body=69 status=ok
// SIG undefined FUN_14461fce6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14461fce6(void)

{
  _DAT_14cc26a00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014461fd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc26a08,1);
  return;
}



// FUNCTION 14461fd2c FUN_14461fd2c body=75 status=ok
// SIG undefined FUN_14461fd2c(void)

void FUN_14461fd2c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1414c2314();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar2 + 0x28);
  FUN_1497dfcc4(param_1);
  return;
}



// FUNCTION 14461fd78 FUN_14461fd78 body=397 status=ok
// SIG undefined FUN_14461fd78(void)

void FUN_14461fd78(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x2c) == 0) {
LAB_14461fef4:
    lVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x28);
    lVar3 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         (((int)plVar4[2] != *(int *)(param_1 + 0x2c) || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)
          ))) goto LAB_14461fef4;
      lVar3 = *plVar4;
    }
  }
  LOCK();
  *(undefined1 *)(lVar3 + 0xf8) = 0;
  UNLOCK();
  uVar6 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x28);
    uVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x2c) ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) {
        uVar6 = 0;
      }
      else {
        uVar6 = *puVar5;
      }
    }
  }
  FUN_1497dfd4e(uVar6,&local_28);
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x28);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14461fe98;
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar5 != (undefined8 *)0x0) &&
       ((*(int *)(puVar5 + 2) == *(int *)(param_1 + 0x2c) &&
        ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
      uVar6 = *puVar5;
      goto LAB_14461fe98;
    }
  }
  uVar6 = 0;
LAB_14461fe98:
  local_30 = local_28;
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = *(int *)(local_28 + 1) + 1;
    UNLOCK();
  }
  FUN_1497dfa42(uVar6,&local_30,param_2);
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14461ff06 FUN_14461ff06 body=2107 status=ok
// SIG undefined FUN_14461ff06(void)

void FUN_14461ff06(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *_Src;
  undefined1 **ppuVar4;
  ulonglong uVar5;
  uint uVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  undefined4 local_d0;
  undefined1 **local_c8;
  undefined1 local_b1;
  undefined1 *local_b0;
  longlong local_a8;
  code *local_a0;
  undefined1 **local_98;
  int local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined4 local_80;
  undefined ***local_78;
  undefined **local_68;
  undefined1 *local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x2c) == 0) {
LAB_144620150:
    lVar9 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x28);
    lVar9 = 0;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
      plVar13 = (longlong *)
                ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if ((plVar13 == (longlong *)0x0) ||
         (((int)plVar13[2] != *(int *)(param_1 + 0x2c) ||
          ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_144620150;
      lVar9 = *plVar13;
    }
  }
  FUN_141551788(lVar9 + 0xd0);
  if (*(int *)(param_1 + 0x2c) == 0) {
LAB_144620157:
    lVar9 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x28);
    lVar9 = 0;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
      plVar13 = (longlong *)
                ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if ((plVar13 == (longlong *)0x0) ||
         (((int)plVar13[2] != *(int *)(param_1 + 0x2c) ||
          ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_144620157;
      lVar9 = *plVar13;
    }
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14be80560;
  local_60 = &LAB_1446221f2;
  local_88 = &LAB_1497e46a4;
  FUN_1497dfef0(lVar9 + 0xd0,&local_88);
  if (local_88 != (undefined1 *)0x0) {
    pppuVar14 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar14 = &local_68;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  uVar6 = *(uint *)(lVar9 + 0x108);
  local_b0 = &local_b1;
  local_98 = &local_b0;
  local_88 = (undefined1 *)0x0;
  local_80 = 0;
  local_a0 = FUN_144622202;
  local_d0 = 0;
  local_c8 = &local_88;
  local_a8 = lVar9 + 0xd0;
  FUN_1401f8d10(L"ParallelFor Task",(uint)(uVar6 != (uVar6 / 0x14) * 0x14) + uVar6 / 0x14,1,
                &local_a0);
  local_a0 = (code *)CONCAT44(local_a0._4_4_,DAT_14c75b13c + 1);
  local_98 = (undefined1 **)0x0;
  local_90 = *(int *)(lVar9 + 0xc0);
  lVar17 = (longlong)local_90;
  _Src = *(void **)(lVar9 + 0xb8);
  if (lVar17 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1497e4c08(&local_98,local_90);
    memcpy(local_98,_Src,lVar17 << 3);
  }
  lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar18 = *(int *)(lVar17 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar18 != 2) {
      if (iVar18 != 1) goto LAB_144620112;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_144620117;
      goto LAB_144620179;
    }
LAB_144620117:
    FUN_144620ad4(&DAT_14ca85100,(ulonglong)local_a0 & 0xffffffff,&local_98);
  }
  else {
LAB_144620112:
    if (iVar18 == 0x10) goto LAB_144620117;
LAB_144620179:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar18 = *(int *)(lVar17 + 0xc60), iVar18 == 2))
      goto LAB_144620117;
      if (iVar18 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_144620117;
      }
    }
    ppuVar4 = local_98;
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_1446203c8;
      while( true ) {
        uVar6 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar6 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar6 | 1;
          __tlregdtor(&LAB_1446218d0);
        }
        lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar17 + 0x310);
        *(undefined8 *)(lVar17 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        FUN_140217a48(puVar2);
        puVar11 = (uint *)*puVar2;
LAB_1446203c8:
        puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x18);
        uVar6 = puVar11[0x12];
        if (puVar15 <= puVar11 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar3 = *puVar11;
          *puVar11 = *puVar11 + uVar6 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar6) != 0xffffffff) break;
          puVar11 = (uint *)*puVar2;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar16 + 0x18);
          uVar6 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar6 = 1;
            goto LAB_144620448;
          }
        }
      }
      uVar6 = uVar6 + 1;
LAB_144620448:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar6;
      FUN_1447247dc(puVar16,0);
      ppuVar4 = local_98;
      *puVar16 = &PTR_FUN_14be80620;
      *(undefined4 *)(puVar16 + 0x15) = local_a0._0_4_;
      puVar16[0x16] = 0;
      lVar17 = (longlong)local_90;
      *(int *)(puVar16 + 0x17) = local_90;
      if (lVar17 == 0) {
        *(undefined4 *)((longlong)puVar16 + 0xbc) = 0;
      }
      else {
        FUN_1497e4c08(puVar16 + 0x16,local_90);
        memcpy((void *)puVar16[0x16],ppuVar4,lVar17 << 3);
      }
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar6 = DAT_14c7585c8 >> 10 & 3;
        iVar18 = 0;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar6 < 2) {
          uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar6];
          iVar18 = 0;
        }
        else {
          uVar19 = 2;
        }
      }
      else {
        iVar18 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar19 = 5;
      }
      if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
      }
      puVar16[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar16[9] = puVar16;
      puVar16[10] = puVar16;
      lVar17 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar17 == 0) {
        uVar5 = 1;
        if ((char)uVar19 != '\x06') {
          uVar5 = uVar19;
        }
        uVar19 = uVar5;
        uVar12 = 0;
      }
      else {
        if ((char)uVar19 == '\x06') {
          uVar19 = *(ulonglong *)(lVar17 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar17 + 0x30);
      }
      puVar16[0xf] = uVar12;
      puVar16[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar16 + 0x1c) = iVar18;
      if (puVar16 == (undefined8 *)0x0) {
        local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        UNLOCK();
        local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
        FUN_1447439e4(puVar16);
        LOCK();
        piVar1 = (int *)(puVar16 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar16)(puVar16,1);
        }
      }
    }
    else {
      local_88 = (undefined1 *)0x0;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14be80600;
      local_60 = (undefined1 *)CONCAT44(local_60._4_4_,local_a0._0_4_);
      local_58 = (void *)0x0;
      lVar17 = (longlong)local_90;
      local_50 = local_90;
      if (lVar17 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1497e4c08(&local_58,local_90);
        memcpy(local_58,ppuVar4,lVar17 << 3);
      }
      local_88 = &LAB_1446224e8;
      local_d8 = &local_88;
      FUN_14005a792(&DAT_14ca9a440,L"SkelMeshObjectUpdateDataCommand",&DAT_14cc26d08);
      if (local_88 != (undefined1 *)0x0) {
        pppuVar14 = &local_68;
        if (local_78 != (undefined ***)0x0) {
          pppuVar14 = local_78;
        }
        (*(code *)(*pppuVar14)[2])(pppuVar14);
      }
    }
  }
  if (local_98 != (undefined1 **)0x0) {
    FUN_1400020a8();
  }
  iVar18 = *(int *)(lVar9 + 0xc0);
  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar18);
  }
  *(undefined4 *)(lVar9 + 0xc0) = 0;
  if (*(int *)(lVar9 + 0xc4) != iVar18) {
    FUN_1497e485a(lVar9 + 0xb8);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar6 = *(uint *)(param_1 + 0x28);
    lVar9 = 0;
    if (((int)uVar6 < 0) || (DAT_14c9647dc <= (int)uVar6)) goto LAB_1446202de;
    plVar13 = (longlong *)
              ((ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
    if ((plVar13 != (longlong *)0x0) &&
       (((int)plVar13[2] == *(int *)(param_1 + 0x2c) && ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)
        ))) {
      lVar9 = *plVar13;
      goto LAB_1446202de;
    }
  }
  lVar9 = 0;
LAB_1446202de:
  LOCK();
  *(undefined1 *)(lVar9 + 0xf8) = 1;
  UNLOCK();
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144620762 FUN_144620762 body=877 status=ok
// SIG undefined FUN_144620762(void)

longlong * FUN_144620762(longlong *param_1,longlong param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar7 = 0;
  do {
    uVar3 = (&DAT_14be7fbf8)[uVar7];
    uVar7 = (ulonglong)((int)uVar7 + 1);
  } while (uVar3 < param_3);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FVegetationBoneBufferPoolPolicy";
  local_50 = 0;
  uStack_48 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_98 = (undefined1)uVar3;
  uStack_97 = (undefined1)(uVar3 >> 8);
  uStack_96 = (undefined1)(uVar3 >> 0x10);
  uStack_95 = (undefined1)(uVar3 >> 0x18);
  uStack_94 = 0;
  uStack_90 = 0x4102;
  if (uVar3 == 0) {
    FUN_14570b4be(param_2,&local_88,0x4102,0);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  lVar8 = local_a0;
  if (&local_a0 == param_1) {
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_a0 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar8;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar9) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar9 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar9) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
    lVar8 = *param_1;
  }
  else {
    *param_1 = local_a0;
  }
  plVar6 = param_1 + 1;
  if ((lVar8 == 0) || ((*(byte *)(lVar8 + 0x28) & 0x10) == 0)) {
    uStack_97 = 1;
    uStack_96 = 1;
  }
  else {
    uStack_97 = 0;
    uStack_96 = 4;
  }
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_95 = 0;
  local_98 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2,lVar8);
  if (plVar6 != &local_a0) {
    lVar8 = *plVar6;
    *plVar6 = local_a0;
    local_a0 = 0;
    if (lVar8 == 0) goto LAB_144620a3d;
    LOCK();
    puVar1 = (uint *)(lVar8 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar8 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar8 + 0xd);
        plVar4 = (longlong *)FUN_14001cc68(0x10,8);
        plVar4[1] = lVar8;
        plVar6 = DAT_14ca843c0;
        plVar5 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar4 = (longlong)plVar6;
            LOCK();
            bVar9 = plVar6 != DAT_14ca843c0;
            plVar5 = plVar4;
            if (bVar9) {
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar5;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar4 = (longlong)plVar5;
            LOCK();
            bVar9 = plVar5 != DAT_14ca843c8;
            plVar6 = plVar4;
            if (bVar9) {
              plVar5 = DAT_14ca843c8;
              plVar6 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar6;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar8 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_a0 + 0xd);
        plVar4 = (longlong *)FUN_14001cc68(0x10,8);
        plVar4[1] = lVar8;
        plVar6 = DAT_14ca843c0;
        plVar5 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar4 = (longlong)plVar6;
            LOCK();
            bVar9 = plVar6 != DAT_14ca843c0;
            plVar5 = plVar4;
            if (bVar9) {
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar5;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar4 = (longlong)plVar5;
            LOCK();
            bVar9 = plVar5 != DAT_14ca843c8;
            plVar6 = plVar4;
            if (bVar9) {
              plVar5 = DAT_14ca843c8;
              plVar6 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar6;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
LAB_144620a3d:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144620ad4 FUN_144620ad4 body=2212 status=ok
// SIG undefined FUN_144620ad4(void)

void FUN_144620ad4(longlong param_1,ulonglong param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_158 [32];
  uint local_138;
  undefined4 local_130;
  longlong *local_128;
  longlong local_120;
  longlong *local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  ulonglong local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  code *local_88;
  longlong **local_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_98 = 0;
  uStack_90 = 0;
  uVar6 = *(uint *)(param_3 + 1);
  local_120 = param_1;
  local_118 = param_3;
  if ((int)uVar6 < 1) {
    uVar13 = 0;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
  }
  else {
    uStack_90 = (ulonglong)uVar6;
    FUN_144622296(&local_98);
    param_3 = local_118;
    FUN_14462227f(local_98,uVar6);
    uVar13 = (ulonglong)*(uint *)(param_3 + 1);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  if (0 < (int)uVar13) {
    lVar16 = 0;
    local_f8 = param_2 & 0xffffffff;
    do {
      local_110 = *(longlong *)(*param_3 + lVar16 * 8);
      local_f0 = *(longlong *)(local_110 + 0x230);
      local_100 = lVar16;
      if ((*(int *)(local_f0 + 0x20) != 0) &&
         (lVar16 = *(longlong *)**(undefined8 **)(local_110 + 0x40), 0 < *(int *)(lVar16 + 0x18))) {
        lVar14 = 0;
        local_108 = lVar16;
        do {
          lVar7 = *(longlong *)(lVar16 + 0x10);
          lVar15 = *(longlong *)(*(longlong *)(local_f0 + 0x18) + lVar14 * 8);
          *(ulonglong *)(lVar15 + 0x140) = local_f8;
          iVar12 = *(int *)(lVar7 + 0x40 + lVar14 * 0xf8);
          if (iVar12 == 0) {
            plVar17 = (longlong *)0x0;
            uVar8 = 0;
          }
          else {
            uVar6 = iVar12 * 0x30;
            uVar13 = 0;
            do {
              puVar1 = &DAT_14be7fbf8 + uVar13;
              uVar13 = (ulonglong)((int)uVar13 + 1);
            } while (*puVar1 < uVar6);
            lVar7 = (ulonglong)*(uint *)(lVar15 + 0x168) * 0x10;
            lVar16 = lVar15 + lVar7;
            plVar17 = (longlong *)(lVar16 + 0x148);
            plVar11 = (longlong *)*plVar17;
            if ((plVar11 == (longlong *)0x0) || (*(longlong *)(lVar15 + 0x150 + lVar7) == 0)) {
LAB_144620cc8:
              if (DAT_14cc26d00 == -1) {
                local_78 = 0;
                uStack_70 = 0;
              }
              else {
                FUN_1497e4f12(&local_78,local_120,uVar6);
              }
              if (plVar17 == &local_78) {
LAB_144620f9f:
                uVar13 = uStack_70;
                if (uStack_70 != 0) {
                  LOCK();
                  puVar1 = (uint *)(uStack_70 + 8);
                  uVar2 = *puVar1;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  if ((uVar2 & 0x3fffffff) == 1) {
                    puVar1 = (uint *)(uStack_70 + 8);
                    LOCK();
                    uVar2 = *puVar1;
                    *puVar1 = *puVar1 | 0x40000000;
                    UNLOCK();
                    if ((uVar2 >> 0x1e & 1) == 0) {
                      bVar4 = *(byte *)(uStack_70 + 0xd);
                      plVar9 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar9[1] = uVar13;
                      plVar11 = DAT_14ca843c0;
                      plVar10 = DAT_14ca843c8;
                      if ((bVar4 & 2) == 0) {
                        do {
                          *plVar9 = (longlong)plVar11;
                          LOCK();
                          bVar19 = plVar11 != DAT_14ca843c0;
                          plVar10 = plVar9;
                          if (bVar19) {
                            plVar11 = DAT_14ca843c0;
                            plVar10 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar10;
                          UNLOCK();
                        } while (bVar19);
                      }
                      else {
                        do {
                          *plVar9 = (longlong)plVar10;
                          LOCK();
                          bVar19 = plVar10 != DAT_14ca843c8;
                          plVar11 = plVar9;
                          if (bVar19) {
                            plVar10 = DAT_14ca843c8;
                            plVar11 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar11;
                          UNLOCK();
                        } while (bVar19);
                      }
                    }
                  }
                }
              }
              else {
                lVar7 = *plVar17;
                *plVar17 = local_78;
                local_78 = 0;
                if (lVar7 != 0) {
                  LOCK();
                  puVar1 = (uint *)(lVar7 + 8);
                  uVar2 = *puVar1;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  if ((uVar2 & 0x3fffffff) == 1) {
                    puVar1 = (uint *)(lVar7 + 8);
                    LOCK();
                    uVar2 = *puVar1;
                    *puVar1 = *puVar1 | 0x40000000;
                    UNLOCK();
                    if ((uVar2 >> 0x1e & 1) == 0) {
                      bVar4 = *(byte *)(lVar7 + 0xd);
                      plVar9 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar9[1] = lVar7;
                      plVar11 = DAT_14ca843c0;
                      plVar10 = DAT_14ca843c8;
                      if ((bVar4 & 2) == 0) {
                        do {
                          *plVar9 = (longlong)plVar11;
                          LOCK();
                          bVar19 = plVar11 != DAT_14ca843c0;
                          plVar10 = plVar9;
                          if (bVar19) {
                            plVar11 = DAT_14ca843c0;
                            plVar10 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar10;
                          UNLOCK();
                        } while (bVar19);
                      }
                      else {
                        do {
                          *plVar9 = (longlong)plVar10;
                          LOCK();
                          bVar19 = plVar10 != DAT_14ca843c8;
                          plVar11 = plVar9;
                          if (bVar19) {
                            plVar10 = DAT_14ca843c8;
                            plVar11 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar11;
                          UNLOCK();
                        } while (bVar19);
                      }
                    }
                  }
                }
                lVar7 = *(longlong *)(lVar16 + 0x150);
                *(ulonglong *)(lVar16 + 0x150) = uStack_70;
                uStack_70 = 0;
                if (lVar7 != 0) {
                  LOCK();
                  puVar1 = (uint *)(lVar7 + 8);
                  uVar2 = *puVar1;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  if ((uVar2 & 0x3fffffff) == 1) {
                    puVar1 = (uint *)(lVar7 + 8);
                    LOCK();
                    uVar2 = *puVar1;
                    *puVar1 = *puVar1 | 0x40000000;
                    UNLOCK();
                    if ((uVar2 >> 0x1e & 1) == 0) {
                      bVar4 = *(byte *)(lVar7 + 0xd);
                      plVar9 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar9[1] = lVar7;
                      plVar11 = DAT_14ca843c0;
                      plVar10 = DAT_14ca843c8;
                      if ((bVar4 & 2) == 0) {
                        do {
                          *plVar9 = (longlong)plVar11;
                          LOCK();
                          bVar19 = plVar11 != DAT_14ca843c0;
                          plVar10 = plVar9;
                          if (bVar19) {
                            plVar11 = DAT_14ca843c0;
                            plVar10 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar10;
                          UNLOCK();
                        } while (bVar19);
                      }
                      else {
                        do {
                          *plVar9 = (longlong)plVar10;
                          LOCK();
                          bVar19 = plVar10 != DAT_14ca843c8;
                          plVar11 = plVar9;
                          if (bVar19) {
                            plVar10 = DAT_14ca843c8;
                            plVar11 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar11;
                          UNLOCK();
                        } while (bVar19);
                      }
                    }
                  }
                  goto LAB_144620f9f;
                }
              }
              lVar16 = local_78;
              if (local_78 != 0) {
                LOCK();
                puVar1 = (uint *)(local_78 + 8);
                uVar2 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar2 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(local_78 + 8);
                  LOCK();
                  uVar2 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar2 >> 0x1e & 1) == 0) {
                    bVar4 = *(byte *)(local_78 + 0xd);
                    plVar9 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar9[1] = lVar16;
                    plVar11 = DAT_14ca843c0;
                    plVar10 = DAT_14ca843c8;
                    if ((bVar4 & 2) == 0) {
                      do {
                        *plVar9 = (longlong)plVar11;
                        LOCK();
                        bVar19 = plVar11 != DAT_14ca843c0;
                        plVar10 = plVar9;
                        if (bVar19) {
                          plVar11 = DAT_14ca843c0;
                          plVar10 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar10;
                        UNLOCK();
                      } while (bVar19);
                    }
                    else {
                      do {
                        *plVar9 = (longlong)plVar10;
                        LOCK();
                        bVar19 = plVar10 != DAT_14ca843c8;
                        plVar11 = plVar9;
                        if (bVar19) {
                          plVar10 = DAT_14ca843c8;
                          plVar11 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar11;
                        UNLOCK();
                      } while (bVar19);
                    }
                  }
                }
              }
              plVar11 = (longlong *)*plVar17;
            }
            else if (*puVar1 != *(uint *)(plVar11 + 4)) {
              LOCK();
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              UNLOCK();
              local_e0 = *(longlong **)(lVar16 + 0x150);
              if (local_e0 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)local_e0 + 8) = *(int *)((longlong)local_e0 + 8) + 1;
                UNLOCK();
              }
              local_e8 = plVar11;
              if (DAT_14cc26d00 != -1) {
                FUN_1497e4df4(&local_e8);
              }
              plVar11 = local_e0;
              if (local_e0 != (longlong *)0x0) {
                LOCK();
                puVar1 = (uint *)((longlong)local_e0 + 8);
                uVar2 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar2 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)((longlong)local_e0 + 8);
                  LOCK();
                  uVar2 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar2 >> 0x1e & 1) == 0) {
                    bVar4 = *(byte *)((longlong)local_e0 + 0xd);
                    plVar9 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar9[1] = (longlong)plVar11;
                    plVar11 = DAT_14ca843c0;
                    plVar10 = DAT_14ca843c8;
                    if ((bVar4 & 2) == 0) {
                      do {
                        *plVar9 = (longlong)plVar11;
                        LOCK();
                        bVar19 = plVar11 != DAT_14ca843c0;
                        plVar10 = plVar9;
                        if (bVar19) {
                          plVar11 = DAT_14ca843c0;
                          plVar10 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar10;
                        UNLOCK();
                      } while (bVar19);
                    }
                    else {
                      do {
                        *plVar9 = (longlong)plVar10;
                        LOCK();
                        bVar19 = plVar10 != DAT_14ca843c8;
                        plVar11 = plVar9;
                        if (bVar19) {
                          plVar10 = DAT_14ca843c8;
                          plVar11 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar11;
                        UNLOCK();
                      } while (bVar19);
                    }
                  }
                }
              }
              plVar11 = local_e8;
              if (local_e8 != (longlong *)0x0) {
                LOCK();
                puVar1 = (uint *)(local_e8 + 1);
                uVar2 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar2 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(local_e8 + 1);
                  LOCK();
                  uVar2 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar2 >> 0x1e & 1) == 0) {
                    bVar4 = *(byte *)((longlong)local_e8 + 0xd);
                    plVar9 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar9[1] = (longlong)plVar11;
                    plVar11 = DAT_14ca843c0;
                    plVar10 = DAT_14ca843c8;
                    if ((bVar4 & 2) == 0) {
                      do {
                        *plVar9 = (longlong)plVar11;
                        LOCK();
                        bVar19 = plVar11 != DAT_14ca843c0;
                        plVar10 = plVar9;
                        if (bVar19) {
                          plVar11 = DAT_14ca843c0;
                          plVar10 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar10;
                        UNLOCK();
                      } while (bVar19);
                    }
                    else {
                      do {
                        *plVar9 = (longlong)plVar10;
                        LOCK();
                        bVar19 = plVar10 != DAT_14ca843c8;
                        plVar11 = plVar9;
                        if (bVar19) {
                          plVar10 = DAT_14ca843c8;
                          plVar11 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar11;
                        UNLOCK();
                      } while (bVar19);
                    }
                  }
                }
              }
              goto LAB_144620cc8;
            }
            cVar3 = *(char *)(local_120 + 0x69);
            if (cVar3 == '\0') {
              FUN_14002049c(local_120,1);
            }
            local_130 = 1;
            local_138 = uVar6;
            uVar8 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,local_120,plVar11,0);
            lVar16 = local_108;
            if (cVar3 == '\0') {
              FUN_14002049c();
              lVar16 = local_108;
            }
          }
          lVar7 = (longlong)(int)uStack_c0;
          uVar6 = (int)uStack_c0 + 1;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar6);
          if (uStack_c0._4_4_ < uVar6) {
            FUN_1497e4c62();
          }
          *(longlong **)(local_c8 + lVar7 * 8) = plVar17;
          lVar7 = (longlong)(int)uStack_a0;
          uVar6 = (int)uStack_a0 + 1;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar6);
          if (uStack_a0._4_4_ < uVar6) {
            FUN_1497e4ce8();
          }
          *(undefined8 *)(local_a8 + lVar7 * 8) = uVar8;
          lVar7 = (longlong)(int)uStack_b0;
          uVar6 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar6);
          if (uStack_b0._4_4_ < uVar6) {
            FUN_1497e4d6e();
          }
          *(longlong *)(local_b8 + lVar7 * 8) = lVar15 + 0x130;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *(int *)(lVar16 + 0x18));
      }
      if (local_100 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(local_98 + -4 + local_100 * 8) + *(int *)(local_98 + -8 + local_100 * 8);
      }
      uVar5 = *(undefined4 *)(*(longlong *)**(undefined8 **)(local_110 + 0x40) + 0x18);
      *(int *)(local_98 + local_100 * 8) = iVar12;
      *(undefined4 *)(local_98 + 4 + local_100 * 8) = uVar5;
      lVar16 = local_100 + 1;
      uVar13 = (ulonglong)(int)local_118[1];
      param_3 = local_118;
    } while (lVar16 < (longlong)uVar13);
  }
  local_80 = &local_e8;
  local_e0 = &local_98;
  local_d8 = &local_a8;
  local_d0 = &local_b8;
  local_128 = &local_78;
  local_78 = 0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  local_88 = FUN_1446223f0;
  local_130 = 0;
  local_e8 = param_3;
  FUN_1401f8d10(L"ParallelFor Task",uVar13,1);
  lVar16 = local_120;
  iVar12 = (int)param_3[1];
  if (0 < iVar12) {
    lVar14 = 0;
    do {
      lVar7 = (longlong)*(int *)(local_98 + 4 + lVar14 * 8);
      if (0 < lVar7) {
        lVar15 = (longlong)*(int *)(local_98 + lVar14 * 8) * 8 + local_c8;
        lVar18 = 0;
        do {
          FUN_1497e08fa(lVar16,*(undefined8 *)(lVar15 + lVar18 * 8));
          lVar18 = lVar18 + 1;
        } while (lVar7 != lVar18);
        iVar12 = (int)param_3[1];
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar12);
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14462137a FUN_14462137a body=580 status=ok
// SIG undefined FUN_14462137a(void)

ulonglong FUN_14462137a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 local_89;
  code *local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_89 = 0;
  plVar6 = &local_a8;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1497db740(param_2 + 0x48,param_1 + 0x30,plVar6);
  if (0 < (int)uStack_a0) {
    iVar1 = *(int *)(param_1 + 0x78);
    if (0 < (longlong)iVar1) {
      plVar6 = (longlong *)0x0;
      lVar8 = 0;
      do {
        if (lVar8 < *(int *)(param_1 + 0x78)) {
          local_88 = (code *)0x0;
          local_78 = (longlong *)0x0;
          local_78 = (longlong *)FUN_14001cc68(0x28,8);
          *local_78 = (longlong)&PTR_FUN_14be80650;
          local_78[1] = (longlong)&local_89;
          local_78[2] = param_1;
          local_78[3] = param_2;
          local_78[4] = (longlong)&local_a8;
          if (local_78 + 1 != (longlong *)0x0) {
            local_88 = FUN_1446236a8;
          }
          pcVar3 = local_88;
          lVar2 = *(longlong *)(param_1 + 0x70);
          plVar5 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar5 = local_68;
          }
          uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
          (*pcVar3)(uVar4,lVar2 + (longlong)plVar6);
          if (local_88 != (code *)0x0) {
            plVar5 = local_78;
            if (local_78 == (longlong *)0x0) {
              plVar5 = local_68;
            }
            (**(code **)(*plVar5 + 0x10))();
          }
        }
        lVar8 = lVar8 + 1;
        plVar6 = (longlong *)((longlong)plVar6 + 0x14);
      } while ((longlong *)((longlong)iVar1 * 0x14) != plVar6);
    }
    iVar1 = *(int *)(param_1 + 0x98);
    if (0 < (longlong)iVar1) {
      plVar6 = (longlong *)0x0;
      lVar8 = 0;
      do {
        if (lVar8 < *(int *)(param_1 + 0x98)) {
          local_88 = (code *)0x0;
          local_78 = (longlong *)0x0;
          local_78 = (longlong *)FUN_14001cc68(0x28,8);
          *local_78 = (longlong)&PTR_FUN_14be80650;
          local_78[1] = (longlong)&local_89;
          local_78[2] = param_1;
          local_78[3] = param_2;
          local_78[4] = (longlong)&local_a8;
          if (local_78 + 1 != (longlong *)0x0) {
            local_88 = FUN_144623758;
          }
          pcVar3 = local_88;
          lVar2 = *(longlong *)(param_1 + 0x90);
          plVar5 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar5 = local_68;
          }
          uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
          (*pcVar3)(uVar4,lVar2 + (longlong)plVar6);
          if (local_88 != (code *)0x0) {
            plVar5 = local_78;
            if (local_78 == (longlong *)0x0) {
              plVar5 = local_68;
            }
            (**(code **)(*plVar5 + 0x10))();
          }
        }
        lVar8 = lVar8 + 1;
        plVar6 = plVar6 + 4;
      } while ((longlong *)((longlong)iVar1 * 0x20) != plVar6);
    }
  }
  uVar7 = CONCAT71((int7)((ulonglong)plVar6 >> 8),local_89);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1446215c0 FUN_1446215c0 body=679 status=ok
// SIG undefined FUN_1446215c0(void)

void FUN_1446215c0(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 *local_e8;
  undefined8 *local_e0;
  code *local_d8 [2];
  undefined8 local_c8;
  code *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar4 = FUN_1497de5ce(param_4);
  if (lVar4 != 0) {
    FUN_141551788(param_1);
    local_e8 = (undefined8 *)*param_2;
    if (local_e8 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_e8 + 1) = *(int *)(local_e8 + 1) + 1;
      UNLOCK();
    }
    plVar5 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14be806b0;
    FUN_1497e7258(plVar5 + 2);
    *(undefined1 *)(plVar5 + 4) = 0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    *(undefined1 *)(plVar5 + 4) = 1;
    local_98 = (code *)plVar5[2];
    local_90 = (longlong *)plVar5[3];
    if (local_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_90 + 1) = (int)local_90[1] + 1;
      UNLOCK();
    }
    FUN_1497e2bd8(param_1 + 0x1a0,&local_98);
    plVar6 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_90 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_98 = (code *)0x0;
    local_88 = (longlong *)FUN_14001cc68(0x30,8);
    *local_88 = (longlong)&PTR_FUN_14be806f0;
    local_88[1] = param_1;
    local_88[2] = (longlong)(plVar5 + 2);
    local_88[3] = (longlong)plVar5;
    local_88[4] = lVar4;
    *(undefined4 *)(local_88 + 5) = param_3;
    if (local_88 + 1 == (longlong *)0x0) {
      local_d8[0] = (code *)0x0;
      local_c8 = 0;
    }
    else {
      local_98 = FUN_144623f6a;
      local_d8[0] = FUN_144623f6a;
      local_c8 = 0;
      plVar6 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar6 = local_78;
      }
      (**(code **)*plVar6)(plVar6);
    }
    local_f8 = 0x6ff;
    FUN_140e6df44(&local_e0,local_d8);
    if (local_e0 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_e0 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_e0)(local_e0,1);
      }
    }
    if (local_98 != (code *)0x0) {
      plVar6 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar6 = local_78;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (local_e8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_e8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_e8)(local_e8,1);
      }
    }
  }
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144621868 FUN_144621868 body=48 status=ok
// SIG undefined FUN_144621868(void)

longlong FUN_144621868(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x650;
  FUN_1403c5294(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144621934 FUN_144621934 body=312 status=ok
// SIG undefined FUN_144621934(void)

void FUN_144621934(longlong param_1,int *param_2)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pfVar4 = *(float **)(param_1 + 8);
  lVar5 = *(longlong *)(param_1 + 0x10);
  lVar6 = *(longlong *)(lVar5 + 0x28);
  lVar9 = (longlong)*param_2 * 0x34;
  fVar2 = *(float *)(lVar6 + 0x18 + lVar9);
  if (fVar2 < pfVar4[3] || fVar2 == pfVar4[3]) {
    lVar1 = lVar6 + lVar9;
    if ((((*pfVar4 < *(float *)(lVar1 + 0x24) || *pfVar4 == *(float *)(lVar1 + 0x24)) &&
         (*(float *)(lVar1 + 0x1c) < pfVar4[4] || *(float *)(lVar1 + 0x1c) == pfVar4[4])) &&
        (pfVar4[1] < *(float *)(lVar1 + 0x28) || pfVar4[1] == *(float *)(lVar1 + 0x28))) &&
       ((*(float *)(lVar1 + 0x20) < pfVar4[5] || *(float *)(lVar1 + 0x20) == pfVar4[5] &&
        (pfVar4[2] < *(float *)(lVar1 + 0x2c) || pfVar4[2] == *(float *)(lVar1 + 0x2c))))) {
      if (*(int *)(lVar6 + 0xc + lVar9) != -1) {
        local_2c = *(undefined4 *)(lVar6 + 8 + lVar9);
        plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x38);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7,&local_2c);
          local_2c = *(undefined4 *)(*(longlong *)(lVar5 + 0x28) + 0xc + lVar9);
          plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x38);
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x10))(plVar7,&local_2c);
            goto LAB_144621a3b;
          }
        }
                    /* WARNING: Subroutine does not return */
        std::_Xbad_function_call();
      }
      plVar7 = (longlong *)(*(longlong **)(param_1 + 0x18))[1];
      uVar8 = *(undefined8 *)(*(longlong *)(**(longlong **)(param_1 + 0x18) + 0x28) + lVar9);
      iVar3 = (int)plVar7[1];
      *(uint *)(plVar7 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)plVar7 + 0xc) < iVar3 + 1U) {
        FUN_1497e327a(plVar7,iVar3);
      }
      *(undefined8 *)(*plVar7 + (longlong)iVar3 * 8) = uVar8;
    }
  }
LAB_144621a3b:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144621a76 FUN_144621a76 body=9 status=ok
// SIG undefined FUN_144621a76(void)

void FUN_144621a76(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 144621a86 FUN_144621a86 body=123 status=ok
// SIG undefined FUN_144621a86(void)

void FUN_144621a86(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*param_1 + 0x8a8);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar2 + 0x240);
    if (lVar1 != 0) {
      FUN_1497e0703(*param_1,lVar1);
      FUN_140491812(lVar1 + 0x10,param_2 + 0x110);
      FUN_140491812(lVar1 + 0x30,param_2 + 0x110);
      *(undefined1 *)(lVar2 + 0x38) = 1;
      lVar2 = *(longlong *)(*param_1 + 0x8a8);
    }
  }
  FUN_1497dffe0(param_1[1],lVar2);
  return;
}



// FUNCTION 144621b20 FUN_144621b20 body=12 status=ok
// SIG undefined FUN_144621b20(void)

void FUN_144621b20(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144621b29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144621b2c FUN_144621b2c body=29 status=ok
// SIG undefined FUN_144621b2c(void)

undefined8 FUN_144621b2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144621b76 FUN_144621b76 body=12 status=ok
// SIG undefined FUN_144621b76(void)

void FUN_144621b76(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144621b7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144621b82 FUN_144621b82 body=29 status=ok
// SIG undefined FUN_144621b82(void)

undefined8 FUN_144621b82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144621ba0 FUN_144621ba0 body=200 status=ok
// SIG undefined FUN_144621ba0(void)

void FUN_144621ba0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_60;
  code *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  char local_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  if (*(char *)(param_2 + 0x128) == '\x01') {
    *(byte *)(lVar2 + 0x8a1) = *(byte *)(lVar2 + 0x8a1) | 1;
    FUN_1448ee24a(lVar2);
    *(byte *)(lVar2 + 0x89e) = *(byte *)(lVar2 + 0x89e) | 1;
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  if ((bool)*(char *)(lVar2 + 0x1194) != (*(char *)(lVar2 + 0x4b) != '\0')) {
    local_48 = 0;
    local_38 = &PTR_LAB_14be80450;
    local_58[0] = FUN_144621f04;
    local_68 = 1;
    local_30 = *(char *)(lVar2 + 0x1194);
    local_28 = lVar2;
    FUN_14014aede(&local_60,local_58,param_3,0);
    if (local_60 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_60 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_60)(local_60,1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144621c88 FUN_144621c88 body=12 status=ok
// SIG undefined FUN_144621c88(void)

void FUN_144621c88(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144621c91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144621c94 FUN_144621c94 body=29 status=ok
// SIG undefined FUN_144621c94(void)

undefined8 FUN_144621c94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144621cb2 FUN_144621cb2 body=441 status=ok
// SIG undefined FUN_144621cb2(void)

void FUN_144621cb2(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = param_1[1];
  FUN_1497ded8c(*param_1,&local_e8);
  fStack_60 = (float)local_98;
  fStack_5c = (float)dStack_90;
  iVar4 = *(int *)(*param_1 + 0x1198);
  local_68 = (float)local_a8;
  fStack_64 = (float)dStack_a0;
  fStack_6c = (float)dStack_b0;
  fStack_80 = (float)local_d8;
  fStack_7c = (float)dStack_d0;
  local_88 = (float)local_e8;
  fStack_84 = (float)dStack_e0;
  lVar7 = *(longlong *)(lVar5 + 0x100);
  lVar8 = (longlong)iVar4 * 0x180;
  local_78 = (float)local_c8;
  fStack_74 = (float)dStack_c0;
  fStack_70 = (float)local_b8;
  FUN_1497e16d8(lVar7 + lVar8);
  fVar1 = *(float *)(lVar7 + 0x58 + lVar8);
  fVar2 = *(float *)(lVar7 + 0x5c + lVar8);
  fVar3 = *(float *)(lVar7 + 0x60 + lVar8);
  if (1e-08 < SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x1b8));
    if ((longlong)*(int *)(lVar5 + 0x1e8) != 0) {
      lVar7 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar5 + 0x1e0) + lVar7) == iVar4) goto LAB_144621ddf;
        lVar7 = lVar7 + 4;
      } while ((longlong)*(int *)(lVar5 + 0x1e8) * 4 != lVar7);
    }
    FUN_1497e1f1c(lVar5 + 0xd0,iVar4);
LAB_144621ddf:
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x138));
    if ((longlong)*(int *)(lVar5 + 0x168) != 0) {
      piVar6 = *(int **)(lVar5 + 0x160);
      lVar7 = (longlong)*(int *)(lVar5 + 0x168) * 0x14;
      do {
        if (*piVar6 == iVar4) goto LAB_144621e1a;
        piVar6 = piVar6 + 5;
        lVar7 = lVar7 + -0x14;
      } while (lVar7 != 0);
    }
    piVar6 = (int *)0x0;
LAB_144621e1a:
    *(ulonglong *)(piVar6 + 1) = CONCAT44((float)dStack_c0,(float)local_c8);
    piVar6[3] = (int)(float)local_b8;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x138));
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x1b8));
  }
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144621e8a FUN_144621e8a body=12 status=ok
// SIG undefined FUN_144621e8a(void)

void FUN_144621e8a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144621e93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144621e96 FUN_144621e96 body=29 status=ok
// SIG undefined FUN_144621e96(void)

undefined8 FUN_144621e96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144621eda FUN_144621eda body=12 status=ok
// SIG undefined FUN_144621eda(void)

void FUN_144621eda(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144621ee3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144621ee6 FUN_144621ee6 body=29 status=ok
// SIG undefined FUN_144621ee6(void)

undefined8 FUN_144621ee6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144621f04 FUN_144621f04 body=111 status=ok
// SIG undefined FUN_144621f04(void)

void FUN_144621f04(char *param_1)

{
  char cVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  char cVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  cVar1 = *param_1;
  pbVar3 = *(byte **)(lVar2 + 0x60);
  if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 1) == 0)) {
    *(char *)(lVar2 + 0x4b) = cVar1;
  }
  else {
    cVar5 = *(char *)(lVar2 + 0x4b);
    if ((cVar5 != '\0') != (bool)cVar1) {
      uVar4 = *(undefined8 *)(pbVar3 + 0x28);
      FUN_1402eb48e(uVar4,lVar2 + 0x40);
      *(char *)(lVar2 + 0x4b) = cVar1;
      FUN_1402eb97e(uVar4,lVar2 + 0x40);
      cVar5 = *(char *)(lVar2 + 0x4b);
    }
    if (cVar5 == '\0') {
      *(undefined4 *)(*(longlong *)(lVar2 + 0x60) + 0x24) = 0xbf800000;
    }
  }
  return;
}



// FUNCTION 144621f8a FUN_144621f8a body=29 status=ok
// SIG undefined FUN_144621f8a(void)

undefined8 FUN_144621f8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144621fa8 FUN_144621fa8 body=169 status=ok
// SIG undefined FUN_144621fa8(void)

void FUN_144621fa8(longlong *param_1)

{
  uint uVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined8 *local_48;
  undefined1 local_39;
  undefined1 *local_38;
  longlong local_30;
  code *local_28;
  undefined1 **local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = *param_1;
  uVar1 = *(uint *)(local_30 + 0x38);
  local_38 = &local_39;
  local_20 = &local_38;
  local_48 = &local_18;
  local_18 = 0;
  local_10 = 0;
  local_28 = FUN_14462209a;
  local_50 = 0;
  FUN_1401f8d10(L"ParallelFor Task",(uint)(uVar1 != (uVar1 / 0x14) * 0x14) + uVar1 / 0x14,1);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144622070 FUN_144622070 body=12 status=ok
// SIG undefined FUN_144622070(void)

void FUN_144622070(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144622079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14462207c FUN_14462207c body=29 status=ok
// SIG undefined FUN_14462207c(void)

undefined8 FUN_14462207c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14462209a FUN_14462209a body=121 status=ok
// SIG undefined FUN_14462209a(void)

void FUN_14462209a(longlong param_1,int *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = *param_2;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar6 = 0;
  do {
    uVar1 = (ulonglong)(uint)(iVar2 * 0x14) + lVar6;
    uVar4 = (uint)uVar1;
    if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(lVar3 + 0x58))) {
      lVar5 = *(longlong *)(lVar3 + 0x50);
      if (*(longlong *)(lVar3 + 0x50) == 0) {
        lVar5 = lVar3 + 0x40;
      }
      if ((*(uint *)(lVar5 + (uVar1 >> 5 & 0x7ffffff) * 4) >> (uVar4 & 0x1f) & 1) != 0) {
        lVar5 = (uVar1 & 0xffffffff) * 0x180;
        FUN_1497e44a2(*(longlong *)(lVar3 + 0x30) + lVar5 + 0x130,
                      *(longlong *)(lVar3 + 0x30) + lVar5);
      }
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x14);
  return;
}



// FUNCTION 144622114 FUN_144622114 body=132 status=ok
// SIG undefined FUN_144622114(void)

void FUN_144622114(undefined8 *param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined1 *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14be80560;
  local_30 = &LAB_1446221e2;
  local_58[0] = &LAB_1497e46a4;
  FUN_1497dfef0(*param_1,local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14462219a FUN_14462219a body=24 status=ok
// SIG undefined FUN_14462219a(void)

longlong FUN_14462219a(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14be80540;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 1446221b8 FUN_1446221b8 body=12 status=ok
// SIG undefined FUN_1446221b8(void)

void FUN_1446221b8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001446221c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1446221c4 FUN_1446221c4 body=29 status=ok
// SIG undefined FUN_1446221c4(void)

undefined8 FUN_1446221c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144622202 FUN_144622202 body=121 status=ok
// SIG undefined FUN_144622202(void)

void FUN_144622202(longlong param_1,int *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = *param_2;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar6 = 0;
  do {
    uVar1 = (ulonglong)(uint)(iVar2 * 0x14) + lVar6;
    uVar4 = (uint)uVar1;
    if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(lVar3 + 0x58))) {
      lVar5 = *(longlong *)(lVar3 + 0x50);
      if (*(longlong *)(lVar3 + 0x50) == 0) {
        lVar5 = lVar3 + 0x40;
      }
      if ((*(uint *)(lVar5 + (uVar1 >> 5 & 0x7ffffff) * 4) >> (uVar4 & 0x1f) & 1) != 0) {
        lVar5 = (uVar1 & 0xffffffff) * 0x180;
        FUN_1497e47a8(*(longlong *)(lVar3 + 0x30) + lVar5 + 0x130,
                      *(longlong *)(lVar3 + 0x30) + lVar5);
      }
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x14);
  return;
}



// FUNCTION 14462227f FUN_14462227f body=22 status=ok
// SIG undefined FUN_14462227f(void)

void FUN_14462227f(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = 0xffffffff;
    lVar1 = lVar1 + 1;
  } while (param_2 != (int)lVar1);
  return;
}



// FUNCTION 144622296 FUN_144622296 body=346 status=ok
// SIG undefined FUN_144622296(void)

void FUN_144622296(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar6 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar3) {
      uVar6 = (ulonglong)uVar3;
    }
  }
  else {
    uVar6 = uVar6 + (uVar6 * 3 >> 3) + 0x10;
  }
  uVar5 = uVar6 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar5 + 0xf;
      if (uVar6 < 0xfff) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_144622326;
            lVar1 = uVar6 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar6 & ((uVar4 & 0xfffffffffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_144622326:
  uVar6 = 0x7fffffff;
  if ((int)uVar3 <= (int)(uVar5 >> 3)) {
    uVar6 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar6;
  FUN_1446f8d3c(param_1,0,uVar6,8,4);
  return;
}



// FUNCTION 1446223f0 FUN_1446223f0 body=248 status=ok
// SIG undefined FUN_1446223f0(void)

void FUN_1446223f0(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  undefined4 *puVar24;
  
  lVar5 = *(longlong *)(*(longlong *)*param_1 + (longlong)*param_2 * 8);
  lVar6 = *(longlong *)**(undefined8 **)(lVar5 + 0x40);
  iVar21 = *(int *)(lVar6 + 0x18);
  if (0 < iVar21) {
    iVar3 = *(int *)(*(longlong *)param_1[1] + (longlong)*param_2 * 8);
    lVar7 = *(longlong *)param_1[2];
    lVar5 = *(longlong *)(lVar5 + 0x240);
    lVar23 = 0;
    do {
      lVar8 = *(longlong *)(lVar6 + 0x10);
      iVar4 = *(int *)(lVar8 + 0x40 + lVar23 * 0xf8);
      if (iVar4 != 0) {
        puVar24 = (undefined4 *)(*(longlong *)((longlong)iVar3 * 8 + lVar7 + lVar23 * 8) + 0x20);
        iVar21 = 0;
        do {
          lVar9 = *(longlong *)(lVar5 + 0x10);
          lVar22 = (ulonglong)
                   *(ushort *)(*(longlong *)(lVar8 + lVar23 * 0xf8 + 0x38) + (longlong)iVar21 * 2) *
                   0x40;
          puVar1 = (undefined4 *)(lVar9 + lVar22);
          uVar10 = puVar1[1];
          uVar11 = puVar1[2];
          puVar2 = (undefined4 *)(lVar9 + 0x10 + lVar22);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          uVar14 = puVar2[2];
          puVar2 = (undefined4 *)(lVar9 + 0x20 + lVar22);
          uVar15 = *puVar2;
          uVar16 = puVar2[1];
          uVar17 = puVar2[2];
          puVar2 = (undefined4 *)(lVar9 + 0x30 + lVar22);
          uVar18 = *puVar2;
          uVar19 = puVar2[1];
          uVar20 = puVar2[2];
          puVar24[-8] = *puVar1;
          puVar24[-7] = uVar12;
          puVar24[-6] = uVar15;
          puVar24[-5] = uVar18;
          puVar24[-4] = uVar10;
          puVar24[-3] = uVar13;
          puVar24[-2] = uVar16;
          puVar24[-1] = uVar19;
          *puVar24 = uVar11;
          puVar24[1] = uVar14;
          puVar24[2] = uVar17;
          puVar24[3] = uVar20;
          iVar21 = iVar21 + 1;
          puVar24 = puVar24 + 0xc;
        } while (iVar4 != iVar21);
        iVar21 = *(int *)(lVar6 + 0x18);
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 < iVar21);
  }
  return;
}



// FUNCTION 144622504 FUN_144622504 body=12 status=ok
// SIG undefined FUN_144622504(void)

void FUN_144622504(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014462250d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144622510 FUN_144622510 body=57 status=ok
// SIG undefined FUN_144622510(void)

undefined8 * FUN_144622510(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14be80600;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14462254a FUN_14462254a body=282 status=ok
// SIG undefined FUN_14462254a(void)

undefined8 * FUN_14462254a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1446218d0);
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



// FUNCTION 144622664 FUN_144622664 body=105 status=ok
// SIG undefined FUN_144622664(void)

void FUN_144622664(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_144620ad4(&DAT_14ca85100,*(undefined4 *)(param_1 + 0x15),param_1 + 0x16);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001446226c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1446226ce FUN_1446226ce body=135 status=ok
// SIG undefined FUN_1446226ce(void)

longlong * FUN_1446226ce(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_2;
  lVar4 = *param_1;
  if (lVar4 != lVar3) {
    *param_1 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  lVar3 = param_2[1];
  lVar4 = param_1[1];
  if (lVar4 != lVar3) {
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  return param_1;
}



// FUNCTION 144622756 FUN_144622756 body=1862 status=ok
// SIG undefined FUN_144622756(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144622756(longlong *param_1,short *param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  float fVar11;
  float fVar12;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar32;
  float fVar33;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar34;
  float fVar35;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar36 [12];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [8];
  float fStack_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined1 local_138 [16];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  pfVar5 = &local_158;
  FUN_1497e095c(pfVar5,*param_1 + 0xf0,(int)*param_2);
  fVar34 = local_138._0_4_;
  fVar27 = local_138._4_4_;
  pfVar3 = (float *)*param_1;
  auVar8 = *(undefined1 (*) [16])(pfVar3 + 8);
  fVar40 = auVar8._0_4_;
  fVar7 = auVar8._4_4_;
  fVar38 = auVar8._8_4_;
  fVar26 = auVar8._12_4_;
  fVar32 = local_138._8_4_;
  auVar8 = minps(local_138,auVar8);
  auVar29._4_4_ = -(uint)(auVar8._4_4_ < 0.0);
  auVar29._0_4_ = -(uint)(auVar8._0_4_ < 0.0);
  auVar29._8_4_ = -(uint)(auVar8._8_4_ < 0.0);
  auVar29._12_4_ = -(uint)(auVar8._12_4_ < 0.0);
  iVar4 = movmskps((int)pfVar5,auVar29);
  if (iVar4 == 0) {
    fVar26 = *pfVar3;
    fVar11 = pfVar3[1];
    fVar42 = pfVar3[2];
    fVar12 = pfVar3[3];
    local_148 = local_148 * fVar40;
    fStack_144 = fStack_144 * fVar7;
    fStack_140 = fStack_140 * fVar38;
    fVar43 = fStack_144 * fVar26 - local_148 * fVar11;
    fVar20 = fStack_140 * fVar11 - fStack_144 * fVar42;
    fVar21 = local_148 * fVar42 - fStack_140 * fVar26;
    fVar43 = fVar43 + fVar43;
    fVar20 = fVar20 + fVar20;
    fVar21 = fVar21 + fVar21;
    auVar8._0_4_ = fVar42 * fStack_154 * -1.0 +
                   fVar11 * fStack_150 * 1.0 + fVar26 * fStack_14c * 1.0 + local_158 * fVar12;
    auVar8._4_4_ = fVar42 * local_158 * 1.0 +
                   fVar11 * fStack_14c * 1.0 + fVar26 * fStack_150 * -1.0 + fStack_154 * fVar12;
    auVar8._8_4_ = fVar42 * fStack_14c * 1.0 +
                   fVar11 * local_158 * -1.0 + fVar26 * fStack_154 * 1.0 + fStack_150 * fVar12;
    auVar8._12_4_ =
         fVar42 * fStack_150 * -1.0 +
         fVar11 * fStack_154 * -1.0 + fVar26 * local_158 * -1.0 + fStack_14c * fVar12;
    auVar36._0_4_ = (fVar43 * fVar11 - fVar21 * fVar42) + fVar12 * fVar20 + local_148 + pfVar3[4];
    auVar36._4_4_ = (fVar20 * fVar42 - fVar43 * fVar26) + fVar12 * fVar21 + fStack_144 + pfVar3[5];
    auVar36._8_4_ = (fVar21 * fVar26 - fVar20 * fVar11) + fVar12 * fVar43 + fStack_140 + pfVar3[6];
    auVar15._4_4_ = fVar27 * fVar7;
    auVar15._0_4_ = fVar34 * fVar40;
    auVar15._8_4_ = fVar32 * fVar38;
  }
  else {
    local_168 = fVar34 * fVar40;
    fStack_164 = fVar27 * fVar7;
    fStack_160 = fVar32 * fVar38;
    fStack_15c = local_138._12_4_ * fVar26;
    fVar11 = *pfVar3;
    fVar42 = pfVar3[1];
    fVar12 = pfVar3[2];
    fVar43 = pfVar3[3];
    fVar20 = fVar11 + fVar11;
    fVar21 = fVar42 + fVar42;
    fVar22 = fVar12 + fVar12;
    fVar25 = fVar43 * (fVar43 + fVar43);
    auVar9._4_4_ = -(uint)(0.0 <= fStack_164);
    auVar9._0_4_ = -(uint)(0.0 <= local_168);
    auVar9._8_4_ = -(uint)(0.0 <= fStack_160);
    auVar9._12_4_ = -(uint)(0.0 <= fStack_15c);
    _local_178 = blendvps(_DAT_149f63320,_DAT_149e1ef10,auVar9);
    auVar28._0_4_ = ((float)DAT_149e1ef10 - (fVar12 * fVar22 + fVar42 * fVar21)) * fVar40;
    auVar28._4_4_ = (DAT_149e1ef10._4_4_ - (fVar12 * fVar22 + fVar11 * fVar20)) * fVar7;
    auVar28._8_4_ = (DAT_149e1ef10._8_4_ - (fVar42 * fVar21 + fVar11 * fVar20)) * fVar38;
    auVar28._12_4_ = (DAT_149e1ef10._12_4_ - (fVar25 + fVar25)) * fVar26;
    fVar23 = (fVar21 * fVar11 + fVar22 * fVar43) * fVar40;
    fVar24 = (fVar22 * fVar11 + fVar21 * fVar43) * fVar38;
    fVar37 = (fVar21 * fVar11 - fVar22 * fVar43) * fVar7;
    fVar38 = (fVar22 * fVar42 - fVar20 * fVar43) * fVar38;
    fVar40 = (fVar22 * fVar11 - fVar21 * fVar43) * fVar40;
    auVar29 = blendps(auVar28,ZEXT816(0),8);
    auVar17._4_4_ = (fVar22 * fVar42 + fVar20 * fVar43) * fVar7;
    auVar17._0_4_ = fVar23;
    auVar17._8_4_ = fVar24;
    auVar17._12_4_ = (fVar20 * fVar11 + fVar20 * fVar43) * fVar26;
    auVar8 = insertps(auVar17,auVar17,0x4c);
    fVar22 = auVar8._0_4_;
    fVar25 = auVar8._8_4_;
    fVar33 = auVar29._8_4_;
    fVar35 = auVar29._12_4_;
    auVar18._0_12_ = ZEXT812(0x3f800000);
    auVar18._12_4_ = 0;
    auVar8 = insertps(*(undefined1 (*) [16])(pfVar3 + 4),auVar18,0x30);
    fVar42 = fStack_154 + fStack_154;
    fVar43 = fStack_150 + fStack_150;
    fVar26 = local_158 * (local_158 + local_158);
    fVar7 = ((float)DAT_149e1ef10 - (fStack_150 * fVar43 + fStack_154 * fVar42)) * fVar34;
    fVar11 = (DAT_149e1ef10._4_4_ - (fStack_150 * fVar43 + fVar26)) * fVar27;
    fVar12 = (DAT_149e1ef10._8_4_ - (fStack_154 * fVar42 + fVar26)) * fVar32;
    fVar26 = (local_158 + local_158) * fStack_14c;
    fVar20 = (fVar42 * local_158 + fVar43 * fStack_14c) * fVar34;
    fVar39 = (fVar43 * fStack_154 + fVar26) * fVar27;
    fVar41 = (fVar43 * local_158 + fVar42 * fStack_14c) * fVar32;
    fVar27 = (fVar42 * local_158 - fVar43 * fStack_14c) * fVar27;
    fVar32 = (fVar43 * fStack_154 - fVar26) * fVar32;
    fVar34 = (fVar43 * local_158 - fVar42 * fStack_14c) * fVar34;
    local_e8 = fStack_140 * fVar24 + fStack_144 * fVar37 + local_148 * auVar28._0_4_ + auVar8._0_4_;
    fStack_e4 = fStack_140 * fVar38 + fStack_144 * auVar28._4_4_ + local_148 * fVar23 + auVar8._4_4_
    ;
    fStack_e0 = fStack_140 * fVar33 + fStack_144 * fVar22 + local_148 * fVar40 + auVar8._8_4_;
    fStack_dc = fStack_140 * fVar35 + fStack_144 * fVar25 + local_148 * 0.0 + auVar8._12_4_;
    fVar26 = auVar8._0_4_ * 0.0;
    fVar42 = auVar8._4_4_ * 0.0;
    fVar43 = auVar8._8_4_ * 0.0;
    fVar19 = auVar8._12_4_ * 0.0;
    auVar13._0_4_ = fVar34 * fVar24 + fVar20 * fVar37 + fVar7 * auVar28._0_4_ + fVar26;
    auVar13._4_4_ = fVar34 * fVar38 + fVar20 * auVar28._4_4_ + fVar7 * fVar23 + fVar42;
    auVar13._8_4_ = fVar34 * fVar33 + fVar20 * fVar22 + fVar7 * fVar40 + fVar43;
    auVar13._12_4_ = fVar34 * fVar35 + fVar20 * fVar25 + fVar7 * 0.0 + fVar19;
    fVar7 = fVar39 * fVar24 + fVar11 * fVar37 + fVar27 * auVar28._0_4_ + fVar26;
    fVar20 = fVar39 * fVar38 + fVar11 * auVar28._4_4_ + fVar27 * fVar23 + fVar42;
    fVar21 = fVar39 * fVar33 + fVar11 * fVar22 + fVar27 * fVar40 + fVar43;
    auVar30._0_4_ = fVar32 * fVar37 + fVar41 * auVar28._0_4_;
    auVar30._4_4_ = fVar32 * auVar28._4_4_ + fVar41 * fVar23;
    auVar30._8_4_ = fVar32 * fVar22 + fVar41 * fVar40;
    auVar30._12_4_ = fVar32 * fVar25 + fVar41 * 0.0;
    fVar26 = fVar12 * fVar24 + auVar30._0_4_ + fVar26;
    fVar42 = fVar12 * fVar38 + auVar30._4_4_ + fVar42;
    fVar43 = fVar12 * fVar33 + auVar30._8_4_ + fVar43;
    auVar1._4_8_ = auVar30._8_8_;
    auVar1._0_4_ = auVar13._4_4_;
    auVar31._0_8_ = auVar1._0_8_ << 0x20;
    auVar31._8_4_ = auVar13._8_4_;
    auVar31._12_4_ = auVar13._12_4_;
    local_188 = auVar31._8_8_;
    uStack_180 = auVar13._8_8_;
    fVar40 = auVar13._8_4_ * auVar13._8_4_ +
             auVar13._0_4_ * auVar13._0_4_ + auVar13._4_4_ * auVar13._4_4_;
    fVar34 = fVar21 * fVar21 + fVar7 * fVar7 + fVar20 * fVar20;
    fVar32 = fVar43 * fVar43 + fVar26 * fVar26 + fVar42 * fVar42;
    uVar6 = -(uint)(0.0 <= fVar40 + -1e-08);
    fVar38 = (float)(~uVar6 & 0x3f800000 | (uint)(1.0 / SQRT(fVar40)) & uVar6);
    uVar6 = -(uint)(0.0 <= fVar34 + -1e-08);
    fVar34 = (float)(~uVar6 & 0x3f800000 | (uint)(1.0 / SQRT(fVar34)) & uVar6);
    uVar6 = -(uint)(0.0 <= fVar32 + -1e-08);
    fVar40 = (float)(~uVar6 & 0x3f800000 | (uint)(1.0 / SQRT(fVar32)) & uVar6);
    fStack_114 = auVar13._4_4_ * fVar38 * (float)local_178._0_4_;
    local_118 = auVar13._0_4_ * fVar38 * (float)local_178._0_4_;
    fStack_110 = fVar38 * auVar13._8_4_ * (float)local_178._0_4_;
    fStack_10c = auVar13._12_4_;
    fStack_104 = fVar20 * fVar34 * (float)local_178._4_4_;
    local_108 = fVar7 * fVar34 * (float)local_178._4_4_;
    fStack_100 = fVar34 * fVar21 * (float)local_178._4_4_;
    fStack_fc = fVar39 * fVar35 + fVar11 * fVar25 + fVar27 * 0.0 + fVar19;
    fStack_f4 = fVar42 * fVar40 * fStack_170;
    local_f8 = fStack_170 * fVar26 * fVar40;
    fStack_f0 = fVar40 * fVar43 * fStack_170;
    fStack_ec = fVar12 * fVar35 + auVar30._12_4_ + fVar19;
    FUN_14066c2ac(&local_128,&local_118);
    fVar34 = local_128 * local_128 + fStack_124 * fStack_124;
    fVar40 = fStack_120 * fStack_120 + fStack_11c * fStack_11c;
    auVar14._0_4_ = fVar40 + fVar34;
    auVar14._4_4_ = fVar40 + fVar34;
    auVar14._8_4_ = fVar34 + fVar40;
    auVar14._12_4_ = fVar34 + fVar40;
    auVar10._4_4_ = -(uint)(1e-08 <= auVar14._4_4_);
    auVar10._0_4_ = -(uint)(1e-08 <= auVar14._0_4_);
    auVar10._8_4_ = -(uint)(1e-08 <= auVar14._8_4_);
    auVar10._12_4_ = -(uint)(1e-08 <= auVar14._12_4_);
    auVar8 = sqrtps(auVar14,auVar14);
    auVar8 = divps(_DAT_1499314a0,auVar8);
    auVar16._0_4_ = auVar8._0_4_ * local_128;
    auVar16._4_4_ = auVar8._4_4_ * fStack_124;
    auVar16._8_4_ = auVar8._8_4_ * fStack_120;
    auVar16._12_4_ = auVar8._12_4_ * fStack_11c;
    auVar8 = blendvps(_DAT_149932320,auVar16,auVar10);
    auVar15._4_4_ = fStack_164;
    auVar15._0_4_ = local_168;
    auVar15._8_4_ = fStack_160;
    auVar2._4_4_ = fStack_e4;
    auVar2._0_4_ = local_e8;
    auVar2._8_4_ = fStack_e0;
    auVar2._12_4_ = fStack_dc;
    auVar29 = blendps(ZEXT816(0),auVar2,7);
    auVar36 = auVar29._0_12_;
    pfVar3 = (float *)*param_1;
  }
  fVar34 = *(float *)(param_2 + 8);
  auVar29 = blendps(ZEXT816(0),*(undefined1 (*) [16])(param_2 + 2),7);
  fVar27 = auVar29._0_4_ * auVar15._0_4_;
  fVar38 = auVar29._4_4_ * auVar15._4_4_;
  fVar32 = auVar29._8_4_ * auVar15._8_4_;
  fVar11 = auVar8._0_4_;
  fVar42 = auVar8._4_4_;
  fVar12 = auVar8._8_4_;
  fVar43 = auVar8._12_4_;
  fVar40 = fVar38 * fVar11 - fVar42 * fVar27;
  fVar7 = fVar32 * fVar42 - fVar12 * fVar38;
  fVar26 = fVar27 * fVar12 - fVar11 * fVar32;
  fVar40 = fVar40 + fVar40;
  fVar7 = fVar7 + fVar7;
  fVar26 = fVar26 + fVar26;
  fVar27 = (fVar40 * fVar42 - fVar26 * fVar12) + fVar43 * fVar7 + fVar27 + auVar36._0_4_;
  fVar38 = (fVar7 * fVar12 - fVar40 * fVar11) + fVar43 * fVar26 + fVar38 + auVar36._4_4_;
  fVar40 = (fVar26 * fVar11 - fVar7 * fVar42) + fVar43 * fVar40 + fVar32 + auVar36._8_4_;
  fVar7 = fVar34 + fVar40;
  fVar26 = fVar34 + fVar38;
  fVar32 = fVar34 + fVar27;
  fVar40 = fVar40 - fVar34;
  fVar38 = fVar38 - fVar34;
  fVar27 = fVar27 - fVar34;
  if (*(char *)(pfVar3 + 0x12) == '\0') {
    pfVar3[0xc] = fVar27;
    pfVar3[0xd] = fVar38;
    pfVar3[0xe] = fVar40;
    pfVar3[0xf] = fVar32;
    pfVar3[0x10] = fVar26;
    pfVar3[0x11] = fVar7;
    *(undefined1 *)(pfVar3 + 0x12) = 1;
  }
  else {
    fVar34 = pfVar3[0xc];
    if (fVar27 <= pfVar3[0xc]) {
      fVar34 = fVar27;
    }
    pfVar3[0xc] = fVar34;
    fVar34 = pfVar3[0xd];
    if (fVar38 <= pfVar3[0xd]) {
      fVar34 = fVar38;
    }
    pfVar3[0xd] = fVar34;
    fVar34 = pfVar3[0xe];
    if (fVar40 <= pfVar3[0xe]) {
      fVar34 = fVar40;
    }
    pfVar3[0xe] = fVar34;
    fVar34 = pfVar3[0xf];
    if (pfVar3[0xf] <= fVar32) {
      fVar34 = fVar32;
    }
    pfVar3[0xf] = fVar34;
    fVar34 = pfVar3[0x10];
    if (pfVar3[0x10] <= fVar26) {
      fVar34 = fVar26;
    }
    pfVar3[0x10] = fVar34;
    fVar34 = pfVar3[0x11];
    if (pfVar3[0x11] <= fVar7) {
      fVar34 = fVar7;
    }
    pfVar3[0x11] = fVar34;
  }
  if ((local_d0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144622ebc FUN_144622ebc body=12 status=ok
// SIG undefined FUN_144622ebc(void)

void FUN_144622ebc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144622ec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144622ec8 FUN_144622ec8 body=29 status=ok
// SIG undefined FUN_144622ec8(void)

undefined8 FUN_144622ec8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144622ee6 FUN_144622ee6 body=1984 status=ok
// SIG undefined FUN_144622ee6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144622ee6(longlong *param_1,short *param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar15;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar21;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar25;
  float fVar29;
  float fVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar31;
  undefined1 auVar28 [16];
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar49;
  float fVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar51;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined1 local_168 [8];
  float fStack_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [16];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  pfVar6 = &local_158;
  FUN_1497e095c(pfVar6,*param_1 + 0xf0,(int)*param_2);
  fVar25 = local_138._0_4_;
  fVar31 = local_138._4_4_;
  pfVar4 = (float *)*param_1;
  auVar10 = *(undefined1 (*) [16])(pfVar4 + 8);
  fVar29 = auVar10._0_4_;
  fVar34 = auVar10._4_4_;
  fVar35 = auVar10._8_4_;
  fVar9 = auVar10._12_4_;
  fVar21 = local_138._8_4_;
  auVar10 = minps(local_138,auVar10);
  auVar46._4_4_ = -(uint)(auVar10._4_4_ < 0.0);
  auVar46._0_4_ = -(uint)(auVar10._0_4_ < 0.0);
  auVar46._8_4_ = -(uint)(auVar10._8_4_ < 0.0);
  auVar46._12_4_ = -(uint)(auVar10._12_4_ < 0.0);
  iVar5 = movmskps((int)pfVar6,auVar46);
  if (iVar5 == 0) {
    fVar8 = *pfVar4;
    fVar44 = pfVar4[1];
    fVar42 = pfVar4[2];
    fVar15 = pfVar4[3];
    local_148 = local_148 * fVar29;
    fStack_144 = fStack_144 * fVar34;
    fStack_140 = fStack_140 * fVar35;
    fStack_13c = fStack_13c * fVar9;
    fVar36 = fStack_144 * fVar8 - local_148 * fVar44;
    fVar37 = fStack_140 * fVar44 - fStack_144 * fVar42;
    fVar38 = local_148 * fVar42 - fStack_140 * fVar8;
    fVar41 = fStack_13c * fVar15 - fStack_13c * fVar15;
    fVar36 = fVar36 + fVar36;
    fVar37 = fVar37 + fVar37;
    fVar38 = fVar38 + fVar38;
    fVar41 = fVar41 + fVar41;
    auVar10._0_4_ =
         fVar42 * fStack_154 * -1.0 +
         fVar44 * fStack_150 * 1.0 + fVar8 * fStack_14c * 1.0 + local_158 * fVar15;
    auVar10._4_4_ =
         fVar42 * local_158 * 1.0 +
         fVar44 * fStack_14c * 1.0 + fVar8 * fStack_150 * -1.0 + fStack_154 * fVar15;
    auVar10._8_4_ =
         fVar42 * fStack_14c * 1.0 +
         fVar44 * local_158 * -1.0 + fVar8 * fStack_154 * 1.0 + fStack_150 * fVar15;
    auVar10._12_4_ =
         fVar42 * fStack_150 * -1.0 +
         fVar44 * fStack_154 * -1.0 + fVar8 * local_158 * -1.0 + fStack_14c * fVar15;
    auVar52._0_4_ = (fVar36 * fVar44 - fVar38 * fVar42) + fVar15 * fVar37 + local_148 + pfVar4[4];
    auVar52._4_4_ = (fVar37 * fVar42 - fVar36 * fVar8) + fVar15 * fVar38 + fStack_144 + pfVar4[5];
    auVar52._8_4_ = (fVar38 * fVar8 - fVar37 * fVar44) + fVar15 * fVar36 + fStack_140 + pfVar4[6];
    auVar52._12_4_ = (fVar41 * fVar15 - fVar41 * fVar15) + fVar15 * fVar41 + fStack_13c + pfVar4[7];
  }
  else {
    local_178 = fVar25 * fVar29;
    fStack_174 = fVar31 * fVar34;
    fStack_170 = fVar21 * fVar35;
    fStack_16c = local_138._12_4_ * fVar9;
    fVar8 = *pfVar4;
    fVar44 = pfVar4[1];
    fVar42 = pfVar4[2];
    fVar15 = pfVar4[3];
    fVar36 = fVar8 + fVar8;
    fVar37 = fVar44 + fVar44;
    fVar38 = fVar42 + fVar42;
    fVar41 = fVar15 * (fVar15 + fVar15);
    auVar11._4_4_ = -(uint)(0.0 <= fStack_174);
    auVar11._0_4_ = -(uint)(0.0 <= local_178);
    auVar11._8_4_ = -(uint)(0.0 <= fStack_170);
    auVar11._12_4_ = -(uint)(0.0 <= fStack_16c);
    _local_168 = blendvps(_DAT_149f63320,_DAT_149e1ef10,auVar11);
    auVar45._0_4_ = ((float)DAT_149e1ef10 - (fVar42 * fVar38 + fVar44 * fVar37)) * fVar29;
    auVar45._4_4_ = (DAT_149e1ef10._4_4_ - (fVar42 * fVar38 + fVar8 * fVar36)) * fVar34;
    auVar45._8_4_ = (DAT_149e1ef10._8_4_ - (fVar44 * fVar37 + fVar8 * fVar36)) * fVar35;
    auVar45._12_4_ = (DAT_149e1ef10._12_4_ - (fVar41 + fVar41)) * fVar9;
    fVar39 = (fVar37 * fVar8 + fVar38 * fVar15) * fVar29;
    fVar40 = (fVar38 * fVar8 + fVar37 * fVar15) * fVar35;
    fVar53 = (fVar37 * fVar8 - fVar38 * fVar15) * fVar34;
    fVar55 = (fVar38 * fVar44 - fVar36 * fVar15) * fVar35;
    fVar57 = (fVar38 * fVar8 - fVar37 * fVar15) * fVar29;
    auVar46 = blendps(auVar45,ZEXT816(0),8);
    auVar26._4_4_ = (fVar38 * fVar44 + fVar36 * fVar15) * fVar34;
    auVar26._0_4_ = fVar39;
    auVar26._8_4_ = fVar40;
    auVar26._12_4_ = (fVar36 * fVar8 + fVar36 * fVar15) * fVar9;
    auVar10 = insertps(auVar26,auVar26,0x4c);
    fVar44 = auVar10._0_4_;
    fVar30 = auVar10._8_4_;
    fVar50 = auVar46._8_4_;
    fVar51 = auVar46._12_4_;
    auVar27._0_12_ = ZEXT812(0x3f800000);
    auVar27._12_4_ = 0;
    auVar10 = insertps(*(undefined1 (*) [16])(pfVar4 + 4),auVar27,0x30);
    fVar36 = fStack_154 + fStack_154;
    fVar38 = fStack_150 + fStack_150;
    fVar42 = local_158 * (local_158 + local_158);
    fVar8 = ((float)DAT_149e1ef10 - (fStack_150 * fVar38 + fStack_154 * fVar36)) * fVar25;
    fVar15 = (DAT_149e1ef10._4_4_ - (fStack_150 * fVar38 + fVar42)) * fVar31;
    fVar37 = (DAT_149e1ef10._8_4_ - (fStack_154 * fVar36 + fVar42)) * fVar21;
    fVar42 = (local_158 + local_158) * fStack_14c;
    fVar54 = (fVar36 * local_158 + fVar38 * fStack_14c) * fVar25;
    fVar56 = (fVar38 * fStack_154 + fVar42) * fVar31;
    fVar58 = (fVar38 * local_158 + fVar36 * fStack_14c) * fVar21;
    fVar43 = (fVar36 * local_158 - fVar38 * fStack_14c) * fVar31;
    fVar49 = (fVar38 * fStack_154 - fVar42) * fVar21;
    fVar41 = (fVar38 * local_158 - fVar36 * fStack_14c) * fVar25;
    local_e8 = fStack_140 * fVar40 + fStack_144 * fVar53 + local_148 * auVar45._0_4_ + auVar10._0_4_
    ;
    fStack_e4 = fStack_140 * fVar55 + fStack_144 * auVar45._4_4_ + local_148 * fVar39 +
                auVar10._4_4_;
    fStack_e0 = fStack_140 * fVar50 + fStack_144 * fVar44 + local_148 * fVar57 + auVar10._8_4_;
    fStack_dc = fStack_140 * fVar51 + fStack_144 * fVar30 + local_148 * 0.0 + auVar10._12_4_;
    fVar42 = auVar10._0_4_ * 0.0;
    fVar36 = auVar10._4_4_ * 0.0;
    fVar38 = auVar10._8_4_ * 0.0;
    fVar33 = auVar10._12_4_ * 0.0;
    auVar16._0_4_ = fVar41 * fVar40 + fVar54 * fVar53 + fVar8 * auVar45._0_4_ + fVar42;
    auVar16._4_4_ = fVar41 * fVar55 + fVar54 * auVar45._4_4_ + fVar8 * fVar39 + fVar36;
    auVar16._8_4_ = fVar41 * fVar50 + fVar54 * fVar44 + fVar8 * fVar57 + fVar38;
    auVar16._12_4_ = fVar41 * fVar51 + fVar54 * fVar30 + fVar8 * 0.0 + fVar33;
    fVar41 = fVar56 * fVar40 + fVar15 * fVar53 + fVar43 * auVar45._0_4_ + fVar42;
    fVar54 = fVar56 * fVar55 + fVar15 * auVar45._4_4_ + fVar43 * fVar39 + fVar36;
    fVar24 = fVar56 * fVar50 + fVar15 * fVar44 + fVar43 * fVar57 + fVar38;
    auVar47._0_4_ = fVar49 * fVar53 + fVar58 * auVar45._0_4_;
    auVar47._4_4_ = fVar49 * auVar45._4_4_ + fVar58 * fVar39;
    auVar47._8_4_ = fVar49 * fVar44 + fVar58 * fVar57;
    auVar47._12_4_ = fVar49 * fVar30 + fVar58 * 0.0;
    fVar42 = fVar37 * fVar40 + auVar47._0_4_ + fVar42;
    fVar36 = fVar37 * fVar55 + auVar47._4_4_ + fVar36;
    fVar38 = fVar37 * fVar50 + auVar47._8_4_ + fVar38;
    auVar1._4_8_ = auVar47._8_8_;
    auVar1._0_4_ = auVar16._4_4_;
    auVar48._0_8_ = auVar1._0_8_ << 0x20;
    auVar48._8_4_ = auVar16._8_4_;
    auVar48._12_4_ = auVar16._12_4_;
    local_188 = auVar48._8_8_;
    uStack_180 = auVar16._8_8_;
    fVar44 = auVar16._8_4_ * auVar16._8_4_ +
             auVar16._0_4_ * auVar16._0_4_ + auVar16._4_4_ * auVar16._4_4_;
    fVar8 = fVar24 * fVar24 + fVar41 * fVar41 + fVar54 * fVar54;
    fVar40 = fVar38 * fVar38 + fVar42 * fVar42 + fVar36 * fVar36;
    uVar7 = -(uint)(0.0 <= fVar44 + -1e-08);
    fVar39 = (float)(~uVar7 & 0x3f800000 | (uint)(1.0 / SQRT(fVar44)) & uVar7);
    uVar7 = -(uint)(0.0 <= fVar8 + -1e-08);
    fVar8 = (float)(~uVar7 & 0x3f800000 | (uint)(1.0 / SQRT(fVar8)) & uVar7);
    uVar7 = -(uint)(0.0 <= fVar40 + -1e-08);
    fVar44 = (float)(~uVar7 & 0x3f800000 | (uint)(1.0 / SQRT(fVar40)) & uVar7);
    fStack_114 = auVar16._4_4_ * fVar39 * (float)local_168._0_4_;
    local_118 = auVar16._0_4_ * fVar39 * (float)local_168._0_4_;
    fStack_110 = fVar39 * auVar16._8_4_ * (float)local_168._0_4_;
    fStack_10c = auVar16._12_4_;
    fStack_104 = fVar54 * fVar8 * (float)local_168._4_4_;
    local_108 = fVar41 * fVar8 * (float)local_168._4_4_;
    fStack_100 = fVar8 * fVar24 * (float)local_168._4_4_;
    fStack_fc = fVar56 * fVar51 + fVar15 * fVar30 + fVar43 * 0.0 + fVar33;
    fStack_f4 = fVar36 * fVar44 * fStack_160;
    local_f8 = fStack_160 * fVar42 * fVar44;
    fStack_f0 = fVar44 * fVar38 * fStack_160;
    fStack_ec = fVar37 * fVar51 + auVar47._12_4_ + fVar33;
    FUN_14066c2ac(&local_128,&local_118);
    fVar8 = local_128 * local_128 + fStack_124 * fStack_124;
    fVar44 = fStack_120 * fStack_120 + fStack_11c * fStack_11c;
    auVar17._0_4_ = fVar44 + fVar8;
    auVar17._4_4_ = fVar44 + fVar8;
    auVar17._8_4_ = fVar8 + fVar44;
    auVar17._12_4_ = fVar8 + fVar44;
    auVar12._4_4_ = -(uint)(1e-08 <= auVar17._4_4_);
    auVar12._0_4_ = -(uint)(1e-08 <= auVar17._0_4_);
    auVar12._8_4_ = -(uint)(1e-08 <= auVar17._8_4_);
    auVar12._12_4_ = -(uint)(1e-08 <= auVar17._12_4_);
    auVar10 = sqrtps(auVar17,auVar17);
    auVar10 = divps(_DAT_1499314a0,auVar10);
    auVar22._0_4_ = auVar10._0_4_ * local_128;
    auVar22._4_4_ = auVar10._4_4_ * fStack_124;
    auVar22._8_4_ = auVar10._8_4_ * fStack_120;
    auVar22._12_4_ = auVar10._12_4_ * fStack_11c;
    auVar10 = blendvps(_DAT_149932320,auVar22,auVar12);
    auVar3._4_4_ = fStack_e4;
    auVar3._0_4_ = local_e8;
    auVar3._8_4_ = fStack_e0;
    auVar3._12_4_ = fStack_dc;
    auVar52 = blendps(ZEXT816(0),auVar3,7);
    pfVar4 = (float *)*param_1;
  }
  fVar8 = *(float *)(param_2 + 0xe);
  auVar46 = blendps(*(undefined1 (*) [16])(param_2 + 2),ZEXT816(0),8);
  auVar18._0_4_ = auVar46._0_4_ * fVar25 * fVar29;
  auVar18._4_4_ = auVar46._4_4_ * fVar31 * fVar34;
  auVar18._8_4_ = auVar46._8_4_ * fVar21 * fVar35;
  auVar18._12_4_ = auVar46._12_4_ * local_138._12_4_ * fVar9;
  fVar38 = auVar10._0_4_;
  fVar41 = auVar10._4_4_;
  fVar54 = auVar10._8_4_;
  fVar24 = auVar10._12_4_;
  fVar9 = auVar18._4_4_ * fVar38 - fVar41 * auVar18._0_4_;
  fVar42 = auVar18._8_4_ * fVar41 - fVar54 * auVar18._4_4_;
  fVar36 = auVar18._0_4_ * fVar54 - fVar38 * auVar18._8_4_;
  fVar37 = auVar18._12_4_ * fVar24 - fVar24 * auVar18._12_4_;
  fVar9 = fVar9 + fVar9;
  fVar42 = fVar42 + fVar42;
  fVar36 = fVar36 + fVar36;
  fVar37 = fVar37 + fVar37;
  fVar44 = (fVar9 * fVar41 - fVar36 * fVar54) + fVar24 * fVar42 + auVar18._0_4_ + auVar52._0_4_;
  fVar15 = (fVar42 * fVar54 - fVar9 * fVar38) + fVar24 * fVar36 + auVar18._4_4_ + auVar52._4_4_;
  auVar13._0_8_ = CONCAT44(fVar15,fVar44);
  auVar13._8_4_ =
       (fVar36 * fVar38 - fVar42 * fVar41) + fVar24 * fVar9 + auVar18._8_4_ + auVar52._8_4_;
  auVar13._12_4_ =
       (fVar37 * fVar24 - fVar37 * fVar24) + fVar24 * fVar37 + auVar18._12_4_ + auVar52._12_4_;
  auVar2._4_8_ = auVar18._8_8_;
  auVar2._0_4_ = fVar15;
  auVar19._0_8_ = auVar2._0_8_ << 0x20;
  auVar19._8_4_ = auVar13._8_4_;
  auVar19._12_4_ = auVar13._12_4_;
  auVar20._8_8_ = auVar13._8_8_;
  auVar20._0_8_ = auVar19._8_8_;
  auVar10 = blendps(*(undefined1 (*) [16])(param_2 + 8),ZEXT816(0),8);
  fVar25 = auVar10._0_4_ * fVar25 * fVar29;
  fVar29 = auVar10._4_4_ * fVar31 * fVar34;
  fVar31 = auVar10._8_4_ * fVar21 * fVar35;
  fVar34 = fVar29 * fVar38 - fVar41 * fVar25;
  fVar35 = fVar31 * fVar41 - fVar54 * fVar29;
  fVar9 = fVar25 * fVar54 - fVar38 * fVar31;
  fVar34 = fVar34 + fVar34;
  fVar35 = fVar35 + fVar35;
  fVar9 = fVar9 + fVar9;
  fVar25 = (fVar34 * fVar41 - fVar9 * fVar54) + fVar24 * fVar35 + fVar25 + auVar52._0_4_;
  fVar29 = (fVar35 * fVar54 - fVar34 * fVar38) + fVar24 * fVar9 + fVar29 + auVar52._4_4_;
  fVar31 = (fVar9 * fVar38 - fVar35 * fVar41) + fVar24 * fVar34 + fVar31 + auVar52._8_4_;
  auVar23._4_4_ = fVar15;
  auVar23._0_4_ = fVar15;
  auVar23._8_4_ = auVar13._12_4_;
  auVar23._12_4_ = auVar13._12_4_;
  auVar28._8_4_ = auVar13._8_4_;
  auVar28._0_8_ = auVar13._0_8_;
  auVar28._12_4_ = auVar13._12_4_;
  if (fVar25 <= fVar44) {
    auVar28._0_4_ = fVar25;
  }
  auVar14 = auVar13;
  if (fVar44 <= fVar25) {
    auVar14._4_12_ = auVar13._4_12_;
    auVar14._0_4_ = fVar25;
  }
  fVar25 = fVar15;
  if (fVar29 <= fVar15) {
    fVar25 = fVar29;
  }
  auVar32._8_4_ = auVar13._8_4_;
  auVar32._0_8_ = auVar19._8_8_;
  auVar32._12_4_ = auVar13._12_4_;
  if (fVar31 <= auVar13._8_4_) {
    auVar32._0_4_ = fVar31;
  }
  if (fVar15 <= fVar29) {
    auVar23._0_4_ = fVar29;
  }
  if (auVar13._8_4_ <= fVar31) {
    auVar20._0_4_ = fVar31;
  }
  fVar31 = auVar20._0_4_ + fVar8;
  fVar34 = auVar23._0_4_ + fVar8;
  fVar29 = auVar14._0_4_ + fVar8;
  fVar35 = auVar32._0_4_ - fVar8;
  fVar25 = fVar25 - fVar8;
  fVar8 = auVar28._0_4_ - fVar8;
  if (*(char *)(pfVar4 + 0x12) == '\0') {
    pfVar4[0xc] = fVar8;
    pfVar4[0xd] = fVar25;
    pfVar4[0xe] = fVar35;
    pfVar4[0xf] = fVar29;
    pfVar4[0x10] = fVar34;
    pfVar4[0x11] = fVar31;
    *(undefined1 *)(pfVar4 + 0x12) = 1;
  }
  else {
    fVar9 = pfVar4[0xc];
    if (fVar8 <= pfVar4[0xc]) {
      fVar9 = fVar8;
    }
    pfVar4[0xc] = fVar9;
    fVar9 = pfVar4[0xd];
    if (fVar25 <= pfVar4[0xd]) {
      fVar9 = fVar25;
    }
    pfVar4[0xd] = fVar9;
    fVar25 = pfVar4[0xe];
    if (fVar35 <= pfVar4[0xe]) {
      fVar25 = fVar35;
    }
    pfVar4[0xe] = fVar25;
    fVar25 = pfVar4[0xf];
    if (pfVar4[0xf] <= fVar29) {
      fVar25 = fVar29;
    }
    pfVar4[0xf] = fVar25;
    fVar25 = pfVar4[0x10];
    if (pfVar4[0x10] <= fVar34) {
      fVar25 = fVar34;
    }
    pfVar4[0x10] = fVar25;
    fVar25 = pfVar4[0x11];
    if (pfVar4[0x11] <= fVar31) {
      fVar25 = fVar31;
    }
    pfVar4[0x11] = fVar25;
  }
  if ((local_d0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446236a8 FUN_1446236a8 body=39 status=ok
// SIG undefined FUN_1446236a8(void)

void FUN_1446236a8(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_1497e509b(param_1[1],param_1[2],param_2,param_1[3]);
  *(byte *)*param_1 = *(byte *)*param_1 | bVar1;
  return;
}



// FUNCTION 1446236d0 FUN_1446236d0 body=70 status=ok
// SIG undefined FUN_1446236d0(void)

undefined8 * FUN_1446236d0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14be80650;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 144623716 FUN_144623716 body=5 status=ok
// SIG undefined FUN_144623716(void)

longlong FUN_144623716(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14462371c FUN_14462371c body=29 status=ok
// SIG undefined FUN_14462371c(void)

void FUN_14462371c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14462373a FUN_14462373a body=29 status=ok
// SIG undefined FUN_14462373a(void)

undefined8 FUN_14462373a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144623758 FUN_144623758 body=39 status=ok
// SIG undefined FUN_144623758(void)

void FUN_144623758(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_1497e5b92(param_1[1],param_1[2],param_2,param_1[3]);
  *(byte *)*param_1 = *(byte *)*param_1 | bVar1;
  return;
}



// FUNCTION 144623780 FUN_144623780 body=1450 status=ok
// SIG undefined FUN_144623780(void)

void FUN_144623780(longlong *param_1)

{
  longlong lVar1;
  float *pfVar2;
  short sVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  int *piVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar20;
  float fVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  float *local_140;
  undefined4 local_134;
  int *local_130;
  longlong *local_128;
  float local_11c;
  float local_118;
  float local_114;
  short local_110;
  short local_10e;
  float local_10c;
  float local_108;
  float local_104;
  undefined8 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((longlong)(int)param_1[2] != 0) {
    piVar13 = (int *)param_1[1];
    piVar12 = piVar13 + (int)param_1[2];
    local_130 = piVar12;
    local_128 = param_1;
    do {
      lVar7 = *(longlong *)(*param_1 + 0x30);
      lVar14 = (longlong)*piVar13 * 0x180;
      lVar1 = lVar14 + lVar7;
      local_134 = (undefined4)param_1[3];
      fVar16 = *(float *)(lVar7 + 0x58 + lVar14);
      fVar20 = *(float *)(lVar7 + 0x5c + lVar14);
      fVar21 = *(float *)(lVar7 + 0x60 + lVar14);
      if (1e-08 <= fVar21 * fVar21 + fVar16 * fVar16 + fVar20 * fVar20) {
        iVar9 = *(int *)(lVar1 + 0xf8);
        if (0 < iVar9) {
          sVar11 = 1;
          do {
            sVar10 = sVar11 + -1;
            sVar3 = *(short *)(*(longlong *)(lVar1 + 0x100) + (longlong)sVar10 * 2);
            if (sVar3 != -1) {
              local_10c = 1.0;
              if (sVar3 == 0) {
                local_10c = *(float *)(*(longlong *)(lVar1 + 0x68) + 0x18);
              }
              local_104 = *(float *)(lVar1 + 0x60) * local_10c;
              local_108 = *(float *)(lVar1 + 0x5c) * local_10c;
              local_10c = local_10c * *(float *)(lVar1 + 0x58);
              auVar18 = *(undefined1 (*) [16])
                         (*(longlong *)(lVar1 + 0xf0) + 0x10 + (longlong)sVar10 * 0x30);
              local_100 = auVar18._0_8_;
              local_f8 = extractps(auVar18,2);
              lVar15 = (longlong)sVar3;
              local_140 = &local_10c;
              local_148 = &local_100;
              local_110 = sVar3;
              local_10e = sVar10;
              FUN_1497e0eb8(&local_11c,lVar1 + 0xf0,lVar1,&local_110);
              lVar4 = *(longlong *)(lVar1 + 0xb0);
              *(float *)(lVar4 + lVar15 * 0xc) = local_11c + *(float *)(lVar4 + lVar15 * 0xc);
              *(float *)(lVar4 + 4 + lVar15 * 0xc) =
                   local_118 + *(float *)(lVar4 + 4 + lVar15 * 0xc);
              *(float *)(lVar4 + 8 + lVar15 * 0xc) =
                   local_114 + *(float *)(lVar4 + 8 + lVar15 * 0xc);
              iVar9 = *(int *)(lVar1 + 0xf8);
            }
            iVar6 = (int)sVar11;
            sVar11 = sVar11 + 1;
          } while (iVar6 < iVar9);
        }
        *(undefined4 *)(lVar14 + lVar7 + 0x60) = DAT_14c846338;
        *(undefined8 *)(lVar14 + lVar7 + 0x58) = DAT_14c846330;
        piVar12 = local_130;
        param_1 = local_128;
      }
      lVar7 = *(longlong *)(lVar1 + 0x68);
      local_100 = (ulonglong)local_100._4_4_ << 0x20;
      FUN_1497e1501(lVar7);
      if (0.0001 < *(float *)(lVar7 + 0x14)) {
        FUN_1497e147d();
      }
      memset(*(void **)(lVar1 + 0xb0),0,(longlong)*(int *)(lVar1 + 0xb8) * 0xc);
      if (*(int *)(lVar1 + 0xf8) < 1) {
LAB_144623c8e:
        FUN_1497e1dfc(*param_1);
      }
      else {
        bVar8 = true;
        lVar7 = 0;
        do {
          while( true ) {
            lVar14 = *(longlong *)(lVar1 + 0xc0);
            auVar17._8_8_ = 0;
            auVar17._0_8_ = *(ulonglong *)(lVar14 + lVar7 * 0xc);
            auVar18 = insertps(auVar17,*(undefined4 *)(lVar14 + 8 + lVar7 * 0xc),0x28);
            fVar16 = auVar18._0_4_ * 0.008726646;
            fVar20 = auVar18._4_4_ * 0.008726646;
            fVar21 = auVar18._8_4_ * 0.008726646;
            fVar22 = auVar18._12_4_ * 0.008726646;
            auVar25._0_4_ = (float)(int)(fVar16 * 0.15915494) * -6.2831855 + fVar16;
            auVar25._4_4_ = (float)(int)(fVar20 * 0.15915494) * -6.2831855 + fVar20;
            auVar25._8_4_ = (float)(int)(fVar21 * 0.15915494) * -6.2831855 + fVar21;
            auVar25._12_4_ = (float)(int)(fVar22 * 0.15915494) * -6.2831855 + fVar22;
            auVar19._4_4_ = -(uint)(1.5707964 < ABS(auVar25._4_4_));
            auVar19._0_4_ = -(uint)(1.5707964 < ABS(auVar25._0_4_));
            auVar19._8_4_ = -(uint)(1.5707964 < ABS(auVar25._8_4_));
            auVar19._12_4_ = -(uint)(1.5707964 < ABS(auVar25._12_4_));
            auVar23._0_4_ = (float)((uint)auVar25._0_4_ & 0x80000000 | 0x40490fdb) - auVar25._0_4_;
            auVar23._4_4_ = (float)((uint)auVar25._4_4_ & 0x80000000 | 0x40490fdb) - auVar25._4_4_;
            auVar23._8_4_ = (float)((uint)auVar25._8_4_ & 0x80000000 | 0x40490fdb) - auVar25._8_4_;
            auVar23._12_4_ =
                 (float)((uint)auVar25._12_4_ & 0x80000000 | 0x40490fdb) - auVar25._12_4_;
            auVar18 = blendvps(auVar25,auVar23,auVar19);
            fVar16 = auVar18._0_4_;
            fVar20 = auVar18._4_4_;
            fVar21 = auVar18._8_4_;
            fVar22 = fVar16 * fVar16;
            fVar28 = fVar20 * fVar20;
            fVar29 = fVar21 * fVar21;
            fVar30 = auVar18._12_4_ * auVar18._12_4_;
            fVar16 = (((((fVar22 * -2.3889859e-08 + 2.7525562e-06) * fVar22 + -0.00019840874) *
                        fVar22 + 0.008333331) * fVar22 + -0.16666667) * fVar22 + 1.0) * fVar16;
            fVar20 = (((((fVar28 * -2.3889859e-08 + 2.7525562e-06) * fVar28 + -0.00019840874) *
                        fVar28 + 0.008333331) * fVar28 + -0.16666667) * fVar28 + 1.0) * fVar20;
            fVar21 = (((((fVar29 * -2.3889859e-08 + 2.7525562e-06) * fVar29 + -0.00019840874) *
                        fVar29 + 0.008333331) * fVar29 + -0.16666667) * fVar29 + 1.0) * fVar21;
            auVar26._0_4_ =
                 ((((fVar22 * -2.6051615e-07 + 2.4760495e-05) * fVar22 + -0.0013888378) * fVar22 +
                  0.041666638) * fVar22 + -0.5) * fVar22 + 1.0;
            auVar26._4_4_ =
                 ((((fVar28 * -2.6051615e-07 + 2.4760495e-05) * fVar28 + -0.0013888378) * fVar28 +
                  0.041666638) * fVar28 + -0.5) * fVar28 + 1.0;
            auVar26._8_4_ =
                 ((((fVar29 * -2.6051615e-07 + 2.4760495e-05) * fVar29 + -0.0013888378) * fVar29 +
                  0.041666638) * fVar29 + -0.5) * fVar29 + 1.0;
            auVar26._12_4_ =
                 ((((fVar30 * -2.6051615e-07 + 2.4760495e-05) * fVar30 + -0.0013888378) * fVar30 +
                  0.041666638) * fVar30 + -0.5) * fVar30 + 1.0;
            uVar5 = CONCAT44(auVar26._4_4_,auVar26._0_4_);
            auVar18._8_4_ = -auVar26._8_4_;
            auVar18._0_8_ = uVar5 ^ 0x8000000080000000;
            auVar18._12_4_ = -auVar26._12_4_;
            auVar18 = blendvps(auVar26,auVar18,auVar19);
            fVar22 = auVar18._0_4_;
            fVar24 = auVar18._4_4_;
            fVar27 = auVar18._8_4_;
            fVar28 = fVar27 * fVar24 * fVar16 + fVar21 * fVar20 * fVar22;
            fVar29 = -(fVar21 * fVar24 * fVar16) + fVar27 * fVar20 * fVar22;
            fVar30 = fVar27 * fVar20 * fVar16 + fVar21 * fVar24 * fVar22;
            fVar24 = -(fVar21 * fVar20 * fVar16) + fVar27 * fVar24 * fVar22;
            pfVar2 = (float *)(*(longlong *)(lVar1 + 0xe0) + lVar7 * 0x10);
            fVar16 = *pfVar2;
            fVar20 = pfVar2[1];
            fVar21 = pfVar2[2];
            fVar22 = pfVar2[3];
            pfVar2 = (float *)(*(longlong *)(lVar1 + 0xf0) + lVar7 * 0x30);
            *pfVar2 = fVar21 * fVar29 * -1.0 +
                      fVar20 * fVar30 * 1.0 + fVar16 * fVar24 * 1.0 + fVar22 * fVar28;
            pfVar2[1] = fVar21 * fVar28 * 1.0 +
                        fVar20 * fVar24 * 1.0 + fVar16 * fVar30 * -1.0 + fVar22 * fVar29;
            pfVar2[2] = fVar21 * fVar24 * 1.0 +
                        fVar20 * fVar28 * -1.0 + fVar16 * fVar29 * 1.0 + fVar22 * fVar30;
            pfVar2[3] = fVar21 * fVar30 * -1.0 +
                        fVar20 * fVar29 * -1.0 + fVar16 * fVar28 * -1.0 + fVar22 * fVar24;
            if (!bVar8) break;
            pfVar2 = (float *)(lVar14 + lVar7 * 0xc);
            fVar16 = pfVar2[2] * pfVar2[2] + *pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1];
            bVar8 = fVar16 < 0.010000001;
            lVar7 = lVar7 + 1;
            if (*(int *)(lVar1 + 0xf8) <= lVar7) {
              if (fVar16 < 0.010000001) goto LAB_144623c8e;
              goto LAB_144623c7f;
            }
          }
          lVar7 = lVar7 + 1;
          bVar8 = false;
        } while (lVar7 < *(int *)(lVar1 + 0xf8));
      }
LAB_144623c7f:
      piVar13 = piVar13 + 1;
    } while (piVar13 != piVar12);
  }
  if ((local_f0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144623d2c FUN_144623d2c body=160 status=ok
// SIG undefined FUN_144623d2c(void)

undefined8 * FUN_144623d2c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14be80670;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(puVar2 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
  }
  else {
    FUN_1497e691e(puVar2 + 2,iVar1);
    memcpy((void *)puVar2[2],_Src,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  return puVar2 + 1;
}



// FUNCTION 144623dd2 FUN_144623dd2 body=29 status=ok
// SIG undefined FUN_144623dd2(void)

void FUN_144623dd2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144623df0 FUN_144623df0 body=57 status=ok
// SIG undefined FUN_144623df0(void)

undefined8 * FUN_144623df0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be80670;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144623e2a FUN_144623e2a body=130 status=ok
// SIG undefined FUN_144623e2a(void)

void FUN_144623e2a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = param_1[2];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = param_1[1];
    lVar5 = 0;
    do {
      lVar3 = (longlong)*(int *)(lVar1 + lVar5) * 0x180;
      lVar4 = *(longlong *)(*param_1 + 0x30) + lVar3 + 0x110;
      lVar3 = *(longlong *)(*param_1 + 0x30) + 0xf0 + lVar3;
      FUN_14815495a(lVar4,*(undefined4 *)(lVar3 + 8),1);
      FUN_1497e1873(*(undefined8 *)(lVar3 + 0x30),lVar3,lVar4);
      *(undefined1 *)(lVar3 + 0x38) = 1;
      lVar5 = lVar5 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar5);
  }
  return;
}



// FUNCTION 144623eac FUN_144623eac body=113 status=ok
// SIG undefined FUN_144623eac(void)

longlong FUN_144623eac(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14be80690;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  else {
    FUN_1497e691e((undefined8 *)(param_2 + 0x20),iVar1);
    memcpy(*(void **)(param_2 + 0x20),_Src,(longlong)iVar1 << 2);
  }
  return param_2 + 0x18;
}



// FUNCTION 144623f30 FUN_144623f30 body=57 status=ok
// SIG undefined FUN_144623f30(void)

undefined8 * FUN_144623f30(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be80690;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144623f6a FUN_144623f6a body=748 status=ok
// SIG undefined FUN_144623f6a(void)

void FUN_144623f6a(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_108 [32];
  LPCRITICAL_SECTION local_e8;
  longlong local_e0;
  uint local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  uint local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined ***local_98;
  undefined8 uStack_90;
  undefined **local_88;
  undefined8 local_80;
  longlong local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = *param_1;
  lVar4 = param_1[3];
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14be80710;
  local_a8 = FUN_1497e7458;
  LOCK();
  *(undefined1 *)(lVar4 + 0x40) = 1;
  UNLOCK();
  local_80 = lVar3;
  local_78 = lVar4;
  FUN_1497e7368(lVar3,&local_a8);
  LOCK();
  *(undefined1 *)(lVar4 + 0x40) = 0;
  UNLOCK();
  if (local_a8 != (code *)0x0) {
    pppuVar7 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar7 = &local_88;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  FUN_1497e1f7c(lVar3);
  lVar4 = param_1[4];
  local_88 = (undefined **)0x0;
  local_80 = 0x400000000;
  uVar2 = *(uint *)(lVar3 + 0x118);
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (4 < uVar2) {
    FUN_14473dbc4(&local_a8);
  }
  local_e8 = (LPCRITICAL_SECTION)(lVar3 + 0xe8);
  EnterCriticalSection(local_e8);
  uVar2 = *(uint *)(lVar3 + 0x118);
  if (0 < (int)uVar2) {
    iVar9 = 0;
    uVar10 = uVar2;
    do {
      uVar6 = 0x14;
      if (uVar10 < 0x14) {
        uVar6 = uVar10;
      }
      lVar11 = (longlong)iVar9 * 4 + *(longlong *)(lVar3 + 0x110);
      local_c0 = lVar11;
      local_b8 = uVar6;
      FUN_1497e1b09(&local_b0,lVar3,&local_c0,(int)lVar4);
      local_d0 = local_b0;
      if (local_b0 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_b0 + 1) = *(int *)(local_b0 + 1) + 1;
        UNLOCK();
      }
      local_e0 = lVar11;
      local_d8 = uVar6;
      FUN_1497e1ca8(&local_c8,lVar3,&local_e0,&local_d0);
      uVar5 = local_80;
      lVar11 = (longlong)(int)local_80;
      uVar6 = (int)local_80 + 1;
      local_80 = CONCAT44(local_80._4_4_,uVar6);
      if (local_80._4_4_ < uVar6) {
        FUN_14476a5c8(&local_a8,uVar5 & 0xffffffff);
      }
      ppuVar8 = local_88;
      if (local_88 == (undefined **)0x0) {
        ppuVar8 = (undefined **)&local_a8;
      }
      ppuVar8[lVar11] = (undefined *)local_c8;
      if (local_c8 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_c8 + 1) = *(int *)(local_c8 + 1) + 1;
        UNLOCK();
        if (local_c8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_c8 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_c8)(local_c8,1);
          }
        }
      }
      if (local_b0 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_b0 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_b0)(local_b0,1);
        }
      }
      iVar9 = iVar9 + 0x14;
      uVar10 = uVar10 - 0x14;
    } while (iVar9 < (int)uVar2);
  }
  LeaveCriticalSection(local_e8);
  lVar3 = *(longlong *)param_1[1];
  if (local_88 == (undefined **)0x0) {
    *(undefined ****)(lVar3 + 0x90) = local_98;
    *(undefined8 *)(lVar3 + 0x98) = uStack_90;
    *(undefined4 *)(lVar3 + 0x80) = (undefined4)local_a8;
    *(undefined4 *)(lVar3 + 0x84) = local_a8._4_4_;
    *(undefined4 *)(lVar3 + 0x88) = uStack_a0;
    *(undefined4 *)(lVar3 + 0x8c) = uStack_9c;
  }
  *(undefined ***)(lVar3 + 0xa0) = local_88;
  local_88 = (undefined **)0x0;
  *(int *)(lVar3 + 0xa8) = (int)local_80;
  *(uint *)(lVar3 + 0xac) = local_80._4_4_;
  local_80 = 0x400000000;
  FUN_140b576f0();
  ppuVar8 = (undefined **)&local_a8;
  if (local_88 != (undefined **)0x0) {
    ppuVar8 = local_88;
  }
  FUN_144717c65(ppuVar8,local_80 & 0xffffffff);
  if (local_88 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144624258 FUN_144624258 body=101 status=ok
// SIG undefined FUN_144624258(void)

undefined8 * FUN_144624258(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14be806f0;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  return puVar2 + 1;
}



// FUNCTION 1446242c4 FUN_1446242c4 body=29 status=ok
// SIG undefined FUN_1446242c4(void)

void FUN_1446242c4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1446242e2 FUN_1446242e2 body=83 status=ok
// SIG undefined FUN_1446242e2(void)

undefined8 * FUN_1446242e2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14be806f0;
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



// FUNCTION 144624336 FUN_144624336 body=388 status=ok
// SIG undefined FUN_144624336(void)

void FUN_144624336(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_98 [40];
  LPCRITICAL_SECTION local_70;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = *param_1;
  fVar12 = *(float *)(lVar6 + 0xd8);
  local_70 = (LPCRITICAL_SECTION)(lVar6 + 0x68);
  EnterCriticalSection(local_70);
  iVar3 = *(int *)(lVar6 + 0x98);
  if ((longlong)iVar3 != 0) {
    fVar12 = fVar12 * fVar12;
    lVar7 = *(longlong *)(lVar6 + 0x90);
    plVar1 = (longlong *)(lVar6 + 200);
    lVar8 = 0;
    do {
      cVar2 = *(char *)(lVar7 + 0x10 + lVar8);
      fVar9 = *(float *)(lVar6 + 0xdc) - *(float *)(lVar7 + 4 + lVar8);
      fVar11 = *(float *)(lVar6 + 0xe0) - *(float *)(lVar7 + 8 + lVar8);
      fVar10 = *(float *)(lVar6 + 0xe4) - *(float *)(lVar7 + 0xc + lVar8);
      fVar9 = fVar10 * fVar10 + fVar11 * fVar11 + fVar9 * fVar9;
      *(bool *)(lVar7 + 0x10 + lVar8) = fVar9 < fVar12;
      if ((bool)cVar2 != fVar9 < fVar12) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0xa0));
        if (*(char *)(lVar7 + 0x10 + lVar8) == '\x01') {
          uVar4 = *(undefined4 *)(lVar7 + lVar8);
          iVar5 = *(int *)(lVar6 + 0xd0);
          *(uint *)(lVar6 + 0xd0) = iVar5 + 1U;
          if (*(uint *)(lVar6 + 0xd4) < iVar5 + 1U) {
            FUN_1497e717c(plVar1,iVar5);
          }
          *(undefined4 *)(*plVar1 + (longlong)iVar5 * 4) = uVar4;
        }
        else {
          local_64 = *(undefined4 *)(lVar7 + lVar8);
          FUN_1497e1e5c(plVar1,&local_64);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0xa0));
      }
      lVar8 = lVar8 + 0x14;
    } while ((longlong)iVar3 * 0x14 != lVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446244ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(local_70);
  return;
}



// FUNCTION 1446244d2 FUN_1446244d2 body=29 status=ok
// SIG undefined FUN_1446244d2(void)

undefined8 FUN_1446244d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446244ef FUN_1446244ef body=888 status=ok
// SIG undefined FUN_1446244ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446244ef(void)

{
  char cVar1;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  undefined *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14cc26838);
  if (cVar1 == '\0') {
    _DAT_14cc26838 = 0;
    uRam000000014cc26840 = 0;
  }
  if (local_58 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_58 = &DAT_14a19662d;
  local_50 = 4;
  local_4c = 0;
  FUN_14001a6c0(&local_58,1);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxVegetation",&PTR_FUN_14be7c380,1,0);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14be7cd10;
  local_78 = 0;
  FUN_14282b410(L"/Script/GbxVegetation",&PTR_FUN_14be7cd30,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxVegetation",&PTR_FUN_14be7dde0,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxVegetation",0,0,&PTR_FUN_14be7e100);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxVegetation",&PTR_FUN_14be7e520,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxVegetation",&PTR_FUN_14be7e9a0,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxVegetation",0,0,&PTR_FUN_14be7eb30);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GbxVegetation",&PTR_FUN_14be7f070,1,&PTR_FUN_14be7f020);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxVegetation",&PTR_FUN_14be7f560,1,0);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffffffffff00);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cc26980,L"Gbx.Vegetation.CollisionManager.DrawCollisions",&local_58,
                L"Draw the gbx dynamic vegetation manager collisions.");
  atexit(FUN_14461e49d);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffffffffff00);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cc26998,L"Gbx.Vegetation.CollisionManager.DrawAABBs",&local_58,
                L"Draw the gbx dynamic vegetation manager AABBs.");
  atexit(FUN_14461e4e2);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffffffffff00);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cc269b0,L"Gbx.Vegetation.DebugDraw.CollisionComponents",&local_58,
                L"Draw the gbx dynamic vegetation collision components.");
  atexit(FUN_14461e527);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffffffffff00);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cc269c8,L"Gbx.Vegetation.DebugDraw.Bones",&local_58,
                L"Draw the gbx dynamic vegetation bones.");
  atexit(FUN_14461f87e);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffffffffff00);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cc269e0,L"Gbx.Vegetation.DebugDraw.BranchCollisions",&local_58,
                L"Draw the gbx dynamic vegetation collisions.");
  atexit(FUN_14461f8c3);
  local_58 = (undefined *)0x800000014be7f96a;
  local_44 = 0xd;
  local_50 = FUN_14577453c();
  local_4c = 1;
  FUN_14675d942(&local_58);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffffffffff00);
  local_78 = CONCAT44(local_78._4_4_,0x2000000);
  FUN_140bd5914(&DAT_14cc26a00,L"Gbx.Vegetation.DisplayStatistics",&local_58,
                L"Display vegetation systems statistics.");
  atexit(FUN_14461fce6);
  FUN_145ca67fa();
  atexit((_func_5014 *)&LAB_144620756);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144624877 FUN_144624877 body=119 status=ok
// SIG undefined FUN_144624877(void)

void FUN_144624877(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14675dc26();
  atexit((_func_5014 *)&LAB_144624868);
  local_28 = 0x800000014be80750;
  local_14 = 0x16;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14675dcb6(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446248f0 FUN_1446248f0 body=57 status=ok
// SIG undefined FUN_1446248f0(void)

void FUN_1446248f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26ef0 == 0) {
    uVar1 = FUN_145c5c1ab();
    DAT_14cc26ef0 = FUN_14171c317(FUN_14675de33,uVar1,L"EChaosWeightMapTarget");
  }
  return;
}



// FUNCTION 144624929 FUN_144624929 body=57 status=ok
// SIG undefined FUN_144624929(void)

void FUN_144624929(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26f30 == 0) {
    uVar1 = FUN_145c5c1ab();
    DAT_14cc26f30 = FUN_14171c317(FUN_14675de92,uVar1,L"EChaosClothTetherMode");
  }
  return;
}



// FUNCTION 14462496e FUN_14462496e body=69 status=ok
// SIG undefined FUN_14462496e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14462496e(void)

{
  _DAT_14cc27010 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446249b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc27018,1);
  return;
}



// FUNCTION 1446249b4 FUN_1446249b4 body=2468 status=ok
// SIG undefined FUN_1446249b4(void)

void FUN_1446249b4(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  code **local_130;
  undefined1 *local_128;
  code *local_120;
  undefined4 local_10c;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 *local_d0;
  ulonglong *local_c8;
  longlong local_c0;
  undefined4 local_b8;
  code *local_b0;
  undefined4 local_a8;
  undefined8 local_a0 [2];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_3 == 0) goto LAB_144625160;
  lVar4 = FUN_1414cc2e6();
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
      != lVar4 + 0x30)) {
    param_3 = 0;
  }
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    lVar4 = FUN_1414cccc8();
    if (*(int *)(param_3 + 0x58) == *(int *)(param_3 + 0x84)) {
LAB_14462528c:
      lVar14 = 0;
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x18);
      uVar3 = (uint)((ulonglong)lVar4 >> 0x10);
      uVar12 = (uint)lVar4 & 0xffff;
      lVar14 = param_3 + 0x88;
      if (*(longlong *)(param_3 + 0x90) != 0) {
        lVar14 = *(longlong *)(param_3 + 0x90);
      }
      iVar13 = *(int *)(lVar14 + (ulonglong)
                                 (*(int *)(param_3 + 0x98) - 1U &
                                 (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar12) +
                                 (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar12 >> 4)) * 4);
      if (iVar13 == -1) goto LAB_14462528c;
      lVar14 = 0;
      do {
        plVar15 = (longlong *)(*(longlong *)(param_3 + 0x50) + (longlong)iVar13 * 0x18);
        if (*plVar15 == lVar4) {
          lVar14 = 0;
          if ((plVar15 != (longlong *)0x0) && (plVar15 + 1 != (longlong *)0x0)) {
            lVar4 = plVar15[1];
            if (lVar4 == 0) goto LAB_14462528c;
            lVar6 = *(longlong *)(lVar4 + 0x10);
            lVar5 = FUN_1414cccc8();
            lVar14 = 0;
            if (lVar6 == lVar5) {
              lVar14 = lVar4;
            }
          }
          break;
        }
        iVar13 = (int)plVar15[2];
      } while (iVar13 != -1);
    }
    *(longlong *)(param_1 + 0xa0) = lVar14;
    FUN_1409b8650(param_1);
    lVar4 = *(longlong *)(param_2 + 0xe58);
    dVar2 = 1.0;
    if (*(char *)(param_1 + 0xc1) == '\x01') {
      dVar2 = (double)*(float *)(lVar4 + 0xd4);
    }
    if (dVar2 <= 9.99999993922529e-09) {
      dVar2 = 9.99999993922529e-09;
    }
    lVar14 = *(longlong *)(param_1 + 0x18);
    *(double *)(lVar14 + 0x298) = 1.0 / dVar2;
    *(double *)(lVar14 + 0x290) = 1.0 / dVar2;
    lVar14 = *(longlong *)(param_1 + 0x18);
    uVar18 = 0;
    uVar19 = 0;
    uVar8 = 0;
    uVar20 = 0;
    uVar21 = 0;
    if (*(char *)(param_1 + 0xc1) == '\x01') {
      uVar20 = (undefined4)*(undefined8 *)(lVar4 + 0x60);
      uVar21 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x60) >> 0x20);
      uVar18 = (undefined4)*(undefined8 *)(lVar4 + 0x50);
      uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x50) >> 0x20);
      uVar8 = *(undefined8 *)(lVar4 + 0x58);
    }
    *(ulonglong *)(lVar14 + 0x2b8) = CONCAT44(uVar19,uVar18);
    *(undefined8 *)(lVar14 + 0x2c0) = uVar8;
    *(ulonglong *)(lVar14 + 0x2c8) = CONCAT44(uVar21,uVar20);
    *(ulonglong *)(lVar14 + 0x2a0) = CONCAT44(uVar19,uVar18);
    *(undefined8 *)(lVar14 + 0x2a8) = uVar8;
    *(ulonglong *)(lVar14 + 0x2b0) = CONCAT44(uVar21,uVar20);
    bVar17 = *(char *)(param_1 + 0xc1) != '\0';
    puVar7 = &DAT_14c8463d0;
    if (bVar17) {
      puVar7 = (undefined8 *)(lVar4 + 0x30);
    }
    lVar14 = *(longlong *)(param_1 + 0x18);
    puVar9 = &DAT_14c8463e0;
    if (bVar17) {
      puVar9 = (undefined8 *)(lVar4 + 0x40);
    }
    uVar18 = *(undefined4 *)puVar9;
    uVar19 = *(undefined4 *)((longlong)puVar9 + 4);
    uVar20 = *(undefined4 *)(puVar9 + 1);
    uVar21 = *(undefined4 *)((longlong)puVar9 + 0xc);
    uVar8 = puVar7[1];
    *(undefined8 *)(lVar14 + 0x2d0) = *puVar7;
    *(undefined8 *)(lVar14 + 0x2d8) = uVar8;
    *(undefined4 *)(lVar14 + 0x2e0) = uVar18;
    *(undefined4 *)(lVar14 + 0x2e4) = uVar19;
    *(undefined4 *)(lVar14 + 0x2e8) = uVar20;
    *(undefined4 *)(lVar14 + 0x2ec) = uVar21;
  }
  lVar4 = FUN_1414ccbe2();
  if (*(int *)(param_3 + 0x58) != *(int *)(param_3 + 0x84)) {
    lVar4 = *(longlong *)(lVar4 + 0x18);
    uVar3 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar12 = (uint)lVar4 & 0xffff;
    lVar14 = param_3 + 0x88;
    if (*(longlong *)(param_3 + 0x90) != 0) {
      lVar14 = *(longlong *)(param_3 + 0x90);
    }
    iVar13 = *(int *)(lVar14 + (ulonglong)
                               (*(int *)(param_3 + 0x98) - 1U &
                               (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar12) +
                               (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar12 >> 4)) * 4);
    if (iVar13 != -1) {
      do {
        plVar15 = (longlong *)(*(longlong *)(param_3 + 0x50) + (longlong)iVar13 * 0x18);
        if (*plVar15 == lVar4) {
          if ((((plVar15 != (longlong *)0x0) && (plVar15 + 1 != (longlong *)0x0)) &&
              (lVar4 = plVar15[1], lVar4 != 0)) &&
             (lVar14 = *(longlong *)(lVar4 + 0x10), lVar6 = FUN_1414ccbe2(), lVar14 == lVar6)) {
            local_10c = param_4;
            local_f8 = lVar4;
            puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
            lVar4 = *(longlong *)(param_2 + 0xa8);
            if (lVar4 == 0) {
              local_a0[0] = *(undefined8 *)(param_2 + 0x18);
              FUN_1400021e4(local_a0,&local_b0);
            }
            else {
              local_b0 = *(code **)(lVar4 + 0x18);
              FUN_1400021e4(&local_b0,&local_e0);
              local_a0[0] = CONCAT44(local_a0[0]._4_4_,3);
              local_90 = (undefined4)local_e0;
              uStack_8c = local_e0._4_4_;
              uStack_88 = (undefined4)uStack_d8;
              uStack_84 = uStack_d8._4_4_;
              local_e0 = 0;
              uStack_d8 = 0;
              local_b0 = *(code **)(param_2 + 0x18);
              FUN_1400021e4(&local_b0,&local_f0);
              local_80 = 3;
              local_70 = (undefined4)local_f0;
              uStack_6c = local_f0._4_4_;
              uStack_68 = (undefined4)uStack_e8;
              uStack_64 = uStack_e8._4_4_;
              local_f0 = 0;
              uStack_e8 = 0;
              local_c8 = local_60;
              local_d0 = local_a0;
              FUN_1407adb6e(&local_c0);
              FUN_140230a63();
              FUN_140230ad0(&DAT_14c8731a8,&local_b0,L"{0}|{1}",&local_c0);
            }
            if (local_b0 != (code *)0x0) {
              FUN_1400020a8();
            }
            if (lVar4 != 0) {
              FUN_1407adb3e(local_c0,local_b8);
              if (local_c0 != 0) {
                FUN_1400020a8();
              }
              lVar4 = 0x40;
              do {
                if (*(longlong *)((longlong)&local_b0 + lVar4) != 0) {
                  FUN_1400020a8();
                }
                lVar4 = lVar4 + -0x20;
              } while (lVar4 != 0);
            }
            *puVar7 = &PTR_FUN_14be85070;
            puVar7[1] = param_3;
            puVar7[2] = param_2;
            iVar13 = *(int *)(param_1 + 0x28);
            lVar4 = (longlong)iVar13;
            *(uint *)(param_1 + 0x28) = iVar13 + 1U;
            if (*(uint *)(param_1 + 0x2c) < iVar13 + 1U) {
              FUN_14190ca7a(param_1 + 0x20,iVar13);
            }
            *(undefined8 **)(*(longlong *)(param_1 + 0x20) + lVar4 * 8) = puVar7;
            lVar14 = *(longlong *)(param_2 + 0x658);
            local_100 = lVar4;
            if (lVar14 == 0) {
              lVar14 = *(longlong *)(param_2 + 0x660);
              if ((DAT_14c950c29 & lVar14 != 0) != 0) goto LAB_144625293;
              if (lVar14 != 0) goto LAB_144624e63;
LAB_1446251b9:
              uVar8 = 0;
            }
            else {
              if (DAT_14c950c29 == 1) {
LAB_144625293:
                FUN_14689c22e(lVar14);
              }
LAB_144624e63:
              if (DAT_14cb06da8 == 0) {
                local_130 = &local_b0;
                local_b0 = FUN_1449e2820;
                local_120 = FUN_14081d0ea;
                local_128 = &LAB_1464003b0;
                local_138 = &LAB_147d17bdf;
                local_140 = &LAB_1417edf22;
                local_148 = L"Engine";
                local_150 = 0;
                local_158 = 0x10000000;
                local_160 = 8;
                local_168 = 0x588;
                FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
              }
              if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38))
                 || (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
              goto LAB_1446251b9;
              plVar15 = *(longlong **)(param_2 + 0x658);
              if (plVar15 == (longlong *)0x0) {
                plVar15 = *(longlong **)(param_2 + 0x660);
                if ((DAT_14c950c29 & plVar15 != (longlong *)0x0) != 0) goto LAB_1446252a0;
                if (plVar15 != (longlong *)0x0) goto LAB_144624eb4;
LAB_1446251e3:
                plVar15 = (longlong *)0x0;
              }
              else {
                if (DAT_14c950c29 != 0) {
LAB_1446252a0:
                  FUN_14689c22e(plVar15);
                  if (DAT_14cb06da8 == 0) {
                    local_130 = &local_b0;
                    local_b0 = FUN_1449e2820;
                    local_120 = FUN_14081d0ea;
                    local_128 = &LAB_1464003b0;
                    local_138 = &LAB_147d17bdf;
                    local_140 = &LAB_1417edf22;
                    local_148 = L"Engine";
                    local_150 = 0;
                    local_158 = 0x10000000;
                    local_160 = 8;
                    local_168 = 0x588;
                    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
                  }
                }
LAB_144624eb4:
                if ((*(int *)(plVar15[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar15[2] + 0x30) +
                     (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
                goto LAB_1446251e3;
              }
              uVar8 = (**(code **)(*plVar15 + 0x310))(plVar15);
            }
            local_108 = param_1 + 0x40;
            puVar7 = (undefined8 *)FUN_14001cc68(0x88,0x10);
            *puVar7 = *(undefined8 *)(param_3 + 0x48);
            puVar7[1] = uVar8;
            puVar7[2] = 0;
            *(undefined1 *)(puVar7 + 3) = 0;
            plVar15 = puVar7 + 4;
            puVar7[10] = 0;
            *(undefined4 *)(puVar7 + 0xb) = 0;
            puVar7[6] = 0;
            puVar7[7] = 0;
            puVar7[4] = 0;
            puVar7[5] = 0;
            *(undefined8 *)((longlong)puVar7 + 0x5c) = 0xffffffff00000080;
            *(undefined4 *)((longlong)puVar7 + 100) = 0;
            puVar7[0xe] = 0;
            *(undefined4 *)(puVar7 + 0xf) = 0;
            puVar7[0x10] = 0x3ff0000000000000;
            FUN_14190d020(plVar15);
            bVar17 = true;
            do {
              bVar16 = bVar17;
              puVar9 = (undefined8 *)FUN_14001cc68(0x98,0x10);
              puVar9[0xd] = 0;
              *(undefined4 *)(puVar9 + 0xe) = 0;
              *puVar9 = 0;
              puVar9[1] = 0;
              puVar9[2] = 0;
              puVar9[3] = 0;
              puVar9[4] = 0;
              puVar9[5] = 0;
              puVar9[6] = 0;
              puVar9[7] = 0;
              *(undefined4 *)(puVar9 + 8) = 0;
              puVar9[9] = 0;
              puVar9[10] = 0;
              *(undefined8 *)((longlong)puVar9 + 0x74) = 0xffffffff00000080;
              *(undefined4 *)((longlong)puVar9 + 0x7c) = 0;
              puVar9[0x11] = 0;
              *(undefined4 *)(puVar9 + 0x12) = 0;
              iVar13 = *(int *)(puVar7 + 5);
              *(uint *)(puVar7 + 5) = iVar13 + 1U;
              if (*(uint *)((longlong)puVar7 + 0x2c) < iVar13 + 1U) {
                FUN_14980217c(plVar15,iVar13);
              }
              *(undefined8 **)(*plVar15 + (longlong)iVar13 * 8) = puVar9;
              bVar17 = false;
            } while (bVar16);
            iVar13 = *(int *)(param_1 + 0x48);
            lVar4 = (longlong)iVar13;
            *(uint *)(param_1 + 0x48) = iVar13 + 1U;
            if (*(uint *)(param_1 + 0x4c) < iVar13 + 1U) {
              FUN_14190cbdc(local_108,iVar13);
            }
            *(undefined8 **)(*(longlong *)(param_1 + 0x40) + lVar4 * 8) = puVar7;
            *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + lVar4 * 8) + 0x10) =
                 param_1 + 0x60;
            puVar10 = (undefined1 *)FUN_14001cc68(0x28,0x10);
            uVar18 = local_10c;
            *puVar10 = 0;
            *(undefined8 *)(puVar10 + 8) = 0;
            *(undefined8 *)(puVar10 + 0x10) = 0;
            *(undefined8 *)(puVar10 + 0x18) = 0;
            *(undefined8 *)(puVar10 + 0x20) = 0;
            iVar13 = *(int *)(param_1 + 0x58);
            lVar14 = (longlong)iVar13;
            *(uint *)(param_1 + 0x58) = iVar13 + 1U;
            if (*(uint *)(param_1 + 0x5c) < iVar13 + 1U) {
              FUN_14190cd3e(param_1 + 0x50,iVar13);
            }
            *(undefined1 **)(*(longlong *)(param_1 + 0x50) + lVar14 * 8) = puVar10;
            FUN_1409b86f4(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar14 * 8),local_f8,0);
            uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar4 * 8);
            local_b0 = (code *)0x0;
            local_a8 = 1;
            FUN_140dc2d7e(&local_b0,1,0);
            *(undefined8 *)local_b0 = uVar8;
            uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + local_100 * 8);
            uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar14 * 8);
            uVar11 = FUN_14001cc68(0x150,0x10);
            local_168 = uVar18;
            FUN_140dc037e(uVar11,uVar1,uVar8,&local_b0);
            iVar13 = *(int *)(param_1 + 0x38);
            lVar4 = (longlong)iVar13;
            *(uint *)(param_1 + 0x38) = iVar13 + 1U;
            if (*(uint *)(param_1 + 0x3c) < iVar13 + 1U) {
              FUN_14190cea0((longlong *)(param_1 + 0x30),iVar13);
            }
            *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar4 * 8) = uVar11;
            if (local_b0 != (code *)0x0) {
              FUN_1400020a8();
            }
            FUN_14462535a(*(undefined8 *)(param_1 + 0x18),
                          *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar4 * 8));
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + lVar4 * 8);
            LOCK();
            *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x38);
            UNLOCK();
            LOCK();
            *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + *(int *)(lVar4 + 0x140);
            UNLOCK();
            LOCK();
            *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + *(int *)(lVar4 + 0x144);
            UNLOCK();
          }
          break;
        }
        iVar13 = (int)plVar15[2];
      } while (iVar13 != -1);
    }
  }
LAB_144625160:
  if ((local_60[0] ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14462535a FUN_14462535a body=260 status=ok
// SIG undefined FUN_14462535a(void)

void FUN_14462535a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x78);
  iVar1 = *(int *)(param_1 + 0x80);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong **)(lVar3 + uVar4) == param_2) {
        if ((int)(~uVar4 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 8;
    } while (lVar5 * 8 - uVar4 != 0);
  }
  *(uint *)(param_1 + 0x80) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x84) < iVar1 + 1U) {
    FUN_14190d0b2((longlong *)(param_1 + 0x78),iVar1);
    lVar3 = *(longlong *)(param_1 + 0x78);
  }
  *(longlong **)(lVar3 + lVar5 * 8) = param_2;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x338);
    FUN_1429bd144(*(longlong *)(param_1 + 0x70),uVar2);
    *(undefined4 *)(param_1 + 0x338) = uVar2;
    *(undefined4 *)(param_1 + 0x33c) = 0;
  }
  FUN_1408a78c2(param_2,param_1);
  if ((*param_2 != 0) && (lVar3 = param_2[3], (longlong)(int)lVar3 != 0)) {
    lVar5 = param_2[2];
    lVar6 = 0;
    do {
      FUN_144628bac(*(undefined8 *)(lVar5 + lVar6),param_1,param_2);
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  FUN_144628ec2(param_2,param_1);
  if (*(longlong *)(param_1 + 0x70) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x108);
  }
  *(undefined4 *)(param_1 + 0x338) = uVar2;
  return;
}



// FUNCTION 14462545e FUN_14462545e body=1005 status=ok
// SIG undefined FUN_14462545e(void)

ulonglong FUN_14462545e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  float fVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  double *pdVar18;
  undefined8 *puVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  bool bVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  float fVar30;
  undefined1 auStack_88 [32];
  LARGE_INTEGER local_68;
  ulonglong local_60;
  
  uVar13 = DAT_14c707940 ^ (ulonglong)auStack_88;
  fVar25 = *(float *)(param_2 + 0xc4);
  local_60 = uVar13;
  if ((fVar25 != 0.0) || (NAN(fVar25))) {
    fVar30 = fVar25;
    if (DAT_14c7679e0 != '\0') {
      fVar30 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x2fc);
      fVar30 = (fVar25 - fVar30) * 0.1 + fVar30;
    }
    QueryPerformanceCounter(&local_68);
    dVar10 = (double)local_68.QuadPart * DAT_14c83f420;
    fVar3 = *(float *)(param_1 + 0xbc);
    bVar7 = *(byte *)(param_2 + 0xcc);
    bVar22 = bVar7 < 2;
    bVar9 = fVar3 != 0.0;
    LOCK();
    *(bool *)(param_1 + 0xc0) = bVar7 != 0;
    UNLOCK();
    lVar16 = *(longlong *)(param_1 + 0x18);
    uVar24 = 0;
    uVar26 = 0;
    uVar29 = 0;
    uVar27 = 0;
    uVar28 = 0;
    if (*(char *)(param_1 + 0xc1) == '\x01') {
      uVar27 = (undefined4)*(undefined8 *)(param_2 + 0x60);
      uVar28 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x60) >> 0x20);
      uVar24 = (undefined4)*(undefined8 *)(param_2 + 0x50);
      uVar26 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
      uVar29 = *(undefined8 *)(param_2 + 0x58);
    }
    *(ulonglong *)(lVar16 + 0x2b8) = CONCAT44(uVar26,uVar24);
    *(undefined8 *)(lVar16 + 0x2c0) = uVar29;
    *(ulonglong *)(lVar16 + 0x2c8) = CONCAT44(uVar28,uVar27);
    if (!bVar9 || !bVar22) {
      *(ulonglong *)(lVar16 + 0x2a0) = CONCAT44(uVar26,uVar24);
      *(undefined8 *)(lVar16 + 0x2a8) = uVar29;
      *(ulonglong *)(lVar16 + 0x2b0) = CONCAT44(uVar28,uVar27);
    }
    bVar23 = *(char *)(param_1 + 0xc1) != '\0';
    puVar17 = &DAT_14c8463d0;
    if (bVar23) {
      puVar17 = (undefined8 *)(param_2 + 0x30);
    }
    puVar19 = &DAT_14c8463e0;
    if (bVar23) {
      puVar19 = (undefined8 *)(param_2 + 0x40);
    }
    lVar16 = *(longlong *)(param_1 + 0x18);
    uVar29 = *puVar19;
    uVar11 = puVar19[1];
    uVar12 = puVar17[1];
    *(undefined8 *)(lVar16 + 0x2d0) = *puVar17;
    *(undefined8 *)(lVar16 + 0x2d8) = uVar12;
    *(undefined8 *)(lVar16 + 0x2e0) = uVar29;
    *(undefined8 *)(lVar16 + 0x2e8) = uVar11;
    dVar5 = *(double *)(param_2 + 0xb8);
    dVar6 = *(double *)(param_2 + 0xb0);
    lVar16 = *(longlong *)(param_1 + 0x18);
    uVar24 = *(undefined4 *)(param_2 + 0xc0);
    *(float *)(lVar16 + 0x34c) = (float)*(double *)(param_2 + 0xa8) * 100.0;
    *(float *)(lVar16 + 0x350) = (float)dVar6 * 100.0;
    *(float *)(lVar16 + 0x354) = (float)dVar5 * 100.0;
    *(undefined4 *)(lVar16 + 0x358) = uVar24;
    pdVar18 = (double *)(param_2 + 0x90);
    if (*(char *)(param_1 + 0xc2) != '\0') {
      pdVar18 = (double *)(param_1 + 200);
    }
    dVar5 = pdVar18[2];
    lVar16 = *(longlong *)(param_1 + 0x18);
    dVar6 = pdVar18[1];
    *(float *)(lVar16 + 0x340) = (float)*pdVar18;
    *(float *)(lVar16 + 0x344) = (float)dVar6;
    *(float *)(lVar16 + 0x348) = (float)dVar5;
    *(byte *)(*(longlong *)(param_1 + 0x18) + 0x35c) = *(byte *)(param_1 + 0xc2) ^ 1;
    if (bVar9 && bVar22) {
      dVar5 = ((double)fVar30 * (double)*(float *)(param_2 + 200)) / (double)fVar25;
    }
    else {
      dVar5 = 1.0;
    }
    *(double *)(*(longlong *)(param_1 + 0x18) + 0x2f0) = dVar5;
    iVar8 = *(int *)(param_1 + 0x38);
    if ((longlong)iVar8 != 0) {
      lVar16 = *(longlong *)(param_1 + 0x30);
      lVar20 = 0;
      do {
        *(undefined4 *)(*(longlong *)(lVar16 + lVar20) + 0x38) = *(undefined4 *)(param_2 + 0xd0);
        if (!bVar9 || !bVar22) {
          *(undefined1 *)(*(longlong *)(lVar16 + lVar20) + 0x44) = 1;
        }
        if (bVar7 != 0) {
          *(undefined1 *)(*(longlong *)(lVar16 + lVar20) + 0x45) = 1;
        }
        lVar20 = lVar20 + 8;
      } while ((longlong)iVar8 * 8 != lVar20);
    }
    lVar16 = *(longlong *)(param_1 + 0x18);
    if ((*(char *)(lVar16 + 0x480) == '\0') && (0 < *(int *)(param_2 + 0x108))) {
      FUN_1497eee12(lVar16,param_2 + 0xe0);
    }
    else {
      FUN_14462584c(lVar16,fVar30);
      if ((longlong)*(int *)(param_1 + 0x58) != 0) {
        plVar14 = *(longlong **)(param_1 + 0x50);
        plVar1 = plVar14 + *(int *)(param_1 + 0x58);
        do {
          lVar16 = (longlong)*(int *)(**(longlong **)(*plVar14 + 0x18) + 0x50);
          if (lVar16 != 0) {
            lVar20 = *(longlong *)(**(longlong **)(*plVar14 + 0x18) + 0x48);
            lVar21 = 0;
            do {
              pbVar2 = (byte *)(lVar20 + lVar21);
              *pbVar2 = *pbVar2 & 0x3f;
              lVar21 = lVar21 + 1;
            } while (lVar16 != lVar21);
          }
          plVar14 = plVar14 + 1;
        } while (plVar14 != plVar1);
      }
    }
    lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x68);
    if (lVar16 == 0) {
      puVar15 = (undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + 0x440);
    }
    else {
      puVar15 = (undefined4 *)(lVar16 + 0x10);
    }
    LOCK();
    *(undefined4 *)(param_1 + 0xb4) = *puVar15;
    UNLOCK();
    QueryPerformanceCounter(&local_68);
    fVar25 = (float)((((double)local_68.QuadPart * DAT_14c83f420 + 16777216.0) -
                     (dVar10 + 16777216.0)) * 1000.0);
    LOCK();
    uVar4 = *(uint *)(param_1 + 0xbc);
    *(uint *)(param_1 + 0xbc) =
         -(uint)(fVar3 != 0.0) & (uint)((fVar25 - fVar3) * 0.03 + fVar3) |
         ~-(uint)(fVar3 != 0.0) & (uint)fVar25;
    uVar13 = (ulonglong)uVar4;
    UNLOCK();
  }
  if ((local_60 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 14462584c FUN_14462584c body=5196 status=ok
// SIG undefined FUN_14462584c(void)

void FUN_14462584c(code *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  char *pcVar14;
  longlong lVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  code **ppcVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  undefined4 uVar25;
  uint uVar26;
  code *pcVar27;
  longlong *plVar28;
  code *pcVar29;
  undefined4 *puVar30;
  uint *puVar31;
  ulonglong uVar32;
  undefined4 uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  longlong *plVar37;
  longlong lVar38;
  int iVar39;
  int iVar40;
  uint uVar41;
  int iVar42;
  int iVar43;
  longlong lVar44;
  longlong lVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  longlong lVar48;
  uint *puVar49;
  bool bVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auStack_1f8 [32];
  code *local_1d8;
  longlong local_1d0;
  code *local_1c8;
  code *local_1c0;
  ulonglong local_1b8;
  code *local_1b0;
  code *local_1a8;
  longlong local_1a0;
  code *local_198;
  int local_18c;
  code *local_188;
  uint *local_180;
  ulonglong local_178;
  undefined1 *local_170;
  undefined8 *local_168;
  undefined1 *local_160;
  undefined8 *local_158;
  code *local_150;
  code **local_148;
  float *local_140;
  uint local_138;
  float local_12c;
  float fStack_128;
  float local_124;
  code *local_120;
  code **local_118;
  undefined8 *local_110;
  code *local_108;
  undefined8 local_100;
  code *local_f8;
  code **local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  code *local_a8;
  undefined8 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  *(undefined4 *)(param_1 + 0x2fc) = param_2;
  uVar11 = *(undefined8 *)(param_1 + 0x1f0);
  uVar18 = *(undefined8 *)(param_1 + 0x1e0);
  uVar19 = *(undefined8 *)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x1f8) = uVar18;
  *(undefined8 *)(param_1 + 0x200) = uVar19;
  *(undefined8 *)(param_1 + 0x208) = uVar11;
  uVar11 = *(undefined8 *)(param_1 + 0x118);
  uVar18 = *(undefined8 *)(param_1 + 0x108);
  uVar19 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x120) = uVar18;
  *(undefined8 *)(param_1 + 0x128) = uVar19;
  *(undefined8 *)(param_1 + 0x130) = uVar11;
  local_d8 = *(float **)(param_1 + 0x160);
  pcVar29 = *(code **)(param_1 + 0x150);
  ppcVar20 = *(code ***)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x178);
  local_e8._0_4_ = SUB84(pcVar29,0);
  local_e8._4_4_ = (undefined4)((ulonglong)pcVar29 >> 0x20);
  uStack_e0._0_4_ = SUB84(ppcVar20,0);
  uStack_e0._4_4_ = (undefined4)((ulonglong)ppcVar20 >> 0x20);
  *(float *)(param_1 + 0x168) = (float)local_e8;
  *(undefined4 *)(param_1 + 0x16c) = local_e8._4_4_;
  *(undefined4 *)(param_1 + 0x170) = (undefined4)uStack_e0;
  *(undefined4 *)(param_1 + 0x174) = uStack_e0._4_4_;
  *(float **)(param_1 + 0x178) = local_d8;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  uStack_e0 = ppcVar20;
  if ((longlong)*(int *)(param_1 + 0x80) == 0) {
    uVar33 = 0;
  }
  else {
    plVar37 = *(longlong **)(param_1 + 0x78);
    plVar28 = plVar37 + *(int *)(param_1 + 0x80);
    local_e8 = pcVar29;
    do {
      plVar12 = (longlong *)*plVar37;
      if ((*plVar12 != 0) && (lVar21 = plVar12[3], (longlong)(int)lVar21 != 0)) {
        lVar48 = plVar12[2];
        lVar45 = 0;
        do {
          FUN_144628bac(*(undefined8 *)(lVar48 + lVar45),param_1,plVar12);
          lVar45 = lVar45 + 8;
        } while ((longlong)(int)lVar21 * 8 != lVar45);
      }
      plVar37 = plVar37 + 1;
    } while (plVar37 != plVar28);
    uVar33 = *(undefined4 *)(param_1 + 0x80);
  }
  local_158 = &local_e8;
  local_160 = &LAB_144639d14;
  local_e8 = param_1;
  FUN_1400bd65e(uVar33,&local_160,0);
  dVar8 = *(double *)(param_1 + 0x298);
  local_124 = (float)((*(double *)(param_1 + 0x2c8) - *(double *)(param_1 + 0x2b0)) / dVar8);
  fStack_128 = (float)((*(double *)(param_1 + 0x2c0) - *(double *)(param_1 + 0x2a8)) / dVar8);
  local_12c = (float)((*(double *)(param_1 + 0x2b8) - *(double *)(param_1 + 0x2a0)) / dVar8);
  uVar22 = ~-(uint)(0.0 < DAT_14cc27330) & 0x7f7fffff |
           (uint)(DAT_14cc27330 * DAT_14cc27330) & -(uint)(0.0 < DAT_14cc27330);
  local_1d8 = param_1;
  if (*(longlong *)(param_1 + 0x68) == 0) {
    lVar21 = *(longlong *)(param_1 + 0x70);
    local_148 = (code **)(lVar21 + 0x208);
    local_100 = &local_150;
    local_140 = &local_12c;
    local_108 = FUN_144639946;
    local_a8 = (code *)0x0;
    local_a0 = 0x800000000;
    iVar23 = *(int *)(lVar21 + 0xe8);
    local_a0._0_4_ = 0;
    local_150 = param_1;
    local_138 = uVar22;
    if ((longlong)iVar23 != 0) {
      lVar48 = *(longlong *)(lVar21 + 0xe0);
      lVar45 = 0;
      uVar46 = 0;
      do {
        uVar32 = local_a0;
        iVar34 = *(int *)(lVar48 + lVar45);
        uVar47 = (ulonglong)iVar34;
        if ((longlong)uVar47 < 1) {
          uVar47 = (ulonglong)(uint)-iVar34;
        }
        else {
          lVar38 = (longlong)(int)local_a0;
          uVar22 = (int)local_a0 + 1;
          local_a0 = CONCAT44(local_a0._4_4_,uVar22);
          if (local_a0._4_4_ < uVar22) {
            FUN_146d8b45e(&local_e8,uVar32 & 0xffffffff);
          }
          pcVar29 = local_a8;
          if (local_a8 == (code *)0x0) {
            pcVar29 = (code *)&local_e8;
          }
          *(ulonglong *)(pcVar29 + lVar38 * 8) = uVar46 | uVar47 << 0x20;
        }
        lVar45 = lVar45 + 4;
        uVar46 = uVar47 & 0xffffffff;
      } while ((longlong)iVar23 * 4 != lVar45);
    }
    local_110 = &local_e8;
    local_f0 = &local_120;
    local_118 = &local_108;
    local_f8 = FUN_144b0610c;
    local_120 = (code *)(lVar21 + 0xd8);
    FUN_1400bd65e((int)local_a0);
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
    pcVar29 = local_1d8;
    lVar21 = *(longlong *)(param_1 + 0x70);
    if ((longlong)*(int *)(lVar21 + 0x1a0) != 0) {
      local_198 = *(code **)(lVar21 + 0x198);
      pcVar27 = local_198 + (longlong)*(int *)(lVar21 + 0x1a0) * 4;
      uVar22 = 0;
      local_1c0 = pcVar27;
      do {
        uVar24 = *(uint *)local_198;
        if ((int)uVar24 < 1) {
          uVar24 = -uVar24;
        }
        else if ((int)uVar22 < (int)uVar24) {
          uVar46 = (ulonglong)uVar22;
          lVar48 = uVar46 * 4;
          lVar45 = uVar46 * 0x30;
          lVar38 = uVar46 * 0xc;
          do {
            local_1d0 = *(longlong *)(lVar21 + 400);
            FUN_144b3cccc(*(longlong *)(pcVar29 + 0x1e8) + lVar45,&local_e8);
            lVar13 = *(longlong *)(pcVar29 + 0x1e8);
            puVar4 = (undefined8 *)(lVar13 + 0x20 + lVar45);
            *puVar4 = local_c8;
            puVar4[1] = uStack_c0;
            plVar28 = (longlong *)(lVar13 + 0x10 + lVar45);
            *plVar28 = (longlong)local_d8;
            plVar28[1] = CONCAT44(uStack_cc,uStack_d0);
            *(longlong *)(lVar13 + lVar45) = (longlong)local_e8;
            ((longlong *)(lVar13 + lVar45))[1] = (longlong)uStack_e0;
            auVar52._0_8_ = CONCAT44(fStack_128,local_12c) ^ 0x8000000080000000;
            auVar52._8_4_ = 0x80000000;
            auVar52._12_4_ = 0x80000000;
            auVar53._4_4_ = 0x80000000;
            auVar53._0_4_ = -local_124;
            auVar53._8_4_ = 0x80000000;
            auVar53._12_4_ = 0x80000000;
            auVar53 = insertps(auVar52,auVar53,0x28);
            pfVar5 = (float *)(*(longlong *)(pcVar29 + 0x1e8) + 0x10 + lVar45);
            fVar51 = pfVar5[1];
            fVar7 = pfVar5[2];
            fVar16 = pfVar5[3];
            pfVar6 = (float *)(*(longlong *)(pcVar29 + 0x1e8) + 0x10 + lVar45);
            *pfVar6 = auVar53._0_4_ + *pfVar5;
            pfVar6[1] = auVar53._4_4_ + fVar51;
            pfVar6[2] = auVar53._8_4_ + fVar7;
            pfVar6[3] = auVar53._12_4_ + fVar16;
            auVar53 = *(undefined1 (*) [16])(*(longlong *)(pcVar29 + 0x1e8) + 0x10 + lVar45);
            lVar13 = *(longlong *)(local_1d0 + 0x28);
            *(longlong *)(lVar13 + lVar38) = auVar53._0_8_;
            uVar11 = extractps(auVar53,2);
            *(undefined8 *)(lVar13 + 8 + lVar38) = uVar11;
            puVar30 = (undefined4 *)(*(longlong *)(pcVar29 + 0x1e8) + lVar45);
            uVar33 = puVar30[1];
            uVar25 = puVar30[2];
            uVar17 = puVar30[3];
            puVar2 = (undefined4 *)(*(longlong *)(local_1d0 + 0x48) + lVar48 * 4);
            *puVar2 = *puVar30;
            puVar2[1] = uVar33;
            puVar2[2] = uVar25;
            puVar2[3] = uVar17;
            uVar22 = uVar22 + 1;
            lVar48 = lVar48 + 4;
            lVar45 = lVar45 + 0x30;
            lVar38 = lVar38 + 0xc;
            pcVar27 = local_1c0;
          } while (uVar24 != uVar22);
        }
        uVar22 = uVar24;
        local_198 = local_198 + 4;
      } while (local_198 != pcVar27);
    }
  }
  else {
    FUN_146b309a8(*(longlong *)(param_1 + 0x68) + 0x4c8,&local_150);
    local_d8 = &local_12c;
    local_118 = (code **)&local_e8;
    local_120 = FUN_1446392d6;
    local_e8 = param_1;
    uStack_e0 = &local_150;
    uStack_d0 = uVar22;
    FUN_1400bd65e((ulonglong)local_148 & 0xffffffff);
    if (local_150 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  pcVar27 = local_1d8;
  pcVar29 = local_1d8 + 0x2b8;
  local_198 = local_1d8 + 0x2a0;
  FUN_1402c1cc6(local_1d8 + 8);
  if (0.0 < *(float *)(pcVar27 + 0x2fc)) {
    lVar21 = *(longlong *)(pcVar27 + 0x68);
    if (((lVar21 == 0) && (*(longlong *)(pcVar27 + 0x70) == 0)) ||
       ((*(int *)(pcVar27 + 0x468) == 0 && (*(int *)(pcVar27 + 0x478) == 0)))) {
      if (*(int *)(pcVar27 + 0x3bc) < 0) {
        *(undefined4 *)(pcVar27 + 0x3b8) = 0;
        FUN_1447a8aa0(pcVar27 + 0x3b0,0);
      }
      else {
        *(undefined4 *)(pcVar27 + 0x3b8) = 0;
      }
      *(undefined4 *)(pcVar27 + 0x3a8) = 0;
      if (*(int *)(pcVar27 + 0x3ac) < 0) {
        FUN_1447a8aa0(pcVar27 + 0x3a0,0);
      }
    }
    else {
      pcVar1 = pcVar27 + 0x360;
      local_1c0 = pcVar29;
      local_188 = pcVar1;
      if (lVar21 == 0) {
        lVar21 = *(longlong *)(pcVar27 + 0x70);
        if ((longlong)*(int *)(lVar21 + 0xe8) == 0) {
          iVar23 = 0;
        }
        else {
          lVar48 = 0;
          iVar23 = 0;
          iVar34 = 0;
          do {
            iVar35 = *(int *)(*(longlong *)(lVar21 + 0xe0) + lVar48);
            iVar40 = iVar34 + iVar35;
            iVar34 = -iVar35;
            if (-1 < -iVar35) {
              iVar34 = iVar35;
            }
            if (iVar35 < 1) {
              iVar40 = 0;
            }
            iVar23 = iVar23 + iVar40;
            lVar48 = lVar48 + 4;
          } while ((longlong)*(int *)(lVar21 + 0xe8) * 4 != lVar48);
        }
        uVar22 = 0;
        FUN_14051b394(pcVar1,*(undefined4 *)(lVar21 + 0x38),0);
        FUN_1406ea1ca(pcVar27 + 0x370,iVar23,0);
        lVar21 = *(longlong *)(local_1d8 + 0x70);
        pcVar27 = local_1d8;
        if ((longlong)*(int *)(lVar21 + 0xe8) != 0) {
          puVar31 = *(uint **)(lVar21 + 0xe0);
          puVar49 = puVar31 + *(int *)(lVar21 + 0xe8);
          lVar48 = 0;
          do {
            uVar24 = *puVar31;
            if ((int)uVar24 < 1) {
              uVar24 = -uVar24;
            }
            else if ((int)uVar22 < (int)uVar24) {
              uVar46 = (ulonglong)uVar22;
              lVar48 = (longlong)(int)lVar48;
              lVar38 = lVar48 << 0x20;
              lVar45 = uVar46 * 0xc + 8;
              do {
                lVar13 = *(longlong *)(*(longlong *)(lVar21 + 0xd8) + 0x28);
                fVar51 = *(float *)(lVar13 + lVar45);
                fVar7 = *(float *)(lVar13 + -4 + lVar45);
                dVar8 = *(double *)(local_1d8 + 0x298);
                dVar9 = *(double *)(local_1d8 + 0x2c8);
                dVar10 = *(double *)(local_1d8 + 0x2c0);
                lVar15 = *(longlong *)(local_1d8 + 0x360);
                *(double *)(lVar15 + -0x10 + lVar45 * 2) =
                     (double)*(float *)(lVar13 + -8 + lVar45) * dVar8 +
                     *(double *)(local_1d8 + 0x2b8);
                *(double *)(lVar15 + -8 + lVar45 * 2) = (double)fVar7 * dVar8 + dVar10;
                *(double *)(lVar15 + lVar45 * 2) = (double)fVar51 * dVar8 + dVar9;
                *(ulonglong *)(*(longlong *)(local_1d8 + 0x370) + lVar48 * 8) =
                     (uVar46 & 0xffffffff) + lVar38;
                lVar48 = lVar48 + 1;
                uVar46 = uVar46 + 1;
                lVar38 = lVar38 + 0x100000000;
                lVar45 = lVar45 + 0xc;
              } while (uVar24 != uVar46);
            }
            uVar22 = uVar24;
            puVar31 = puVar31 + 1;
          } while (puVar31 != puVar49);
        }
      }
      else {
        uVar33 = *(undefined4 *)(lVar21 + 0x48);
        uVar25 = FUN_146e23064();
        FUN_14051b394(pcVar1,uVar33);
        FUN_1406ea1ca(pcVar27 + 0x370,uVar25);
        lVar21 = *(longlong *)(pcVar27 + 0x68);
        uVar22 = *(uint *)(lVar21 + 0x4f0);
        local_1b8 = (ulonglong)uVar22;
        if (uVar22 != 0) {
          iVar23 = 0;
          local_180 = (uint *)(lVar21 + 0x4d8);
          puVar49 = *(uint **)(lVar21 + 0x4e8);
          puVar31 = puVar49;
          if (puVar49 == (uint *)0x0) {
            puVar31 = local_180;
          }
          uVar24 = *puVar31;
          uVar46 = 0;
          pcVar27 = local_1d8;
          local_1a0 = lVar21;
          if (uVar24 == 0) {
            iVar23 = uVar22 + 0x1e;
            if (-1 < (int)(uVar22 - 1)) {
              iVar23 = uVar22 - 1;
            }
            uVar46 = 0;
            uVar41 = iVar23 >> 5;
            if (iVar23 >> 5 < 1) {
              uVar41 = 0;
            }
            iVar23 = 0;
            do {
              if (uVar41 == uVar46) goto LAB_144626c3e;
              iVar23 = iVar23 + 0x20;
              uVar24 = puVar31[uVar46 + 1];
              uVar46 = uVar46 + 1;
            } while (uVar24 == 0);
          }
          local_1a8 = (code *)(ulonglong)(-uVar24 & uVar24);
          uVar32 = (longlong)local_1a8 * 2 + 1;
          lVar48 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar48 == 0; lVar48 = lVar48 + -1) {
            }
          }
          uVar24 = (iVar23 - ((uint)lVar48 ^ 0x3f)) + 0x3e;
          if ((int)uVar24 < (int)uVar22) {
            local_1b0 = (code *)CONCAT44(local_1b0._4_4_,0xffffffff);
            iVar34 = 0;
            uVar32 = local_1b8;
            do {
              local_178 = uVar46;
              lVar48 = (longlong)
                       *(int *)(*(longlong *)(lVar21 + 0x4c8) + (longlong)(int)uVar24 * 0xc) * 0x50;
              plVar28 = (longlong *)
                        (*(longlong *)(*(longlong *)(local_1d8 + 0x68) + 0x4a0) + lVar48);
              lVar48 = lVar48 + *(longlong *)(*(longlong *)(local_1d8 + 0x68) + 0x4a0);
              local_1c8 = (code *)(lVar48 + 0x10);
              iVar35 = *(int *)(lVar48 + 0x28);
              if (iVar35 == 0) {
                uVar47 = 1;
                uVar46 = 0;
                iVar36 = 0;
                iVar40 = 0;
              }
              else {
                pcVar29 = (code *)plVar28[4];
                if ((code *)plVar28[4] == (code *)0x0) {
                  pcVar29 = local_1c8;
                }
                uVar24 = *(uint *)pcVar29;
                if (uVar24 == 0) {
                  iVar40 = iVar35 + 0x1e;
                  if (-1 < iVar35 + -1) {
                    iVar40 = iVar35 + -1;
                  }
                  uVar46 = 0;
                  uVar47 = (ulonglong)(uint)(iVar40 >> 5);
                  if (iVar40 >> 5 < 1) {
                    uVar47 = uVar46;
                  }
                  iVar36 = 0;
                  do {
                    if (uVar47 == uVar46) goto LAB_1446269e8;
                    iVar36 = iVar36 + 0x20;
                    uVar24 = *(uint *)(pcVar29 + (uVar46 + 1) * 4);
                    uVar46 = uVar46 + 1;
                  } while (uVar24 == 0);
                }
                else {
                  uVar46 = 0;
                  iVar36 = 0;
                }
                uVar47 = (ulonglong)(-uVar24 & uVar24);
                uVar3 = uVar47 * 2 + 1;
                lVar48 = 0x3f;
                if (uVar3 != 0) {
                  for (; uVar3 >> lVar48 == 0; lVar48 = lVar48 + -1) {
                  }
                }
                iVar40 = (iVar36 - ((uint)lVar48 ^ 0x3f)) + 0x3e;
                if (iVar35 <= iVar40) {
                  iVar40 = iVar35;
                }
              }
              if (iVar40 != iVar35) {
                uVar24 = 0xffffffff;
                iVar39 = iVar35;
                do {
                  lVar48 = (longlong)*(int *)(*plVar28 + (longlong)iVar40 * 0xc);
                  if (0 < *(int *)(*(longlong *)(*(longlong *)(local_1d8 + 0x68) + 0x1f8) + 0x14 +
                                  lVar48 * 0x18)) {
                    local_1d0 = CONCAT44(local_1d0._4_4_,iVar36);
                    lVar48 = *(longlong *)(*(longlong *)(local_1d8 + 0x68) + 0x1f8) + lVar48 * 0x18;
                    lVar38 = (longlong)iVar34 << 0x20;
                    lVar45 = 0;
                    do {
                      iVar40 = *(int *)(lVar48 + 0x10);
                      lVar13 = *(longlong *)(*(longlong *)(lVar48 + 8) + 0x28);
                      lVar44 = iVar40 + lVar45;
                      fVar51 = *(float *)(lVar13 + 8 + lVar44 * 0xc);
                      fVar7 = *(float *)(lVar13 + 4 + lVar44 * 0xc);
                      dVar8 = *(double *)(local_1d8 + 0x298);
                      dVar9 = *(double *)(local_1d8 + 0x2c8);
                      dVar10 = *(double *)(local_1d8 + 0x2c0);
                      lVar15 = *(longlong *)(local_1d8 + 0x360);
                      *(double *)(lVar15 + lVar44 * 0x18) =
                           (double)*(float *)(lVar13 + lVar44 * 0xc) * dVar8 +
                           *(double *)(local_1d8 + 0x2b8);
                      *(double *)(lVar15 + 8 + lVar44 * 0x18) = (double)fVar7 * dVar8 + dVar10;
                      *(double *)(lVar15 + 0x10 + lVar44 * 0x18) = (double)fVar51 * dVar8 + dVar9;
                      *(ulonglong *)
                       (*(longlong *)(local_1d8 + 0x370) + (longlong)iVar34 * 8 + lVar45 * 8) =
                           (ulonglong)(uint)(iVar40 + (int)lVar45) + lVar38;
                      lVar45 = lVar45 + 1;
                      lVar38 = lVar38 + 0x100000000;
                    } while ((int)lVar45 < *(int *)(lVar48 + 0x14));
                    iVar34 = iVar34 + (int)lVar45;
                    iVar39 = (int)plVar28[5];
                  }
                  uVar24 = uVar24 & ~(uint)uVar47;
                  pcVar29 = (code *)plVar28[4];
                  if ((code *)plVar28[4] == (code *)0x0) {
                    pcVar29 = local_1c8;
                  }
                  iVar40 = (int)uVar46;
                  lVar48 = (longlong)iVar40;
                  uVar41 = *(uint *)(pcVar29 + lVar48 * 4) & uVar24;
                  if (uVar41 == 0) {
                    iVar42 = iVar39 + 0x1e;
                    if (-1 < iVar39 + -1) {
                      iVar42 = iVar39 + -1;
                    }
                    iVar42 = iVar42 >> 5;
                    iVar36 = iVar36 + 0x20;
                    iVar43 = iVar42;
                    if (iVar42 < iVar40) {
                      iVar43 = iVar40;
                    }
                    if (iVar40 < iVar42) {
                      lVar45 = 0;
                      do {
                        uVar41 = *(uint *)(pcVar29 + (lVar48 + lVar45 + 1) * 4);
                        if (uVar41 != 0) {
                          uVar46 = (ulonglong)(iVar40 + (int)lVar45 + 1);
                          uVar24 = 0xffffffff;
                          goto LAB_144626985;
                        }
                        iVar36 = iVar36 + 0x20;
                        lVar45 = lVar45 + 1;
                      } while (iVar43 - lVar48 != lVar45);
                      uVar24 = 0xffffffff;
                      lVar48 = (longlong)iVar43;
                    }
                    uVar46 = lVar48 + 1U & 0xffffffff;
                    iVar40 = iVar39;
                  }
                  else {
LAB_144626985:
                    uVar47 = (ulonglong)(-uVar41 & uVar41);
                    uVar32 = uVar47 * 2 + 1;
                    lVar48 = 0x3f;
                    if (uVar32 != 0) {
                      for (; uVar32 >> lVar48 == 0; lVar48 = lVar48 + -1) {
                      }
                    }
                    iVar40 = (iVar36 - ((uint)lVar48 ^ 0x3f)) + 0x3e;
                    if (iVar39 <= iVar40) {
                      iVar40 = iVar39;
                    }
                  }
                } while (iVar40 != iVar35);
                puVar49 = *(uint **)(lVar21 + 0x4e8);
                uVar32 = (ulonglong)*(uint *)(lVar21 + 0x4f0);
                local_18c = iVar23;
              }
LAB_1446269e8:
              uVar41 = (uint)local_1b0 & ~(uint)local_1a8;
              puVar31 = puVar49;
              if (puVar49 == (uint *)0x0) {
                puVar31 = local_180;
              }
              iVar35 = (int)local_178;
              lVar48 = (longlong)iVar35;
              uVar24 = puVar31[lVar48] & uVar41;
              uVar26 = (uint)uVar32;
              uVar46 = local_178;
              if (uVar24 == 0) {
                iVar40 = uVar26 + 0x1e;
                if (-1 < (int)(uVar26 - 1)) {
                  iVar40 = uVar26 - 1;
                }
                iVar40 = iVar40 >> 5;
                iVar23 = iVar23 + 0x20;
                iVar36 = iVar40;
                if (iVar40 < iVar35) {
                  iVar36 = iVar35;
                }
                if (iVar35 < iVar40) {
                  lVar45 = 0;
                  do {
                    uVar24 = puVar31[lVar48 + lVar45 + 1];
                    if (uVar24 != 0) {
                      uVar46 = (ulonglong)(iVar35 + (int)lVar45 + 1);
                      uVar41 = 0xffffffff;
                      goto LAB_144626a68;
                    }
                    iVar23 = iVar23 + 0x20;
                    lVar45 = lVar45 + 1;
                  } while (iVar36 - lVar48 != lVar45);
                  uVar41 = 0xffffffff;
                  iVar35 = iVar36;
                }
                uVar46 = (ulonglong)(iVar35 + 1);
                uVar24 = uVar26;
              }
              else {
LAB_144626a68:
                local_1a8 = (code *)(ulonglong)(-uVar24 & uVar24);
                uVar47 = (longlong)local_1a8 * 2 + 1;
                lVar48 = 0x3f;
                if (uVar47 != 0) {
                  for (; uVar47 >> lVar48 == 0; lVar48 = lVar48 + -1) {
                  }
                }
                uVar24 = (iVar23 - ((uint)lVar48 ^ 0x3f)) + 0x3e;
                if ((int)uVar26 <= (int)uVar24) {
                  uVar24 = uVar26;
                }
              }
              local_1b0 = (code *)CONCAT44(local_1b0._4_4_,uVar41);
            } while (uVar24 != uVar22);
          }
        }
      }
LAB_144626c3e:
      FUN_146eeebc6(local_188,(double)*(float *)(pcVar27 + 0x2f8));
      pcVar29 = local_1c0;
    }
    if (pcVar27[0x480] == (code)0x1) {
      pcVar14 = *(char **)(pcVar27 + 0x90);
      if (*pcVar14 == '\x01') {
        plVar28 = *(longlong **)(pcVar14 + 0x18);
      }
      else {
        plVar28 = (longlong *)
                  ((longlong)*(int *)(pcVar27 + 0x88) * 8 + *(longlong *)(pcVar14 + 0x18));
      }
      lVar21 = *plVar28;
      FUN_140056680(&local_e8,L"NumSubsteps");
      iVar23 = FUN_144a41c6c(lVar21,&local_e8);
      iVar34 = 1;
      if (iVar23 != -1) {
        iVar34 = (int)*(float *)(*(longlong *)(lVar21 + 0x18) + (longlong)iVar23 * 0xc);
      }
      iVar23 = 1;
      if (1 < iVar34) {
        iVar23 = iVar34;
      }
      if (local_e8 != (code *)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_e8,L"DynamicSubstepDeltaTime");
      iVar34 = FUN_144a41c6c(lVar21,&local_e8);
      if (iVar34 == -1) {
        fVar51 = 0.0;
      }
      else {
        fVar51 = *(float *)(*(longlong *)(lVar21 + 0x18) + (longlong)iVar34 * 0xc);
      }
      if (local_e8 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (0.0 < fVar51) {
        fVar51 = (*(float *)(pcVar27 + 0x2fc) * 1000.0) / fVar51;
        iVar34 = (int)ROUND(fVar51 + fVar51 + 0.5) >> 1;
        if (iVar23 <= iVar34) {
          iVar34 = iVar23;
        }
        iVar23 = 1;
        if (1 < iVar34) {
          iVar23 = iVar34;
        }
      }
      *(int *)(pcVar27 + 0x300) = iVar23;
      FUN_140056680(&local_e8,L"EnableNumSelfCollisionSubsteps");
      iVar23 = FUN_144a41c6c(lVar21,&local_e8);
      if (iVar23 == -1) {
        bVar50 = false;
      }
      else {
        bVar50 = *(float *)(*(longlong *)(lVar21 + 0x18) + (longlong)iVar23 * 0xc) != 0.0;
      }
      if (local_e8 != (code *)0x0) {
        FUN_1400020a8();
      }
      iVar23 = *(int *)(pcVar27 + 0x300);
      iVar34 = iVar23;
      if (bVar50) {
        FUN_140056680(&local_e8,L"NumSelfCollisionSubsteps");
        iVar34 = FUN_144a41c6c(lVar21,&local_e8);
        iVar35 = 1;
        if (iVar34 != -1) {
          iVar35 = (int)*(float *)(*(longlong *)(lVar21 + 0x18) + (longlong)iVar34 * 0xc);
        }
        if (iVar35 < iVar23) {
          iVar23 = iVar35;
        }
        iVar34 = 1;
        if (1 < iVar23) {
          iVar34 = iVar23;
        }
        if (local_e8 != (code *)0x0) {
          FUN_1400020a8();
        }
        iVar23 = *(int *)(local_1d8 + 0x300);
      }
      pcVar27 = local_1d8;
      local_1d0 = CONCAT44(local_1d0._4_4_,(iVar23 + -1) / iVar34);
      local_1c0 = pcVar29;
      if (*(longlong *)(local_1d8 + 0x68) == 0) {
        FUN_140056680(&local_e8,L"MaxNumIterations");
        iVar23 = FUN_144a41c6c(lVar21,&local_e8);
        if (iVar23 == -1) {
          iVar23 = 10;
        }
        else {
          iVar23 = (int)*(float *)(*(longlong *)(lVar21 + 0x18) + (longlong)iVar23 * 0xc);
        }
        iVar34 = 1;
        if (iVar23 < 2) {
          iVar23 = 1;
        }
        if (local_e8 != (code *)0x0) {
          FUN_1400020a8();
        }
        FUN_140056680(&local_e8,L"NumIterations");
        iVar35 = FUN_144a41c6c(lVar21,&local_e8);
        if (iVar35 != -1) {
          iVar34 = (int)*(float *)(*(longlong *)(lVar21 + 0x18) + (longlong)iVar35 * 0xc);
        }
        if (iVar23 <= iVar34) {
          iVar34 = iVar23;
        }
        iVar35 = 1;
        if (1 < iVar34) {
          iVar35 = iVar34;
        }
        if (local_e8 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (DAT_14cc27308 == '\0') {
          fVar51 = (float)iVar35 * *(float *)(pcVar27 + 0x2fc) * 60.0;
          iVar35 = (int)ROUND(fVar51 + fVar51 + 0.5) >> 1;
        }
        if (iVar35 < iVar23) {
          iVar23 = iVar35;
        }
        iVar34 = 1;
        if (1 < iVar23) {
          iVar34 = iVar23;
        }
        *(int *)(*(longlong *)(pcVar27 + 0x70) + 0x440) = iVar34;
      }
      else {
        FUN_146e22cbc(*(longlong *)(local_1d8 + 0x68),lVar21);
        *(char *)(*(longlong *)(pcVar27 + 0x68) + 0x18) = DAT_14cc27308;
      }
      iVar23 = *(int *)(pcVar27 + 0x300);
      if (0 < iVar23) {
        local_1d0 = CONCAT44(local_1d0._4_4_,(int)local_1d0 + 1);
        local_1c8 = pcVar27 + 0x308;
        local_1a8 = pcVar27 + 0x318;
        local_1b0 = pcVar27 + 0x328;
        iVar34 = 0;
        do {
          bVar50 = iVar34 % (int)local_1d0 == 0;
          iVar34 = iVar34 + 1;
          fVar51 = (float)iVar34 / (float)iVar23;
          if (1.0 <= fVar51) {
            fVar51 = 1.0;
          }
          if (fVar51 <= 0.0) {
            fVar51 = 0.0;
          }
          if (*(longlong *)(pcVar27 + 0x68) == 0) {
            lVar21 = *(longlong *)(pcVar27 + 0x70);
            local_100._0_5_ = CONCAT14(bVar50,fVar51);
            local_f0 = &local_108;
            local_f8 = FUN_144639c94;
            local_a8 = (code *)0x0;
            local_a0 = 0x800000000;
            iVar23 = *(int *)(lVar21 + 0xe8);
            local_108 = pcVar27;
            if ((longlong)iVar23 == 0) {
              uVar46 = 0;
            }
            else {
              lVar48 = *(longlong *)(lVar21 + 0xe0);
              lVar45 = 0;
              uVar46 = 0;
              do {
                uVar32 = local_a0;
                uVar22 = *(uint *)(lVar48 + lVar45);
                if ((longlong)(int)uVar22 < 1) {
                  uVar22 = -uVar22;
                }
                else {
                  lVar38 = (longlong)(int)local_a0;
                  uVar24 = (int)local_a0 + 1;
                  local_a0 = CONCAT44(local_a0._4_4_,uVar24);
                  if (local_a0._4_4_ < uVar24) {
                    FUN_146d8b45e(&local_e8,uVar32 & 0xffffffff);
                  }
                  pcVar29 = local_a8;
                  if (local_a8 == (code *)0x0) {
                    pcVar29 = (code *)&local_e8;
                  }
                  *(ulonglong *)(pcVar29 + lVar38 * 8) = uVar46 | (longlong)(int)uVar22 << 0x20;
                }
                lVar45 = lVar45 + 4;
                uVar46 = (ulonglong)uVar22;
              } while ((longlong)iVar23 * 4 != lVar45);
              uVar46 = local_a0 & 0xffffffff;
            }
            local_140 = (float *)&local_e8;
            local_150 = (code *)(lVar21 + 0xd8);
            local_148 = &local_f8;
            local_118 = &local_150;
            local_120 = FUN_144b0610c;
            FUN_1400bd65e(uVar46,&local_120,0);
            pcVar27 = local_1d8;
            pcVar29 = local_a8;
          }
          else {
            FUN_146b309a8(*(longlong *)(pcVar27 + 0x68) + 0x4c8,&local_150);
            local_d8._0_5_ = CONCAT14(bVar50,fVar51);
            local_118 = (code **)&local_e8;
            local_120 = FUN_144639a2e;
            local_e8 = pcVar27;
            uStack_e0 = &local_150;
            FUN_1400bd65e((ulonglong)local_148 & 0xffffffff,&local_120,0);
            memset(*(void **)(pcVar27 + 0x230),0,(longlong)*(int *)(pcVar27 + 0x238));
            *(undefined4 *)(pcVar27 + 0x310) = 0;
            if (*(int *)(pcVar27 + 0x314) < 0) {
              FUN_140163800(local_1c8,0);
            }
            *(undefined4 *)(pcVar27 + 800) = 0;
            if (*(int *)(pcVar27 + 0x324) < 0) {
              FUN_140163800(local_1a8,0);
            }
            *(undefined4 *)(pcVar27 + 0x330) = 0;
            pcVar29 = local_150;
            if (*(int *)(pcVar27 + 0x334) < 0) {
              FUN_14482f6fa(local_1b0,0);
              pcVar29 = local_150;
            }
          }
          if (pcVar29 != (code *)0x0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(pcVar27 + 0x68) == 0) {
            FUN_1429bd1e4(*(undefined8 *)(pcVar27 + 0x70));
          }
          else {
            FUN_1429e104c();
          }
          iVar23 = *(int *)(pcVar27 + 0x300);
        } while (iVar34 < iVar23);
      }
      puVar30 = *(undefined4 **)(pcVar27 + 0x68);
      if (puVar30 == (undefined4 *)0x0) {
        puVar30 = (undefined4 *)(*(longlong *)(pcVar27 + 0x70) + 0x460);
      }
      *(undefined4 *)(pcVar27 + 0x2f8) = *puVar30;
      pcVar29 = local_1c0;
    }
  }
  FUN_1402c1cc6(pcVar27 + 0x38,(double)*(float *)(pcVar27 + 0x2fc));
  local_168 = &local_e8;
  local_170 = &LAB_144639d8a;
  local_e8 = pcVar27;
  FUN_1400bd65e(*(undefined4 *)(pcVar27 + 0x80),&local_170,0);
  *(undefined8 *)(local_198 + 0x10) = *(undefined8 *)(pcVar29 + 0x10);
  uVar22 = *(uint *)(pcVar29 + 4);
  uVar24 = *(uint *)(pcVar29 + 8);
  uVar41 = *(uint *)(pcVar29 + 0xc);
  *(uint *)local_198 = *(uint *)pcVar29;
  *(uint *)(local_198 + 4) = uVar22;
  *(uint *)(local_198 + 8) = uVar24;
  *(uint *)(local_198 + 0xc) = uVar41;
  if ((local_90 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144626c9a FUN_144626c9a body=6450 status=ok
// SIG undefined FUN_144626c9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144626c9a(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  void *_Src;
  void *_Dst;
  int *piVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  ulonglong *puVar18;
  longlong lVar19;
  int *piVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  double *pdVar23;
  undefined8 *puVar24;
  double *pdVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong *plVar28;
  int iVar29;
  uint uVar30;
  undefined8 *puVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  double dVar44;
  undefined1 auVar43 [16];
  double dVar45;
  double dVar46;
  double dVar48;
  undefined1 auVar47 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar54;
  double dVar55;
  undefined1 auVar53 [16];
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  undefined1 auStack_3b8 [32];
  undefined8 local_398;
  undefined4 local_390;
  uint *local_388;
  longlong *local_380;
  longlong *local_378;
  longlong *local_370;
  longlong *local_368;
  longlong local_360;
  int local_354;
  longlong *local_350;
  undefined1 local_348 [16];
  longlong local_330;
  longlong local_328;
  undefined8 local_320;
  longlong local_318;
  longlong *local_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
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
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
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
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178 [4];
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  iVar3 = *(int *)(param_1 + 0x38);
  iVar29 = (int)param_2[1];
  iVar4 = *(int *)((longlong)param_2 + 0x34);
  if (param_3 == (longlong *)0x0 || iVar3 == 0) {
    if (iVar29 != iVar4) {
      FUN_1402c6cea(param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_3b8);
    }
  }
  else {
    if (iVar29 - iVar4 != iVar3 && iVar29 != iVar4) {
      FUN_1402c6cea(param_2);
      FUN_1402c6e36(param_2);
      iVar3 = *(int *)(param_1 + 0x38);
    }
    plVar9 = param_4;
    if (param_4 == (longlong *)0x0) {
      plVar9 = param_3;
    }
    if (iVar3 != 0) {
      plVar28 = *(longlong **)(param_1 + 0x30);
      local_320 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x298);
      local_318 = *(longlong *)(param_1 + 0x18) + 0x2b8;
      local_328 = param_3[0x1cb];
      local_330 = local_328 + 0x30;
      local_350 = plVar9 + (longlong)(int)plVar9[0xe3] * 2 + 0xda;
      local_310 = plVar28 + iVar3;
      local_380 = param_2 + 7;
      local_370 = param_2 + 8;
      local_388 = (uint *)(param_2 + 2);
      auVar43 = _DAT_149934d80;
      local_368 = param_2;
      local_360 = param_1;
      do {
        uVar11 = *(uint *)((longlong *)*plVar28 + 4);
        plVar9 = *(longlong **)*plVar28;
        if (plVar9 == (longlong *)0x0) {
LAB_144626fb1:
          FUN_140e91028(param_2);
        }
        else {
          local_354 = (**(code **)(*plVar9 + 0x10))();
          plVar9 = (longlong *)*plVar28;
          uVar33 = *(ulonglong *)(param_1 + 0x18);
          if ((int)plVar9[0x1f] == *(int *)((longlong)plVar9 + 0x124)) {
LAB_144626ec5:
            puVar18 = (ulonglong *)0x0;
          }
          else {
            uVar16 = ((uint)(uVar33 >> 0x14) & 0xffff ^ (uint)(uVar33 >> 4)) * -0x7a143595;
            uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
            plVar8 = plVar9 + 0x25;
            if ((longlong *)plVar9[0x26] != (longlong *)0x0) {
              plVar8 = (longlong *)plVar9[0x26];
            }
            iVar3 = *(int *)((longlong)plVar8 +
                            (ulonglong)((int)plVar9[0x27] - 1U & (uVar16 >> 0x10 ^ uVar16)) * 4);
            if (iVar3 == -1) goto LAB_144626ec5;
            do {
              puVar18 = (ulonglong *)(plVar9[0x1e] + (longlong)iVar3 * 0x18);
              if (*puVar18 == uVar33) break;
              iVar3 = (int)puVar18[2];
              puVar18 = (ulonglong *)0x0;
            } while (iVar3 != -1);
          }
          if (local_354 != (int)puVar18[1]) {
            FUN_14462584c(uVar33,0);
            plVar9 = (longlong *)*plVar28;
            uVar33 = *(ulonglong *)(param_1 + 0x18);
          }
          iVar3 = FUN_1403d8766(plVar9);
          if (iVar3 == -1) goto LAB_144626fb1;
          if ((int)plVar9[0x1f] == *(int *)((longlong)plVar9 + 0x124)) {
LAB_144626f7b:
            puVar18 = (ulonglong *)0x0;
          }
          else {
            uVar16 = ((uint)(uVar33 >> 0x14) & 0xffff ^ (uint)(uVar33 >> 4)) * -0x7a143595;
            uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
            plVar8 = plVar9 + 0x25;
            if ((longlong *)plVar9[0x26] != (longlong *)0x0) {
              plVar8 = (longlong *)plVar9[0x26];
            }
            iVar3 = *(int *)((longlong)plVar8 +
                            (ulonglong)((int)plVar9[0x27] - 1U & (uVar16 >> 0x10 ^ uVar16)) * 4);
            if (iVar3 == -1) goto LAB_144626f7b;
            do {
              puVar18 = (ulonglong *)(plVar9[0x1e] + (longlong)iVar3 * 0x18);
              if (*puVar18 == uVar33) break;
              iVar3 = (int)puVar18[2];
              puVar18 = (ulonglong *)0x0;
            } while (iVar3 != -1);
          }
          if ((int)puVar18[1] == -1) goto LAB_144626fb1;
          if (param_4 == (longlong *)0x0) {
            if ((longlong *)*plVar9 != (longlong *)0x0) {
              uVar16 = (**(code **)(*(longlong *)*plVar9 + 0xa0))();
              goto LAB_144626fe4;
            }
LAB_144628617:
            *(undefined1 *)(param_1 + 0xe8) = 1;
            if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
              FUN_1402c6cea(param_2);
              FUN_1402c6e36(param_2);
            }
            break;
          }
          plVar9 = (longlong *)(**(code **)(*param_3 + 0xa78))(param_3,0);
          if (*(longlong **)*plVar28 == (longlong *)0x0) {
            iVar3 = -1;
          }
          else {
            iVar3 = (**(code **)(**(longlong **)*plVar28 + 0xa0))();
          }
          uVar16 = *(uint *)(*plVar9 + (longlong)iVar3 * 4);
LAB_144626fe4:
          if (((int)uVar16 < 0) || ((int)local_350[1] <= (int)uVar16)) goto LAB_144628617;
          puVar22 = (undefined8 *)((ulonglong)uVar16 * 0x60 + *local_350);
          puVar24 = (undefined8 *)local_2f8;
          for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar24 = *puVar22;
            puVar22 = puVar22 + 1;
            puVar24 = puVar24 + 1;
          }
          auVar39 = *(undefined1 (*) [16])(local_328 + 0x70);
          dVar45 = auVar39._0_8_;
          dVar48 = auVar39._8_8_;
          auVar34 = *(undefined1 (*) [16])(local_328 + 0x80);
          dVar38 = auVar34._0_8_;
          dVar59 = local_2b8._0_8_;
          dVar36 = local_2b8._8_8_;
          auVar42._8_8_ = dStack_2a0;
          auVar42._0_8_ = local_2a8;
          auVar39 = minpd(local_2b8,auVar39);
          auVar42 = minpd(auVar42,auVar34);
          auVar40._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
          auVar40._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
          iVar3 = movmskpd((int)local_350,auVar40);
          auVar39._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
          auVar39._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
          uVar16 = movmskpd(0,auVar39);
          if ((uVar16 & 0x3fffffff) == 0 && iVar3 == 0) {
            dVar50 = *(double *)(local_328 + 0x30);
            dVar54 = *(double *)(local_328 + 0x38);
            dVar62 = *(double *)*(undefined1 (*) [16])(local_328 + 0x40);
            dVar2 = *(double *)(local_328 + 0x48);
            local_348 = *(undefined1 (*) [16])(local_328 + 0x40);
            dVar41 = *(double *)(local_328 + 0x48);
            dVar51 = *(double *)(local_328 + 0x48);
            dVar55 = *(double *)(local_328 + 0x30);
            dVar58 = *(double *)(local_328 + 0x30);
            dVar52 = dVar55 * (double)local_2f8._8_8_;
            dVar56 = dVar58 * (double)local_2f8._0_8_;
            dVar57 = *(double *)(local_328 + 0x38);
            dVar37 = *(double *)(local_328 + 0x38);
            dVar60 = (double)local_2f8._0_8_ * dVar57;
            dVar61 = (double)local_2f8._8_8_ * dVar37;
            dVar44 = *(double *)(local_328 + 0x40);
            dVar49 = *(double *)(local_328 + 0x40);
            dVar46 = (double)local_2e8._8_8_ * dVar44;
            auVar43._0_8_ =
                 (double)local_2f8._8_8_ * dVar44 * -1.0 +
                 (double)local_2e8._0_8_ * dVar57 +
                 (double)local_2e8._8_8_ * dVar55 * 1.0 + (double)local_2f8._0_8_ * dVar41;
            auVar43._8_8_ =
                 (double)local_2f8._0_8_ * dVar49 * 1.0 +
                 (double)local_2e8._8_8_ * dVar37 +
                 (double)local_2e8._0_8_ * dVar58 * -1.0 + (double)local_2f8._8_8_ * dVar51;
            local_2d8 = local_2d8 * dVar45;
            dStack_2d0 = dStack_2d0 * dVar48;
            local_2c8 = local_2c8 * dVar38;
            dStack_2c0 = dStack_2c0 * auVar34._8_8_;
            dVar55 = dStack_2d0 * dVar50 - dVar54 * local_2d8;
            dVar37 = local_2c8 * dVar54 - dVar62 * dStack_2d0;
            dVar57 = local_2d8 * dVar62 - dVar50 * local_2c8;
            dVar58 = dStack_2c0 * dVar2 - dVar2 * dStack_2c0;
            dVar37 = dVar37 + dVar37;
            dVar57 = dVar57 + dVar57;
            dVar55 = dVar55 + dVar55;
            dVar58 = dVar58 + dVar58;
            local_2c8 = (dVar57 * dVar50 - dVar54 * dVar37) + dVar41 * dVar55 + local_2c8 +
                        *(double *)(local_328 + 0x60);
            dStack_2c0 = (dVar58 * dVar2 - dVar58 * dVar2) + dVar51 * dVar58 + dStack_2c0 +
                         *(double *)(local_328 + 0x68);
            local_2f8 = auVar43;
            local_2e8._8_8_ =
                 (double)local_2e8._0_8_ * dVar49 * -1.0 +
                 ((dVar56 * -1.0 + (double)local_2e8._8_8_ * dVar51) - dVar61);
            local_2e8._0_8_ =
                 dVar46 * 1.0 + ((dVar52 * 1.0 + (double)local_2e8._0_8_ * dVar41) - dVar60);
            local_2d8 = (dVar55 * dVar54 - dVar62 * dVar57) + dVar41 * dVar37 + local_2d8 +
                        *(double *)(local_328 + 0x50);
            dStack_2d0 = (dVar37 * dVar62 - dVar55 * dVar50) + dVar51 * dVar57 + dStack_2d0 +
                         *(double *)(local_328 + 0x58);
            dVar59 = dVar59 * dVar45;
            dVar36 = dVar36 * dVar48;
            dVar38 = local_2a8 * dVar38;
            auVar43 = _DAT_149934d80;
          }
          else {
            dVar55 = *(double *)(local_328 + 0x30);
            dVar58 = *(double *)(local_328 + 0x38);
            dVar57 = *(double *)(local_328 + 0x40);
            dVar44 = dVar58 + dVar58;
            dVar49 = dVar57 + dVar57;
            dVar37 = dVar55 * (dVar55 + dVar55);
            local_1a8 = (1.0 - (dVar37 + dVar58 * dVar44)) * dVar38;
            dVar62 = *(double *)(local_328 + 0x30) * dVar49;
            dVar41 = *(double *)(local_328 + 0x48);
            dVar50 = dVar49 * dVar41;
            dVar54 = (dVar55 + dVar55) * *(double *)(local_328 + 0x48);
            dVar41 = dVar44 * dVar41;
            local_1b8 = (dVar41 + dVar62) * dVar38;
            dVar51 = auVar34._8_8_ * dStack_2a0;
            local_348._8_4_ = SUB84(dVar51,0);
            local_348._0_8_ = dVar38 * local_2a8;
            local_348._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
            local_1f8 = (auVar43._0_8_ - (dVar57 * dVar49 + dVar58 * dVar44)) * dVar45;
            dStack_1d0 = (auVar43._8_8_ - (dVar57 * dVar49 + dVar37)) * dVar48;
            dStack_1f0 = (dVar44 * dVar55 + dVar50) * dVar45;
            local_1c8 = (dVar49 * dVar58 + dVar54) * dVar48;
            local_1d8 = (dVar44 * dVar55 - dVar50) * dVar48;
            dStack_1b0 = (dVar49 * dVar58 - dVar54) * dVar38;
            local_1e8 = (dVar62 - dVar41) * dVar45;
            uStack_1e0 = 0;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = *(undefined8 *)(local_328 + 0x50);
            uStack_190 = *(undefined8 *)(local_328 + 0x58);
            local_188 = *(undefined8 *)(local_328 + 0x60);
            uStack_180 = 0x3ff0000000000000;
            dVar41 = (double)local_2f8._8_8_ + (double)local_2f8._8_8_;
            dVar51 = (double)local_2e8._0_8_ + (double)local_2e8._0_8_;
            dVar38 = (double)local_2f8._0_8_ * ((double)local_2f8._0_8_ + (double)local_2f8._0_8_);
            local_228 = (1.0 - (dVar38 + (double)local_2f8._8_8_ * dVar41)) * local_2a8;
            dVar55 = ((double)local_2f8._0_8_ + (double)local_2f8._0_8_) * (double)local_2e8._8_8_;
            local_238 = (dVar41 * (double)local_2e8._8_8_ + (double)local_2f8._0_8_ * dVar51) *
                        local_2a8;
            local_258 = (dVar41 * (double)local_2f8._0_8_ - dVar51 * (double)local_2e8._8_8_) *
                        dVar36;
            dStack_230 = (dVar51 * (double)local_2f8._8_8_ - dVar55) * local_2a8;
            local_308._8_4_ = SUB84(dVar48 * dVar36,0);
            local_308._0_8_ = dVar45 * dVar59;
            local_308._12_4_ = (int)((ulonglong)(dVar48 * dVar36) >> 0x20);
            local_278 = (1.0 - ((double)local_2e8._0_8_ * dVar51 + (double)local_2f8._8_8_ * dVar41)
                        ) * dVar59;
            dStack_250 = (1.0 - ((double)local_2e8._0_8_ * dVar51 + dVar38)) * dVar36;
            dStack_270 = (dVar41 * (double)local_2f8._0_8_ + dVar51 * (double)local_2e8._8_8_) *
                         dVar59;
            local_248 = (dVar51 * (double)local_2f8._8_8_ + dVar55) * dVar36;
            local_268 = ((double)local_2f8._0_8_ * dVar51 - dVar41 * (double)local_2e8._8_8_) *
                        dVar59;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = local_2d8;
            dStack_210 = dStack_2d0;
            local_208 = local_2c8;
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(local_178,&local_278,&local_1f8);
            auVar43 = _DAT_149934d80;
            dVar59 = local_178[2] * local_178[2] +
                     local_178[0] * local_178[0] + local_178[1] * local_178[1];
            dVar38 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
            dVar45 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
            uVar33 = -(ulonglong)(0.0 <= dVar59 + -9.99999993922529e-09);
            dVar48 = (double)(~uVar33 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar59)) & uVar33);
            uVar33 = -(ulonglong)(0.0 <= dVar38 + -9.99999993922529e-09);
            dVar41 = (double)(~uVar33 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar38)) & uVar33);
            uVar33 = -(ulonglong)(0.0 <= dVar45 + -9.99999993922529e-09);
            dVar45 = (double)(~uVar33 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar45)) & uVar33);
            dVar38 = (double)local_348._0_8_;
            dVar59 = (double)local_308._0_8_;
            dVar36 = (double)local_308._8_8_;
            auVar34._8_8_ = -(ulonglong)(0.0 <= (double)local_308._8_8_);
            auVar34._0_8_ = -(ulonglong)(0.0 <= (double)local_308._0_8_);
            auVar39 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar34);
            dVar51 = (double)(~-(ulonglong)(0.0 <= (double)local_348._0_8_) & 0xbff0000000000000 |
                             (ulonglong)
                             ((uint)(-(ulonglong)(0.0 <= (double)local_348._0_8_) >> 0x20) &
                             0x3ff00000) << 0x20);
            dVar55 = auVar39._0_8_;
            local_178[0] = local_178[0] * dVar48 * dVar55;
            local_178[1] = local_178[1] * dVar48 * dVar55;
            local_178[2] = dVar48 * local_178[2] * dVar55;
            dVar48 = auVar39._8_8_;
            local_148 = dVar41 * local_148 * dVar48;
            local_150 = local_150 * dVar41 * dVar48;
            local_158 = dVar48 * local_158 * dVar41;
            local_128 = dVar45 * local_128 * dVar51;
            local_130 = local_130 * dVar45 * dVar51;
            local_138 = dVar51 * local_138 * dVar45;
            FUN_14481fd10(&local_298,local_178);
            dVar45 = local_288 * local_288 + local_298 * local_298;
            dVar48 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar47._0_8_ = dVar45 + dVar48;
            auVar47._8_8_ = dVar45 + dVar48;
            auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
            auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
            auVar39 = sqrtpd(auVar47,auVar47);
            auVar39 = divpd(auVar43,auVar39);
            auVar53._0_8_ = auVar39._0_8_ * local_288;
            auVar53._8_8_ = auVar39._8_8_ * dStack_280;
            local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar53,auVar35);
            local_2f8._8_8_ =
                 (ulonglong)(dStack_290 * auVar39._8_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
            local_2f8._0_8_ =
                 (ulonglong)(local_298 * auVar39._0_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
            dStack_2c0 = 0.0;
            local_2d8 = local_118;
            dStack_2d0 = dStack_110;
            local_2c8 = local_108;
          }
          local_2b8 = auVar43;
          local_2a8 = 1.0;
          dStack_2a0 = 0.0;
          iVar3 = (int)param_2[1];
          iVar29 = *(int *)((longlong)param_2 + 0x34);
          if (iVar3 != iVar29) {
            plVar9 = (longlong *)param_2[8];
            if ((longlong *)param_2[8] == (longlong *)0x0) {
              plVar9 = local_380;
            }
            iVar4 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_2[9] - 1U & uVar11) * 4);
            if (iVar4 != -1) {
              do {
                lVar13 = *param_2 + (longlong)iVar4 * 0x110;
                if (*(uint *)(*param_2 + (longlong)iVar4 * 0x110) == uVar11) {
                  if (lVar13 != 0) goto LAB_1446278b3;
                  break;
                }
                iVar4 = *(int *)(lVar13 + 0x100);
              } while (iVar4 != -1);
            }
          }
          if (iVar29 == 0) {
            *(int *)(param_2 + 1) = iVar3 + 1;
            if (*(int *)((longlong)param_2 + 0xc) == iVar3) {
              FUN_1417456d2(param_2,iVar3);
            }
            iVar29 = (int)param_2[5];
            if (iVar29 == 0) {
              iVar4 = -1;
            }
            else {
              iVar4 = iVar29 + 0x1e;
              if (-1 < iVar29 + -1) {
                iVar4 = iVar29 + -1;
              }
              iVar4 = iVar4 >> 5;
            }
            iVar12 = iVar29 + 1;
            iVar17 = iVar29 + 0x1f;
            if (-1 < iVar29) {
              iVar17 = iVar29;
            }
            if (iVar17 >> 5 == iVar4) {
              *(int *)(param_2 + 5) = iVar12;
            }
            else {
              if (*(int *)((longlong)param_2 + 0x2c) <= iVar29) {
                iVar4 = iVar29;
                local_378 = param_4;
                if (iVar29 + 0x20U < 0xa0) {
                  iVar12 = 0x80;
                }
                else {
                  uVar16 = iVar29 + 0x20U >> 5;
                  if (*(int *)((longlong)param_2 + 0x2c) + 0x1fU < 0xa0) {
                    uVar30 = 4;
                    if (4 < uVar16) {
                      uVar30 = uVar16;
                    }
                  }
                  else {
                    uVar30 = uVar16 + (uVar16 * 3 >> 3) + 0x10;
                  }
                  uVar33 = (ulonglong)(uVar30 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar6 = (uint)(uVar33 + 0xf);
                      if (uVar30 < 0x1ffd) {
                        uVar33 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar33 + 0xf >> 4]];
                      }
                      else {
                        uVar21 = (ulonglong)(uVar6 & 0xfffffff0);
                        if (uVar21 < 0x7ff1) {
                          bVar10 = (&DAT_14c841e00)[uVar6 >> 4];
                          uVar32 = 0x32;
                          if (0x32 < bVar10) {
                            uVar32 = (ulonglong)bVar10;
                          }
                          uVar26 = 0x32 - (ulonglong)bVar10;
                          do {
                            uVar33 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar26 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar26 & 0xffffffff] & 0xf) == 0)
                            goto LAB_144628340;
                            lVar13 = uVar32 + 1 + uVar26;
                            uVar26 = uVar26 - 1;
                          } while (lVar13 != 0x33);
                        }
                        uVar33 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar33 = 0x10;
                        }
                        uVar33 = -uVar33 & (uVar21 + uVar33) - 1;
                      }
                    }
                    else {
                      uVar33 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar33,0);
                      iVar4 = (int)local_368[5];
                    }
                  }
LAB_144628340:
                  iVar7 = (int)(uVar33 >> 2);
                  iVar12 = iVar7 << 5;
                  if (iVar7 < (int)uVar16) {
                    iVar12 = -0x20;
                  }
                }
                param_2 = local_368;
                *(int *)((longlong)local_368 + 0x2c) = iVar12;
                FUN_1446efbd8(local_388,iVar4);
                iVar12 = (int)param_2[5] + 1;
                param_4 = local_378;
                auVar43 = _DAT_149934d80;
              }
              iVar4 = iVar12 + 0x1f;
              if (-1 < iVar12) {
                iVar4 = iVar12;
              }
              *(int *)(param_2 + 5) = iVar12;
              if (iVar12 % 0x20 != 0) {
                puVar15 = (uint *)param_2[4];
                if ((uint *)param_2[4] == (uint *)0x0) {
                  puVar15 = local_388;
                }
                bVar10 = -(char)(iVar12 % 0x20);
                puVar15[iVar4 >> 5] = (puVar15[iVar4 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
              }
            }
            lVar13 = (longlong)iVar3;
            puVar15 = (uint *)param_2[4];
            if ((uint *)param_2[4] == (uint *)0x0) {
              puVar15 = local_388;
            }
            bVar10 = (byte)iVar29 & 0x1f;
            puVar15[iVar17 >> 5] =
                 puVar15[iVar17 >> 5] & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
          }
          else {
            iVar3 = (int)param_2[6];
            lVar13 = (longlong)iVar3;
            iVar4 = *(int *)(*param_2 + 4 + lVar13 * 0x110);
            *(int *)(param_2 + 6) = iVar4;
            *(int *)((longlong)param_2 + 0x34) = iVar29 + -1;
            if (iVar29 + -1 != 0) {
              *(undefined4 *)(*param_2 + (longlong)iVar4 * 0x110) = 0xffffffff;
            }
          }
          puVar15 = (uint *)param_2[4];
          if ((uint *)param_2[4] == (uint *)0x0) {
            puVar15 = local_388;
          }
          iVar29 = iVar3 + 0x1f;
          if (-1 < iVar3) {
            iVar29 = iVar3;
          }
          puVar15[iVar29 >> 5] = puVar15[iVar29 >> 5] | 1 << ((byte)iVar3 & 0x1f);
          lVar14 = *param_2;
          lVar13 = lVar13 * 0x110;
          _Src = (void *)(lVar14 + lVar13);
          *(uint *)(lVar14 + lVar13) = uVar11;
          puVar22 = (undefined8 *)(lVar14 + 0x10 + lVar13);
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22 = (undefined8 *)(lVar14 + 0x20 + lVar13);
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22 = (undefined8 *)(lVar14 + 0x30 + lVar13);
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22 = (undefined8 *)(lVar14 + 0x40 + lVar13);
          *puVar22 = 0;
          puVar22[1] = 0x3ff0000000000000;
          puVar22 = (undefined8 *)(lVar14 + 0x50 + lVar13);
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22 = (undefined8 *)(lVar14 + 0x60 + lVar13);
          *puVar22 = 0;
          puVar22[1] = 0;
          *(undefined1 (*) [16])(lVar14 + 0x70 + lVar13) = auVar43;
          puVar22 = (undefined8 *)(lVar14 + 0x80 + lVar13);
          *puVar22 = 0x3ff0000000000000;
          puVar22[1] = 0;
          puVar22 = (undefined8 *)(lVar14 + 0x90 + lVar13);
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22 = (undefined8 *)(lVar14 + 0xa0 + lVar13);
          *puVar22 = 0;
          puVar22[1] = 0x3ff0000000000000;
          puVar22 = (undefined8 *)(lVar14 + 0xb0 + lVar13);
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22 = (undefined8 *)(lVar14 + 0xc0 + lVar13);
          *puVar22 = 0;
          puVar22[1] = 0;
          *(undefined1 (*) [16])(lVar14 + 0xd0 + lVar13) = auVar43;
          puVar22 = (undefined8 *)(lVar14 + 0xe0 + lVar13);
          *puVar22 = 0x3ff0000000000000;
          puVar22[1] = 0;
          *(undefined4 *)(lVar14 + 0xf0 + lVar13) = 0;
          *(undefined4 *)(lVar14 + 0x100 + lVar13) = 0xffffffff;
          uVar16 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
          if (1 < uVar16) {
            plVar9 = (longlong *)param_2[8];
            if ((longlong *)param_2[8] == (longlong *)0x0) {
              plVar9 = local_380;
            }
            iVar29 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_2[9] - 1U & uVar11) * 4);
            if (iVar29 != -1) {
              do {
                _Dst = (void *)(*param_2 + (longlong)iVar29 * 0x110);
                if (*(uint *)(*param_2 + (longlong)iVar29 * 0x110) == uVar11) {
                  if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
                    FUN_1400020a8();
                  }
                  if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
                    FUN_1400020a8();
                  }
                  memmove(_Dst,_Src,0x100);
                  param_2 = local_368;
                  FUN_140e910f8(local_368,iVar3);
                  auVar43 = _DAT_149934d80;
                  goto LAB_144627b60;
                }
                iVar29 = *(int *)((longlong)_Dst + 0x100);
              } while (iVar29 != -1);
            }
          }
          uVar30 = 1;
          if (3 < uVar16) {
            uVar33 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
            lVar13 = 0x3f;
            if (uVar33 != 0) {
              for (; uVar33 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            uVar30 = 1 << ((byte)lVar13 & 0x1f);
          }
          if (((int)uVar16 < 1) || ((int)uVar30 <= (int)param_2[9])) {
            uVar11 = (int)param_2[9] - 1U & uVar11;
            *(uint *)((longlong)_Src + 0x104) = uVar11;
            plVar9 = (longlong *)param_2[8];
            if ((longlong *)param_2[8] == (longlong *)0x0) {
              plVar9 = local_380;
            }
            *(undefined4 *)((longlong)_Src + 0x100) =
                 *(undefined4 *)
                  ((longlong)plVar9 + ((longlong)(int)param_2[9] - 1U & (longlong)(int)uVar11) * 4);
            plVar9 = (longlong *)param_2[8];
            if ((longlong *)param_2[8] == (longlong *)0x0) {
              plVar9 = local_380;
            }
            *(int *)((longlong)plVar9 + ((longlong)(int)param_2[9] - 1U & (longlong)(int)uVar11) * 4
                    ) = iVar3;
          }
          else {
            *(uint *)(param_2 + 9) = uVar30;
            if (param_2[8] != 0) {
              FUN_1446efa72(local_370,0,0);
              uVar30 = *(uint *)(param_2 + 9);
            }
            if (uVar30 == 1) {
              if (*local_370 != 0) {
                FUN_1446efa72(local_370,0,0);
              }
LAB_1446280b4:
              uVar11 = 0;
              do {
                plVar9 = (longlong *)param_2[8];
                if ((longlong *)param_2[8] == (longlong *)0x0) {
                  plVar9 = local_380;
                }
                *(undefined4 *)
                 ((longlong)plVar9 + (ulonglong)((int)param_2[9] + 0x7fffffffU & uVar11) * 4) =
                     0xffffffff;
                uVar11 = uVar11 + 1;
              } while (uVar30 != uVar11);
            }
            else {
              if (uVar30 == 0) goto LAB_144627b60;
              FUN_1446efa72(local_370,0,uVar30);
              if (0 < (int)uVar30) goto LAB_1446280b4;
            }
            iVar29 = (int)param_2[5];
            if (iVar29 == 0) {
              uVar33 = 0;
              uVar21 = 1;
              iVar4 = 0;
              iVar12 = 0;
            }
            else {
              puVar15 = (uint *)param_2[4];
              if ((uint *)param_2[4] == (uint *)0x0) {
                puVar15 = local_388;
              }
              uVar11 = *puVar15;
              if (uVar11 == 0) {
                iVar4 = iVar29 + 0x1e;
                if (-1 < iVar29 + -1) {
                  iVar4 = iVar29 + -1;
                }
                uVar33 = 0;
                uVar21 = (ulonglong)(uint)(iVar4 >> 5);
                if (iVar4 >> 5 < 1) {
                  uVar21 = uVar33;
                }
                iVar12 = 0;
                do {
                  if (uVar21 == uVar33) goto LAB_144627b60;
                  iVar12 = iVar12 + 0x20;
                  uVar11 = puVar15[uVar33 + 1];
                  uVar33 = uVar33 + 1;
                } while (uVar11 == 0);
              }
              else {
                uVar33 = 0;
                iVar12 = 0;
              }
              uVar21 = (ulonglong)(-uVar11 & uVar11);
              uVar32 = uVar21 * 2 + 1;
              lVar13 = 0x3f;
              if (uVar32 != 0) {
                for (; uVar32 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              iVar4 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
              if (iVar29 <= iVar4) {
                iVar4 = iVar29;
              }
            }
            if (iVar4 < iVar29) {
              uVar11 = 0xffffffff;
              do {
                lVar13 = *param_2;
                lVar14 = (longlong)iVar4 * 0x110;
                uVar32 = (longlong)(int)param_2[9] - 1U & (longlong)*(int *)(lVar13 + lVar14);
                iVar29 = (int)uVar32;
                *(int *)(lVar13 + 0x104 + lVar14) = iVar29;
                plVar9 = (longlong *)param_2[8];
                if ((longlong *)param_2[8] == (longlong *)0x0) {
                  plVar9 = local_380;
                }
                *(undefined4 *)(lVar13 + 0x100 + lVar14) =
                     *(undefined4 *)
                      ((longlong)plVar9 + ((longlong)(int)param_2[9] - 1U & uVar32) * 4);
                plVar9 = (longlong *)param_2[8];
                if ((longlong *)param_2[8] == (longlong *)0x0) {
                  plVar9 = local_380;
                }
                *(int *)((longlong)plVar9 + ((longlong)iVar29 & (longlong)(int)param_2[9] - 1U) * 4)
                     = iVar4;
                uVar11 = ~(uint)uVar21 & uVar11;
                puVar15 = (uint *)param_2[4];
                if ((uint *)param_2[4] == (uint *)0x0) {
                  puVar15 = local_388;
                }
                iVar29 = (int)param_2[5];
                iVar4 = (int)uVar33;
                lVar13 = (longlong)iVar4;
                uVar16 = puVar15[lVar13] & uVar11;
                local_378 = param_4;
                if (uVar16 == 0) {
                  iVar17 = iVar29 + 0x1e;
                  if (-1 < iVar29 + -1) {
                    iVar17 = iVar29 + -1;
                  }
                  iVar17 = iVar17 >> 5;
                  iVar7 = iVar17;
                  if (iVar17 < iVar4) {
                    iVar7 = iVar4;
                  }
                  if (iVar17 <= iVar4) break;
                  lVar14 = 0;
                  while( true ) {
                    iVar12 = iVar12 + 0x20;
                    uVar16 = puVar15[lVar13 + lVar14 + 1];
                    if (uVar16 != 0) break;
                    lVar14 = lVar14 + 1;
                    if (iVar7 - lVar13 == lVar14) goto LAB_144627b60;
                  }
                  uVar33 = (ulonglong)(iVar4 + (int)lVar14 + 1);
                  uVar11 = 0xffffffff;
                }
                uVar21 = (ulonglong)(-uVar16 & uVar16);
                uVar32 = uVar21 * 2 + 1;
                lVar13 = 0x3f;
                if (uVar32 != 0) {
                  for (; uVar32 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                  }
                }
                iVar4 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
              } while (iVar4 < iVar29);
            }
          }
LAB_144627b60:
          lVar13 = *param_2 + (longlong)iVar3 * 0x110;
LAB_1446278b3:
          puVar31 = (undefined8 *)(lVar13 + 0x10);
          puVar22 = (undefined8 *)local_2f8;
          puVar24 = (undefined8 *)(lVar13 + 0x30);
          for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
            *puVar24 = *puVar22;
            puVar22 = puVar22 + 1;
            puVar24 = puVar24 + 1;
          }
          FUN_1449437a2(local_2f8,local_178);
          pdVar23 = local_178;
          pdVar25 = (double *)(lVar13 + 0x90);
          for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
            *pdVar25 = *pdVar23;
            pdVar23 = pdVar23 + 1;
            pdVar25 = pdVar25 + 1;
          }
          lVar14 = *plVar28;
          uVar33 = *(ulonglong *)(local_360 + 0x18);
          if (*(int *)(lVar14 + 0xf8) == *(int *)(lVar14 + 0x124)) {
LAB_144627b7a:
            puVar18 = (ulonglong *)0x0;
          }
          else {
            uVar11 = ((uint)(uVar33 >> 0x14) & 0xffff ^ (uint)(uVar33 >> 4)) * -0x7a143595;
            uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
            lVar27 = lVar14 + 0x128;
            if (*(longlong *)(lVar14 + 0x130) != 0) {
              lVar27 = *(longlong *)(lVar14 + 0x130);
            }
            iVar3 = *(int *)(lVar27 + (ulonglong)
                                      (*(int *)(lVar14 + 0x138) - 1U & (uVar11 >> 0x10 ^ uVar11)) *
                                      4);
            if (iVar3 == -1) goto LAB_144627b7a;
            do {
              puVar18 = (ulonglong *)(*(longlong *)(lVar14 + 0xf0) + (longlong)iVar3 * 0x18);
              if (*puVar18 == uVar33) break;
              iVar3 = (int)puVar18[2];
              puVar18 = (ulonglong *)0x0;
            } while (iVar3 != -1);
          }
          iVar3 = (int)puVar18[1];
          iVar29 = 0;
          if ((longlong)iVar3 < 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = 0;
            iVar29 = 0;
            if (iVar3 < *(int *)(lVar14 + 0xe8)) {
              piVar1 = *(int **)(*(longlong *)(lVar14 + 0xe0) + (longlong)iVar3 * 8);
              if (piVar1[0x108] == piVar1[0x113]) {
LAB_144627d82:
                lVar27 = 0;
              }
              else {
                uVar11 = ((uint)(uVar33 >> 0x14) & 0xffff ^ (uint)(uVar33 >> 4)) * -0x7a143595;
                uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
                piVar20 = piVar1 + 0x114;
                if (*(int **)(piVar1 + 0x116) != (int *)0x0) {
                  piVar20 = *(int **)(piVar1 + 0x116);
                }
                iVar3 = piVar20[piVar1[0x118] - 1U & (uVar11 >> 0x10 ^ uVar11)];
                if (iVar3 == -1) goto LAB_144627d82;
                do {
                  lVar27 = *(longlong *)(piVar1 + 0x106) + (longlong)iVar3 * 0x168;
                  if (*(ulonglong *)(*(longlong *)(piVar1 + 0x106) + (longlong)iVar3 * 0x168) ==
                      uVar33) break;
                  iVar3 = *(int *)(lVar27 + 0x160);
                  lVar27 = 0;
                } while (iVar3 != -1);
              }
              iVar29 = *piVar1;
              uVar5 = *(undefined4 *)(lVar27 + 0xc);
            }
          }
          FUN_14462e0d8(uVar33,local_178,uVar5);
          dVar45 = local_178[0];
          *(int *)(lVar13 + 0x18) = iVar29;
          if (*(int *)(lVar13 + 0x1c) == 0 && iVar29 == 0) {
            *(undefined4 *)(lVar13 + 0x1c) = 0;
          }
          else {
            FUN_1448632c8(puVar31,iVar29);
            FUN_144b3d250(*puVar31,dVar45,iVar29);
          }
          lVar27 = *plVar28;
          uVar33 = *(ulonglong *)(local_360 + 0x18);
          if (*(int *)(lVar27 + 0xf8) == *(int *)(lVar27 + 0x124)) {
LAB_144627e78:
            puVar18 = (ulonglong *)0x0;
          }
          else {
            uVar11 = ((uint)(uVar33 >> 0x14) & 0xffff ^ (uint)(uVar33 >> 4)) * -0x7a143595;
            uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
            lVar19 = lVar27 + 0x128;
            if (*(longlong *)(lVar27 + 0x130) != 0) {
              lVar19 = *(longlong *)(lVar27 + 0x130);
            }
            iVar3 = *(int *)(lVar19 + (ulonglong)
                                      (*(int *)(lVar27 + 0x138) - 1U & (uVar11 >> 0x10 ^ uVar11)) *
                                      4);
            if (iVar3 == -1) goto LAB_144627e78;
            do {
              puVar18 = (ulonglong *)(*(longlong *)(lVar27 + 0xf0) + (longlong)iVar3 * 0x18);
              if (*puVar18 == uVar33) break;
              iVar3 = (int)puVar18[2];
              puVar18 = (ulonglong *)0x0;
            } while (iVar3 != -1);
          }
          iVar3 = (int)puVar18[1];
          iVar29 = 0;
          if ((longlong)iVar3 < 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = 0;
            iVar29 = 0;
            if (iVar3 < *(int *)(lVar27 + 0xe8)) {
              piVar1 = *(int **)(*(longlong *)(lVar27 + 0xe0) + (longlong)iVar3 * 8);
              if (piVar1[0x108] == piVar1[0x113]) {
LAB_144627f48:
                lVar27 = 0;
              }
              else {
                uVar11 = ((uint)(uVar33 >> 0x14) & 0xffff ^ (uint)(uVar33 >> 4)) * -0x7a143595;
                uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
                piVar20 = piVar1 + 0x114;
                if (*(int **)(piVar1 + 0x116) != (int *)0x0) {
                  piVar20 = *(int **)(piVar1 + 0x116);
                }
                iVar3 = piVar20[piVar1[0x118] - 1U & (uVar11 >> 0x10 ^ uVar11)];
                if (iVar3 == -1) goto LAB_144627f48;
                do {
                  lVar27 = *(longlong *)(piVar1 + 0x106) + (longlong)iVar3 * 0x168;
                  if (*(ulonglong *)(*(longlong *)(piVar1 + 0x106) + (longlong)iVar3 * 0x168) ==
                      uVar33) break;
                  iVar3 = *(int *)(lVar27 + 0x160);
                  lVar27 = 0;
                } while (iVar3 != -1);
              }
              iVar29 = *piVar1;
              iVar4 = *(int *)(lVar27 + 0xc);
            }
          }
          if (*(longlong *)(uVar33 + 0x68) != 0) {
            iVar4 = *(int *)(*(longlong *)(*(longlong *)(uVar33 + 0x68) + 0x1f8) + 0x10 +
                            (longlong)iVar4 * 0x18);
          }
          lVar27 = *(longlong *)(uVar33 + 0xf8);
          *(int *)(lVar13 + 0x28) = iVar29;
          if (*(int *)(lVar13 + 0x2c) == 0 && iVar29 == 0) {
            *(undefined4 *)(lVar13 + 0x2c) = 0;
          }
          else {
            FUN_1448632c8((undefined8 *)(lVar13 + 0x20),iVar29);
            param_2 = local_368;
            FUN_144b3d250(*(undefined8 *)(lVar13 + 0x20),lVar27 + (longlong)iVar4 * 0xc,iVar29);
          }
          local_390 = *(undefined4 *)(lVar13 + 0x18);
          local_398 = local_320;
          FUN_142453b50(*puVar31,*(undefined8 *)(lVar13 + 0x20),lVar14 + 0x50);
          if ((dVar36 * dVar59 * dVar38 < 0.0) &&
             (iVar3 = *(int *)(lVar13 + 0x28), (longlong)iVar3 != 0)) {
            lVar14 = *(longlong *)(lVar13 + 0x20);
            lVar27 = 0;
            do {
              *(uint *)(lVar14 + lVar27) = *(uint *)(lVar14 + lVar27) ^ 0x80000000;
              *(uint *)(lVar14 + 4 + lVar27) = *(uint *)(lVar14 + 4 + lVar27) ^ 0x80000000;
              *(uint *)(lVar14 + 8 + lVar27) = *(uint *)(lVar14 + 8 + lVar27) ^ 0x80000000;
              lVar27 = lVar27 + 0xc;
            } while ((longlong)iVar3 * 0xc != lVar27);
          }
          uVar5 = (**(code **)(**(longlong **)*plVar28 + 0x18))();
          *(undefined4 *)(lVar13 + 0xf0) = uVar5;
          param_1 = local_360;
        }
        plVar28 = plVar28 + 1;
      } while (plVar28 != local_310);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144628640 FUN_144628640 body=300 status=ok
// SIG undefined FUN_144628640(void)

void FUN_144628640(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [47];
  char local_89;
  longlong local_88 [2];
  longlong local_78;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_89 = param_3;
  FUN_1401bf620(param_2);
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x30);
    plVar1 = plVar5 + *(int *)(param_1 + 0x38);
    do {
      lVar4 = (longlong)*(int *)(*plVar5 + 0x18);
      if (lVar4 != 0) {
        lVar2 = *(longlong *)(*plVar5 + 0x10);
        lVar3 = 0;
        do {
          FUN_1497eef64(*(undefined8 *)(lVar2 + lVar3),local_88,*(undefined8 *)(param_1 + 0x18),
                        *plVar5);
          FUN_140cc024c(param_2,local_88);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          FUN_1400bc89a(local_68,local_60);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          if (local_88[0] != 0) {
            FUN_1400020a8();
          }
          lVar3 = lVar3 + 8;
        } while (lVar4 * 8 != lVar3);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  if (local_89 != '\0') {
    FUN_140cc024c(param_2,param_1 + 0x60);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14462876e FUN_14462876e body=685 status=ok
// SIG undefined FUN_14462876e(void)

void FUN_14462876e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1409b8650();
  dVar3 = 1.0;
  if (*(char *)(param_1 + 0xc1) == '\x01') {
    dVar3 = (double)*(float *)(param_2 + 0xd4);
  }
  if (dVar3 <= 9.99999993922529e-09) {
    dVar3 = 9.99999993922529e-09;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(double *)(lVar1 + 0x298) = 1.0 / dVar3;
  *(double *)(lVar1 + 0x290) = 1.0 / dVar3;
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar7 = 0;
  uVar15 = 0;
  uVar18 = 0;
  uVar16 = 0;
  uVar17 = 0;
  if (*(char *)(param_1 + 0xc1) == '\x01') {
    uVar16 = (undefined4)*(undefined8 *)(param_2 + 0x60);
    uVar17 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x60) >> 0x20);
    uVar7 = (undefined4)*(undefined8 *)(param_2 + 0x50);
    uVar15 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
    uVar18 = *(undefined8 *)(param_2 + 0x58);
  }
  *(ulonglong *)(lVar1 + 0x2b8) = CONCAT44(uVar15,uVar7);
  *(undefined8 *)(lVar1 + 0x2c0) = uVar18;
  *(ulonglong *)(lVar1 + 0x2c8) = CONCAT44(uVar17,uVar16);
  *(ulonglong *)(lVar1 + 0x2a0) = CONCAT44(uVar15,uVar7);
  *(undefined8 *)(lVar1 + 0x2a8) = uVar18;
  *(ulonglong *)(lVar1 + 0x2b0) = CONCAT44(uVar17,uVar16);
  lVar1 = *(longlong *)(param_1 + 0x18);
  bVar14 = *(char *)(param_1 + 0xc1) != '\0';
  puVar10 = &DAT_14c8463e0;
  if (bVar14) {
    puVar10 = (undefined8 *)(param_2 + 0x40);
  }
  puVar12 = &DAT_14c8463d0;
  if (bVar14) {
    puVar12 = (undefined8 *)(param_2 + 0x30);
  }
  uVar7 = *(undefined4 *)((longlong)puVar12 + 4);
  uVar15 = *(undefined4 *)(puVar12 + 1);
  uVar16 = *(undefined4 *)((longlong)puVar12 + 0xc);
  uVar17 = *(undefined4 *)puVar10;
  uVar4 = *(undefined4 *)((longlong)puVar10 + 4);
  uVar5 = *(undefined4 *)(puVar10 + 1);
  uVar6 = *(undefined4 *)((longlong)puVar10 + 0xc);
  *(undefined4 *)(lVar1 + 0x2d0) = *(undefined4 *)puVar12;
  *(undefined4 *)(lVar1 + 0x2d4) = uVar7;
  *(undefined4 *)(lVar1 + 0x2d8) = uVar15;
  *(undefined4 *)(lVar1 + 0x2dc) = uVar16;
  *(undefined4 *)(lVar1 + 0x2e0) = uVar17;
  *(undefined4 *)(lVar1 + 0x2e4) = uVar4;
  *(undefined4 *)(lVar1 + 0x2e8) = uVar5;
  *(undefined4 *)(lVar1 + 0x2ec) = uVar6;
  LOCK();
  *(undefined4 *)(param_1 + 0xa8) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0xac) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0xb0) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0xbc) = 0;
  UNLOCK();
  uVar7 = FUN_14062b466(*(undefined8 *)(param_1 + 0x18));
  LOCK();
  *(undefined4 *)(param_1 + 0xb8) = uVar7;
  UNLOCK();
  uVar7 = FUN_14062b514(*(undefined8 *)(param_1 + 0x18));
  LOCK();
  *(undefined4 *)(param_1 + 0xb4) = uVar7;
  UNLOCK();
  *(undefined1 *)(param_1 + 0xe8) = 0;
  FUN_1497ef090(*(undefined8 *)(param_1 + 0x18));
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    local_60 = (longlong)*(int *)(param_1 + 0x38) << 3;
    lVar11 = 0;
    do {
      plVar8 = *(longlong **)(lVar1 + lVar11);
      lVar2 = *plVar8;
      local_58 = (void *)0x0;
      local_50 = (int)plVar8[3];
      lVar13 = (longlong)local_50;
      _Src = (void *)plVar8[2];
      if (lVar13 == 0) {
        local_4c = 0;
      }
      else {
        FUN_140dc2d7e(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar13 << 3);
        plVar8 = *(longlong **)(lVar1 + lVar11);
      }
      lVar13 = plVar8[4];
      uVar9 = FUN_1497ef0f6(*(undefined8 *)(lVar2 + 8));
      uVar18 = *(undefined8 *)(*(longlong *)(lVar1 + lVar11) + 8);
      FUN_1409b86f4(uVar18,uVar9,0);
      uVar9 = FUN_14001cc68(0x150,0x10);
      local_68 = (int)lVar13;
      FUN_140dc037e(uVar9,uVar18,lVar2,&local_58);
      lVar2 = *(longlong *)(lVar1 + lVar11);
      *(undefined8 *)(lVar1 + lVar11) = uVar9;
      if (lVar2 != 0) {
        FUN_14062b91a(lVar2);
        FUN_1400020a8(lVar2);
        uVar9 = *(undefined8 *)(lVar1 + lVar11);
      }
      lVar13 = local_60;
      FUN_14462535a(*(undefined8 *)(param_1 + 0x18),uVar9);
      lVar2 = *(longlong *)(lVar1 + lVar11);
      LOCK();
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x38);
      UNLOCK();
      LOCK();
      *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + *(int *)(lVar2 + 0x140);
      UNLOCK();
      LOCK();
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + *(int *)(lVar2 + 0x144);
      UNLOCK();
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar11 = lVar11 + 8;
    } while (lVar13 != lVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144628a1c FUN_144628a1c body=215 status=ok
// SIG undefined FUN_144628a1c(void)

void FUN_144628a1c(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar2 = *(int *)(param_1 + 0x80);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x78);
    lVar8 = 0;
    do {
      FUN_1497efa7c(*(undefined8 *)(lVar3 + lVar8),param_1);
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  FUN_1497f2c6a(param_1);
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x78);
    plVar1 = plVar6 + *(int *)(param_1 + 0x80);
    do {
      plVar4 = (longlong *)*plVar6;
      FUN_1408a78c2(plVar4,param_1);
      if ((*plVar4 != 0) && (lVar3 = plVar4[3], (longlong)(int)lVar3 != 0)) {
        lVar8 = plVar4[2];
        lVar7 = 0;
        do {
          FUN_144628bac(*(undefined8 *)(lVar8 + lVar7),param_1,plVar4);
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar3 * 8 != lVar7);
      }
      FUN_144628ec2(plVar4,param_1);
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x108);
  }
  *(undefined4 *)(param_1 + 0x338) = uVar5;
  return;
}



// FUNCTION 144628b15 FUN_144628b15 body=69 status=ok
// SIG undefined FUN_144628b15(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144628b15(void)

{
  _DAT_14cc26fe8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144628b57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc26ff0,1);
  return;
}



// FUNCTION 144628b5a FUN_144628b5a body=69 status=ok
// SIG undefined FUN_144628b5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144628b5a(void)

{
  _DAT_14cc26fd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144628b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc26fd8,1);
  return;
}



// FUNCTION 144628bac FUN_144628bac body=788 status=ok
// SIG undefined FUN_144628bac(void)

void FUN_144628bac(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  int local_bc;
  void *local_b8;
  ulonglong uStack_b0;
  void *local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  void *local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar8 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
  if (1 < *(int *)(param_1 + 0x28)) {
    iVar8 = *(int *)(lVar2 + 0x40);
  }
  iVar6 = FUN_14462d4cc(param_1,param_2,param_3);
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    local_88 = (void *)0x0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (void *)0x0;
    uStack_a0 = 0;
    local_b8 = (void *)0x0;
    uStack_b0 = 0;
  }
  else {
    local_b8 = (void *)0x0;
    uVar1 = *(uint *)(puVar3 + 1);
    pvVar4 = (void *)*puVar3;
    uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar1);
    local_bc = iVar6;
    if ((longlong)(int)uVar1 == 0) {
      uStack_b0 = (ulonglong)uVar1;
    }
    else {
      FUN_140114f2c(&local_b8,uVar1,0);
      memcpy(local_b8,pvVar4,(longlong)(int)uVar1 << 5);
    }
    local_a8 = (void *)0x0;
    uVar1 = *(uint *)(puVar3 + 3);
    pvVar4 = (void *)puVar3[2];
    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
    if ((longlong)(int)uVar1 == 0) {
      uStack_a0 = (ulonglong)uVar1;
    }
    else {
      FUN_140115004(&local_a8,uVar1,0);
      memcpy(local_a8,pvVar4,(longlong)(int)uVar1 << 3);
    }
    local_98 = 0;
    iVar6 = *(int *)(puVar3 + 5);
    uVar5 = puVar3[4];
    uStack_90 = CONCAT44(uStack_90._4_4_,iVar6);
    if (iVar6 == 0) {
      uStack_90 = 0;
    }
    else {
      FUN_146fdf18a(&local_98,iVar6,0);
      FUN_146fdf1fd(local_98,uVar5,iVar6);
    }
    local_88 = (void *)0x0;
    uVar1 = *(uint *)(puVar3 + 7);
    pvVar4 = (void *)puVar3[6];
    uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
    if ((longlong)(int)uVar1 == 0) {
      uStack_80 = (ulonglong)uVar1;
      iVar6 = local_bc;
    }
    else {
      FUN_146fdf2d8(&local_88,uVar1,0);
      memcpy(local_88,pvVar4,(longlong)(int)uVar1 * 0x60);
      iVar6 = local_bc;
    }
  }
  local_d0 = &local_78;
  local_d8 = 0x3ff0000000000000;
  local_e0 = &local_68;
  local_e8 = &local_58;
  FUN_1408ad85a(lVar2,param_2,param_3,&local_b8);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400bc89a(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  iVar7 = 0;
  if (1 < *(int *)(param_1 + 0x28)) {
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + 0x40);
  }
  bVar9 = true;
  if (iVar8 == iVar7) {
    iVar8 = FUN_14462d4cc(param_1,param_2,param_3);
    bVar9 = iVar6 != iVar8;
  }
  *(bool *)(param_1 + 0x18) = bVar9;
  FUN_1408ab392(0,0);
  FUN_1408ab43a(0,0);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144628ec2 FUN_144628ec2 body=17859 status=ok
// SIG undefined FUN_144628ec2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144628ec2(longlong *param_1,ulonglong param_2)

{
  undefined1 (*pauVar1) [16];
  double *pdVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong lVar15;
  undefined8 uVar16;
  undefined1 auVar17 [8];
  undefined1 auVar18 [8];
  undefined1 auVar19 [8];
  undefined1 auVar20 [8];
  char cVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  DWORD DVar25;
  DWORD DVar26;
  longlong *plVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int iVar31;
  longlong lVar32;
  ulonglong *puVar33;
  uint *puVar34;
  longlong lVar35;
  ulonglong *puVar36;
  undefined *puVar37;
  byte bVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auVar41 [8];
  longlong lVar42;
  undefined1 uVar43;
  uint uVar44;
  longlong *plVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  bool bVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  float fVar63;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  double dVar70;
  float fVar82;
  float fVar83;
  float fVar85;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar84;
  float fVar86;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  double dVar71;
  double dVar87;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar96;
  double dVar98;
  float fVar106;
  float fVar108;
  undefined1 auVar101 [16];
  float fVar97;
  float fVar107;
  float fVar109;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  double dVar99;
  double dVar100;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar110;
  float fVar111;
  float fVar112;
  double dVar113;
  double dVar114;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  undefined1 auVar115 [16];
  undefined4 uVar121;
  double dVar122;
  double dVar123;
  undefined1 auVar124 [16];
  double dVar126;
  undefined1 auVar125 [16];
  undefined4 uVar127;
  float fVar128;
  float fVar129;
  undefined4 uVar130;
  float fVar131;
  double dVar132;
  undefined1 auVar133 [16];
  float fVar134;
  float fVar135;
  undefined4 uVar136;
  double dVar137;
  longlong *plVar138;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auStack_558 [32];
  double local_538;
  uint local_530;
  longlong *local_520;
  uint local_514;
  double local_510;
  ulonglong local_508;
  ulonglong *local_500;
  undefined1 local_4f8 [8];
  float fStack_4f0;
  float fStack_4ec;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double local_4d0;
  longlong *local_4c8;
  uint local_4bc;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  double local_4a8;
  double dStack_4a0;
  longlong *local_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  undefined8 local_468;
  double dStack_460;
  double local_450;
  longlong *local_448;
  longlong *local_440;
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  double local_418;
  double dStack_410;
  double *local_408;
  double dStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  longlong *local_3e0;
  float local_3d8;
  float fStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  undefined1 local_3a8 [16];
  undefined1 local_398 [8];
  undefined8 uStack_390;
  double local_380;
  double local_378;
  double dStack_370;
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  double local_338;
  double local_330;
  double local_328;
  double dStack_320;
  undefined8 local_318;
  float local_310;
  undefined8 local_308;
  float local_300;
  longlong local_2f8;
  longlong lStack_2f0;
  longlong local_2e8;
  longlong lStack_2e0;
  undefined8 *local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  double local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  double local_268;
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  float local_1f8;
  float fStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8 [16];
  undefined1 local_1b8 [8];
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined1 local_158 [8];
  double dStack_150;
  undefined1 local_148 [8];
  double dStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_558;
  local_138 = (double)CONCAT44(local_138._4_4_,(float)local_138);
  uStack_130 = (double)CONCAT44(uStack_130._4_4_,(float)uStack_130);
  if ((longlong *)*param_1 == (longlong *)0x0) goto LAB_14462c7dd;
  if ((int)param_1[0x1f] != *(int *)((longlong)param_1 + 0x124)) {
    uVar22 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
    plVar27 = param_1 + 0x25;
    if ((longlong *)param_1[0x26] != (longlong *)0x0) {
      plVar27 = (longlong *)param_1[0x26];
    }
    iVar23 = *(int *)((longlong)plVar27 +
                     (ulonglong)((int)param_1[0x27] - 1U & (uVar22 >> 0x10 ^ uVar22)) * 4);
    if (iVar23 != -1) {
      do {
        puVar33 = (ulonglong *)(param_1[0x1e] + (longlong)iVar23 * 0x18);
        if (*puVar33 == param_2) goto LAB_144628fd5;
        iVar23 = (int)puVar33[2];
      } while (iVar23 != -1);
    }
  }
  puVar33 = (ulonglong *)0x0;
LAB_144628fd5:
  local_4d0 = (double)(ulonglong)(uint)puVar33[1];
  if (((*(char *)((longlong)param_1 + 0x3c) != '\x01') || (iVar23 = (int)param_1[8], iVar23 < 0)) ||
     ((int)param_1[0x1d] <= iVar23)) {
    iVar23 = (**(code **)(*(longlong *)*param_1 + 0x10))();
  }
  *(int *)(puVar33 + 1) = iVar23;
  local_4b8 = (double)param_1[10];
  uStack_4b0 = (double)param_1[0xb];
  local_478 = (double)param_1[0xc];
  dStack_470 = (double)param_1[0xd];
  local_488 = (double)param_1[0xe];
  dStack_480 = (double)param_1[0xf];
  local_378 = (double)param_1[0x10];
  dStack_370 = (double)param_1[0x11];
  local_2e8 = param_1[0x14];
  lStack_2e0 = param_1[0x15];
  local_2f8 = param_1[0x12];
  lStack_2f0 = param_1[0x13];
  local_500 = puVar33;
  (**(code **)(*(longlong *)*param_1 + 0xa8))((longlong *)*param_1,local_158);
  auVar65._4_4_ = local_138._4_4_;
  auVar65._0_4_ = (float)local_138;
  auVar65._8_4_ = (float)uStack_130;
  auVar65._12_4_ = uStack_130._4_4_;
  auVar73._8_8_ = dStack_120;
  auVar73._0_8_ = local_128;
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar73;
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar65;
  *(undefined1 (*) [16])(param_1 + 0xc) = _local_148;
  param_1[10] = (longlong)local_158;
  param_1[0xb] = (longlong)dStack_150;
  param_1[0x12] = 0x3ff0000000000000;
  param_1[0x13] = 0x3ff0000000000000;
  param_1[0x14] = 0x3ff0000000000000;
  param_1[0x15] = 0;
  local_508 = param_2;
  local_440 = param_1;
  if ((longlong)(int)param_1[3] != 0) {
    plVar27 = (longlong *)param_1[2];
    local_3e0 = plVar27 + (int)param_1[3];
    uVar22 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
             -0x7a143595;
    uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
    uVar24 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    local_4bc = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
    local_4bc = local_4bc >> 0x10 ^ local_4bc;
    local_514 = local_4bc * 0x40 + (uVar22 >> 0x10 ^ uVar22) + (local_4bc >> 2) + 0x9e3779b9 ^
                local_4bc;
    local_4a8 = (double)(param_2 + 0x1b8);
    local_3a8._0_8_ = param_2 + 0x70;
    local_3b8 = (double)(param_2 + 0x68);
    local_418 = (double)(param_2 + 0x1d0);
    local_368._0_8_ = param_2 + 0x200;
    local_448 = param_1 + 0x25;
    auVar102 = ZEXT816(0);
    do {
      lVar35 = *plVar27;
      local_4c8 = plVar27;
      local_408 = (double *)(**(code **)(*(longlong *)*param_1 + 0xb8))();
      plVar27 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0xb0))();
      local_438._0_8_ = lVar35;
      if ((longlong)*(int *)(lVar35 + 0x28) != 0) {
        plVar45 = *(longlong **)(lVar35 + 0x20);
        plVar138 = plVar45 + *(int *)(lVar35 + 0x28);
        local_520 = plVar138;
        local_490 = plVar27;
        do {
          dVar70 = local_3b8;
          lVar35 = *plVar45;
          iVar23 = *(int *)(lVar35 + 0x40);
          if (iVar23 != 0) {
            if (*(int *)(lVar35 + 0x50) != *(int *)(lVar35 + 0x7c)) {
              lVar42 = lVar35 + 0x80;
              if (*(longlong *)(lVar35 + 0x88) != 0) {
                lVar42 = *(longlong *)(lVar35 + 0x88);
              }
              iVar31 = *(int *)(lVar42 + (ulonglong)(*(int *)(lVar35 + 0x90) - 1U & local_514) * 4);
              if (iVar31 != -1) {
                lVar42 = *(longlong *)(lVar35 + 0x48);
                do {
                  lVar32 = (longlong)iVar31 * 0x20;
                  lVar49 = lVar42 + lVar32;
                  if ((*(ulonglong *)(lVar42 + lVar32) == local_508) &&
                     (*(longlong **)(lVar42 + 8 + lVar32) == param_1)) goto LAB_144629276;
                  iVar31 = *(int *)(lVar49 + 0x18);
                } while (iVar31 != -1);
              }
            }
            lVar49 = 0;
LAB_144629276:
            uVar121 = *(undefined4 *)(lVar49 + 0x10);
            local_538 = local_4a8;
            uVar16 = local_3a8._0_8_;
            FUN_14462e191(local_158,local_3b8,local_3a8._0_8_,uVar121);
            auVar17 = local_158;
            local_538 = local_418;
            FUN_140c0753f(local_158,dVar70,uVar16,uVar121);
            auVar41 = local_158;
            local_538 = (double)local_368._0_8_;
            FUN_140c0753f(&local_2d8,dVar70,uVar16,uVar121);
            plVar27 = local_490;
            plVar138 = local_520;
            param_1 = local_440;
            if (0 < iVar23) {
              dVar70 = 1.0 / *(double *)(local_508 + 0x298);
              fVar67 = (float)(dVar70 * local_408[10]);
              fVar82 = (float)(local_408[0xb] * 0.0);
              fVar129 = (float)(dVar70 * local_408[8]);
              fVar131 = (float)(dVar70 * local_408[9]);
              uStack_390._4_4_ = (float)((local_408[7] + 0.0) * 0.0);
              uStack_390._0_4_ =
                   (float)(((double)(*(ulonglong *)(local_508 + 0x2c8) ^ DAT_149931e80) +
                           local_408[6]) * dVar70);
              local_398._0_4_ =
                   (undefined4)((local_408[4] - *(double *)(local_508 + 0x2b8)) * dVar70);
              local_398._4_4_ =
                   (undefined4)((local_408[5] - *(double *)(local_508 + 0x2c0)) * dVar70);
              fVar110 = (float)local_408[2];
              fVar116 = (float)local_408[3];
              fVar134 = (float)*local_408;
              fVar135 = (float)local_408[1];
              fVar68 = fVar134 + fVar134;
              fVar83 = fVar135 + fVar135;
              fVar85 = fVar110 + fVar110;
              fVar63 = fVar116 * (fVar116 + fVar116);
              auVar103._0_4_ = (1.0 - (fVar110 * fVar85 + fVar135 * fVar83)) * fVar129;
              auVar103._4_4_ = (1.0 - (fVar110 * fVar85 + fVar134 * fVar68)) * fVar131;
              auVar103._8_4_ = (1.0 - (fVar135 * fVar83 + fVar134 * fVar68)) * fVar67;
              auVar103._12_4_ = (0.0 - (fVar63 + fVar63)) * fVar82;
              fVar63 = (fVar83 * fVar134 + fVar85 * fVar116) * fVar129;
              fVar128 = (fVar85 * fVar134 + fVar83 * fVar116) * fVar67;
              local_3d8 = (fVar83 * fVar134 - fVar85 * fVar116) * fVar131;
              auVar65 = blendps(auVar103,auVar102,8);
              auVar72._4_4_ = (fVar85 * fVar135 + fVar68 * fVar116) * fVar131;
              auVar72._0_4_ = fVar63;
              auVar72._8_4_ = fVar128;
              auVar72._12_4_ = (fVar68 * fVar134 + fVar68 * fVar116) * fVar82;
              local_428._4_4_ = fVar63;
              local_428._0_4_ = auVar103._0_4_;
              local_428._8_4_ = (fVar85 * fVar134 - fVar83 * fVar116) * fVar129;
              local_428._12_4_ = auVar102._8_4_;
              auVar73 = insertps(auVar72,auVar72,0x4c);
              uStack_3d0 = auVar73._0_4_;
              uStack_3cc = auVar73._8_4_;
              local_468 = (double)CONCAT44((fVar85 * fVar135 - fVar68 * fVar116) * fVar67,fVar128);
              dStack_460 = auVar65._8_8_;
              local_348 = insertps(_local_398,0x3f800000,0x30);
              local_4f8._4_4_ = fVar134;
              local_4f8._0_4_ = fVar134;
              fStack_4f0 = fVar134;
              fStack_4ec = fVar134;
              local_3f8._4_4_ = fVar110;
              local_3f8._0_4_ = fVar110;
              uStack_3f0._0_4_ = fVar110;
              uStack_3f0._4_4_ = fVar110;
              lVar42 = 0;
              puVar28 = local_2d8;
              fStack_3d4 = auVar103._4_4_;
              do {
                iVar23 = *(int *)((longlong)auVar17 + lVar42 * 4);
                if (((longlong)iVar23 < 0) || ((int)plVar27[1] <= iVar23)) {
                  local_1b8._4_4_ = fVar135;
                  local_1b8._0_4_ = fVar134;
                  uStack_1b0._0_4_ = fVar110;
                  uStack_1b0._4_4_ = fVar116;
                  local_1a8 = (longlong *)local_398;
                  uStack_1a0 = uStack_390;
                  local_198 = (double)CONCAT44(fVar131,fVar129);
                  uStack_190 = (double)CONCAT44(fVar82,fVar67);
                  FUN_144b3cccc(auVar41,local_158,local_1b8);
                }
                else {
                  lVar49 = *plVar27;
                  lVar32 = (longlong)iVar23 * 0x60;
                  pdVar2 = (double *)(lVar49 + 0x50 + lVar32);
                  fVar69 = (float)*pdVar2;
                  fVar84 = (float)pdVar2[1];
                  auVar88._12_4_ = fVar84;
                  auVar88._8_4_ = fVar69;
                  pdVar2 = (double *)(lVar49 + 0x40 + lVar32);
                  auVar88._0_4_ = (float)*pdVar2;
                  auVar88._4_4_ = (float)pdVar2[1];
                  pdVar2 = (double *)(lVar49 + 0x30 + lVar32);
                  fVar96 = (float)*pdVar2;
                  fVar106 = (float)pdVar2[1];
                  auVar54._12_4_ = fVar106;
                  auVar54._8_4_ = fVar96;
                  pdVar2 = (double *)(lVar49 + 0x20 + lVar32);
                  auVar54._0_4_ = (float)*pdVar2;
                  auVar54._4_4_ = (float)pdVar2[1];
                  pdVar2 = (double *)(lVar49 + 0x10 + lVar32);
                  fVar85 = (float)*pdVar2;
                  fVar128 = (float)pdVar2[1];
                  fVar111 = (float)*(double *)(lVar49 + lVar32);
                  fVar117 = (float)((double *)(lVar49 + lVar32))[1];
                  auVar65 = *(undefined1 (*) [16])((longlong)auVar41 + 0x20);
                  fVar63 = auVar65._0_4_;
                  fVar68 = auVar65._4_4_;
                  fVar83 = auVar65._12_4_;
                  fVar86 = auVar65._8_4_;
                  auVar65 = minps(auVar65,auVar88);
                  auVar101._4_4_ = -(uint)(auVar65._4_4_ < 0.0);
                  auVar101._0_4_ = -(uint)(auVar65._0_4_ < 0.0);
                  auVar101._8_4_ = -(uint)(auVar65._8_4_ < auVar102._8_4_);
                  auVar101._12_4_ = -(uint)(auVar65._12_4_ < auVar102._12_4_);
                  iVar23 = movmskps((int)lVar32,auVar101);
                  if (iVar23 == 0) {
                    fVar97 = *(float *)auVar41;
                    fVar107 = *(float *)((longlong)auVar41 + 4);
                    fVar108 = *(float *)((longlong)auVar41 + 8);
                    fVar109 = *(float *)((longlong)auVar41 + 0xc);
                    auVar66._0_4_ =
                         fVar85 * fVar107 * -1.0 +
                         fVar117 * fVar108 * 1.0 + fVar111 * fVar109 * 1.0 + fVar128 * fVar97;
                    auVar66._4_4_ =
                         fVar85 * fVar97 * 1.0 +
                         fVar117 * fVar109 * 1.0 + fVar111 * fVar108 * -1.0 + fVar128 * fVar107;
                    auVar66._8_4_ =
                         fVar85 * fVar109 * 1.0 +
                         fVar117 * fVar97 * -1.0 + fVar111 * fVar107 * 1.0 + fVar128 * fVar108;
                    auVar66._12_4_ =
                         fVar85 * fVar108 * -1.0 +
                         fVar117 * fVar107 * -1.0 + fVar111 * fVar97 * -1.0 + fVar128 * fVar109;
                    fVar97 = *(float *)((longlong)auVar41 + 0x10) * auVar88._0_4_;
                    fVar107 = *(float *)((longlong)auVar41 + 0x14) * auVar88._4_4_;
                    fVar108 = *(float *)((longlong)auVar41 + 0x18) * fVar69;
                    fVar109 = *(float *)((longlong)auVar41 + 0x1c) * fVar84;
                    fVar112 = fVar107 * fVar111 - fVar117 * fVar97;
                    fVar118 = fVar108 * fVar117 - fVar85 * fVar107;
                    fVar119 = fVar97 * fVar85 - fVar111 * fVar108;
                    fVar120 = fVar109 * fVar128 - fVar128 * fVar109;
                    fVar112 = fVar112 + fVar112;
                    fVar118 = fVar118 + fVar118;
                    fVar119 = fVar119 + fVar119;
                    fVar120 = fVar120 + fVar120;
                    auVar57._0_4_ =
                         auVar54._0_4_ +
                         (fVar112 * fVar117 - fVar119 * fVar85) + fVar128 * fVar118 + fVar97;
                    auVar57._4_4_ =
                         auVar54._4_4_ +
                         (fVar118 * fVar85 - fVar112 * fVar111) + fVar128 * fVar119 + fVar107;
                    auVar57._8_4_ =
                         fVar96 + (fVar119 * fVar111 - fVar118 * fVar117) +
                                  fVar128 * fVar112 + fVar108;
                    auVar57._12_4_ =
                         fVar106 + (fVar120 * fVar128 - fVar120 * fVar128) +
                                   fVar128 * fVar120 + fVar109;
                    uVar121 = 0;
                  }
                  else {
                    fVar96 = fVar111 + fVar111;
                    fVar106 = fVar117 + fVar117;
                    fVar97 = fVar85 + fVar85;
                    fVar112 = fVar128 * (fVar128 + fVar128);
                    fVar108 = (1.0 - (fVar85 * fVar97 + fVar117 * fVar106)) * auVar88._0_4_;
                    fVar109 = (1.0 - (fVar85 * fVar97 + fVar111 * fVar96)) * auVar88._4_4_;
                    auVar139._4_4_ = fVar109;
                    auVar139._0_4_ = fVar108;
                    fVar85 = (fVar106 * fVar111 + fVar128 * fVar97) * auVar88._0_4_;
                    auVar133._4_4_ = (fVar97 * fVar117 + fVar128 * fVar96) * auVar88._4_4_;
                    auVar133._0_4_ = fVar85;
                    fVar107 = (fVar97 * fVar111 + fVar128 * fVar106) * fVar69;
                    auVar139._8_4_ = (1.0 - (fVar117 * fVar106 + fVar111 * fVar96)) * fVar69;
                    auVar139._12_4_ = (0.0 - (fVar112 + fVar112)) * fVar84;
                    auVar73 = blendps(auVar139,ZEXT816(0),8);
                    auVar133._8_4_ = fVar107;
                    auVar133._12_4_ = (fVar96 * fVar111 + fVar128 * fVar96) * fVar84;
                    local_1b8._4_4_ = fVar85;
                    local_1b8._0_4_ = fVar108;
                    uStack_1b0._0_4_ = (fVar97 * fVar111 - fVar128 * fVar106) * auVar88._0_4_;
                    uStack_1b0._4_4_ = 0;
                    auVar65 = insertps(auVar133,auVar133,0x4c);
                    local_1a8 = (longlong *)
                                CONCAT44(fVar109,(fVar106 * fVar111 - fVar128 * fVar97) *
                                                 auVar88._4_4_);
                    uStack_1a0 = (double)CONCAT44(auVar65._8_4_,auVar65._0_4_);
                    local_198 = (double)CONCAT44((fVar97 * fVar117 - fVar128 * fVar96) * fVar69,
                                                 fVar107);
                    uStack_190 = auVar73._8_8_;
                    auVar140._0_12_ = ZEXT812(0x3f800000);
                    auVar140._12_4_ = 0;
                    local_188 = insertps(auVar54,auVar140,0x30);
                    fVar85 = *(float *)auVar41;
                    fVar128 = *(float *)((longlong)auVar41 + 4);
                    fVar96 = *(float *)((longlong)auVar41 + 8);
                    fVar106 = *(float *)((longlong)auVar41 + 0xc);
                    fVar117 = fVar85 + fVar85;
                    fVar97 = fVar128 + fVar128;
                    fVar107 = fVar96 + fVar96;
                    fVar111 = fVar106 * (fVar106 + fVar106);
                    auVar89._0_4_ = (1.0 - (fVar96 * fVar107 + fVar128 * fVar97)) * fVar63;
                    auVar89._4_4_ = (1.0 - (fVar96 * fVar107 + fVar85 * fVar117)) * fVar68;
                    auVar89._8_4_ = (1.0 - (fVar128 * fVar97 + fVar85 * fVar117)) * fVar86;
                    auVar89._12_4_ = (0.0 - (fVar111 + fVar111)) * fVar83;
                    fVar96 = (fVar97 * fVar85 + fVar107 * fVar106) * fVar63;
                    auVar115._4_4_ = (fVar107 * fVar128 + fVar117 * fVar106) * fVar68;
                    auVar115._0_4_ = fVar96;
                    local_1f8 = (fVar107 * fVar85 + fVar97 * fVar106) * fVar86;
                    fStack_1f4 = (fVar107 * fVar128 - fVar117 * fVar106) * fVar86;
                    auVar65 = blendps(auVar89,ZEXT816(0),8);
                    auVar115._8_4_ = local_1f8;
                    auVar115._12_4_ = (fVar117 * fVar85 + fVar117 * fVar106) * fVar83;
                    local_218._4_4_ = fVar96;
                    local_218._0_4_ = auVar89._0_4_;
                    local_218._8_4_ = (fVar107 * fVar85 - fVar97 * fVar106) * fVar63;
                    local_218._12_4_ = 0;
                    auVar73 = insertps(auVar115,auVar115,0x4c);
                    uStack_200 = auVar73._0_4_;
                    uStack_1fc = auVar73._8_4_;
                    uStack_1f0 = auVar65._8_4_;
                    uStack_1ec = auVar65._12_4_;
                    local_208 = (double)CONCAT44(auVar89._4_4_,
                                                 (fVar97 * fVar85 - fVar107 * fVar106) * fVar68);
                    local_1e8 = insertps(*(undefined1 (*) [16])((longlong)auVar41 + 0x10),auVar140,
                                         0x30);
                    FUN_144afeb32(local_158,local_218,local_1b8,auVar65._0_8_);
                    auVar73 = _local_148;
                    auVar65 = _local_158;
                    local_510 = (double)CONCAT44(local_510._4_4_,local_158._0_4_);
                    local_4d8 = (double)CONCAT44(local_4d8._4_4_,dStack_150._0_4_);
                    fVar85 = dStack_150._0_4_ * dStack_150._0_4_ +
                             (float)local_158._0_4_ * (float)local_158._0_4_ +
                             (float)local_158._4_4_ * (float)local_158._4_4_;
                    local_3c8._0_4_ = local_148._0_4_;
                    local_450 = (double)CONCAT44(local_450._4_4_,dStack_140._0_4_);
                    fVar128 = dStack_140._0_4_ * dStack_140._0_4_ +
                              (float)local_148._0_4_ * (float)local_148._0_4_ +
                              (float)local_148._4_4_ * (float)local_148._4_4_;
                    local_358 = (double)CONCAT44(local_358._4_4_,(float)uStack_130);
                    fVar96 = (float)uStack_130 * (float)uStack_130 +
                             (float)local_138 * (float)local_138 + local_138._4_4_ * local_138._4_4_
                    ;
                    uVar22 = -(uint)(0.0 <= fVar85 + -1e-08);
                    fVar85 = (float)(~uVar22 & 0x3f800000 | (uint)(1.0 / SQRT(fVar85)) & uVar22);
                    uVar22 = -(uint)(0.0 <= fVar128 + -1e-08);
                    fVar128 = (float)(~uVar22 & 0x3f800000 | (uint)(1.0 / SQRT(fVar128)) & uVar22);
                    uVar22 = -(uint)(0.0 <= fVar96 + -1e-08);
                    fVar96 = (float)(~uVar22 & 0x3f800000 | (uint)(1.0 / SQRT(fVar96)) & uVar22);
                    local_4e8 = (double)CONCAT44(local_4e8._4_4_,(float)local_138 * fVar96);
                    auVar55._4_4_ = -(uint)(0.0 <= auVar88._4_4_ * fVar68);
                    auVar55._0_4_ = -(uint)(0.0 <= auVar88._0_4_ * fVar63);
                    auVar55._8_4_ = -(uint)(0.0 <= fVar69 * fVar86);
                    auVar55._12_4_ = -(uint)(0.0 <= fVar84 * fVar83);
                    auVar102 = blendvps(_DAT_149f63320,_DAT_149e1ef10,auVar55);
                    fVar106 = auVar102._0_4_;
                    local_158._4_4_ = (float)local_158._4_4_ * fVar85 * fVar106;
                    local_158._0_4_ = (float)local_158._0_4_ * fVar85 * fVar106;
                    dStack_150._4_4_ = auVar65._12_4_;
                    dStack_150._0_4_ = fVar85 * dStack_150._0_4_ * fVar106;
                    fVar85 = auVar102._4_4_;
                    local_148._4_4_ = (float)local_148._4_4_ * fVar128 * fVar85;
                    local_148._0_4_ = (float)local_148._0_4_ * fVar128 * fVar85;
                    dStack_140._4_4_ = auVar73._12_4_;
                    dStack_140._0_4_ = fVar128 * dStack_140._0_4_ * fVar85;
                    fVar85 = auVar102._8_4_;
                    uStack_130._0_4_ = fVar96 * (float)uStack_130 * fVar85;
                    local_138._4_4_ = local_138._4_4_ * fVar96 * fVar85;
                    local_138._0_4_ = fVar85 * (float)local_138 * fVar96;
                    uVar121 = FUN_14066c2ac(&local_278);
                    fVar85 = (float)local_278 * (float)local_278 + local_278._4_4_ * local_278._4_4_
                    ;
                    fVar128 = (float)uStack_270 * (float)uStack_270 +
                              uStack_270._4_4_ * uStack_270._4_4_;
                    auVar76._0_4_ = fVar128 + fVar85;
                    auVar76._4_4_ = fVar128 + fVar85;
                    auVar76._8_4_ = fVar85 + fVar128;
                    auVar76._12_4_ = fVar85 + fVar128;
                    auVar56._4_4_ = -(uint)(1e-08 <= auVar76._4_4_);
                    auVar56._0_4_ = -(uint)(1e-08 <= auVar76._0_4_);
                    auVar56._8_4_ = -(uint)(1e-08 <= auVar76._8_4_);
                    auVar56._12_4_ = -(uint)(1e-08 <= auVar76._12_4_);
                    auVar65 = sqrtps(auVar76,auVar76);
                    auVar65 = divps(_DAT_1499314a0,auVar65);
                    auVar90._0_4_ = auVar65._0_4_ * (float)local_278;
                    auVar90._4_4_ = auVar65._4_4_ * local_278._4_4_;
                    auVar90._8_4_ = auVar65._8_4_ * (float)uStack_270;
                    auVar90._12_4_ = auVar65._12_4_ * uStack_270._4_4_;
                    auVar66 = blendvps(_DAT_149932320,auVar90,auVar56);
                    auVar13._8_8_ = dStack_120;
                    auVar13._0_8_ = local_128;
                    auVar57 = blendps(auVar13,_DAT_149931140,8);
                  }
                  fVar83 = fVar83 * fVar84;
                  fVar86 = fVar86 * fVar69;
                  fVar68 = fVar68 * auVar88._4_4_;
                  fVar63 = fVar63 * auVar88._0_4_;
                  auVar74._4_4_ = fVar68;
                  auVar74._0_4_ = fVar63;
                  auVar74._8_4_ = fVar86;
                  auVar74._12_4_ = fVar83;
                  auVar11._4_4_ = fVar131;
                  auVar11._0_4_ = fVar129;
                  auVar11._8_4_ = fVar67;
                  auVar11._12_4_ = fVar82;
                  auVar65 = minps(auVar74,auVar11);
                  auVar102._0_12_ = ZEXT812(0);
                  auVar102._12_4_ = 0;
                  auVar75._4_4_ = -(uint)(auVar65._4_4_ < 0.0);
                  auVar75._0_4_ = -(uint)(auVar65._0_4_ < 0.0);
                  auVar75._8_4_ = -(uint)(auVar65._8_4_ < 0.0);
                  auVar75._12_4_ = -(uint)(auVar65._12_4_ < 0.0);
                  iVar23 = movmskps(uVar121,auVar75);
                  fVar85 = auVar66._0_4_;
                  fVar128 = auVar66._4_4_;
                  fVar69 = auVar66._8_4_;
                  fVar84 = auVar66._12_4_;
                  if (iVar23 == 0) {
                    local_158._0_4_ =
                         fVar128 * (float)local_3f8 * -1.0 +
                         fVar69 * fVar135 * 1.0 +
                         fVar84 * (float)local_4f8._0_4_ * 1.0 + fVar116 * fVar85;
                    local_158._4_4_ =
                         fVar85 * local_3f8._4_4_ * 1.0 +
                         fVar84 * fVar135 * 1.0 +
                         fVar69 * (float)local_4f8._4_4_ * -1.0 + fVar116 * fVar128;
                    dStack_150._0_4_ =
                         fVar84 * (float)uStack_3f0 * 1.0 +
                         fVar85 * fVar135 * -1.0 + fVar128 * fStack_4f0 * 1.0 + fVar116 * fVar69;
                    dStack_150._4_4_ =
                         fVar69 * uStack_3f0._4_4_ * -1.0 +
                         fVar128 * fVar135 * -1.0 + fVar85 * fStack_4ec * -1.0 + fVar116 * fVar84;
                    fVar85 = auVar57._0_4_ * fVar129;
                    fVar128 = auVar57._4_4_ * fVar131;
                    fVar69 = auVar57._8_4_ * fVar67;
                    fVar84 = auVar57._12_4_ * fVar82;
                    fVar96 = fVar128 * fVar134 - fVar135 * fVar85;
                    fVar106 = fVar69 * fVar135 - fVar110 * fVar128;
                    fVar111 = fVar85 * fVar110 - fVar134 * fVar69;
                    fVar117 = fVar84 * fVar116 - fVar116 * fVar84;
                    fVar96 = fVar96 + fVar96;
                    fVar106 = fVar106 + fVar106;
                    fVar111 = fVar111 + fVar111;
                    fVar117 = fVar117 + fVar117;
                    local_148._0_4_ =
                         (fVar96 * fVar135 - fVar111 * fVar110) + fVar116 * fVar106 + fVar85 +
                         (float)local_398._0_4_;
                    local_148._4_4_ =
                         (fVar106 * fVar110 - fVar96 * fVar134) + fVar116 * fVar111 + fVar128 +
                         (float)local_398._4_4_;
                    dStack_140._0_4_ =
                         (fVar111 * fVar134 - fVar106 * fVar135) + fVar116 * fVar96 + fVar69 +
                         (float)uStack_390;
                    dStack_140._4_4_ =
                         (fVar117 * fVar116 - fVar117 * fVar116) + fVar116 * fVar117 + fVar84 +
                         uStack_390._4_4_;
                  }
                  else {
                    _local_1b8 = local_428;
                    local_1a8 = (longlong *)CONCAT44(fStack_3d4,local_3d8);
                    uStack_1a0 = (double)CONCAT44(uStack_3cc,uStack_3d0);
                    local_198 = local_468;
                    uStack_190 = dStack_460;
                    local_188 = local_348;
                    fVar106 = fVar85 + fVar85;
                    fVar111 = fVar128 + fVar128;
                    fVar117 = fVar69 + fVar69;
                    fVar96 = fVar84 * (fVar84 + fVar84);
                    auVar91._0_4_ = (1.0 - (fVar69 * fVar117 + fVar128 * fVar111)) * fVar63;
                    auVar91._4_4_ = (1.0 - (fVar69 * fVar117 + fVar85 * fVar106)) * fVar68;
                    auVar91._8_4_ = (1.0 - (fVar128 * fVar111 + fVar85 * fVar106)) * fVar86;
                    auVar91._12_4_ = (0.0 - (fVar96 + fVar96)) * fVar83;
                    fVar69 = (fVar111 * fVar85 + fVar117 * fVar84) * fVar63;
                    auVar124._4_4_ = (fVar117 * fVar128 + fVar106 * fVar84) * fVar68;
                    auVar124._0_4_ = fVar69;
                    local_1f8 = (fVar117 * fVar85 + fVar111 * fVar84) * fVar86;
                    auVar77._0_4_ = (fVar111 * fVar85 - fVar117 * fVar84) * fVar68;
                    auVar77._4_4_ = (fVar117 * fVar128 - fVar106 * fVar84) * fVar86;
                    auVar77._8_4_ = (fVar117 * fVar85 - fVar111 * fVar84) * fVar63;
                    auVar77._12_4_ = (fVar106 * fVar85 - fVar106 * fVar84) * fVar83;
                    auVar65 = blendps(auVar91,auVar102,8);
                    auVar124._8_4_ = local_1f8;
                    auVar124._12_4_ = (fVar106 * fVar85 + fVar106 * fVar84) * fVar83;
                    local_218._4_4_ = fVar69;
                    local_218._0_4_ = auVar91._0_4_;
                    local_218._8_4_ = auVar77._8_4_;
                    local_218._12_4_ = 0;
                    auVar73 = insertps(auVar124,auVar124,0x4c);
                    uStack_200 = auVar73._0_4_;
                    uStack_1fc = auVar73._8_4_;
                    uStack_1f0 = auVar65._8_4_;
                    uStack_1ec = auVar65._12_4_;
                    local_208 = (double)CONCAT44(auVar91._4_4_,auVar77._0_4_);
                    auVar141._0_12_ = ZEXT812(0x3f800000);
                    auVar141._12_4_ = 0;
                    local_1e8 = insertps(auVar57,auVar141,0x30);
                    fStack_1f4 = auVar77._4_4_;
                    FUN_144afeb32(local_158,local_218,auVar77._8_8_,auVar65._0_8_);
                    auVar73 = _local_148;
                    auVar65 = _local_158;
                    local_4d8 = (double)CONCAT44(local_4d8._4_4_,local_158._0_4_);
                    local_3c8._0_4_ = dStack_150._0_4_;
                    fVar85 = dStack_150._0_4_ * dStack_150._0_4_ +
                             (float)local_158._0_4_ * (float)local_158._0_4_ +
                             (float)local_158._4_4_ * (float)local_158._4_4_;
                    local_450 = (double)CONCAT44(local_450._4_4_,local_148._0_4_);
                    local_358 = (double)CONCAT44(local_358._4_4_,dStack_140._0_4_);
                    fVar128 = dStack_140._0_4_ * dStack_140._0_4_ +
                              (float)local_148._0_4_ * (float)local_148._0_4_ +
                              (float)local_148._4_4_ * (float)local_148._4_4_;
                    local_380 = (double)CONCAT44(local_380._4_4_,(float)uStack_130);
                    fVar69 = (float)uStack_130 * (float)uStack_130 +
                             (float)local_138 * (float)local_138 + local_138._4_4_ * local_138._4_4_
                    ;
                    uVar22 = -(uint)(0.0 <= fVar85 + -1e-08);
                    fVar85 = (float)(~uVar22 & 0x3f800000 | (uint)(1.0 / SQRT(fVar85)) & uVar22);
                    uVar22 = -(uint)(0.0 <= fVar128 + -1e-08);
                    fVar128 = (float)(~uVar22 & 0x3f800000 | (uint)(1.0 / SQRT(fVar128)) & uVar22);
                    uVar22 = -(uint)(0.0 <= fVar69 + -1e-08);
                    fVar69 = (float)(~uVar22 & 0x3f800000 | (uint)(1.0 / SQRT(fVar69)) & uVar22);
                    auVar102 = ZEXT816(0);
                    local_510 = (double)CONCAT44(local_510._4_4_,(float)local_158._4_4_ * fVar85);
                    local_4e8 = (double)CONCAT44(local_4e8._4_4_,(float)local_138 * fVar69);
                    auVar58._4_4_ = -(uint)(0.0 <= fVar131 * fVar68);
                    auVar58._0_4_ = -(uint)(0.0 <= fVar129 * fVar63);
                    auVar58._8_4_ = -(uint)(0.0 <= fVar67 * fVar86);
                    auVar58._12_4_ = -(uint)(0.0 <= fVar82 * fVar83);
                    auVar103 = blendvps(_DAT_149f63320,_DAT_149e1ef10,auVar58);
                    fVar84 = auVar103._0_4_;
                    local_158._4_4_ = (float)local_158._4_4_ * fVar85 * fVar84;
                    local_158._0_4_ = (float)local_158._0_4_ * fVar85 * fVar84;
                    dStack_150._4_4_ = auVar65._12_4_;
                    dStack_150._0_4_ = fVar85 * dStack_150._0_4_ * fVar84;
                    fVar85 = auVar103._4_4_;
                    local_148._4_4_ = (float)local_148._4_4_ * fVar128 * fVar85;
                    local_148._0_4_ = (float)local_148._0_4_ * fVar128 * fVar85;
                    dStack_140._4_4_ = auVar73._12_4_;
                    dStack_140._0_4_ = fVar128 * dStack_140._0_4_ * fVar85;
                    fVar85 = auVar103._8_4_;
                    uStack_130._0_4_ = fVar69 * (float)uStack_130 * fVar85;
                    local_138._4_4_ = local_138._4_4_ * fVar69 * fVar85;
                    local_138._0_4_ = fVar85 * (float)local_138 * fVar69;
                    FUN_14066c2ac(&local_278);
                    fVar85 = (float)local_278 * (float)local_278 + local_278._4_4_ * local_278._4_4_
                    ;
                    fVar128 = (float)uStack_270 * (float)uStack_270 +
                              uStack_270._4_4_ * uStack_270._4_4_;
                    auVar78._0_4_ = fVar128 + fVar85;
                    auVar78._4_4_ = fVar128 + fVar85;
                    auVar78._8_4_ = fVar85 + fVar128;
                    auVar78._12_4_ = fVar85 + fVar128;
                    auVar59._4_4_ = -(uint)(1e-08 <= auVar78._4_4_);
                    auVar59._0_4_ = -(uint)(1e-08 <= auVar78._0_4_);
                    auVar59._8_4_ = -(uint)(1e-08 <= auVar78._8_4_);
                    auVar59._12_4_ = -(uint)(1e-08 <= auVar78._12_4_);
                    auVar65 = sqrtps(auVar78,auVar78);
                    auVar65 = divps(_DAT_1499314a0,auVar65);
                    auVar92._0_4_ = auVar65._0_4_ * (float)local_278;
                    auVar92._4_4_ = auVar65._4_4_ * local_278._4_4_;
                    auVar92._8_4_ = auVar65._8_4_ * (float)uStack_270;
                    auVar92._12_4_ = auVar65._12_4_ * uStack_270._4_4_;
                    _local_158 = blendvps(_DAT_149932320,auVar92,auVar59);
                    auVar14._8_8_ = dStack_120;
                    auVar14._0_8_ = local_128;
                    _local_148 = blendps(auVar14,auVar102,8);
                  }
                  local_138._4_4_ = fVar68 * fVar131;
                  local_138._0_4_ = fVar63 * fVar129;
                  uStack_130._4_4_ = fVar83 * fVar82;
                  uStack_130._0_4_ = fVar86 * fVar67;
                }
                auVar12._4_4_ = local_138._4_4_;
                auVar12._0_4_ = (float)local_138;
                auVar12._8_4_ = (float)uStack_130;
                auVar12._12_4_ = uStack_130._4_4_;
                *(undefined1 (*) [16])(puVar28 + 4) = auVar12;
                *(undefined1 (*) [16])(puVar28 + 2) = _local_148;
                *puVar28 = local_158;
                puVar28[1] = dStack_150;
                lVar42 = lVar42 + 1;
                puVar28 = puVar28 + 6;
                auVar41 = (undefined1  [8])((longlong)auVar41 + 0x30);
                plVar138 = local_520;
                param_1 = local_440;
              } while (lVar42 < *(int *)(lVar35 + 0x40));
            }
          }
          plVar45 = plVar45 + 1;
        } while (plVar45 != plVar138);
      }
      plVar27 = local_4c8;
      param_2 = local_508;
      uVar16 = local_438._0_8_;
      if (*(int *)(local_438._0_8_ + 0x38) == *(int *)(local_438._0_8_ + 100)) {
        lVar42 = 0;
      }
      else {
        lVar35 = local_438._0_8_ + 0x68;
        if (*(longlong *)(local_438._0_8_ + 0x70) != 0) {
          lVar35 = *(longlong *)(local_438._0_8_ + 0x70);
        }
        iVar23 = *(int *)(lVar35 + (ulonglong)(*(int *)(local_438._0_8_ + 0x78) - 1U & local_514) *
                                   4);
        if (iVar23 != -1) {
          lVar35 = *(longlong *)(local_438._0_8_ + 0x30);
          do {
            lVar49 = (longlong)iVar23 * 0x20;
            lVar42 = lVar35 + lVar49;
            if ((*(ulonglong *)(lVar35 + lVar49) == local_508) &&
               (*(longlong **)(lVar35 + 8 + lVar49) == param_1)) goto LAB_144629fe3;
            iVar23 = *(int *)(lVar42 + 0x18);
          } while (iVar23 != -1);
        }
        lVar42 = 0;
      }
LAB_144629fe3:
      uVar22 = *(uint *)(lVar42 + 0x10);
      if (param_1 == (longlong *)0x0) {
        *(undefined4 *)(lVar42 + 0x10) = 1;
        uVar24 = 1;
LAB_14462a07f:
        if (*(int *)(local_438._0_8_ + 0x28) <= (int)uVar24) goto LAB_14462a085;
      }
      else {
        if ((int)param_1[0x1f] == *(int *)((longlong)param_1 + 0x124)) {
LAB_14462a06a:
          puVar33 = (ulonglong *)0x0;
        }
        else {
          plVar138 = (longlong *)param_1[0x26];
          if ((longlong *)param_1[0x26] == (longlong *)0x0) {
            plVar138 = local_448;
          }
          iVar23 = *(int *)((longlong)plVar138 +
                           (ulonglong)((int)param_1[0x27] - 1U & local_4bc) * 4);
          if (iVar23 == -1) goto LAB_14462a06a;
          do {
            puVar33 = (ulonglong *)(param_1[0x1e] + (longlong)iVar23 * 0x18);
            if (*puVar33 == local_508) break;
            iVar23 = (int)puVar33[2];
            puVar33 = (ulonglong *)0x0;
          } while (iVar23 != -1);
        }
        uVar24 = (int)puVar33[1] + 2;
        *(uint *)(lVar42 + 0x10) = uVar24;
        if (-1 < (int)uVar24) goto LAB_14462a07f;
LAB_14462a085:
        *(undefined4 *)(lVar42 + 0x10) = 1;
        uVar24 = 1;
      }
      if (*(char *)(local_438._0_8_ + 0x18) == '\x01') {
        FUN_140fb7e54(*(undefined8 *)(*(longlong *)(local_438._0_8_ + 0x20) + 8),local_508,param_1,1
                     );
        FUN_140c072ce(*(undefined8 *)(*(longlong *)(uVar16 + 0x20) + 8),param_2,param_1);
        uVar24 = *(uint *)(lVar42 + 0x10);
      }
      if (uVar24 != uVar22) {
        if (uVar22 == 0xffffffff) {
          FUN_140fb7e54(**(undefined8 **)(uVar16 + 0x20),param_2,param_1,1);
          FUN_140c072ce(**(undefined8 **)(uVar16 + 0x20),param_2,param_1);
        }
        else if (1 < (int)uVar22) {
          FUN_140fb7e54(*(undefined8 *)(*(longlong *)(uVar16 + 0x20) + (ulonglong)uVar22 * 8),
                        param_2,param_1,0);
        }
        if (1 < (longlong)*(int *)(lVar42 + 0x10)) {
          FUN_140fb7e54(*(undefined8 *)
                         (*(longlong *)(uVar16 + 0x20) + (longlong)*(int *)(lVar42 + 0x10) * 8),
                        param_2,param_1,1);
          if (uVar22 == 0xffffffff) {
            FUN_140c072ce(*(undefined8 *)
                           (*(longlong *)(uVar16 + 0x20) + (longlong)*(int *)(lVar42 + 0x10) * 8),
                          param_2,param_1);
          }
        }
      }
      plVar27 = plVar27 + 1;
    } while (plVar27 != local_3e0);
  }
  puVar33 = local_500;
  iVar23 = 0;
  if ((-1 < SUB84(local_4d0,0)) && (SUB84(local_4d0,0) < (int)param_1[0x1d])) {
    lVar35 = *(longlong *)(param_1[0x1c] + (longlong)local_4d0 * 8);
    if (*(int *)(lVar35 + 0x420) == *(int *)(lVar35 + 0x44c)) {
LAB_14462ca78:
      lVar42 = 0;
    }
    else {
      uVar22 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
      lVar42 = lVar35 + 0x450;
      if (*(longlong *)(lVar35 + 0x458) != 0) {
        lVar42 = *(longlong *)(lVar35 + 0x458);
      }
      iVar23 = *(int *)(lVar42 + (ulonglong)
                                 (*(int *)(lVar35 + 0x460) - 1U & (uVar22 >> 0x10 ^ uVar22)) * 4);
      if (iVar23 == -1) goto LAB_14462ca78;
      do {
        lVar42 = *(longlong *)(lVar35 + 0x418) + (longlong)iVar23 * 0x168;
        if (*(ulonglong *)(*(longlong *)(lVar35 + 0x418) + (longlong)iVar23 * 0x168) == param_2)
        break;
        iVar23 = *(int *)(lVar42 + 0x160);
        lVar42 = 0;
      } while (iVar23 != -1);
    }
    iVar23 = *(int *)(lVar42 + 0xc);
  }
  iVar31 = (int)local_500[1];
  uVar22 = 0;
  if ((-1 < (longlong)iVar31) && (uVar22 = 0, iVar31 < (int)param_1[0x1d])) {
    lVar35 = *(longlong *)(param_1[0x1c] + (longlong)iVar31 * 8);
    if (*(int *)(lVar35 + 0x420) == *(int *)(lVar35 + 0x44c)) {
LAB_14462ca7f:
      lVar42 = 0;
    }
    else {
      uVar22 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
      lVar42 = lVar35 + 0x450;
      if (*(longlong *)(lVar35 + 0x458) != 0) {
        lVar42 = *(longlong *)(lVar35 + 0x458);
      }
      iVar31 = *(int *)(lVar42 + (ulonglong)
                                 (*(int *)(lVar35 + 0x460) - 1U & (uVar22 >> 0x10 ^ uVar22)) * 4);
      if (iVar31 == -1) goto LAB_14462ca7f;
      do {
        lVar42 = *(longlong *)(lVar35 + 0x418) + (longlong)iVar31 * 0x168;
        if (*(ulonglong *)(*(longlong *)(lVar35 + 0x418) + (longlong)iVar31 * 0x168) == param_2)
        break;
        iVar31 = *(int *)(lVar42 + 0x160);
        lVar42 = 0;
      } while (iVar31 != -1);
    }
    uVar22 = *(uint *)(lVar42 + 0xc);
  }
  local_138 = (double)CONCAT44(local_138._4_4_,(float)local_138);
  uStack_130 = (double)CONCAT44(uStack_130._4_4_,(float)uStack_130);
  if ((iVar23 == -1) ||
     (local_138 = (double)CONCAT44(local_138._4_4_,(float)local_138),
     uStack_130 = (double)CONCAT44(uStack_130._4_4_,(float)uStack_130), uVar22 == 0xffffffff))
  goto LAB_14462c7dd;
  local_538 = (double)CONCAT44(local_538._4_4_,iVar23);
  local_530 = uVar22;
  FUN_1408acb46(*param_1,param_2);
  pcVar10 = (char *)param_1[1];
  if (*pcVar10 == '\x01') {
    puVar28 = *(undefined8 **)(pcVar10 + 0x18);
    uVar24 = (uint)puVar33[1];
  }
  else {
    uVar24 = (uint)puVar33[1];
    puVar28 = (undefined8 *)((longlong)(int)uVar24 * 8 + *(longlong *)(pcVar10 + 0x18));
  }
  local_398 = (undefined1  [8])*puVar28;
  local_490 = (longlong *)
              CONCAT44(local_490._4_4_,(int)CONCAT71((int7)((ulonglong)*puVar28 >> 8),1));
  uVar40 = SUB84(local_4d0,0);
  uVar44 = 0xffffffff;
  if (uVar24 == 0xffffffff) {
    uVar24 = 0xffffffff;
    uVar39 = 0xffffffff;
  }
  else {
    lVar35 = param_1[0x1c];
    lVar42 = *(longlong *)(lVar35 + (longlong)(int)uVar24 * 8);
    if (*(int *)(lVar42 + 0x420) != *(int *)(lVar42 + 0x44c)) {
      uVar39 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar39 = (uVar39 >> 0xd ^ uVar39) * -0x3d4d51cb;
      lVar49 = lVar42 + 0x450;
      if (*(longlong *)(lVar42 + 0x458) != 0) {
        lVar49 = *(longlong *)(lVar42 + 0x458);
      }
      iVar31 = *(int *)(lVar49 + (ulonglong)
                                 (*(int *)(lVar42 + 0x460) - 1U & (uVar39 >> 0x10 ^ uVar39)) * 4);
      if (iVar31 != -1) {
        do {
          lVar49 = *(longlong *)(lVar42 + 0x418) + (longlong)iVar31 * 0x168;
          if (*(ulonglong *)(*(longlong *)(lVar42 + 0x418) + (longlong)iVar31 * 0x168) == param_2)
          goto LAB_14462a414;
          iVar31 = *(int *)(lVar49 + 0x160);
        } while (iVar31 != -1);
      }
    }
    lVar49 = 0;
LAB_14462a414:
    uVar9 = *(uint *)(lVar49 + 0x158);
    lVar42 = 0xffffffff;
    uVar39 = 0xffffffff;
    if ((ulonglong)uVar9 != 0xffffffff) {
      uVar44 = 0;
      if ((-1 < (int)uVar9) && ((int)uVar9 < (int)param_1[0x1d])) {
        lVar42 = *(longlong *)(lVar35 + (ulonglong)uVar9 * 8);
        puVar34 = (uint *)&DAT_0000000c;
        if (*(int *)(lVar42 + 0x420) != *(int *)(lVar42 + 0x44c)) {
          uVar24 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
          uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
          lVar49 = lVar42 + 0x450;
          if (*(longlong *)(lVar42 + 0x458) != 0) {
            lVar49 = *(longlong *)(lVar42 + 0x458);
          }
          iVar31 = *(int *)(lVar49 + (ulonglong)
                                     (*(int *)(lVar42 + 0x460) - 1U & (uVar24 >> 0x10 ^ uVar24)) * 4
                           );
          if (iVar31 != -1) {
            lVar42 = *(longlong *)(lVar42 + 0x418);
            do {
              lVar49 = lVar42 + (longlong)iVar31 * 0x168;
              if (*(ulonglong *)(lVar42 + (longlong)iVar31 * 0x168) == param_2) goto LAB_14462a4f1;
              iVar31 = *(int *)(lVar49 + 0x160);
            } while (iVar31 != -1);
            lVar49 = 0;
LAB_14462a4f1:
            puVar34 = (uint *)(lVar49 + 0xc);
          }
        }
        uVar44 = *puVar34;
      }
      FUN_140bf8ece(*(undefined8 *)(lVar35 + (longlong)(int)uVar9 * 8),param_2,
                    CONCAT71((int7)((ulonglong)lVar42 >> 8),1));
      local_538 = (double)CONCAT44(local_538._4_4_,uVar44);
      local_530 = uVar44;
      FUN_1408acb46(*param_1,param_2,uVar9,uVar9);
      uVar24 = (uint)puVar33[1];
      local_490 = (longlong *)((ulonglong)local_490 & 0xffffffff00000000);
      uVar40 = SUB84(local_4d0,0);
      uVar39 = uVar9;
    }
  }
  local_4bc = uVar44;
  local_3e0 = (longlong *)CONCAT44(local_3e0._4_4_,uVar22);
  local_514 = uVar39;
  if (uVar24 != uVar40) {
    if (uVar40 != 0xffffffff) {
      lVar35 = param_1[0x1c];
      if (uVar40 != uVar39) {
        FUN_140bf8ece(*(undefined8 *)(lVar35 + (longlong)(int)uVar40 * 8),param_2,0);
        lVar35 = param_1[0x1c];
      }
      lVar42 = *(longlong *)(lVar35 + (longlong)(int)uVar40 * 8);
      if (*(int *)(lVar42 + 0x420) != *(int *)(lVar42 + 0x44c)) {
        uVar22 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
        uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
        lVar49 = lVar42 + 0x450;
        if (*(longlong *)(lVar42 + 0x458) != 0) {
          lVar49 = *(longlong *)(lVar42 + 0x458);
        }
        iVar31 = *(int *)(lVar49 + (ulonglong)
                                   (*(int *)(lVar42 + 0x460) - 1U & (uVar22 >> 0x10 ^ uVar22)) * 4);
        if (iVar31 != -1) {
          do {
            lVar49 = *(longlong *)(lVar42 + 0x418) + (longlong)iVar31 * 0x168;
            if (*(ulonglong *)(*(longlong *)(lVar42 + 0x418) + (longlong)iVar31 * 0x168) == param_2)
            goto LAB_14462a630;
            iVar31 = *(int *)(lVar49 + 0x160);
          } while (iVar31 != -1);
        }
      }
      lVar49 = 0;
LAB_14462a630:
      uVar22 = *(uint *)(lVar49 + 0x158);
      uVar24 = (uint)puVar33[1];
      if ((((longlong)(int)uVar22 != -1) && (uVar22 != uVar39)) && (uVar22 != uVar24)) {
        FUN_140bf8ece(*(undefined8 *)(lVar35 + (longlong)(int)uVar22 * 8),param_2,0);
        uVar24 = (uint)puVar33[1];
      }
    }
    if (uVar24 == 0xffffffff) {
      param_1[0x28] = 0;
    }
    else {
      uVar43 = 1;
      FUN_140bf8ece(*(undefined8 *)(param_1[0x1c] + (longlong)(int)uVar24 * 8),param_2,1);
      plVar27 = local_3e0;
      *(undefined4 *)(param_1 + 0x28) =
           *(undefined4 *)(*(longlong *)(param_1[0x1c] + (longlong)(int)puVar33[1] * 8) + 0x468);
      *(undefined4 *)((longlong)param_1 + 0x144) =
           *(undefined4 *)(*(longlong *)(param_1[0x1c] + (longlong)(int)puVar33[1] * 8) + 0x46c);
      if (*(char *)((longlong)param_1 + 0x44) == '\0') {
        local_3f8 = (longlong *)*param_1;
        FUN_1408ac1ca(param_2,local_158,(ulonglong)local_3e0 & 0xffffffff);
        auVar17 = local_158;
        FUN_1402221ea(param_2,local_158,(ulonglong)plVar27 & 0xffffffff);
        auVar41 = local_158;
        FUN_1408ac110(param_2,local_158,(ulonglong)plVar27 & 0xffffffff);
        local_4f8 = local_158;
        FUN_1408ac1ca(param_2,local_158,iVar23);
        auVar18 = local_158;
        FUN_1408ac110(param_2,local_158,iVar23);
        auVar19 = local_158;
        local_538 = (double)(param_2 + 0xf8);
        FUN_144a41dda(local_158,param_2 + 0x68,param_2 + 0x70,iVar23);
        iVar23 = (int)puVar33[1];
        if (((iVar23 - SUB84(local_4d0,0)) + 1U & 0xfffffffd) == 0) {
          auVar20 = local_158;
          plVar27 = local_3f8;
          cVar21 = (**(code **)(*local_3f8 + 0x20))(local_3f8);
          if ((cVar21 != '\0') &&
             (cVar21 = (**(code **)(*plVar27 + 0x20))(plVar27,iVar23), cVar21 != '\0')) {
            uVar22 = (**(code **)(*plVar27 + 0x28))(plVar27,iVar23);
            (**(code **)(*plVar27 + 0xd8 + (ulonglong)(iVar23 <= local_4d0._0_4_) * 8))(plVar27);
            if (0 < (int)uVar22) {
              lVar35 = 0;
              lVar42 = 0;
              do {
                uVar6 = *(ushort *)((longlong)local_158 + 0x30 + lVar42 * 4);
                uVar7 = *(ushort *)((longlong)local_158 + 0x32 + lVar42 * 4);
                uVar8 = *(ushort *)((longlong)local_158 + 0x34 + lVar42 * 4);
                lVar46 = (ulonglong)uVar6 * 0x10;
                fVar63 = *(float *)((longlong)local_158 + lVar42 * 4);
                fVar67 = *(float *)((longlong)local_158 + 4 + lVar42 * 4);
                fVar68 = *(float *)((longlong)auVar19 + 8 + lVar46);
                fVar82 = *(float *)((longlong)auVar19 + 4 + lVar46);
                lVar49 = (ulonglong)uVar6 * 0xc;
                fVar83 = *(float *)((longlong)local_158 + 0xc + lVar42 * 4);
                fVar85 = *(float *)((longlong)auVar20 + 8 + lVar49);
                fVar110 = *(float *)((longlong)auVar20 + 4 + lVar49);
                lVar47 = (ulonglong)uVar7 * 0x10;
                fVar116 = *(float *)((longlong)auVar19 + 8 + lVar47);
                fVar128 = *(float *)((longlong)auVar19 + 4 + lVar47);
                lVar32 = (ulonglong)uVar7 * 0xc;
                fVar129 = *(float *)((longlong)auVar20 + 8 + lVar32);
                fVar131 = *(float *)((longlong)auVar20 + 4 + lVar32);
                lVar48 = (ulonglong)uVar8 * 0x10;
                fVar134 = *(float *)((longlong)local_158 + 8 + lVar42 * 4);
                fVar135 = *(float *)((longlong)auVar19 + 8 + lVar48);
                fVar69 = *(float *)((longlong)auVar19 + 4 + lVar48);
                lVar15 = (ulonglong)uVar8 * 0xc;
                fVar84 = *(float *)((longlong)auVar20 + 8 + lVar15);
                fVar86 = *(float *)((longlong)auVar20 + 4 + lVar15);
                *(float *)((longlong)auVar41 + lVar35) =
                     fVar83 * *(float *)((longlong)auVar20 + lVar15) +
                     fVar134 * *(float *)((longlong)auVar19 + lVar48) +
                     *(float *)((longlong)auVar20 + lVar32) * fVar83 +
                     fVar67 * *(float *)((longlong)auVar19 + lVar47) +
                     *(float *)((longlong)auVar20 + lVar49) * fVar83 +
                     fVar63 * *(float *)((longlong)auVar19 + lVar46);
                *(float *)((longlong)auVar41 + 4 + lVar35) =
                     fVar86 * fVar83 +
                     fVar69 * fVar134 +
                     fVar131 * fVar83 + fVar128 * fVar67 + fVar110 * fVar83 + fVar82 * fVar63;
                *(float *)((longlong)auVar41 + 8 + lVar35) =
                     fVar84 * fVar83 +
                     fVar135 * fVar134 +
                     fVar129 * fVar83 + fVar116 * fVar67 + fVar85 * fVar83 + fVar68 * fVar63;
                *(undefined8 *)((longlong)local_4f8 + lVar42) =
                     *(undefined8 *)((longlong)auVar41 + lVar35);
                *(undefined4 *)((longlong)local_4f8 + 8 + lVar42) =
                     *(undefined4 *)((longlong)auVar41 + 8 + lVar35);
                fVar63 = *(float *)((longlong)local_158 + lVar42 * 4);
                fVar67 = *(float *)((longlong)local_158 + 4 + lVar42 * 4);
                fVar68 = *(float *)((longlong)auVar18 + 8 + lVar49);
                fVar82 = *(float *)((longlong)auVar18 + 4 + lVar49);
                fVar83 = *(float *)((longlong)auVar18 + 8 + lVar32);
                fVar85 = *(float *)((longlong)auVar18 + 4 + lVar32);
                fVar110 = *(float *)((longlong)local_158 + 8 + lVar42 * 4);
                fVar116 = *(float *)((longlong)auVar18 + 8 + lVar15);
                fVar128 = *(float *)((longlong)auVar18 + 4 + lVar15);
                *(float *)((longlong)auVar17 + lVar35) =
                     fVar110 * *(float *)((longlong)auVar18 + lVar15) +
                     fVar67 * *(float *)((longlong)auVar18 + lVar32) +
                     fVar63 * *(float *)((longlong)auVar18 + lVar49);
                *(float *)((longlong)auVar17 + 4 + lVar35) =
                     fVar128 * fVar110 + fVar85 * fVar67 + fVar82 * fVar63;
                *(float *)((longlong)auVar17 + 8 + lVar35) =
                     fVar116 * fVar110 + fVar83 * fVar67 + fVar68 * fVar63;
                lVar42 = lVar42 + 0x10;
                lVar35 = lVar35 + 0xc;
              } while ((ulonglong)uVar22 << 4 != lVar42);
            }
            uVar43 = 0;
          }
        }
      }
      param_1 = local_440;
      puVar33 = local_500;
      param_2 = local_508;
      *(undefined1 *)((longlong)local_440 + 0x44) = uVar43;
      if (*(longlong *)(local_508 + 0x70) != 0) {
        if ((int)local_440[0x1f] == *(int *)((longlong)local_440 + 0x124)) {
LAB_14462d31c:
          puVar36 = (ulonglong *)0x0;
        }
        else {
          uVar22 = ((uint)(local_508 >> 0x14) & 0xffff ^ (uint)(local_508 >> 4)) * -0x7a143595;
          uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
          plVar27 = local_440 + 0x25;
          if ((longlong *)local_440[0x26] != (longlong *)0x0) {
            plVar27 = (longlong *)local_440[0x26];
          }
          iVar23 = *(int *)((longlong)plVar27 +
                           (ulonglong)((int)local_440[0x27] - 1U & (uVar22 >> 0x10 ^ uVar22)) * 4);
          if (iVar23 == -1) goto LAB_14462d31c;
          do {
            puVar36 = (ulonglong *)(local_440[0x1e] + (longlong)iVar23 * 0x18);
            if (*puVar36 == local_508) break;
            iVar23 = (int)puVar36[2];
            puVar36 = (ulonglong *)0x0;
          } while (iVar23 != -1);
        }
        lVar35 = *(longlong *)(local_440[0x1c] + (longlong)(int)local_500[1] * 8);
        uVar22 = (uint)puVar36[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cc271a8) &&
           (FUN_144b3d300(&DAT_14cc271a8), DAT_14cc271a8 == -1)) {
          FUN_140dc1ca4(&DAT_14cc27060);
          atexit((_func_5014 *)&LAB_144628b9f);
          _Init_thread_footer(&DAT_14cc271a8);
        }
        if ((int)uVar22 < 0) {
          lVar42 = *(longlong *)(param_2 + 0x70);
LAB_14462d454:
          puVar37 = &DAT_14cc27060;
        }
        else {
          lVar42 = *(longlong *)(param_2 + 0x70);
          if ((int)param_1[0x1d] <= (int)uVar22) goto LAB_14462d454;
          if (lVar42 == 0) goto LAB_14462ac42;
          lVar49 = *(longlong *)(param_1[0x1c] + (ulonglong)uVar22 * 8);
          if (*(int *)(lVar49 + 0x420) == *(int *)(lVar49 + 0x44c)) {
LAB_14462c90f:
            lVar32 = 0;
          }
          else {
            uVar22 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
            uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
            lVar32 = lVar49 + 0x450;
            if (*(longlong *)(lVar49 + 0x458) != 0) {
              lVar32 = *(longlong *)(lVar49 + 0x458);
            }
            iVar23 = *(int *)(lVar32 + (ulonglong)
                                       (*(int *)(lVar49 + 0x460) - 1U & (uVar22 >> 0x10 ^ uVar22)) *
                                       4);
            if (iVar23 == -1) goto LAB_14462c90f;
            do {
              lVar32 = *(longlong *)(lVar49 + 0x418) + (longlong)iVar23 * 0x168;
              if (*(ulonglong *)(*(longlong *)(lVar49 + 0x418) + (longlong)iVar23 * 0x168) ==
                  param_2) break;
              iVar23 = *(int *)(lVar32 + 0x160);
              lVar32 = 0;
            } while (iVar23 != -1);
          }
          puVar37 = (undefined *)(lVar32 + 0x10);
        }
        if (lVar42 != 0) {
          local_538 = (double)CONCAT44(local_538._4_4_,0x42c80000);
          FUN_140aabf6a((longlong)(int)param_1[4] * 400 + *(longlong *)(lVar42 + 0x268),puVar37,
                        local_398,lVar35 + 8);
        }
      }
    }
LAB_14462ac42:
    uVar40 = (uint)puVar33[1];
  }
  auVar17 = local_398;
  if (uVar40 != 0xffffffff) {
    local_308 = 0x7f7fffff7f7fffff;
    local_300 = 3.4028235e+38;
    local_318 = 0x7f7fffff7f7fffff;
    local_310 = 3.4028235e+38;
    if (*(char *)((longlong)param_1 + 0x44) == '\x01') {
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      FUN_1408abde0(*(undefined8 *)(param_1[0x1c] + (longlong)(int)puVar33[1] * 8),param_2);
      if ((longlong)(int)param_1[3] != 0) {
        plVar138 = (longlong *)param_1[2];
        plVar27 = plVar138 + (int)param_1[3];
        do {
          lVar35 = (longlong)*(int *)(*plVar138 + 0x28);
          if (lVar35 != 0) {
            lVar42 = *(longlong *)(*plVar138 + 0x20);
            lVar49 = 0;
            do {
              FUN_140c072ce(*(undefined8 *)(lVar42 + lVar49),param_2,param_1);
              lVar49 = lVar49 + 8;
            } while (lVar35 * 8 != lVar49);
          }
          plVar138 = plVar138 + 1;
        } while (plVar138 != plVar27);
      }
      uVar22 = 2;
      bVar50 = true;
      uVar121 = 0x7f7fffff;
      uVar127 = 0x3f800000;
      if ((char)local_490 == '\0') {
        FUN_1408abde0(*(undefined8 *)(param_1[0x1c] + (longlong)(int)local_514 * 8),param_2);
      }
      uVar130 = 0x3f800000;
      local_418 = (double)CONCAT44(local_418._4_4_,0x3f800000);
      local_3d8 = 3.4028235e+38;
      local_4f8._0_4_ = 0x3f800000;
      local_520 = (longlong *)CONCAT44(local_520._4_4_,0x3f800000);
    }
    else if (*(char *)((longlong)param_1 + 0x45) == '\x01') {
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      uVar22 = 2;
      local_4f8._0_4_ = 0x3f800000;
      bVar50 = true;
      uVar121 = 0x7f7fffff;
      uVar127 = 0;
      uVar130 = 0;
      local_418 = (double)((ulonglong)local_418 & 0xffffffff00000000);
      local_3d8 = 3.4028235e+38;
      local_520 = (longlong *)((ulonglong)local_520 & 0xffffffff00000000);
    }
    else {
      FUN_140056680(local_158,L"VelocityScaleSpace");
      iVar23 = FUN_144a41c6c(auVar17,local_158);
      if (iVar23 == -1) {
        uVar22 = 2;
      }
      else {
        uVar22 = (uint)*(float *)(*(longlong *)((longlong)auVar17 + 0x18) + (longlong)iVar23 * 0xc);
      }
      if (local_158 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(local_158,L"LinearVelocityScale");
      iVar23 = FUN_144a41c6c(auVar17,local_158);
      if (iVar23 == -1) {
        uVar127 = 0x3f400000;
        uVar130 = 0x3f400000;
        uVar121 = 0x3f400000;
      }
      else {
        lVar35 = *(longlong *)((longlong)auVar17 + 0x18);
        lVar42 = (longlong)iVar23;
        uVar121 = *(undefined4 *)(lVar35 + lVar42 * 0xc);
        uVar130 = *(undefined4 *)(lVar35 + 4 + lVar42 * 0xc);
        uVar127 = *(undefined4 *)(lVar35 + 8 + lVar42 * 0xc);
      }
      if (local_158 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(local_158,L"AngularVelocityScale");
      iVar23 = FUN_144a41c6c(auVar17,local_158);
      if (iVar23 == -1) {
        uVar136 = 0x3f400000;
      }
      else {
        uVar136 = *(undefined4 *)(*(longlong *)((longlong)auVar17 + 0x18) + (longlong)iVar23 * 0xc);
      }
      local_520 = (longlong *)CONCAT44(local_520._4_4_,uVar136);
      if (local_158 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(local_158,L"MaxVelocityScale");
      iVar23 = FUN_144a41c6c(auVar17,local_158);
      if (iVar23 == -1) {
        uVar136 = 0x3f800000;
      }
      else {
        uVar136 = *(undefined4 *)(*(longlong *)((longlong)auVar17 + 0x18) + (longlong)iVar23 * 0xc);
      }
      local_4f8._0_4_ = uVar136;
      if (local_158 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(local_158,L"MaxLinearVelocity");
      iVar23 = FUN_144a41c6c(auVar17,local_158);
      if (iVar23 != -1) {
        local_300 = *(float *)(*(longlong *)((longlong)auVar17 + 0x18) + 8 + (longlong)iVar23 * 0xc)
        ;
        local_308 = *(undefined8 *)
                     (*(longlong *)((longlong)auVar17 + 0x18) + (longlong)iVar23 * 0xc);
      }
      uStack_1b0._0_4_ = local_300;
      local_1b8 = (undefined1  [8])local_308;
      if (local_158 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(local_158,L"MaxLinearAcceleration");
      iVar23 = FUN_144a41c6c(auVar17,local_158);
      if (iVar23 != -1) {
        local_310 = *(float *)(*(longlong *)((longlong)auVar17 + 0x18) + 8 + (longlong)iVar23 * 0xc)
        ;
        local_318 = *(undefined8 *)
                     (*(longlong *)((longlong)auVar17 + 0x18) + (longlong)iVar23 * 0xc);
      }
      uStack_1b0._0_4_ = local_310;
      local_1b8 = (undefined1  [8])local_318;
      if (local_158 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(local_158,L"MaxAngularVelocity");
      iVar23 = FUN_144a41c6c(auVar17,local_158);
      if (iVar23 == -1) {
        local_3d8 = 3.4028235e+38;
      }
      else {
        local_3d8 = *(float *)(*(longlong *)((longlong)auVar17 + 0x18) + (longlong)iVar23 * 0xc);
      }
      if (local_158 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      local_418 = (double)CONCAT44(local_418._4_4_,uVar121);
      FUN_140056680(local_158,L"MaxAngularAcceleration");
      iVar23 = FUN_144a41c6c(auVar17,local_158);
      if (iVar23 == -1) {
        uVar121 = 0x7f7fffff;
      }
      else {
        uVar121 = *(undefined4 *)(*(longlong *)((longlong)auVar17 + 0x18) + (longlong)iVar23 * 0xc);
      }
      if (local_158 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      bVar50 = false;
    }
    FUN_140056680(local_158,L"FictitiousAngularScale");
    iVar23 = FUN_144a41c6c(auVar17,local_158);
    puVar33 = local_500;
    if (iVar23 == -1) {
      uVar136 = 0x3f800000;
    }
    else {
      uVar136 = *(undefined4 *)(*(longlong *)((longlong)auVar17 + 0x18) + (longlong)iVar23 * 0xc);
    }
    local_4c8 = (longlong *)CONCAT44(local_4c8._4_4_,uVar136);
    if (local_158 != (undefined1  [8])0x0) {
      FUN_1400020a8();
    }
    local_368._0_4_ = uVar127;
    local_408 = (double *)CONCAT44(local_408._4_4_,uVar130);
    local_348._0_4_ = uVar121;
    lVar35 = param_1[4];
    dStack_150 = uStack_4b0;
    local_158 = (undefined1  [8])local_4b8;
    dStack_140 = dStack_470;
    local_148 = (undefined1  [8])local_478;
    local_118 = local_2f8;
    lStack_110 = lStack_2f0;
    local_108 = local_2e8;
    lStack_100 = lStack_2e0;
    uVar121 = 0;
    uVar130 = 0x3ff00000;
    local_128 = 1.0 / *(double *)(param_2 + 0x290);
    local_138 = local_128 * (local_488 - *(double *)(param_2 + 0x2a0));
    uStack_130 = local_128 * (dStack_480 - *(double *)(param_2 + 0x2a8));
    local_128 = local_128 * ((double)(*(ulonglong *)(param_2 + 0x2b0) ^ DAT_149931e80) + local_378);
    dStack_120 = (dStack_370 + 0.0) * 0.0;
    if (DAT_14c7679e1 == '\x01') {
      uVar121 = (undefined4)*(undefined8 *)(param_2 + 0x2f0);
      uVar130 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x2f0) >> 0x20);
    }
    local_4d8 = (double)local_440[0x16];
    local_4e8 = (double)local_440[0x17];
    dStack_4e0 = 0.0;
    local_510 = (double)local_440[0x18];
    dVar132 = local_478 * -1.0;
    dStack_470 = dStack_470 * 1.0;
    dVar99 = (double)local_440[10];
    dVar51 = (double)local_440[0xb];
    dVar71 = (double)local_440[0xc];
    dVar87 = (double)local_440[0xd];
    dVar100 = (double)local_440[0xe] - local_488;
    dVar123 = (double)local_440[0xf] - dStack_480;
    dVar70 = (double)local_440[0x10] - local_378;
    dVar52 = (double)local_440[0x11] - dStack_370;
    plVar27 = (longlong *)local_440[0x19];
    dVar122 = dVar51 * dVar132 * -1.0 +
              ((dStack_470 * dVar99 - local_4b8 * dVar87 * 1.0) - dVar71 * uStack_4b0);
    dVar126 = dVar99 * dVar132 * 1.0 +
              ((dStack_470 * dVar51 - local_4b8 * dVar71 * -1.0) - dVar87 * uStack_4b0);
    dVar53 = dVar87 * dVar132 * 1.0 +
             uStack_4b0 * dVar99 + (dStack_470 * dVar71 - local_4b8 * dVar51 * 1.0);
    dVar99 = dVar71 * dVar132 * -1.0 +
             uStack_4b0 * dVar51 + (dStack_470 * dVar87 - local_4b8 * dVar99 * -1.0);
    dVar51 = dVar99;
    if (1.0 <= dVar99) {
      dVar51 = 1.0;
    }
    auVar93._0_8_ = ~-(ulonglong)(dVar99 < -1.0) & (ulonglong)dVar51;
    auVar93._8_8_ = 0;
    local_4d0 = (double)local_440[0x1a];
    local_378 = (double)local_440[0x1b];
    local_478 = dVar132;
    local_468 = dStack_470;
    dStack_460 = dStack_470;
    dVar51 = acos((double)(-(ulonglong)(dVar99 < -1.0) & 0xbff0000000000000 | auVar93._0_8_));
    dVar71 = dVar53 * dVar53 + dVar122 * dVar122;
    dVar87 = dVar126 * dVar126 + 0.0;
    auVar79._0_8_ = dVar71 + dVar87;
    auVar79._8_8_ = dVar71 + dVar87;
    auVar60._8_8_ = -(ulonglong)(1e-08 <= auVar79._8_8_);
    auVar60._0_8_ = -(ulonglong)(1e-08 <= auVar79._0_8_);
    auVar65 = sqrtpd(auVar93,auVar79);
    auVar65 = divpd(_DAT_149934d80,auVar65);
    auVar125._0_8_ = dVar122 * auVar65._0_8_;
    auVar125._8_8_ = dVar126 * auVar65._8_8_;
    auVar73 = blendvpd(ZEXT816(0x3ff0000000000000),auVar125,auVar60);
    if ((-(ulonglong)(1e-08 <= auVar79._0_8_) & 1) == 0) {
      dVar53 = 0.0;
      dVar99 = 0.0;
    }
    else {
      dVar53 = dVar53 * auVar65._0_8_;
    }
    uVar24 = local_4b8._4_4_ ^ 0x80000000;
    auVar61._12_4_ = uStack_4b0._4_4_ ^ 0x80000000;
    uVar127 = SUB84(local_4b8,0);
    local_4b8 = -local_4b8;
    uVar136 = SUB84(uStack_4b0,0);
    uStack_4b0 = -uStack_4b0;
    dVar51 = dVar51 + dVar51;
    local_438._8_4_ = SUB84(dVar52,0);
    local_438._0_8_ = dVar70;
    local_438._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
    dVar52 = (double)CONCAT44(uVar130,uVar121);
    local_428._0_8_ = dVar52;
    if ((char)uVar22 == '\0') {
      local_3a8._8_8_ = uStack_4b0;
      local_3a8._0_8_ = local_4b8;
      dVar87 = dVar123;
      dVar122 = dVar70;
      dVar71 = dVar100;
      local_3b8 = local_478;
      dStack_3b0 = dStack_470;
    }
    else if ((uVar22 & 0xff) == 1) {
      auVar61._8_4_ = uVar136;
      auVar61._0_8_ = uStack_4b0;
      dVar122 = *(double *)(param_2 + 0x2d0);
      dStack_4a0 = *(double *)(param_2 + 0x2d8);
      local_358 = *(double *)(param_2 + 0x2e0);
      dStack_350 = *(double *)(param_2 + 0x2e8);
      dStack_3c0 = auVar61._8_8_;
      local_488 = uStack_4b0 * dVar122;
      dStack_480 = dStack_3c0 * dStack_4a0;
      dVar71 = *(double *)(param_2 + 0x2d8);
      dVar137 = dVar100 * dVar71 - dVar122 * dVar123;
      dVar64 = dVar70 * dVar122 - local_358 * dVar100;
      dVar137 = dVar137 + dVar137;
      dVar126 = *(double *)(param_2 + 0x2e8);
      local_450 = dVar126 * dVar137;
      local_380 = dVar137 * dVar71;
      dVar98 = dVar123 * local_358 - dVar71 * dVar70;
      local_328 = local_468 * local_358;
      dStack_320 = dStack_460 * dStack_350;
      dVar64 = dVar64 + dVar64;
      dVar98 = dVar98 + dVar98;
      local_330 = dVar126 * dVar64;
      local_3c8 = dVar126 * dVar98;
      local_338 = dVar98 * local_358;
      auVar62._8_4_ = uVar127;
      auVar62._0_8_ = local_4b8;
      auVar62._12_4_ = uVar24;
      dVar87 = dVar122 * dVar132 * 1.0 +
               dStack_3c0 * dStack_350 + auVar62._8_8_ * local_358 * -1.0 + dStack_460 * dStack_4a0;
      local_3a8._8_4_ = SUB84(dVar87,0);
      local_3a8._0_8_ =
           dStack_4a0 * dVar132 * -1.0 +
           uStack_4b0 * local_358 + local_4b8 * dStack_350 * 1.0 + local_468 * dVar122;
      local_3a8._12_4_ = (int)((ulonglong)dVar87 >> 0x20);
      local_3b8 = dStack_350 * dVar132 * 1.0 +
                  ((local_4b8 * dStack_4a0 * 1.0 + local_328) - local_488);
      dStack_3b0 = local_358 * dVar132 * -1.0 +
                   ((auVar62._8_8_ * dVar122 * -1.0 + dStack_320) - dStack_480);
      dVar87 = (dVar122 * dVar137 - local_338) + local_330 + dVar123;
      dVar122 = (dVar71 * dVar98 - dVar122 * dVar64) + local_450 + dVar70;
      dVar71 = (dVar64 * local_358 - local_380) + dVar126 * dVar98 + dVar100;
    }
    else {
      dVar132 = local_4b8 * dVar123 - dVar100 * uStack_4b0;
      dVar126 = local_478 * dVar100 - dVar70 * local_4b8;
      dVar71 = uStack_4b0 * dVar70 - dVar123 * local_478;
      dVar132 = dVar132 + dVar132;
      dVar126 = dVar126 + dVar126;
      dVar71 = dVar71 + dVar71;
      local_3a8._8_8_ = DAT_14c8463d8;
      local_3a8._0_8_ = DAT_14c8463d0;
      dVar87 = (local_478 * dVar71 - dVar132 * local_4b8) + local_468 * dVar126 + dVar123;
      dVar122 = (local_4b8 * dVar126 - dVar71 * uStack_4b0) + local_468 * dVar132 + dVar70;
      dVar71 = (uStack_4b0 * dVar132 - dVar126 * local_478) + local_468 * dVar71 + dVar100;
      local_3b8 = DAT_14c8463e0;
      dStack_3b0 = DAT_14c8463e8;
    }
    local_4a8 = dVar52 * (double)(float)local_368._0_4_;
    dVar132 = (double)(float)local_4f8._0_4_;
    dVar126 = 1.0;
    if (dVar132 <= 1.0) {
      dVar126 = dVar132;
    }
    dStack_410 = auVar73._8_8_;
    if (dVar126 < local_4a8) {
      dVar64 = dVar52;
      if (1.0 <= dVar52) {
        dVar64 = 1.0;
      }
      if (dVar64 <= 0.0) {
        dVar64 = 0.0;
      }
      local_4a8 = (double)(float)local_368._0_4_;
      if ((float)local_4f8._0_4_ <= (float)local_368._0_4_) {
        local_4a8 = dVar132;
      }
      if (local_4a8 <= 0.0) {
        local_4a8 = 0.0;
      }
      local_4a8 = local_4a8 * dVar64;
    }
    dVar64 = dVar52 * (double)local_408._0_4_;
    if (dVar126 < dVar64) {
      uVar127 = uVar121;
      uVar136 = uVar130;
      if (1.0 <= dVar52) {
        uVar127 = 0;
        uVar136 = 0x3ff00000;
      }
      if ((double)CONCAT44(uVar136,uVar127) <= 0.0) {
        uVar127 = 0;
        uVar136 = 0;
      }
      dVar64 = (double)local_408._0_4_;
      if ((float)local_4f8._0_4_ <= local_408._0_4_) {
        dVar64 = dVar132;
      }
      if (dVar64 <= 0.0) {
        dVar64 = 0.0;
      }
      dVar64 = dVar64 * (double)CONCAT44(uVar136,uVar127);
    }
    dVar98 = (double)(~-(ulonglong)(3.1415927410125732 < dVar51) & (ulonglong)dVar51 |
                     (ulonglong)(dVar51 + -6.2831854820251465) &
                     -(ulonglong)(3.1415927410125732 < dVar51));
    dVar51 = dVar52 * (double)local_418._0_4_;
    if (dVar126 < dVar51) {
      dVar137 = dVar52;
      if (1.0 <= dVar52) {
        dVar137 = 1.0;
      }
      if (dVar137 <= 0.0) {
        dVar137 = 0.0;
      }
      dVar51 = (double)local_418._0_4_;
      if ((float)local_4f8._0_4_ <= local_418._0_4_) {
        dVar51 = dVar132;
      }
      if (dVar51 <= 0.0) {
        dVar51 = 0.0;
      }
      dVar51 = dVar51 * dVar137;
    }
    dVar113 = auVar73._0_8_ * dVar98;
    dVar137 = dStack_410 * dVar98;
    dVar53 = dVar53 * dVar98;
    dVar98 = dVar52 * (double)local_520._0_4_;
    if (dVar126 < dVar98) {
      if (1.0 <= dVar52) {
        uVar121 = 0;
        uVar130 = 0x3ff00000;
      }
      if ((double)CONCAT44(uVar130,uVar121) <= 0.0) {
        uVar121 = 0;
        uVar130 = 0;
      }
      dVar98 = (double)local_520._0_4_;
      if ((float)local_4f8._0_4_ <= local_520._0_4_) {
        dVar98 = dVar132;
      }
      if (dVar98 <= 0.0) {
        dVar98 = 0.0;
      }
      dVar98 = dVar98 * (double)CONCAT44(uVar130,uVar121);
    }
    dVar52 = dVar122 * local_4a8;
    dVar126 = dVar87 * dVar64;
    dVar132 = dVar71 * dVar51;
    local_408 = (double *)(dVar113 * dVar98);
    local_418 = dVar137 * dVar98;
    plVar138 = (longlong *)(dVar53 * dVar98);
    local_368._8_4_ = SUB84(dVar99,0);
    local_368._0_8_ = dVar53;
    local_368._12_4_ = (int)((ulonglong)dVar99 >> 0x20);
    dVar99 = local_418;
    local_520 = plVar138;
    local_448 = plVar27;
    dStack_400 = dStack_410;
    if (0.0 < *(float *)(param_2 + 0x2fc)) {
      dVar99 = (double)*(float *)(param_2 + 0x2fc);
      local_440[0x16] = (longlong)(dVar100 / dVar99);
      local_440[0x17] = (longlong)(dVar123 / dVar99);
      local_440[0x18] = (longlong)(dVar70 / dVar99);
      dVar70 = (double)*(float *)(param_2 + 0x2fc);
      local_440[0x19] = (longlong)(dVar113 / dVar70);
      local_440[0x1a] = (longlong)(dVar137 / dVar70);
      local_440[0x1b] = (longlong)(dVar53 / dVar70);
      fVar63 = *(float *)(param_2 + 0x2fc);
      dVar70 = (double)fVar63;
      uStack_1b0 = dVar126 / dVar70;
      local_1b8 = (undefined1  [8])(dVar132 / dVar70);
      local_1a8 = (longlong *)(dVar52 / dVar70);
      if (((float)local_318 != 3.4028235e+38) || (NAN((float)local_318))) {
LAB_14462ca86:
        if ((char)uVar22 == '\x01') {
          local_428._0_8_ = *(double *)(local_508 + 0x2e0);
          dVar99 = *(double *)(local_508 + 0x2d0);
          local_468 = *(double *)(local_508 + 0x2d8);
          dVar123 = (double)local_428._0_8_ * local_4d8;
          local_4b8 = local_4e8 * (double)local_428._0_8_ - local_468 * local_510;
          local_4b8 = local_4b8 + local_4b8;
          dVar100 = *(double *)(local_508 + 0x2e8);
          local_438._0_8_ = local_4b8 * dVar100 + local_4d8;
          dVar114 = local_4d8 * local_468 - dVar99 * local_4e8;
          dVar114 = dVar114 + dVar114;
          local_4d8 = dVar100 * dVar114 + local_510;
          dVar123 = local_510 * dVar99 - dVar123;
          dVar123 = dVar123 + dVar123;
          local_488 = dVar100 * dVar123 + local_4e8;
          local_478 = dVar114 * local_468;
          local_510 = local_4a8 * ((local_468 * local_4b8 - dVar99 * dVar123) + local_4d8);
          local_4e8 = dVar64 * ((dVar99 * dVar114 - local_4b8 * (double)local_428._0_8_) + local_488
                               );
          local_218._0_8_ =
               dVar51 * ((dVar123 * (double)local_428._0_8_ - local_478) + (double)local_438._0_8_);
          dStack_4e0 = 0.0;
        }
        else if ((uVar22 & 0xff) == 0) {
          local_510 = local_510 * local_4a8;
          local_4e8 = local_4e8 * dVar64;
          local_218._0_8_ = local_4d8 * dVar51;
        }
        else {
          dVar99 = uStack_4b0 * local_510 - local_4e8 * local_478;
          dVar99 = dVar99 + dVar99;
          dVar100 = local_468 * dVar99 + local_4d8;
          dVar123 = local_4b8 * local_4e8 - local_4d8 * uStack_4b0;
          dVar123 = dVar123 + dVar123;
          local_488 = local_468 * dVar123 + local_510;
          dStack_480 = dStack_460;
          local_428._0_8_ = local_478 * local_4d8 - local_510 * local_4b8;
          local_428._0_8_ = (double)local_428._0_8_ + (double)local_428._0_8_;
          local_428._8_8_ = dStack_470;
          local_438._0_8_ = local_468 * (double)local_428._0_8_ + local_4e8;
          local_438._8_8_ = dStack_460;
          local_510 = ((local_4b8 * (double)local_428._0_8_ - dVar99 * uStack_4b0) + local_488) *
                      local_4a8;
          local_4e8 = ((local_478 * dVar99 - dVar123 * local_4b8) + (double)local_438._0_8_) *
                      dVar64;
          dStack_4e0 = dStack_470;
          local_218._0_8_ =
               ((uStack_4b0 * dVar123 - (double)local_428._0_8_ * local_478) + dVar100) * dVar51;
          local_468 = dVar100;
        }
        local_218._8_8_ = local_4e8;
        local_208 = local_510;
        local_278 = dVar132 / dVar70 - (double)local_218._0_8_;
        uStack_270 = dVar126 / dVar70 - local_4e8;
        local_268 = dVar52 / dVar70 - local_510;
        lVar42 = 0;
        do {
          fVar67 = *(float *)((longlong)&local_318 + lVar42 * 4);
          if (((fVar67 != 3.4028235e+38) || (NAN(fVar67))) && (0.0 <= fVar67)) {
            dVar52 = (double)(&local_278)[lVar42];
            dVar99 = (double)(fVar67 * fVar63) * *(double *)(local_508 + 0x298);
            if (dVar99 < ABS(dVar52)) {
              *(double *)(local_1b8 + lVar42 * 8) =
                   (double)(-(ulonglong)(0.0 < dVar52) & 0x3ff0000000000000 |
                           (ulonglong)
                           (~(uint)(-(ulonglong)(0.0 < dVar52) >> 0x20) &
                           (uint)(-(ulonglong)(dVar52 < 0.0) >> 0x20) & 0xbff00000) << 0x20) *
                   dVar99 + *(double *)(local_218 + lVar42 * 8);
            }
          }
          lVar42 = lVar42 + 1;
          param_2 = local_508;
          puVar33 = local_500;
        } while (lVar42 != 3);
      }
      else if ((local_318._4_4_ != 3.4028235e+38) ||
              (((NAN(local_318._4_4_) || (local_310 != 3.4028235e+38)) || (NAN(local_310)))))
      goto LAB_14462ca86;
      if (((float)local_308 != 3.4028235e+38) || (NAN((float)local_308))) {
LAB_14462cae6:
        lVar42 = 0;
        do {
          fVar67 = *(float *)((longlong)&local_308 + lVar42 * 4);
          if (((fVar67 != 3.4028235e+38) || (NAN(fVar67))) && (0.0 <= fVar67)) {
            dVar52 = *(double *)(local_1b8 + lVar42 * 8);
            if (*(double *)(local_508 + 0x298) * (double)fVar67 < ABS(dVar52)) {
              *(double *)(local_1b8 + lVar42 * 8) =
                   *(double *)(local_508 + 0x298) *
                   (double)(-(ulonglong)(0.0 < dVar52) & 0x3ff0000000000000 |
                           ~-(ulonglong)(0.0 < dVar52) &
                           (ulonglong)((uint)(-(ulonglong)(dVar52 < 0.0) >> 0x20) & 0xbff00000) <<
                           0x20) * (double)fVar67;
            }
          }
          lVar42 = lVar42 + 1;
          param_2 = local_508;
          puVar33 = local_500;
        } while (lVar42 != 3);
      }
      else if ((local_308._4_4_ != 3.4028235e+38) ||
              (((NAN(local_308._4_4_) || (local_300 != 3.4028235e+38)) || (NAN(local_300)))))
      goto LAB_14462cae6;
      local_520 = (longlong *)((double)plVar138 / dVar70);
      dVar99 = local_418 / dVar70;
      dVar100 = (double)local_408 / dVar70;
      if ((((float)local_348._0_4_ != 3.4028235e+38) || (NAN((float)local_348._0_4_))) &&
         (0.0 <= (float)local_348._0_4_)) {
        local_448 = (longlong *)((double)plVar27 * dVar98);
        local_4d0 = local_4d0 * dVar98;
        local_378 = local_378 * dVar98;
        dVar126 = (double)local_520 - local_378;
        dVar51 = dVar99 - local_4d0;
        dVar123 = dVar100 - (double)local_448;
        dVar52 = dVar126 * dVar126 + dVar123 * dVar123 + dVar51 * dVar51;
        fVar63 = (float)local_348._0_4_ * fVar63;
        if ((double)(fVar63 * fVar63) < dVar52) {
          dVar52 = (1.0 / SQRT(dVar52)) * (double)fVar63;
          local_520 = (longlong *)(local_378 + dVar126 * dVar52);
          dVar99 = local_4d0 + dVar51 * dVar52;
          dVar100 = (double)local_448 + dVar123 * dVar52;
          dStack_400 = 0.0;
        }
      }
      plVar138 = local_520;
      if ((((local_3d8 != 3.4028235e+38) || (NAN(local_3d8))) && (0.0 <= local_3d8)) &&
         (dVar52 = (double)local_520 * (double)local_520 + dVar100 * dVar100 + dVar99 * dVar99,
         param_2 = local_508, puVar33 = local_500, (double)(local_3d8 * local_3d8) < dVar52)) {
        dVar52 = (1.0 / SQRT(dVar52)) * (double)local_3d8;
        dVar100 = dVar100 * dVar52;
        dVar99 = dVar99 * dVar52;
        plVar138 = (longlong *)((double)local_520 * dVar52);
      }
      dVar52 = (double)local_1a8 * dVar70;
      dVar126 = uStack_1b0 * dVar70;
      dVar132 = (double)local_1b8 * dVar70;
      plVar138 = (longlong *)((double)plVar138 * dVar70);
      local_408 = (double *)(dVar100 * dVar70);
      dVar99 = dVar99 * dVar70;
    }
    dVar100 = 1.0 / *(double *)(param_2 + 0x298);
    dVar123 = (dVar71 - dVar132) * dVar100;
    dVar87 = (dVar87 - dVar126) * dVar100;
    dVar71 = (dVar122 - dVar52) * dVar100;
    dVar52 = (double)local_3a8._0_8_ * dVar87 - dVar123 * (double)local_3a8._8_8_;
    dVar51 = local_3b8 * dVar123 - dVar71 * (double)local_3a8._0_8_;
    dVar70 = (double)local_3a8._8_8_ * dVar71 - dVar87 * local_3b8;
    dVar52 = dVar52 + dVar52;
    dVar51 = dVar51 + dVar51;
    auVar94._0_8_ = dStack_3b0 * dVar51 + dVar87;
    auVar94._8_8_ = dStack_3b0;
    dVar70 = dVar70 + dVar70;
    auVar80._0_8_ = dStack_3b0 * dVar70 + dVar123;
    auVar80._8_8_ = dStack_3b0;
    auVar104._0_8_ =
         ((double)local_3a8._0_8_ * dVar51 - dVar70 * (double)local_3a8._8_8_) +
         dStack_3b0 * dVar52 + dVar71;
    auVar104._8_8_ = local_3a8._8_8_;
    dVar123 = (local_3b8 * dVar70 - dVar52 * (double)local_3a8._0_8_) + auVar94._0_8_;
    dVar52 = ((double)local_3a8._8_8_ * dVar52 - dVar51 * local_3b8) + auVar80._0_8_;
    dVar53 = dVar53 - (double)plVar138;
    dVar137 = dVar137 - dVar99;
    local_3f8 = (longlong *)(dVar113 - (double)local_408);
    dVar70 = SQRT(dVar53 * dVar53 + (double)local_3f8 * (double)local_3f8 + dVar137 * dVar137);
    uStack_3f0 = dStack_410;
    fStack_4f0 = (float)auVar73._8_4_;
    local_4f8 = (undefined1  [8])dVar137;
    fStack_4ec = (float)auVar73._12_4_;
    dVar71 = DAT_14c8463a0;
    dVar99 = DAT_14c8463b0;
    dVar51 = DAT_14c8463a8;
    if (9.999999747378752e-05 < dVar70) {
      dVar71 = (double)local_3f8 / dVar70;
      dVar99 = dVar53 / dVar70;
      dVar51 = dVar137 / dVar70;
    }
    auVar65 = auVar104;
    dVar87 = sin(dVar70 * 0.5);
    dVar70 = cos(dVar70 * 0.5);
    FUN_14299547a(local_158,&local_278);
    local_2c8._8_4_ = SUB84(dVar70,0);
    local_2c8._0_8_ = dVar99 * dVar87;
    local_2c8._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
    local_2b8._8_4_ = SUB84(dVar123,0);
    local_2b8._0_8_ = dVar52;
    local_2b8._12_4_ = (int)((ulonglong)dVar123 >> 0x20);
    uStack_2a0 = 0;
    local_298 = 0x3ff0000000000000;
    uStack_290 = 0x3ff0000000000000;
    local_288 = 0x3ff0000000000000;
    uStack_280 = 0;
    local_2d8 = (undefined8 *)(dVar71 * dVar87);
    dStack_2d0 = dVar51 * dVar87;
    local_2a8 = auVar104._0_8_;
    FUN_1447dc19e(&local_278,local_218);
    FUN_1447dc19e(local_218,local_1b8,local_158);
    param_1 = local_440;
    auVar81._4_12_ = auVar80._4_12_;
    auVar81._0_4_ = (float)uStack_1b0;
    auVar95._4_12_ = auVar94._4_12_;
    auVar95._0_4_ = (float)(double)local_1b8;
    auVar105._4_12_ = auVar65._4_12_;
    auVar105._0_4_ = (float)(double)local_188._0_8_;
    auVar65 = insertps(auVar95,auVar81,0x10);
    auVar65 = insertps(auVar65,ZEXT416((uint)(float)(double)local_1a8),0x20);
    auVar73 = insertps(auVar65,ZEXT416((uint)(float)uStack_1a0),0x30);
    auVar65 = insertps(ZEXT416((uint)(float)local_198),ZEXT416((uint)(float)uStack_190),0x1c);
    auVar65 = insertps(auVar65,auVar105,0x28);
    lVar42 = *(longlong *)(param_2 + 0xb0);
    lVar49 = (longlong)(int)lVar35 * 0x30;
    *(undefined1 (*) [16])(lVar42 + lVar49) = auVar73;
    *(undefined1 (*) [16])(lVar42 + 0x10 + lVar49) = auVar65;
    puVar28 = (undefined8 *)(lVar42 + 0x20 + lVar49);
    *puVar28 = &DAT_3f8000003f800000;
    puVar28[1] = 0x3f800000;
    auVar17 = local_398;
    if (bVar50) {
      dVar70 = 0.0;
    }
    else {
      dVar70 = 1.0;
      if (*(longlong *)(param_2 + 0x70) != 0) {
        dVar70 = 2.0;
        if ((double)local_4c8._0_4_ <= 2.0) {
          dVar70 = (double)local_4c8._0_4_;
        }
      }
    }
    fVar63 = *(float *)(param_2 + 0x2fc);
    fVar67 = 0.0;
    fVar68 = 0.0;
    fVar82 = 0.0;
    if (0.0 < fVar63) {
      dVar51 = (double)local_440[10];
      dVar71 = (double)local_440[0xb];
      dVar87 = (double)local_440[0xc];
      dVar126 = (double)local_3f8 * (double)local_440[0x12];
      dVar132 = (double)local_4f8 * (double)local_440[0x13];
      dVar52 = (double)local_440[0xd];
      dVar53 = dVar53 * (double)local_440[0x14];
      dVar99 = dVar132 * dVar51 - dVar126 * dVar71;
      dVar123 = dVar53 * dVar71 - dVar132 * dVar87;
      dVar122 = dVar126 * dVar87 - dVar51 * dVar53;
      dVar123 = dVar123 + dVar123;
      dVar122 = dVar122 + dVar122;
      dVar99 = dVar99 + dVar99;
      fVar67 = (float)((dVar99 * dVar52 + dVar53 + (dVar122 * dVar51 - dVar71 * dVar123)) * dVar70)
               / fVar63;
      fVar68 = (float)(((dVar123 * dVar87 - dVar51 * dVar99) +
                       (double)local_440[0xd] * dVar122 + dVar132) * dVar70) / fVar63;
      fVar82 = (float)(dVar70 * ((dVar99 * dVar71 - dVar87 * dVar122) + dVar52 * dVar123 + dVar126))
               / fVar63;
    }
    lVar42 = *(longlong *)(param_2 + 200);
    lVar49 = (longlong)(int)lVar35 * 0xc;
    *(float *)(lVar42 + lVar49) = fVar82;
    *(float *)(lVar42 + 4 + lVar49) = fVar68;
    *(float *)(lVar42 + 8 + lVar49) = fVar67;
    dVar70 = (double)local_440[0x10];
    dVar52 = *(double *)(param_2 + 0x2c8);
    dVar53 = (double)local_440[0xf];
    dVar99 = *(double *)(param_2 + 0x2c0);
    lVar35 = *(longlong *)(param_2 + 0xe0);
    *(float *)(lVar35 + lVar49) =
         (float)(((double)local_440[0xe] - *(double *)(param_2 + 0x2b8)) * dVar100);
    *(float *)(lVar35 + 4 + lVar49) = (float)((dVar53 - dVar99) * dVar100);
    *(float *)(lVar35 + 8 + lVar49) = (float)((dVar70 - dVar52) * dVar100);
    if (*(longlong *)(param_2 + 0x70) == 0) {
      FUN_1497efb0c(param_2,(ulonglong)local_3e0 & 0xffffffff,local_398,
                    *(longlong *)(local_440[0x1c] + (longlong)(int)puVar33[1] * 8) + 8);
      uVar22 = local_514;
      if ((char)local_490 == '\0') {
        lVar35 = 0;
        if (*(char *)param_1[1] == '\0') {
          lVar35 = (longlong)(int)local_514;
        }
        FUN_1497efb0c(param_2,local_4bc,
                      *(undefined8 *)(*(longlong *)((char *)param_1[1] + 0x18) + lVar35 * 8),
                      *(longlong *)(param_1[0x1c] + (longlong)(int)local_514 * 8) + 8);
      }
    }
    else {
      pcVar10 = (char *)local_440[1];
      if ((int)local_440[0x1f] == *(int *)((longlong)local_440 + 0x124)) {
LAB_14462cbca:
        puVar33 = (ulonglong *)0x0;
      }
      else {
        uVar22 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
        uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
        plVar27 = local_440 + 0x25;
        if ((longlong *)local_440[0x26] != (longlong *)0x0) {
          plVar27 = (longlong *)local_440[0x26];
        }
        iVar23 = *(int *)((longlong)plVar27 +
                         (ulonglong)((int)local_440[0x27] - 1U & (uVar22 >> 0x10 ^ uVar22)) * 4);
        if (iVar23 == -1) goto LAB_14462cbca;
        do {
          puVar33 = (ulonglong *)(local_440[0x1e] + (longlong)iVar23 * 0x18);
          if (*puVar33 == param_2) break;
          iVar23 = (int)puVar33[2];
          puVar33 = (ulonglong *)0x0;
        } while (iVar23 != -1);
      }
      if (*pcVar10 == '\x01') {
        plVar27 = *(longlong **)(pcVar10 + 0x18);
      }
      else {
        plVar27 = (longlong *)((longlong)(int)puVar33[1] * 8 + *(longlong *)(pcVar10 + 0x18));
      }
      lVar35 = *plVar27;
      FUN_140056680(local_158,L"UseGravityOverride");
      iVar23 = FUN_144a41c6c(lVar35,local_158);
      if (iVar23 == -1) {
        bVar50 = false;
      }
      else {
        bVar50 = *(float *)(*(longlong *)(lVar35 + 0x18) + (longlong)iVar23 * 0xc) != 0.0;
      }
      if (local_158 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(local_158,L"GravityOverride");
      iVar23 = FUN_144a41c6c(lVar35,local_158);
      if (iVar23 == -1) {
        fVar67 = 0.0;
        fVar68 = -980.665;
        fVar63 = 0.0;
      }
      else {
        lVar42 = *(longlong *)(lVar35 + 0x18);
        lVar49 = (longlong)iVar23;
        fVar63 = *(float *)(lVar42 + lVar49 * 0xc);
        fVar67 = *(float *)(lVar42 + 4 + lVar49 * 0xc);
        fVar68 = *(float *)(lVar42 + 8 + lVar49 * 0xc);
      }
      if (local_158 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(local_158,L"GravityScale");
      iVar23 = FUN_144a41c6c(lVar35,local_158);
      if (iVar23 == -1) {
        fVar82 = 1.0;
      }
      else {
        fVar82 = *(float *)(*(longlong *)(lVar35 + 0x18) + (longlong)iVar23 * 0xc);
      }
      if (local_158 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      lVar42 = DAT_14cc26fe0;
      lVar35 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar23 = *(int *)(lVar35 + 0xc60);
      if (((iVar23 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar23 == 2)) {
        uVar30 = 0;
      }
      else if (iVar23 == 1) {
        DVar25 = FUN_140ad26c0();
        DVar26 = GetCurrentThreadId();
        uVar30 = (ulonglong)(DVar25 != DVar26);
      }
      else {
        uVar30 = 1;
      }
      if ((*(byte *)(param_2 + 0x35c) & bVar50) == 0) {
        fVar68 = *(float *)(param_2 + 0x348) * fVar82;
        fVar67 = *(float *)(param_2 + 0x344) * fVar82;
        fVar63 = fVar82 * *(float *)(param_2 + 0x340);
      }
      if (*(longlong *)(param_2 + 0x70) != 0) {
        fVar82 = *(float *)(lVar42 + uVar30 * 4);
        lVar49 = (longlong)(int)param_1[4];
        lVar42 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 0x250);
        *(float *)(lVar42 + lVar49 * 0xc) = fVar63 * fVar82;
        *(float *)(lVar42 + 4 + lVar49 * 0xc) = fVar67 * fVar82;
        *(float *)(lVar42 + 8 + lVar49 * 0xc) = fVar68 * fVar82;
      }
      FUN_140056680(local_158,L"UsePointBasedWindModel");
      iVar23 = FUN_144a41c6c(auVar17,local_158);
      if (iVar23 == -1) {
        bVar38 = 0;
      }
      else {
        bVar38 = -(*(float *)(*(longlong *)((longlong)auVar17 + 0x18) + (longlong)iVar23 * 0xc) !=
                  0.0) & 1;
      }
      if (local_158 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      uVar30 = param_2;
      if (*(longlong *)(param_2 + 0x70) != 0) {
        lVar15 = param_1[4];
        lVar32 = (longlong)(int)lVar15 * 0xc;
        lVar42 = *(longlong *)(param_2 + 200);
        lVar49 = *(longlong *)(param_2 + 0xe0);
        dVar70 = (double)*(float *)(lVar42 + 8 + lVar32);
        dVar52 = (double)*(float *)(lVar42 + 4 + lVar32);
        fVar63 = *(float *)(lVar42 + lVar32);
        fVar67 = *(float *)(lVar49 + 8 + lVar32);
        fVar68 = *(float *)(lVar49 + 4 + lVar32);
        fVar82 = *(float *)(lVar49 + lVar32);
        fVar83 = *(float *)(param_2 + 0x354);
        fVar85 = *(float *)(param_2 + 0x350);
        fVar110 = *(float *)(param_2 + 0x34c);
        local_1b8 = (undefined1  [8])0x0;
        puVar28 = (undefined8 *)FUN_14001cc68(0x60,8);
        uVar30 = local_508;
        *puVar28 = &PTR_FUN_14be875b0;
        puVar28[1] = param_2;
        *(byte *)(puVar28 + 2) =
             9.999999747378752e-05 < ABS(dVar70) |
             (-(9.999999747378752e-05 < ABS(dVar52)) |
             -(9.999999747378752e-05 < ABS((double)fVar63))) & 1U;
        *(byte *)((longlong)puVar28 + 0x11) = bVar38;
        puVar28[3] = (double)(fVar110 * 25.0);
        puVar28[4] = (double)(fVar85 * 25.0);
        puVar28[5] = (double)(fVar83 * 25.0);
        puVar28[6] = (double)fVar63;
        puVar28[7] = dVar52;
        puVar28[8] = dVar70;
        puVar28[9] = (double)fVar82;
        puVar28[10] = (double)fVar68;
        puVar28[0xb] = (double)fVar67;
        if (puVar28 + 1 != (ulonglong *)0x0) {
          local_1b8 = (undefined1  [8])FUN_144638ece;
        }
        lVar42 = *(longlong *)(*(longlong *)(local_508 + 0x70) + 0x280);
        lVar32 = (longlong)(int)lVar15 * 0x40;
        pauVar1 = (undefined1 (*) [16])(lVar42 + lVar32);
        lVar49 = *(longlong *)*pauVar1;
        auVar73 = *pauVar1;
        pauVar3 = (undefined1 (*) [16])(lVar42 + 0x10 + lVar32);
        local_1a8 = *(longlong **)*pauVar3;
        dVar70 = *(double *)(*pauVar3 + 8);
        pdVar2 = (double *)(lVar42 + 0x20 + lVar32);
        dVar52 = *pdVar2;
        dVar53 = pdVar2[1];
        pauVar4 = (undefined1 (*) [16])(lVar42 + 0x30 + lVar32);
        auVar65 = *pauVar4;
        local_128 = *(double *)*pauVar4;
        dStack_120 = *(double *)(*pauVar4 + 8);
        local_138._0_4_ = SUB84(dVar52,0);
        local_138._4_4_ = (float)((ulonglong)dVar52 >> 0x20);
        uStack_130._0_4_ = SUB84(dVar53,0);
        uStack_130._4_4_ = (float)((ulonglong)dVar53 >> 0x20);
        _local_148 = *pauVar3;
        _local_158 = *pauVar1;
        puVar5 = (undefined8 *)(lVar42 + 0x30 + lVar32);
        *puVar5 = local_188._0_8_;
        puVar5[1] = local_188._8_8_;
        pdVar2 = (double *)(lVar42 + 0x20 + lVar32);
        *pdVar2 = local_198;
        pdVar2[1] = uStack_190;
        puVar5 = (undefined8 *)(lVar42 + 0x10 + lVar32);
        *puVar5 = puVar28;
        puVar5[1] = uStack_1a0;
        *(undefined8 *)(lVar42 + lVar32) = local_1b8;
        ((undefined8 *)(lVar42 + lVar32))[1] = uStack_1b0;
        local_188 = auVar65;
        local_198 = dVar52;
        uStack_190 = dVar53;
        _local_1b8 = auVar73;
        uStack_1a0 = dVar70;
        local_138 = dVar52;
        uStack_130 = dVar53;
        if (lVar49 != 0) {
          plVar27 = local_1a8;
          if (local_1a8 == (longlong *)0x0) {
            plVar27 = &local_198;
          }
          (**(code **)(*plVar27 + 0x10))();
        }
      }
      lVar42 = DAT_14cc26ff8;
      iVar23 = *(int *)(lVar35 + 0xc60);
      if (iVar23 == 0x40000002) {
        uVar29 = 0;
      }
      else {
        bVar50 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar23 != 2)) {
          if (iVar23 == 1) {
            DVar25 = FUN_140ad26c0();
            DVar26 = GetCurrentThreadId();
            bVar50 = DVar25 == DVar26;
          }
          else {
            bVar50 = false;
          }
        }
        uVar29 = (ulonglong)(bVar50 ^ 1);
      }
      if (*(longlong *)(uVar30 + 0x70) != 0) {
        local_538 = (double)(CONCAT71(local_538._1_7_,bVar38 & *(byte *)(lVar42 + uVar29)) ^ 1);
        FUN_14172c540((longlong)(int)param_1[4] * 400 +
                      *(longlong *)(*(longlong *)(uVar30 + 0x70) + 0x268),auVar17,
                      *(longlong *)(param_1[0x1c] + (longlong)(int)local_500[1] * 8) + 8);
      }
      FUN_140056680(local_158,L"WindVelocity");
      iVar23 = FUN_144a41c6c(auVar17,local_158);
      puVar33 = local_500;
      if (iVar23 == -1) {
        fVar63 = 0.0;
        fVar67 = 0.0;
        fVar68 = 0.0;
      }
      else {
        lVar35 = *(longlong *)((longlong)auVar17 + 0x18);
        lVar42 = (longlong)iVar23;
        fVar63 = *(float *)(lVar35 + lVar42 * 0xc);
        fVar67 = *(float *)(lVar35 + 4 + lVar42 * 0xc);
        fVar68 = *(float *)(lVar35 + 8 + lVar42 * 0xc);
      }
      if (local_158 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(uVar30 + 0x70) != 0) {
        fVar82 = *(float *)(uVar30 + 0x350);
        fVar83 = *(float *)(uVar30 + 0x354);
        lVar35 = *(longlong *)(*(longlong *)(uVar30 + 0x70) + 0x268);
        lVar42 = (longlong)(int)param_1[4] * 400;
        *(float *)(lVar35 + 0x158 + lVar42) = fVar63 * 100.0 + *(float *)(uVar30 + 0x34c);
        *(float *)(lVar35 + 0x15c + lVar42) = fVar67 * 100.0 + fVar82;
        *(float *)(lVar35 + 0x160 + lVar42) = fVar68 * 100.0 + fVar83;
      }
      dVar70 = *(double *)(uVar30 + 0x298);
      fVar63 = (float)(**(code **)(*(longlong *)*param_1 + 0xe8))();
      FUN_140056680(local_158,L"DampingCoefficient");
      iVar23 = FUN_144a41c6c(auVar17,local_158);
      if (iVar23 == -1) {
        uVar121 = 0x3c23d70a;
      }
      else {
        uVar121 = *(undefined4 *)(*(longlong *)((longlong)auVar17 + 0x18) + (longlong)iVar23 * 0xc);
      }
      if (local_158 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(local_158,L"LocalDampingCoefficient");
      iVar23 = FUN_144a41c6c(auVar17,local_158);
      if (iVar23 == -1) {
        uVar130 = 0;
      }
      else {
        uVar130 = *(undefined4 *)(*(longlong *)((longlong)auVar17 + 0x18) + (longlong)iVar23 * 0xc);
      }
      if (local_158 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(local_158,L"CollisionThickness");
      iVar23 = FUN_144a41c6c(auVar17,local_158);
      if (iVar23 == -1) {
        fVar67 = 1.0;
      }
      else {
        fVar67 = *(float *)(*(longlong *)((longlong)auVar17 + 0x18) + (longlong)iVar23 * 0xc);
      }
      if (local_158 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(local_158,L"FrictionCoefficient");
      iVar23 = FUN_144a41c6c(auVar17,local_158);
      if (iVar23 == -1) {
        uVar127 = 0x3f4ccccd;
      }
      else {
        uVar127 = *(undefined4 *)(*(longlong *)((longlong)auVar17 + 0x18) + (longlong)iVar23 * 0xc);
      }
      if (local_158 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(uVar30 + 0x70) != 0) {
        lVar35 = (longlong)(int)param_1[4];
        *(undefined4 *)(*(longlong *)(*(longlong *)(uVar30 + 0x70) + 0x2c8) + lVar35 * 4) = uVar121;
        *(undefined4 *)(*(longlong *)(*(longlong *)(uVar30 + 0x70) + 0x2e0) + lVar35 * 4) = uVar130;
        *(float *)(*(longlong *)(*(longlong *)(uVar30 + 0x70) + 0x298) + lVar35 * 4) =
             fVar67 * (float)((1.0 / dVar70) * (double)fVar63);
        *(undefined4 *)(*(longlong *)(*(longlong *)(uVar30 + 0x70) + 0x2b0) + lVar35 * 4) = uVar127;
      }
      FUN_140056680(local_158,L"UseCCD");
      iVar23 = FUN_144a41c6c(auVar17,local_158);
      uVar22 = local_514;
      if (iVar23 == -1) {
        bVar38 = 0;
      }
      else {
        bVar38 = -(*(float *)(*(longlong *)((longlong)auVar17 + 0x18) + (longlong)iVar23 * 0xc) !=
                  0.0) & 1;
      }
      if (local_158 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      param_2 = uVar30;
      if (*(longlong *)(uVar30 + 0x70) != 0) {
        *(byte *)(*(longlong *)(*(longlong *)(uVar30 + 0x70) + 0x2f8) + (longlong)(int)param_1[4]) =
             bVar38;
      }
    }
    if (*(char *)param_1[1] == '\0') {
      FUN_14025c7ac(*(undefined8 *)(param_1[0x1c] + (longlong)(int)puVar33[1] * 8),param_2,param_1);
      if ((char)local_490 == '\0') {
        FUN_14025c7ac(*(undefined8 *)(param_1[0x1c] + (longlong)(int)uVar22 * 8),param_2,param_1);
      }
    }
  }
  if ((*(char *)param_1[1] == '\x01') && (lVar35 = param_1[0x1d], (longlong)(int)lVar35 != 0)) {
    lVar42 = param_1[0x1c];
    lVar49 = 0;
    do {
      FUN_14025c7ac(*(undefined8 *)(lVar42 + lVar49),param_2,param_1);
      lVar49 = lVar49 + 8;
    } while ((longlong)(int)lVar35 * 8 != lVar49);
  }
  *(undefined2 *)((longlong)param_1 + 0x44) = 0;
LAB_14462c7dd:
  if ((local_f0 ^ (ulonglong)auStack_558) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14462d486 FUN_14462d486 body=69 status=ok
// SIG undefined FUN_14462d486(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14462d486(void)

{
  _DAT_14cc271b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014462d4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc271b8,1);
  return;
}



// FUNCTION 14462d4cc FUN_14462d4cc body=280 status=ok
// SIG undefined FUN_14462d4cc(void)

undefined4 FUN_14462d4cc(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((1 < *(int *)(param_1 + 0x28)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8),
     *(int *)(lVar1 + 0x50) != *(int *)(lVar1 + 0x7c))) {
    uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar3 >> 0x10 ^ uVar3;
    lVar5 = lVar1 + 0x80;
    if (*(longlong *)(lVar1 + 0x88) != 0) {
      lVar5 = *(longlong *)(lVar1 + 0x88);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar1 + 0x90) - 1U &
                             (uVar3 * 0x40 + (uVar2 >> 0x10 ^ uVar2) + (uVar3 >> 2) + 0x9e3779b9 ^
                             uVar3)) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)(lVar1 + 0x48);
      do {
        lVar6 = (longlong)iVar4 * 0x20;
        lVar5 = lVar1 + lVar6;
        if ((*(ulonglong *)(lVar1 + lVar6) == param_2) &&
           (*(ulonglong *)(lVar1 + 8 + lVar6) == param_3)) {
          if (lVar5 == 0) {
            return 0xffffffff;
          }
          if ((undefined4 *)(lVar5 + 0x10) == (undefined4 *)0x0) {
            return 0xffffffff;
          }
          return *(undefined4 *)(lVar5 + 0x10);
        }
        iVar4 = *(int *)(lVar5 + 0x18);
      } while (iVar4 != -1);
    }
  }
  return 0xffffffff;
}



// FUNCTION 14462d746 FUN_14462d746 body=1920 status=ok
// SIG undefined FUN_14462d746(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14462d746(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  int iVar30;
  longlong lVar31;
  uint uVar32;
  longlong lVar33;
  double *pdVar34;
  ulonglong uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  double dVar42;
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auStack_288 [32];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  double dVar3;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((*(longlong *)(param_1 + 0x10) == 0) ||
     (lVar31 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xe58), lVar31 == 0)) {
    pdVar34 = (double *)&DAT_14c846480;
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      iVar30 = *(int *)(*(longlong *)(param_1 + 8) + 0xe0);
      if ((-1 < (longlong)iVar30) && (iVar30 < *(int *)(lVar31 + 0x10))) {
        lVar6 = *(longlong *)(lVar31 + 8);
        lVar33 = (longlong)iVar30 * 0x60;
        pdVar34 = (double *)(lVar6 + lVar33);
        param_2[6] = 0.0;
        param_2[7] = 0.0;
        param_2[4] = 0.0;
        param_2[5] = 0.0;
        auVar50 = _DAT_149934d80;
        auVar40 = *(undefined1 (*) [16])(lVar31 + 0x70);
        dVar7 = auVar40._0_8_;
        dVar16 = auVar40._8_8_;
        auVar49 = *(undefined1 (*) [16])(lVar31 + 0x80);
        dVar8 = auVar49._0_8_;
        dVar15 = auVar49._8_8_;
        auVar43 = *(undefined1 (*) [16])(lVar6 + 0x40 + lVar33);
        dVar9 = auVar43._0_8_;
        dVar39 = auVar43._8_8_;
        auVar5 = *(undefined1 (*) [16])(lVar6 + 0x50 + lVar33);
        dVar10 = auVar5._0_8_;
        auVar40 = minpd(auVar43,auVar40);
        auVar43 = minpd(auVar5,auVar49);
        auVar49._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
        auVar49._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
        iVar30 = movmskpd((int)lVar6,auVar49);
        auVar40._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
        auVar40._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
        uVar32 = movmskpd((int)lVar33,auVar40);
        if ((uVar32 & 0x3fffffff) == 0 && iVar30 == 0) {
          dVar22 = *pdVar34;
          dVar23 = pdVar34[1];
          dVar24 = pdVar34[2];
          dVar25 = pdVar34[3];
          dVar26 = *(double *)(lVar31 + 0x30);
          dVar27 = *(double *)(lVar31 + 0x38);
          dVar28 = *(double *)(lVar31 + 0x40);
          dVar29 = *(double *)(lVar31 + 0x48);
          dVar1 = *(double *)(lVar31 + 0x48);
          dVar38 = *(double *)(lVar31 + 0x48);
          dVar2 = *(double *)(lVar31 + 0x30);
          dVar3 = *(double *)(lVar31 + 0x30);
          dVar4 = *(double *)(lVar31 + 0x38);
          dVar44 = *(double *)(lVar31 + 0x38);
          dVar47 = *(double *)(lVar31 + 0x40);
          dVar42 = *(double *)(lVar31 + 0x40);
          dVar17 = pdVar34[4] * dVar7;
          dVar46 = pdVar34[5] * dVar16;
          dVar18 = pdVar34[6] * dVar8;
          dVar19 = pdVar34[7] * dVar15;
          dVar12 = dVar46 * dVar26 - dVar27 * dVar17;
          dVar13 = dVar18 * dVar27 - dVar28 * dVar46;
          dVar20 = dVar17 * dVar28 - dVar26 * dVar18;
          dVar21 = dVar19 * dVar29 - dVar29 * dVar19;
          dVar13 = dVar13 + dVar13;
          dVar20 = dVar20 + dVar20;
          dVar12 = dVar12 + dVar12;
          dVar21 = dVar21 + dVar21;
          dVar45 = *(double *)(lVar31 + 0x50);
          dVar14 = (dVar13 * dVar28 - dVar12 * dVar26) + dVar38 * dVar20 + dVar46 +
                   *(double *)(lVar31 + 0x58);
          dVar46 = *(double *)(lVar31 + 0x60);
          dVar48 = *(double *)(lVar31 + 0x68);
          *param_2 = dVar23 * dVar47 * -1.0 + dVar24 * dVar4 + dVar25 * dVar2 * 1.0 + dVar22 * dVar1
          ;
          param_2[1] = dVar22 * dVar42 * 1.0 +
                       dVar25 * dVar44 + dVar24 * dVar3 * -1.0 + dVar23 * dVar38;
          param_2[2] = dVar25 * dVar47 * 1.0 +
                       ((dVar2 * dVar23 * 1.0 + dVar24 * dVar1) - dVar22 * dVar4);
          param_2[3] = dVar24 * dVar42 * -1.0 +
                       ((dVar3 * dVar22 * -1.0 + dVar25 * dVar38) - dVar23 * dVar44);
          auVar11._8_4_ = SUB84(dVar14,0);
          auVar11._0_8_ = (dVar12 * dVar27 - dVar28 * dVar20) + dVar1 * dVar13 + dVar17 + dVar45;
          auVar11._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
          *(undefined1 (*) [16])(param_2 + 4) = auVar11;
          param_2[6] = (dVar20 * dVar26 - dVar27 * dVar13) + dVar1 * dVar12 + dVar18 + dVar46;
          param_2[7] = (dVar21 * dVar29 - dVar21 * dVar29) + dVar38 * dVar21 + dVar19 + dVar48;
          param_2[8] = dVar9 * dVar7;
          param_2[9] = dVar39 * dVar16;
          param_2[10] = dVar10 * dVar8;
          param_2[0xb] = auVar5._8_8_ * dVar15;
        }
        else {
          dVar4 = *(double *)(lVar31 + 0x30);
          dVar44 = *(double *)(lVar31 + 0x38);
          dVar47 = *(double *)(lVar31 + 0x40);
          dVar42 = dVar44 + dVar44;
          dVar45 = dVar47 + dVar47;
          dVar1 = dVar4 * (dVar4 + dVar4);
          local_178 = (1.0 - (dVar1 + dVar44 * dVar42)) * dVar8;
          dVar3 = *(double *)(lVar31 + 0x30) * dVar45;
          dVar38 = *(double *)(lVar31 + 0x48);
          dVar46 = dVar45 * dVar38;
          dVar48 = (dVar4 + dVar4) * *(double *)(lVar31 + 0x48);
          dVar38 = dVar42 * dVar38;
          local_188 = (dVar38 + dVar3) * dVar8;
          dVar15 = dVar15 * auVar5._8_8_;
          dVar1 = (DAT_149934d80._8_8_ - (dVar47 * dVar45 + dVar1)) * dVar16;
          dVar2 = (dVar42 * dVar4 + dVar46) * dVar7;
          local_198 = (dVar45 * dVar44 + dVar48) * dVar16;
          dStack_180 = (dVar45 * dVar44 - dVar48) * dVar8;
          local_1b8 = (dVar3 - dVar38) * dVar7;
          local_1c8._8_4_ = SUB84(dVar2,0);
          local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar47 * dVar45 + dVar44 * dVar42)) * dVar7;
          local_1c8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
          uStack_1b0 = 0;
          local_1a8._8_4_ = SUB84(dVar1,0);
          local_1a8._0_8_ = (dVar42 * dVar4 - dVar46) * dVar16;
          local_1a8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
          uStack_190 = 0;
          uStack_170 = 0;
          local_168 = *(undefined8 *)(lVar31 + 0x50);
          uStack_160 = *(undefined8 *)(lVar31 + 0x58);
          local_158 = *(undefined8 *)(lVar31 + 0x60);
          uStack_150 = 0x3ff0000000000000;
          dVar2 = *pdVar34;
          dVar3 = pdVar34[1];
          dVar4 = pdVar34[2];
          dVar44 = dVar3 + dVar3;
          dVar47 = dVar4 + dVar4;
          dVar1 = dVar2 * (dVar2 + dVar2);
          local_1f8 = (1.0 - (dVar1 + dVar3 * dVar44)) * dVar10;
          dVar38 = pdVar34[3];
          dVar42 = dVar47 * dVar38;
          dVar45 = (dVar2 + dVar2) * pdVar34[3];
          dVar38 = dVar44 * dVar38;
          local_208 = (dVar38 + *pdVar34 * dVar47) * dVar10;
          dStack_200 = (dVar47 * dVar3 - dVar45) * dVar10;
          dVar16 = dVar16 * dVar39;
          local_248 = ((double)DAT_149934d80 - (dVar4 * dVar47 + dVar3 * dVar44)) * dVar9;
          dVar1 = (DAT_149934d80._8_8_ - (dVar4 * dVar47 + dVar1)) * dVar39;
          dStack_240 = (dVar44 * dVar2 + dVar42) * dVar9;
          local_218 = (dVar47 * dVar3 + dVar45) * dVar39;
          local_238 = (*pdVar34 * dVar47 - dVar38) * dVar9;
          uStack_230 = 0;
          local_228._8_4_ = SUB84(dVar1,0);
          local_228._0_8_ = (dVar44 * dVar2 - dVar42) * dVar39;
          local_228._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
          uStack_210 = 0;
          uStack_1f0 = 0;
          local_1e8 = pdVar34[4];
          dStack_1e0 = pdVar34[5];
          local_1d8 = pdVar34[6];
          uStack_1d0 = 0x3ff0000000000000;
          FUN_1447fea8d(&local_148);
          FUN_144a1c686(&local_148,0x3e45798ee0000000);
          auVar36._8_8_ = -(ulonglong)(0.0 <= dVar16);
          auVar36._0_8_ = -(ulonglong)(0.0 <= dVar7 * dVar9);
          auVar40 = blendvpd(_DAT_149936790,auVar50,auVar36);
          uVar35 = -(ulonglong)(0.0 <= dVar8 * dVar10);
          dVar39 = (double)(~uVar35 & 0xbff0000000000000 | uVar35 & 0x3ff0000000000000);
          dVar38 = auVar40._0_8_;
          local_138 = local_138 * dVar38;
          local_140 = local_140 * dVar38;
          local_148 = local_148 * dVar38;
          dVar38 = auVar40._8_8_;
          local_118 = local_118 * dVar38;
          local_120 = local_120 * dVar38;
          local_128 = dVar38 * local_128;
          local_f8 = local_f8 * dVar39;
          local_100 = local_100 * dVar39;
          local_108 = dVar39 * local_108;
          FUN_14481fd10(&local_268,&local_148);
          dVar39 = local_258 * local_258 + local_268 * local_268;
          dVar38 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
          auVar41._0_8_ = dVar39 + dVar38;
          auVar41._8_8_ = dVar39 + dVar38;
          auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
          auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
          auVar40 = sqrtpd(auVar41,auVar41);
          auVar49 = divpd(auVar50,auVar40);
          auVar50._0_8_ = auVar49._0_8_ * local_258;
          auVar50._8_8_ = auVar49._8_8_ * dStack_250;
          auVar40 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar50,auVar37);
          auVar5._8_4_ = SUB84(dVar16,0);
          auVar5._0_8_ = dVar7 * dVar9;
          auVar5._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          *(undefined1 (*) [16])(param_2 + 8) = auVar5;
          auVar43._8_4_ = SUB84(dVar15,0);
          auVar43._0_8_ = dVar8 * dVar10;
          auVar43._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
          *(undefined1 (*) [16])(param_2 + 10) = auVar43;
          *param_2 = (double)((ulonglong)(local_268 * auVar49._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_));
          param_2[1] = (double)((ulonglong)(dStack_260 * auVar49._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_));
          *(undefined1 (*) [16])(param_2 + 2) = auVar40;
          param_2[4] = local_e8;
          param_2[5] = dStack_e0;
          param_2[6] = local_d8;
          param_2[7] = 0.0;
        }
        if ((local_c0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
          return param_2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
    pdVar34 = (double *)(lVar31 + 0x30);
  }
  for (lVar31 = 0xc; lVar31 != 0; lVar31 = lVar31 + -1) {
    *param_2 = *pdVar34;
    pdVar34 = pdVar34 + 1;
    param_2 = param_2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_288);
}



// FUNCTION 14462e008 FUN_14462e008 body=69 status=ok
// SIG undefined FUN_14462e008(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14462e008(void)

{
  _DAT_14cc272f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014462e04a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc27300,1);
  return;
}



// FUNCTION 14462e04d FUN_14462e04d body=69 status=ok
// SIG undefined FUN_14462e04d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14462e04d(void)

{
  _DAT_14cc27310 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014462e08f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc27318,1);
  return;
}



// FUNCTION 14462e092 FUN_14462e092 body=69 status=ok
// SIG undefined FUN_14462e092(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14462e092(void)

{
  _DAT_14cc27320 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014462e0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc27328,1);
  return;
}



// FUNCTION 14462e0d8 FUN_14462e0d8 body=185 status=ok
// SIG undefined FUN_14462e0d8(void)

void FUN_14462e0d8(longlong param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar13 = *(uint *)(lVar3 + 0xe8);
    uVar12 = 0;
    if (0 < (int)uVar13) {
      uVar5 = -param_3;
      if ((int)-param_3 < 0) {
        uVar5 = param_3;
      }
      uVar10 = (ulonglong)uVar13;
      do {
        uVar10 = uVar10 >> 1;
        uVar11 = (uint)uVar10 + (int)uVar12;
        uVar1 = *(uint *)(*(longlong *)(lVar3 + 0xe0) + (ulonglong)uVar11 * 4);
        uVar9 = -uVar1;
        if ((int)uVar9 < 0) {
          uVar9 = uVar1;
        }
        if (uVar9 <= uVar5) {
          uVar12 = (ulonglong)(uVar11 + (uVar13 & 1));
        }
        bVar4 = 1 < uVar13;
        uVar13 = (uint)uVar10;
      } while (bVar4);
    }
    plVar6 = (longlong *)(lVar3 + 0x48);
    iVar2 = *(int *)(*(longlong *)(lVar3 + 0xe0) + uVar12 * 4);
    iVar8 = -iVar2;
    if (iVar8 < 0) {
      iVar8 = iVar2;
    }
    iVar8 = iVar8 - param_3;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1f8);
    lVar7 = (longlong)(int)param_3;
    plVar6 = (longlong *)(*(longlong *)(lVar3 + 8 + lVar7 * 0x18) + 0x28);
    iVar8 = *(int *)(lVar3 + 0x14 + lVar7 * 0x18);
    param_3 = *(uint *)(lVar3 + 0x10 + lVar7 * 0x18);
  }
  *param_2 = (longlong)(int)param_3 * 0xc + *plVar6;
  *(int *)(param_2 + 1) = iVar8;
  return;
}



// FUNCTION 14462e191 FUN_14462e191 body=167 status=ok
// SIG undefined FUN_14462e191(void)

void FUN_14462e191(longlong *param_1,longlong *param_2,longlong *param_3,uint param_4,
                  longlong *param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  
  if (*param_2 == 0) {
    uVar12 = *(uint *)(*param_3 + 0x1a0);
    lVar3 = *(longlong *)(*param_3 + 0x198);
    uVar10 = 0;
    if (0 < (int)uVar12) {
      uVar5 = -param_4;
      if ((int)-param_4 < 0) {
        uVar5 = param_4;
      }
      uVar8 = (ulonglong)uVar12;
      do {
        uVar8 = uVar8 >> 1;
        uVar9 = (uint)uVar8 + (int)uVar10;
        uVar1 = *(uint *)(lVar3 + (ulonglong)uVar9 * 4);
        uVar7 = -uVar1;
        if ((int)uVar7 < 0) {
          uVar7 = uVar1;
        }
        if (uVar7 <= uVar5) {
          uVar10 = (ulonglong)(uVar9 + (uVar12 & 1));
        }
        bVar4 = 1 < uVar12;
        uVar12 = (uint)uVar8;
      } while (bVar4);
    }
    iVar2 = *(int *)(lVar3 + uVar10 * 4);
    iVar6 = -iVar2;
    if (iVar6 < 0) {
      iVar6 = iVar2;
    }
    iVar6 = iVar6 - param_4;
  }
  else {
    lVar3 = *(longlong *)(*param_2 + 0x400);
    lVar11 = (longlong)(int)param_4;
    param_4 = *(uint *)(lVar3 + 0x10 + lVar11 * 0x18);
    iVar6 = *(int *)(lVar3 + 0x14 + lVar11 * 0x18);
  }
  *param_1 = (longlong)(int)param_4 * 4 + *param_5;
  *(int *)(param_1 + 1) = iVar6;
  return;
}



// FUNCTION 14462e238 FUN_14462e238 body=475 status=ok
// SIG undefined FUN_14462e238(void)

float FUN_14462e238(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (0 < *(int *)(param_1 + 0x14)) {
    lVar3 = 0;
    do {
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 8) + 0x78) + (*(int *)(param_1 + 0x10) + lVar3) * 4) =
           0;
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < *(int *)(param_1 + 0x14));
  }
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 == 0) {
    fVar9 = 0.0;
  }
  else {
    lVar1 = *param_2;
    fVar9 = 0.0;
    lVar4 = 0;
    do {
      lVar7 = (longlong)*(int *)(param_1 + 0x10);
      lVar5 = *(int *)(lVar1 + 8 + lVar4) + lVar7;
      lVar6 = *(int *)(lVar1 + lVar4) + lVar7;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x78);
      fVar15 = *(float *)(lVar2 + 8 + lVar6 * 0xc);
      fVar10 = *(float *)(lVar2 + 8 + lVar5 * 0xc) - fVar15;
      fVar12 = *(float *)(lVar2 + lVar6 * 0xc);
      fVar16 = *(float *)(lVar2 + 4 + lVar6 * 0xc);
      fVar11 = *(float *)(lVar2 + 4 + lVar5 * 0xc) - fVar16;
      fVar14 = *(float *)(lVar2 + lVar5 * 0xc) - fVar12;
      lVar7 = *(int *)(lVar1 + 4 + lVar4) + lVar7;
      fVar15 = *(float *)(lVar2 + 8 + lVar7 * 0xc) - fVar15;
      fVar16 = *(float *)(lVar2 + 4 + lVar7 * 0xc) - fVar16;
      fVar12 = *(float *)(lVar2 + lVar7 * 0xc) - fVar12;
      fVar13 = fVar12 * fVar11 - fVar14 * fVar16;
      fVar12 = fVar15 * fVar14 - fVar10 * fVar12;
      fVar15 = fVar16 * fVar10 - fVar15 * fVar11;
      fVar15 = SQRT(fVar13 * fVar13 + fVar15 * fVar15 + fVar12 * fVar12) * 0.5;
      fVar9 = fVar9 + fVar15;
      fVar15 = fVar15 / 3.0;
      *(float *)(lVar8 + lVar6 * 4) = *(float *)(lVar8 + lVar6 * 4) + fVar15;
      lVar8 = (longlong)*(int *)(param_1 + 0x10) + (longlong)*(int *)(lVar1 + 4 + lVar4);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x78);
      *(float *)(lVar2 + lVar8 * 4) = *(float *)(lVar2 + lVar8 * 4) + fVar15;
      lVar8 = (longlong)*(int *)(param_1 + 0x10) + (longlong)*(int *)(lVar1 + 8 + lVar4);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x78);
      *(float *)(lVar2 + lVar8 * 4) = fVar15 + *(float *)(lVar2 + lVar8 * 4);
      lVar4 = lVar4 + 0xc;
    } while ((longlong)(int)lVar3 * 0xc != lVar4);
  }
  return fVar9;
}



// FUNCTION 14462e414 FUN_14462e414 body=817 status=ok
// SIG undefined FUN_14462e414(void)

void FUN_14462e414(longlong param_1,undefined8 param_2,float *param_3,longlong *param_4)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  float fVar18;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  ulonglong uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  int local_90;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar4 = *(int *)(param_1 + 0x14);
  iVar5 = (int)param_4[1];
  uVar16 = 0;
  lVar9 = 0;
  if (iVar5 == iVar4) {
    lVar9 = *param_4;
  }
  fVar2 = *param_3;
  fVar3 = param_3[1];
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0x80;
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_1400baa38();
  if (local_90 == 0) {
    uVar8 = 1;
    iVar6 = 0;
    iVar11 = 0;
  }
  else {
    puVar7 = local_98;
    if (local_98 == (uint *)0x0) {
      puVar7 = local_a8;
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar11 = local_90 + 0x1e;
      if (-1 < local_90 + -1) {
        iVar11 = local_90 + -1;
      }
      uVar16 = 0;
      uVar8 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar8 = uVar16;
      }
      iVar6 = 0;
      do {
        if (uVar8 == uVar16) goto LAB_14462e536;
        iVar6 = iVar6 + 0x20;
        uVar13 = puVar7[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar16 = 0;
      iVar6 = 0;
    }
    uVar8 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (iVar6 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (local_90 <= iVar11) {
      iVar11 = local_90;
    }
  }
  if (iVar11 != local_90) {
    uVar13 = 0xffffffff;
    do {
      lVar12 = (longlong)*(int *)(local_b8 + (longlong)iVar11 * 0xc);
      fVar18 = fVar2;
      if (0.0001 < ABS(fVar3 - fVar2) && (0 < iVar5 && iVar5 == iVar4)) {
        fVar18 = *(float *)(lVar9 + lVar12 * 4) * (fVar3 - fVar2) + fVar2;
      }
      lVar12 = *(int *)(param_1 + 0x10) + lVar12;
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x78);
      *(float *)(lVar17 + lVar12 * 4) = fVar18 * *(float *)(lVar17 + lVar12 * 4);
      uVar13 = uVar13 & ~(uint)uVar8;
      puVar7 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar7 = local_a8;
      }
      iVar11 = (int)uVar16;
      lVar12 = (longlong)iVar11;
      uVar10 = puVar7[lVar12] & uVar13;
      if (uVar10 == 0) {
        iVar14 = local_90 + 0x1e;
        if (-1 < local_90 + -1) {
          iVar14 = local_90 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar6 = iVar6 + 0x20;
        iVar15 = iVar14;
        if (iVar14 < iVar11) {
          iVar15 = iVar11;
        }
        if (iVar11 < iVar14) {
          lVar17 = 0;
          do {
            uVar10 = puVar7[lVar12 + lVar17 + 1];
            if (uVar10 != 0) {
              uVar16 = (ulonglong)(iVar11 + (int)lVar17 + 1);
              uVar13 = 0xffffffff;
              goto LAB_14462e6d0;
            }
            iVar6 = iVar6 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar15 - lVar12 != lVar17);
          uVar13 = 0xffffffff;
          iVar11 = iVar15;
        }
        uVar16 = (ulonglong)(iVar11 + 1);
        iVar11 = local_90;
      }
      else {
LAB_14462e6d0:
        uVar8 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar8 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar11 = (iVar6 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (local_90 <= iVar11) {
          iVar11 = local_90;
        }
      }
    } while (iVar11 != local_90);
  }
LAB_14462e536:
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  uVar16 = uStack_b0 >> 0x20;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  if ((int)uVar16 != 0) {
    FUN_1447a08a2(&local_b8,0);
  }
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    FUN_1446efbd8(local_a8,0);
  }
  if (local_98 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14462e79e FUN_14462e79e body=3669 status=ok
// SIG undefined FUN_14462e79e(void)

undefined8 * FUN_14462e79e(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  undefined1 auStack_1c8 [40];
  ulonglong local_1a0;
  uint local_198;
  int local_194;
  ulonglong local_190;
  ulonglong local_188;
  int local_180;
  uint local_17c;
  undefined8 *local_178;
  longlong local_170;
  ulonglong local_168;
  undefined1 local_160 [4];
  uint local_15c;
  longlong local_158;
  ulonglong uStack_150;
  uint local_148 [4];
  uint *local_138;
  uint local_130;
  uint local_12c;
  undefined4 uStack_128;
  int local_124;
  undefined1 local_120 [8];
  undefined1 *local_118;
  int local_110;
  longlong local_108;
  ulonglong uStack_100;
  uint local_f8 [4];
  uint *local_e8;
  uint local_e0;
  uint local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_194 = FUN_1497f5f02(param_3);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar18 = *(uint *)(param_2 + 0x140);
  local_178 = param_1;
  local_170 = param_2;
  if ((int)uVar18 <= (int)(uVar18 + *(int *)(param_2 + 0x144) + -1)) {
    local_168 = (ulonglong)(*(int *)(param_2 + 0x144) + uVar18);
    do {
      local_1a0 = (ulonglong)uVar18;
      local_138 = (uint *)0x0;
      local_130 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_12c = 0x80;
      uStack_128 = 0xffffffff;
      local_124 = 0;
      local_118 = (undefined1 *)0x0;
      local_110 = 0;
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_8c = 0x80;
      uStack_88 = 0xffffffff;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      local_e8 = (uint *)0x0;
      local_e0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_dc = 0x80;
      uStack_d8 = 0xffffffff;
      local_d4 = 0;
      local_c8 = 0;
      local_c0 = 0;
      plVar6 = (longlong *)FUN_146e2852c(local_170);
      lVar15 = 0;
      if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
        plVar12 = plVar6 + 7;
        if ((longlong *)plVar6[8] != (longlong *)0x0) {
          plVar12 = (longlong *)plVar6[8];
        }
        iVar20 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar6[9] - 1U & (uint)local_1a0) * 4
                         );
        if (iVar20 != -1) {
          do {
            lVar15 = *plVar6 + (longlong)iVar20 * 0x60;
            if (*(uint *)(*plVar6 + (longlong)iVar20 * 0x60) == (uint)local_1a0) goto LAB_14462e974;
            iVar20 = *(int *)(lVar15 + 0x58);
          } while (iVar20 != -1);
        }
        lVar15 = 0;
      }
LAB_14462e974:
      FUN_145c3f772(&local_108,lVar15 + 8);
      uVar18 = local_e0;
      if (local_e0 == 0) {
        uVar19 = 1;
        iVar20 = 0;
        uVar11 = 0;
        uVar17 = 0;
      }
      else {
        puVar7 = local_e8;
        if (local_e8 == (uint *)0x0) {
          puVar7 = local_f8;
        }
        uVar8 = *puVar7;
        if (uVar8 == 0) {
          iVar20 = local_e0 + 0x1e;
          if (-1 < (int)(local_e0 - 1)) {
            iVar20 = local_e0 - 1;
          }
          uVar17 = 0;
          uVar11 = (ulonglong)(uint)(iVar20 >> 5);
          if (iVar20 >> 5 < 1) {
            uVar11 = uVar17;
          }
          iVar20 = 0;
          do {
            if (uVar11 == uVar17) goto LAB_14462ea15;
            iVar20 = iVar20 + 0x20;
            uVar8 = puVar7[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar8 == 0);
        }
        else {
          iVar20 = 0;
          uVar17 = 0;
        }
        uVar19 = (ulonglong)(-uVar8 & uVar8);
        uVar11 = uVar19 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar8 = (iVar20 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)local_e0 <= (int)uVar8) {
          uVar8 = local_e0;
        }
        uVar11 = (ulonglong)uVar8;
      }
      if ((uint)uVar11 == local_e0) {
LAB_14462ea15:
        uVar23 = (ulonglong)local_e0;
      }
      else {
        uVar8 = 0xffffffff;
        do {
          local_15c = *(uint *)(local_108 + (longlong)(int)uVar11 * 0xc);
          FUN_1447cbafe(&local_158,local_160,&local_15c,0);
          uVar8 = ~(uint)uVar19 & uVar8;
          puVar7 = local_e8;
          if (local_e8 == (uint *)0x0) {
            puVar7 = local_f8;
          }
          uVar23 = (ulonglong)local_e0;
          iVar16 = (int)uVar17;
          lVar15 = (longlong)iVar16;
          uVar4 = puVar7[lVar15] & uVar8;
          if (uVar4 == 0) {
            iVar14 = local_e0 + 0x1e;
            if (-1 < (int)(local_e0 - 1)) {
              iVar14 = local_e0 - 1;
            }
            iVar14 = iVar14 >> 5;
            iVar20 = iVar20 + 0x20;
            iVar5 = iVar14;
            if (iVar14 < iVar16) {
              iVar5 = iVar16;
            }
            if (iVar16 < iVar14) {
              lVar22 = 0;
              do {
                uVar4 = puVar7[lVar15 + lVar22 + 1];
                if (uVar4 != 0) {
                  uVar17 = (ulonglong)(iVar16 + (int)lVar22 + 1);
                  uVar8 = 0xffffffff;
                  goto LAB_14462f2bf;
                }
                iVar20 = iVar20 + 0x20;
                lVar22 = lVar22 + 1;
              } while (iVar5 - lVar15 != lVar22);
              uVar8 = 0xffffffff;
              lVar15 = (longlong)iVar5;
            }
            uVar17 = lVar15 + 1U & 0xffffffff;
            uVar11 = uVar23;
          }
          else {
LAB_14462f2bf:
            uVar19 = (ulonglong)(-uVar4 & uVar4);
            uVar11 = uVar19 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            uVar4 = (iVar20 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            uVar11 = (ulonglong)uVar4;
            if ((int)local_e0 <= (int)uVar4) {
              uVar11 = uVar23;
            }
          }
        } while ((uint)uVar11 != uVar18);
      }
      if (1 < local_194) {
        iVar20 = 1;
        do {
          uVar18 = 0;
          uVar19 = 1;
          uVar17 = 0;
          iVar16 = (int)uVar23;
          uVar11 = 0;
          local_180 = iVar20;
          if (iVar16 != 0) {
            puVar7 = local_e8;
            if (local_e8 == (uint *)0x0) {
              puVar7 = local_f8;
            }
            uVar8 = *puVar7;
            if (uVar8 == 0) {
              iVar20 = iVar16 + 0x1e;
              if (-1 < iVar16 + -1) {
                iVar20 = iVar16 + -1;
              }
              uVar17 = 0;
              uVar11 = (ulonglong)(uint)(iVar20 >> 5);
              if (iVar20 >> 5 < 1) {
                uVar11 = 0;
              }
              uVar18 = 0;
              do {
                if (uVar11 == uVar17) goto LAB_14462eabf;
                uVar18 = uVar18 + 0x20;
                uVar8 = puVar7[uVar17 + 1];
                uVar17 = uVar17 + 1;
              } while (uVar8 == 0);
            }
            else {
              uVar18 = 0;
              uVar17 = 0;
            }
            uVar19 = (ulonglong)(-uVar8 & uVar8);
            uVar11 = uVar19 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            uVar8 = (uVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            uVar11 = (ulonglong)uVar8;
            if (iVar16 <= (int)uVar8) {
              uVar11 = uVar23;
            }
          }
          if ((int)uVar11 != iVar16) {
            uVar8 = 0xffffffff;
            local_190 = uVar23;
            do {
              uVar4 = *(uint *)(local_108 + (longlong)(int)uVar11 * 0xc);
              plVar6 = (longlong *)FUN_146e2852c(local_170);
              if ((int)plVar6[1] == *(int *)((longlong)plVar6 + 0x34)) {
                lVar15 = 0;
              }
              else {
                plVar12 = plVar6 + 7;
                if ((longlong *)plVar6[8] != (longlong *)0x0) {
                  plVar12 = (longlong *)plVar6[8];
                }
                iVar20 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar6[9] - 1U & uVar4) * 4);
                if (iVar20 != -1) {
                  do {
                    lVar15 = *plVar6 + (longlong)iVar20 * 0x60;
                    if (*(uint *)(*plVar6 + (longlong)iVar20 * 0x60) == uVar4) goto LAB_14462ebf2;
                    iVar20 = *(int *)(lVar15 + 0x58);
                  } while (iVar20 != -1);
                }
                lVar15 = 0;
              }
LAB_14462ebf2:
              iVar20 = *(int *)(lVar15 + 0x30);
              local_198 = uVar18;
              local_188 = uVar17;
              local_17c = uVar8;
              if (iVar20 == 0) {
                uVar11 = 1;
                uVar17 = 0;
                iVar14 = 0;
                iVar16 = 0;
              }
              else {
                puVar7 = *(uint **)(lVar15 + 0x28);
                if (*(uint **)(lVar15 + 0x28) == (uint *)0x0) {
                  puVar7 = (uint *)(lVar15 + 0x18);
                }
                uVar18 = *puVar7;
                if (uVar18 == 0) {
                  iVar16 = iVar20 + 0x1e;
                  if (-1 < iVar20 + -1) {
                    iVar16 = iVar20 + -1;
                  }
                  uVar17 = 0;
                  uVar11 = (ulonglong)(uint)(iVar16 >> 5);
                  if (iVar16 >> 5 < 1) {
                    uVar11 = uVar17;
                  }
                  iVar14 = 0;
                  do {
                    if (uVar11 == uVar17) goto LAB_14462ec7a;
                    iVar14 = iVar14 + 0x20;
                    uVar18 = puVar7[uVar17 + 1];
                    uVar17 = uVar17 + 1;
                  } while (uVar18 == 0);
                }
                else {
                  uVar17 = 0;
                  iVar14 = 0;
                }
                uVar11 = (ulonglong)(-uVar18 & uVar18);
                uVar23 = uVar11 * 2 + 1;
                lVar22 = 0x3f;
                if (uVar23 != 0) {
                  for (; uVar23 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                  }
                }
                iVar16 = (iVar14 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
                if (iVar20 <= iVar16) {
                  iVar16 = iVar20;
                }
              }
              if (iVar16 != iVar20) {
                uVar18 = 0xffffffff;
                uVar23 = local_1a0;
                iVar5 = iVar20;
                do {
                  local_15c = *(uint *)(*(longlong *)(lVar15 + 8) + (longlong)iVar16 * 0xc);
                  if ((int)uStack_150 != local_124) {
                    puVar13 = local_118;
                    if (local_118 == (undefined1 *)0x0) {
                      puVar13 = local_120;
                    }
                    for (iVar16 = *(int *)(puVar13 + (ulonglong)(local_110 - 1U & local_15c) * 4);
                        iVar16 != -1; iVar16 = *(int *)(local_158 + (longlong)iVar16 * 0xc + 4)) {
                      if (*(uint *)(local_158 + (longlong)iVar16 * 0xc) == local_15c)
                      goto LAB_14462eded;
                    }
                  }
                  if (local_15c != (uint)uVar23) {
                    FUN_1447cbafe(&local_b8,local_160,&local_15c,0);
                    iVar5 = *(int *)(lVar15 + 0x30);
                    uVar23 = local_1a0;
                  }
LAB_14462eded:
                  uVar18 = uVar18 & ~(uint)uVar11;
                  puVar7 = *(uint **)(lVar15 + 0x28);
                  if (*(uint **)(lVar15 + 0x28) == (uint *)0x0) {
                    puVar7 = (uint *)(lVar15 + 0x18);
                  }
                  iVar16 = (int)uVar17;
                  lVar22 = (longlong)iVar16;
                  uVar8 = puVar7[lVar22] & uVar18;
                  if (uVar8 == 0) {
                    iVar9 = iVar5 + 0x1e;
                    if (-1 < iVar5 + -1) {
                      iVar9 = iVar5 + -1;
                    }
                    iVar9 = iVar9 >> 5;
                    iVar14 = iVar14 + 0x20;
                    iVar10 = iVar9;
                    if (iVar9 < iVar16) {
                      iVar10 = iVar16;
                    }
                    if (iVar16 < iVar9) {
                      lVar21 = 0;
                      do {
                        uVar8 = puVar7[lVar22 + lVar21 + 1];
                        if (uVar8 != 0) {
                          uVar17 = (ulonglong)(iVar16 + (int)lVar21 + 1);
                          uVar18 = 0xffffffff;
                          goto LAB_14462ee63;
                        }
                        iVar14 = iVar14 + 0x20;
                        lVar21 = lVar21 + 1;
                      } while (iVar10 - lVar22 != lVar21);
                      uVar18 = 0xffffffff;
                      iVar16 = iVar10;
                    }
                    uVar17 = (ulonglong)(iVar16 + 1);
                    uVar23 = local_1a0;
                    iVar16 = iVar5;
                  }
                  else {
LAB_14462ee63:
                    uVar11 = (ulonglong)(-uVar8 & uVar8);
                    uVar1 = uVar11 * 2 + 1;
                    lVar22 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                      }
                    }
                    iVar16 = (iVar14 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
                    if (iVar5 <= iVar16) {
                      iVar16 = iVar5;
                    }
                  }
                } while (iVar16 != iVar20);
              }
LAB_14462ec7a:
              uVar8 = local_17c & ~(uint)uVar19;
              puVar7 = local_e8;
              if (local_e8 == (uint *)0x0) {
                puVar7 = local_f8;
              }
              iVar20 = (int)local_188;
              lVar15 = (longlong)iVar20;
              uVar4 = puVar7[lVar15] & uVar8;
              uVar17 = local_188;
              uVar18 = local_198;
              if (uVar4 == 0) {
                iVar16 = local_e0 + 0x1e;
                if (-1 < (int)(local_e0 - 1)) {
                  iVar16 = local_e0 - 1;
                }
                iVar16 = iVar16 >> 5;
                uVar18 = local_198 + 0x20;
                iVar14 = iVar16;
                if (iVar16 < iVar20) {
                  iVar14 = iVar20;
                }
                if (iVar20 < iVar16) {
                  lVar22 = 0;
                  do {
                    uVar4 = puVar7[lVar15 + lVar22 + 1];
                    if (uVar4 != 0) {
                      uVar8 = 0xffffffff;
                      uVar17 = (ulonglong)(iVar20 + (int)lVar22 + 1);
                      goto LAB_14462ed1f;
                    }
                    uVar18 = uVar18 + 0x20;
                    lVar22 = lVar22 + 1;
                  } while (iVar14 - lVar15 != lVar22);
                  uVar8 = 0xffffffff;
                  iVar20 = iVar14;
                }
                uVar17 = (ulonglong)(iVar20 + 1);
                uVar4 = local_e0;
              }
              else {
LAB_14462ed1f:
                uVar19 = (ulonglong)(-uVar4 & uVar4);
                uVar11 = uVar19 * 2 + 1;
                lVar15 = 0x3f;
                if (uVar11 != 0) {
                  for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                uVar4 = (uVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
                if ((int)local_e0 <= (int)uVar4) {
                  uVar4 = local_e0;
                }
              }
              uVar11 = (ulonglong)uVar4;
            } while (uVar4 != (uint)local_190);
          }
LAB_14462eabf:
          FUN_145c3f772(&local_108,&local_b8);
          FUN_1402226aa(&local_b8);
          uVar18 = local_e0;
          if (local_e0 == 0) {
            uVar19 = 1;
            uVar17 = 0;
            uVar11 = 0;
            iVar20 = 0;
          }
          else {
            puVar7 = local_e8;
            if (local_e8 == (uint *)0x0) {
              puVar7 = local_f8;
            }
            uVar8 = *puVar7;
            if (uVar8 == 0) {
              iVar20 = local_e0 + 0x1e;
              if (-1 < (int)(local_e0 - 1)) {
                iVar20 = local_e0 - 1;
              }
              uVar17 = 0;
              uVar11 = (ulonglong)(uint)(iVar20 >> 5);
              if (iVar20 >> 5 < 1) {
                uVar11 = uVar17;
              }
              iVar20 = 0;
              do {
                if (uVar11 == uVar17) goto LAB_14462eee0;
                iVar20 = iVar20 + 0x20;
                uVar8 = puVar7[uVar17 + 1];
                uVar17 = uVar17 + 1;
              } while (uVar8 == 0);
            }
            else {
              uVar17 = 0;
              iVar20 = 0;
            }
            uVar19 = (ulonglong)(-uVar8 & uVar8);
            uVar11 = uVar19 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            uVar8 = (iVar20 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if ((int)local_e0 <= (int)uVar8) {
              uVar8 = local_e0;
            }
            uVar11 = (ulonglong)uVar8;
          }
          if ((uint)uVar11 == local_e0) {
LAB_14462eee0:
            uVar23 = (ulonglong)local_e0;
          }
          else {
            uVar8 = 0xffffffff;
            uVar23 = (ulonglong)local_e0;
            do {
              local_15c = *(uint *)(local_108 + (longlong)(int)uVar11 * 0xc);
              if ((int)uStack_150 != local_124) {
                puVar13 = local_118;
                if (local_118 == (undefined1 *)0x0) {
                  puVar13 = local_120;
                }
                for (iVar16 = *(int *)(puVar13 + (ulonglong)(local_110 - 1U & local_15c) * 4);
                    iVar16 != -1; iVar16 = *(int *)(local_158 + (longlong)iVar16 * 0xc + 4)) {
                  if (*(uint *)(local_158 + (longlong)iVar16 * 0xc) == local_15c)
                  goto LAB_14462ef88;
                }
              }
              FUN_1447cbafe(&local_158,local_160,&local_15c,0);
              uVar23 = (ulonglong)local_e0;
LAB_14462ef88:
              uVar8 = uVar8 & ~(uint)uVar19;
              puVar7 = local_e8;
              if (local_e8 == (uint *)0x0) {
                puVar7 = local_f8;
              }
              iVar16 = (int)uVar17;
              lVar15 = (longlong)iVar16;
              uVar4 = puVar7[lVar15] & uVar8;
              iVar14 = (int)uVar23;
              if (uVar4 == 0) {
                iVar5 = iVar14 + 0x1e;
                if (-1 < iVar14 + -1) {
                  iVar5 = iVar14 + -1;
                }
                iVar5 = iVar5 >> 5;
                iVar20 = iVar20 + 0x20;
                iVar9 = iVar5;
                if (iVar5 < iVar16) {
                  iVar9 = iVar16;
                }
                if (iVar16 < iVar5) {
                  lVar22 = 0;
                  do {
                    uVar4 = puVar7[lVar15 + lVar22 + 1];
                    if (uVar4 != 0) {
                      uVar17 = (ulonglong)(iVar16 + (int)lVar22 + 1);
                      uVar8 = 0xffffffff;
                      goto LAB_14462f002;
                    }
                    iVar20 = iVar20 + 0x20;
                    lVar22 = lVar22 + 1;
                  } while (iVar9 - lVar15 != lVar22);
                  uVar8 = 0xffffffff;
                  iVar16 = iVar9;
                }
                uVar17 = (ulonglong)(iVar16 + 1);
                uVar11 = uVar23;
              }
              else {
LAB_14462f002:
                uVar19 = (ulonglong)(-uVar4 & uVar4);
                uVar11 = uVar19 * 2 + 1;
                lVar15 = 0x3f;
                if (uVar11 != 0) {
                  for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                uVar4 = (iVar20 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
                uVar11 = (ulonglong)uVar4;
                if (iVar14 <= (int)uVar4) {
                  uVar11 = uVar23;
                }
              }
            } while ((uint)uVar11 != uVar18);
          }
          iVar20 = local_180 + 1;
        } while (iVar20 != local_194);
      }
      local_c0 = 0;
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      uVar11 = uStack_100 >> 0x20;
      uStack_100 = uStack_100 & 0xffffffff00000000;
      if ((int)uVar11 != 0) {
        FUN_1447a08a2(&local_108,0);
      }
      uStack_d8 = 0xffffffff;
      local_d4 = 0;
      local_e0 = 0;
      if (0x80 < local_dc) {
        local_dc = 0x80;
        FUN_1446efbd8(local_f8,0);
      }
      if (local_e8 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      uVar11 = uStack_b0 >> 0x20;
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      if ((int)uVar11 != 0) {
        FUN_1447a08a2(&local_b8,0);
      }
      uStack_88 = 0xffffffff;
      local_84 = 0;
      local_90 = 0;
      if (0x80 < local_8c) {
        local_8c = 0x80;
        FUN_1446efbd8(local_a8,0);
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      iVar20 = (int)local_1a0;
      if (local_130 == 0) {
        uVar17 = 1;
        uVar11 = 0;
        iVar16 = 0;
        uVar18 = 0;
      }
      else {
        puVar7 = local_138;
        if (local_138 == (uint *)0x0) {
          puVar7 = local_148;
        }
        uVar18 = *puVar7;
        if (uVar18 == 0) {
          iVar16 = local_130 + 0x1e;
          if (-1 < (int)(local_130 - 1)) {
            iVar16 = local_130 - 1;
          }
          uVar11 = 0;
          uVar17 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar17 = uVar11;
          }
          iVar16 = 0;
          do {
            if (uVar17 == uVar11) goto LAB_14462f318;
            iVar16 = iVar16 + 0x20;
            uVar18 = puVar7[uVar11 + 1];
            uVar11 = uVar11 + 1;
          } while (uVar18 == 0);
        }
        else {
          uVar11 = 0;
          iVar16 = 0;
        }
        uVar17 = (ulonglong)(-uVar18 & uVar18);
        uVar19 = uVar17 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar18 = (iVar16 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)local_130 <= (int)uVar18) {
          uVar18 = local_130;
        }
      }
      if (uVar18 != local_130) {
        local_198 = 0xffffffff;
        local_188 = (ulonglong)local_130;
        do {
          puVar3 = local_178;
          uVar2 = *(undefined4 *)(local_158 + (longlong)(int)uVar18 * 0xc);
          uVar24 = (undefined4)local_1a0;
          local_b8 = CONCAT44(uVar2,uVar24);
          FUN_14026d8b0(local_178,&local_108,&local_b8,0);
          local_b8 = CONCAT44(uVar24,uVar2);
          FUN_14026d8b0(puVar3,&local_108,&local_b8,0);
          local_198 = ~(uint)uVar17 & local_198;
          puVar7 = local_138;
          if (local_138 == (uint *)0x0) {
            puVar7 = local_148;
          }
          iVar20 = (int)uVar11;
          lVar15 = (longlong)iVar20;
          uVar18 = puVar7[lVar15] & local_198;
          if (uVar18 == 0) {
            iVar14 = local_130 + 0x1e;
            if (-1 < (int)(local_130 - 1)) {
              iVar14 = local_130 - 1;
            }
            iVar14 = iVar14 >> 5;
            iVar16 = iVar16 + 0x20;
            iVar5 = iVar14;
            if (iVar14 < iVar20) {
              iVar5 = iVar20;
            }
            if (iVar20 < iVar14) {
              lVar22 = 0;
              do {
                uVar18 = puVar7[lVar15 + lVar22 + 1];
                if (uVar18 != 0) {
                  uVar11 = (ulonglong)(iVar20 + (int)lVar22 + 1);
                  local_198 = 0xffffffff;
                  goto LAB_14462f4c3;
                }
                iVar16 = iVar16 + 0x20;
                lVar22 = lVar22 + 1;
              } while (iVar5 - lVar15 != lVar22);
              local_198 = 0xffffffff;
              lVar15 = (longlong)iVar5;
            }
            uVar11 = lVar15 + 1U & 0xffffffff;
            uVar18 = local_130;
          }
          else {
LAB_14462f4c3:
            uVar17 = (ulonglong)(-uVar18 & uVar18);
            uVar19 = uVar17 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            uVar18 = (iVar16 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if ((int)local_130 <= (int)uVar18) {
              uVar18 = local_130;
            }
          }
          iVar20 = (int)local_1a0;
        } while (uVar18 != (uint)local_188);
      }
LAB_14462f318:
      local_110 = 0;
      if (local_118 != (undefined1 *)0x0) {
        FUN_1400020a8();
        iVar20 = (int)local_1a0;
      }
      uVar17 = local_168;
      uVar11 = uStack_150 >> 0x20;
      uStack_150 = uStack_150 & 0xffffffff00000000;
      if ((int)uVar11 != 0) {
        FUN_1447a08a2(&local_158,0);
        iVar20 = (int)local_1a0;
      }
      uStack_128 = 0xffffffff;
      local_124 = 0;
      local_130 = 0;
      if (0x80 < local_12c) {
        local_12c = 0x80;
        FUN_1446efbd8(local_148,0);
        iVar20 = (int)local_1a0;
      }
      if (local_138 != (uint *)0x0) {
        FUN_1400020a8();
        iVar20 = (int)local_1a0;
      }
      if (local_158 != 0) {
        FUN_1400020a8();
        iVar20 = (int)local_1a0;
      }
      uVar18 = iVar20 + 1;
    } while (uVar18 != (uint)uVar17);
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return local_178;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14462f5f4 FUN_14462f5f4 body=934 status=ok
// SIG undefined FUN_14462f5f4(void)

void FUN_14462f5f4(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if ((0.0001 < ABS(*(float *)(param_1 + 0x48))) || (0.0001 < ABS(*(float *)(param_1 + 0x4c)))) {
    bVar4 = false;
  }
  else {
    bVar4 = ABS(*(float *)(param_1 + 0x50)) <= 0.0001;
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    if (*(int *)(param_1 + 0x38) < 1) {
      bVar5 = false;
    }
    else {
      bVar5 = 0.0001 < ABS(*(float *)(param_1 + 0x44));
    }
    fVar12 = *(float *)(param_1 + 0x40);
  }
  else {
    fVar12 = 1.0;
    bVar5 = false;
  }
  if (0 < *(int *)(param_2 + 0x14)) {
    iVar1 = *(int *)(param_2 + 0x10);
    lVar10 = *(longlong *)(param_2 + 8);
    lVar6 = (longlong)iVar1 * 0xc;
    lVar2 = *(longlong *)(lVar10 + 0x90);
    lVar3 = *(longlong *)(param_1 + 0x30);
    lVar7 = **(longlong **)(param_1 + 0x78) + 8;
    lVar9 = *(longlong *)(lVar10 + 0x48) + 8;
    lVar8 = *(longlong *)(lVar10 + 0x28) + 8;
    lVar10 = *(longlong *)(lVar10 + 0x60) + 8;
    lVar11 = 0;
    do {
      fVar13 = *(float *)((longlong)iVar1 * 4 + lVar2 + lVar11 * 4);
      if ((fVar13 != 0.0) || (NAN(fVar13))) {
        fVar13 = fVar12;
        if (bVar5) {
          fVar13 = *(float *)(param_1 + 0x44) * *(float *)(lVar3 + lVar11 * 4) +
                   *(float *)(param_1 + 0x40);
        }
        fVar14 = *(float *)(param_1 + 8) * fVar13;
        fVar15 = *(float *)(param_1 + 0xc) * fVar13;
        fVar13 = fVar13 * *(float *)(param_1 + 0x10);
        *(float *)(lVar10 + -8 + lVar6) = fVar14;
        *(float *)(lVar10 + -4 + lVar6) = fVar15;
        *(float *)(lVar10 + lVar6) = fVar13;
        if (!bVar4) {
          fVar20 = *(float *)(lVar8 + lVar6) - *(float *)(param_1 + 0x5c);
          fVar21 = *(float *)(lVar8 + -4 + lVar6) - *(float *)(param_1 + 0x58);
          fVar17 = *(float *)(lVar8 + -8 + lVar6) - *(float *)(param_1 + 0x54);
          fVar16 = *(float *)(param_1 + 0x48);
          fVar18 = *(float *)(param_1 + 0x4c);
          fVar22 = fVar16 * fVar21 - fVar17 * fVar18;
          fVar19 = *(float *)(param_1 + 0x50);
          fVar17 = fVar17 * fVar19 - fVar20 * fVar16;
          fVar20 = fVar18 * fVar20 - fVar21 * fVar19;
          fVar14 = fVar14 - (fVar18 * fVar22 - fVar17 * fVar19);
          *(float *)(lVar10 + -8 + lVar6) = fVar14;
          fVar15 = fVar15 - (fVar19 * fVar20 - fVar22 * fVar16);
          *(float *)(lVar10 + -4 + lVar6) = fVar15;
          fVar13 = fVar13 - (fVar16 * fVar17 - fVar20 * fVar18);
          *(float *)(lVar10 + lVar6) = fVar13;
        }
        if (*(char *)(param_1 + 0x60) == '\x01') {
          fVar18 = *(float *)(param_1 + 0x6c) - *(float *)(lVar9 + lVar6);
          fVar19 = *(float *)(param_1 + 0x68) - *(float *)(lVar9 + -4 + lVar6);
          fVar16 = *(float *)(param_1 + 100) - *(float *)(lVar9 + -8 + lVar6);
          fVar17 = fVar18 * fVar18 + fVar16 * fVar16 + fVar19 * fVar19;
          if (1e-08 < fVar17) {
            fVar17 = 1.0 / SQRT(fVar17);
            fVar20 = ABS(fVar17 * fVar18 * *(float *)(lVar7 + lVar6) +
                         fVar16 * fVar17 * *(float *)(lVar7 + -8 + lVar6) +
                         fVar19 * fVar17 * *(float *)(lVar7 + -4 + lVar6)) *
                     *(float *)(param_1 + 0x70);
            fVar17 = 1.0;
            if (fVar20 <= 1.0) {
              fVar17 = fVar20;
            }
            *(float *)(lVar10 + -8 + lVar6) = fVar14 + fVar17 * fVar16;
            *(float *)(lVar10 + -4 + lVar6) = fVar15 + fVar19 * fVar17;
            *(float *)(lVar10 + lVar6) = fVar13 + fVar18 * fVar17;
          }
        }
      }
      lVar11 = lVar11 + 1;
      lVar7 = lVar7 + 0xc;
      lVar9 = lVar9 + 0xc;
      lVar8 = lVar8 + 0xc;
      lVar10 = lVar10 + 0xc;
    } while (lVar11 < *(int *)(param_2 + 0x14));
  }
  return;
}



// FUNCTION 14462f99a FUN_14462f99a body=346 status=ok
// SIG undefined FUN_14462f99a(void)

void FUN_14462f99a(longlong *param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar8 = *(longlong *)(*param_1 + 0x1f8);
  if (*(int *)(lVar8 + 0x58) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)*(int *)(param_2 + 0x10) * 0x18 + *(longlong *)(lVar8 + 0x50);
  }
  if (*(int *)(lVar8 + 0x48) == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)*(int *)(param_2 + 0x10) * 0x18 + *(longlong *)(lVar8 + 0x40);
  }
  if ((lVar7 != 0 || lVar8 != 0) && (0 < *(int *)(param_2 + 0x14))) {
    iVar5 = *(int *)(param_2 + 0x10);
    lVar10 = (longlong)iVar5 * 0xc + *(longlong *)(*(longlong *)(param_2 + 8) + 0x60);
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x90);
    fVar1 = *param_3;
    lVar9 = 4;
    lVar11 = 0;
    do {
      fVar2 = *(float *)((longlong)iVar5 * 4 + lVar6 + lVar11 * 4);
      if ((fVar2 != 0.0) || (NAN(fVar2))) {
        if (lVar8 != 0) {
          dVar3 = *(double *)(lVar8 + lVar9 * 4);
          dVar4 = *(double *)(lVar8 + -8 + lVar9 * 4);
          *(float *)(lVar10 + -8 + lVar9 * 2) =
               (float)*(double *)(lVar8 + -0x10 + lVar9 * 4) * fVar2 +
               *(float *)(lVar10 + -8 + lVar9 * 2);
          *(float *)(lVar10 + -4 + lVar9 * 2) =
               (float)dVar4 * fVar2 + *(float *)(lVar10 + -4 + lVar9 * 2);
          *(float *)(lVar10 + lVar9 * 2) = (float)dVar3 * fVar2 + *(float *)(lVar10 + lVar9 * 2);
        }
        if (lVar7 != 0) {
          dVar3 = *(double *)(lVar7 + lVar9 * 4);
          dVar4 = *(double *)(lVar7 + -8 + lVar9 * 4);
          *(float *)(lVar10 + -8 + lVar9 * 2) =
               (float)*(double *)(lVar7 + -0x10 + lVar9 * 4) / fVar1 +
               *(float *)(lVar10 + -8 + lVar9 * 2);
          *(float *)(lVar10 + -4 + lVar9 * 2) =
               (float)dVar4 / fVar1 + *(float *)(lVar10 + -4 + lVar9 * 2);
          *(float *)(lVar10 + lVar9 * 2) = (float)dVar3 / fVar1 + *(float *)(lVar10 + lVar9 * 2);
        }
      }
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 6;
    } while (lVar11 < *(int *)(param_2 + 0x14));
  }
  return;
}



// FUNCTION 14462fb1e FUN_14462fb1e body=29 status=ok
// SIG undefined FUN_14462fb1e(void)

undefined8 FUN_14462fb1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14462fb3c FUN_14462fb3c body=1066 status=ok
// SIG undefined FUN_14462fb3c(void)

void FUN_14462fb3c(longlong param_1,float param_2,int param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(char *)(param_1 + 0x30) != '\x01') {
    fVar5 = (param_2 * 120.0) / (float)param_3;
    if (((*(float *)(param_1 + 0x78) != param_2) ||
        (NAN(*(float *)(param_1 + 0x78)) || NAN(param_2))) || (*(int *)(param_1 + 0x7c) != param_3))
    {
      *(float *)(param_1 + 0x78) = param_2;
      *(int *)(param_1 + 0x7c) = param_3;
LAB_14462fbf1:
      lVar2 = (longlong)*(int *)(param_1 + 0x58);
      fVar8 = 1.0;
      if (1 < lVar2) {
        fVar8 = 1.0 / (float)(*(int *)(param_1 + 0x58) + -1);
      }
      if (0 < lVar2) {
        fVar1 = *(float *)(param_1 + 0x60);
        fVar7 = *(float *)(param_1 + 100);
        lVar3 = 0;
        do {
          fVar4 = (float)(int)lVar3 * fVar8 * (fVar7 - fVar1) + fVar1;
          if (fVar4 <= 1e-08) {
            fVar6 = 0.0;
          }
          else {
            fVar6 = 1.0;
            if (fVar4 < 1.0) {
              fVar6 = *(float *)(param_1 + 0x70);
              fVar4 = expf(fVar4 * *(float *)(param_1 + 0x74));
              fVar4 = logf(1.0 - (fVar4 + -1.0) / (fVar6 + -1.0));
              fVar6 = expf(fVar4 * fVar5);
              fVar6 = 1.0 - fVar6;
            }
          }
          *(float *)(*(longlong *)(param_1 + 0x50) + lVar3 * 4) = fVar6;
          lVar3 = lVar3 + 1;
        } while (lVar2 != lVar3);
      }
      *(undefined1 *)(param_1 + 0x68) = 0;
    }
    else if ((*(byte *)(param_1 + 0x68) & 1) != 0) goto LAB_14462fbf1;
    if (((*(float *)(param_1 + 0xc0) != param_2) ||
        (NAN(*(float *)(param_1 + 0xc0)) || NAN(param_2))) || (*(int *)(param_1 + 0xc4) != param_3))
    {
      *(float *)(param_1 + 0xc0) = param_2;
      *(int *)(param_1 + 0xc4) = param_3;
    }
    else if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
      return;
    }
    lVar2 = (longlong)*(int *)(param_1 + 0xa0);
    fVar8 = 1.0;
    if (1 < lVar2) {
      fVar8 = 1.0 / (float)(*(int *)(param_1 + 0xa0) + -1);
    }
    if (0 < lVar2) {
      fVar1 = *(float *)(param_1 + 0xa8);
      fVar7 = *(float *)(param_1 + 0xac);
      lVar3 = 0;
      do {
        fVar4 = (float)(int)lVar3 * fVar8 * (fVar7 - fVar1) + fVar1;
        if (fVar4 <= 1e-08) {
          fVar6 = 0.0;
        }
        else {
          fVar6 = 1.0;
          if (fVar4 < 1.0) {
            fVar6 = *(float *)(param_1 + 0xb8);
            fVar4 = expf(fVar4 * *(float *)(param_1 + 0xbc));
            fVar4 = logf(1.0 - (fVar4 + -1.0) / (fVar6 + -1.0));
            fVar6 = expf(fVar4 * fVar5);
            fVar6 = 1.0 - fVar6;
          }
        }
        *(float *)(*(longlong *)(param_1 + 0x98) + lVar3 * 4) = fVar6;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    goto LAB_14462ff11;
  }
  if ((*(float *)(param_1 + 0x78) != 1e+09) || (NAN(*(float *)(param_1 + 0x78)))) {
    *(undefined4 *)(param_1 + 0x78) = 0x4e6e6b28;
LAB_14462fe01:
    lVar2 = (longlong)*(int *)(param_1 + 0x58);
    fVar5 = 1.0;
    if (1 < lVar2) {
      fVar5 = 1.0 / (float)(*(int *)(param_1 + 0x58) + -1);
    }
    if (0 < lVar2) {
      fVar8 = *(float *)(param_1 + 0x60);
      fVar1 = *(float *)(param_1 + 100);
      lVar3 = 0;
      do {
        fVar7 = (float)(int)lVar3 * fVar5 * (fVar1 - fVar8) + fVar8;
        if (1e+09 <= fVar7) {
          fVar7 = 1e+09;
        }
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        *(float *)(*(longlong *)(param_1 + 0x50) + lVar3 * 4) = fVar7;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  else if ((*(byte *)(param_1 + 0x68) & 1) != 0) goto LAB_14462fe01;
  if ((*(float *)(param_1 + 0xc0) != 1e+09) || (NAN(*(float *)(param_1 + 0xc0)))) {
    *(undefined4 *)(param_1 + 0xc0) = 0x4e6e6b28;
  }
  else if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    return;
  }
  lVar2 = (longlong)*(int *)(param_1 + 0xa0);
  fVar5 = 1.0;
  if (1 < lVar2) {
    fVar5 = 1.0 / (float)(*(int *)(param_1 + 0xa0) + -1);
  }
  if (0 < lVar2) {
    fVar8 = *(float *)(param_1 + 0xa8);
    fVar1 = *(float *)(param_1 + 0xac);
    lVar3 = 0;
    do {
      fVar7 = (float)(int)lVar3 * fVar5 * (fVar1 - fVar8) + fVar8;
      if (1e+09 <= fVar7) {
        fVar7 = 1e+09;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      *(float *)(*(longlong *)(param_1 + 0x98) + lVar3 * 4) = fVar7;
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
  }
LAB_14462ff11:
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}



// FUNCTION 14462ff66 FUN_14462ff66 body=421 status=ok
// SIG undefined FUN_14462ff66(void)

void FUN_14462ff66(longlong param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (((*(float *)(param_1 + 0x40) != param_2) || (NAN(*(float *)(param_1 + 0x40)) || NAN(param_2)))
     || (*(int *)(param_1 + 0x44) != param_3)) {
    *(float *)(param_1 + 0x40) = param_2;
    *(int *)(param_1 + 0x44) = param_3;
  }
  else if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    return;
  }
  lVar4 = (longlong)*(int *)(param_1 + 0x20);
  fVar7 = 1.0;
  if (1 < lVar4) {
    fVar7 = 1.0 / (float)(*(int *)(param_1 + 0x20) + -1);
  }
  if (0 < lVar4) {
    fVar1 = *(float *)(param_1 + 0x28);
    fVar2 = *(float *)(param_1 + 0x2c);
    lVar3 = 0;
    do {
      fVar5 = (float)(int)lVar3 * fVar7 * (fVar2 - fVar1) + fVar1;
      if (fVar5 <= 1e-08) {
        fVar6 = 0.0;
      }
      else {
        fVar6 = 1.0;
        if (fVar5 < 1.0) {
          fVar6 = *(float *)(param_1 + 0x38);
          fVar5 = expf(fVar5 * *(float *)(param_1 + 0x3c));
          fVar5 = logf(1.0 - (fVar5 + -1.0) / (fVar6 + -1.0));
          fVar6 = expf(fVar5 * ((param_2 * 120.0) / (float)param_3));
          fVar6 = 1.0 - fVar6;
        }
      }
      *(float *)(*(longlong *)(param_1 + 0x18) + lVar3 * 4) = fVar6;
      lVar3 = lVar3 + 1;
    } while (lVar4 != lVar3);
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 144630158 FUN_144630158 body=83 status=ok
// SIG undefined FUN_144630158(void)

undefined8 * FUN_144630158(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14be85e70;
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446301ac FUN_1446301ac body=840 status=ok
// SIG undefined FUN_1446301ac(void)

void FUN_1446301ac(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  if ((*(float *)(param_1 + 0x60) != 1e+07) || (NAN(*(float *)(param_1 + 0x60)))) {
    *(undefined4 *)(param_1 + 0x60) = 0x4b189680;
LAB_1446301cb:
    lVar3 = (longlong)*(int *)(param_1 + 0x40);
    fVar5 = 1.0;
    if (1 < lVar3) {
      fVar5 = 1.0 / (float)(*(int *)(param_1 + 0x40) + -1);
    }
    if (0 < lVar3) {
      fVar1 = *(float *)(param_1 + 0x48);
      fVar2 = *(float *)(param_1 + 0x4c);
      lVar4 = 0;
      do {
        fVar6 = (float)(int)lVar4 * fVar5 * (fVar2 - fVar1) + fVar1;
        if (1e+07 <= fVar6) {
          fVar6 = 1e+07;
        }
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        *(float *)(*(longlong *)(param_1 + 0x38) + lVar4 * 4) = fVar6;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  else if ((*(byte *)(param_1 + 0x50) & 1) != 0) goto LAB_1446301cb;
  if ((*(float *)(param_1 + 0xa8) != 1e+07) || (NAN(*(float *)(param_1 + 0xa8)))) {
    *(undefined4 *)(param_1 + 0xa8) = 0x4b189680;
LAB_144630265:
    lVar3 = (longlong)*(int *)(param_1 + 0x88);
    fVar5 = 1.0;
    if (1 < lVar3) {
      fVar5 = 1.0 / (float)(*(int *)(param_1 + 0x88) + -1);
    }
    if (0 < lVar3) {
      fVar1 = *(float *)(param_1 + 0x90);
      fVar2 = *(float *)(param_1 + 0x94);
      lVar4 = 0;
      do {
        fVar6 = (float)(int)lVar4 * fVar5 * (fVar2 - fVar1) + fVar1;
        if (1e+07 <= fVar6) {
          fVar6 = 1e+07;
        }
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        *(float *)(*(longlong *)(param_1 + 0x80) + lVar4 * 4) = fVar6;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  else if ((*(byte *)(param_1 + 0x98) & 1) != 0) goto LAB_144630265;
  if ((*(float *)(param_1 + 0xf0) != 1e+07) || (NAN(*(float *)(param_1 + 0xf0)))) {
    *(undefined4 *)(param_1 + 0xf0) = 0x4b189680;
  }
  else if ((*(byte *)(param_1 + 0xe0) & 1) == 0) goto LAB_144630391;
  lVar3 = (longlong)*(int *)(param_1 + 0xd0);
  fVar5 = 1.0;
  if (1 < lVar3) {
    fVar5 = 1.0 / (float)(*(int *)(param_1 + 0xd0) + -1);
  }
  if (0 < lVar3) {
    fVar1 = *(float *)(param_1 + 0xd8);
    fVar2 = *(float *)(param_1 + 0xdc);
    lVar4 = 0;
    do {
      fVar6 = (float)(int)lVar4 * fVar5 * (fVar2 - fVar1) + fVar1;
      if (1e+07 <= fVar6) {
        fVar6 = 1e+07;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      *(float *)(*(longlong *)(param_1 + 200) + lVar4 * 4) = fVar6;
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  *(undefined1 *)(param_1 + 0xe0) = 0;
LAB_144630391:
  if (*(char *)(param_1 + 0x128) == '\x01') {
    lVar3 = (longlong)*(int *)(param_1 + 0x118);
    fVar5 = 1.0;
    if (1 < lVar3) {
      fVar5 = 1.0 / (float)(*(int *)(param_1 + 0x118) + -1);
    }
    if (0 < lVar3) {
      fVar1 = *(float *)(param_1 + 0x120);
      fVar2 = *(float *)(param_1 + 0x124);
      lVar4 = 0;
      do {
        *(float *)(*(longlong *)(param_1 + 0x110) + lVar4 * 4) =
             (float)(int)lVar4 * fVar5 * (fVar2 - fVar1) + fVar1;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined1 *)(param_1 + 0x128) = 0;
  }
  if (*(char *)(param_1 + 0x160) == '\x01') {
    lVar3 = (longlong)*(int *)(param_1 + 0x150);
    fVar5 = 1.0;
    if (1 < lVar3) {
      fVar5 = 1.0 / (float)(*(int *)(param_1 + 0x150) + -1);
    }
    if (0 < lVar3) {
      fVar1 = *(float *)(param_1 + 0x158);
      fVar2 = *(float *)(param_1 + 0x15c);
      lVar4 = 0;
      do {
        *(float *)(*(longlong *)(param_1 + 0x148) + lVar4 * 4) =
             (float)(int)lVar4 * fVar5 * (fVar2 - fVar1) + fVar1;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined1 *)(param_1 + 0x160) = 0;
  }
  if (*(char *)(param_1 + 0x198) == '\x01') {
    lVar3 = (longlong)*(int *)(param_1 + 0x188);
    fVar5 = 1.0;
    if (1 < lVar3) {
      fVar5 = 1.0 / (float)(*(int *)(param_1 + 0x188) + -1);
    }
    if (0 < lVar3) {
      fVar1 = *(float *)(param_1 + 400);
      fVar2 = *(float *)(param_1 + 0x194);
      lVar4 = 0;
      do {
        *(float *)(*(longlong *)(param_1 + 0x180) + lVar4 * 4) =
             (float)(int)lVar4 * fVar5 * (fVar2 - fVar1) + fVar1;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined1 *)(param_1 + 0x198) = 0;
  }
  return;
}



// FUNCTION 1446304f4 FUN_1446304f4 body=46 status=ok
// SIG undefined FUN_1446304f4(void)

void FUN_1446304f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  FUN_144630522(*param_1);
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_1497ff64e(*param_1);
  return;
}



// FUNCTION 144630522 FUN_144630522 body=260 status=ok
// SIG undefined FUN_144630522(void)

void FUN_144630522(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  if ((*(float *)(param_1 + 0x70) != 1e+09) || (NAN(*(float *)(param_1 + 0x70)))) {
    *(undefined4 *)(param_1 + 0x70) = 0x4e6e6b28;
  }
  else if ((*(byte *)(param_1 + 0x60) & 1) == 0) goto LAB_1446305af;
  lVar3 = (longlong)*(int *)(param_1 + 0x50);
  fVar5 = 1.0;
  if (1 < lVar3) {
    fVar5 = 1.0 / (float)(*(int *)(param_1 + 0x50) + -1);
  }
  if (0 < lVar3) {
    fVar1 = *(float *)(param_1 + 0x58);
    fVar2 = *(float *)(param_1 + 0x5c);
    lVar4 = 0;
    do {
      fVar6 = (float)(int)lVar4 * fVar5 * (fVar2 - fVar1) + fVar1;
      if (1e+09 <= fVar6) {
        fVar6 = 1e+09;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      *(float *)(*(longlong *)(param_1 + 0x48) + lVar4 * 4) = fVar6;
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
LAB_1446305af:
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    lVar3 = (longlong)*(int *)(param_1 + 0x98);
    fVar5 = 1.0;
    if (1 < lVar3) {
      fVar5 = 1.0 / (float)(*(int *)(param_1 + 0x98) + -1);
    }
    if (0 < lVar3) {
      fVar1 = *(float *)(param_1 + 0xa0);
      fVar2 = *(float *)(param_1 + 0xa4);
      lVar4 = 0;
      do {
        *(float *)(*(longlong *)(param_1 + 0x90) + lVar4 * 4) =
             (float)(int)lVar4 * fVar5 * (fVar2 - fVar1) + fVar1;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 144630626 FUN_144630626 body=285 status=ok
// SIG undefined FUN_144630626(void)

void FUN_144630626(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0x168) == '\x01') {
    lVar3 = (longlong)*(int *)(param_1 + 0x158);
    fVar5 = 1.0;
    if (1 < lVar3) {
      fVar5 = 1.0 / (float)(*(int *)(param_1 + 0x158) + -1);
    }
    if (0 < lVar3) {
      fVar1 = *(float *)(param_1 + 0x160);
      fVar2 = *(float *)(param_1 + 0x164);
      lVar4 = 0;
      do {
        *(float *)(*(longlong *)(param_1 + 0x150) + lVar4 * 4) =
             (float)(int)lVar4 * fVar5 * (fVar2 - fVar1) + fVar1;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined1 *)(param_1 + 0x168) = 0;
  }
  if (*(char *)(param_1 + 0x1a0) == '\x01') {
    lVar3 = (longlong)*(int *)(param_1 + 400);
    fVar5 = 1.0;
    if (1 < lVar3) {
      fVar5 = 1.0 / (float)(*(int *)(param_1 + 400) + -1);
    }
    if (0 < lVar3) {
      fVar1 = *(float *)(param_1 + 0x198);
      fVar2 = *(float *)(param_1 + 0x19c);
      lVar4 = 0;
      do {
        *(float *)(*(longlong *)(param_1 + 0x188) + lVar4 * 4) =
             (float)(int)lVar4 * fVar5 * (fVar2 - fVar1) + fVar1;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined1 *)(param_1 + 0x1a0) = 0;
  }
  FUN_1429f2da7(param_1 + 0x1c8,param_1 + 0x1e8,param_1 + 0x138,param_1 + 0x170,param_1 + 0x18);
  return;
}



// FUNCTION 144630744 FUN_144630744 body=285 status=ok
// SIG undefined FUN_144630744(void)

void FUN_144630744(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0x178) == '\x01') {
    lVar3 = (longlong)*(int *)(param_1 + 0x168);
    fVar5 = 1.0;
    if (1 < lVar3) {
      fVar5 = 1.0 / (float)(*(int *)(param_1 + 0x168) + -1);
    }
    if (0 < lVar3) {
      fVar1 = *(float *)(param_1 + 0x170);
      fVar2 = *(float *)(param_1 + 0x174);
      lVar4 = 0;
      do {
        *(float *)(*(longlong *)(param_1 + 0x160) + lVar4 * 4) =
             (float)(int)lVar4 * fVar5 * (fVar2 - fVar1) + fVar1;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined1 *)(param_1 + 0x178) = 0;
  }
  if (*(char *)(param_1 + 0x1b0) == '\x01') {
    lVar3 = (longlong)*(int *)(param_1 + 0x1a0);
    fVar5 = 1.0;
    if (1 < lVar3) {
      fVar5 = 1.0 / (float)(*(int *)(param_1 + 0x1a0) + -1);
    }
    if (0 < lVar3) {
      fVar1 = *(float *)(param_1 + 0x1a8);
      fVar2 = *(float *)(param_1 + 0x1ac);
      lVar4 = 0;
      do {
        *(float *)(*(longlong *)(param_1 + 0x198) + lVar4 * 4) =
             (float)(int)lVar4 * fVar5 * (fVar2 - fVar1) + fVar1;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined1 *)(param_1 + 0x1b0) = 0;
  }
  FUN_1429f2da7(param_1 + 0x1d8,param_1 + 0x1f8,param_1 + 0x148,param_1 + 0x180,param_1 + 0x30);
  return;
}



// FUNCTION 144630862 FUN_144630862 body=73 status=ok
// SIG undefined FUN_144630862(void)

void FUN_144630862(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = *param_3;
  lVar2 = *param_1;
  FUN_1429f2e8c(*(undefined8 *)(lVar2 + 0x40),param_2,uVar1);
  FUN_1429f3468(*(longlong *)(lVar2 + 0x40) + 0x208,param_2,uVar1,param_4);
  return;
}



// FUNCTION 1446308d6 FUN_1446308d6 body=29 status=ok
// SIG undefined FUN_1446308d6(void)

undefined8 FUN_1446308d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446308f4 FUN_1446308f4 body=46 status=ok
// SIG undefined FUN_1446308f4(void)

void FUN_1446308f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  FUN_144630522(*param_1);
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_1497ff64e(*param_1);
  return;
}



// FUNCTION 144630922 FUN_144630922 body=68 status=ok
// SIG undefined FUN_144630922(void)

void FUN_144630922(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  FUN_144630966(*param_1,*param_3,*(undefined4 *)(param_1[1] + 0xc));
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_1429b9056(*param_1,param_2);
  return;
}



// FUNCTION 144630966 FUN_144630966 body=864 status=ok
// SIG undefined FUN_144630966(void)

void FUN_144630966(longlong param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = (param_2 * 120.0) / (float)param_3;
  if (((*(float *)(param_1 + 0x70) != param_2) || (NAN(*(float *)(param_1 + 0x70)) || NAN(param_2)))
     || (*(int *)(param_1 + 0x74) != param_3)) {
    *(float *)(param_1 + 0x70) = param_2;
    *(int *)(param_1 + 0x74) = param_3;
  }
  else if ((*(byte *)(param_1 + 0x60) & 1) == 0) goto LAB_144630adb;
  lVar3 = (longlong)*(int *)(param_1 + 0x50);
  fVar5 = 1.0;
  if (1 < lVar3) {
    fVar5 = 1.0 / (float)(*(int *)(param_1 + 0x50) + -1);
  }
  if (0 < lVar3) {
    fVar1 = *(float *)(param_1 + 0x58);
    fVar2 = *(float *)(param_1 + 0x5c);
    lVar4 = 0;
    do {
      fVar6 = (float)(int)lVar4 * fVar5 * (fVar2 - fVar1) + fVar1;
      if (fVar6 <= 1e-08) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = 1.0;
        if (fVar6 < 1.0) {
          fVar7 = *(float *)(param_1 + 0x68);
          fVar6 = expf(fVar6 * *(float *)(param_1 + 0x6c));
          fVar6 = logf(1.0 - (fVar6 + -1.0) / (fVar7 + -1.0));
          fVar7 = expf(fVar6 * fVar8);
          fVar7 = 1.0 - fVar7;
        }
      }
      *(float *)(*(longlong *)(param_1 + 0x48) + lVar4 * 4) = fVar7;
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
LAB_144630adb:
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    lVar3 = (longlong)*(int *)(param_1 + 0x98);
    fVar5 = 1.0;
    if (1 < lVar3) {
      fVar5 = 1.0 / (float)(*(int *)(param_1 + 0x98) + -1);
    }
    if (0 < lVar3) {
      fVar1 = *(float *)(param_1 + 0xa0);
      fVar2 = *(float *)(param_1 + 0xa4);
      lVar4 = 0;
      do {
        *(float *)(*(longlong *)(param_1 + 0x90) + lVar4 * 4) =
             (float)(int)lVar4 * fVar5 * (fVar2 - fVar1) + fVar1;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  if (((*(float *)(param_1 + 0xf0) != param_2) || (NAN(*(float *)(param_1 + 0xf0)) || NAN(param_2)))
     || (*(int *)(param_1 + 0xf4) != param_3)) {
    *(float *)(param_1 + 0xf0) = param_2;
    *(int *)(param_1 + 0xf4) = param_3;
  }
  else if ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
    return;
  }
  lVar3 = (longlong)*(int *)(param_1 + 0xd0);
  fVar5 = 1.0;
  if (1 < lVar3) {
    fVar5 = 1.0 / (float)(*(int *)(param_1 + 0xd0) + -1);
  }
  if (0 < lVar3) {
    fVar1 = *(float *)(param_1 + 0xd8);
    fVar2 = *(float *)(param_1 + 0xdc);
    lVar4 = 0;
    do {
      fVar6 = (float)(int)lVar4 * fVar5 * (fVar2 - fVar1) + fVar1;
      if (fVar6 <= 1e-08) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = 1.0;
        if (fVar6 < 1.0) {
          fVar7 = *(float *)(param_1 + 0xe8);
          fVar6 = expf(fVar6 * *(float *)(param_1 + 0xec));
          fVar6 = logf(1.0 - (fVar6 + -1.0) / (fVar7 + -1.0));
          fVar7 = expf(fVar6 * fVar8);
          fVar7 = 1.0 - fVar7;
        }
      }
      *(float *)(*(longlong *)(param_1 + 200) + lVar4 * 4) = fVar7;
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  *(undefined1 *)(param_1 + 0xe0) = 0;
  return;
}



// FUNCTION 144630ea6 FUN_144630ea6 body=1265 status=ok
// SIG undefined FUN_144630ea6(void)

void FUN_144630ea6(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  float local_c0;
  float local_ac;
  float local_a8;
  float local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(int *)(param_1 + 0x60) < 2) ||
     (ABS(*(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x6c)) <= 0.0001)) {
    fVar12 = **(float **)(param_1 + 0x58);
    if ((0.0001 <= fVar12) && (0 < *(int *)(param_1 + 0x10))) {
      lVar8 = 2;
      lVar9 = 0;
      do {
        lVar4 = *(longlong *)(param_1 + 8);
        iVar1 = *(int *)(lVar4 + -8 + lVar8 * 4);
        iVar2 = *(int *)(lVar4 + -4 + lVar8 * 4);
        iVar3 = *(int *)(lVar4 + lVar8 * 4);
        local_c8 = (undefined4)lVar9;
        local_c0 = fVar12;
        FUN_1497ffd58(param_1,&local_ac,param_2,param_3);
        fVar10 = *(float *)(*(longlong *)(param_1 + 0x20) + lVar9 * 4);
        if (fVar10 <= 1.0 - fVar10) {
          fVar10 = 1.0 - fVar10;
        }
        fVar11 = 2.0 / (fVar10 + 1.0);
        lVar4 = *(longlong *)(param_2 + 8);
        iVar5 = *(int *)(param_2 + 0x10);
        lVar7 = (longlong)iVar1 + (longlong)iVar5;
        lVar6 = *(longlong *)(lVar4 + 0x90);
        fVar10 = *(float *)(lVar6 + lVar7 * 4);
        if (0.0 < fVar10) {
          fVar10 = fVar10 * fVar11;
          lVar4 = *(longlong *)(lVar4 + 0xa8);
          lVar7 = lVar7 * 0x10;
          *(float *)(lVar4 + lVar7) = *(float *)(lVar4 + lVar7) - local_ac * fVar10;
          *(float *)(lVar4 + 4 + lVar7) = *(float *)(lVar4 + 4 + lVar7) - local_a8 * fVar10;
          *(float *)(lVar4 + 8 + lVar7) = *(float *)(lVar4 + 8 + lVar7) - fVar10 * local_a4;
          lVar4 = *(longlong *)(param_2 + 8);
          iVar5 = *(int *)(param_2 + 0x10);
          lVar6 = *(longlong *)(lVar4 + 0x90);
        }
        lVar7 = (longlong)iVar5 + (longlong)iVar2;
        fVar10 = *(float *)(lVar6 + lVar7 * 4);
        if ((fVar10 != 0.0) || (NAN(fVar10))) {
          fVar10 = fVar10 * fVar11 * *(float *)(*(longlong *)(param_1 + 0x20) + lVar9 * 4);
          lVar4 = *(longlong *)(lVar4 + 0xa8);
          lVar7 = lVar7 * 0x10;
          *(float *)(lVar4 + lVar7) = local_ac * fVar10 + *(float *)(lVar4 + lVar7);
          *(float *)(lVar4 + 4 + lVar7) = local_a8 * fVar10 + *(float *)(lVar4 + 4 + lVar7);
          *(float *)(lVar4 + 8 + lVar7) = fVar10 * local_a4 + *(float *)(lVar4 + 8 + lVar7);
          lVar4 = *(longlong *)(param_2 + 8);
          iVar5 = *(int *)(param_2 + 0x10);
          lVar6 = *(longlong *)(lVar4 + 0x90);
        }
        lVar7 = (longlong)iVar5 + (longlong)iVar3;
        fVar10 = *(float *)(lVar6 + lVar7 * 4);
        if ((fVar10 != 0.0) || (NAN(fVar10))) {
          fVar10 = (1.0 - *(float *)(*(longlong *)(param_1 + 0x20) + lVar9 * 4)) * fVar11 * fVar10;
          lVar4 = *(longlong *)(lVar4 + 0xa8);
          lVar7 = lVar7 * 0x10;
          *(float *)(lVar4 + lVar7) = local_ac * fVar10 + *(float *)(lVar4 + lVar7);
          *(float *)(lVar4 + 4 + lVar7) = local_a8 * fVar10 + *(float *)(lVar4 + 4 + lVar7);
          *(float *)(lVar4 + 8 + lVar7) = fVar10 * local_a4 + *(float *)(lVar4 + 8 + lVar7);
        }
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 3;
      } while (lVar9 < *(int *)(param_1 + 0x10));
    }
  }
  else if (0 < *(int *)(param_1 + 0x10)) {
    lVar8 = 2;
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 8);
      local_c0 = *(float *)(*(longlong *)(param_1 + 0x58) +
                           (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x48) + lVar9) * 4);
      iVar1 = *(int *)(lVar4 + -8 + lVar8 * 4);
      iVar2 = *(int *)(lVar4 + -4 + lVar8 * 4);
      iVar3 = *(int *)(lVar4 + lVar8 * 4);
      local_c8 = (undefined4)lVar9;
      FUN_1497ffd58(param_1,&local_ac,param_2,param_3);
      fVar12 = *(float *)(*(longlong *)(param_1 + 0x20) + lVar9 * 4);
      if (fVar12 <= 1.0 - fVar12) {
        fVar12 = 1.0 - fVar12;
      }
      fVar10 = 2.0 / (fVar12 + 1.0);
      lVar4 = *(longlong *)(param_2 + 8);
      iVar5 = *(int *)(param_2 + 0x10);
      lVar7 = (longlong)iVar1 + (longlong)iVar5;
      lVar6 = *(longlong *)(lVar4 + 0x90);
      fVar12 = *(float *)(lVar6 + lVar7 * 4);
      if (0.0 < fVar12) {
        fVar12 = fVar12 * fVar10;
        lVar4 = *(longlong *)(lVar4 + 0xa8);
        lVar7 = lVar7 * 0x10;
        *(float *)(lVar4 + lVar7) = *(float *)(lVar4 + lVar7) - local_ac * fVar12;
        *(float *)(lVar4 + 4 + lVar7) = *(float *)(lVar4 + 4 + lVar7) - local_a8 * fVar12;
        *(float *)(lVar4 + 8 + lVar7) = *(float *)(lVar4 + 8 + lVar7) - fVar12 * local_a4;
        lVar4 = *(longlong *)(param_2 + 8);
        iVar5 = *(int *)(param_2 + 0x10);
        lVar6 = *(longlong *)(lVar4 + 0x90);
      }
      lVar7 = (longlong)iVar5 + (longlong)iVar2;
      fVar12 = *(float *)(lVar6 + lVar7 * 4);
      if ((fVar12 != 0.0) || (NAN(fVar12))) {
        fVar12 = fVar12 * fVar10 * *(float *)(*(longlong *)(param_1 + 0x20) + lVar9 * 4);
        lVar4 = *(longlong *)(lVar4 + 0xa8);
        lVar7 = lVar7 * 0x10;
        *(float *)(lVar4 + lVar7) = local_ac * fVar12 + *(float *)(lVar4 + lVar7);
        *(float *)(lVar4 + 4 + lVar7) = local_a8 * fVar12 + *(float *)(lVar4 + 4 + lVar7);
        *(float *)(lVar4 + 8 + lVar7) = fVar12 * local_a4 + *(float *)(lVar4 + 8 + lVar7);
        lVar4 = *(longlong *)(param_2 + 8);
        iVar5 = *(int *)(param_2 + 0x10);
        lVar6 = *(longlong *)(lVar4 + 0x90);
      }
      lVar7 = (longlong)iVar5 + (longlong)iVar3;
      fVar12 = *(float *)(lVar6 + lVar7 * 4);
      if ((fVar12 != 0.0) || (NAN(fVar12))) {
        fVar12 = (1.0 - *(float *)(*(longlong *)(param_1 + 0x20) + lVar9 * 4)) * fVar10 * fVar12;
        lVar4 = *(longlong *)(lVar4 + 0xa8);
        lVar7 = lVar7 * 0x10;
        *(float *)(lVar4 + lVar7) = local_ac * fVar12 + *(float *)(lVar4 + lVar7);
        *(float *)(lVar4 + 4 + lVar7) = local_a8 * fVar12 + *(float *)(lVar4 + 4 + lVar7);
        *(float *)(lVar4 + 8 + lVar7) = fVar12 * local_a4 + *(float *)(lVar4 + 8 + lVar7);
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 3;
    } while (lVar9 < *(int *)(param_1 + 0x10));
  }
  if ((local_a0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446313b6 FUN_1446313b6 body=749 status=ok
// SIG undefined FUN_1446313b6(void)

void FUN_1446313b6(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  longlong local_b0;
  undefined4 *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 **local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 **local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 **local_48;
  undefined8 local_40;
  undefined8 **local_38;
  longlong local_30;
  undefined4 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined1 local_c [12];
  
  local_c._4_8_ = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(int *)(param_1 + 7) < 2) ||
     (ABS(*(float *)(param_1 + 8) - *(float *)((longlong)param_1 + 0x44)) <= 0.0001)) {
    local_54 = *(undefined4 *)param_1[6];
    if ((*(int *)(param_1 + 0x10) < 2) ||
       (ABS(*(float *)(param_1 + 0x11) - *(float *)((longlong)param_1 + 0x8c)) <= 0.0001)) {
      local_6c = *(undefined4 *)param_1[0xf];
      local_a0 = (longlong *)&local_6c;
      local_18 = *(undefined4 *)(param_2 + 0x14);
      local_30 = (longlong)*(int *)(param_2 + 0x10) * 0xc;
      local_20 = *(longlong *)*param_1 + local_30;
      local_90 = &local_20;
      local_30 = local_30 + *(longlong *)param_1[1];
      local_88 = &local_30;
      local_78 = &local_b8;
      local_a8 = &local_54;
      local_98 = (longlong *)local_c;
      puVar2 = &local_80;
      pcVar1 = FUN_1498004f2;
    }
    else {
      local_18 = *(undefined4 *)(param_2 + 0x14);
      local_30 = (longlong)*(int *)(param_2 + 0x10) * 0xc;
      local_20 = *(longlong *)*param_1 + local_30;
      local_98 = &local_20;
      local_30 = local_30 + *(longlong *)param_1[1];
      local_90 = &local_30;
      local_60 = &local_b8;
      local_a8 = &local_54;
      local_a0 = (longlong *)local_c;
      puVar2 = &local_68;
      pcVar1 = (code *)&LAB_149800478;
    }
  }
  else if ((*(int *)(param_1 + 0x10) < 2) ||
          (ABS(*(float *)(param_1 + 0x11) - *(float *)((longlong)param_1 + 0x8c)) <= 0.0001)) {
    local_18 = *(undefined4 *)(param_2 + 0x14);
    local_30 = (longlong)*(int *)(param_2 + 0x10) * 0xc;
    local_20 = *(longlong *)*param_1 + local_30;
    local_98 = &local_20;
    local_30 = local_30 + *(longlong *)param_1[1];
    local_90 = &local_30;
    local_48 = &local_b8;
    local_a8 = (undefined4 *)CONCAT44(local_a8._4_4_,*(undefined4 *)param_1[0xf]);
    local_a0 = (longlong *)local_c;
    puVar2 = &local_50;
    pcVar1 = FUN_14980040a;
  }
  else {
    local_18 = *(undefined4 *)(param_2 + 0x14);
    local_30 = (longlong)*(int *)(param_2 + 0x10) * 0xc;
    local_20 = *(longlong *)*param_1 + local_30;
    local_a0 = &local_20;
    local_30 = local_30 + *(longlong *)param_1[1];
    local_98 = &local_30;
    local_38 = &local_b8;
    local_a8 = (undefined4 *)local_c;
    puVar2 = &local_40;
    pcVar1 = (code *)&LAB_149800236;
  }
  *puVar2 = pcVar1;
  local_b8 = param_1;
  local_b0 = param_2;
  local_28 = local_18;
  local_c._0_4_ = param_3;
  FUN_1400bd65e(*(undefined4 *)((longlong)param_1 + 0x14),puVar2,0);
  if ((local_c._4_8_ ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446316a4 FUN_1446316a4 body=246 status=ok
// SIG undefined FUN_1446316a4(void)

void FUN_1446316a4(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 500) == '\0') {
    uVar1 = *param_3;
    FUN_1429d8c90(*(undefined8 *)(lVar2 + 0x100));
    lVar3 = *(longlong *)(lVar2 + 0x100);
    local_50 = lVar3 + 0x4d0;
    if ((*(char *)(lVar3 + 0x2e9) == '\x01') && (*(int *)(lVar3 + 0x4c8) == *(int *)(lVar3 + 0x2e4))
       ) {
      local_38 = *(int *)(lVar3 + 0x4c8) + *(int *)(lVar3 + 0x2e0);
      local_40 = *(longlong *)(lVar3 + 0x4c0) + (longlong)*(int *)(lVar3 + 0x2e0) * -8;
    }
    else {
      local_40 = 0;
      local_38 = 0;
    }
    local_58 = &local_40;
    local_60 = lVar3 + 0x428;
    local_68 = lVar3 + 0x3a0;
    FUN_1429bb4c2(*(undefined8 *)(lVar2 + 0x110),param_2,uVar1,lVar3 + 8);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446317c6 FUN_1446317c6 body=29 status=ok
// SIG undefined FUN_1446317c6(void)

undefined8 FUN_1446317c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144631828 FUN_144631828 body=29 status=ok
// SIG undefined FUN_144631828(void)

undefined8 FUN_144631828(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14463189c FUN_14463189c body=29 status=ok
// SIG undefined FUN_14463189c(void)

undefined8 FUN_14463189c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446318ba FUN_1446318ba body=119 status=ok
// SIG undefined FUN_1446318ba(void)

void FUN_1446318ba(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *param_1;
  if ((*(char *)(lVar2 + 500) == '\0') &&
     (iVar3 = *(int *)(*(longlong *)(lVar2 + 0x100) + 0x2ec), 0 < iVar3)) {
    uVar1 = *param_3;
    do {
      FUN_1429d963a(*(undefined8 *)(lVar2 + 0x100),param_2);
      FUN_1429e0942(*(undefined8 *)(lVar2 + 0x120),param_2,*(longlong *)(lVar2 + 0x100) + 0x508,
                    uVar1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 14463195c FUN_14463195c body=29 status=ok
// SIG undefined FUN_14463195c(void)

undefined8 FUN_14463195c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14463197a FUN_14463197a body=90 status=ok
// SIG undefined FUN_14463197a(void)

void FUN_14463197a(longlong *param_1,undefined8 param_2,undefined4 *param_3,byte *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if ((*param_4 & 1) == 0) {
    return;
  }
  uVar1 = *param_3;
  lVar2 = *param_1;
  FUN_140fb5a3a(*(undefined8 *)(lVar2 + 0xc0),uVar1,1);
  FUN_1429c0536(*(undefined8 *)(lVar2 + 0xc0),param_2,uVar1);
  return;
}



// FUNCTION 1446319fe FUN_1446319fe body=29 status=ok
// SIG undefined FUN_1446319fe(void)

undefined8 FUN_1446319fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144631a1c FUN_144631a1c body=31 status=ok
// SIG undefined FUN_144631a1c(void)

void FUN_144631a1c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1497ff52c(*(undefined8 *)(lVar1 + 0x30));
  FUN_1446301ac(*(undefined8 *)(lVar1 + 0x30));
  return;
}



// FUNCTION 144631a66 FUN_144631a66 body=29 status=ok
// SIG undefined FUN_144631a66(void)

undefined8 FUN_144631a66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144631ac0 FUN_144631ac0 body=29 status=ok
// SIG undefined FUN_144631ac0(void)

undefined8 FUN_144631ac0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144631ade FUN_144631ade body=31 status=ok
// SIG undefined FUN_144631ade(void)

void FUN_144631ade(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1497ff64e(*(undefined8 *)(lVar1 + 0x20));
  FUN_144630522(*(undefined8 *)(lVar1 + 0x20));
  return;
}



// FUNCTION 144631b28 FUN_144631b28 body=29 status=ok
// SIG undefined FUN_144631b28(void)

undefined8 FUN_144631b28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144631b82 FUN_144631b82 body=29 status=ok
// SIG undefined FUN_144631b82(void)

undefined8 FUN_144631b82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


