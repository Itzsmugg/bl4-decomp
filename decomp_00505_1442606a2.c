// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1442606a2 FUN_1442606a2 body=93 status=ok
// SIG undefined FUN_1442606a2(void)

void FUN_1442606a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b982300;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a8ad0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144260700 FUN_144260700 body=126 status=ok
// SIG undefined FUN_144260700(void)

void FUN_144260700(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b982300;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a8ad0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014426076f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144260788 FUN_144260788 body=278 status=ok
// SIG undefined FUN_144260788(void)

undefined8 FUN_144260788(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_144260898;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144260898;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144260898:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14426084b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1442608a0(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_14426084b;
    }
  }
  uVar6 = 0;
LAB_14426084b:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442608a0 FUN_1442608a0 body=307 status=ok
// SIG undefined FUN_1442608a0(void)

void FUN_1442608a0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = *param_1;
  if ((longlong)*(int *)(lVar6 + 0x60) != 0) {
    lVar7 = *(longlong *)(lVar6 + 0x58);
    lVar8 = (longlong)*(int *)(lVar6 + 0x60) * 0x88;
    do {
      cVar3 = FUN_14663cafe(lVar7,param_2);
      if (cVar3 != '\0') {
        *(undefined4 *)(lVar7 + 0x14) = *(undefined4 *)(param_2 + 0xef0);
        FUN_1402815f4(lVar6,&local_40);
        puVar2 = *(undefined8 **)(local_40 + 0x1e0);
        AcquireSRWLockExclusive((PSRWLOCK)(puVar2 + 6));
        *(int *)(puVar2 + 5) = *(int *)(puVar2 + 5) + 1;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_38 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar4 = (int *)((longlong)local_38 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*local_38 + 0x10))(local_38);
            }
          }
        }
        iVar5 = *(int *)(lVar7 + 0x10);
        piVar4 = (int *)*puVar2;
        *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + 2;
        if ((longlong)*(int *)(puVar2 + 1) == 0) goto LAB_1442609c7;
        lVar6 = (longlong)*(int *)(puVar2 + 1) * 0xd8;
        goto LAB_14426098f;
      }
      lVar7 = lVar7 + 0x88;
      lVar8 = lVar8 + -0x88;
    } while (lVar8 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    piVar4 = piVar4 + 0x36;
    lVar6 = lVar6 + -0xd8;
    if (lVar6 == 0) break;
LAB_14426098f:
    if (*piVar4 == iVar5) {
      if (piVar4 == (int *)0x0) break;
      if (*(int *)(lVar7 + 0x14) == piVar4[2]) {
        if (piVar4[3] != 0) break;
        iVar5 = 1;
      }
      else {
        iVar5 = piVar4[3] + 1;
      }
      piVar4[2] = *(int *)(lVar7 + 0x14);
      piVar4[3] = iVar5;
      break;
    }
  }
LAB_1442609c7:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1442609ea FUN_1442609ea body=29 status=ok
// SIG undefined FUN_1442609ea(void)

undefined8 FUN_1442609ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144260b86 FUN_144260b86 body=93 status=ok
// SIG undefined FUN_144260b86(void)

void FUN_144260b86(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8b40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144260be4 FUN_144260be4 body=93 status=ok
// SIG undefined FUN_144260be4(void)

void FUN_144260be4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8b40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144260c42 FUN_144260c42 body=126 status=ok
// SIG undefined FUN_144260c42(void)

void FUN_144260c42(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a8b40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144260cb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144260cca FUN_144260cca body=269 status=ok
// SIG undefined FUN_144260cca(void)

undefined8 FUN_144260cca(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144260dd1;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144260dd1;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144260dd1:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144260d85;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144260dd8(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_144260d85;
    }
  }
  uVar6 = 0;
LAB_144260d85:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144260dd8 FUN_144260dd8 body=174 status=ok
// SIG undefined FUN_144260dd8(void)

void FUN_144260dd8(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1 = (longlong *)*param_1;
  lVar2 = (longlong)(int)param_1[0xc];
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    lVar2 = lVar2 * 0x88;
    do {
      lVar2 = lVar2 + -0x88;
      cVar1 = FUN_148da9c56(param_1[0xb] + lVar2,0);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x2e0))(param_1);
      }
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  local_30 = &local_38;
  local_38 = 0;
  FUN_14602f172(param_1 + 0xf);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144260e88 FUN_144260e88 body=29 status=ok
// SIG undefined FUN_144260e88(void)

undefined8 FUN_144260e88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144261024 FUN_144261024 body=101 status=ok
// SIG undefined FUN_144261024(void)

void FUN_144261024(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8bb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14426108a FUN_14426108a body=101 status=ok
// SIG undefined FUN_14426108a(void)

void FUN_14426108a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8bb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442610f0 FUN_1442610f0 body=134 status=ok
// SIG undefined FUN_1442610f0(void)

void FUN_1442610f0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edb80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a8bb0;
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
                    /* WARNING: Could not recover jumptable at 0x000144261167. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144261176 FUN_144261176 body=63 status=ok
// SIG undefined FUN_144261176(void)

void FUN_144261176(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_1442612ce(param_1 + 0x20);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442611b6 FUN_1442611b6 body=279 status=ok
// SIG undefined FUN_1442611b6(void)

undefined8 FUN_1442611b6(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = param_3;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442612c7;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442612c7;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1442612c7:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14426127b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1442612ce(param_1 + 0x20,&local_29);
      uVar6 = 1;
      goto LAB_14426127b;
    }
  }
  uVar6 = 0;
LAB_14426127b:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442612ce FUN_1442612ce body=173 status=ok
// SIG undefined FUN_1442612ce(void)

void FUN_1442612ce(longlong *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 unaff_RBX;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  lVar4 = *param_1;
  iVar2 = *(int *)(lVar4 + 0x90);
  *(uint *)(lVar4 + 0x90) = iVar2 + 1U;
  if (*(uint *)(lVar4 + 0x94) < iVar2 + 1U) {
    FUN_145cb4378((longlong *)(lVar4 + 0x88),iVar2);
  }
  *(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)iVar2 * 8) = param_1[1];
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    uVar3 = *(uint *)(param_1 + 1);
    uVar6 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_144261351;
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((puVar5 != (undefined8 *)0x0) &&
       ((*(int *)(puVar5 + 2) == *(int *)((longlong)param_1 + 0xc) &&
        ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
      uVar6 = *puVar5;
      goto LAB_144261351;
    }
  }
  uVar6 = 0;
LAB_144261351:
  FUN_1418f4a96(lVar4,0,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar6);
  return;
}



// FUNCTION 14426137c FUN_14426137c body=29 status=ok
// SIG undefined FUN_14426137c(void)

undefined8 FUN_14426137c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144261518 FUN_144261518 body=101 status=ok
// SIG undefined FUN_144261518(void)

void FUN_144261518(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8c20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14426157e FUN_14426157e body=101 status=ok
// SIG undefined FUN_14426157e(void)

void FUN_14426157e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8c20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442615e4 FUN_1442615e4 body=134 status=ok
// SIG undefined FUN_1442615e4(void)

void FUN_1442615e4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b966850;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a8c20;
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
                    /* WARNING: Could not recover jumptable at 0x00014426165b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14426166a FUN_14426166a body=192 status=ok
// SIG undefined FUN_14426166a(void)

void FUN_14426166a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x20);
  local_38 = (uint *)(param_1 + 0x28);
  FUN_14141ae68(lVar2 + 0x88);
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x28);
    local_48 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1442616ef;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x2c) &&
        ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      local_48 = *puVar3;
      goto LAB_1442616ef;
    }
  }
  local_48 = 0;
LAB_1442616ef:
  FUN_1415af13c(lVar2,0,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14426172c FUN_14426172c body=416 status=ok
// SIG undefined FUN_14426172c(void)

undefined8 FUN_14426172c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442618c6;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442618c6;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
    puVar8 = local_48;
  }
  else {
LAB_1442618c6:
    puVar8 = (uint *)0x0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14426186f;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      lVar6 = *(longlong *)(param_1 + 0x20);
      local_48 = (uint *)(param_1 + 0x28);
      FUN_14141ae68(lVar6 + 0x88);
      if (*(int *)(param_1 + 0x2c) == 0) {
LAB_1442618ad:
        local_58 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x28);
        local_58 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar5 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((puVar5 == (undefined8 *)0x0) ||
             ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x2c) ||
              ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_1442618ad;
          local_58 = *puVar5;
        }
      }
      FUN_1415af13c(lVar6,0,param_3,param_4);
      uVar7 = 1;
      goto LAB_14426186f;
    }
  }
  uVar7 = 0;
LAB_14426186f:
  if ((puVar8 != (uint *)0x0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(puVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442618ce FUN_1442618ce body=29 status=ok
// SIG undefined FUN_1442618ce(void)

undefined8 FUN_1442618ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144261a6a FUN_144261a6a body=101 status=ok
// SIG undefined FUN_144261a6a(void)

void FUN_144261a6a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8c90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144261ad0 FUN_144261ad0 body=101 status=ok
// SIG undefined FUN_144261ad0(void)

void FUN_144261ad0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8c90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144261b36 FUN_144261b36 body=134 status=ok
// SIG undefined FUN_144261b36(void)

void FUN_144261b36(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b966850;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a8c90;
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
                    /* WARNING: Could not recover jumptable at 0x000144261bad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144261bbc FUN_144261bbc body=107 status=ok
// SIG undefined FUN_144261bbc(void)

void FUN_144261bbc(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x28);
    param_4 = (ulonglong)uVar1;
    uVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_144261c11;
    param_4 = (ulonglong)(uVar1 >> 0x10);
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + param_4 * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x2c) &&
        ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      uVar2 = *puVar3;
      goto LAB_144261c11;
    }
  }
  uVar2 = 0;
LAB_144261c11:
  FUN_1418f4c66(*(undefined8 *)(param_1 + 0x20),0,param_3,param_4,uVar2);
  return;
}



// FUNCTION 144261c28 FUN_144261c28 body=376 status=ok
// SIG undefined FUN_144261c28(void)

undefined8 FUN_144261c28(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144261d9a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144261d9a;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144261d9a:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144261d48;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      if (*(int *)(param_1 + 0x2c) == 0) {
LAB_144261d80:
        local_38 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x28);
        local_38 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar5 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((puVar5 == (undefined8 *)0x0) ||
             ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x2c) ||
              ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_144261d80;
          local_38 = *puVar5;
        }
      }
      FUN_1418f4c66(*(undefined8 *)(param_1 + 0x20),0,param_3);
      uVar6 = 1;
      goto LAB_144261d48;
    }
  }
  uVar6 = 0;
LAB_144261d48:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144261da2 FUN_144261da2 body=29 status=ok
// SIG undefined FUN_144261da2(void)

undefined8 FUN_144261da2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144261f3e FUN_144261f3e body=101 status=ok
// SIG undefined FUN_144261f3e(void)

void FUN_144261f3e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a8d00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 144261fa4 FUN_144261fa4 body=101 status=ok
// SIG undefined FUN_144261fa4(void)

void FUN_144261fa4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a8d00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14426200a FUN_14426200a body=134 status=ok
// SIG undefined FUN_14426200a(void)

void FUN_14426200a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edb80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a8d00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144262081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144262090 FUN_144262090 body=196 status=ok
// SIG undefined FUN_144262090(void)

void FUN_144262090(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_14426214b:
    uVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar2 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar3 == (undefined8 *)0x0) ||
         ((*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar3 + 1) & 0x10200000) != 0)))) goto LAB_14426214b;
      uVar2 = *puVar3;
    }
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x28);
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_144262139;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x2c) &&
        ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      uVar4 = *puVar3;
      goto LAB_144262139;
    }
  }
  uVar4 = 0;
LAB_144262139:
  FUN_146639170(*(undefined8 *)(param_1 + 0x20),0,param_3,uVar4,uVar2);
  return;
}



// FUNCTION 144262154 FUN_144262154 body=446 status=ok
// SIG undefined FUN_144262154(void)

undefined8 FUN_144262154(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14426230c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14426230c;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14426230c:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14426220e;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442622ed:
        local_38 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x30);
        local_38 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar6 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((puVar6 == (undefined8 *)0x0) ||
             ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x34) ||
              ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_1442622ed;
          local_38 = *puVar6;
        }
      }
      if (*(int *)(param_1 + 0x2c) == 0) {
LAB_1442622f2:
        uVar5 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x28);
        uVar5 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar6 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((puVar6 == (undefined8 *)0x0) ||
             ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x2c) ||
              ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_1442622f2;
          uVar5 = *puVar6;
        }
      }
      FUN_146639170(*(undefined8 *)(param_1 + 0x20),0,param_3,uVar5);
      uVar5 = 1;
      goto LAB_14426220e;
    }
  }
  uVar5 = 0;
LAB_14426220e:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144262314 FUN_144262314 body=29 status=ok
// SIG undefined FUN_144262314(void)

undefined8 FUN_144262314(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442624b0 FUN_1442624b0 body=101 status=ok
// SIG undefined FUN_1442624b0(void)

void FUN_1442624b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a8de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a8d70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 144262516 FUN_144262516 body=101 status=ok
// SIG undefined FUN_144262516(void)

void FUN_144262516(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a8de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a8d70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14426257c FUN_14426257c body=134 status=ok
// SIG undefined FUN_14426257c(void)

void FUN_14426257c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b9a8de0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a8d70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442625f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144262602 FUN_144262602 body=206 status=ok
// SIG undefined FUN_144262602(void)

void FUN_144262602(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442626c8:
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(int *)(puVar4 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)))) goto LAB_1442626c8;
      uVar3 = *puVar4;
    }
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x28);
    uVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1442626b0;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x2c) &&
        ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar2 = *puVar4;
      goto LAB_1442626b0;
    }
  }
  uVar2 = 0;
LAB_1442626b0:
  FUN_146639382(*(undefined8 *)(param_1 + 0x20),0,param_3,param_4,uVar2,uVar3);
  return;
}



// FUNCTION 1442626d0 FUN_1442626d0 body=462 status=ok
// SIG undefined FUN_1442626d0(void)

undefined8 FUN_1442626d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144262898;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144262898;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_144262898:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144262790;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      if (*(int *)(param_1 + 0x34) == 0) {
LAB_144262879:
        local_40 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x30);
        local_40 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar6 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((puVar6 == (undefined8 *)0x0) ||
             ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x34) ||
              ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_144262879;
          local_40 = *puVar6;
        }
      }
      if (*(int *)(param_1 + 0x2c) == 0) {
LAB_14426287e:
        local_48 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x28);
        local_48 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar6 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((puVar6 == (undefined8 *)0x0) ||
             ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x2c) ||
              ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_14426287e;
          local_48 = *puVar6;
        }
      }
      FUN_146639382(*(undefined8 *)(param_1 + 0x20),0,param_3,param_4);
      uVar5 = 1;
      goto LAB_144262790;
    }
  }
  uVar5 = 0;
LAB_144262790:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442628a0 FUN_1442628a0 body=29 status=ok
// SIG undefined FUN_1442628a0(void)

undefined8 FUN_1442628a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144262a3c FUN_144262a3c body=101 status=ok
// SIG undefined FUN_144262a3c(void)

void FUN_144262a3c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8e50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144262aa2 FUN_144262aa2 body=101 status=ok
// SIG undefined FUN_144262aa2(void)

void FUN_144262aa2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8e50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144262b08 FUN_144262b08 body=134 status=ok
// SIG undefined FUN_144262b08(void)

void FUN_144262b08(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edb80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a8e50;
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
                    /* WARNING: Could not recover jumptable at 0x000144262b7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144262bea FUN_144262bea body=362 status=ok
// SIG undefined FUN_144262bea(void)

undefined8 FUN_144262bea(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144262d4e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144262d4e;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144262d4e:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144262ca4;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      if (*(int *)(param_1 + 0x2c) == 0) {
LAB_144262d34:
        uVar6 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x28);
        uVar6 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar5 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((puVar5 == (undefined8 *)0x0) ||
             ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x2c) ||
              ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_144262d34;
          uVar6 = *puVar5;
        }
      }
      FUN_146639532(*(undefined8 *)(param_1 + 0x20),0,param_3,uVar6);
      uVar6 = 1;
      goto LAB_144262ca4;
    }
  }
  uVar6 = 0;
LAB_144262ca4:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144262d56 FUN_144262d56 body=29 status=ok
// SIG undefined FUN_144262d56(void)

undefined8 FUN_144262d56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144262ef2 FUN_144262ef2 body=101 status=ok
// SIG undefined FUN_144262ef2(void)

void FUN_144262ef2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8ec0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144262f58 FUN_144262f58 body=101 status=ok
// SIG undefined FUN_144262f58(void)

void FUN_144262f58(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8ec0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144262fbe FUN_144262fbe body=134 status=ok
// SIG undefined FUN_144262fbe(void)

void FUN_144262fbe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a8ec0;
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
                    /* WARNING: Could not recover jumptable at 0x000144263035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442630a6 FUN_1442630a6 body=347 status=ok
// SIG undefined FUN_1442630a6(void)

undefined8 FUN_1442630a6(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442631fb;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442631fb;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1442631fb:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_144263158:
    uVar5 = 0;
    goto LAB_14426315a;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar5 = 0;
  if ((int)uVar2 < 0) goto LAB_14426315a;
  if (DAT_14c9647dc <= (int)uVar2) goto LAB_14426315a;
  lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  if (((lVar7 == 0) || (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x1c))) ||
     ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) goto LAB_144263158;
  if (*(int *)(param_1 + 0x2c) == 0) {
LAB_1442631e2:
    uVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x28);
    uVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x2c) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_1442631e2;
      uVar5 = *puVar6;
    }
  }
  FUN_146638df6(*(undefined8 *)(param_1 + 0x20),uVar5);
  uVar5 = 1;
LAB_14426315a:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144263202 FUN_144263202 body=29 status=ok
// SIG undefined FUN_144263202(void)

undefined8 FUN_144263202(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14426339e FUN_14426339e body=101 status=ok
// SIG undefined FUN_14426339e(void)

void FUN_14426339e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8f30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144263404 FUN_144263404 body=101 status=ok
// SIG undefined FUN_144263404(void)

void FUN_144263404(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8f30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14426346a FUN_14426346a body=134 status=ok
// SIG undefined FUN_14426346a(void)

void FUN_14426346a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a8f30;
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
                    /* WARNING: Could not recover jumptable at 0x0001442634e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144263544 FUN_144263544 body=352 status=ok
// SIG undefined FUN_144263544(void)

undefined8 FUN_144263544(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14426369e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14426369e;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14426369e:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442635fa;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      uVar5 = 1;
      if ((*(int *)(param_1 + 0x2c) != 0) &&
         ((uVar2 = *(uint *)(param_1 + 0x28), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)))) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar7 != (longlong *)0x0) &&
           ((((int)plVar7[2] == *(int *)(param_1 + 0x2c) &&
             ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) && (*plVar7 != 0)))) {
          FUN_141178c90(*(undefined8 *)(param_1 + 0x20));
        }
      }
      goto LAB_1442635fa;
    }
  }
  uVar5 = 0;
LAB_1442635fa:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442636a6 FUN_1442636a6 body=29 status=ok
// SIG undefined FUN_1442636a6(void)

undefined8 FUN_1442636a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144263842 FUN_144263842 body=101 status=ok
// SIG undefined FUN_144263842(void)

void FUN_144263842(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8fa0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442638a8 FUN_1442638a8 body=101 status=ok
// SIG undefined FUN_1442638a8(void)

void FUN_1442638a8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8fa0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14426390e FUN_14426390e body=134 status=ok
// SIG undefined FUN_14426390e(void)

void FUN_14426390e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a8fa0;
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
                    /* WARNING: Could not recover jumptable at 0x000144263985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442639e8 FUN_1442639e8 body=352 status=ok
// SIG undefined FUN_1442639e8(void)

undefined8 FUN_1442639e8(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144263b42;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144263b42;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144263b42:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144263a9e;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      uVar5 = 1;
      if ((*(int *)(param_1 + 0x2c) != 0) &&
         ((uVar2 = *(uint *)(param_1 + 0x28), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)))) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar7 != (longlong *)0x0) &&
           ((((int)plVar7[2] == *(int *)(param_1 + 0x2c) &&
             ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) && (*plVar7 != 0)))) {
          FUN_141178c90(*(undefined8 *)(param_1 + 0x20));
        }
      }
      goto LAB_144263a9e;
    }
  }
  uVar5 = 0;
LAB_144263a9e:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144263b4a FUN_144263b4a body=29 status=ok
// SIG undefined FUN_144263b4a(void)

undefined8 FUN_144263b4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144263ce6 FUN_144263ce6 body=101 status=ok
// SIG undefined FUN_144263ce6(void)

void FUN_144263ce6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a9010;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144263d4c FUN_144263d4c body=101 status=ok
// SIG undefined FUN_144263d4c(void)

void FUN_144263d4c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a9010;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144263db2 FUN_144263db2 body=134 status=ok
// SIG undefined FUN_144263db2(void)

void FUN_144263db2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a9010;
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
                    /* WARNING: Could not recover jumptable at 0x000144263e29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144263e8c FUN_144263e8c body=352 status=ok
// SIG undefined FUN_144263e8c(void)

undefined8 FUN_144263e8c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144263fe6;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144263fe6;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144263fe6:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144263f42;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      uVar5 = 1;
      if ((*(int *)(param_1 + 0x2c) != 0) &&
         ((uVar2 = *(uint *)(param_1 + 0x28), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)))) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar7 != (longlong *)0x0) &&
           ((((int)plVar7[2] == *(int *)(param_1 + 0x2c) &&
             ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) && (*plVar7 != 0)))) {
          FUN_141178c90(*(undefined8 *)(param_1 + 0x20));
        }
      }
      goto LAB_144263f42;
    }
  }
  uVar5 = 0;
LAB_144263f42:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144263fee FUN_144263fee body=29 status=ok
// SIG undefined FUN_144263fee(void)

undefined8 FUN_144263fee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14426418a FUN_14426418a body=101 status=ok
// SIG undefined FUN_14426418a(void)

void FUN_14426418a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a9080;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442641f0 FUN_1442641f0 body=101 status=ok
// SIG undefined FUN_1442641f0(void)

void FUN_1442641f0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a9080;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144264256 FUN_144264256 body=134 status=ok
// SIG undefined FUN_144264256(void)

void FUN_144264256(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a9080;
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
                    /* WARNING: Could not recover jumptable at 0x0001442642cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144264330 FUN_144264330 body=352 status=ok
// SIG undefined FUN_144264330(void)

undefined8 FUN_144264330(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14426448a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14426448a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14426448a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442643e6;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      uVar5 = 1;
      if ((*(int *)(param_1 + 0x2c) != 0) &&
         ((uVar2 = *(uint *)(param_1 + 0x28), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)))) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar7 != (longlong *)0x0) &&
           ((((int)plVar7[2] == *(int *)(param_1 + 0x2c) &&
             ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) && (*plVar7 != 0)))) {
          FUN_141178c90(*(undefined8 *)(param_1 + 0x20));
        }
      }
      goto LAB_1442643e6;
    }
  }
  uVar5 = 0;
LAB_1442643e6:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144264492 FUN_144264492 body=152 status=ok
// SIG undefined FUN_144264492(void)

void FUN_144264492(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_14125b50a((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_1442644b6;
    }
  }
  uVar5 = 0;
LAB_1442644b6:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 14426452a FUN_14426452a body=91 status=ok
// SIG undefined FUN_14426452a(void)

int FUN_14426452a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((*param_3 == *(longlong *)(lVar2 + lVar4 * 0x48)) &&
           ((int)param_3[1] == *(int *)(lVar2 + lVar4 * 0x48 + 8))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x40 + lVar4 * 0x48);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 144264586 FUN_144264586 body=671 status=ok
// SIG undefined FUN_144264586(void)

void FUN_144264586(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_144264603;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_144264603:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar15 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar15 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar15 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar15) {
      iVar15 = iVar7;
    }
  }
  if (iVar15 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar16 = (longlong)iVar15 * 0x20;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x1c + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x18 + lVar16) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar15 = (int)uVar4;
      lVar9 = (longlong)iVar15;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar15) {
          iVar12 = iVar15;
        }
        if (iVar11 <= iVar15) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar12 - lVar9 == lVar16) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar15 + (int)lVar16 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar7);
  }
  return;
}



// FUNCTION 144264826 FUN_144264826 body=316 status=ok
// SIG undefined FUN_144264826(void)

undefined8 FUN_144264826(longlong param_1,int param_2)

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
  
  uVar5 = (longlong)param_2 * 0x18;
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
            if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14426488c;
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
LAB_14426488c:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar5;
  uVar4 = SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar8 = 0x7fffffff;
  if (param_2 <= (int)(uVar5 / 0x18)) {
    uVar8 = uVar5 / 0x18 & 0xffffffff;
  }
  iVar7 = (int)uVar8;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  else {
    uVar4 = FUN_1446f8d3c(param_1,0,uVar8,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar7;
  return uVar4;
}



// FUNCTION 144264962 FUN_144264962 body=119 status=ok
// SIG undefined FUN_144264962(void)

void FUN_144264962(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_2 + 0x10);
  do {
    *param_1 = 0;
    iVar1 = *(int *)(puVar2 + -1);
    _Src = (void *)puVar2[-2];
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
    param_1[2] = *puVar2;
    param_1 = param_1 + 3;
    puVar2 = puVar2 + 3;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1442649d9 FUN_1442649d9 body=43 status=ok
// SIG undefined FUN_1442649d9(void)

void FUN_1442649d9(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 144264a04 FUN_144264a04 body=31 status=ok
// SIG undefined FUN_144264a04(void)

undefined8 FUN_144264a04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144264ac6 FUN_144264ac6 body=31 status=ok
// SIG undefined FUN_144264ac6(void)

undefined8 FUN_144264ac6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144264b3a FUN_144264b3a body=31 status=ok
// SIG undefined FUN_144264b3a(void)

undefined8 FUN_144264b3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144264bfc FUN_144264bfc body=31 status=ok
// SIG undefined FUN_144264bfc(void)

undefined8 FUN_144264bfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144264d0a FUN_144264d0a body=31 status=ok
// SIG undefined FUN_144264d0a(void)

undefined8 FUN_144264d0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144264d7e FUN_144264d7e body=31 status=ok
// SIG undefined FUN_144264d7e(void)

undefined8 FUN_144264d7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144264e8c FUN_144264e8c body=31 status=ok
// SIG undefined FUN_144264e8c(void)

undefined8 FUN_144264e8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144264efa FUN_144264efa body=31 status=ok
// SIG undefined FUN_144264efa(void)

undefined8 FUN_144264efa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144264f68 FUN_144264f68 body=29 status=ok
// SIG undefined FUN_144264f68(void)

undefined8 FUN_144264f68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144265104 FUN_144265104 body=93 status=ok
// SIG undefined FUN_144265104(void)

void FUN_144265104(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a9570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144265162 FUN_144265162 body=93 status=ok
// SIG undefined FUN_144265162(void)

void FUN_144265162(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a9570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442651c0 FUN_1442651c0 body=126 status=ok
// SIG undefined FUN_1442651c0(void)

void FUN_1442651c0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a9570;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014426522f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144265248 FUN_144265248 body=278 status=ok
// SIG undefined FUN_144265248(void)

undefined8 FUN_144265248(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_144265358;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144265358;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144265358:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14426530b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144265360(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_14426530b;
    }
  }
  uVar6 = 0;
LAB_14426530b:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144265360 FUN_144265360 body=582 status=ok
// SIG undefined FUN_144265360(void)

ulonglong FUN_144265360(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  undefined8 *puVar7;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar7 = &local_70;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_80 = *param_2;
  local_78 = *(undefined4 *)(param_2 + 1);
  uVar3 = FUN_1447715ec(puVar7,param_2 + 2);
  local_48 = *(undefined4 *)(param_2 + 7);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uStack_40 = *(undefined4 *)(param_2 + 8);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x44);
  param_1 = (longlong *)*param_1;
  lVar10 = param_1[0x31];
  if (lVar10 != 0) {
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    uVar3 = FUN_14435e60a(lVar10,uVar4);
    if ((char)uVar3 != '\0') {
      if (param_1 == (longlong *)0x0) {
        uVar9 = 0;
        uVar8 = 0;
      }
      else {
        uVar9 = *(uint *)((longlong)param_1 + 0xc);
        if ((int)uVar9 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        uVar8 = *(uint *)(lVar10 + 0x10);
        if (*(uint *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          uVar6 = DAT_14c964868 + 1;
          puVar7 = (undefined8 *)(ulonglong)uVar6;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,puVar7);
          }
          LOCK();
          uVar8 = *(uint *)(lVar10 + 0x10);
          bVar12 = uVar8 == 0;
          if (bVar12) {
            *(uint *)(lVar10 + 0x10) = uVar6;
            uVar8 = 0;
          }
          UNLOCK();
          if (bVar12) {
            uVar8 = uVar6;
          }
        }
      }
      lVar10 = param_1[0x32];
      if (param_1[0x31] == 0) {
        local_98 = 0;
      }
      else {
        puVar1 = *(undefined4 **)(param_1[0x31] + 8);
        puVar11 = &DAT_14c9485f0;
        if (puVar1 != (undefined4 *)0x0) {
          puVar11 = puVar1;
        }
        if (DAT_14c947fe0 == 0) {
          lVar5 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar5);
          DAT_14c947fe0 = lVar5;
        }
        FUN_140045924(DAT_14c947fe0,&local_98,puVar11,1);
      }
      local_90 = 0x3860a972;
      local_88 = 0;
      uVar3 = FUN_141502922(param_1,&local_98,
                            CONCAT71((int7)((ulonglong)puVar7 >> 8),(char)lVar10) & 0xffffffff);
      if ((((uVar8 != 0) && (-1 < (int)uVar9)) && ((int)uVar9 < DAT_14c9647dc)) &&
         (((uVar3 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8), uVar3 != 0 &&
           (*(uint *)(uVar3 + 0x10) == uVar8)) && ((*(uint *)(uVar3 + 8) & 0x10200000) == 0)))) {
        uVar3 = (ulonglong)*(uint *)(uVar3 + 8);
      }
    }
  }
  if (local_58 != 0) {
    uVar3 = FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1442655a8 FUN_1442655a8 body=29 status=ok
// SIG undefined FUN_1442655a8(void)

undefined8 FUN_1442655a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442655da FUN_1442655da body=85 status=ok
// SIG undefined FUN_1442655da(void)

void FUN_1442655da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a95e0;
  return;
}



// FUNCTION 144265630 FUN_144265630 body=85 status=ok
// SIG undefined FUN_144265630(void)

void FUN_144265630(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a95e0;
  return;
}



// FUNCTION 144265686 FUN_144265686 body=118 status=ok
// SIG undefined FUN_144265686(void)

void FUN_144265686(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a95e0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442656ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442657a2 FUN_1442657a2 body=29 status=ok
// SIG undefined FUN_1442657a2(void)

undefined8 FUN_1442657a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14426593e FUN_14426593e body=93 status=ok
// SIG undefined FUN_14426593e(void)

void FUN_14426593e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a98f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14426599c FUN_14426599c body=93 status=ok
// SIG undefined FUN_14426599c(void)

void FUN_14426599c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a98f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442659fa FUN_1442659fa body=126 status=ok
// SIG undefined FUN_1442659fa(void)

void FUN_1442659fa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a98f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144265a69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144265a82 FUN_144265a82 body=266 status=ok
// SIG undefined FUN_144265a82(void)

undefined8 FUN_144265a82(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144265b86;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144265b86;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144265b86:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144265b3a;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14143c714(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144265b3a;
    }
  }
  uVar6 = 0;
LAB_144265b3a:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144265b8e FUN_144265b8e body=29 status=ok
// SIG undefined FUN_144265b8e(void)

undefined8 FUN_144265b8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144265d34 FUN_144265d34 body=101 status=ok
// SIG undefined FUN_144265d34(void)

void FUN_144265d34(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a9960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144265d9a FUN_144265d9a body=101 status=ok
// SIG undefined FUN_144265d9a(void)

void FUN_144265d9a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a9960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144265e00 FUN_144265e00 body=134 status=ok
// SIG undefined FUN_144265e00(void)

void FUN_144265e00(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a9960;
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
                    /* WARNING: Could not recover jumptable at 0x000144265e77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144265ee8 FUN_144265ee8 body=310 status=ok
// SIG undefined FUN_144265ee8(void)

undefined8 FUN_144265ee8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144266018;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144266018;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
  }
  else {
LAB_144266018:
    local_48 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144265fc4;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_144265fc4;
    }
  }
  uVar6 = 0;
LAB_144265fc4:
  if ((local_48 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144266020 FUN_144266020 body=31 status=ok
// SIG undefined FUN_144266020(void)

undefined8 FUN_144266020(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442660d8 FUN_1442660d8 body=31 status=ok
// SIG undefined FUN_1442660d8(void)

undefined8 FUN_1442660d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442660f8 FUN_1442660f8 body=29 status=ok
// SIG undefined FUN_1442660f8(void)

undefined8 FUN_1442660f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144266294 FUN_144266294 body=101 status=ok
// SIG undefined FUN_144266294(void)

void FUN_144266294(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a9e10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442662fa FUN_1442662fa body=101 status=ok
// SIG undefined FUN_1442662fa(void)

void FUN_1442662fa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a9e10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144266360 FUN_144266360 body=134 status=ok
// SIG undefined FUN_144266360(void)

void FUN_144266360(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a9e10;
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
                    /* WARNING: Could not recover jumptable at 0x0001442663d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442663e6 FUN_1442663e6 body=65 status=ok
// SIG undefined FUN_1442663e6(void)

void FUN_1442663e6(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_144266540(param_1 + 0x20,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144266428 FUN_144266428 body=278 status=ok
// SIG undefined FUN_144266428(void)

undefined8 FUN_144266428(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144266538;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144266538;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144266538:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442664ec;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144266540(param_1 + 0x20,&local_29);
      uVar6 = 1;
      goto LAB_1442664ec;
    }
  }
  uVar6 = 0;
LAB_1442664ec:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144266540 FUN_144266540 body=170 status=ok
// SIG undefined FUN_144266540(void)

void FUN_144266540(longlong *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  uVar1 = *param_2;
  lVar3 = *param_1;
  uVar4 = FUN_140495e96(lVar3 + 0x30);
  lVar5 = FUN_1404960a8(uVar4);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar6 = &PTR_FUN_14b9a7d40;
    *(undefined1 *)(puVar6 + 1) = uVar1;
    FUN_14039144e(lVar5,puVar6);
  }
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    uVar2 = *(uint *)(param_1 + 1);
    uVar4 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442665d6;
    puVar6 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar6 != (undefined8 *)0x0) &&
       ((*(int *)(puVar6 + 2) == *(int *)((longlong)param_1 + 0xc) &&
        ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
      uVar4 = *puVar6;
      goto LAB_1442665d6;
    }
  }
  uVar4 = 0;
LAB_1442665d6:
  FUN_148e272b0(lVar3,uVar4);
  return;
}



// FUNCTION 1442665ea FUN_1442665ea body=29 status=ok
// SIG undefined FUN_1442665ea(void)

undefined8 FUN_1442665ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14426661c FUN_14426661c body=85 status=ok
// SIG undefined FUN_14426661c(void)

void FUN_14426661c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a9e80;
  return;
}



// FUNCTION 144266672 FUN_144266672 body=85 status=ok
// SIG undefined FUN_144266672(void)

void FUN_144266672(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a9e80;
  return;
}



// FUNCTION 1442666c8 FUN_1442666c8 body=118 status=ok
// SIG undefined FUN_1442666c8(void)

void FUN_1442666c8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a9e80;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014426672f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144266744 FUN_144266744 body=235 status=ok
// SIG undefined FUN_144266744(void)

undefined8 * FUN_144266744(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
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
  plVar1 = DAT_14c844840;
  param_1[5] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 6) = DAT_14c844848;
  return param_1;
}



// FUNCTION 144266830 FUN_144266830 body=31 status=ok
// SIG undefined FUN_144266830(void)

undefined8 FUN_144266830(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14426689e FUN_14426689e body=31 status=ok
// SIG undefined FUN_14426689e(void)

undefined8 FUN_14426689e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442668be FUN_1442668be body=31 status=ok
// SIG undefined FUN_1442668be(void)

undefined8 FUN_1442668be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14426692a FUN_14426692a body=31 status=ok
// SIG undefined FUN_14426692a(void)

undefined8 FUN_14426692a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14426694a FUN_14426694a body=31 status=ok
// SIG undefined FUN_14426694a(void)

undefined8 FUN_14426694a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14426696a FUN_14426696a body=31 status=ok
// SIG undefined FUN_14426696a(void)

undefined8 FUN_14426696a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144266a2a FUN_144266a2a body=31 status=ok
// SIG undefined FUN_144266a2a(void)

undefined8 FUN_144266a2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144266aea FUN_144266aea body=31 status=ok
// SIG undefined FUN_144266aea(void)

undefined8 FUN_144266aea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144266d36 FUN_144266d36 body=29 status=ok
// SIG undefined FUN_144266d36(void)

undefined8 FUN_144266d36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144266ed2 FUN_144266ed2 body=93 status=ok
// SIG undefined FUN_144266ed2(void)

void FUN_144266ed2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9aac10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144266f30 FUN_144266f30 body=93 status=ok
// SIG undefined FUN_144266f30(void)

void FUN_144266f30(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9aac10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144266f8e FUN_144266f8e body=126 status=ok
// SIG undefined FUN_144266f8e(void)

void FUN_144266f8e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9aac10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144266ffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14426700c FUN_14426700c body=138 status=ok
// SIG undefined FUN_14426700c(void)

void FUN_14426700c(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_68 = *param_2;
  local_60 = *(undefined4 *)(param_2 + 1);
  FUN_1447715ec(&local_58,param_2 + 2);
  local_30 = *(undefined4 *)(param_2 + 7);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x3c);
  uStack_28 = *(undefined4 *)(param_2 + 8);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x44);
  FUN_1406a3c7a(*(undefined8 *)(param_1 + 0x20));
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144267098 FUN_144267098 body=356 status=ok
// SIG undefined FUN_144267098(void)

undefined8 FUN_144267098(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442671f6;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442671f6;
    }
    FUN_140192332(param_1 + 0x18,&local_78,0);
    lVar7 = local_78;
  }
  else {
LAB_1442671f6:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442671a0;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_78 = *param_2;
      local_70 = (undefined4)param_2[1];
      FUN_1447715ec(&local_68,param_2 + 2);
      local_40 = (undefined4)param_2[7];
      uStack_3c = *(undefined4 *)((longlong)param_2 + 0x3c);
      uStack_38 = (undefined4)param_2[8];
      uStack_34 = *(undefined4 *)((longlong)param_2 + 0x44);
      FUN_1406a3c7a(*(undefined8 *)(param_1 + 0x20));
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      uVar6 = 1;
      goto LAB_1442671a0;
    }
  }
  uVar6 = 0;
LAB_1442671a0:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442671fe FUN_1442671fe body=31 status=ok
// SIG undefined FUN_1442671fe(void)

undefined8 FUN_1442671fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14426721e FUN_14426721e body=66 status=ok
// SIG undefined FUN_14426721e(void)

longlong FUN_14426721e(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x238))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 144267260 FUN_144267260 body=31 status=ok
// SIG undefined FUN_144267260(void)

undefined8 FUN_144267260(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442673c0 FUN_1442673c0 body=31 status=ok
// SIG undefined FUN_1442673c0(void)

undefined8 FUN_1442673c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14426742e FUN_14426742e body=31 status=ok
// SIG undefined FUN_14426742e(void)

undefined8 FUN_14426742e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14426744e FUN_14426744e body=24 status=ok
// SIG undefined FUN_14426744e(void)

void FUN_14426744e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144267462. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1442674de FUN_1442674de body=352 status=ok
// SIG undefined FUN_1442674de(void)

void FUN_1442674de(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  lVar3 = *param_1;
  lVar7 = *(longlong *)(param_2 + 0x40);
  if (lVar7 == 0) {
    uVar6 = FUN_1406ef318();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_2 + 0x40) = lVar7;
  }
  plVar1 = (longlong *)(param_2 + 0x38);
  if (*(longlong *)(param_2 + 0x48) == 0) {
    if (lVar7 == 0) {
      return;
    }
    if (*plVar1 == 0) {
      return;
    }
    plVar4 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
      *(undefined8 *)(param_2 + 0x48) = 0;
      return;
    }
    uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar7 = FUN_144aff482(uVar6,plVar1);
    *(longlong *)(param_2 + 0x48) = lVar7;
    if (lVar7 == 0) {
      return;
    }
  }
  uVar6 = FUN_1400d7050(lVar3 + 0x30);
  lVar7 = *(longlong *)(param_2 + 0x40);
  if (lVar7 == 0) {
    uVar8 = FUN_1406ef318();
    lVar7 = FUN_14477b664(uVar8);
    *(longlong *)(param_2 + 0x40) = lVar7;
  }
  lVar9 = *(longlong *)(param_2 + 0x48);
  if (((lVar9 == 0) && (lVar9 = 0, lVar7 != 0)) && (*plVar1 != 0)) {
    plVar4 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar4 == (longlong *)0x0) || (cVar5 = (**(code **)(*plVar4 + 0x108))(), cVar5 == '\0')) {
      lVar9 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
      lVar9 = FUN_144aff482(uVar8,plVar1);
    }
    *(longlong *)(param_2 + 0x48) = lVar9;
  }
  cVar5 = FUN_1409500c0(lVar9,uVar6);
  if (cVar5 == '\0') {
    iVar2 = *(int *)(lVar3 + 0xe8);
    *(uint *)(lVar3 + 0xe8) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0xec) < iVar2 + 1U) {
      FUN_141895c4e((longlong *)(lVar3 + 0xe0),iVar2);
    }
    *(longlong *)(*(longlong *)(lVar3 + 0xe0) + (longlong)iVar2 * 8) = param_2;
  }
  return;
}



// FUNCTION 14426763e FUN_14426763e body=6399 status=ok
// SIG undefined FUN_14426763e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14426763e(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_98 [32];
  undefined4 local_78;
  char *local_70;
  int local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar3 = FUN_140b10a34(&local_70,&DAT_14cbd59a0);
  if (cVar3 == '\0') {
    _DAT_14cbd59a0 = 0;
    uRam000000014cbd59a8 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd59b0 = (ulonglong)uVar4;
  _DAT_14cbd59b8 = 0x47efffffe0000000;
  _DAT_14cbd59c0 = 0x47efffffe0000000;
  _DAT_14cbd59c8 = 0x47efffffe0000000;
  _DAT_14cbd59d0 = 0x47efffffe0000000;
  _DAT_14cbd59d8 = 0x47efffffe0000000;
  _DAT_14cbd59e0 = 0x47efffffe0000000;
  _DAT_14cbd59e8 = 0x47efffffe0000000;
  _DAT_14cbd59f0 = 0x47efffffe0000000;
  local_70 = "Cash";
  local_68 = 4;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd59f8 = (ulonglong)uVar4;
  FUN_1400b22c2(&DAT_14cbd5a00,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14424edcc);
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5a14 = 0;
  FUN_14052b5e0(&DAT_14cbd5a10,"PlayerAwareness",0);
  _DAT_14cbd5a20 = "PlayerAwareness";
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd5a28 = (ulonglong)uVar4;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5a30 = (ulonglong)uVar4;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5a38 = (ulonglong)uVar4;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5a40 = (ulonglong)uVar4;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5a48 = (ulonglong)uVar4;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5a50 = (ulonglong)uVar4;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5a58 = (ulonglong)uVar4;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5a60 = (ulonglong)uVar4;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5a68 = (ulonglong)uVar4;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5a70 = (ulonglong)uVar4;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5a78 = (ulonglong)uVar4;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5a80 = (ulonglong)uVar4;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5a88 = (ulonglong)uVar4;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5a90 = (ulonglong)uVar4;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5a98 = (ulonglong)uVar4;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5aa0 = (ulonglong)uVar4;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5aa8 = (ulonglong)uVar4;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5ab0 = (ulonglong)uVar4;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd5ab8 = (ulonglong)uVar4;
  FUN_1446f470e(&DAT_14cbd5ac0,L"UNSET",1);
  local_70 = "init";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "update";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "config_update";
  local_68 = 0xd;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "deinit";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  FUN_1446f470e(&DAT_14cbd5ac8,L"Party",1);
  FUN_1446f470e(&DAT_14cbd5ad0,&DAT_149e063b2);
  _DAT_14cbd5adc = 0;
  FUN_14052b5e0(&DAT_14cbd5ad8,"profile",0);
  _DAT_14cbd5ae8 = 0;
  FUN_14052b5e0(&DAT_14cbd5ae4,"input",0);
  _DAT_14cbd5af4 = 0;
  FUN_14052b5e0(&DAT_14cbd5af0,"cursor",0);
  _DAT_14cbd5b00 = 0;
  FUN_14052b5e0(&DAT_14cbd5afc,"invert_x_axis",0);
  _DAT_14cbd5b0c = 0;
  FUN_14052b5e0(&DAT_14cbd5b08,"invert_y_axis",0);
  _DAT_14cbd5b18 = 0;
  FUN_14052b5e0(&DAT_14cbd5b14,"sensitivity",0);
  _DAT_14cbd5b24 = 0;
  FUN_14052b5e0(&DAT_14cbd5b20,"friction_default",0);
  _DAT_14cbd5b30 = 0;
  FUN_14052b5e0(&DAT_14cbd5b2c,"pc_scroll_sensitivity",0);
  _DAT_14cbd5b3c = 0;
  FUN_14052b5e0(&DAT_14cbd5b38,"max_idle_time",0);
  _DAT_14cbd5b48 = 0;
  FUN_14052b5e0(&DAT_14cbd5b44,"show_idle_flash",0);
  FUN_1400b22c2(&DAT_14cbd5b50,"hover");
  atexit((_func_5014 *)&LAB_14424eddd);
  FUN_1400b22c2(&DAT_14cbd5b60,"press");
  atexit((_func_5014 *)&LAB_14424edee);
  FUN_1400b22c2(&DAT_14cbd5b70,"popup");
  atexit((_func_5014 *)&LAB_14424edff);
  FUN_1400b22c2(&DAT_14cbd5b80,"scroll");
  atexit((_func_5014 *)&LAB_14424ee10);
  FUN_1400b22c2(&DAT_14cbd5b90,"invisible");
  atexit((_func_5014 *)&LAB_14424ee21);
  FUN_1400b22c2(&DAT_14cbd5ba0,&DAT_14b82978f);
  atexit((_func_5014 *)&LAB_14424ee32);
  FUN_1400b22c2(&DAT_14cbd5bb0,"idle_flash");
  atexit((_func_5014 *)&LAB_14424ee43);
  FUN_1400b22c2(&DAT_14cbd5bc0,&DAT_149e62dd2);
  atexit((_func_5014 *)&LAB_14424ee54);
  FUN_1400b22c2(&DAT_14cbd5bd0,"GBX-BUTTON");
  atexit((_func_5014 *)&LAB_14424ee65);
  FUN_1400b22c2(&DAT_14cbd5be0,"GBX-DROPDOWN");
  atexit((_func_5014 *)&LAB_14424ee76);
  FUN_1400b22c2(&DAT_14cbd5bf0,"GBX-SLIDER");
  atexit((_func_5014 *)&LAB_14424ee87);
  FUN_1400b22c2(&DAT_14cbd5c00,"GBX-TEXT-INPUT");
  atexit((_func_5014 *)&LAB_14424ee98);
  local_70 = "Use";
  local_68 = 3;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5c10 = (ulonglong)uVar4;
  local_70 = "Sight";
  local_68 = 5;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5c18 = (ulonglong)uVar4;
  local_70 = "TargetLock";
  local_68 = 10;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5c20 = (ulonglong)uVar4;
  FUN_140056680(&DAT_14cbd5c28,L"GoreStump_");
  atexit((_func_5014 *)&LAB_14424eea9);
  FUN_140056680(&DAT_14cbd5c38,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_14424eeba);
  FUN_140056680(&DAT_14cbd5c48,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_14424eecb);
  FUN_140056680(&DAT_14cbd5c58,L"GoreFX_");
  atexit((_func_5014 *)&LAB_14424eedc);
  FUN_1446f470e(&DAT_14cbd5c68,L"LIMB_GORED",1);
  _DAT_14cbd5c70 = 0x4072c00000000000;
  _DAT_14cbd5c78 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbd5c80,L"body",1);
  FUN_1446f470e(&DAT_14cbd5c88,L"title_card");
  _DAT_14cbd5c94 = 0;
  _DAT_14cbd5c98 = 0;
  FUN_14052b5e0(&DAT_14cbd5c90,"character");
  _DAT_14cbd5ca0 = 0;
  _DAT_14cbd5ca4 = 0;
  FUN_14052b5e0(&DAT_14cbd5c9c,"profile");
  _DAT_14cbd5cac = 0;
  _DAT_14cbd5cb0 = 0;
  FUN_14052b5e0(&DAT_14cbd5ca8,"trait_mission");
  _DAT_14cbd5cb8 = "trait_mission";
  _DAT_14cbd5cc4 = 0;
  _DAT_14cbd5cc8 = 0;
  FUN_14052b5e0(&DAT_14cbd5cc0,"weekly_trait_mission");
  _DAT_14cbd5cd0 = "weekly_trait_mission";
  _DAT_14cbd5cd8 = 0;
  uRam000000014cbd5ce0 = 0;
  _DAT_14cbd5ce8 = 0;
  DAT_14cbd5cf0 = 0;
  uRam000000014cbd5cf8 = 0;
  FUN_1446ddda2(&DAT_14cbd5cd8,"Matchmaking_AutomaticRegionText");
  atexit((_func_5014 *)&LAB_14424eeed);
  _DAT_14cbd5d00 = 0;
  uRam000000014cbd5d08 = 0;
  _DAT_14cbd5d10 = 0;
  DAT_14cbd5d18 = 0;
  uRam000000014cbd5d20 = 0;
  FUN_1446ddda2(&DAT_14cbd5d00,"Matchmaking_ManualRegionText");
  atexit((_func_5014 *)&LAB_14424eefe);
  _DAT_14cbd5d28 = 0;
  uRam000000014cbd5d30 = 0;
  _DAT_14cbd5d38 = 0;
  DAT_14cbd5d40 = 0;
  uRam000000014cbd5d48 = 0;
  FUN_1446ddda2(&DAT_14cbd5d28,"PingDisplayText");
  atexit((_func_5014 *)&LAB_14424ef0f);
  _DAT_14cbd5d50 = 0;
  uRam000000014cbd5d58 = 0;
  _DAT_14cbd5d60 = 0;
  DAT_14cbd5d68 = 0;
  uRam000000014cbd5d70 = 0;
  FUN_1446ddda2(&DAT_14cbd5d50,"GoodPingDisplayText",0);
  atexit((_func_5014 *)&LAB_14424ef20);
  _DAT_14cbd5d78 = 0;
  uRam000000014cbd5d80 = 0;
  _DAT_14cbd5d88 = 0;
  DAT_14cbd5d90 = 0;
  uRam000000014cbd5d98 = 0;
  FUN_1446ddda2(&DAT_14cbd5d78,"OkPingDisplayText",0);
  atexit((_func_5014 *)&LAB_14424ef31);
  _DAT_14cbd5da0 = 0;
  uRam000000014cbd5da8 = 0;
  _DAT_14cbd5db0 = 0;
  DAT_14cbd5db8 = 0;
  uRam000000014cbd5dc0 = 0;
  FUN_1446ddda2(&DAT_14cbd5da0,"BadPingDisplayText",0);
  atexit((_func_5014 *)&LAB_14424ef42);
  _DAT_14cbd5dc8 = 0;
  uRam000000014cbd5dd0 = 0;
  _DAT_14cbd5dd8 = 0;
  DAT_14cbd5de0 = 0;
  uRam000000014cbd5de8 = 0;
  FUN_1446ddda2(&DAT_14cbd5dc8,"progress_expanded",0);
  atexit((_func_5014 *)&LAB_14424ef53);
  FUN_1400b22c2(&DAT_14cbd5df0,"tint_siren");
  atexit((_func_5014 *)&LAB_144252e1d);
  FUN_1400b22c2(&DAT_14cbd5e00,"tint_health");
  atexit((_func_5014 *)&LAB_144252e2e);
  local_70 = "Standard";
  local_68 = 8;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5e10 = (ulonglong)uVar4;
  local_70 = "PrologueSkip";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5e18 = (ulonglong)uVar4;
  local_70 = "UltimateVaultHunterSkip";
  local_68 = 0x17;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5e20 = (ulonglong)uVar4;
  local_70 = "SkipToDLC_Cowbell";
  local_68 = 0x11;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5e28 = (ulonglong)uVar4;
  local_70 = "SkipToDLC_Harmonica";
  local_68 = 0x13;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5e30 = (ulonglong)uVar4;
  FUN_140056680(&DAT_14cbd5e38,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_144255f36);
  FUN_1400b22c2(&DAT_14cbd5e48,&DAT_149e3cc88);
  atexit((_func_5014 *)&LAB_144255f47);
  FUN_1400b22c2(&DAT_14cbd5e58,"Popup");
  atexit((_func_5014 *)&LAB_144255f58);
  FUN_1400b22c2(&DAT_14cbd5e68,"Fullsize");
  atexit((_func_5014 *)&LAB_144255f69);
  FUN_1400b22c2(&DAT_14cbd5e78,"EchoLogs");
  atexit((_func_5014 *)&LAB_144255f7a);
  FUN_1400b22c2(&DAT_14cbd5e88,"PlayerStats");
  atexit((_func_5014 *)&LAB_144255f8b);
  FUN_1400b22c2(&DAT_14cbd5e98,"RewardCenter");
  atexit((_func_5014 *)&LAB_144255f9c);
  _DAT_14cbd5eac = 0;
  _DAT_14cbd5eb0 = 0;
  FUN_14052b5e0(&DAT_14cbd5ea8,"Missions");
  _DAT_14cbd5eb8 = 0;
  _DAT_14cbd5ebc = 0;
  FUN_14052b5e0(&DAT_14cbd5eb4,"Timer");
  _DAT_14cbd5ec4 = 0;
  _DAT_14cbd5ec8 = 0;
  FUN_14052b5e0(&DAT_14cbd5ec0,"Percent");
  _DAT_14cbd5ed0 = 0;
  uRam000000014cbd5ed8 = 0;
  _DAT_14cbd5ee0 = 0;
  DAT_14cbd5ee8 = 0;
  uRam000000014cbd5ef0 = 0;
  FUN_1446ddda2(&DAT_14cbd5ed0,"challenge_complete_notification");
  atexit((_func_5014 *)&LAB_144255fad);
  local_70 = "raid";
  local_68 = 4;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5ef8 = (ulonglong)uVar4;
  local_70 = "takedown";
  local_68 = 8;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5f00 = (ulonglong)uVar4;
  local_70 = "takedown";
  local_68 = 8;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "takedown_timer";
  local_68 = 0xe;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_70 = "takedown_hardcore";
  local_68 = 0x11;
  local_64 = 0;
  uVar6 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd5f08 = (ulonglong *)0x0;
  DAT_14cbd5f10 = 3;
  FUN_1401b309e(&DAT_14cbd5f08,3,0);
  puVar1 = DAT_14cbd5f08;
  *DAT_14cbd5f08 = (ulonglong)uVar4;
  puVar1[1] = (ulonglong)uVar5;
  puVar1[2] = (ulonglong)uVar6;
  atexit((_func_5014 *)&LAB_144255fbe);
  FUN_1400b22c2(&DAT_14cbd5f18,"takedown_countdown");
  atexit((_func_5014 *)&LAB_144255fcf);
  FUN_1400b22c2(&DAT_14cbd5f28,"takedownboss_dead");
  atexit((_func_5014 *)&LAB_144255fe0);
  FUN_1400b22c2(&DAT_14cbd5f38,"platinumthreshold");
  atexit((_func_5014 *)&LAB_144255ff1);
  FUN_1400b22c2(&DAT_14cbd5f48,"goldthreshold");
  atexit((_func_5014 *)&LAB_144256002);
  FUN_1400b22c2(&DAT_14cbd5f58,"silverthreshold");
  atexit((_func_5014 *)&LAB_144256013);
  FUN_1400b22c2(&DAT_14cbd5f68,"bronzethreshold");
  atexit((_func_5014 *)&LAB_144256024);
  local_70 = "timer_platinum";
  local_68 = 0xe;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd5f78 = (ulonglong)uVar4;
  local_70 = "timer_gold";
  local_68 = 10;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd5f80 = (ulonglong)uVar4;
  local_70 = "timer_silver";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd5f88 = (ulonglong)uVar4;
  local_70 = "timer_bronze";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70);
  DAT_14cbd5f90 = (ulonglong)uVar4;
  auVar8 = roundpd(ZEXT816(0x41c1e1a300400000),ZEXT816(0x41c1e1a300400000),1);
  DAT_14cbd5f98 = (longlong)auVar8._0_8_;
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  *(longlong *)(local_70 + 0x10) = lVar7;
  *(undefined ***)local_70 = &PTR_FUN_14b9a95e0;
  local_78 = 0x10001;
  FUN_14156bb80(&DAT_14cbd5fa0,L"oak.takedown.start_countdown",
                L"Test Countdown Timer for Takedowns.",&local_70);
  if (local_68 != 0) {
    if (local_70 == (char *)0x0) goto LAB_14426882d;
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_14426882d:
  atexit(FUN_14425735a);
  local_70 = "state_rem";
  local_68 = 9;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5fb0 = (ulonglong)uVar4;
  local_70 = "state_add";
  local_68 = 9;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5fb8 = (ulonglong)uVar4;
  local_70 = "state_remove_primary";
  local_68 = 0x14;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5fc0 = (ulonglong)uVar4;
  local_70 = "entry_sets";
  local_68 = 10;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5fc8 = (ulonglong)uVar4;
  local_70 = "entries";
  local_68 = 7;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5fd0 = (ulonglong)uVar4;
  local_70 = "menu_title";
  local_68 = 10;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5fd8 = (ulonglong)uVar4;
  local_70 = "actions";
  local_68 = 7;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5fe0 = (ulonglong)uVar4;
  local_70 = "loc_text";
  local_68 = 8;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5fe8 = (ulonglong)uVar4;
  local_70 = "desc_text";
  local_68 = 9;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5ff0 = (ulonglong)uVar4;
  local_70 = "style";
  local_68 = 5;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd5ff8 = (ulonglong)uVar4;
  local_70 = "horizontal";
  local_68 = 10;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6000 = (ulonglong)uVar4;
  local_70 = "entry_set_default";
  local_68 = 0x11;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6008 = (ulonglong)uVar4;
  local_70 = "required_nexus_layer";
  local_68 = 0x14;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6010 = (ulonglong)uVar4;
  local_70 = "tooltip_key";
  local_68 = 0xb;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6018 = (ulonglong)uVar4;
  local_70 = "set_push";
  local_68 = 8;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6020 = (ulonglong)uVar4;
  local_70 = "exit_game";
  local_68 = 9;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6028 = (ulonglong)uVar4;
  local_70 = "back";
  local_68 = 4;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6030 = (ulonglong)uVar4;
  local_70 = "back_actions";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6038 = (ulonglong)uVar4;
  _DAT_14cbd6040 = 0;
  uRam000000014cbd6048 = 0;
  _DAT_14cbd6050 = 0;
  DAT_14cbd6058 = 0;
  uRam000000014cbd6060 = 0;
  FUN_1446ddda2(&DAT_14cbd6040,&DAT_14b81bd00,0);
  atexit((_func_5014 *)&LAB_14425739f);
  FUN_140056680(&DAT_14cbd6068,L"incomplete");
  atexit((_func_5014 *)&LAB_1442573b0);
  FUN_140056680(&DAT_14cbd6078,L"eridium_reward");
  atexit((_func_5014 *)&LAB_1442573c1);
  FUN_140056680(&DAT_14cbd6088,L"rank_complete");
  atexit((_func_5014 *)&LAB_1442573d2);
  FUN_140056680(&DAT_14cbd6098,L"challenge_complete");
  atexit((_func_5014 *)&LAB_1442573e3);
  local_70 = "menu_select_character";
  local_68 = 0x15;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd60a8 = (ulonglong)uVar4;
  _DAT_14cbd60b4 = 0;
  FUN_14052b5e0(&DAT_14cbd60b0,"State",0);
  _DAT_14cbd60c0 = "State";
  local_78 = 0;
  FUN_14153156c(&DAT_14cbd60d0,L"OakUI.Compass.IgnoreDiscoverySystemShowOnCompassCheck",
                &DAT_14cbd60c8,
                L"turn off or on the \'show on compass\' check from the discovery system. Turning it off will make every discovery location visible on the compass"
               );
  atexit(FUN_144258b2d);
  ram0x00014cbd60e4 = 0;
  FUN_14052b5e0(&DAT_14cbd60e0,"crosshair_friendly_color",0);
  ram0x00014cbd60f0 = 0;
  FUN_14052b5e0(&DAT_14cbd60ec,"crosshair_enemy_color",0);
  ram0x00014cbd60fc = 0;
  FUN_14052b5e0(&DAT_14cbd60f8,"crosshair_neutral_color",0);
  _DAT_14cbd6108 = 0;
  uRam000000014cbd6110 = 0;
  _DAT_14cbd6118 = 0;
  DAT_14cbd6120 = 0;
  uRam000000014cbd6128 = 0;
  FUN_1446ddda2(&DAT_14cbd6108,"FBData_UI_Generic_HoverSelect",0);
  atexit((_func_5014 *)&LAB_144259a29);
  FUN_1446f470e(&DAT_14cbd6130,L"UI.Tag.MENU",1);
  FUN_1446f470e(&DAT_14cbd6138,L"UI.Tag.NO_CURSOR",1);
  FUN_1446f470e(&DAT_14cbd6140,L"UI.Tag.MENU_SPLITSCREEN_HELPER");
  _DAT_14cbd619c = 0;
  FUN_14052b5e0(&DAT_14cbd6198,"MENU_CUSTOMIZATION_CHARACTER",0);
  _DAT_14cbd61a8 = "MENU_CUSTOMIZATION_CHARACTER";
  _DAT_14cbd61b4 = 0;
  FUN_14052b5e0(&DAT_14cbd61b0,"MENU_CUSTOMIZATION_ECHO",0);
  _DAT_14cbd61c0 = "MENU_CUSTOMIZATION_ECHO";
  _DAT_14cbd61cc = 0;
  FUN_14052b5e0(&DAT_14cbd61c8,"MENU_CUSTOMIZATION_VEHICLE",0);
  _DAT_14cbd61d8 = "MENU_CUSTOMIZATION_VEHICLE";
  _DAT_14cbd61e4 = 0;
  FUN_14052b5e0(&DAT_14cbd61e0,"MENU_CUSTOMIZATION_WEAPON",0);
  _DAT_14cbd61f0 = "MENU_CUSTOMIZATION_WEAPON";
  _DAT_14cbd61fc = 0;
  FUN_14052b5e0(&DAT_14cbd61f8,&DAT_14b417908,0);
  _DAT_14cbd6208 = &DAT_14b417908;
  ram0x00014cbd6214 = 0;
  FUN_14052b5e0(&DAT_14cbd6210,"detailed_list",0);
  _DAT_14cbd6220 = "detailed_list";
  ram0x00014cbd622c = 0;
  FUN_14052b5e0(&DAT_14cbd6228,&DAT_14b81bdf4,0);
  _DAT_14cbd6238 = &DAT_14b81bdf4;
  _DAT_14cbd6244 = 0;
  FUN_14052b5e0(&DAT_14cbd6240,"backpack",0);
  _DAT_14cbd6250 = "backpack";
  FUN_1400b22c2(&DAT_14cbd6258,"weapon");
  atexit((_func_5014 *)&LAB_144259e5d);
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144268f62 FUN_144268f62 body=815 status=ok
// SIG undefined FUN_144268f62(void)

undefined4 FUN_144268f62(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  longlong *local_170;
  longlong *local_168;
  undefined4 local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined4 local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [32];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined1 local_e2;
  longlong *local_e0;
  undefined4 local_d8;
  undefined1 local_d0 [40];
  undefined4 local_a8;
  undefined8 local_a4;
  undefined1 local_9c;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined4 *local_80;
  undefined1 *local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_145be44b4(local_158);
  FUN_1446dcdd4(local_60,param_2);
  if (DAT_14cbe4310 == 0) {
    local_98 = 0;
  }
  else {
    local_98 = FUN_144837462(DAT_14cbe4310,local_60);
  }
  if (CONCAT44(uStack_44,local_48) != 0) {
    FUN_1400020a8();
  }
  lVar5 = local_98;
  plVar3 = local_150;
  if (local_98 != 0) {
    plVar2 = *(longlong **)(local_98 + 0x28);
    if (local_150 != plVar2) {
      local_150 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    local_148 = *(undefined4 *)(lVar5 + 0x30);
    FUN_140390f7a(local_98 + 0x38,local_130);
    lVar5 = local_98;
    if (param_4 == '\0') {
      local_168 = *(longlong **)(local_98 + 0x18);
      if (local_168 != (longlong *)0x0) {
        (**(code **)(*local_168 + 8))();
      }
      local_160 = *(undefined4 *)(lVar5 + 0x20);
    }
    else {
      FUN_14023409e(&local_178,(longlong *)(local_98 + 0x18),1);
      local_78 = local_40;
      local_60[0] = 0;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      local_48 = 0;
      local_80 = local_60;
      FUN_14010d304(&local_70);
      local_90 = local_178;
      local_88 = local_170;
      if (local_170 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_170 + 1) = (int)local_170[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_168,&local_90,&local_70);
      FUN_14007f2db(local_70,local_68);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      if (plStack_50 != (longlong *)0x0) {
        (**(code **)(*plStack_50 + 0x10))();
      }
      if (local_170 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_170 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_170)(local_170);
          LOCK();
          piVar1 = (int *)((longlong)local_170 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_170 + 0x10))(local_170);
          }
        }
      }
    }
    FUN_140008f88(local_140,&local_168);
    if (local_168 != (longlong *)0x0) {
      (**(code **)(*local_168 + 0x10))();
    }
    FUN_145be4752(local_120,local_98 + 0x60);
    FUN_1459de186(local_110,param_3);
    lVar5 = local_98;
    plVar2 = local_e0;
    local_f0 = *(undefined8 *)(local_98 + 0x70);
    local_e8 = *(undefined4 *)(local_98 + 0x78);
    local_e4 = *(undefined1 *)(local_98 + 0xac);
    local_e2 = *(undefined1 *)(local_98 + 0x7c);
    local_a8 = *(undefined4 *)(local_98 + 0xa0);
    local_a4 = *(undefined8 *)(local_98 + 0xa4);
    plVar3 = *(longlong **)(local_98 + 0x80);
    if (local_e0 != plVar3) {
      local_e0 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    local_d8 = *(undefined4 *)(lVar5 + 0x88);
    iVar4 = *(int *)(local_98 + 0x98) + -1;
    if (*(int *)(local_98 + 0x98) == 0) {
      iVar4 = 0;
    }
    FUN_1402980a2(local_d0,*(undefined8 *)(local_98 + 0x90),iVar4);
    local_9c = *(undefined1 *)(local_98 + 0xae);
  }
  uVar6 = FUN_1459dda8e(param_1,local_158);
  FUN_1459ddea2(local_158);
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144269292 FUN_144269292 body=574 status=ok
// SIG undefined FUN_144269292(void)

undefined4 FUN_144269292(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  longlong *local_110;
  undefined4 local_108;
  longlong *local_100;
  undefined4 local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [32];
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  longlong *local_a0;
  undefined4 local_98;
  undefined1 local_90 [40];
  undefined4 local_68;
  undefined8 local_64;
  undefined1 local_5c;
  longlong local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_145be44b4(local_118);
  FUN_1446dcdd4(local_50,param_2);
  if (DAT_14cbe4310 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = FUN_144837462(DAT_14cbe4310,local_50);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  lVar4 = local_58;
  plVar2 = local_110;
  if (local_58 != 0) {
    plVar1 = *(longlong **)(local_58 + 0x28);
    if (local_110 != plVar1) {
      local_110 = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    local_108 = *(undefined4 *)(lVar4 + 0x30);
    FUN_140390f7a(local_58 + 0x38,local_f0);
    lVar4 = local_58;
    plVar1 = local_100;
    plVar2 = *(longlong **)(local_58 + 0x18);
    if (local_100 != plVar2) {
      local_100 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    local_f8 = *(undefined4 *)(lVar4 + 0x20);
    FUN_145be4752(local_e0,local_58 + 0x60);
    FUN_1459de204(local_c0,param_3);
    lVar4 = local_58;
    plVar1 = local_a0;
    local_b0 = *(undefined8 *)(local_58 + 0x70);
    local_a8 = *(undefined4 *)(local_58 + 0x78);
    local_a4 = *(undefined1 *)(local_58 + 0xac);
    local_a2 = *(undefined1 *)(local_58 + 0x7c);
    local_a3 = *(undefined1 *)(local_58 + 0xad);
    local_68 = *(undefined4 *)(local_58 + 0xa0);
    local_64 = *(undefined8 *)(local_58 + 0xa4);
    plVar2 = *(longlong **)(local_58 + 0x80);
    if (local_a0 != plVar2) {
      local_a0 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    local_98 = *(undefined4 *)(lVar4 + 0x88);
    iVar3 = *(int *)(local_58 + 0x98) + -1;
    if (*(int *)(local_58 + 0x98) == 0) {
      iVar3 = 0;
    }
    FUN_1402980a2(local_90,*(undefined8 *)(local_58 + 0x90),iVar3);
    local_5c = *(undefined1 *)(local_58 + 0xae);
  }
  uVar5 = FUN_1459dda8e(param_1,local_118);
  FUN_1459ddea2(local_118);
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442694d2 FUN_1442694d2 body=652 status=ok
// SIG undefined FUN_1442694d2(void)

int FUN_1442694d2(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  int local_120 [2];
  longlong *local_118;
  undefined4 local_110;
  longlong *local_108;
  undefined4 local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [32];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined1 local_aa;
  longlong *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 local_6c;
  undefined1 local_64;
  longlong local_60;
  char *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1459ddc4e();
  FUN_145be44b4(local_120);
  local_58 = "change_character_name_db";
  local_50 = 0x18;
  local_4c = 0;
  uVar4 = FUN_14001a6c0(&local_58,1);
  local_128 = (ulonglong)uVar4;
  FUN_1446dcdd4(&local_58);
  if (DAT_14cbe4310 == 0) {
    local_60 = 0;
  }
  else {
    local_60 = FUN_144837462(DAT_14cbe4310,&local_58);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  lVar3 = local_60;
  plVar2 = local_118;
  if (local_60 != 0) {
    plVar1 = *(longlong **)(local_60 + 0x28);
    if (local_118 != plVar1) {
      local_118 = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    local_110 = *(undefined4 *)(lVar3 + 0x30);
    FUN_140390f7a(local_60 + 0x38,local_f8);
    lVar3 = local_60;
    plVar1 = local_108;
    plVar2 = *(longlong **)(local_60 + 0x18);
    if (local_108 != plVar2) {
      local_108 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    local_100 = *(undefined4 *)(lVar3 + 0x20);
    FUN_145be4752(local_e8,local_60 + 0x60);
    FUN_1459de204(local_c8,param_3);
    lVar3 = local_60;
    plVar1 = local_a8;
    local_b8 = *(undefined8 *)(local_60 + 0x70);
    local_b0 = *(undefined4 *)(local_60 + 0x78);
    local_ac = *(undefined1 *)(local_60 + 0xac);
    local_aa = *(undefined1 *)(local_60 + 0x7c);
    local_70 = *(undefined4 *)(local_60 + 0xa0);
    local_6c = *(undefined8 *)(local_60 + 0xa4);
    plVar2 = *(longlong **)(local_60 + 0x80);
    if (local_a8 != plVar2) {
      local_a8 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    local_a0 = *(undefined4 *)(lVar3 + 0x88);
    iVar5 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar5 = 0;
    }
    FUN_1402980a2(local_98,*param_2,iVar5);
    local_64 = *(undefined1 *)(local_60 + 0xae);
  }
  iVar5 = FUN_1459ddd36(param_1,local_120);
  if (iVar5 == -1) {
    FUN_148e37118(param_1,local_120);
    iVar5 = local_120[0];
  }
  FUN_1459ddea2(local_120);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14426981c FUN_14426981c body=13428 status=ok
// SIG undefined FUN_14426981c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14426981c(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 uVar14;
  PVOID pvVar15;
  longlong *******ppppppplVar16;
  PVOID pvVar17;
  longlong lVar18;
  longlong ******pppppplVar19;
  longlong ******pppppplVar20;
  size_t sVar21;
  longlong lVar22;
  ulonglong *puVar23;
  longlong ******pppppplVar24;
  longlong ******pppppplVar25;
  uint uVar26;
  int iVar27;
  uint *puVar28;
  undefined1 *puVar29;
  undefined8 *puVar30;
  longlong *******ppppppplVar31;
  longlong *****ppppplVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong *******ppppppplVar35;
  longlong *****ppppplVar36;
  int iVar37;
  longlong ******pppppplVar38;
  uint uVar40;
  undefined8 *puVar41;
  longlong *******ppppppplVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  ulonglong uVar45;
  longlong ******pppppplVar46;
  longlong *plVar47;
  int iVar48;
  longlong lVar49;
  ulonglong uVar50;
  undefined4 *puVar51;
  PSRWLOCK pRVar52;
  wchar_t *pwVar53;
  int iVar54;
  longlong ******pppppplVar55;
  int iVar56;
  PSRWLOCK pRVar57;
  longlong *plVar58;
  bool bVar59;
  float fVar60;
  undefined1 auStack_558 [32];
  undefined4 local_538;
  undefined4 local_530;
  undefined4 local_528;
  undefined8 local_520;
  undefined2 *local_518;
  undefined1 *local_510;
  undefined1 *local_508;
  longlong *******local_500;
  undefined1 *local_4f8;
  code *local_4f0;
  longlong *******local_4e8;
  PSRWLOCK local_4e0;
  longlong *local_4d8;
  longlong *local_4d0;
  ulonglong local_4c8;
  longlong local_4c0;
  longlong *******local_4b8;
  ulonglong *local_4b0;
  ulonglong *local_4a8;
  longlong local_4a0;
  PSRWLOCK local_498;
  longlong *******local_490;
  longlong *local_488;
  ulonglong uStack_480;
  undefined1 local_469;
  longlong ******local_468;
  undefined8 uStack_460;
  longlong ******local_458;
  undefined4 local_450;
  longlong *******local_448;
  longlong *******ppppppplStack_440;
  longlong *******local_438;
  longlong *******ppppppplStack_430;
  longlong *******local_428;
  undefined8 uStack_420;
  longlong local_418;
  undefined8 uStack_410;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined8 local_3ec;
  int local_3e4;
  undefined1 local_3e0 [8];
  undefined1 *local_3d8;
  int local_3d0;
  longlong ******local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_39c;
  int local_394;
  undefined1 local_390 [8];
  undefined1 *local_388;
  int local_380;
  longlong *******local_378;
  longlong *******ppppppplStack_370;
  undefined1 *local_368;
  ulonglong local_360;
  longlong *****appppplStack_358 [4];
  longlong *****local_332 [27];
  undefined1 local_258 [480];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  longlong ******pppppplVar39;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_558;
  local_4c0 = *(longlong *)(param_1 + -0x10);
  if (local_4c0 == 0) goto LAB_144269890;
  if (DAT_14cbadd90 == 0) {
    local_500 = (longlong *******)&local_378;
    local_378 = (longlong *******)FUN_141030f22;
    local_4f0 = FUN_14081d0ea;
    local_4f8 = &LAB_1459f2e4c;
    local_508 = &LAB_148c39de3;
    local_510 = &LAB_1457a9eb2;
    local_518 = &DAT_149e063b2;
    local_520 = 0;
    local_528 = 0x10000004;
    local_530 = 0x10;
    local_538 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90);
  }
  if ((*(int *)(*(longlong *)(local_4c0 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(local_4c0 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_144269890;
  local_4a0 = param_1 + -0x30;
  plVar11 = (longlong *)FUN_14663d938(local_4a0);
  plVar11 = (longlong *)*plVar11;
  local_498 = (PSRWLOCK)(plVar11 + 0x10);
  AcquireSRWLockExclusive(local_498);
  *(int *)(plVar11 + 0xf) = (int)plVar11[0xf] + 1;
  *(int *)(plVar11 + 2) = (int)plVar11[2] + 1;
  if ((int)plVar11[1] == 0) {
    local_488 = (longlong *)0x0;
    uStack_480 = 0;
    iVar54 = 0;
    local_4d0 = plVar11;
    if (DAT_14cbc8d78 != 0) {
      FUN_1457e002c(DAT_14cbc8d78,&local_488);
      uVar34 = uStack_480;
      plVar47 = local_488;
      iVar48 = (int)uStack_480;
      uVar45 = (ulonglong)(int)uStack_480;
      iVar54 = 0;
      if (uVar45 != 0) {
        lVar49 = *local_488;
        bVar59 = true;
        if ((lVar49 != 0) && (*(char *)(lVar49 + 0x60) == '\x01')) {
          plVar11 = *(longlong **)(lVar49 + 0x68);
          if (*(code **)(*plVar11 + 0x50) != FUN_144828418) {
            plVar11 = (longlong *)(**(code **)(*plVar11 + 0x50))();
          }
          FUN_1447a1fc0(plVar11);
          plVar11 = *(longlong **)(lVar49 + 0x68);
          pcVar3 = *(code **)(*plVar11 + 0x28);
          if (pcVar3 == FUN_14482841c) {
            plVar12 = plVar11 + 3;
            if (plVar11[5] != 0) {
              plVar12 = (longlong *)(plVar11[5] + 8);
            }
          }
          else if (pcVar3 == (code *)&LAB_14010c34c) {
            plVar12 = plVar11 + 2;
          }
          else {
            plVar12 = (longlong *)(*pcVar3)(plVar11);
          }
          bVar59 = (int)plVar12[1] < 2;
        }
        iVar54 = 0;
        uVar50 = 0;
        do {
          local_4e8 = (longlong *******)CONCAT44(local_4e8._4_4_,iVar54);
          while( true ) {
            iVar37 = (int)uVar50;
            uVar50 = (ulonglong)(iVar37 + 1U);
            if (iVar48 <= (int)(iVar37 + 1U)) break;
            uVar50 = (longlong)iVar37 + 1;
            bVar5 = true;
            do {
              lVar49 = plVar47[uVar50];
              if ((lVar49 == 0) || (*(char *)(lVar49 + 0x60) == '\0')) {
                if (bVar59 == false) goto LAB_144269a96;
              }
              else {
                plVar11 = *(longlong **)(lVar49 + 0x68);
                if (*(code **)(*plVar11 + 0x50) != FUN_144828418) {
                  plVar11 = (longlong *)(**(code **)(*plVar11 + 0x50))();
                }
                FUN_1447a1fc0(plVar11);
                plVar11 = *(longlong **)(lVar49 + 0x68);
                pcVar3 = *(code **)(*plVar11 + 0x28);
                if (pcVar3 == FUN_14482841c) {
                  plVar12 = plVar11 + 3;
                  if (plVar11[5] != 0) {
                    plVar12 = (longlong *)(plVar11[5] + 8);
                  }
                }
                else if (pcVar3 == (code *)&LAB_14010c34c) {
                  plVar12 = plVar11 + 2;
                }
                else {
                  plVar12 = (longlong *)(*pcVar3)(plVar11);
                }
                if ((int)plVar12[1] < 2 != bVar59) goto LAB_144269a77;
              }
              uVar50 = uVar50 + 1;
              bVar5 = (longlong)uVar50 < (longlong)uVar45;
            } while (uVar50 != uVar45);
            uVar50 = uVar34 & 0xffffffff;
LAB_144269a77:
            if (bVar59 == false) goto LAB_144269a96;
            bVar59 = false;
            if (!bVar5) goto LAB_144269acf;
          }
          if (bVar59 != false) {
LAB_144269acf:
            iVar54 = (int)local_4e8;
            break;
          }
          bVar5 = false;
LAB_144269a96:
          iVar27 = (int)uVar50 - iVar37;
          iVar54 = (int)local_4e8;
          if ((int)local_4e8 != iVar37) {
            memmove(plVar47 + (int)local_4e8,plVar47 + iVar37,(longlong)iVar27 << 3);
          }
          iVar54 = iVar54 + iVar27;
          bVar59 = true;
        } while (bVar5);
        uStack_480 = CONCAT44(uStack_480._4_4_,iVar54);
        plVar11 = local_4d0;
        if (iVar54 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar54);
        }
      }
    }
    if (*(int *)((longlong)plVar11 + 0xc) < iVar54) {
      FUN_146641390(plVar11,iVar54);
      iVar54 = (int)uStack_480;
    }
    plVar47 = local_488;
    plVar11 = local_4d0;
    if (iVar54 != 0) {
      lVar49 = 0;
      do {
        uVar14 = *(undefined8 *)((longlong)plVar47 + lVar49);
        iVar48 = (int)plVar11[1];
        *(uint *)(plVar11 + 1) = iVar48 + 1U;
        if (*(uint *)((longlong)plVar11 + 0xc) < iVar48 + 1U) {
          FUN_148e3c462(plVar11,iVar48);
        }
        lVar33 = (longlong)iVar48 * 0x110 + *plVar11;
        thunk_FUN_14108e5a6(lVar33);
        FUN_144243ad0(lVar33,uVar14);
        FUN_144244c1e(lVar33,local_4c0);
        lVar49 = lVar49 + 8;
      } while ((longlong)iVar54 * 8 != lVar49);
    }
    plVar12 = local_4d0;
    plVar47 = plVar11 + 3;
    local_4d8 = plVar47;
    if ((int)plVar11[4] != *(int *)((longlong)plVar11 + 0x4c)) {
      plVar13 = plVar11 + 10;
      if ((longlong *)plVar11[0xb] != (longlong *)0x0) {
        plVar13 = (longlong *)plVar11[0xb];
      }
      iVar54 = (int)plVar11[0xc];
      iVar48 = iVar54 + 3;
      if (-1 < iVar54) {
        iVar48 = iVar54;
      }
      plVar58 = plVar11;
      if ((int)plVar11[4] - *(int *)((longlong)plVar11 + 0x4c) < iVar48 >> 2) {
        iVar54 = (int)plVar11[8];
        if (iVar54 == 0) {
          uVar50 = 1;
          iVar48 = 0;
          uVar34 = 0;
          iVar37 = 0;
        }
        else {
          puVar28 = (uint *)plVar11[7];
          if ((uint *)plVar11[7] == (uint *)0x0) {
            puVar28 = (uint *)(plVar11 + 5);
          }
          uVar40 = *puVar28;
          if (uVar40 == 0) {
            iVar48 = iVar54 + 0x1e;
            if (-1 < iVar54 + -1) {
              iVar48 = iVar54 + -1;
            }
            uVar34 = 0;
            uVar45 = (ulonglong)(uint)(iVar48 >> 5);
            if (iVar48 >> 5 < 1) {
              uVar45 = uVar34;
            }
            iVar48 = 0;
            do {
              if (uVar45 == uVar34) goto LAB_144269c8f;
              iVar48 = iVar48 + 0x20;
              uVar40 = puVar28[uVar34 + 1];
              uVar34 = uVar34 + 1;
            } while (uVar40 == 0);
          }
          else {
            iVar48 = 0;
            uVar34 = 0;
          }
          uVar50 = (ulonglong)(-uVar40 & uVar40);
          uVar45 = uVar50 * 2 + 1;
          lVar49 = 0x3f;
          if (uVar45 != 0) {
            for (; uVar45 >> lVar49 == 0; lVar49 = lVar49 + -1) {
            }
          }
          iVar37 = (iVar48 - ((uint)lVar49 ^ 0x3f)) + 0x3e;
          if (iVar54 <= iVar37) {
            iVar37 = iVar54;
          }
        }
        if (iVar37 != iVar54) {
          uVar40 = 0xffffffff;
          do {
            *(undefined4 *)
             ((longlong)plVar13 +
             (longlong)*(int *)(plVar58[3] + 0x1c + (longlong)iVar37 * 0x20) * 4) = 0xffffffff;
            uVar40 = ~(uint)uVar50 & uVar40;
            puVar28 = (uint *)plVar58[7];
            if ((uint *)plVar58[7] == (uint *)0x0) {
              puVar28 = (uint *)(plVar11 + 5);
            }
            iVar27 = (int)plVar58[8];
            iVar37 = (int)uVar34;
            lVar49 = (longlong)iVar37;
            uVar26 = puVar28[lVar49] & uVar40;
            if (uVar26 == 0) {
              iVar56 = iVar27 + 0x1e;
              if (-1 < iVar27 + -1) {
                iVar56 = iVar27 + -1;
              }
              iVar56 = iVar56 >> 5;
              iVar48 = iVar48 + 0x20;
              iVar10 = iVar56;
              if (iVar56 < iVar37) {
                iVar10 = iVar37;
              }
              if (iVar37 < iVar56) {
                lVar33 = 0;
                do {
                  uVar26 = puVar28[lVar49 + lVar33 + 1];
                  if (uVar26 != 0) {
                    uVar34 = (ulonglong)(iVar37 + (int)lVar33 + 1);
                    uVar40 = 0xffffffff;
                    goto LAB_14426cb13;
                  }
                  iVar48 = iVar48 + 0x20;
                  lVar33 = lVar33 + 1;
                } while (iVar10 - lVar49 != lVar33);
                uVar40 = 0xffffffff;
                lVar49 = (longlong)iVar10;
              }
              uVar34 = lVar49 + 1U & 0xffffffff;
              iVar37 = iVar27;
            }
            else {
LAB_14426cb13:
              uVar50 = (ulonglong)(-uVar26 & uVar26);
              uVar45 = uVar50 * 2 + 1;
              lVar49 = 0x3f;
              if (uVar45 != 0) {
                for (; uVar45 >> lVar49 == 0; lVar49 = lVar49 + -1) {
                }
              }
              iVar37 = (iVar48 - ((uint)lVar49 ^ 0x3f)) + 0x3e;
              if (iVar27 <= iVar37) {
                iVar37 = iVar27;
              }
            }
            plVar58 = local_4d0;
          } while (iVar37 != iVar54);
        }
      }
      else if (0 < iVar54) {
        lVar49 = 0;
        do {
          *(undefined4 *)((longlong)plVar13 + lVar49 * 4) = 0xffffffff;
          lVar49 = lVar49 + 1;
        } while (lVar49 < (int)plVar11[0xc]);
      }
LAB_144269c8f:
      iVar54 = (int)plVar58[8];
      if (iVar54 == 0) {
        uVar34 = 0;
        uVar50 = 1;
        iVar48 = 0;
        iVar37 = 0;
      }
      else {
        puVar28 = (uint *)plVar58[7];
        if ((uint *)plVar58[7] == (uint *)0x0) {
          puVar28 = (uint *)(plVar58 + 5);
        }
        uVar40 = *puVar28;
        if (uVar40 == 0) {
          iVar48 = iVar54 + 0x1e;
          if (-1 < iVar54 + -1) {
            iVar48 = iVar54 + -1;
          }
          uVar34 = 0;
          uVar45 = (ulonglong)(uint)(iVar48 >> 5);
          if (iVar48 >> 5 < 1) {
            uVar45 = uVar34;
          }
          iVar48 = 0;
          do {
            if (uVar45 == uVar34) goto LAB_144269de8;
            iVar48 = iVar48 + 0x20;
            uVar40 = puVar28[uVar34 + 1];
            uVar34 = uVar34 + 1;
          } while (uVar40 == 0);
        }
        else {
          uVar34 = 0;
          iVar48 = 0;
        }
        uVar50 = (ulonglong)(-uVar40 & uVar40);
        uVar45 = uVar50 * 2 + 1;
        lVar49 = 0x3f;
        if (uVar45 != 0) {
          for (; uVar45 >> lVar49 == 0; lVar49 = lVar49 + -1) {
          }
        }
        iVar37 = (iVar48 - ((uint)lVar49 ^ 0x3f)) + 0x3e;
        if (iVar54 <= iVar37) {
          iVar37 = iVar54;
        }
      }
      if (iVar37 < iVar54) {
        uVar40 = 0xffffffff;
        do {
          if (*(longlong *)(*plVar47 + (longlong)iVar37 * 0x20) != 0) {
            FUN_1400020a8();
            iVar54 = (int)plVar12[8];
          }
          uVar40 = uVar40 & ~(uint)uVar50;
          puVar28 = (uint *)plVar12[7];
          if (puVar28 == (uint *)0x0) {
            puVar28 = (uint *)(plVar58 + 5);
          }
          iVar37 = (int)uVar34;
          lVar49 = (longlong)iVar37;
          uVar26 = puVar28[lVar49] & uVar40;
          if (uVar26 == 0) {
            iVar27 = iVar54 + 0x1e;
            if (-1 < iVar54 + -1) {
              iVar27 = iVar54 + -1;
            }
            iVar27 = iVar27 >> 5;
            iVar56 = iVar27;
            if (iVar27 < iVar37) {
              iVar56 = iVar37;
            }
            if (iVar27 <= iVar37) break;
            lVar33 = 0;
            while( true ) {
              iVar48 = iVar48 + 0x20;
              uVar26 = (puVar28 + lVar49 + 1)[lVar33];
              if (uVar26 != 0) break;
              lVar33 = lVar33 + 1;
              if (iVar56 - lVar49 == lVar33) goto LAB_144269de8;
            }
            uVar34 = (ulonglong)(iVar37 + (int)lVar33 + 1);
            uVar40 = 0xffffffff;
          }
          uVar50 = (ulonglong)(-uVar26 & uVar26);
          uVar45 = uVar50 * 2 + 1;
          lVar49 = 0x3f;
          if (uVar45 != 0) {
            for (; uVar45 >> lVar49 == 0; lVar49 = lVar49 + -1) {
            }
          }
          iVar37 = (iVar48 - ((uint)lVar49 ^ 0x3f)) + 0x3e;
        } while (iVar37 < iVar54);
      }
LAB_144269de8:
      plVar11 = local_4d0;
      *(undefined4 *)(local_4d0 + 4) = 0;
      if (*(int *)((longlong)local_4d0 + 0x24) < 0) {
        FUN_1446f4a44(local_4d8,0);
      }
      plVar11[9] = 0xffffffff;
      *(undefined4 *)(plVar11 + 8) = 0;
    }
    local_78 = (char *)CONCAT71(local_78._1_7_,0xe);
    FUN_1400b22c2(&local_3c8,"discovered");
    local_378 = &local_3c8;
    ppppppplStack_370 = (longlong *******)&local_78;
    FUN_14427748a(local_4d8,&local_418);
    if (local_3c8 != (longlong ******)0x0) {
      FUN_1400020a8();
    }
    ppppppplVar42 = (longlong *******)0x0;
    local_3a8 = 0;
    local_3a0 = 0;
    local_3c8 = (longlong ******)0x0;
    uStack_3c0 = 0;
    local_39c = 0xffffffff00000080;
    local_394 = 0;
    local_388 = (undefined1 *)0x0;
    local_380 = 0;
    local_3f8 = 0;
    local_3f0 = 0;
    local_418 = 0;
    uStack_410 = 0;
    local_3ec = 0xffffffff00000080;
    local_3e4 = 0;
    local_3d8 = (undefined1 *)0x0;
    local_3d0 = 0;
    if ((longlong)(int)plVar11[1] != 0) {
      pRVar57 = (PSRWLOCK)*plVar11;
      pRVar52 = pRVar57 + (longlong)(int)plVar11[1] * 0x22;
      ppppppplVar42 = (longlong *******)0x0;
      local_4c8 = 0;
      local_4e0 = pRVar52;
LAB_144269f2a:
      pvVar15 = pRVar57[0x1a].Ptr;
      if (pvVar15 == (PVOID)0x0) {
        uVar14 = FUN_140b7bb2c();
        pvVar15 = (PVOID)FUN_14477b664(uVar14);
        pRVar57[0x1a].Ptr = pvVar15;
      }
      pvVar17 = pRVar57[0x1b].Ptr;
      if (pvVar17 != (PVOID)0x0) {
LAB_144269f5a:
        FUN_144244d52(&local_378,pvVar17);
        local_448 = local_378;
        ppppppplVar16 = local_378;
        if (local_378 != (longlong *******)0x0) {
          if ((int)uStack_3c0 != local_394) {
            uVar40 = (uint)((ulonglong)local_378 >> 0x10);
            uVar26 = (uint)local_378 & 0xffff;
            puVar29 = local_388;
            if (local_388 == (undefined1 *)0x0) {
              puVar29 = local_390;
            }
            for (iVar54 = *(int *)(puVar29 +
                                  (ulonglong)
                                  (local_380 - 1U &
                                  (int)((ulonglong)local_378 >> 0x20) +
                                  ((uint)local_378 << 0x10 | uVar26) +
                                  (uVar40 << 0x13 | uVar40 & 0xffff) + (uVar26 >> 4)) * 4);
                iVar54 != -1; iVar54 = *(int *)(local_3c8 + (longlong)iVar54 * 0x13 + 0x12)) {
              if ((longlong *******)local_3c8[(longlong)iVar54 * 0x13] == local_378)
              goto LAB_14426a24d;
            }
          }
          FUN_144244692(&local_78,pvVar17);
          ppppppplVar16 = (longlong *******)local_78;
          if ((*(longlong *******)local_78)[10] != (longlong *****)FUN_144828418) {
            ppppppplVar16 = (longlong *******)(*(code *)(*(longlong *******)local_78)[10])();
          }
          FUN_1447a1fc0(ppppppplVar16);
          ppppplVar32 = (*(longlong *******)local_78)[5];
          if (ppppplVar32 == (longlong *****)FUN_14482841c) {
            ppppppplVar16 = (longlong *******)((longlong)local_78 + 0x18);
            if (*(longlong *******)((longlong)local_78 + 0x28) != (longlong ******)0x0) {
              ppppppplVar16 = (longlong *******)(*(longlong *******)((longlong)local_78 + 0x28) + 1)
              ;
            }
          }
          else if (ppppplVar32 == (longlong *****)&LAB_14010c34c) {
            ppppppplVar16 = (longlong *******)((longlong)local_78 + 0x10);
          }
          else {
            ppppppplVar16 = (longlong *******)(*(code *)ppppplVar32)(local_78);
          }
          if (1 < *(int *)(ppppppplVar16 + 1)) {
            local_378 = (longlong *******)&local_448;
            FUN_144277c6a(&local_3c8,&local_428,&local_378);
            pppppplVar20 = local_3c8;
            iVar54 = (int)local_428;
            local_3c8[(longlong)(int)local_428 * 0x13 + 1] = (longlong *****)local_448;
            ppppppplVar16 = (longlong *******)local_3c8[(longlong)(int)local_428 * 0x13 + 2];
            if (ppppppplVar16 != (longlong *******)local_78) {
              local_3c8[(longlong)(int)local_428 * 0x13 + 2] = (longlong *****)local_78;
              if ((longlong *******)local_78 != (longlong *******)0x0) {
                (*(code *)(*(longlong *******)local_78)[1])();
              }
              if (ppppppplVar16 != (longlong *******)0x0) {
                (*(code *)(*ppppppplVar16)[2])(ppppppplVar16);
              }
            }
            *(int *)(pppppplVar20 + (longlong)iVar54 * 0x13 + 3) = (int)uStack_70;
            *(undefined1 *)((longlong)pppppplVar20 + (longlong)iVar54 * 0x98 + 0x24) = 1;
            pppppplVar20[(longlong)iVar54 * 0x13 + 5] = (longlong *****)0x1;
            lVar49 = *(longlong *)((longlong)pvVar17 + 0x20);
            if (lVar49 == 0) {
              uVar14 = FUN_1418c9e66();
              lVar49 = FUN_14477b664(uVar14);
              *(longlong *)((longlong)pvVar17 + 0x20) = lVar49;
            }
            lVar33 = *(longlong *)((longlong)pvVar17 + 0x28);
            if (lVar33 == 0) {
              if ((lVar49 != 0) && (*(longlong *)((longlong)pvVar17 + 0x18) != 0)) {
                plVar11 = *(longlong **)(lVar49 + 0xb8);
                if ((plVar11 == (longlong *)0x0) ||
                   (cVar7 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar7 == '\0')) {
                  *(undefined8 *)((longlong)pvVar17 + 0x28) = 0;
                }
                else {
                  uVar14 = (**(code **)(*plVar11 + 0x110))(plVar11);
                  lVar33 = FUN_144aff482(uVar14,(longlong *)((longlong)pvVar17 + 0x18));
                  *(longlong *)((longlong)pvVar17 + 0x28) = lVar33;
                  if (lVar33 != 0) goto LAB_14426a13b;
                }
              }
            }
            else {
LAB_14426a13b:
              *(undefined4 *)(pppppplVar20 + (longlong)iVar54 * 0x13 + 4) =
                   *(undefined4 *)(lVar33 + 0x38);
            }
            local_468 = (longlong ******)CONCAT71(local_468._1_7_,2);
            FUN_1400021e4(&local_448,&local_438);
            uStack_420 = ppppppplStack_430;
            uVar40 = (int)ppppppplStack_430 - 1;
            if ((int)ppppppplStack_430 == 0) {
              uVar40 = 0;
            }
            if (0 < (int)uVar40) {
              uVar34 = 0;
              do {
                uVar2 = *(ushort *)((longlong)local_438 + uVar34 * 2);
                *(ushort *)((longlong)local_438 + uVar34 * 2) =
                     (ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2;
                uVar34 = uVar34 + 1;
              } while (uVar40 != uVar34);
            }
            local_428 = local_438;
            local_438 = (longlong *******)0x0;
            ppppppplStack_430 = (longlong *******)0x0;
            local_378 = (longlong *******)&local_428;
            ppppppplStack_370 = &local_468;
            ppppppplVar16 = (longlong *******)FUN_14427748a(local_4d8,&local_458,&local_378);
            if (local_428 != (longlong *******)0x0) {
              ppppppplVar16 = (longlong *******)FUN_1400020a8();
            }
            if (local_438 != (longlong *******)0x0) {
              ppppppplVar16 = (longlong *******)FUN_1400020a8();
            }
          }
          if ((longlong *******)local_78 != (longlong *******)0x0) {
            ppppppplVar16 = (longlong *******)(*(code *)(*(longlong *******)local_78)[2])();
          }
        }
LAB_14426a24d:
        pppppplVar20 = *(longlong *******)((longlong)pvVar17 + 0xa0);
        iVar54 = 0;
        local_458 = pppppplVar20;
        if (pppppplVar20 != (longlong ******)0x0) {
          lVar49 = *(longlong *)((longlong)pvVar17 + 0xa8);
          if (lVar49 == 0) {
            uVar14 = FUN_14086ad12();
            lVar49 = FUN_14477b664(uVar14);
            *(longlong *)((longlong)pvVar17 + 0xa8) = lVar49;
          }
          ppppppplVar16 = *(longlong ********)((longlong)pvVar17 + 0xb0);
          if (ppppppplVar16 == (longlong *******)0x0) {
            iVar54 = 0;
            if (lVar49 != 0) {
              if (*(longlong *)((longlong)pvVar17 + 0xa0) != 0) {
                plVar11 = *(longlong **)(lVar49 + 0xb8);
                if ((plVar11 != (longlong *)0x0) &&
                   (cVar7 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar7 != '\0')) {
                  uVar14 = (**(code **)(*plVar11 + 0x110))(plVar11);
                  ppppppplVar16 =
                       (longlong *******)
                       FUN_144aff482(uVar14,(longlong *)((longlong)pvVar17 + 0xa0));
                  *(longlong ********)((longlong)pvVar17 + 0xb0) = ppppppplVar16;
                  iVar54 = 0;
                  if (ppppppplVar16 != (longlong *******)0x0) goto LAB_14426a297;
                  goto LAB_14426aef9;
                }
                *(undefined8 *)((longlong)pvVar17 + 0xb0) = 0;
              }
LAB_14426aef7:
              iVar54 = 0;
            }
            goto LAB_14426aef9;
          }
LAB_14426a297:
          local_4e8 = ppppppplVar16;
          plVar11 = (longlong *)FUN_1403155a4();
          if (plVar11 == (longlong *)0x0) {
LAB_14426ab3b:
            if ((int)uStack_410 != local_3e4) {
              uVar40 = (uint)((ulonglong)pppppplVar20 >> 0x10);
              uVar26 = (uint)pppppplVar20 & 0xffff;
              uVar40 = (int)((ulonglong)pppppplVar20 >> 0x20) +
                       ((uint)pppppplVar20 << 0x10 | uVar26) + (uVar40 << 0x13 | uVar40 & 0xffff) +
                       (uVar26 >> 4);
              puVar29 = local_3d8;
              if (local_3d8 == (undefined1 *)0x0) {
                puVar29 = local_3e0;
              }
              iVar54 = *(int *)(puVar29 + (ulonglong)(local_3d0 - 1U & uVar40) * 4);
              while (iVar54 != -1) {
                lVar49 = local_418 + (longlong)iVar54 * 0x98;
                if (*(longlong *******)(local_418 + (longlong)iVar54 * 0x98) == pppppplVar20) {
                  puVar41 = (undefined8 *)(lVar49 + 8);
                  if (puVar41 != (undefined8 *)0x0 && lVar49 != 0) {
                    if (*(char *)(lVar49 + 0x24) != '\0') goto LAB_14426aef7;
                    plVar11 = (longlong *)(lVar49 + 0x30);
                    if (*(int *)(lVar49 + 0x38) == *(int *)(lVar49 + 100)) goto LAB_14426af75;
                    lVar33 = lVar49 + 0x68;
                    if (*(longlong *)(lVar49 + 0x70) != 0) {
                      lVar33 = *(longlong *)(lVar49 + 0x70);
                    }
                    iVar54 = *(int *)(lVar33 + (ulonglong)(*(int *)(lVar49 + 0x78) - 1U & uVar40) *
                                               4);
                    if (iVar54 == -1) goto LAB_14426af75;
                    goto LAB_14426af5d;
                  }
                  break;
                }
                iVar54 = *(int *)(lVar49 + 0x90);
              }
            }
            local_378 = &local_458;
            FUN_144277c6a(&local_418,&local_428,&local_378);
            plVar11 = (longlong *)(local_418 + (longlong)(int)local_428 * 0x98 + 8);
            lVar49 = 1;
          }
          else {
            puVar51 = (undefined4 *)plVar11[1];
            if (puVar51 == (undefined4 *)0x0) {
              puVar51 = &DAT_14c9485f0;
            }
            if (DAT_14c947fe0 == 0) {
              lVar49 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar49);
              DAT_14c947fe0 = lVar49;
            }
            FUN_140045924(DAT_14c947fe0,&local_378,puVar51,1);
            local_438 = local_378;
            if ((int)uStack_410 != local_3e4) {
              uVar40 = (uint)((ulonglong)local_378 >> 0x10);
              uVar26 = (uint)local_378 & 0xffff;
              puVar29 = local_3d8;
              if (local_3d8 == (undefined1 *)0x0) {
                puVar29 = local_3e0;
              }
              iVar54 = *(int *)(puVar29 +
                               (ulonglong)
                               (local_3d0 - 1U &
                               (int)((ulonglong)local_378 >> 0x20) +
                               ((uint)local_378 << 0x10 | uVar26) +
                               (uVar40 << 0x13 | uVar40 & 0xffff) + (uVar26 >> 4)) * 4);
              while (iVar54 != -1) {
                lVar49 = local_418 + (longlong)iVar54 * 0x98;
                if (*(longlong ********)(local_418 + (longlong)iVar54 * 0x98) == local_378) {
                  if (lVar49 != 0) {
                    puVar41 = (undefined8 *)(lVar49 + 8);
                    pRVar52 = local_4e0;
                    if (*(char *)(lVar49 + 0x24) != '\x01') goto LAB_14426a92c;
                    *(undefined1 *)(lVar49 + 0x24) = 0;
                    FUN_1400021e4(puVar41,&local_78);
                    ppppppplVar16 = uStack_70;
                    pwVar53 = DAT_14cbd6548;
                    iVar54 = (int)uStack_70;
                    if ((int)uStack_70 < 2) {
                      local_378 = (longlong *******)0x0;
                      lVar33 = (longlong)(int)DAT_14cbd6550;
                      ppppppplStack_370 =
                           (longlong *******)CONCAT44(ppppppplStack_370._4_4_,DAT_14cbd6550);
                      if (lVar33 == 0) {
                        ppppppplStack_370 = (longlong *******)(ulonglong)DAT_14cbd6550;
                      }
                      else {
                        FUN_1446dd670(&local_378,DAT_14cbd6550,0);
                        memcpy(local_378,pwVar53,lVar33 * 2);
                      }
                    }
                    else {
                      iVar48 = DAT_14cbd6550 - 1;
                      if (DAT_14cbd6550 == 0) {
                        iVar48 = 0;
                      }
                      local_378 = (longlong *******)local_78;
                      iVar27 = uStack_70._4_4_;
                      local_78 = (char *)0x0;
                      uStack_70 = (longlong *******)0x0;
                      ppppppplStack_370 = ppppppplVar16;
                      iVar37 = iVar48 + iVar54;
                      if (iVar37 < iVar54) {
                    /* WARNING: Subroutine does not return */
                        FUN_1456afac4((longlong)iVar48);
                      }
                      if (iVar27 < iVar37) {
                        FUN_1446f8c06(&local_378);
                      }
                      FUN_1400020e8(&local_378,DAT_14cbd6548,iVar48);
                    }
                    iVar54 = (int)ppppppplStack_370 + -1;
                    if ((int)ppppppplStack_370 == 0) {
                      iVar54 = 0;
                    }
                    FUN_1446f82e2(&local_428,iVar54,local_378,1);
                    *puVar41 = local_428;
                    if (local_378 != (longlong *******)0x0) {
                      FUN_1400020a8();
                    }
                    if ((longlong *******)local_78 != (longlong *******)0x0) {
                      FUN_1400020a8();
                    }
                    local_428 = local_438;
                    ppppppplVar16 = (longlong *******)FUN_14001cc68(0x98);
                    ppppppplVar16[1] = (longlong ******)&DAT_100000001;
                    *ppppppplVar16 = (longlong ******)&PTR_FUN_14b9ad810;
                    memset(ppppppplVar16 + 2,0,0x88);
                    if ((*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x110) < DAT_14c844850) &&
                       (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
                      DAT_14c844840 = (longlong ******)FUN_14001cc68(0x30,0x10);
                      DAT_14c844840[1] = (longlong *****)0x0;
                      *DAT_14c844840 = (longlong *****)&PTR_FUN_149e19310;
                      DAT_14c844840[2] = (longlong *****)0xffffffffffffffff;
                      DAT_14c844840[3] = (longlong *****)0x0;
                      DAT_14c844840[4] = (longlong *****)0x0;
                      DAT_14c844840[5] = (longlong *****)0x0;
                      if (DAT_14c844840 != (longlong ******)0x0) {
                        LOCK();
                        *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
                        UNLOCK();
                      }
                      DAT_14c844848 = 0;
                      atexit(FUN_142760bef);
                      _Init_thread_footer(&DAT_14c844850);
                    }
                    pppppplVar20 = DAT_14c844840;
                    ppppppplVar16[3] = DAT_14c844840;
                    if (pppppplVar20 != (longlong ******)0x0) {
                      if ((*pppppplVar20)[1] == (longlong ****)FUN_144907e24) {
                        LOCK();
                        *(int *)(pppppplVar20 + 1) = *(int *)(pppppplVar20 + 1) + 1;
                        UNLOCK();
                      }
                      else {
                        (*(code *)(*pppppplVar20)[1])();
                      }
                    }
                    *(undefined4 *)(ppppppplVar16 + 4) = 0;
                    *(undefined4 *)(ppppppplVar16 + 5) = 0;
                    *(undefined1 *)((longlong)ppppppplVar16 + 0x2c) = 0;
                    ppppppplVar16[0xb] = (longlong ******)0x0;
                    *(undefined4 *)(ppppppplVar16 + 0xc) = 0;
                    ppppppplVar16[6] = (longlong ******)0x0;
                    ppppppplVar16[7] = (longlong ******)0x0;
                    ppppppplVar16[8] = (longlong ******)0x0;
                    *(undefined8 *)((longlong)ppppppplVar16 + 100) = 0xffffffff00000080;
                    *(undefined4 *)((longlong)ppppppplVar16 + 0x6c) = 0;
                    ppppppplVar16[0xf] = (longlong ******)0x0;
                    *(undefined4 *)(ppppppplVar16 + 0x10) = 0;
                    ppppppplVar16[0x11] = (longlong ******)0x0;
                    ppppppplVar16[0x12] = (longlong ******)0x0;
                    if (ppppppplVar16 != (longlong *******)0x0) {
                      LOCK();
                      *(int *)(ppppppplVar16 + 1) = *(int *)(ppppppplVar16 + 1) + 1;
                      UNLOCK();
                    }
                    local_378 = (longlong *******)&local_428;
                    ppppppplStack_370 = (longlong *******)&local_78;
                    local_78 = (char *)(ppppppplVar16 + 2);
                    uStack_70 = ppppppplVar16;
                    FUN_144278700((longlong *)(lVar49 + 0x30),&local_448,&local_378);
                    ppppppplVar31 = uStack_70;
                    puVar30 = *(undefined8 **)
                               (*(longlong *)(lVar49 + 0x30) + 8 + (longlong)(int)local_448 * 0x20);
                    if (uStack_70 != (longlong *******)0x0) {
                      LOCK();
                      ppppppplVar35 = uStack_70 + 1;
                      *(int *)ppppppplVar35 = *(int *)ppppppplVar35 + -1;
                      UNLOCK();
                      if (*(int *)ppppppplVar35 == 0) {
                        (*(code *)**uStack_70)(uStack_70);
                        LOCK();
                        piVar1 = (int *)((longlong)ppppppplVar31 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (*(code *)(*ppppppplVar31)[2])(ppppppplVar31);
                        }
                      }
                    }
                    local_4b8 = ppppppplVar42;
                    if (ppppppplVar16 != (longlong *******)0x0) {
                      LOCK();
                      ppppppplVar42 = ppppppplVar16 + 1;
                      *(int *)ppppppplVar42 = *(int *)ppppppplVar42 + -1;
                      UNLOCK();
                      if (*(int *)ppppppplVar42 == 0) {
                        (*(code *)**ppppppplVar16)(ppppppplVar16);
                        LOCK();
                        piVar1 = (int *)((longlong)ppppppplVar16 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (*(code *)(*ppppppplVar16)[2])(ppppppplVar16);
                        }
                      }
                    }
                    uVar43 = *(undefined4 *)(lVar49 + 0x20);
                    plVar11 = *(longlong **)(lVar49 + 0x10);
                    if (plVar11 == (longlong *)0x0) {
                      uVar44 = *(undefined4 *)(lVar49 + 0x18);
                      *puVar30 = local_428;
                      plVar47 = (longlong *)puVar30[1];
                      if (plVar47 == (longlong *)0x0) {
                        *(undefined4 *)(puVar30 + 2) = uVar44;
                        *(undefined1 *)((longlong)puVar30 + 0x1c) = 1;
                        *(undefined4 *)(puVar30 + 3) = uVar43;
                        puVar30[4] = 2;
                        pRVar52 = local_4e0;
                        ppppppplVar42 = local_4b8;
                        goto LAB_14426a92c;
                      }
                      puVar30[1] = 0;
LAB_14426b015:
                      (**(code **)(*plVar47 + 0x10))(plVar47);
                      *(undefined4 *)(puVar30 + 2) = uVar44;
                      *(undefined1 *)((longlong)puVar30 + 0x1c) = 1;
                      *(undefined4 *)(puVar30 + 3) = uVar43;
                      puVar30[4] = 2;
                      pRVar52 = local_4e0;
                      ppppppplVar42 = local_4b8;
                      if (plVar11 == (longlong *)0x0) goto LAB_14426a92c;
                    }
                    else {
                      (**(code **)(*plVar11 + 8))(plVar11);
                      uVar44 = *(undefined4 *)(lVar49 + 0x18);
                      *puVar30 = local_428;
                      plVar47 = (longlong *)puVar30[1];
                      if (plVar47 != plVar11) {
                        puVar30[1] = plVar11;
                        (**(code **)(*plVar11 + 8))(plVar11);
                        if (plVar47 != (longlong *)0x0) goto LAB_14426b015;
                      }
                      *(undefined4 *)(puVar30 + 2) = uVar44;
                      *(undefined1 *)((longlong)puVar30 + 0x1c) = 1;
                      *(undefined4 *)(puVar30 + 3) = uVar43;
                      puVar30[4] = 2;
                    }
                    (**(code **)(*plVar11 + 0x10))(plVar11);
                    pRVar52 = local_4e0;
                    ppppppplVar42 = local_4b8;
                    goto LAB_14426a92c;
                  }
                  break;
                }
                iVar54 = *(int *)(lVar49 + 0x90);
              }
            }
            local_378 = (longlong *******)&local_438;
            FUN_144277c6a(&local_418,&local_78,&local_378);
            lVar49 = local_418;
            lVar33 = (longlong)(int)local_78;
            uVar14 = FUN_14086ad12();
            cVar7 = FUN_1448093f4(plVar11,uVar14);
            pRVar52 = local_4e0;
            uVar43 = 0x7fffffff;
            if (cVar7 != '\0') {
              lVar22 = plVar11[0x2f];
              if (lVar22 == 0) {
                uVar14 = FUN_1465d584e();
                lVar22 = FUN_14477b664(uVar14);
                plVar11[0x2f] = lVar22;
              }
              lVar18 = plVar11[0x30];
              if (lVar18 == 0) {
                if ((lVar22 != 0) && (pRVar52 = local_4e0, plVar11[0x2e] != 0)) {
                  plVar47 = *(longlong **)(lVar22 + 0xb8);
                  if ((plVar47 == (longlong *)0x0) ||
                     (cVar7 = (**(code **)(*plVar47 + 0x108))(plVar47), cVar7 == '\0')) {
                    plVar11[0x30] = 0;
                    pRVar52 = local_4e0;
                  }
                  else {
                    uVar14 = (**(code **)(*plVar47 + 0x110))(plVar47);
                    lVar18 = FUN_144aff482(uVar14,plVar11 + 0x2e);
                    plVar11[0x30] = lVar18;
                    pRVar52 = local_4e0;
                    if (lVar18 != 0) goto LAB_14426a88c;
                  }
                }
              }
              else {
LAB_14426a88c:
                uVar43 = *(undefined4 *)(lVar18 + 0x38);
              }
            }
            lVar49 = lVar49 + lVar33 * 0x98;
            puVar41 = (undefined8 *)(lVar49 + 8);
            (**(code **)(*plVar11 + 0x18))(plVar11,&local_78);
            *puVar41 = local_438;
            ppppppplVar16 = *(longlong ********)(lVar49 + 0x10);
            if (ppppppplVar16 != (longlong *******)local_78) {
              *(char **)(lVar49 + 0x10) = local_78;
              if ((longlong *******)local_78 != (longlong *******)0x0) {
                (*(code *)(*(longlong *******)local_78)[1])();
              }
              if (ppppppplVar16 != (longlong *******)0x0) {
                (*(code *)(*ppppppplVar16)[2])(ppppppplVar16);
              }
            }
            *(int *)(lVar49 + 0x18) = (int)uStack_70;
            *(undefined1 *)(lVar49 + 0x24) = 0;
            *(undefined4 *)(lVar49 + 0x20) = uVar43;
            *(undefined8 *)(lVar49 + 0x28) = 1;
            if ((longlong *******)local_78 != (longlong *******)0x0) {
              (*(code *)(*(longlong *******)local_78)[2])();
            }
            pppppplVar20 = local_458;
            if (puVar41 == (undefined8 *)0x0) goto LAB_14426ab3b;
LAB_14426a92c:
            plVar11 = puVar41 + 5;
            if (*(int *)(puVar41 + 6) != *(int *)((longlong)puVar41 + 0x5c)) {
              uVar40 = (uint)((ulonglong)local_458 >> 0x10);
              uVar26 = (uint)local_458 & 0xffff;
              puVar30 = puVar41 + 0xc;
              if ((undefined8 *)puVar41[0xd] != (undefined8 *)0x0) {
                puVar30 = (undefined8 *)puVar41[0xd];
              }
              iVar54 = *(int *)((longlong)puVar30 +
                               (ulonglong)
                               (*(int *)(puVar41 + 0xe) - 1U &
                               (int)((ulonglong)local_458 >> 0x20) +
                               ((uint)local_458 << 0x10 | uVar26) +
                               (uVar40 << 0x13 | uVar40 & 0xffff) + (uVar26 >> 4)) * 4);
              if (iVar54 != -1) {
                do {
                  if (*(longlong *******)(*plVar11 + (longlong)iVar54 * 0x20) == local_458)
                  goto LAB_14426aef7;
                  iVar54 = *(int *)((longlong)iVar54 * 0x20 + *plVar11 + 0x18);
                } while (iVar54 != -1);
              }
            }
            ppppppplVar16 = (longlong *******)FUN_14001cc68(0x98);
            ppppppplVar16[1] = (longlong ******)&DAT_100000001;
            *ppppppplVar16 = (longlong ******)&PTR_FUN_14b9ad810;
            memset(ppppppplVar16 + 2,0,0x88);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
              DAT_14c844840 = (longlong ******)FUN_14001cc68(0x30,0x10);
              DAT_14c844840[1] = (longlong *****)0x0;
              *DAT_14c844840 = (longlong *****)&PTR_FUN_149e19310;
              DAT_14c844840[2] = (longlong *****)0xffffffffffffffff;
              DAT_14c844840[3] = (longlong *****)0x0;
              DAT_14c844840[4] = (longlong *****)0x0;
              DAT_14c844840[5] = (longlong *****)0x0;
              if (DAT_14c844840 != (longlong ******)0x0) {
                LOCK();
                *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
                UNLOCK();
              }
              DAT_14c844848 = 0;
              atexit(FUN_142760bef);
              _Init_thread_footer(&DAT_14c844850);
            }
            pppppplVar20 = DAT_14c844840;
            ppppppplVar16[3] = DAT_14c844840;
            if (pppppplVar20 != (longlong ******)0x0) {
              if ((*pppppplVar20)[1] == (longlong ****)FUN_144907e24) {
                LOCK();
                *(int *)(pppppplVar20 + 1) = *(int *)(pppppplVar20 + 1) + 1;
                UNLOCK();
              }
              else {
                (*(code *)(*pppppplVar20)[1])();
              }
            }
            *(undefined4 *)(ppppppplVar16 + 4) = 0;
            *(undefined4 *)(ppppppplVar16 + 5) = 0;
            *(undefined1 *)((longlong)ppppppplVar16 + 0x2c) = 0;
            ppppppplVar16[0xb] = (longlong ******)0x0;
            *(undefined4 *)(ppppppplVar16 + 0xc) = 0;
            ppppppplVar16[6] = (longlong ******)0x0;
            ppppppplVar16[7] = (longlong ******)0x0;
            ppppppplVar16[8] = (longlong ******)0x0;
            *(undefined8 *)((longlong)ppppppplVar16 + 100) = 0xffffffff00000080;
            *(undefined4 *)((longlong)ppppppplVar16 + 0x6c) = 0;
            ppppppplVar16[0xf] = (longlong ******)0x0;
            *(undefined4 *)(ppppppplVar16 + 0x10) = 0;
            ppppppplVar16[0x11] = (longlong ******)0x0;
            ppppppplVar16[0x12] = (longlong ******)0x0;
            if (ppppppplVar16 != (longlong *******)0x0) {
              LOCK();
              *(int *)(ppppppplVar16 + 1) = *(int *)(ppppppplVar16 + 1) + 1;
              UNLOCK();
            }
            local_378 = &local_458;
            ppppppplStack_370 = (longlong *******)&local_428;
            local_428 = ppppppplVar16 + 2;
            uStack_420 = ppppppplVar16;
            FUN_144278700(plVar11,&local_438,&local_378);
            ppppppplVar31 = uStack_420;
            pRVar52 = local_4e0;
            plVar11 = *(longlong **)(*plVar11 + 8 + (longlong)(int)local_438 * 0x20);
            if (uStack_420 != (longlong *******)0x0) {
              LOCK();
              ppppppplVar35 = uStack_420 + 1;
              *(int *)ppppppplVar35 = *(int *)ppppppplVar35 + -1;
              UNLOCK();
              if (*(int *)ppppppplVar35 == 0) {
                (*(code *)**uStack_420)(uStack_420);
                LOCK();
                piVar1 = (int *)((longlong)ppppppplVar31 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (*(code *)(*ppppppplVar31)[2])(ppppppplVar31);
                }
              }
            }
            if (ppppppplVar16 != (longlong *******)0x0) {
              LOCK();
              ppppppplVar31 = ppppppplVar16 + 1;
              *(int *)ppppppplVar31 = *(int *)ppppppplVar31 + -1;
              UNLOCK();
              if (*(int *)ppppppplVar31 == 0) {
                (*(code *)**ppppppplVar16)(ppppppplVar16);
                LOCK();
                piVar1 = (int *)((longlong)ppppppplVar16 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (*(code *)(*ppppppplVar16)[2])(ppppppplVar16);
                }
              }
            }
            lVar49 = 2;
          }
          goto LAB_14426acb9;
        }
        local_4c8 = CONCAT71((int7)((ulonglong)ppppppplVar16 >> 8),1);
        goto LAB_14426aef9;
      }
      if ((pvVar15 != (PVOID)0x0) && (pRVar57[0x19].Ptr != (PVOID)0x0)) {
        plVar11 = *(longlong **)((longlong)pvVar15 + 0xb8);
        if ((plVar11 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar7 == '\0')) {
          pRVar57[0x1b].Ptr = (PVOID)0x0;
        }
        else {
          uVar14 = (**(code **)(*plVar11 + 0x110))(plVar11);
          pvVar17 = (PVOID)FUN_144aff482(uVar14,pRVar57 + 0x19);
          pRVar57[0x1b].Ptr = pvVar17;
          if (pvVar17 != (PVOID)0x0) goto LAB_144269f5a;
        }
      }
      goto LAB_14426aefc;
    }
    goto LAB_14426b902;
  }
  goto LAB_14426c8a7;
  while (iVar54 = *(int *)((longlong)iVar54 * 0x20 + *plVar11 + 0x18), iVar54 != -1) {
LAB_14426af5d:
    if (*(longlong *******)(*plVar11 + (longlong)iVar54 * 0x20) == pppppplVar20) goto LAB_14426aef7;
  }
LAB_14426af75:
  FUN_1400021e4(puVar41,&local_378);
  pwVar53 = L"";
  if (DAT_14cbd6550 != 0) {
    pwVar53 = DAT_14cbd6548;
  }
  if (pwVar53 == (wchar_t *)0x0) {
    bVar59 = false;
  }
  else {
    sVar21 = wcslen(pwVar53);
    local_530 = 0xffffffff;
    local_538 = 0;
    iVar54 = FUN_1447ee042(&local_378,pwVar53,sVar21 & 0xffffffff,1);
    bVar59 = iVar54 != -1;
  }
  if (local_378 != (longlong *******)0x0) {
    FUN_1400020a8();
  }
  if (!bVar59) {
    FUN_1400021e4(puVar41,&local_428);
    ppppppplVar16 = uStack_420;
    pwVar53 = DAT_14cbd6548;
    iVar54 = (int)uStack_420;
    if ((int)uStack_420 < 2) {
      local_378 = (longlong *******)0x0;
      lVar49 = (longlong)(int)DAT_14cbd6550;
      ppppppplStack_370 = (longlong *******)CONCAT44(ppppppplStack_370._4_4_,DAT_14cbd6550);
      if (lVar49 == 0) {
        ppppppplStack_370 = (longlong *******)(ulonglong)DAT_14cbd6550;
      }
      else {
        FUN_1446dd670(&local_378,DAT_14cbd6550,0);
        memcpy(local_378,pwVar53,lVar49 * 2);
      }
    }
    else {
      iVar48 = DAT_14cbd6550 - 1;
      if (DAT_14cbd6550 == 0) {
        iVar48 = 0;
      }
      local_378 = local_428;
      iVar27 = uStack_420._4_4_;
      local_428 = (longlong *******)0x0;
      uStack_420 = (longlong *******)0x0;
      ppppppplStack_370 = ppppppplVar16;
      iVar37 = iVar54 + iVar48;
      if (iVar37 < iVar54) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar48);
      }
      if (iVar27 < iVar37) {
        FUN_1446f8c06(&local_378);
      }
      FUN_1400020e8(&local_378,DAT_14cbd6548,iVar48);
    }
    iVar54 = (int)ppppppplStack_370 + -1;
    if ((int)ppppppplStack_370 == 0) {
      iVar54 = 0;
    }
    FUN_1446f82e2(&local_438,iVar54,local_378,1);
    *puVar41 = local_438;
    if (local_378 != (longlong *******)0x0) {
      FUN_1400020a8();
    }
    if (local_428 != (longlong *******)0x0) {
      FUN_1400020a8();
    }
  }
  ppppppplVar16 = (longlong *******)FUN_14001cc68(0x98);
  ppppppplVar16[1] = (longlong ******)&DAT_100000001;
  *ppppppplVar16 = (longlong ******)&PTR_FUN_14b9ad810;
  memset(ppppppplVar16 + 2,0,0x88);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong ******)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = (longlong *****)0x0;
    *DAT_14c844840 = (longlong *****)&PTR_FUN_149e19310;
    DAT_14c844840[2] = (longlong *****)0xffffffffffffffff;
    DAT_14c844840[3] = (longlong *****)0x0;
    DAT_14c844840[4] = (longlong *****)0x0;
    DAT_14c844840[5] = (longlong *****)0x0;
    if (DAT_14c844840 != (longlong ******)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  pppppplVar20 = DAT_14c844840;
  ppppppplVar16[3] = DAT_14c844840;
  if (pppppplVar20 != (longlong ******)0x0) {
    if ((*pppppplVar20)[1] == (longlong ****)FUN_144907e24) {
      LOCK();
      *(int *)(pppppplVar20 + 1) = *(int *)(pppppplVar20 + 1) + 1;
      UNLOCK();
    }
    else {
      (*(code *)(*pppppplVar20)[1])();
    }
  }
  *(undefined4 *)(ppppppplVar16 + 4) = 0;
  *(undefined4 *)(ppppppplVar16 + 5) = 0;
  *(undefined1 *)((longlong)ppppppplVar16 + 0x2c) = 0;
  ppppppplVar16[0xb] = (longlong ******)0x0;
  *(undefined4 *)(ppppppplVar16 + 0xc) = 0;
  ppppppplVar16[6] = (longlong ******)0x0;
  ppppppplVar16[7] = (longlong ******)0x0;
  ppppppplVar16[8] = (longlong ******)0x0;
  *(undefined8 *)((longlong)ppppppplVar16 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)ppppppplVar16 + 0x6c) = 0;
  ppppppplVar16[0xf] = (longlong ******)0x0;
  *(undefined4 *)(ppppppplVar16 + 0x10) = 0;
  ppppppplVar16[0x11] = (longlong ******)0x0;
  ppppppplVar16[0x12] = (longlong ******)0x0;
  if (ppppppplVar16 != (longlong *******)0x0) {
    LOCK();
    *(int *)(ppppppplVar16 + 1) = *(int *)(ppppppplVar16 + 1) + 1;
    UNLOCK();
  }
  local_378 = &local_458;
  ppppppplStack_370 = (longlong *******)&local_428;
  local_428 = ppppppplVar16 + 2;
  uStack_420 = ppppppplVar16;
  FUN_144278700(plVar11,&local_438,&local_378);
  ppppppplVar31 = uStack_420;
  plVar11 = *(longlong **)(*plVar11 + 8 + (longlong)(int)local_438 * 0x20);
  if (uStack_420 != (longlong *******)0x0) {
    LOCK();
    ppppppplVar35 = uStack_420 + 1;
    *(int *)ppppppplVar35 = *(int *)ppppppplVar35 + -1;
    UNLOCK();
    if (*(int *)ppppppplVar35 == 0) {
      (*(code *)**uStack_420)(uStack_420);
      LOCK();
      piVar1 = (int *)((longlong)ppppppplVar31 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*ppppppplVar31)[2])(ppppppplVar31);
      }
    }
  }
  if (ppppppplVar16 != (longlong *******)0x0) {
    LOCK();
    ppppppplVar31 = ppppppplVar16 + 1;
    *(int *)ppppppplVar31 = *(int *)ppppppplVar31 + -1;
    UNLOCK();
    if (*(int *)ppppppplVar31 == 0) {
      (*(code *)**ppppppplVar16)(ppppppplVar16);
      LOCK();
      piVar1 = (int *)((longlong)ppppppplVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*ppppppplVar16)[2])(ppppppplVar16);
      }
    }
  }
  lVar49 = 2;
  pRVar52 = local_4e0;
LAB_14426acb9:
  iVar54 = 0;
  if (plVar11 == (longlong *)0x0) goto LAB_14426aef9;
  pppppplVar20 = local_4e8[0x2f];
  if (pppppplVar20 == (longlong ******)0x0) {
    uVar14 = FUN_1465d584e();
    pppppplVar20 = (longlong ******)FUN_14477b664(uVar14);
    local_4e8[0x2f] = pppppplVar20;
  }
  pppppplVar19 = local_4e8[0x30];
  if (pppppplVar19 == (longlong ******)0x0) {
    uVar43 = 0x7fffffff;
    if ((pppppplVar20 != (longlong ******)0x0) &&
       (ppppppplVar16 = local_4e8 + 0x2e, *ppppppplVar16 != (longlong ******)0x0)) {
      ppppplVar32 = pppppplVar20[0x17];
      if ((ppppplVar32 == (longlong *****)0x0) ||
         (cVar7 = (*(code *)(*ppppplVar32)[0x21])(ppppplVar32), cVar7 == '\0')) {
        local_4e8[0x30] = (longlong ******)0x0;
        pRVar52 = local_4e0;
      }
      else {
        uVar14 = (*(code *)(*ppppplVar32)[0x22])(ppppplVar32);
        pppppplVar19 = (longlong ******)FUN_144aff482(uVar14,ppppppplVar16);
        local_4e8[0x30] = pppppplVar19;
        pRVar52 = local_4e0;
        if (pppppplVar19 != (longlong ******)0x0) goto LAB_14426acec;
      }
    }
  }
  else {
LAB_14426acec:
    uVar43 = *(undefined4 *)(pppppplVar19 + 7);
  }
  (*(code *)(*local_4e8)[3])(local_4e8,&local_428);
  *plVar11 = (longlong)local_458;
  ppppppplVar16 = (longlong *******)plVar11[1];
  if (ppppppplVar16 != local_428) {
    plVar11[1] = (longlong)local_428;
    if (local_428 != (longlong *******)0x0) {
      (*(code *)(*local_428)[1])();
    }
    if (ppppppplVar16 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar16)[2])(ppppppplVar16);
    }
  }
  *(int *)(plVar11 + 2) = (int)uStack_420;
  *(undefined1 *)((longlong)plVar11 + 0x1c) = 1;
  *(undefined4 *)(plVar11 + 3) = uVar43;
  plVar11[4] = lVar49;
  if (local_428 != (longlong *******)0x0) {
    (*(code *)(*local_428)[2])();
  }
  local_469 = 0xd;
  FUN_1400021e4(&local_458,&local_448);
  ppppppplStack_430 = ppppppplStack_440;
  uVar40 = (int)ppppppplStack_440 - 1;
  if ((int)ppppppplStack_440 == 0) {
    uVar40 = 0;
  }
  if (0 < (int)uVar40) {
    uVar34 = 0;
    do {
      uVar2 = *(ushort *)((longlong)local_448 + uVar34 * 2);
      *(ushort *)((longlong)local_448 + uVar34 * 2) = (ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2;
      uVar34 = uVar34 + 1;
    } while (uVar40 != uVar34);
  }
  local_438 = local_448;
  local_448 = (longlong *******)0x0;
  ppppppplStack_440 = (longlong *******)0x0;
  local_378 = (longlong *******)&local_438;
  ppppppplStack_370 = (longlong *******)&local_469;
  FUN_14427748a(local_4d8,&local_468,&local_378);
  if (local_438 != (longlong *******)0x0) {
    FUN_1400020a8();
  }
  if (local_448 != (longlong *******)0x0) {
    FUN_1400020a8();
  }
  iVar54 = 1;
LAB_14426aef9:
  ppppppplVar42 = (longlong *******)(ulonglong)(uint)((int)ppppppplVar42 + iVar54);
LAB_14426aefc:
  pRVar57 = pRVar57 + 0x22;
  if (pRVar57 == pRVar52) goto LAB_14426b67f;
  goto LAB_144269f2a;
LAB_14426c1ec:
  iVar48 = FUN_1467d15c4(ppppplVar32 + 1,ppppplVar36 + 1);
  if (-1 < iVar48) goto LAB_14426c14d;
LAB_14426c171:
  pppppplVar25 = pppppplVar46 + -2;
  if (((pppppplVar19 < pppppplVar25) &&
      (ppppplVar32 = *pppppplVar25, ppppplVar32 != (longlong *****)0x0)) &&
     (ppppplVar36 = *pppppplVar19, ppppplVar36 != (longlong *****)0x0)) {
    pppppplVar55 = pppppplVar46 + -4;
    do {
      pppppplVar24 = pppppplVar25;
      if (*(int *)(ppppplVar32 + 3) == *(int *)(ppppplVar36 + 3)) {
        iVar48 = FUN_1467d15c4(ppppplVar32 + 1,ppppplVar36 + 1);
        if (iVar48 < 0) {
          pppppplVar25 = pppppplVar55 + 2;
          pppppplVar46 = pppppplVar55 + 4;
          break;
        }
      }
      else {
        pppppplVar25 = pppppplVar24;
        if (*(int *)(ppppplVar32 + 3) < *(int *)(ppppplVar36 + 3)) break;
      }
      pppppplVar25 = pppppplVar55;
      pppppplVar46 = pppppplVar24;
      if (pppppplVar55 <= pppppplVar19) break;
      pppppplVar25 = pppppplVar24 + -2;
      ppppplVar32 = *pppppplVar55;
      if (ppppplVar32 == (longlong *****)0x0) break;
      ppppplVar36 = *pppppplVar19;
      pppppplVar55 = pppppplVar55 + -2;
    } while (ppppplVar36 != (longlong *****)0x0);
  }
  if (pppppplVar38 <= pppppplVar25) {
    pppppplVar55 = (longlong ******)*pppppplVar38;
    ppppplVar32 = pppppplVar39[3];
    ppppplVar36 = pppppplVar25[1];
    *pppppplVar38 = *pppppplVar25;
    pppppplVar39[3] = ppppplVar36;
    local_78._0_4_ = (int)pppppplVar55;
    local_78._4_4_ = (undefined4)((ulonglong)pppppplVar55 >> 0x20);
    uStack_70._0_4_ = (int)ppppplVar32;
    uStack_70._4_4_ = (int)((ulonglong)ppppplVar32 >> 0x20);
    *(int *)pppppplVar25 = (int)local_78;
    *(undefined4 *)((longlong)pppppplVar25 + 4) = local_78._4_4_;
    *(int *)(pppppplVar25 + 1) = (int)uStack_70;
    *(int *)((longlong)pppppplVar25 + 0xc) = uStack_70._4_4_;
    pppppplVar46 = pppppplVar25;
    local_78 = (char *)pppppplVar55;
    uStack_70 = (longlong *******)ppppplVar32;
    goto LAB_14426c14d;
  }
  local_78 = (char *)*pppppplVar19;
  uStack_70 = (longlong *******)pppppplVar19[1];
  pppppplVar39 = (longlong ******)local_78;
  ppppppplVar42 = uStack_70;
  ppppplVar32 = pppppplVar25[1];
  *pppppplVar19 = *pppppplVar25;
  pppppplVar19[1] = ppppplVar32;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (int)((ulonglong)uStack_70 >> 0x20);
  *(int *)pppppplVar25 = (int)local_78;
  *(undefined4 *)((longlong)pppppplVar25 + 4) = local_78._4_4_;
  *(int *)(pppppplVar25 + 1) = (int)uStack_70;
  *(int *)((longlong)pppppplVar25 + 0xc) = uStack_70._4_4_;
  iVar54 = iVar54 + -1;
  pppppplVar46 = pppppplVar46 + -4;
  uStack_70 = ppppppplVar42;
  local_78 = (char *)pppppplVar39;
  if ((longlong)pppppplVar46 - (longlong)pppppplVar19 <
      (longlong)pppppplVar20 - (longlong)pppppplVar38) {
    if (pppppplVar38 < pppppplVar20) {
      *local_4e8 = pppppplVar38;
      local_4e8[1] = pppppplVar20;
      *(int *)(local_4e8 + 2) = iVar54;
      local_4e8 = local_4e8 + 3;
    }
    ppppppplVar42 = local_4e8;
    if (pppppplVar25 <= pppppplVar19 + 2) goto LAB_14426c5fc;
  }
  else {
    if (pppppplVar19 + 2 < pppppplVar25) {
      *local_4e8 = pppppplVar19;
      local_4e8[1] = pppppplVar46;
      *(int *)(local_4e8 + 2) = iVar54;
      local_4e8 = local_4e8 + 3;
    }
    ppppppplVar42 = local_4e8;
    pppppplVar46 = pppppplVar20;
    pppppplVar19 = pppppplVar38;
    if (pppppplVar20 <= pppppplVar38) goto LAB_14426c5fc;
  }
  iVar48 = (int)((ulonglong)((longlong)pppppplVar46 - (longlong)pppppplVar19) >> 4);
  uVar34 = (ulonglong)(iVar48 + 1);
  pppppplVar20 = pppppplVar46;
  if (iVar54 == 0) goto LAB_14426c2f1;
  goto LAB_14426c10e;
LAB_14426c5e1:
  iVar54 = FUN_1467d15c4(ppppplVar32 + 1,ppppplVar36 + 1);
  if (iVar54 < 0) {
LAB_14426c5d3:
    pppppplVar38 = pppppplVar39;
  }
  goto joined_r0x00014426c580;
LAB_14426b67f:
  plVar11 = local_4d0;
  if ((local_4c8 & 1) != 0) {
    if ((int)uStack_410 != local_3e4) {
      uVar40 = (uint)((ulonglong)DAT_14cbd6510 >> 0x10);
      uVar26 = (uint)DAT_14cbd6510 & 0xffff;
      puVar29 = local_3e0;
      if (local_3d8 != (undefined1 *)0x0) {
        puVar29 = local_3d8;
      }
      for (iVar54 = *(int *)(puVar29 +
                            (ulonglong)
                            (local_3d0 - 1U &
                            (int)((ulonglong)DAT_14cbd6510 >> 0x20) +
                            ((uint)DAT_14cbd6510 << 0x10 | uVar26) +
                            (uVar40 << 0x13 | uVar40 & 0xffff) + (uVar26 >> 4)) * 4); iVar54 != -1;
          iVar54 = *(int *)((longlong)iVar54 * 0x98 + local_418 + 0x90)) {
        if (*(longlong *)(local_418 + (longlong)iVar54 * 0x98) == DAT_14cbd6510) goto LAB_14426b902;
      }
    }
    local_378 = (longlong *******)&DAT_14cbd6510;
    FUN_144277c6a(&local_418,&local_78,&local_378);
    lVar33 = local_418;
    lVar22 = (longlong)(int)local_78;
    lVar49 = local_418 + lVar22 * 0x98;
    *(longlong *)(lVar49 + 8) = DAT_14cbd6510;
    local_378 = (longlong *******)0x0;
    ppppppplStack_370 = (longlong *******)0x0;
    local_368 = (undefined1 *)((ulonglong)local_368 & 0xffffffff00000000);
    local_360 = 0;
    appppplStack_358[0] = (longlong *****)0x0;
    FUN_1446ddda2(&local_378,"UnknownText",0);
    FUN_1410d1eba(&local_78,&local_378);
    FUN_140008f88(lVar49 + 0x10,&local_78);
    if ((longlong *******)local_78 != (longlong *******)0x0) {
      (*(code *)(*(longlong *******)local_78)[2])();
    }
    lVar33 = lVar33 + lVar22 * 0x98;
    if (local_360 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(lVar33 + 0x24) = 1;
    *(undefined8 *)(lVar33 + 0x28) = 1;
    *(undefined4 *)(lVar33 + 0x20) = 0x7fffffff;
    local_448 = (longlong *******)CONCAT71(local_448._1_7_,0xd);
    FUN_1400021e4(&DAT_14cbd6510,&local_428);
    uStack_70 = uStack_420;
    plVar11 = local_4d0;
    uVar40 = (int)uStack_420 - 1;
    if ((int)uStack_420 == 0) {
      uVar40 = 0;
    }
    if (0 < (int)uVar40) {
      uVar34 = 0;
      do {
        uVar2 = *(ushort *)((longlong)local_428 + uVar34 * 2);
        *(ushort *)((longlong)local_428 + uVar34 * 2) = (ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2
        ;
        uVar34 = uVar34 + 1;
      } while (uVar40 != uVar34);
    }
    local_78 = (char *)local_428;
    local_428 = (longlong *******)0x0;
    uStack_420 = (longlong *******)0x0;
    ppppppplStack_370 = (longlong *******)&local_448;
    local_378 = (longlong *******)&local_78;
    FUN_14427748a(local_4d8,&local_438);
    if ((longlong *******)local_78 != (longlong *******)0x0) {
      FUN_1400020a8();
    }
    if (local_428 != (longlong *******)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14426b902:
  local_428 = (longlong *******)0x0;
  uStack_420 = (longlong *******)0x0;
  FUN_14426cc92(&local_3c8,&local_428);
  FUN_144279040(local_428,(ulonglong)uStack_420 & 0xffffffff);
  local_438 = (longlong *******)0x0;
  ppppppplStack_430 = (longlong *******)0x0;
  FUN_14426cc92(&local_418,&local_438);
  FUN_144279040(local_438,(ulonglong)ppppppplStack_430 & 0xffffffff);
  iVar54 = (int)ppppppplVar42 + (int)uStack_420 + (int)ppppppplStack_430 + 2;
  if (iVar54 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar54);
  }
  plVar47 = plVar11 + 0xd;
  if (*(int *)((longlong)plVar11 + 0x74) < iVar54) {
    FUN_144278eaa(plVar47,iVar54);
  }
  else {
    FUN_1442471ff(plVar11[0xd],(int)plVar11[0xe]);
    *(undefined4 *)(plVar11 + 0xe) = 0;
  }
  local_378 = (longlong *******)0x0;
  ppppppplStack_370 = (longlong *******)0x0;
  local_368 = (undefined1 *)((ulonglong)local_368 & 0xffffffff00000000);
  local_360 = 0;
  appppplStack_358[0] = (longlong *****)0x0;
  FUN_1446ddda2(&local_378,"SortTypeLabel",0);
  FUN_1410d1eba(&local_448,&local_378);
  local_78 = &DAT_149e377fe;
  uStack_70 = (longlong *******)CONCAT35(uStack_70._5_3_,4);
  uVar40 = FUN_14001a6c0(&local_78,1);
  local_4d8 = plVar47;
  puVar23 = (ulonglong *)FUN_144275ac4(plVar47);
  ppppppplVar16 = local_448;
  *puVar23 = (ulonglong)uVar40;
  ppppppplVar42 = (longlong *******)puVar23[1];
  if (ppppppplVar42 != local_448) {
    puVar23[1] = (ulonglong)local_448;
    if (local_448 != (longlong *******)0x0) {
      (*(code *)(*local_448)[1])(local_448);
    }
    if (ppppppplVar42 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar42)[2])(ppppppplVar42);
    }
  }
  *(int *)(puVar23 + 2) = (int)ppppppplStack_440;
  *(undefined1 *)((longlong)puVar23 + 0x1c) = 0;
  puVar23[4] = 0;
  if (ppppppplVar16 != (longlong *******)0x0) {
    (*(code *)(*ppppppplVar16)[2])(ppppppplVar16);
  }
  if (local_360 != 0) {
    FUN_1400020a8();
  }
  local_4e0 = (PSRWLOCK)0x2;
  if ((longlong)(int)uStack_420 != 0) {
    ppppppplVar16 = local_428 + (longlong)(int)uStack_420 * 0x11;
    local_4e0 = (PSRWLOCK)0x2;
    ppppppplVar42 = local_428;
    do {
      iVar54 = (int)puVar23[0x10];
      *(uint *)(puVar23 + 0x10) = iVar54 + 1U;
      if (*(uint *)((longlong)puVar23 + 0x84) < iVar54 + 1U) {
        FUN_1410d14fc(puVar23 + 0xf,iVar54);
      }
      *(undefined1 **)(puVar23[0xf] + (longlong)iVar54 * 8) =
           (undefined1 *)((longlong)&local_4e0[-1].Ptr + 7);
      iVar54 = (int)local_4d0[0xe];
      *(uint *)(local_4d0 + 0xe) = iVar54 + 1U;
      if (*(uint *)((longlong)local_4d0 + 0x74) < iVar54 + 1U) {
        FUN_144275c26(local_4d8,iVar54);
      }
      lVar49 = *local_4d8;
      lVar33 = (longlong)iVar54 * 0x88;
      *(longlong *******)(lVar49 + lVar33) = *ppppppplVar42;
      pppppplVar20 = ppppppplVar42[1];
      *(longlong *******)(lVar49 + 8 + lVar33) = pppppplVar20;
      if (pppppplVar20 != (longlong ******)0x0) {
        (*(code *)(*pppppplVar20)[1])();
      }
      lVar49 = lVar49 + lVar33;
      *(undefined4 *)(lVar49 + 0x10) = *(undefined4 *)(ppppppplVar42 + 2);
      uVar43 = *(undefined4 *)((longlong)ppppppplVar42 + 0x1c);
      uVar44 = *(undefined4 *)(ppppppplVar42 + 4);
      uVar6 = *(undefined4 *)((longlong)ppppppplVar42 + 0x24);
      *(undefined4 *)(lVar49 + 0x18) = *(undefined4 *)(ppppppplVar42 + 3);
      *(undefined4 *)(lVar49 + 0x1c) = uVar43;
      *(undefined4 *)(lVar49 + 0x20) = uVar44;
      *(undefined4 *)(lVar49 + 0x24) = uVar6;
      *(undefined8 *)(lVar49 + 0x48) = 0;
      *(undefined4 *)(lVar49 + 0x50) = 0;
      *(undefined8 *)(lVar49 + 0x28) = 0;
      *(undefined8 *)(lVar49 + 0x30) = 0;
      *(undefined8 *)(lVar49 + 0x54) = 0xffffffff00000080;
      *(undefined4 *)(lVar49 + 0x5c) = 0;
      *(undefined8 *)(lVar49 + 0x68) = 0;
      *(undefined4 *)(lVar49 + 0x70) = 0;
      FUN_144275d94(lVar49 + 0x28,ppppppplVar42 + 5);
      *(undefined8 *)(lVar49 + 0x78) = 0;
      iVar54 = *(int *)(ppppppplVar42 + 0x10);
      pppppplVar20 = ppppppplVar42[0xf];
      *(int *)(lVar49 + 0x80) = iVar54;
      if ((longlong)iVar54 == 0) {
        *(undefined4 *)(lVar49 + 0x84) = 0;
      }
      else {
        FUN_1411e2848((undefined8 *)(lVar49 + 0x78),iVar54,0);
        memcpy(*(void **)(lVar49 + 0x78),pppppplVar20,(longlong)iVar54 << 3);
      }
      local_4e0 = (PSRWLOCK)((longlong)&local_4e0->Ptr + 1);
      ppppppplVar42 = ppppppplVar42 + 0x11;
    } while (ppppppplVar42 != ppppppplVar16);
  }
  local_378 = (longlong *******)0x0;
  ppppppplStack_370 = (longlong *******)0x0;
  local_368 = (undefined1 *)((ulonglong)local_368 & 0xffffffff00000000);
  local_360 = 0;
  appppplStack_358[0] = (longlong *****)0x0;
  FUN_1446ddda2(&local_378,"SortRegionLabel",0);
  FUN_1410d1eba(&local_458,&local_378);
  local_78 = "region";
  uStack_70 = (longlong *******)CONCAT35(uStack_70._5_3_,6);
  uVar40 = FUN_14001a6c0(&local_78,1);
  puVar23 = (ulonglong *)FUN_144275ac4(local_4d8);
  pppppplVar19 = local_458;
  *puVar23 = (ulonglong)uVar40;
  pppppplVar20 = (longlong ******)puVar23[1];
  if (pppppplVar20 != local_458) {
    puVar23[1] = (ulonglong)local_458;
    if (local_458 != (longlong ******)0x0) {
      (*(code *)(*local_458)[1])(local_458);
    }
    if (pppppplVar20 != (longlong ******)0x0) {
      (*(code *)(*pppppplVar20)[2])(pppppplVar20);
    }
  }
  plVar11 = local_4d0;
  *(undefined4 *)(puVar23 + 2) = local_450;
  *(undefined1 *)((longlong)puVar23 + 0x1c) = 0;
  puVar23[4] = 0;
  local_4b0 = puVar23;
  if (pppppplVar19 != (longlong ******)0x0) {
    (*(code *)(*pppppplVar19)[2])(pppppplVar19);
  }
  plVar47 = local_4d8;
  if (local_360 != 0) {
    FUN_1400020a8();
  }
  uVar34 = 0;
  if ((longlong)(int)ppppppplStack_430 != 0) {
    local_490 = local_438 + (longlong)(int)ppppppplStack_430 * 0x11;
    local_4a8 = local_4b0 + 0xf;
    ppppppplVar42 = local_438;
    do {
      iVar54 = (int)local_4b0[0x10];
      *(uint *)(local_4b0 + 0x10) = iVar54 + 1U;
      if (*(uint *)((longlong)local_4b0 + 0x84) < iVar54 + 1U) {
        FUN_1410d14fc(local_4a8,iVar54);
      }
      *(PSRWLOCK *)(*local_4a8 + (longlong)iVar54 * 8) = local_4e0;
      iVar54 = (int)plVar11[0xe];
      *(uint *)(plVar11 + 0xe) = iVar54 + 1U;
      if (*(uint *)((longlong)plVar11 + 0x74) < iVar54 + 1U) {
        FUN_144275c26(plVar47,iVar54);
      }
      lVar49 = *plVar47;
      local_4c8 = (longlong)iVar54 * 0x88;
      *(longlong *******)(lVar49 + local_4c8) = *ppppppplVar42;
      pppppplVar20 = ppppppplVar42[1];
      *(longlong *******)(lVar49 + 8 + local_4c8) = pppppplVar20;
      if (pppppplVar20 != (longlong ******)0x0) {
        (*(code *)(*pppppplVar20)[1])();
      }
      lVar49 = lVar49 + local_4c8;
      *(undefined4 *)(lVar49 + 0x10) = *(undefined4 *)(ppppppplVar42 + 2);
      uVar43 = *(undefined4 *)((longlong)ppppppplVar42 + 0x1c);
      uVar44 = *(undefined4 *)(ppppppplVar42 + 4);
      uVar6 = *(undefined4 *)((longlong)ppppppplVar42 + 0x24);
      *(undefined4 *)(lVar49 + 0x18) = *(undefined4 *)(ppppppplVar42 + 3);
      *(undefined4 *)(lVar49 + 0x1c) = uVar43;
      *(undefined4 *)(lVar49 + 0x20) = uVar44;
      *(undefined4 *)(lVar49 + 0x24) = uVar6;
      *(undefined8 *)(lVar49 + 0x48) = 0;
      *(undefined4 *)(lVar49 + 0x50) = 0;
      *(undefined8 *)(lVar49 + 0x28) = 0;
      *(undefined8 *)(lVar49 + 0x30) = 0;
      *(undefined8 *)(lVar49 + 0x54) = 0xffffffff00000080;
      *(undefined4 *)(lVar49 + 0x5c) = 0;
      *(undefined8 *)(lVar49 + 0x68) = 0;
      *(undefined4 *)(lVar49 + 0x70) = 0;
      FUN_144275d94(lVar49 + 0x28);
      *(undefined8 *)(lVar49 + 0x78) = 0;
      iVar54 = *(int *)(ppppppplVar42 + 0x10);
      pppppplVar20 = ppppppplVar42[0xf];
      *(int *)(lVar49 + 0x80) = iVar54;
      if ((longlong)iVar54 == 0) {
        *(undefined4 *)(lVar49 + 0x84) = 0;
      }
      else {
        FUN_1411e2848((undefined8 *)(lVar49 + 0x78),iVar54,0);
        memcpy(*(void **)(lVar49 + 0x78),pppppplVar20,(longlong)iVar54 << 3);
      }
      local_4e0 = (PSRWLOCK)((longlong)&local_4e0->Ptr + 1);
      if (*(char *)((longlong)ppppppplVar42 + 0x1c) == '\0') {
        local_4c8 = local_4c8 + *plVar47;
        iVar54 = *(int *)(ppppppplVar42 + 6) - *(int *)((longlong)ppppppplVar42 + 0x5c);
        if (iVar54 != 0) {
          local_468 = (longlong ******)0x0;
          uStack_460 = 0;
          if (iVar54 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar54);
          }
          FUN_1442796d2(0);
          uVar34 = uStack_460 >> 0x20;
          uStack_460 = uStack_460 & 0xffffffff00000000;
          if ((int)uVar34 != iVar54) {
            FUN_14427971c(&local_468);
          }
          iVar54 = *(int *)(ppppppplVar42 + 10);
          local_4b8 = ppppppplVar42;
          if (iVar54 == 0) {
            uVar34 = 1;
            ppppppplVar16 = (longlong *******)0x0;
            iVar37 = 0;
            iVar48 = 0;
          }
          else {
            ppppppplVar31 = (longlong *******)ppppppplVar42[9];
            if ((longlong *******)ppppppplVar42[9] == (longlong *******)0x0) {
              ppppppplVar31 = ppppppplVar42 + 7;
            }
            uVar40 = *(uint *)ppppppplVar31;
            if (uVar40 == 0) {
              iVar48 = iVar54 + 0x1e;
              if (-1 < iVar54 + -1) {
                iVar48 = iVar54 + -1;
              }
              ppppppplVar16 = (longlong *******)0x0;
              ppppppplVar35 = (longlong *******)(ulonglong)(uint)(iVar48 >> 5);
              if (iVar48 >> 5 < 1) {
                ppppppplVar35 = ppppppplVar16;
              }
              iVar37 = 0;
              do {
                if (ppppppplVar35 == ppppppplVar16) goto LAB_14426c071;
                iVar37 = iVar37 + 0x20;
                uVar40 = *(uint *)((longlong)ppppppplVar31 + ((longlong)ppppppplVar16 + 1) * 4);
                ppppppplVar16 = (longlong *******)((longlong)ppppppplVar16 + 1);
              } while (uVar40 == 0);
            }
            else {
              ppppppplVar16 = (longlong *******)0x0;
              iVar37 = 0;
            }
            uVar34 = (ulonglong)(-uVar40 & uVar40);
            uVar45 = uVar34 * 2 + 1;
            lVar49 = 0x3f;
            if (uVar45 != 0) {
              for (; uVar45 >> lVar49 == 0; lVar49 = lVar49 + -1) {
              }
            }
            iVar48 = (iVar37 - ((uint)lVar49 ^ 0x3f)) + 0x3e;
            if (iVar54 <= iVar48) {
              iVar48 = iVar54;
            }
          }
          if (iVar48 < iVar54) {
            uVar40 = 0xffffffff;
            do {
              uVar45 = uStack_460;
              pppppplVar20 = ppppppplVar42[5];
              lVar49 = (longlong)(int)uStack_460;
              uVar26 = (int)uStack_460 + 1;
              uStack_460 = CONCAT44(uStack_460._4_4_,uVar26);
              if (uStack_460._4_4_ < uVar26) {
                local_4e8 = ppppppplVar16;
                FUN_1442797ec(&local_468,uVar45 & 0xffffffff);
                ppppppplVar16 = local_4e8;
              }
              local_468[lVar49 * 2] = pppppplVar20[(longlong)iVar48 * 4 + 1];
              ppppplVar32 = pppppplVar20[(longlong)iVar48 * 4 + 2];
              local_468[lVar49 * 2 + 1] = ppppplVar32;
              if (ppppplVar32 != (longlong *****)0x0) {
                LOCK();
                *(int *)(ppppplVar32 + 1) = *(int *)(ppppplVar32 + 1) + 1;
                UNLOCK();
              }
              uVar40 = uVar40 & ~(uint)uVar34;
              ppppppplVar31 = (longlong *******)local_4b8[9];
              if ((longlong *******)local_4b8[9] == (longlong *******)0x0) {
                ppppppplVar31 = ppppppplVar42 + 7;
              }
              iVar54 = *(int *)(local_4b8 + 10);
              iVar48 = (int)ppppppplVar16;
              lVar49 = (longlong)iVar48;
              uVar26 = *(uint *)((longlong)ppppppplVar31 + lVar49 * 4) & uVar40;
              if (uVar26 == 0) {
                iVar27 = iVar54 + 0x1e;
                if (-1 < iVar54 + -1) {
                  iVar27 = iVar54 + -1;
                }
                iVar27 = iVar27 >> 5;
                iVar56 = iVar27;
                if (iVar27 < iVar48) {
                  iVar56 = iVar48;
                }
                if (iVar27 <= iVar48) break;
                lVar33 = 0;
                while( true ) {
                  iVar37 = iVar37 + 0x20;
                  uVar26 = *(uint *)((longlong)ppppppplVar31 + (lVar49 + lVar33 + 1) * 4);
                  if (uVar26 != 0) break;
                  lVar33 = lVar33 + 1;
                  if (iVar56 - lVar49 == lVar33) goto LAB_14426c071;
                }
                ppppppplVar16 = (longlong *******)(ulonglong)(iVar48 + (int)lVar33 + 1);
                uVar40 = 0xffffffff;
              }
              uVar34 = (ulonglong)(-uVar26 & uVar26);
              uVar45 = uVar34 * 2 + 1;
              lVar49 = 0x3f;
              if (uVar45 != 0) {
                for (; uVar45 >> lVar49 == 0; lVar49 = lVar49 + -1) {
                }
              }
              iVar48 = (iVar37 - ((uint)lVar49 ^ 0x3f)) + 0x3e;
            } while (iVar48 < iVar54);
          }
LAB_14426c071:
          pppppplVar20 = local_468;
          iVar54 = (int)uStack_460;
          lVar49 = (longlong)(int)uStack_460;
          if (1 < lVar49) {
            memset(&local_368,0,0x2f0);
            local_378 = (longlong *******)pppppplVar20;
            ppppppplStack_370 = (longlong *******)(pppppplVar20 + lVar49 * 2 + -2);
            fVar60 = logf((float)iVar54);
            local_368 = (undefined1 *)CONCAT44(local_368._4_4_,(int)(longlong)(fVar60 + fVar60));
            ppppppplVar42 = (longlong *******)&local_378;
            do {
              pppppplVar19 = *ppppppplVar42;
              pppppplVar20 = ppppppplVar42[1];
              iVar54 = *(int *)(ppppppplVar42 + 2);
              iVar48 = (int)((ulonglong)((longlong)pppppplVar20 - (longlong)pppppplVar19) >> 4);
              uVar34 = (ulonglong)(iVar48 + 1);
              local_4e8 = ppppppplVar42;
              if (iVar54 != 0) {
LAB_14426c10e:
                ppppppplVar42 = local_4e8;
                if (8 < (int)(uint)uVar34) {
                  uVar34 = (ulonglong)((uint)uVar34 >> 1);
                  pppppplVar39 = (longlong ******)pppppplVar19[uVar34 * 2];
                  ppppplVar32 = (pppppplVar19 + uVar34 * 2)[1];
                  ppppplVar36 = pppppplVar19[1];
                  pppppplVar19[uVar34 * 2] = *pppppplVar19;
                  (pppppplVar19 + uVar34 * 2)[1] = ppppplVar36;
                  local_78._0_4_ = (int)pppppplVar39;
                  local_78._4_4_ = (undefined4)((ulonglong)pppppplVar39 >> 0x20);
                  uStack_70._0_4_ = (int)ppppplVar32;
                  uStack_70._4_4_ = (int)((ulonglong)ppppplVar32 >> 0x20);
                  *(int *)pppppplVar19 = (int)local_78;
                  *(undefined4 *)((longlong)pppppplVar19 + 4) = local_78._4_4_;
                  *(int *)(pppppplVar19 + 1) = (int)uStack_70;
                  *(int *)((longlong)pppppplVar19 + 0xc) = uStack_70._4_4_;
                  pppppplVar38 = pppppplVar19;
                  pppppplVar46 = pppppplVar20 + 2;
                  local_78 = (char *)pppppplVar39;
                  uStack_70 = (longlong *******)ppppplVar32;
LAB_14426c14d:
                  while (((pppppplVar39 = pppppplVar38, pppppplVar38 = pppppplVar39 + 2,
                          pppppplVar38 <= pppppplVar20 &&
                          (ppppplVar32 = *pppppplVar19, ppppplVar32 != (longlong *****)0x0)) &&
                         (ppppplVar36 = *pppppplVar38, ppppplVar36 != (longlong *****)0x0))) {
                    if (*(int *)(ppppplVar32 + 3) == *(int *)(ppppplVar36 + 3)) goto LAB_14426c1ec;
                    if (*(int *)(ppppplVar32 + 3) < *(int *)(ppppplVar36 + 3)) break;
                  }
                  goto LAB_14426c171;
                }
                for (; pppppplVar38 = pppppplVar19, pppppplVar39 = pppppplVar19,
                    pppppplVar19 < pppppplVar20;
                    pppppplVar20 = (longlong ******)((longlong)pppppplVar20 + 0xfffffffffffffff0)) {
joined_r0x00014426c580:
                  while (pppppplVar39 = pppppplVar39 + 2, pppppplVar39 <= pppppplVar20) {
                    ppppplVar32 = *pppppplVar38;
                    if ((ppppplVar32 == (longlong *****)0x0) ||
                       (ppppplVar36 = *pppppplVar39, ppppplVar36 == (longlong *****)0x0))
                    goto LAB_14426c5d3;
                    if (*(int *)(ppppplVar32 + 3) == *(int *)(ppppplVar36 + 3)) goto LAB_14426c5e1;
                    if (*(int *)(ppppplVar32 + 3) < *(int *)(ppppplVar36 + 3)) goto LAB_14426c5d3;
                  }
                  local_78 = (char *)*pppppplVar38;
                  uStack_70 = (longlong *******)pppppplVar38[1];
                  pppppplVar39 = (longlong ******)local_78;
                  ppppppplVar16 = uStack_70;
                  ppppplVar32 = *(longlong ******)((longlong)pppppplVar20 + 8);
                  *pppppplVar38 = *pppppplVar20;
                  pppppplVar38[1] = ppppplVar32;
                  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                  uStack_70._4_4_ = (int)((ulonglong)uStack_70 >> 0x20);
                  *(int *)pppppplVar20 = (int)local_78;
                  *(undefined4 *)((longlong)pppppplVar20 + 4) = local_78._4_4_;
                  *(int *)((longlong)pppppplVar20 + 8) = (int)uStack_70;
                  *(int *)((longlong)pppppplVar20 + 0xc) = uStack_70._4_4_;
                  local_78 = (char *)pppppplVar39;
                  uStack_70 = ppppppplVar16;
                }
                goto LAB_14426c5fc;
              }
LAB_14426c2f1:
              iVar54 = (int)uVar34;
              ppppppplVar42 = local_4e8;
              if (iVar54 != 0) {
                iVar48 = (iVar48 - (iVar48 + -1 >> 0x1f)) + -1 >> 1;
                iVar37 = iVar48;
joined_r0x00014426c312:
                do {
                  iVar27 = iVar48 * 2 + 1;
                  if (iVar54 <= iVar27) goto LAB_14426c3fc;
                  iVar56 = iVar48 * 2 + 2;
                  if (((iVar56 < iVar54) &&
                      (ppppplVar32 = pppppplVar19[(longlong)iVar56 * 2],
                      ppppplVar32 != (longlong *****)0x0)) &&
                     (ppppplVar36 = pppppplVar19[(longlong)iVar27 * 2],
                     ppppplVar36 != (longlong *****)0x0)) {
                    if (*(int *)(ppppplVar32 + 3) == *(int *)(ppppplVar36 + 3)) {
                      iVar10 = FUN_1467d15c4(ppppplVar32 + 1,ppppplVar36 + 1);
                      if (iVar10 < 0) goto LAB_14426c35b;
                    }
                    else if (*(int *)(ppppplVar32 + 3) < *(int *)(ppppplVar36 + 3))
                    goto LAB_14426c35b;
                  }
                  else {
LAB_14426c35b:
                    iVar56 = iVar27;
                  }
                  pppppplVar20 = pppppplVar19 + (longlong)iVar56 * 2;
                  ppppplVar32 = pppppplVar19[(longlong)iVar48 * 2];
                  if ((ppppplVar32 == (longlong *****)0x0) ||
                     (ppppplVar36 = *pppppplVar20, ppppplVar36 == (longlong *****)0x0)) {
LAB_14426c38b:
                    pppppplVar38 = pppppplVar19 + (longlong)iVar48 * 2;
                    local_78 = (char *)*pppppplVar38;
                    uStack_70 = (longlong *******)pppppplVar38[1];
                    pppppplVar39 = (longlong ******)local_78;
                    ppppppplVar42 = uStack_70;
                    ppppplVar32 = pppppplVar20[1];
                    *pppppplVar38 = *pppppplVar20;
                    pppppplVar38[1] = ppppplVar32;
                    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                    uStack_70._4_4_ = (int)((ulonglong)uStack_70 >> 0x20);
                    *(int *)pppppplVar20 = (int)local_78;
                    *(undefined4 *)((longlong)pppppplVar20 + 4) = local_78._4_4_;
                    *(int *)(pppppplVar20 + 1) = (int)uStack_70;
                    *(int *)((longlong)pppppplVar20 + 0xc) = uStack_70._4_4_;
                    iVar48 = iVar56;
                    local_78 = (char *)pppppplVar39;
                    uStack_70 = ppppppplVar42;
                    goto joined_r0x00014426c312;
                  }
                  if (*(int *)(ppppplVar32 + 3) == *(int *)(ppppplVar36 + 3)) {
                    iVar27 = FUN_1467d15c4(ppppplVar32 + 1,ppppplVar36 + 1);
                    if (iVar27 < 0) goto LAB_14426c38b;
                  }
                  else if (*(int *)(ppppplVar32 + 3) < *(int *)(ppppplVar36 + 3))
                  goto LAB_14426c38b;
LAB_14426c3fc:
                  bVar59 = iVar37 != 0;
                  iVar48 = iVar37 + -1;
                  iVar37 = iVar48;
                } while (bVar59);
                ppppppplVar42 = local_4e8;
                if (1 < iVar54) {
                  uVar34 = uVar34 - 1;
                  local_78 = (char *)*pppppplVar19;
                  uStack_70 = (longlong *******)pppppplVar19[1];
                  pppppplVar39 = (longlong ******)local_78;
                  ppppppplVar16 = uStack_70;
                  ppppplVar32 = (pppppplVar19 + uVar34 * 2)[1];
                  *pppppplVar19 = pppppplVar19[uVar34 * 2];
                  pppppplVar19[1] = ppppplVar32;
                  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                  uStack_70._4_4_ = (int)((ulonglong)uStack_70 >> 0x20);
                  pppppplVar20 = pppppplVar19 + uVar34 * 2;
                  *(int *)pppppplVar20 = (int)local_78;
                  *(undefined4 *)((longlong)pppppplVar20 + 4) = local_78._4_4_;
                  *(int *)(pppppplVar20 + 1) = (int)uStack_70;
                  *(int *)((longlong)pppppplVar20 + 0xc) = uStack_70._4_4_;
                  local_78 = (char *)pppppplVar39;
                  uStack_70 = ppppppplVar16;
                  if (iVar54 != 2) {
                    do {
                      iVar54 = 0;
                      iVar37 = 1;
                      iVar48 = 0;
                      do {
                        iVar27 = iVar54 + 2;
                        if ((((longlong)iVar27 < (longlong)uVar34) &&
                            (ppppplVar32 = pppppplVar19[(longlong)iVar27 * 2],
                            ppppplVar32 != (longlong *****)0x0)) &&
                           (ppppplVar36 = pppppplVar19[(longlong)iVar37 * 2],
                           ppppplVar36 != (longlong *****)0x0)) {
                          if (*(int *)(ppppplVar32 + 3) == *(int *)(ppppplVar36 + 3)) {
                            iVar54 = FUN_1467d15c4(ppppplVar32 + 1,ppppplVar36 + 1);
                            if (iVar54 < 0) goto LAB_14426c48b;
                          }
                          else if (*(int *)(ppppplVar32 + 3) < *(int *)(ppppplVar36 + 3))
                          goto LAB_14426c48b;
                        }
                        else {
LAB_14426c48b:
                          iVar27 = iVar37;
                        }
                        pppppplVar20 = pppppplVar19 + (longlong)iVar27 * 2;
                        ppppplVar32 = pppppplVar19[(longlong)iVar48 * 2];
                        if ((ppppplVar32 != (longlong *****)0x0) &&
                           (ppppplVar36 = *pppppplVar20, ppppplVar36 != (longlong *****)0x0)) {
                          if (*(int *)(ppppplVar32 + 3) == *(int *)(ppppplVar36 + 3)) {
                            iVar54 = FUN_1467d15c4(ppppplVar32 + 1,ppppplVar36 + 1);
                            if (-1 < iVar54) break;
                          }
                          else if (*(int *)(ppppplVar36 + 3) <= *(int *)(ppppplVar32 + 3)) break;
                        }
                        pppppplVar38 = pppppplVar19 + (longlong)iVar48 * 2;
                        pppppplVar39 = (longlong ******)*pppppplVar38;
                        ppppppplVar42 = (longlong *******)pppppplVar38[1];
                        ppppplVar32 = pppppplVar20[1];
                        *pppppplVar38 = *pppppplVar20;
                        pppppplVar38[1] = ppppplVar32;
                        local_78._0_4_ = (int)pppppplVar39;
                        local_78._4_4_ = (undefined4)((ulonglong)pppppplVar39 >> 0x20);
                        uStack_70._0_4_ = (int)ppppppplVar42;
                        uStack_70._4_4_ = (int)((ulonglong)ppppppplVar42 >> 0x20);
                        *(int *)pppppplVar20 = (int)local_78;
                        *(undefined4 *)((longlong)pppppplVar20 + 4) = local_78._4_4_;
                        *(int *)(pppppplVar20 + 1) = (int)uStack_70;
                        *(int *)((longlong)pppppplVar20 + 0xc) = uStack_70._4_4_;
                        iVar54 = iVar27 * 2;
                        iVar37 = iVar27 * 2 + 1;
                        iVar48 = iVar27;
                        local_78 = (char *)pppppplVar39;
                        uStack_70 = ppppppplVar42;
                      } while ((longlong)iVar37 < (longlong)uVar34);
                      uVar45 = uVar34 - 1;
                      local_78 = (char *)*pppppplVar19;
                      uStack_70 = (longlong *******)pppppplVar19[1];
                      pppppplVar39 = (longlong ******)local_78;
                      ppppppplVar16 = uStack_70;
                      ppppplVar32 = (pppppplVar19 + uVar45 * 2)[1];
                      *pppppplVar19 = pppppplVar19[uVar45 * 2];
                      pppppplVar19[1] = ppppplVar32;
                      local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                      uStack_70._4_4_ = (int)((ulonglong)uStack_70 >> 0x20);
                      pppppplVar20 = pppppplVar19 + uVar45 * 2;
                      *(int *)pppppplVar20 = (int)local_78;
                      *(undefined4 *)((longlong)pppppplVar20 + 4) = local_78._4_4_;
                      *(int *)(pppppplVar20 + 1) = (int)uStack_70;
                      *(int *)((longlong)pppppplVar20 + 0xc) = uStack_70._4_4_;
                      bVar59 = 2 < uVar34;
                      ppppppplVar42 = local_4e8;
                      uVar34 = uVar45;
                      local_78 = (char *)pppppplVar39;
                      uStack_70 = ppppppplVar16;
                    } while (bVar59);
                  }
                }
              }
LAB_14426c5fc:
              ppppppplVar42 = ppppppplVar42 + -3;
            } while (&local_378 <= ppppppplVar42);
          }
          pppppplVar20 = local_468;
          if ((int)uStack_460 == 0) {
            uVar34 = 0;
          }
          else {
            lVar49 = (longlong)(int)uStack_460;
            plVar11 = (longlong *)(local_4c8 + 0x78);
            lVar33 = 0;
            do {
              if (*(longlong *)((longlong)pppppplVar20 + lVar33) != 0) {
                iVar54 = *(int *)(local_4c8 + 0x80);
                *(uint *)(local_4c8 + 0x80) = iVar54 + 1U;
                if (*(uint *)(local_4c8 + 0x84) < iVar54 + 1U) {
                  FUN_1410d14fc(plVar11,iVar54);
                }
                *(PSRWLOCK *)(*plVar11 + (longlong)iVar54 * 8) = local_4e0;
                puVar41 = *(undefined8 **)((longlong)pppppplVar20 + lVar33);
                iVar54 = (int)local_4d0[0xe];
                *(uint *)(local_4d0 + 0xe) = iVar54 + 1U;
                if (*(uint *)((longlong)local_4d0 + 0x74) < iVar54 + 1U) {
                  FUN_144275c26(local_4d8,iVar54);
                }
                lVar22 = *local_4d8;
                lVar18 = (longlong)iVar54 * 0x88;
                *(undefined8 *)(lVar22 + lVar18) = *puVar41;
                plVar47 = (longlong *)puVar41[1];
                *(longlong **)(lVar22 + 8 + lVar18) = plVar47;
                if (plVar47 != (longlong *)0x0) {
                  (**(code **)(*plVar47 + 8))();
                }
                lVar22 = lVar22 + lVar18;
                *(undefined4 *)(lVar22 + 0x10) = *(undefined4 *)(puVar41 + 2);
                uVar43 = *(undefined4 *)((longlong)puVar41 + 0x1c);
                uVar44 = *(undefined4 *)(puVar41 + 4);
                uVar6 = *(undefined4 *)((longlong)puVar41 + 0x24);
                *(undefined4 *)(lVar22 + 0x18) = *(undefined4 *)(puVar41 + 3);
                *(undefined4 *)(lVar22 + 0x1c) = uVar43;
                *(undefined4 *)(lVar22 + 0x20) = uVar44;
                *(undefined4 *)(lVar22 + 0x24) = uVar6;
                *(undefined8 *)(lVar22 + 0x48) = 0;
                *(undefined4 *)(lVar22 + 0x50) = 0;
                *(undefined8 *)(lVar22 + 0x28) = 0;
                *(undefined8 *)(lVar22 + 0x30) = 0;
                *(undefined8 *)(lVar22 + 0x54) = 0xffffffff00000080;
                *(undefined4 *)(lVar22 + 0x5c) = 0;
                *(undefined8 *)(lVar22 + 0x68) = 0;
                *(undefined4 *)(lVar22 + 0x70) = 0;
                FUN_144275d94(lVar22 + 0x28,puVar41 + 5);
                *(undefined8 *)(lVar22 + 0x78) = 0;
                iVar54 = *(int *)(puVar41 + 0x10);
                pvVar4 = (void *)puVar41[0xf];
                *(int *)(lVar22 + 0x80) = iVar54;
                if ((longlong)iVar54 == 0) {
                  *(undefined4 *)(lVar22 + 0x84) = 0;
                }
                else {
                  FUN_1411e2848((undefined8 *)(lVar22 + 0x78),iVar54,0);
                  memcpy(*(void **)(lVar22 + 0x78),pvVar4,(longlong)iVar54 << 3);
                }
                local_4e0 = (PSRWLOCK)((longlong)&local_4e0->Ptr + 1);
              }
              lVar33 = lVar33 + 0x10;
            } while (lVar49 * 0x10 != lVar33);
            uVar34 = uStack_460 & 0xffffffff;
          }
          FUN_1442796d2(local_468,uVar34);
          ppppppplVar42 = local_4b8;
          plVar11 = local_4d0;
          plVar47 = local_4d8;
          if (local_468 != (longlong ******)0x0) {
            FUN_1400020a8();
          }
        }
      }
      ppppppplVar42 = ppppppplVar42 + 0x11;
    } while (ppppppplVar42 != local_490);
    uVar34 = (ulonglong)ppppppplStack_430 & 0xffffffff;
  }
  FUN_1442471ff(local_438,uVar34);
  if (local_438 != (longlong *******)0x0) {
    FUN_1400020a8();
  }
  FUN_1442471ff(local_428,(ulonglong)uStack_420 & 0xffffffff);
  if (local_428 != (longlong *******)0x0) {
    FUN_1400020a8();
  }
  local_3d0 = 0;
  if (local_3d8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1442758a8(&local_418);
  local_380 = 0;
  if (local_388 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1442758a8(&local_3c8);
  if (local_488 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14426c8a7:
  uVar14 = (**(code **)(*(longlong *)(local_4c0 + 0xe68) + 0x10))(local_4c0 + 0xe68);
  puVar41 = (undefined8 *)FUN_14663d9ae(local_4a0);
  local_4e8 = (longlong *******)*puVar41;
  local_4e0 = (PSRWLOCK)(local_4e8 + 5);
  AcquireSRWLockShared(local_4e0);
  if ((longlong)(int)plVar11[1] != 0) {
    puVar41 = (undefined8 *)*plVar11;
    puVar30 = puVar41 + (longlong)(int)plVar11[1] * 0x22;
    do {
      local_360 = local_360 & 0xffffffffffffff00;
      local_378 = (longlong *******)appppplStack_358;
      local_368 = local_258;
      lVar49 = 0;
      do {
        *(short *)((longlong)appppplStack_358 + lVar49 * 2) = (short)"inventory.echologs."[lVar49];
        lVar49 = lVar49 + 1;
      } while (lVar49 != 0x13);
      ppppppplStack_370 = (longlong *******)local_332;
      pvVar4 = (void *)*puVar41;
      uVar40 = *(uint *)(puVar41 + 1);
      iVar54 = uVar40 - 1;
      if (uVar40 == 0) {
        iVar54 = 0;
      }
      lVar49 = (longlong)iVar54;
      if (0x6c < iVar54) {
        FUN_140213274(&local_378,lVar49);
      }
      ppppppplVar42 = ppppppplStack_370;
      if (1 < uVar40) {
        memcpy(ppppppplStack_370,pvVar4,lVar49 * 2);
        ppppppplStack_370 = (longlong *******)((longlong)ppppppplVar42 + lVar49 * 2);
      }
      bVar8 = FUN_141011ad4(uVar14,puVar41 + 0x19);
      *(byte *)(puVar41 + 0x18) = *(byte *)(puVar41 + 0x18) & 0xfe | bVar8;
      FUN_144244c1e(puVar41,local_4c0);
      bVar8 = *(byte *)(puVar41 + 0x18);
      if ((bVar8 & 1) == 0) {
        bVar9 = 0;
      }
      else {
        *(undefined2 *)ppppppplStack_370 = 0;
        cVar7 = FUN_148e3768c(local_4e8,local_378);
        bVar9 = cVar7 << 3;
        bVar8 = *(byte *)(puVar41 + 0x18);
      }
      *(byte *)(puVar41 + 0x18) = bVar8 & 0xf7 | bVar9;
      if ((char)local_360 == '\x01') {
        FUN_1400020a8(local_378);
      }
      puVar41 = puVar41 + 0x22;
    } while (puVar41 != puVar30);
  }
  ReleaseSRWLockShared(local_4e0);
  ReleaseSRWLockExclusive(local_498);
LAB_144269890:
  if ((local_60 ^ (ulonglong)auStack_558) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14426cc92 FUN_14426cc92 body=655 status=ok
// SIG undefined FUN_14426cc92(void)

void FUN_14426cc92(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  void *_Src;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  
  FUN_144278eaa(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar16 = 1;
    uVar17 = 0;
    iVar15 = 0;
    iVar12 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar11;
    if (uVar14 == 0) {
      iVar15 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar15 = iVar2 + -1;
      }
      uVar17 = 0;
      uVar16 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar16 = uVar17;
      }
      iVar15 = 0;
      do {
        if (uVar16 == uVar17) {
          return;
        }
        iVar15 = iVar15 + 0x20;
        uVar14 = puVar11[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar17 = 0;
      iVar15 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar16 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar12 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar12) {
      iVar12 = iVar2;
    }
  }
  if (iVar12 < iVar2) {
    uVar14 = 0xffffffff;
    do {
      lVar18 = *param_1;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_144275c26(param_2,iVar2);
      }
      lVar18 = lVar18 + (longlong)iVar12 * 0x98;
      lVar13 = *param_2;
      lVar4 = (longlong)iVar2 * 0x88;
      *(undefined8 *)(lVar13 + lVar4) = *(undefined8 *)(lVar18 + 8);
      plVar3 = *(longlong **)(lVar18 + 0x10);
      *(longlong **)(lVar13 + 8 + lVar4) = plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      lVar13 = lVar13 + lVar4;
      *(undefined4 *)(lVar13 + 0x10) = *(undefined4 *)(lVar18 + 0x18);
      uVar5 = *(undefined4 *)(lVar18 + 0x24);
      uVar6 = *(undefined4 *)(lVar18 + 0x28);
      uVar7 = *(undefined4 *)(lVar18 + 0x2c);
      *(undefined4 *)(lVar13 + 0x18) = *(undefined4 *)(lVar18 + 0x20);
      *(undefined4 *)(lVar13 + 0x1c) = uVar5;
      *(undefined4 *)(lVar13 + 0x20) = uVar6;
      *(undefined4 *)(lVar13 + 0x24) = uVar7;
      *(undefined8 *)(lVar13 + 0x48) = 0;
      *(undefined4 *)(lVar13 + 0x50) = 0;
      *(undefined8 *)(lVar13 + 0x28) = 0;
      *(undefined8 *)(lVar13 + 0x30) = 0;
      *(undefined8 *)(lVar13 + 0x54) = 0xffffffff00000080;
      *(undefined4 *)(lVar13 + 0x5c) = 0;
      *(undefined8 *)(lVar13 + 0x68) = 0;
      *(undefined4 *)(lVar13 + 0x70) = 0;
      FUN_144275d94(lVar13 + 0x28,lVar18 + 0x30);
      *(undefined8 *)(lVar13 + 0x78) = 0;
      iVar2 = *(int *)(lVar18 + 0x88);
      _Src = *(void **)(lVar18 + 0x80);
      *(int *)(lVar13 + 0x80) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)(lVar13 + 0x84) = 0;
      }
      else {
        FUN_1411e2848((undefined8 *)(lVar13 + 0x78),iVar2,0);
        memcpy(*(void **)(lVar13 + 0x78),_Src,(longlong)iVar2 << 3);
      }
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 2);
      }
      iVar2 = (int)param_1[5];
      iVar12 = (int)uVar17;
      lVar18 = (longlong)iVar12;
      uVar8 = puVar11[lVar18] & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar9 = iVar2 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar12) {
          iVar10 = iVar12;
        }
        if (iVar9 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar8 = puVar11[lVar18 + lVar13 + 1];
          if (uVar8 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar10 - lVar18 == lVar13) {
            return;
          }
        }
        uVar17 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar8 & uVar8);
      uVar1 = uVar16 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar12 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar2);
  }
  return;
}



// FUNCTION 14426cf44 FUN_14426cf44 body=430 status=ok
// SIG undefined FUN_14426cf44(void)

void FUN_14426cf44(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_a8 [36];
  undefined1 local_84 [4];
  undefined8 local_80;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)FUN_140f566ec();
  if ((plVar2 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2), lVar3 != 0)) {
    lVar4 = FUN_1410a623c();
    lVar6 = *(longlong *)(lVar4 + 0x58);
    if (lVar6 == 0) {
      uVar5 = FUN_145764ed6();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(lVar4 + 0x58) = lVar6;
    }
    if (((*(longlong *)(lVar4 + 0x60) == 0) && (lVar6 != 0)) && (*(longlong *)(lVar4 + 0x50) != 0))
    {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar1 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar1 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        uVar5 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x50));
      }
      *(undefined8 *)(lVar4 + 0x60) = uVar5;
    }
    FUN_140f56c86(lVar3,&local_78);
    lVar6 = local_78;
    if ((longlong)local_70 != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar6 + lVar4) != 0) {
          FUN_1410a652e(param_1,lVar3);
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)local_70 * 8 != lVar4);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  if (*(char *)(param_2 + 8) == '\x01') {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_1446ddda2(&local_68,"points",0);
    local_80 = 0;
    FUN_14052b5e0(local_84,&DAT_14b9abe3f,0);
    FUN_14102901c(param_1,local_84,&local_68,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14426d0f4 FUN_14426d0f4 body=400 status=ok
// SIG undefined FUN_14426d0f4(void)

void FUN_14426d0f4(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4,char param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_98 [36];
  undefined1 local_74 [4];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_1410a623c();
  lVar6 = *(longlong *)(lVar2 + 0x58);
  if (lVar6 == 0) {
    uVar3 = FUN_145764ed6();
    lVar6 = FUN_14477b664(uVar3);
    *(longlong *)(lVar2 + 0x58) = lVar6;
  }
  lVar4 = *(longlong *)(lVar2 + 0x60);
  if (((lVar4 != 0) || (lVar4 = 0, lVar6 == 0)) || (*(longlong *)(lVar2 + 0x50) == 0))
  goto LAB_14426d18d;
  plVar5 = *(longlong **)(lVar6 + 0xb8);
  if (plVar5 == (longlong *)0x0) {
LAB_14426d27e:
    lVar4 = 0;
  }
  else {
    cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5);
    if (cVar1 == '\0') goto LAB_14426d27e;
    uVar3 = (**(code **)(*plVar5 + 0x110))(plVar5);
    lVar4 = FUN_144aff482(uVar3,(longlong *)(lVar2 + 0x50));
  }
  *(longlong *)(lVar2 + 0x60) = lVar4;
LAB_14426d18d:
  if (lVar4 == param_2) {
    plVar5 = (longlong *)FUN_140f566ec(param_1);
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
      if (lVar6 != 0) {
        lVar2 = FUN_140f56a62(param_1);
        if (lVar2 != 0) {
          FUN_1410a652e(param_1,lVar6,lVar2);
        }
        if (param_5 == '\x01' && 0 < param_4) {
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          local_50 = 0;
          uStack_48 = 0;
          FUN_1446ddda2(&local_68,"points",0);
          local_70 = 0;
          FUN_14052b5e0(local_74,&DAT_14b9abe3f,0);
          FUN_14102901c(param_1,local_74,&local_68,1);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14426d286 FUN_14426d286 body=151 status=ok
// SIG undefined FUN_14426d286(void)

void FUN_14426d286(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xe0);
  if (lVar4 == 0) {
    uVar3 = FUN_145c20674();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0xe0) = lVar4;
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0xd8));
    }
    *(undefined8 *)(param_1 + 0xe8) = uVar3;
    return;
  }
  return;
}



// FUNCTION 14426d31e FUN_14426d31e body=136 status=ok
// SIG undefined FUN_14426d31e(void)

void FUN_14426d31e(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x50);
  if (lVar4 == 0) {
    uVar3 = FUN_145c20674();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x50) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x48));
    }
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    return;
  }
  return;
}



// FUNCTION 14426d3a6 FUN_14426d3a6 body=69 status=ok
// SIG undefined FUN_14426d3a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14426d3a6(void)

{
  _DAT_14cbd65a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014426d3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd65b0,1);
  return;
}



// FUNCTION 14426d3eb FUN_14426d3eb body=69 status=ok
// SIG undefined FUN_14426d3eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14426d3eb(void)

{
  _DAT_14cbd65c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014426d42d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd65c8,1);
  return;
}



// FUNCTION 14426d430 FUN_14426d430 body=69 status=ok
// SIG undefined FUN_14426d430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14426d430(void)

{
  _DAT_14cbd65d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014426d472. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd65e0,1);
  return;
}



// FUNCTION 14426d475 FUN_14426d475 body=69 status=ok
// SIG undefined FUN_14426d475(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14426d475(void)

{
  _DAT_14cbd65f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014426d4b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd65f8,1);
  return;
}



// FUNCTION 14426d56e FUN_14426d56e body=69 status=ok
// SIG undefined FUN_14426d56e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14426d56e(void)

{
  _DAT_14cbd6ba0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014426d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd6ba8,1);
  return;
}



// FUNCTION 14426d5b4 FUN_14426d5b4 body=3133 status=ok
// SIG undefined FUN_14426d5b4(void)

/* WARNING: Removing unreachable block (ram,0x00014426e1e0) */
/* WARNING: Removing unreachable block (ram,0x00014426e1e8) */

void FUN_14426d5b4(longlong param_1,float param_2)

{
  int *piVar1;
  longlong *plVar2;
  PSRWLOCK pRVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  code *pcVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  longlong *plVar13;
  code cVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  double *pdVar18;
  code cVar19;
  undefined2 *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined2 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  longlong *local_d8;
  PSRWLOCK local_d0;
  PSRWLOCK local_c8;
  undefined2 *local_c0 [7];
  undefined2 *local_88;
  longlong *plStack_80;
  code *local_78;
  longlong *local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar16 = *(longlong *)(param_1 + -0x18);
  if (lVar16 == 0) goto LAB_14426dc39;
  if (DAT_14cbadd90 == 0) {
    local_f0 = &local_78;
    local_78 = FUN_141030f22;
    local_e0 = FUN_14081d0ea;
    local_e8 = &LAB_1459f2e4c;
    local_f8 = &LAB_148c39de3;
    local_100 = &LAB_1457a9eb2;
    local_108 = &DAT_149e063b2;
    local_110 = 0;
    local_118 = 0x10000004;
    local_120 = 0x10;
    local_128 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if (((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
     (cVar9 = FUN_14030d5d4(lVar16), cVar9 != '\0')) goto LAB_14426dc39;
  plVar13 = (longlong *)(param_1 + -0x38);
  if (*(char *)(param_1 + 0x1e8) == '\x01') {
    *(undefined1 *)(param_1 + 0x1e8) = 0;
    uVar12 = FUN_1401e6c61();
    iVar10 = FUN_140df7d8e(lVar16,uVar12);
    local_d8 = plVar13;
    FUN_140d128b6(plVar13,&local_78);
    pcVar7 = local_78;
    local_c8 = (PSRWLOCK)(local_78 + 0x638);
    AcquireSRWLockExclusive(local_c8);
    plVar13 = local_70;
    *(int *)(pcVar7 + 0x630) = *(int *)(pcVar7 + 0x630) + 1;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_70 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    cVar19 = (code)0x0;
    FUN_140babe90(pcVar7,param_1 + 0x30,0);
    plVar13 = (longlong *)(param_1 + 0x108);
    FUN_140bafb3c(pcVar7,plVar13,0);
    if (-1 < iVar10) {
      cVar19 = (code)(iVar10 < *(int *)(pcVar7 + 0x44));
    }
    if (cVar19 == pcVar7[0x400]) {
      if (*(int *)(pcVar7 + 0x404) == 0) {
        iVar11 = 1;
        goto LAB_14426df3b;
      }
    }
    else {
      iVar11 = *(int *)(pcVar7 + 0x404) + 1;
LAB_14426df3b:
      pcVar7[0x400] = cVar19;
      *(int *)(pcVar7 + 0x404) = iVar11;
    }
    FUN_140bac216(local_d8,&local_78);
    FUN_140bac58e(pcVar7,&local_78);
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_140babf00(pcVar7);
    iVar11 = *(int *)(pcVar7 + 0x43c);
    if (*(int *)(pcVar7 + 0x438) == 0) {
      if (iVar11 == 0) {
        iVar11 = 0;
        goto LAB_14426d758;
      }
    }
    else {
LAB_14426d758:
      *(undefined4 *)(pcVar7 + 0x438) = 0;
      *(int *)(pcVar7 + 0x43c) = iVar11 + 1;
    }
    iVar11 = *(int *)(pcVar7 + 0x14);
    if (pcVar7[0x10] == (code)0x0) {
      if (iVar11 == 0) {
        iVar11 = 0;
        goto LAB_14426d7ab;
      }
    }
    else {
LAB_14426d7ab:
      pcVar7[0x10] = (code)0x0;
      *(int *)(pcVar7 + 0x14) = iVar11 + 1;
    }
    *(int *)(pcVar7 + 0x200) = *(int *)(pcVar7 + 0x200) + 1;
    if (*plVar13 != 0) {
      if ((longlong)*(int *)(param_1 + 0x120) != 0) {
        lVar16 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x118) + lVar16) == 0) goto LAB_14426d9a0;
          lVar16 = lVar16 + 8;
        } while ((longlong)*(int *)(param_1 + 0x120) * 8 != lVar16);
      }
      if (*(longlong *)(param_1 + 0x110) != 0) {
        FUN_140bb46a8(local_d8,&local_78);
        pcVar8 = local_78;
        local_d0 = (PSRWLOCK)(local_78 + 0x638);
        AcquireSRWLockExclusive(local_d0);
        plVar17 = local_70;
        *(int *)(pcVar8 + 0x630) = *(int *)(pcVar8 + 0x630) + 1;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_70 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
            }
          }
        }
        cVar19 = (code)0x0;
        FUN_140babe90(pcVar8,plVar13,0);
        FUN_140bafb3c(pcVar8,param_1 + 0x30,0);
        if (-1 < iVar10) {
          cVar19 = (code)(iVar10 < *(int *)(pcVar8 + 0x44));
        }
        if (cVar19 == pcVar8[0x400]) {
          if (*(int *)(pcVar8 + 0x404) == 0) {
            iVar10 = 1;
            goto LAB_14426df6a;
          }
        }
        else {
          iVar10 = *(int *)(pcVar8 + 0x404) + 1;
LAB_14426df6a:
          pcVar8[0x400] = cVar19;
          *(int *)(pcVar8 + 0x404) = iVar10;
        }
        FUN_140bac216(local_d8,&local_78);
        FUN_140bac58e(pcVar8,&local_78);
        if (local_78 != (code *)0x0) {
          FUN_1400020a8();
        }
        FUN_140babf00(pcVar8);
        if (*(int *)(pcVar8 + 0x438) == 0) {
          if (*(int *)(pcVar8 + 0x43c) == 0) {
            iVar10 = 1;
            goto LAB_14426d8f0;
          }
        }
        else {
          iVar10 = *(int *)(pcVar8 + 0x43c) + 1;
LAB_14426d8f0:
          *(undefined4 *)(pcVar8 + 0x438) = 0;
          *(int *)(pcVar8 + 0x43c) = iVar10;
        }
        if (pcVar8[0x10] == (code)0x1) {
          if (*(int *)(pcVar8 + 0x14) == 0) {
            iVar10 = 1;
            goto LAB_14426d920;
          }
        }
        else {
          iVar10 = *(int *)(pcVar8 + 0x14) + 1;
LAB_14426d920:
          pcVar8[0x10] = (code)0x1;
          *(int *)(pcVar8 + 0x14) = iVar10;
        }
        if (((((*(double *)(pcVar8 + 0x440) != 80.0) || (NAN(*(double *)(pcVar8 + 0x440)))) ||
             ((*(double *)(pcVar8 + 0x448) != 80.0 ||
              ((NAN(*(double *)(pcVar8 + 0x448)) || (*(double *)(pcVar8 + 0x450) != 0.0)))))) ||
            (NAN(*(double *)(pcVar8 + 0x450)))) || (*(int *)(pcVar8 + 0x458) == 0)) {
          *(undefined8 *)(pcVar8 + 0x440) = 0x4054000000000000;
          *(undefined8 *)(pcVar8 + 0x448) = 0x4054000000000000;
          *(undefined8 *)(pcVar8 + 0x450) = 0;
          *(int *)(pcVar8 + 0x458) = *(int *)(pcVar8 + 0x458) + 1;
        }
        *(int *)(pcVar8 + 0x200) = *(int *)(pcVar8 + 0x200) + 1;
        ReleaseSRWLockExclusive(local_d0);
      }
    }
LAB_14426d9a0:
    plVar13 = local_d8;
    if ((((DAT_14cbd6bb0 == '\x01') &&
         (lVar16 = (**(code **)(*local_d8 + 0x180))(local_d8), lVar16 != 0)) &&
        (*(longlong *)(lVar16 + 0x1f0) != 0)) && (lVar16 = FUN_1400d6ce6(), lVar16 != 0)) {
      FUN_1411bce66(lVar16,&local_78,pcVar7 + 0x1f0,&DAT_14cbe4638);
      if (local_78 == (code *)0x0) {
        FUN_1411bd35e(lVar16,local_c0,pcVar7 + 0x1f0,&DAT_14cbe4638);
      }
      else {
        local_88 = (undefined2 *)0x0;
        plStack_80 = (longlong *)0x0;
        FUN_1401031ac(local_78,0,&local_88);
        puVar20 = local_88;
        if ((int)plStack_80 == 0) {
          puVar20 = &DAT_149dfb77a;
        }
        FUN_140002266(&local_78,L"TextureRenderTarget2D\'%s\'",puVar20);
        FUN_140775538(pcVar7 + 0x1d8);
        local_c0[0] = local_88;
        if (local_78 != (code *)0x0) {
          FUN_1400020a8();
          local_c0[0] = local_88;
        }
      }
      if (local_c0[0] != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    *(undefined4 *)(param_1 + 0x20c) = 0;
    ReleaseSRWLockExclusive(local_c8);
  }
  else if (*(float *)(param_1 + 0x20c) < *(float *)(param_1 + 0x200)) {
    *(float *)(param_1 + 0x20c) = *(float *)(param_1 + 0x20c) + param_2;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if ((longlong)*(int *)(param_1 + 0x48) != 0) {
      lVar16 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x40) + lVar16) == 0) goto LAB_14426dbfa;
        lVar16 = lVar16 + 8;
      } while ((longlong)*(int *)(param_1 + 0x48) * 8 != lVar16);
    }
    lVar16 = FUN_1400d7050(param_1 + -8);
    if (lVar16 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_f0 = &local_78;
        local_78 = FUN_141030f22;
        local_e0 = FUN_14081d0ea;
        local_e8 = &LAB_1459f2e4c;
        local_f8 = &LAB_148c39de3;
        local_100 = &LAB_1457a9eb2;
        local_108 = &DAT_149e063b2;
        local_110 = 0;
        local_118 = 0x10000004;
        local_120 = 0x10;
        local_128 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
         (plVar17 = *(longlong **)(lVar16 + 0x2500), plVar17 != (longlong *)0x0)) {
        (**(code **)(*plVar17 + 0x730))(plVar17,&local_78);
        dVar6 = (double)local_70 - *(double *)(param_1 + 0x20);
        dVar5 = (double)local_78 - *(double *)(param_1 + 0x18);
        FUN_140d128b6(plVar13,&local_88);
        puVar20 = local_88;
        pRVar3 = (PSRWLOCK)(local_88 + 0x31c);
        AcquireSRWLockExclusive(pRVar3);
        plVar17 = plStack_80;
        piVar1 = (int *)(puVar20 + 0x318);
        *piVar1 = *piVar1 + 1;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_80 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
            }
          }
        }
        *(float *)(puVar20 + 0x230) = (float)SQRT(dVar5 * dVar5 + dVar6 * dVar6);
        ReleaseSRWLockExclusive(pRVar3);
      }
    }
  }
LAB_14426dbfa:
  if (((*(int *)(param_1 + 0x14) == 0) || (uVar4 = *(uint *)(param_1 + 0x10), (int)uVar4 < 0)) ||
     ((DAT_14c9647dc <= (int)uVar4 ||
      (((plVar17 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
        plVar17 == (longlong *)0x0 || ((int)plVar17[2] != *(int *)(param_1 + 0x14))) ||
       ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)))))) goto LAB_14426dc39;
  if ((*(uint *)(plVar17 + 1) & 0x10200000) == 0) {
    lVar16 = *plVar17;
  }
  else {
    lVar16 = 0;
  }
  cVar9 = FUN_140991644(param_1 + 0x30,lVar16 + 0x3f0);
  if (cVar9 == '\0') goto LAB_14426dc39;
  FUN_140d128b6(plVar13,&local_78);
  pcVar7 = local_78;
  pRVar3 = (PSRWLOCK)(local_78 + 0x638);
  AcquireSRWLockExclusive(pRVar3);
  plVar13 = local_70;
  *(int *)(pcVar7 + 0x630) = *(int *)(pcVar7 + 0x630) + 1;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_70 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  cVar9 = FUN_1418f6c50();
  if (cVar9 == '\0') {
    iVar10 = *(int *)(param_1 + 0x14);
    if (iVar10 == 0) {
LAB_14426dfae:
      lVar16 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x10);
      lVar16 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != iVar10 || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0))))
        goto LAB_14426dfae;
        lVar16 = *plVar13;
      }
    }
    if ((*(longlong *)(lVar16 + 0x1c8) == 0) ||
       (lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x1c8) + 0x120), lVar16 == 0)) {
LAB_14426dd55:
      if (iVar10 == 0) {
LAB_14426dfbd:
        plVar13 = (longlong *)0x0;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x10);
        plVar13 = (longlong *)0x0;
        if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
          puVar15 = (undefined8 *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if ((puVar15 == (undefined8 *)0x0) ||
             ((*(int *)(puVar15 + 2) != iVar10 || ((*(uint *)(puVar15 + 1) & 0x10200000) != 0))))
          goto LAB_14426dfbd;
          plVar13 = (longlong *)*puVar15;
        }
      }
      (**(code **)(*plVar13 + 0x328))(plVar13,&local_78);
      if (((double)*(float *)(param_1 + 0x208) <= ABS(local_68)) ||
         (*(float *)(param_1 + 0x204) <=
          (float)SQRT((double)local_78 * (double)local_78 + (double)local_70 * (double)local_70))) {
        *(undefined4 *)(param_1 + 0x20c) = 0;
        cVar19 = (code)0x0;
        cVar14 = (code)0x0;
      }
      else {
        cVar19 = (code)0x0;
        cVar14 = (code)0x1;
      }
    }
    else {
      cVar19 = (code)0x1;
      cVar14 = (code)0x1;
      if (*(longlong *)(lVar16 + 0xa8) == 0) goto LAB_14426dd55;
    }
    if (*(float *)(param_1 + 0x20c) < *(float *)(param_1 + 0x200) ||
        *(float *)(param_1 + 0x20c) == *(float *)(param_1 + 0x200)) goto LAB_14426df7c;
    if (*(int *)(param_1 + 0x14) == 0) {
LAB_14426dfb5:
      lVar16 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x10);
      lVar16 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(param_1 + 0x14) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_14426dfb5;
        lVar16 = *plVar13;
      }
    }
    lVar16 = *(longlong *)(lVar16 + 0x1c8);
    if (lVar16 == 0) {
      pdVar18 = (double *)&DAT_14c8464e0;
      uVar21 = (undefined4)DAT_14c8464f0;
      uVar22 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar21 = (undefined4)*(undefined8 *)(lVar16 + 0x270);
      uVar22 = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x270) >> 0x20);
      pdVar18 = (double *)(lVar16 + 0x260);
    }
    dVar5 = *pdVar18;
    dVar6 = pdVar18[1];
    if ((((dVar5 != *(double *)(pcVar7 + 0x440)) || (NAN(dVar5) || NAN(*(double *)(pcVar7 + 0x440)))
         ) || (dVar6 != *(double *)(pcVar7 + 0x448))) ||
       (((NAN(dVar6) || NAN(*(double *)(pcVar7 + 0x448)) ||
         ((double)CONCAT44(uVar22,uVar21) != *(double *)(pcVar7 + 0x450))) ||
        ((NAN((double)CONCAT44(uVar22,uVar21)) || NAN(*(double *)(pcVar7 + 0x450)) ||
         (*(int *)(pcVar7 + 0x458) == 0)))))) {
      *(double *)(pcVar7 + 0x440) = dVar5;
      *(double *)(pcVar7 + 0x448) = dVar6;
      *(ulonglong *)(pcVar7 + 0x450) = CONCAT44(uVar22,uVar21);
      *(int *)(pcVar7 + 0x458) = *(int *)(pcVar7 + 0x458) + 1;
    }
    *(double *)(param_1 + 0x18) = dVar5;
    *(double *)(param_1 + 0x20) = dVar6;
    *(ulonglong *)(param_1 + 0x28) = CONCAT44(uVar22,uVar21);
    if (pcVar7[0x4e8] != cVar14) {
      pcVar7[0x4e8] = cVar14;
      *(int *)(pcVar7 + 0x4ec) = *(int *)(pcVar7 + 0x4ec) + 1;
      if (pcVar7[0x4e0] == cVar19) {
        if (*(int *)(pcVar7 + 0x4e4) != 0) goto LAB_14426df16;
        iVar10 = 1;
      }
      else {
        iVar10 = *(int *)(pcVar7 + 0x4e4) + 1;
      }
      pcVar7[0x4e0] = cVar19;
      lVar16 = 0x4e4;
      goto LAB_14426dfa5;
    }
  }
  else {
LAB_14426df7c:
    if (pcVar7[0x4e8] == (code)0x1) {
      iVar10 = *(int *)(pcVar7 + 0x4ec) + 1;
      pcVar7[0x4e8] = (code)0x0;
      lVar16 = 0x4ec;
LAB_14426dfa5:
      *(int *)(pcVar7 + lVar16) = iVar10;
    }
  }
LAB_14426df16:
  ReleaseSRWLockExclusive(pRVar3);
LAB_14426dc39:
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14426e28e FUN_14426e28e body=6212 status=ok
// SIG undefined FUN_14426e28e(void)

void FUN_14426e28e(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  int local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = FUN_140059518(param_1 + 0x14);
  lVar5 = FUN_1404960a8(uVar4);
  if (lVar5 == 0) goto LAB_14426f4ca;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
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
    local_60[2] = lVar6;
    *local_60 = &PTR_FUN_14b9af050;
    local_60[3] = 0;
    iVar7 = 0;
    if (param_1 != 0x30) {
      uVar1 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar7;
    puVar2[4] = &LAB_14606d25c;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "ReadSaveGames";
    local_48 = 0xd;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x60) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14426e42d;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14426e42d:
  if (*(longlong *)(param_1 + 0x68) == 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
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
    local_60[2] = lVar6;
    *local_60 = &PTR_FUN_14b9af050;
    local_60[3] = 0;
    iVar7 = 0;
    if (param_1 != 0x30) {
      uVar1 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar7;
    puVar2[4] = FUN_148e38c48;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "SelectCharacter";
    local_48 = 0xf;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x68) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14426e58b;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14426e58b:
  if (*(longlong *)(param_1 + 0x80) == 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
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
    local_60[2] = lVar6;
    *local_60 = &PTR_FUN_14b9af050;
    local_60[3] = 0;
    iVar7 = 0;
    if (param_1 != 0x30) {
      uVar1 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar7;
    puVar2[4] = FUN_148e38caa;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "RequestDeleteCharacter";
    local_48 = 0x16;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x80) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14426e6ef;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14426e6ef:
  if (*(longlong *)(param_1 + 0x88) == 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
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
    local_60[2] = lVar6;
    *local_60 = &PTR_FUN_14b9af050;
    local_60[3] = 0;
    iVar7 = 0;
    if (param_1 != 0x30) {
      uVar1 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar7;
    puVar2[4] = FUN_148e38e68;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "DeleteCharacter";
    local_48 = 0xf;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x88) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14426e853;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14426e853:
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
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
    local_60[2] = lVar6;
    *local_60 = &PTR_FUN_14b9af050;
    local_60[3] = 0;
    iVar7 = 0;
    if (param_1 != 0x30) {
      uVar1 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar7;
    puVar2[4] = FUN_14606d266;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "FocusCharacterSlot";
    local_48 = 0x12;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0xa0) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14426e9b7;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14426e9b7:
  if (*(longlong *)(param_1 + 0x168) == 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
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
    local_60[2] = lVar6;
    *local_60 = &PTR_FUN_14b9af050;
    local_60[3] = 0;
    iVar7 = 0;
    if (param_1 != 0x30) {
      uVar1 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar7;
    puVar2[4] = FUN_148e38ec2;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "FOakUIEvent_OnDLCCharacterSelected";
    local_48 = 0x22;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x168) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14426eb1b;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14426eb1b:
  if (*(longlong *)(param_1 + 0x70) == 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
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
    local_60[2] = lVar6;
    *local_60 = &PTR_FUN_14b9af050;
    local_60[3] = 0;
    iVar7 = 0;
    if (param_1 != 0x30) {
      uVar1 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar7;
    puVar2[4] = FUN_148e38f1e;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "LoadCharacter_LineupMode";
    local_48 = 0x18;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x70) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14426ec79;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14426ec79:
  if (*(longlong *)(param_1 + 0x78) == 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
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
    local_60[2] = lVar6;
    *local_60 = &PTR_FUN_14b9af050;
    local_60[3] = 0;
    iVar7 = 0;
    if (param_1 != 0x30) {
      uVar1 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar7;
    puVar2[4] = FUN_14606d49e;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "LoadCharacter_LateJoinMode";
    local_48 = 0x1a;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x78) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14426edd7;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14426edd7:
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
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
    local_60[2] = lVar6;
    *local_60 = &PTR_FUN_14b9af050;
    local_60[3] = 0;
    iVar7 = 0;
    if (param_1 != 0x30) {
      uVar1 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar7;
    puVar2[4] = FUN_148e390d4;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "FOakUIEvent_ViewRecentFriendProfiles";
    local_48 = 0x24;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0xa8) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14426ef3b;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14426ef3b:
  if (*(longlong *)(param_1 + 0x170) == 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
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
    local_60[2] = lVar6;
    *local_60 = &PTR_FUN_14b9af050;
    local_60[3] = 0;
    iVar7 = 0;
    if (param_1 != 0x30) {
      uVar1 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar7;
    puVar2[4] = FUN_14426fad4;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "DownloadAndSelectCloudCharacter";
    local_48 = 0x1f;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x170) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14426f09f;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14426f09f:
  if (*(longlong *)(param_1 + 0x178) == 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
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
    local_60[2] = lVar6;
    *local_60 = &PTR_FUN_14b9af050;
    local_60[3] = 0;
    iVar7 = 0;
    if (param_1 != 0x30) {
      uVar1 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar7;
    puVar2[4] = FUN_14427037a;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "SynchronizeAndSelectCloudCharacter";
    local_48 = 0x22;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x178) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14426f203;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14426f203:
  if (*(longlong *)(param_1 + 0x180) == 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
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
    local_60[2] = lVar6;
    *local_60 = &PTR_FUN_14b9af050;
    local_60[3] = 0;
    iVar7 = 0;
    if (param_1 != 0x30) {
      uVar1 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar7;
    puVar2[4] = FUN_1442708b2;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "UploadCharacterToCloud";
    local_48 = 0x16;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x180) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14426f367;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14426f367:
  if (*(longlong *)(param_1 + 0x188) == 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
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
    local_60[2] = lVar6;
    *local_60 = &PTR_FUN_14b9af050;
    local_60[3] = 0;
    iVar7 = 0;
    if (param_1 != 0x30) {
      uVar1 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar7;
    puVar2[4] = FUN_144270b00;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "DeleteCharacterFromCloud";
    local_48 = 0x18;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x188) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14426f4ca;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14426f4ca:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14426fad4 FUN_14426fad4 body=2174 status=ok
// SIG undefined FUN_14426fad4(void)

void FUN_14426fad4(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_148 [32];
  code **local_128;
  undefined8 local_120;
  uint local_118;
  ulonglong local_110;
  undefined2 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  longlong *local_b8 [2];
  code *local_a8;
  ulonglong uStack_a0;
  longlong *local_98 [2];
  longlong *local_88 [2];
  code *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 == 0) goto LAB_14426fb4b;
  lVar11 = param_1 + 0x44;
  lVar4 = FUN_1400f3ad8(lVar11);
  if (lVar4 == 0) goto LAB_14426fb4b;
  if (DAT_14cbadd90 == 0) {
    local_f0 = &local_78;
    local_78 = FUN_141030f22;
    local_e0 = FUN_14081d0ea;
    local_e8 = &LAB_1459f2e4c;
    local_f8 = &LAB_148c39de3;
    local_100 = &LAB_1457a9eb2;
    local_108 = &DAT_149e063b2;
    local_110 = 0;
    local_118 = 0x10000004;
    local_120 = CONCAT44(local_120._4_4_,0x10);
    local_128 = (code **)CONCAT44(local_128._4_4_,0x3de0);
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_14426fb4b;
  cVar2 = FUN_146207be0(lVar4);
  if (cVar2 == '\0') {
    uVar7 = FUN_140059518(lVar11);
    lVar11 = FUN_1404960a8(uVar7);
    if (lVar11 != 0) {
      puVar10 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar10 = &PTR_FUN_14b9accd0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_148);
    }
    goto LAB_14426fb4b;
  }
  lVar4 = FUN_1447210f0(lVar4);
  if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x1f0) == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_148d9ae84();
  }
  plVar5 = (longlong *)FUN_140059518(lVar11);
  plVar6 = (longlong *)FUN_140773fe2();
  if (plVar6 == (longlong *)0x0) goto LAB_14426fb4b;
  uVar7 = (**(code **)(*plVar5 + 0x180))(plVar5);
  lVar8 = (**(code **)(*plVar6 + 0x2d0))(plVar6,(int)plVar5[0x1c],uVar7);
  if ((lVar4 == 0) || (lVar8 == 0)) goto LAB_14426fb4b;
  lVar9 = FUN_148a6b25e(lVar4,lVar8,param_2 + 8);
  if ((lVar9 == 0) || (*(longlong *)(lVar9 + 0x50) == 0)) {
    bVar14 = false;
  }
  else {
    bVar14 = 0x4ade3d < *(uint *)(*(longlong *)(lVar9 + 0x50) + 0x80);
  }
  uVar7 = FUN_140059518(lVar11);
  lVar11 = FUN_145da44aa(uVar7);
  if (!bVar14) {
    uVar3 = 0xffffffff;
    if (lVar11 != 0) {
      local_78 = (code *)0x14b9ac67c;
      uStack_70._0_4_ = 0x1e;
      FUN_1446e940c(local_98,&local_78);
      local_78 = (code *)0x14b96ec08;
      uStack_70._0_4_ = 0xc;
      FUN_1446e940c(&local_a8,&local_78);
      local_78 = (code *)0x14b9ac63e;
      uStack_70._0_4_ = 0x1e;
      FUN_140208c1e(local_88,&local_a8,local_98,&local_78);
      local_78 = (code *)0x14b9ac724;
      uStack_70._0_4_ = 0x1c;
      FUN_1446e940c(&local_a8,&local_78);
      local_78 = (code *)0x14b96ec08;
      uStack_70._0_4_ = 0xc;
      FUN_1446e940c(local_b8,&local_78);
      local_78 = (code *)0x14b9ac6ba;
      uStack_70 = CONCAT44(uStack_70._4_4_,0x34);
      FUN_140208c1e(local_98,local_b8,&local_a8,&local_78);
      local_78 = (code *)0x0;
      uStack_70 = 0;
      local_a8 = (code *)0x0;
      uStack_a0 = 0;
      local_110 = local_110 & 0xffffffffffffff00;
      local_118 = local_118 & 0xffffff00;
      local_120 = 0;
      local_128 = &local_a8;
      uVar3 = FUN_1459dd948(lVar11,local_88,local_98,&local_78);
      if ((int)uStack_a0 == 0) {
LAB_144270121:
        if (local_a8 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_a8 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_a8)(local_a8,0);
        FUN_1446efa72(&local_a8,0,0,0x10);
        uStack_a0 = uStack_a0 & 0xffffffff00000000;
        goto LAB_144270121;
      }
      FUN_140e0067b(local_78,uStack_70 & 0xffffffff);
      if (local_78 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (local_98[0] != (longlong *)0x0) {
        (**(code **)(*local_98[0] + 0x10))();
      }
      if (local_88[0] != (longlong *)0x0) {
        (**(code **)(*local_88[0] + 0x10))();
      }
    }
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    puVar10 = local_d0;
    local_c8 = 3;
    *local_d0 = &PTR_LAB_14b9af360;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    local_d0[2] = lVar9;
    *local_d0 = &PTR_FUN_14b9af2f0;
    local_d0[3] = 0;
    iVar12 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_d0 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar12 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
        }
        LOCK();
        iVar12 = *(int *)(lVar11 + 0x10);
        bVar14 = iVar12 == 0;
        if (bVar14) {
          *(int *)(lVar11 + 0x10) = iVar13;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar12 = iVar13;
        }
      }
    }
    *(int *)((longlong)puVar10 + 0x1c) = iVar12;
    puVar10[4] = param_1;
    *(undefined4 *)(puVar10 + 5) = uVar3;
    FUN_148a6a284(lVar4,lVar8,param_2 + 8,&local_d0);
    goto LAB_14426fb4b;
  }
  if (lVar11 == 0) goto LAB_14426fb4b;
  local_78 = (code *)0x14b9ac46c;
  uStack_70._0_4_ = 0x1e;
  FUN_1446e940c(local_98,&local_78);
  local_78 = (code *)0x14b96ec08;
  uStack_70._0_4_ = 0xc;
  FUN_1446e940c(&local_a8,&local_78);
  local_78 = (code *)0x14b9ac42e;
  uStack_70._0_4_ = 0x1e;
  FUN_140208c1e(local_88,&local_a8,local_98,&local_78);
  local_78 = (code *)0x14b9ac5be;
  uStack_70._0_4_ = 0x1c;
  FUN_1446e940c(&local_a8,&local_78);
  local_78 = (code *)0x14b96ec08;
  uStack_70._0_4_ = 0xc;
  FUN_1446e940c(local_b8,&local_78);
  local_78 = (code *)0x14b9ac4aa;
  uStack_70._0_4_ = 0x89;
  FUN_140208c1e(local_98,local_b8,&local_a8,&local_78);
  local_a8 = (code *)0x0;
  uStack_a0 = 0;
  local_78 = (code *)0x14b9ac5f8;
  uStack_70._0_4_ = 0x22;
  FUN_1446e940c(local_bc,&local_78);
  local_78 = (code *)0x14b96ec08;
  uStack_70._0_4_ = 0xc;
  FUN_1446e940c(local_c0,&local_78);
  local_78 = (code *)&DAT_149e1d814;
  uStack_70 = CONCAT44(uStack_70._4_4_,2);
  FUN_140208c1e(local_b8,local_c0,local_bc,&local_78);
  uVar7 = FUN_145da4f3c(&local_a8);
  FUN_140008f88(uVar7,local_b8);
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_110 = local_110 & 0xffffffffffffff00;
  local_118 = local_118 & 0xffffff00;
  local_120 = 0;
  local_128 = &local_78;
  FUN_1459dd948(lVar11,local_88,local_98,&local_a8);
  if ((int)uStack_70 == 0) {
LAB_14426ff09:
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    uStack_70 = uStack_70 & 0xffffffff00000000;
    goto LAB_14426ff09;
  }
  FUN_140e0067b(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
LAB_14426fb4b:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14427037a FUN_14427037a body=1334 status=ok
// SIG undefined FUN_14427037a(void)

void FUN_14427037a(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_128 [32];
  undefined8 **local_108;
  undefined8 local_100;
  uint local_f8;
  ulonglong local_f0;
  undefined2 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  undefined4 local_ac;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  ulonglong uStack_90;
  undefined1 local_7c [4];
  longlong *local_78 [2];
  longlong *local_68 [2];
  code *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_2 == 0) goto LAB_1442703e9;
  lVar9 = param_1 + 0x44;
  lVar4 = FUN_1400f3ad8(lVar9);
  if (lVar4 == 0) goto LAB_1442703e9;
  if (DAT_14cbadd90 == 0) {
    local_d0 = &local_58;
    local_58 = FUN_141030f22;
    local_c0 = FUN_14081d0ea;
    local_c8 = &LAB_1459f2e4c;
    local_d8 = &LAB_148c39de3;
    local_e0 = &LAB_1457a9eb2;
    local_e8 = &DAT_149e063b2;
    local_f0 = 0;
    local_f8 = 0x10000004;
    local_100 = CONCAT44(local_100._4_4_,0x10);
    local_108 = (undefined8 **)CONCAT44(local_108._4_4_,0x3de0);
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1442703e9;
  lVar4 = FUN_1447210f0(lVar4);
  if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x1f0) == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_148d9ae84();
  }
  plVar5 = (longlong *)FUN_140059518(lVar9);
  plVar6 = (longlong *)FUN_140773fe2();
  if (plVar6 == (longlong *)0x0) goto LAB_1442703e9;
  uVar7 = (**(code **)(*plVar5 + 0x180))(plVar5);
  lVar8 = (**(code **)(*plVar6 + 0x2d0))(plVar6,(int)plVar5[0x1c],uVar7);
  if ((lVar4 == 0) || (lVar8 == 0)) goto LAB_1442703e9;
  uVar7 = FUN_140059518(lVar9);
  lVar9 = FUN_145da44aa(uVar7);
  uVar3 = 0xffffffff;
  if (lVar9 != 0) {
    local_58 = (code *)0x14b9ac7a2;
    uStack_50._0_4_ = 0x20;
    FUN_1446e940c(local_78,&local_58);
    local_58 = (code *)0x14b96ec08;
    uStack_50._0_4_ = 0xc;
    FUN_1446e940c(&local_98,&local_58);
    local_58 = (code *)0x14b9ac75e;
    uStack_50._0_4_ = 0x21;
    FUN_140208c1e(local_68,&local_98,local_78,&local_58);
    local_58 = (code *)0x14b9ac852;
    uStack_50._0_4_ = 0x1e;
    FUN_1446e940c(&local_98,&local_58);
    local_58 = (code *)0x14b96ec08;
    uStack_50._0_4_ = 0xc;
    FUN_1446e940c(local_7c,&local_58);
    local_58 = (code *)0x14b9ac7e4;
    uStack_50 = CONCAT44(uStack_50._4_4_,0x36);
    FUN_140208c1e(local_78,local_7c,&local_98,&local_58);
    local_58 = (code *)0x0;
    uStack_50 = 0;
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    local_f0 = local_f0 & 0xffffffffffffff00;
    local_f8 = local_f8 & 0xffffff00;
    local_100 = 0;
    local_108 = &local_98;
    uVar3 = FUN_1459dd948(lVar9,local_68,local_78,&local_58);
    if ((int)uStack_90 == 0) {
LAB_14427064c:
      if (local_98 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_98 != (undefined8 *)0x0) {
      (**(code **)*local_98)(local_98,0);
      FUN_1446efa72(&local_98,0,0,0x10);
      uStack_90 = uStack_90 & 0xffffffff00000000;
      goto LAB_14427064c;
    }
    FUN_140e0067b(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_78[0] != (longlong *)0x0) {
      (**(code **)(*local_78[0] + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
  }
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  local_ac = uVar3;
  FUN_1446efa72(&local_a8,0,3,0x10);
  puVar2 = local_a8;
  local_a0 = 3;
  *local_a8 = &PTR_LAB_14b4e1550;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_a8[2] = lVar10;
  *local_a8 = &PTR_FUN_14b9af3d0;
  local_a8[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_a8 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar11 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar11 = *(int *)(lVar9 + 0x10);
      bVar13 = iVar11 == 0;
      if (bVar13) {
        *(int *)(lVar9 + 0x10) = iVar12;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar11 = iVar12;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar11;
  puVar2[4] = param_1;
  *(undefined4 *)(puVar2 + 5) = local_ac;
  local_108 = &local_a8;
  FUN_148a6aab8(lVar4,lVar8,param_2 + 8,1);
LAB_1442703e9:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442708b2 FUN_1442708b2 body=588 status=ok
// SIG undefined FUN_1442708b2(void)

void FUN_1442708b2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
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
  undefined8 *local_48;
  undefined4 local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    lVar2 = FUN_1400f3ad8(param_1 + 0x44);
    if (lVar2 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_60 = &local_38;
        local_38 = FUN_141030f22;
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
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
        lVar2 = FUN_1447210f0(lVar2);
        if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x1f0) == 0)) {
          lVar2 = 0;
        }
        else {
          lVar2 = FUN_148d9ae84();
        }
        plVar3 = (longlong *)FUN_140059518(param_1 + 0x44);
        plVar4 = (longlong *)FUN_140773fe2();
        if (plVar4 != (longlong *)0x0) {
          uVar5 = (**(code **)(*plVar3 + 0x180))(plVar3);
          lVar6 = (**(code **)(*plVar4 + 0x2d0))(plVar4,(int)plVar3[0x1c],uVar5);
          if ((lVar2 != 0) && (lVar6 != 0)) {
            local_48 = (undefined8 *)0x0;
            local_40 = 0;
            FUN_1446efa72(&local_48,0,2,0x10);
            local_40 = 2;
            *local_48 = &PTR_LAB_14b9af360;
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 1;
            lVar1 = DAT_14c758608 + 1;
            if (lVar7 == 0) {
              LOCK();
              UNLOCK();
              lVar7 = DAT_14c758608 + 2;
              lVar1 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar1;
            local_48[2] = lVar7;
            *local_48 = &PTR_FUN_14b9af440;
            local_48[3] = param_1;
            FUN_148a6a540(lVar2,lVar6,param_2 + 8,&local_48);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144270b00 FUN_144270b00 body=598 status=ok
// SIG undefined FUN_144270b00(void)

void FUN_144270b00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
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
  undefined8 *local_48;
  undefined4 local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    lVar2 = FUN_1400f3ad8(param_1 + 0x44);
    if (lVar2 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_60 = &local_38;
        local_38 = FUN_141030f22;
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
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
        lVar2 = FUN_1447210f0(lVar2);
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
          lVar2 = FUN_148d9ae84();
          if (lVar2 != 0) {
            plVar3 = (longlong *)FUN_140059518(param_1 + 0x44);
            plVar4 = (longlong *)FUN_140773fe2();
            if (plVar4 != (longlong *)0x0) {
              uVar5 = (**(code **)(*plVar3 + 0x180))(plVar3);
              lVar6 = (**(code **)(*plVar4 + 0x2d0))(plVar4,(int)plVar3[0x1c],uVar5);
              if ((((lVar6 != 0) && (*(int *)(param_2 + 8) != 0)) && (*(int *)(param_2 + 0xc) != 0))
                 && (*(int *)(param_2 + 8) != DAT_14c948000)) {
                local_48 = (undefined8 *)0x0;
                local_40 = 0;
                FUN_1446efa72(&local_48,0,2,0x10);
                local_40 = 2;
                *local_48 = &PTR_LAB_14b4e1550;
                LOCK();
                UNLOCK();
                lVar7 = DAT_14c758608 + 1;
                lVar1 = DAT_14c758608 + 1;
                if (lVar7 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar7 = DAT_14c758608 + 2;
                  lVar1 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar1;
                local_48[2] = lVar7;
                *local_48 = &PTR_FUN_14b9af4b0;
                local_48[3] = param_1;
                FUN_148a6a7fc(lVar2,lVar6,param_2 + 8,&local_48);
              }
            }
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144270d58 FUN_144270d58 body=3252 status=ok
// SIG undefined FUN_144270d58(void)

void FUN_144270d58(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  code **ppcVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  undefined1 auStack_188 [32];
  char **local_168;
  undefined8 local_160;
  uint local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  code **local_130;
  undefined1 *local_128;
  code *local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *plStack_100;
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  code *local_d8;
  undefined4 local_d0;
  code *local_c8;
  undefined4 local_c0;
  code *local_b8;
  undefined4 local_b0;
  char *local_a8;
  int local_a0;
  undefined8 local_98;
  longlong *local_90;
  code **local_88;
  undefined8 *puStack_80;
  char *local_78;
  int local_70;
  undefined1 local_6c;
  code *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_2 == '\x12') {
    lVar7 = FUN_1400f3ad8(param_1 + 0x44);
    if (lVar7 == 0) goto LAB_1442714cd;
    if (DAT_14cbadd90 == 0) {
      local_130 = &local_68;
      local_68 = FUN_141030f22;
      local_120 = FUN_14081d0ea;
      local_128 = &LAB_1459f2e4c;
      local_138 = &LAB_148c39de3;
      local_140 = &LAB_1457a9eb2;
      local_148 = L"Game";
      local_150 = 0;
      local_158 = 0x10000004;
      local_160 = CONCAT44(local_160._4_4_,0x10);
      local_168 = (char **)CONCAT44(local_168._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
       (lVar8 = *(longlong *)(lVar7 + 0x430), lVar8 == 0)) goto LAB_1442714cd;
    if (DAT_14cae9568 == 0) {
      local_130 = &local_68;
      local_68 = FUN_1417de738;
      local_120 = (code *)&LAB_145893408;
      local_128 = &LAB_1458cbbd2;
      local_138 = &LAB_147ba21f1;
      local_140 = &LAB_1463e9233;
      local_148 = L"Engine";
      local_150 = 0;
      local_158 = 0x1000000c;
      local_160 = CONCAT44(local_160._4_4_,8);
      local_168 = (char **)CONCAT44(local_168._4_4_,0x2b8);
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar8 = *(longlong *)(lVar7 + 0x430);
      if (lVar8 == 0) goto LAB_1442714cd;
    }
    if (((DAT_14cae9568 == 0) || (lVar7 = *(longlong *)(lVar8 + 0x10), lVar7 == 0)) ||
       ((*(int *)(lVar7 + 0x38) < *(int *)(DAT_14cae9568 + 0x38) ||
        ((*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          != DAT_14cae9568 + 0x30 || (lVar7 = FUN_145da44aa(), lVar7 == 0)))))) goto LAB_1442714cd;
    local_78 = (char *)0x0;
    local_70 = 0;
    local_68 = (code *)0x14b9ac8bf;
    uStack_60 = CONCAT35(uStack_60._5_3_,0x1b);
    uVar6 = FUN_14001a6c0(&local_68,1);
    local_68 = (code *)(ulonglong)uVar6;
    FUN_144268f62(lVar7,&local_68,&local_78,1);
    pcVar9 = local_78;
    if (local_70 != 0) {
      if (local_78 == (char *)0x0) goto LAB_1442714cd;
      (*(code *)**(undefined8 **)local_78)(local_78,0);
      FUN_1446efa72(&local_78,0,0,0x10);
      local_70 = 0;
      pcVar9 = local_78;
    }
  }
  else {
    if (param_2 != '\x1b') {
      lVar7 = FUN_1400f3ad8(param_1 + 0x44);
      if (lVar7 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_130 = &local_68;
          local_68 = FUN_141030f22;
          local_120 = FUN_14081d0ea;
          local_128 = &LAB_1459f2e4c;
          local_138 = &LAB_148c39de3;
          local_140 = &LAB_1457a9eb2;
          local_148 = L"Game";
          local_150 = 0;
          local_158 = 0x10000004;
          local_160 = CONCAT44(local_160._4_4_,0x10);
          local_168 = (char **)CONCAT44(local_168._4_4_,0x3de0);
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
            (lVar7 = FUN_1447210f0(lVar7), lVar7 != 0)) &&
           ((*(longlong *)(lVar7 + 0x1f0) != 0 && (lVar7 = FUN_148d9ae84(), lVar7 != 0)))) {
          FUN_140059518(param_1 + 0x44);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_188);
        }
      }
      goto LAB_1442714cd;
    }
    lVar7 = FUN_1400f3ad8(param_1 + 0x44);
    if (lVar7 == 0) goto LAB_1442714cd;
    if (DAT_14cbadd90 == 0) {
      local_130 = &local_68;
      local_68 = FUN_141030f22;
      local_120 = FUN_14081d0ea;
      local_128 = &LAB_1459f2e4c;
      local_138 = &LAB_148c39de3;
      local_140 = &LAB_1457a9eb2;
      local_148 = L"Game";
      local_150 = 0;
      local_158 = 0x10000004;
      local_160 = CONCAT44(local_160._4_4_,0x10);
      local_168 = (char **)CONCAT44(local_168._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
       (lVar8 = *(longlong *)(lVar7 + 0x430), lVar8 == 0)) goto LAB_1442714cd;
    if (DAT_14cae9568 == 0) {
      local_130 = &local_68;
      local_68 = FUN_1417de738;
      local_120 = (code *)&LAB_145893408;
      local_128 = &LAB_1458cbbd2;
      local_138 = &LAB_147ba21f1;
      local_140 = &LAB_1463e9233;
      local_148 = L"Engine";
      local_150 = 0;
      local_158 = 0x1000000c;
      local_160 = CONCAT44(local_160._4_4_,8);
      local_168 = (char **)CONCAT44(local_168._4_4_,0x2b8);
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar8 = *(longlong *)(lVar7 + 0x430);
      if (lVar8 == 0) goto LAB_1442714cd;
    }
    if ((((DAT_14cae9568 == 0) || (lVar7 = *(longlong *)(lVar8 + 0x10), lVar7 == 0)) ||
        (*(int *)(lVar7 + 0x38) < *(int *)(DAT_14cae9568 + 0x38))) ||
       ((*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
         != DAT_14cae9568 + 0x30 || (lVar7 = FUN_145da44aa(), lVar7 == 0)))) goto LAB_1442714cd;
    local_a8 = (char *)0x0;
    local_a0 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (code *)FUN_14001cc68(0x30,0x10);
      *(longlong *)(DAT_14c844840 + 8) = 0;
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      *(longlong *)(DAT_14c844840 + 0x10) = -1;
      *(longlong *)(DAT_14c844840 + 0x18) = 0;
      *(longlong *)(DAT_14c844840 + 0x20) = 0;
      *(longlong *)(DAT_14c844840 + 0x28) = 0;
      if (DAT_14c844840 != (code *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    local_b8 = DAT_14c844840;
    if (DAT_14c844840 != (code *)0x0) {
      (**(code **)(*(longlong *)DAT_14c844840 + 8))();
    }
    local_b0 = DAT_14c844848;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (code *)FUN_14001cc68(0x30,0x10);
      *(longlong *)(DAT_14c844840 + 8) = 0;
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      *(longlong *)(DAT_14c844840 + 0x10) = -1;
      *(longlong *)(DAT_14c844840 + 0x18) = 0;
      *(longlong *)(DAT_14c844840 + 0x20) = 0;
      *(longlong *)(DAT_14c844840 + 0x28) = 0;
      if (DAT_14c844840 != (code *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    local_c8 = DAT_14c844840;
    if (DAT_14c844840 != (code *)0x0) {
      (**(code **)(*(longlong *)DAT_14c844840 + 8))();
    }
    local_c0 = DAT_14c844848;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (code *)FUN_14001cc68(0x30,0x10);
      *(longlong *)(DAT_14c844840 + 8) = 0;
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      *(longlong *)(DAT_14c844840 + 0x10) = -1;
      *(longlong *)(DAT_14c844840 + 0x18) = 0;
      *(longlong *)(DAT_14c844840 + 0x20) = 0;
      *(longlong *)(DAT_14c844840 + 0x28) = 0;
      if (DAT_14c844840 != (code *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    local_d8 = DAT_14c844840;
    if (DAT_14c844840 != (code *)0x0) {
      (**(code **)(*(longlong *)DAT_14c844840 + 8))();
    }
    local_d0 = DAT_14c844848;
    local_68 = (code *)0x0;
    uStack_60 = 0;
    local_58 = (code *)((ulonglong)local_58._4_4_ << 0x20);
    local_50 = 0;
    uStack_48 = 0;
    FUN_1446ddda2(&local_68,"UploadFailedText",0);
    FUN_140ac6c96(&local_68,&local_b8);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    local_68 = (code *)0x0;
    uStack_60 = 0;
    local_58 = (code *)((ulonglong)local_58 & 0xffffffff00000000);
    local_50 = 0;
    uStack_48 = 0;
    FUN_1446ddda2(&local_68,"NumCloudSavesExceededBodyText",0);
    FUN_140ac6c96(&local_68,&local_c8);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    local_68 = (code *)0x0;
    uStack_60 = 0;
    local_58 = (code *)((ulonglong)local_58 & 0xffffffff00000000);
    local_50 = 0;
    uStack_48 = 0;
    FUN_1446ddda2(&local_68,"ContinueText",0);
    FUN_140ac6c96(&local_68,&local_d8);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    local_108 = 0;
    plStack_100 = (longlong *)0x0;
    FUN_1467cfd1c(local_f8,*(undefined2 *)(param_1 + 0x1c0),0);
    FUN_14023409e(&local_118,&local_c8,1);
    local_68 = (code *)CONCAT44(local_68._4_4_,4);
    FUN_14023423e(&local_58,local_f8);
    puStack_80 = &uStack_48;
    local_88 = &local_68;
    FUN_14010d304(&local_78);
    local_98 = local_118;
    local_90 = local_110;
    if (local_110 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_110 + 1) = (int)local_110[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_e8,&local_98,&local_78);
    FUN_14007f2db(local_78,local_70);
    if (local_78 != (char *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (code *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_110 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar2 = (int *)((longlong)local_110 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_110 + 0x10))(local_110);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
    FUN_140008f88(&local_c8,local_e8);
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    plVar1 = plStack_100;
    if (plStack_100 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_100 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_100)(plStack_100);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    pcVar4 = local_d8;
    local_88 = (code **)0x0;
    puStack_80 = (undefined8 *)0x0;
    local_68 = local_d8;
    if (local_d8 != (code *)0x0) {
      (**(code **)(*(longlong *)local_d8 + 8))(local_d8);
    }
    uStack_60 = CONCAT44(uStack_60._4_4_,local_d0);
    local_78 = "continue";
    local_70 = 8;
    local_6c = 0;
    uVar6 = FUN_14001a6c0(&local_78,1);
    local_58 = (code *)(ulonglong)uVar6;
    local_50 = CONCAT71(local_50._1_7_,1);
    puStack_80 = (undefined8 *)CONCAT44(puStack_80._4_4_,1);
    FUN_145da4fc8(&local_88,0);
    ppcVar5 = local_88;
    FUN_14023423e(local_88,&local_68);
    *(undefined1 *)(ppcVar5 + 3) = (undefined1)local_50;
    ppcVar5[2] = local_58;
    if (local_68 != (code *)0x0) {
      (**(code **)(*(longlong *)local_68 + 0x10))();
    }
    local_168 = &local_a8;
    local_150 = CONCAT71(local_150._1_7_,1);
    local_158 = local_158 & 0xffffff00;
    local_160 = 0;
    FUN_1459dd948(lVar7,&local_b8,&local_c8,&local_88);
    FUN_140e0067b(local_88,(ulonglong)puStack_80 & 0xffffffff);
    if (local_88 != (code **)0x0) {
      FUN_1400020a8();
    }
    if (pcVar4 != (code *)0x0) {
      (**(code **)(*(longlong *)pcVar4 + 0x10))(pcVar4);
    }
    if (local_c8 != (code *)0x0) {
      (**(code **)(*(longlong *)local_c8 + 0x10))();
    }
    if (local_b8 != (code *)0x0) {
      (**(code **)(*(longlong *)local_b8 + 0x10))();
    }
    pcVar9 = local_a8;
    if (local_a0 != 0) {
      if (local_a8 == (char *)0x0) goto LAB_1442714cd;
      (*(code *)**(undefined8 **)local_a8)(local_a8,0);
      FUN_1446efa72(&local_a8,0,0,0x10);
      local_a0 = 0;
      pcVar9 = local_a8;
    }
  }
  if (pcVar9 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_1442714cd:
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144271a2c FUN_144271a2c body=736 status=ok
// SIG undefined FUN_144271a2c(void)

void FUN_144271a2c(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  code *local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = param_1 + -0x30;
  lVar7 = *(longlong *)(param_1 + -0x10);
  if (lVar7 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_80 = &local_58;
      local_58 = FUN_141030f22;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1459f2e4c;
      local_88 = &LAB_148c39de3;
      local_90 = &LAB_1457a9eb2;
      local_98 = &DAT_149e063b2;
      local_a0 = 0;
      local_a8 = 0x10000004;
      local_b0 = 0x10;
      local_b8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_144271a8c;
  }
  lVar7 = 0;
LAB_144271a8c:
  FUN_141361000(&local_60);
  local_58 = (code *)0x0;
  uStack_50 = 0;
  uVar3 = local_60;
  if (lVar1 != 0) {
    uVar2 = *(uint *)(param_1 + -0x24);
    local_58 = (code *)(ulonglong)uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar4 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar4 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar6;
        iVar4 = 0;
      }
      UNLOCK();
      uVar2 = (uint)local_58;
      if (bVar9) {
        iVar4 = iVar6;
      }
    }
    local_58._0_4_ = uVar2;
    local_58 = (code *)CONCAT44(iVar4,(uint)local_58);
    uStack_50 = local_60;
    uVar3 = uStack_50;
    if (((((local_60 != 0) && (iVar4 != 0)) && (-1 < (int)(uint)local_58)) &&
        (((int)(uint)local_58 < DAT_14c9647dc &&
         (plVar5 = (longlong *)
                   ((ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8)),
         plVar5 != (longlong *)0x0)))) &&
       (((int)plVar5[2] == iVar4 && (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0))))
       )) {
      FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),local_60,1);
      uVar3 = uStack_50;
    }
  }
  uStack_50 = uVar3;
  FUN_14053c012(lVar7 + 0x3b8,&local_58);
  if (*(longlong *)(lVar7 + 0xc38) != 0) {
    local_58 = FUN_144271d0e;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    FUN_1414dd76e(*(longlong *)(lVar7 + 0xc38),&local_68,lVar1);
    *(undefined8 *)(param_1 + 0x20) = local_68;
  }
  local_58 = FUN_1414c3622;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  FUN_145adec8e(lVar7 + 0x2558,&local_68,lVar1);
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144271d0e FUN_144271d0e body=1354 status=ok
// SIG undefined FUN_144271d0e(void)

void FUN_144271d0e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  undefined4 *puVar11;
  char *pcVar12;
  ulonglong uVar13;
  int *piVar14;
  longlong *plVar15;
  void *_Dst;
  longlong **pplVar16;
  undefined1 auStack_b8 [32];
  longlong *local_98 [2];
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_70;
  int local_68;
  undefined4 uStack_64;
  longlong *local_60;
  int local_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1449027d0();
  lVar3 = local_60[4];
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x28));
  *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
  plVar15 = (longlong *)CONCAT44(uStack_54,local_58);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar15 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar14 = (int *)((longlong)plVar15 + 0xc);
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (*piVar14 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  iVar10 = *(int *)(lVar3 + 0x10);
  uVar6 = iVar10 + 1;
  *(uint *)(lVar3 + 0x10) = uVar6;
  if (*(uint *)(lVar3 + 0x14) < uVar6) {
    FUN_145b21cf0((longlong *)(lVar3 + 8));
  }
  _Dst = (void *)((longlong)iVar10 * 0xa0 + *(longlong *)(lVar3 + 8));
  memset(_Dst,0,0xa0);
  plVar15 = (longlong *)(param_2 + 8);
  lVar7 = FUN_14087dee0(plVar15);
  if (lVar7 != 0) {
    iVar10 = *(int *)((longlong)_Dst + 0x50);
    if (*(longlong *)(lVar7 + 0x1c) == *(longlong *)((longlong)_Dst + 0x48)) {
      if (iVar10 != 0) goto LAB_144271de6;
      iVar10 = 0;
    }
    *(longlong *)((longlong)_Dst + 0x48) = *(longlong *)(lVar7 + 0x1c);
    *(int *)((longlong)_Dst + 0x50) = iVar10 + 1;
  }
LAB_144271de6:
  lVar7 = *plVar15;
  if (lVar7 == 0) goto LAB_1442720d5;
  uVar8 = FUN_140231a4a(lVar7);
  FUN_1402315da(uVar8,&local_70);
  if (local_70 == 0) {
    lVar9 = FUN_14001d26e(lVar7);
    if (lVar9 == 0) {
      puVar11 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
        puVar11 = *(undefined4 **)(lVar7 + 8);
      }
      local_88 = (longlong *)0x0;
      uStack_80 = 0;
      FUN_1400b2348(puVar11,&local_88,1);
      uVar6 = (int)uStack_80 - 1;
      if ((int)uStack_80 == 0) {
        uVar6 = 0;
      }
      local_60 = local_88;
      local_58 = (int)uStack_80;
      if (0 < (int)uVar6) {
        uVar13 = 0;
        do {
          uVar2 = *(ushort *)((longlong)local_88 + uVar13 * 2);
          *(ushort *)((longlong)local_88 + uVar13 * 2) =
               (ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2;
          uVar13 = uVar13 + 1;
        } while (uVar6 != uVar13);
        goto LAB_144271f39;
      }
    }
    else {
      puVar11 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar9 + 8) != (undefined4 *)0x0) {
        puVar11 = *(undefined4 **)(lVar9 + 8);
      }
      local_88 = (longlong *)0x0;
      uStack_80 = 0;
      FUN_1400b2348(puVar11,&local_88,1);
      uVar6 = (int)uStack_80 - 1;
      if ((int)uStack_80 == 0) {
        uVar6 = 0;
      }
      local_60 = local_88;
      local_58 = (int)uStack_80;
      if (0 < (int)uVar6) {
        uVar13 = 0;
        do {
          uVar2 = *(ushort *)((longlong)local_88 + uVar13 * 2);
          *(ushort *)((longlong)local_88 + uVar13 * 2) =
               (ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2;
          uVar13 = uVar13 + 1;
        } while (uVar6 != uVar13);
LAB_144271f39:
        local_60 = local_88;
        local_58 = (int)uStack_80;
      }
    }
    uStack_54 = uStack_80._4_4_;
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    FUN_140775538((longlong)_Dst + 0x58,&local_60);
    if (local_60 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    switch(*(undefined1 *)(local_70 + 0x150)) {
    case 1:
      pcVar12 = "pistol";
      break;
    case 2:
      pcVar12 = "smg";
      break;
    case 3:
      pcVar12 = "shotgun";
      break;
    case 4:
      pcVar12 = "assaultrifle";
      break;
    case 5:
      pcVar12 = "sniper";
      break;
    case 6:
      pcVar12 = "heavy";
      break;
    default:
      pcVar12 = "none";
    }
    FUN_1400b22c2(&local_60,pcVar12);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_88 = local_60;
    uStack_80 = CONCAT44(uStack_54,local_58);
    uVar6 = local_58 - 1;
    if (local_58 == 0) {
      uVar6 = 0;
    }
    if (0 < (int)uVar6) {
      uVar13 = 0;
      do {
        uVar2 = *(ushort *)((longlong)local_60 + uVar13 * 2);
        *(ushort *)((longlong)local_60 + uVar13 * 2) = (ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2;
        uVar13 = uVar13 + 1;
      } while (uVar6 != uVar13);
    }
    FUN_140775496((longlong)_Dst + 0x58,&local_88);
  }
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)CONCAT44(uStack_64,local_68);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar14 = (int *)((longlong)plVar4 + 0xc);
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (*piVar14 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  lVar9 = *(longlong *)(lVar7 + 0xa0);
  if ((lVar9 == 0) && (lVar9 = *(longlong *)(lVar7 + 0x98), lVar9 == 0)) {
    lVar9 = *(longlong *)(lVar7 + 0x3c);
  }
  iVar10 = *(int *)((longlong)_Dst + 0x78);
  if (lVar9 == *(longlong *)((longlong)_Dst + 0x70)) {
    if (iVar10 == 0) {
      iVar10 = 0;
      goto LAB_1442720a1;
    }
  }
  else {
LAB_1442720a1:
    *(longlong *)((longlong)_Dst + 0x70) = lVar9;
    *(int *)((longlong)_Dst + 0x78) = iVar10 + 1;
  }
  piVar14 = &DAT_14c9485f0;
  if (*(int **)(lVar7 + 8) != (int *)0x0) {
    piVar14 = *(int **)(lVar7 + 8);
  }
  if ((*piVar14 != *(int *)((longlong)_Dst + 0x18)) || (*(int *)((longlong)_Dst + 0x40) == 0)) {
    FUN_1447715ec((longlong)_Dst + 0x18);
    *(int *)((longlong)_Dst + 0x40) = *(int *)((longlong)_Dst + 0x40) + 1;
  }
LAB_1442720d5:
  FUN_140baf5f0(plVar15,&local_60);
  iVar10 = local_58;
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (iVar10 < 2) {
    FUN_140baf434(plVar15,&local_70);
    if (local_68 < 2) {
      pplVar16 = &local_88;
      FUN_140056680(pplVar16,L"DESIGNER NAME ME");
    }
    else {
      pplVar16 = local_98;
      FUN_140baf434(plVar15,pplVar16);
    }
    FUN_140233b1a(&local_60,pplVar16);
    if ((*(int *)((longlong)_Dst + 0x10) == 0) ||
       (cVar5 = FUN_144722c14(_Dst,&local_60,0), cVar5 == '\0')) {
      FUN_140008f88(_Dst,&local_60);
      *(int *)((longlong)_Dst + 0x10) = *(int *)((longlong)_Dst + 0x10) + 1;
    }
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
    }
    if (local_68 < 2) {
      local_98[0] = local_88;
    }
    if (local_98[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_140baf5f0(plVar15,&local_70);
    FUN_140233b1a(&local_60,&local_70);
    if ((*(int *)((longlong)_Dst + 0x10) == 0) ||
       (cVar5 = FUN_144722c14(_Dst,&local_60,0), cVar5 == '\0')) {
      FUN_140008f88(_Dst,&local_60);
      *(int *)((longlong)_Dst + 0x10) = *(int *)((longlong)_Dst + 0x10) + 1;
    }
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x28));
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14427225a FUN_14427225a body=620 status=ok
// SIG undefined FUN_14427225a(void)

void FUN_14427225a(longlong param_1)

{
  longlong *plVar1;
  uint *_Dst;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = *(longlong *)(param_1 + -0x10);
  if (lVar5 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_70 = &local_50;
      local_50 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1459f2e4c;
      local_78 = &LAB_148c39de3;
      local_80 = &LAB_1457a9eb2;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_1442722bc;
  }
  lVar5 = 0;
LAB_1442722bc:
  plVar1 = (longlong *)(lVar5 + 0x3b8);
  FUN_141361000(local_58);
  FUN_1409ca370(plVar1,param_1 + -0x30);
  iVar4 = *(int *)(lVar5 + 0x3c0);
  if (0 < iVar4) {
    lVar9 = 0;
    bVar6 = false;
    do {
      while( true ) {
        lVar3 = *plVar1;
        _Dst = (uint *)(lVar3 + lVar9 * 0x10);
        if (((((*(longlong *)(lVar3 + 8 + lVar9 * 0x10) != 0) && (_Dst[1] != 0)) &&
             (uVar2 = *_Dst, -1 < (int)uVar2)) &&
            (((int)uVar2 < DAT_14c9647dc &&
             (plVar8 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar8 != (longlong *)0x0)))) &&
           ((*(uint *)(plVar8 + 2) == _Dst[1] &&
            (((*(uint *)(plVar8 + 1) >> 0x1c & 1) == 0 && (*plVar8 != 0)))))) break;
        iVar7 = iVar4 + ~(uint)lVar9;
        if (iVar7 != 0) {
          if (0 < iVar7) {
            iVar7 = 1;
          }
          memmove(_Dst,(void *)(lVar3 + (longlong)(iVar4 - iVar7) * 0x10),(longlong)iVar7 << 4);
          iVar4 = *(int *)(lVar5 + 0x3c0);
        }
        iVar4 = iVar4 + -1;
        *(int *)(lVar5 + 0x3c0) = iVar4;
        bVar6 = true;
        if (iVar4 <= lVar9) goto LAB_14427241f;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar4);
    if (bVar6) {
LAB_14427241f:
      FUN_1400bbcfc(plVar1);
    }
  }
  if (*(longlong *)(lVar5 + 0xc38) != 0) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_14480f766();
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  FUN_140457ffc(lVar5 + 0x2558,param_1 + -0x30);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442724d8 FUN_1442724d8 body=2868 status=ok
// SIG undefined FUN_1442724d8(void)

void FUN_1442724d8(longlong *param_1,longlong param_2)

{
  int *piVar1;
  PSRWLOCK SRWLock;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  code **ppcVar20;
  longlong **pplVar21;
  undefined8 uVar22;
  int iVar23;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined2 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  code **local_120;
  undefined1 *local_118;
  code *local_110;
  code *local_100;
  int local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  longlong *local_d0 [2];
  longlong *local_c0;
  undefined4 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  code **local_98;
  undefined8 *local_90;
  longlong *local_88;
  undefined8 uStack_80;
  code *local_78;
  longlong *plStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined8 auStack_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (param_2 == 0) goto LAB_144272542;
  lVar17 = (longlong)param_1 + 0x44;
  lVar11 = FUN_1408bb964(lVar17);
  if ((lVar11 == 0) || (lVar6 = *(longlong *)(lVar11 + 0x48), lVar6 == 0)) goto LAB_144272542;
  lVar12 = FUN_140b6d0be();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar12 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8)
      != lVar12 + 0x30)) goto LAB_144272542;
  lVar12 = FUN_1400f3ad8(lVar17);
  if (lVar12 == 0) {
LAB_144272900:
    cVar9 = FUN_148d993da(lVar6);
    if (cVar9 != '\0') {
      local_88 = (longlong *)0x0;
      uStack_80 = 0;
      if ((longlong)(int)param_1[0xe] != 0) {
        lVar12 = param_1[0xd];
        lVar13 = (longlong)(int)param_1[0xe] * 0x168 + lVar12;
        do {
          uVar8 = uStack_80;
          if ((longlong)(int)param_1[0xc] != 0) {
            plVar19 = (longlong *)param_1[0xb];
            plVar18 = plVar19 + (longlong)(int)param_1[0xc] * 2;
            iVar4 = *(int *)(lVar12 + 0x40);
LAB_14427295f:
            if ((int)plVar19[1] == iVar4) {
              if (1 < iVar4) {
                lVar15 = 0;
                do {
                  uVar2 = *(ushort *)(*plVar19 + lVar15);
                  uVar3 = *(ushort *)(*(longlong *)(lVar12 + 0x38) + lVar15);
                  if (uVar2 == uVar3) {
                    if (uVar2 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar3 | uVar2)) {
                      iVar23 = (uint)uVar2 - (uint)uVar3;
                      goto LAB_1442729ce;
                    }
                    if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                    goto code_r0x0001442729cb;
                  }
                  lVar15 = lVar15 + 2;
                } while( true );
              }
              goto LAB_1442729da;
            }
            if ((int)plVar19[1] + iVar4 == 1) goto LAB_1442729da;
            goto LAB_144272971;
          }
LAB_14427293f:
          lVar12 = lVar12 + 0x168;
        } while (lVar12 != lVar13);
      }
      uVar14 = FUN_141546c72();
      if (*(longlong *)(lVar11 + 0x30) == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = *(undefined8 *)(*(longlong *)(lVar11 + 0x30) + 0x360);
      }
      FUN_143f3c238(uVar14,&local_98,uVar22,&local_88);
      uVar8 = uStack_80;
      puVar7 = local_90;
      if ((uint)local_90 != 0) {
        iVar4 = (int)uStack_80;
        lVar11 = (longlong)(int)uStack_80;
        uStack_80 = CONCAT44(uStack_80._4_4_,(int)uStack_80 + (uint)local_90);
        if (uStack_80._4_4_ - iVar4 < (uint)local_90) {
          FUN_14581ec00(&local_88,uVar8 & 0xffffffff);
        }
        FUN_145cc3452(local_88 + lVar11 * 0x2d,local_98,(ulonglong)puVar7 & 0xffffffff);
      }
      if (0 < (int)uStack_80) {
        FUN_1402815f4(param_1,&local_78);
        lVar11 = *(longlong *)(local_78 + 0x480);
        SRWLock = (PSRWLOCK)(lVar11 + 0xc0);
        AcquireSRWLockShared(SRWLock);
        plVar19 = plStack_70;
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          plVar18 = plStack_70 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)*plStack_70)(plStack_70);
            LOCK();
            piVar1 = (int *)((longlong)plVar19 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
          }
        }
        uVar5 = *(undefined4 *)(lVar11 + 0xb0);
        ReleaseSRWLockShared(SRWLock);
        lVar17 = FUN_140059518(lVar17);
        if (lVar17 != 0) {
          lVar11 = FUN_14030d4a0();
          if (((((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) &&
               (lVar11 = (**(code **)(*param_1 + 0x180))(param_1), lVar11 != 0)) &&
              ((*(longlong *)(lVar11 + 0x1f0) != 0 && (lVar11 = FUN_141060562(), lVar11 != 0)))) &&
             (lVar11 = *(longlong *)(lVar11 + 0x30), lVar11 != 0)) {
            local_a8 = 0;
            plStack_a0 = (longlong *)0x0;
            cVar9 = FUN_145960908(lVar17);
            if (cVar9 == '\0') {
              FUN_148dae006(lVar17,&local_78);
              FUN_1410e5bda(&local_a8,&local_78);
              FUN_1447a1747(local_78,(ulonglong)plStack_70 & 0xffffffff);
              if (local_78 != (code *)0x0) {
                FUN_1400020a8();
              }
              FUN_148e39ccc(&local_a8);
              plVar19 = plStack_a0;
              lVar17 = local_a8;
              if ((int)plStack_a0 < 1) goto LAB_144272de1;
              if (*(int *)(lVar11 + 0xc0) != 1) {
                *(undefined4 *)(lVar11 + 0xc0) = 1;
              }
              ppcVar20 = &local_100;
              local_100 = (code *)0x0;
              local_f8 = (int)plStack_a0;
              FUN_140b856de(ppcVar20,(ulonglong)plStack_a0 & 0xffffffff,0);
              FUN_140b8566a(local_100,lVar17,(ulonglong)plVar19 & 0xffffffff);
LAB_144272e05:
              FUN_148a794d0(lVar11,ppcVar20);
            }
            else {
LAB_144272de1:
              if (*(int *)(lVar11 + 0xc0) != 0) {
                *(undefined4 *)(lVar11 + 0xc0) = 0;
                ppcVar20 = &local_78;
                local_78 = (code *)0x0;
                plStack_70 = (longlong *)0x0;
                goto LAB_144272e05;
              }
            }
            FUN_1447a1747(local_a8,(ulonglong)plStack_a0 & 0xffffffff);
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
          }
        }
        FUN_148d994ac(lVar6,&local_88,uVar5,0);
      }
      FUN_141175adb(local_98,(ulonglong)local_90 & 0xffffffff);
      if (local_98 != (code **)0x0) {
        FUN_1400020a8();
      }
      FUN_141175adb(local_88,uStack_80 & 0xffffffff);
      if (local_88 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_144272542;
    }
    if (((*(longlong *)(lVar11 + 0x30) == 0) ||
        (lVar17 = *(longlong *)(*(longlong *)(lVar11 + 0x30) + 0x360), lVar17 == 0)) ||
       ((*(longlong *)(lVar17 + 0x1f0) == 0 || (lVar17 = FUN_14583d3ae(), lVar17 == 0))))
    goto LAB_144272542;
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
    uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
    local_68 = 0;
    local_78 = (code *)0x0;
    plStack_70 = (longlong *)0x0;
    local_60 = 0;
    auStack_58[0] = 0;
    FUN_1446ddda2(&local_78,"MatchmakingError_MissingCharDef",0);
    FUN_140ac6c96(&local_78,&local_88);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    pplVar21 = &local_88;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_120 = &local_78;
      local_78 = FUN_141030f22;
      local_110 = FUN_14081d0ea;
      local_118 = &LAB_1459f2e4c;
      local_128 = &LAB_148c39de3;
      local_130 = &LAB_1457a9eb2;
      local_138 = &DAT_149e063b2;
      local_140 = 0;
      local_148 = 0x10000004;
      local_150 = 0x10;
      local_158 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
       (lVar13 = FUN_1402a1246(lVar12), lVar13 == 0)) goto LAB_144272900;
    uVar14 = FUN_1402a1246(lVar12);
    lVar13 = FUN_1403b0700(uVar14);
    if ((*(longlong *)(lVar13 + 0x38) == 0) || (*(longlong *)(lVar13 + 0x38) == DAT_14cb71810))
    goto LAB_144272900;
    local_b0 = 0;
    uVar14 = FUN_1402a1246(lVar12);
    lVar15 = FUN_1403b0700(uVar14);
    lVar13 = *(longlong *)(lVar15 + 0x40);
    if (lVar13 == 0) {
      uVar14 = FUN_140355b7c();
      lVar13 = FUN_14477b664(uVar14);
      *(longlong *)(lVar15 + 0x40) = lVar13;
    }
    lVar16 = *(longlong *)(lVar15 + 0x48);
    if (((lVar16 == 0) && (lVar16 = 0, lVar13 != 0)) && (*(longlong *)(lVar15 + 0x38) != 0)) {
      plVar19 = *(longlong **)(lVar13 + 0xb8);
      if ((plVar19 == (longlong *)0x0) || (cVar9 = (**(code **)(*plVar19 + 0x108))(), cVar9 == '\0')
         ) {
        lVar16 = 0;
      }
      else {
        uVar14 = (**(code **)(*plVar19 + 0x110))(plVar19);
        lVar16 = FUN_144aff482(uVar14,(longlong *)(lVar15 + 0x38));
      }
      *(longlong *)(lVar15 + 0x48) = lVar16;
    }
    cVar9 = FUN_14410b2c4(lVar16,&local_b0);
    if ((cVar9 == '\0') || (cVar9 = FUN_14125be1e(lVar12,local_b0), cVar9 != '\0'))
    goto LAB_144272900;
    if ((((*(longlong *)(lVar11 + 0x30) == 0) ||
         (lVar17 = *(longlong *)(*(longlong *)(lVar11 + 0x30) + 0x360), lVar17 == 0)) ||
        (*(longlong *)(lVar17 + 0x1f0) == 0)) || (lVar17 = FUN_14583d3ae(), lVar17 == 0))
    goto LAB_144272542;
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
    local_c0 = DAT_14c844840;
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
    local_b8 = 0;
    local_68 = 0;
    local_78 = (code *)0x0;
    plStack_70 = (longlong *)0x0;
    local_60 = 0;
    auStack_58[0] = 0;
    FUN_1446ddda2(&local_78,"MatchmakingError_MissingEntitlementText",0);
    FUN_140ac6c96(&local_78,&local_c0);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    lVar11 = local_b0;
    local_e0 = *(longlong **)(local_b0 + 0x28);
    if (local_e0 != (longlong *)0x0) {
      (**(code **)(*local_e0 + 8))();
    }
    local_d8 = *(undefined4 *)(lVar11 + 0x30);
    FUN_14023409e(&local_f0,&local_c0,1);
    local_78 = (code *)CONCAT44(local_78._4_4_,4);
    FUN_14023423e(&local_68,&local_e0);
    local_90 = auStack_58;
    local_98 = &local_78;
    FUN_14010d304(&local_88);
    local_a8 = local_f0;
    plStack_a0 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_d0,&local_a8,&local_88);
    FUN_14007f2db(local_88,uStack_80 & 0xffffffff);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if ((longlong *)CONCAT44(uStack_64,local_68) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10))();
    }
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_e8 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
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
    if (local_e0 != (longlong *)0x0) {
      (**(code **)(*local_e0 + 0x10))();
    }
    FUN_140008f88(&local_c0,local_d0);
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
    pplVar21 = &local_c0;
  }
  FUN_1441c12ac(lVar17,0xffffffff,pplVar21,&DAT_14c9485f0);
  if (*pplVar21 != (longlong *)0x0) {
    (**(code **)(**pplVar21 + 0x10))();
  }
LAB_144272542:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001442729cb:
  iVar23 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_1442729ce:
  if (iVar23 == 0) {
LAB_1442729da:
    lVar15 = (longlong)(int)uStack_80;
    uVar10 = (int)uStack_80 + 1;
    uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
    if (uStack_80._4_4_ < uVar10) {
      FUN_14581ec00(&local_88,uVar8 & 0xffffffff);
    }
    FUN_1411769de(local_88 + lVar15 * 0x2d,lVar12);
    goto LAB_14427293f;
  }
LAB_144272971:
  plVar19 = plVar19 + 2;
  if (plVar19 == plVar18) goto LAB_14427293f;
  goto LAB_14427295f;
}



// FUNCTION 14427300e FUN_14427300e body=84 status=ok
// SIG undefined FUN_14427300e(void)

void FUN_14427300e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_1408bb964(param_1 + 0x44);
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 != 0)) {
      lVar2 = FUN_140b6d0be();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_148d99608(lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144273062 FUN_144273062 body=201 status=ok
// SIG undefined FUN_144273062(void)

void FUN_144273062(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x58);
  local_38 = param_2;
  iVar4 = FUN_140c8411c(plVar1);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x60) = iVar4 + 1U;
    if (*(uint *)(param_1 + 100) < iVar4 + 1U) {
      FUN_1447a1bd6(plVar1,iVar4);
    }
    lVar3 = *plVar1;
    lVar5 = (longlong)iVar4 * 0x10;
    puVar2 = (undefined8 *)(lVar3 + lVar5);
    *(undefined8 *)(lVar3 + lVar5) = 0;
    iVar4 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(lVar3 + 8 + lVar5) = iVar4;
    if ((longlong)iVar4 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar2,iVar4,0);
      memcpy((void *)*puVar2,_Src,(longlong)iVar4 * 2);
    }
  }
  FUN_141175e14(param_1);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427312c FUN_14427312c body=69 status=ok
// SIG undefined FUN_14427312c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14427312c(void)

{
  _DAT_14cbd6c70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014427316e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd6c78,1);
  return;
}



// FUNCTION 14427317c FUN_14427317c body=2173 status=ok
// SIG undefined FUN_14427317c(void)

void FUN_14427317c(longlong param_1,int *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  char cVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  code *pcVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined2 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  code **local_150;
  undefined1 *local_148;
  code *local_140;
  longlong *local_130;
  code *local_128;
  longlong local_120;
  int *local_118;
  code *local_110;
  PSRWLOCK local_108;
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e9;
  undefined8 *local_e8;
  int local_e0;
  code *local_d8;
  longlong *local_d0;
  longlong local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar9 = FUN_1400d7050(param_1 + 0x30);
  if (lVar9 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_150 = &local_d8;
      local_d8 = FUN_141030f22;
      local_140 = FUN_14081d0ea;
      local_148 = &LAB_1459f2e4c;
      local_158 = &LAB_148c39de3;
      local_160 = &LAB_1457a9eb2;
      local_168 = &DAT_149e063b2;
      local_170 = 0;
      local_178 = 0x10000004;
      local_180 = 0x10;
      local_188 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (lVar9 = FUN_140e06fb1(lVar9), lVar9 != 0)) {
      FUN_1449027d0(param_1,&local_d8);
      lVar9 = *(longlong *)(local_d8 + 0x90);
      local_108 = (PSRWLOCK)(lVar9 + 0x110);
      AcquireSRWLockExclusive(local_108);
      plVar14 = local_d0;
      *(int *)(lVar9 + 0x108) = *(int *)(lVar9 + 0x108) + 1;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_d0 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      FUN_144928d62(&local_98,0,&DAT_14cbd6c80);
      FUN_144928d62(&local_98,1,&DAT_14c948618);
      FUN_144928d62(&local_98,2,param_2);
      FUN_144928d62(&local_98,3,param_3);
      bVar6 = FUN_140aa68bc(lVar9,&local_98);
      if (*(int *)(lVar9 + 0x88) != *(int *)(lVar9 + 0xb4)) {
        lVar16 = lVar9 + 0xb8;
        if (*(longlong *)(lVar9 + 0xc0) != 0) {
          lVar16 = *(longlong *)(lVar9 + 0xc0);
        }
        iVar15 = *(int *)(lVar16 + (ulonglong)(*(int *)(lVar9 + 200) - 1U & (uint)bVar6) * 4);
        if (iVar15 != -1) {
          do {
            lVar16 = *(longlong *)(lVar9 + 0x80) + (longlong)iVar15 * 0x20;
            if (*(byte *)(*(longlong *)(lVar9 + 0x80) + (longlong)iVar15 * 0x20) == bVar6) {
              if ((undefined8 *)(lVar16 + 8) != (undefined8 *)0x0 && lVar16 != 0) {
                local_f0 = *(undefined4 *)(param_3 + 1);
                local_f8 = *param_3;
                plVar14 = (longlong *)FUN_146637100(*(undefined8 *)(lVar16 + 8),&local_f8,&local_e9)
                ;
                goto LAB_144273363;
              }
              break;
            }
            iVar15 = *(int *)(lVar16 + 0x18);
          } while (iVar15 != -1);
        }
      }
      plVar14 = (longlong *)0x0;
LAB_144273363:
      local_118 = (int *)(param_1 + 200);
      if (((*(int *)(param_1 + 200) != 0) && (*param_2 == *(int *)(param_1 + 200))) &&
         (param_2[2] == *(int *)(param_1 + 0xd0))) {
        *(undefined4 *)(param_1 + 0xd0) = DAT_14c948620;
        *(undefined8 *)local_118 = DAT_14c948618;
        *(undefined1 *)(lVar9 + 0xd3) = 0;
      }
      if (plVar14 == (longlong *)0x0) {
        local_120 = 0;
      }
      else {
        local_120 = *plVar14;
      }
      if ((longlong)(int)param_4[1] != 0) {
        plVar14 = (longlong *)*param_4;
        plVar17 = plVar14 + (longlong)(int)param_4[1] * 2;
        do {
          lVar16 = *plVar14;
          plVar4 = (longlong *)plVar14[1];
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          uVar10 = FUN_1459a9868();
          bVar6 = FUN_1448093f4(lVar16,uVar10);
          if ((lVar16 != 0 & bVar6) == 1) {
            cVar7 = FUN_14002b5e0(*(undefined8 *)(lVar16 + 0x44),"TakedownTimer",0xd);
            if ((cVar7 != '\0') &&
               ((*local_118 == 0 ||
                ((*param_2 == *local_118 && (param_2[2] == *(int *)(param_1 + 0xd0))))))) {
              local_118[2] = param_2[2];
              *(undefined8 *)local_118 = *(undefined8 *)param_2;
              *(undefined1 *)(lVar9 + 0xd3) = 1;
            }
            if (local_120 == 0) goto LAB_1442735a7;
            FUN_148e3a962(lVar16,local_120);
            local_110 = (code *)FUN_14001cc68(0x40,0x10);
            local_130 = *(longlong **)(lVar16 + 0x4c);
            uVar8 = FUN_140aa68bc(lVar9,&local_98);
            pcVar13 = local_110;
            local_128 = (code *)CONCAT71(local_128._1_7_,uVar8);
            *(undefined ***)local_110 = &PTR_FUN_14b8194d0;
            FUN_1447a97f4(local_110 + 8,&local_98);
            *(undefined4 *)(pcVar13 + 0x30) = 4;
            pcVar13[0x34] = local_128._0_1_;
            *(undefined ***)pcVar13 = &PTR_FUN_14b819920;
            *(longlong **)(pcVar13 + 0x38) = local_130;
            plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
            plVar11[1] = (longlong)&DAT_100000001;
            *plVar11 = (longlong)&PTR_FUN_14b9b0060;
            plVar11[2] = (longlong)pcVar13;
            local_d8 = pcVar13;
joined_r0x00014427384d:
            local_d0 = plVar11;
            if (plVar11 == (longlong *)0x0) {
              FUN_14147c8e0(lVar9,&local_d8);
            }
            else {
              LOCK();
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              UNLOCK();
              local_130 = plVar11;
              FUN_14147c8e0(lVar9,&local_d8);
              if (local_130 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_130 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_130)(local_130);
                  LOCK();
                  piVar2 = (int *)((longlong)local_130 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*local_130 + 0x10))();
                  }
                }
              }
              LOCK();
              plVar1 = plVar11 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar11)(plVar11);
                LOCK();
                piVar2 = (int *)((longlong)plVar11 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
              }
            }
          }
          else if (local_120 != 0) {
            local_130 = (longlong *)CONCAT71(local_130._1_7_,lVar16 != 0);
            uVar10 = FUN_1459a9830();
            bVar6 = FUN_1448093f4(lVar16,uVar10);
            if ((bVar6 & (byte)local_130._0_1_) == 1) {
              FUN_1447a97f4(&local_d8,&local_98);
              local_a0 = &local_e9;
              local_e8 = (undefined8 *)0x0;
              local_e0 = 0;
              local_b0 = param_1;
              uStack_a8 = param_3;
              FUN_1446efa72(&local_e8,0,6,0x10);
              local_e0 = 6;
              *local_e8 = &PTR_LAB_149e020b0;
              LOCK();
              UNLOCK();
              lVar12 = DAT_14c758608 + 1;
              lVar5 = DAT_14c758608 + 1;
              if (lVar12 == 0) {
                LOCK();
                UNLOCK();
                lVar12 = DAT_14c758608 + 2;
                lVar5 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar5;
              local_130 = (longlong *)(lVar16 + 0x18);
              local_e8[2] = lVar12;
              *local_e8 = &PTR_FUN_14b9b00a0;
              local_128 = (code *)local_e8;
              local_e8[3] = 0;
              local_e8[4] = 0;
              *(undefined4 *)(local_e8 + 5) = 0;
              local_e8[6] = 0;
              local_e8[7] = 0;
              FUN_1404e49fa(local_e8 + 3,&local_d8);
              *(undefined4 *)((longlong)local_128 + 0x40) = (undefined4)local_b0;
              *(undefined4 *)((longlong)local_128 + 0x44) = local_b0._4_4_;
              *(undefined4 *)((longlong)local_128 + 0x48) = (undefined4)uStack_a8;
              *(undefined4 *)((longlong)local_128 + 0x4c) = uStack_a8._4_4_;
              *(undefined1 **)((longlong)local_128 + 0x50) = local_a0;
              FUN_1448b6402(local_130,local_100,&local_e8);
              if (local_e0 == 0) {
LAB_144273754:
                if (local_e8 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
              }
              else if (local_e8 != (undefined8 *)0x0) {
                (**(code **)*local_e8)(local_e8,0);
                FUN_1446efa72(&local_e8,0,0,0x10);
                local_e0 = 0;
                goto LAB_144273754;
              }
              if (local_c0 != 0) {
                FUN_1400020a8();
              }
              local_130 = (longlong *)FUN_148e3ab56(local_120,lVar16);
              pcVar13 = (code *)FUN_14001cc68(0x40,0x10);
              uVar3 = *(undefined4 *)((longlong)local_130 + 0x98);
              uVar8 = FUN_140aa68bc(lVar9,&local_98);
              local_130 = (longlong *)CONCAT71(local_130._1_7_,uVar8);
              *(undefined ***)pcVar13 = &PTR_FUN_14b8194d0;
              FUN_1447a97f4(pcVar13 + 8,&local_98);
              *(undefined4 *)(pcVar13 + 0x30) = 4;
              pcVar13[0x34] = local_130._0_1_;
              *(undefined ***)pcVar13 = &PTR_FUN_14b819a90;
              *(undefined4 *)(pcVar13 + 0x38) = uVar3;
              local_128 = pcVar13;
              plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
              plVar11[1] = (longlong)&DAT_100000001;
              *plVar11 = (longlong)&PTR_FUN_14b9b0080;
              plVar11[2] = (longlong)local_128;
              local_d8 = local_128;
              goto joined_r0x00014427384d;
            }
          }
LAB_1442735a7:
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar4 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
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
          plVar14 = plVar14 + 2;
        } while (plVar14 != plVar17);
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      ReleaseSRWLockExclusive(local_108);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442739fa FUN_1442739fa body=1848 status=ok
// SIG undefined FUN_1442739fa(void)

void FUN_1442739fa(undefined8 *param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1e0;
  undefined8 *local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  int local_1c0;
  undefined8 local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  longlong local_1a8;
  int local_1a0;
  longlong local_198;
  ulonglong uStack_190;
  longlong *local_180;
  int local_178;
  undefined4 local_174;
  longlong local_170;
  int local_168;
  undefined1 local_160 [40];
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong local_120;
  byte local_100;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar14 = param_1[1];
  FUN_144274134(*(undefined8 *)*param_1,param_3);
  plVar9 = param_5;
  if ((int)*param_5 == 0) {
    plVar9 = param_3;
  }
  *(int *)(param_2 + 0xd8) = (int)plVar9[1];
  *(longlong *)(param_2 + 0xd0) = *plVar9;
  *(undefined4 *)(param_2 + 0xdc) = param_4;
  *(undefined2 *)(param_2 + 0xc9) = 0x100;
  if ((int)*param_5 == 0) {
    lVar10 = FUN_140e06fb1(*(undefined8 *)*param_1);
    if (lVar10 != 0) {
      if (*(longlong *)(lVar10 + 0x90) != 0) {
        lStack_130 = CONCAT44(lStack_130._4_4_,(int)param_3[1]);
        local_138 = *param_3;
        cVar8 = FUN_14615837e(*(longlong *)(lVar10 + 0x90),&local_138,param_4,0);
        if (cVar8 != '\0') goto LAB_14427400f;
      }
      *(undefined1 *)(param_2 + 0xc9) = 1;
      if (*(longlong *)(lVar10 + 0x90) != 0) {
        lStack_130 = CONCAT44(lStack_130._4_4_,(int)param_3[1]);
        local_138 = *param_3;
        FUN_1410aeee4(*(longlong *)(lVar10 + 0x90),&local_138,param_4,0);
      }
    }
  }
  else {
    *(undefined1 *)(param_2 + 0xc9) = 1;
    *(undefined1 *)(param_2 + 0xcc) = 1;
    local_170 = *param_5;
    local_168 = (int)param_5[1];
    FUN_1448075d0(&local_138);
    if (DAT_14cbcdc38 == 0) {
      local_1e8 = 0;
    }
    else {
      local_1e8 = FUN_144837462(DAT_14cbcdc38,&local_138);
    }
    if (local_120 != 0) {
      FUN_1400020a8();
    }
    if (local_1e8 != 0) {
      local_1e0 = param_2;
      local_1d8 = param_1;
      lVar10 = FUN_140d1d7e4();
      puVar11 = (undefined8 *)FUN_140d19a6c(lVar10 + 0x90);
      local_180 = (longlong *)0x0;
      local_178 = *(int *)(puVar11 + 1);
      uVar13 = *puVar11;
      local_1d0 = lVar14;
      if (local_178 == 0) {
        local_174 = 0;
      }
      else {
        FUN_148c13408(&local_180,local_178,0);
        FUN_148c1347b(local_180,uVar13);
        if ((longlong)local_178 != 0) {
          lVar14 = (longlong)local_178 * 0x18;
          plVar9 = local_180;
          do {
            lStack_130 = 0;
            local_128 = 0;
            local_138 = *plVar9;
            uVar13 = FUN_14477b664(plVar9[1]);
            lStack_130 = FUN_14477b664(uVar13);
            local_128 = plVar9[2];
            if (lStack_130 == 0) {
              uVar13 = FUN_141417e7c();
              lStack_130 = FUN_14477b664(uVar13);
            }
            lVar10 = local_128;
            if (local_128 == 0) {
              local_128 = 0;
              if (lStack_130 == 0) {
LAB_144273cda:
                lVar10 = 0;
              }
              else {
                lVar10 = 0;
                if (local_138 != 0) {
                  plVar4 = *(longlong **)(lStack_130 + 0xb8);
                  if ((plVar4 == (longlong *)0x0) ||
                     (cVar8 = (**(code **)(*plVar4 + 0x108))(), cVar8 == '\0')) goto LAB_144273cda;
                  uVar13 = (**(code **)(*plVar4 + 0x110))(plVar4);
                  lVar10 = FUN_144aff482(uVar13,&local_138);
                }
              }
            }
            if (lVar10 == local_1e8) {
              lVar14 = 200;
              if (plVar9 != (longlong *)0x0) goto LAB_144273d02;
              break;
            }
            plVar9 = plVar9 + 3;
            lVar14 = lVar14 + -0x18;
          } while (lVar14 != 0);
        }
      }
      lVar14 = 0xa0;
LAB_144273d02:
      lVar10 = FUN_140d1d7e4();
      puVar1 = (undefined8 *)(lVar10 + lVar14);
      *(undefined8 *)(local_1e0 + 0x70) = *puVar1;
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar6 = *(undefined4 *)(puVar1 + 2);
      uVar7 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(local_1e0 + 0x78) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(local_1e0 + 0x7c) = uVar5;
      *(undefined4 *)(local_1e0 + 0x80) = uVar6;
      *(undefined4 *)(local_1e0 + 0x84) = uVar7;
      puVar11 = (undefined8 *)(local_1e0 + 0x88);
      if (puVar11 != puVar1 + 3) {
        iVar2 = *(int *)(lVar10 + lVar14 + 0x20);
        _Src = *(void **)(lVar10 + lVar14 + 0x18);
        *(int *)(local_1e0 + 0x90) = iVar2;
        if (iVar2 == 0 && *(int *)(local_1e0 + 0x94) == 0) {
          *(undefined4 *)(local_1e0 + 0x94) = 0;
        }
        else {
          FUN_1446dd670(puVar11,iVar2);
          if (iVar2 != 0) {
            memcpy((void *)*puVar11,_Src,(longlong)iVar2 * 2);
          }
        }
      }
      local_198 = 0;
      uStack_190 = 0;
      local_1b8 = 0;
      local_1b0 = *(int *)(local_1e8 + 0x60);
      uVar13 = *(undefined8 *)(local_1e8 + 0x58);
      if (local_1b0 == 0) {
        local_1ac = 0;
      }
      else {
        FUN_1487816c8(&local_1b8,local_1b0,0);
        FUN_148781737(local_1b8,uVar13);
      }
      FUN_14435d498(&local_1a8,&local_1b8);
      puVar11 = local_1d8;
      if (0 < local_1a0) {
        lVar14 = 0;
        lVar10 = 0;
        do {
          piVar12 = *(int **)(local_1e8 + 8);
          if (piVar12 == (int *)0x0) {
            piVar12 = &DAT_14c9485f0;
          }
          if (((*piVar12 == 0) || (iVar2 = piVar12[1], iVar2 == 0)) || (*piVar12 == DAT_14c948000))
          {
LAB_144273ee1:
            local_1c0 = DAT_14c948620;
            local_1c8 = DAT_14c948618;
          }
          else {
            if ((iVar2 < 2) && (piVar12[9] < 1)) {
              piVar12 = piVar12 + 2;
            }
            else {
              piVar12 = *(int **)(piVar12 + 6);
            }
            if (iVar2 < 1) goto LAB_144273ee1;
            local_1c0 = piVar12[2];
            local_1c8 = *(undefined8 *)piVar12;
          }
          lVar16 = local_1a8 + lVar14;
          uVar13 = FUN_1447210f0(*(undefined8 *)*puVar11);
          uVar13 = FUN_1406f625c(uVar13);
          FUN_140c5218a(lVar16,&local_138,uVar13,&local_1c8);
          lVar16 = FUN_140c520a2(&local_138);
          if (lVar16 != 0) {
            FUN_140eeff92(lVar16,&local_198);
          }
          (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[local_100])(&local_138);
          lVar10 = lVar10 + 1;
          lVar14 = lVar14 + 0x58;
        } while (lVar10 < local_1a0);
      }
      param_2 = local_1e0;
      plVar9 = (longlong *)(local_1e0 + 0xa8);
      FUN_1407dde2a(*(undefined8 *)(local_1e0 + 0xa8),*(undefined4 *)(local_1e0 + 0xb0));
      *(undefined4 *)(param_2 + 0xb0) = 0;
      if (*(int *)(param_2 + 0xb4) != 0) {
        FUN_148e3b3c2(plVar9,0);
      }
      param_1 = local_1d8;
      if ((longlong)(int)uStack_190 != 0) {
        lVar10 = (longlong)(int)uStack_190 * 0xe0;
        lVar14 = local_198;
        do {
          if (*(longlong *)(lVar14 + 8) != 0) {
            FUN_140c5254a(lVar14,&local_138);
            iVar2 = *(int *)(param_2 + 0xb0);
            *(uint *)(param_2 + 0xb0) = iVar2 + 1U;
            if (*(uint *)(param_2 + 0xb4) < iVar2 + 1U) {
              FUN_140c71e7a(plVar9,iVar2);
            }
            FUN_140c541bc((longlong)iVar2 * 0xd8 + *plVar9,&local_138);
            FUN_1407dde54(&local_138);
          }
          lVar14 = lVar14 + 0xe0;
          lVar10 = lVar10 + -0xe0;
        } while (lVar10 != 0);
      }
      FUN_140741dda(local_1a8,local_1a0);
      if (local_1a8 != 0) {
        FUN_1400020a8();
      }
      FUN_14087acb9(local_198,uStack_190 & 0xffffffff);
      lVar14 = local_1d0;
      if (local_198 != 0) {
        FUN_1400020a8();
      }
      if (local_180 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14427400f:
  iVar2 = *(int *)(param_2 + 0xe0);
  if (((iVar2 != 0) && (*(int *)(param_2 + 0xe4) != 0)) &&
     ((iVar2 != DAT_14c948000 && (*(char *)(param_2 + 0x108) == '\0')))) {
    lVar10 = *(longlong *)(lVar14 + 0x70);
    iVar3 = *(int *)(lVar14 + 0x78);
    lVar16 = (longlong)iVar3;
    if (lVar16 != 0) {
      lVar15 = 0;
      do {
        if (*(int *)(lVar10 + lVar15) == iVar2) goto LAB_1442740d5;
        lVar15 = lVar15 + 0x28;
      } while (lVar16 * 0x28 != lVar15);
    }
    *(uint *)(lVar14 + 0x78) = iVar3 + 1U;
    if (*(uint *)(lVar14 + 0x7c) < iVar3 + 1U) {
      FUN_14014a81a((longlong *)(lVar14 + 0x70),iVar3);
      lVar10 = *(longlong *)(lVar14 + 0x70);
    }
    FUN_1447a97f4(lVar10 + lVar16 * 0x28,param_2 + 0xe0);
    FUN_1447a97f4(local_160,param_2 + 0xe0);
    FUN_148e3aefc(lVar14,local_160);
    *(undefined1 *)param_1[2] = 0;
  }
LAB_1442740d5:
  FUN_146211e2a(*(undefined8 *)(param_1[3] + 0x10),param_2);
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144274134 FUN_144274134 body=5211 status=ok
// SIG undefined FUN_144274134(void)

void FUN_144274134(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong **pplVar1;
  int iVar2;
  ushort uVar3;
  code *pcVar4;
  void *pvVar5;
  int iVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong **pplVar16;
  longlong *plVar17;
  int iVar18;
  ulonglong uVar19;
  char *pcVar20;
  undefined2 *puVar21;
  undefined4 *puVar22;
  int iVar23;
  longlong lVar24;
  longlong *plVar25;
  bool bVar26;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  void *local_158;
  undefined8 uStack_150;
  longlong **local_148;
  undefined8 *local_140;
  void *local_138;
  undefined8 uStack_130;
  longlong **local_128;
  undefined8 *local_120;
  longlong local_118;
  undefined4 local_110;
  longlong local_108 [2];
  longlong local_f8 [2];
  void *local_e8;
  int local_e0;
  int local_dc;
  void *local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined8 uStack_c0;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_88 = *param_2;
  local_80 = *(undefined4 *)(param_2 + 1);
  FUN_1448075d0(&local_78);
  lVar11 = FUN_140fa5e12(&local_78);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (param_1 == 0 || lVar11 == 0) goto LAB_144275410;
  uVar3 = *(ushort *)(lVar11 + 0x53a);
  lVar15 = *(longlong *)(DAT_14cb86da8 + 0x370);
  uVar12 = FUN_1447210f0(param_1);
  FUN_143deff24((ulonglong)((uint)uVar3 * 0x18) + lVar15,&local_78,param_2,uVar12);
  plVar25 = local_78;
  if (*(code **)(*local_78 + 0x50) != FUN_144828418) {
    plVar25 = (longlong *)(**(code **)(*local_78 + 0x50))();
  }
  FUN_1447a1fc0(plVar25);
  pcVar4 = *(code **)(*local_78 + 0x28);
  local_168 = param_1;
  if (pcVar4 == FUN_14482841c) {
    plVar25 = local_78 + 3;
    if (local_78[5] != 0) {
      plVar25 = (longlong *)(local_78[5] + 8);
    }
  }
  else if (pcVar4 == (code *)&LAB_14010c34c) {
    plVar25 = local_78 + 2;
  }
  else {
    plVar25 = (longlong *)(*pcVar4)(local_78);
  }
  if (plVar25 != param_3) {
    iVar18 = (int)plVar25[1];
    pvVar5 = (void *)*plVar25;
    *(int *)(param_3 + 1) = iVar18;
    if (iVar18 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_3,iVar18);
      if (iVar18 != 0) {
        memcpy((void *)*param_3,pvVar5,(longlong)iVar18 * 2);
      }
    }
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  plVar25 = (longlong *)(lVar11 + 0x4f0);
  cVar7 = FUN_1407a73f8(plVar25,&DAT_14cbcdd98);
  if (cVar7 == '\0') {
    cVar7 = FUN_1407a73f8(plVar25,&DAT_14cbcdda0);
    if (cVar7 != '\0') {
      pcVar20 = "dlc_main_mission";
      goto LAB_144274322;
    }
    cVar7 = FUN_1407a73f8(plVar25,&DAT_14cbcdda8);
    if ((cVar7 != '\0') || (cVar7 = FUN_1407a73f8(plVar25,&DAT_14cbcddb0), cVar7 != '\0')) {
      pcVar20 = "side_mission";
      goto LAB_144274322;
    }
    cVar7 = FUN_1407a73f8(plVar25,&DAT_14cbcddb8);
    if ((cVar7 != '\0') || (cVar7 = FUN_1407a73f8(plVar25,&DAT_14cbcddc0), cVar7 != '\0')) {
      pcVar20 = "dlc_side_mission";
      goto LAB_144274322;
    }
    cVar7 = FUN_1407a73f8(plVar25,&DAT_14cbcddc8);
    if (cVar7 != '\0') {
      pcVar20 = "faction_mission";
      goto LAB_144274322;
    }
    cVar7 = FUN_1407a73f8(plVar25,&DAT_14cbcddd0);
    if (cVar7 != '\0') {
      pcVar20 = "dlc_faction_mission";
      goto LAB_144274322;
    }
    cVar7 = FUN_1407a73f8(plVar25,&DAT_14cbcdde0);
    if (cVar7 == '\0') {
      pcVar20 = "daily_mission";
    }
    else {
      pcVar20 = "true_mission";
    }
    FUN_1400b22c2(&local_78,pcVar20);
    if ((longlong **)(param_3 + 2) != &local_78) goto LAB_14427433f;
LAB_144274438:
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    pcVar20 = "main_mission";
LAB_144274322:
    FUN_1400b22c2(&local_78,pcVar20);
    if ((longlong **)(param_3 + 2) == &local_78) goto LAB_144274438;
LAB_14427433f:
    if (param_3[2] != 0) {
      FUN_1400020a8();
    }
    param_3[2] = (longlong)local_78;
    local_78 = (longlong *)0x0;
    *(int *)(param_3 + 3) = (int)uStack_70;
    *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_70._4_4_;
  }
  FUN_1418eba7c(&local_78,lVar11);
  param_3[0xe] = (longlong)local_78;
  *(int *)(param_3 + 0xf) = (int)uStack_70;
  *(undefined4 *)((longlong)param_3 + 0x7c) = uStack_70._4_4_;
  *(undefined4 *)(param_3 + 0x10) = (undefined4)uStack_68;
  *(uint *)((longlong)param_3 + 0x84) = uStack_68._4_4_;
  local_160 = plVar25;
  if ((longlong **)(param_3 + 0xe) == &local_78) {
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_3[0x11] != 0) {
      FUN_1400020a8();
    }
    param_3[0x11] = local_60;
    local_60 = 0;
    *(undefined4 *)(param_3 + 0x12) = (undefined4)uStack_58;
    *(undefined4 *)((longlong)param_3 + 0x94) = uStack_58._4_4_;
  }
  uVar12 = FUN_14409b07a();
  uVar8 = FUN_1448093f4(lVar11,uVar12);
  *(undefined1 *)((longlong)param_3 + 0xcc) = uVar8;
  iVar18 = *(int *)(lVar11 + 0x110);
  if ((longlong)iVar18 != 0) {
    lVar15 = *(longlong *)(lVar11 + 0x108);
    lVar24 = 0;
    do {
      lVar13 = (**(code **)(**(longlong **)(lVar15 + lVar24) + 8))();
      lVar13 = *(longlong *)(lVar13 + 0x18);
      lVar14 = FUN_1405df7fc();
      if (lVar13 == *(longlong *)(lVar14 + 0x18)) {
        *(undefined1 *)(param_3 + 0x19) = 1;
      }
      lVar24 = lVar24 + 0x18;
    } while ((longlong)iVar18 * 0x18 != lVar24);
  }
  uVar8 = FUN_1407a73f8(local_160,&DAT_14cbcddd8);
  *(undefined1 *)((longlong)param_3 + 0xcb) = uVar8;
  local_98 = *param_2;
  local_90 = *(undefined4 *)(param_2 + 1);
  uVar12 = (**(code **)(*(longlong *)(local_168 + 0x958) + 0x10))(local_168 + 0x958);
  lVar15 = FUN_14189cb90(lVar11,uVar12,&local_98);
  pplVar1 = (longlong **)(param_3 + 4);
  if (lVar15 == 0) {
    FUN_1400b22c2(&local_78,&DAT_149e02088);
    if (pplVar1 == &local_78) {
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_3[4] != 0) {
        FUN_1400020a8();
      }
      param_3[4] = (longlong)local_78;
      local_78 = (longlong *)0x0;
      *(int *)(param_3 + 5) = (int)uStack_70;
      *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_70._4_4_;
    }
  }
  else {
    plVar25 = *(longlong **)(lVar15 + 0x28);
    if (*(code **)(*plVar25 + 0x50) != FUN_144828418) {
      plVar25 = (longlong *)(**(code **)(*plVar25 + 0x50))();
    }
    FUN_1447a1fc0(plVar25);
    plVar25 = *(longlong **)(lVar15 + 0x28);
    pcVar4 = *(code **)(*plVar25 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      pplVar16 = (longlong **)(plVar25 + 3);
      if (plVar25[5] != 0) {
        pplVar16 = (longlong **)(plVar25[5] + 8);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      pplVar16 = (longlong **)(plVar25 + 2);
    }
    else {
      pplVar16 = (longlong **)(*pcVar4)(plVar25);
    }
    if (pplVar1 != pplVar16) {
      iVar18 = *(int *)(pplVar16 + 1);
      plVar25 = *pplVar16;
      *(int *)(param_3 + 5) = iVar18;
      if (iVar18 == 0 && *(int *)((longlong)param_3 + 0x2c) == 0) {
        *(undefined4 *)((longlong)param_3 + 0x2c) = 0;
      }
      else {
        FUN_1446dd670(pplVar1,iVar18);
        if (iVar18 != 0) {
          memcpy(*pplVar1,plVar25,(longlong)iVar18 * 2);
        }
      }
    }
  }
  lVar15 = *(longlong *)(lVar11 + 0x820);
  if (lVar15 == 0) {
    uVar12 = FUN_145ce204a();
    lVar15 = FUN_14477b664(uVar12);
    *(longlong *)(lVar11 + 0x820) = lVar15;
  }
  lVar24 = local_168;
  plVar25 = (longlong *)(lVar11 + 0x818);
  puVar21 = *(undefined2 **)(lVar11 + 0x818);
  if (*(longlong *)(lVar11 + 0x828) == 0) {
    if (lVar15 != 0 && puVar21 != (undefined2 *)0x0) {
      plVar17 = *(longlong **)(lVar15 + 0xb8);
      if ((plVar17 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
        *(undefined8 *)(lVar11 + 0x828) = 0;
      }
      else {
        uVar12 = (**(code **)(*plVar17 + 0x110))(plVar17);
        lVar15 = FUN_144aff482(uVar12,plVar25);
        *(longlong *)(lVar11 + 0x828) = lVar15;
        if (lVar15 != 0) {
          puVar21 = (undefined2 *)*plVar25;
          goto LAB_1442746e4;
        }
      }
    }
    FUN_1400b22c2(&local_78,"normal");
    if ((longlong **)(param_3 + 6) == &local_78) {
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_3[6] != 0) {
        FUN_1400020a8();
      }
      param_3[6] = (longlong)local_78;
      local_78 = (longlong *)0x0;
      *(int *)(param_3 + 7) = (int)uStack_70;
      *(undefined4 *)((longlong)param_3 + 0x3c) = uStack_70._4_4_;
    }
    FUN_1400b22c2(&local_78,"Unknown");
    if ((longlong **)(param_3 + 8) == &local_78) {
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_3[8] != 0) {
        FUN_1400020a8();
      }
      param_3[8] = (longlong)local_78;
      local_78 = (longlong *)0x0;
      *(int *)(param_3 + 9) = (int)uStack_70;
      *(undefined4 *)((longlong)param_3 + 0x4c) = uStack_70._4_4_;
    }
  }
  else {
LAB_1442746e4:
    local_c8 = puVar21;
    FUN_1400021e4(&local_c8,&local_78);
    plVar17 = local_78;
    iVar18 = (int)uStack_70;
    uVar9 = (int)uStack_70 - 1;
    if ((int)uStack_70 == 0) {
      uVar9 = 0;
    }
    if (0 < (int)uVar9) {
      uVar19 = 0;
      do {
        uVar3 = *(ushort *)((longlong)local_78 + uVar19 * 2);
        *(ushort *)((longlong)local_78 + uVar19 * 2) = (ushort)(uVar3 - 0x41 < 0x1a) * 0x20 + uVar3;
        uVar19 = uVar19 + 1;
      } while (uVar9 != uVar19);
    }
    uVar10 = uStack_70._4_4_;
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    if (param_3[6] == 0) {
      param_3[6] = (longlong)plVar17;
      *(int *)(param_3 + 7) = iVar18;
      *(undefined4 *)((longlong)param_3 + 0x3c) = uVar10;
    }
    else {
      FUN_1400020a8();
      param_3[6] = (longlong)plVar17;
      *(int *)(param_3 + 7) = iVar18;
      *(undefined4 *)((longlong)param_3 + 0x3c) = uVar10;
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    lVar15 = *(longlong *)(lVar11 + 0x820);
    if (lVar15 == 0) {
      uVar12 = FUN_145ce204a();
      lVar15 = FUN_14477b664(uVar12);
      *(longlong *)(lVar11 + 0x820) = lVar15;
    }
    lVar13 = *(longlong *)(lVar11 + 0x828);
    if (((lVar13 == 0) && (lVar13 = 0, lVar15 != 0)) && (*plVar25 != 0)) {
      plVar17 = *(longlong **)(lVar15 + 0xb8);
      if ((plVar17 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
        lVar13 = 0;
      }
      else {
        uVar12 = (**(code **)(*plVar17 + 0x110))(plVar17);
        lVar13 = FUN_144aff482(uVar12,plVar25);
      }
      *(longlong *)(lVar11 + 0x828) = lVar13;
    }
    plVar25 = *(longlong **)(lVar13 + 0x18);
    if (*(code **)(*plVar25 + 0x50) != FUN_144828418) {
      plVar25 = (longlong *)(**(code **)(*plVar25 + 0x50))();
    }
    FUN_1447a1fc0(plVar25);
    lVar24 = local_168;
    plVar25 = *(longlong **)(lVar13 + 0x18);
    pcVar4 = *(code **)(*plVar25 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar17 = plVar25 + 3;
      if (plVar25[5] != 0) {
        plVar17 = (longlong *)(plVar25[5] + 8);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar17 = plVar25 + 2;
    }
    else {
      plVar17 = (longlong *)(*pcVar4)(plVar25);
    }
    plVar25 = param_3 + 8;
    if (plVar25 != plVar17) {
      iVar18 = (int)plVar17[1];
      pvVar5 = (void *)*plVar17;
      *(int *)(param_3 + 9) = iVar18;
      if (iVar18 == 0 && *(int *)((longlong)param_3 + 0x4c) == 0) {
        *(undefined4 *)((longlong)param_3 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(plVar25,iVar18);
        if (iVar18 != 0) {
          memcpy((void *)*plVar25,pvVar5,(longlong)iVar18 * 2);
        }
      }
    }
  }
  if ((*(int *)(lVar11 + 0x68) < 1) || (lVar15 = *(longlong *)(lVar11 + 0x60), lVar15 == 0)) {
    FUN_1400b22c2(&local_78,&DAT_149e02088);
    if ((longlong **)(param_3 + 10) == &local_78) {
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_3[10] != 0) {
        FUN_1400020a8();
      }
      param_3[10] = (longlong)local_78;
      local_78 = (longlong *)0x0;
      *(int *)(param_3 + 0xb) = (int)uStack_70;
      *(undefined4 *)((longlong)param_3 + 0x5c) = uStack_70._4_4_;
    }
  }
  else {
    uVar12 = FUN_1447210f0(lVar24);
    FUN_143deff24(lVar15 + 0x10,&local_78,param_2,uVar12);
    plVar25 = local_78;
    if (*(code **)(*local_78 + 0x50) != FUN_144828418) {
      plVar25 = (longlong *)(**(code **)(*local_78 + 0x50))();
    }
    FUN_1447a1fc0(plVar25);
    pcVar4 = *(code **)(*local_78 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar25 = local_78 + 3;
      if (local_78[5] != 0) {
        plVar25 = (longlong *)(local_78[5] + 8);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar25 = local_78 + 2;
    }
    else {
      plVar25 = (longlong *)(*pcVar4)(local_78);
    }
    plVar17 = param_3 + 10;
    if (plVar17 != plVar25) {
      iVar18 = (int)plVar25[1];
      pvVar5 = (void *)*plVar25;
      *(int *)(param_3 + 0xb) = iVar18;
      if (iVar18 == 0 && *(int *)((longlong)param_3 + 0x5c) == 0) {
        *(undefined4 *)((longlong)param_3 + 0x5c) = 0;
      }
      else {
        FUN_1446dd670(plVar17,iVar18);
        if (iVar18 != 0) {
          memcpy((void *)*plVar17,pvVar5,(longlong)iVar18 * 2);
        }
      }
    }
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
    plVar25 = param_3 + 0xc;
    *(undefined4 *)(param_3 + 0xd) = 0;
    if (*(int *)((longlong)param_3 + 0x6c) < 0) {
      FUN_1446f8c06(plVar25,0);
    }
    if ((undefined2 *)*plVar25 != (undefined2 *)0x0) {
      *(undefined2 *)*plVar25 = 0;
    }
    if ((*local_160 == 0) || ((longlong)*(int *)(lVar11 + 0x4f8) == -1)) {
      lVar15 = 0;
    }
    else {
      lVar15 = **(longlong **)
                 (*(longlong *)(*local_160 + 0x50) + (longlong)*(int *)(lVar11 + 0x4f8) * 8);
    }
    bVar26 = lVar15 == DAT_14cbcdd98;
    *(bool *)((longlong)param_3 + 0xcd) = bVar26;
    if (!bVar26) {
      if (*(int *)(lVar11 + 0x68) < 1) {
        lVar15 = 0;
      }
      else {
        lVar15 = *(longlong *)(lVar11 + 0x60);
      }
      uVar12 = FUN_1447210f0(lVar24);
      FUN_143deff24(lVar15 + 0x28,&local_78,param_2,uVar12);
      plVar17 = local_78;
      if (*(code **)(*local_78 + 0x50) != FUN_144828418) {
        plVar17 = (longlong *)(**(code **)(*local_78 + 0x50))();
      }
      FUN_1447a1fc0(plVar17);
      pcVar4 = *(code **)(*local_78 + 0x28);
      if (pcVar4 == FUN_14482841c) {
        plVar17 = local_78 + 3;
        if (local_78[5] != 0) {
          plVar17 = (longlong *)(local_78[5] + 8);
        }
      }
      else if (pcVar4 == (code *)&LAB_14010c34c) {
        plVar17 = local_78 + 2;
      }
      else {
        plVar17 = (longlong *)(*pcVar4)(local_78);
      }
      if (plVar25 != plVar17) {
        iVar18 = (int)plVar17[1];
        pvVar5 = (void *)*plVar17;
        *(int *)(param_3 + 0xd) = iVar18;
        if (iVar18 == 0 && *(int *)((longlong)param_3 + 0x6c) == 0) {
          *(undefined4 *)((longlong)param_3 + 0x6c) = 0;
        }
        else {
          FUN_1446dd670(plVar25,iVar18);
          if (iVar18 != 0) {
            memcpy((void *)*plVar25,pvVar5,(longlong)iVar18 * 2);
          }
        }
      }
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
  }
  FUN_144275590(lVar11,lVar24,param_3 + 0x13);
  local_a0 = *(undefined4 *)(param_2 + 1);
  local_a8 = *param_2;
  FUN_140c51c1e(lVar24,&local_a8,param_3 + 0x15);
  local_b0 = 0;
  FUN_14410b2c4(lVar11,&local_b0);
  if ((local_b0 != 0) && (lVar11 = FUN_140f7e331(), *(char *)(lVar11 + 0x32) == '\x01')) {
    puVar22 = &DAT_14c9485f0;
    if (*(undefined4 **)(local_b0 + 8) != (undefined4 *)0x0) {
      puVar22 = *(undefined4 **)(local_b0 + 8);
    }
    FUN_1447715ec(param_3 + 0x1c,puVar22);
    uVar8 = FUN_14125be1e(lVar24,local_b0);
    lVar11 = local_b0;
    *(undefined1 *)(param_3 + 0x21) = uVar8;
    plVar25 = *(longlong **)(local_b0 + 0x18);
    plVar17 = (longlong *)param_3[0x22];
    if (plVar17 != plVar25) {
      param_3[0x22] = (longlong)plVar25;
      if (plVar25 != (longlong *)0x0) {
        (**(code **)(*plVar25 + 8))();
      }
      if (plVar17 != (longlong *)0x0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
    lVar15 = local_b0;
    *(undefined4 *)(param_3 + 0x23) = *(undefined4 *)(lVar11 + 0x20);
    plVar25 = *(longlong **)(local_b0 + 0x28);
    plVar17 = (longlong *)param_3[0x24];
    if (plVar17 != plVar25) {
      param_3[0x24] = (longlong)plVar25;
      if (plVar25 != (longlong *)0x0) {
        (**(code **)(*plVar25 + 8))();
      }
      if (plVar17 != (longlong *)0x0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
    *(undefined4 *)(param_3 + 0x25) = *(undefined4 *)(lVar15 + 0x30);
    local_c8 = (undefined2 *)0x0;
    uStack_c0 = 0;
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    uStack_68 = (void *)((ulonglong)uStack_68._4_4_ << 0x20);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(&local_78,"MissionDLCDisclaimerText",0);
    FUN_140ac6a88(&local_78,&local_c8);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    FUN_1400b22c2(local_f8,"[newline][newline]");
    plVar25 = (longlong *)param_3[0x24];
    if (*(code **)(*plVar25 + 0x50) != FUN_144828418) {
      plVar25 = (longlong *)(**(code **)(*plVar25 + 0x50))();
    }
    FUN_1447a1fc0(plVar25);
    plVar25 = (longlong *)param_3[0x24];
    pcVar4 = *(code **)(*plVar25 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar17 = plVar25 + 3;
      if (plVar25[5] != 0) {
        plVar17 = (longlong *)(plVar25[5] + 8);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar17 = plVar25 + 2;
    }
    else {
      plVar17 = (longlong *)(*pcVar4)();
    }
    local_138 = (void *)0x0;
    uStack_130._0_4_ = (int)plVar17[1];
    lVar11 = (longlong)(int)uStack_130;
    pvVar5 = (void *)*plVar17;
    if (lVar11 == 0) {
      uVar10 = 0;
      iVar18 = 0;
      uStack_68 = (void *)0x0;
    }
    else {
      FUN_1446dd670(&local_138,(int)uStack_130,0);
      memcpy(local_138,pvVar5,lVar11 * 2);
      uStack_68 = local_138;
      iVar18 = (int)uStack_130;
      uVar10 = uStack_130._4_4_;
    }
    local_78 = (longlong *)CONCAT44(local_78._4_4_,3);
    local_138 = (void *)0x0;
    uStack_130 = 0;
    local_60 = CONCAT44(uVar10,iVar18);
    local_128 = &local_78;
    local_120 = &uStack_58;
    FUN_1407adb6e(&local_118);
    puVar21 = local_c8;
    if ((int)uStack_c0 == 0) {
      puVar21 = &DAT_149dfb77a;
    }
    FUN_140230a63();
    FUN_140230ad0(&DAT_14c8731a8,local_108,puVar21,&local_118);
    FUN_1401c7f3e(&local_e8,local_108,local_f8);
    iVar6 = local_dc;
    iVar18 = local_e0;
    if (local_e0 < 2) {
      local_d8 = (void *)0x0;
      uVar9 = *(uint *)(param_3 + 0xb);
      pvVar5 = (void *)param_3[10];
      local_d0 = CONCAT44(local_d0._4_4_,uVar9);
      if ((longlong)(int)uVar9 == 0) {
        local_d0 = (ulonglong)uVar9;
      }
      else {
        FUN_1446dd670(&local_d8,uVar9,0);
        memcpy(local_d8,pvVar5,(longlong)(int)uVar9 * 2);
      }
    }
    else {
      iVar23 = (int)param_3[0xb] + -1;
      if ((int)param_3[0xb] == 0) {
        iVar23 = 0;
      }
      local_d8 = local_e8;
      local_e8 = (void *)0x0;
      local_d0 = CONCAT44(local_dc,local_e0);
      local_e0 = 0;
      local_dc = 0;
      iVar2 = iVar23 + iVar18;
      if (iVar2 < iVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar23);
      }
      if (iVar6 < iVar2) {
        FUN_1446f8c06(&local_d8);
      }
      FUN_1400020e8(&local_d8,(void *)param_3[10],iVar23);
    }
    if ((void **)(param_3 + 10) == &local_d8) {
      if (local_d8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_3[10] != 0) {
        FUN_1400020a8();
      }
      param_3[10] = (longlong)local_d8;
      local_d8 = (void *)0x0;
      *(undefined4 *)(param_3 + 0xb) = (undefined4)local_d0;
      *(undefined4 *)((longlong)param_3 + 0x5c) = local_d0._4_4_;
      local_d0 = 0;
    }
    if (local_e8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_108[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1407adb3e(local_118,local_110);
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    if (uStack_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1400b22c2(local_f8,"[newline][newline]");
    plVar25 = (longlong *)param_3[0x24];
    if (*(code **)(*plVar25 + 0x50) != FUN_144828418) {
      plVar25 = (longlong *)(**(code **)(*plVar25 + 0x50))();
    }
    FUN_1447a1fc0(plVar25);
    plVar25 = (longlong *)param_3[0x24];
    pcVar4 = *(code **)(*plVar25 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar17 = plVar25 + 3;
      if (plVar25[5] != 0) {
        plVar17 = (longlong *)(plVar25[5] + 8);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar17 = plVar25 + 2;
    }
    else {
      plVar17 = (longlong *)(*pcVar4)();
    }
    local_158 = (void *)0x0;
    uStack_150._0_4_ = (int)plVar17[1];
    lVar11 = (longlong)(int)uStack_150;
    pvVar5 = (void *)*plVar17;
    if (lVar11 == 0) {
      uVar10 = 0;
      iVar18 = 0;
      uStack_68 = (void *)0x0;
    }
    else {
      FUN_1446dd670(&local_158,(int)uStack_150,0);
      memcpy(local_158,pvVar5,lVar11 * 2);
      uStack_68 = local_158;
      iVar18 = (int)uStack_150;
      uVar10 = uStack_150._4_4_;
    }
    local_78 = (longlong *)CONCAT44(local_78._4_4_,3);
    local_158 = (void *)0x0;
    uStack_150 = 0;
    local_60 = CONCAT44(uVar10,iVar18);
    local_148 = &local_78;
    local_140 = &uStack_58;
    FUN_1407adb6e(&local_118);
    puVar21 = local_c8;
    if ((int)uStack_c0 == 0) {
      puVar21 = &DAT_149dfb77a;
    }
    FUN_140230a63();
    FUN_140230ad0(&DAT_14c8731a8,local_108,puVar21,&local_118);
    FUN_1401c7f3e(&local_e8,local_108,local_f8);
    iVar6 = local_dc;
    iVar18 = local_e0;
    if (local_e0 < 2) {
      local_d8 = (void *)0x0;
      uVar9 = *(uint *)(param_3 + 0xd);
      pvVar5 = (void *)param_3[0xc];
      local_d0 = CONCAT44(local_d0._4_4_,uVar9);
      if ((longlong)(int)uVar9 == 0) {
        local_d0 = (ulonglong)uVar9;
      }
      else {
        FUN_1446dd670(&local_d8,uVar9,0);
        memcpy(local_d8,pvVar5,(longlong)(int)uVar9 * 2);
      }
    }
    else {
      iVar23 = (int)param_3[0xd] + -1;
      if ((int)param_3[0xd] == 0) {
        iVar23 = 0;
      }
      local_d8 = local_e8;
      local_e8 = (void *)0x0;
      local_d0 = CONCAT44(local_dc,local_e0);
      local_e0 = 0;
      local_dc = 0;
      iVar2 = iVar23 + iVar18;
      if (iVar2 < iVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar23);
      }
      if (iVar6 < iVar2) {
        FUN_1446f8c06(&local_d8);
      }
      FUN_1400020e8(&local_d8,(void *)param_3[0xc],iVar23);
    }
    if ((void **)(param_3 + 0xc) == &local_d8) {
      if (local_d8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_3[0xc] != 0) {
        FUN_1400020a8();
      }
      param_3[0xc] = (longlong)local_d8;
      local_d8 = (void *)0x0;
      *(undefined4 *)(param_3 + 0xd) = (undefined4)local_d0;
      *(undefined4 *)((longlong)param_3 + 0x6c) = local_d0._4_4_;
      local_d0 = 0;
    }
    if (local_e8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_108[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1407adb3e(local_118,local_110);
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    if (uStack_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_c8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_144275410:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144275590 FUN_144275590 body=791 status=ok
// SIG undefined FUN_144275590(void)

void FUN_144275590(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ushort uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  void *pvVar14;
  longlong lVar15;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  void *local_a8;
  ulonglong uStack_a0;
  void *local_98;
  ulonglong uStack_90;
  undefined1 local_88;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((param_1 != 0) && (param_2 != 0)) && (0 < *(int *)(param_1 + 0x810))) {
    lVar10 = FUN_144a5dd5e();
    if (((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) &&
       ((lVar10 = *(longlong *)(param_2 + 0xf40), lVar10 != 0 &&
        ((longlong)*(int *)(param_1 + 0x810) != 0)))) {
      plVar13 = *(longlong **)(param_1 + 0x808);
      plVar1 = plVar13 + (longlong)*(int *)(param_1 + 0x810) * 3;
      do {
        local_70 = 0;
        local_78 = *plVar13;
        local_68 = 0;
        uVar11 = FUN_14477b664(plVar13[1]);
        local_70 = FUN_14477b664(uVar11);
        local_68 = plVar13[2];
        local_98 = (void *)0x0;
        uStack_90 = 0;
        local_b0 = local_78;
        FUN_1400021e4(&local_b0,&local_a8);
        uVar7 = uStack_a0;
        pvVar14 = local_a8;
        uVar9 = (int)uStack_a0 - 1;
        if ((int)uStack_a0 == 0) {
          uVar9 = 0;
        }
        if (0 < (int)uVar9) {
          uVar12 = 0;
          do {
            uVar3 = *(ushort *)((longlong)local_a8 + uVar12 * 2);
            *(ushort *)((longlong)local_a8 + uVar12 * 2) =
                 (ushort)(uVar3 - 0x41 < 0x1a) * 0x20 + uVar3;
            uVar12 = uVar12 + 1;
          } while (uVar9 != uVar12);
        }
        local_a8 = (void *)0x0;
        uStack_a0 = 0;
        if (local_98 == (void *)0x0) {
          uStack_90 = uVar7;
          local_98 = pvVar14;
        }
        else {
          FUN_1400020a8();
          local_98 = pvVar14;
          uStack_90 = uVar7;
          if (local_a8 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        FUN_14475c2da(&local_98,0x20,0x5f,1);
        plVar5 = *(longlong **)(&DAT_00006850 + lVar10);
        if (local_70 == 0) {
          uVar11 = FUN_140e3bfa2();
          local_70 = FUN_14477b664(uVar11);
        }
        lVar15 = local_68;
        if (local_68 == 0) {
          if (local_70 == 0) {
            lVar15 = 0;
          }
          else {
            lVar15 = 0;
            if (local_78 != 0) {
              plVar6 = *(longlong **)(local_70 + 0xb8);
              if ((plVar6 == (longlong *)0x0) ||
                 (cVar8 = (**(code **)(*plVar6 + 0x108))(), cVar8 == '\0')) {
                lVar15 = 0;
                local_68 = lVar15;
              }
              else {
                uVar11 = (**(code **)(*plVar6 + 0x110))(plVar6);
                lVar15 = FUN_144aff482(uVar11,&local_78);
                local_68 = lVar15;
              }
            }
          }
        }
        local_88 = (**(code **)(*plVar5 + 0xe78))(plVar5,*(undefined4 *)(lVar15 + 0x18));
        iVar4 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
          FUN_148e452f2(param_3,iVar4);
        }
        pvVar14 = local_98;
        puVar2 = (undefined8 *)(*param_3 + (longlong)iVar4 * 0x18);
        *puVar2 = 0;
        lVar15 = (longlong)(int)uStack_90;
        *(int *)(puVar2 + 1) = (int)uStack_90;
        if (lVar15 == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar2,uStack_90 & 0xffffffff,0);
          memcpy((void *)*puVar2,pvVar14,lVar15 * 2);
        }
        *(undefined1 *)(puVar2 + 2) = local_88;
        if (local_98 != (void *)0x0) {
          FUN_1400020a8();
        }
        plVar13 = plVar13 + 3;
      } while (plVar13 != plVar1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442758a8 FUN_1442758a8 body=539 status=ok
// SIG undefined FUN_1442758a8(void)

void FUN_1442758a8(longlong *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar10 = 0;
    uVar13 = 1;
    iVar11 = 0;
    iVar4 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar10 = 0;
      uVar13 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar13 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar13 == uVar10) goto LAB_144275a3c;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar8[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar2 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar14 = 0xffffffff;
    do {
      lVar12 = *param_1;
      if (*(longlong *)(lVar12 + 0x80 + (longlong)iVar4 * 0x98) != 0) {
        FUN_1400020a8();
      }
      lVar12 = lVar12 + (longlong)iVar4 * 0x98;
      *(undefined4 *)(lVar12 + 0x78) = 0;
      if (*(longlong *)(lVar12 + 0x70) != 0) {
        FUN_1400020a8();
      }
      FUN_14424725e(lVar12 + 0x30);
      if (*(longlong **)(lVar12 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar12 + 0x10) + 0x10))();
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar4 = (int)uVar10;
      lVar12 = (longlong)iVar4;
      uVar5 = puVar8[lVar12] & uVar14;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar5 = puVar8[lVar12 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar12 == lVar9) goto LAB_144275a3c;
        }
        uVar10 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar4 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_144275a3c:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140f776e6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(puVar1,0);
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



// FUNCTION 144275ac4 FUN_144275ac4 body=66 status=ok
// SIG undefined FUN_144275ac4(void)

longlong FUN_144275ac4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_144275c26(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x88 + *param_1;
  FUN_144275b06(lVar2);
  return lVar2;
}



// FUNCTION 144275b06 FUN_144275b06 body=288 status=ok
// SIG undefined FUN_144275b06(void)

void FUN_144275b06(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = 0;
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
  plVar1 = DAT_14c844840;
  param_1[1] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return;
}



// FUNCTION 144275c26 FUN_144275c26 body=366 status=ok
// SIG undefined FUN_144275c26(void)

void FUN_144275c26(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x88;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_144275cbf;
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
LAB_144275cbf:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x88)) {
    uVar7 = uVar5 / 0x88 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x88,8);
  return;
}



// FUNCTION 144275d94 FUN_144275d94 body=154 status=ok
// SIG undefined FUN_144275d94(void)

longlong FUN_144275d94(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_144275dfe;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_144275dfe:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_144275e2e(param_1,param_2);
  return param_1;
}



// FUNCTION 144275e2e FUN_144275e2e body=357 status=ok
// SIG undefined FUN_144275e2e(void)

longlong * FUN_144275e2e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_144247294(param_1,(ulonglong)uVar1);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar6 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar7 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar7;
      FUN_1446efbd8(param_1 + 2);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar9 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar9 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar9,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      lVar5 = *param_1;
      lVar3 = *param_2;
      lVar8 = 0;
      uVar10 = 0;
      do {
        plVar9 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar9 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar9 + (uVar10 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar10 & 0x1f) &
            1) == 0) {
          *(undefined4 *)(lVar5 + lVar8) = *(undefined4 *)(lVar3 + lVar8);
          *(undefined4 *)(lVar5 + 4 + lVar8) = *(undefined4 *)(lVar3 + 4 + lVar8);
        }
        else {
          *(undefined8 *)(lVar5 + lVar8) = *(undefined8 *)(lVar3 + lVar8);
          *(undefined8 *)(lVar5 + 8 + lVar8) = *(undefined8 *)(lVar3 + 8 + lVar8);
          lVar4 = *(longlong *)(lVar3 + 0x10 + lVar8);
          *(longlong *)(lVar5 + 0x10 + lVar8) = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar5 + 0x18 + lVar8) = *(undefined8 *)(lVar3 + 0x18 + lVar8);
        }
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 0x20;
      } while (uVar1 != uVar10);
    }
  }
  return param_1;
}



// FUNCTION 144275fca FUN_144275fca body=29 status=ok
// SIG undefined FUN_144275fca(void)

undefined8 FUN_144275fca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144276088 FUN_144276088 body=29 status=ok
// SIG undefined FUN_144276088(void)

undefined8 FUN_144276088(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144276224 FUN_144276224 body=101 status=ok
// SIG undefined FUN_144276224(void)

void FUN_144276224(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ad040;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14427628a FUN_14427628a body=101 status=ok
// SIG undefined FUN_14427628a(void)

void FUN_14427628a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ad040;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442762f0 FUN_1442762f0 body=134 status=ok
// SIG undefined FUN_1442762f0(void)

void FUN_1442762f0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ad040;
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
                    /* WARNING: Could not recover jumptable at 0x000144276367. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144276384 FUN_144276384 body=270 status=ok
// SIG undefined FUN_144276384(void)

undefined8 FUN_144276384(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14427648c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14427648c;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14427648c:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144276440;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1418f61b0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144276440;
    }
  }
  uVar6 = 0;
LAB_144276440:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144276494 FUN_144276494 body=31 status=ok
// SIG undefined FUN_144276494(void)

undefined8 FUN_144276494(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442764b4 FUN_1442764b4 body=119 status=ok
// SIG undefined FUN_1442764b4(void)

undefined8 * FUN_1442764b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9ad350;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442766aa FUN_1442766aa body=120 status=ok
// SIG undefined FUN_1442766aa(void)

void FUN_1442766aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 0xe) {
    FUN_1446efa72(param_2,0,0xe,0x10);
    *(undefined4 *)(param_2 + 1) = 0xe;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad350;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  FUN_1414ba45c(puVar1 + 4,param_1 + 0x20);
  puVar1[0x1b] = *(undefined8 *)(param_1 + 0xd8);
  return;
}



// FUNCTION 144276722 FUN_144276722 body=120 status=ok
// SIG undefined FUN_144276722(void)

void FUN_144276722(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 0xe) {
    FUN_1446efa72(param_2,0,0xe,0x10);
    *(undefined4 *)(param_2 + 1) = 0xe;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad350;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  FUN_1414ba45c(puVar1 + 4,param_1 + 0x20);
  puVar1[0x1b] = *(undefined8 *)(param_1 + 0xd8);
  return;
}



// FUNCTION 14427679a FUN_14427679a body=156 status=ok
// SIG undefined FUN_14427679a(void)

void FUN_14427679a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 0xe) {
    FUN_1446efa72(param_2 + 1,0,0xe,0x10);
    param_2[1].LockCount = 0xe;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ad350;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  FUN_1414ba45c(&p_Var1->EntryCount,param_1 + 0x20);
  p_Var1[4].ProcessLocksList.Blink = *(_LIST_ENTRY **)(param_1 + 0xd8);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144276826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14427684a FUN_14427684a body=276 status=ok
// SIG undefined FUN_14427684a(void)

undefined8 FUN_14427684a(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144276958;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144276958;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144276958:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442768f5;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14663d854(*(undefined8 *)(param_1 + 0xd8),param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1442768f5;
    }
  }
  uVar6 = 0;
LAB_1442768f5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144276960 FUN_144276960 body=119 status=ok
// SIG undefined FUN_144276960(void)

undefined8 * FUN_144276960(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9ad3c0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144276b56 FUN_144276b56 body=120 status=ok
// SIG undefined FUN_144276b56(void)

void FUN_144276b56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 0xe) {
    FUN_1446efa72(param_2,0,0xe,0x10);
    *(undefined4 *)(param_2 + 1) = 0xe;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad3c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  FUN_1414ba45c(puVar1 + 4,param_1 + 0x20);
  puVar1[0x1b] = *(undefined8 *)(param_1 + 0xd8);
  return;
}



// FUNCTION 144276bce FUN_144276bce body=120 status=ok
// SIG undefined FUN_144276bce(void)

void FUN_144276bce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 0xe) {
    FUN_1446efa72(param_2,0,0xe,0x10);
    *(undefined4 *)(param_2 + 1) = 0xe;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad3c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  FUN_1414ba45c(puVar1 + 4,param_1 + 0x20);
  puVar1[0x1b] = *(undefined8 *)(param_1 + 0xd8);
  return;
}



// FUNCTION 144276c46 FUN_144276c46 body=156 status=ok
// SIG undefined FUN_144276c46(void)

void FUN_144276c46(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 0xe) {
    FUN_1446efa72(param_2 + 1,0,0xe,0x10);
    param_2[1].LockCount = 0xe;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ad3c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  FUN_1414ba45c(&p_Var1->EntryCount,param_1 + 0x20);
  p_Var1[4].ProcessLocksList.Blink = *(_LIST_ENTRY **)(param_1 + 0xd8);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144276cd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144276cf6 FUN_144276cf6 body=276 status=ok
// SIG undefined FUN_144276cf6(void)

undefined8 FUN_144276cf6(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144276e04;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144276e04;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144276e04:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144276da1;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_145915ee6(*(undefined8 *)(param_1 + 0xd8),param_1 + 0x20);
      uVar6 = 1;
      goto LAB_144276da1;
    }
  }
  uVar6 = 0;
LAB_144276da1:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144276e0c FUN_144276e0c body=31 status=ok
// SIG undefined FUN_144276e0c(void)

undefined8 FUN_144276e0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144276ec6 FUN_144276ec6 body=1394 status=ok
// SIG undefined FUN_144276ec6(void)

bool FUN_144276ec6(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  void *_Src;
  longlong *plVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  ushort uVar14;
  ulonglong uVar15;
  ushort uVar16;
  ulonglong uVar17;
  undefined1 auStack_198 [44];
  undefined1 local_16c [4];
  short *local_168;
  undefined2 *local_160;
  ulonglong *local_158;
  char local_150;
  short local_148 [19];
  undefined2 local_122 [109];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar10 = param_1[2];
  puVar8 = (undefined8 *)FUN_148e1cb1e(param_2,*param_1);
  if (puVar8 == (undefined8 *)0x0) goto LAB_144276fa5;
  bVar1 = *(byte *)(puVar8 + 0x18);
  uVar9 = (**(code **)(*(longlong *)(*(longlong *)param_1[1] + 0xe68) + 0x10))
                    (*(longlong *)param_1[1] + 0xe68);
  bVar5 = FUN_141011ad4(uVar9,puVar8 + 0x19);
  *(byte *)(puVar8 + 0x18) = *(byte *)(puVar8 + 0x18) & 0xfe | bVar5;
  FUN_144244c1e(puVar8,*(undefined8 *)param_1[1]);
  *(byte *)(puVar8 + 0x18) = *(byte *)(puVar8 + 0x18) & 0xf7 | *(byte *)(puVar8 + 0x18) * '\b' & 8;
  lVar10 = FUN_140495e96(lVar10 + 0x30);
  if (lVar10 != 0) {
    lVar10 = FUN_140cee904(lVar10);
    if (lVar10 != 0) {
      local_168 = local_148;
      local_150 = '\0';
      local_158 = &local_48;
      lVar12 = 0;
      do {
        local_148[lVar12] = (short)"inventory.echologs."[lVar12];
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x13);
      local_160 = local_122;
      _Src = (void *)*puVar8;
      uVar7 = *(uint *)(puVar8 + 1);
      iVar13 = uVar7 - 1;
      if (uVar7 == 0) {
        iVar13 = 0;
      }
      lVar12 = (longlong)iVar13;
      if (0x6c < iVar13) {
        FUN_140213274(&local_168,lVar12);
      }
      puVar4 = local_160;
      if (1 < uVar7) {
        memcpy(local_160,_Src,lVar12 * 2);
        local_160 = puVar4 + lVar12;
      }
      *local_160 = 0;
      FUN_145a4750c(lVar10,local_168);
      if (local_150 == '\x01') {
        FUN_1400020a8(local_168);
      }
    }
  }
  if (((bVar1 & 1) != 0) || ((*(byte *)(puVar8 + 0x18) & 1) == 0)) goto LAB_144276fa5;
  plVar11 = (longlong *)FUN_148e3cb2a(*(undefined8 *)param_1[1]);
  if (plVar11 == (longlong *)0x0) goto LAB_144276fa5;
  plVar2 = (longlong *)*param_1;
  lVar10 = plVar2[1];
  if (lVar10 == 0) {
    uVar9 = FUN_140b7bb2c();
    lVar10 = FUN_14477b664(uVar9);
    plVar2[1] = lVar10;
  }
  lVar12 = plVar2[2];
  if (((lVar12 == 0) && (lVar12 = 0, lVar10 != 0)) && (*plVar2 != 0)) {
    plVar3 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) {
      lVar12 = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar12 = FUN_144aff482(uVar9,plVar2);
    }
    plVar2[2] = lVar12;
  }
  iVar13 = *(int *)(lVar12 + 0x90);
  if (iVar13 == DAT_14cbd6530) {
    if (1 < iVar13) {
      lVar10 = 0;
      while( true ) {
        uVar14 = *(ushort *)(*(longlong *)(lVar12 + 0x88) + lVar10);
        uVar15 = (ulonglong)uVar14;
        uVar16 = *(ushort *)(DAT_14cbd6528 + lVar10);
        if (uVar14 != uVar16) break;
        if (uVar14 == 0) goto LAB_14427737e;
LAB_14427715d:
        lVar10 = lVar10 + 2;
      }
      if ((uVar16 | uVar14) < 0x80) {
        uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
        uVar17 = (ulonglong)uVar16;
        uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
        if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar17]) goto LAB_14427715d;
      }
      if (uVar14 != uVar16) goto LAB_14427718d;
    }
LAB_14427737e:
    local_168 = (short *)0x14b9ad7a0;
    local_160 = (undefined2 *)CONCAT44(local_160._4_4_,0x20);
  }
  else {
    if (DAT_14cbd6530 + iVar13 == 1) goto LAB_14427737e;
LAB_14427718d:
    plVar2 = (longlong *)*param_1;
    lVar10 = plVar2[1];
    if (lVar10 == 0) {
      uVar9 = FUN_140b7bb2c();
      lVar10 = FUN_14477b664(uVar9);
      plVar2[1] = lVar10;
    }
    lVar12 = plVar2[2];
    if (((lVar12 == 0) && (lVar12 = 0, lVar10 != 0)) && (*plVar2 != 0)) {
      plVar3 = *(longlong **)(lVar10 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) {
        lVar12 = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar12 = FUN_144aff482(uVar9,plVar2);
      }
      plVar2[2] = lVar12;
    }
    iVar13 = *(int *)(lVar12 + 0x90);
    if (iVar13 == DAT_14cbd6520) {
      if (1 < iVar13) {
        lVar10 = 0;
        while( true ) {
          uVar14 = *(ushort *)(*(longlong *)(lVar12 + 0x88) + lVar10);
          uVar15 = (ulonglong)uVar14;
          uVar16 = *(ushort *)(DAT_14cbd6518 + lVar10);
          if (uVar14 != uVar16) break;
          if (uVar14 == 0) goto LAB_1442773a1;
LAB_14427724f:
          lVar10 = lVar10 + 2;
        }
        if ((uVar16 | uVar14) < 0x80) {
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
          uVar17 = (ulonglong)uVar16;
          uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
          if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar17]) goto LAB_14427724f;
        }
        if (uVar14 != uVar16) goto LAB_14427727f;
      }
LAB_1442773a1:
      local_168 = (short *)0x14b9ad7c1;
      local_160 = (undefined2 *)CONCAT44(local_160._4_4_,0x25);
    }
    else {
      if (DAT_14cbd6520 + iVar13 == 1) goto LAB_1442773a1;
LAB_14427727f:
      param_1 = (longlong *)*param_1;
      lVar10 = param_1[1];
      if (lVar10 == 0) {
        uVar9 = FUN_140b7bb2c();
        lVar10 = FUN_14477b664(uVar9);
        param_1[1] = lVar10;
      }
      lVar12 = param_1[2];
      if (((lVar12 == 0) && (lVar12 = 0, lVar10 != 0)) && (*param_1 != 0)) {
        plVar2 = *(longlong **)(lVar10 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar6 == '\0')) {
          lVar12 = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar12 = FUN_144aff482(uVar9,param_1);
        }
        param_1[2] = lVar12;
      }
      iVar13 = *(int *)(lVar12 + 0x90);
      if (iVar13 == DAT_14cbd6540) {
        if (1 < iVar13) {
          lVar10 = 0;
          while( true ) {
            uVar14 = *(ushort *)(*(longlong *)(lVar12 + 0x88) + lVar10);
            uVar15 = (ulonglong)uVar14;
            uVar16 = *(ushort *)(DAT_14cbd6538 + lVar10);
            if (uVar14 != uVar16) break;
            if (uVar14 == 0) goto LAB_1442773c4;
LAB_144277341:
            lVar10 = lVar10 + 2;
          }
          if ((uVar16 | uVar14) < 0x80) {
            uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
            uVar17 = (ulonglong)uVar16;
            uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
            if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar17]) goto LAB_144277341;
          }
          if (uVar14 != uVar16) goto LAB_144276fa5;
        }
      }
      else if (DAT_14cbd6540 + iVar13 != 1) goto LAB_144276fa5;
LAB_1442773c4:
      local_168 = (short *)0x14b9ad7e7;
      local_160 = (undefined2 *)CONCAT44(local_160._4_4_,0x1e);
    }
  }
  local_160._0_5_ = (uint5)(uint)local_160;
  uVar7 = FUN_14001a6c0(&local_168,1);
  local_168 = (short *)(ulonglong)uVar7;
  (**(code **)(*plVar11 + 0x2d8))(plVar11,local_16c,&local_168);
LAB_144276fa5:
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar8 != (undefined8 *)0x0;
}



// FUNCTION 144277460 FUN_144277460 body=12 status=ok
// SIG undefined FUN_144277460(void)

void FUN_144277460(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144277469. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14427746c FUN_14427746c body=29 status=ok
// SIG undefined FUN_14427746c(void)

undefined8 FUN_14427746c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427748a FUN_14427748a body=2016 status=ok
// SIG undefined FUN_14427748a(void)

void FUN_14427748a(longlong *param_1,int *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  longlong *plVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  longlong *plVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined2 *puVar28;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar17) {
      FUN_1447711aa(param_1,iVar17);
    }
    iVar22 = (int)param_1[5];
    if (iVar22 == 0) {
      iVar16 = -1;
    }
    else {
      iVar16 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar16 = iVar22 + -1;
      }
      iVar16 = iVar16 >> 5;
    }
    plVar14 = param_1 + 2;
    iVar11 = iVar22 + 1;
    iVar18 = iVar22 + 0x1f;
    if (-1 < iVar22) {
      iVar18 = iVar22;
    }
    if (iVar18 >> 5 == iVar16) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar22) {
        iVar16 = iVar22;
        if (iVar22 + 0x20U < 0xa0) {
          iVar11 = 0x80;
        }
        else {
          uVar27 = iVar22 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar12 = 4;
            if (4 < uVar27) {
              uVar12 = uVar27;
            }
          }
          else {
            uVar12 = uVar27 + (uVar27 * 3 >> 3) + 0x10;
          }
          uVar9 = (ulonglong)(uVar12 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar21 = (uint)(uVar9 + 0xf);
              if (uVar12 < 0x1ffd) {
                uVar9 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar9 + 0xf >> 4]];
              }
              else {
                uVar26 = (ulonglong)(uVar21 & 0xfffffff0);
                if (uVar26 < 0x7ff1) {
                  bVar10 = (&DAT_14c841e00)[uVar21 >> 4];
                  uVar19 = 0x32;
                  if (0x32 < bVar10) {
                    uVar19 = (ulonglong)bVar10;
                  }
                  uVar23 = 0x32 - (ulonglong)bVar10;
                  do {
                    uVar9 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar23 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar23 & 0xffffffff] & 0xf) == 0) goto LAB_144277b77;
                    lVar8 = uVar19 + 1 + uVar23;
                    uVar23 = uVar23 - 1;
                  } while (lVar8 != 0x33);
                }
                uVar9 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar9 = (ulonglong)DAT_14c841df8;
                }
                uVar9 = -uVar9 & (uVar26 + uVar9) - 1;
              }
            }
            else {
              uVar9 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar9,0);
              iVar16 = (int)param_1[5];
            }
          }
LAB_144277b77:
          iVar7 = (int)(uVar9 >> 2);
          iVar11 = -0x20;
          if ((int)uVar27 <= iVar7) {
            iVar11 = iVar7 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar14,iVar16);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar16 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar16 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar20 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar20 = plVar14;
        }
        bVar10 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar20 + (longlong)(iVar16 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar20 + (longlong)(iVar16 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar8 = (longlong)iVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar22 & 0x1f;
    puVar15 = (uint *)((longlong)plVar14 + (longlong)(iVar18 >> 5) * 4);
    *puVar15 = *puVar15 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar17 = (int)param_1[6];
    lVar8 = (longlong)iVar17;
    iVar22 = *(int *)(*param_1 + 4 + lVar8 * 0x20);
    *(int *)(param_1 + 6) = iVar22;
    iVar16 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar16;
    if (iVar16 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar22 * 0x20) = 0xffffffff;
    }
  }
  puVar15 = (uint *)(param_1 + 2);
  uVar27 = 1 << ((byte)iVar17 & 0x1f);
  puVar13 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar13 = puVar15;
  }
  iVar22 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar22 = iVar17;
  }
  puVar13[iVar22 >> 5] = puVar13[iVar22 >> 5] | uVar27;
  uVar12 = 1;
  lVar25 = *param_1;
  lVar8 = lVar8 * 0x20;
  puVar1 = (undefined8 *)(lVar25 + lVar8);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined1 *)param_3[1];
  *(undefined8 *)(lVar25 + lVar8) = *puVar2;
  uVar9 = 0;
  *puVar2 = 0;
  *(undefined4 *)(lVar25 + 8 + lVar8) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)(lVar25 + 0xc + lVar8) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  *(undefined1 *)(lVar25 + 0x10 + lVar8) = *puVar3;
  *(undefined4 *)(lVar25 + 0x18 + lVar8) = 0xffffffff;
  iVar16 = *(int *)(lVar25 + 8 + lVar8);
  iVar11 = iVar16 + -1;
  if (iVar16 == 0) {
    iVar11 = 0;
  }
  if (0 < iVar11) {
    if (iVar16 == 0) {
      puVar28 = &DAT_149dfb77a;
    }
    else {
      puVar28 = (undefined2 *)*puVar1;
    }
    lVar8 = 0;
    uVar9 = 0;
    do {
      uVar21 = ((uint)(0x19 < (ushort)puVar28[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar28[lVar8])
               - 0x20;
      uVar24 = (uint)(uVar9 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar9 ^ uVar21) & 0xff) * 4);
      uVar9 = (ulonglong)
              (uVar24 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar24 & 0xff ^ uVar21 >> 8 & 0xff) * 4));
      lVar8 = lVar8 + 1;
    } while (iVar11 != (int)lVar8);
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == 1) {
    uVar27 = 1;
  }
  else {
    iVar16 = FUN_148e23256(param_1,uVar9,puVar1);
    if (iVar16 != -1) {
      puVar2 = (undefined8 *)(*param_1 + (longlong)iVar16 * 0x20);
      if (*(longlong *)(*param_1 + (longlong)iVar16 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar2[2] = puVar1[2];
      *puVar2 = uVar4;
      puVar2[1] = uVar5;
      lVar8 = *param_1;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar8 + (longlong)(int)param_1[6] * 0x20) = iVar17;
      }
      *(undefined4 *)(lVar8 + (longlong)iVar17 * 0x20) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar8 + (longlong)iVar17 * 0x20 + 4) = uVar6;
      *(int *)(param_1 + 6) = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      if ((uint *)param_1[4] != (uint *)0x0) {
        puVar15 = (uint *)param_1[4];
      }
      puVar15[iVar22 >> 5] = puVar15[iVar22 >> 5] & ~uVar27;
      goto LAB_14427797c;
    }
    uVar27 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (3 < uVar27) {
      uVar26 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar12 = 1 << ((byte)lVar8 & 0x1f);
    }
  }
  iVar16 = iVar17;
  if (((int)uVar27 < 1) || ((int)uVar12 <= (int)param_1[9])) {
    uVar27 = (int)param_1[9] - 1U & (uint)uVar9;
    *(uint *)((longlong)puVar1 + 0x1c) = uVar27;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)(puVar1 + 3) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar27) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar27) * 4) =
         iVar17;
    goto LAB_14427797c;
  }
  *(uint *)(param_1 + 9) = uVar12;
  plVar14 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar14,0,0,4);
    uVar12 = *(uint *)(param_1 + 9);
  }
  if (uVar12 == 0) goto LAB_14427797c;
  plVar20 = param_1 + 7;
  if (uVar12 == 1) {
    if (*plVar14 != 0) {
      FUN_1446efa72(plVar14,0,0,4);
    }
LAB_1442776ce:
    uVar27 = 0;
    do {
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar20;
      }
      *(undefined4 *)((longlong)plVar14 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar27) * 4) =
           0xffffffff;
      uVar27 = uVar27 + 1;
    } while (uVar12 != uVar27);
  }
  else {
    FUN_1446efa72(plVar14,0,uVar12,4);
    if (0 < (int)uVar12) goto LAB_1442776ce;
  }
  iVar17 = (int)param_1[5];
  if (iVar17 == 0) {
    uVar9 = 0;
    uVar26 = 1;
    iVar22 = 0;
    iVar11 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = puVar15;
    }
    uVar27 = *puVar13;
    if (uVar27 == 0) {
      iVar22 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar22 = iVar17 + -1;
      }
      uVar9 = 0;
      uVar26 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar26 = uVar9;
      }
      iVar22 = 0;
      do {
        if (uVar26 == uVar9) goto LAB_14427797c;
        iVar22 = iVar22 + 0x20;
        uVar27 = puVar13[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar27 == 0);
    }
    else {
      uVar9 = 0;
      iVar22 = 0;
    }
    uVar26 = (ulonglong)(-uVar27 & uVar27);
    uVar19 = uVar26 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar11 = (iVar22 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar17 <= iVar11) {
      iVar11 = iVar17;
    }
  }
  if (iVar11 < iVar17) {
    uVar27 = 0xffffffff;
    do {
      puVar1 = (undefined8 *)(*param_1 + (longlong)iVar11 * 0x20);
      iVar17 = *(int *)(*param_1 + 8 + (longlong)iVar11 * 0x20);
      iVar18 = iVar17 + -1;
      if (iVar17 == 0) {
        iVar18 = 0;
      }
      uVar12 = 0;
      if (0 < iVar18) {
        puVar28 = &DAT_149dfb77a;
        if (iVar17 != 0) {
          puVar28 = (undefined2 *)*puVar1;
        }
        lVar8 = 0;
        uVar12 = 0;
        do {
          uVar21 = ((uint)(ushort)puVar28[lVar8] +
                   (uint)(0x19 < (ushort)puVar28[lVar8] - 0x61) * 0x20) - 0x20;
          uVar12 = uVar12 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar12 ^ uVar21) & 0xff) * 4);
          uVar12 = uVar12 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar12 & 0xff ^ uVar21 >> 8 & 0xff) * 4);
          lVar8 = lVar8 + 1;
        } while (iVar18 != (int)lVar8);
      }
      uVar19 = (longlong)(int)uVar12 & (longlong)(int)param_1[9] - 1U;
      iVar17 = (int)uVar19;
      *(int *)((longlong)puVar1 + 0x1c) = iVar17;
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar20;
      }
      *(undefined4 *)(puVar1 + 3) =
           *(undefined4 *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & uVar19) * 4);
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar20;
      }
      *(int *)((longlong)plVar14 + ((longlong)iVar17 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
      ;
      uVar27 = uVar27 & ~(uint)uVar26;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puVar15;
      }
      iVar17 = (int)param_1[5];
      iVar11 = (int)uVar9;
      lVar8 = (longlong)iVar11;
      uVar12 = puVar13[lVar8] & uVar27;
      if (uVar12 == 0) {
        iVar18 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar18 = iVar17 + -1;
        }
        iVar18 = iVar18 >> 5;
        iVar7 = iVar18;
        if (iVar18 < iVar11) {
          iVar7 = iVar11;
        }
        if (iVar18 <= iVar11) break;
        lVar25 = 0;
        while( true ) {
          iVar22 = iVar22 + 0x20;
          uVar12 = puVar13[lVar8 + lVar25 + 1];
          if (uVar12 != 0) break;
          lVar25 = lVar25 + 1;
          if (iVar7 - lVar8 == lVar25) goto LAB_14427797c;
        }
        uVar9 = (ulonglong)(iVar11 + (int)lVar25 + 1);
        uVar27 = 0xffffffff;
      }
      uVar26 = (ulonglong)(-uVar12 & uVar12);
      uVar19 = uVar26 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar11 = (iVar22 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar17);
  }
LAB_14427797c:
  *param_2 = iVar16;
  return;
}



// FUNCTION 144277c6a FUN_144277c6a body=2586 status=ok
// SIG undefined FUN_144277c6a(void)

void FUN_144277c6a(longlong *param_1,int *param_2,undefined8 *param_3)

{
  void *_Dst;
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined1 auStack_128 [32];
  int *local_108;
  uint *local_100;
  longlong local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  uint uStack_cc;
  undefined8 uStack_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  longlong local_80;
  undefined4 local_78;
  longlong local_70;
  longlong lStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = param_2;
  local_f0 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_14125fb0c(param_1,iVar15);
    }
    iVar17 = (int)param_1[5];
    if (iVar17 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar6 = iVar17 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    plVar21 = param_1 + 2;
    iVar7 = iVar17 + 1;
    iVar12 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar12 = iVar17;
    }
    if (iVar12 >> 5 == iVar6) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar17) {
        iVar6 = iVar17;
        if (iVar17 + 0x20U < 0xa0) {
          iVar7 = 0x80;
        }
        else {
          uVar16 = iVar17 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar2 = 4;
            if (4 < uVar16) {
              uVar2 = uVar16;
            }
          }
          else {
            uVar2 = uVar16 + (uVar16 * 3 >> 3) + 0x10;
          }
          uVar10 = (ulonglong)(uVar2 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar11 = (uint)(uVar10 + 0xf);
              if (uVar2 < 0x1ffd) {
                uVar10 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar10 + 0xf >> 4]];
              }
              else {
                uVar14 = (ulonglong)(uVar11 & 0xfffffff0);
                if (uVar14 < 0x7ff1) {
                  bVar5 = (&DAT_14c841e00)[uVar11 >> 4];
                  uVar18 = 0x32;
                  if (0x32 < bVar5) {
                    uVar18 = (ulonglong)bVar5;
                  }
                  uVar19 = 0x32 - (ulonglong)bVar5;
                  do {
                    uVar10 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar19 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar19 & 0xffffffff] & 0xf) == 0) goto LAB_144278504;
                    lVar4 = uVar18 + 1 + uVar19;
                    uVar19 = uVar19 - 1;
                  } while (lVar4 != 0x33);
                }
                uVar10 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar10 = (ulonglong)DAT_14c841df8;
                }
                uVar10 = -uVar10 & (uVar14 + uVar10) - 1;
              }
            }
            else {
              uVar10 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar10,0);
              iVar6 = (int)param_1[5];
            }
          }
LAB_144278504:
          iVar3 = (int)(uVar10 >> 2);
          iVar7 = -0x20;
          if ((int)uVar16 <= iVar3) {
            iVar7 = iVar3 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar21,iVar6);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar6 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar6 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar21;
        }
        bVar5 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar6 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar21 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar17 & 0x1f;
    puVar9 = (uint *)((longlong)plVar21 + (longlong)(iVar12 >> 5) * 4);
    *puVar9 = *puVar9 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar4 = (longlong)iVar15;
    iVar17 = *(int *)(*param_1 + 4 + lVar4 * 0x98);
    *(int *)(param_1 + 6) = iVar17;
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar17 * 0x98) = 0xffffffff;
    }
  }
  local_100 = (uint *)(param_1 + 2);
  uVar16 = 1 << ((byte)iVar15 & 0x1f);
  puVar9 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar9 = local_100;
  }
  iVar17 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar17 = iVar15;
  }
  local_f8 = (longlong)(iVar17 >> 5);
  puVar9[local_f8] = puVar9[local_f8] | uVar16;
  plVar21 = (longlong *)(lVar4 * 0x98 + *param_1);
  memset(&local_e8,0,0x88);
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
  local_e0 = DAT_14c844840;
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
  local_d8 = 0;
  local_d0 = 0;
  uStack_cc = uStack_cc & 0xffffff00;
  local_a0 = 0;
  local_98 = 0;
  uStack_c8 = 0;
  lStack_c0 = 0;
  local_b8 = 0;
  uStack_94 = 0x80;
  uStack_90 = 0xffffffff;
  uStack_8c = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  lStack_68 = 0;
  *plVar21 = *(longlong *)*local_f0;
  plVar21[1] = local_e8;
  FUN_14023423e(plVar21 + 2,&local_e0);
  *(undefined4 *)(plVar21 + 4) = local_d0;
  *(uint *)((longlong)plVar21 + 0x24) = uStack_cc;
  *(undefined4 *)(plVar21 + 5) = (undefined4)uStack_c8;
  *(undefined4 *)((longlong)plVar21 + 0x2c) = uStack_c8._4_4_;
  plVar21[10] = 0;
  *(undefined4 *)(plVar21 + 0xb) = 0;
  plVar21[6] = 0;
  plVar21[7] = 0;
  *(undefined8 *)((longlong)plVar21 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar21 + 100) = 0;
  if (plVar21 + 6 != &lStack_c0) {
    plVar21[6] = lStack_c0;
    lStack_c0 = 0;
    *(undefined4 *)(plVar21 + 7) = (undefined4)local_b8;
    *(undefined4 *)((longlong)plVar21 + 0x3c) = local_b8._4_4_;
    local_b8 = 0;
    if (local_a0 == 0) {
      *(undefined4 *)(plVar21 + 8) = local_b0;
      *(undefined4 *)((longlong)plVar21 + 0x44) = uStack_ac;
      *(undefined4 *)(plVar21 + 9) = uStack_a8;
      *(undefined4 *)((longlong)plVar21 + 0x4c) = uStack_a4;
    }
    plVar21[10] = local_a0;
    local_a0 = 0;
    plVar21[0xb] = CONCAT44(uStack_94,local_98);
    local_98 = 0;
    uStack_94 = 0;
    plVar21[0xc] = CONCAT44(uStack_8c,uStack_90);
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
  }
  if (local_80 == 0) {
    *(undefined4 *)(plVar21 + 0xd) = local_88;
  }
  plVar21[0xe] = local_80;
  local_80 = 0;
  *(undefined4 *)(plVar21 + 0xf) = local_78;
  plVar21[0x10] = local_70;
  local_70 = 0;
  plVar21[0x11] = lStack_68;
  lStack_68 = 0;
  local_78 = 0;
  FUN_14424725e(&lStack_c0);
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x10))();
  }
  *(undefined4 *)(plVar21 + 0x12) = 0xffffffff;
  lVar4 = *plVar21;
  uVar2 = (uint)((ulonglong)lVar4 >> 0x10);
  uVar11 = (uint)lVar4 & 0xffff;
  uVar2 = ((uint)lVar4 << 0x10 | uVar11) + (int)((ulonglong)lVar4 >> 0x20) +
          (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar11 >> 4);
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar11) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar17 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & uVar2) * 4);
    if (iVar17 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar17 * 0x98);
        if (*(longlong *)(*param_1 + (longlong)iVar17 * 0x98) == lVar4) {
          if (*(longlong *)((longlong)_Dst + 0x80) != 0) {
            FUN_1400020a8();
          }
          *(undefined4 *)((longlong)_Dst + 0x78) = 0;
          if (*(longlong *)((longlong)_Dst + 0x70) != 0) {
            FUN_1400020a8();
          }
          FUN_14424725e((longlong)_Dst + 0x30);
          if (*(longlong **)((longlong)_Dst + 0x10) != (longlong *)0x0) {
            (**(code **)(**(longlong **)((longlong)_Dst + 0x10) + 0x10))();
          }
          memmove(_Dst,plVar21,0x90);
          lVar4 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar4 + (longlong)(int)param_1[6] * 0x98) = iVar15;
          }
          *(undefined4 *)(lVar4 + (longlong)iVar15 * 0x98) = 0xffffffff;
          if (*(int *)((longlong)param_1 + 0x34) < 1) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (undefined4)param_1[6];
          }
          *(undefined4 *)(lVar4 + (longlong)iVar15 * 0x98 + 4) = uVar8;
          *(int *)(param_1 + 6) = iVar15;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          puVar9 = local_100;
          if ((uint *)param_1[4] != (uint *)0x0) {
            puVar9 = (uint *)param_1[4];
          }
          puVar9[local_f8] = puVar9[local_f8] & ~uVar16;
          iVar15 = iVar17;
          goto LAB_1442781a6;
        }
        iVar17 = *(int *)((longlong)_Dst + 0x90);
      } while (iVar17 != -1);
    }
  }
  uVar16 = 1;
  if (3 < uVar11) {
    uVar10 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar11 < 1) || ((int)uVar16 <= (int)param_1[9])) {
    uVar2 = (int)param_1[9] - 1U & uVar2;
    *(uint *)((longlong)plVar21 + 0x94) = uVar2;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(undefined4 *)(plVar21 + 0x12) =
         *(undefined4 *)
          ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4);
    plVar21 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar21 = param_1 + 7;
    }
    *(int *)((longlong)plVar21 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4) =
         iVar15;
    goto LAB_1442781a6;
  }
  *(uint *)(param_1 + 9) = uVar16;
  plVar21 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar21,0,0,4);
    uVar16 = *(uint *)(param_1 + 9);
  }
  if (uVar16 == 0) goto LAB_1442781a6;
  plVar13 = param_1 + 7;
  if (uVar16 == 1) {
    if (*plVar21 != 0) {
      FUN_1446efa72(plVar21,0,0,4);
    }
LAB_1442780a0:
    uVar2 = 0;
    do {
      plVar21 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar21 = plVar13;
      }
      *(undefined4 *)((longlong)plVar21 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
           0xffffffff;
      uVar2 = uVar2 + 1;
    } while (uVar16 != uVar2);
  }
  else {
    FUN_1446efa72(plVar21,0,uVar16,4);
    if (0 < (int)uVar16) goto LAB_1442780a0;
  }
  iVar17 = (int)param_1[5];
  if (iVar17 == 0) {
    uVar10 = 0;
    uVar14 = 1;
    iVar7 = 0;
    iVar6 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = local_100;
    }
    uVar16 = *puVar9;
    if (uVar16 == 0) {
      iVar6 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar6 = iVar17 + -1;
      }
      uVar10 = 0;
      uVar14 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar14 = uVar10;
      }
      iVar7 = 0;
      do {
        if (uVar14 == uVar10) goto LAB_1442781a6;
        iVar7 = iVar7 + 0x20;
        uVar16 = puVar9[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar10 = 0;
      iVar7 = 0;
    }
    uVar14 = (ulonglong)(-uVar16 & uVar16);
    uVar18 = uVar14 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar6 = (iVar7 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar17 <= iVar6) {
      iVar6 = iVar17;
    }
  }
  if (iVar6 < iVar17) {
    uVar16 = 0xffffffff;
    do {
      lVar4 = *param_1;
      lVar20 = (longlong)iVar6 * 0x98;
      uVar1 = *(undefined8 *)(lVar4 + lVar20);
      uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
      uVar11 = (uint)uVar1 & 0xffff;
      uVar18 = (longlong)
               (int)(((uint)uVar1 << 0x10 | uVar11) + (int)((ulonglong)uVar1 >> 0x20) +
                     (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar11 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar17 = (int)uVar18;
      *(int *)(lVar4 + 0x94 + lVar20) = iVar17;
      plVar21 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar21 = plVar13;
      }
      *(undefined4 *)(lVar4 + 0x90 + lVar20) =
           *(undefined4 *)((longlong)plVar21 + ((longlong)(int)param_1[9] - 1U & uVar18) * 4);
      plVar21 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar21 = plVar13;
      }
      *(int *)((longlong)plVar21 + ((longlong)iVar17 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
      uVar16 = ~(uint)uVar14 & uVar16;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = local_100;
      }
      iVar17 = (int)param_1[5];
      iVar6 = (int)uVar10;
      lVar4 = (longlong)iVar6;
      uVar2 = puVar9[lVar4] & uVar16;
      if (uVar2 == 0) {
        iVar12 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar12 = iVar17 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar3 = iVar12;
        if (iVar12 < iVar6) {
          iVar3 = iVar6;
        }
        if (iVar12 <= iVar6) break;
        lVar20 = 0;
        while( true ) {
          iVar7 = iVar7 + 0x20;
          uVar2 = puVar9[lVar4 + lVar20 + 1];
          if (uVar2 != 0) break;
          lVar20 = lVar20 + 1;
          if (iVar3 - lVar4 == lVar20) goto LAB_1442781a6;
        }
        uVar10 = (ulonglong)(iVar6 + (int)lVar20 + 1);
        uVar16 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar2 & uVar2);
      uVar18 = uVar14 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar6 = (iVar7 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar17);
  }
LAB_1442781a6:
  *local_108 = iVar15;
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144278686 FUN_144278686 body=92 status=ok
// SIG undefined FUN_144278686(void)

void FUN_144278686(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_14424725e(param_1 + 0x38);
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442786d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1442786e2 FUN_1442786e2 body=29 status=ok
// SIG undefined FUN_1442786e2(void)

undefined8 FUN_1442786e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144278700 FUN_144278700 body=1962 status=ok
// SIG undefined FUN_144278700(void)

int * FUN_144278700(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong *plVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar25 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar25 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar25) {
      FUN_1447711aa(param_1,iVar25);
    }
    iVar22 = (int)param_1[5];
    if (iVar22 == 0) {
      iVar15 = -1;
    }
    else {
      iVar15 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar15 = iVar22 + -1;
      }
      iVar15 = iVar15 >> 5;
    }
    plVar18 = param_1 + 2;
    iVar11 = iVar22 + 1;
    iVar17 = iVar22 + 0x1f;
    if (-1 < iVar22) {
      iVar17 = iVar22;
    }
    if (iVar17 >> 5 == iVar15) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar22) {
        iVar15 = iVar22;
        if (iVar22 + 0x20U < 0xa0) {
          iVar11 = 0x80;
        }
        else {
          uVar27 = iVar22 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar21 = 4;
            if (4 < uVar27) {
              uVar21 = uVar27;
            }
          }
          else {
            uVar21 = uVar27 + (uVar27 * 3 >> 3) + 0x10;
          }
          uVar13 = (ulonglong)(uVar21 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar6 = (uint)(uVar13 + 0xf);
              if (uVar21 < 0x1ffd) {
                uVar13 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar13 + 0xf >> 4]];
              }
              else {
                uVar19 = (ulonglong)(uVar6 & 0xfffffff0);
                if (uVar19 < 0x7ff1) {
                  bVar10 = (&DAT_14c841e00)[uVar6 >> 4];
                  uVar23 = 0x32;
                  if (0x32 < bVar10) {
                    uVar23 = (ulonglong)bVar10;
                  }
                  uVar24 = 0x32 - (ulonglong)bVar10;
                  do {
                    uVar13 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar24 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar24 & 0xffffffff] & 0xf) == 0) goto LAB_144278d8f;
                    lVar9 = uVar23 + 1 + uVar24;
                    uVar24 = uVar24 - 1;
                  } while (lVar9 != 0x33);
                }
                uVar13 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar13 = (ulonglong)DAT_14c841df8;
                }
                uVar13 = -uVar13 & (uVar19 + uVar13) - 1;
              }
            }
            else {
              uVar13 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar13,0);
              iVar15 = (int)param_1[5];
            }
          }
LAB_144278d8f:
          iVar8 = (int)(uVar13 >> 2);
          iVar11 = -0x20;
          if ((int)uVar27 <= iVar8) {
            iVar11 = iVar8 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar18,iVar15);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar15 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar15 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar20 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar20 = plVar18;
        }
        bVar10 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar20 + (longlong)(iVar15 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar20 + (longlong)(iVar15 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar9 = (longlong)iVar25;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar18 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar22 & 0x1f;
    puVar14 = (uint *)((longlong)plVar18 + (longlong)(iVar17 >> 5) * 4);
    *puVar14 = *puVar14 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar25 = (int)param_1[6];
    lVar9 = (longlong)iVar25;
    iVar22 = *(int *)(*param_1 + 4 + lVar9 * 0x20);
    *(int *)(param_1 + 6) = iVar22;
    iVar15 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar15;
    if (iVar15 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar22 * 0x20) = 0xffffffff;
    }
  }
  puVar14 = (uint *)(param_1 + 2);
  uVar27 = 1 << ((byte)iVar25 & 0x1f);
  puVar12 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar12 = puVar14;
  }
  iVar22 = iVar25 + 0x1f;
  if (-1 < iVar25) {
    iVar22 = iVar25;
  }
  puVar12[iVar22 >> 5] = puVar12[iVar22 >> 5] | uVar27;
  uVar21 = 1;
  lVar26 = *param_1;
  lVar9 = lVar9 * 0x20;
  puVar2 = (undefined8 *)(lVar26 + lVar9);
  puVar3 = (undefined8 *)param_3[1];
  *(undefined8 *)(lVar26 + lVar9) = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar26 + 8 + lVar9) = *puVar3;
  *(undefined8 *)(lVar26 + 0x10 + lVar9) = puVar3[1];
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(lVar26 + 0x18 + lVar9) = 0xffffffff;
  lVar9 = *(longlong *)(lVar26 + lVar9);
  uVar6 = (uint)((ulonglong)lVar9 >> 0x10);
  uVar16 = (uint)lVar9 & 0xffff;
  uVar6 = ((uint)lVar9 << 0x10 | uVar16) + (int)((ulonglong)lVar9 >> 0x20) +
          (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar16 >> 4);
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar16) {
    plVar18 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar18 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar18 + (ulonglong)((int)param_1[9] - 1U & uVar6) * 4);
    if (iVar15 != -1) {
      do {
        puVar3 = (undefined8 *)(*param_1 + (longlong)iVar15 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar15 * 0x20) == lVar9) {
          plVar18 = (longlong *)puVar3[2];
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            plVar20 = plVar18 + 1;
            *(int *)plVar20 = (int)*plVar20 + -1;
            UNLOCK();
            if ((int)*plVar20 == 0) {
              (**(code **)*plVar18)(plVar18);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar3[2] = puVar2[2];
          *puVar3 = uVar4;
          puVar3[1] = uVar5;
          lVar9 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar9 + (longlong)(int)param_1[6] * 0x20) = iVar25;
          }
          *(undefined4 *)(lVar9 + (longlong)iVar25 * 0x20) = 0xffffffff;
          if (*(int *)((longlong)param_1 + 0x34) < 1) {
            uVar7 = 0xffffffff;
          }
          else {
            uVar7 = (undefined4)param_1[6];
          }
          *(undefined4 *)(lVar9 + (longlong)iVar25 * 0x20 + 4) = uVar7;
          *(int *)(param_1 + 6) = iVar25;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          if ((uint *)param_1[4] != (uint *)0x0) {
            puVar14 = (uint *)param_1[4];
          }
          puVar14[iVar22 >> 5] = puVar14[iVar22 >> 5] & ~uVar27;
          iVar25 = iVar15;
          goto LAB_144278cb6;
        }
        iVar15 = *(int *)(puVar3 + 3);
      } while (iVar15 != -1);
    }
  }
  if (3 < uVar16) {
    uVar13 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
    lVar9 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar21 = 1 << ((byte)lVar9 & 0x1f);
  }
  if (((int)uVar16 < 1) || ((int)uVar21 <= (int)param_1[9])) {
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)puVar2 + 0x1c) = uVar6;
    plVar18 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar18 = param_1 + 7;
    }
    *(undefined4 *)(puVar2 + 3) =
         *(undefined4 *)
          ((longlong)plVar18 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar18 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar18 = param_1 + 7;
    }
    *(int *)((longlong)plVar18 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         iVar25;
    goto LAB_144278cb6;
  }
  *(uint *)(param_1 + 9) = uVar21;
  plVar18 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar18,0,0,4);
    uVar21 = *(uint *)(param_1 + 9);
  }
  if (uVar21 == 0) goto LAB_144278cb6;
  plVar20 = param_1 + 7;
  if (uVar21 == 1) {
    if (*plVar18 != 0) {
      FUN_1446efa72(plVar18,0,0,4);
    }
LAB_144278956:
    uVar27 = 0;
    do {
      plVar18 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar18 = plVar20;
      }
      *(undefined4 *)((longlong)plVar18 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar27) * 4) =
           0xffffffff;
      uVar27 = uVar27 + 1;
    } while (uVar21 != uVar27);
  }
  else {
    FUN_1446efa72(plVar18,0,uVar21,4);
    if (0 < (int)uVar21) goto LAB_144278956;
  }
  iVar22 = (int)param_1[5];
  if (iVar22 == 0) {
    uVar13 = 0;
    uVar19 = 1;
    iVar11 = 0;
    iVar15 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puVar14;
    }
    uVar27 = *puVar12;
    if (uVar27 == 0) {
      iVar15 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar15 = iVar22 + -1;
      }
      uVar13 = 0;
      uVar19 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar19 = uVar13;
      }
      iVar11 = 0;
      do {
        if (uVar19 == uVar13) goto LAB_144278cb6;
        iVar11 = iVar11 + 0x20;
        uVar27 = puVar12[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar27 == 0);
    }
    else {
      uVar13 = 0;
      iVar11 = 0;
    }
    uVar19 = (ulonglong)(-uVar27 & uVar27);
    uVar23 = uVar19 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar11 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar22 <= iVar15) {
      iVar15 = iVar22;
    }
  }
  if (iVar15 < iVar22) {
    uVar27 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar26 = (longlong)iVar15 * 0x20;
      uVar4 = *(undefined8 *)(lVar9 + lVar26);
      uVar21 = (uint)((ulonglong)uVar4 >> 0x10);
      uVar6 = (uint)uVar4 & 0xffff;
      uVar23 = (longlong)
               (int)(((uint)uVar4 << 0x10 | uVar6) + (int)((ulonglong)uVar4 >> 0x20) +
                     (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar6 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar22 = (int)uVar23;
      *(int *)(lVar9 + 0x1c + lVar26) = iVar22;
      plVar18 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar18 = plVar20;
      }
      *(undefined4 *)(lVar9 + 0x18 + lVar26) =
           *(undefined4 *)((longlong)plVar18 + ((longlong)(int)param_1[9] - 1U & uVar23) * 4);
      plVar18 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar18 = plVar20;
      }
      *(int *)((longlong)plVar18 + ((longlong)iVar22 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15
      ;
      uVar27 = ~(uint)uVar19 & uVar27;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puVar14;
      }
      iVar22 = (int)param_1[5];
      iVar15 = (int)uVar13;
      lVar9 = (longlong)iVar15;
      uVar21 = puVar12[lVar9] & uVar27;
      if (uVar21 == 0) {
        iVar17 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar17 = iVar22 + -1;
        }
        iVar17 = iVar17 >> 5;
        iVar8 = iVar17;
        if (iVar17 < iVar15) {
          iVar8 = iVar15;
        }
        if (iVar17 <= iVar15) break;
        lVar26 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar21 = puVar12[lVar9 + lVar26 + 1];
          if (uVar21 != 0) break;
          lVar26 = lVar26 + 1;
          if (iVar8 - lVar9 == lVar26) goto LAB_144278cb6;
        }
        uVar13 = (ulonglong)(iVar15 + (int)lVar26 + 1);
        uVar27 = 0xffffffff;
      }
      uVar19 = (ulonglong)(-uVar21 & uVar21);
      uVar23 = uVar19 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar11 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar22);
  }
LAB_144278cb6:
  *param_2 = iVar25;
  return param_2;
}



// FUNCTION 144278eaa FUN_144278eaa body=68 status=ok
// SIG undefined FUN_144278eaa(void)

void FUN_144278eaa(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1442471ff(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_144278ef0(param_1,param_2);
  return;
}



// FUNCTION 144278ef0 FUN_144278ef0 body=336 status=ok
// SIG undefined FUN_144278ef0(void)

void FUN_144278ef0(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0x88;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0xf1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0xfffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_144278f5c;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0xfffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_144278f5c:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x88)) {
      uVar3 = uVar4 / 0x88 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x88,8);
  }
  return;
}



// FUNCTION 144279040 FUN_144279040 body=1681 status=ok
// SIG undefined FUN_144279040(void)

void FUN_144279040(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  byte extraout_var;
  byte extraout_var_00;
  byte extraout_var_01;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  void *_Src;
  ulonglong uVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_418 [40];
  longlong *local_3f0;
  int local_3e4;
  void *local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  undefined4 local_3c8 [190];
  undefined1 local_d0 [136];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_418;
  if (1 < (int)param_2) {
    memset(local_3c8,0,0x2f0);
    local_3d0 = (ulonglong)param_2 * 0x88 + param_1 + -0x88;
    local_3d8 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_3c8[0] = (int)(longlong)(fVar17 + fVar17);
    plVar14 = &local_3d8;
    do {
      _Src = (void *)*plVar14;
      pvVar6 = (void *)plVar14[1];
      iVar5 = (int)plVar14[2];
      uVar15 = (int)((ulonglong)((longlong)pvVar6 - (longlong)_Src) >> 3) * -0xf0f0f0f + 1;
      local_3f0 = plVar14;
      if (iVar5 != 0) {
LAB_1442790fa:
        if (8 < (int)uVar15) {
          pvVar10 = (void *)((ulonglong)(uVar15 >> 1) * 0x88 + (longlong)_Src);
          local_3e4 = iVar5;
          local_3e0 = pvVar6;
          memcpy(local_d0,pvVar10,0x88);
          memcpy(pvVar10,_Src,0x88);
          memcpy(_Src,local_d0,0x88);
          pvVar10 = (void *)((longlong)pvVar6 + 0x88);
          pvVar9 = _Src;
LAB_14427915f:
          while (pvVar11 = (void *)((longlong)pvVar9 + 0x88), pvVar11 <= pvVar6) {
            piVar1 = (int *)((longlong)pvVar9 + 0xa0);
            if (*(int *)((longlong)_Src + 0x18) == *piVar1) goto LAB_144279200;
            pvVar9 = pvVar11;
            if (*(int *)((longlong)_Src + 0x18) < *piVar1) break;
          }
          goto LAB_144279181;
        }
        for (; plVar14 = local_3f0, pvVar10 = _Src, pvVar9 = _Src, _Src < pvVar6;
            pvVar6 = (void *)((longlong)pvVar6 + -0x88)) {
          while (pvVar11 = pvVar10, pvVar10 = (void *)((longlong)pvVar9 + 0x88), pvVar10 <= pvVar6)
          {
            if (*(int *)((longlong)pvVar11 + 0x18) == *(int *)((longlong)pvVar9 + 0xa0)) {
              FUN_1467d15c4((longlong)pvVar11 + 8,(longlong)pvVar9 + 0x90,0);
              bVar16 = (bool)(extraout_var_01 >> 7);
            }
            else {
              bVar16 = *(int *)((longlong)pvVar11 + 0x18) < *(int *)((longlong)pvVar9 + 0xa0);
            }
            pvVar9 = pvVar10;
            if (bVar16 == false) {
              pvVar10 = pvVar11;
            }
          }
          memcpy(local_d0,pvVar11,0x88);
          memcpy(pvVar11,pvVar6,0x88);
          memcpy(pvVar6,local_d0,0x88);
        }
        goto LAB_144279692;
      }
LAB_1442792f7:
      plVar14 = local_3f0;
      if (uVar15 != 0) {
        iVar5 = (int)((uVar15 - ((int)(uVar15 - 2) >> 0x1f)) + -2) >> 1;
        iVar13 = iVar5;
joined_r0x00014427931d:
        do {
          iVar8 = iVar5 * 2 + 1;
          if (iVar8 < (int)uVar15) {
            iVar7 = iVar5 * 2 + 2;
            if (iVar7 < (int)uVar15) {
              iVar2 = *(int *)((longlong)_Src + (longlong)iVar8 * 0x88 + 0x18);
              iVar3 = *(int *)((longlong)_Src + (longlong)iVar7 * 0x88 + 0x18);
              if (iVar3 == iVar2) {
                FUN_1467d15c4((longlong)_Src + (longlong)iVar7 * 0x88 + 8,
                              (longlong)_Src + (longlong)iVar8 * 0x88 + 8,0);
                bVar16 = (bool)(extraout_var >> 7);
              }
              else {
                bVar16 = iVar3 < iVar2;
              }
              if (bVar16 == false) {
                iVar8 = iVar7;
              }
            }
            pvVar6 = (void *)((longlong)_Src + (longlong)iVar5 * 0x88);
            pvVar10 = (void *)((longlong)_Src + (longlong)iVar8 * 0x88);
            iVar7 = *(int *)((longlong)_Src + (longlong)iVar8 * 0x88 + 0x18);
            iVar5 = *(int *)((longlong)_Src + (longlong)iVar5 * 0x88 + 0x18);
            if (iVar5 == iVar7) {
              iVar5 = FUN_1467d15c4((longlong)pvVar6 + 8,(longlong)pvVar10 + 8,0);
              if (iVar5 < 0) goto LAB_14427939c;
            }
            else if (iVar5 < iVar7) {
LAB_14427939c:
              memcpy(local_d0,pvVar6,0x88);
              memcpy(pvVar6,pvVar10,0x88);
              memcpy(pvVar10,local_d0,0x88);
              iVar5 = iVar8;
              goto joined_r0x00014427931d;
            }
          }
          plVar14 = local_3f0;
          bVar16 = iVar13 != 0;
          iVar5 = iVar13 + -1;
          iVar13 = iVar5;
        } while (bVar16);
        if (1 < (int)uVar15) {
          uVar12 = (ulonglong)uVar15 - 1;
          pvVar6 = (void *)(uVar12 * 0x80 + (ulonglong)uVar15 * 8 + -8 + (longlong)_Src);
          memcpy(local_d0,_Src,0x88);
          memcpy(_Src,pvVar6,0x88);
          memcpy(pvVar6,local_d0,0x88);
          if (uVar15 != 2) {
            do {
              iVar5 = 0;
              iVar8 = 1;
              iVar13 = 0;
              do {
                iVar5 = iVar5 + 2;
                iVar7 = iVar8;
                if ((longlong)iVar5 < (longlong)uVar12) {
                  lVar4 = (longlong)iVar5 * 0x88;
                  iVar2 = *(int *)((longlong)_Src + (longlong)iVar8 * 0x88 + 0x18);
                  iVar3 = *(int *)((longlong)_Src + lVar4 + 0x18);
                  if (iVar3 == iVar2) {
                    FUN_1467d15c4((longlong)_Src + lVar4 + 8,
                                  (longlong)_Src + (longlong)iVar8 * 0x88 + 8,0);
                    bVar16 = (bool)(extraout_var_00 >> 7);
                  }
                  else {
                    bVar16 = iVar3 < iVar2;
                  }
                  if (bVar16 == false) {
                    iVar7 = iVar5;
                  }
                }
                pvVar6 = (void *)((longlong)_Src + (longlong)iVar13 * 0x88);
                pvVar10 = (void *)((longlong)_Src + (longlong)iVar7 * 0x88);
                iVar5 = *(int *)((longlong)_Src + (longlong)iVar7 * 0x88 + 0x18);
                iVar13 = *(int *)((longlong)_Src + (longlong)iVar13 * 0x88 + 0x18);
                if (iVar13 == iVar5) {
                  iVar5 = FUN_1467d15c4((longlong)pvVar6 + 8,(longlong)pvVar10 + 8,0);
                  if (-1 < iVar5) break;
                }
                else if (iVar5 <= iVar13) break;
                memcpy(local_d0,pvVar6,0x88);
                memcpy(pvVar6,pvVar10,0x88);
                memcpy(pvVar10,local_d0,0x88);
                iVar5 = iVar7 * 2;
                iVar8 = iVar7 * 2 + 1;
                iVar13 = iVar7;
              } while ((longlong)iVar8 < (longlong)uVar12);
              pvVar6 = (void *)((uVar12 - 1) * 0x80 + uVar12 * 8 + -8 + (longlong)_Src);
              memcpy(local_d0,_Src,0x88);
              memcpy(_Src,pvVar6,0x88);
              memcpy(pvVar6,local_d0,0x88);
              bVar16 = 2 < uVar12;
              uVar12 = uVar12 - 1;
              plVar14 = local_3f0;
            } while (bVar16);
          }
        }
      }
LAB_144279692:
      plVar14 = plVar14 + -3;
    } while (&local_3d8 <= plVar14);
  }
  if ((local_48 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_144279200:
  iVar5 = FUN_1467d15c4((longlong)_Src + 8,(longlong)pvVar9 + 0x90,0);
  pvVar9 = pvVar11;
  if (-1 < iVar5) goto LAB_14427915f;
LAB_144279181:
  do {
    while( true ) {
      pvVar9 = pvVar10;
      pvVar10 = (void *)((longlong)pvVar9 + -0x88);
      if (pvVar10 <= _Src) goto LAB_1442791c0;
      if (*(int *)((longlong)pvVar9 + -0x70) == *(int *)((longlong)_Src + 0x18)) break;
      if (*(int *)((longlong)pvVar9 + -0x70) < *(int *)((longlong)_Src + 0x18)) goto LAB_1442791c0;
    }
    iVar5 = FUN_1467d15c4((longlong)pvVar9 + -0x80,(longlong)_Src + 8,0);
  } while (-1 < iVar5);
LAB_1442791c0:
  if (pvVar11 <= pvVar10) {
    memcpy(local_d0,pvVar11,0x88);
    memcpy(pvVar11,pvVar10,0x88);
    memcpy(pvVar10,local_d0,0x88);
    pvVar9 = pvVar11;
    goto LAB_14427915f;
  }
  memcpy(local_d0,_Src,0x88);
  memcpy(_Src,pvVar10,0x88);
  memcpy(pvVar10,local_d0,0x88);
  iVar5 = local_3e4 + -1;
  pvVar9 = (void *)((longlong)pvVar9 + -0x110);
  if ((longlong)pvVar9 - (longlong)_Src < (longlong)local_3e0 - (longlong)pvVar11) {
    if (pvVar11 < pvVar6) {
      *local_3f0 = (longlong)pvVar11;
      local_3f0[1] = (longlong)pvVar6;
      *(int *)(local_3f0 + 2) = iVar5;
      local_3f0 = local_3f0 + 3;
    }
    plVar14 = local_3f0;
    if (pvVar10 <= (void *)((longlong)_Src + 0x88U)) goto LAB_144279692;
  }
  else {
    plVar14 = local_3f0;
    if ((void *)((longlong)_Src + 0x88U) < pvVar10) {
      *local_3f0 = (longlong)_Src;
      local_3f0[1] = (longlong)pvVar9;
      *(int *)(local_3f0 + 2) = iVar5;
      plVar14 = local_3f0 + 3;
    }
    pvVar9 = pvVar6;
    _Src = pvVar11;
    if (pvVar6 <= pvVar11) goto LAB_144279692;
  }
  local_3f0 = plVar14;
  uVar15 = (int)((ulonglong)((longlong)pvVar9 - (longlong)_Src) >> 3) * -0xf0f0f0f + 1;
  pvVar6 = pvVar9;
  if (iVar5 == 0) goto LAB_1442792f7;
  goto LAB_1442790fa;
}



// FUNCTION 1442796d2 FUN_1442796d2 body=73 status=ok
// SIG undefined FUN_1442796d2(void)

void FUN_1442796d2(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14427971c FUN_14427971c body=208 status=ok
// SIG undefined FUN_14427971c(void)

void FUN_14427971c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
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



// FUNCTION 1442797ec FUN_1442797ec body=262 status=ok
// SIG undefined FUN_1442797ec(void)

void FUN_1442797ec(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14427993e FUN_14427993e body=31 status=ok
// SIG undefined FUN_14427993e(void)

undefined8 FUN_14427993e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427995e FUN_14427995e body=31 status=ok
// SIG undefined FUN_14427995e(void)

undefined8 FUN_14427995e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144279a6c FUN_144279a6c body=29 status=ok
// SIG undefined FUN_144279a6c(void)

undefined8 FUN_144279a6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144279c1e FUN_144279c1e body=101 status=ok
// SIG undefined FUN_144279c1e(void)

void FUN_144279c1e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9ad9f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144279c84 FUN_144279c84 body=101 status=ok
// SIG undefined FUN_144279c84(void)

void FUN_144279c84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9ad9f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144279cea FUN_144279cea body=134 status=ok
// SIG undefined FUN_144279cea(void)

void FUN_144279cea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9ad9f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ad980;
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
                    /* WARNING: Could not recover jumptable at 0x000144279d61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144279d70 FUN_144279d70 body=99 status=ok
// SIG undefined FUN_144279d70(void)

void FUN_144279d70(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    lVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_144279dc0;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((int)plVar3[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))
       ) {
      lVar2 = *plVar3;
      goto LAB_144279dc0;
    }
  }
  lVar2 = 0;
LAB_144279dc0:
                    /* WARNING: Could not recover jumptable at 0x000144279dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  return;
}



// FUNCTION 144279dd4 FUN_144279dd4 body=316 status=ok
// SIG undefined FUN_144279dd4(void)

undefined8
FUN_144279dd4(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144279f09;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144279f09;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_144279f09:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144279eb8;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      local_48 = param_5;
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_144279eb8;
    }
  }
  uVar6 = 0;
LAB_144279eb8:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144279f14 FUN_144279f14 body=92 status=ok
// SIG undefined FUN_144279f14(void)

void FUN_144279f14(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
    *(undefined1 *)(param_1 + 8 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0xc + lVar1) = 0;
    *(undefined1 *)(param_1 + 8 + lVar1) = *(undefined1 *)(param_2 + 8 + lVar1);
    *(undefined4 *)(param_1 + 0xc + lVar1) = *(undefined4 *)(param_2 + 0xc + lVar1);
    *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x10 + lVar1) = *(undefined4 *)(param_2 + 0x10 + lVar1);
    *(undefined4 *)(param_1 + 0x14 + lVar1) = *(undefined4 *)(param_2 + 0x14 + lVar1);
    *(undefined8 *)(param_1 + 0x18 + lVar1) = *(undefined8 *)(param_2 + 0x18 + lVar1);
    lVar1 = lVar1 + 0x20;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 144279f70 FUN_144279f70 body=31 status=ok
// SIG undefined FUN_144279f70(void)

undefined8 FUN_144279f70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427a2f6 FUN_14427a2f6 body=31 status=ok
// SIG undefined FUN_14427a2f6(void)

undefined8 FUN_14427a2f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427a316 FUN_14427a316 body=31 status=ok
// SIG undefined FUN_14427a316(void)

undefined8 FUN_14427a316(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427a336 FUN_14427a336 body=31 status=ok
// SIG undefined FUN_14427a336(void)

undefined8 FUN_14427a336(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427a356 FUN_14427a356 body=29 status=ok
// SIG undefined FUN_14427a356(void)

undefined8 FUN_14427a356(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427a4f2 FUN_14427a4f2 body=93 status=ok
// SIG undefined FUN_14427a4f2(void)

void FUN_14427a4f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f5500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ae420;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14427a550 FUN_14427a550 body=93 status=ok
// SIG undefined FUN_14427a550(void)

void FUN_14427a550(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f5500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ae420;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14427a5ae FUN_14427a5ae body=126 status=ok
// SIG undefined FUN_14427a5ae(void)

void FUN_14427a5ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f5500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ae420;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014427a61d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14427a63c FUN_14427a63c body=272 status=ok
// SIG undefined FUN_14427a63c(void)

undefined8 FUN_14427a63c(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14427a746;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14427a746;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14427a746:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14427a6fa;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) + 0x18))
                (*(longlong *)(param_1 + 0x20) + 0x30);
      uVar6 = 1;
      goto LAB_14427a6fa;
    }
  }
  uVar6 = 0;
LAB_14427a6fa:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427a74e FUN_14427a74e body=83 status=ok
// SIG undefined FUN_14427a74e(void)

undefined8 * FUN_14427a74e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b9ae6c0;
  plVar3 = (longlong *)param_1[4];
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



// FUNCTION 14427a7b6 FUN_14427a7b6 body=110 status=ok
// SIG undefined FUN_14427a7b6(void)

void FUN_14427a7b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ae6c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14427a824 FUN_14427a824 body=110 status=ok
// SIG undefined FUN_14427a824(void)

void FUN_14427a824(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ae6c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14427a892 FUN_14427a892 body=148 status=ok
// SIG undefined FUN_14427a892(void)

void FUN_14427a892(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ae6c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014427a916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14427a930 FUN_14427a930 body=20 status=ok
// SIG undefined FUN_14427a930(void)

undefined1 FUN_14427a930(longlong param_1)

{
  FUN_14427a944(param_1 + 0x18);
  return 1;
}



// FUNCTION 14427a944 FUN_14427a944 body=211 status=ok
// SIG undefined FUN_14427a944(void)

void FUN_14427a944(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xd8));
  *(int *)(lVar1 + 0xd0) = *(int *)(lVar1 + 0xd0) + 1;
  *(undefined8 *)(lVar1 + 0xb8) = 0;
  FUN_1400b22c2(&local_30,&DAT_149e02088);
  if ((longlong *)(lVar1 + 0xc0) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar1 + 0xc0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar1 + 0xc0) = local_30;
    local_30 = 0;
    *(undefined4 *)(lVar1 + 200) = local_28;
    *(undefined4 *)(lVar1 + 0xcc) = local_24;
  }
  *(undefined1 *)(lVar1 + 0xb3) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xd8));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427aa18 FUN_14427aa18 body=325 status=ok
// SIG undefined FUN_14427aa18(void)

undefined8 FUN_14427aa18(ulonglong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [44];
  uint local_3c;
  undefined8 local_38;
  uint *local_30;
  undefined8 *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb9d9a8);
  uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  if (DAT_14cb9d960 != DAT_14cb9d98c) {
    puVar4 = &DAT_14cb9d990;
    if (DAT_14cb9d998 != (undefined *)0x0) {
      puVar4 = DAT_14cb9d998;
    }
    uVar2 = *(uint *)(puVar4 + (ulonglong)(DAT_14cb9d9a0 - 1U & uVar3) * 4);
    while (uVar2 != 0xffffffff) {
      puVar1 = (uint *)(DAT_14cb9d958 + (longlong)(int)uVar2 * 0x18);
      if (*puVar1 == uVar3) {
        if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
          uVar5 = *(undefined8 *)(puVar1 + 2);
          goto LAB_14427ab2b;
        }
        break;
      }
      uVar2 = puVar1[4];
    }
  }
  local_38 = FUN_14427ab5e(DAT_14c951640);
  local_28 = &local_38;
  local_30 = &local_3c;
  local_3c = uVar3;
  FUN_143fdc894(&DAT_14cb9d958,&local_1c,&local_30,0);
  uVar5 = *(undefined8 *)(DAT_14cb9d958 + 8 + (longlong)local_1c * 0x18);
  FUN_143fc975c(uVar5,param_1);
LAB_14427ab2b:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb9d9a8);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427ab5e FUN_14427ab5e body=175 status=ok
// SIG undefined FUN_14427ab5e(void)

undefined8 FUN_14427ab5e(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14406ebd4();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427ac0e FUN_14427ac0e body=83 status=ok
// SIG undefined FUN_14427ac0e(void)

undefined8 * FUN_14427ac0e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b9ae730;
  plVar3 = (longlong *)param_1[4];
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



// FUNCTION 14427ac76 FUN_14427ac76 body=118 status=ok
// SIG undefined FUN_14427ac76(void)

void FUN_14427ac76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ae730;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14427acec FUN_14427acec body=118 status=ok
// SIG undefined FUN_14427acec(void)

void FUN_14427acec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ae730;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14427ad62 FUN_14427ad62 body=156 status=ok
// SIG undefined FUN_14427ad62(void)

void FUN_14427ad62(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ae730;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014427adee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14427ae08 FUN_14427ae08 body=20 status=ok
// SIG undefined FUN_14427ae08(void)

undefined1 FUN_14427ae08(longlong param_1)

{
  FUN_14427ae1c(param_1 + 0x18);
  return 1;
}



// FUNCTION 14427ae1c FUN_14427ae1c body=150 status=ok
// SIG undefined FUN_14427ae1c(void)

void FUN_14427ae1c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xd8));
  *(int *)(lVar1 + 0xd0) = *(int *)(lVar1 + 0xd0) + 1;
  *(undefined1 *)(lVar1 + 0xb2) = 0;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x70) != '\0')) {
    *(undefined1 *)(lVar2 + 0x70) = 0;
    local_28 = DAT_14cbb6288;
    local_30 = DAT_14cbb6280;
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x38))(lVar2 + 0x28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014427aea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xd8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427aeb4 FUN_14427aeb4 body=31 status=ok
// SIG undefined FUN_14427aeb4(void)

undefined8 FUN_14427aeb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427afc2 FUN_14427afc2 body=31 status=ok
// SIG undefined FUN_14427afc2(void)

undefined8 FUN_14427afc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427b036 FUN_14427b036 body=31 status=ok
// SIG undefined FUN_14427b036(void)

undefined8 FUN_14427b036(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427b0f6 FUN_14427b0f6 body=31 status=ok
// SIG undefined FUN_14427b0f6(void)

undefined8 FUN_14427b0f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427b116 FUN_14427b116 body=545 status=ok
// SIG undefined FUN_14427b116(void)

ulonglong FUN_14427b116(longlong *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  undefined7 uVar8;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar6 = *(int *)(param_2 + 0x88);
  iVar3 = *(int *)(param_3 + 0x88);
  uVar8 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar7 = CONCAT71(uVar8,1);
  if (iVar6 == DAT_14cbd6c38 && iVar3 != DAT_14cbd6c38) goto LAB_14427b18d;
  if (iVar6 == DAT_14cbd6c38 || iVar3 != DAT_14cbd6c38) {
    iVar4 = *(int *)(param_1[2] + 0x108);
    if (iVar3 == iVar4 || iVar6 != iVar4) {
      if (iVar3 == iVar4 && iVar6 != iVar4) goto LAB_14427b18d;
      local_48 = 0;
      uStack_40 = 0;
      FUN_1407c869a(param_2 + 0xb0,&local_48);
      if ((int)uStack_40 == (int)param_1[1]) {
        bVar11 = true;
        if (1 < (int)uStack_40) {
          lVar9 = 0;
          while( true ) {
            uVar1 = *(ushort *)(local_48 + lVar9);
            uVar5 = (uint)uVar1;
            uVar2 = *(ushort *)(*param_1 + lVar9);
            uVar10 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14427b219;
              }
              iVar6 = uVar5 - uVar10;
              goto LAB_14427b254;
            }
            if (uVar1 == 0) break;
LAB_14427b219:
            lVar9 = lVar9 + 2;
          }
          iVar6 = 0;
LAB_14427b254:
          bVar11 = iVar6 == 0;
        }
      }
      else {
        bVar11 = (int)param_1[1] + (int)uStack_40 == 1;
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_48 = 0;
      uStack_40 = 0;
      FUN_1407c869a(param_3 + 0xb0,&local_48);
      if ((int)uStack_40 == (int)param_1[1]) {
        bVar12 = true;
        if (1 < (int)uStack_40) {
          lVar9 = 0;
          while( true ) {
            uVar1 = *(ushort *)(local_48 + lVar9);
            uVar5 = (uint)uVar1;
            uVar2 = *(ushort *)(*param_1 + lVar9);
            uVar10 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14427b2bc;
              }
              iVar6 = uVar5 - uVar10;
              goto LAB_14427b2f7;
            }
            if (uVar1 == 0) break;
LAB_14427b2bc:
            lVar9 = lVar9 + 2;
          }
          iVar6 = 0;
LAB_14427b2f7:
          bVar12 = iVar6 == 0;
        }
      }
      else {
        bVar12 = (int)param_1[1] + (int)uStack_40 == 1;
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if ((bool)(bVar11 ^ 1U | bVar12)) {
        if ((bool)(bVar11 | bVar12 ^ 1U)) {
          uVar7 = CONCAT71(uVar8,*(longlong *)(param_2 + 0x70) < *(longlong *)(param_3 + 0x70));
        }
        goto LAB_14427b18d;
      }
    }
  }
  uVar7 = 0;
LAB_14427b18d:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427b338 FUN_14427b338 body=59 status=ok
// SIG undefined FUN_14427b338(void)

undefined8 * FUN_14427b338(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9af130;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427b4f2 FUN_14427b4f2 body=116 status=ok
// SIG undefined FUN_14427b4f2(void)

void FUN_14427b4f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9af130;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  FUN_1447a97f4(puVar1 + 5,param_1 + 0x28);
  return;
}


