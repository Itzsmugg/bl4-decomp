// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14427b566 FUN_14427b566 body=116 status=ok
// SIG undefined FUN_14427b566(void)

void FUN_14427b566(longlong param_1,longlong *param_2)

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



// FUNCTION 14427b5da FUN_14427b5da body=150 status=ok
// SIG undefined FUN_14427b5da(void)

void FUN_14427b5da(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9af130;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  FUN_1447a97f4(&p_Var1->Flags,param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014427b661. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14427b670 FUN_14427b670 body=102 status=ok
// SIG undefined FUN_14427b670(void)

void FUN_14427b670(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 == DAT_14cbd6c30) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    FUN_1447a97f4(local_40,param_1 + 0x28);
    FUN_148e3937a(uVar1,local_40);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427b6d8 FUN_14427b6d8 body=316 status=ok
// SIG undefined FUN_14427b6d8(void)

undefined8 FUN_14427b6d8(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14427b80e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14427b80e;
    }
    FUN_140192332(param_1 + 0x18,local_58,0);
  }
  else {
LAB_14427b80e:
    local_58[0] = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14427b79a;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      if (*param_2 == DAT_14cbd6c30) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        FUN_1447a97f4(local_58,param_1 + 0x28);
        FUN_148e3937a(uVar6,local_58);
      }
      uVar6 = 1;
      goto LAB_14427b79a;
    }
  }
  uVar6 = 0;
LAB_14427b79a:
  if ((local_58[0] != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_58[0]);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427b816 FUN_14427b816 body=29 status=ok
// SIG undefined FUN_14427b816(void)

undefined8 FUN_14427b816(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427b9b2 FUN_14427b9b2 body=93 status=ok
// SIG undefined FUN_14427b9b2(void)

void FUN_14427b9b2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9af210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14427ba10 FUN_14427ba10 body=93 status=ok
// SIG undefined FUN_14427ba10(void)

void FUN_14427ba10(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9af210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14427ba6e FUN_14427ba6e body=126 status=ok
// SIG undefined FUN_14427ba6e(void)

void FUN_14427ba6e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9af210;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014427badd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14427baf6 FUN_14427baf6 body=266 status=ok
// SIG undefined FUN_14427baf6(void)

undefined8 FUN_14427baf6(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14427bbfa;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14427bbfa;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14427bbfa:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14427bbae;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_141633c48(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_14427bbae;
    }
  }
  uVar6 = 0;
LAB_14427bbae:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427bc02 FUN_14427bc02 body=31 status=ok
// SIG undefined FUN_14427bc02(void)

undefined8 FUN_14427bc02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427bc70 FUN_14427bc70 body=29 status=ok
// SIG undefined FUN_14427bc70(void)

undefined8 FUN_14427bc70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427be0c FUN_14427be0c body=101 status=ok
// SIG undefined FUN_14427be0c(void)

void FUN_14427be0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9af360;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9af2f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14427be72 FUN_14427be72 body=101 status=ok
// SIG undefined FUN_14427be72(void)

void FUN_14427be72(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9af360;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9af2f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14427bed8 FUN_14427bed8 body=134 status=ok
// SIG undefined FUN_14427bed8(void)

void FUN_14427bed8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9af360;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9af2f0;
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
                    /* WARNING: Could not recover jumptable at 0x00014427bf4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14427bf5e FUN_14427bf5e body=65 status=ok
// SIG undefined FUN_14427bf5e(void)

void FUN_14427bf5e(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_14427c0cc(param_1 + 0x20,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427bfa0 FUN_14427bfa0 body=298 status=ok
// SIG undefined FUN_14427bfa0(void)

undefined8 FUN_14427bfa0(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_39 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14427c0c3;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14427c0c3;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_14427c0c3:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14427c074;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14427c0cc(param_1 + 0x20,&local_39,param_3,param_4);
      uVar6 = 1;
      goto LAB_14427c074;
    }
  }
  uVar6 = 0;
LAB_14427c074:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427c0cc FUN_14427c0cc body=898 status=ok
// SIG undefined FUN_14427c0cc(void)

void FUN_14427c0cc(longlong *param_1,char *param_2,int *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined2 *puVar13;
  undefined1 auStack_288 [32];
  undefined2 *local_268;
  undefined8 uStack_260;
  undefined2 *local_250;
  int local_248;
  undefined2 *local_240;
  int local_238;
  undefined8 local_230;
  longlong local_228;
  longlong *local_220;
  longlong local_210;
  undefined1 local_200 [136];
  undefined1 local_178 [304];
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_288;
  cVar3 = *param_2;
  lVar4 = *param_1;
  lVar12 = lVar4 + 0x44;
  lVar6 = FUN_140059518(lVar12);
  if ((lVar6 != 0) && ((int)param_1[1] != -1)) {
    uVar9 = FUN_140059518(lVar12);
    lVar6 = FUN_145da44aa(uVar9);
    if (lVar6 != 0) {
      FUN_146142a30(lVar6,(int)param_1[1]);
    }
  }
  if ((cVar3 == '\0') && (lVar6 = FUN_1408bb964(lVar12), lVar6 != 0)) {
    lVar7 = FUN_1403ca142();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (((*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30 && (lVar6 = *(longlong *)(lVar6 + 0x1e0), lVar6 != 0)) &&
        (lVar7 = *(longlong *)(lVar6 + 0x30), lVar7 != 0)))) {
      lVar6 = *(longlong *)(lVar6 + 0x68);
      lVar8 = FUN_14130c5c8();
      if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) && (lVar6 != 0))
         && (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
        uVar9 = FUN_140059518(lVar12);
        FUN_1409845a0(lVar6,&local_228,uVar9);
        FUN_148eff644(lVar7,local_200,&local_228,param_4);
        if (local_48 == 1) {
          FUN_1402815f4(lVar4,&local_228);
          plVar5 = *(longlong **)(local_228 + 0x3c0);
          AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 0xd));
          *(int *)(plVar5 + 0xc) = (int)plVar5[0xc] + 1;
          if (local_220 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_220 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_220)(local_220);
              LOCK();
              piVar2 = (int *)((longlong)local_220 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_220 + 0x10))(local_220);
              }
            }
          }
          *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
          if ((longlong)(int)plVar5[1] != 0) {
            lVar12 = *plVar5;
            lVar6 = (longlong)(int)plVar5[1] * 0x308;
            do {
              if (*(int *)(lVar12 + 0x228) == *param_3) {
                if (lVar12 != 0) {
                  FUN_14130d958(lVar12,local_178);
                  if (*(char *)(lVar12 + 0x288) == '\0') {
                    iVar10 = *(int *)(lVar12 + 0x28c) + 1;
LAB_14427c319:
                    *(undefined1 *)(lVar12 + 0x288) = 1;
                    *(int *)(lVar12 + 0x28c) = iVar10;
                  }
                  else {
                    iVar10 = 1;
                    if (*(int *)(lVar12 + 0x28c) == 0) goto LAB_14427c319;
                  }
                  if (*(char *)(lVar12 + 0x290) == '\0') {
                    iVar10 = 1;
                    if (*(int *)(lVar12 + 0x294) == 0) goto LAB_14427c348;
                  }
                  else {
                    iVar10 = *(int *)(lVar12 + 0x294) + 1;
LAB_14427c348:
                    *(undefined1 *)(lVar12 + 0x290) = 0;
                    *(int *)(lVar12 + 0x294) = iVar10;
                  }
                  FUN_1447a97f4(&local_228,lVar12);
                  local_230 = *(undefined8 *)(lVar12 + 0x44);
                  FUN_1400021e4(&local_230,&local_250);
                  puVar11 = &DAT_149dfb77a;
                  if (local_248 != 0) {
                    puVar11 = local_250;
                  }
                  local_268 = (undefined2 *)0x0;
                  uStack_260 = 0;
                  FUN_1400b2348(&local_228,&local_268,1);
                  puVar13 = &DAT_149dfb77a;
                  if ((int)uStack_260 != 0) {
                    puVar13 = local_268;
                  }
                  FUN_140002266(&local_240,L"%s:%s",puVar13,puVar11);
                  if (local_268 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_250 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  puVar11 = local_240;
                  if (local_238 == 0) {
                    puVar11 = &DAT_149dfb77a;
                  }
                  FUN_1446f470e(&local_250,puVar11,1);
                  FUN_148e39172(lVar4,local_250,0);
                  if (local_240 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_210 != 0) {
                    FUN_1400020a8();
                  }
                }
                break;
              }
              lVar12 = lVar12 + 0x308;
              lVar6 = lVar6 + -0x308;
            } while (lVar6 != 0);
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 0xd));
        }
        if ((local_48 & 1) != 0) {
          FUN_141072d6a(local_200);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14427c450 FUN_14427c450 body=29 status=ok
// SIG undefined FUN_14427c450(void)

undefined8 FUN_14427c450(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427c5ec FUN_14427c5ec body=101 status=ok
// SIG undefined FUN_14427c5ec(void)

void FUN_14427c5ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e1550;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9af3d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14427c652 FUN_14427c652 body=101 status=ok
// SIG undefined FUN_14427c652(void)

void FUN_14427c652(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e1550;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9af3d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14427c6b8 FUN_14427c6b8 body=134 status=ok
// SIG undefined FUN_14427c6b8(void)

void FUN_14427c6b8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e1550;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9af3d0;
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
                    /* WARNING: Could not recover jumptable at 0x00014427c72f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14427c73e FUN_14427c73e body=65 status=ok
// SIG undefined FUN_14427c73e(void)

void FUN_14427c73e(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_14427c8a0(param_1 + 0x20,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427c780 FUN_14427c780 body=287 status=ok
// SIG undefined FUN_14427c780(void)

undefined8 FUN_14427c780(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_31 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14427c899;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14427c899;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14427c899:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14427c84c;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14427c8a0(param_1 + 0x20,&local_31,param_3);
      uVar6 = 1;
      goto LAB_14427c84c;
    }
  }
  uVar6 = 0;
LAB_14427c84c:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427c8a0 FUN_14427c8a0 body=611 status=ok
// SIG undefined FUN_14427c8a0(void)

void FUN_14427c8a0(longlong *param_1,char *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined8 uStack_a0;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar3 = *param_2;
  lVar4 = *param_1;
  lVar6 = FUN_140059518(lVar4 + 0x44);
  if ((lVar6 != 0) && ((int)param_1[1] != -1)) {
    uVar7 = FUN_140059518(lVar4 + 0x44);
    lVar6 = FUN_145da44aa(uVar7);
    if (lVar6 != 0) {
      FUN_146142a30(lVar6,(int)param_1[1]);
    }
  }
  if (cVar3 == '\0') {
    FUN_1402815f4(lVar4,&local_68);
    plVar5 = *(longlong **)(local_68 + 0x3c0);
    AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 0xd));
    *(int *)(plVar5 + 0xc) = (int)plVar5[0xc] + 1;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
    *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
    if ((longlong)(int)plVar5[1] != 0) {
      lVar6 = *plVar5;
      lVar9 = (longlong)(int)plVar5[1] * 0x308;
      do {
        if (*(int *)(lVar6 + 0x228) == *param_3) {
          if (lVar6 != 0) {
            if (*(char *)(lVar6 + 0x290) == '\0') {
              iVar8 = 1;
              if (*(int *)(lVar6 + 0x294) == 0) goto LAB_14427c9fd;
            }
            else {
              iVar8 = *(int *)(lVar6 + 0x294) + 1;
LAB_14427c9fd:
              *(undefined1 *)(lVar6 + 0x290) = 0;
              *(int *)(lVar6 + 0x294) = iVar8;
            }
            FUN_1447a97f4(&local_68,lVar6);
            local_70 = *(undefined8 *)(lVar6 + 0x44);
            FUN_1400021e4(&local_70,&local_90);
            puVar10 = &DAT_149dfb77a;
            if (local_88 != 0) {
              puVar10 = local_90;
            }
            local_a8 = (undefined2 *)0x0;
            uStack_a0 = 0;
            FUN_1400b2348(&local_68,&local_a8,1);
            puVar11 = &DAT_149dfb77a;
            if ((int)uStack_a0 != 0) {
              puVar11 = local_a8;
            }
            FUN_140002266(&local_80,L"%s:%s",puVar11,puVar10);
            if (local_a8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_90 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            puVar10 = local_80;
            if (local_78 == 0) {
              puVar10 = &DAT_149dfb77a;
            }
            FUN_1446f470e(&local_90,puVar10,1);
            FUN_148e39172(lVar4,local_90,0);
            if (local_80 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_50 != 0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        lVar6 = lVar6 + 0x308;
        lVar9 = lVar9 + -0x308;
      } while (lVar9 != 0);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 0xd));
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14427cb04 FUN_14427cb04 body=29 status=ok
// SIG undefined FUN_14427cb04(void)

undefined8 FUN_14427cb04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427cb36 FUN_14427cb36 body=93 status=ok
// SIG undefined FUN_14427cb36(void)

void FUN_14427cb36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9af360;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9af440;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14427cb94 FUN_14427cb94 body=93 status=ok
// SIG undefined FUN_14427cb94(void)

void FUN_14427cb94(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9af360;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9af440;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14427cbf2 FUN_14427cbf2 body=126 status=ok
// SIG undefined FUN_14427cbf2(void)

void FUN_14427cbf2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b9af360;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9af440;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014427cc61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14427cc82 FUN_14427cc82 body=31 status=ok
// SIG undefined FUN_14427cc82(void)

undefined1 FUN_14427cc82(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_145afa3b6(*(undefined8 *)(param_1 + 0x18));
  }
  else {
    FUN_144270d58();
  }
  return 1;
}



// FUNCTION 14427cca2 FUN_14427cca2 body=29 status=ok
// SIG undefined FUN_14427cca2(void)

undefined8 FUN_14427cca2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427ccd4 FUN_14427ccd4 body=93 status=ok
// SIG undefined FUN_14427ccd4(void)

void FUN_14427ccd4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e1550;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9af4b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14427cd32 FUN_14427cd32 body=93 status=ok
// SIG undefined FUN_14427cd32(void)

void FUN_14427cd32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e1550;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9af4b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14427cd90 FUN_14427cd90 body=126 status=ok
// SIG undefined FUN_14427cd90(void)

void FUN_14427cd90(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e1550;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9af4b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014427cdff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14427ce20 FUN_14427ce20 body=31 status=ok
// SIG undefined FUN_14427ce20(void)

undefined1 FUN_14427ce20(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_145afa3b6(*(undefined8 *)(param_1 + 0x18));
  }
  else {
    FUN_144270d58();
  }
  return 1;
}



// FUNCTION 14427ce40 FUN_14427ce40 body=29 status=ok
// SIG undefined FUN_14427ce40(void)

undefined8 FUN_14427ce40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427cfdc FUN_14427cfdc body=93 status=ok
// SIG undefined FUN_14427cfdc(void)

void FUN_14427cfdc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e1800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9af520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14427d03a FUN_14427d03a body=93 status=ok
// SIG undefined FUN_14427d03a(void)

void FUN_14427d03a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e1800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9af520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14427d098 FUN_14427d098 body=126 status=ok
// SIG undefined FUN_14427d098(void)

void FUN_14427d098(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e1800;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9af520;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014427d107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14427d130 FUN_14427d130 body=298 status=ok
// SIG undefined FUN_14427d130(void)

bool FUN_14427d130(longlong param_1,char param_2,undefined8 param_3,undefined2 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14427d254;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14427d254;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_14427d254:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    bVar6 = false;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14427d208;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c))) {
      uVar2 = *(uint *)(lVar5 + 8) & 0x10200000;
      bVar6 = uVar2 == 0;
      if ((param_2 == '\0') && (uVar2 == 0)) {
        lVar5 = *(longlong *)(param_1 + 0x20);
        *(undefined2 *)(lVar5 + 0x1c0) = param_4;
        *(undefined1 *)(lVar5 + 0x1c2) = 1;
        bVar6 = true;
      }
      goto LAB_14427d208;
    }
  }
  bVar6 = false;
LAB_14427d208:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427d25c FUN_14427d25c body=29 status=ok
// SIG undefined FUN_14427d25c(void)

undefined8 FUN_14427d25c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427d40e FUN_14427d40e body=101 status=ok
// SIG undefined FUN_14427d40e(void)

void FUN_14427d40e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9af600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9af590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14427d474 FUN_14427d474 body=101 status=ok
// SIG undefined FUN_14427d474(void)

void FUN_14427d474(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9af600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9af590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14427d4da FUN_14427d4da body=134 status=ok
// SIG undefined FUN_14427d4da(void)

void FUN_14427d4da(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9af600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9af590;
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
                    /* WARNING: Could not recover jumptable at 0x00014427d551. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14427d560 FUN_14427d560 body=99 status=ok
// SIG undefined FUN_14427d560(void)

void FUN_14427d560(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    lVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14427d5b0;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((int)plVar3[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))
       ) {
      lVar2 = *plVar3;
      goto LAB_14427d5b0;
    }
  }
  lVar2 = 0;
LAB_14427d5b0:
                    /* WARNING: Could not recover jumptable at 0x00014427d5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  return;
}



// FUNCTION 14427d5c4 FUN_14427d5c4 body=316 status=ok
// SIG undefined FUN_14427d5c4(void)

undefined8
FUN_14427d5c4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
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
    if (iVar1 == 2) goto LAB_14427d6f9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14427d6f9;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_14427d6f9:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14427d6a8;
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
      goto LAB_14427d6a8;
    }
  }
  uVar6 = 0;
LAB_14427d6a8:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427d844 FUN_14427d844 body=167 status=ok
// SIG undefined FUN_14427d844(void)

byte FUN_14427d844(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_2 + 8);
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 2;
  iVar1 = *(int *)(param_2 + 0x10);
  if ((longlong)iVar1 == 0) {
    bVar5 = 0;
  }
  else {
    lVar6 = 0;
    bVar5 = 0;
    do {
      if (*(int *)(lVar2 + 0x208 + lVar6) == *(int *)*param_1) {
        bVar3 = FUN_1449a0272(lVar2 + 0x1d8 + lVar6,param_1[1]);
        bVar5 = bVar5 | bVar3;
        iVar4 = *(int *)(lVar2 + 0x1d4 + lVar6);
        if (*(char *)(lVar2 + 0x1d0 + lVar6) == '\0') {
          if (iVar4 != 0) goto LAB_14427d8c3;
          iVar4 = 0;
        }
        *(undefined1 *)(lVar2 + 0x1d0 + lVar6) = 0;
        *(int *)(lVar2 + 0x1d4 + lVar6) = iVar4 + 1;
      }
LAB_14427d8c3:
      lVar6 = lVar6 + 0x448;
    } while ((longlong)iVar1 * 0x448 - lVar6 != 0);
  }
  return bVar5 & 1;
}



// FUNCTION 14427d90a FUN_14427d90a body=12 status=ok
// SIG undefined FUN_14427d90a(void)

void FUN_14427d90a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014427d913. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14427d916 FUN_14427d916 body=29 status=ok
// SIG undefined FUN_14427d916(void)

undefined8 FUN_14427d916(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427d934 FUN_14427d934 body=29 status=ok
// SIG undefined FUN_14427d934(void)

undefined8 FUN_14427d934(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427dad0 FUN_14427dad0 body=93 status=ok
// SIG undefined FUN_14427dad0(void)

void FUN_14427dad0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9afa10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14427db2e FUN_14427db2e body=93 status=ok
// SIG undefined FUN_14427db2e(void)

void FUN_14427db2e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9afa10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14427db8c FUN_14427db8c body=126 status=ok
// SIG undefined FUN_14427db8c(void)

void FUN_14427db8c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9afa10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014427dbfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14427dc14 FUN_14427dc14 body=269 status=ok
// SIG undefined FUN_14427dc14(void)

undefined8 FUN_14427dc14(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14427dd1b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14427dd1b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14427dd1b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14427dccf;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14427dd22(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14427dccf;
    }
  }
  uVar6 = 0;
LAB_14427dccf:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427dd22 FUN_14427dd22 body=208 status=ok
// SIG undefined FUN_14427dd22(void)

void FUN_14427dd22(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  PSRWLOCK local_40;
  int local_38;
  longlong local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *param_1;
  FUN_1402815f4(uVar3,&local_50);
  lVar4 = *(longlong *)(local_50 + 0x480);
  local_40 = (PSRWLOCK)(lVar4 + 0xc0);
  local_38 = 1;
  AcquireSRWLockExclusive(local_40);
  *(int *)(lVar4 + 0xb8) = *(int *)(lVar4 + 0xb8) + 1;
  local_28 = 1;
  local_30 = lVar4;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  FUN_141504f4e(uVar3,&local_40);
  if (local_38 != 0) {
    if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014427ddd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive(local_40);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
}



// FUNCTION 14427def0 FUN_14427def0 body=31 status=ok
// SIG undefined FUN_14427def0(void)

undefined8 FUN_14427def0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427df10 FUN_14427df10 body=29 status=ok
// SIG undefined FUN_14427df10(void)

undefined8 FUN_14427df10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427e0ac FUN_14427e0ac body=93 status=ok
// SIG undefined FUN_14427e0ac(void)

void FUN_14427e0ac(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9afc40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14427e10a FUN_14427e10a body=93 status=ok
// SIG undefined FUN_14427e10a(void)

void FUN_14427e10a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9afc40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14427e168 FUN_14427e168 body=126 status=ok
// SIG undefined FUN_14427e168(void)

void FUN_14427e168(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9afc40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014427e1d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14427e1f0 FUN_14427e1f0 body=269 status=ok
// SIG undefined FUN_14427e1f0(void)

undefined8 FUN_14427e1f0(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14427e2f7;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14427e2f7;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14427e2f7:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14427e2ab;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14427e2fe(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14427e2ab;
    }
  }
  uVar6 = 0;
LAB_14427e2ab:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427e2fe FUN_14427e2fe body=246 status=ok
// SIG undefined FUN_14427e2fe(void)

void FUN_14427e2fe(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  uVar6 = FUN_141546c72();
  FUN_141176278(uVar6,&local_30);
  FUN_14581ebb2(lVar3 + 0x68,&local_30);
  FUN_141175adb(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_141175e14(lVar3);
  FUN_1402815f4(lVar3,&local_30);
  lVar3 = *(longlong *)(local_30 + 0x480);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xc0));
  *(int *)(lVar3 + 0xb8) = *(int *)(lVar3 + 0xb8) + 1;
  plVar4 = (longlong *)CONCAT44(uStack_24,local_28);
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
  if (*(char *)(lVar3 + 0x18) == '\0') {
    if (*(int *)(lVar3 + 0x1c) != 0) goto LAB_14427e3c6;
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(lVar3 + 0x1c) + 1;
  }
  *(undefined1 *)(lVar3 + 0x18) = 0;
  *(int *)(lVar3 + 0x1c) = iVar5;
LAB_14427e3c6:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xc0));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427e3f6 FUN_14427e3f6 body=31 status=ok
// SIG undefined FUN_14427e3f6(void)

undefined8 FUN_14427e3f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427e4b6 FUN_14427e4b6 body=31 status=ok
// SIG undefined FUN_14427e4b6(void)

undefined8 FUN_14427e4b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427e4d6 FUN_14427e4d6 body=95 status=ok
// SIG undefined FUN_14427e4d6(void)

int FUN_14427e4d6(longlong *param_1,uint param_2,int *param_3)

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
        if ((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
           (*(int *)(lVar2 + lVar4 * 0x28 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x20 + lVar4 * 0x28);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14427e536 FUN_14427e536 body=24 status=ok
// SIG undefined FUN_14427e536(void)

void FUN_14427e536(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014427e54a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14427e54e FUN_14427e54e body=75 status=ok
// SIG undefined FUN_14427e54e(void)

void FUN_14427e54e(longlong param_1,int param_2)

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



// FUNCTION 14427e59a FUN_14427e59a body=59 status=ok
// SIG undefined FUN_14427e59a(void)

undefined8 * FUN_14427e59a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9b00a0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427e5ea FUN_14427e5ea body=114 status=ok
// SIG undefined FUN_14427e5ea(void)

void FUN_14427e5ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b00a0;
  FUN_1447a97f4(puVar1 + 3,param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  puVar1[9] = uVar2;
  puVar1[10] = *(undefined8 *)(param_1 + 0x50);
  return;
}



// FUNCTION 14427e65c FUN_14427e65c body=114 status=ok
// SIG undefined FUN_14427e65c(void)

void FUN_14427e65c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b00a0;
  FUN_1447a97f4(puVar1 + 3,param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  puVar1[9] = uVar2;
  puVar1[10] = *(undefined8 *)(param_1 + 0x50);
  return;
}



// FUNCTION 14427e6ce FUN_14427e6ce body=150 status=ok
// SIG undefined FUN_14427e6ce(void)

void FUN_14427e6ce(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b00a0;
  FUN_1447a97f4(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x44);
  uVar4 = *(undefined4 *)(param_1 + 0x48);
  uVar5 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Flink + 4) = uVar3;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Blink = uVar4;
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Blink + 4) = uVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  p_Var1[1].EntryCount = (int)uVar2;
  p_Var1[1].ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014427e754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14427e76e FUN_14427e76e body=20 status=ok
// SIG undefined FUN_14427e76e(void)

undefined1 FUN_14427e76e(longlong param_1)

{
  FUN_14427e782(param_1 + 0x18);
  return 1;
}



// FUNCTION 14427e782 FUN_14427e782 body=589 status=ok
// SIG undefined FUN_14427e782(void)

void FUN_14427e782(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1449027d0(*(undefined8 *)(param_1 + 0x28),&local_60);
  lVar4 = local_60[0x12];
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x110));
  *(int *)(lVar4 + 0x108) = *(int *)(lVar4 + 0x108) + 1;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_58 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  bVar5 = FUN_140aa68bc(lVar4,param_1);
  if (*(int *)(lVar4 + 0x88) != *(int *)(lVar4 + 0xb4)) {
    lVar8 = lVar4 + 0xb8;
    if (*(longlong *)(lVar4 + 0xc0) != 0) {
      lVar8 = *(longlong *)(lVar4 + 0xc0);
    }
    iVar10 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar4 + 200) - 1U & (uint)bVar5) * 4);
    if (iVar10 != -1) {
      do {
        lVar8 = *(longlong *)(lVar4 + 0x80) + (longlong)iVar10 * 0x20;
        if (*(byte *)(*(longlong *)(lVar4 + 0x80) + (longlong)iVar10 * 0x20) == bVar5)
        goto LAB_14427e867;
        iVar10 = *(int *)(lVar8 + 0x18);
      } while (iVar10 != -1);
    }
  }
  lVar8 = 0;
LAB_14427e867:
  puVar7 = (undefined8 *)(lVar8 + 8);
  if (lVar8 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  local_68 = *(undefined4 *)(*(undefined8 **)(param_1 + 0x30) + 1);
  local_70 = **(undefined8 **)(param_1 + 0x30);
  puVar7 = (undefined8 *)FUN_146637100(*puVar7,&local_70,*(undefined8 *)(param_1 + 0x38));
  lVar8 = FUN_148e3ab56(*puVar7,0);
  puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined4 *)(lVar8 + 0x98);
  uVar6 = FUN_140aa68bc(lVar4,param_1);
  *puVar7 = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(puVar7 + 1,param_1);
  *(undefined4 *)(puVar7 + 6) = 4;
  *(undefined1 *)((longlong)puVar7 + 0x34) = uVar6;
  *puVar7 = &PTR_FUN_14b819a90;
  *(undefined4 *)(puVar7 + 7) = uVar3;
  plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14b9b0080;
  plVar9[2] = (longlong)puVar7;
  local_60 = puVar7;
  local_58 = plVar9;
  if (plVar9 == (longlong *)0x0) {
    FUN_14147c8e0(lVar4,&local_60);
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    FUN_14147c8e0(lVar4);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x110));
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427e9d0 FUN_14427e9d0 body=31 status=ok
// SIG undefined FUN_14427e9d0(void)

undefined8 FUN_14427e9d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427e9f0 FUN_14427e9f0 body=29 status=ok
// SIG undefined FUN_14427e9f0(void)

undefined8 FUN_14427e9f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427eb8c FUN_14427eb8c body=101 status=ok
// SIG undefined FUN_14427eb8c(void)

void FUN_14427eb8c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b01f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14427ebf2 FUN_14427ebf2 body=101 status=ok
// SIG undefined FUN_14427ebf2(void)

void FUN_14427ebf2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b01f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14427ec58 FUN_14427ec58 body=134 status=ok
// SIG undefined FUN_14427ec58(void)

void FUN_14427ec58(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b01f0;
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
                    /* WARNING: Could not recover jumptable at 0x00014427eccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14427ece8 FUN_14427ece8 body=278 status=ok
// SIG undefined FUN_14427ece8(void)

undefined8 FUN_14427ece8(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_14427edf8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14427edf8;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14427edf8:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14427edab;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14427ee00(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_14427edab;
    }
  }
  uVar6 = 0;
LAB_14427edab:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427ee00 FUN_14427ee00 body=348 status=ok
// SIG undefined FUN_14427ee00(void)

void FUN_14427ee00(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
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
  code *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = FUN_1400d7050(*param_1 + 0x30);
  if (lVar2 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
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
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      cVar1 = FUN_14002b5e0(*param_2,&DAT_14b9abbf8,4);
      if (cVar1 != '\0') {
        FUN_1410ef0a8(lVar2);
        local_28 = (undefined4)param_1[2];
        local_30 = (code *)param_1[1];
        FUN_148c392c0(lVar2);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427ef5e FUN_14427ef5e body=29 status=ok
// SIG undefined FUN_14427ef5e(void)

undefined8 FUN_14427ef5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14427ef90 FUN_14427ef90 body=93 status=ok
// SIG undefined FUN_14427ef90(void)

void FUN_14427ef90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b0260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14427efee FUN_14427efee body=93 status=ok
// SIG undefined FUN_14427efee(void)

void FUN_14427efee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b0260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14427f04c FUN_14427f04c body=126 status=ok
// SIG undefined FUN_14427f04c(void)

void FUN_14427f04c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b0260;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014427f0bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14427f0d4 FUN_14427f0d4 body=20 status=ok
// SIG undefined FUN_14427f0d4(void)

undefined1 FUN_14427f0d4(longlong param_1)

{
  FUN_14427f0e8(param_1 + 0x18);
  return 1;
}



// FUNCTION 14427f0e8 FUN_14427f0e8 body=342 status=ok
// SIG undefined FUN_14427f0e8(void)

void FUN_14427f0e8(longlong param_1,undefined8 *param_2)

{
  char cVar1;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_1400d7050(*(longlong *)(param_1 + 8) + 0x30);
  if (lVar2 != 0) {
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
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      FUN_1410ef130(lVar2 + 0xe50);
      cVar1 = FUN_14002b5e0(*param_2,"store",5);
      if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14427f254 FUN_14427f254 body=8818 status=ok
// SIG undefined FUN_14427f254(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14427f254(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined1 local_80;
  char *local_70;
  int local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = "Standard";
  local_68 = 8;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6298 = (ulonglong)uVar3;
  local_70 = "PrologueSkip";
  local_68 = 0xc;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd62a0 = (ulonglong)uVar3;
  local_70 = "UltimateVaultHunterSkip";
  local_68 = 0x17;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd62a8 = (ulonglong)uVar3;
  local_70 = "SkipToDLC_Cowbell";
  local_68 = 0x11;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd62b0 = (ulonglong)uVar3;
  local_70 = "SkipToDLC_Harmonica";
  local_68 = 0x13;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd62b8 = (ulonglong)uVar3;
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd62c0 = (ulonglong)uVar3;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_70,&DAT_14cbd62c8);
  if (cVar2 == '\0') {
    _DAT_14cbd62c8 = 0;
    uRam000000014cbd62d0 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbd62d8 = 0x47efffffe0000000;
  _DAT_14cbd62e0 = 0x47efffffe0000000;
  _DAT_14cbd62e8 = 0x47efffffe0000000;
  _DAT_14cbd62f0 = 0x47efffffe0000000;
  _DAT_14cbd62f8 = 0x47efffffe0000000;
  _DAT_14cbd6300 = 0x47efffffe0000000;
  _DAT_14cbd6308 = 0x47efffffe0000000;
  _DAT_14cbd6310 = 0x47efffffe0000000;
  local_70 = "Cash";
  local_68 = 4;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6318 = (ulonglong)uVar3;
  FUN_1400b22c2(&DAT_14cbd6320,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_144268f40);
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6334 = 0;
  FUN_14052b5e0(&DAT_14cbd6330,"PlayerAwareness",0);
  _DAT_14cbd6340 = "PlayerAwareness";
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6348 = (ulonglong)uVar3;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd6350 = (ulonglong)uVar3;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6358 = (ulonglong)uVar3;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6360 = (ulonglong)uVar3;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6368 = (ulonglong)uVar3;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6370 = (ulonglong)uVar3;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6378 = (ulonglong)uVar3;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6380 = (ulonglong)uVar3;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6388 = (ulonglong)uVar3;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6390 = (ulonglong)uVar3;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6398 = (ulonglong)uVar3;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd63a0 = (ulonglong)uVar3;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd63a8 = (ulonglong)uVar3;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd63b0 = (ulonglong)uVar3;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd63b8 = (ulonglong)uVar3;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd63c0 = (ulonglong)uVar3;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd63c8 = (ulonglong)uVar3;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd63d0 = (ulonglong)uVar3;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd63d8 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14cbd63e0,L"UNSET",1);
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
  FUN_1446f470e(&DAT_14cbd63e8,L"Party",1);
  FUN_1446f470e(&DAT_14cbd63f0,&DAT_149e063b2,1);
  local_70 = "projectile";
  local_68 = 10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd63f8 = (ulonglong)uVar3;
  local_70 = "barrel";
  local_68 = 6;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd6400 = (ulonglong)uVar3;
  local_70 = "confirm";
  local_68 = 7;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd6408 = (ulonglong)uVar3;
  local_70 = "QuitToMain";
  local_68 = 10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6410 = (ulonglong)uVar3;
  local_70 = "QuitToTitle";
  local_68 = 0xb;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6418 = (ulonglong)uVar3;
  _DAT_14cbd6420 = 0;
  uRam000000014cbd6428 = 0;
  _DAT_14cbd6430 = 0;
  DAT_14cbd6438 = 0;
  uRam000000014cbd6440 = 0;
  FUN_1446ddda2(&DAT_14cbd6420,"ApplyUpdate",0);
  atexit((_func_5014 *)&LAB_144268f51);
  local_70 = "Use";
  local_68 = 3;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6448 = (ulonglong)uVar3;
  local_70 = "Sight";
  local_68 = 5;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6450 = (ulonglong)uVar3;
  local_70 = "TargetLock";
  local_68 = 10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6458 = (ulonglong)uVar3;
  FUN_140056680(&DAT_14cbd6460,L"GoreStump_");
  atexit((_func_5014 *)&LAB_14426975f);
  FUN_140056680(&DAT_14cbd6470,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_144269770);
  FUN_140056680(&DAT_14cbd6480,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_144269781);
  FUN_140056680(&DAT_14cbd6490,L"GoreFX_");
  atexit((_func_5014 *)&LAB_144269792);
  FUN_1446f470e(&DAT_14cbd64a0,L"LIMB_GORED",1);
  _DAT_14cbd64a8 = 0x4072c00000000000;
  _DAT_14cbd64b0 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbd64b8,L"body",1);
  FUN_1446f470e(&DAT_14cbd64c0,L"title_card",1);
  FUN_1400b22c2(&DAT_14cbd64c8,"tint_siren");
  atexit((_func_5014 *)&LAB_1442697a3);
  FUN_1400b22c2(&DAT_14cbd64d8,"tint_health");
  atexit((_func_5014 *)&LAB_1442697b4);
  _DAT_14cbd64ec = 0;
  FUN_14052b5e0(&DAT_14cbd64e8,"character",0);
  _DAT_14cbd64f8 = 0;
  FUN_14052b5e0(&DAT_14cbd64f4,"profile",0);
  FUN_1400b22c2(&DAT_14cbd6500,"#echo_logs_region_unknown");
  atexit((_func_5014 *)&LAB_1442697c7);
  iVar6 = DAT_14cbd6508 + -1;
  if (DAT_14cbd6508 == 0) {
    iVar6 = 0;
  }
  FUN_1446f82e2(&local_70,iVar6,DAT_14cbd6500,1);
  DAT_14cbd6510 = local_70;
  FUN_1400b22c2(&DAT_14cbd6518,"vaulthunter");
  atexit((_func_5014 *)&LAB_1442697d8);
  FUN_1400b22c2(&DAT_14cbd6528,"general");
  atexit((_func_5014 *)&LAB_1442697e9);
  FUN_1400b22c2(&DAT_14cbd6538,"arjay");
  atexit((_func_5014 *)&LAB_1442697fa);
  FUN_1400b22c2(&DAT_14cbd6548,"_#parent");
  atexit((_func_5014 *)&LAB_14426980b);
  local_70 = "lostloot";
  local_68 = 8;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6558 = 0;
  uRam000000014cbd6560 = 0;
  _DAT_14cbd6568 = 0;
  DAT_14cbd6570 = 0;
  uRam000000014cbd6578 = 0;
  FUN_1446ddda2(&DAT_14cbd6558,"lostloot",0);
  atexit((_func_5014 *)&LAB_14426cf21);
  _DAT_14cbd6580 = 0;
  uRam000000014cbd6588 = 0;
  _DAT_14cbd6590 = 0;
  DAT_14cbd6598 = 0;
  uRam000000014cbd65a0 = 0;
  FUN_1446ddda2(&DAT_14cbd6580,"oak.lostloot",0);
  atexit((_func_5014 *)&LAB_14426cf32);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_88 = 0;
  FUN_140bd5914(&DAT_14cbd65a8,L"oak.enemyradar.enable_radar_tuning",&local_70,
                L"Allows you to use console commands to override the yaml settings on the radar.");
  atexit(FUN_14426d3a6);
  local_70._0_4_ = 0x41100000;
  local_88 = 0;
  FUN_140a6b41e(&DAT_14cbd65c0,L"oak.enemyradar.radar_falloff_power",&local_70,
                L"Sets the log power of the radar positioning. 0 = linear.");
  atexit(FUN_14426d3eb);
  local_70._0_4_ = 0x32;
  local_88 = 0;
  FUN_14078dbce(&DAT_14cbd65d8,L"oak.enemyradar.radar_edge_distance",&local_70,
                L"How far away the edge of the radar is in meters");
  atexit(FUN_14426d430);
  local_70 = (char *)CONCAT44(local_70._4_4_,0x46);
  local_88 = 0;
  FUN_14078dbce(&DAT_14cbd65f0,L"oak.enemyradar.far_threshold",&local_70,
                L"How far away actors need to be on the map before they are ignored (in meters)");
  atexit(FUN_14426d475);
  local_70 = "Use";
  local_68 = 3;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6640 = (ulonglong)uVar3;
  local_70 = "StopUse";
  local_68 = 7;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6648 = (ulonglong)uVar3;
  local_70 = "SecondaryUse";
  local_68 = 0xc;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6650 = (ulonglong)uVar3;
  local_70 = "StopSecondaryUse";
  local_68 = 0x10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6658 = (ulonglong)uVar3;
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.State.IsReady";
  local_68 = 0x19;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_1410291be(&DAT_14cbd6660,uVar5,uVar4,1);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.State.IsActive";
  local_68 = 0x1a;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_1410291be(&DAT_14cbd6678,uVar5,uVar4,1);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.State.IsActive2";
  local_68 = 0x1b;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_1410291be(&DAT_14cbd6690,uVar5,uVar4,1);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.State.IsOnCooldown";
  local_68 = 0x1e;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_1410291be(&DAT_14cbd66a8,uVar5,uVar4,1);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.State.IsDisabled";
  local_68 = 0x1c;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_1410291be(&DAT_14cbd66c0,uVar5,uVar4,1);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.State.CannotUse";
  local_68 = 0x1b;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_1410291be(&DAT_14cbd66d8,uVar5,uVar4,1);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.State.IsVisible";
  local_68 = 0x1b;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_1410291be(&DAT_14cbd66f0,uVar5,uVar4,1);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.State.ShowCharges";
  local_68 = 0x1d;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_1410291be(&DAT_14cbd6708,uVar5,uVar4,1);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.Data.Cooldown";
  local_68 = 0x19;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_1410291be(&DAT_14cbd6720,uVar5,uVar4,0);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.Data.Duration";
  local_68 = 0x19;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_1410291be(&DAT_14cbd6738,uVar5,uVar4,0);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.Data.Resource";
  local_68 = 0x19;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_1410291be(&DAT_14cbd6750,uVar5,uVar4,0);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.Data.Charges";
  local_68 = 0x18;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_1410291be(&DAT_14cbd6768,uVar5,uVar4,0);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.Data.ChargesRegen";
  local_68 = 0x1d;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_1410291be(&DAT_14cbd6780,uVar5,uVar4,0);
  local_70 = "ActionSkill.Data.LowDurationThreshold";
  local_68 = 0x25;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6798 = (ulonglong)uVar3;
  DAT_14cbd67a0 = 0;
  _DAT_14cbd67a8 = DAT_14cb92fd0;
  DAT_14cb92fd0 = &DAT_14cbd6798;
  local_70 = "ActionSkill.Data.HoldDurationOverride";
  local_68 = 0x25;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd67b0 = (ulonglong)uVar3;
  DAT_14cbd67b8 = 0;
  _DAT_14cbd67c0 = DAT_14cb92fd0;
  DAT_14cb92fd0 = &DAT_14cbd67b0;
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.Alternate.State.ActivateAlternateMode";
  local_68 = 0x31;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_1410291be(&DAT_14cbd67c8,uVar5,uVar4,1);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.Alternate.State.IsReady";
  local_68 = 0x23;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_1410291be(&DAT_14cbd67e0,uVar5,uVar4,1);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.Alternate.State.IsActive";
  local_68 = 0x24;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_1410291be(&DAT_14cbd67f8,uVar5,uVar4,1);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.Alternate.State.IsOnCooldown";
  local_68 = 0x28;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_1410291be(&DAT_14cbd6810,uVar5,uVar4,1);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.Alternate.State.IsDisabled";
  local_68 = 0x26;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_1410291be(&DAT_14cbd6828,uVar5,uVar4,1);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.Alternate.State.UseAltSkillIcon";
  local_68 = 0x2b;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88._0_1_ = 1;
  FUN_1410291be(&DAT_14cbd6840,uVar5,uVar4,1);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.Alternate.State.ShowCharges";
  local_68 = 0x27;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88._0_1_ = 0;
  FUN_1410291be(&DAT_14cbd6858,uVar5,uVar4,1);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.Alternate.Data.Cooldown";
  local_68 = 0x23;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88._0_1_ = 0;
  FUN_1410291be(&DAT_14cbd6870,uVar5,uVar4,0);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.Alternate.Data.Duration";
  local_68 = 0x23;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88._0_1_ = 0;
  FUN_1410291be(&DAT_14cbd6888,uVar5,uVar4,0);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.Alternate.Data.Charges";
  local_68 = 0x22;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88._0_1_ = 0;
  FUN_1410291be(&DAT_14cbd68a0,uVar5,uVar4,0);
  local_70 = "Action Skill";
  local_68 = 0xc;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkill.Alternate.Data.ChargesRegen";
  local_68 = 0x27;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88._0_1_ = 0;
  FUN_1410291be(&DAT_14cbd68b8,uVar5,uVar4,0);
  local_70 = "ActionSkill.Alternate.Data.LowDurationThreshold";
  local_68 = 0x2f;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd68d0 = (ulonglong)uVar3;
  DAT_14cbd68d8 = 0;
  _DAT_14cbd68e0 = DAT_14cb92fd0;
  DAT_14cb92fd0 = &DAT_14cbd68d0;
  local_70 = "ActionSkill.Alternate.Data.HoldDurationOverride";
  local_68 = 0x2f;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd68e8 = (ulonglong)uVar3;
  DAT_14cbd68f0 = 0;
  _DAT_14cbd68f8 = DAT_14cb92fd0;
  DAT_14cb92fd0 = &DAT_14cbd68e8;
  local_70 = "Vault Hunter Bar";
  local_68 = 0x10;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "VaultHunterBar.Data.Value";
  local_68 = 0x19;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88._0_1_ = 0;
  FUN_1410291be(&DAT_14cbd6900,uVar5,uVar4,0);
  local_70 = "Vault Hunter Bar";
  local_68 = 0x10;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "VaultHunterBar.Data.NumSegments";
  local_68 = 0x1f;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88._0_1_ = 0;
  FUN_1410291be(&DAT_14cbd6918,uVar5,uVar4,0);
  local_70 = "VaultHunterBar.Data.LowValueThreshold";
  local_68 = 0x25;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6930 = (ulonglong)uVar3;
  DAT_14cbd6938 = 0;
  _DAT_14cbd6940 = DAT_14cb92fd0;
  DAT_14cb92fd0 = &DAT_14cbd6930;
  local_70 = "Action Skill Screen Buttons";
  local_68 = 0x1b;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkillScreenButtons.State.IsVisible";
  local_68 = 0x28;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88._0_1_ = 0;
  FUN_1410291be(&DAT_14cbd6948,uVar5,uVar4,1);
  local_70 = "Action Skill Screen Buttons";
  local_68 = 0x1b;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkillScreenButtons.State.LeftChoiceSelected";
  local_68 = 0x31;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88._0_1_ = 0;
  FUN_1410291be(&DAT_14cbd6960,uVar5,uVar4,1);
  local_70 = "Action Skill Screen Buttons";
  local_68 = 0x1b;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "ActionSkillScreenButtons.State.RightChoiceSelected";
  local_68 = 0x32;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88._0_1_ = 0;
  FUN_1410291be(&DAT_14cbd6978,uVar5,uVar4,1);
  local_70 = "Gadget";
  local_68 = 6;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "Gadget.State.IsReady";
  local_68 = 0x14;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88._0_1_ = 0;
  FUN_1410291be(&DAT_14cbd6990,uVar5,uVar4,1);
  local_70 = "Gadget";
  local_68 = 6;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "Gadget.State.IsActive";
  local_68 = 0x15;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88._0_1_ = 0;
  FUN_1410291be(&DAT_14cbd69a8,uVar5,uVar4,1);
  local_70 = "Gadget";
  local_68 = 6;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "Gadget.State.IsOnCooldown";
  local_68 = 0x19;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88._0_1_ = 0;
  FUN_1410291be(&DAT_14cbd69c0,uVar5,uVar4,1);
  local_70 = "Gadget";
  local_68 = 6;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "Gadget.State.IsDisabled";
  local_68 = 0x17;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88._0_1_ = 0;
  FUN_1410291be(&DAT_14cbd69d8,uVar5,uVar4,1);
  local_70 = "Gadget";
  local_68 = 6;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "Gadget.State.CannotUse";
  local_68 = 0x16;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88._0_1_ = 0;
  FUN_1410291be(&DAT_14cbd69f0,uVar5,uVar4,1);
  local_70 = "Gadget";
  local_68 = 6;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "Gadget.State.IsVisible";
  local_68 = 0x16;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88._0_1_ = 0;
  FUN_1410291be(&DAT_14cbd6a08,uVar5,uVar4,1);
  local_70 = "Gadget";
  local_68 = 6;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "Gadget.Data.Cooldown";
  local_68 = 0x14;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88._0_1_ = 0;
  FUN_1410291be(&DAT_14cbd6a20,uVar5,uVar4,0);
  local_70 = "Gadget";
  local_68 = 6;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "Gadget.Data.Charges";
  local_68 = 0x13;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88._0_1_ = 0;
  FUN_1410291be(&DAT_14cbd6a38,uVar5,uVar4,0);
  local_70 = "Gadget";
  local_68 = 6;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_70 = "Gadget.Data.ChargesRegen";
  local_68 = 0x18;
  local_64 = 0;
  uVar5 = FUN_14001a6c0(&local_70,1);
  local_80 = 0;
  local_88 = (uint)local_88._1_3_ << 8;
  FUN_1410291be(&DAT_14cbd6a50,uVar5,uVar4,0);
  local_70 = "unknown_gadget";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd6a68 = (ulonglong)uVar3;
  FUN_1400b22c2(&DAT_14cbd6a70,"grapple_none");
  atexit((_func_5014 *)&LAB_14426d4cb);
  FUN_1400b22c2(&DAT_14cbd6a80,"grapple_out_of_range");
  atexit((_func_5014 *)&LAB_14426d4dc);
  FUN_1400b22c2(&DAT_14cbd6a90,"grapple_activated");
  atexit((_func_5014 *)&LAB_14426d4ed);
  _DAT_14cbd6aa0 = 0;
  uRam000000014cbd6aa8 = 0;
  _DAT_14cbd6ab0 = 0;
  DAT_14cbd6ab8 = 0;
  uRam000000014cbd6ac0 = 0;
  FUN_1446ddda2(&DAT_14cbd6aa0,"Matchmaking_AutomaticRegionText",0);
  atexit((_func_5014 *)&LAB_14426d4fe);
  _DAT_14cbd6ac8 = 0;
  uRam000000014cbd6ad0 = 0;
  _DAT_14cbd6ad8 = 0;
  DAT_14cbd6ae0 = 0;
  uRam000000014cbd6ae8 = 0;
  FUN_1446ddda2(&DAT_14cbd6ac8,"Matchmaking_ManualRegionText",0);
  atexit((_func_5014 *)&LAB_14426d50f);
  _DAT_14cbd6af0 = 0;
  uRam000000014cbd6af8 = 0;
  _DAT_14cbd6b00 = 0;
  DAT_14cbd6b08 = 0;
  uRam000000014cbd6b10 = 0;
  FUN_1446ddda2(&DAT_14cbd6af0,"PingDisplayText",0);
  atexit((_func_5014 *)&LAB_14426d520);
  _DAT_14cbd6b18 = 0;
  uRam000000014cbd6b20 = 0;
  _DAT_14cbd6b28 = 0;
  DAT_14cbd6b30 = 0;
  uRam000000014cbd6b38 = 0;
  FUN_1446ddda2(&DAT_14cbd6b18,"GoodPingDisplayText",0);
  atexit((_func_5014 *)&LAB_14426d531);
  _DAT_14cbd6b40 = 0;
  uRam000000014cbd6b48 = 0;
  _DAT_14cbd6b50 = 0;
  DAT_14cbd6b58 = 0;
  uRam000000014cbd6b60 = 0;
  FUN_1446ddda2(&DAT_14cbd6b40,"OkPingDisplayText",0);
  atexit((_func_5014 *)&LAB_14426d542);
  _DAT_14cbd6b68 = 0;
  uRam000000014cbd6b70 = 0;
  _DAT_14cbd6b78 = 0;
  DAT_14cbd6b80 = 0;
  uRam000000014cbd6b88 = 0;
  FUN_1446ddda2(&DAT_14cbd6b68,"BadPingDisplayText",0);
  atexit((_func_5014 *)&LAB_14426d553);
  _DAT_14cbd6b94 = 0;
  _DAT_14cbd6b98 = 0;
  FUN_14052b5e0(&DAT_14cbd6b90,&DAT_14b44366c,0);
  local_88 = 1;
  FUN_14153156c(&DAT_14cbd6ba0,L"OakUI.ItemCard.GatherThumbnails",&DAT_14cbd6bb0,
                L"Whether to gather thumbnails in the item card logic");
  atexit(FUN_14426d56e);
  FUN_1446f470e(&DAT_14cbd6bb8,L"Waypoint");
  FUN_1400b22c2(&DAT_14cbd6bc0,&DAT_14b978ebf);
  atexit((_func_5014 *)&LAB_14426e1f2);
  FUN_140056680(&DAT_14cbd6bd0,L"available");
  atexit((_func_5014 *)&LAB_14426e217);
  FUN_140056680(&DAT_14cbd6be0,L"synced");
  atexit((_func_5014 *)&LAB_14426e228);
  FUN_140056680(&DAT_14cbd6bf0,L"offline");
  atexit((_func_5014 *)&LAB_14426e239);
  FUN_140056680(&DAT_14cbd6c00,L"incompatible");
  atexit((_func_5014 *)&LAB_14426e24a);
  FUN_140056680(&DAT_14cbd6c10,L"conflict");
  atexit((_func_5014 *)&LAB_14426e25b);
  FUN_140056680(&DAT_14cbd6c20,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_14426e26c);
  local_70 = "confirm";
  local_68 = 7;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd6c30 = (ulonglong)uVar3;
  _DAT_14cbd6c38 = 0;
  uRam000000014cbd6c40 = 0;
  _DAT_14cbd6c48 = 0;
  DAT_14cbd6c50 = 0;
  uRam000000014cbd6c58 = 0;
  FUN_1446ddda2(&DAT_14cbd6c38,"CrossSaveCharacter",0);
  atexit((_func_5014 *)&LAB_14426e27d);
  FUN_1400b22c2(&DAT_14cbd6c60,"autoregion");
  atexit((_func_5014 *)&LAB_1442724c7);
  local_70 = "MATCHMAKING";
  local_68 = 0xb;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_14acb7d20;
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
  *(longlong *)(local_70 + 0x10) = lVar7;
  *(undefined ***)local_70 = &PTR_FUN_14acb7cb0;
  *(code **)(local_70 + 0x18) = FUN_148e39f52;
  local_88 = 0;
  FUN_141819a96(&DAT_14cbd6c70,L"oak.ui.matchmaking",&DAT_149dfb77a,&local_70);
  if (local_68 != 0) {
    if (local_70 == (char *)0x0) goto LAB_1442813b0;
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_1442813b0:
  atexit(FUN_14427312c);
  _DAT_14cbd6c84 = 0;
  FUN_14052b5e0(&DAT_14cbd6c80,"Missions",0);
  _DAT_14cbd6c90 = 0;
  FUN_14052b5e0(&DAT_14cbd6c8c,"Timer",0);
  _DAT_14cbd6c9c = 0;
  FUN_14052b5e0(&DAT_14cbd6c98,"Percent",0);
  _DAT_14cbd6cac = 0;
  FUN_14052b5e0(&DAT_14cbd6ca8,"trait_mission",0);
  _DAT_14cbd6cb8 = "trait_mission";
  _DAT_14cbd6cc4 = 0;
  FUN_14052b5e0(&DAT_14cbd6cc0,"weekly_trait_mission",0);
  _DAT_14cbd6cd0 = "weekly_trait_mission";
  FUN_1446f470e(&DAT_14cbd6cd8,L"dlc_upsell_db",1);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442814da FUN_1442814da body=2892 status=ok
// SIG undefined FUN_1442814da(void)

void FUN_1442814da(longlong param_1)

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
  uVar4 = FUN_140495e96();
  lVar5 = FUN_1404960a8(uVar4);
  if (lVar5 == 0) goto LAB_144281d4a;
  if (*(longlong *)(param_1 + 0x18) == 0) {
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
    *local_60 = &PTR_FUN_14b9b33f0;
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
    puVar2[4] = FUN_148e45386;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "FOakUIEvent_RefreshMissionLog";
    local_48 = 0x1d;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x18) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_144281675;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_144281675:
  if (*(longlong *)(param_1 + 0x20) == 0) {
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
    *local_60 = &PTR_FUN_14b9b33f0;
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
    puVar2[4] = FUN_148e45462;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "FOakUIEvent_TrackMission";
    local_48 = 0x18;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x20) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_1442817d3;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1442817d3:
  if (*(longlong *)(param_1 + 0x28) == 0) {
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
    *local_60 = &PTR_FUN_14b9b33f0;
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
    puVar2[4] = FUN_148e454f8;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "FOakUIEvent_ReplayMissionWarning";
    local_48 = 0x20;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x28) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_144281931;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_144281931:
  if (*(longlong *)(param_1 + 0x40) == 0) {
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
    *local_60 = &PTR_FUN_14b9b33f0;
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
    puVar2[4] = FUN_144282028;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "FOakUIEvent_BigMap_ViewInLog";
    local_48 = 0x1c;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x40) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_144281a8f;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_144281a8f:
  if (*(longlong *)(param_1 + 0x38) == 0) {
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
    *local_60 = &PTR_FUN_14b9b33f0;
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
    puVar2[4] = FUN_148e45668;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "FOakUIEvent_AbandonContractWarning";
    local_48 = 0x22;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x38) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_144281bed;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_144281bed:
  if (*(longlong *)(param_1 + 0x48) == 0) {
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
    *local_60 = &PTR_FUN_14b9b33f0;
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
    puVar2[4] = FUN_144282388;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "FOakUIEvent_MissionLog_ClearPip";
    local_48 = 0x1f;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x48) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_144281d4a;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_144281d4a:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144282028 FUN_144282028 body=863 status=ok
// SIG undefined FUN_144282028(void)

void FUN_144282028(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
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
  longlong local_40;
  longlong *local_38;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_2 + 8) == 0) goto LAB_1442820a0;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 8);
  lVar6 = FUN_1400d7050(param_1 + 0x30);
  if (lVar6 == 0) goto LAB_1442820a0;
  if (DAT_14cbadd90 == 0) {
    local_60 = &local_30;
    local_30 = FUN_141030f22;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_1459f2e4c;
    local_68 = &LAB_148c39de3;
    local_70 = &LAB_1457a9eb2;
    local_78 = L"Game";
    local_80 = 0;
    local_88 = 0x10000004;
    local_90 = 0x10;
    local_98 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1442820a0;
  lVar7 = *(longlong *)(lVar6 + 0x430);
  if (lVar7 == 0) {
LAB_144282381:
    lVar9 = 0;
  }
  else {
    if (DAT_14cae9568 == 0) {
      local_60 = &local_30;
      local_30 = FUN_1417de738;
      local_50 = (code *)&LAB_145893408;
      local_58 = &LAB_1458cbbd2;
      local_68 = &LAB_147ba21f1;
      local_70 = &LAB_1463e9233;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x1000000c;
      local_90 = 8;
      local_98 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar7 = *(longlong *)(lVar6 + 0x430);
      if (lVar7 == 0) goto LAB_144282381;
    }
    lVar9 = 0;
    if ((DAT_14cae9568 != 0) && (lVar3 = *(longlong *)(lVar7 + 0x10), lVar3 != 0)) {
      if (*(int *)(lVar3 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) goto LAB_144282381;
      lVar9 = 0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          == DAT_14cae9568 + 0x30) {
        lVar9 = lVar7;
      }
    }
  }
  lVar7 = FUN_140ade8e4(lVar9);
  if ((lVar7 != 0) && (lVar6 = FUN_140e06fb1(lVar6), lVar6 != 0)) {
    FUN_1405f62be(lVar6,&local_30);
    if (local_30 != (code *)0x0) {
      (**(code **)(*(longlong *)local_30 + 0x78))(local_30,&local_40,(undefined8 *)(param_2 + 8));
      if ((local_40 != 0) && (lVar6 = FUN_1405f6336(), lVar6 != 0)) {
        lVar6 = FUN_1405f6336(local_40);
        uVar8 = FUN_140fa5e64();
        cVar4 = FUN_1448093f4(lVar6,uVar8);
        if ((lVar6 != 0) && (cVar4 != '\0')) {
          bVar5 = FUN_1407a73f8(lVar6 + 0x4f0,&DAT_14cbcddd8);
          FUN_14129c610(lVar7,(ulonglong)bVar5 * 8 + 0x14cbd9628);
        }
      }
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
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
LAB_1442820a0:
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144282388 FUN_144282388 body=491 status=ok
// SIG undefined FUN_144282388(void)

void FUN_144282388(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  longlong *plVar3;
  longlong lVar4;
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
  undefined8 local_48;
  undefined4 local_40;
  code *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    lVar4 = FUN_1400d7050(param_1 + 0x30);
    if (lVar4 != 0) {
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
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
        lVar4 = FUN_140e06fb1(lVar4);
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x90) != 0)) {
          local_30 = *(undefined4 *)(param_2 + 0x10);
          local_38 = *(code **)(param_2 + 8);
          FUN_1410aecd0(*(longlong *)(lVar4 + 0x90),&local_38,0);
        }
      }
    }
    FUN_1449027d0(param_1,&local_38);
    lVar4 = *(longlong *)(local_38 + 0x2f0);
    SRWLock = (PSRWLOCK)(lVar4 + 0xc0);
    AcquireSRWLockExclusive(SRWLock);
    plVar3 = (longlong *)CONCAT44(uStack_2c,local_30);
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
    local_48 = *(undefined8 *)(param_2 + 8);
    local_40 = *(undefined4 *)(param_2 + 0x10);
    lVar4 = FUN_148e459f4(lVar4);
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x148) = 0;
    }
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144282574 FUN_144282574 body=334 status=ok
// SIG undefined FUN_144282574(void)

void FUN_144282574(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
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
  lVar1 = FUN_1400d7050(param_1 + 0x30);
  if (lVar1 != 0) {
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
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      lVar1 = FUN_140e06fb1(lVar1);
      if (lVar1 != 0) {
        if (*(longlong *)(lVar1 + 0x90) != 0) {
          FUN_143df6946(*(longlong *)(lVar1 + 0x90),param_2);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14428273e FUN_14428273e body=441 status=ok
// SIG undefined FUN_14428273e(void)

void FUN_14428273e(longlong param_1)

{
  longlong lVar1;
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
  code *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
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
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      if (*(longlong *)(param_1 + 0x90) == 0) {
        local_38 = FUN_148e45bf4;
        local_30 = 0;
        FUN_146642526(lVar1 + 0x3d08,&local_28,param_1);
        *(undefined8 *)(param_1 + 0x90) = local_28;
      }
      if (*(longlong *)(param_1 + 0x98) == 0) {
        local_38 = FUN_148e45ce0;
        local_30 = 0;
        FUN_146642526(lVar1 + 0x3cf0,&local_28,param_1);
        *(undefined8 *)(param_1 + 0x98) = local_28;
      }
      FUN_144282a7e(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442828f8 FUN_1442828f8 body=372 status=ok
// SIG undefined FUN_1442828f8(void)

void FUN_1442828f8(longlong param_1)

{
  longlong lVar1;
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
  lVar1 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar1 != 0) {
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
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      if (*(longlong *)(param_1 + 0x90) != 0) {
        FUN_14480f766(lVar1 + 0x3d08);
      }
      *(undefined8 *)(param_1 + 0x90) = 0;
      if (*(longlong *)(param_1 + 0x98) != 0) {
        FUN_14480f766(lVar1 + 0x3cf0);
      }
      *(undefined8 *)(param_1 + 0x98) = 0;
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



// FUNCTION 144282a7e FUN_144282a7e body=2654 status=ok
// SIG undefined FUN_144282a7e(void)

void FUN_144282a7e(longlong param_1)

{
  code *pcVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  code *local_88;
  longlong *local_80;
  undefined8 local_78;
  code *local_70;
  int local_68;
  longlong *local_60;
  undefined4 local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar7 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar7 == 0) goto LAB_144282b75;
  if (DAT_14cbadd90 == 0) {
    local_a0 = &local_70;
    local_70 = FUN_141030f22;
    local_90 = FUN_14081d0ea;
    local_98 = &LAB_1459f2e4c;
    local_a8 = &LAB_148c39de3;
    local_b0 = (code *)&LAB_1457a9eb2;
    local_b8 = L"Game";
    local_c0 = 0;
    local_c8 = 0x10000004;
    local_d0 = 0x10;
    local_d8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_144282b75;
  lVar7 = *(longlong *)(lVar7 + 0x3d0);
  if (lVar7 == 0) {
LAB_144282b49:
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_1402095ca();
    lVar12 = *(longlong *)(lVar7 + 0x10);
    iVar13 = *(int *)(lVar12 + 0x38);
    if ((iVar13 < *(int *)(lVar8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
        lVar8 + 0x30)) {
      if (DAT_14cba8288 == 0) {
        local_a0 = &local_70;
        local_70 = FUN_141864c34;
        local_90 = FUN_14081d0ea;
        local_98 = &LAB_1464cee30;
        local_a8 = &LAB_148bfac22;
        local_b0 = (code *)&LAB_140f21842;
        local_b8 = L"Game";
        local_c0 = 0;
        local_c8 = 0x10000004;
        local_d0 = 0x10;
        local_d8 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        lVar12 = *(longlong *)(lVar7 + 0x10);
        iVar13 = *(int *)(lVar12 + 0x38);
      }
      if ((iVar13 < *(int *)(DAT_14cba8288 + 0x38)) ||
         (lVar8 = lVar7,
         *(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8)
         != DAT_14cba8288 + 0x30)) goto LAB_144282b49;
    }
    else {
      lVar8 = *(longlong *)(lVar7 + 0x1710);
    }
  }
  puVar3 = (uint *)(param_1 + 0xb8);
  cVar6 = FUN_144284be2(puVar3,lVar7);
  if ((cVar6 != '\0') && (cVar6 = FUN_140e8a950(param_1 + 0xc0,lVar8), cVar6 != '\0')) {
LAB_144282b75:
    if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  FUN_1442835da(param_1);
  FUN_144283fa0();
  if (lVar7 == 0) {
    *puVar3 = 0;
    iVar13 = 0;
  }
  else {
    uVar4 = *(uint *)(lVar7 + 0xc);
    *puVar3 = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar13 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar13 = *(int *)(lVar7 + 0x10);
      bVar16 = iVar13 == 0;
      if (bVar16) {
        *(int *)(lVar7 + 0x10) = iVar15;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar16) {
        iVar13 = iVar15;
      }
    }
  }
  *(int *)(param_1 + 0xbc) = iVar13;
  if (lVar8 == 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    iVar15 = 0;
  }
  else {
    uVar4 = *(uint *)(lVar8 + 0xc);
    *(uint *)(param_1 + 0xc0) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar15 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar15 = *(int *)(lVar7 + 0x10);
      bVar16 = iVar15 == 0;
      if (bVar16) {
        *(int *)(lVar7 + 0x10) = iVar14;
        iVar15 = 0;
      }
      UNLOCK();
      if (bVar16) {
        iVar15 = iVar14;
      }
    }
    iVar13 = *(int *)(param_1 + 0xbc);
  }
  *(int *)(param_1 + 0xc4) = iVar15;
  if (iVar13 != 0) {
    uVar4 = *puVar3;
    if (((((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) &&
         (lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar7 != 0)) &&
        ((*(int *)(lVar7 + 0x10) == iVar13 && ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) &&
       (*(longlong *)(param_1 + 0x88) == 0)) {
      local_70 = (code *)((ulonglong)local_70 & 0xffffffffffffff00);
      local_48[0] = 0;
      FUN_144287bcc(&local_70,puVar3);
      plVar9 = (longlong *)FUN_1447262c2(&local_70);
      if (plVar9 == (longlong *)0x0) {
LAB_144282d29:
        plVar10 = (longlong *)0x0;
      }
      else {
        if (DAT_14cb22240 == 0) {
          local_a0 = &local_88;
          local_88 = FUN_1449e2820;
          local_90 = FUN_14081d0ea;
          local_98 = &LAB_1464376fa;
          local_a8 = &LAB_147f28935;
          local_b0 = FUN_146437c39;
          local_b8 = L"Engine";
          local_c0 = 0;
          local_c8 = 0x10004001;
          local_d0 = 8;
          local_d8 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
        }
        plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,DAT_14cb22240);
        if (plVar9 == (longlong *)0x0) goto LAB_144282d29;
        if (DAT_14cb22240 == 0) {
          local_a0 = &local_88;
          local_88 = FUN_1449e2820;
          local_90 = FUN_14081d0ea;
          local_98 = &LAB_1464376fa;
          local_a8 = &LAB_147f28935;
          local_b0 = FUN_146437c39;
          local_b8 = L"Engine";
          local_c0 = 0;
          local_c8 = 0x10004001;
          local_d0 = 8;
          local_d8 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
        }
        plVar10 = (longlong *)FUN_144718840(plVar9,DAT_14cb22240);
        if (plVar9 == plVar10) goto LAB_144282d29;
      }
      FUN_1448173f8(local_48);
      if (((char)local_70 == '\x03') && (local_60 != (longlong *)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
      }
      if (plVar10 != (longlong *)0x0) {
        uVar11 = (**(code **)(*plVar10 + 0x30))(plVar10);
        local_70 = (code *)&LAB_144284d22;
        local_68 = 0;
        FUN_146642426(uVar11,&local_88,param_1);
        *(code **)(param_1 + 0x88) = local_88;
      }
    }
    iVar15 = *(int *)(param_1 + 0xc4);
  }
  if ((((iVar15 == 0) || (uVar4 = *(uint *)(param_1 + 0xc0), (int)uVar4 < 0)) ||
      (DAT_14c9647dc <= (int)uVar4)) ||
     (((plVar9 = (longlong *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar9 == (longlong *)0x0 || ((int)plVar9[2] != iVar15)) ||
      (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (*(longlong *)(param_1 + 0x78) != 0))))))
  goto LAB_144283082;
  if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
    lVar7 = *plVar9;
  }
  else {
    lVar7 = 0;
  }
  FUN_14150ea58(lVar7 + 0x6c48,&local_88);
  pcVar5 = local_88;
  if (local_88 != (code *)0x0) {
    local_70 = (code *)0x0;
    local_68 = 0;
    FUN_1446efa72(&local_70,0,3,0x10);
    pcVar1 = local_70;
    local_68 = 3;
    *(undefined ***)local_70 = &PTR_LAB_14b9b37e0;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    *(longlong *)(local_70 + 0x10) = lVar12;
    *(undefined ***)local_70 = &PTR_FUN_14b9b3770;
    *(longlong *)(local_70 + 0x18) = 0;
    iVar13 = 0;
    if (param_1 != 0) {
      uVar4 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_70 + 0x18) = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar13 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar13 = DAT_14c964868 + 1;
        UNLOCK();
        iVar15 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar13;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar15);
        }
        LOCK();
        iVar13 = *(int *)(lVar7 + 0x10);
        bVar16 = iVar13 == 0;
        if (bVar16) {
          *(int *)(lVar7 + 0x10) = iVar15;
          iVar13 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar13 = iVar15;
        }
      }
    }
    *(int *)(pcVar1 + 0x1c) = iVar13;
    *(code **)(pcVar1 + 0x20) = FUN_140ba5cee;
    *(undefined4 *)(pcVar1 + 0x28) = 0;
    if (((local_68 == 0) || (local_70 == (code *)0x0)) ||
       (cVar6 = (**(code **)(*(longlong *)local_70 + 0x30))(), cVar6 == '\0')) {
      if (local_68 == 0) {
        uVar11 = 0;
        goto LAB_14428304e;
      }
      if (local_70 != (code *)0x0) {
        uVar11 = 0;
        (*(code *)**(undefined8 **)local_70)(local_70,0);
        FUN_1446efa72(&local_70,0,0,0x10);
        goto LAB_14428303b;
      }
      uVar11 = 0;
    }
    else {
      pcVar1 = pcVar5 + 0x10;
      if (*(int *)(pcVar5 + 0x24) < 1) {
        iVar13 = *(int *)(pcVar5 + 0x18);
        iVar15 = *(int *)(pcVar5 + 0x20);
        *(int *)(pcVar5 + 0x20) = iVar15 + -1;
        if (iVar15 + -1 <= iVar13) {
          iVar15 = iVar13;
          if (0 < iVar13) {
            iVar14 = 0;
            do {
              if (((*(int *)(*(longlong *)pcVar1 + 8 + (longlong)iVar14 * 0x10) == 0) ||
                  (plVar9 = *(longlong **)(*(longlong *)pcVar1 + (longlong)iVar14 * 0x10),
                  plVar9 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar9 + 0x28))(), cVar6 != '\0')) {
                FUN_14005b288(pcVar1,iVar14);
                FUN_14005b248(pcVar1);
              }
              else {
                iVar14 = iVar14 + 1;
              }
              iVar15 = *(int *)(pcVar5 + 0x18);
            } while (iVar14 < iVar15);
          }
          iVar14 = 2;
          if (2 < iVar15 * 2) {
            iVar14 = iVar15 * 2;
          }
          *(int *)(pcVar5 + 0x20) = iVar14;
          if ((iVar14 < iVar13) && (*(int *)(pcVar5 + 0x1c) != iVar15)) {
            FUN_14045812c();
          }
        }
      }
      uVar11 = 0;
      if ((local_68 != 0) && (local_70 != (code *)0x0)) {
        (**(code **)(*(longlong *)local_70 + 0x38))(local_70,&local_78);
        uVar11 = local_78;
      }
      iVar13 = *(int *)(pcVar5 + 0x18);
      *(uint *)(pcVar5 + 0x18) = iVar13 + 1U;
      if (*(uint *)(pcVar5 + 0x1c) < iVar13 + 1U) {
        FUN_1447a71f6(pcVar1,iVar13);
      }
      lVar7 = *(longlong *)pcVar1;
      lVar12 = (longlong)iVar13 * 0x10;
      *(undefined8 *)(lVar7 + lVar12) = 0;
      *(undefined4 *)(lVar7 + 8 + lVar12) = 0;
      *(code **)(lVar7 + lVar12) = local_70;
      local_70 = (code *)0x0;
      *(int *)(lVar7 + 8 + lVar12) = local_68;
LAB_14428303b:
      local_68 = 0;
LAB_14428304e:
      if (local_70 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    *(undefined8 *)(param_1 + 0x78) = uVar11;
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_80 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
LAB_144283082:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
}



// FUNCTION 1442834f6 FUN_1442834f6 body=193 status=ok
// SIG undefined FUN_1442834f6(void)

void FUN_1442834f6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140059518(param_1 + 0x44);
  if (lVar1 != 0) {
    lVar1 = FUN_1403ca91c(lVar1);
    if (lVar1 != 0) {
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        FUN_14480f766(lVar1 + 0x30);
      }
      *(undefined8 *)(param_1 + 0xa0) = 0;
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        FUN_14480f766(lVar1 + 0x48);
      }
      *(undefined8 *)(param_1 + 0xa8) = 0;
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        FUN_14480f766(lVar1 + 0x78);
      }
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
  }
  FUN_140457ffc(&DAT_14c964278,param_1);
  FUN_1449db8d8(param_1 + 0x38);
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0001442835b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x38))(param_1 + 0x30);
  return;
}



// FUNCTION 1442835b8 FUN_1442835b8 body=33 status=ok
// SIG undefined FUN_1442835b8(void)

void FUN_1442835b8(longlong param_1)

{
  FUN_1442835da(param_1 + -0x30);
  FUN_144283fa0(param_1 + -0x30);
  return;
}



// FUNCTION 1442835da FUN_1442835da body=2500 status=ok
// SIG undefined FUN_1442835da(void)

void FUN_1442835da(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *_Dst;
  uint uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined *puVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  undefined1 local_90 [8];
  undefined8 local_88;
  longlong local_80;
  code *local_78;
  longlong *local_70;
  longlong *local_68;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1 + 0xcc) == 0) goto LAB_14428364a;
  puVar2 = (uint *)(param_1 + 200);
  uVar3 = *puVar2;
  if (((((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) ||
      (lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar11 == 0)) ||
     ((*(int *)(lVar11 + 0x10) != *(int *)(param_1 + 0xcc) ||
      ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)))) goto LAB_14428364a;
  local_78 = (code *)((ulonglong)local_78 & 0xffffffffffffff00);
  local_50 = 0;
  FUN_1405833e0(&local_78,puVar2);
  plVar7 = (longlong *)FUN_1447262c2(&local_78);
  if (plVar7 == (longlong *)0x0) {
LAB_1442836eb:
    plVar9 = (longlong *)0x0;
  }
  else {
    uVar8 = FUN_140eaf18a();
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar8);
    if (plVar7 == (longlong *)0x0) goto LAB_1442836eb;
    uVar8 = FUN_140eaf18a();
    plVar9 = (longlong *)FUN_144718840(plVar7,uVar8);
    if (plVar7 == plVar9) goto LAB_1442836eb;
  }
  lVar11 = DAT_14c9a3da0;
  if ((longlong)local_50 != 0) {
    lVar10 = (longlong)local_50 + -1;
    lVar15 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar15),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar15));
    if (*(longlong *)(lVar11 + lVar15) != 0) {
      FUN_1400020a8();
    }
    lVar11 = DAT_14c9a3da0;
    iVar6 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
    }
    *(undefined4 *)(lVar11 + lVar15) = 0xffffffff;
    iVar14 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar14 = DAT_14c9a3dd0;
    }
    *(int *)(lVar11 + 4 + lVar15) = iVar14;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar12 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar12 = DAT_14c9a3dc0;
    }
    iVar14 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar14 = iVar6;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar6;
    *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) =
         *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_50 = 0;
  }
  if (((char)local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_68 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if ((plVar9 != (longlong *)0x0) &&
     (plVar7 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9), plVar7 != (longlong *)0x0)) {
    FUN_1402815f4(param_1,&local_78);
    local_88 = *(undefined8 *)(local_78 + 0x530);
    local_80 = *(longlong *)(local_78 + 0x538);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 0xc) = *(int *)(local_80 + 0xc) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,&local_88);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_70 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
  }
  local_78 = (code *)((ulonglong)local_78 & 0xffffffffffffff00);
  local_50 = 0;
  FUN_1405833e0(&local_78,puVar2);
  plVar7 = (longlong *)FUN_1447262c2(&local_78);
  if (plVar7 == (longlong *)0x0) {
LAB_144283800:
    plVar9 = (longlong *)0x0;
  }
  else {
    uVar8 = FUN_140c7d35c();
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar8);
    if (plVar7 == (longlong *)0x0) goto LAB_144283800;
    uVar8 = FUN_140c7d35c();
    plVar9 = (longlong *)FUN_144718840(plVar7,uVar8);
    if (plVar7 == plVar9) goto LAB_144283800;
  }
  lVar11 = DAT_14c9a3da0;
  if ((longlong)local_50 != 0) {
    lVar10 = (longlong)local_50 + -1;
    lVar15 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar15),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar15));
    if (*(longlong *)(lVar11 + lVar15) != 0) {
      FUN_1400020a8();
    }
    lVar11 = DAT_14c9a3da0;
    iVar6 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
    }
    *(undefined4 *)(lVar11 + lVar15) = 0xffffffff;
    iVar14 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar14 = DAT_14c9a3dd0;
    }
    *(int *)(lVar11 + 4 + lVar15) = iVar14;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar12 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar12 = DAT_14c9a3dc0;
    }
    iVar14 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar14 = iVar6;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar6;
    *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) =
         *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_50 = 0;
  }
  if (((char)local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_68 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if (((plVar9 != (longlong *)0x0) && (cVar5 = (**(code **)(*plVar9 + 0x28))(plVar9), cVar5 != '\0')
      ) && (lVar11 = (**(code **)(*plVar9 + 0x30))(plVar9), lVar11 != 0)) {
    plVar7 = (longlong *)(**(code **)(*plVar9 + 0x30))(plVar9);
    FUN_1418f49d6(local_90);
    FUN_1409ca370(plVar7,param_1);
    iVar6 = (int)plVar7[1];
    if (0 < iVar6) {
      lVar11 = 0;
      bVar13 = false;
      do {
        while( true ) {
          lVar10 = *plVar7;
          _Dst = (uint *)(lVar10 + lVar11 * 0x10);
          if ((((*(longlong *)(lVar10 + 8 + lVar11 * 0x10) != 0) && (_Dst[1] != 0)) &&
              ((uVar3 = *_Dst, -1 < (int)uVar3 &&
               (((int)uVar3 < DAT_14c9647dc &&
                (plVar9 = (longlong *)
                          ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                plVar9 != (longlong *)0x0)))))) &&
             ((*(uint *)(plVar9 + 2) == _Dst[1] &&
              (((*(uint *)(plVar9 + 1) >> 0x1c & 1) == 0 && (*plVar9 != 0)))))) break;
          iVar14 = iVar6 + ~(uint)lVar11;
          if (iVar14 != 0) {
            if (0 < iVar14) {
              iVar14 = 1;
            }
            memmove(_Dst,(void *)(lVar10 + (longlong)(iVar6 - iVar14) * 0x10),(longlong)iVar14 << 4)
            ;
            iVar6 = (int)plVar7[1];
          }
          iVar6 = iVar6 + -1;
          *(int *)(plVar7 + 1) = iVar6;
          bVar13 = true;
          if (iVar6 <= lVar11) goto LAB_144283e13;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar6);
      if (bVar13) {
LAB_144283e13:
        FUN_1400bbcfc(plVar7);
      }
    }
  }
  local_78 = (code *)((ulonglong)local_78 & 0xffffffffffffff00);
  local_50 = 0;
  FUN_1405833e0(&local_78,puVar2);
  plVar7 = (longlong *)FUN_1447262c2(&local_78);
  if (plVar7 == (longlong *)0x0) {
LAB_1442839b5:
    plVar9 = (longlong *)0x0;
  }
  else {
    uVar8 = FUN_140eb0cd4();
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar8);
    if (plVar7 == (longlong *)0x0) goto LAB_1442839b5;
    uVar8 = FUN_140eb0cd4();
    plVar9 = (longlong *)FUN_144718840(plVar7,uVar8);
    if (plVar7 == plVar9) goto LAB_1442839b5;
  }
  lVar11 = DAT_14c9a3da0;
  if ((longlong)local_50 != 0) {
    lVar15 = (longlong)local_50 + -1;
    lVar10 = lVar15 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar10),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar10));
    if (*(longlong *)(lVar11 + lVar10) != 0) {
      FUN_1400020a8();
    }
    lVar11 = DAT_14c9a3da0;
    iVar6 = (int)lVar15;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
    }
    *(undefined4 *)(lVar11 + lVar10) = 0xffffffff;
    iVar14 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar14 = DAT_14c9a3dd0;
    }
    *(int *)(lVar11 + 4 + lVar10) = iVar14;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar12 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar12 = DAT_14c9a3dc0;
    }
    iVar14 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar14 = iVar6;
    }
    bVar4 = (byte)lVar15 & 0x1f;
    DAT_14c9a3dd0 = iVar6;
    *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) =
         *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_50 = 0;
  }
  if (((char)local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_68 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if ((plVar9 != (longlong *)0x0) &&
     (uVar8 = (**(code **)(*plVar9 + 0x10))(plVar9), *(longlong *)(param_1 + 0x70) != 0)) {
    FUN_14480f766(uVar8);
  }
  if (((((*(int *)(param_1 + 0xcc) == 0) || (uVar3 = *puVar2, (int)uVar3 < 0)) ||
       (DAT_14c9647dc <= (int)uVar3)) ||
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(param_1 + 0xcc))))) ||
     (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 ||
      (plVar7 = (longlong *)*plVar7, plVar7 == (longlong *)0x0)))) goto LAB_14428364a;
  if (DAT_14cba8288 == 0) {
    local_78 = FUN_141864c34;
    local_a0 = FUN_14081d0ea;
    local_a8 = &LAB_1464cee30;
    local_b8 = &LAB_148bfac22;
    local_c0 = &LAB_140f21842;
    local_c8 = &DAT_149e063b2;
    local_d0 = 0;
    local_d8 = 0x10000004;
    local_e0 = 0x10;
    local_e8 = 0x9cd0;
    local_b0 = &local_78;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((*(int *)(plVar7[2] + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8)
      != DAT_14cba8288 + 0x30)) goto LAB_14428364a;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_14480f766(plVar7 + 0x7f0);
  }
  local_78 = (code *)((ulonglong)local_78 & 0xffffffffffffff00);
  local_50 = 0;
  FUN_1405833e0(&local_78,puVar2);
  plVar9 = (longlong *)FUN_1447262c2(&local_78);
  if (plVar9 == (longlong *)0x0) {
LAB_144283b06:
    lVar10 = 0;
  }
  else {
    uVar8 = FUN_140da3b08();
    lVar11 = (**(code **)(*plVar9 + 0x288))(plVar9,uVar8);
    if (lVar11 == 0) goto LAB_144283b06;
    uVar8 = FUN_140da3b08();
    lVar10 = FUN_144718840(lVar11,uVar8);
    if (lVar11 == lVar10) goto LAB_144283b06;
  }
  lVar11 = DAT_14c9a3da0;
  if ((longlong)local_50 != 0) {
    lVar15 = (longlong)local_50 + -1;
    lVar16 = lVar15 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar16),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar16));
    if (*(longlong *)(lVar11 + lVar16) != 0) {
      FUN_1400020a8();
    }
    lVar11 = DAT_14c9a3da0;
    iVar6 = (int)lVar15;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
    }
    *(undefined4 *)(lVar11 + lVar16) = 0xffffffff;
    iVar14 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar14 = DAT_14c9a3dd0;
    }
    *(int *)(lVar11 + 4 + lVar16) = iVar14;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar12 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar12 = DAT_14c9a3dc0;
    }
    iVar14 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar14 = iVar6;
    }
    bVar4 = (byte)lVar15 & 0x1f;
    DAT_14c9a3dd0 = iVar6;
    *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) =
         *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_50 = 0;
  }
  if (((char)local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_68 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if (((lVar10 != 0) && (lVar11 = (**(code **)(*plVar7 + 0xbc8))(plVar7), lVar11 != 0)) &&
     (uVar8 = (**(code **)(*plVar7 + 0xbc8))(plVar7), *(longlong *)(param_1 + 0x80) != 0)) {
    FUN_14480f766(uVar8);
  }
LAB_14428364a:
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144283fa0 FUN_144283fa0 body=927 status=ok
// SIG undefined FUN_144283fa0(void)

void FUN_144283fa0(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  code *local_60;
  char local_58;
  undefined7 uStack_57;
  longlong *local_50;
  longlong *local_48;
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x88) == 0) goto LAB_144284026;
  if (*(int *)(param_1 + 0xbc) != 0) {
    uVar2 = *(uint *)(param_1 + 0xb8);
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if ((lVar6 != 0) &&
         ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0xbc) &&
          ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
        local_58 = '\0';
        local_30[0] = 0;
        FUN_144287bcc(&local_58);
        plVar5 = (longlong *)FUN_1447262c2(&local_58);
        if (plVar5 == (longlong *)0x0) {
LAB_14428419e:
          plVar3 = (longlong *)0x0;
        }
        else {
          if (DAT_14cb22240 == 0) {
            local_80 = &local_60;
            local_60 = FUN_1449e2820;
            local_70 = FUN_14081d0ea;
            local_78 = &LAB_1464376fa;
            local_88 = &LAB_147f28935;
            local_90 = FUN_146437c39;
            local_98 = L"Engine";
            local_a0 = 0;
            local_a8 = 0x10004001;
            local_b0 = 8;
            local_b8 = 0x28;
            FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
          }
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,DAT_14cb22240);
          if (plVar5 == (longlong *)0x0) goto LAB_14428419e;
          if (DAT_14cb22240 == 0) {
            local_80 = &local_60;
            local_60 = FUN_1449e2820;
            local_70 = FUN_14081d0ea;
            local_78 = &LAB_1464376fa;
            local_88 = &LAB_147f28935;
            local_90 = FUN_146437c39;
            local_98 = L"Engine";
            local_a0 = 0;
            local_a8 = 0x10004001;
            local_b0 = 8;
            local_b8 = 0x28;
            FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
          }
          plVar3 = (longlong *)FUN_144718840(plVar5,DAT_14cb22240);
          if (plVar5 == plVar3) goto LAB_14428419e;
        }
        FUN_1448173f8(local_30);
        if ((local_58 == '\x03') && (local_48 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_48 + 0x10))();
          }
        }
        if (plVar3 != (longlong *)0x0) {
          uVar4 = (**(code **)(*plVar3 + 0x30))(plVar3);
          if (*(longlong *)(param_1 + 0x88) != 0) {
            FUN_14480f766(uVar4);
          }
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
LAB_144284026:
  if (*(longlong *)(param_1 + 0x78) != 0) {
    if (((*(int *)(param_1 + 0xc4) != 0) && (uVar2 = *(uint *)(param_1 + 0xc0), -1 < (int)uVar2)) &&
       ((int)uVar2 < DAT_14c9647dc)) {
      plVar5 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0xc4))) &&
         ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
          lVar6 = *plVar5;
        }
        else {
          lVar6 = 0;
        }
        FUN_14150ea58(lVar6 + 0x6c48,&local_58);
        if ((CONCAT71(uStack_57,local_58) != 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
          FUN_14480f766(CONCAT71(uStack_57,local_58) + 0x10);
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_50 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)local_50 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144284340 FUN_144284340 body=1038 status=ok
// SIG undefined FUN_144284340(void)

void FUN_144284340(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  double dVar14;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  code *local_90;
  longlong *local_88;
  PSRWLOCK local_80;
  int local_78;
  longlong local_70;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = param_1 + -0x38;
  dVar14 = (double)FUN_144284fde(lVar1);
  fVar3 = *(float *)(param_1 + 0xa8);
  fVar4 = *(float *)(param_1 + 0xac);
  FUN_1402815f4(lVar1,&local_90);
  lVar6 = *(longlong *)(local_90 + 0xb0);
  local_80 = (PSRWLOCK)(lVar6 + 0x88);
  local_78 = 1;
  AcquireSRWLockExclusive(local_80);
  local_68 = '\0';
  local_70 = lVar6;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_88 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
  lVar6 = local_70;
  bVar7 = dVar14 < (double)(fVar3 - fVar4);
  if (((bool)*(char *)(local_70 + 3) != bVar7) &&
     (*(bool *)(local_70 + 3) = bVar7, local_68 == '\0')) {
    *(int *)(local_70 + 0x80) = *(int *)(local_70 + 0x80) + 1;
    local_68 = '\x01';
  }
  iVar8 = 1;
  if (((*(int *)(param_1 + 0x94) == 0) || (uVar5 = *(uint *)(param_1 + 0x90), (int)uVar5 < 0)) ||
     (DAT_14c9647dc <= (int)uVar5)) goto LAB_14428448f;
  lVar11 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
  if (((lVar11 == 0) || (*(int *)(lVar11 + 0x10) != *(int *)(param_1 + 0x94))) ||
     ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)) goto LAB_14428448f;
  lVar11 = FUN_1400f3ad8(param_1 + 0xc);
  if ((lVar11 == 0) || (plVar9 = *(longlong **)(lVar11 + 0x3d0), plVar9 == (longlong *)0x0))
  goto LAB_14428448f;
  if (DAT_14cb223d8 == 0) {
    local_90 = FUN_1449e2820;
    local_a0 = FUN_14081d0ea;
    local_a8 = FUN_1427b09ee;
    local_b8 = &LAB_147f29feb;
    local_c0 = FUN_1464384fe;
    local_c8 = L"Engine";
    local_d0 = 0;
    local_d8 = 0x10004001;
    local_e0 = 8;
    local_e8 = 0x28;
    local_b0 = &local_90;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
  }
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,DAT_14cb223d8);
  if (plVar9 == (longlong *)0x0) goto LAB_14428448f;
  if (DAT_14cb223d8 == 0) {
    local_90 = FUN_1449e2820;
    local_a0 = FUN_14081d0ea;
    local_a8 = FUN_1427b09ee;
    local_b8 = &LAB_147f29feb;
    local_c0 = FUN_1464384fe;
    local_c8 = L"Engine";
    local_d0 = 0;
    local_d8 = 0x10004001;
    local_e0 = 8;
    local_e8 = 0x28;
    local_b0 = &local_90;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
  }
  plVar10 = (longlong *)FUN_144718840(plVar9,DAT_14cb223d8);
  if ((plVar9 == plVar10) || (plVar10 == (longlong *)0x0)) goto LAB_14428448f;
  lVar11 = (**(code **)(*plVar10 + 0x10))(plVar10);
  if (lVar11 == 0) goto LAB_14428448f;
  if (*(int *)(param_1 + 0x94) == 0) {
LAB_14428463f:
    uVar12 = 0;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x90);
    uVar12 = 0;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      puVar13 = (undefined8 *)
                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if ((puVar13 == (undefined8 *)0x0) ||
         ((*(int *)(puVar13 + 2) != *(int *)(param_1 + 0x94) ||
          ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_14428463f;
      uVar12 = *puVar13;
    }
  }
  iVar8 = FUN_14486116a(lVar11,uVar12);
LAB_14428448f:
  if ((*(int *)(lVar6 + 0x34) != iVar8) && (*(int *)(lVar6 + 0x34) = iVar8, local_68 == '\0')) {
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
    local_68 = '\x01';
  }
  if (iVar8 == 2) {
    FUN_14428477a(lVar1,&local_80);
  }
  if (local_78 != 0) {
    if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000144284513. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive(local_80);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_108);
}



// FUNCTION 14428477a FUN_14428477a body=1126 status=ok
// SIG undefined FUN_14428477a(void)

void FUN_14428477a(longlong param_1,longlong param_2)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  void *_Src;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  code *local_b0;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  char local_60;
  float local_5c;
  char local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((((*(int *)(param_1 + 0xc4) == 0) || (uVar4 = *(uint *)(param_1 + 0xc0), (int)uVar4 < 0)) ||
       (DAT_14c9647dc <= (int)uVar4)) ||
      ((lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar7 == 0 ||
       (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0xc4))))) ||
     (((*(uint *)(lVar7 + 8) & 0x10200000) != 0 ||
      (lVar7 = FUN_1400f3ad8(param_1 + 0x44), lVar7 == 0)))) goto LAB_1442847e3;
  if (DAT_14cbadd90 == 0) {
    local_c0 = &local_68;
    local_68 = FUN_141030f22;
    local_b0 = FUN_14081d0ea;
    local_b8 = &LAB_1459f2e4c;
    local_c8 = &LAB_148c39de3;
    local_d0 = &LAB_1457a9eb2;
    local_d8 = &DAT_149e063b2;
    local_e0 = 0;
    local_e8 = 0x10000004;
    local_f0 = 0x10;
    local_f8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if (((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
     (*(longlong *)(lVar7 + 0xf48) == 0)) goto LAB_1442847e3;
  FUN_14150ea58(*(longlong *)(lVar7 + 0xf48) + 0x6c48,&local_78);
  lVar7 = local_78;
  if (((((local_78 != 0) && (*(int *)(param_1 + 0xcc) != 0)) &&
       (uVar4 = *(uint *)(param_1 + 200), -1 < (int)uVar4)) &&
      (((int)uVar4 < DAT_14c9647dc &&
       (plVar8 = (longlong *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0)))) &&
     (((int)plVar8[2] == *(int *)(param_1 + 0xcc) &&
      (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar9 = *plVar8, lVar9 != 0)))))) {
    if (DAT_14cba8288 == 0) {
      local_c0 = &local_68;
      local_68 = FUN_141864c34;
      local_b0 = FUN_14081d0ea;
      local_b8 = &LAB_1464cee30;
      local_c8 = &LAB_148bfac22;
      local_d0 = &LAB_140f21842;
      local_d8 = &DAT_149e063b2;
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 0x10;
      local_f8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) {
      lVar9 = 0;
    }
    FUN_140e8a3fc(lVar7,lVar9);
    FUN_1442234fa(local_78,&local_68);
    _Src = local_38;
    iVar6 = 0;
    if (local_60 != '\0') {
      iVar6 = local_68._4_4_;
    }
    if (local_58 == '\0') {
      local_5c = 0.0;
    }
    lVar7 = *(longlong *)(param_2 + 0x10);
    iVar5 = *(int *)(lVar7 + 0x58);
    fVar2 = *(float *)(lVar7 + 0x5c);
    cVar3 = *(char *)(lVar7 + 0x60);
    *(char *)(lVar7 + 0x60) = (char)local_68;
    *(int *)(*(longlong *)(param_2 + 0x10) + 0x58) = iVar6;
    *(float *)(*(longlong *)(param_2 + 0x10) + 0x5c) = local_5c;
    if ((cVar3 == (char)local_68) && (iVar5 == iVar6)) {
      if ((fVar2 != local_5c) || (NAN(fVar2) || NAN(local_5c))) goto LAB_144284993;
    }
    else {
LAB_144284993:
      local_a0 = local_50;
      local_98 = local_48;
      uStack_94 = uStack_44;
      uStack_90 = uStack_40;
      uStack_8c = uStack_3c;
      local_88 = (void *)0x0;
      local_80 = local_30;
      if ((longlong)local_30 == 0) {
        local_7c = 0;
      }
      else {
        FUN_1446dd670(&local_88,local_30,0);
        memcpy(local_88,_Src,(longlong)local_30 * 2);
      }
      lVar7 = FUN_14090ae24(&local_a0);
      if (lVar7 != 0) {
        FUN_140390f7a(&local_a0,*(longlong *)(param_2 + 0x10) + 0x48);
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (*(char *)(param_2 + 0x18) == '\0') {
        piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 0x80);
        *piVar1 = *piVar1 + 1;
        *(undefined1 *)(param_2 + 0x18) = 1;
      }
    }
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_70 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
LAB_1442847e3:
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144284be2 FUN_144284be2 body=320 status=ok
// SIG undefined FUN_144284be2(void)

bool FUN_144284be2(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar5;
      }
    }
  }
  uVar5 = *param_1;
  uVar1 = param_1[1];
  bVar7 = true;
  if ((uVar5 != uVar4) || (uVar1 != uVar3)) {
    if ((uVar1 == 0) ||
       (((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
         (lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar6 == 0)) ||
        ((*(uint *)(lVar6 + 0x10) != uVar1 || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))))) {
      if ((uVar3 != 0) &&
         (((-1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)) &&
          ((lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar6 != 0 &&
           (*(uint *)(lVar6 + 0x10) == uVar3)))))) {
        bVar7 = (*(uint *)(lVar6 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}



// FUNCTION 144284d2a FUN_144284d2a body=182 status=ok
// SIG undefined FUN_144284d2a(void)

void FUN_144284d2a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined1 local_20 [4];
  char local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_1400f3ad8(param_1 + 0x44);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_14018b740();
    lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_14018b740();
      lVar4 = FUN_144718840(lVar3,uVar2);
      if (lVar4 != 0 && lVar3 != lVar4) {
        FUN_140c4ebe4(local_20,lVar4,param_2);
        if (local_1c != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000144284de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x28))(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144284dea FUN_144284dea body=329 status=ok
// SIG undefined FUN_144284dea(void)

void FUN_144284dea(longlong param_1)

{
  longlong lVar1;
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
  lVar1 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar1 != 0) {
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
    if ((((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
        (*(int *)(lVar1 + 0xd98) != 0)) && (*(longlong *)(lVar1 + 0xda0) != 0)) {
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



// FUNCTION 144284f48 FUN_144284f48 body=148 status=ok
// SIG undefined FUN_144284f48(void)

void FUN_144284f48(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_30);
  lVar3 = *(longlong *)(local_30 + 0xb0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x88));
  *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  *(undefined1 *)(lVar3 + 1) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000144284fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x88));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144284fde FUN_144284fde body=329 status=ok
// SIG undefined FUN_144284fde(void)

double FUN_144284fde(longlong param_1)

{
  uint uVar1;
  double *pdVar2;
  double *pdVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  
  if (((((*(int *)(param_1 + 0xcc) == 0) || (uVar1 = *(uint *)(param_1 + 200), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 == 0 ||
       (*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0xcc))))) ||
     (((*(uint *)(lVar5 + 8) & 0x10200000) != 0 ||
      ((lVar5 = FUN_1400f3ad8(), lVar5 == 0 || (*(longlong *)(lVar5 + 0x3d0) == 0)))))) {
    return -1.0;
  }
  lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x3d0) + 0x1c8);
  if (lVar5 == 0) {
    pdVar2 = (double *)&DAT_14c8464e0;
    uVar6 = SUB84(DAT_14c8464f0,0);
    uVar7 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar6 = (undefined4)*(undefined8 *)(lVar5 + 0x270);
    uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x270) >> 0x20);
    pdVar2 = (double *)(lVar5 + 0x260);
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    uVar1 = *(uint *)(param_1 + 200);
    lVar5 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1442850d0;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       (((int)plVar4[2] == *(int *)(param_1 + 0xcc) && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))
       ) {
      lVar5 = *plVar4;
      goto LAB_1442850d0;
    }
  }
  lVar5 = 0;
LAB_1442850d0:
  lVar5 = *(longlong *)(lVar5 + 0x1c8);
  if (lVar5 == 0) {
    pdVar3 = (double *)&DAT_14c8464e0;
    dVar8 = DAT_14c8464f0;
  }
  else {
    pdVar3 = (double *)(lVar5 + 0x260);
    dVar8 = *(double *)(lVar5 + 0x270);
  }
  dVar8 = dVar8 - (double)CONCAT44(uVar7,uVar6);
  return SQRT(dVar8 * dVar8 +
              (*pdVar3 - *pdVar2) * (*pdVar3 - *pdVar2) +
              (pdVar3[1] - pdVar2[1]) * (pdVar3[1] - pdVar2[1]));
}



// FUNCTION 1442854bb FUN_1442854bb body=47 status=ok
// SIG undefined FUN_1442854bb(void)

void FUN_1442854bb(void)

{
  DAT_14cbd77b8 = 0;
  if (DAT_14cbd77b0 != 0) {
    FUN_1400020a8();
  }
  FUN_140fb3a5c(&DAT_14cbd7770);
  return;
}



// FUNCTION 144285540 FUN_144285540 body=1009 status=ok
// SIG undefined FUN_144285540(void)

void FUN_144285540(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code **ppcVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  code *_Src;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  code *local_70;
  longlong *local_68;
  code *local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar9 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar9 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_90 = &local_60;
      local_60 = FUN_141030f22;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_1459f2e4c;
      local_98 = &LAB_148c39de3;
      local_a0 = &LAB_1457a9eb2;
      local_a8 = &DAT_149e063b2;
      local_b0 = 0;
      local_b8 = 0x10000004;
      local_c0 = 0x10;
      local_c8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (*(char *)(lVar9 + 0x32b8) == '\x01')) {
      FUN_14125bd50(&local_60,lVar9);
      FUN_1402815f4(param_1,&local_70);
      plVar5 = *(longlong **)(local_70 + 0x3c0);
      AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 0xd));
      *(int *)(plVar5 + 0xc) = (int)plVar5[0xc] + 1;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)local_68 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
          }
        }
      }
      _Src = local_60;
      ppcVar3 = (code **)(plVar5 + 9);
      if (ppcVar3 != &local_60) {
        *(int *)(plVar5 + 10) = local_58;
        if (local_58 == 0 && *(int *)((longlong)plVar5 + 0x54) == 0) {
          *(undefined4 *)((longlong)plVar5 + 0x54) = 0;
        }
        else {
          FUN_141208f94(ppcVar3,local_58);
          if (local_58 != 0) {
            memcpy(*ppcVar3,_Src,(longlong)local_58 << 3);
          }
        }
      }
      lVar9 = *plVar5;
      *(int *)(plVar5 + 2) = (int)plVar5[2] + 2;
      lVar6 = plVar5[1];
      if ((longlong)(int)lVar6 != 0) {
        lVar11 = 0;
        do {
          local_50 = 0;
          cVar8 = FUN_1412dac80(*(undefined8 *)(lVar9 + 0x44 + lVar11),&local_50);
          lVar7 = local_50;
          if (cVar8 != '\0') {
            iVar4 = *(int *)(lVar9 + 500 + lVar11);
            if ((*(char *)(lVar9 + 0x1f0 + lVar11) == '\0') || (iVar4 == 0)) {
              *(undefined1 *)(lVar9 + 0x1f0 + lVar11) = 1;
              *(int *)(lVar9 + 500 + lVar11) = iVar4 + 1;
            }
            lVar10 = FUN_1400f3ad8(param_1 + 0x44);
            if (lVar10 == 0) {
LAB_14428572d:
              lVar10 = 0;
            }
            else {
              if (DAT_14cbadd90 == 0) {
                local_70 = FUN_141030f22;
                local_80 = FUN_14081d0ea;
                local_88 = &LAB_1459f2e4c;
                local_90 = &local_70;
                local_98 = &LAB_148c39de3;
                local_a0 = &LAB_1457a9eb2;
                local_a8 = &DAT_149e063b2;
                local_b0 = 0;
                local_b8 = 0x10000004;
                local_c0 = 0x10;
                local_c8 = 0x3de0;
                FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8
                             );
              }
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38))
                 || (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30))
              goto LAB_14428572d;
            }
            cVar8 = FUN_14125be1e(lVar10,lVar7);
            iVar4 = *(int *)(lVar9 + 0x1fc + lVar11);
            if ((*(char *)(lVar9 + 0x1f8 + lVar11) != cVar8) || (iVar4 == 0)) {
              *(char *)(lVar9 + 0x1f8 + lVar11) = cVar8;
              *(int *)(lVar9 + 0x1fc + lVar11) = iVar4 + 1;
            }
            iVar4 = *(int *)(lVar9 + 0x220 + lVar11);
            if ((local_50 != *(longlong *)(lVar9 + 0x218 + lVar11)) || (iVar4 == 0)) {
              *(longlong *)(lVar9 + 0x218 + lVar11) = local_50;
              *(int *)(lVar9 + 0x220 + lVar11) = iVar4 + 1;
            }
          }
          lVar11 = lVar11 + 0x308;
        } while ((longlong)(int)lVar6 * 0x308 - lVar11 != 0);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 0xd));
      if (local_60 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442862c6 FUN_1442862c6 body=1004 status=ok
// SIG undefined FUN_1442862c6(void)

void FUN_1442862c6(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = FUN_140059518((longlong)param_1 + 0x44);
  if (lVar2 == 0) {
LAB_1442865b6:
    if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  plVar3 = (longlong *)FUN_140773fe2();
  if (plVar3 != (longlong *)0x0) {
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3,*(undefined4 *)(lVar2 + 0xe0),uVar4);
    if (lVar2 != 0) {
      local_a0 = (undefined8 *)0x0;
      local_98 = 0;
      FUN_1446efa72(&local_a0,0,3,0x10);
      puVar6 = local_a0;
      local_98 = 3;
      *local_a0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_a0[2] = lVar5;
      *local_a0 = &PTR_FUN_14b9b4e30;
      local_a0[3] = 0;
      iVar7 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar1 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_a0 + 3) = uVar1;
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
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
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
      *(int *)((longlong)puVar6 + 0x1c) = iVar7;
      puVar6[4] = param_1;
      lVar9 = (**(code **)(*param_1 + 0x180))(param_1);
      if (lVar9 != 0) {
        if (*(longlong *)(lVar9 + 0x1f0) == 0) {
          puVar6 = (undefined8 *)(lVar9 + 0x458);
        }
        else {
          puVar6 = (undefined8 *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
        }
        uVar4 = *puVar6;
        local_88 = 0;
        local_80 = 0;
        FUN_14487d8d8(&local_88,&local_a0);
        local_48 = 1;
        local_b8 = local_90;
        local_90[0] = 0;
        local_8c = 0xbf800000;
        FUN_1406f4044(uVar4,param_1 + 0xe,&local_88,0x40a00000);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      }
      local_b0 = (undefined8 *)0x0;
      local_a8 = 0;
      FUN_1446efa72(&local_b0,0,3,0x10);
      puVar6 = local_b0;
      local_a8 = 3;
      *local_b0 = &PTR_LAB_14b4daf00;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_b0[2] = lVar5;
      *local_b0 = &PTR_FUN_14b9b4ea0;
      local_b0[3] = 0;
      iVar7 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar1 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_b0 + 3) = uVar1;
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
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
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
      *(int *)((longlong)puVar6 + 0x1c) = iVar7;
      puVar6[4] = param_1;
      FUN_14657d586(lVar2,&local_b0);
      if (local_98 != 0) {
        if (local_a0 == (undefined8 *)0x0) goto LAB_1442865b6;
        (**(code **)*local_a0)(local_a0,0);
        FUN_1446efa72(&local_a0,0,0,0x10);
        local_98 = 0;
      }
      if (local_a0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1442865b6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1442866ca FUN_1442866ca body=761 status=ok
// SIG undefined FUN_1442866ca(void)

void FUN_1442866ca(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
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
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined1 *)(param_1 + 0xd) = 1;
  if (param_1[0xe] != 0) {
    lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar5 != 0) {
      if (*(longlong *)(lVar5 + 0x1f0) == 0) {
        plVar7 = (longlong *)(lVar5 + 0x458);
      }
      else {
        plVar7 = (longlong *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
      }
      lVar5 = param_1[0xe];
      if (lVar5 != 0) {
        lVar6 = *plVar7;
        uVar8 = (uint)lVar5;
        if ((int)(uVar8 & 0xffffff) < *(int *)(lVar6 + 0x10)) {
          lVar9 = lVar6 + 0x18;
          if (*(longlong *)(lVar6 + 0x28) != 0) {
            lVar9 = *(longlong *)(lVar6 + 0x28);
          }
          if ((*(uint *)(lVar9 + (ulonglong)((uVar8 & 0xffffff) >> 5) * 4) >> (uVar8 & 0x1f) & 1) !=
              0) {
            lVar6 = *(longlong *)(lVar6 + 8);
            lVar9 = (ulonglong)(uVar8 & 0xffffff) * 0x70;
            if (((lVar6 + lVar9 != 0) && (*(longlong *)(lVar6 + 0x60 + lVar9) == lVar5)) &&
               (*(char *)(lVar6 + 1 + lVar9) != '\x04')) {
              FUN_1405a424c();
            }
          }
        }
      }
      param_1[0xe] = 0;
    }
  }
  if (*(char *)((longlong)param_1 + 0xf9) == '\0') {
    cVar4 = FUN_148e49f6a(param_1);
    if (cVar4 == '\0') {
      FUN_148e49ff0(param_1);
    }
  }
  FUN_1402815f4(param_1,&local_40);
  lVar5 = *(longlong *)(local_40 + 0x430);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0xf0));
  *(int *)(lVar5 + 0xe8) = *(int *)(lVar5 + 0xe8) + 1;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_38 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if (*(int *)(lVar5 + 0x38) < 1) {
    if ((int)param_1[0x14] != 0) {
      plVar7 = param_1 + 0x13;
      plVar2 = (longlong *)*plVar7;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x60))(plVar2,1);
        if (((int)param_1[0x14] != 0) &&
           (puVar3 = (undefined8 *)*plVar7, puVar3 != (undefined8 *)0x0)) {
          (**(code **)*puVar3)(puVar3,0);
          FUN_1446efa72(plVar7,0,0,0x10);
          *(undefined4 *)(param_1 + 0x14) = 0;
        }
      }
    }
  }
  else {
    lVar6 = FUN_1400f3ad8((longlong)param_1 + 0x44);
    if (lVar6 != 0) {
      if (DAT_14cbadd90 == 0) {
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
        local_60 = &local_40;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
         ((*(int *)(lVar6 + 0xd98) != 0 && (*(longlong *)(lVar6 + 0xda0) != 0)))) {
        FUN_1403ca8ec(lVar6 + 0xd98,&DAT_14cbd9590);
        FUN_148e49a8a(param_1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001442868f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0xf0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442869c4 FUN_1442869c4 body=376 status=ok
// SIG undefined FUN_1442869c4(void)

undefined8 FUN_1442869c4(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  wchar_t *pwVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_3 + 1) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)*param_3;
  }
  dVar8 = _wtof(pwVar6);
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar3 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xe8);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)(param_1 + 0xa8);
      iVar7 = iVar5;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar7 * 0x20) == param_2) goto LAB_144286a73;
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + lVar3 + 0x18);
      } while (iVar7 != -1);
    }
  }
  goto LAB_144286b08;
  while (iVar5 = *(int *)(lVar1 + 0x18), iVar5 != -1) {
LAB_144286a73:
    lVar1 = lVar3 + (longlong)iVar5 * 0x20;
    if (*(uint *)(lVar3 + (longlong)iVar5 * 0x20) == param_2) {
      if (lVar1 != 0) {
        local_58 = (wchar_t *)0x0;
        uVar2 = *(uint *)(lVar1 + 0x10);
        _Src = *(void **)(lVar1 + 8);
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
        if ((longlong)(int)uVar2 == 0) {
          uStack_50 = (ulonglong)uVar2;
        }
        else {
          FUN_1446dd670(&local_58,uVar2,0);
          memcpy(local_58,_Src,(longlong)(int)uVar2 * 2);
          pwVar6 = local_58;
          if ((int)uStack_50 != 0) goto LAB_144286ae5;
        }
        goto LAB_144286ade;
      }
      break;
    }
  }
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
LAB_144286ade:
  pwVar6 = L"";
LAB_144286ae5:
  dVar9 = _wtof(pwVar6);
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = 1;
  if ((float)dVar8 <= (float)dVar9) goto LAB_144286b0a;
LAB_144286b08:
  uVar4 = 0;
LAB_144286b0a:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 144286b3e FUN_144286b3e body=1205 status=ok
// SIG undefined FUN_144286b3e(void)

void FUN_144286b3e(longlong *param_1,undefined8 **param_2,char param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0xffffffff;
  if (param_3 == '\0') {
    uVar6 = FUN_140059518((longlong)param_1 + 0x44);
    lVar4 = FUN_145da44aa(uVar6);
    if (lVar4 == 0) goto LAB_144286c1c;
    local_58 = (undefined8 *)0x0;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar2 = local_58;
    uStack_50 = CONCAT44(uStack_50._4_4_,3);
    *local_58 = &PTR_LAB_14b9abc80;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_58[2] = lVar7;
    *local_58 = &PTR_FUN_14b9b4ce0;
    local_58[3] = 0;
    iVar8 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_58 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar8 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar8 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar8 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar9;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar8 = iVar9;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar8;
    puVar2[4] = FUN_148e4ada2;
    *(undefined4 *)(puVar2 + 5) = 0;
    uVar3 = FUN_144269292(lVar4,&DAT_14cbd7a98,&local_58);
    *(undefined4 *)(param_1 + 0x29) = uVar3;
    if ((int)uStack_50 != 0) {
      if (local_58 == (undefined8 *)0x0) goto LAB_144286c1c;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      uStack_50 = uStack_50 & 0xffffffff00000000;
    }
  }
  else {
    local_48[0] = 0;
    local_48[1] = 0;
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    iVar8 = (int)param_1[0x2b] + -1;
    if ((int)param_1[0x2b] == 0) {
      iVar8 = 0;
    }
    FUN_1402980a2(local_48,param_1[0x2a],iVar8);
    if (&local_58 != param_2) {
      uVar1 = *(uint *)(param_2 + 1);
      puVar2 = *param_2;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar1);
      if (uVar1 == 0 && uStack_50._4_4_ == 0) {
        uStack_50 = (ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_58,uVar1);
        if (uVar1 != 0) {
          memcpy(local_58,puVar2,(longlong)(int)uVar1 * 2);
        }
      }
    }
    lVar4 = FUN_140059518((longlong)param_1 + 0x44);
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140773fe2();
      if (plVar5 == (longlong *)0x0) {
LAB_144286db7:
        if (((int)param_1[0x27] != 0) && ((longlong *)param_1[0x26] != (longlong *)0x0)) {
          (**(code **)(*(longlong *)param_1[0x26] + 0x60))();
        }
        FUN_148e4acca(param_1);
      }
      else {
        uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
        lVar4 = (**(code **)(*plVar5 + 0x2d0))(plVar5,*(undefined4 *)(lVar4 + 0xe0),uVar6);
        if (lVar4 == 0) goto LAB_144286db7;
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar2 = local_68;
        local_60 = 3;
        *local_68 = &PTR_LAB_14b9b5140;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_68[2] = lVar7;
        *local_68 = &PTR_FUN_14b9b50d0;
        local_68[3] = 0;
        iVar8 = 0;
        if (param_1 != (longlong *)0x0) {
          uVar1 = *(uint *)((longlong)param_1 + 0xc);
          *(uint *)(local_68 + 3) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          iVar8 = *(int *)(lVar10 + 0x10);
          if (*(int *)(lVar10 + 0x10) == 0) {
            LOCK();
            iVar8 = DAT_14c964868 + 1;
            UNLOCK();
            iVar9 = DAT_14c964868 + 1;
            bVar11 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar8;
            if (bVar11) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar9);
            }
            LOCK();
            iVar8 = *(int *)(lVar10 + 0x10);
            bVar11 = iVar8 == 0;
            if (bVar11) {
              *(int *)(lVar10 + 0x10) = iVar9;
              iVar8 = 0;
            }
            UNLOCK();
            if (bVar11) {
              iVar8 = iVar9;
            }
          }
        }
        *(int *)((longlong)puVar2 + 0x1c) = iVar8;
        puVar2[4] = param_1;
        puVar2[5] = lVar4;
        FUN_148a5d390(lVar4,&local_58,&local_68);
      }
      lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
      if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) &&
         (lVar4 = FUN_141028a6c(), lVar4 != 0)) {
        if (param_1[0x24] != 0) {
          FUN_14480f766(lVar4 + 0x70);
          param_1[0x24] = 0;
        }
        if (param_1[0x25] != 0) {
          FUN_14480f766(lVar4 + 0xb8);
        }
      }
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_144286c1c:
  if ((local_48[2] ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144286ff4 FUN_144286ff4 body=597 status=ok
// SIG undefined FUN_144286ff4(void)

void FUN_144286ff4(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  longlong local_b8 [2];
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  ulonglong uStack_60;
  longlong local_58 [2];
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar3 = (longlong *)FUN_140773fe2();
  if (plVar3 == (longlong *)0x0) goto LAB_144287215;
  uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar5 = (**(code **)(*plVar3 + 0x2d0))(plVar3,param_2,uVar4);
  if (lVar5 == 0) goto LAB_144287215;
  plVar3 = (longlong *)FUN_140a68038(1);
  if (plVar3 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x70))(plVar3,&local_48);
    if (local_48 != (longlong *)0x0) {
      FUN_140056680(&local_a8,L"https://support.gearboxsoftware.com/");
      FUN_140056680(&local_68,L"ShiftSupportUrl");
      FUN_148a6298e(local_58,lVar5,&local_68,&local_a8);
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_a4,local_a8) != 0) {
        FUN_1400020a8();
      }
      plVar3 = local_48;
      uStack_a4 = uStack_a4 & 0xffffff00;
      local_a8 = 0;
      local_9c = 0;
      uStack_94 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      local_a0 = param_2;
      FUN_140056680(local_c8,L"AgeGateSupportUrl");
      FUN_148a6298e(local_b8,lVar5,local_c8,local_58);
      (**(code **)(*plVar3 + 0x38))(plVar3,local_b8,&local_a8,&local_68);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_c8[0] != 0) {
        FUN_1400020a8();
      }
      if ((int)uStack_60 == 0) {
LAB_1442871b5:
        if (local_68 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_68 != (undefined8 *)0x0) {
        (**(code **)*local_68)(local_68,0);
        FUN_1446efa72(&local_68,0,0,0x10);
        uStack_60 = uStack_60 & 0xffffffff00000000;
        goto LAB_1442871b5;
      }
      FUN_148a3c424(&local_a8);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_144287215:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442873d4 FUN_1442873d4 body=809 status=ok
// SIG undefined FUN_1442873d4(void)

void FUN_1442873d4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_20;
  
  lVar1 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_2 != 0) && (lVar4 = *(longlong *)(param_2 + 8), lVar4 != 0)) {
    if ((lVar4 == DAT_14cbd7b60) || (lVar4 == DAT_14cbd7b68)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_d8);
    }
    if (lVar4 == DAT_14cbd7b70) {
      lVar4 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
      if (lVar4 == 0) {
        FUN_145876474(DAT_14cb0d2b0);
        lVar4 = *(longlong *)(lVar1 + 0x2c8);
        if (lVar4 == 0) goto LAB_14428763a;
      }
      *(undefined1 *)(lVar4 + 0x2dc) = 0;
      uVar3 = 0;
      FUN_148ef4668(lVar4,0);
      FUN_148ef4668(lVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),*(undefined1 *)(param_1 + 0xf5)) ^
                          1);
      *(undefined1 *)(param_1 + 0xf5) = 1;
    }
    else if (lVar4 == DAT_14cbd7b80) {
      lVar1 = FUN_140059518(param_1 + 0x44);
      if ((lVar1 != 0) && (lVar1 = FUN_140cee904(lVar1), lVar1 != 0)) {
        FUN_144299980(lVar1);
      }
      lVar1 = FUN_1400f3ad8(param_1 + 0x44);
      if (lVar1 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_80 = local_68;
          local_68[0] = FUN_141030f22;
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
        if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
           (*(longlong *)(lVar1 + 0xc38) != 0)) {
          local_58 = (undefined ***)0x0;
          local_48 = &PTR_LAB_14b9b5990;
          local_68[0] = FUN_1442949b2;
          local_40 = lVar1;
          local_38 = *(longlong *)(lVar1 + 0xc38);
          (**(code **)(*(longlong *)(lVar1 + 0xe18) + 0x58))(lVar1 + 0xe18,local_68);
          if (local_68[0] != (code *)0x0) {
            pppuVar2 = local_58;
            if (local_58 == (undefined ***)0x0) {
              pppuVar2 = &local_48;
            }
            (*(code *)(*pppuVar2)[2])();
          }
          lVar1 = FUN_145d18230(lVar1);
          if (lVar1 != 0) {
            FUN_140d8e082(lVar1);
          }
        }
      }
    }
    else {
      if (lVar4 == DAT_14cbd7b88) {
        lVar1 = FUN_140059518(param_1 + 0x44);
        if (lVar1 == 0) goto LAB_14428763a;
        *(undefined4 *)(lVar1 + 0x440) = 0;
        if (*(int *)(lVar1 + 0x444) != 0) {
          FUN_1402191ca(lVar1 + 0x438,0);
        }
      }
      else {
        if ((lVar4 != DAT_14cbd7b90) || (lVar1 = FUN_140059518(param_1 + 0x44), lVar1 == 0))
        goto LAB_14428763a;
        FUN_148dadcf4(lVar1);
      }
      *(undefined1 *)(param_1 + 0xa0) = 1;
    }
  }
LAB_14428763a:
  if ((local_20 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144287713 FUN_144287713 body=169 status=ok
// SIG undefined FUN_144287713(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144287713(void)

{
  _DAT_14cbd7f58 = 0;
  if (DAT_14cbd7f50 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cbd7f18 = 0;
  if (DAT_14cbd7f1c != 0) {
    FUN_14472eb64(&DAT_14cbd7f10,0);
  }
  _DAT_14cbd7f40 = 0xffffffff;
  _DAT_14cbd7f38 = 0;
  if (0x80 < DAT_14cbd7f3c) {
    DAT_14cbd7f3c = 0x80;
    FUN_1446efbd8(&DAT_14cbd7f20,0);
  }
  if (DAT_14cbd7f30 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cbd7f10 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1442877bc FUN_1442877bc body=169 status=ok
// SIG undefined FUN_1442877bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1442877bc(void)

{
  _DAT_14cbd7fb0 = 0;
  if (DAT_14cbd7fa8 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cbd7f70 = 0;
  if (DAT_14cbd7f74 != 0) {
    FUN_14472eb64(&DAT_14cbd7f68,0);
  }
  _DAT_14cbd7f98 = 0xffffffff;
  _DAT_14cbd7f90 = 0;
  if (0x80 < DAT_14cbd7f94) {
    DAT_14cbd7f94 = 0x80;
    FUN_1446efbd8(&DAT_14cbd7f78,0);
  }
  if (DAT_14cbd7f88 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cbd7f68 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 144287890 FUN_144287890 body=547 status=ok
// SIG undefined FUN_144287890(void)

void FUN_144287890(longlong param_1)

{
  longlong lVar1;
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
  *(undefined4 *)(param_1 + 0x48) = 0;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      FUN_1449ce79a(lVar1);
    }
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (lVar1 != 0) {
      if (DAT_14cba8288 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141864c34;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1464cee30;
        local_48 = &LAB_148bfac22;
        local_50 = &LAB_140f21842;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
          (*(char *)(lVar1 + 0x7fe8) != '\0')) &&
         ((*(char *)(lVar1 + 0x7fe8) == '\x01' ||
          ((*(longlong *)(lVar1 + 0x3f70) != 0 &&
           (*(char *)(*(longlong *)(lVar1 + 0x3f70) + 0x1088) == '\x01')))))) {
        *(undefined4 *)(param_1 + 0x48) = 1;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144287ab4 FUN_144287ab4 body=69 status=ok
// SIG undefined FUN_144287ab4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144287ab4(void)

{
  _DAT_14cbd8010 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144287af6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd8018,1);
  return;
}



// FUNCTION 144287af9 FUN_144287af9 body=69 status=ok
// SIG undefined FUN_144287af9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144287af9(void)

{
  _DAT_14cbd8028 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144287b3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd8030,1);
  return;
}



// FUNCTION 144287b3e FUN_144287b3e body=31 status=ok
// SIG undefined FUN_144287b3e(void)

undefined8 FUN_144287b3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144287b5e FUN_144287b5e body=31 status=ok
// SIG undefined FUN_144287b5e(void)

undefined8 FUN_144287b5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144287bcc FUN_144287bcc body=109 status=ok
// SIG undefined FUN_144287bcc(void)

void FUN_144287bcc(char *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*param_1 == '\x03') {
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  else if (*param_1 == '\x01') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = '\x02';
  *(undefined8 *)(param_1 + 8) = *param_2;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x28) + -1,1);
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
  }
  return;
}



// FUNCTION 144287c86 FUN_144287c86 body=31 status=ok
// SIG undefined FUN_144287c86(void)

undefined8 FUN_144287c86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144287d4c FUN_144287d4c body=31 status=ok
// SIG undefined FUN_144287d4c(void)

undefined8 FUN_144287d4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144287dba FUN_144287dba body=31 status=ok
// SIG undefined FUN_144287dba(void)

undefined8 FUN_144287dba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144287e28 FUN_144287e28 body=31 status=ok
// SIG undefined FUN_144287e28(void)

undefined8 FUN_144287e28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144287f86 FUN_144287f86 body=31 status=ok
// SIG undefined FUN_144287f86(void)

undefined8 FUN_144287f86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144287fa6 FUN_144287fa6 body=31 status=ok
// SIG undefined FUN_144287fa6(void)

undefined8 FUN_144287fa6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144287fc6 FUN_144287fc6 body=29 status=ok
// SIG undefined FUN_144287fc6(void)

undefined8 FUN_144287fc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144287ff8 FUN_144287ff8 body=93 status=ok
// SIG undefined FUN_144287ff8(void)

void FUN_144287ff8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b991aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b3bd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144288056 FUN_144288056 body=93 status=ok
// SIG undefined FUN_144288056(void)

void FUN_144288056(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b991aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b3bd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442880b4 FUN_1442880b4 body=126 status=ok
// SIG undefined FUN_1442880b4(void)

void FUN_1442880b4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b991aa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b3bd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144288123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428813c FUN_14428813c body=20 status=ok
// SIG undefined FUN_14428813c(void)

undefined1 FUN_14428813c(longlong param_1)

{
  FUN_144288150(param_1 + 0x18);
  return 1;
}



// FUNCTION 144288150 FUN_144288150 body=1940 status=ok
// SIG undefined FUN_144288150(void)

void FUN_144288150(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = *param_2;
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + 0x110) = uVar2;
  if ((int)uVar2 != 1) {
    if (*(longlong *)(lVar3 + 0xd0) != 0) {
      FUN_14480f766(param_1[1] + 0x228);
    }
    if (*(longlong *)(lVar3 + 0xd8) != 0) {
      FUN_14480f766(param_1[1] + 0x240);
    }
    if (*(longlong *)(lVar3 + 0xe0) != 0) {
      FUN_14480f766(param_1[1] + 600);
    }
    goto LAB_1442886d5;
  }
  plVar1 = (longlong *)(lVar3 + 0x130);
  *(undefined4 *)(lVar3 + 0x138) = 0;
  if (*(int *)(lVar3 + 0x13c) != 0) {
    FUN_14586ead8(plVar1);
  }
  FUN_14127bdbc(param_1[1],&local_58);
  puVar4 = local_58;
  if ((longlong)local_50 != 0) {
    lVar11 = 0;
    local_68 = param_1;
    do {
      uVar10 = 0;
      uVar12 = 0;
      if (*(longlong *)((longlong)puVar4 + lVar11) != 0) {
        uVar12 = *(uint *)(*(longlong *)((longlong)puVar4 + lVar11) + 0xc);
        uVar10 = (ulonglong)uVar12;
        if ((int)uVar12 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        uVar12 = *(uint *)(lVar9 + 0x10);
        if (*(uint *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          uVar12 = DAT_14c964868 + 1;
          bVar13 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar13) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar12);
          }
          LOCK();
          uVar5 = *(uint *)(lVar9 + 0x10);
          bVar13 = uVar5 == 0;
          if (bVar13) {
            *(uint *)(lVar9 + 0x10) = uVar12;
            uVar5 = 0;
          }
          UNLOCK();
          if (!bVar13) {
            uVar12 = uVar5;
          }
        }
      }
      iVar6 = *(int *)(lVar3 + 0x138);
      *(uint *)(lVar3 + 0x138) = iVar6 + 1U;
      if (*(uint *)(lVar3 + 0x13c) < iVar6 + 1U) {
        FUN_14586ef1e(plVar1,iVar6);
      }
      *(ulonglong *)(*plVar1 + (longlong)iVar6 * 8) = uVar10 | (ulonglong)uVar12 << 0x20;
      lVar11 = lVar11 + 8;
      param_1 = local_68;
    } while ((longlong)local_50 * 8 != lVar11);
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8(local_58);
  }
  lVar11 = FUN_14586ea88(param_1[1]);
  if (lVar11 == 0) {
    *(undefined4 *)(lVar3 + 0x140) = 0;
    iVar6 = 0;
  }
  else {
    uVar12 = *(uint *)(lVar11 + 0xc);
    *(uint *)(lVar3 + 0x140) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar6 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar6 = *(int *)(lVar11 + 0x10);
      bVar13 = iVar6 == 0;
      if (bVar13) {
        *(int *)(lVar11 + 0x10) = iVar8;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar6 = iVar8;
      }
    }
  }
  *(int *)(lVar3 + 0x144) = iVar6;
  lVar11 = param_1[1];
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar4 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14b4f38d0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_58[2] = lVar7;
  *local_58 = &PTR_FUN_14b9b3c40;
  local_58[3] = 0;
  iVar6 = 0;
  if (lVar3 != 0) {
    uVar12 = *(uint *)(lVar3 + 0xc);
    *(uint *)(local_58 + 3) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar6 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar6 = *(int *)(lVar9 + 0x10);
      bVar13 = iVar6 == 0;
      if (bVar13) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar6 = iVar8;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar6;
  puVar4[4] = lVar3;
  FUN_145a5cf80(lVar11 + 0x228,&local_60,&local_58);
  if (local_50 == 0) {
LAB_144288477:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_144288477;
  }
  *(undefined8 *)(lVar3 + 0xd0) = local_60;
  lVar11 = param_1[1];
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar4 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14b4f38d0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_58[2] = lVar7;
  *local_58 = &PTR_FUN_14b9b3cb0;
  local_58[3] = 0;
  iVar6 = 0;
  if (lVar3 != 0) {
    uVar12 = *(uint *)(lVar3 + 0xc);
    *(uint *)(local_58 + 3) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar6 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar6 = *(int *)(lVar9 + 0x10);
      bVar13 = iVar6 == 0;
      if (bVar13) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar6 = iVar8;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar6;
  puVar4[4] = lVar3;
  FUN_145a5cf80(lVar11 + 0x240,&local_60,&local_58);
  if (local_50 == 0) {
LAB_14428859c:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_14428859c;
  }
  *(undefined8 *)(lVar3 + 0xd8) = local_60;
  lVar11 = param_1[1];
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar4 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14b4f38d0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_58[2] = lVar7;
  *local_58 = &PTR_FUN_14b9b3d20;
  local_58[3] = 0;
  iVar6 = 0;
  if (lVar3 != 0) {
    uVar12 = *(uint *)(lVar3 + 0xc);
    *(uint *)(local_58 + 3) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar6 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar6 = *(int *)(lVar9 + 0x10);
      bVar13 = iVar6 == 0;
      if (bVar13) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar6 = iVar8;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar6;
  puVar4[4] = lVar3;
  FUN_145a5cf80(lVar11 + 600,&local_60,&local_58);
  if (local_50 == 0) {
LAB_1442886bb:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1442886bb;
  }
  *(undefined8 *)(lVar3 + 0xe0) = local_60;
LAB_1442886d5:
  if (*(int *)(lVar3 + 0x110) == 2) {
    FUN_14586f80e(lVar3);
    FUN_14586f32c(lVar3);
  }
  else {
    FUN_14586d264(lVar3);
  }
  FUN_14127c124(lVar3);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442888e6 FUN_1442888e6 body=29 status=ok
// SIG undefined FUN_1442888e6(void)

undefined8 FUN_1442888e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144288a82 FUN_144288a82 body=93 status=ok
// SIG undefined FUN_144288a82(void)

void FUN_144288a82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f38d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b3c40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144288ae0 FUN_144288ae0 body=93 status=ok
// SIG undefined FUN_144288ae0(void)

void FUN_144288ae0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f38d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b3c40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144288b3e FUN_144288b3e body=126 status=ok
// SIG undefined FUN_144288b3e(void)

void FUN_144288b3e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f38d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b3c40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144288bad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144288bbc FUN_144288bbc body=66 status=ok
// SIG undefined FUN_144288bbc(void)

void FUN_144288bbc(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144288d18(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144288c00 FUN_144288c00 body=279 status=ok
// SIG undefined FUN_144288c00(void)

undefined8 FUN_144288c00(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_144288d11;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144288d11;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144288d11:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144288cc5;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144288d18(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_144288cc5;
    }
  }
  uVar6 = 0;
LAB_144288cc5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144288d18 FUN_144288d18 body=238 status=ok
// SIG undefined FUN_144288d18(void)

void FUN_144288d18(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar2 = *param_1;
  if (*param_2 == 0) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar6 = *(uint *)(*param_2 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar5 = (ulonglong)*(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar3 = *(uint *)(lVar7 + 0x10);
      bVar8 = uVar3 == 0;
      if (bVar8) {
        *(uint *)(lVar7 + 0x10) = uVar4;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar3 = uVar4;
      }
      uVar5 = (ulonglong)uVar3;
    }
  }
  iVar1 = *(int *)(lVar2 + 0x138);
  *(uint *)(lVar2 + 0x138) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x13c) < iVar1 + 1U) {
    FUN_14586ef1e(lVar2 + 0x130,iVar1);
  }
  *(ulonglong *)(*(longlong *)(lVar2 + 0x130) + (longlong)iVar1 * 8) =
       (ulonglong)uVar6 | uVar5 << 0x20;
  FUN_14127c124(lVar2);
  return;
}



// FUNCTION 144288e06 FUN_144288e06 body=29 status=ok
// SIG undefined FUN_144288e06(void)

undefined8 FUN_144288e06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144288fa2 FUN_144288fa2 body=93 status=ok
// SIG undefined FUN_144288fa2(void)

void FUN_144288fa2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f38d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b3cb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144289000 FUN_144289000 body=93 status=ok
// SIG undefined FUN_144289000(void)

void FUN_144289000(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f38d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b3cb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14428905e FUN_14428905e body=126 status=ok
// SIG undefined FUN_14428905e(void)

void FUN_14428905e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f38d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b3cb0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442890cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442890dc FUN_1442890dc body=236 status=ok
// SIG undefined FUN_1442890dc(void)

void FUN_1442890dc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  uint *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x20);
  local_2c = 0;
  if (param_2 == 0) {
    local_30 = 0;
    iVar2 = 0;
  }
  else {
    local_30 = *(uint *)(param_2 + 0xc);
    if ((int)local_30 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((local_30 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  local_28 = &local_30;
  local_2c = iVar2;
  FUN_14602f172(lVar1 + 0x130);
  FUN_14127c124(lVar1);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442891ca FUN_1442891ca body=467 status=ok
// SIG undefined FUN_1442891ca(void)

undefined8 FUN_1442891ca(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  uint *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  uint local_48;
  int local_44;
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar2 != 2)) {
    if (iVar2 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144289372;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
    puVar6 = local_40;
  }
  else {
LAB_144289372:
    puVar6 = (uint *)0x0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_144289288;
    lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar8 != 0) &&
       ((*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
      lVar8 = *(longlong *)(param_1 + 0x20);
      local_44 = 0;
      if (param_2 == 0) {
        local_48 = 0;
        iVar2 = 0;
      }
      else {
        local_48 = *(uint *)(param_2 + 0xc);
        if ((int)local_48 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((local_48 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar2 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar2 = *(int *)(lVar9 + 0x10);
          bVar10 = iVar2 == 0;
          if (bVar10) {
            *(int *)(lVar9 + 0x10) = iVar7;
            iVar2 = 0;
          }
          UNLOCK();
          if (bVar10) {
            iVar2 = iVar7;
          }
        }
      }
      local_40 = &local_48;
      local_44 = iVar2;
      FUN_14602f172(lVar8 + 0x130);
      FUN_14127c124(lVar8);
      uVar5 = 1;
      goto LAB_144289288;
    }
  }
  uVar5 = 0;
LAB_144289288:
  if ((puVar6 != (uint *)0x0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(puVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14428939e FUN_14428939e body=29 status=ok
// SIG undefined FUN_14428939e(void)

undefined8 FUN_14428939e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428953a FUN_14428953a body=93 status=ok
// SIG undefined FUN_14428953a(void)

void FUN_14428953a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f38d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b3d20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144289598 FUN_144289598 body=93 status=ok
// SIG undefined FUN_144289598(void)

void FUN_144289598(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f38d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b3d20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442895f6 FUN_1442895f6 body=126 status=ok
// SIG undefined FUN_1442895f6(void)

void FUN_1442895f6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f38d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b3d20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144289665. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144289674 FUN_144289674 body=167 status=ok
// SIG undefined FUN_144289674(void)

void FUN_144289674(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (param_2 == 0) {
    *(undefined4 *)(lVar2 + 0x140) = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(lVar2 + 0x140) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar3 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar3 = *(int *)(lVar4 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar4 + 0x10) = iVar5;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar5;
      }
    }
  }
  *(int *)(lVar2 + 0x144) = iVar3;
  FUN_14127c124(lVar2);
  return;
}



// FUNCTION 14428971c FUN_14428971c body=435 status=ok
// SIG undefined FUN_14428971c(void)

undefined8 FUN_14428971c(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar2 != 2)) {
    if (iVar2 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442898a4;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar6 = local_38;
  }
  else {
LAB_1442898a4:
    lVar6 = 0;
  }
  iVar2 = DAT_14c9647dc;
  lVar9 = DAT_14c9647c8;
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_144289823;
    lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar8 != 0) &&
       ((*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
      lVar8 = *(longlong *)(param_1 + 0x20);
      if (param_2 == 0) {
        *(undefined4 *)(lVar8 + 0x140) = 0;
        iVar2 = 0;
      }
      else {
        uVar1 = *(uint *)(param_2 + 0xc);
        *(uint *)(lVar8 + 0x140) = uVar1;
        if ((int)uVar1 < iVar2) {
          lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(lVar9 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar2 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar2 = *(int *)(lVar9 + 0x10);
          bVar10 = iVar2 == 0;
          if (bVar10) {
            *(int *)(lVar9 + 0x10) = iVar7;
            iVar2 = 0;
          }
          UNLOCK();
          if (bVar10) {
            iVar2 = iVar7;
          }
        }
      }
      *(int *)(lVar8 + 0x144) = iVar2;
      FUN_14127c124(lVar8);
      uVar5 = 1;
      goto LAB_144289823;
    }
  }
  uVar5 = 0;
LAB_144289823:
  if ((lVar6 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1442898d0 FUN_1442898d0 body=29 status=ok
// SIG undefined FUN_1442898d0(void)

undefined8 FUN_1442898d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144289902 FUN_144289902 body=93 status=ok
// SIG undefined FUN_144289902(void)

void FUN_144289902(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9b5d60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b3d90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144289960 FUN_144289960 body=93 status=ok
// SIG undefined FUN_144289960(void)

void FUN_144289960(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9b5d60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b3d90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442899be FUN_1442899be body=126 status=ok
// SIG undefined FUN_1442899be(void)

void FUN_1442899be(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9b5d60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b3d90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144289a2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144289a3c FUN_144289a3c body=37 status=ok
// SIG undefined FUN_144289a3c(void)

void FUN_144289a3c(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = FUN_140b6d060(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(lVar1 + 0x1c8) = uVar2;
  FUN_14127c124(lVar1);
  return;
}



// FUNCTION 144289a62 FUN_144289a62 body=40 status=ok
// SIG undefined FUN_144289a62(void)

undefined1 FUN_144289a62(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = FUN_140b6d060(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(lVar1 + 0x1c8) = uVar2;
  FUN_14127c124(lVar1);
  return 1;
}



// FUNCTION 144289a8a FUN_144289a8a body=29 status=ok
// SIG undefined FUN_144289a8a(void)

undefined8 FUN_144289a8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144289abc FUN_144289abc body=93 status=ok
// SIG undefined FUN_144289abc(void)

void FUN_144289abc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b3e00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144289b1a FUN_144289b1a body=93 status=ok
// SIG undefined FUN_144289b1a(void)

void FUN_144289b1a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b3e00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144289b78 FUN_144289b78 body=126 status=ok
// SIG undefined FUN_144289b78(void)

void FUN_144289b78(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b3e00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144289be7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144289bf6 FUN_144289bf6 body=37 status=ok
// SIG undefined FUN_144289bf6(void)

void FUN_144289bf6(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = FUN_140b6d060(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(lVar1 + 0x1c8) = uVar2;
  FUN_14127c124(lVar1);
  return;
}



// FUNCTION 144289c1c FUN_144289c1c body=40 status=ok
// SIG undefined FUN_144289c1c(void)

undefined1 FUN_144289c1c(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = FUN_140b6d060(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(lVar1 + 0x1c8) = uVar2;
  FUN_14127c124(lVar1);
  return 1;
}



// FUNCTION 144289c44 FUN_144289c44 body=29 status=ok
// SIG undefined FUN_144289c44(void)

undefined8 FUN_144289c44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144289c76 FUN_144289c76 body=93 status=ok
// SIG undefined FUN_144289c76(void)

void FUN_144289c76(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b3e70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144289cd4 FUN_144289cd4 body=93 status=ok
// SIG undefined FUN_144289cd4(void)

void FUN_144289cd4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b3e70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144289d32 FUN_144289d32 body=126 status=ok
// SIG undefined FUN_144289d32(void)

void FUN_144289d32(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b3e70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144289da1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144289db0 FUN_144289db0 body=34 status=ok
// SIG undefined FUN_144289db0(void)

void FUN_144289db0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_14586ee3a(uVar1,*(undefined8 *)(param_1 + 0x20));
  FUN_14127c124(uVar1);
  return;
}



// FUNCTION 144289dd2 FUN_144289dd2 body=37 status=ok
// SIG undefined FUN_144289dd2(void)

undefined1 FUN_144289dd2(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_14586ee3a(uVar1,*(undefined8 *)(param_1 + 0x20));
  FUN_14127c124(uVar1);
  return 1;
}



// FUNCTION 144289df8 FUN_144289df8 body=29 status=ok
// SIG undefined FUN_144289df8(void)

undefined8 FUN_144289df8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144289e2a FUN_144289e2a body=93 status=ok
// SIG undefined FUN_144289e2a(void)

void FUN_144289e2a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b3ee0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144289e88 FUN_144289e88 body=93 status=ok
// SIG undefined FUN_144289e88(void)

void FUN_144289e88(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b3ee0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144289ee6 FUN_144289ee6 body=126 status=ok
// SIG undefined FUN_144289ee6(void)

void FUN_144289ee6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b3ee0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144289f55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144289f64 FUN_144289f64 body=34 status=ok
// SIG undefined FUN_144289f64(void)

void FUN_144289f64(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_14586ee3a(uVar1,*(undefined8 *)(param_1 + 0x20));
  FUN_14127c124(uVar1);
  return;
}



// FUNCTION 144289f86 FUN_144289f86 body=37 status=ok
// SIG undefined FUN_144289f86(void)

undefined1 FUN_144289f86(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_14586ee3a(uVar1,*(undefined8 *)(param_1 + 0x20));
  FUN_14127c124(uVar1);
  return 1;
}



// FUNCTION 144289fac FUN_144289fac body=29 status=ok
// SIG undefined FUN_144289fac(void)

undefined8 FUN_144289fac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144289fde FUN_144289fde body=93 status=ok
// SIG undefined FUN_144289fde(void)

void FUN_144289fde(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b971db0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b3f50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14428a03c FUN_14428a03c body=93 status=ok
// SIG undefined FUN_14428a03c(void)

void FUN_14428a03c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b971db0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b3f50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14428a09a FUN_14428a09a body=126 status=ok
// SIG undefined FUN_14428a09a(void)

void FUN_14428a09a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b971db0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b3f50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014428a109. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428a118 FUN_14428a118 body=34 status=ok
// SIG undefined FUN_14428a118(void)

void FUN_14428a118(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_14586ee3a(uVar1,*(undefined8 *)(param_1 + 0x20));
  FUN_146642de8(uVar1);
  return;
}



// FUNCTION 14428a13a FUN_14428a13a body=37 status=ok
// SIG undefined FUN_14428a13a(void)

undefined1 FUN_14428a13a(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_14586ee3a(uVar1,*(undefined8 *)(param_1 + 0x20));
  FUN_146642de8(uVar1);
  return 1;
}



// FUNCTION 14428a160 FUN_14428a160 body=29 status=ok
// SIG undefined FUN_14428a160(void)

undefined8 FUN_14428a160(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428a192 FUN_14428a192 body=93 status=ok
// SIG undefined FUN_14428a192(void)

void FUN_14428a192(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9b4030;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b3fc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14428a1f0 FUN_14428a1f0 body=93 status=ok
// SIG undefined FUN_14428a1f0(void)

void FUN_14428a1f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9b4030;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b3fc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14428a24e FUN_14428a24e body=126 status=ok
// SIG undefined FUN_14428a24e(void)

void FUN_14428a24e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9b4030;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b3fc0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014428a2bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428a2cc FUN_14428a2cc body=34 status=ok
// SIG undefined FUN_14428a2cc(void)

void FUN_14428a2cc(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_14586ee3a(uVar1,*(undefined8 *)(param_1 + 0x20));
  FUN_146642de8(uVar1);
  return;
}



// FUNCTION 14428a2ee FUN_14428a2ee body=37 status=ok
// SIG undefined FUN_14428a2ee(void)

undefined1 FUN_14428a2ee(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_14586ee3a(uVar1,*(undefined8 *)(param_1 + 0x20));
  FUN_146642de8(uVar1);
  return 1;
}



// FUNCTION 14428a314 FUN_14428a314 body=29 status=ok
// SIG undefined FUN_14428a314(void)

undefined8 FUN_14428a314(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428a346 FUN_14428a346 body=93 status=ok
// SIG undefined FUN_14428a346(void)

void FUN_14428a346(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9b4110;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b40a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14428a3a4 FUN_14428a3a4 body=93 status=ok
// SIG undefined FUN_14428a3a4(void)

void FUN_14428a3a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9b4110;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b40a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14428a402 FUN_14428a402 body=126 status=ok
// SIG undefined FUN_14428a402(void)

void FUN_14428a402(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9b4110;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b40a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014428a471. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428a480 FUN_14428a480 body=34 status=ok
// SIG undefined FUN_14428a480(void)

void FUN_14428a480(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_14586f4f6(uVar1,*(undefined8 *)(param_1 + 0x20));
  FUN_14127c124(uVar1);
  return;
}



// FUNCTION 14428a4a2 FUN_14428a4a2 body=37 status=ok
// SIG undefined FUN_14428a4a2(void)

undefined1 FUN_14428a4a2(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_14586f4f6(uVar1,*(undefined8 *)(param_1 + 0x20));
  FUN_14127c124(uVar1);
  return 1;
}



// FUNCTION 14428a4c8 FUN_14428a4c8 body=29 status=ok
// SIG undefined FUN_14428a4c8(void)

undefined8 FUN_14428a4c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428a4fa FUN_14428a4fa body=93 status=ok
// SIG undefined FUN_14428a4fa(void)

void FUN_14428a4fa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b4180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14428a558 FUN_14428a558 body=93 status=ok
// SIG undefined FUN_14428a558(void)

void FUN_14428a558(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b4180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14428a5b6 FUN_14428a5b6 body=126 status=ok
// SIG undefined FUN_14428a5b6(void)

void FUN_14428a5b6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b4180;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014428a625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428a634 FUN_14428a634 body=34 status=ok
// SIG undefined FUN_14428a634(void)

void FUN_14428a634(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_14586f4f6(uVar1,*(undefined8 *)(param_1 + 0x20));
  FUN_14127c124(uVar1);
  return;
}



// FUNCTION 14428a656 FUN_14428a656 body=37 status=ok
// SIG undefined FUN_14428a656(void)

undefined1 FUN_14428a656(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_14586f4f6(uVar1,*(undefined8 *)(param_1 + 0x20));
  FUN_14127c124(uVar1);
  return 1;
}



// FUNCTION 14428a67c FUN_14428a67c body=29 status=ok
// SIG undefined FUN_14428a67c(void)

undefined8 FUN_14428a67c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428a6ae FUN_14428a6ae body=93 status=ok
// SIG undefined FUN_14428a6ae(void)

void FUN_14428a6ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b41f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14428a70c FUN_14428a70c body=93 status=ok
// SIG undefined FUN_14428a70c(void)

void FUN_14428a70c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b41f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14428a76a FUN_14428a76a body=126 status=ok
// SIG undefined FUN_14428a76a(void)

void FUN_14428a76a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b412d70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b41f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014428a7d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428a7f2 FUN_14428a7f2 body=20 status=ok
// SIG undefined FUN_14428a7f2(void)

undefined1 FUN_14428a7f2(longlong param_1)

{
  FUN_14127c124(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14428a806 FUN_14428a806 body=29 status=ok
// SIG undefined FUN_14428a806(void)

undefined8 FUN_14428a806(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428a838 FUN_14428a838 body=93 status=ok
// SIG undefined FUN_14428a838(void)

void FUN_14428a838(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4260;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14428a896 FUN_14428a896 body=93 status=ok
// SIG undefined FUN_14428a896(void)

void FUN_14428a896(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4260;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14428a8f4 FUN_14428a8f4 body=126 status=ok
// SIG undefined FUN_14428a8f4(void)

void FUN_14428a8f4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b412d70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b4260;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014428a963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428a97c FUN_14428a97c body=20 status=ok
// SIG undefined FUN_14428a97c(void)

undefined1 FUN_14428a97c(longlong param_1)

{
  FUN_14127c124(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14428a990 FUN_14428a990 body=29 status=ok
// SIG undefined FUN_14428a990(void)

undefined8 FUN_14428a990(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428a9c2 FUN_14428a9c2 body=93 status=ok
// SIG undefined FUN_14428a9c2(void)

void FUN_14428a9c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b42d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14428aa20 FUN_14428aa20 body=93 status=ok
// SIG undefined FUN_14428aa20(void)

void FUN_14428aa20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b42d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14428aa7e FUN_14428aa7e body=126 status=ok
// SIG undefined FUN_14428aa7e(void)

void FUN_14428aa7e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b412d70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b42d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014428aaed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428ab06 FUN_14428ab06 body=20 status=ok
// SIG undefined FUN_14428ab06(void)

undefined1 FUN_14428ab06(longlong param_1)

{
  FUN_14127c124(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14428ab1a FUN_14428ab1a body=29 status=ok
// SIG undefined FUN_14428ab1a(void)

undefined8 FUN_14428ab1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428acb6 FUN_14428acb6 body=93 status=ok
// SIG undefined FUN_14428acb6(void)

void FUN_14428acb6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4340;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14428ad14 FUN_14428ad14 body=93 status=ok
// SIG undefined FUN_14428ad14(void)

void FUN_14428ad14(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4340;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14428ad72 FUN_14428ad72 body=126 status=ok
// SIG undefined FUN_14428ad72(void)

void FUN_14428ad72(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b961ce0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b4340;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014428ade1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428adf0 FUN_14428adf0 body=66 status=ok
// SIG undefined FUN_14428adf0(void)

void FUN_14428adf0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_14428af56(param_1 + 0x20,param_2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14428ae34 FUN_14428ae34 body=288 status=ok
// SIG undefined FUN_14428ae34(void)

undefined8 FUN_14428ae34(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_3;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14428af4e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14428af4e;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14428af4e:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14428af01;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14428af56(param_1 + 0x20,param_2,&local_38);
      uVar6 = 1;
      goto LAB_14428af01;
    }
  }
  uVar6 = 0;
LAB_14428af01:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14428af56 FUN_14428af56 body=74 status=ok
// SIG undefined FUN_14428af56(void)

void FUN_14428af56(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *param_3;
  plVar2 = (longlong *)*param_1;
  lVar3 = FUN_1447210f0(param_2);
  lVar4 = (**(code **)(*plVar2 + 0x180))(plVar2);
  if (lVar3 == lVar4) {
    lVar3 = FUN_1401e6c61();
    if (lVar3 == lVar1) {
      FUN_146642de8(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14428afa0 FUN_14428afa0 body=29 status=ok
// SIG undefined FUN_14428afa0(void)

undefined8 FUN_14428afa0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428b13c FUN_14428b13c body=93 status=ok
// SIG undefined FUN_14428b13c(void)

void FUN_14428b13c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968eb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b43b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14428b19a FUN_14428b19a body=93 status=ok
// SIG undefined FUN_14428b19a(void)

void FUN_14428b19a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968eb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b43b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14428b1f8 FUN_14428b1f8 body=126 status=ok
// SIG undefined FUN_14428b1f8(void)

void FUN_14428b1f8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b968eb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b43b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014428b267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428b276 FUN_14428b276 body=64 status=ok
// SIG undefined FUN_14428b276(void)

void FUN_14428b276(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x20);
    lVar2 = FUN_1447210f0(param_2);
    lVar3 = (**(code **)(*plVar1 + 0x180))(plVar1);
    if (lVar2 == lVar3) {
      FUN_146642de8(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14428b2b6 FUN_14428b2b6 body=308 status=ok
// SIG undefined FUN_14428b2b6(void)

undefined8 FUN_14428b2b6(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14428b3e4;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_14428b3e4;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar9 = local_30;
  }
  else {
LAB_14428b3e4:
    lVar9 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14428b365;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      uVar8 = 1;
      if (param_2 != 0) {
        plVar3 = *(longlong **)(param_1 + 0x20);
        lVar7 = FUN_1447210f0(param_2);
        lVar6 = (**(code **)(*plVar3 + 0x180))(plVar3);
        if (lVar7 == lVar6) {
          FUN_146642de8(plVar3);
        }
      }
      goto LAB_14428b365;
    }
  }
  uVar8 = 0;
LAB_14428b365:
  if ((lVar9 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar9);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14428b3ec FUN_14428b3ec body=29 status=ok
// SIG undefined FUN_14428b3ec(void)

undefined8 FUN_14428b3ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428b41e FUN_14428b41e body=93 status=ok
// SIG undefined FUN_14428b41e(void)

void FUN_14428b41e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b978e50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4420;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14428b47c FUN_14428b47c body=93 status=ok
// SIG undefined FUN_14428b47c(void)

void FUN_14428b47c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b978e50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4420;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14428b4da FUN_14428b4da body=126 status=ok
// SIG undefined FUN_14428b4da(void)

void FUN_14428b4da(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b978e50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b4420;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014428b549. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428b558 FUN_14428b558 body=66 status=ok
// SIG undefined FUN_14428b558(void)

void FUN_14428b558(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_14428b5e2(param_1 + 0x18,param_2,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14428b59c FUN_14428b59c body=68 status=ok
// SIG undefined FUN_14428b59c(void)

undefined8 FUN_14428b59c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_14428b5e2(param_1 + 0x18,param_2,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14428b5e2 FUN_14428b5e2 body=232 status=ok
// SIG undefined FUN_14428b5e2(void)

void FUN_14428b5e2(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  PSRWLOCK local_50;
  int local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *param_3;
  uVar4 = *param_1;
  FUN_1402815f4(uVar4,&local_60);
  lVar5 = *(longlong *)(local_60 + 0x110);
  local_50 = (PSRWLOCK)(lVar5 + 0x100);
  local_48 = 1;
  AcquireSRWLockExclusive(local_50);
  *(int *)(lVar5 + 0xf8) = *(int *)(lVar5 + 0xf8) + 1;
  local_38 = 1;
  local_40 = lVar5;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  FUN_146642ebc(uVar4,&local_50,param_2,uVar3);
  if (local_48 != 0) {
    if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014428b6b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive(local_50);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
}



// FUNCTION 14428b6e0 FUN_14428b6e0 body=29 status=ok
// SIG undefined FUN_14428b6e0(void)

undefined8 FUN_14428b6e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428b712 FUN_14428b712 body=93 status=ok
// SIG undefined FUN_14428b712(void)

void FUN_14428b712(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4490;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14428b770 FUN_14428b770 body=93 status=ok
// SIG undefined FUN_14428b770(void)

void FUN_14428b770(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4490;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14428b7ce FUN_14428b7ce body=126 status=ok
// SIG undefined FUN_14428b7ce(void)

void FUN_14428b7ce(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b4490;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014428b83d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428b84c FUN_14428b84c body=66 status=ok
// SIG undefined FUN_14428b84c(void)

void FUN_14428b84c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14428b8d6(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14428b890 FUN_14428b890 body=68 status=ok
// SIG undefined FUN_14428b890(void)

undefined8 FUN_14428b890(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14428b8d6(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14428b8d6 FUN_14428b8d6 body=2732 status=ok
// SIG undefined FUN_14428b8d6(void)

void FUN_14428b8d6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  wchar_t *pwVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  ushort uVar16;
  ulonglong uVar17;
  ushort uVar18;
  bool bVar19;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  wchar_t **local_80;
  undefined1 *local_78;
  code *local_70;
  longlong local_68 [2];
  wchar_t *local_58;
  longlong *plStack_50;
  wchar_t *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar9 = *(int *)(*param_2 + 0x28);
  if (iVar9 < 2) goto LAB_14428b902;
  lVar5 = *param_1;
  plVar14 = (longlong *)(*param_2 + 0x20);
  if (iVar9 == DAT_14cbd7718) {
    lVar15 = 0;
    while( true ) {
      uVar16 = *(ushort *)(*plVar14 + lVar15);
      uVar12 = (ulonglong)uVar16;
      uVar18 = *(ushort *)(DAT_14cbd7710 + lVar15);
      if (uVar16 != uVar18) break;
      if (uVar16 == 0) goto LAB_14428b993;
LAB_14428b968:
      lVar15 = lVar15 + 2;
    }
    if ((uVar18 | uVar16) < 0x80) {
      uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
      uVar17 = (ulonglong)uVar18;
      uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
      if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar17]) goto LAB_14428b968;
    }
    if (uVar16 != uVar18) goto LAB_14428b9c7;
LAB_14428b993:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_d8);
  }
  if (DAT_14cbd7718 + iVar9 == 1) goto LAB_14428b993;
LAB_14428b9c7:
  if (iVar9 == DAT_14cbd76f8) {
    lVar15 = 0;
    while( true ) {
      uVar16 = *(ushort *)(*plVar14 + lVar15);
      uVar12 = (ulonglong)uVar16;
      uVar18 = *(ushort *)(DAT_14cbd76f0 + lVar15);
      if (uVar16 != uVar18) break;
      if (uVar16 == 0) goto LAB_14428bac9;
LAB_14428ba02:
      lVar15 = lVar15 + 2;
    }
    if ((uVar18 | uVar16) < 0x80) {
      uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
      uVar17 = (ulonglong)uVar18;
      uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
      if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar17]) goto LAB_14428ba02;
    }
    if (uVar16 != uVar18) goto LAB_14428ba31;
  }
  else if (DAT_14cbd76f8 + iVar9 != 1) {
LAB_14428ba31:
    if (iVar9 == DAT_14cbd7708) {
      lVar15 = 0;
      while( true ) {
        uVar16 = *(ushort *)(*plVar14 + lVar15);
        uVar12 = (ulonglong)uVar16;
        uVar18 = *(ushort *)(DAT_14cbd7700 + lVar15);
        if (uVar16 != uVar18) break;
        if (uVar16 == 0) goto LAB_14428ba97;
LAB_14428ba68:
        lVar15 = lVar15 + 2;
      }
      if ((uVar18 | uVar16) < 0x80) {
        uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        uVar17 = (ulonglong)uVar18;
        uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
        if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar17]) goto LAB_14428ba68;
      }
      if (uVar16 != uVar18) goto LAB_14428bb3b;
LAB_14428ba97:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_d8);
    }
    if (DAT_14cbd7708 + iVar9 == 1) goto LAB_14428ba97;
LAB_14428bb3b:
    if (iVar9 == DAT_14cbd7728) {
      lVar15 = 0;
      while( true ) {
        uVar16 = *(ushort *)(*plVar14 + lVar15);
        uVar12 = (ulonglong)uVar16;
        uVar18 = *(ushort *)(DAT_14cbd7720 + lVar15);
        if (uVar16 != uVar18) break;
        if (uVar16 == 0) goto LAB_14428bc3d;
LAB_14428bb76:
        lVar15 = lVar15 + 2;
      }
      if ((uVar18 | uVar16) < 0x80) {
        uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        uVar17 = (ulonglong)uVar18;
        uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
        if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar17]) goto LAB_14428bb76;
      }
      if (uVar16 != uVar18) goto LAB_14428bba5;
    }
    else if (DAT_14cbd7728 + iVar9 != 1) {
LAB_14428bba5:
      if (iVar9 == DAT_14cbd7738) {
        lVar15 = 0;
        while( true ) {
          uVar16 = *(ushort *)(*plVar14 + lVar15);
          uVar12 = (ulonglong)uVar16;
          uVar18 = *(ushort *)(DAT_14cbd7730 + lVar15);
          if (uVar16 != uVar18) break;
          if (uVar16 == 0) goto LAB_14428bc0b;
LAB_14428bbdc:
          lVar15 = lVar15 + 2;
        }
        if ((uVar18 | uVar16) < 0x80) {
          uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          uVar17 = (ulonglong)uVar18;
          uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
          if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar17]) goto LAB_14428bbdc;
        }
        if (uVar16 != uVar18) goto LAB_14428bd1b;
LAB_14428bc0b:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_d8);
      }
      if (DAT_14cbd7738 + iVar9 == 1) goto LAB_14428bc0b;
LAB_14428bd1b:
      if (iVar9 == DAT_14cbd7748) {
        lVar15 = 0;
        while( true ) {
          uVar16 = *(ushort *)(*plVar14 + lVar15);
          uVar12 = (ulonglong)uVar16;
          uVar18 = *(ushort *)(DAT_14cbd7740 + lVar15);
          if (uVar16 != uVar18) break;
          if (uVar16 == 0) goto LAB_14428bdb0;
LAB_14428bd51:
          lVar15 = lVar15 + 2;
        }
        if ((uVar18 | uVar16) < 0x80) {
          uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          uVar17 = (ulonglong)uVar18;
          uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
          if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar17]) goto LAB_14428bd51;
        }
        if (uVar16 != uVar18) goto LAB_14428bd7d;
      }
      else if (DAT_14cbd7748 + iVar9 != 1) {
LAB_14428bd7d:
        uVar11 = DAT_14cbd7758 - 1;
        if (DAT_14cbd7758 == 0) {
          uVar11 = 0;
        }
        if ((int)uVar11 < 1) {
LAB_14428be8e:
          uVar11 = DAT_14cbd7768 - 1;
          if (DAT_14cbd7768 == 0) {
            uVar11 = 0;
          }
          if ((int)uVar11 < 1) {
LAB_14428c042:
            FUN_140cb2ecc(&local_48,plVar14);
            plVar14 = plStack_40;
            if (local_48 != (wchar_t *)0x0) {
              local_58 = local_48;
              plStack_50 = plStack_40;
              if (plStack_40 == (longlong *)0x0) {
                FUN_14586c094(lVar5,&local_58);
              }
              else {
                LOCK();
                *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
                UNLOCK();
                FUN_14586c094(lVar5);
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar14 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
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
              }
              plVar14 = plStack_40;
              local_58 = local_48;
              plStack_50 = plStack_40;
              if (plStack_40 == (longlong *)0x0) {
                FUN_145ed7c90(lVar5,&local_58);
              }
              else {
                LOCK();
                *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
                UNLOCK();
                FUN_145ed7c90(lVar5);
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar14 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
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
              }
            }
            plVar14 = plStack_40;
            if (plStack_40 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_40 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_40)(plStack_40);
                LOCK();
                piVar2 = (int *)((longlong)plVar14 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar14 + 0x10))(plVar14);
                }
              }
            }
            goto LAB_14428b902;
          }
          puVar8 = DAT_14cbd7760;
          if (DAT_14cbd7768 == 0) {
            puVar8 = &DAT_149dfb77a;
          }
          uVar12 = (ulonglong)uVar11;
          lVar15 = 0;
          while( true ) {
            uVar16 = *(ushort *)(*plVar14 + lVar15);
            uVar17 = (ulonglong)uVar16;
            uVar18 = *(ushort *)((longlong)puVar8 + lVar15);
            if (uVar16 != uVar18) break;
            if (uVar16 == 0) goto LAB_14428c09c;
LAB_14428c00e:
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_14428c09c;
            lVar15 = lVar15 + 2;
          }
          if ((uVar18 | uVar16) < 0x80) {
            uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
            uVar13 = (ulonglong)uVar18;
            uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
            if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar13]) goto LAB_14428c00e;
          }
          if (uVar16 != uVar18) goto LAB_14428c042;
LAB_14428c09c:
          local_48 = (wchar_t *)0x0;
          plStack_40 = (longlong *)0x0;
          local_58 = (wchar_t *)0x0;
          plStack_50 = (longlong *)0x0;
          FUN_140056680(local_68,&DAT_149e31048);
          local_b0 = 0;
          local_b8 = 1;
          cVar4 = FUN_1407cdbc6(plVar14,local_68,&local_48,&local_58);
          if (cVar4 == '\0') goto LAB_14428c11e;
          iVar9 = (int)plStack_50;
          if (local_68[0] != 0) {
            FUN_1400020a8();
          }
          if (1 < iVar9) {
            pwVar10 = local_58;
            if ((int)plStack_50 == 0) {
              pwVar10 = L"";
            }
            uVar11 = _wtoi(pwVar10);
            if (*(int *)(lVar5 + 0x238) != *(int *)(lVar5 + 0x264)) {
              lVar15 = lVar5 + 0x268;
              if (*(longlong *)(lVar5 + 0x270) != 0) {
                lVar15 = *(longlong *)(lVar5 + 0x270);
              }
              iVar9 = *(int *)(lVar15 + (ulonglong)(*(int *)(lVar5 + 0x278) - 1U & uVar11 & 0xff) *
                                        4);
              if (iVar9 != -1) {
                do {
                  lVar15 = *(longlong *)(lVar5 + 0x230) + (longlong)iVar9 * 0x10;
                  if (*(char *)(*(longlong *)(lVar5 + 0x230) + (longlong)iVar9 * 0x10) ==
                      (char)uVar11) goto LAB_14428c1c1;
                  iVar9 = *(int *)(lVar15 + 8);
                } while (iVar9 != -1);
              }
            }
            lVar15 = 0;
LAB_14428c1c1:
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
            goto LAB_14428bfd2;
          }
        }
        else {
          puVar8 = DAT_14cbd7750;
          if (DAT_14cbd7758 == 0) {
            puVar8 = &DAT_149dfb77a;
          }
          uVar12 = (ulonglong)uVar11;
          lVar15 = 0;
          while( true ) {
            uVar16 = *(ushort *)(*plVar14 + lVar15);
            uVar17 = (ulonglong)uVar16;
            uVar18 = *(ushort *)((longlong)puVar8 + lVar15);
            if (uVar16 != uVar18) break;
            if (uVar16 == 0) goto LAB_14428beb8;
LAB_14428be60:
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_14428beb8;
            lVar15 = lVar15 + 2;
          }
          if ((uVar18 | uVar16) < 0x80) {
            uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
            uVar13 = (ulonglong)uVar18;
            uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
            if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar13]) goto LAB_14428be60;
          }
          if (uVar16 != uVar18) goto LAB_14428be8e;
LAB_14428beb8:
          local_48 = (wchar_t *)0x0;
          plStack_40 = (longlong *)0x0;
          local_58 = (wchar_t *)0x0;
          plStack_50 = (longlong *)0x0;
          FUN_140056680(local_68,&DAT_149e31048);
          local_b0 = 0;
          local_b8 = 1;
          cVar4 = FUN_1407cdbc6(plVar14,local_68,&local_48,&local_58);
          if (cVar4 == '\0') {
LAB_14428c11e:
            if (local_68[0] != 0) {
              FUN_1400020a8();
            }
          }
          else {
            iVar9 = (int)plStack_50;
            if (local_68[0] != 0) {
              FUN_1400020a8();
            }
            if (1 < iVar9) {
              pwVar10 = local_58;
              if ((int)plStack_50 == 0) {
                pwVar10 = L"";
              }
              uVar11 = _wtoi(pwVar10);
              if (*(int *)(lVar5 + 0x238) != *(int *)(lVar5 + 0x264)) {
                lVar15 = lVar5 + 0x268;
                if (*(longlong *)(lVar5 + 0x270) != 0) {
                  lVar15 = *(longlong *)(lVar5 + 0x270);
                }
                iVar9 = *(int *)(lVar15 + (ulonglong)(*(int *)(lVar5 + 0x278) - 1U & uVar11 & 0xff)
                                          * 4);
                if (iVar9 != -1) {
                  do {
                    lVar15 = *(longlong *)(lVar5 + 0x230) + (longlong)iVar9 * 0x10;
                    if (*(char *)(*(longlong *)(lVar5 + 0x230) + (longlong)iVar9 * 0x10) ==
                        (char)uVar11) goto LAB_14428bfbf;
                    iVar9 = *(int *)(lVar15 + 8);
                  } while (iVar9 != -1);
                }
              }
              lVar15 = 0;
LAB_14428bfbf:
              iVar9 = 1;
              if (1 < *(int *)(lVar15 + 4)) {
                iVar9 = *(int *)(lVar15 + 4);
              }
              *(int *)(lVar15 + 4) = iVar9 + -1;
LAB_14428bfd2:
              FUN_14127c124(lVar5);
            }
          }
        }
        if (local_58 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (local_48 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_14428b902;
      }
LAB_14428bdb0:
      uVar6 = FUN_140059518(lVar5 + 0x44);
      lVar15 = FUN_1404960a8(uVar6);
      if (lVar15 == 0) goto LAB_14428b902;
      plVar14 = (longlong *)FUN_1408bb964(lVar5 + 0x44);
      if (plVar14 == (longlong *)0x0) {
LAB_14428be0f:
        bVar19 = false;
      }
      else {
        if (DAT_14cb5e538 == 0) {
          local_80 = &local_48;
          local_48 = 
          L"襉䣐쪉腈Á\x01\xe900\xf2d4ﻸ坁噁坖䡓\xec83䰰캉襈䣗쮉譈അ\xf41c䠊\xe031襈⑄䠨䲍․襌䠁ᖍ剞ऒ끁\xe801⣦＜삄浵赈༕ቔ䠉䲍․끁\xe801⣎＜삄屵赈㴕ቒ䠉䲍․끁\xe801⢶＜삄䭵赈㤕ቒ䠉䲍․끁\xe801⢞＜삄㩵譈⑌䠨\xe131㭈錍\xf41b甊ㄎ䣀쒃嬰幟幁彁\xe8c3藞͜료ʠ"
          ;
          local_70 = FUN_14081d0ea;
          local_78 = &LAB_1417ad04a;
          local_88 = &LAB_1486a7af7;
          local_90 = &LAB_1464e1631;
          local_98 = &DAT_149e063b2;
          local_a0 = 0;
          local_a8 = 0x1000000c;
          local_b0 = 8;
          local_b8 = 0x420;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
        }
        if ((*(int *)(plVar14[2] + 0x38) < *(int *)(DAT_14cb5e538 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(plVar14[2] + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) !=
            DAT_14cb5e538 + 0x30)) goto LAB_14428be0f;
        bVar3 = (**(code **)(*plVar14 + 0x498))(plVar14);
        bVar19 = 5 < bVar3;
      }
      puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar7 = &PTR_FUN_14b9b44f8;
      *(bool *)(puVar7 + 1) = bVar19;
      goto LAB_14428bce6;
    }
LAB_14428bc3d:
    uVar6 = FUN_140059518(lVar5 + 0x44);
    lVar15 = FUN_1404960a8(uVar6);
    if (lVar15 != 0) {
      plVar14 = (longlong *)FUN_1408bb964(lVar5 + 0x44);
      if (plVar14 != (longlong *)0x0) {
        if (DAT_14cb5e538 == 0) {
          local_80 = &local_48;
          local_48 = 
          L"襉䣐쪉腈Á\x01\xe900\xf2d4ﻸ坁噁坖䡓\xec83䰰캉襈䣗쮉譈അ\xf41c䠊\xe031襈⑄䠨䲍․襌䠁ᖍ剞ऒ끁\xe801⣦＜삄浵赈༕ቔ䠉䲍․끁\xe801⣎＜삄屵赈㴕ቒ䠉䲍․끁\xe801⢶＜삄䭵赈㤕ቒ䠉䲍․끁\xe801⢞＜삄㩵譈⑌䠨\xe131㭈錍\xf41b甊ㄎ䣀쒃嬰幟幁彁\xe8c3藞͜료ʠ"
          ;
          local_70 = FUN_14081d0ea;
          local_78 = &LAB_1417ad04a;
          local_88 = &LAB_1486a7af7;
          local_90 = &LAB_1464e1631;
          local_98 = &DAT_149e063b2;
          local_a0 = 0;
          local_a8 = 0x1000000c;
          local_b0 = 8;
          local_b8 = 0x420;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
        }
        if (((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(plVar14[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar14[2] + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) ==
             DAT_14cb5e538 + 0x30)) && (bVar3 = (**(code **)(*plVar14 + 0x498))(plVar14), bVar3 < 6)
           ) {
          puVar7 = (undefined8 *)FUN_14001cc68(8,0x10);
          *puVar7 = &PTR_FUN_14b98d1e0;
          goto LAB_14428bce6;
        }
      }
      puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar7 = &PTR_FUN_14b98d208;
      *(undefined1 *)(puVar7 + 1) = 0;
LAB_14428bce6:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_d8);
    }
    goto LAB_14428b902;
  }
LAB_14428bac9:
  lVar5 = FUN_140059518(lVar5 + 0x44);
  if (lVar5 != 0) {
    lVar15 = FUN_14030d4a0();
    if ((*(int *)(lVar15 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8)
        == lVar15 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_d8);
    }
  }
LAB_14428b902:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14428c3fa FUN_14428c3fa body=29 status=ok
// SIG undefined FUN_14428c3fa(void)

undefined8 FUN_14428c3fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428c42c FUN_14428c42c body=93 status=ok
// SIG undefined FUN_14428c42c(void)

void FUN_14428c42c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4510;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14428c48a FUN_14428c48a body=93 status=ok
// SIG undefined FUN_14428c48a(void)

void FUN_14428c48a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4510;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14428c4e8 FUN_14428c4e8 body=126 status=ok
// SIG undefined FUN_14428c4e8(void)

void FUN_14428c4e8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b4510;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014428c557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428c570 FUN_14428c570 body=20 status=ok
// SIG undefined FUN_14428c570(void)

undefined1 FUN_14428c570(longlong param_1)

{
  FUN_14127c124(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14428c584 FUN_14428c584 body=29 status=ok
// SIG undefined FUN_14428c584(void)

undefined8 FUN_14428c584(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428c5b6 FUN_14428c5b6 body=93 status=ok
// SIG undefined FUN_14428c5b6(void)

void FUN_14428c5b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4580;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14428c614 FUN_14428c614 body=93 status=ok
// SIG undefined FUN_14428c614(void)

void FUN_14428c614(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4580;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14428c672 FUN_14428c672 body=126 status=ok
// SIG undefined FUN_14428c672(void)

void FUN_14428c672(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b438a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b4580;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014428c6e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


