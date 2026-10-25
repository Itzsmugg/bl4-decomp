// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14415039e FUN_14415039e body=308 status=ok
// SIG undefined FUN_14415039e(void)

void FUN_14415039e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  int iVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  void *pvVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var3 = param_2[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_149e02020;
  (p_Var3->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var3 = &PTR_FUN_14b9717c0;
  (p_Var3->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var3->EntryCount = 0;
  p_Var3->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  pvVar4 = *(void **)(param_1 + 0x20);
  p_Var3->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var3->CreatorBackTraceIndexHigh = 0;
    p_Var3->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var3->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var3->EntryCount,pvVar4,(longlong)(int)DVar1 * 2);
  }
  p_Var3[1].Type = 0;
  p_Var3[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var3[1].field_0x4 = 0;
  iVar2 = *(int *)(param_1 + 0x38);
  pvVar4 = *(void **)(param_1 + 0x30);
  *(int *)&p_Var3[1].CriticalSection = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)&p_Var3[1].CriticalSection + 4) = 0;
  }
  else {
    FUN_1446dd670(p_Var3 + 1,iVar2,0);
    memcpy(*(void **)(p_Var3 + 1),pvVar4,(longlong)iVar2 * 2);
  }
  p_Var3[1].ProcessLocksList.Flink = *(_LIST_ENTRY **)(param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441504bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441504dc FUN_1441504dc body=269 status=ok
// SIG undefined FUN_1441504dc(void)

undefined8 FUN_1441504dc(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1441505e3;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441505e3;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441505e3:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144150597;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441505ea(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_144150597;
    }
  }
  uVar6 = 0;
LAB_144150597:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441505ea FUN_1441505ea body=203 status=ok
// SIG undefined FUN_1441505ea(void)

undefined8 FUN_1441505ea(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1[4] + 0x30);
  if (lVar1 != 0) {
    uVar2 = CONCAT71((int7)((ulonglong)param_1[4] >> 8),1);
    if ((*(char *)(lVar1 + 0x88) != '\0') || (*(int *)(lVar1 + 0xa0) != 0)) goto LAB_144150632;
    lVar1 = *(longlong *)(lVar1 + 0x360);
    if (lVar1 != 0) {
      puVar3 = &DAT_149dfb77a;
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(param_1 + 3) != 0) {
        puVar4 = (undefined2 *)param_1[2];
      }
      if (*(int *)(param_1 + 1) != 0) {
        puVar3 = (undefined2 *)*param_1;
      }
      FUN_140002266(local_30,L"%ls?travelstation=%ls?TimeSliced",puVar3,puVar4);
      FUN_146152ff8(lVar1,local_30,1,0);
      FUN_146152ff8(lVar1,param_1,0,0);
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  uVar2 = 0;
LAB_144150632:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441506b6 FUN_1441506b6 body=29 status=ok
// SIG undefined FUN_1441506b6(void)

undefined8 FUN_1441506b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144150852 FUN_144150852 body=93 status=ok
// SIG undefined FUN_144150852(void)

void FUN_144150852(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9718e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441508b0 FUN_1441508b0 body=93 status=ok
// SIG undefined FUN_1441508b0(void)

void FUN_1441508b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9718e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14415090e FUN_14415090e body=126 status=ok
// SIG undefined FUN_14415090e(void)

void FUN_14415090e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9718e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014415097d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144150996 FUN_144150996 body=266 status=ok
// SIG undefined FUN_144150996(void)

undefined8 FUN_144150996(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144150a9a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144150a9a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144150a9a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144150a4e;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14413fd90(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144150a4e;
    }
  }
  uVar6 = 0;
LAB_144150a4e:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144150aa2 FUN_144150aa2 body=57 status=ok
// SIG undefined FUN_144150aa2(void)

undefined8 * FUN_144150aa2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b971950;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144150c5a FUN_144150c5a body=175 status=ok
// SIG undefined FUN_144150c5a(void)

void FUN_144150c5a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4f7870;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b971950;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 144150d0a FUN_144150d0a body=175 status=ok
// SIG undefined FUN_144150d0a(void)

void FUN_144150d0a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4f7870;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b971950;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 144150dba FUN_144150dba body=214 status=ok
// SIG undefined FUN_144150dba(void)

void FUN_144150dba(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4f7870;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b971950;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->Flags,iVar1,0);
    memcpy(*(void **)&p_Var2->Flags,_Src,(longlong)iVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144150e7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144150e90 FUN_144150e90 body=65 status=ok
// SIG undefined FUN_144150e90(void)

void FUN_144150e90(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_144150ff2(param_1 + 0x20,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144150ed2 FUN_144150ed2 body=287 status=ok
// SIG undefined FUN_144150ed2(void)

undefined8 FUN_144150ed2(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144150feb;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144150feb;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144150feb:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144150f9e;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144150ff2(param_1 + 0x20,&local_34,param_3);
      uVar6 = 1;
      goto LAB_144150f9e;
    }
  }
  uVar6 = 0;
LAB_144150f9e:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144150ff2 FUN_144150ff2 body=452 status=ok
// SIG undefined FUN_144150ff2(void)

void FUN_144150ff2(longlong *param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  undefined4 local_78;
  longlong *local_70;
  ulonglong *local_68;
  longlong local_60;
  undefined4 local_58;
  longlong local_50 [2];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *param_1;
  if ((*param_2 != -1) && (iVar4 = *param_2, 1 < *(int *)(param_3 + 8))) goto LAB_144151089;
  iVar4 = -1;
  if (0 < *(int *)(lVar1 + 0x40)) {
    lVar3 = **(longlong **)(lVar1 + 0x38);
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
    }
    else if (lVar3 == 0) goto LAB_14415105a;
    iVar4 = *(int *)(lVar3 + 0xe0);
  }
LAB_14415105a:
  if ((((*(longlong *)(lVar1 + 0x30) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x360), lVar3 != 0)) &&
      (*(longlong *)(lVar3 + 0x1f0) != 0)) &&
     ((lVar3 = FUN_14116599c(), lVar3 != 0 && (iVar2 = FUN_148d924b0(lVar3), iVar2 != -1)))) {
    iVar4 = iVar2;
  }
LAB_144151089:
  FUN_140056680(local_40,L"-ClearAllReleases");
  local_68 = &local_30;
  local_70 = local_40;
  FUN_141469cae(&local_60);
  if ((int)param_1[2] == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)param_1[1];
  }
  FUN_140002266(local_50,L"-patch=%ls",puVar5);
  local_88 = local_40;
  local_90 = local_50;
  FUN_141469cae(&local_80);
  local_98 = &local_60;
  FUN_144142254(lVar1,param_3,iVar4,&local_80);
  FUN_1447a1747(local_80,local_78);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_60,local_58);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441511b8 FUN_1441511b8 body=29 status=ok
// SIG undefined FUN_1441511b8(void)

undefined8 FUN_1441511b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144151354 FUN_144151354 body=93 status=ok
// SIG undefined FUN_144151354(void)

void FUN_144151354(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b971a30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441513b2 FUN_1441513b2 body=93 status=ok
// SIG undefined FUN_1441513b2(void)

void FUN_1441513b2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b971a30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144151410 FUN_144151410 body=126 status=ok
// SIG undefined FUN_144151410(void)

void FUN_144151410(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b971a30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014415147f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144151498 FUN_144151498 body=266 status=ok
// SIG undefined FUN_144151498(void)

undefined8 FUN_144151498(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14415159c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14415159c;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14415159c:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144151543;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148d325ee(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144151543;
    }
  }
  uVar6 = 0;
LAB_144151543:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441515a4 FUN_1441515a4 body=29 status=ok
// SIG undefined FUN_1441515a4(void)

undefined8 FUN_1441515a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144151740 FUN_144151740 body=93 status=ok
// SIG undefined FUN_144151740(void)

void FUN_144151740(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b971aa0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14415179e FUN_14415179e body=93 status=ok
// SIG undefined FUN_14415179e(void)

void FUN_14415179e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b971aa0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441517fc FUN_1441517fc body=126 status=ok
// SIG undefined FUN_1441517fc(void)

void FUN_1441517fc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b971aa0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014415186b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144151884 FUN_144151884 body=266 status=ok
// SIG undefined FUN_144151884(void)

undefined8 FUN_144151884(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144151988;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144151988;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144151988:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14415192f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1462633ce(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_14415192f;
    }
  }
  uVar6 = 0;
LAB_14415192f:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144151990 FUN_144151990 body=29 status=ok
// SIG undefined FUN_144151990(void)

undefined8 FUN_144151990(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144151b2c FUN_144151b2c body=101 status=ok
// SIG undefined FUN_144151b2c(void)

void FUN_144151b2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40e8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971b10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144151b92 FUN_144151b92 body=101 status=ok
// SIG undefined FUN_144151b92(void)

void FUN_144151b92(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40e8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971b10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144151bf8 FUN_144151bf8 body=134 status=ok
// SIG undefined FUN_144151bf8(void)

void FUN_144151bf8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b40e8d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b971b10;
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
                    /* WARNING: Could not recover jumptable at 0x000144151c6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144151cec FUN_144151cec body=373 status=ok
// SIG undefined FUN_144151cec(void)

undefined8 FUN_144151cec(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144151e5b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144151e5b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144151e5b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144151da2;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if ((*(int *)(param_1 + 0x24) != 0) &&
         ((uVar2 = *(uint *)(param_1 + 0x20), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)))) {
        plVar5 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar5 != (longlong *)0x0) &&
           (((int)plVar5[2] == *(int *)(param_1 + 0x24) &&
            ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
            lVar7 = *plVar5;
          }
          else {
            lVar7 = 0;
          }
          if (*(longlong *)(lVar7 + 0x2948) != 0) {
            FUN_145747f90(*(longlong *)(lVar7 + 0x2948),param_1 + 0x28);
          }
        }
      }
      goto LAB_144151da2;
    }
  }
  uVar6 = 0;
LAB_144151da2:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144151e62 FUN_144151e62 body=29 status=ok
// SIG undefined FUN_144151e62(void)

undefined8 FUN_144151e62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144151e94 FUN_144151e94 body=93 status=ok
// SIG undefined FUN_144151e94(void)

void FUN_144151e94(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971b80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144151ef2 FUN_144151ef2 body=93 status=ok
// SIG undefined FUN_144151ef2(void)

void FUN_144151ef2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971b80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144151f50 FUN_144151f50 body=126 status=ok
// SIG undefined FUN_144151f50(void)

void FUN_144151f50(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b971b80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144151fbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144151fd8 FUN_144151fd8 body=20 status=ok
// SIG undefined FUN_144151fd8(void)

undefined1 FUN_144151fd8(longlong param_1)

{
  FUN_145a13404(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 144151fec FUN_144151fec body=29 status=ok
// SIG undefined FUN_144151fec(void)

undefined8 FUN_144151fec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14415201e FUN_14415201e body=93 status=ok
// SIG undefined FUN_14415201e(void)

void FUN_14415201e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971bf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14415207c FUN_14415207c body=93 status=ok
// SIG undefined FUN_14415207c(void)

void FUN_14415207c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971bf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441520da FUN_1441520da body=126 status=ok
// SIG undefined FUN_1441520da(void)

void FUN_1441520da(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b971bf0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144152149. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144152162 FUN_144152162 body=20 status=ok
// SIG undefined FUN_144152162(void)

undefined1 FUN_144152162(longlong param_1)

{
  FUN_148d32800(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 144152176 FUN_144152176 body=29 status=ok
// SIG undefined FUN_144152176(void)

undefined8 FUN_144152176(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441521a8 FUN_1441521a8 body=93 status=ok
// SIG undefined FUN_1441521a8(void)

void FUN_1441521a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968eb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971c60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144152206 FUN_144152206 body=93 status=ok
// SIG undefined FUN_144152206(void)

void FUN_144152206(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968eb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971c60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144152264 FUN_144152264 body=126 status=ok
// SIG undefined FUN_144152264(void)

void FUN_144152264(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b968eb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b971c60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441522d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441522e2 FUN_1441522e2 body=66 status=ok
// SIG undefined FUN_1441522e2(void)

void FUN_1441522e2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14415236c(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144152326 FUN_144152326 body=68 status=ok
// SIG undefined FUN_144152326(void)

undefined8 FUN_144152326(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14415236c(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14415236c FUN_14415236c body=753 status=ok
// SIG undefined FUN_14415236c(void)

void FUN_14415236c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464f5fc4;
      local_48 = &LAB_148c3dd26;
      local_50 = &LAB_1459673ba;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    }
    if (((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) &&
       (lVar1 = *(longlong *)(lVar1 + 0x168), lVar1 != 0)) {
      if (DAT_14cbadd90 == 0) {
        local_40 = &local_28;
        local_28 = FUN_141030f22;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1459f2e4c;
        local_48 = &LAB_148c39de3;
        local_50 = &LAB_1457a9eb2;
        local_58 = L"Game";
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
        if ((*(longlong *)(lVar1 + 0x430) != 0) && (DAT_14cae9568 == 0)) {
          local_40 = &local_28;
          local_28 = FUN_1417de738;
          local_30 = (code *)&LAB_145893408;
          local_38 = &LAB_1458cbbd2;
          local_48 = &LAB_147ba21f1;
          local_50 = &LAB_1463e9233;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x1000000c;
          local_70 = 8;
          local_78 = 0x2b8;
          FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144152676 FUN_144152676 body=29 status=ok
// SIG undefined FUN_144152676(void)

undefined8 FUN_144152676(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441526a8 FUN_1441526a8 body=93 status=ok
// SIG undefined FUN_1441526a8(void)

void FUN_1441526a8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b971cd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144152706 FUN_144152706 body=93 status=ok
// SIG undefined FUN_144152706(void)

void FUN_144152706(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b971cd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144152764 FUN_144152764 body=126 status=ok
// SIG undefined FUN_144152764(void)

void FUN_144152764(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b971cd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441527d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441527ec FUN_1441527ec body=20 status=ok
// SIG undefined FUN_1441527ec(void)

undefined1 FUN_1441527ec(longlong param_1)

{
  FUN_144152800(param_1 + 0x18);
  return 1;
}



// FUNCTION 144152800 FUN_144152800 body=129 status=ok
// SIG undefined FUN_144152800(void)

void FUN_144152800(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_1;
  if (*(longlong *)(param_1[1] + 0x598) == 0) {
    local_28 = 0;
    uStack_20 = 0;
  }
  else {
    FUN_14101ca58(*(longlong *)(param_1[1] + 0x598),&local_28);
  }
  FUN_145a14ae4(uVar1,&local_28);
  FUN_14101c9fb(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144152882 FUN_144152882 body=29 status=ok
// SIG undefined FUN_144152882(void)

undefined8 FUN_144152882(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441528b4 FUN_1441528b4 body=93 status=ok
// SIG undefined FUN_1441528b4(void)

void FUN_1441528b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b971db0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971d40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144152912 FUN_144152912 body=93 status=ok
// SIG undefined FUN_144152912(void)

void FUN_144152912(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b971db0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971d40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144152970 FUN_144152970 body=126 status=ok
// SIG undefined FUN_144152970(void)

void FUN_144152970(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b971db0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b971d40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441529df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441529f8 FUN_1441529f8 body=20 status=ok
// SIG undefined FUN_1441529f8(void)

undefined1 FUN_1441529f8(longlong param_1)

{
  FUN_144152a0c(param_1 + 0x18);
  return 1;
}



// FUNCTION 144152a0c FUN_144152a0c body=102 status=ok
// SIG undefined FUN_144152a0c(void)

void FUN_144152a0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_1;
  FUN_14101d04a(local_38,param_3);
  FUN_148d32e6a(uVar1,param_2,local_38);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144152a74 FUN_144152a74 body=29 status=ok
// SIG undefined FUN_144152a74(void)

undefined8 FUN_144152a74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144152aa6 FUN_144152aa6 body=93 status=ok
// SIG undefined FUN_144152aa6(void)

void FUN_144152aa6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b971e20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144152b04 FUN_144152b04 body=93 status=ok
// SIG undefined FUN_144152b04(void)

void FUN_144152b04(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b971e20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144152b62 FUN_144152b62 body=126 status=ok
// SIG undefined FUN_144152b62(void)

void FUN_144152b62(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b971e20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144152bd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144152bea FUN_144152bea body=20 status=ok
// SIG undefined FUN_144152bea(void)

undefined1 FUN_144152bea(longlong param_1)

{
  FUN_144152bfe(param_1 + 0x18);
  return 1;
}



// FUNCTION 144152bfe FUN_144152bfe body=129 status=ok
// SIG undefined FUN_144152bfe(void)

void FUN_144152bfe(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_1;
  if (*(longlong *)(param_1[1] + 0x598) == 0) {
    local_28 = 0;
    uStack_20 = 0;
  }
  else {
    FUN_14101ca58(*(longlong *)(param_1[1] + 0x598),&local_28);
  }
  FUN_145a16102(uVar1,&local_28);
  FUN_14101c9fb(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144152c80 FUN_144152c80 body=29 status=ok
// SIG undefined FUN_144152c80(void)

undefined8 FUN_144152c80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144152e1c FUN_144152e1c body=93 status=ok
// SIG undefined FUN_144152e1c(void)

void FUN_144152e1c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971e90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144152e7a FUN_144152e7a body=93 status=ok
// SIG undefined FUN_144152e7a(void)

void FUN_144152e7a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971e90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144152ed8 FUN_144152ed8 body=126 status=ok
// SIG undefined FUN_144152ed8(void)

void FUN_144152ed8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ecf50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b971e90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144152f47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144152f56 FUN_144152f56 body=103 status=ok
// SIG undefined FUN_144152f56(void)

void FUN_144152f56(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x20);
  local_18 = DAT_14cbca4e0;
  FUN_1400bc8c2(lVar1 + 0x518);
  *(uint *)(lVar1 + 0x438) = *(uint *)(lVar1 + 0x438) & 0xfffffffe | (uint)*(byte *)(lVar1 + 0x518);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144152fbe FUN_144152fbe body=312 status=ok
// SIG undefined FUN_144152fbe(void)

undefined8 FUN_144152fbe(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441530f0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441530f0;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar7 = local_28;
  }
  else {
LAB_1441530f0:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441530a4;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      local_28 = DAT_14cbca4e0;
      FUN_1400bc8c2(lVar5 + 0x518);
      *(uint *)(lVar5 + 0x438) =
           *(uint *)(lVar5 + 0x438) & 0xfffffffe | (uint)*(byte *)(lVar5 + 0x518);
      uVar6 = 1;
      goto LAB_1441530a4;
    }
  }
  uVar6 = 0;
LAB_1441530a4:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441530f8 FUN_1441530f8 body=29 status=ok
// SIG undefined FUN_1441530f8(void)

undefined8 FUN_1441530f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14415329e FUN_14415329e body=93 status=ok
// SIG undefined FUN_14415329e(void)

void FUN_14415329e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b971fe0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441532fc FUN_1441532fc body=93 status=ok
// SIG undefined FUN_1441532fc(void)

void FUN_1441532fc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b971fe0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14415335a FUN_14415335a body=126 status=ok
// SIG undefined FUN_14415335a(void)

void FUN_14415335a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b971fe0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441533c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144153436 FUN_144153436 body=275 status=ok
// SIG undefined FUN_144153436(void)

undefined8 FUN_144153436(longlong param_1,undefined4 param_2)

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
    if (iVar1 == 2) goto LAB_144153543;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144153543;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144153543:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441534f6;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_1441534f6;
    }
  }
  uVar6 = 0;
LAB_1441534f6:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14415354a FUN_14415354a body=29 status=ok
// SIG undefined FUN_14415354a(void)

undefined8 FUN_14415354a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441536f0 FUN_1441536f0 body=93 status=ok
// SIG undefined FUN_1441536f0(void)

void FUN_1441536f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972050;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14415374e FUN_14415374e body=93 status=ok
// SIG undefined FUN_14415374e(void)

void FUN_14415374e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972050;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441537ac FUN_1441537ac body=126 status=ok
// SIG undefined FUN_1441537ac(void)

void FUN_1441537ac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b972050;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014415381b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144153882 FUN_144153882 body=284 status=ok
// SIG undefined FUN_144153882(void)

undefined8 FUN_144153882(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144153998;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144153998;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_144153998:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144153947;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_144153947;
    }
  }
  uVar6 = 0;
LAB_144153947:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441539a0 FUN_1441539a0 body=29 status=ok
// SIG undefined FUN_1441539a0(void)

undefined8 FUN_1441539a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144153b3c FUN_144153b3c body=93 status=ok
// SIG undefined FUN_144153b3c(void)

void FUN_144153b3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972130;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144153b9a FUN_144153b9a body=93 status=ok
// SIG undefined FUN_144153b9a(void)

void FUN_144153b9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972130;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144153bf8 FUN_144153bf8 body=126 status=ok
// SIG undefined FUN_144153bf8(void)

void FUN_144153bf8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b972130;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144153c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144153c88 FUN_144153c88 body=274 status=ok
// SIG undefined FUN_144153c88(void)

undefined8 FUN_144153c88(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 *in_stack_00000028;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144153d94;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144153d94;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144153d94:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144153d33;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      *in_stack_00000028 = 0;
      FUN_145727d56(uVar6);
      uVar6 = 1;
      goto LAB_144153d33;
    }
  }
  uVar6 = 0;
LAB_144153d33:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144153d9c FUN_144153d9c body=31 status=ok
// SIG undefined FUN_144153d9c(void)

undefined8 FUN_144153d9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144153e0e FUN_144153e0e body=156 status=ok
// SIG undefined FUN_144153e0e(void)

void FUN_144153e0e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_148d2f138(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 0x80);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x68);
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
  FUN_144a65a1e(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144153e9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 144153eaa FUN_144153eaa body=29 status=ok
// SIG undefined FUN_144153eaa(void)

undefined8 FUN_144153eaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144153ec8 FUN_144153ec8 body=29 status=ok
// SIG undefined FUN_144153ec8(void)

undefined8 FUN_144153ec8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144153efa FUN_144153efa body=93 status=ok
// SIG undefined FUN_144153efa(void)

void FUN_144153efa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1c150;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972440;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144153f58 FUN_144153f58 body=93 status=ok
// SIG undefined FUN_144153f58(void)

void FUN_144153f58(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1c150;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972440;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144153fb6 FUN_144153fb6 body=126 status=ok
// SIG undefined FUN_144153fb6(void)

void FUN_144153fb6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e1c150;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b972440;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144154025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14415403e FUN_14415403e body=20 status=ok
// SIG undefined FUN_14415403e(void)

undefined1 FUN_14415403e(longlong param_1)

{
  FUN_144154052(param_1 + 0x18);
  return 1;
}



// FUNCTION 144154052 FUN_144154052 body=188 status=ok
// SIG undefined FUN_144154052(void)

void FUN_144154052(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined1 auStack_98 [32];
  code **local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *param_1;
  uVar3 = FUN_1401cb356();
  local_78 = local_58;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14b972520;
  local_58[0] = FUN_144154110;
  local_30 = uVar2;
  FUN_1401cbba4(uVar3,local_68,L".\\../../OakGame/Source/OakGame/Game/OakGameUtils.cpp(130)",0);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (local_58[0] != (code *)0x0) {
    pppuVar4 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar4 = &local_38;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144154110 FUN_144154110 body=95 status=ok
// SIG undefined FUN_144154110(void)

undefined8 FUN_144154110(uint *param_1)

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
      FUN_140628825(uVar2);
    }
  }
  return 0;
}



// FUNCTION 14415417a FUN_14415417a body=12 status=ok
// SIG undefined FUN_14415417a(void)

void FUN_14415417a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144154183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144154186 FUN_144154186 body=29 status=ok
// SIG undefined FUN_144154186(void)

undefined8 FUN_144154186(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441541a4 FUN_1441541a4 body=518 status=ok
// SIG undefined FUN_1441541a4(void)

void FUN_1441541a4(longlong param_1)

{
  undefined8 uVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_140056680(&local_48);
  uVar5 = 0;
  iVar4 = local_40 + -1;
  if (local_40 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    puVar2 = local_48;
    if (local_40 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    lVar7 = 0;
    uVar5 = 0;
    do {
      uVar6 = ((uint)(0x19 < (ushort)puVar2[lVar7] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar7]) -
              0x20;
      uVar8 = (uint)(uVar5 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
      uVar5 = (ulonglong)
              (uVar8 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
      lVar7 = lVar7 + 1;
    } while (iVar4 != (int)lVar7);
  }
  puVar3 = (undefined8 *)FUN_148d385b6(uVar1,uVar5,&local_48);
  local_38 = (void *)0x0;
  local_30 = *(int *)(puVar3 + 1);
  lVar7 = (longlong)local_30;
  _Src = (void *)*puVar3;
  if (lVar7 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar7 * 2);
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 - 2U < 0x7fffffff) {
    FUN_140002266(&local_58,L"gbx.teleporttostation %ls");
    puVar2 = local_58;
    if (local_50 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140056680(&local_48,puVar2);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
    puVar2 = local_48;
    if (local_40 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140056680(local_68,puVar2);
    FUN_14121a794(uVar1,&local_58,local_68,1);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441543de FUN_1441543de body=29 status=ok
// SIG undefined FUN_1441543de(void)

undefined8 FUN_1441543de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441543fc FUN_1441543fc body=29 status=ok
// SIG undefined FUN_1441543fc(void)

undefined8 FUN_1441543fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14415442e FUN_14415442e body=93 status=ok
// SIG undefined FUN_14415442e(void)

void FUN_14415442e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972620;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14415448c FUN_14415448c body=93 status=ok
// SIG undefined FUN_14415448c(void)

void FUN_14415448c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972620;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441544ea FUN_1441544ea body=126 status=ok
// SIG undefined FUN_1441544ea(void)

void FUN_1441544ea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b972620;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144154559. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144154572 FUN_144154572 body=20 status=ok
// SIG undefined FUN_144154572(void)

undefined1 FUN_144154572(longlong param_1)

{
  FUN_144154586(param_1 + 0x18);
  return 1;
}



// FUNCTION 144154586 FUN_144154586 body=130 status=ok
// SIG undefined FUN_144154586(void)

undefined8 FUN_144154586(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  
  uVar1 = *param_1;
  plVar3 = DAT_14cabd158;
  if ((((DAT_14c846b14 == '\x01') && (DAT_14c872bf0 == '\0')) && ((DAT_14ca9a35c & 1) != 0)) &&
     (DAT_14ca84e78 != '\x01')) {
    if (DAT_14cabd108 == 0) goto LAB_1441545fc;
    plVar3 = (longlong *)(DAT_14cabd108 + 0x10);
  }
  if (((plVar3 != (longlong *)0x0) &&
      (cVar2 = (**(code **)(*plVar3 + 0x100))(plVar3), cVar2 != '\0')) &&
     (cVar2 = (**(code **)(*plVar3 + 0x90))(plVar3), cVar2 == '\0')) {
    return 1;
  }
LAB_1441545fc:
  FUN_146226ace(uVar1);
  return 0;
}



// FUNCTION 144154608 FUN_144154608 body=57 status=ok
// SIG undefined FUN_144154608(void)

undefined8 * FUN_144154608(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b972700;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144154656 FUN_144154656 body=197 status=ok
// SIG undefined FUN_144154656(void)

void FUN_144154656(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b972700;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar3;
  *(undefined4 *)(puVar2 + 6) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x34) = uVar5;
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 7,iVar1,0);
    memcpy((void *)puVar2[7],_Src,(longlong)iVar1 * 2);
  }
  puVar2[9] = *(undefined8 *)(param_1 + 0x48);
  return;
}



// FUNCTION 14415471c FUN_14415471c body=197 status=ok
// SIG undefined FUN_14415471c(void)

void FUN_14415471c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b972700;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar3;
  *(undefined4 *)(puVar2 + 6) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x34) = uVar5;
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 7,iVar1,0);
    memcpy((void *)puVar2[7],_Src,(longlong)iVar1 * 2);
  }
  puVar2[9] = *(undefined8 *)(param_1 + 0x48);
  return;
}



// FUNCTION 1441547e2 FUN_1441547e2 body=254 status=ok
// SIG undefined FUN_1441547e2(void)

void FUN_1441547e2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b972700;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  uVar6 = *(undefined4 *)(param_1 + 0x34);
  p_Var2->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var2->CreatorBackTraceIndexHigh = (short)uVar4;
  p_Var2->SpareWORD = (short)((uint)uVar4 >> 0x10);
  p_Var2[1].Type = (short)uVar5;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)uVar5 >> 0x10);
  *(undefined4 *)&p_Var2[1].field_0x4 = uVar6;
  p_Var2[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)&p_Var2[1].ProcessLocksList.Flink = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Flink + 4) = 0;
  }
  else {
    FUN_1446dd670(&p_Var2[1].CriticalSection,iVar1,0);
    memcpy(p_Var2[1].CriticalSection,_Src,(longlong)iVar1 * 2);
  }
  p_Var2[1].ProcessLocksList.Blink = *(_LIST_ENTRY **)(param_1 + 0x48);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441548ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441548ea FUN_1441548ea body=20 status=ok
// SIG undefined FUN_1441548ea(void)

undefined1 FUN_1441548ea(longlong param_1)

{
  FUN_1441548fe(param_1 + 0x18);
  return 1;
}



// FUNCTION 1441548fe FUN_1441548fe body=278 status=ok
// SIG undefined FUN_1441548fe(void)

void FUN_1441548fe(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
  goto LAB_144154958;
  lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (((lVar4 == 0) || (*(uint *)(lVar4 + 0x10) != param_1[1])) ||
     ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)) goto LAB_144154958;
  lVar4 = FUN_1409f0d56(param_1 + 2);
  if ((lVar4 == 0) || (*(longlong *)(param_1 + 0xc) == 0)) goto LAB_144154958;
  if (param_1[1] == 0) {
LAB_144154a10:
    lVar4 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar5 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar5 == (longlong *)0x0) ||
         ((*(uint *)(plVar5 + 2) != param_1[1] || ((*(uint *)(plVar5 + 1) & 0x10200000) != 0))))
      goto LAB_144154a10;
      lVar4 = *plVar5;
    }
  }
  local_31 = 1;
  uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0xc) + 0x10);
  uVar3 = FUN_1409f0d56(param_1 + 2);
  (**(code **)(*(longlong *)(lVar4 + 0x30) + 0x98))(lVar4 + 0x30,uVar3,uVar2,&local_31);
LAB_144154958:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144154a16 FUN_144154a16 body=58 status=ok
// SIG undefined FUN_144154a16(void)

bool FUN_144154a16(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1447ee042(param_2,L"mainmenustation",0xf,1,0,0xffffffff);
  return iVar1 != -1;
}



// FUNCTION 144154a50 FUN_144154a50 body=64 status=ok
// SIG undefined FUN_144154a50(void)

undefined8 * FUN_144154a50(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b972930;
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



// FUNCTION 144154a94 FUN_144154a94 body=81 status=ok
// SIG undefined FUN_144154a94(void)

undefined8 FUN_144154a94(longlong param_1)

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



// FUNCTION 144154aec FUN_144154aec body=89 status=ok
// SIG undefined FUN_144154aec(void)

bool FUN_144154aec(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_144154b37;
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
LAB_144154b37:
  return lVar6 == param_2;
}



// FUNCTION 144154b62 FUN_144154b62 body=118 status=ok
// SIG undefined FUN_144154b62(void)

void FUN_144154b62(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972930;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144154bd8 FUN_144154bd8 body=118 status=ok
// SIG undefined FUN_144154bd8(void)

void FUN_144154bd8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972930;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144154c4e FUN_144154c4e body=156 status=ok
// SIG undefined FUN_144154c4e(void)

void FUN_144154c4e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a915ec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b972930;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144154cda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144154cea FUN_144154cea body=98 status=ok
// SIG undefined FUN_144154cea(void)

void FUN_144154cea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000144154d33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144154d42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 144154d4c FUN_144154d4c body=94 status=ok
// SIG undefined FUN_144154d4c(void)

ulonglong FUN_144154d4c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_144154d9f:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_144154d9f;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 144154daa FUN_144154daa body=6170 status=ok
// SIG undefined FUN_144154daa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144154daa(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  char *local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446f470e(&DAT_14cbc9e30,L"BossFightState",1);
  local_78 = "Complete";
  uStack_70 = 8;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9e38 = (ulonglong)uVar2;
  _DAT_14cbc9e40 = 0x47efffffe0000000;
  _DAT_14cbc9e48 = 0x47efffffe0000000;
  _DAT_14cbc9e50 = 0x47efffffe0000000;
  DAT_14cbc9e58 = 0x47efffffe0000000;
  DAT_14cbc9e60 = 0x47efffffe0000000;
  DAT_14cbc9e68 = 0x47efffffe0000000;
  _DAT_14cbc9e70 = 0x47efffffe0000000;
  _DAT_14cbc9e78 = 0x47efffffe0000000;
  local_78 = "bone";
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  local_78 = "AssetRegistry";
  uStack_70 = 0xd;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9e80 = (ulonglong)uVar2;
  local_78 = "Use";
  uStack_70 = 3;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9e88 = (ulonglong)uVar2;
  local_78 = "Sight";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9e90 = (ulonglong)uVar2;
  local_78 = "TargetLock";
  uStack_70 = 10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9e98 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_78,&DAT_14cbc9ea0);
  if (cVar1 == '\0') {
    _DAT_14cbc9ea0 = 0;
    uRam000000014cbc9ea8 = 0;
  }
  if (local_78 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbc9eb4 = 0;
  FUN_14052b5e0(&DAT_14cbc9eb0,"PlayerAwareness",0);
  _DAT_14cbc9ec0 = "PlayerAwareness";
  local_78 = "basic";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9ec8 = (ulonglong)uVar2;
  local_78 = "challenge";
  uStack_70 = 9;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9ed0 = (ulonglong)uVar2;
  local_78 = "online";
  uStack_70 = 6;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9ed8 = (ulonglong)uVar2;
  local_78 = "social";
  uStack_70 = 6;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9ee0 = (ulonglong)uVar2;
  local_78 = "alert";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9ee8 = (ulonglong)uVar2;
  local_78 = "photo_mode";
  uStack_70 = 10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9ef0 = (ulonglong)uVar2;
  local_78 = "generic_task";
  uStack_70 = 0xc;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9ef8 = (ulonglong)uVar2;
  local_78 = "mission";
  uStack_70 = 7;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9f00 = (ulonglong)uVar2;
  local_78 = "mail";
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9f08 = (ulonglong)uVar2;
  local_78 = "respawn";
  uStack_70 = 7;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9f10 = (ulonglong)uVar2;
  local_78 = "tutorial";
  uStack_70 = 8;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9f18 = (ulonglong)uVar2;
  local_78 = "special_notification";
  uStack_70 = 0x14;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9f20 = (ulonglong)uVar2;
  local_78 = "generic_notification";
  uStack_70 = 0x14;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9f28 = (ulonglong)uVar2;
  local_78 = "vault_card";
  uStack_70 = 10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9f30 = (ulonglong)uVar2;
  local_78 = "ONLINE_MESSAGE";
  uStack_70 = 0xe;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9f38 = (ulonglong)uVar2;
  local_78 = "INGAME_MESSAGE";
  uStack_70 = 0xe;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9f40 = (ulonglong)uVar2;
  local_78 = "NOTIFICATION_MESSAGE";
  uStack_70 = 0x14;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9f48 = (ulonglong)uVar2;
  local_78 = "MENU_TUTORIAL_MESSAGE";
  uStack_70 = 0x15;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9f50 = (ulonglong)uVar2;
  local_78 = "collectible";
  uStack_70 = 0xb;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9f58 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbc9f60,L"GoreStump_");
  atexit((_func_5014 *)&LAB_14413c084);
  FUN_140056680(&DAT_14cbc9f70,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_14413c095);
  FUN_140056680(&DAT_14cbc9f80,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_14413c0a6);
  FUN_140056680(&DAT_14cbc9f90,L"GoreFX_");
  atexit((_func_5014 *)&LAB_14413c0b7);
  FUN_1446f470e(&DAT_14cbc9fa0,L"LIMB_GORED",1);
  _DAT_14cbc9fa8 = 0x4072c00000000000;
  _DAT_14cbc9fb0 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbc9fb8,L"body",1);
  FUN_1446f470e(&DAT_14cbc9fc0,L"title_card",1);
  local_78 = "Cash";
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9fc8 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbc9fd0,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14413c0c8);
  FUN_1446f470e(&DAT_14cbc9fe0,L"UNSET",1);
  local_78 = "init";
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  local_78 = "update";
  uStack_70 = 6;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  local_78 = "config_update";
  uStack_70 = 0xd;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  local_78 = "deinit";
  uStack_70 = 6;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  FUN_1446f470e(&DAT_14cbc9fe8,L"Party",1);
  FUN_1446f470e(&DAT_14cbc9ff0,&DAT_149e063b2);
  DAT_14cbca610 = 0;
  _DAT_14cbca618 = 0;
  _DAT_14cbca620 = 2;
  atexit(FUN_14413c9a0);
  DAT_14cbca7d0 = 0;
  _DAT_14cbca7d8 = 0;
  _DAT_14cbca7e0 = 2;
  atexit(FUN_14413c9d1);
  local_78 = "state_rem";
  uStack_70 = 9;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbc9ff8 = (ulonglong)uVar2;
  local_78 = "state_add";
  uStack_70 = 9;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca000 = (ulonglong)uVar2;
  local_78 = "state_remove_primary";
  uStack_70 = 0x14;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca008 = (ulonglong)uVar2;
  _DAT_14cbca010 = 0;
  uRam000000014cbca018 = 0;
  _DAT_14cbca020 = 0;
  DAT_14cbca028 = 0;
  uRam000000014cbca030 = 0;
  FUN_1446ddda2(&DAT_14cbca010,"SkipMovieText",0);
  atexit((_func_5014 *)&LAB_14413ca02);
  _DAT_14cbca03c = 0;
  FUN_14052b5e0(&DAT_14cbca038,"trait_mission");
  _DAT_14cbca048 = "trait_mission";
  _DAT_14cbca054 = 0;
  FUN_14052b5e0(&DAT_14cbca050,"weekly_trait_mission");
  _DAT_14cbca060 = "weekly_trait_mission";
  DAT_14cbca068 = 0;
  atexit((_func_5014 *)&LAB_14413d4be);
  local_78 = "Standard";
  uStack_70 = 8;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbca1c8 = (ulonglong)uVar2;
  local_78 = "PrologueSkip";
  uStack_70 = 0xc;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbca1d0 = (ulonglong)uVar2;
  local_78 = "UltimateVaultHunterSkip";
  uStack_70 = 0x17;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca1d8 = (ulonglong)uVar2;
  local_78 = "SkipToDLC_Cowbell";
  uStack_70 = 0x11;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca1e0 = (ulonglong)uVar2;
  local_78 = "SkipToDLC_Harmonica";
  uStack_70 = 0x13;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca1e8 = (ulonglong)uVar2;
  local_78 = "nexus";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca1f0 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbca1f8,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_14413d4d6);
  _DAT_14cbca208 = 0;
  uRam000000014cbca210 = 0;
  _DAT_14cbca218 = 0;
  DAT_14cbca220 = 0;
  uRam000000014cbca228 = 0;
  FUN_1446ddda2(&DAT_14cbca208,"Matchmaking_AutomaticRegionText",0);
  atexit((_func_5014 *)&LAB_14413d4e7);
  _DAT_14cbca230 = 0;
  uRam000000014cbca238 = 0;
  _DAT_14cbca240 = 0;
  DAT_14cbca248 = 0;
  uRam000000014cbca250 = 0;
  FUN_1446ddda2(&DAT_14cbca230,"Matchmaking_ManualRegionText",0);
  atexit((_func_5014 *)&LAB_14413d4f8);
  _DAT_14cbca258 = 0;
  uRam000000014cbca260 = 0;
  _DAT_14cbca268 = 0;
  DAT_14cbca270 = 0;
  uRam000000014cbca278 = 0;
  FUN_1446ddda2(&DAT_14cbca258,"PingDisplayText",0);
  atexit((_func_5014 *)&LAB_14413d509);
  _DAT_14cbca280 = 0;
  uRam000000014cbca288 = 0;
  _DAT_14cbca290 = 0;
  DAT_14cbca298 = 0;
  uRam000000014cbca2a0 = 0;
  FUN_1446ddda2(&DAT_14cbca280,"GoodPingDisplayText",0);
  atexit((_func_5014 *)&LAB_14413d51a);
  _DAT_14cbca2a8 = 0;
  uRam000000014cbca2b0 = 0;
  _DAT_14cbca2b8 = 0;
  DAT_14cbca2c0 = 0;
  uRam000000014cbca2c8 = 0;
  FUN_1446ddda2(&DAT_14cbca2a8,"OkPingDisplayText",0);
  atexit((_func_5014 *)&LAB_14413d52b);
  _DAT_14cbca2d0 = 0;
  uRam000000014cbca2d8 = 0;
  _DAT_14cbca2e0 = 0;
  DAT_14cbca2e8 = 0;
  uRam000000014cbca2f0 = 0;
  FUN_1446ddda2(&DAT_14cbca2d0,"BadPingDisplayText",0);
  atexit((_func_5014 *)&LAB_14413d53c);
  local_78 = "UnixSocketPath";
  uStack_70 = 0xe;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca2f8 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbca300,L"TimeOfDayBlueprintEvents",1);
  FUN_1446f470e(&DAT_14cbca308,L"TimeOfDayStateEvents",1);
  FUN_1446f470e(&DAT_14cbca310,L"TimeOfDayCloudscapeEvents",1);
  FUN_1446f470e(&DAT_14cbca318,L"TimeOfDayForecastEvents",1);
  local_78 = "UpscalingMethod";
  uStack_70 = 0xf;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca320 = (ulonglong)uVar2;
  local_78 = "FrameGeneration";
  uStack_70 = 0xf;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca328 = (ulonglong)uVar2;
  local_78 = "Upscaling";
  uStack_70 = 9;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca330 = (ulonglong)uVar2;
  local_78 = "AntiAliasingMethod";
  uStack_70 = 0x12;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca338 = (ulonglong)uVar2;
  local_78 = "WindowsTextureLODGroups";
  uStack_70 = 0x17;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca340 = (ulonglong)uVar2;
  local_78 = "Textures";
  uStack_70 = 8;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca348 = (ulonglong)uVar2;
  local_78 = (char *)CONCAT44(local_78._4_4_,1);
  local_88 = 0;
  FUN_14078dbce(&DAT_14cbca350,L"gbx.AppRelaunchMode",&local_78,
                L"0: Old way - start new process in UOakGameInstance::RelaunchApp - Allows IOnlineSubsystem to handle it if it implements RestartProcess\n1: New way - Create a .bat file that waits until current instance is fully terminated before starting new instance. Ignored if IOnlineSubsystem implements RestartProcess \n2: New way - Even if IOnlineSubsystem implements RestartProcess"
               );
  atexit(FUN_14413d54d);
  FUN_140056680(&local_78,&DAT_149dfb77a);
  local_88 = 0;
  FUN_140f510cc(&DAT_14cbca368,L"gbx.AppRelaunchPath",&local_78,
                L"If set to a value, the process will be restarted in FEngineLoop::AppExit() with the path in the cvar"
               );
  if (local_78 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_14413d592);
  local_78 = "PrimaryUserSignedIn";
  uStack_70 = 0x13;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca380 = (ulonglong)uVar2;
  local_78 = "PrimaryLocalPlayerAdded";
  uStack_70 = 0x17;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca388 = (ulonglong)uVar2;
  local_78 = "FinishedLoadingLevel";
  uStack_70 = 0x14;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca7b8 = (ulonglong)uVar2;
  local_78 = "FinishedReturningToMainMenu";
  uStack_70 = 0x1b;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca390 = (ulonglong)uVar2;
  local_78 = "OzonePostConfig";
  uStack_70 = 0xf;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca398 = (ulonglong)uVar2;
  local_78 = "FinishedCleaningUpForTitleScreen";
  uStack_70 = 0x20;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca3a0 = (ulonglong)uVar2;
  local_78 = "PlayerUIInitialized";
  uStack_70 = 0x13;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca3a8 = (ulonglong)uVar2;
  local_78 = "PrimaryUserStartedSignIn";
  uStack_70 = 0x18;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca7c0 = (ulonglong)uVar2;
  local_78 = "FinishedLevelStreaming";
  uStack_70 = 0x16;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca3b0 = (ulonglong)uVar2;
  local_78 = "PlayerIdentityReady";
  uStack_70 = 0x13;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca3b8 = (ulonglong)uVar2;
  local_78 = "FinishedTeleport";
  uStack_70 = 0x10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca3c0 = (ulonglong)uVar2;
  DAT_14cbca3d0 = 0;
  _DAT_14cbca3d8 = 0;
  atexit((_func_5014 *)&LAB_14413d5d7);
  DAT_14cbca3e0 = 0;
  local_78 = (char *)CONCAT44(local_78._4_4_,0x3f733333);
  local_88 = 0x20;
  FUN_140a6b41e(&DAT_14cbca400,L"oak.main_menu_othermap_fade_duration",&local_78,&DAT_149dfb77a);
  atexit(FUN_14413f5e9);
  local_78 = (char *)CONCAT71(local_78._1_7_,1);
  local_88 = 0;
  FUN_140bd5914(&DAT_14cbca418,L"oak.main_menu_allow_seamless_travel",&local_78,
                L"Whether to allow seamless traveling to other maps while in the main menu.");
  atexit(FUN_14413f62e);
  _DAT_14cbca458 = 0;
  uRam000000014cbca460 = 0;
  _DAT_14cbca468 = 0;
  DAT_14cbca470 = 0;
  uRam000000014cbca478 = 0;
  atexit((_func_5014 *)&LAB_1441447d9);
  local_78 = (char *)CONCAT44(local_78._4_4_,0x40000000);
  local_88 = 0x20;
  FUN_140a6b41e(&DAT_14cbca480,L"oak.main_menu_background_load_delay",&local_78,&DAT_149dfb77a);
  atexit(FUN_1441447ea);
  _DAT_14cbca498 = 0;
  uRam000000014cbca4a0 = 0;
  _DAT_14cbca4a8 = 0;
  DAT_14cbca4b0 = 0;
  uRam000000014cbca4b8 = 0;
  FUN_1446ddda2(&DAT_14cbca498,"stats.Kills.Enemies.Player",0);
  atexit((_func_5014 *)&LAB_144144b64);
  FUN_140056680(&DAT_14cbca4c0,&DAT_14b96f8fc);
  atexit((_func_5014 *)&LAB_144144b75);
  FUN_140056680(&DAT_14cbca4d0,L"ozone_1.default");
  atexit((_func_5014 *)&LAB_144144b86);
  local_78 = "WaitingForPreGameplayPhase";
  uStack_70 = 0x1a;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbca4e0 = (ulonglong)uVar2;
  ram0x00014cbca654 = 0;
  FUN_14052b5e0(&DAT_14cbca650,"vault_hunter_level",0);
  _DAT_14cbca660 = "vault_hunter_level";
  ram0x00014cbca63c = 0;
  FUN_14052b5e0(&DAT_14cbca638,"highest_unlocked_vault_hunter_level",0);
  _DAT_14cbca648 = "highest_unlocked_vault_hunter_level";
  ram0x00014cbca66c = 0;
  FUN_14052b5e0(&DAT_14cbca668,"world_player_difficulty",0);
  _DAT_14cbca678 = "world_player_difficulty";
  ram0x00014cbca684 = 0;
  FUN_14052b5e0(&DAT_14cbca680,"true_mode",0);
  _DAT_14cbca690 = "true_mode";
  ram0x00014cbca69c = 0;
  FUN_14052b5e0(&DAT_14cbca698,"true_mode_override",0);
  _DAT_14cbca6a8 = "true_mode_override";
  ram0x00014cbca6b4 = 0;
  FUN_14052b5e0(&DAT_14cbca6b0,"hardcore_mode",0);
  _DAT_14cbca6c0 = "hardcore_mode";
  ram0x00014cbca6cc = 0;
  FUN_14052b5e0(&DAT_14cbca6c8,"hardcore_death_occurred",0);
  _DAT_14cbca6d8 = "hardcore_death_occurred";
  ram0x00014cbca6e4 = 0;
  FUN_14052b5e0(&DAT_14cbca6e0,"highest_unlocked_mayhem_level",0);
  _DAT_14cbca6f0 = "highest_unlocked_mayhem_level";
  ram0x00014cbca6fc = 0;
  FUN_14052b5e0(&DAT_14cbca6f8,"mayhem_level",0);
  _DAT_14cbca708 = "mayhem_level";
  ram0x00014cbca7a4 = 0;
  FUN_14052b5e0(&DAT_14cbca7a0,"prologue_started",0);
  _DAT_14cbca7b0 = "prologue_started";
  ram0x00014cbca72c = 0;
  FUN_14052b5e0(&DAT_14cbca728,"MainMissionComplete",0);
  _DAT_14cbca738 = "MainMissionComplete";
  ram0x00014cbca714 = 0;
  FUN_14052b5e0(&DAT_14cbca710,"prologue_completed",0);
  _DAT_14cbca720 = "prologue_completed";
  ram0x00014cbca75c = 0;
  FUN_14052b5e0(&DAT_14cbca758,"epilogue_started",0);
  _DAT_14cbca768 = "epilogue_started";
  ram0x00014cbca88c = 0;
  FUN_14052b5e0(&DAT_14cbca888,"movegrant_echolocation",0);
  _DAT_14cbca898 = "movegrant_echolocation";
  ram0x00014cbca774 = 0;
  FUN_14052b5e0(&DAT_14cbca770,"game_installed",0);
  _DAT_14cbca780 = "game_installed";
  _DAT_14cbca744 = 0;
  FUN_14052b5e0(&DAT_14cbca740,"wants_credits_shown",0);
  _DAT_14cbca750 = "wants_credits_shown";
  _DAT_14cbca78c = 0;
  FUN_14052b5e0(&DAT_14cbca788,"credits_seen",0);
  _DAT_14cbca798 = "credits_seen";
  _DAT_14cbca7e8 = 0;
  uRam000000014cbca7f0 = 0;
  _DAT_14cbca7f8 = 0;
  DAT_14cbca800 = 0;
  uRam000000014cbca808 = 0;
  FUN_1446ddda2(&DAT_14cbca7e8,"shared_progress.prologue_completed",0);
  atexit((_func_5014 *)&LAB_14414795c);
  _DAT_14cbca838 = 0;
  uRam000000014cbca840 = 0;
  _DAT_14cbca848 = 0;
  DAT_14cbca850 = 0;
  uRam000000014cbca858 = 0;
  FUN_1446ddda2(&DAT_14cbca838,"shared_progress.story_completed",0);
  atexit((_func_5014 *)&LAB_14414796d);
  _DAT_14cbca4e8 = 0;
  uRam000000014cbca4f0 = 0;
  _DAT_14cbca4f8 = 0;
  DAT_14cbca500 = 0;
  uRam000000014cbca508 = 0;
  FUN_1446ddda2(&DAT_14cbca4e8,"shared_progress.epilogue_started",0);
  atexit((_func_5014 *)&LAB_14414797e);
  _DAT_14cbca810 = 0;
  uRam000000014cbca818 = 0;
  _DAT_14cbca820 = 0;
  DAT_14cbca828 = 0;
  uRam000000014cbca830 = 0;
  FUN_1446ddda2(&DAT_14cbca810,"shared_progress.vault_hunter_level",0);
  atexit((_func_5014 *)&LAB_14414798f);
  _DAT_14cbca860 = 0;
  uRam000000014cbca868 = 0;
  _DAT_14cbca870 = 0;
  DAT_14cbca878 = 0;
  uRam000000014cbca880 = 0;
  FUN_1446ddda2(&DAT_14cbca860,"character_progress.seen_credits",0);
  atexit((_func_5014 *)&LAB_1441479a0);
  local_78 = "oak2.demomode";
  uStack_70 = 0xd;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca3e8 = (ulonglong)uVar2;
  DAT_14cbca530 = 0;
  _DAT_14cbca538 = 0;
  DAT_14cbca510 = 0;
  _DAT_14cbca518 = 0;
  _DAT_14cbca53c = 0xffffffff00000080;
  DAT_14cbca544 = 0;
  DAT_14cbca550 = 0;
  DAT_14cbca558 = 0;
  atexit(FUN_144149801);
  local_78 = "local";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbca7c8 = (ulonglong)uVar2;
  local_78 = "cloud";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca560 = (ulonglong)uVar2;
  local_78 = "oak2";
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca450 = (ulonglong)uVar2;
  local_78 = "ozone";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca8a0 = (ulonglong)uVar2;
  DAT_14cbca568 = 0;
  local_78 = "HeadlessPlayerReady";
  uStack_70 = 0x13;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbca570 = (ulonglong)uVar2;
  local_78 = "AICloaking";
  uStack_70 = 10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78);
  DAT_14cbca578 = (ulonglong)uVar2;
  local_78 = (char *)0xea348d9a0c52a9b;
  uStack_70 = 0x8e9a9234;
  uStack_6c = 0xe002c5bc;
  _DAT_14cbca580 = 0xa0c52a9b;
  uRam000000014cbca584 = 0xea348d9;
  uRam000000014cbca588 = 0x8e9a9234;
  uRam000000014cbca58c = 0xe002c5bc;
  FUN_141005458(&local_78,0,L"OakBodyNodeSettings_ElementSwitch",0);
  atexit((_func_5014 *)&LAB_14414aa3e);
  FUN_1446f470e(&DAT_14cbca590,L"FirstPersonArms",1);
  FUN_1446f470e(&DAT_14cbca598,L"FirstPersonLegs",1);
  FUN_1446f470e(&DAT_14cbca5a0,L"AlwaysAnimateArms",1);
  FUN_1446f470e(&DAT_14cbca5a8,L"Camera",1);
  FUN_1446f470e(&DAT_14cbca5b0,L"Spine5",1);
  FUN_1446f470e(&DAT_14cbca5b8,L"Muzzle_Lead",1);
  FUN_1446f470e(&DAT_14cbca5c0,L"ADD_Secondary",1);
  FUN_1446f470e(&DAT_14cbca5c8,L"FirstPerson_Player_Shared",1);
  FUN_1446f470e(&DAT_14cbca630,L"FirstPersonArms",1);
  FUN_1446f470e(&DAT_14cbca628,L"FirstPersonLegs",1);
  FUN_1446f470e(&DAT_14cbca5dc,L"SkipStartAnimation",1);
  FUN_1446f470e(&DAT_14cbca5e4,L"AICharge",1);
  FUN_1446f470e(&DAT_14cbca5ec,L"StrikeAngle",1);
  FUN_1446f470e(&DAT_14cbca5f4,L"StrikeDistance",1);
  FUN_1446f470e(&DAT_14cbca5fc,L"DirectionType",1);
  FUN_1446f470e(&DAT_14cbca608,L"Locked",1);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441565c8 FUN_1441565c8 body=1189 status=ok
// SIG undefined FUN_1441565c8(void)

ulonglong FUN_1441565c8(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  undefined7 uVar15;
  ulonglong uVar14;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong **)(param_1 + 0xe0) == (longlong *)0x0) || (*(int *)(param_1 + 0xdc) == 0)) {
LAB_144156641:
    uVar14 = 0;
    goto LAB_144156643;
  }
  uVar8 = *(uint *)(param_1 + 0xd8);
  uVar14 = 0;
  if (((int)uVar8 < 0) || (DAT_14c9647dc <= (int)uVar8)) goto LAB_144156643;
  lVar16 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
  if (((lVar16 == 0) || (*(int *)(lVar16 + 0x10) != *(int *)(param_1 + 0xdc))) ||
     ((*(uint *)(lVar16 + 8) & 0x10200000) != 0)) goto LAB_144156641;
  lVar16 = *(longlong *)(param_1 + 0x48);
  lVar9 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
  if (*(char *)(lVar16 + 0xa0) == '\x01') {
    uVar10 = FUN_140343d7a(param_1);
    uVar11 = FUN_140963804(lVar16 + 0x88U,uVar10);
    uVar14 = lVar16 + 0x88U;
    if (uVar11 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x100);
      if (*(char *)(lVar16 + 0x80) == '\x01') {
        *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar9 + 0x108);
        uVar4 = *(undefined4 *)(lVar9 + 0x114);
        uVar5 = *(undefined4 *)(lVar9 + 0x118);
        uVar6 = *(undefined4 *)(lVar9 + 0x11c);
        *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(lVar9 + 0x110);
        *(undefined4 *)(param_1 + 0xf4) = uVar4;
        *(undefined4 *)(param_1 + 0xf8) = uVar5;
        *(undefined4 *)(param_1 + 0xfc) = uVar6;
        if (puVar1 != (undefined8 *)(lVar9 + 0x120)) {
          iVar2 = *(int *)(lVar9 + 0x128);
          pvVar3 = *(void **)(lVar9 + 0x120);
          *(int *)(param_1 + 0x108) = iVar2;
          if (iVar2 == 0 && *(int *)(param_1 + 0x10c) == 0) {
            *(undefined4 *)(param_1 + 0x10c) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar2);
            if (iVar2 != 0) {
              memcpy((void *)*puVar1,pvVar3,(longlong)iVar2 * 2);
            }
          }
        }
        FUN_1400bbfc4(&local_68,uVar11);
        *(undefined4 *)(lVar9 + 0x110) = local_68;
        *(undefined4 *)(lVar9 + 0x114) = uStack_64;
        *(undefined4 *)(lVar9 + 0x118) = uStack_60;
        *(undefined4 *)(lVar9 + 0x11c) = uStack_5c;
        if ((undefined4 *)(lVar9 + 0x110) == &local_68) {
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(lVar9 + 0x120) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(lVar9 + 0x120) = local_58;
          local_58 = 0;
          *(undefined4 *)(lVar9 + 0x128) = local_50;
          *(undefined4 *)(lVar9 + 300) = local_4c;
        }
        cVar7 = (*(code *)PTR_FUN_14c758760)();
        iVar2 = DAT_14c9647dc;
        uVar8 = *(uint *)(uVar11 + 0xc);
        if (cVar7 == '\0') {
LAB_14415694b:
          *(uint *)(lVar9 + 0x108) = uVar8;
          if ((int)uVar8 < iVar2) {
            lVar17 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
          }
          else {
            lVar17 = 0;
          }
          uVar8 = *(uint *)(lVar17 + 0x10);
          lVar12 = 0x10c;
          goto LAB_1441569cc;
        }
        if ((int)uVar8 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        if ((*(uint *)(lVar12 + 8) & 0x8400000) == 0) goto LAB_14415694b;
        *(undefined4 *)(lVar9 + 0x108) = 0;
        lVar12 = 0x10c;
        uVar8 = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar9 + 0xd8);
        uVar4 = *(undefined4 *)(lVar9 + 0xe4);
        uVar5 = *(undefined4 *)(lVar9 + 0xe8);
        uVar6 = *(undefined4 *)(lVar9 + 0xec);
        *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(lVar9 + 0xe0);
        *(undefined4 *)(param_1 + 0xf4) = uVar4;
        *(undefined4 *)(param_1 + 0xf8) = uVar5;
        *(undefined4 *)(param_1 + 0xfc) = uVar6;
        if (puVar1 != (undefined8 *)(lVar9 + 0xf0)) {
          iVar2 = *(int *)(lVar9 + 0xf8);
          pvVar3 = *(void **)(lVar9 + 0xf0);
          *(int *)(param_1 + 0x108) = iVar2;
          if (iVar2 == 0 && *(int *)(param_1 + 0x10c) == 0) {
            *(undefined4 *)(param_1 + 0x10c) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar2);
            if (iVar2 != 0) {
              memcpy((void *)*puVar1,pvVar3,(longlong)iVar2 * 2);
            }
          }
        }
        FUN_1400bbfc4(&local_68,uVar11);
        *(undefined4 *)(lVar9 + 0xe0) = local_68;
        *(undefined4 *)(lVar9 + 0xe4) = uStack_64;
        *(undefined4 *)(lVar9 + 0xe8) = uStack_60;
        *(undefined4 *)(lVar9 + 0xec) = uStack_5c;
        if ((undefined4 *)(lVar9 + 0xe0) == &local_68) {
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(lVar9 + 0xf0) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(lVar9 + 0xf0) = local_58;
          local_58 = 0;
          *(undefined4 *)(lVar9 + 0xf8) = local_50;
          *(undefined4 *)(lVar9 + 0xfc) = local_4c;
        }
        cVar7 = (*(code *)PTR_FUN_14c758760)();
        iVar2 = DAT_14c9647dc;
        uVar8 = *(uint *)(uVar11 + 0xc);
        if (cVar7 != '\0') {
          if ((int)uVar8 < DAT_14c9647dc) {
            lVar12 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
          }
          else {
            lVar12 = 0;
          }
          if ((*(uint *)(lVar12 + 8) & 0x8400000) != 0) {
            *(undefined4 *)(lVar9 + 0xd8) = 0;
            lVar12 = 0xdc;
            uVar8 = 0;
            goto LAB_1441569d0;
          }
        }
        *(uint *)(lVar9 + 0xd8) = uVar8;
        if ((int)uVar8 < iVar2) {
          lVar17 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        }
        else {
          lVar17 = 0;
        }
        uVar8 = *(uint *)(lVar17 + 0x10);
        lVar12 = 0xdc;
LAB_1441569cc:
        if (uVar8 == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          uVar13 = DAT_14c964868 + 1;
          uVar11 = (ulonglong)uVar13;
          bVar18 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar18) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar11);
          }
          LOCK();
          uVar8 = *(uint *)(lVar17 + 0x10);
          bVar18 = uVar8 == 0;
          if (bVar18) {
            *(uint *)(lVar17 + 0x10) = uVar13;
            uVar8 = 0;
          }
          UNLOCK();
          if (bVar18) {
            uVar8 = uVar13;
          }
        }
      }
LAB_1441569d0:
      *(uint *)(lVar9 + lVar12) = uVar8;
      uVar14 = uVar11;
    }
  }
  uVar15 = (undefined7)(uVar14 >> 8);
  if (*(char *)(lVar16 + 0x80) == '\x01') {
    FUN_14661fa0e(lVar9,0,0,0);
    uVar14 = CONCAT71(uVar15,1);
  }
  else {
    cVar7 = FUN_1411d74a2(lVar9);
    uVar14 = CONCAT71(uVar15,1);
    if (cVar7 != '\0') {
      FUN_140f1fcc2(lVar9,0,0,0);
    }
  }
LAB_144156643:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 144156a6e FUN_144156a6e body=257 status=ok
// SIG undefined FUN_144156a6e(void)

ulonglong FUN_144156a6e(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar7;
  undefined7 uVar6;
  
  uVar6 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar5 = CONCAT71(uVar6,2);
  if (((((*(longlong **)(param_1 + 0xe0) == (longlong *)0x0) || (*(int *)(param_1 + 0xdc) == 0)) ||
       (uVar2 = *(uint *)(param_1 + 0xd8), (int)uVar2 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar2 ||
       (lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar7 == 0)))) ||
     ((*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0xdc) ||
      ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)))) goto LAB_144156b35;
  lVar7 = *(longlong *)(param_1 + 0x48);
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
  cVar1 = *(char *)(lVar3 + 0xd0);
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1);
  uVar5 = CONCAT71(uVar6,1);
  if (*(char *)(lVar7 + 0x81) == '\x01') {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
    if (*(longlong *)(lVar3 + 0xc0) != 0) {
      uVar5 = CONCAT71(uVar6,*(char *)(*(longlong *)(lVar3 + 0xc0) + 0xa0) != '\0');
    }
  }
  if (*(char *)(lVar7 + 0x80) == '\x01') {
    if (cVar1 == '\x03') goto LAB_144156b35;
    if (cVar1 == '\x01') {
      uVar5 = CONCAT71((int7)(uVar5 >> 8),3);
      goto LAB_144156b35;
    }
    if (cVar1 == '\x02') {
      uVar5 = 0;
      goto LAB_144156b35;
    }
  }
  else {
    if (cVar1 == '\0') {
      uVar5 = uVar4 & 0xffffffff;
      goto LAB_144156b35;
    }
    if ((cVar1 == '\x01') || (uVar5 = uVar4 & 0xffffffff, cVar1 == '\x03')) goto LAB_144156b35;
  }
  uVar5 = CONCAT71((int7)(uVar5 >> 8),2);
LAB_144156b35:
  return uVar5 & 0xffffffff;
}



// FUNCTION 144156b70 FUN_144156b70 body=39 status=ok
// SIG undefined FUN_144156b70(void)

undefined8 FUN_144156b70(longlong param_1)

{
  char cVar1;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x48) + 0xc2) == '\x01') &&
     (cVar1 = FUN_14112ecda(), cVar1 == '\0')) {
    return 2;
  }
  return 0;
}



// FUNCTION 144156b98 FUN_144156b98 body=717 status=ok
// SIG undefined FUN_144156b98(void)

undefined8 FUN_144156b98(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) && (*(int *)(param_1 + 0xdc) != 0)) {
    uVar2 = *(uint *)(param_1 + 0xd8);
    if ((int)uVar2 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar2) {
      return 0;
    }
    lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0xdc))) &&
       ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) {
      lVar9 = *(longlong *)(param_1 + 0x48);
      lVar8 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
      FUN_14036fd5a(param_1 + 0xe8,lVar8 + 0xd8);
      if (*(char *)(lVar9 + 0x80) == '\x01') {
        *(undefined8 *)(lVar8 + 0xd8) = *(undefined8 *)(lVar9 + 0x88);
        uVar5 = *(undefined4 *)(lVar9 + 0x94);
        uVar6 = *(undefined4 *)(lVar9 + 0x98);
        uVar7 = *(undefined4 *)(lVar9 + 0x9c);
        *(undefined4 *)(lVar8 + 0xe0) = *(undefined4 *)(lVar9 + 0x90);
        *(undefined4 *)(lVar8 + 0xe4) = uVar5;
        *(undefined4 *)(lVar8 + 0xe8) = uVar6;
        *(undefined4 *)(lVar8 + 0xec) = uVar7;
        puVar1 = (undefined8 *)(lVar8 + 0xf0);
        if (puVar1 != (undefined8 *)(lVar9 + 0xa0)) {
          iVar3 = *(int *)(lVar9 + 0xa8);
          pvVar4 = *(void **)(lVar9 + 0xa0);
          *(int *)(lVar8 + 0xf8) = iVar3;
          if (iVar3 == 0 && *(int *)(lVar8 + 0xfc) == 0) {
            *(undefined4 *)(lVar8 + 0xfc) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar3);
            if (iVar3 != 0) {
              memcpy((void *)*puVar1,pvVar4,(longlong)iVar3 * 2);
            }
          }
        }
      }
      if (*(char *)(lVar9 + 0xb0) == '\x01') {
        *(undefined1 *)(lVar8 + 0x100) = *(undefined1 *)(lVar9 + 0xb1);
      }
      if (*(char *)(lVar9 + 0xb2) == '\x01') {
        *(undefined8 *)(lVar8 + 0x108) = *(undefined8 *)(lVar9 + 0xb8);
        uVar5 = *(undefined4 *)(lVar9 + 0xc4);
        uVar6 = *(undefined4 *)(lVar9 + 200);
        uVar7 = *(undefined4 *)(lVar9 + 0xcc);
        *(undefined4 *)(lVar8 + 0x110) = *(undefined4 *)(lVar9 + 0xc0);
        *(undefined4 *)(lVar8 + 0x114) = uVar5;
        *(undefined4 *)(lVar8 + 0x118) = uVar6;
        *(undefined4 *)(lVar8 + 0x11c) = uVar7;
        puVar1 = (undefined8 *)(lVar8 + 0x120);
        if (puVar1 != (undefined8 *)(lVar9 + 0xd0)) {
          iVar3 = *(int *)(lVar9 + 0xd8);
          pvVar4 = *(void **)(lVar9 + 0xd0);
          *(int *)(lVar8 + 0x128) = iVar3;
          if (iVar3 == 0 && *(int *)(lVar8 + 300) == 0) {
            *(undefined4 *)(lVar8 + 300) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar3);
            if (iVar3 != 0) {
              memcpy((void *)*puVar1,pvVar4,(longlong)iVar3 * 2);
            }
          }
        }
      }
      if (*(char *)(lVar9 + 0xe0) == '\x01') {
        *(undefined1 *)(lVar8 + 0x130) = *(undefined1 *)(lVar9 + 0xe1);
      }
      if (*(char *)(lVar9 + 0xe2) == '\x01') {
        *(undefined1 *)(lVar8 + 0x160) = *(undefined1 *)(lVar9 + 0xe3);
      }
      if (*(char *)(lVar9 + 0xe4) == '\x01') {
        *(undefined1 *)(lVar8 + 0x161) = *(undefined1 *)(lVar9 + 0xe5);
      }
      if (*(char *)(lVar9 + 0xe6) == '\x01') {
        *(undefined1 *)(lVar8 + 0x162) = *(undefined1 *)(lVar9 + 0xe7);
      }
      if (*(char *)(lVar9 + 0xe8) == '\x01') {
        *(undefined4 *)(lVar8 + 0x164) = *(undefined4 *)(lVar9 + 0xec);
      }
      if (*(char *)(lVar9 + 0xf0) == '\x01') {
        *(undefined1 *)(lVar8 + 0x1a8) = *(undefined1 *)(lVar9 + 0xf1);
      }
      if (*(char *)(lVar9 + 0xf2) == '\x01') {
        *(undefined1 *)(lVar8 + 0x1a9) = *(undefined1 *)(lVar9 + 0xf3);
      }
      if (*(char *)(lVar9 + 0xf4) == '\x01') {
        *(undefined1 *)(lVar8 + 0x1aa) = *(undefined1 *)(lVar9 + 0xf5);
      }
      if (*(char *)(lVar9 + 0xf6) == '\x01') {
        *(undefined1 *)(lVar8 + 0x1ab) = *(undefined1 *)(lVar9 + 0xf7);
      }
      if (*(char *)(lVar9 + 0xf8) == '\x01') {
        *(undefined1 *)(lVar8 + 0x1ac) = *(undefined1 *)(lVar9 + 0xf9);
      }
      if (*(char *)(lVar9 + 0xfa) != '\x01') {
        return 1;
      }
      FUN_14180246c(lVar8 + 0x1e8,lVar9 + 0x100);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144156e66 FUN_144156e66 body=132 status=ok
// SIG undefined FUN_144156e66(void)

void FUN_144156e66(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if ((((*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) && (*(int *)(param_1 + 0xdc) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0xd8), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0xdc))) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
      FUN_14036fd5a(lVar2 + 0xd8,param_1 + 0xe8);
      return;
    }
  }
  return;
}



// FUNCTION 144156eea FUN_144156eea body=507 status=ok
// SIG undefined FUN_144156eea(void)

char FUN_144156eea(longlong *param_1)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 ****ppppuVar10;
  longlong lVar11;
  undefined1 auStack_b8 [47];
  char local_89;
  char local_88 [16];
  longlong *local_78;
  int local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = FUN_140343d7a();
  if (lVar5 != 0) {
    lVar6 = FUN_140a40fb0(lVar5);
    if (lVar6 != 0) {
      cVar4 = FUN_140532d9e(lVar6);
      if (cVar4 != '\0') {
        local_89 = '\0';
        local_88[0] = '\0';
        local_60 = 0;
        FUN_1456bb102(local_88,lVar5);
        FUN_1447c3578(param_1 + 0x1b,local_58,local_88);
        cVar4 = FUN_140613580(local_58,&local_89);
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
        if (pcVar2 != (code *)0x0) {
          ppppuVar10 = local_58;
          if (0x18 < local_40) {
            ppppuVar10 = (undefined8 ****)local_58[0];
          }
          (*pcVar2)(ppppuVar10);
        }
        if (0x18 < local_40) {
          FUN_1400020a8(local_58[0]);
        }
        lVar5 = DAT_14c9a3da0;
        if ((longlong)local_60 != 0) {
          lVar6 = (longlong)local_60 + -1;
          lVar11 = lVar6 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
          if (*(longlong *)(lVar5 + lVar11) != 0) {
            FUN_1400020a8();
          }
          lVar5 = DAT_14c9a3da0;
          iVar9 = (int)lVar6;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
          }
          *(undefined4 *)(lVar5 + lVar11) = 0xffffffff;
          iVar7 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar7 = DAT_14c9a3dd0;
          }
          *(int *)(lVar5 + 4 + lVar11) = iVar7;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar8 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar8 = DAT_14c9a3dc0;
          }
          iVar7 = iVar9 + 0x1f;
          if (-1 < iVar9) {
            iVar7 = iVar9;
          }
          bVar3 = (byte)lVar6 & 0x1f;
          DAT_14c9a3dd0 = iVar9;
          *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) =
               *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) &
               (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
          local_60 = 0;
        }
        if ((local_88[0] == '\x03') && (local_78 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_78 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_78 + 0x10))();
          }
        }
        if ((cVar4 == '\0') || (local_89 == '\x01')) {
          cVar4 = (**(code **)(*param_1 + 0x28))(param_1);
          cVar4 = cVar4 * '\x02';
          goto LAB_144156f35;
        }
      }
    }
  }
  cVar4 = '\0';
LAB_144156f35:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return cVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441570e6 FUN_1441570e6 body=179 status=ok
// SIG undefined FUN_1441570e6(void)

ulonglong FUN_1441570e6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (((((*(longlong **)(param_1 + 0x120) != (longlong *)0x0) && (*(int *)(param_1 + 0x11c) != 0))
       && (uVar1 = *(uint *)(param_1 + 0x118), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)))) &&
     ((*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x11c) &&
      (((*(uint *)(lVar4 + 8) & 0x10200000) == 0 && (*(char *)(param_1 + 0x110) != '\0')))))) {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x50))();
    if ((longlong)*(int *)(lVar4 + 0x48) != 0) {
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x40) + lVar5);
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x40) == *(char *)(param_1 + 0x110))) {
          uVar3 = 0;
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(lVar4 + 0x48) * 0x10 != lVar5);
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14415719a FUN_14415719a body=80 status=ok
// SIG undefined FUN_14415719a(void)

void FUN_14415719a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  FUN_1414a6602();
  lVar1 = FUN_140343d7a(param_1);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0xe8) == '\x01')) {
    FUN_141277bb4(lVar1,*(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x2b8),
                  *(undefined8 *)(param_1 + 0xe0),param_2);
    return;
  }
  return;
}



// FUNCTION 1441571ea FUN_1441571ea body=353 status=ok
// SIG undefined FUN_1441571ea(void)

char FUN_1441571ea(void)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar3 = (longlong *)FUN_140343d7a();
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_140a32494();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = FUN_140a32494();
      plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
      cVar2 = '\0';
      if ((plVar3 == plVar5) || (plVar5 == (longlong *)0x0)) goto LAB_14415732f;
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if ((lVar6 != 0) && (*(int *)(lVar6 + 0x3c) != 0)) {
        uVar1 = *(uint *)(lVar6 + 0x38);
        cVar2 = '\0';
        if ((int)uVar1 < 0) goto LAB_14415732f;
        cVar2 = '\0';
        if (DAT_14c9647dc <= (int)uVar1) goto LAB_14415732f;
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == *(int *)(lVar6 + 0x3c))) {
          cVar2 = '\0';
          if (((*(uint *)(lVar7 + 8) & 0x10200000) != 0) || (*(longlong *)(lVar6 + 0x50) == 0))
          goto LAB_14415732f;
          if (*(int *)(lVar6 + 0x4c) != 0) {
            uVar1 = *(uint *)(lVar6 + 0x48);
            cVar2 = '\0';
            if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14415732f;
            lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            if ((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == *(int *)(lVar6 + 0x4c))) {
              cVar2 = '\0';
              if (((*(uint *)(lVar7 + 8) & 0x10200000) == 0) && (*(longlong *)(lVar6 + 0x40) != 0))
              {
                FUN_140a6fcb2(lVar6,&local_18);
                cVar2 = (local_18 == 0) * '\x02';
              }
              goto LAB_14415732f;
            }
          }
        }
      }
    }
  }
  cVar2 = '\0';
LAB_14415732f:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return cVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144157390 FUN_144157390 body=1370 status=ok
// SIG undefined FUN_144157390(void)

undefined8 FUN_144157390(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
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
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined1 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar11 = *(longlong *)(param_1 + 0x40);
  if (lVar11 == 0) {
    lVar6 = 0;
    local_68 = 0;
LAB_14415775c:
    local_60 = (longlong *)0x0;
    bVar15 = true;
  }
  else {
    if (*(int *)(lVar11 + 0x4c) == 0) {
LAB_14415766c:
      lVar6 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar11 + 0x48);
      lVar6 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar10 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar10 == (longlong *)0x0) ||
           (((int)plVar10[2] != *(int *)(lVar11 + 0x4c) ||
            ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_14415766c;
        lVar6 = *plVar10;
      }
    }
    plVar10 = *(longlong **)(lVar11 + 0x118);
    local_68 = param_1;
    if (plVar10 == (longlong *)0x0) goto LAB_14415775c;
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    bVar15 = false;
    local_60 = plVar10;
  }
  plVar10 = local_60;
  local_70 = (code *)CONCAT71(local_70._1_7_,3);
  local_48 = 0;
  local_58._0_4_ = 0;
  if (lVar6 == 0) {
    iVar5 = 0;
    uVar3 = (uint)local_58;
  }
  else {
    uVar3 = *(uint *)(lVar6 + 0xc);
    local_58 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar5 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar11 + 0x10);
      bVar14 = iVar5 == 0;
      if (bVar14) {
        *(int *)(lVar11 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_58;
      if (bVar14) {
        iVar5 = iVar9;
      }
    }
  }
  local_58._0_4_ = uVar3;
  local_58 = CONCAT44(iVar5,(uint)local_58);
  local_50 = 2;
  if (local_48 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_48 + -1,1);
    local_48 = 0;
  }
  if (!bVar15) {
    LOCK();
    piVar2 = (int *)((longlong)plVar10 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  lVar6 = FUN_148d398ce(*(longlong *)(param_1 + 0x48) + 0x80,&local_70);
  lVar11 = DAT_14c9a3da0;
  if ((longlong)local_48 != 0) {
    lVar12 = (longlong)local_48 + -1;
    lVar13 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
    if (*(longlong *)(lVar11 + lVar13) != 0) {
      FUN_1400020a8();
    }
    lVar11 = DAT_14c9a3da0;
    iVar5 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar5;
    }
    *(undefined4 *)(lVar11 + lVar13) = 0xffffffff;
    iVar9 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar9 = DAT_14c9a3dd0;
    }
    *(int *)(lVar11 + 4 + lVar13) = iVar9;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar8 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar8 = DAT_14c9a3dc0;
    }
    iVar9 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar9 = iVar5;
    }
    bVar4 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar5;
    *(uint *)(puVar8 + (longlong)(iVar9 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar9 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_48 = 0;
  }
  if (((char)local_70 == '\x03') && (local_60 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_60 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  lVar11 = *(longlong *)(param_1 + 0x40);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0x4c) != 0)) {
    uVar3 = *(uint *)(lVar11 + 0x48);
    uVar7 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_144157589;
    plVar10 = (longlong *)
              ((ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((((plVar10 != (longlong *)0x0) && ((int)plVar10[2] == *(int *)(lVar11 + 0x4c))) &&
        ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) && (lVar11 = *plVar10, lVar11 != 0)) {
      if (DAT_14cba8288 == 0) {
        local_70 = FUN_141864c34;
        local_80 = FUN_14081d0ea;
        local_88 = &LAB_1464cee30;
        local_98 = &LAB_148bfac22;
        local_a0 = &LAB_140f21842;
        local_a8 = &DAT_149e063b2;
        local_b0 = 0;
        local_b8 = 0x10000004;
        local_c0 = 0x10;
        local_c8 = 0x9cd0;
        local_90 = &local_70;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if (*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) {
        uVar7 = 0;
        if ((lVar6 == 0) ||
           (uVar7 = 0,
           *(longlong *)
            (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30))
        goto LAB_144157589;
        if (*(char *)(lVar6 + 0x73eb) == '\x01') {
          plVar10 = (longlong *)(lVar11 + 0x3ac8);
          lVar11 = (**(code **)(*(longlong *)(lVar11 + 0x3ac8) + 0x28))(plVar10);
          if ((lVar11 == 0) || (lVar11 = (**(code **)(*plVar10 + 0x28))(plVar10), lVar11 == lVar6))
          {
            uVar3 = *(uint *)(lVar6 + 0xc);
            *(uint *)(param_1 + 0xd8) = uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar11 = 0;
            }
            iVar5 = *(int *)(lVar11 + 0x10);
            if (*(int *)(lVar11 + 0x10) == 0) {
              LOCK();
              iVar5 = DAT_14c964868 + 1;
              UNLOCK();
              iVar9 = DAT_14c964868 + 1;
              bVar15 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar5;
              if (bVar15) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar9);
              }
              LOCK();
              iVar5 = *(int *)(lVar11 + 0x10);
              bVar15 = iVar5 == 0;
              if (bVar15) {
                *(int *)(lVar11 + 0x10) = iVar9;
                iVar5 = 0;
              }
              UNLOCK();
              if (bVar15) {
                iVar5 = iVar9;
              }
            }
            *(int *)(param_1 + 0xdc) = iVar5;
            uVar7 = CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),2);
            goto LAB_144157589;
          }
        }
      }
    }
  }
  uVar7 = 0;
LAB_144157589:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1441578ec FUN_1441578ec body=1603 status=ok
// SIG undefined FUN_1441578ec(void)

ulonglong FUN_1441578ec(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined *puVar14;
  undefined8 unaff_RBP;
  ulonglong uVar15;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  bool bVar21;
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
  code *local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58;
  int local_50;
  ulonglong local_48;
  undefined7 uVar16;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar10 = *(longlong *)(param_1 + 0x40);
  if ((((((lVar10 == 0) || (*(int *)(lVar10 + 0x4c) == 0)) ||
        (uVar3 = *(uint *)(lVar10 + 0x48), (int)uVar3 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar3 ||
        (plVar13 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
        plVar13 == (longlong *)0x0)))) || ((int)plVar13[2] != *(int *)(lVar10 + 0x4c))) ||
     (((*(uint *)(plVar13 + 1) & 0x10200000) != 0 || (lVar10 = *plVar13, lVar10 == 0)))) {
LAB_14415798f:
    lVar10 = 0;
  }
  else {
    if (DAT_14cba8288 == 0) {
      local_90 = &local_78;
      local_78 = FUN_141864c34;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_1464cee30;
      local_98 = &LAB_148bfac22;
      local_a0 = &LAB_140f21842;
      local_a8 = &DAT_149e063b2;
      local_b0 = 0;
      local_b8 = 0x10000004;
      local_c0 = 0x10;
      local_c8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_14415798f;
  }
  uVar16 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar15 = CONCAT71(uVar16,2);
  if (*(int *)(param_1 + 0xdc) == 0) goto LAB_1441579f1;
  puVar2 = (uint *)(param_1 + 0xd8);
  uVar3 = *puVar2;
  if (((((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) ||
      (plVar13 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
      plVar13 == (longlong *)0x0)) ||
     ((((int)plVar13[2] != *(int *)(param_1 + 0xdc) || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0))
      || ((lVar10 == 0 || (*plVar13 == 0)))))) goto LAB_1441579f1;
  lVar18 = *(longlong *)(param_1 + 0x40);
  if (lVar18 == 0) {
    lVar9 = 0;
    local_70 = 0;
LAB_144157def:
    local_68 = (longlong *)0x0;
    bVar5 = true;
  }
  else {
    if (*(int *)(lVar18 + 0x4c) == 0) {
LAB_144157cec:
      lVar9 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar18 + 0x48);
      lVar9 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(lVar18 + 0x4c) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_144157cec;
        lVar9 = *plVar13;
      }
    }
    plVar13 = *(longlong **)(lVar18 + 0x118);
    local_70 = param_1;
    if (plVar13 == (longlong *)0x0) goto LAB_144157def;
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar13 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    LOCK();
    *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
    UNLOCK();
    bVar5 = false;
    local_68 = plVar13;
  }
  plVar13 = local_68;
  local_78 = (code *)CONCAT71(local_78._1_7_,3);
  local_50 = 0;
  local_60._0_4_ = 0;
  if (lVar9 == 0) {
    iVar7 = 0;
    uVar3 = (uint)local_60;
  }
  else {
    uVar3 = *(uint *)(lVar9 + 0xc);
    local_60 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    iVar7 = *(int *)(lVar18 + 0x10);
    if (*(int *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar7 = *(int *)(lVar18 + 0x10);
      bVar21 = iVar7 == 0;
      if (bVar21) {
        *(int *)(lVar18 + 0x10) = iVar19;
        iVar7 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_60;
      if (bVar21) {
        iVar7 = iVar19;
      }
    }
  }
  local_60._0_4_ = uVar3;
  local_60 = CONCAT44(iVar7,(uint)local_60);
  local_58 = 2;
  if (local_50 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_50 + -1,1);
    local_50 = 0;
  }
  if (!bVar5) {
    LOCK();
    piVar1 = (int *)((longlong)plVar13 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  lVar9 = FUN_148d398ce(*(longlong *)(param_1 + 0x48) + 0x80,&local_78);
  lVar18 = DAT_14c9a3da0;
  if ((longlong)local_50 != 0) {
    lVar20 = (longlong)local_50 + -1;
    lVar17 = lVar20 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar17),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar17));
    if (*(longlong *)(lVar18 + lVar17) != 0) {
      FUN_1400020a8();
    }
    lVar18 = DAT_14c9a3da0;
    iVar7 = (int)lVar20;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
    }
    *(undefined4 *)(lVar18 + lVar17) = 0xffffffff;
    iVar19 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar19 = DAT_14c9a3dd0;
    }
    *(int *)(lVar18 + 4 + lVar17) = iVar19;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar14 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar14 = DAT_14c9a3dc0;
    }
    iVar19 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar19 = iVar7;
    }
    bVar4 = (byte)lVar20 & 0x1f;
    DAT_14c9a3dd0 = iVar7;
    *(uint *)(puVar14 + (longlong)(iVar19 >> 5) * 4) =
         *(uint *)(puVar14 + (longlong)(iVar19 >> 5) * 4) &
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
  if (((lVar9 != 0) && (cVar6 = FUN_140e8a950(puVar2,lVar9), cVar6 == '\0')) &&
     (*(char *)(*(longlong *)(param_1 + 0x48) + 0xb8) != '\x01')) goto LAB_1441579f1;
  if (*(int *)(param_1 + 0xdc) == 0) {
LAB_144157cf4:
    lVar18 = 0;
  }
  else {
    uVar3 = *puVar2;
    lVar18 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar13 = (longlong *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar13 == (longlong *)0x0) ||
         (((int)plVar13[2] != *(int *)(param_1 + 0xdc) ||
          ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_144157cf4;
      lVar18 = *plVar13;
    }
  }
  uVar15 = CONCAT71(uVar16,1);
  if (*(char *)(lVar18 + 0x73eb) != '\x01') goto LAB_1441579f1;
  plVar13 = (longlong *)(lVar10 + 0x3ac8);
  lVar10 = (**(code **)(*(longlong *)(lVar10 + 0x3ac8) + 0x28))();
  if (lVar10 == 0) {
    if (*(int *)(param_1 + 0xdc) == 0) {
LAB_144157de5:
      lVar10 = 0;
    }
    else {
      uVar3 = *puVar2;
      lVar10 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar12 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar12 == (longlong *)0x0) ||
           (((int)plVar12[2] != *(int *)(param_1 + 0xdc) ||
            ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_144157de5;
        lVar10 = *plVar12;
      }
    }
    uVar15 = CONCAT71(uVar16,2);
    if (*(char *)(lVar10 + 0x73eb) != '\x01') goto LAB_1441579f1;
    uVar8 = FUN_1440f98fc(lVar10 + 0x71a8,plVar13,0);
  }
  else {
    uVar11 = (**(code **)(*plVar13 + 0x28))(plVar13);
    uVar8 = FUN_140e8a950(puVar2,uVar11);
  }
  uVar15 = (ulonglong)CONCAT31((int3)((uint)uVar8 >> 8),((byte)uVar8 ^ 1) * '\x02');
LAB_1441579f1:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffff;
}



// FUNCTION 144157f30 FUN_144157f30 body=4481 status=ok
// SIG undefined FUN_144157f30(void)

ulonglong FUN_144157f30(ulonglong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined *puVar11;
  int iVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  undefined4 uVar21;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined8 local_108;
  ulonglong local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  bVar5 = FUN_14414d546();
  lVar10 = *(longlong *)(param_1 + 0x48);
  lVar18 = *(longlong *)(param_1 + 0x40);
  if (lVar18 == 0) {
    lVar17 = 0;
    local_100 = 0;
LAB_144158d85:
    local_f8 = (longlong *)0x0;
    bVar4 = true;
  }
  else {
    if (*(int *)(lVar18 + 0x4c) == 0) {
LAB_1441589d6:
      lVar17 = 0;
    }
    else {
      uVar9 = *(uint *)(lVar18 + 0x48);
      lVar17 = 0;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
        plVar15 = (longlong *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
        if ((plVar15 == (longlong *)0x0) ||
           (((int)plVar15[2] != *(int *)(lVar18 + 0x4c) ||
            ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_1441589d6;
        lVar17 = *plVar15;
      }
    }
    plVar15 = *(longlong **)(lVar18 + 0x118);
    local_100 = param_1;
    if (plVar15 == (longlong *)0x0) goto LAB_144158d85;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar15 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    LOCK();
    *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
    UNLOCK();
    bVar4 = false;
    local_f8 = plVar15;
  }
  plVar15 = local_f8;
  local_e0 = (longlong *)((ulonglong)local_e0._4_4_ << 0x20);
  local_108 = CONCAT71(local_108._1_7_,3);
  uStack_f0._0_4_ = 0;
  if (lVar17 == 0) {
    iVar8 = 0;
    uVar9 = (uint)uStack_f0;
  }
  else {
    uVar9 = *(uint *)(lVar17 + 0xc);
    uStack_f0 = (ulonglong)uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    iVar8 = *(int *)(lVar18 + 0x10);
    if (*(int *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar8 = *(int *)(lVar18 + 0x10);
      bVar20 = iVar8 == 0;
      if (bVar20) {
        *(int *)(lVar18 + 0x10) = iVar12;
        iVar8 = 0;
      }
      UNLOCK();
      uVar9 = (uint)uStack_f0;
      if (bVar20) {
        iVar8 = iVar12;
      }
    }
  }
  uStack_f0._0_4_ = uVar9;
  uStack_f0 = CONCAT44(iVar8,(uint)uStack_f0);
  local_e8 = CONCAT71(local_e8._1_7_,2);
  if ((int)local_e0 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,(int)local_e0 + -1,1);
    local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
  }
  if (!bVar4) {
    LOCK();
    piVar2 = (int *)((longlong)plVar15 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  puVar16 = &local_b0;
  FUN_1447c3578(lVar10 + 0x230,puVar16,&local_108);
  if (local_90 == 3) {
    uVar21 = local_b0;
    bVar6 = 3;
  }
  else {
    puVar14 = &local_88;
    FUN_1400b56fe(puVar14,&local_b0,3);
    uVar21 = 0;
    if (local_68 != 0) {
      uVar21 = local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar14 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar14);
    }
    bVar6 = local_90;
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
      bVar6 = local_90;
    }
  }
  *(undefined4 *)(param_1 + 0x398) = uVar21;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar16 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar16);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar18 = DAT_14c9a3da0;
  if ((longlong)(int)local_e0 != 0) {
    lVar17 = (longlong)(int)local_e0 + -1;
    lVar19 = lVar17 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar19),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar19));
    if (*(longlong *)(lVar18 + lVar19) != 0) {
      FUN_1400020a8();
    }
    lVar18 = DAT_14c9a3da0;
    iVar8 = (int)lVar17;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar18 + lVar19) = 0xffffffff;
    iVar12 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar12 = DAT_14c9a3dd0;
    }
    *(int *)(lVar18 + 4 + lVar19) = iVar12;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar11 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar11 = DAT_14c9a3dc0;
    }
    iVar12 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar12 = iVar8;
    }
    bVar6 = (byte)lVar17 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
         *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
         (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
    local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
  }
  if (((char)local_108 == '\x03') && (local_f8 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_f8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_f8 + 0x10))();
    }
  }
  lVar18 = *(longlong *)(param_1 + 0x40);
  if (lVar18 == 0) {
    lVar17 = 0;
    uVar13 = 0;
LAB_144158dae:
    local_f8 = (longlong *)0x0;
    bVar4 = true;
    local_100 = uVar13;
  }
  else {
    if (*(int *)(lVar18 + 0x4c) == 0) {
LAB_1441589de:
      lVar17 = 0;
    }
    else {
      uVar9 = *(uint *)(lVar18 + 0x48);
      lVar17 = 0;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
        plVar15 = (longlong *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
        if ((plVar15 == (longlong *)0x0) ||
           (((int)plVar15[2] != *(int *)(lVar18 + 0x4c) ||
            ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_1441589de;
        lVar17 = *plVar15;
      }
    }
    plVar15 = *(longlong **)(lVar18 + 0x118);
    uVar13 = param_1;
    if (plVar15 == (longlong *)0x0) goto LAB_144158dae;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar15 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    LOCK();
    *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
    UNLOCK();
    bVar4 = false;
    local_100 = param_1;
    local_f8 = plVar15;
  }
  plVar15 = local_f8;
  local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
  local_108 = CONCAT71(local_108._1_7_,3);
  uStack_f0._0_4_ = 0;
  if (lVar17 == 0) {
    iVar8 = 0;
    uVar9 = (uint)uStack_f0;
  }
  else {
    uVar9 = *(uint *)(lVar17 + 0xc);
    uStack_f0 = (ulonglong)uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    iVar8 = *(int *)(lVar18 + 0x10);
    if (*(int *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar8 = *(int *)(lVar18 + 0x10);
      bVar20 = iVar8 == 0;
      if (bVar20) {
        *(int *)(lVar18 + 0x10) = iVar12;
        iVar8 = 0;
      }
      UNLOCK();
      uVar9 = (uint)uStack_f0;
      if (bVar20) {
        iVar8 = iVar12;
      }
    }
  }
  uStack_f0._0_4_ = uVar9;
  uStack_f0 = CONCAT44(iVar8,(uint)uStack_f0);
  local_e8 = CONCAT71(local_e8._1_7_,2);
  if ((int)local_e0 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,(int)local_e0 + -1,1);
    local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
  }
  if (!bVar4) {
    LOCK();
    piVar2 = (int *)((longlong)plVar15 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  puVar16 = &local_b0;
  FUN_1447c3578(lVar10 + 0x268,puVar16,&local_108);
  if (local_90 == 3) {
    uVar21 = local_b0;
    bVar6 = 3;
  }
  else {
    puVar14 = &local_88;
    FUN_1400b56fe(puVar14,&local_b0,3);
    uVar21 = 0;
    if (local_68 != 0) {
      uVar21 = local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar14 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar14);
    }
    bVar6 = local_90;
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
      bVar6 = local_90;
    }
  }
  *(undefined4 *)(param_1 + 0x39c) = uVar21;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar16 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar16);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar18 = DAT_14c9a3da0;
  if ((longlong)(int)local_e0 != 0) {
    lVar17 = (longlong)(int)local_e0 + -1;
    lVar19 = lVar17 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar19),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar19));
    if (*(longlong *)(lVar18 + lVar19) != 0) {
      FUN_1400020a8();
    }
    lVar18 = DAT_14c9a3da0;
    iVar8 = (int)lVar17;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar18 + lVar19) = 0xffffffff;
    iVar12 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar12 = DAT_14c9a3dd0;
    }
    *(int *)(lVar18 + 4 + lVar19) = iVar12;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar11 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar11 = DAT_14c9a3dc0;
    }
    iVar12 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar12 = iVar8;
    }
    bVar6 = (byte)lVar17 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
         *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
         (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
    local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
  }
  if (((char)local_108 == '\x03') && (local_f8 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_f8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_f8 + 0x10))();
    }
  }
  lVar18 = *(longlong *)(param_1 + 0x40);
  if (lVar18 == 0) {
    lVar17 = 0;
    uVar13 = 0;
LAB_144158dd7:
    local_f8 = (longlong *)0x0;
    bVar4 = true;
    local_100 = uVar13;
  }
  else {
    if (*(int *)(lVar18 + 0x4c) == 0) {
LAB_1441589e6:
      lVar17 = 0;
    }
    else {
      uVar9 = *(uint *)(lVar18 + 0x48);
      lVar17 = 0;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
        plVar15 = (longlong *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
        if ((plVar15 == (longlong *)0x0) ||
           (((int)plVar15[2] != *(int *)(lVar18 + 0x4c) ||
            ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_1441589e6;
        lVar17 = *plVar15;
      }
    }
    plVar15 = *(longlong **)(lVar18 + 0x118);
    uVar13 = param_1;
    if (plVar15 == (longlong *)0x0) goto LAB_144158dd7;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar15 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    LOCK();
    *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
    UNLOCK();
    bVar4 = false;
    local_100 = param_1;
    local_f8 = plVar15;
  }
  plVar15 = local_f8;
  local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
  local_108 = CONCAT71(local_108._1_7_,3);
  uStack_f0._0_4_ = 0;
  if (lVar17 == 0) {
    iVar8 = 0;
    uVar9 = (uint)uStack_f0;
  }
  else {
    uVar9 = *(uint *)(lVar17 + 0xc);
    uStack_f0 = (ulonglong)uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    iVar8 = *(int *)(lVar18 + 0x10);
    if (*(int *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar8 = *(int *)(lVar18 + 0x10);
      bVar20 = iVar8 == 0;
      if (bVar20) {
        *(int *)(lVar18 + 0x10) = iVar12;
        iVar8 = 0;
      }
      UNLOCK();
      uVar9 = (uint)uStack_f0;
      if (bVar20) {
        iVar8 = iVar12;
      }
    }
  }
  uStack_f0._0_4_ = uVar9;
  uStack_f0 = CONCAT44(iVar8,(uint)uStack_f0);
  local_e8 = CONCAT71(local_e8._1_7_,2);
  if ((int)local_e0 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,(int)local_e0 + -1,1);
    local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
  }
  if (!bVar4) {
    LOCK();
    piVar2 = (int *)((longlong)plVar15 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  puVar16 = &local_b0;
  FUN_1447c3578(lVar10 + 0x2a0,puVar16,&local_108);
  if (local_90 == 3) {
    uVar21 = local_b0;
    bVar6 = 3;
  }
  else {
    puVar14 = &local_88;
    FUN_1400b56fe(puVar14,&local_b0,3);
    uVar21 = 0;
    if (local_68 != 0) {
      uVar21 = local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar14 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar14);
    }
    bVar6 = local_90;
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
      bVar6 = local_90;
    }
  }
  *(undefined4 *)(param_1 + 0x3a0) = uVar21;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar16 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar16);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar18 = DAT_14c9a3da0;
  if ((longlong)(int)local_e0 != 0) {
    lVar17 = (longlong)(int)local_e0 + -1;
    lVar19 = lVar17 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar19),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar19));
    if (*(longlong *)(lVar18 + lVar19) != 0) {
      FUN_1400020a8();
    }
    lVar18 = DAT_14c9a3da0;
    iVar8 = (int)lVar17;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar18 + lVar19) = 0xffffffff;
    iVar12 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar12 = DAT_14c9a3dd0;
    }
    *(int *)(lVar18 + 4 + lVar19) = iVar12;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar11 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar11 = DAT_14c9a3dc0;
    }
    iVar12 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar12 = iVar8;
    }
    bVar6 = (byte)lVar17 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
         *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
         (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
    local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
  }
  if (((char)local_108 == '\x03') && (local_f8 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_f8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_f8 + 0x10))();
    }
  }
  lVar18 = *(longlong *)(param_1 + 0x40);
  if (lVar18 == 0) {
    lVar17 = 0;
    uVar13 = 0;
  }
  else {
    if (*(int *)(lVar18 + 0x4c) == 0) {
LAB_1441589ee:
      lVar17 = 0;
    }
    else {
      uVar9 = *(uint *)(lVar18 + 0x48);
      lVar17 = 0;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
        plVar15 = (longlong *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
        if ((plVar15 == (longlong *)0x0) ||
           (((int)plVar15[2] != *(int *)(lVar18 + 0x4c) ||
            ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_1441589ee;
        lVar17 = *plVar15;
      }
    }
    plVar15 = *(longlong **)(lVar18 + 0x118);
    uVar13 = param_1;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar15 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
      bVar4 = false;
      local_100 = param_1;
      local_f8 = plVar15;
      goto LAB_144158554;
    }
  }
  local_f8 = (longlong *)0x0;
  bVar4 = true;
  local_100 = uVar13;
LAB_144158554:
  plVar15 = local_f8;
  local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
  local_108 = CONCAT71(local_108._1_7_,3);
  uStack_f0._0_4_ = 0;
  if (lVar17 == 0) {
    iVar8 = 0;
    uVar9 = (uint)uStack_f0;
  }
  else {
    uVar9 = *(uint *)(lVar17 + 0xc);
    uStack_f0 = (ulonglong)uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    iVar8 = *(int *)(lVar18 + 0x10);
    if (*(int *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar8 = *(int *)(lVar18 + 0x10);
      bVar20 = iVar8 == 0;
      if (bVar20) {
        *(int *)(lVar18 + 0x10) = iVar12;
        iVar8 = 0;
      }
      UNLOCK();
      uVar9 = (uint)uStack_f0;
      if (bVar20) {
        iVar8 = iVar12;
      }
    }
  }
  uStack_f0._0_4_ = uVar9;
  uStack_f0 = CONCAT44(iVar8,(uint)uStack_f0);
  local_e8 = CONCAT71(local_e8._1_7_,2);
  if ((int)local_e0 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,(int)local_e0 + -1,1);
    local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
  }
  if (!bVar4) {
    LOCK();
    piVar2 = (int *)((longlong)plVar15 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  puVar16 = &local_b0;
  FUN_1447c3578(lVar10 + 0x2d8,puVar16,&local_108);
  if (local_90 == 3) {
    uVar9 = 3;
    uVar21 = local_b0;
  }
  else {
    puVar14 = &local_88;
    FUN_1400b56fe(puVar14,&local_b0,3);
    uVar21 = 0;
    if (local_68 != 0) {
      uVar21 = local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar14 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar14);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
    uVar9 = (uint)local_90;
  }
  *(undefined4 *)(param_1 + 0x3a4) = uVar21;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar9 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar16 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar16);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar10 = DAT_14c9a3da0;
  lVar18 = (longlong)(int)local_e0;
  if (lVar18 != 0) {
    lVar18 = lVar18 + -1;
    lVar17 = lVar18 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar17),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar17));
    if (*(longlong *)(lVar10 + lVar17) != 0) {
      FUN_1400020a8();
    }
    lVar10 = DAT_14c9a3da0;
    iVar8 = (int)lVar18;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar10 + lVar17) = 0xffffffff;
    iVar12 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar12 = DAT_14c9a3dd0;
    }
    *(int *)(lVar10 + 4 + lVar17) = iVar12;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar11 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar11 = DAT_14c9a3dc0;
    }
    iVar12 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar12 = iVar8;
    }
    bVar6 = (byte)lVar18 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
         *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
         (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
    local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
  }
  if (((char)local_108 == '\x03') && (local_f8 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_f8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_f8 + 0x10))();
    }
  }
  *(undefined1 *)(param_1 + 0x418) = 0;
  if (*(char *)(param_1 + 0x410) == '\x01') {
    *(undefined1 *)(param_1 + 0x410) = 0;
  }
  lVar10 = FUN_140343d7a(param_1);
  if ((lVar10 == 0) || (*(longlong *)(param_1 + 0xd8) == 0)) {
    uVar13 = 0;
  }
  else if ((bVar5 != 1) ||
          (uVar13 = CONCAT71((int7)((ulonglong)lVar18 >> 8),1),
          1 < *(byte *)(*(longlong *)(param_1 + 0xd8) + 0x150))) {
    local_108 = 0xffffffffffffffff;
    local_100 = local_100 & 0xffffffff00000000;
    local_f8 = DAT_14cbca8c8;
    uStack_f0 = DAT_14cbca8d0;
    local_e8 = DAT_14cbca8d8;
    local_e0 = DAT_14cbca8c8;
    uStack_d8 = DAT_14cbca8d0;
    local_d0 = DAT_14cbca8d8;
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    local_b8 = 0xffffffff;
    local_118 = &local_88;
    FUN_1441590b2(param_1,&local_b0,lVar10,param_1 + 0xd8);
    cVar7 = FUN_1466282e8(param_1,&local_b0,&local_108);
    plVar15 = plStack_c0;
    uVar13 = (ulonglong)bVar5;
    if (cVar7 == '\0') {
      uVar13 = 0;
    }
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 1441590b2 FUN_1441590b2 body=711 status=ok
// SIG undefined FUN_1441590b2(void)

double * FUN_1441590b2(longlong *param_1,double *param_2,longlong param_3,longlong *param_4,
                      double *param_5)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  double dVar8;
  ulonglong uVar9;
  bool bVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  double *pdVar14;
  longlong *plVar15;
  longlong lVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  if (*param_4 == 0) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
  }
  else {
    lVar16 = *(longlong *)(param_3 + 0x1c8);
    if (lVar16 == 0) {
      pdVar14 = &DAT_14c8464e0;
      uVar21 = (undefined4)DAT_14c8464f0;
      uVar22 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar21 = (undefined4)*(undefined8 *)(lVar16 + 0x270);
      uVar22 = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x270) >> 0x20);
      pdVar14 = (double *)(lVar16 + 0x260);
    }
    dVar18 = *pdVar14;
    dVar20 = pdVar14[1];
    cVar12 = FUN_1402f52f6(param_1 + 0x31);
    plVar15 = (longlong *)(*param_4 + 0x290);
    if (cVar12 != '\0') {
      plVar15 = param_1 + 0x3c;
    }
    plVar7 = (longlong *)plVar15[7];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    fVar3 = *(float *)((longlong)plVar15 + 0x4c);
    (**(code **)(*param_1 + 0x150))(param_1);
    dVar4 = *param_2;
    dVar5 = param_2[1];
    dVar6 = param_2[2];
    dVar8 = dVar6;
    if (1e-08 < ABS(*(float *)(param_1 + 0x73))) {
      dVar18 = dVar4 - dVar18;
      dVar20 = dVar5 - dVar20;
      dVar8 = dVar18 * dVar18 + dVar20 * dVar20;
      if ((dVar8 != 1.0) || (NAN(dVar8))) {
        if (9.99999993922529e-09 <= dVar8) {
          dVar20 = dVar20 * (1.0 / SQRT(dVar8));
          dVar18 = dVar18 * (1.0 / SQRT(dVar8));
          uVar21 = 0;
          uVar22 = 0;
        }
        else {
          uVar21 = (undefined4)DAT_14c8464f0;
          uVar22 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          dVar18 = DAT_14c8464e0;
          dVar20 = DAT_14c8464e8;
        }
      }
      else {
        dVar8 = dVar6 - (double)CONCAT44(uVar22,uVar21);
        uVar9 = -(ulonglong)(dVar8 == 0.0) & (ulonglong)dVar8;
        uVar21 = (undefined4)uVar9;
        uVar22 = (undefined4)(uVar9 >> 0x20);
      }
      dVar19 = (double)*(float *)(param_1 + 0x73);
      dVar8 = (double)CONCAT44(uVar22,uVar21) * dVar19 + dVar6;
      *param_2 = dVar18 * dVar19 + dVar4;
      param_2[1] = dVar20 * dVar19 + dVar5;
    }
    param_2[2] = (double)*(float *)((longlong)param_1 + 0x39c) + (double)fVar3 + dVar8;
    plVar15 = (longlong *)param_1[0x1e];
    bVar10 = true;
    if (plVar15 == (longlong *)0x0) {
      plVar15 = (longlong *)0x0;
      lVar16 = 0;
    }
    else {
      iVar13 = (int)plVar15[1];
      lVar16 = 0;
      do {
        if (iVar13 == 0) {
          plVar15 = (longlong *)0x0;
          goto LAB_1441592c8;
        }
        LOCK();
        iVar11 = (int)plVar15[1];
        bVar17 = iVar13 == iVar11;
        if (bVar17) {
          *(int *)(plVar15 + 1) = iVar13 + 1;
          iVar11 = iVar13;
        }
        iVar13 = iVar11;
        UNLOCK();
      } while (!bVar17);
      lVar16 = param_1[0x1d];
      bVar10 = false;
    }
LAB_1441592c8:
    dVar18 = (double)*(float *)(lVar16 + 0x5d4) + param_2[2];
    param_2[2] = dVar18;
    if (*(char *)((longlong)param_1 + 0x36d) == '\0') {
      dVar20 = param_2[1];
      *param_5 = *param_2 - dVar4;
      param_5[1] = dVar20 - dVar5;
      param_5[2] = dVar18 - dVar6;
    }
    if (!bVar10) {
      LOCK();
      plVar1 = plVar15 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar7 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
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
  }
  return param_2;
}



// FUNCTION 14415937a FUN_14415937a body=471 status=ok
// SIG undefined FUN_14415937a(void)

void FUN_14415937a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  FUN_14414d664();
  lVar4 = *(longlong *)(param_1 + 0x48);
  *(undefined2 *)(param_1 + 0x41d) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  *(undefined4 *)(param_1 + 0x368) = 0x3f333333;
  *(undefined1 *)(param_1 + 0x3aa) = 0;
  *(undefined1 *)(param_1 + 0x36d) = *(undefined1 *)(lVar4 + 0x229);
  if (*(char *)(param_1 + 0x410) == '\x01') {
    *(undefined1 *)(param_1 + 0x410) = 0;
  }
  uVar5 = *(undefined8 *)(param_1 + 800);
  plVar9 = *(longlong **)(param_1 + 0x328);
  if (plVar9 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x420) = uVar5;
    plVar10 = *(longlong **)(param_1 + 0x428);
    if (plVar10 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x428) = 0;
LAB_144159426:
      LOCK();
      plVar9 = plVar10 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000144159451:
        if (iVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x420) = uVar5;
    plVar10 = *(longlong **)(param_1 + 0x428);
    if (plVar9 == plVar10) {
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar10 = plVar9;
        goto joined_r0x000144159451;
      }
    }
    else {
      *(longlong **)(param_1 + 0x428) = plVar9;
      if (plVar10 != (longlong *)0x0) goto LAB_144159426;
    }
  }
  if (*(longlong *)(lVar4 + 0x220) != 0) {
    lVar8 = FUN_140f7064a();
    lVar6 = *(longlong *)(lVar4 + 0x220);
    if ((((lVar6 != 0) && (lVar8 != 0)) && (lVar7 = *(longlong *)(lVar6 + 0x10), lVar7 != 0)) &&
       ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
         lVar8 + 0x30)))) {
      *(undefined1 *)(param_1 + 0x3a8) = *(undefined1 *)(lVar6 + 0x1b1);
      *(undefined1 *)(param_1 + 0x3a9) = *(undefined1 *)(lVar6 + 0x1b2);
      *(float *)(param_1 + 0x368) = (float)(int)*(char *)(lVar6 + 0x1b0);
      goto LAB_1441594d3;
    }
  }
  *(undefined2 *)(param_1 + 0x3a8) = 0;
LAB_1441594d3:
  if (((*(char *)(lVar4 + 0x229) == '\0') && (*(int *)(param_1 + 0x364) != 0)) &&
     ((uVar3 = *(uint *)(param_1 + 0x360), -1 < (int)uVar3 &&
      (((((int)uVar3 < DAT_14c9647dc &&
         (plVar9 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar9 != (longlong *)0x0)) && ((int)plVar9[2] == *(int *)(param_1 + 0x364))) &&
       (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0)))))))) {
    FUN_1400bc96c(*plVar9 + 0x1218,&DAT_14cbcaa88);
    return;
  }
  return;
}



// FUNCTION 144159552 FUN_144159552 body=1197 status=ok
// SIG undefined FUN_144159552(void)

void FUN_144159552(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  longlong lVar6;
  byte bVar7;
  double *pdVar8;
  longlong lVar9;
  longlong *plVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = FUN_140343d7a();
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x220);
  if (*(int *)(param_1 + 0x364) == 0) {
LAB_144159892:
    lVar9 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x360);
    lVar9 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar10 == (longlong *)0x0) ||
         (((int)plVar10[2] != *(int *)(param_1 + 0x364) ||
          ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_144159892;
      lVar9 = *plVar10;
    }
  }
  if ((((lVar6 == 0) || (lVar9 == 0)) || (lVar3 == 0)) || (*(longlong *)(param_1 + 0xd8) == 0))
  goto LAB_1441599d2;
  lVar4 = *(longlong *)(lVar6 + 0x1c8);
  if (lVar4 == 0) {
    pdVar8 = &DAT_14c8464e0;
    uVar18 = SUB84(DAT_14c8464f0,0);
    uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar18 = (undefined4)*(undefined8 *)(lVar4 + 0x270);
    uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x270) >> 0x20);
    pdVar8 = (double *)(lVar4 + 0x260);
  }
  dVar11 = *pdVar8;
  dVar13 = pdVar8[1];
  if (*(char *)(param_1 + 0x418) == '\x01') {
    dVar5 = *(double *)(param_1 + 0x3d8) - (double)CONCAT44(uVar19,uVar18);
    dVar11 = *(double *)(param_1 + 0x3c8) - dVar11;
    dVar13 = *(double *)(param_1 + 0x3d0) - dVar13;
    dVar15 = dVar5 * dVar5 + dVar11 * dVar11 + dVar13 * dVar13;
    if (((dVar15 != 1.0) || (dVar12 = dVar11, dVar14 = dVar13, dVar17 = dVar5, NAN(dVar15))) &&
       (dVar12 = DAT_14c8464e0, dVar14 = DAT_14c8464e8, dVar17 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar15)) {
      dVar15 = 1.0 / SQRT(dVar15);
      dVar12 = dVar11 * dVar15;
      dVar14 = dVar13 * dVar15;
      dVar17 = dVar5 * dVar15;
    }
    *(double *)(param_1 + 0x3b0) = dVar12;
    *(double *)(param_1 + 0x3b8) = dVar14;
    *(double *)(param_1 + 0x3c0) = dVar17;
    bVar7 = 0;
    if (*(char *)(param_1 + 0x41b) == '\0') {
LAB_144159996:
      if ((bVar7 & 1) != 0) {
        FUN_140f70730(param_1);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x41b) == '\0') {
      local_88 = &local_68;
      FUN_1441590b2(param_1,&local_80,lVar6);
      *(undefined8 *)(param_1 + 0x3f0) = local_70;
      *(undefined8 *)(param_1 + 0x3e0) = local_80;
      *(undefined8 *)(param_1 + 1000) = uStack_78;
      if (*(char *)(param_1 + 0x36d) == '\0') {
        *(undefined8 *)(param_1 + 0x408) = local_58;
        *(undefined8 *)(param_1 + 0x3f8) = local_68;
        *(undefined8 *)(param_1 + 0x400) = uStack_60;
        *(undefined1 *)(param_1 + 0x410) = 1;
      }
      dVar15 = *(double *)(param_1 + 0x3f0) - (double)CONCAT44(uVar19,uVar18);
      dVar11 = *(double *)(param_1 + 0x3e0) - dVar11;
      dVar13 = *(double *)(param_1 + 1000) - dVar13;
      dVar5 = dVar11 * dVar11 + dVar13 * dVar13;
      dVar17 = dVar15 * dVar15 + dVar5;
      if (((dVar17 != 1.0) || (dVar12 = dVar15, dVar14 = dVar11, dVar16 = dVar13, NAN(dVar17))) &&
         (dVar12 = DAT_14c8464f0, dVar14 = DAT_14c8464e0, dVar16 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar17)) {
        dVar17 = 1.0 / SQRT(dVar17);
        dVar12 = dVar15 * dVar17;
        dVar14 = dVar11 * dVar17;
        dVar16 = dVar13 * dVar17;
      }
      *(double *)(param_1 + 0x3b0) = dVar14;
      *(double *)(param_1 + 0x3b8) = dVar16;
      *(double *)(param_1 + 0x3c0) = dVar12;
      cVar1 = *(char *)(lVar3 + 0xf8);
      if (cVar1 == '\x01') {
LAB_144159989:
        *(undefined1 *)(param_1 + 0x41b) = 1;
      }
      else if (cVar1 == '\x03') {
        dVar11 = *(double *)(lVar9 + 0x128) * *(double *)(lVar9 + 0x128) +
                 *(double *)(lVar9 + 0x130) * *(double *)(lVar9 + 0x130);
        dVar13 = 0.0;
        if (0.0 < dVar11) {
          if (0.0 < (float)SQRT(dVar5)) {
            dVar13 = (double)(float)SQRT(dVar5) / dVar11;
          }
          if (dVar13 <= (double)*(float *)(lVar3 + 0x100)) goto LAB_144159989;
        }
      }
      else if ((cVar1 == '\x02') &&
              ((float)dVar5 <= *(float *)(lVar3 + 0xfc) * *(float *)(lVar3 + 0xfc)))
      goto LAB_144159989;
      bVar7 = *(byte *)(param_1 + 0x41b);
      goto LAB_144159996;
    }
    dVar5 = *(double *)(param_1 + 0x3f0) - (double)CONCAT44(uVar19,uVar18);
    dVar11 = *(double *)(param_1 + 0x3e0) - dVar11;
    dVar13 = *(double *)(param_1 + 1000) - dVar13;
    dVar15 = dVar5 * dVar5 + dVar11 * dVar11 + dVar13 * dVar13;
    if (((dVar15 != 1.0) || (dVar12 = dVar11, dVar14 = dVar13, dVar17 = dVar5, NAN(dVar15))) &&
       (dVar12 = DAT_14c8464e0, dVar14 = DAT_14c8464e8, dVar17 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar15)) {
      dVar15 = 1.0 / SQRT(dVar15);
      dVar12 = dVar11 * dVar15;
      dVar14 = dVar13 * dVar15;
      dVar17 = dVar5 * dVar15;
    }
    *(double *)(param_1 + 0x3b0) = dVar12;
    *(double *)(param_1 + 0x3b8) = dVar14;
    *(double *)(param_1 + 0x3c0) = dVar17;
  }
  if ((*(char *)(param_1 + 0x36d) != '\0') ||
     ((*(char *)(param_1 + 0x41b) == '\x01' && (*(char *)(param_1 + 0x418) == '\0')))) {
    FUN_1437fd114(lVar9,param_1 + 0x3b0);
  }
LAB_1441599d2:
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144159a00 FUN_144159a00 body=1761 status=ok
// SIG undefined FUN_144159a00(void)

ulonglong FUN_144159a00(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  byte bVar6;
  longlong lVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  undefined *puVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined8 ****ppppuVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined1 auStack_308 [32];
  undefined8 *local_2e8;
  undefined4 local_2e0;
  undefined4 *local_2d8;
  undefined8 ***local_2d0;
  undefined1 *local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_288;
  undefined4 local_284;
  undefined8 local_280;
  int local_278;
  double local_270;
  double dStack_268;
  double local_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 local_240;
  longlong *plStack_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  double local_218;
  undefined4 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined4 local_1d4;
  char local_1c9;
  char local_1c8 [4];
  undefined4 local_1c4;
  longlong *local_1b8;
  int local_1a0;
  undefined4 local_124;
  undefined4 local_f8;
  undefined8 ***local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined4 local_b4;
  ushort local_b0;
  undefined4 local_ac;
  byte local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  lVar14 = *(longlong *)(param_1 + 0x48);
  plVar11 = (longlong *)FUN_140343d7a();
  if (((plVar11 == (longlong *)0x0) || (lVar12 = FUN_140a40fb0(plVar11), lVar12 == 0)) ||
     (cVar8 = FUN_140532d9e(lVar12), cVar8 == '\0')) {
    uVar18 = 0;
    goto LAB_144159a99;
  }
  lVar3 = *(longlong *)(lVar12 + 0x1518);
  plVar4 = *(longlong **)(lVar12 + 0x1520);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == 0) {
LAB_144159a71:
    uVar18 = 0;
  }
  else {
    local_1c9 = '\0';
    local_1c8[0] = '\0';
    local_1a0 = 0;
    FUN_1456bb102(local_1c8,plVar11);
    FUN_1447c3578(param_1 + 0xe0,&local_c8,local_1c8);
    uVar9 = FUN_140613580(&local_c8,&local_1c9);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar5 != (code *)0x0) {
      ppppuVar19 = &local_c8;
      if (0x18 < local_b0) {
        ppppuVar19 = (undefined8 ****)local_c8;
      }
      (*pcVar5)(ppppuVar19);
    }
    if (0x18 < local_b0) {
      FUN_1400020a8(local_c8);
    }
    if ((longlong)local_1a0 != 0) {
      lVar20 = (longlong)local_1a0 + -1;
      local_2c0 = DAT_14c9a3da0;
      lVar12 = lVar20 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
      if (*(longlong *)(local_2c0 + lVar12) != 0) {
        FUN_1400020a8();
      }
      lVar7 = DAT_14c9a3da0;
      iVar10 = (int)lVar20;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
      }
      *(undefined4 *)(lVar7 + lVar12) = 0xffffffff;
      iVar15 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar15 = DAT_14c9a3dd0;
      }
      *(int *)(lVar7 + 4 + lVar12) = iVar15;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar16 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar16 = DAT_14c9a3dc0;
      }
      iVar15 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar15 = iVar10;
      }
      bVar6 = (byte)lVar20 & 0x1f;
      DAT_14c9a3dd0 = iVar10;
      *(uint *)(puVar16 + (longlong)(iVar15 >> 5) * 4) =
           *(uint *)(puVar16 + (longlong)(iVar15 >> 5) * 4) &
           (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
      local_1a0 = 0;
    }
    if ((local_1c8[0] == '\x03') && (local_1b8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_1b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1b8 + 0x10))();
      }
    }
    if (((char)uVar9 != '\0') && (local_1c9 != '\0')) goto LAB_144159a71;
    uVar18 = CONCAT71((uint7)(uint3)((uint)uVar9 >> 8),2);
    if (*(char *)(lVar14 + 0x8e) == '\x01') {
      lVar14 = plVar11[0x39];
      if (lVar14 == 0) {
        puVar13 = &DAT_14c8464e0;
        uVar9 = (undefined4)DAT_14c8464f0;
        uVar21 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar9 = (undefined4)*(undefined8 *)(lVar14 + 0x270);
        uVar21 = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x270) >> 0x20);
        puVar13 = (undefined8 *)(lVar14 + 0x260);
      }
      local_228 = *puVar13;
      uStack_220 = puVar13[1];
      local_218 = (double)*(float *)(param_1 + 0xd8) + (double)CONCAT44(uVar21,uVar9);
      local_1e0 = 0xffffffffffffffff;
      local_1d8 = 0;
      local_1d4 = 0xffffffff;
      local_200 = *(undefined4 *)(lVar3 + 0x250);
      local_210 = *(undefined4 *)(lVar3 + 0x5d4);
      local_208 = *(undefined4 *)(lVar3 + 0x5d0);
      local_1f8 = *(undefined8 *)(lVar3 + 0x480);
      plVar17 = *(longlong **)(lVar3 + 0x488);
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
        UNLOCK();
      }
      local_1e8 = *(undefined8 *)(lVar3 + 0x440);
      local_204 = local_210;
      local_1f0 = plVar17;
      lVar14 = FUN_146421a8f(local_1f8,local_210,local_208);
      if (lVar14 == 0) {
        uVar18 = 0;
      }
      else {
        local_200 = FUN_140e14fac(lVar14);
        local_280 = 0xffffffffffffffff;
        local_278 = 0;
        local_270 = DAT_14cbca8c8;
        dStack_268 = DAT_14cbca8d0;
        local_260 = DAT_14cbca8d8;
        local_258 = DAT_14cbca8c8;
        dStack_250 = DAT_14cbca8d0;
        local_248 = DAT_14cbca8d8;
        local_240 = 0;
        plStack_238 = (longlong *)0x0;
        local_230 = 0xffffffff;
        FUN_14022b7ff(&local_228,&local_280);
        if (1 < local_278 - 1U) {
          if (local_278 == 3) goto LAB_144159e24;
          goto LAB_14415a08d;
        }
        uVar18 = 0;
        if (((int)local_280 != -1) && (local_280._4_4_ != -1)) {
LAB_144159e24:
          uVar18 = 0;
          if ((-DAT_14cbca8c8 < local_270) &&
             ((((uVar18 = 0, local_270 < DAT_14cbca8c8 && (uVar18 = 0, -DAT_14cbca8d0 < dStack_268))
               && (dStack_268 < DAT_14cbca8d0)) &&
              ((uVar18 = 0, -DAT_14cbca8d8 < local_260 && (local_260 < DAT_14cbca8d8)))))) {
            iVar10 = _finite(local_270);
            if ((iVar10 != 0) &&
               (((iVar10 = _finite(dStack_268), iVar10 != 0 &&
                 (iVar10 = _finite(local_260), iVar10 != 0)) &&
                (lVar14 = FUN_1447210f0(plVar11), lVar14 != 0)))) {
              local_a4 = 0;
              local_a0 = 0x101;
              local_78 = 0;
              local_70 = 0x800000000;
              local_58 = 0;
              local_4c = 4;
              local_b8 = 0;
              local_c8 = (undefined8 ****)0x0;
              uStack_c0 = 0;
              local_b7 = 1;
              local_b5 = 0;
              local_a8 = 0;
              local_b4 = 0x1000000;
              local_b0 = CONCAT11(local_b0._1_1_,1);
              local_68 = *(undefined4 *)((longlong)plVar11 + 0xc);
              local_50 = 1;
              local_ac = 1;
              local_284 = 0;
              local_288 = 0;
              (**(code **)(*plVar11 + 0x528))(plVar11,&local_284,&local_288);
              local_298 = 3;
              local_294 = local_284;
              local_290 = local_288;
              local_2b8 = *(undefined8 *)(lVar3 + 0x588);
              uStack_2b0 = *(undefined8 *)(lVar3 + 0x590);
              local_2a8 = *(double *)(lVar3 + 0x598) + 10.0;
              memset(local_1c8,0,0x100);
              local_f8 = 0xffffffff;
              local_1c4 = 0x3f800000;
              local_124 = 0xffffffff;
              local_2c8 = &DAT_14cad0f10;
              local_2e0 = 0;
              local_2e8 = &DAT_14c8463d0;
              local_2d8 = &local_298;
              local_2d0 = &local_c8;
              cVar8 = FUN_14021655c(lVar14,local_1c8,&local_2b8,&local_270);
              if (local_58 != 0) {
                FUN_1400020a8();
              }
              if (local_78 != 0) {
                FUN_1400020a8();
              }
              uVar18 = CONCAT71((int7)((ulonglong)&local_c8 >> 8),2);
              if (cVar8 == '\0') goto LAB_14415a08f;
            }
LAB_14415a08d:
            uVar18 = 0;
          }
        }
LAB_14415a08f:
        plVar11 = plStack_238;
        plVar17 = local_1f0;
        if (plStack_238 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_238 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_238)(plStack_238);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar17 = local_1f0;
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
              plVar17 = local_1f0;
            }
          }
        }
      }
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar4 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
LAB_144159a99:
  if ((local_48 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffffff;
}



// FUNCTION 14415a0e2 FUN_14415a0e2 body=179 status=ok
// SIG undefined FUN_14415a0e2(void)

ulonglong FUN_14415a0e2(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (((((*(longlong **)(param_1 + 0x128) != (longlong *)0x0) && (*(int *)(param_1 + 0x124) != 0))
       && (uVar1 = *(uint *)(param_1 + 0x120), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)))) &&
     ((*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x124) &&
      (((*(uint *)(lVar4 + 8) & 0x10200000) == 0 && (*(char *)(param_1 + 0x118) != '\0')))))) {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x128) + 0x50))();
    if ((longlong)*(int *)(lVar4 + 0x48) != 0) {
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x40) + lVar5);
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x40) == *(char *)(param_1 + 0x118))) {
          uVar3 = 0;
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(lVar4 + 0x48) * 0x10 != lVar5);
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14415a1a2 FUN_14415a1a2 body=138 status=ok
// SIG undefined FUN_14415a1a2(void)

undefined8 FUN_14415a1a2(undefined8 param_1,longlong param_2)

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
  *(undefined1 *)(lVar2 + iVar1) = 0x11;
  iVar1 = *(int *)(param_2 + 0x30);
  *(uint *)(param_2 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x34) < iVar1 + 1U) {
    FUN_142b3d46e(param_2,iVar1);
  }
  lVar2 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(param_2 + 0x28) == 0) {
    lVar2 = param_2;
  }
  *(undefined1 *)(lVar2 + iVar1) = 0xd;
  return 1;
}



// FUNCTION 14415a22e FUN_14415a22e body=592 status=ok
// SIG undefined FUN_14415a22e(void)

undefined8 FUN_14415a22e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
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
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_1 + 0x130;
  lVar5 = FUN_1402b91c4(lVar1);
  lVar6 = FUN_140343d7a(param_1);
  if (lVar6 != 0) {
    if (DAT_14cba8288 == 0) {
      local_60 = &local_40;
      local_40 = FUN_141864c34;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1464cee30;
      local_68 = &LAB_148bfac22;
      local_70 = &LAB_140f21842;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      uVar4 = FUN_1403ae46b();
      if ((-1 < (int)uVar4) &&
         (((int)uVar4 < *(int *)(lVar6 + 0x78f0) &&
          (lVar7 = (ulonglong)uVar4 * 0x48 + *(longlong *)(lVar6 + 0x78e8), lVar7 != 0)))) {
        if (*(longlong **)(lVar7 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar7 + 0x20) != 0) {
          lVar7 = (**(code **)(**(longlong **)(lVar7 + 0x28) + 8))();
          if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x518), lVar7 != 0)) {
            if (lVar7 != lVar5) {
              if (lVar5 != 0) {
                *(undefined4 *)(param_1 + 0x260) = 0;
                *(undefined2 *)(param_1 + 0x265) = 0;
                *(undefined1 *)(param_1 + 0x267) = 0;
                FUN_140872c8a(lVar1);
              }
              lVar5 = FUN_140343d7a(param_1);
              if (lVar5 != 0) {
                FUN_140872e36(lVar1,param_1);
                uVar2 = *(undefined8 *)(lVar7 + 0x30);
                *(undefined1 *)(param_1 + 0x264) =
                     *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x134);
                FUN_1408f9d2c(lVar1,uVar2,lVar5);
              }
            }
            cVar3 = FUN_1403adf14(lVar6,0,0);
            if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
            }
            goto LAB_14415a2ca;
          }
        }
      }
    }
  }
  if (lVar5 != 0) {
    *(undefined4 *)(param_1 + 0x260) = 0;
    *(undefined2 *)(param_1 + 0x265) = 0;
    *(undefined1 *)(param_1 + 0x267) = 0;
    FUN_140872c8a(lVar1);
  }
LAB_14415a2ca:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14415a4c4 FUN_14415a4c4 body=1269 status=ok
// SIG undefined FUN_14415a4c4(void)

undefined8 FUN_14415a4c4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  void *_Dst;
  undefined *puVar10;
  undefined8 ****ppppuVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_b8 [40];
  char local_90;
  undefined7 uStack_8f;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined1 local_70;
  int local_68;
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  lVar15 = *(longlong *)(param_1 + 0x48) + 0xb8;
  cVar5 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar15);
  if (cVar5 == '\0') {
    *(undefined4 *)(param_1 + 0x9c) = 0;
    uVar8 = 0;
  }
  else {
    lVar18 = *(longlong *)(param_1 + 0x40);
    if (lVar18 == 0) {
      lVar12 = 0;
      local_88 = 0;
LAB_14415a8fe:
      local_80 = (longlong *)0x0;
      bVar19 = true;
    }
    else {
      if (*(int *)(lVar18 + 0x4c) == 0) {
LAB_14415a816:
        lVar12 = 0;
      }
      else {
        uVar14 = *(uint *)(lVar18 + 0x48);
        lVar12 = 0;
        if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
          plVar16 = (longlong *)
                    ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
          if ((plVar16 == (longlong *)0x0) ||
             (((int)plVar16[2] != *(int *)(lVar18 + 0x4c) ||
              ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)))) goto LAB_14415a816;
          lVar12 = *plVar16;
        }
      }
      plVar16 = *(longlong **)(lVar18 + 0x118);
      local_88 = param_1;
      if (plVar16 == (longlong *)0x0) goto LAB_14415a8fe;
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar16 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      LOCK();
      *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
      UNLOCK();
      bVar19 = false;
      local_80 = plVar16;
    }
    plVar16 = local_80;
    local_68 = 0;
    local_90 = '\x03';
    local_78._0_4_ = 0;
    if (lVar12 == 0) {
      iVar6 = 0;
      uVar14 = (uint)local_78;
    }
    else {
      uVar14 = *(uint *)(lVar12 + 0xc);
      local_78 = (ulonglong)uVar14;
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar18 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar18 = 0;
      }
      iVar6 = *(int *)(lVar18 + 0x10);
      if (*(int *)(lVar18 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar6 = *(int *)(lVar18 + 0x10);
        bVar20 = iVar6 == 0;
        if (bVar20) {
          *(int *)(lVar18 + 0x10) = iVar13;
          iVar6 = 0;
        }
        UNLOCK();
        uVar14 = (uint)local_78;
        if (bVar20) {
          iVar6 = iVar13;
        }
      }
    }
    local_78._0_4_ = uVar14;
    local_78 = CONCAT44(iVar6,(uint)local_78);
    local_70 = 2;
    if (local_68 != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_68 + -1,1);
      local_68 = 0;
    }
    if (!bVar19) {
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    FUN_1447c3578(lVar15,local_60,&local_90);
    lVar15 = FUN_14030a32e(local_60);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar11 = local_60;
      if (0x18 < local_48) {
        ppppuVar11 = (undefined8 ****)local_60[0];
      }
      (*pcVar3)(ppppuVar11);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60[0]);
    }
    lVar18 = DAT_14c9a3da0;
    if ((longlong)local_68 != 0) {
      lVar12 = (longlong)local_68 + -1;
      lVar17 = lVar12 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar17),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar17));
      if (*(longlong *)(lVar18 + lVar17) != 0) {
        FUN_1400020a8();
      }
      lVar18 = DAT_14c9a3da0;
      iVar6 = (int)lVar12;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
      }
      *(undefined4 *)(lVar18 + lVar17) = 0xffffffff;
      iVar13 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar13 = DAT_14c9a3dd0;
      }
      *(int *)(lVar18 + 4 + lVar17) = iVar13;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar10 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar10 = DAT_14c9a3dc0;
      }
      iVar13 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar13 = iVar6;
      }
      bVar4 = (byte)lVar12 & 0x1f;
      DAT_14c9a3dd0 = iVar6;
      *(uint *)(puVar10 + (longlong)(iVar13 >> 5) * 4) =
           *(uint *)(puVar10 + (longlong)(iVar13 >> 5) * 4) &
           (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      local_68 = 0;
    }
    if ((local_90 == '\x03') && (local_80 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
    if (lVar15 == 0) {
      FUN_1400b22c2(&local_90,"Settings.Actor");
      _Dst = (void *)CONCAT71(uStack_8f,local_90);
      if ((longlong)(int)local_88 != 0) {
        uVar14 = 1;
        lVar15 = 0;
        do {
          if (*(short *)((longlong)_Dst + lVar15) == 0x2e) {
            if (uVar14 != 0) {
              uVar7 = (int)local_88 - 1;
              if ((int)local_88 == 0) {
                uVar7 = 0;
              }
              if ((int)uVar14 < (int)uVar7) {
                uVar7 = uVar14;
              }
              if (0 < (int)uVar7) {
                if ((int)local_88 - uVar7 != 0) {
                  memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar7 * 2),
                          (longlong)(int)((int)local_88 - uVar7) * 2);
                }
                local_88 = CONCAT44(local_88._4_4_,(int)local_88 - uVar7);
                FUN_1449649ae(&local_90);
                _Dst = (void *)CONCAT71(uStack_8f,local_90);
              }
            }
            break;
          }
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 2;
        } while ((longlong)(int)local_88 * 2 != lVar15);
      }
      if (_Dst != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar9 = 0;
      goto LAB_14415a71f;
    }
    uVar14 = *(uint *)(lVar15 + 0xc);
    *(uint *)(param_1 + 0x9c) = uVar14;
    if ((int)uVar14 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    uVar8 = (ulonglong)*(uint *)(lVar15 + 0x10);
    if (*(uint *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      uVar14 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar14);
      }
      LOCK();
      uVar7 = *(uint *)(lVar15 + 0x10);
      bVar19 = uVar7 == 0;
      if (bVar19) {
        *(uint *)(lVar15 + 0x10) = uVar14;
        uVar7 = 0;
      }
      UNLOCK();
      if (bVar19) {
        uVar7 = uVar14;
      }
      uVar8 = (ulonglong)uVar7;
    }
  }
  *(int *)(param_1 + 0xa0) = (int)uVar8;
  uVar9 = CONCAT71((int7)(uVar8 >> 8),1);
LAB_14415a71f:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14415a9ba FUN_14415a9ba body=4841 status=ok
// SIG undefined FUN_14415a9ba(void)

void FUN_14415a9ba(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined *puVar12;
  float *pfVar13;
  int iVar14;
  longlong lVar15;
  undefined8 ****ppppuVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_148 [44];
  int local_11c;
  longlong local_118;
  char local_110;
  undefined7 uStack_10f;
  longlong *local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  int local_e8;
  float local_e0;
  undefined4 uStack_dc;
  ushort local_c8;
  byte local_c0;
  undefined8 ***local_b8 [3];
  ushort local_a0;
  byte local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar4 = param_1[9];
  if ((int)param_1[0x14] == 0) {
LAB_14415ab79:
    lVar15 = 0;
  }
  else {
    uVar8 = *(uint *)((longlong)param_1 + 0x9c);
    lVar15 = 0;
    if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
      plVar11 = (longlong *)
                ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
      if ((plVar11 == (longlong *)0x0) ||
         (((int)plVar11[2] != (int)param_1[0x14] || ((*(uint *)(plVar11 + 1) & 0x10200000) != 0))))
      goto LAB_14415ab79;
      lVar15 = *plVar11;
    }
  }
  local_b8[0] = *(undefined8 ****)(lVar4 + 0x88);
  FUN_1446dcdd4(&local_110);
  if (DAT_14cbc6508 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_144815d88(DAT_14cbc6508,&local_110);
  }
  param_1[0x15] = lVar9;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  local_b8[0] = *(undefined8 ****)(lVar4 + 0xa0);
  FUN_1446dcdd4(&local_110);
  if (DAT_14cbc6528 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_144815d88(DAT_14cbc6528,&local_110);
  }
  param_1[0x16] = lVar9;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (((lVar15 == 0) || (param_1[0x15] == 0)) || (param_1[0x16] == 0)) {
    FUN_14097c15a(param_1);
    goto LAB_14415ab15;
  }
  uVar10 = FUN_1447210f0(lVar15);
  FUN_148d3c30c(&local_110,uVar10);
  if (local_108 != (longlong *)0x0) {
    iVar7 = (int)local_108[1];
    do {
      if (iVar7 == 0) {
        plVar11 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar14 = (int)local_108[1];
      bVar20 = iVar7 == iVar14;
      if (bVar20) {
        *(int *)(local_108 + 1) = iVar7 + 1;
        iVar14 = iVar7;
      }
      iVar7 = iVar14;
      UNLOCK();
      plVar11 = local_108;
    } while (!bVar20);
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
    if (plVar11 != (longlong *)0x0) {
      local_118 = CONCAT71(uStack_10f,local_110);
      if (local_118 != 0) {
        lVar9 = param_1[0x15];
        lVar18 = param_1[8];
        if (lVar18 == 0) {
          lVar19 = 0;
          local_108 = (longlong *)0x0;
LAB_14415b9f0:
          local_100 = (longlong *)0x0;
          bVar20 = true;
        }
        else {
          if (*(int *)(lVar18 + 0x4c) == 0) {
LAB_14415b7ff:
            lVar19 = 0;
          }
          else {
            uVar8 = *(uint *)(lVar18 + 0x48);
            lVar19 = 0;
            if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
              plVar17 = (longlong *)
                        ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
              if ((plVar17 == (longlong *)0x0) ||
                 (((int)plVar17[2] != *(int *)(lVar18 + 0x4c) ||
                  ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)))) goto LAB_14415b7ff;
              lVar19 = *plVar17;
            }
          }
          plVar17 = *(longlong **)(lVar18 + 0x118);
          local_108 = param_1;
          if (plVar17 == (longlong *)0x0) goto LAB_14415b9f0;
          LOCK();
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar17 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
            }
          }
          LOCK();
          *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
          UNLOCK();
          bVar20 = false;
          local_100 = plVar17;
        }
        plVar17 = local_100;
        local_e8 = 0;
        local_110 = '\x03';
        local_f8._0_4_ = 0;
        if (lVar19 == 0) {
          iVar7 = 0;
          uVar8 = (uint)local_f8;
        }
        else {
          uVar8 = *(uint *)(lVar19 + 0xc);
          local_f8 = (ulonglong)uVar8;
          if ((int)uVar8 < DAT_14c9647dc) {
            lVar18 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
          }
          else {
            lVar18 = 0;
          }
          iVar7 = *(int *)(lVar18 + 0x10);
          if (*(int *)(lVar18 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            local_11c = DAT_14c964868 + 1;
            bVar21 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar21) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,local_11c);
            }
            LOCK();
            iVar7 = *(int *)(lVar18 + 0x10);
            bVar21 = iVar7 == 0;
            if (bVar21) {
              *(int *)(lVar18 + 0x10) = local_11c;
              iVar7 = 0;
            }
            UNLOCK();
            uVar8 = (uint)local_f8;
            if (bVar21) {
              iVar7 = local_11c;
            }
          }
        }
        local_f8._0_4_ = uVar8;
        local_f8 = CONCAT44(iVar7,(uint)local_f8);
        local_f0 = 2;
        if (local_e8 != 0) {
          FUN_1417398fc(&DAT_14c9a3da0,local_e8 + -1,1);
          local_e8 = 0;
        }
        if (!bVar20) {
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
        pfVar13 = &local_e0;
        FUN_1447c3578(lVar9 + 0x18,pfVar13,&local_110);
        if (local_c0 == 3) {
          fVar22 = local_e0;
          bVar6 = 3;
        }
        else {
          FUN_1400b56fe(local_b8,&local_e0,3);
          fVar22 = 0.0;
          if (local_98 != 0) {
            fVar22 = local_b8[0]._0_4_;
          }
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
          if (pcVar5 != (code *)0x0) {
            ppppuVar16 = local_b8;
            if (0x18 < local_a0) {
              ppppuVar16 = (undefined8 ****)local_b8[0];
            }
            (*pcVar5)(ppppuVar16);
          }
          bVar6 = local_c0;
          if (0x18 < local_a0) {
            FUN_1400020a8(local_b8[0]);
            bVar6 = local_c0;
          }
        }
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
        if (pcVar5 != (code *)0x0) {
          if (0x18 < local_c8) {
            pfVar13 = (float *)CONCAT44(uStack_dc,local_e0);
          }
          (*pcVar5)(pfVar13);
        }
        if (0x18 < local_c8) {
          FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
        }
        lVar9 = DAT_14c9a3da0;
        if ((longlong)local_e8 != 0) {
          lVar19 = (longlong)local_e8 + -1;
          lVar18 = lVar19 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar18),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar18));
          if (*(longlong *)(lVar9 + lVar18) != 0) {
            FUN_1400020a8();
          }
          lVar9 = DAT_14c9a3da0;
          iVar7 = (int)lVar19;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
          }
          *(undefined4 *)(lVar9 + lVar18) = 0xffffffff;
          iVar14 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar14 = DAT_14c9a3dd0;
          }
          *(int *)(lVar9 + 4 + lVar18) = iVar14;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar12 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar12 = DAT_14c9a3dc0;
          }
          iVar14 = iVar7 + 0x1f;
          if (-1 < iVar7) {
            iVar14 = iVar7;
          }
          bVar6 = (byte)lVar19 & 0x1f;
          DAT_14c9a3dd0 = iVar7;
          *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) =
               *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) &
               (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
          local_e8 = 0;
        }
        if ((local_110 == '\x03') && (local_100 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_100 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_100 + 0x10))();
          }
        }
        FUN_148d04cfc(local_118,lVar15,fVar22);
      }
      LOCK();
      plVar17 = plVar11 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  fVar22 = (float)FUN_141236616(param_1);
  lVar15 = param_1[0x15];
  lVar9 = param_1[8];
  if (lVar9 == 0) {
    lVar18 = 0;
    plVar11 = (longlong *)0x0;
LAB_14415b945:
    local_100 = (longlong *)0x0;
    bVar20 = true;
    local_108 = plVar11;
  }
  else {
    if (*(int *)(lVar9 + 0x4c) == 0) {
LAB_14415b5b4:
      lVar18 = 0;
    }
    else {
      uVar8 = *(uint *)(lVar9 + 0x48);
      lVar18 = 0;
      if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
        plVar11 = (longlong *)
                  ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
        if ((plVar11 == (longlong *)0x0) ||
           (((int)plVar11[2] != *(int *)(lVar9 + 0x4c) ||
            ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_14415b5b4;
        lVar18 = *plVar11;
      }
    }
    plVar17 = *(longlong **)(lVar9 + 0x118);
    plVar11 = param_1;
    if (plVar17 == (longlong *)0x0) goto LAB_14415b945;
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar17 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
    LOCK();
    *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
    UNLOCK();
    bVar20 = false;
    local_108 = param_1;
    local_100 = plVar17;
  }
  plVar11 = local_100;
  local_e8 = 0;
  local_110 = '\x03';
  local_f8._0_4_ = 0;
  if (lVar18 == 0) {
    iVar7 = 0;
    uVar8 = (uint)local_f8;
  }
  else {
    uVar8 = *(uint *)(lVar18 + 0xc);
    local_f8 = (ulonglong)uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar7 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar7 = *(int *)(lVar9 + 0x10);
      bVar21 = iVar7 == 0;
      if (bVar21) {
        *(int *)(lVar9 + 0x10) = iVar14;
        iVar7 = 0;
      }
      UNLOCK();
      uVar8 = (uint)local_f8;
      if (bVar21) {
        iVar7 = iVar14;
      }
    }
  }
  local_f8._0_4_ = uVar8;
  local_f8 = CONCAT44(iVar7,(uint)local_f8);
  local_f0 = 2;
  if (local_e8 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_e8 + -1,1);
    local_e8 = 0;
  }
  if (!bVar20) {
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  pfVar13 = &local_e0;
  FUN_1447c3578(lVar15 + 0x50,pfVar13,&local_110);
  if (local_c0 == 3) {
    fVar26 = local_e0;
    bVar6 = 3;
  }
  else {
    FUN_1400b56fe(local_b8,&local_e0,3);
    fVar26 = 0.0;
    if (local_98 != 0) {
      fVar26 = local_b8[0]._0_4_;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar5 != (code *)0x0) {
      ppppuVar16 = local_b8;
      if (0x18 < local_a0) {
        ppppuVar16 = (undefined8 ****)local_b8[0];
      }
      (*pcVar5)(ppppuVar16);
    }
    bVar6 = local_c0;
    if (0x18 < local_a0) {
      FUN_1400020a8(local_b8[0]);
      bVar6 = local_c0;
    }
  }
  *(float *)((longlong)param_1 + 0x94) = fVar26;
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
  if (pcVar5 != (code *)0x0) {
    if (0x18 < local_c8) {
      pfVar13 = (float *)CONCAT44(uStack_dc,local_e0);
    }
    (*pcVar5)(pfVar13);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
  }
  lVar15 = DAT_14c9a3da0;
  if ((longlong)local_e8 != 0) {
    lVar18 = (longlong)local_e8 + -1;
    lVar9 = lVar18 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar9),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar9))
    ;
    if (*(longlong *)(lVar15 + lVar9) != 0) {
      FUN_1400020a8();
    }
    lVar15 = DAT_14c9a3da0;
    iVar7 = (int)lVar18;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
    }
    *(undefined4 *)(lVar15 + lVar9) = 0xffffffff;
    iVar14 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar14 = DAT_14c9a3dd0;
    }
    *(int *)(lVar15 + 4 + lVar9) = iVar14;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar12 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar12 = DAT_14c9a3dc0;
    }
    iVar14 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar14 = iVar7;
    }
    bVar6 = (byte)lVar18 & 0x1f;
    DAT_14c9a3dd0 = iVar7;
    *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) =
         *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) &
         (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
    local_e8 = 0;
  }
  if ((local_110 == '\x03') && (local_100 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_100 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_100 + 0x10))();
    }
  }
  lVar15 = param_1[0x15];
  lVar9 = param_1[8];
  if (lVar9 == 0) {
    lVar18 = 0;
    plVar11 = (longlong *)0x0;
LAB_14415b96d:
    local_100 = (longlong *)0x0;
    bVar20 = true;
    local_108 = plVar11;
  }
  else {
    if (*(int *)(lVar9 + 0x4c) == 0) {
LAB_14415b5bc:
      lVar18 = 0;
    }
    else {
      uVar8 = *(uint *)(lVar9 + 0x48);
      lVar18 = 0;
      if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
        plVar11 = (longlong *)
                  ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
        if ((plVar11 == (longlong *)0x0) ||
           (((int)plVar11[2] != *(int *)(lVar9 + 0x4c) ||
            ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_14415b5bc;
        lVar18 = *plVar11;
      }
    }
    plVar17 = *(longlong **)(lVar9 + 0x118);
    plVar11 = param_1;
    if (plVar17 == (longlong *)0x0) goto LAB_14415b96d;
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar17 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
    LOCK();
    *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
    UNLOCK();
    bVar20 = false;
    local_108 = param_1;
    local_100 = plVar17;
  }
  plVar11 = local_100;
  local_e8 = 0;
  local_110 = '\x03';
  local_f8._0_4_ = 0;
  if (lVar18 == 0) {
    iVar7 = 0;
    uVar8 = (uint)local_f8;
  }
  else {
    uVar8 = *(uint *)(lVar18 + 0xc);
    local_f8 = (ulonglong)uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar7 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar7 = *(int *)(lVar9 + 0x10);
      bVar21 = iVar7 == 0;
      if (bVar21) {
        *(int *)(lVar9 + 0x10) = iVar14;
        iVar7 = 0;
      }
      UNLOCK();
      uVar8 = (uint)local_f8;
      if (bVar21) {
        iVar7 = iVar14;
      }
    }
  }
  local_f8._0_4_ = uVar8;
  local_f8 = CONCAT44(iVar7,(uint)local_f8);
  local_f0 = 2;
  if (local_e8 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_e8 + -1,1);
    local_e8 = 0;
  }
  if (!bVar20) {
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  pfVar13 = &local_e0;
  FUN_1447c3578(lVar15 + 0x88,pfVar13,&local_110);
  if (local_c0 == 3) {
    fVar26 = local_e0;
    bVar6 = 3;
  }
  else {
    FUN_1400b56fe(local_b8,&local_e0,3);
    fVar26 = 0.0;
    if (local_98 != 0) {
      fVar26 = local_b8[0]._0_4_;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar5 != (code *)0x0) {
      ppppuVar16 = local_b8;
      if (0x18 < local_a0) {
        ppppuVar16 = (undefined8 ****)local_b8[0];
      }
      (*pcVar5)(ppppuVar16);
    }
    bVar6 = local_c0;
    if (0x18 < local_a0) {
      FUN_1400020a8(local_b8[0]);
      bVar6 = local_c0;
    }
  }
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
  if (pcVar5 != (code *)0x0) {
    if (0x18 < local_c8) {
      pfVar13 = (float *)CONCAT44(uStack_dc,local_e0);
    }
    (*pcVar5)(pfVar13);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
  }
  lVar15 = DAT_14c9a3da0;
  if ((longlong)local_e8 != 0) {
    lVar18 = (longlong)local_e8 + -1;
    lVar9 = lVar18 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar9),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar9))
    ;
    if (*(longlong *)(lVar15 + lVar9) != 0) {
      FUN_1400020a8();
    }
    lVar15 = DAT_14c9a3da0;
    iVar7 = (int)lVar18;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
    }
    *(undefined4 *)(lVar15 + lVar9) = 0xffffffff;
    iVar14 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar14 = DAT_14c9a3dd0;
    }
    *(int *)(lVar15 + 4 + lVar9) = iVar14;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar12 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar12 = DAT_14c9a3dc0;
    }
    iVar14 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar14 = iVar7;
    }
    bVar6 = (byte)lVar18 & 0x1f;
    DAT_14c9a3dd0 = iVar7;
    *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) =
         *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) &
         (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
    local_e8 = 0;
  }
  if ((local_110 == '\x03') && (local_100 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_100 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_100 + 0x10))();
    }
  }
  lVar15 = param_1[0x16];
  lVar9 = param_1[8];
  if (lVar9 == 0) {
    lVar18 = 0;
    plVar11 = (longlong *)0x0;
LAB_14415b995:
    local_100 = (longlong *)0x0;
    bVar20 = true;
    local_108 = plVar11;
  }
  else {
    if (*(int *)(lVar9 + 0x4c) == 0) {
LAB_14415b5c4:
      lVar18 = 0;
    }
    else {
      uVar8 = *(uint *)(lVar9 + 0x48);
      lVar18 = 0;
      if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
        plVar11 = (longlong *)
                  ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
        if ((plVar11 == (longlong *)0x0) ||
           (((int)plVar11[2] != *(int *)(lVar9 + 0x4c) ||
            ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_14415b5c4;
        lVar18 = *plVar11;
      }
    }
    plVar17 = *(longlong **)(lVar9 + 0x118);
    plVar11 = param_1;
    if (plVar17 == (longlong *)0x0) goto LAB_14415b995;
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar17 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
    LOCK();
    *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
    UNLOCK();
    bVar20 = false;
    local_108 = param_1;
    local_100 = plVar17;
  }
  plVar11 = local_100;
  local_e8 = 0;
  local_110 = '\x03';
  local_f8._0_4_ = 0;
  if (lVar18 == 0) {
    iVar7 = 0;
    uVar8 = (uint)local_f8;
  }
  else {
    uVar8 = *(uint *)(lVar18 + 0xc);
    local_f8 = (ulonglong)uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar7 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar7 = *(int *)(lVar9 + 0x10);
      bVar21 = iVar7 == 0;
      if (bVar21) {
        *(int *)(lVar9 + 0x10) = iVar14;
        iVar7 = 0;
      }
      UNLOCK();
      uVar8 = (uint)local_f8;
      if (bVar21) {
        iVar7 = iVar14;
      }
    }
  }
  local_f8._0_4_ = uVar8;
  local_f8 = CONCAT44(iVar7,(uint)local_f8);
  local_f0 = 2;
  if (local_e8 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_e8 + -1,1);
    local_e8 = 0;
  }
  if (!bVar20) {
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  pfVar13 = &local_e0;
  FUN_1447c3578(lVar15 + 0x18,pfVar13,&local_110);
  if (local_c0 == 3) {
    uVar8 = 3;
    fVar27 = local_e0;
  }
  else {
    FUN_1400b56fe(local_b8,&local_e0,3);
    fVar27 = 0.0;
    if (local_98 != 0) {
      fVar27 = local_b8[0]._0_4_;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar5 != (code *)0x0) {
      ppppuVar16 = local_b8;
      if (0x18 < local_a0) {
        ppppuVar16 = (undefined8 ****)local_b8[0];
      }
      (*pcVar5)(ppppuVar16);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(local_b8[0]);
    }
    uVar8 = (uint)local_c0;
  }
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar8 * 0x120));
  if (pcVar5 != (code *)0x0) {
    if (0x18 < local_c8) {
      pfVar13 = (float *)CONCAT44(uStack_dc,local_e0);
    }
    (*pcVar5)(pfVar13);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
  }
  lVar15 = DAT_14c9a3da0;
  if ((longlong)local_e8 != 0) {
    lVar18 = (longlong)local_e8 + -1;
    lVar9 = lVar18 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar9),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar9))
    ;
    if (*(longlong *)(lVar15 + lVar9) != 0) {
      FUN_1400020a8();
    }
    lVar15 = DAT_14c9a3da0;
    iVar7 = (int)lVar18;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
    }
    *(undefined4 *)(lVar15 + lVar9) = 0xffffffff;
    iVar14 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar14 = DAT_14c9a3dd0;
    }
    *(int *)(lVar15 + 4 + lVar9) = iVar14;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar12 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar12 = DAT_14c9a3dc0;
    }
    iVar14 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar14 = iVar7;
    }
    bVar6 = (byte)lVar18 & 0x1f;
    DAT_14c9a3dd0 = iVar7;
    *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) =
         *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) &
         (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
    local_e8 = 0;
  }
  if ((local_110 == '\x03') && (local_100 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_100 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_100 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0xe) = 0xbf800000;
  *(float *)((longlong)param_1 + 0x74) = fVar22;
  fVar3 = *(float *)((longlong)param_1 + 0x94);
  fVar25 = fVar22 + fVar3;
  *(float *)(param_1 + 0xf) = fVar25;
  fVar23 = fVar26 + fVar25;
  *(float *)((longlong)param_1 + 0x7c) = fVar23;
  fVar24 = fVar3 + fVar23;
  *(float *)(param_1 + 0x10) = fVar24;
  *(float *)((longlong)param_1 + 0x84) = fVar27 + fVar24;
  fVar27 = fVar27 + fVar24 + fVar3;
  *(float *)(param_1 + 0x11) = fVar27;
  fVar27 = fVar27 + fVar26;
  *(float *)((longlong)param_1 + 0x8c) = fVar27;
  *(float *)(param_1 + 0x12) = fVar27 + fVar3;
  if (*(char *)(lVar4 + 0x80) == '\x02') {
    *(undefined1 *)(param_1 + 0x13) = 4;
    *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
    *(float *)((longlong)param_1 + 0x84) = fVar22;
    *(float *)(param_1 + 0x11) = fVar25;
    *(float *)((longlong)param_1 + 0x8c) = fVar23;
    *(float *)(param_1 + 0x12) = fVar24;
  }
LAB_14415ab15:
  if ((local_90 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14415bca4 FUN_14415bca4 body=2459 status=ok
// SIG undefined FUN_14415bca4(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14415bca4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined *puVar11;
  undefined8 *******pppppppuVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  bool bVar22;
  undefined4 uVar23;
  undefined1 auStack_e8 [36];
  int local_c4;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  int local_a8;
  undefined4 local_a4;
  char local_a0 [8];
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80;
  int local_78;
  undefined8 *******local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((((*(int *)(param_1 + 0xa0) != 0) && (uVar3 = *(uint *)(param_1 + 0x9c), -1 < (int)uVar3)) &&
      ((int)uVar3 < DAT_14c9647dc)) &&
     (((lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar13 != 0 &&
       (*(int *)(lVar13 + 0x10) == *(int *)(param_1 + 0xa0))) &&
      (((*(uint *)(lVar13 + 8) & 0x10200000) == 0 &&
       ((*(char *)(param_1 + 0x68) == '\0' &&
        (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\0')))))))) {
    cVar6 = FUN_148d3c3f0(param_1);
    while (cVar6 != '\0') {
      lVar13 = *(longlong *)(param_1 + 0x48);
      cVar6 = *(char *)(param_1 + 0x98);
      *(char *)(param_1 + 0x98) = cVar6 + '\x01';
      switch(cVar6) {
      case '\0':
        if ((*(int *)(param_1 + 0xa0) == 0) || (uVar3 = *(uint *)(param_1 + 0x9c), (int)uVar3 < 0))
        {
LAB_14415c0e3:
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          if ((int)uVar3 < DAT_14c9647dc) {
            puVar14 = (undefined8 *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if ((((puVar14 == (undefined8 *)0x0) ||
                 (*(int *)(puVar14 + 2) != *(int *)(param_1 + 0xa0))) ||
                ((*(uint *)(puVar14 + 1) & 0x10200000) != 0)) ||
               ((*(uint *)(puVar14 + 1) & 0x10200000) != 0)) goto LAB_14415c0e3;
            uVar8 = *puVar14;
          }
        }
        FUN_148d3c58a(param_1,uVar8);
        FUN_148d3c738(param_1,1,*(undefined4 *)(param_1 + 0x94));
        if (*(longlong *)(param_1 + 0xa8) != 0) {
          FUN_14495448a(local_a0,L"GbxMomentNodeState_CinematicMissionGrant_Bookend",
                        *(undefined4 *)(param_1 + 0xb8));
          uVar8 = FUN_140c16b86(*(longlong *)(param_1 + 0xa8) + 0xc0);
          FUN_148d3c91e(param_1,uVar8,local_a0);
        }
        break;
      case '\x01':
        if ((((((*(int *)(param_1 + 0xa0) != 0) &&
               (uVar3 = *(uint *)(param_1 + 0x9c), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)
              ) && ((plVar15 = (longlong *)
                               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                    plVar15 != (longlong *)0x0 && ((int)plVar15[2] == *(int *)(param_1 + 0xa0)))))
            && ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)) && (lVar10 = *plVar15, lVar10 != 0)) {
          lVar9 = FUN_1459f3116();
          iVar7 = *(int *)(lVar9 + 0x38);
          if ((iVar7 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar7 * 8) ==
              lVar9 + 0x30)) {
            local_c0 = lVar10;
            FUN_148d033ba(lVar10,CONCAT71((int7)(int3)((uint)iVar7 >> 8),
                                          *(undefined1 *)(lVar13 + 0xfc)));
            local_b0 = 0;
            iVar7 = *(int *)(lVar13 + 0x108);
            uVar8 = *(undefined8 *)(lVar13 + 0x100);
            local_b8 = lVar13;
            local_a8 = iVar7;
            if (iVar7 == 0) {
              local_a4 = 0;
            }
            else {
              FUN_148ba00da(&local_b0,iVar7,0);
              FUN_148ba014d(local_b0,uVar8,iVar7);
              lVar13 = local_b0;
              lVar10 = (longlong)local_a8;
              if (lVar10 != 0) {
                lVar9 = local_b0 + 8;
                lVar16 = 0;
                do {
                  lVar19 = *(longlong *)(param_1 + 0x40);
                  if (lVar19 == 0) {
                    lVar18 = 0;
                    lVar19 = 0;
LAB_14415c553:
                    local_90 = (longlong *)0x0;
                    bVar22 = true;
                    local_98 = lVar19;
                  }
                  else {
                    if ((*(int *)(lVar19 + 0x4c) == 0) ||
                       (uVar3 = *(uint *)(lVar19 + 0x48), (int)uVar3 < 0)) {
LAB_14415c433:
                      lVar18 = 0;
                    }
                    else {
                      lVar18 = 0;
                      if ((int)uVar3 < DAT_14c9647dc) {
                        plVar15 = (longlong *)
                                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
                        if (((plVar15 == (longlong *)0x0) ||
                            ((int)plVar15[2] != *(int *)(lVar19 + 0x4c))) ||
                           ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) goto LAB_14415c433;
                        lVar18 = *plVar15;
                      }
                    }
                    plVar15 = *(longlong **)(lVar19 + 0x118);
                    lVar19 = param_1;
                    if (plVar15 == (longlong *)0x0) goto LAB_14415c553;
                    LOCK();
                    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                    UNLOCK();
                    LOCK();
                    *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
                    UNLOCK();
                    LOCK();
                    plVar1 = plVar15 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*plVar15)(plVar15);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar15 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar15 + 0x10))(plVar15);
                      }
                    }
                    LOCK();
                    *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
                    UNLOCK();
                    bVar22 = false;
                    local_98 = param_1;
                    local_90 = plVar15;
                  }
                  plVar15 = local_90;
                  local_78 = 0;
                  local_a0[0] = '\x03';
                  local_88._0_4_ = 0;
                  if (lVar18 == 0) {
                    iVar7 = 0;
                    uVar3 = (uint)local_88;
                  }
                  else {
                    uVar3 = *(uint *)(lVar18 + 0xc);
                    local_88 = (ulonglong)uVar3;
                    if ((int)uVar3 < DAT_14c9647dc) {
                      lVar19 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                    }
                    else {
                      lVar19 = 0;
                    }
                    iVar7 = *(int *)(lVar19 + 0x10);
                    if (*(int *)(lVar19 + 0x10) == 0) {
                      LOCK();
                      iVar7 = DAT_14c964868 + 1;
                      UNLOCK();
                      iVar17 = DAT_14c964868 + 1;
                      bVar21 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar7;
                      if (bVar21) {
                        local_c4 = iVar17;
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,iVar17);
                        iVar17 = local_c4;
                      }
                      LOCK();
                      iVar7 = *(int *)(lVar19 + 0x10);
                      bVar21 = iVar7 == 0;
                      if (bVar21) {
                        *(int *)(lVar19 + 0x10) = iVar17;
                        iVar7 = 0;
                      }
                      UNLOCK();
                      uVar3 = (uint)local_88;
                      if (bVar21) {
                        iVar7 = iVar17;
                      }
                    }
                  }
                  local_88._0_4_ = uVar3;
                  local_88 = CONCAT44(iVar7,(uint)local_88);
                  local_80 = 2;
                  if (local_78 != 0) {
                    FUN_1417398fc(&DAT_14c9a3da0,local_78 + -1,1);
                    local_78 = 0;
                  }
                  if (!bVar22) {
                    LOCK();
                    piVar2 = (int *)((longlong)plVar15 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar15 + 0x10))(plVar15);
                    }
                  }
                  FUN_1447c3578(lVar9 + lVar16,local_70,local_a0);
                  lVar19 = FUN_14030a32e(local_70);
                  if (lVar19 == 0) {
                    *(undefined4 *)(lVar13 + 0x40 + lVar16) = 0;
                    iVar7 = 0;
                  }
                  else {
                    uVar3 = *(uint *)(lVar19 + 0xc);
                    *(uint *)(lVar13 + 0x40 + lVar16) = uVar3;
                    if ((int)uVar3 < DAT_14c9647dc) {
                      lVar19 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                    }
                    else {
                      lVar19 = 0;
                    }
                    iVar7 = *(int *)(lVar19 + 0x10);
                    if (*(int *)(lVar19 + 0x10) == 0) {
                      LOCK();
                      iVar7 = DAT_14c964868 + 1;
                      UNLOCK();
                      iVar17 = DAT_14c964868 + 1;
                      bVar22 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar7;
                      if (bVar22) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,iVar17);
                      }
                      LOCK();
                      iVar7 = *(int *)(lVar19 + 0x10);
                      bVar22 = iVar7 == 0;
                      if (bVar22) {
                        *(int *)(lVar19 + 0x10) = iVar17;
                        iVar7 = 0;
                      }
                      UNLOCK();
                      if (bVar22) {
                        iVar7 = iVar17;
                      }
                    }
                  }
                  *(int *)(lVar13 + 0x44 + lVar16) = iVar7;
                  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120)
                                     );
                  if (pcVar4 != (code *)0x0) {
                    pppppppuVar12 = local_70;
                    if (0x18 < local_58) {
                      pppppppuVar12 = local_70[0];
                    }
                    (*pcVar4)(pppppppuVar12);
                  }
                  if (0x18 < local_58) {
                    FUN_1400020a8(local_70[0]);
                  }
                  lVar19 = DAT_14c9a3da0;
                  if ((longlong)local_78 != 0) {
                    lVar18 = (longlong)local_78 + -1;
                    lVar20 = lVar18 * 0x10;
                    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar20),
                                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar20));
                    if (*(longlong *)(lVar19 + lVar20) != 0) {
                      FUN_1400020a8();
                    }
                    lVar19 = DAT_14c9a3da0;
                    iVar7 = (int)lVar18;
                    if (DAT_14c9a3dd4 != 0) {
                      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
                    }
                    *(undefined4 *)(lVar19 + lVar20) = 0xffffffff;
                    iVar17 = -1;
                    if (0 < DAT_14c9a3dd4) {
                      iVar17 = DAT_14c9a3dd0;
                    }
                    *(int *)(lVar19 + 4 + lVar20) = iVar17;
                    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                    puVar11 = DAT_14c9a3dc0;
                    if (DAT_14c9a3dc0 == (undefined *)0x0) {
                      puVar11 = &DAT_14c9a3db0;
                    }
                    iVar17 = iVar7 + 0x1f;
                    if (-1 < iVar7) {
                      iVar17 = iVar7;
                    }
                    bVar5 = (byte)lVar18 & 0x1f;
                    DAT_14c9a3dd0 = iVar7;
                    *(uint *)(puVar11 + (longlong)(iVar17 >> 5) * 4) =
                         *(uint *)(puVar11 + (longlong)(iVar17 >> 5) * 4) &
                         (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
                    local_78 = 0;
                  }
                  if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
                    LOCK();
                    piVar2 = (int *)((longlong)local_90 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*local_90 + 0x10))();
                    }
                  }
                  lVar16 = lVar16 + 0x48;
                } while (lVar10 * 0x48 != lVar16);
              }
            }
            lVar13 = local_c0;
            FUN_1440f37a6(local_c0,&local_b0);
            if (*(longlong *)(local_b8 + 0xf0) == 0) {
              FUN_1440f3626(lVar13,*(undefined4 *)(local_b8 + 0xf8));
            }
            else {
              FUN_148d031fe(lVar13,local_b8 + 0xf0);
            }
            FUN_148b9ff3d(local_b0);
            if (local_b0 != 0) {
              FUN_1400020a8();
            }
            break;
          }
        }
        if (*(longlong *)(param_1 + 0xa8) != 0) goto LAB_14415c0d9;
        break;
      case '\x02':
        if (*(longlong *)(param_1 + 0xa8) != 0) {
          FUN_14495448a(local_a0,L"GbxMomentNodeState_CinematicMissionGrant",
                        *(undefined4 *)(param_1 + 0xb8));
          uVar8 = FUN_140c16b86(*(longlong *)(param_1 + 0xa8) + 0xd8);
          FUN_148d3c91e(param_1,uVar8,local_a0);
          FUN_14495448a(local_a0,L"GbxMomentNodeState_CinematicMissionGrant_Bookend",
                        *(undefined4 *)(param_1 + 0xb8));
          FUN_148d3c432(param_1);
        }
        uVar23 = *(undefined4 *)(param_1 + 0x94);
        uVar8 = 0;
        goto LAB_14415be97;
      case '\x03':
        if (*(char *)(lVar13 + 0x80) == '\x01') {
          *(undefined1 *)(param_1 + 0x98) = 9;
        }
        break;
      case '\x04':
        uVar23 = *(undefined4 *)(param_1 + 0x94);
        uVar8 = 1;
LAB_14415be97:
        FUN_148d3c738(param_1,uVar8,uVar23);
        break;
      case '\x05':
        if ((((*(int *)(param_1 + 0xa0) != 0) &&
             (uVar3 = *(uint *)(param_1 + 0x9c), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc))
           && (((plVar15 = (longlong *)
                           ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                plVar15 != (longlong *)0x0 && ((int)plVar15[2] == *(int *)(param_1 + 0xa0))) &&
               (((*(uint *)(plVar15 + 1) & 0x10200000) == 0 && (lVar10 = *plVar15, lVar10 != 0))))))
        {
          lVar9 = FUN_1459f3116();
          iVar7 = *(int *)(lVar9 + 0x38);
          if ((iVar7 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar7 * 8) ==
              lVar9 + 0x30)) {
            FUN_148d03c82(lVar10,CONCAT71((int7)(int3)((uint)iVar7 >> 8),
                                          *(undefined1 *)(lVar13 + 0xfd)));
            FUN_1440f3626(lVar10);
            break;
          }
        }
        FUN_1446f470e(local_a0,L"FirstPerson",1);
LAB_14415c0d9:
        FUN_148d3ca88(param_1);
        break;
      case '\x06':
        FUN_148d3c738(param_1,0,*(undefined4 *)(param_1 + 0x94));
        if (*(longlong *)(param_1 + 0xa8) != 0) {
          FUN_14495448a(local_a0,L"GbxMomentNodeState_CinematicMissionGrant",
                        *(undefined4 *)(param_1 + 0xb8));
          FUN_148d3c432(param_1);
        }
        break;
      case '\a':
        FUN_148d3c58a(param_1,0);
      }
      cVar6 = FUN_148d3c3f0(param_1);
    }
    if (*(byte *)(param_1 + 0x98) < 9) {
      if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14415c65c FUN_14415c65c body=537 status=ok
// SIG undefined FUN_14415c65c(void)

void FUN_14415c65c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar5 = *(int *)(param_1 + 0xa0);
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x80) == '\x01') goto LAB_14415c6d8;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_14495448a(&local_28,L"GbxMomentNodeState_CinematicMissionGrant",
                  *(undefined4 *)(param_1 + 0xb8));
    FUN_148d3c432(param_1,&local_28);
    iVar5 = *(int *)(param_1 + 0xa0);
  }
  if (((((iVar5 == 0) || (uVar3 = *(uint *)(param_1 + 0x9c), (int)uVar3 < 0)) ||
       (DAT_14c9647dc <= (int)uVar3)) ||
      ((puVar7 = (undefined8 *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       puVar7 == (undefined8 *)0x0 || (*(int *)(puVar7 + 2) != iVar5)))) ||
     ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_14415c6d8;
  if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
    uVar6 = *puVar7;
  }
  else {
    uVar6 = 0;
  }
  uVar6 = FUN_1447210f0(uVar6);
  FUN_148d3c30c(&local_28,uVar6);
  if (local_20 == (longlong *)0x0) goto LAB_14415c6d8;
  iVar5 = (int)local_20[1];
  do {
    if (iVar5 == 0) {
      plVar8 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar4 = (int)local_20[1];
    bVar9 = iVar5 == iVar4;
    if (bVar9) {
      *(int *)(local_20 + 1) = iVar5 + 1;
      iVar4 = iVar5;
    }
    iVar5 = iVar4;
    UNLOCK();
    plVar8 = local_20;
  } while (!bVar9);
  LOCK();
  piVar1 = (int *)((longlong)local_20 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_20 + 0x10))();
  }
  if (plVar8 == (longlong *)0x0) goto LAB_14415c6d8;
  if (local_28 != 0) {
    if (*(int *)(param_1 + 0xa0) == 0) {
LAB_14415c86b:
      uVar6 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x9c);
      uVar6 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((puVar7 == (undefined8 *)0x0) ||
           ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0xa0) ||
            ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_14415c86b;
        uVar6 = *puVar7;
      }
    }
    FUN_148d04f7e(local_28,uVar6);
  }
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
LAB_14415c6d8:
  *(undefined8 *)(param_1 + 0x9c) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14415c876 FUN_14415c876 body=1369 status=ok
// SIG undefined FUN_14415c876(void)

undefined8 FUN_14415c876(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  void *_Dst;
  char *pcVar10;
  uint uVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined8 *******pppppppuVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStack_b8 [32];
  char local_98;
  undefined7 uStack_97;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78;
  int local_70;
  undefined8 ******local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar9 = *(longlong *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x7c) = 0;
  pcVar10 = (char *)(lVar9 + 0x88);
  if (0x18 < *(ushort *)(lVar9 + 0xa0)) {
    pcVar10 = *(char **)pcVar10;
  }
  uVar7 = (ulonglong)((uint)*(byte *)(lVar9 + 0xa8) * 0x120);
  if (*(code **)(&DAT_14c9a8620 + uVar7) == (code *)0x0) {
    pcVar13 = pcVar10 + *(int *)((longlong)&DAT_14c9a8510 + uVar7);
    do {
      uVar8 = 1;
      if (pcVar13 <= pcVar10) goto LAB_14415cb0a;
      cVar5 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar5 == '\0');
  }
  else {
    cVar5 = (**(code **)(&DAT_14c9a8620 + uVar7))();
    uVar8 = 1;
    if (cVar5 != '\0') goto LAB_14415cb0a;
  }
  cVar5 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar9 + 0x80);
  if (cVar5 == '\0') {
    *(undefined4 *)(param_1 + 0x7c) = 0;
    iVar6 = 0;
  }
  else {
    lVar19 = *(longlong *)(param_1 + 0x40);
    if (lVar19 == 0) {
      lVar15 = 0;
      local_90 = 0;
LAB_14415cce9:
      local_88 = (longlong *)0x0;
      bVar21 = true;
    }
    else {
      if (*(int *)(lVar19 + 0x4c) == 0) {
LAB_14415cc00:
        lVar15 = 0;
      }
      else {
        uVar11 = *(uint *)(lVar19 + 0x48);
        lVar15 = 0;
        if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
          plVar18 = (longlong *)
                    ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
          if ((plVar18 == (longlong *)0x0) ||
             (((int)plVar18[2] != *(int *)(lVar19 + 0x4c) ||
              ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))) goto LAB_14415cc00;
          lVar15 = *plVar18;
        }
      }
      plVar18 = *(longlong **)(lVar19 + 0x118);
      local_90 = param_1;
      if (plVar18 == (longlong *)0x0) goto LAB_14415cce9;
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
      LOCK();
      *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
      UNLOCK();
      bVar21 = false;
      local_88 = plVar18;
    }
    plVar18 = local_88;
    local_70 = 0;
    local_98 = '\x03';
    local_80._0_4_ = 0;
    if (lVar15 == 0) {
      iVar6 = 0;
      uVar11 = (uint)local_80;
    }
    else {
      uVar11 = *(uint *)(lVar15 + 0xc);
      local_80 = (ulonglong)uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      iVar6 = *(int *)(lVar19 + 0x10);
      if (*(int *)(lVar19 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar17 = DAT_14c964868 + 1;
        bVar22 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar22) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar6 = *(int *)(lVar19 + 0x10);
        bVar22 = iVar6 == 0;
        if (bVar22) {
          *(int *)(lVar19 + 0x10) = iVar17;
          iVar6 = 0;
        }
        UNLOCK();
        uVar11 = (uint)local_80;
        if (bVar22) {
          iVar6 = iVar17;
        }
      }
    }
    local_80._0_4_ = uVar11;
    local_80 = CONCAT44(iVar6,(uint)local_80);
    local_78 = 2;
    if (local_70 != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_70 + -1,1);
      local_70 = 0;
    }
    if (!bVar21) {
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
    FUN_1447c3578(lVar9 + 0x80,local_68,&local_98);
    lVar9 = FUN_14030a32e(local_68);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar3 != (code *)0x0) {
      pppppppuVar14 = local_68;
      if (0x18 < local_50) {
        pppppppuVar14 = (undefined8 *******)local_68[0];
      }
      (*pcVar3)(pppppppuVar14);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    lVar19 = DAT_14c9a3da0;
    if ((longlong)local_70 != 0) {
      lVar15 = (longlong)local_70 + -1;
      lVar20 = lVar15 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar20),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar20));
      if (*(longlong *)(lVar19 + lVar20) != 0) {
        FUN_1400020a8();
      }
      lVar19 = DAT_14c9a3da0;
      iVar6 = (int)lVar15;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
      }
      *(undefined4 *)(lVar19 + lVar20) = 0xffffffff;
      iVar17 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar17 = DAT_14c9a3dd0;
      }
      *(int *)(lVar19 + 4 + lVar20) = iVar17;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar12 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar12 = DAT_14c9a3dc0;
      }
      iVar17 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar17 = iVar6;
      }
      bVar4 = (byte)lVar15 & 0x1f;
      DAT_14c9a3dd0 = iVar6;
      *(uint *)(puVar12 + (longlong)(iVar17 >> 5) * 4) =
           *(uint *)(puVar12 + (longlong)(iVar17 >> 5) * 4) &
           (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      local_70 = 0;
    }
    if ((local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    if (lVar9 == 0) {
      FUN_1400b22c2(&local_98,"Settings.SourceLocationActor");
      _Dst = (void *)CONCAT71(uStack_97,local_98);
      if ((longlong)(int)local_90 != 0) {
        uVar11 = 1;
        lVar9 = 0;
        do {
          if (*(short *)((longlong)_Dst + lVar9) == 0x2e) {
            if (uVar11 != 0) {
              uVar16 = (int)local_90 - 1;
              if ((int)local_90 == 0) {
                uVar16 = 0;
              }
              if ((int)uVar11 < (int)uVar16) {
                uVar16 = uVar11;
              }
              if (0 < (int)uVar16) {
                if ((int)local_90 - uVar16 != 0) {
                  memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar16 * 2),
                          (longlong)(int)((int)local_90 - uVar16) * 2);
                }
                local_90 = CONCAT44(local_90._4_4_,(int)local_90 - uVar16);
                FUN_1449649ae(&local_98);
                _Dst = (void *)CONCAT71(uStack_97,local_98);
              }
            }
            break;
          }
          uVar11 = uVar11 + 1;
          lVar9 = lVar9 + 2;
        } while ((longlong)(int)local_90 * 2 != lVar9);
      }
      if (_Dst != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = 0;
      goto LAB_14415cb0a;
    }
    uVar11 = *(uint *)(lVar9 + 0xc);
    *(uint *)(param_1 + 0x7c) = uVar11;
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar6 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar17 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar17);
      }
      LOCK();
      iVar6 = *(int *)(lVar9 + 0x10);
      bVar21 = iVar6 == 0;
      if (bVar21) {
        *(int *)(lVar9 + 0x10) = iVar17;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar21) {
        iVar6 = iVar17;
      }
    }
  }
  *(int *)(param_1 + 0x80) = iVar6;
  uVar8 = 1;
LAB_14415cb0a:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14415cdd0 FUN_14415cdd0 body=1256 status=ok
// SIG undefined FUN_14415cdd0(void)

undefined8 FUN_14415cdd0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  void *_Dst;
  undefined *puVar10;
  undefined8 ****ppppuVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_b8 [40];
  char local_90;
  undefined7 uStack_8f;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined1 local_70;
  int local_68;
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 0x70) = 0;
  lVar15 = *(longlong *)(param_1 + 0x48) + 0x80;
  cVar5 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar15);
  if (cVar5 == '\0') {
    *(undefined4 *)(param_1 + 0x70) = 0;
    uVar8 = 0;
  }
  else {
    lVar18 = *(longlong *)(param_1 + 0x40);
    if (lVar18 == 0) {
      lVar12 = 0;
      local_88 = 0;
LAB_14415d1fd:
      local_80 = (longlong *)0x0;
      bVar19 = true;
    }
    else {
      if (*(int *)(lVar18 + 0x4c) == 0) {
LAB_14415d115:
        lVar12 = 0;
      }
      else {
        uVar14 = *(uint *)(lVar18 + 0x48);
        lVar12 = 0;
        if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
          plVar16 = (longlong *)
                    ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
          if ((plVar16 == (longlong *)0x0) ||
             (((int)plVar16[2] != *(int *)(lVar18 + 0x4c) ||
              ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)))) goto LAB_14415d115;
          lVar12 = *plVar16;
        }
      }
      plVar16 = *(longlong **)(lVar18 + 0x118);
      local_88 = param_1;
      if (plVar16 == (longlong *)0x0) goto LAB_14415d1fd;
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar16 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      LOCK();
      *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
      UNLOCK();
      bVar19 = false;
      local_80 = plVar16;
    }
    plVar16 = local_80;
    local_68 = 0;
    local_90 = '\x03';
    local_78._0_4_ = 0;
    if (lVar12 == 0) {
      iVar6 = 0;
      uVar14 = (uint)local_78;
    }
    else {
      uVar14 = *(uint *)(lVar12 + 0xc);
      local_78 = (ulonglong)uVar14;
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar18 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar18 = 0;
      }
      iVar6 = *(int *)(lVar18 + 0x10);
      if (*(int *)(lVar18 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar6 = *(int *)(lVar18 + 0x10);
        bVar20 = iVar6 == 0;
        if (bVar20) {
          *(int *)(lVar18 + 0x10) = iVar13;
          iVar6 = 0;
        }
        UNLOCK();
        uVar14 = (uint)local_78;
        if (bVar20) {
          iVar6 = iVar13;
        }
      }
    }
    local_78._0_4_ = uVar14;
    local_78 = CONCAT44(iVar6,(uint)local_78);
    local_70 = 2;
    if (local_68 != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_68 + -1,1);
      local_68 = 0;
    }
    if (!bVar19) {
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    FUN_1447c3578(lVar15,local_60,&local_90);
    lVar15 = FUN_14030a32e(local_60);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar11 = local_60;
      if (0x18 < local_48) {
        ppppuVar11 = (undefined8 ****)local_60[0];
      }
      (*pcVar3)(ppppuVar11);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60[0]);
    }
    lVar18 = DAT_14c9a3da0;
    if ((longlong)local_68 != 0) {
      lVar12 = (longlong)local_68 + -1;
      lVar17 = lVar12 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar17),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar17));
      if (*(longlong *)(lVar18 + lVar17) != 0) {
        FUN_1400020a8();
      }
      lVar18 = DAT_14c9a3da0;
      iVar6 = (int)lVar12;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
      }
      *(undefined4 *)(lVar18 + lVar17) = 0xffffffff;
      iVar13 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar13 = DAT_14c9a3dd0;
      }
      *(int *)(lVar18 + 4 + lVar17) = iVar13;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar10 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar10 = DAT_14c9a3dc0;
      }
      iVar13 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar13 = iVar6;
      }
      bVar4 = (byte)lVar12 & 0x1f;
      DAT_14c9a3dd0 = iVar6;
      *(uint *)(puVar10 + (longlong)(iVar13 >> 5) * 4) =
           *(uint *)(puVar10 + (longlong)(iVar13 >> 5) * 4) &
           (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      local_68 = 0;
    }
    if ((local_90 == '\x03') && (local_80 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
    if (lVar15 == 0) {
      FUN_1400b22c2(&local_90,"Settings.Actor");
      _Dst = (void *)CONCAT71(uStack_8f,local_90);
      if ((longlong)(int)local_88 != 0) {
        uVar14 = 1;
        lVar15 = 0;
        do {
          if (*(short *)((longlong)_Dst + lVar15) == 0x2e) {
            if (uVar14 != 0) {
              uVar7 = (int)local_88 - 1;
              if ((int)local_88 == 0) {
                uVar7 = 0;
              }
              if ((int)uVar14 < (int)uVar7) {
                uVar7 = uVar14;
              }
              if (0 < (int)uVar7) {
                if ((int)local_88 - uVar7 != 0) {
                  memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar7 * 2),
                          (longlong)(int)((int)local_88 - uVar7) * 2);
                }
                local_88 = CONCAT44(local_88._4_4_,(int)local_88 - uVar7);
                FUN_1449649ae(&local_90);
                _Dst = (void *)CONCAT71(uStack_8f,local_90);
              }
            }
            break;
          }
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 2;
        } while ((longlong)(int)local_88 * 2 != lVar15);
      }
      if (_Dst != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar9 = 0;
      goto LAB_14415d01e;
    }
    uVar14 = *(uint *)(lVar15 + 0xc);
    *(uint *)(param_1 + 0x70) = uVar14;
    if ((int)uVar14 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    uVar8 = (ulonglong)*(uint *)(lVar15 + 0x10);
    if (*(uint *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      uVar14 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar14);
      }
      LOCK();
      uVar7 = *(uint *)(lVar15 + 0x10);
      bVar19 = uVar7 == 0;
      if (bVar19) {
        *(uint *)(lVar15 + 0x10) = uVar14;
        uVar7 = 0;
      }
      UNLOCK();
      if (bVar19) {
        uVar7 = uVar14;
      }
      uVar8 = (ulonglong)uVar7;
    }
  }
  *(int *)(param_1 + 0x74) = (int)uVar8;
  uVar9 = CONCAT71((int7)(uVar8 >> 8),1);
LAB_14415d01e:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14415d2ba FUN_14415d2ba body=313 status=ok
// SIG undefined FUN_14415d2ba(void)

void FUN_14415d2ba(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((((*(int *)(param_1 + 0x74) == 0) || (uVar1 = *(uint *)(param_1 + 0x70), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 == (longlong *)0x0 || ((int)plVar4[2] != *(int *)(param_1 + 0x74))))) ||
     ((local_30 = *(undefined8 *)(param_1 + 0x48), (*(uint *)(plVar4 + 1) & 0x10200000) != 0 ||
      (lVar2 = *plVar4, lVar2 == 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  lVar3 = FUN_140929c72();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) {
    FUN_14415d406(&local_30,lVar2);
  }
  else if (*(longlong *)(lVar2 + 0x410) != 0) {
    FUN_1412b3ab6(*(longlong *)(lVar2 + 0x410),&local_40,0,1);
    lVar2 = local_40;
    if ((longlong)local_38 != 0) {
      lVar3 = 0;
      do {
        FUN_14415d406(&local_30,*(undefined8 *)(lVar2 + lVar3));
        lVar3 = lVar3 + 8;
      } while ((longlong)local_38 * 8 != lVar3);
    }
    if (local_40 != 0) {
      FUN_1400020a8(local_40);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14415d406 FUN_14415d406 body=885 status=ok
// SIG undefined FUN_14415d406(void)

void FUN_14415d406(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != (longlong *)0x0) {
    if (DAT_14cba8288 == 0) {
      local_60 = &local_48;
      local_48 = FUN_141864c34;
      local_50 = FUN_14081d0ea;
      local_58 = (code *)&LAB_1464cee30;
      local_68 = &LAB_148bfac22;
      local_70 = (code *)&LAB_140f21842;
      local_78 = L"Game";
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = CONCAT44(local_98._4_4_,0x9cd0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    iVar1 = *(int *)(DAT_14cba8288 + 0x38);
    if ((*(int *)(param_2[2] + 0x38) < iVar1) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)iVar1 * 8) !=
        DAT_14cba8288 + 0x30)) {
      if (DAT_14cb56270 == 0) {
        local_60 = &local_48;
        local_48 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_1427b09ee;
        local_68 = &LAB_148630fef;
        local_70 = FUN_1464b6a91;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10004001;
        local_90 = 8;
        local_98 = CONCAT44(local_98._4_4_,0x28);
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar2 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14cb56270);
      if (plVar2 != (longlong *)0x0) {
        if (DAT_14cb56270 == 0) {
          local_60 = &local_48;
          local_48 = FUN_1449e2820;
          local_50 = FUN_14081d0ea;
          local_58 = FUN_1427b09ee;
          local_68 = &LAB_148630fef;
          local_70 = FUN_1464b6a91;
          local_78 = L"Engine";
          local_80 = 0;
          local_88 = 0x10004001;
          local_90 = 8;
          local_98 = CONCAT44(local_98._4_4_,0x28);
          FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
        }
        plVar3 = (longlong *)FUN_144718840(plVar2,DAT_14cb56270);
        if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
          lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
          plVar2 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
          if (plVar2 == (longlong *)0x0) {
            if (lVar4 == 0) goto LAB_14415d58f;
            FUN_14654a9e8(lVar4);
          }
          else {
            (**(code **)(*plVar2 + 0x40))(plVar2,0);
            if (lVar4 == 0) goto LAB_14415d565;
          }
          if ((*(byte *)(lVar4 + 0x55) & 4) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
          }
          goto LAB_14415d565;
        }
      }
LAB_14415d58f:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
    }
    lVar4 = *param_1;
    local_48 = (code *)CONCAT44(local_48._4_4_,*(undefined4 *)(lVar4 + 0xc4));
    local_40 = (undefined4)DAT_14c8464e0;
    uStack_3c = DAT_14c8464e0._4_4_;
    uStack_38 = (undefined4)DAT_14c8464e8;
    uStack_34 = DAT_14c8464e8._4_4_;
    local_30 = DAT_14c8464f0;
    local_28 = 0;
    local_98 = 0;
    FUN_140ecfed2(param_2 + 0xf8f,
                  CONCAT71((int7)(int3)((uint)iVar1 >> 8),*(undefined1 *)(lVar4 + 0xb8)),
                  lVar4 + 0xbc);
  }
LAB_14415d565:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14415d7b0 FUN_14415d7b0 body=364 status=ok
// SIG undefined FUN_14415d7b0(void)

void FUN_14415d7b0(void)

{
  longlong lVar1;
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
  lVar1 = FUN_1405f939e();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x1f0), lVar1 != 0)) {
    lVar2 = FUN_145dfaa1c(lVar1);
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0xec) != 0)) {
LAB_14415d81c:
      if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar1 = FUN_145725aea(lVar1,1);
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
      if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
         (*(char *)(lVar1 + 0x23b8) != '\0')) goto LAB_14415d81c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 14415d92e FUN_14415d92e body=1346 status=ok
// SIG undefined FUN_14415d92e(void)

void FUN_14415d92e(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  code *pcVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
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
  code *local_60;
  int local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  lVar7 = FUN_148d3db36(param_2);
  if (lVar7 == 0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    goto LAB_14415d9e4;
  }
  uVar1 = *(uint *)(lVar7 + 0xc);
  *(uint *)(param_1 + 0x70) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar7 = 0;
  }
  iVar5 = *(int *)(lVar7 + 0x10);
  if (iVar5 == 0) {
    LOCK();
    iVar5 = DAT_14c964868 + 1;
    UNLOCK();
    iVar6 = DAT_14c964868 + 1;
    bVar14 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar5;
    if (bVar14) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar6);
    }
    LOCK();
    iVar5 = *(int *)(lVar7 + 0x10);
    bVar14 = iVar5 == 0;
    if (bVar14) {
      *(int *)(lVar7 + 0x10) = iVar6;
      iVar5 = 0;
    }
    UNLOCK();
    if (bVar14) {
      iVar5 = iVar6;
    }
    *(int *)(param_1 + 0x74) = iVar5;
    if (iVar5 == 0) goto LAB_14415d9e4;
  }
  else {
    *(int *)(param_1 + 0x74) = iVar5;
  }
  uVar1 = *(uint *)(param_1 + 0x70);
  if (((((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) ||
      (plVar10 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
      plVar10 == (longlong *)0x0)) ||
     (((int)plVar10[2] != iVar5 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0))))
  goto LAB_14415d9e4;
  if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
    lVar7 = *plVar10;
  }
  else {
    lVar7 = 0;
  }
  FUN_148d4602e(&local_60,param_1);
  if (((local_58 == 0) || (local_60 == (code *)0x0)) ||
     (cVar4 = (**(code **)(*(longlong *)local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 == 0) goto LAB_14415db64;
    if (local_60 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_14415db54;
    }
  }
  else {
    plVar10 = (longlong *)(lVar7 + 0x48);
    if (*(int *)(lVar7 + 0x5c) < 1) {
      iVar5 = *(int *)(lVar7 + 0x50);
      iVar6 = *(int *)(lVar7 + 0x58) + -1;
      *(int *)(lVar7 + 0x58) = iVar6;
      if (iVar6 <= iVar5) {
        iVar6 = iVar5;
        if (0 < iVar5) {
          iVar12 = 0;
          do {
            if (((*(int *)(*plVar10 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar10 + (longlong)iVar12 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar10,iVar12);
              FUN_14005b248(plVar10);
            }
            else {
              iVar12 = iVar12 + 1;
            }
            iVar6 = *(int *)(lVar7 + 0x50);
          } while (iVar12 < iVar6);
        }
        iVar12 = 2;
        if (2 < iVar6 * 2) {
          iVar12 = iVar6 * 2;
        }
        *(int *)(lVar7 + 0x58) = iVar12;
        if ((iVar12 < iVar5) && (*(int *)(lVar7 + 0x54) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_58 != 0) && (local_60 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_60 + 0x38))(local_60,local_50);
    }
    iVar5 = *(int *)(lVar7 + 0x50);
    *(uint *)(lVar7 + 0x50) = iVar5 + 1U;
    if (*(uint *)(lVar7 + 0x54) < iVar5 + 1U) {
      FUN_1447a71f6(plVar10,iVar5);
    }
    lVar7 = *plVar10;
    lVar13 = (longlong)iVar5 * 0x10;
    *(undefined8 *)(lVar7 + lVar13) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar13) = 0;
    *(code **)(lVar7 + lVar13) = local_60;
    local_60 = (code *)0x0;
    *(int *)(lVar7 + 8 + lVar13) = local_58;
LAB_14415db54:
    local_58 = 0;
LAB_14415db64:
    if (local_60 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)(param_1 + 0x74) == 0) {
LAB_14415dddd:
    uVar8 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x70);
    uVar8 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x74) ||
          ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_14415dddd;
      uVar8 = *puVar9;
    }
  }
  pcVar11 = *(code **)(lVar2 + 0x80);
  if (pcVar11 == (code *)0x0) {
    pcVar11 = DAT_14caa8578;
  }
  if (pcVar11 == (code *)0x0) {
    pcVar11 = DAT_14cbd9358;
  }
  FUN_144258b72(uVar8,pcVar11);
  lVar7 = FUN_1447210f0(param_2);
  if ((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x238))) {
    lVar13 = 0;
    do {
      iVar5 = *(int *)(*(longlong *)(lVar7 + 0x230) + 4 + lVar13 * 8);
      if ((((iVar5 != 0) &&
           (uVar1 = *(uint *)(*(longlong *)(lVar7 + 0x230) + lVar13 * 8), -1 < (int)uVar1)) &&
          ((int)uVar1 < DAT_14c9647dc)) &&
         (((plVar10 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar10 != (longlong *)0x0 && ((int)plVar10[2] == iVar5)) &&
          (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 &&
           (plVar10 = (longlong *)*plVar10, plVar10 != (longlong *)0x0)))))) {
        if (DAT_14cbadd90 == 0) {
          local_60 = FUN_141030f22;
          local_70 = FUN_14081d0ea;
          local_78 = &LAB_1459f2e4c;
          local_80 = &local_60;
          local_88 = &LAB_148c39de3;
          local_90 = &LAB_1457a9eb2;
          local_98 = &DAT_149e063b2;
          local_a0 = 0;
          local_a8 = 0x10000004;
          local_b0 = 0x10;
          local_b8 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar10[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
             DAT_14cbadd90 + 0x30)) &&
           (cVar4 = (**(code **)(*plVar10 + 0x6c8))(plVar10), cVar4 == '\0')) {
          local_60 = *(code **)(lVar2 + 0x80);
          if (local_60 == (code *)0x0) {
            local_60 = DAT_14caa8578;
          }
          uVar8 = FUN_14477b072(plVar10,DAT_14cbad8d0);
          (**(code **)(*plVar10 + 0x248))(plVar10,uVar8,&local_60);
        }
      }
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < *(int *)(lVar7 + 0x238));
  }
LAB_14415d9e4:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14415de72 FUN_14415de72 body=561 status=ok
// SIG undefined FUN_14415de72(void)

void FUN_14415de72(longlong param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
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
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = FUN_148d3da10();
  if (((lVar4 != 0) && (lVar4 = FUN_1447210f0(lVar4), lVar4 != 0)) && (0 < *(int *)(lVar4 + 0x238)))
  {
    lVar7 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(lVar4 + 0x230) + 4 + lVar7 * 8);
      if (((((iVar1 != 0) &&
            (uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x230) + lVar7 * 8), -1 < (int)uVar2)) &&
           (((int)uVar2 < DAT_14c9647dc &&
            ((plVar6 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar1)))))) &&
          ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) &&
         (plVar6 = (longlong *)*plVar6, plVar6 != (longlong *)0x0)) {
        if (DAT_14cbadd90 == 0) {
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
          local_70 = &local_50;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
             DAT_14cbadd90 + 0x30)) &&
           (cVar3 = (**(code **)(*plVar6 + 0x6c8))(plVar6), cVar3 == '\0')) {
          local_50 = *(code **)(*(longlong *)(param_1 + 0x48) + 0x80);
          if (local_50 == (code *)0x0) {
            local_50 = DAT_14caa8578;
          }
          uVar5 = FUN_14477b072(plVar6,DAT_14cbad8f0);
          (**(code **)(*plVar6 + 0x248))(plVar6,uVar5,&local_50);
        }
      }
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < *(int *)(lVar4 + 0x238));
  }
  FUN_14097c15a(param_1);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14415e0a4 FUN_14415e0a4 body=223 status=ok
// SIG undefined FUN_14415e0a4(void)

longlong * FUN_14415e0a4(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar4;
  
  *param_1 = 0;
  iVar2 = *(int *)(param_2 + 1);
  pvVar5 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar2,0);
    memcpy((void *)*param_1,pvVar5,(longlong)iVar2 * 2);
  }
  cVar1 = FUN_144a38768(param_1,L".bk2",4,1);
  if (cVar1 != '\0') {
    iVar2 = (int)param_1[1];
    iVar7 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar7 = 0;
    }
    iVar4 = 4;
    if (4 < iVar7) {
      iVar4 = iVar7;
    }
    uVar3 = iVar4 - 4;
    uVar8 = iVar7 - uVar3;
    uVar6 = 4;
    if ((int)uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 1) {
      uVar6 = 0;
    }
    if (0 < (int)uVar8) {
      iVar7 = iVar2 - (uVar6 + uVar3);
      if (iVar7 != 0) {
        pvVar5 = (void *)((ulonglong)uVar3 * 2 + *param_1);
        memmove(pvVar5,(void *)((longlong)pvVar5 + (ulonglong)uVar6 * 2),(longlong)iVar7 * 2);
        iVar2 = (int)param_1[1];
      }
      *(uint *)(param_1 + 1) = iVar2 - uVar6;
      FUN_1449649ae(param_1);
    }
  }
  return param_1;
}



// FUNCTION 14415e184 FUN_14415e184 body=2291 status=ok
// SIG undefined FUN_14415e184(void)

undefined8 FUN_14415e184(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char *pcVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined8 ****ppppuVar14;
  longlong lVar15;
  int iVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStack_c8 [40];
  char local_a0 [8];
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80;
  int local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar10 = *(longlong *)(param_1 + 0x48);
  pcVar11 = (char *)(lVar10 + 0x88);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (0x18 < *(ushort *)(lVar10 + 0xa0)) {
    pcVar11 = *(char **)pcVar11;
  }
  uVar8 = (ulonglong)((uint)*(byte *)(lVar10 + 0xa8) * 0x120);
  if (*(code **)(&DAT_14c9a8620 + uVar8) == (code *)0x0) {
    pcVar13 = pcVar11 + *(int *)((longlong)&DAT_14c9a8510 + uVar8);
    do {
      if (pcVar13 <= pcVar11) goto LAB_14415e3da;
      cVar6 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar6 == '\0');
LAB_14415e1fc:
    lVar19 = *(longlong *)(param_1 + 0x40);
    if (lVar19 == 0) {
      lVar15 = 0;
      local_98 = 0;
LAB_14415e8a2:
      local_90 = (longlong *)0x0;
      bVar22 = true;
    }
    else {
      if (*(int *)(lVar19 + 0x4c) == 0) {
LAB_14415e678:
        lVar15 = 0;
      }
      else {
        uVar3 = *(uint *)(lVar19 + 0x48);
        lVar15 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          plVar17 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((plVar17 == (longlong *)0x0) ||
             (((int)plVar17[2] != *(int *)(lVar19 + 0x4c) ||
              ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)))) goto LAB_14415e678;
          lVar15 = *plVar17;
        }
      }
      plVar17 = *(longlong **)(lVar19 + 0x118);
      local_98 = param_1;
      if (plVar17 == (longlong *)0x0) goto LAB_14415e8a2;
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar17 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
      LOCK();
      *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
      UNLOCK();
      bVar22 = false;
      local_90 = plVar17;
    }
    plVar17 = local_90;
    local_78 = 0;
    local_a0[0] = '\x03';
    local_88._0_4_ = 0;
    if (lVar15 == 0) {
      iVar7 = 0;
      uVar3 = (uint)local_88;
    }
    else {
      uVar3 = *(uint *)(lVar15 + 0xc);
      local_88 = (ulonglong)uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      iVar7 = *(int *)(lVar19 + 0x10);
      if (*(int *)(lVar19 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar16 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar16);
        }
        LOCK();
        iVar7 = *(int *)(lVar19 + 0x10);
        bVar21 = iVar7 == 0;
        if (bVar21) {
          *(int *)(lVar19 + 0x10) = iVar16;
          iVar7 = 0;
        }
        UNLOCK();
        uVar3 = (uint)local_88;
        if (bVar21) {
          iVar7 = iVar16;
        }
      }
    }
    local_88._0_4_ = uVar3;
    local_88 = CONCAT44(iVar7,(uint)local_88);
    local_80 = 2;
    if (local_78 != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_78 + -1,1);
      local_78 = 0;
    }
    if (!bVar22) {
      LOCK();
      piVar2 = (int *)((longlong)plVar17 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
    FUN_1447c3578(lVar10 + 0x80,local_70,local_a0);
    lVar19 = FUN_14030a32e(local_70);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppuVar14 = local_70;
      if (0x18 < local_58) {
        ppppuVar14 = (undefined8 ****)local_70[0];
      }
      (*pcVar4)(ppppuVar14);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    lVar15 = DAT_14c9a3da0;
    if ((longlong)local_78 != 0) {
      lVar18 = (longlong)local_78 + -1;
      lVar20 = lVar18 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar20),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar20));
      if (*(longlong *)(lVar15 + lVar20) != 0) {
        FUN_1400020a8();
      }
      lVar15 = DAT_14c9a3da0;
      iVar7 = (int)lVar18;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
      }
      *(undefined4 *)(lVar15 + lVar20) = 0xffffffff;
      iVar16 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar16 = DAT_14c9a3dd0;
      }
      *(int *)(lVar15 + 4 + lVar20) = iVar16;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar12 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar12 = DAT_14c9a3dc0;
      }
      iVar16 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar16 = iVar7;
      }
      bVar5 = (byte)lVar18 & 0x1f;
      DAT_14c9a3dd0 = iVar7;
      *(uint *)(puVar12 + (longlong)(iVar16 >> 5) * 4) =
           *(uint *)(puVar12 + (longlong)(iVar16 >> 5) * 4) &
           (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
      local_78 = 0;
    }
    if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    if (lVar19 != 0) {
      uVar3 = *(uint *)(lVar19 + 0xc);
      *(uint *)(param_1 + 0x70) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      iVar7 = *(int *)(lVar19 + 0x10);
      if (*(int *)(lVar19 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar16 = DAT_14c964868 + 1;
        bVar22 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar22) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar16);
        }
        LOCK();
        iVar7 = *(int *)(lVar19 + 0x10);
        bVar22 = iVar7 == 0;
        if (bVar22) {
          *(int *)(lVar19 + 0x10) = iVar16;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar22) {
          iVar7 = iVar16;
        }
      }
      *(int *)(param_1 + 0x74) = iVar7;
      goto LAB_14415e3da;
    }
  }
  else {
    cVar6 = (**(code **)(&DAT_14c9a8620 + uVar8))();
    if (cVar6 == '\0') goto LAB_14415e1fc;
LAB_14415e3da:
    pcVar11 = (char *)(lVar10 + 0xc0);
    if (0x18 < *(ushort *)(lVar10 + 0xd8)) {
      pcVar11 = *(char **)pcVar11;
    }
    uVar8 = (ulonglong)((uint)*(byte *)(lVar10 + 0xe0) * 0x120);
    if (*(code **)(&DAT_14c9a8620 + uVar8) == (code *)0x0) {
      pcVar13 = pcVar11 + *(int *)((longlong)&DAT_14c9a8510 + uVar8);
      do {
        uVar9 = 1;
        if (pcVar13 <= pcVar11) goto LAB_14415e5f6;
        cVar6 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar6 == '\0');
    }
    else {
      cVar6 = (**(code **)(&DAT_14c9a8620 + uVar8))();
      uVar9 = 1;
      if (cVar6 != '\0') goto LAB_14415e5f6;
    }
    lVar19 = *(longlong *)(param_1 + 0x40);
    if (lVar19 == 0) {
      lVar15 = 0;
      lVar19 = 0;
LAB_14415e8ca:
      local_90 = (longlong *)0x0;
      bVar22 = true;
      local_98 = lVar19;
    }
    else {
      if (*(int *)(lVar19 + 0x4c) == 0) {
LAB_14415e680:
        lVar15 = 0;
      }
      else {
        uVar3 = *(uint *)(lVar19 + 0x48);
        lVar15 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          plVar17 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((plVar17 == (longlong *)0x0) ||
             (((int)plVar17[2] != *(int *)(lVar19 + 0x4c) ||
              ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)))) goto LAB_14415e680;
          lVar15 = *plVar17;
        }
      }
      plVar17 = *(longlong **)(lVar19 + 0x118);
      lVar19 = param_1;
      if (plVar17 == (longlong *)0x0) goto LAB_14415e8ca;
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar17 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
      LOCK();
      *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
      UNLOCK();
      bVar22 = false;
      local_98 = param_1;
      local_90 = plVar17;
    }
    plVar17 = local_90;
    local_78 = 0;
    local_a0[0] = '\x03';
    local_88._0_4_ = 0;
    if (lVar15 == 0) {
      iVar7 = 0;
      uVar3 = (uint)local_88;
    }
    else {
      uVar3 = *(uint *)(lVar15 + 0xc);
      local_88 = (ulonglong)uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      iVar7 = *(int *)(lVar19 + 0x10);
      if (*(int *)(lVar19 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar16 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar16);
        }
        LOCK();
        iVar7 = *(int *)(lVar19 + 0x10);
        bVar21 = iVar7 == 0;
        if (bVar21) {
          *(int *)(lVar19 + 0x10) = iVar16;
          iVar7 = 0;
        }
        UNLOCK();
        uVar3 = (uint)local_88;
        if (bVar21) {
          iVar7 = iVar16;
        }
      }
    }
    local_88._0_4_ = uVar3;
    local_88 = CONCAT44(iVar7,(uint)local_88);
    local_80 = 2;
    if (local_78 != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_78 + -1,1);
      local_78 = 0;
    }
    if (!bVar22) {
      LOCK();
      piVar2 = (int *)((longlong)plVar17 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
    FUN_1447c3578(lVar10 + 0xb8,local_70,local_a0);
    lVar10 = FUN_14030a32e(local_70);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppuVar14 = local_70;
      if (0x18 < local_58) {
        ppppuVar14 = (undefined8 ****)local_70[0];
      }
      (*pcVar4)(ppppuVar14);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    lVar19 = DAT_14c9a3da0;
    if ((longlong)local_78 != 0) {
      lVar15 = (longlong)local_78 + -1;
      lVar18 = lVar15 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar18),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar18));
      if (*(longlong *)(lVar19 + lVar18) != 0) {
        FUN_1400020a8();
      }
      lVar19 = DAT_14c9a3da0;
      iVar7 = (int)lVar15;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
      }
      *(undefined4 *)(lVar19 + lVar18) = 0xffffffff;
      iVar16 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar16 = DAT_14c9a3dd0;
      }
      *(int *)(lVar19 + 4 + lVar18) = iVar16;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar12 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar12 = DAT_14c9a3dc0;
      }
      iVar16 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar16 = iVar7;
      }
      bVar5 = (byte)lVar15 & 0x1f;
      DAT_14c9a3dd0 = iVar7;
      *(uint *)(puVar12 + (longlong)(iVar16 >> 5) * 4) =
           *(uint *)(puVar12 + (longlong)(iVar16 >> 5) * 4) &
           (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
      local_78 = 0;
    }
    if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    if (lVar10 != 0) {
      uVar3 = *(uint *)(lVar10 + 0xc);
      *(uint *)(param_1 + 0x78) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar7 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar16 = DAT_14c964868 + 1;
        bVar22 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar22) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar16);
        }
        LOCK();
        iVar7 = *(int *)(lVar10 + 0x10);
        bVar22 = iVar7 == 0;
        if (bVar22) {
          *(int *)(lVar10 + 0x10) = iVar16;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar22) {
          iVar7 = iVar16;
        }
      }
      *(int *)(param_1 + 0x7c) = iVar7;
      uVar9 = 1;
      goto LAB_14415e5f6;
    }
  }
  uVar9 = 0;
LAB_14415e5f6:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14415ea78 FUN_14415ea78 body=392 status=ok
// SIG undefined FUN_14415ea78(void)

void FUN_14415ea78(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x74) == 0) || (uVar1 = *(uint *)(param_1 + 0x70), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) {
LAB_14415eb1e:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  plVar7 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != *(int *)(param_1 + 0x74))) ||
     (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 ||
      (plVar7 = (longlong *)*plVar7, plVar7 == (longlong *)0x0)))) goto LAB_14415eb1e;
  uVar4 = FUN_140b040c0();
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar4);
  if (plVar7 == (longlong *)0x0) goto LAB_14415eb1e;
  uVar4 = FUN_140b040c0();
  plVar5 = (longlong *)FUN_144718840(plVar7,uVar4);
  if (plVar7 == plVar5 || plVar5 == (longlong *)0x0) goto LAB_14415eb1e;
  FUN_140361b4a(&local_38,plVar5);
  *(undefined4 *)(param_1 + 0x80) = local_38;
  *(undefined4 *)(param_1 + 0x84) = uStack_34;
  *(int *)(param_1 + 0x88) = iStack_30;
  *(undefined4 *)(param_1 + 0x8c) = uStack_2c;
  lVar6 = (**(code **)(*plVar5 + 0x20))(plVar5);
  if (lVar6 != 0) {
    FUN_148d3e4ce(&local_38,param_1);
    cVar3 = FUN_140b068ec(lVar6,2,&DAT_14cb23f38,&local_38);
    if (iStack_30 == 0) {
LAB_14415ebed:
      if (CONCAT44(uStack_34,local_38) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar2 = (undefined8 *)CONCAT44(uStack_34,local_38);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,0);
        FUN_1446efa72(&local_38,0,0,0x10);
        iStack_30 = 0;
        goto LAB_14415ebed;
      }
    }
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 0x90) = 1;
      goto LAB_14415eb6c;
    }
  }
  FUN_14097c15a(param_1);
LAB_14415eb6c:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14415ec12 FUN_14415ec12 body=320 status=ok
// SIG undefined FUN_14415ec12(void)

undefined8 FUN_14415ec12(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x890) != 0) {
    puVar3 = *(undefined4 **)(*(longlong *)(param_1 + 0x890) + 8);
    puVar8 = &DAT_14c9485f0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar8 = puVar3;
    }
    if (DAT_14c947fe0 == 0) {
      lVar6 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar6);
      DAT_14c947fe0 = lVar6;
    }
    FUN_140045924(DAT_14c947fe0,local_38,puVar8,1);
    FUN_1400021e4(local_38,&local_30);
    puVar4 = &DAT_149dfb77a;
    if (local_28 != 0) {
      puVar4 = local_30;
    }
    lVar6 = 0x12;
    lVar9 = 0;
LAB_14415eca8:
    uVar1 = *(ushort *)((longlong)puVar4 + lVar9);
    uVar2 = *(ushort *)((longlong)L"StandIn_NonGunUser" + lVar9);
    if (uVar1 == uVar2) {
      iVar7 = 0;
      if ((uVar1 == 0) || (iVar7 = 0, lVar6 == 1)) goto LAB_14415ecf2;
LAB_14415ecc4:
      lVar6 = lVar6 + -1;
      lVar9 = lVar9 + 2;
      goto LAB_14415eca8;
    }
    if ((uVar2 | uVar1) < 0x80) {
      if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
        iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
        goto LAB_14415ecf2;
      }
      if (lVar6 == 1) {
        iVar7 = 0;
        goto LAB_14415ecf2;
      }
      goto LAB_14415ecc4;
    }
    iVar7 = (uint)uVar1 - (uint)uVar2;
LAB_14415ecf2:
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (iVar7 == 0) {
      uVar5 = 0;
      goto LAB_14415ed06;
    }
  }
  uVar5 = 1;
LAB_14415ed06:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14415ed54 FUN_14415ed54 body=579 status=ok
// SIG undefined FUN_14415ed54(void)

undefined8 FUN_14415ed54(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x890) == 0) {
LAB_14415ef10:
    uVar4 = 0;
  }
  else {
    puVar6 = *(undefined4 **)(*(longlong *)(param_1 + 0x890) + 8);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = &DAT_14c9485f0;
    }
    if (DAT_14c947fe0 == 0) {
      lVar5 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar5);
      DAT_14c947fe0 = lVar5;
    }
    FUN_140045924(DAT_14c947fe0,local_48,puVar6,1);
    FUN_1400021e4(local_48,&local_40);
    puVar3 = local_40;
    if (local_38 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    lVar5 = 0x11;
    lVar9 = 0;
LAB_14415edf4:
    uVar1 = *(ushort *)((longlong)puVar3 + lVar9);
    uVar2 = *(ushort *)((longlong)L"StandIn_Cinematic" + lVar9);
    if (uVar1 == uVar2) {
      iVar7 = 0;
      if ((uVar1 == 0) || (iVar7 = 0, lVar5 == 1)) goto LAB_14415ee43;
LAB_14415ee10:
      lVar5 = lVar5 + -1;
      lVar9 = lVar9 + 2;
      goto LAB_14415edf4;
    }
    if ((uVar2 | uVar1) < 0x80) {
      if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
        iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
        goto LAB_14415ee43;
      }
      if (lVar5 == 1) {
        iVar7 = 0;
        goto LAB_14415ee43;
      }
      goto LAB_14415ee10;
    }
    iVar7 = (uint)uVar1 - (uint)uVar2;
LAB_14415ee43:
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (iVar7 != 0) {
      puVar6 = *(undefined4 **)(*(longlong *)(param_1 + 0x890) + 8);
      puVar8 = &DAT_14c9485f0;
      if (puVar6 != (undefined4 *)0x0) {
        puVar8 = puVar6;
      }
      if (DAT_14c947fe0 == 0) {
        lVar5 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar5);
        DAT_14c947fe0 = lVar5;
      }
      FUN_140045924(DAT_14c947fe0,local_48,puVar8,1);
      FUN_1400021e4(local_48);
      puVar3 = &DAT_149dfb77a;
      if (local_38 != 0) {
        puVar3 = local_40;
      }
      lVar5 = 0x12;
      lVar9 = 0;
LAB_14415eeb6:
      uVar1 = *(ushort *)((longlong)puVar3 + lVar9);
      uVar2 = *(ushort *)((longlong)L"StandIn_NonGunUser" + lVar9);
      if (uVar1 == uVar2) {
        iVar7 = 0;
        if ((uVar1 == 0) || (lVar5 == 1)) goto LAB_14415ef02;
LAB_14415eed2:
        lVar5 = lVar5 + -1;
        lVar9 = lVar9 + 2;
        goto LAB_14415eeb6;
      }
      if ((uVar2 | uVar1) < 0x80) {
        if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
          iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
          goto LAB_14415ef02;
        }
        if (lVar5 == 1) {
          iVar7 = 0;
          goto LAB_14415ef02;
        }
        goto LAB_14415eed2;
      }
      iVar7 = (uint)uVar1 - (uint)uVar2;
LAB_14415ef02:
      if (local_40 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (iVar7 != 0) goto LAB_14415ef10;
    }
    uVar4 = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14415efd2 FUN_14415efd2 body=143 status=ok
// SIG undefined FUN_14415efd2(void)

void FUN_14415efd2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           (**(code **)(*(longlong *)(param_1 + 0x3c0) + 0x58))(param_1 + 0x3c0,&DAT_14cb998a8);
  if (plVar1 == (longlong *)0x0) {
    FUN_1488adb70(param_1,param_2,param_3,param_4);
    return;
  }
  (**(code **)(*plVar1 + 0xa18))(plVar1,0);
  FUN_1488adb70(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00014415f05e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xa18))(plVar1,1);
  return;
}



// FUNCTION 14415f062 FUN_14415f062 body=2079 status=ok
// SIG undefined FUN_14415f062(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14415f062(undefined1 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  bool bVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined1 auStack_5b8 [32];
  code *local_598;
  longlong *local_590;
  undefined1 local_588 [512];
  undefined1 *local_388;
  ulonglong local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x55] = 0;
  lVar12 = *(longlong *)(param_1 + 0x48);
  cVar6 = FUN_140337e44(lVar12 + 0x38,*(longlong *)(param_1 + 0x40) + 0x240,lVar12 + 0x50);
  param_1[0x54] = *(char *)(lVar12 + 0x51) != cVar6;
  lVar12 = *(longlong *)(param_1 + 0x48);
  lVar11 = *(longlong *)(param_1 + 0x40) + 0x240;
  FUN_140309ec4(lVar12 + 0x60,&local_378,lVar11);
  *(ulonglong *)(param_1 + 0x80) = CONCAT44(uStack_364,local_368);
  *(undefined4 *)(param_1 + 0x70) = (undefined4)local_378;
  *(undefined4 *)(param_1 + 0x74) = local_378._4_4_;
  *(undefined4 *)(param_1 + 0x78) = (undefined4)uStack_370;
  *(undefined4 *)(param_1 + 0x7c) = uStack_370._4_4_;
  uVar29 = FUN_140309e34(lVar12 + 0xf8,lVar11,lVar12 + 0x110);
  *(undefined4 *)(param_1 + 0x88) = uVar29;
  uVar29 = FUN_140309e34(lVar12 + 0x118,lVar11,lVar12 + 0x130);
  *(undefined4 *)(param_1 + 0x8c) = uVar29;
  uVar31 = 0;
  uVar29 = 0;
  if (*(char *)(lVar12 + 0x158) == '\x01') {
    uVar29 = FUN_140309e34(lVar12 + 0x138,lVar11,lVar12 + 0x150);
  }
  *(undefined4 *)(param_1 + 0x90) = uVar29;
  if (*(char *)(lVar12 + 0x180) == '\x01') {
    uVar31 = FUN_140309e34(lVar12 + 0x160,lVar11,lVar12 + 0x178);
  }
  *(undefined4 *)(param_1 + 0x94) = uVar31;
  if (*(char *)(lVar12 + 0x1a8) == '\x01') {
    FUN_140c3bf40(lVar12 + 0x188,&local_378,lVar11,lVar12 + 0x1a0);
  }
  else {
    local_378 = (undefined1 *)0x0;
  }
  *(undefined1 **)(param_1 + 0x98) = local_378;
  *(undefined4 *)(param_1 + 0x58) = 0x19;
  cVar6 = FUN_140337e44(lVar12 + 0x1b0,lVar11,lVar12 + 0x1c8);
  if (*(char *)(lVar12 + 0x1c9) != cVar6) {
    param_1[0x58] = param_1[0x58] | 0x20;
    cVar6 = FUN_140337e44(lVar12 + 0x1d0,lVar11,lVar12 + 0x1e8);
    if (*(char *)(lVar12 + 0x1e9) != cVar6) {
      param_1[0x58] = param_1[0x58] | 0x40;
    }
  }
  cVar6 = FUN_140337e44(lVar12 + 0x1f0,lVar11,lVar12 + 0x208);
  if (*(char *)(lVar12 + 0x209) != cVar6) {
    param_1[0x58] = param_1[0x58] | 0x80;
  }
  FUN_140309e34(lVar12 + 0xf8,lVar11,lVar12 + 0x110);
  local_388 = (undefined1 *)0x0;
  local_380 = 0x2000000000;
  uVar20 = *(uint *)(param_1 + 0x68);
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar20);
  }
  if (0x20 < uVar20) {
    FUN_148d47290(local_588);
  }
  plVar8 = &local_378;
  plVar1 = (longlong *)(param_1 + 0x60);
  local_598 = FUN_144165126;
  local_590 = plVar8;
  local_378 = param_1;
  uStack_370 = local_588;
  uVar7 = FUN_1405f939e(param_1);
  FUN_141060490(uVar7);
  iVar17 = (int)local_380;
  uVar25 = (ulonglong)(int)local_380;
  if (1 < (longlong)uVar25) {
    puVar13 = local_388;
    if (local_388 == (undefined1 *)0x0) {
      puVar13 = local_588;
    }
    memset(&local_368,0,0x2f0);
    uStack_370 = puVar13 + uVar25 * 0x10 + -0x10;
    local_378 = puVar13;
    fVar30 = logf((float)iVar17);
    local_368 = (int)(longlong)(fVar30 + fVar30);
    do {
      puVar10 = (undefined8 *)*plVar8;
      puVar14 = (undefined8 *)plVar8[1];
      iVar17 = (int)plVar8[2];
      iVar21 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar10) >> 4);
      uVar20 = iVar21 + 1;
      puVar15 = puVar14;
      puVar26 = puVar10;
      if (iVar17 != 0) {
LAB_14415f373:
        if (8 < (int)uVar20) {
          uVar7 = puVar10[(ulonglong)(uVar20 >> 1) * 2];
          uVar3 = (puVar10 + (ulonglong)(uVar20 >> 1) * 2)[1];
          uVar4 = puVar10[1];
          puVar10[(ulonglong)(uVar20 >> 1) * 2] = *puVar10;
          (puVar10 + (ulonglong)(uVar20 >> 1) * 2)[1] = uVar4;
          *puVar10 = uVar7;
          puVar10[1] = uVar3;
          puVar22 = puVar15 + 2;
          puVar9 = puVar10;
          do {
            puVar5 = puVar9 + 2;
            puVar16 = puVar9 + 2;
            do {
              puVar27 = puVar16;
              puVar9 = puVar5;
              if (puVar15 < puVar9) break;
              puVar5 = puVar9 + 2;
              puVar16 = puVar27 + 2;
            } while (*(float *)(puVar9 + 1) < *(float *)(puVar10 + 1) ||
                     *(float *)(puVar9 + 1) == *(float *)(puVar10 + 1));
            puVar5 = puVar22 + -4;
            do {
              puVar16 = puVar22;
              puVar23 = puVar5;
              puVar22 = puVar16 + -2;
              if (puVar22 <= puVar10) break;
              puVar5 = puVar23 + -2;
            } while (*(float *)(puVar10 + 1) < *(float *)(puVar16 + -1) ||
                     *(float *)(puVar10 + 1) == *(float *)(puVar16 + -1));
            if (puVar22 < puVar9) goto LAB_14415f422;
            uVar7 = *puVar9;
            uVar3 = puVar9[1];
            uVar4 = puVar16[-1];
            *puVar9 = *puVar22;
            puVar9[1] = uVar4;
            *puVar22 = uVar7;
            puVar16[-1] = uVar3;
          } while( true );
        }
        for (; puVar26 = puVar10, puVar14 = puVar10, puVar10 < puVar15; puVar15 = puVar15 + -2) {
          while (puVar22 = puVar26, puVar14 = puVar14 + 2, puVar14 <= puVar15) {
            puVar26 = puVar14;
            if (*(float *)(puVar14 + 1) < *(float *)(puVar22 + 1) ||
                *(float *)(puVar14 + 1) == *(float *)(puVar22 + 1)) {
              puVar26 = puVar22;
            }
          }
          local_78 = *puVar22;
          uStack_70 = puVar22[1];
          uVar3 = local_78;
          uVar4 = uStack_70;
          uVar7 = puVar15[1];
          *puVar22 = *puVar15;
          puVar22[1] = uVar7;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          *(undefined4 *)puVar15 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar15 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_70._4_4_;
          local_78 = uVar3;
          uStack_70 = uVar4;
        }
        goto LAB_14415f6f9;
      }
LAB_14415f4ca:
      if (uVar20 != 0) {
        iVar17 = (iVar21 - (iVar21 + -1 >> 0x1f)) + -1 >> 1;
        iVar21 = iVar17;
joined_r0x00014415f4eb:
        do {
          iVar19 = iVar17 * 2 + 1;
          if (iVar19 < (int)uVar20) {
            iVar18 = iVar17 * 2 + 2;
            if ((iVar18 < (int)uVar20) &&
               (*(float *)(puVar10 + (longlong)iVar19 * 2 + 1) <
                *(float *)(puVar10 + (longlong)iVar18 * 2 + 1) ||
                *(float *)(puVar10 + (longlong)iVar19 * 2 + 1) ==
                *(float *)(puVar10 + (longlong)iVar18 * 2 + 1))) {
              iVar19 = iVar18;
            }
            if (*(float *)(puVar10 + (longlong)iVar17 * 2 + 1) <=
                *(float *)(puVar10 + (longlong)iVar19 * 2 + 1) &&
                *(float *)(puVar10 + (longlong)iVar19 * 2 + 1) !=
                *(float *)(puVar10 + (longlong)iVar17 * 2 + 1)) {
              puVar15 = puVar10 + (longlong)iVar17 * 2;
              puVar14 = puVar10 + (longlong)iVar19 * 2;
              local_78 = *puVar15;
              uStack_70 = puVar15[1];
              uVar3 = local_78;
              uVar4 = uStack_70;
              uVar7 = puVar14[1];
              *puVar15 = *puVar14;
              puVar15[1] = uVar7;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              *(undefined4 *)puVar14 = (undefined4)local_78;
              *(undefined4 *)((longlong)puVar14 + 4) = local_78._4_4_;
              *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_70._4_4_;
              iVar17 = iVar19;
              local_78 = uVar3;
              uStack_70 = uVar4;
              goto joined_r0x00014415f4eb;
            }
          }
          bVar28 = iVar21 != 0;
          iVar17 = iVar21 + -1;
          iVar21 = iVar17;
        } while (bVar28);
        if (1 < (int)uVar20) {
          uVar25 = (ulonglong)uVar20 - 1;
          local_78 = *puVar10;
          uStack_70 = puVar10[1];
          uVar3 = local_78;
          uVar4 = uStack_70;
          uVar7 = (puVar10 + uVar25 * 2)[1];
          *puVar10 = puVar10[uVar25 * 2];
          puVar10[1] = uVar7;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          puVar15 = puVar10 + uVar25 * 2;
          *(undefined4 *)puVar15 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar15 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_70._4_4_;
          local_78 = uVar3;
          uStack_70 = uVar4;
          if (uVar20 != 2) {
            do {
              iVar17 = 0;
              iVar19 = 1;
              iVar21 = 0;
              do {
                iVar17 = iVar17 + 2;
                iVar18 = iVar19;
                if (((longlong)iVar17 < (longlong)uVar25) &&
                   (*(float *)(puVar10 + (longlong)iVar19 * 2 + 1) <
                    *(float *)(puVar10 + (longlong)iVar17 * 2 + 1) ||
                    *(float *)(puVar10 + (longlong)iVar19 * 2 + 1) ==
                    *(float *)(puVar10 + (longlong)iVar17 * 2 + 1))) {
                  iVar18 = iVar17;
                }
                if (*(float *)(puVar10 + (longlong)iVar18 * 2 + 1) <
                    *(float *)(puVar10 + (longlong)iVar21 * 2 + 1) ||
                    *(float *)(puVar10 + (longlong)iVar18 * 2 + 1) ==
                    *(float *)(puVar10 + (longlong)iVar21 * 2 + 1)) break;
                puVar15 = puVar10 + (longlong)iVar21 * 2;
                puVar14 = puVar10 + (longlong)iVar18 * 2;
                uVar7 = *puVar15;
                uVar3 = puVar15[1];
                uVar4 = puVar14[1];
                *puVar15 = *puVar14;
                puVar15[1] = uVar4;
                *puVar14 = uVar7;
                puVar14[1] = uVar3;
                iVar17 = iVar18 * 2;
                iVar19 = iVar18 * 2 + 1;
                iVar21 = iVar18;
              } while ((longlong)iVar19 < (longlong)uVar25);
              uVar2 = uVar25 - 1;
              local_78 = *puVar10;
              uStack_70 = puVar10[1];
              uVar3 = local_78;
              uVar4 = uStack_70;
              uVar7 = (puVar10 + uVar2 * 2)[1];
              *puVar10 = puVar10[uVar2 * 2];
              puVar10[1] = uVar7;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              puVar15 = puVar10 + uVar2 * 2;
              *(undefined4 *)puVar15 = (undefined4)local_78;
              *(undefined4 *)((longlong)puVar15 + 4) = local_78._4_4_;
              *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_70._4_4_;
              bVar28 = 2 < uVar25;
              uVar25 = uVar2;
              local_78 = uVar3;
              uStack_70 = uVar4;
            } while (bVar28);
          }
        }
      }
LAB_14415f6f9:
      plVar8 = plVar8 + -3;
    } while (&local_378 <= plVar8);
    uVar25 = local_380 & 0xffffffff;
  }
  FUN_141418944(plVar1,uVar25 & 0xffffffff);
  puVar13 = local_588;
  if (local_388 != (undefined1 *)0x0) {
    puVar13 = local_388;
  }
  lVar12 = (longlong)(int)local_380;
  if (lVar12 != 0) {
    lVar11 = 0;
    do {
      uVar20 = 0;
      iVar17 = 0;
      if (*(longlong *)(puVar13 + lVar11) != 0) {
        uVar20 = *(uint *)(*(longlong *)(puVar13 + lVar11) + 0xc);
        if ((int)uVar20 < DAT_14c9647dc) {
          lVar24 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
        }
        else {
          lVar24 = 0;
        }
        iVar17 = *(int *)(lVar24 + 0x10);
        if (*(int *)(lVar24 + 0x10) == 0) {
          LOCK();
          iVar21 = DAT_14c964868 + 1;
          UNLOCK();
          iVar17 = DAT_14c964868 + 1;
          bVar28 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar21;
          if (bVar28) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar17);
          }
          LOCK();
          iVar21 = *(int *)(lVar24 + 0x10);
          bVar28 = iVar21 == 0;
          if (bVar28) {
            *(int *)(lVar24 + 0x10) = iVar17;
            iVar21 = 0;
          }
          UNLOCK();
          if (!bVar28) {
            iVar17 = iVar21;
          }
        }
      }
      iVar21 = *(int *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x68) = iVar21 + 1U;
      if (*(uint *)(param_1 + 0x6c) < iVar21 + 1U) {
        FUN_140e16a7e(plVar1,iVar21);
      }
      *(ulonglong *)(*plVar1 + (longlong)iVar21 * 8) = CONCAT44(iVar17,uVar20);
      lVar11 = lVar11 + 0x10;
    } while (lVar12 * 0x10 != lVar11);
  }
  if (local_388 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_5b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14415f422:
  local_78 = *puVar10;
  uStack_70 = puVar10[1];
  uVar3 = local_78;
  uVar4 = uStack_70;
  uVar7 = puVar16[-1];
  *puVar10 = *puVar22;
  puVar10[1] = uVar7;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  *(undefined4 *)puVar22 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar16 + -0xc) = local_78._4_4_;
  *(undefined4 *)(puVar16 + -1) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar16 + -4) = uStack_70._4_4_;
  iVar17 = iVar17 + -1;
  puVar16 = puVar16 + -4;
  local_78 = uVar3;
  uStack_70 = uVar4;
  if ((longlong)puVar23 - (longlong)puVar26 < (longlong)puVar14 - (longlong)puVar27) {
    if (puVar9 < puVar15) {
      *plVar8 = (longlong)puVar9;
      plVar8[1] = (longlong)puVar15;
      *(int *)(plVar8 + 2) = iVar17;
      plVar8 = plVar8 + 3;
    }
    puVar14 = puVar23;
    puVar27 = puVar10;
    if (puVar22 <= puVar10 + 2) goto LAB_14415f6f9;
  }
  else {
    if (puVar10 + 2 < puVar22) {
      *plVar8 = (longlong)puVar10;
      plVar8[1] = (longlong)puVar16;
      *(int *)(plVar8 + 2) = iVar17;
      plVar8 = plVar8 + 3;
    }
    puVar10 = puVar9;
    puVar16 = puVar15;
    puVar14 = puVar15;
    if (puVar15 <= puVar9) goto LAB_14415f6f9;
  }
  iVar21 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar27) >> 4);
  uVar20 = iVar21 + 1;
  puVar15 = puVar16;
  puVar26 = puVar27;
  if (iVar17 == 0) goto LAB_14415f4ca;
  goto LAB_14415f373;
}



// FUNCTION 14415f884 FUN_14415f884 body=2847 status=ok
// SIG undefined FUN_14415f884(void)

void FUN_14415f884(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  uint *puVar19;
  uint *puVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float extraout_XMM0_Da;
  ulonglong uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  undefined1 auStack_618 [32];
  double *local_5f8;
  int local_5f0;
  float local_5ec;
  ulonglong local_5e8;
  ulonglong local_5e0;
  longlong local_5d8;
  longlong local_5d0;
  double local_5c8;
  longlong local_5c0;
  double local_5b8 [3];
  double local_5a0;
  double local_598;
  double local_590;
  double local_588;
  double local_580;
  double local_578;
  double local_570;
  double dStack_568;
  double local_560;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  double local_548;
  longlong local_540;
  uint local_538;
  uint local_530;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  double local_4e8;
  ushort uStack_4e0;
  undefined6 uStack_4de;
  byte local_4d8;
  undefined7 uStack_4d7;
  float local_484;
  char local_438;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined1 local_410 [512];
  undefined1 *local_210;
  undefined8 local_208;
  undefined1 local_200 [256];
  undefined1 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_618;
  uVar10 = *(uint *)(param_1 + 0x68);
  if ((longlong)(int)uVar10 < 1) {
    lVar17 = param_2[1];
    if ((longlong)(int)lVar17 != 0) {
      lVar21 = *param_2;
      lVar14 = 0;
      do {
        uVar10 = *(uint *)(lVar21 + 0x34 + lVar14);
        if ((uVar10 & 1) == 0) {
          *(uint *)(lVar21 + 0x34 + lVar14) = uVar10 | 1;
        }
        lVar14 = lVar14 + 0x38;
      } while ((longlong)(int)lVar17 * 0x38 - lVar14 != 0);
    }
    goto LAB_14415fa8e;
  }
  local_100 = (undefined1 *)0x0;
  local_f8 = 0x2000000000;
  if (uVar10 < 0x21) {
    puVar19 = *(uint **)(param_1 + 0x60);
    puVar20 = puVar19 + (longlong)(int)uVar10 * 2;
LAB_14415f949:
    do {
      uVar24 = local_f8;
      if (((((puVar19[1] != 0) && (uVar10 = *puVar19, -1 < (int)uVar10)) &&
           ((int)uVar10 < DAT_14c9647dc)) &&
          ((plVar13 = (longlong *)
                      ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
           plVar13 != (longlong *)0x0 && (*(uint *)(plVar13 + 2) == puVar19[1])))) &&
         (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 && (lVar17 = *plVar13, lVar17 != 0)))) {
        lVar21 = (longlong)(int)local_f8;
        uVar10 = (int)local_f8 + 1;
        local_f8 = CONCAT44(local_f8._4_4_,uVar10);
        if (local_f8._4_4_ < uVar10) {
          FUN_148d474cc(local_200,uVar24 & 0xffffffff);
        }
        puVar11 = local_100;
        if (local_100 == (undefined1 *)0x0) {
          puVar11 = local_200;
        }
        *(longlong *)(puVar11 + lVar21 * 8) = lVar17;
      }
      puVar19 = puVar19 + 2;
    } while (puVar19 != puVar20);
  }
  else {
    FUN_148d473ea(local_200);
    if ((longlong)*(int *)(param_1 + 0x68) != 0) {
      puVar19 = *(uint **)(param_1 + 0x60);
      puVar20 = puVar19 + (longlong)*(int *)(param_1 + 0x68) * 2;
      goto LAB_14415f949;
    }
  }
  if ((int)local_f8 < 1) {
    lVar17 = param_2[1];
    if ((longlong)(int)lVar17 != 0) {
      lVar21 = *param_2;
      lVar14 = 0;
      do {
        uVar10 = *(uint *)(lVar21 + 0x34 + lVar14);
        if ((uVar10 & 1) == 0) {
          *(uint *)(lVar21 + 0x34 + lVar14) = uVar10 | 1;
        }
        lVar14 = lVar14 + 0x38;
      } while ((longlong)(int)lVar17 * 0x38 - lVar14 != 0);
    }
  }
  else {
    local_5d0 = *(longlong *)(param_1 + 0x40) + 0x4e8;
    local_5c0 = *(longlong *)(param_1 + 0x48);
    local_5e8 = CONCAT71((int7)((ulonglong)local_5c0 >> 8),*(undefined1 *)(local_5c0 + 0x58));
    local_210 = (undefined1 *)0x0;
    local_208 = 0x2000000000;
    FUN_1405b99ae();
    FUN_147f59cdc(param_1,&local_540,param_2);
    if (local_530 < local_538) {
      local_5f0 = (int)local_5e8 + -1;
      local_5d8 = param_1 + 0x98;
      do {
        puVar1 = (undefined4 *)(local_540 + (longlong)(int)local_530 * 0x38);
        if (*(char *)(local_540 + 0x20 + (longlong)(int)local_530 * 0x38) == '\x04') {
          local_548 = *(double *)(puVar1 + 4);
          local_558 = *puVar1;
          uStack_554 = puVar1[1];
          uStack_550 = puVar1[2];
          uStack_54c = puVar1[3];
LAB_14415fc81:
          if ((int)local_f8 < 1) {
LAB_144160304:
            if (2 < (byte)local_5f0) goto LAB_14416031c;
            uVar15 = 0;
          }
          else {
            local_5ec = *(float *)(param_1 + 0x94) + *(float *)(param_1 + 0x94);
            lVar17 = 0;
            local_5e0 = 0;
            do {
              puVar11 = local_100;
              if (local_100 == (undefined1 *)0x0) {
                puVar11 = local_200;
              }
              plVar13 = *(longlong **)(puVar11 + lVar17 * 8);
              local_518._0_5_ = (uint5)(uint)local_518;
              local_5f8 = (double *)&local_518;
              (**(code **)(*plVar13 + 0xa80))
                        (plVar13,&local_4f8,&local_558,*(undefined4 *)(param_1 + 0x58));
              iVar18 = 9;
              if (local_438 == '\0') {
                cVar9 = (**(code **)(*plVar13 + 0xa40))(plVar13);
                fVar22 = (float)FUN_1405b9a48(plVar13);
                local_560 = (double)(fVar22 * -0.5) + (double)CONCAT71(uStack_4d7,local_4d8);
                dStack_568 = (double)CONCAT62(uStack_4de,uStack_4e0);
                local_570 = local_4e8;
                lVar21 = FUN_140b94ea6(plVar13);
                iVar18 = 9;
                if (lVar21 != 0) {
                  if ((char)uStack_4f0 == '\x01') {
                    uVar24 = (ulonglong)local_4f8 >> 0x20;
                  }
                  else {
                    uVar24 = FUN_1408b98e8(plVar13,&local_570);
                  }
                  FUN_140703b8c(lVar21,&local_588,uVar24,1);
                  dVar6 = local_560 - local_578;
                  dVar7 = dStack_568 - local_580;
                  dVar26 = local_570 - local_588;
                  FUN_1407541d8(lVar21,&local_5a0,uVar24,1);
                  dVar27 = local_5a0 * local_5a0 + local_598 * local_598;
                  if ((dVar27 != 1.0) || (NAN(dVar27))) {
                    dVar25 = DAT_14c8464e8;
                    dVar28 = DAT_14c8464f0;
                    dVar5 = DAT_14c8464e0;
                    if (9.99999993922529e-09 <= dVar27) {
                      dVar25 = local_598 * (1.0 / SQRT(dVar27));
                      dVar5 = local_5a0 * (1.0 / SQRT(dVar27));
                      dVar28 = 0.0;
                    }
                  }
                  else {
                    dVar25 = local_598;
                    dVar28 = (double)(-(ulonglong)(local_590 == 0.0) & (ulonglong)local_590);
                    dVar5 = local_5a0;
                  }
                  fVar22 = (float)((dVar5 * DAT_14c8462c8 - DAT_14c8462c0 * dVar25) * dVar6 +
                                  (DAT_14c8462d0 * dVar25 - DAT_14c8462c8 * dVar28) * dVar26 +
                                  (DAT_14c8462c0 * dVar28 - DAT_14c8462d0 * dVar5) * dVar7);
                  if (cVar9 == '\x01') {
joined_r0x00014415ffe9:
                    if (fVar22 <= 0.0) {
LAB_14415ffef:
                      dVar6 = local_560;
                      fVar22 = (float)(local_548 - local_560);
                      if ((fVar22 < *(float *)(param_1 + 0x8c) ||
                           fVar22 == *(float *)(param_1 + 0x8c)) &&
                         ((*(char *)(local_5c0 + 0x158) != '\x01' ||
                          (-fVar22 < *(float *)(param_1 + 0x90) ||
                           -fVar22 == *(float *)(param_1 + 0x90))))) {
                        local_518 = local_570;
                        uStack_510 = dStack_568;
                        if ((*(char *)(local_5c0 + 0x1a8) != '\0') ||
                           (lVar21 = local_5c0, *(char *)(local_5c0 + 0x180) == '\x01')) {
                          fVar22 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x9c);
                          if (local_5ec <= fVar22) {
                            fVar22 = local_5ec;
                          }
                          iVar18 = 9;
                          if (local_484 < fVar22) goto LAB_144160234;
                          fVar22 = *(float *)(param_1 + 0x94);
                          fVar29 = local_484 - fVar22;
                          lVar21 = FUN_14025bbd2(local_5d8,local_5d0);
                          fVar23 = extraout_XMM0_Da;
                          if (fVar29 <= extraout_XMM0_Da) {
                            fVar23 = fVar29;
                          }
                          if (fVar23 <= fVar22) {
                            fVar23 = fVar22;
                          }
                          dVar6 = dVar6 - (double)fVar23;
                        }
                        local_428 = (uint)local_518;
                        uStack_424 = local_518._4_4_;
                        uStack_420 = (undefined4)uStack_510;
                        uStack_41c = uStack_510._4_4_;
                        iVar18 = 7;
                        local_5e0 = CONCAT71((int7)((ulonglong)lVar21 >> 8),1);
                        local_5c8 = dVar6;
                      }
                    }
                  }
                  else if (cVar9 == '\0') {
                    fVar23 = (float)(dVar28 * dVar6 + dVar5 * dVar26 + dVar7 * dVar25);
                    if (((0.0 < (float)uVar24) || (0.0 <= fVar23)) &&
                       ((fVar23 <= 0.0 || ((float)uVar24 < (float)(*(int *)(lVar21 + 0x628) + -1))))
                       ) {
                      local_518 = 1.0;
                      uStack_510 = 1.0;
                      local_508 = 0x3ff0000000000000;
                      FUN_140703ce0(lVar21 + 0x650,local_5b8,uVar24,&local_518);
                      fVar23 = ABS(fVar22) - (float)local_5b8[0];
                      fVar22 = 0.0;
                      if (0.0 <= fVar23) {
                        fVar22 = fVar23;
                      }
                      goto joined_r0x00014415ffe9;
                    }
                  }
                  else {
                    puVar11 = local_210;
                    if (local_210 == (undefined1 *)0x0) {
                      puVar11 = local_410;
                    }
                    pdVar2 = (double *)(puVar11 + lVar17 * 0x10);
                    if ((longlong)*(int *)(puVar11 + lVar17 * 0x10 + 8) == 0) {
                      (**(code **)(*plVar13 + 0xa28))(plVar13,&local_518,1);
                      if (pdVar2 != (double *)&local_518) {
                        if (*pdVar2 != 0.0) {
                          FUN_1400020a8();
                        }
                        *pdVar2 = local_518;
                        local_518 = 0.0;
                        *(undefined4 *)(pdVar2 + 1) = (undefined4)uStack_510;
                        *(undefined4 *)((longlong)pdVar2 + 0xc) = uStack_510._4_4_;
                        uStack_510 = 0.0;
                      }
                      if (local_518 != 0.0) {
                        FUN_1400020a8();
                      }
                      if ((longlong)*(int *)(pdVar2 + 1) == 0) goto LAB_144160234;
                      plVar16 = (longlong *)*pdVar2;
                      plVar13 = plVar16 + *(int *)(pdVar2 + 1);
                    }
                    else {
                      plVar16 = (longlong *)*pdVar2;
                      plVar13 = plVar16 + *(int *)(puVar11 + lVar17 * 0x10 + 8);
                    }
                    do {
                      plVar3 = (longlong *)*plVar16;
                      if ((((plVar3 != (longlong *)0x0) &&
                           ((*(byte *)((longlong)plVar3 + 0x9c) & 1) != 0)) &&
                          (cVar9 = (**(code **)(*plVar3 + 0x7c0))
                                             (plVar3,&local_558,local_5b8,&local_518), cVar9 != '\0'
                          )) && (dVar6 = (double)CONCAT44(uStack_554,local_558) - local_518,
                                dVar26 = (double)CONCAT44(uStack_54c,uStack_550) - uStack_510,
                                (float)(dVar26 * dVar26 + dVar6 * dVar6) <= 1.0))
                      goto LAB_14415ffef;
                      plVar16 = plVar16 + 1;
                    } while (plVar16 != plVar13);
                  }
                }
              }
LAB_144160234:
              if (iVar18 != 9) break;
              lVar17 = lVar17 + 1;
            } while (lVar17 < (int)local_f8);
            if ((local_5e0 & 1) == 0) goto LAB_144160304;
            if ((local_5e8 & 0xfd) == 0) {
              uStack_4e0 = 0x18;
              local_4f8 = (undefined8 *)CONCAT44(uStack_424,local_428);
              uStack_4f0 = CONCAT44(uStack_41c,uStack_420);
              local_4e8 = local_5c8;
              local_4d8 = 4;
              FUN_14023b258(&local_540,&local_4f8);
              pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_4d8 * 0x120));
              if (pcVar4 != (code *)0x0) {
                puVar12 = &local_4f8;
                if (0x18 < uStack_4e0) {
                  puVar12 = local_4f8;
                }
                (*pcVar4)(puVar12);
              }
              if (0x18 < uStack_4e0) {
                FUN_1400020a8(local_4f8);
              }
            }
            uVar15 = 1;
          }
          FUN_1402d7d58(&local_540,uVar15);
        }
        else {
          FUN_1400b56fe(&local_4f8,puVar1,4);
          bVar8 = local_4d8;
          if (local_4d8 != 0) {
            local_548 = local_4e8;
            local_558 = (undefined4)local_4f8;
            uStack_554 = local_4f8._4_4_;
            uStack_550 = (undefined4)uStack_4f0;
            uStack_54c = uStack_4f0._4_4_;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_4d8 * 0x120));
          if (pcVar4 != (code *)0x0) {
            puVar12 = &local_4f8;
            if (0x18 < uStack_4e0) {
              puVar12 = local_4f8;
            }
            (*pcVar4)(puVar12);
          }
          if (0x18 < uStack_4e0) {
            FUN_1400020a8(local_4f8);
          }
          if (bVar8 != 0) goto LAB_14415fc81;
LAB_14416031c:
          puVar20 = (uint *)(local_540 + 0x34 + (longlong)(int)local_530 * 0x38);
          *puVar20 = *puVar20 | 1;
        }
        local_530 = local_530 + 1;
        if (local_530 < local_538) {
          while ((*(byte *)(local_540 + 0x34 + (longlong)(int)local_530 * 0x38) & 1) != 0) {
            local_530 = local_530 + 1;
            if (local_538 == local_530) goto LAB_144160392;
          }
        }
      } while (local_530 < local_538);
    }
LAB_144160392:
    FUN_1405b9944(local_410);
  }
  if (local_100 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_14415fa8e:
  if ((local_f0 ^ (ulonglong)auStack_618) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441603fa FUN_1441603fa body=41 status=ok
// SIG undefined FUN_1441603fa(void)

void FUN_1441603fa(void)

{
  DAT_14cbcb138 = 0;
  if (DAT_14cbcb130 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6938e();
  return;
}



// FUNCTION 14416042e FUN_14416042e body=747 status=ok
// SIG undefined FUN_14416042e(void)

longlong * FUN_14416042e(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint local_6c;
  uint *local_68;
  ulonglong local_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  lVar6 = (**(code **)(*param_1 + 0x20))();
  uVar5 = *(uint *)(lVar6 + 0x50);
  if (uVar5 == 0) {
    uVar14 = 1;
    uVar12 = 0;
    uVar8 = 0;
    iVar13 = 0;
  }
  else {
    puVar7 = *(uint **)(lVar6 + 0x48);
    if (*(uint **)(lVar6 + 0x48) == (uint *)0x0) {
      puVar7 = (uint *)(lVar6 + 0x38);
    }
    uVar8 = *puVar7;
    if (uVar8 == 0) {
      iVar13 = uVar5 + 0x1e;
      if (-1 < (int)(uVar5 - 1)) {
        iVar13 = uVar5 - 1;
      }
      uVar12 = 0;
      uVar14 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar14 = uVar12;
      }
      iVar13 = 0;
      do {
        if (uVar14 == uVar12) goto LAB_1441606b1;
        iVar13 = iVar13 + 0x20;
        uVar8 = puVar7[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar12 = 0;
      iVar13 = 0;
    }
    uVar14 = (ulonglong)(-uVar8 & uVar8);
    uVar1 = uVar14 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar8 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if ((int)uVar5 <= (int)uVar8) {
      uVar8 = uVar5;
    }
  }
  if (uVar8 != uVar5) {
    uVar17 = 0xffffffff;
    bVar4 = DAT_14c950c29;
    local_78 = param_2;
    local_68 = (uint *)(lVar6 + 0x38);
    local_60 = (ulonglong)uVar5;
    do {
      lVar16 = *(longlong *)(lVar6 + 0x18);
      local_70 = *(undefined4 *)(*(longlong *)(lVar6 + 0x28) + (longlong)(int)uVar8 * 0xe0);
      local_6c = uVar17;
      if (((bVar4 & 1) != 0) && (lVar16 != 0)) {
        FUN_1456cec3c(lVar16);
      }
      uVar1 = uStack_50;
      lVar15 = *(longlong *)(lVar6 + 0x20);
      lVar18 = (longlong)(int)uStack_50;
      uVar5 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
      if (uStack_50._4_4_ < uVar5) {
        FUN_140668194(&local_58,uVar1 & 0xffffffff);
      }
      plVar2 = local_58;
      local_58[lVar18 * 3] = lVar16;
      if ((DAT_14c950c29 == 1) && (lVar16 != 0)) {
        FUN_1456cec3c(lVar16);
      }
      plVar3 = local_58;
      param_2 = local_78;
      bVar4 = DAT_14c950c29;
      plVar2[lVar18 * 3 + 1] = lVar15;
      *(undefined4 *)(plVar2 + lVar18 * 3 + 2) = local_70;
      uVar17 = local_6c & ~(uint)uVar14;
      puVar7 = *(uint **)(lVar6 + 0x48);
      if (*(uint **)(lVar6 + 0x48) == (uint *)0x0) {
        puVar7 = local_68;
      }
      uVar5 = *(uint *)(lVar6 + 0x50);
      iVar11 = (int)uVar12;
      lVar16 = (longlong)iVar11;
      uVar8 = puVar7[lVar16] & uVar17;
      if (uVar8 == 0) {
        iVar9 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar9 = uVar5 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar11) {
          iVar10 = iVar11;
        }
        if (iVar11 < iVar9) {
          lVar15 = 0;
          do {
            uVar8 = puVar7[lVar16 + lVar15 + 1];
            if (uVar8 != 0) {
              uVar12 = (ulonglong)(iVar11 + (int)lVar15 + 1);
              uVar17 = 0xffffffff;
              goto LAB_144160612;
            }
            iVar13 = iVar13 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar10 - lVar16 != lVar15);
          uVar17 = 0xffffffff;
          lVar16 = (longlong)iVar10;
        }
        uVar12 = lVar16 + 1U & 0xffffffff;
        uVar8 = uVar5;
      }
      else {
LAB_144160612:
        uVar14 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar14 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar8 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if ((int)uVar5 <= (int)uVar8) {
          uVar8 = uVar5;
        }
      }
    } while (uVar8 != (uint)local_60);
    if (0 < (int)uStack_50) {
      lVar6 = *local_58;
      *local_78 = lVar6;
      if ((lVar6 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      param_2[1] = plVar3[1];
      *(int *)(param_2 + 2) = (int)plVar3[2];
      goto LAB_1441606c0;
    }
  }
LAB_1441606b1:
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
LAB_1441606c0:
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14416085e FUN_14416085e body=1233 status=ok
// SIG undefined FUN_14416085e(void)

ulonglong FUN_14416085e(longlong param_1,longlong *param_2,longlong param_3,undefined1 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  byte bVar12;
  int iVar13;
  undefined8 *puVar14;
  double dVar15;
  double *pdVar16;
  longlong *plVar17;
  double dVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined8 unaff_RSI;
  ulonglong uVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined4 *puVar26;
  longlong *plVar27;
  longlong lVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_3 != 0) {
    iVar19 = (int)param_1 + -0x1ad8;
    if ((*(char *)(param_1 + 0xbbc) != '\x01') || (*(longlong *)(param_1 + 0xbc0) == 0)) {
      puVar14 = &DAT_14c846480;
      puVar24 = &local_118;
      for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
        *puVar24 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar24 = puVar24 + 1;
      }
      plVar27 = &DAT_14cbcb1e0;
      if ((*param_2 != 0) && (plVar17 = (longlong *)param_2[1], plVar17 != (longlong *)0x0)) {
        if (*(code **)(*plVar17 + 0x20) == (code *)&LAB_144a7e90a) {
          plVar17 = plVar17 + 0x143;
        }
        else {
          plVar17 = (longlong *)(**(code **)(*plVar17 + 0x20))(plVar17);
        }
        if ((int)plVar17[6] != *(int *)((longlong)plVar17 + 0x5c)) {
          uVar20 = *(uint *)(param_2 + 2);
          plVar22 = plVar17 + 0xc;
          if ((longlong *)plVar17[0xd] != (longlong *)0x0) {
            plVar22 = (longlong *)plVar17[0xd];
          }
          iVar13 = *(int *)((longlong)plVar22 + (ulonglong)((int)plVar17[0xe] - 1U & uVar20) * 4);
          if (iVar13 != -1) {
            lVar21 = plVar17[5];
            iVar25 = iVar13;
            do {
              if (*(uint *)(lVar21 + (longlong)iVar25 * 0xe0) == uVar20) goto LAB_144160996;
              iVar25 = *(int *)((longlong)iVar25 * 0xe0 + lVar21 + 0xd0);
            } while (iVar25 != -1);
          }
        }
      }
      goto LAB_1441609bc;
    }
    *param_4 = 3;
    lVar21 = *(longlong *)(*(longlong *)(param_1 + 0xbc0) + 0x1c8);
    if (lVar21 == 0) {
      puVar14 = &DAT_14c8464e0;
      uVar29 = (undefined4)DAT_14c8464f0;
      uVar30 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar29 = (undefined4)*(undefined8 *)(lVar21 + 0x270);
      uVar30 = (undefined4)((ulonglong)*(undefined8 *)(lVar21 + 0x270) >> 0x20);
      puVar14 = (undefined8 *)(lVar21 + 0x260);
    }
    uVar5 = *(undefined4 *)((longlong)puVar14 + 4);
    uVar6 = *(undefined4 *)(puVar14 + 1);
    uVar7 = *(undefined4 *)((longlong)puVar14 + 0xc);
    *(undefined4 *)(param_4 + 8) = *(undefined4 *)puVar14;
    *(undefined4 *)(param_4 + 0xc) = uVar5;
    *(undefined4 *)(param_4 + 0x10) = uVar6;
    *(undefined4 *)(param_4 + 0x14) = uVar7;
    *(ulonglong *)(param_4 + 0x18) = CONCAT44(uVar30,uVar29);
    dVar15 = (double)FUN_1447210f0();
    uVar23 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (dVar15 == 0.0) goto LAB_1441609cc;
    lVar21 = *(longlong *)(param_3 + 0x1c8);
    if (lVar21 == 0) {
      local_a8 = DAT_14c846508;
      local_b8 = (undefined4)DAT_14c8464f8;
      uStack_b4 = DAT_14c8464f8._4_4_;
      uStack_b0 = (undefined4)DAT_14c846500;
      uStack_ac = DAT_14c846500._4_4_;
    }
    else {
      dVar8 = *(double *)(lVar21 + 0x240);
      dVar9 = *(double *)(lVar21 + 0x248);
      dVar10 = *(double *)(lVar21 + 0x250);
      dVar11 = *(double *)(lVar21 + 600);
      pdVar16 = *(double **)(lVar21 + 0x228);
      dVar18 = dVar15;
      local_118 = dVar8;
      uStack_110 = dVar9;
      local_108 = dVar10;
      uStack_100 = dVar11;
      if (pdVar16 == (double *)0x0) {
        iVar19 = 0x40;
        pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
        dVar18 = DAT_14c8463d8;
        *pdVar16 = DAT_14c8463d0;
        pdVar16[1] = dVar18;
        dVar18 = DAT_14c8463e8;
        pdVar16[2] = DAT_14c8463e0;
        pdVar16[3] = dVar18;
        dVar18 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar16[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar16[5] = dVar18;
        dVar18 = DAT_14c846508;
        pdVar16[6] = DAT_14c846508;
        *(double **)(lVar21 + 0x228) = pdVar16;
      }
      auVar1._8_4_ = (int)-(ulonglong)(dVar9 != pdVar16[1]);
      auVar1._0_8_ = -(ulonglong)(dVar8 != *pdVar16);
      auVar1._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar16[1]) >> 0x20);
      iVar13 = movmskpd(SUB84(dVar18,0),auVar1);
      auVar3._8_4_ = (int)-(ulonglong)(dVar11 != pdVar16[3]);
      auVar3._0_8_ = -(ulonglong)(dVar10 != pdVar16[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar11 != pdVar16[3]) >> 0x20);
      uVar20 = movmskpd(iVar19,auVar3);
      if ((uVar20 & 0x3fffffff) != 0 || iVar13 != 0) {
        *(undefined4 *)(pdVar16 + 2) = (undefined4)local_108;
        *(undefined4 *)((longlong)pdVar16 + 0x14) = local_108._4_4_;
        *(undefined4 *)(pdVar16 + 3) = (undefined4)uStack_100;
        *(undefined4 *)((longlong)pdVar16 + 0x1c) = uStack_100._4_4_;
        *(undefined4 *)pdVar16 = (undefined4)local_118;
        *(undefined4 *)((longlong)pdVar16 + 4) = local_118._4_4_;
        *(undefined4 *)(pdVar16 + 1) = (undefined4)uStack_110;
        *(undefined4 *)((longlong)pdVar16 + 0xc) = uStack_110._4_4_;
        FUN_1448052ee(&local_118,&local_98);
        pdVar16[6] = local_88;
        pdVar16[4] = local_98;
        pdVar16[5] = uStack_90;
      }
      local_a8 = pdVar16[6];
      local_b8 = *(undefined4 *)(pdVar16 + 4);
      uStack_b4 = *(undefined4 *)((longlong)pdVar16 + 0x24);
      uStack_b0 = *(undefined4 *)(pdVar16 + 5);
      uStack_ac = *(undefined4 *)((longlong)pdVar16 + 0x2c);
    }
    puVar26 = &local_b8;
LAB_144160b0b:
    FUN_140d7405c(dVar15,param_3,param_4 + 8,puVar26);
    goto LAB_1441609cc;
  }
  goto LAB_1441609ca;
  while (iVar13 = *(int *)(lVar28 + 0xd0), iVar13 != -1) {
LAB_144160996:
    lVar28 = lVar21 + (longlong)iVar13 * 0xe0;
    if (*(uint *)(lVar21 + (longlong)iVar13 * 0xe0) == uVar20) goto LAB_1441609b8;
  }
  lVar28 = 0;
LAB_1441609b8:
  plVar27 = (longlong *)(lVar28 + 0x10);
LAB_1441609bc:
  if ((((*(char *)((longlong)plVar27 + 0xa4) == '\x01') && (plVar27[0x15] != 0)) && (*plVar27 != 0))
     && (plVar27[1] != 0)) {
    lVar21 = plVar27[1];
    if (plVar27[0x17] != 0) {
      lVar21 = plVar27[0x17];
    }
    do {
      bVar12 = FUN_148d41c40(lVar21,plVar27 + 0x17,plVar27[0x15],&local_118);
      lVar21 = *(longlong *)(lVar21 + 0x120);
    } while ((~bVar12 & lVar21 != 0) != 0);
    if (bVar12 != 0) {
      *param_4 = 5;
      *(undefined4 *)(param_4 + 8) = local_f8;
      *(undefined4 *)(param_4 + 0xc) = uStack_f4;
      *(undefined4 *)(param_4 + 0x10) = uStack_f0;
      *(undefined4 *)(param_4 + 0x14) = uStack_ec;
      *(undefined8 *)(param_4 + 0x18) = local_e8;
      dVar15 = (double)FUN_1447210f0();
      uVar23 = CONCAT71((int7)((ulonglong)lVar21 >> 8),1);
      if (dVar15 == 0.0) goto LAB_1441609cc;
      lVar21 = *(longlong *)(param_3 + 0x1c8);
      if (lVar21 == 0) {
        local_128 = DAT_14c846508;
        local_138 = (undefined4)DAT_14c8464f8;
        uStack_134 = DAT_14c8464f8._4_4_;
        uStack_130 = (undefined4)DAT_14c846500;
        uStack_12c = DAT_14c846500._4_4_;
      }
      else {
        dVar8 = *(double *)(lVar21 + 0x240);
        dVar9 = *(double *)(lVar21 + 0x248);
        dVar10 = *(double *)(lVar21 + 0x250);
        dVar11 = *(double *)(lVar21 + 600);
        pdVar16 = *(double **)(lVar21 + 0x228);
        dVar18 = dVar15;
        local_98 = dVar8;
        uStack_90 = dVar9;
        local_88 = dVar10;
        uStack_80 = dVar11;
        if (pdVar16 == (double *)0x0) {
          iVar19 = 0x40;
          pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
          dVar18 = DAT_14c8463d8;
          *pdVar16 = DAT_14c8463d0;
          pdVar16[1] = dVar18;
          dVar18 = DAT_14c8463e8;
          pdVar16[2] = DAT_14c8463e0;
          pdVar16[3] = dVar18;
          dVar18 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
          pdVar16[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
          pdVar16[5] = dVar18;
          dVar18 = DAT_14c846508;
          pdVar16[6] = DAT_14c846508;
          *(double **)(lVar21 + 0x228) = pdVar16;
        }
        auVar2._8_4_ = (int)-(ulonglong)(dVar9 != pdVar16[1]);
        auVar2._0_8_ = -(ulonglong)(dVar8 != *pdVar16);
        auVar2._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar16[1]) >> 0x20);
        iVar13 = movmskpd(SUB84(dVar18,0),auVar2);
        auVar4._8_4_ = (int)-(ulonglong)(dVar11 != pdVar16[3]);
        auVar4._0_8_ = -(ulonglong)(dVar10 != pdVar16[2]);
        auVar4._12_4_ = (int)(-(ulonglong)(dVar11 != pdVar16[3]) >> 0x20);
        uVar20 = movmskpd(iVar19,auVar4);
        if ((uVar20 & 0x3fffffff) != 0 || iVar13 != 0) {
          *(undefined4 *)(pdVar16 + 2) = (undefined4)local_88;
          *(undefined4 *)((longlong)pdVar16 + 0x14) = local_88._4_4_;
          *(undefined4 *)(pdVar16 + 3) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)pdVar16 + 0x1c) = uStack_80._4_4_;
          *(undefined4 *)pdVar16 = (undefined4)local_98;
          *(undefined4 *)((longlong)pdVar16 + 4) = local_98._4_4_;
          *(undefined4 *)(pdVar16 + 1) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)pdVar16 + 0xc) = uStack_90._4_4_;
          FUN_1448052ee(&local_98,&local_78);
          pdVar16[6] = local_68;
          pdVar16[4] = local_78;
          pdVar16[5] = dStack_70;
        }
        local_128 = pdVar16[6];
        local_138 = *(undefined4 *)(pdVar16 + 4);
        uStack_134 = *(undefined4 *)((longlong)pdVar16 + 0x24);
        uStack_130 = *(undefined4 *)(pdVar16 + 5);
        uStack_12c = *(undefined4 *)((longlong)pdVar16 + 0x2c);
      }
      puVar26 = &local_138;
      goto LAB_144160b0b;
    }
  }
LAB_1441609ca:
  uVar23 = 0;
LAB_1441609cc:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23 & 0xffffffff;
}



// FUNCTION 144160d6c FUN_144160d6c body=1163 status=ok
// SIG undefined FUN_144160d6c(void)

void FUN_144160d6c(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 auStack_168 [40];
  longlong local_140;
  longlong *local_138;
  longlong local_130;
  longlong local_128 [2];
  undefined8 local_118 [12];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  longlong local_80;
  uint local_6c;
  undefined2 *local_68;
  int local_60;
  uint local_58;
  uint uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_2 != (longlong *)0x0) {
    uVar4 = FUN_140437b04();
    plVar5 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar4);
    if (plVar5 != (longlong *)0x0) {
      uVar4 = FUN_140437b04();
      plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
      if (plVar6 != (longlong *)0x0 && plVar5 != plVar6) {
        lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6);
        cVar2 = (**(code **)(*param_1 + 0x28))(param_1);
        if (cVar2 != '\0') {
          uStack_54 = 0;
          local_140 = lVar7;
          if (param_3 == 0) {
            local_58 = 0;
            uVar3 = 0;
          }
          else {
            local_58 = *(uint *)(param_3 + 0xc);
            if ((int)local_58 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((local_58 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_58 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            uVar3 = *(uint *)(lVar7 + 0x10);
            if (*(uint *)(lVar7 + 0x10) == 0) {
              LOCK();
              iVar13 = DAT_14c964868 + 1;
              UNLOCK();
              uVar14 = DAT_14c964868 + 1;
              bVar16 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar13;
              if (bVar16) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar14);
              }
              LOCK();
              uVar3 = *(uint *)(lVar7 + 0x10);
              bVar16 = uVar3 == 0;
              if (bVar16) {
                *(uint *)(lVar7 + 0x10) = uVar14;
                uVar3 = 0;
              }
              UNLOCK();
              if (bVar16) {
                uVar3 = uVar14;
              }
            }
          }
          plVar5 = param_1 + 0xd;
          plVar6 = (longlong *)param_1[0x1d];
          if ((longlong *)param_1[0x1d] == (longlong *)0x0) {
            plVar6 = plVar5;
          }
          uStack_54 = uVar3;
          uStack_50 = param_4;
          if ((longlong)(int)param_1[0x1e] == 0) {
            iVar13 = 0;
          }
          else {
            lVar7 = (longlong)(int)param_1[0x1e] << 4;
            do {
              if ((plVar6[1] == uStack_50) &&
                 (cVar2 = FUN_14038330a(plVar6,&local_58), cVar2 != '\0')) goto LAB_1441610a4;
              plVar6 = plVar6 + 2;
              lVar7 = lVar7 + -0x10;
            } while (lVar7 != 0);
            iVar13 = (int)param_1[0x1e];
          }
          *(uint *)(param_1 + 0x1e) = iVar13 + 1U;
          if (*(uint *)((longlong)param_1 + 0xf4) < iVar13 + 1U) {
            FUN_148d47eb8(plVar5,iVar13);
          }
          if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[0x1d];
          }
          puVar1 = (uint *)(plVar5 + (longlong)iVar13 * 2);
          *puVar1 = local_58;
          puVar1[1] = uStack_54;
          puVar1[2] = (uint)uStack_50;
          puVar1[3] = uStack_50._4_4_;
          lVar7 = param_1[9];
          FUN_140273082(param_1,&local_68);
          puVar9 = local_68;
          if (local_60 == 0) {
            puVar9 = &DAT_149dfb77a;
          }
          uVar3 = FUN_144a1ccda(puVar9,0);
          uVar4 = *(undefined8 *)(lVar7 + 0xcc);
          local_80 = 0;
          local_6c = uVar3;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(param_2);
          }
          local_138 = param_2;
          if ((param_3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
            FUN_1456cec3c(param_3);
          }
          lVar11 = local_140;
          puVar8 = (undefined8 *)(lVar7 + 0x40);
          puVar15 = local_118;
          for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar15 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar15 = puVar15 + 1;
          }
          local_b0 = *(undefined4 *)(lVar7 + 0xa0);
          uStack_ac = *(undefined4 *)(lVar7 + 0xa4);
          uStack_a8 = *(undefined4 *)(lVar7 + 0xa8);
          uStack_a4 = *(undefined4 *)(lVar7 + 0xac);
          uStack_a0 = *(undefined4 *)(lVar7 + 0xb0);
          uStack_9c = *(undefined4 *)(lVar7 + 0xb4);
          uStack_98 = *(undefined4 *)(lVar7 + 0xb8);
          local_94 = *(undefined4 *)(lVar7 + 0xbc);
          uStack_90 = *(undefined4 *)(lVar7 + 0xc0);
          uStack_8c = *(undefined4 *)(lVar7 + 0xc4);
          uStack_88 = *(undefined4 *)(lVar7 + 200);
          plVar5 = (longlong *)(local_140 + 0x28);
          local_130 = param_3;
          local_128[0] = param_4;
          local_b8 = uVar4;
          if (*(int *)(local_140 + 0x30) != *(int *)(local_140 + 0x5c)) {
            lVar7 = local_140 + 0x60;
            if (*(longlong *)(local_140 + 0x68) != 0) {
              lVar7 = *(longlong *)(local_140 + 0x68);
            }
            iVar13 = *(int *)(lVar7 + (ulonglong)(*(int *)(local_140 + 0x70) - 1U & uVar3) * 4);
            if (iVar13 != -1) {
              do {
                if (*(uint *)(*plVar5 + (longlong)iVar13 * 0xe0) == uVar3) {
                  uVar4 = FUN_140df1a8c(plVar5,uVar3,&local_6c);
                  FUN_148cc8e28(&local_138,uVar4);
                  uVar3 = local_6c;
                  break;
                }
                iVar13 = *(int *)((longlong)iVar13 * 0xe0 + *plVar5 + 0xd0);
              } while (iVar13 != -1);
            }
          }
          puVar8 = (undefined8 *)FUN_140df1a8c(plVar5,uVar3,&local_6c);
          plVar5 = local_138;
          if (DAT_14c950c29 == 1) {
            if (local_138 == (longlong *)0x0) {
              plVar5 = (longlong *)0x0;
              lVar11 = local_140;
            }
            else {
              FUN_1456cec3c();
              plVar5 = local_138;
              lVar11 = local_140;
            }
          }
          bVar12 = DAT_14c950c29;
          *puVar8 = plVar5;
          lVar7 = local_130;
          if ((bVar12 & 1) != 0) {
            if (local_130 == 0) {
              lVar7 = 0;
              lVar11 = local_140;
            }
            else {
              FUN_1456cec3c();
              lVar7 = local_130;
              lVar11 = local_140;
              bVar12 = DAT_14c950c29;
            }
          }
          puVar8[1] = lVar7;
          memcpy(puVar8 + 2,local_128,0xa4);
          lVar7 = local_80;
          if ((bVar12 & 1) != 0) {
            if (local_80 == 0) {
              lVar7 = 0;
              lVar11 = local_140;
            }
            else {
              FUN_1456cec3c();
              lVar7 = local_80;
              lVar11 = local_140;
            }
          }
          puVar8[0x17] = lVar7;
          FUN_1418e7ef6(lVar11);
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
LAB_1441610a4:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441611f8 FUN_1441611f8 body=765 status=ok
// SIG undefined FUN_1441611f8(void)

void FUN_1441611f8(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_88 [40];
  longlong *local_60;
  uint local_58;
  int iStack_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = param_1 + 0x68;
  iStack_54 = 0;
  local_60 = param_2;
  if (param_3 == 0) {
    local_58 = 0;
    iVar10 = 0;
  }
  else {
    local_58 = *(uint *)(param_3 + 0xc);
    if ((int)local_58 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((local_58 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_58 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar10 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar10 = *(int *)(lVar12 + 0x10);
      bVar16 = iVar10 == 0;
      if (bVar16) {
        *(int *)(lVar12 + 0x10) = iVar11;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar16) {
        iVar10 = iVar11;
      }
    }
  }
  lVar12 = *(longlong *)(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    lVar12 = lVar5;
  }
  iStack_54 = iVar10;
  local_50 = param_4;
  if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
    lVar13 = (longlong)*(int *)(param_1 + 0xf0) << 4;
    iVar10 = 1;
    lVar15 = 0;
    do {
      if ((*(longlong *)(lVar12 + 8) == local_50) &&
         (cVar3 = FUN_14038330a(lVar12,&local_58), cVar3 != '\0')) {
        if (iVar10 != 0) {
          iVar11 = *(int *)(param_1 + 0xf0);
          iVar10 = iVar11 - iVar10;
          if (iVar10 != 0) {
            iVar14 = 1;
            if (iVar10 < 1) {
              iVar14 = iVar10;
            }
            lVar12 = *(longlong *)(param_1 + 0xe8);
            if (*(longlong *)(param_1 + 0xe8) == 0) {
              lVar12 = lVar5;
            }
            memmove((void *)((lVar15 >> 0x20) * 0x10 + lVar12),
                    (void *)((longlong)(iVar11 - iVar14) * 0x10 + lVar12),(longlong)iVar14 << 4);
            iVar11 = *(int *)(param_1 + 0xf0);
          }
          plVar2 = local_60;
          *(int *)(param_1 + 0xf0) = iVar11 + -1;
          FUN_144165760(lVar5);
          lVar5 = FUN_14027347e(*(undefined8 *)(param_1 + 0x40));
          if (lVar5 != 0) {
            lVar12 = *(longlong *)(lVar5 + 0x30);
            plVar7 = *(longlong **)(lVar5 + 0x38);
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
              LOCK();
              plVar8 = plVar7 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            if (lVar12 != 0) {
              FUN_140273082(param_1,&local_58);
              if ((int)local_50 == 0) {
                puVar9 = &DAT_149dfb77a;
              }
              else {
                puVar9 = (undefined2 *)CONCAT44(iStack_54,local_58);
              }
              uVar4 = FUN_144a1ccda(puVar9,0);
              if (plVar2 != (longlong *)0x0) {
                uVar6 = FUN_140437b04();
                plVar7 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar6);
                if (plVar7 != (longlong *)0x0) {
                  uVar6 = FUN_140437b04();
                  plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
                  if (plVar8 != (longlong *)0x0 && plVar7 != plVar8) {
                    lVar5 = (**(code **)(*plVar8 + 0x20))(plVar8);
                    if (DAT_14c950c29 == 1) {
                      FUN_1456cec3c(plVar2);
                    }
                    if ((param_3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
                      FUN_1456cec3c(param_3);
                    }
                    FUN_140cba244(lVar5 + 0x28,uVar4);
                    FUN_1418e7ef6(lVar5);
                  }
                }
              }
              if (CONCAT44(iStack_54,local_58) != 0) {
                FUN_1400020a8();
              }
            }
          }
        }
        break;
      }
      lVar12 = lVar12 + 0x10;
      lVar15 = lVar15 + 0x100000000;
      iVar10 = iVar10 + 1;
      lVar13 = lVar13 + -0x10;
    } while (lVar13 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441614f6 FUN_1441614f6 body=7922 status=ok
// SIG undefined FUN_1441614f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441614f6(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  double *pdVar7;
  float *pfVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  undefined8 *puVar18;
  double *pdVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_508 [32];
  undefined8 *local_4e8;
  undefined4 local_4e0;
  uint *local_4d8;
  undefined8 *local_4d0;
  undefined1 *local_4c8;
  longlong *local_4b8;
  double *local_4b0;
  longlong *local_4a8;
  double dStack_4a0;
  longlong local_498;
  double local_490;
  double local_488;
  double local_480;
  double local_478;
  double dStack_470;
  double local_468;
  double local_458;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  double local_428;
  double local_420;
  double local_418;
  longlong *local_410;
  longlong *local_408;
  longlong local_400;
  longlong *local_3f8;
  float local_3f0;
  float local_3ec;
  double *local_3e8;
  undefined1 *local_3e0;
  float local_3d8;
  float local_3d4;
  float local_3d0;
  undefined4 uStack_3cc;
  double local_3c8;
  double local_3c0;
  uint local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  undefined4 local_314;
  undefined4 local_304;
  undefined4 local_2e8;
  undefined4 local_2d8;
  double local_2a0;
  longlong *plStack_298;
  double local_290;
  double local_288;
  longlong *local_280;
  double local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined1 local_260;
  undefined2 local_25f;
  undefined1 local_25d;
  undefined4 local_25c;
  undefined1 local_258;
  undefined4 local_254;
  undefined1 local_250;
  undefined4 local_24c;
  undefined2 local_248;
  longlong local_220;
  undefined8 local_218;
  undefined4 local_210;
  longlong local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0;
  undefined2 local_1df;
  undefined1 local_1dd;
  undefined4 local_1dc;
  undefined1 local_1d8;
  undefined4 local_1d4;
  undefined1 local_1d0;
  undefined4 local_1cc;
  undefined2 local_1c8;
  longlong local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  longlong local_180;
  undefined8 local_178;
  undefined4 local_14c;
  undefined4 local_120;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_508;
  lVar4 = *param_2;
  lVar6 = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
    lVar6 = *param_2;
  }
  plVar9 = (longlong *)param_2[1];
  if (plVar9 != (longlong *)0x0 && lVar6 != 0) {
    if (*(code **)(*plVar9 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar16 = plVar9 + 0x143;
    }
    else {
      plVar16 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9);
    }
    if ((int)plVar16[6] != *(int *)((longlong)plVar16 + 0x5c)) {
      uVar13 = *(uint *)(param_2 + 2);
      plVar10 = plVar16 + 0xc;
      if ((longlong *)plVar16[0xd] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar16[0xd];
      }
      iVar14 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar16[0xe] - 1U & uVar13) * 4);
      if (iVar14 != -1) {
        do {
          if (*(uint *)(plVar16[5] + (longlong)iVar14 * 0xe0) == uVar13) {
            if (lVar4 != 0) {
              plVar16 = &DAT_14cbcb1e0;
              if ((*param_2 == 0) || (plVar10 = (longlong *)param_2[1], plVar10 == (longlong *)0x0))
              goto LAB_1441616e6;
              if (*(code **)(*plVar10 + 0x20) == (code *)&LAB_144a7e90a) {
                plVar10 = plVar10 + 0x143;
              }
              else {
                plVar10 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10);
                uVar13 = *(uint *)(param_2 + 2);
              }
              if ((int)plVar10[6] == *(int *)((longlong)plVar10 + 0x5c)) goto LAB_1441616e6;
              plVar11 = plVar10 + 0xc;
              if ((longlong *)plVar10[0xd] != (longlong *)0x0) {
                plVar11 = (longlong *)plVar10[0xd];
              }
              iVar14 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar10[0xe] - 1U & uVar13) * 4
                               );
              if (iVar14 == -1) goto LAB_1441616e6;
              lVar4 = plVar10[5];
              iVar17 = iVar14;
              goto LAB_1441616a0;
            }
            break;
          }
          iVar14 = *(int *)((longlong)iVar14 * 0xe0 + plVar16[5] + 0xd0);
        } while (iVar14 != -1);
      }
    }
  }
  goto LAB_144162674;
  while (iVar17 = *(int *)((longlong)iVar17 * 0xe0 + lVar4 + 0xd0), iVar17 != -1) {
LAB_1441616a0:
    if (*(uint *)(lVar4 + (longlong)iVar17 * 0xe0) == uVar13) goto LAB_1441616c2;
  }
  goto LAB_1441616e6;
  while (iVar14 = *(int *)(lVar6 + 0xd0), iVar14 != -1) {
LAB_144161cea:
    lVar6 = lVar4 + (longlong)iVar14 * 0xe0;
    if (*(uint *)(lVar4 + (longlong)iVar14 * 0xe0) == local_278._0_4_) goto LAB_144161d0b;
  }
  lVar6 = 0;
LAB_144161d0b:
  puVar18 = (undefined8 *)(lVar6 + 0x10);
  goto LAB_144161d0f;
  while (iVar14 = *(int *)(lVar6 + 0xd0), iVar14 != -1) {
LAB_144161d91:
    lVar6 = lVar4 + (longlong)iVar14 * 0xe0;
    if (*(uint *)(lVar4 + (longlong)iVar14 * 0xe0) == uVar13) goto LAB_144161db4;
  }
  lVar6 = 0;
LAB_144161db4:
  puVar18 = (undefined8 *)(lVar6 + 0x10);
  goto LAB_144161db8;
  while (iVar14 = *(int *)(lVar6 + 0xd0), iVar14 != -1) {
LAB_144161e91:
    lVar6 = lVar4 + (longlong)iVar14 * 0xe0;
    if (*(uint *)(lVar4 + (longlong)iVar14 * 0xe0) == local_278._0_4_) goto LAB_144161eb4;
  }
  lVar6 = 0;
LAB_144161eb4:
  puVar18 = (undefined8 *)(lVar6 + 0x10);
  goto LAB_144161eb8;
  while (iVar14 = *(int *)(lVar12 + 0xd0), iVar14 != -1) {
LAB_144162fa8:
    lVar12 = lVar6 + (longlong)iVar14 * 0xe0;
    if (*(uint *)(lVar6 + (longlong)iVar14 * 0xe0) == (uint)local_400) goto LAB_144162fcb;
  }
  lVar12 = 0;
LAB_144162fcb:
  puVar18 = (undefined8 *)(lVar12 + 0x10);
  goto LAB_144162fcf;
  while (iVar14 = *(int *)((longlong)local_4b8 + 0xd0), iVar14 != -1) {
LAB_1441630c4:
    local_4b8 = (longlong *)(lVar6 + (longlong)iVar14 * 0xe0);
    if (*(uint *)(lVar6 + (longlong)iVar14 * 0xe0) == (uint)local_400) goto LAB_1441630f5;
  }
  local_4b8 = (longlong *)0x0;
LAB_1441630f5:
  local_4b8 = (longlong *)((longlong)local_4b8 + 0x10);
  goto LAB_1441630fb;
  while (iVar14 = *(int *)(lVar6 + 0xd0), iVar14 != -1) {
LAB_14416255a:
    lVar6 = lVar4 + (longlong)iVar14 * 0xe0;
    if (*(uint *)(lVar4 + (longlong)iVar14 * 0xe0) == (uint)local_400) goto LAB_14416257c;
  }
  lVar6 = 0;
LAB_14416257c:
  puVar18 = (undefined8 *)(lVar6 + 0x10);
  goto LAB_144162580;
  while (iVar14 = *(int *)(lVar6 + 0xd0), iVar14 != -1) {
LAB_144162870:
    lVar6 = lVar4 + (longlong)iVar14 * 0xe0;
    if (*(uint *)(lVar4 + (longlong)iVar14 * 0xe0) == (uint)local_400) goto LAB_144162892;
  }
  lVar6 = 0;
LAB_144162892:
  puVar18 = (undefined8 *)(lVar6 + 0x10);
  goto LAB_144162896;
  while (iVar14 = *(int *)(lVar6 + 0xd0), iVar14 != -1) {
LAB_1441626fa:
    lVar6 = lVar4 + (longlong)iVar14 * 0xe0;
    if (*(uint *)(lVar4 + (longlong)iVar14 * 0xe0) == (uint)local_400) goto LAB_14416271a;
  }
  lVar6 = 0;
LAB_14416271a:
  puVar18 = (undefined8 *)(lVar6 + 0x10);
  goto LAB_14416271e;
  while (iVar14 = *(int *)(lVar6 + 0xd0), iVar14 != -1) {
LAB_1441616c2:
    lVar6 = lVar4 + (longlong)iVar14 * 0xe0;
    if (*(uint *)(lVar4 + (longlong)iVar14 * 0xe0) == uVar13) goto LAB_1441616e2;
  }
  lVar6 = 0;
LAB_1441616e2:
  plVar16 = (longlong *)(lVar6 + 0x10);
LAB_1441616e6:
  plVar16 = (longlong *)*plVar16;
  if (plVar16 == (longlong *)0x0) {
LAB_14416170e:
    plVar16 = (longlong *)0x0;
  }
  else {
    lVar4 = FUN_1411d730e();
    if ((*(int *)(plVar16[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar16[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) goto LAB_14416170e;
  }
  cVar3 = (**(code **)(*plVar9 + 0x90))(plVar9,param_2,*param_1,param_3);
  if (cVar3 == '\0') {
    pdVar19 = (double *)(param_3 + 8);
    *(double *)(param_3 + 0x18) = DAT_14c8464f0;
    dVar23 = DAT_14c8464e8;
    *(double *)(param_3 + 8) = DAT_14c8464e0;
    *(double *)(param_3 + 0x10) = dVar23;
    if ((plVar16 == (longlong *)0x0) || ((char)plVar16[0x4cf] != '\x01')) {
LAB_14416195d:
      pdVar19[2] = DAT_14c8464f0;
      dVar23 = DAT_14c8464e8;
      *pdVar19 = DAT_14c8464e0;
      pdVar19[1] = dVar23;
      if (plVar16 == (longlong *)0x0) goto LAB_144162674;
      if (*(char *)((longlong)plVar16 + 0x2679) == '\x01') {
        FUN_14416042e(plVar16 + 0x35b,&local_410);
        if ((((*param_1 != 0) &&
             (plVar9 = *(longlong **)(&DAT_00006850 + *param_1), plVar9 != (longlong *)0x0)) &&
            (plVar9[0x22] != 0)) &&
           (((cVar3 = (**(code **)(*plVar9 + 0xe78))(plVar9,0x40000), cVar3 != '\0' &&
             (cVar3 = FUN_140666516(param_1,&local_410), cVar3 != '\0')) &&
            ((*param_1 != 0 && (lVar4 = FUN_1447210f0(), lVar4 != 0)))))) {
          uVar5 = FUN_140437b04();
          lVar6 = (**(code **)(*plVar16 + 0x288))(plVar16,uVar5);
          if (lVar6 != 0) {
            uVar5 = FUN_140437b04();
            lVar12 = FUN_144718840(lVar6,uVar5);
            if (lVar12 != 0 && lVar6 != lVar12) {
              puVar18 = &DAT_14cbcb1e0;
              local_4a8 = local_410;
              if ((local_410 != (longlong *)0x0) && (local_408 != (longlong *)0x0)) {
                if (*(code **)(*local_408 + 0x20) == (code *)&LAB_144a7e90a) {
                  plVar10 = local_408 + 0x143;
                }
                else {
                  plVar10 = (longlong *)(**(code **)(*local_408 + 0x20))(local_408);
                }
                if ((int)plVar10[6] != *(int *)((longlong)plVar10 + 0x5c)) {
                  plVar11 = plVar10 + 0xc;
                  if ((longlong *)plVar10[0xd] != (longlong *)0x0) {
                    plVar11 = (longlong *)plVar10[0xd];
                  }
                  iVar14 = *(int *)((longlong)plVar11 +
                                   (ulonglong)((int)plVar10[0xe] - 1U & (uint)local_400) * 4);
                  if (iVar14 != -1) {
                    lVar6 = plVar10[5];
                    iVar17 = iVar14;
                    do {
                      if (*(uint *)(lVar6 + (longlong)iVar17 * 0xe0) == (uint)local_400)
                      goto LAB_144162fa8;
                      iVar17 = *(int *)((longlong)iVar17 * 0xe0 + lVar6 + 0xd0);
                    } while (iVar17 != -1);
                  }
                }
              }
LAB_144162fcf:
              cVar3 = FUN_1412c3426(puVar18);
              if ((((cVar3 != '\0') && (*param_1 != 0)) &&
                  (*(longlong *)(&DAT_00006850 + *param_1) != 0)) &&
                 (lVar6 = *(longlong *)(*(longlong *)(&DAT_00006850 + *param_1) + 0x44c0),
                 lVar6 != 0)) {
                pfVar8 = (float *)((longlong)plVar16 + 0x267c);
                if (*(char *)((longlong)plVar16 + 0x267a) == '\0') {
                  pfVar8 = (float *)(lVar6 + 0x3fc);
                }
                fVar21 = *pfVar8;
                local_4b8 = &DAT_14cbcb1e0;
                if ((local_4a8 != (longlong *)0x0) && (local_408 != (longlong *)0x0)) {
                  if (*(code **)(*local_408 + 0x20) == (code *)&LAB_144a7e90a) {
                    plVar10 = local_408 + 0x143;
                  }
                  else {
                    plVar10 = (longlong *)(**(code **)(*local_408 + 0x20))(local_408);
                  }
                  if ((int)plVar10[6] != *(int *)((longlong)plVar10 + 0x5c)) {
                    plVar11 = plVar10 + 0xc;
                    if ((longlong *)plVar10[0xd] != (longlong *)0x0) {
                      plVar11 = (longlong *)plVar10[0xd];
                    }
                    iVar14 = *(int *)((longlong)plVar11 +
                                     (ulonglong)((int)plVar10[0xe] - 1U & (uint)local_400) * 4);
                    if (iVar14 != -1) {
                      lVar6 = plVar10[5];
                      iVar17 = iVar14;
                      do {
                        if (*(uint *)(lVar6 + (longlong)iVar17 * 0xe0) == (uint)local_400)
                        goto LAB_1441630c4;
                        iVar17 = *(int *)((longlong)iVar17 * 0xe0 + lVar6 + 0xd0);
                      } while (iVar17 != -1);
                    }
                  }
                }
LAB_1441630fb:
                FUN_1410c6958(local_4b8,&local_288,*param_1);
                local_290 = local_278 - (double)fVar21;
                plStack_298 = (longlong *)((double)local_280 + 0.0);
                local_2a0 = local_288 + 0.0;
                local_3d0 = 0.0;
                local_428 = (double)((ulonglong)local_428 & 0xffffffff00000000);
                (**(code **)(*(longlong *)*param_1 + 0x528))();
                memset(&local_1f0,0,0x100);
                local_120 = 0xffffffff;
                local_14c = 0xffffffff;
                local_1f0 = CONCAT44(0x3f800000,(undefined4)local_1f0);
                local_24c = 0;
                local_248 = 0x101;
                local_220 = 0;
                local_218 = 0x800000000;
                local_200 = 0;
                local_1f8 = 0x400000000;
                local_260 = 0;
                local_254 = 0;
                local_270 = 0;
                uStack_268 = 0;
                local_25f = 1;
                local_25d = 0;
                local_250 = 0;
                local_25c = 0x1000000;
                local_258 = 1;
                if (*param_1 != 0) {
                  local_210 = *(undefined4 *)(*param_1 + 0xc);
                  local_1f8 = 0x400000001;
                }
                local_3b8 = 3;
                fStack_3b4 = local_3d0;
                fStack_3b0 = local_428._0_4_;
                local_4e0 = (**(code **)(*(longlong *)plVar9[0x22] + 0x580))();
                local_4c8 = &DAT_14cad0f10;
                local_4d0 = &local_270;
                local_4e8 = &DAT_14c8463d0;
                local_4d8 = &local_3b8;
                cVar3 = FUN_14021655c(lVar4,&local_1f0,&local_288,&local_2a0);
                if (cVar3 == '\0') {
                  bVar20 = false;
                }
                else {
                  local_3b8 = 0;
                  fStack_3b4 = 0.0;
                  fStack_3b0 = 0.0;
                  memset(&local_3a8,0,0x100);
                  local_2d8 = 0xffffffff;
                  local_304 = 0xffffffff;
                  uStack_3a4 = 0x3f800000;
                  local_4e8 = (undefined8 *)0x0;
                  (**(code **)(*plVar9 + 0x900))(plVar9,&local_1e0,&local_3b8,0);
                  bVar20 = (local_3b8 & 3) == 3;
                  if (bVar20) {
                    *param_3 = 2;
                    pdVar19[2] = local_388;
                    *pdVar19 = local_398;
                    pdVar19[1] = dStack_390;
                  }
                }
                if (local_200 != 0) {
                  FUN_1400020a8();
                }
                if (local_220 != 0) {
                  FUN_1400020a8();
                }
                if (bVar20) goto LAB_14416172d;
              }
            }
          }
        }
        pdVar19[2] = DAT_14c8464f0;
        dVar23 = DAT_14c8464e8;
        *pdVar19 = DAT_14c8464e0;
        pdVar19[1] = dVar23;
      }
      plVar9 = plVar16 + 0x35b;
      FUN_14416042e(plVar9,&local_410);
      if ((((*param_1 == 0) ||
           (plVar10 = *(longlong **)(&DAT_00006850 + *param_1), plVar10 == (longlong *)0x0)) ||
          ((plVar10[0x22] == 0 ||
           (((cVar3 = (**(code **)(*plVar10 + 0xe78))(plVar10,0x40000), cVar3 == '\0' ||
             (cVar3 = FUN_140666516(param_1,&local_410), cVar3 == '\0')) || (*param_1 == 0)))))) ||
         (local_4a8 = (longlong *)FUN_1447210f0(), local_4a8 == (longlong *)0x0))
      goto LAB_144162674;
      uVar5 = FUN_140437b04();
      lVar4 = (**(code **)(*plVar16 + 0x288))(plVar16,uVar5);
      if (lVar4 == 0) goto LAB_144162674;
      uVar5 = FUN_140437b04();
      lVar6 = FUN_144718840(lVar4,uVar5);
      if (lVar6 == 0 || lVar4 == lVar6) goto LAB_144162674;
      puVar18 = &DAT_14cbcb1e0;
      local_4b8 = local_410;
      if ((local_410 != (longlong *)0x0) && (local_408 != (longlong *)0x0)) {
        if (*(code **)(*local_408 + 0x20) == (code *)&LAB_144a7e90a) {
          plVar11 = local_408 + 0x143;
        }
        else {
          plVar11 = (longlong *)(**(code **)(*local_408 + 0x20))(local_408);
        }
        if ((int)plVar11[6] != *(int *)((longlong)plVar11 + 0x5c)) {
          plVar15 = plVar11 + 0xc;
          if ((longlong *)plVar11[0xd] != (longlong *)0x0) {
            plVar15 = (longlong *)plVar11[0xd];
          }
          iVar14 = *(int *)((longlong)plVar15 +
                           (ulonglong)((int)plVar11[0xe] - 1U & (uint)local_400) * 4);
          if (iVar14 != -1) {
            lVar4 = plVar11[5];
            iVar17 = iVar14;
            do {
              if (*(uint *)(lVar4 + (longlong)iVar17 * 0xe0) == (uint)local_400) goto LAB_14416255a;
              iVar17 = *(int *)((longlong)iVar17 * 0xe0 + lVar4 + 0xd0);
            } while (iVar17 != -1);
          }
        }
      }
LAB_144162580:
      cVar3 = FUN_1412c3426(puVar18);
      if (((cVar3 == '\0') || (*param_1 == 0)) ||
         ((*(longlong *)(&DAT_00006850 + *param_1) == 0 ||
          (lVar4 = *(longlong *)(*(longlong *)(&DAT_00006850 + *param_1) + 0x44c0), lVar4 == 0))))
      goto LAB_144162674;
      *param_3 = 0;
      if (*(char *)((longlong)local_4a8 + 0x152) == '\x02') {
        puVar18 = &DAT_14cbcb1e0;
        if ((local_4b8 != (longlong *)0x0) && (local_408 != (longlong *)0x0)) {
          if (*(code **)(*local_408 + 0x20) == (code *)&LAB_144a7e90a) {
            plVar10 = local_408 + 0x143;
          }
          else {
            plVar10 = (longlong *)(**(code **)(*local_408 + 0x20))(local_408);
          }
          if ((int)plVar10[6] != *(int *)((longlong)plVar10 + 0x5c)) {
            plVar11 = plVar10 + 0xc;
            if ((longlong *)plVar10[0xd] != (longlong *)0x0) {
              plVar11 = (longlong *)plVar10[0xd];
            }
            iVar14 = *(int *)((longlong)plVar11 +
                             (ulonglong)((int)plVar10[0xe] - 1U & (uint)local_400) * 4);
            if (iVar14 != -1) {
              lVar4 = plVar10[5];
              iVar17 = iVar14;
              do {
                if (*(uint *)(lVar4 + (longlong)iVar17 * 0xe0) == (uint)local_400)
                goto LAB_1441626fa;
                iVar17 = *(int *)((longlong)iVar17 * 0xe0 + lVar4 + 0xd0);
              } while (iVar17 != -1);
            }
          }
        }
LAB_14416271e:
        FUN_14066734e(puVar18,&local_3b8);
        fVar21 = (float)(**(code **)(*plVar9 + 0x88))(plVar9);
        dVar23 = (double)fVar21;
        dVar25 = DAT_14c8462d0 * dVar23;
        dVar28 = DAT_14c8462c8 * dVar23;
        *(double *)(param_3 + 8) = dVar23 * DAT_14c8462c0 + local_398;
        *(double *)(param_3 + 0x10) = dVar28 + dStack_390;
        *(double *)(param_3 + 0x18) = dVar25 + local_388;
      }
      else {
        lVar6 = *(longlong *)(*param_1 + 0x1c8);
        if (lVar6 == 0) {
          pdVar7 = &DAT_14c8464e0;
          uVar35 = SUB84(DAT_14c8464f0,0);
          uVar36 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          uVar35 = (undefined4)*(undefined8 *)(lVar6 + 0x270);
          uVar36 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x270) >> 0x20);
          pdVar7 = (double *)(lVar6 + 0x260);
        }
        dVar23 = *pdVar7;
        dVar25 = pdVar7[1];
        puVar18 = &DAT_14cbcb1e0;
        local_4b0 = pdVar19;
        local_498 = lVar4;
        if ((local_4b8 != (longlong *)0x0) && (local_408 != (longlong *)0x0)) {
          if (*(code **)(*local_408 + 0x20) == (code *)&LAB_144a7e90a) {
            plVar11 = local_408 + 0x143;
          }
          else {
            plVar11 = (longlong *)(**(code **)(*local_408 + 0x20))(local_408);
          }
          if ((int)plVar11[6] != *(int *)((longlong)plVar11 + 0x5c)) {
            plVar15 = plVar11 + 0xc;
            if ((longlong *)plVar11[0xd] != (longlong *)0x0) {
              plVar15 = (longlong *)plVar11[0xd];
            }
            iVar14 = *(int *)((longlong)plVar15 +
                             (ulonglong)((int)plVar11[0xe] - 1U & (uint)local_400) * 4);
            if (iVar14 != -1) {
              lVar4 = plVar11[5];
              iVar17 = iVar14;
              do {
                if (*(uint *)(lVar4 + (longlong)iVar17 * 0xe0) == (uint)local_400)
                goto LAB_144162870;
                iVar17 = *(int *)((longlong)iVar17 * 0xe0 + lVar4 + 0xd0);
              } while (iVar17 != -1);
            }
          }
        }
LAB_144162896:
        FUN_14066734e(puVar18,&local_3b8);
        dVar28 = local_388;
        dVar27 = dStack_390;
        dVar32 = local_398;
        fVar21 = (float)(**(code **)(*plVar9 + 0x88))(plVar9);
        dVar34 = (double)fVar21;
        dVar28 = DAT_14c8462d0 * dVar34 + dVar28;
        dVar27 = DAT_14c8462c8 * dVar34 + dVar27;
        dVar32 = dVar34 * DAT_14c8462c0 + dVar32;
        local_3d0 = 0.0;
        local_428 = (double)((ulonglong)local_428 & 0xffffffff00000000);
        (**(code **)(*plVar9 + 0x80))(plVar9,0);
        dVar24 = dVar28 - (double)CONCAT44(uVar36,uVar35);
        dVar23 = dVar32 - dVar23;
        dVar25 = dVar27 - dVar25;
        dVar34 = dVar24 * 0.0;
        dVar29 = dVar34 * dVar34 + dVar23 * dVar23 + dVar25 * dVar25;
        if (((dVar29 != 1.0) || (dVar30 = dVar23, dVar31 = dVar25, dVar33 = dVar34, NAN(dVar29))) &&
           (dVar30 = DAT_14c8464e0, dVar31 = DAT_14c8464e8, dVar33 = DAT_14c8464f0,
           9.99999993922529e-09 <= dVar29)) {
          dVar29 = 1.0 / SQRT(dVar29);
          dVar30 = dVar23 * dVar29;
          dVar31 = dVar25 * dVar29;
          dVar33 = dVar34 * dVar29;
        }
        fVar21 = (float)dVar24;
        if ((fVar21 <= local_3d0) || (local_3d0 <= 0.0)) {
          fVar22 = local_428._0_4_;
        }
        else {
          fVar22 = fVar21 / local_3d0;
          if (fVar22 < 0.0) {
            fVar22 = sqrtf(fVar22);
          }
          else {
            fVar22 = SQRT(fVar22);
          }
          fVar22 = fVar22 * local_428._0_4_;
          local_428 = (double)CONCAT44(local_428._4_4_,fVar22);
          local_3d0 = fVar21;
        }
        dVar34 = (double)local_3d0;
        dVar25 = (double)fVar22;
        local_290 = dVar33 * dVar25 + (dVar28 - DAT_14c8462d0 * dVar34);
        dVar23 = dVar31 * dVar25 + (dVar27 - DAT_14c8462c8 * dVar34);
        local_2a0 = dVar30 * dVar25 + (dVar32 - dVar34 * DAT_14c8462c0);
        *(double *)(param_3 + 8) = local_2a0;
        *(double *)(param_3 + 0x10) = dVar23;
        *(double *)(param_3 + 0x18) = local_290;
        pfVar8 = (float *)((longlong)plVar16 + 0x267c);
        if (*(char *)((longlong)plVar16 + 0x267a) == '\0') {
          pfVar8 = (float *)(local_498 + 0x3fc);
        }
        local_278 = local_290 + (double)*pfVar8;
        plStack_298 = (longlong *)(dVar23 + 0.0);
        local_2a0 = local_2a0 + 0.0;
        local_290 = local_290 - (double)*pfVar8;
        if (dVar28 <= local_278) {
          local_278 = dVar28;
        }
        local_288 = local_2a0;
        local_280 = plStack_298;
        if (local_290 < local_278) {
          local_440 = (double)((ulonglong)local_440 & 0xffffffff00000000);
          local_458 = (double)((ulonglong)local_458 & 0xffffffff00000000);
          (**(code **)(*(longlong *)*param_1 + 0x528))();
          memset(&local_1f0,0,0x100);
          local_120 = 0xffffffff;
          local_14c = 0xffffffff;
          local_1f0 = CONCAT44(0x3f800000,(undefined4)local_1f0);
          local_24c = 0;
          local_248 = 0x101;
          local_220 = 0;
          local_218 = 0x800000000;
          local_200 = 0;
          local_1f8 = 0x400000000;
          local_260 = 0;
          local_254 = 0;
          local_270 = 0;
          uStack_268 = 0;
          local_25f = 1;
          local_25d = 0;
          local_250 = 0;
          local_25c = 0x1000000;
          local_258 = 1;
          if (*param_1 != 0) {
            local_210 = *(undefined4 *)(*param_1 + 0xc);
            local_1f8 = 0x400000001;
          }
          local_3b8 = 3;
          fStack_3b4 = local_440._0_4_;
          fStack_3b0 = local_458._0_4_;
          local_4e0 = (**(code **)(*(longlong *)plVar10[0x22] + 0x580))();
          local_4c8 = &DAT_14cad0f10;
          local_4d0 = &local_270;
          local_4e8 = &DAT_14c8463d0;
          local_4d8 = &local_3b8;
          cVar3 = FUN_14021655c(local_4a8,&local_1f0,&local_288,&local_2a0);
          if (cVar3 != '\0') {
            local_3b8 = 0;
            fStack_3b4 = 0.0;
            fStack_3b0 = 0.0;
            memset(&local_3a8,0,0x100);
            local_2d8 = 0xffffffff;
            local_304 = 0xffffffff;
            uStack_3a4 = 0x3f800000;
            local_4e8 = (undefined8 *)0x0;
            (**(code **)(*plVar10 + 0x900))(plVar10,&local_1e0,&local_3b8,0);
            if (((local_3b8 ^ 0xffffffff) & 3) == 0) {
              local_4b0[2] = local_388;
              *local_4b0 = local_398;
              local_4b0[1] = dStack_390;
            }
          }
          goto LAB_14416252e;
        }
      }
    }
    else {
      local_4b0 = pdVar19;
      if (*param_1 == 0) {
        FUN_14416042e(plVar16 + 0x35b,&local_288);
        pdVar19 = local_4b0;
        goto LAB_14416195d;
      }
      plVar9 = *(longlong **)(&DAT_00006850 + *param_1);
      FUN_14416042e(plVar16 + 0x35b,&local_288);
      pdVar19 = local_4b0;
      local_4a8 = plVar9;
      if ((((plVar9 == (longlong *)0x0) || (plVar9[0x22] == 0)) || (*param_1 == 0)) ||
         (((plVar9 = *(longlong **)(&DAT_00006850 + *param_1), plVar9 == (longlong *)0x0 ||
           (cVar3 = (**(code **)(*plVar9 + 0xe78))(plVar9,0x40000), pdVar19 = local_4b0,
           cVar3 == '\0')) ||
          ((cVar3 = FUN_140666516(param_1,&local_288), pdVar19 = local_4b0, cVar3 == '\0' ||
           (*param_1 == 0)))))) goto LAB_14416195d;
      local_4b8 = (longlong *)FUN_1447210f0();
      pdVar19 = local_4b0;
      if (((*param_1 == 0) || (*(longlong *)(&DAT_00006850 + *param_1) == 0)) ||
         ((local_4b8 == (longlong *)0x0 ||
          (local_498 = *(longlong *)(*(longlong *)(&DAT_00006850 + *param_1) + 0x44c0),
          local_498 == 0)))) goto LAB_14416195d;
      uVar5 = FUN_140437b04();
      lVar4 = (**(code **)(*plVar16 + 0x288))(plVar16,uVar5);
      pdVar19 = local_4b0;
      if (lVar4 == 0) goto LAB_14416195d;
      uVar5 = FUN_140437b04();
      lVar6 = FUN_144718840(lVar4,uVar5);
      plVar9 = local_280;
      dVar23 = local_288;
      pdVar19 = local_4b0;
      if ((lVar4 == lVar6) || (lVar6 == 0)) goto LAB_14416195d;
      if ((local_288 == 0.0) || (local_280 == (longlong *)0x0)) {
        puVar18 = &DAT_14cbcb1e0;
        cVar3 = FUN_1412c3426(&DAT_14cbcb1e0);
        pdVar19 = local_4b0;
        if (cVar3 != '\0') goto LAB_144161db8;
        goto LAB_14416195d;
      }
      if (*(code **)(*local_280 + 0x20) == (code *)&LAB_144a7e90a) {
        plVar10 = local_280 + 0x143;
      }
      else {
        plVar10 = (longlong *)(**(code **)(*local_280 + 0x20))(local_280);
      }
      uVar13 = local_278._0_4_;
      puVar18 = &DAT_14cbcb1e0;
      if ((int)plVar10[6] != *(int *)((longlong)plVar10 + 0x5c)) {
        plVar11 = plVar10 + 0xc;
        if ((longlong *)plVar10[0xd] != (longlong *)0x0) {
          plVar11 = (longlong *)plVar10[0xd];
        }
        iVar14 = *(int *)((longlong)plVar11 +
                         (ulonglong)((int)plVar10[0xe] - 1U & local_278._0_4_) * 4);
        if (iVar14 != -1) {
          lVar4 = plVar10[5];
          iVar17 = iVar14;
          do {
            if (*(uint *)(lVar4 + (longlong)iVar17 * 0xe0) == local_278._0_4_) goto LAB_144161cea;
            iVar17 = *(int *)((longlong)iVar17 * 0xe0 + lVar4 + 0xd0);
          } while (iVar17 != -1);
        }
      }
LAB_144161d0f:
      cVar3 = FUN_1412c3426(puVar18);
      pdVar19 = local_4b0;
      if (cVar3 == '\0') goto LAB_14416195d;
      if (*(code **)(*plVar9 + 0x20) == (code *)&LAB_144a7e90a) {
        plVar9 = plVar9 + 0x143;
      }
      else {
        plVar9 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9);
      }
      puVar18 = &DAT_14cbcb1e0;
      if ((int)plVar9[6] != *(int *)((longlong)plVar9 + 0x5c)) {
        plVar10 = plVar9 + 0xc;
        if ((longlong *)plVar9[0xd] != (longlong *)0x0) {
          plVar10 = (longlong *)plVar9[0xd];
        }
        iVar14 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar9[0xe] - 1U & uVar13) * 4);
        if (iVar14 != -1) {
          lVar4 = plVar9[5];
          iVar17 = iVar14;
          do {
            if (*(uint *)(lVar4 + (longlong)iVar17 * 0xe0) == uVar13) goto LAB_144161d91;
            iVar17 = *(int *)((longlong)iVar17 * 0xe0 + lVar4 + 0xd0);
          } while (iVar17 != -1);
        }
      }
LAB_144161db8:
      pdVar19 = local_4b0;
      FUN_14066634a(puVar18,&local_3b8);
      plVar9 = local_4a8;
      local_290 = -(double)CONCAT44(uStack_3a4,local_3a8);
      local_2a0 = -(double)CONCAT44(fStack_3b4,local_3b8);
      plStack_298 = (longlong *)(CONCAT44(uStack_3ac,fStack_3b0) ^ 0x8000000000000000);
      puVar18 = &DAT_14cbcb1e0;
      if ((dVar23 != 0.0) && (local_280 != (longlong *)0x0)) {
        if (*(code **)(*local_280 + 0x20) == (code *)&LAB_144a7e90a) {
          plVar10 = local_280 + 0x143;
        }
        else {
          plVar10 = (longlong *)(**(code **)(*local_280 + 0x20))(local_280);
        }
        if ((int)plVar10[6] != *(int *)((longlong)plVar10 + 0x5c)) {
          plVar11 = plVar10 + 0xc;
          if ((longlong *)plVar10[0xd] != (longlong *)0x0) {
            plVar11 = (longlong *)plVar10[0xd];
          }
          iVar14 = *(int *)((longlong)plVar11 +
                           (ulonglong)((int)plVar10[0xe] - 1U & local_278._0_4_) * 4);
          if (iVar14 != -1) {
            lVar4 = plVar10[5];
            iVar17 = iVar14;
            do {
              if (*(uint *)(lVar4 + (longlong)iVar17 * 0xe0) == local_278._0_4_) goto LAB_144161e91;
              iVar17 = *(int *)((longlong)iVar17 * 0xe0 + lVar4 + 0xd0);
            } while (iVar17 != -1);
          }
        }
      }
LAB_144161eb8:
      FUN_1410c6958(puVar18,&local_3d0,*param_1);
      dVar23 = (double)CONCAT44(uStack_3cc,local_3d0);
      local_3d4 = 0.0;
      local_3d8 = 0.0;
      (**(code **)(*(longlong *)*param_1 + 0x528))((longlong *)*param_1,&local_3d4,&local_3d8);
      local_408 = local_4b8;
      local_400 = local_498;
      local_3f8 = plVar9;
      local_3f0 = local_3d4;
      local_3ec = local_3d8;
      local_3e8 = &local_2a0;
      local_418 = (double)local_3d8 + local_3c0;
      local_420 = local_3c8 + 0.0;
      local_428 = dVar23 + 0.0;
      local_410 = param_1;
      local_3e0 = param_3;
      cVar3 = FUN_1441633ea();
      if (cVar3 == '\0') {
        local_438 = local_3c8;
        local_430 = local_3c0;
        local_440 = dVar23;
        cVar3 = FUN_1441633ea(&local_410);
        if (cVar3 == '\0') goto LAB_14416195d;
      }
      *param_3 = 1;
      lVar4 = plVar16[0x4d6];
      if (lVar4 == 0) {
        fVar22 = 0.0;
        fVar21 = 0.0;
      }
      else if ((char)plVar16[0x4d4] == '\x01') {
        fVar21 = *(float *)((longlong)plVar16 + 0x26a4);
        fVar22 = *(float *)(plVar16 + 0x4d5);
      }
      else {
        fVar21 = *(float *)(lVar4 + 0x4cc);
        fVar22 = *(float *)(lVar4 + 0x4d0);
      }
      dVar25 = DAT_14c8462d0 * 2.4000000953674316 + *(double *)(param_3 + 0x18);
      dVar28 = DAT_14c8462c8 * 2.4000000953674316 + *(double *)(param_3 + 0x10);
      dVar23 = DAT_14c8462c0 * 2.4000000953674316 + *(double *)(param_3 + 8);
      dVar32 = (double)fVar21;
      dVar34 = (double)fVar22;
      local_468 = DAT_14c8462d0 * dVar34 + local_290 * dVar32 + local_290 * dVar32 + dVar25;
      dStack_470 = DAT_14c8462c8 * dVar34 +
                   (double)plStack_298 * dVar32 + (double)plStack_298 * dVar32 + dVar28;
      local_478 = DAT_14c8462c0 * dVar34 + dVar32 * local_2a0 + dVar32 * local_2a0 + dVar23;
      local_458 = dVar23;
      local_450 = dVar28;
      local_448 = dVar25;
      memset(&local_3b8,0,0x100);
      local_2e8 = 0xffffffff;
      local_314 = 0xffffffff;
      fStack_3b4 = 1.0;
      local_1cc = 0;
      local_1c8 = 0x101;
      local_1a0 = 0;
      local_198 = 0x800000000;
      local_180 = 0;
      local_178 = 0x400000000;
      local_1e0 = 0;
      local_1d4 = 0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_1df = 1;
      local_1dd = 0;
      local_1d0 = 0;
      local_1dc = 0x1000000;
      local_1d8 = 1;
      if (*param_1 != 0) {
        local_190 = *(undefined4 *)(*param_1 + 0xc);
        local_178 = 0x400000001;
      }
      local_270 = CONCAT44(local_3d4,3);
      uStack_268 = CONCAT44(uStack_268._4_4_,local_3d8);
      local_4e0 = (**(code **)(*(longlong *)local_4a8[0x22] + 0x580))();
      local_4c8 = &DAT_14cad0f10;
      local_4d0 = &local_1f0;
      local_4e8 = &DAT_14c8463d0;
      local_4d8 = (uint *)&local_270;
      cVar3 = FUN_14021655c(local_4b8,&local_3b8,&local_458,&local_478);
      if (cVar3 != '\0') {
        local_468 = local_398;
        local_478 = (double)CONCAT44(uStack_3a4,local_3a8);
        dStack_470 = dStack_3a0;
      }
      if (local_180 != 0) {
        FUN_1400020a8();
      }
      if (local_1a0 != 0) {
        FUN_1400020a8();
      }
      local_468 = (local_468 - dVar25) * 0.5 + dVar25;
      dStack_470 = (dStack_470 - dVar28) * 0.5 + dVar28;
      local_478 = (local_478 - dVar23) * 0.5 + dVar23;
      local_480 = (DAT_14c846300 + DAT_14c846300) * dVar34 + local_468;
      local_488 = (DAT_14c8462f8 + DAT_14c8462f8) * dVar34 + dStack_470;
      local_490 = (DAT_14c8462f0 + DAT_14c8462f0) * dVar34 + local_478;
      memset(&local_1f0,0,0x100);
      plVar9 = local_4a8;
      local_120 = 0xffffffff;
      local_14c = 0xffffffff;
      local_1f0 = CONCAT44(0x3f800000,(undefined4)local_1f0);
      local_24c = 0;
      local_248 = 0x101;
      local_220 = 0;
      local_218 = 0x800000000;
      local_200 = 0;
      local_1f8 = 0x400000000;
      local_260 = 0;
      local_254 = 0;
      local_270 = 0;
      uStack_268 = 0;
      local_25f = 1;
      local_25d = 0;
      local_250 = 0;
      local_25c = 0x1000000;
      local_258 = 1;
      if (*param_1 != 0) {
        local_210 = *(undefined4 *)(*param_1 + 0xc);
        local_1f8 = 0x400000001;
      }
      local_3b8 = 3;
      fStack_3b4 = local_3d4;
      fStack_3b0 = local_3d8;
      local_4e0 = (**(code **)(*(longlong *)local_4a8[0x22] + 0x580))();
      local_4c8 = &DAT_14cad0f10;
      local_4e8 = &DAT_14c8463d0;
      local_4d8 = &local_3b8;
      local_4d0 = &local_270;
      cVar3 = FUN_14021655c(local_4b8,&local_1f0,&local_478,&local_490);
      pdVar19 = local_4b0;
      if (cVar3 != '\0') {
        local_3b8 = 0;
        fStack_3b4 = 0.0;
        fStack_3b0 = 0.0;
        memset(&local_3a8,0,0x100);
        local_2d8 = 0xffffffff;
        local_304 = 0xffffffff;
        uStack_3a4 = 0x3f800000;
        local_4e8 = (undefined8 *)0x0;
        (**(code **)(*plVar9 + 0x900))(plVar9,&local_1e0,&local_3b8,0);
        if (((local_3b8 ^ 0xffffffff) & 3) == 0) {
          pdVar19[2] = local_388;
          *pdVar19 = local_398;
          pdVar19[1] = dStack_390;
        }
      }
LAB_14416252e:
      if (local_200 != 0) {
        FUN_1400020a8();
      }
      if (local_220 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14416172d:
  *(undefined8 *)(param_3 + 0x20) = 0;
  auVar2 = _DAT_149934d80;
  if (plVar16 != (longlong *)0x0) {
    do {
      lVar4 = FUN_140bede9a(plVar16);
      if (lVar4 != 0) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar4);
        }
        *(longlong *)(param_3 + 0x20) = lVar4;
        dVar31 = *(double *)(param_3 + 8) - *(double *)(lVar4 + 0x260);
        dVar33 = *(double *)(param_3 + 0x10) - *(double *)(lVar4 + 0x268);
        local_4a8 = (longlong *)(*(double *)(param_3 + 0x18) - *(double *)(lVar4 + 0x270));
        dStack_4a0 = *(double *)(param_3 + 0x20) - *(double *)(lVar4 + 0x278);
        dVar24 = *(double *)(lVar4 + 0x240);
        dVar25 = -dVar24;
        dVar28 = -*(double *)(lVar4 + 0x248);
        dVar29 = *(double *)(lVar4 + 0x250) * -1.0;
        dVar30 = *(double *)(lVar4 + 600) * 1.0;
        dVar27 = dVar31 * dVar29 - dVar25 * (double)local_4a8;
        dVar34 = dVar33 * dVar25 - dVar31 * dVar28;
        dVar32 = (double)local_4a8 * dVar28 - dVar33 * dVar29;
        dVar32 = dVar32 + dVar32;
        dVar27 = dVar27 + dVar27;
        dVar34 = dVar34 + dVar34;
        auVar1 = *(undefined1 (*) [16])(lVar4 + 0x280);
        auVar26 = divpd(auVar2,auVar1);
        dVar23 = *(double *)(lVar4 + 0x290);
        *(double *)(param_3 + 0x28) =
             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar26._0_8_) *
             ((dVar34 * dVar28 - dVar27 * dVar29) + dVar30 * dVar32 + dVar31);
        *(double *)(param_3 + 0x30) =
             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar26._8_8_) *
             (dVar24 * dVar34 + dVar29 * dVar32 + dVar30 * dVar27 + dVar33);
        *(double *)(param_3 + 0x38) =
             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar23)) & (ulonglong)(1.0 / dVar23))
             * (dVar30 * dVar34 + (double)local_4a8 + (dVar27 * dVar25 - dVar32 * dVar28));
      }
    } while ((((plVar16[0x39] != 0) && (lVar4 = *(longlong *)(plVar16[0x39] + 0x120), lVar4 != 0))
             && (plVar16 = *(longlong **)(lVar4 + 0xa8), plVar16 != (longlong *)0x0)) &&
            (*(longlong *)(param_3 + 0x20) == 0));
  }
LAB_144162674:
  if ((local_f0 ^ (ulonglong)auStack_508) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441633ea FUN_1441633ea body=576 status=ok
// SIG undefined FUN_1441633ea(void)

undefined4 FUN_1441633ea(undefined8 *param_1,double *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  double *pdVar3;
  double dVar4;
  char cVar5;
  undefined4 uVar6;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  undefined4 local_200;
  undefined4 *local_1f8;
  undefined8 *local_1f0;
  undefined1 *local_1e8;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined1 local_1b0 [4];
  undefined4 local_1ac;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  double local_190;
  undefined4 local_10c;
  undefined4 local_e0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined2 local_9f;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined1 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined2 local_88;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_228;
  plVar1 = (longlong *)*param_1;
  memset(local_1b0,0,0x100);
  local_e0 = 0xffffffff;
  local_10c = 0xffffffff;
  local_1ac = 0x3f800000;
  local_8c = 0;
  local_88 = 0x101;
  local_60 = 0;
  local_58 = 0x800000000;
  local_40 = 0;
  local_38 = 0x400000000;
  local_a0 = 0;
  local_94 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_9f = 1;
  local_9d = 0;
  local_90 = 0;
  local_9c = 0x1000000;
  local_98 = 1;
  if (*plVar1 != 0) {
    local_50 = *(undefined4 *)(*plVar1 + 0xc);
    local_38 = 0x400000001;
  }
  uVar2 = param_1[1];
  local_1bc = param_1[4];
  local_1c0 = 3;
  local_200 = (**(code **)(**(longlong **)(param_1[3] + 0x110) + 0x580))();
  pdVar3 = (double *)param_1[5];
  dVar4 = (double)*(float *)(param_1[2] + 0x3f8);
  local_1c8 = pdVar3[2] * dVar4 + param_2[2];
  local_1d0 = pdVar3[1] * dVar4 + param_2[1];
  local_1d8 = dVar4 * *pdVar3 + *param_2;
  local_1e8 = &DAT_14cad0f10;
  local_1f0 = &local_b0;
  local_208 = &DAT_14c8463d0;
  local_1f8 = &local_1c0;
  cVar5 = FUN_14021655c(uVar2,local_1b0,param_2);
  if (cVar5 != '\0') {
    param_2[2] = local_190;
    *(undefined4 *)param_2 = local_1a0;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_19c;
    *(undefined4 *)(param_2 + 1) = uStack_198;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_194;
  }
  uVar6 = FUN_14189b42a(param_1[3],param_2,param_1[5],param_1[6] + 8);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14416362c FUN_14416362c body=372 status=ok
// SIG undefined FUN_14416362c(void)

undefined8 FUN_14416362c(longlong *param_1,double *param_2)

{
  double dVar1;
  longlong lVar2;
  double *pdVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  lVar2 = *param_1;
  pdVar3 = (double *)param_1[1];
  dVar10 = param_2[1] - pdVar3[1];
  dVar7 = *param_2 - *pdVar3;
  dVar1 = *(double *)(lVar2 + 0x128);
  dVar9 = *(double *)(lVar2 + 0x130);
  fVar8 = (float)SQRT(dVar1 * dVar1 + dVar9 * dVar9);
  dVar11 = dVar7 * dVar7 + dVar10 * dVar10;
  if (*(char *)(*(longlong *)(lVar2 + 0x44c0) + 0x3ec) == '\x01') {
    if ((dVar11 != 1.0) || (NAN(dVar11))) {
      if (9.99999993922529e-09 <= dVar11) {
        dVar10 = dVar10 * (1.0 / SQRT(dVar11));
        dVar7 = dVar7 * (1.0 / SQRT(dVar11));
        uVar12 = 0;
        uVar13 = 0;
      }
      else {
        uVar12 = (undefined4)DAT_14c8464f0;
        uVar13 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        dVar7 = DAT_14c8464e0;
        dVar10 = DAT_14c8464e8;
      }
    }
    else {
      uVar4 = -(ulonglong)(param_2[2] - pdVar3[2] == 0.0) & (ulonglong)(param_2[2] - pdVar3[2]);
      uVar12 = (undefined4)uVar4;
      uVar13 = (undefined4)(uVar4 >> 0x20);
    }
    dVar5 = (double)fVar8;
    dVar6 = *(double *)(lVar2 + 0x138) * DAT_14c8462d0;
    dVar9 = dVar9 * DAT_14c8462c8;
    *(double *)(lVar2 + 0x128) = dVar1 * DAT_14c8462c0 + dVar7 * dVar5;
    *(double *)(lVar2 + 0x130) = dVar9 + dVar10 * dVar5;
    *(double *)(lVar2 + 0x138) = dVar6 + (double)CONCAT44(uVar13,uVar12) * dVar5;
  }
  return CONCAT44((int)((ulonglong)SQRT(dVar11) >> 0x20),
                  (float)SQRT(dVar11) -
                  (*(float *)(param_1[2] + 0x5c) + *(float *)(param_1[2] + 0x60)) * fVar8);
}



// FUNCTION 1441637a0 FUN_1441637a0 body=91 status=ok
// SIG undefined FUN_1441637a0(void)

void FUN_1441637a0(void)

{
  if (DAT_14cbcb300 != 0) {
    if (DAT_14cbcb2f8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbcb2f8)(DAT_14cbcb2f8,0);
    FUN_1446efa72(&DAT_14cbcb2f8,0,0,0x10);
    DAT_14cbcb300 = 0;
  }
  if (DAT_14cbcb2f8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1441637fc FUN_1441637fc body=123 status=ok
// SIG undefined FUN_1441637fc(void)

undefined8 * FUN_1441637fc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144163878 FUN_144163878 body=123 status=ok
// SIG undefined FUN_144163878(void)

undefined8 * FUN_144163878(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441638f4 FUN_1441638f4 body=64 status=ok
// SIG undefined FUN_1441638f4(void)

undefined8 * FUN_1441638f4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b974290;
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



// FUNCTION 144163938 FUN_144163938 body=81 status=ok
// SIG undefined FUN_144163938(void)

undefined8 FUN_144163938(longlong param_1)

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



// FUNCTION 14416398e FUN_14416398e body=89 status=ok
// SIG undefined FUN_14416398e(void)

bool FUN_14416398e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441639d9;
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
LAB_1441639d9:
  return lVar6 == param_2;
}



// FUNCTION 144163a04 FUN_144163a04 body=170 status=ok
// SIG undefined FUN_144163a04(void)

void FUN_144163a04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974290;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  uVar3 = FUN_14477b664(*(undefined8 *)(param_1 + 0x38));
  uVar3 = FUN_14477b664(uVar3);
  puVar1[7] = uVar3;
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  return;
}



// FUNCTION 144163aae FUN_144163aae body=170 status=ok
// SIG undefined FUN_144163aae(void)

void FUN_144163aae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974290;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  uVar3 = FUN_14477b664(*(undefined8 *)(param_1 + 0x38));
  uVar3 = FUN_14477b664(uVar3);
  puVar1[7] = uVar3;
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  return;
}



// FUNCTION 144163b58 FUN_144163b58 body=208 status=ok
// SIG undefined FUN_144163b58(void)

void FUN_144163b58(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  _RTL_CRITICAL_SECTION *p_Var4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b974290;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  p_Var1[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  p_Var1[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  uVar3 = FUN_14477b664(*(undefined8 *)(param_1 + 0x38));
  p_Var4 = (_RTL_CRITICAL_SECTION *)FUN_14477b664(uVar3);
  p_Var1[1].CriticalSection = p_Var4;
  p_Var1[1].ProcessLocksList.Flink = *(_LIST_ENTRY **)(param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144163c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144163c32 FUN_144163c32 body=46 status=ok
// SIG undefined FUN_144163c32(void)

undefined8 FUN_144163c32(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_144163c60(param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 144163c60 FUN_144163c60 body=263 status=ok
// SIG undefined FUN_144163c60(void)

void FUN_144163c60(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  lVar1 = *param_1;
  lVar2 = (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x180))();
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
      uVar4 = FUN_14129cf48(*(undefined8 *)(lVar1 + 0x18));
      uVar5 = FUN_140115352(lVar2);
      local_b8 = local_b0;
      FUN_140d5168f(uVar5,param_1 + 1,uVar4,0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144163d68 FUN_144163d68 body=29 status=ok
// SIG undefined FUN_144163d68(void)

undefined8 FUN_144163d68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144163f04 FUN_144163f04 body=101 status=ok
// SIG undefined FUN_144163f04(void)

void FUN_144163f04(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 144163f6a FUN_144163f6a body=101 status=ok
// SIG undefined FUN_144163f6a(void)

void FUN_144163f6a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 144163fd0 FUN_144163fd0 body=134 status=ok
// SIG undefined FUN_144163fd0(void)

void FUN_144163fd0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b974720;
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
                    /* WARNING: Could not recover jumptable at 0x000144164047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144164060 FUN_144164060 body=269 status=ok
// SIG undefined FUN_144164060(void)

undefined8 FUN_144164060(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144164167;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144164167;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144164167:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14416411b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14416416e(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14416411b;
    }
  }
  uVar6 = 0;
LAB_14416411b:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14416416e FUN_14416416e body=257 status=ok
// SIG undefined FUN_14416416e(void)

undefined8 FUN_14416416e(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar4 = DAT_14c9647dc;
  lVar3 = DAT_14c9647c8;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return 0;
  }
  uVar5 = *(uint *)(param_1 + 1);
  if ((int)uVar5 < 0) {
    return 0;
  }
  if (DAT_14c9647dc <= (int)uVar5) {
    return 0;
  }
  plVar6 = (longlong *)
           ((ulonglong)((uVar5 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  if ((int)plVar6[2] != *(int *)((longlong)param_1 + 0xc)) {
    return 0;
  }
  if ((*(uint *)(plVar6 + 1) & 0x10200000) != 0) {
    return 0;
  }
  lVar2 = *plVar6;
  if (lVar2 == 0) {
    return 0;
  }
  uVar5 = *(int *)(*param_1 + 0xc48) + 1;
  *(uint *)(*param_1 + 0xc48) = uVar5;
  if (*(int *)(lVar2 + 0x66c) != 0) {
    uVar1 = *(uint *)(lVar2 + 0x668);
    lVar7 = 0;
    if (((int)uVar1 < 0) || (iVar4 <= (int)uVar1)) goto LAB_14416423c;
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(lVar3 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar6 != (longlong *)0x0) &&
       (((int)plVar6[2] == *(int *)(lVar2 + 0x66c) && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0))))
    {
      lVar7 = *plVar6;
      goto LAB_14416423c;
    }
  }
  lVar7 = 0;
LAB_14416423c:
  if (lVar7 == 0) {
    lVar7 = lVar2;
  }
  if (10 < uVar5 || *(uint *)(param_1 + 2) < *(uint *)(lVar7 + 0x720)) {
    *(undefined1 *)(lVar2 + 0xc5e) = 2;
    return 0;
  }
  return CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
}



// FUNCTION 144164270 FUN_144164270 body=29 status=ok
// SIG undefined FUN_144164270(void)

undefined8 FUN_144164270(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14416440c FUN_14416440c body=93 status=ok
// SIG undefined FUN_14416440c(void)

void FUN_14416440c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9748e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14416446a FUN_14416446a body=93 status=ok
// SIG undefined FUN_14416446a(void)

void FUN_14416446a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9748e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441644c8 FUN_1441644c8 body=126 status=ok
// SIG undefined FUN_1441644c8(void)

void FUN_1441644c8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9748e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144164537. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144164550 FUN_144164550 body=269 status=ok
// SIG undefined FUN_144164550(void)

undefined8 FUN_144164550(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144164657;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144164657;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144164657:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14416460b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14416465e(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14416460b;
    }
  }
  uVar6 = 0;
LAB_14416460b:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14416465e FUN_14416465e body=103 status=ok
// SIG undefined FUN_14416465e(void)

void FUN_14416465e(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *param_1;
  if (((*(int *)(lVar2 + 0xc04) != 0) && (uVar1 = *(uint *)(lVar2 + 0xc00), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(lVar2 + 0xc04))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        FUN_14624e8f6(lVar2,*puVar3);
        return;
      }
      FUN_14624e8f6(lVar2,0);
      return;
    }
  }
  return;
}



// FUNCTION 1441646c6 FUN_1441646c6 body=2503 status=ok
// SIG undefined FUN_1441646c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441646c6(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_c8 [32];
  uint local_a8;
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
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
       || ((plVar7 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar7 == (longlong *)0x0 || (*(uint *)(plVar7 + 2) != param_1[1])))) ||
      ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) || (*(longlong *)(param_1 + 2) == 0))
  goto LAB_144164738;
  if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
    lVar5 = *plVar7;
  }
  else {
    lVar5 = 0;
  }
  if (((*(int *)(lVar5 + 0xc2c) == 0) || (uVar1 = *(uint *)(lVar5 + 0xc28), (int)uVar1 < 0)) ||
     ((DAT_14c9647dc <= (int)uVar1 ||
      (((lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar11 == 0 ||
        (*(int *)(lVar11 + 0x10) != *(int *)(lVar5 + 0xc2c))) ||
       ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)))))) goto LAB_144164738;
  if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
    lVar5 = *plVar7;
  }
  else {
    lVar5 = 0;
  }
  if (*(int *)(lVar5 + 0xc2c) == 0) {
LAB_144164ec7:
    lVar11 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar5 + 0xc28);
    lVar11 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != *(int *)(lVar5 + 0xc2c) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))
         )) goto LAB_144164ec7;
      lVar11 = *plVar7;
    }
  }
  plVar7 = (longlong *)(**(code **)(*(longlong *)(lVar11 + 0x520) + 0xa8))(lVar11 + 0x520,0);
  if (plVar7 == (longlong *)0x0) {
LAB_144164882:
    plVar7 = (longlong *)0x0;
  }
  else {
    if (DAT_14cb63950 == 0) {
      local_70 = &local_58;
      local_58 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1464ec72a;
      local_78 = &LAB_1486f5f75;
      local_80 = &LAB_140945686;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x19d0;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    if ((*(int *)(plVar7[2] + 0x38) < *(int *)(DAT_14cb63950 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) !=
        DAT_14cb63950 + 0x30)) goto LAB_144164882;
  }
  if (param_1[1] == 0) {
LAB_144164ece:
    lVar5 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         ((*(uint *)(plVar4 + 2) != param_1[1] || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_144164ece;
      lVar5 = *plVar4;
    }
  }
  if (*(int *)(lVar5 + 0xc2c) == 0) {
LAB_144164ed5:
    lVar11 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar5 + 0xc28);
    lVar11 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         (((int)plVar4[2] != *(int *)(lVar5 + 0xc2c) || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))
         )) goto LAB_144164ed5;
      lVar11 = *plVar4;
    }
  }
  lVar5 = (**(code **)(*(longlong *)(lVar11 + 0x520) + 0xb8))(lVar11 + 0x520,plVar7);
  if (param_1[1] == 0) {
LAB_144164edc:
    lVar11 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar11 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         ((*(uint *)(plVar4 + 2) != param_1[1] || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_144164edc;
      lVar11 = *plVar4;
    }
  }
  lVar11 = (**(code **)(*(longlong *)(lVar11 + 0x3c0) + 0x58))(lVar11 + 0x3c0,&DAT_14cb71330);
  if (((lVar5 == 0) || (plVar7 == (longlong *)0x0)) || (lVar11 == 0)) goto LAB_144164738;
  if ((*(int *)(*(longlong *)(param_1 + 2) + 0xd10) < 1) ||
     (lVar6 = **(longlong **)(*(longlong *)(param_1 + 2) + 0xd08), lVar6 == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar6 + 0xc);
  }
  (**(code **)(*plVar7 + 0x490))(plVar7,lVar11,&DAT_14cad8330,uVar9);
  uVar1 = param_1[1];
  if (((uVar1 == 0) || (uVar2 = *param_1, (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) {
    if (_DAT_00000c18 != 0) {
LAB_144164ef2:
      lVar6 = 0;
      goto LAB_144164ac2;
    }
  }
  else {
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar4 == (longlong *)0x0) || (*(uint *)(plVar4 + 2) != uVar1)) ||
       ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) {
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar4;
    }
    if (*(longlong *)(lVar6 + 0xc18) != 0) {
      if (((DAT_14c9647dc <= (int)uVar2) ||
          (plVar4 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar4 == (longlong *)0x0)) ||
         ((*(uint *)(plVar4 + 2) != uVar1 || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_144164ef2;
      lVar6 = *plVar4;
LAB_144164ac2:
      local_58 = (code *)(double)*(float *)(*(longlong *)(lVar6 + 0xc18) + 0x678);
      local_50 = local_58;
      local_48 = local_58;
      (**(code **)(*plVar7 + 0x478))(plVar7);
    }
  }
  FUN_1406c4cb0(plVar7,1);
  *(undefined1 *)((longlong)plVar7 + 0x89c) = 1;
  *(byte *)(lVar5 + 0x78) = *(byte *)(lVar5 + 0x78) | 6;
  FUN_146247d00(lVar5);
  uVar1 = param_1[1];
  if (((uVar1 == 0) || (uVar2 = *param_1, (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) {
    if (_DAT_00000c20 != 0) {
LAB_144164f08:
      lVar6 = 0;
      goto LAB_144164bc0;
    }
  }
  else {
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar4 == (longlong *)0x0) || (*(uint *)(plVar4 + 2) != uVar1)) ||
       ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) {
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar4;
    }
    if (*(longlong *)(lVar6 + 0xc20) != 0) {
      if (((DAT_14c9647dc <= (int)uVar2) ||
          (plVar4 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar4 == (longlong *)0x0)) ||
         ((*(uint *)(plVar4 + 2) != uVar1 || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_144164f08;
      lVar6 = *plVar4;
LAB_144164bc0:
      lVar13 = (longlong)*(int *)(*(longlong *)(lVar6 + 0xc20) + 0x1d0);
      if (lVar13 != 0) {
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0xc20) + 0x1c8);
        lVar12 = 0;
        do {
          local_a0 = CONCAT31(local_a0._1_3_,1);
          local_a8 = local_a8 & 0xffffff00;
          FUN_1409804ea(lVar5,*(undefined8 *)(lVar6 + lVar12),0,0);
          lVar12 = lVar12 + 8;
        } while (lVar13 * 8 != lVar12);
      }
    }
  }
  lVar5 = *(longlong *)(lVar11 + 0xae8);
  if (lVar5 != 0) {
    lVar11 = FUN_14016d2a8();
    if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
        == lVar11 + 0x30)) {
      if (param_1[1] == 0) {
LAB_144164f53:
        lVar11 = 0;
      }
      else {
        uVar1 = *param_1;
        lVar11 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          plVar4 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((plVar4 == (longlong *)0x0) ||
             ((*(uint *)(plVar4 + 2) != param_1[1] || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
          goto LAB_144164f53;
          lVar11 = *plVar4;
        }
      }
      *(undefined8 *)(lVar5 + 0x15e4) = *(undefined8 *)(lVar11 + 0xc10);
      lVar11 = 0;
      FUN_140ef75a0(lVar5,*(undefined8 *)(param_1 + 2),0);
      uVar1 = *(uint *)((longlong)plVar7 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      iVar3 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar3 = *(int *)(lVar11 + 0x10);
        bVar14 = iVar3 == 0;
        if (bVar14) {
          *(int *)(lVar11 + 0x10) = iVar10;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar3 = iVar10;
        }
      }
      *(ulonglong *)(lVar5 + 0x15f4) = CONCAT44(iVar3,uVar1);
    }
  }
  uVar1 = param_1[1];
  if (uVar1 == 0) {
    if ((DAT_00000bc8 != '\0') || (_DAT_00000c20 == 0)) goto LAB_144164738;
LAB_144164f2c:
    if (*(longlong *)(_DAT_00000c20 + 0x238) == 0) goto LAB_144164738;
LAB_144164f42:
    uVar9 = 0;
LAB_144164f44:
    lVar5 = 0;
  }
  else {
    uVar2 = *param_1;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) {
      if (DAT_00000bc8 != '\0') goto LAB_144164738;
LAB_144165067:
      lVar5 = 0;
    }
    else {
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((plVar7 == (longlong *)0x0) || (*(uint *)(plVar7 + 2) != uVar1)) ||
         ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) {
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar7;
      }
      if (*(char *)(lVar5 + 0xbc8) != '\0') goto LAB_144164738;
      if (((DAT_14c9647dc <= (int)uVar2) ||
          (plVar7 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar7 == (longlong *)0x0)) ||
         ((*(uint *)(plVar7 + 2) != uVar1 || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))
      goto LAB_144165067;
      lVar5 = *plVar7;
    }
    if (*(longlong *)(lVar5 + 0xc20) == 0) goto LAB_144164738;
    if (((uVar1 == 0) || (uVar2 = *param_1, (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2))
    goto LAB_144164f2c;
    plVar7 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar7 == (longlong *)0x0) || (*(uint *)(plVar7 + 2) != uVar1)) ||
       ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) {
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar7;
    }
    if (*(longlong *)(*(longlong *)(lVar5 + 0xc20) + 0x238) == 0) goto LAB_144164738;
    if (DAT_14c9647dc <= (int)uVar2) goto LAB_144164f42;
    puVar8 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((puVar8 == (undefined8 *)0x0) || (*(uint *)(puVar8 + 2) != uVar1)) ||
       ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *puVar8;
    }
    plVar7 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar7 == (longlong *)0x0) || (*(uint *)(plVar7 + 2) != uVar1)) ||
       ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_144164f44;
    lVar5 = *plVar7;
  }
  FUN_1461a60e8(uVar9,*(longlong *)(lVar5 + 0xc20) + 0x238);
LAB_144164738:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441650b8 FUN_1441650b8 body=29 status=ok
// SIG undefined FUN_1441650b8(void)

undefined8 FUN_1441650b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144165126 FUN_144165126 body=195 status=ok
// SIG undefined FUN_144165126(void)

undefined8 FUN_144165126(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar3 = *param_1;
    lVar4 = FUN_140b94ea6(lVar2);
    if (lVar4 != 0) {
      dVar5 = *(double *)(lVar3 + 0x70) - *(double *)(lVar2 + 0x260);
      dVar7 = *(double *)(lVar3 + 0x78) - *(double *)(lVar2 + 0x268);
      dVar6 = *(double *)(lVar3 + 0x80) - *(double *)(lVar2 + 0x270);
      lVar3 = param_1[1];
      iVar1 = *(int *)(lVar3 + 0x208);
      *(uint *)(lVar3 + 0x208) = iVar1 + 1U;
      if (*(uint *)(lVar3 + 0x20c) < iVar1 + 1U) {
        FUN_148d47372(lVar3,iVar1);
      }
      lVar4 = *(longlong *)(lVar3 + 0x200);
      if (*(longlong *)(lVar3 + 0x200) == 0) {
        lVar4 = lVar3;
      }
      *(longlong *)(lVar4 + (longlong)iVar1 * 0x10) = lVar2;
      *(float *)(lVar4 + 8 + (longlong)iVar1 * 0x10) =
           (float)(dVar6 * dVar6 + dVar7 * dVar7 + dVar5 * dVar5);
    }
  }
  return 1;
}



// FUNCTION 1441651ea FUN_1441651ea body=376 status=ok
// SIG undefined FUN_1441651ea(void)

undefined8 FUN_1441651ea(longlong *param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  float *local_40;
  
  pfVar4 = (float *)(DAT_14c707940 ^ (ulonglong)auStack_98);
  param_2 = (longlong *)*param_2;
  local_40 = pfVar4;
  if (param_2 == (longlong *)0x0) goto LAB_14416532f;
  lVar2 = *param_1;
  (**(code **)(*param_2 + 0xa38))(param_2,&local_78);
  local_68 = 0xc2a0000000000000;
  local_50 = 0x42a0000000000000;
  dVar6 = *(double *)(lVar2 + 0x78);
  if ((dVar6 < local_78) || (dVar5 = 0.0, local_78 = local_60, local_60 < dVar6)) {
    dVar5 = (dVar6 - local_78) * (dVar6 - local_78);
  }
  dVar6 = *(double *)(lVar2 + 0x80);
  if ((dVar6 < local_70) || (local_70 = local_58, local_58 < dVar6)) {
    dVar5 = dVar5 + (dVar6 - local_70) * (dVar6 - local_70);
  }
  dVar6 = *(double *)(lVar2 + 0x88);
  if (-8796093022208.0 <= dVar6) {
    if (8796093022208.0 < dVar6) {
      dVar6 = dVar6 + -8796093022208.0;
      goto LAB_1441652db;
    }
  }
  else {
    dVar6 = dVar6 + 8796093022208.0;
LAB_1441652db:
    dVar5 = dVar5 + dVar6 * dVar6;
  }
  pfVar4 = (float *)param_1[1];
  if ((float)dVar5 <= *pfVar4) {
    pfVar3 = (float *)param_1[2];
    fVar1 = pfVar3[0x82];
    pfVar3[0x82] = (float)((int)fVar1 + 1);
    if ((uint)pfVar3[0x83] < (uint)((int)fVar1 + 1)) {
      FUN_148d47372(pfVar3,fVar1);
    }
    pfVar4 = *(float **)(pfVar3 + 0x80);
    if (*(float **)(pfVar3 + 0x80) == (float *)0x0) {
      pfVar4 = pfVar3;
    }
    *(longlong **)(pfVar4 + (longlong)(int)fVar1 * 4) = param_2;
    pfVar4[(longlong)(int)fVar1 * 4 + 2] = (float)dVar5;
  }
LAB_14416532f:
  if (((ulonglong)local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)pfVar4 >> 8),1);
}



// FUNCTION 14416536a FUN_14416536a body=29 status=ok
// SIG undefined FUN_14416536a(void)

undefined8 FUN_14416536a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144165506 FUN_144165506 body=93 status=ok
// SIG undefined FUN_144165506(void)

void FUN_144165506(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144165564 FUN_144165564 body=93 status=ok
// SIG undefined FUN_144165564(void)

void FUN_144165564(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441655c2 FUN_1441655c2 body=126 status=ok
// SIG undefined FUN_1441655c2(void)

void FUN_1441655c2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b974970;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144165631. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144165640 FUN_144165640 body=20 status=ok
// SIG undefined FUN_144165640(void)

undefined8 FUN_144165640(longlong param_1)

{
  FUN_140fe6de2(*(undefined8 *)(param_1 + 0x20));
  return 0;
}



// FUNCTION 144165654 FUN_144165654 body=266 status=ok
// SIG undefined FUN_144165654(void)

undefined8 FUN_144165654(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144165758;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144165758;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144165758:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14416570c;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_140fe6de2(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_14416570c;
    }
  }
  uVar6 = 0;
LAB_14416570c:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144165760 FUN_144165760 body=164 status=ok
// SIG undefined FUN_144165760(void)

void FUN_144165760(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  uVar4 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0x8c);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  else {
    iVar3 = iVar2 - uVar1;
    if (((longlong)iVar3 & 0xffffffffffffc00U) == 0) {
      if (iVar3 < 0x41 || iVar2 * 2 <= (int)(uVar1 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar1) {
      uVar4 = FUN_144a3809e(uVar4 << 4,0);
      uVar4 = uVar4 >> 4;
      iVar2 = *(int *)(param_1 + 0x8c);
    }
  }
  if ((int)uVar4 == iVar2) {
    return;
  }
  *(int *)(param_1 + 0x8c) = (int)uVar4;
  FUN_148bf5808(param_1,*(undefined4 *)(param_1 + 0x88),uVar4,0x10);
  return;
}



// FUNCTION 144165808 FUN_144165808 body=29 status=ok
// SIG undefined FUN_144165808(void)

undefined8 FUN_144165808(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14416583a FUN_14416583a body=93 status=ok
// SIG undefined FUN_14416583a(void)

void FUN_14416583a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9749e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144165898 FUN_144165898 body=93 status=ok
// SIG undefined FUN_144165898(void)

void FUN_144165898(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9749e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441658f6 FUN_1441658f6 body=126 status=ok
// SIG undefined FUN_1441658f6(void)

void FUN_1441658f6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9749e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144165965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144165980 FUN_144165980 body=22 status=ok
// SIG undefined FUN_144165980(void)

undefined1 FUN_144165980(longlong param_1)

{
  FUN_14589bc98(*(undefined8 *)(param_1 + 0x18),0);
  return 1;
}



// FUNCTION 144165996 FUN_144165996 body=29 status=ok
// SIG undefined FUN_144165996(void)

undefined8 FUN_144165996(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441659c8 FUN_1441659c8 body=93 status=ok
// SIG undefined FUN_1441659c8(void)

void FUN_1441659c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974a50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144165a26 FUN_144165a26 body=93 status=ok
// SIG undefined FUN_144165a26(void)

void FUN_144165a26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974a50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144165a84 FUN_144165a84 body=126 status=ok
// SIG undefined FUN_144165a84(void)

void FUN_144165a84(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b974a50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144165af3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144165b0e FUN_144165b0e body=22 status=ok
// SIG undefined FUN_144165b0e(void)

undefined1 FUN_144165b0e(longlong param_1)

{
  FUN_14589bc98(*(undefined8 *)(param_1 + 0x18),1);
  return 1;
}



// FUNCTION 144165b24 FUN_144165b24 body=29 status=ok
// SIG undefined FUN_144165b24(void)

undefined8 FUN_144165b24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144165b56 FUN_144165b56 body=93 status=ok
// SIG undefined FUN_144165b56(void)

void FUN_144165b56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974b30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144165bb4 FUN_144165bb4 body=93 status=ok
// SIG undefined FUN_144165bb4(void)

void FUN_144165bb4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974b30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144165c12 FUN_144165c12 body=126 status=ok
// SIG undefined FUN_144165c12(void)

void FUN_144165c12(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b974b30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144165c81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144165cb2 FUN_144165cb2 body=29 status=ok
// SIG undefined FUN_144165cb2(void)

undefined8 FUN_144165cb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144165ce4 FUN_144165ce4 body=93 status=ok
// SIG undefined FUN_144165ce4(void)

void FUN_144165ce4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974ba0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144165d42 FUN_144165d42 body=93 status=ok
// SIG undefined FUN_144165d42(void)

void FUN_144165d42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974ba0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144165da0 FUN_144165da0 body=126 status=ok
// SIG undefined FUN_144165da0(void)

void FUN_144165da0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b974ba0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144165e0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144165e28 FUN_144165e28 body=20 status=ok
// SIG undefined FUN_144165e28(void)

undefined1 FUN_144165e28(longlong param_1)

{
  FUN_1457a25ca(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 144165e3c FUN_144165e3c body=29 status=ok
// SIG undefined FUN_144165e3c(void)

undefined8 FUN_144165e3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144165e6e FUN_144165e6e body=93 status=ok
// SIG undefined FUN_144165e6e(void)

void FUN_144165e6e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974c10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144165ecc FUN_144165ecc body=93 status=ok
// SIG undefined FUN_144165ecc(void)

void FUN_144165ecc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974c10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144165f2a FUN_144165f2a body=126 status=ok
// SIG undefined FUN_144165f2a(void)

void FUN_144165f2a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b974c10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144165f99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144165fd8 FUN_144165fd8 body=57 status=ok
// SIG undefined FUN_144165fd8(void)

undefined8 FUN_144165fd8(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (((plVar1[0x59] != 0) && (*plVar1 != 0)) && (*(longlong *)(&DAT_00006850 + *plVar1) != 0)) {
    FUN_1412c2f4c(*(longlong *)(&DAT_00006850 + *plVar1),plVar1 + 0x59);
  }
  return 1;
}



// FUNCTION 144166012 FUN_144166012 body=29 status=ok
// SIG undefined FUN_144166012(void)

undefined8 FUN_144166012(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144166044 FUN_144166044 body=93 status=ok
// SIG undefined FUN_144166044(void)

void FUN_144166044(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974cb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441660a2 FUN_1441660a2 body=93 status=ok
// SIG undefined FUN_1441660a2(void)

void FUN_1441660a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974cb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144166100 FUN_144166100 body=126 status=ok
// SIG undefined FUN_144166100(void)

void FUN_144166100(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b974cb0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014416616f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144166190 FUN_144166190 body=30 status=ok
// SIG undefined FUN_144166190(void)

undefined8 FUN_144166190(longlong param_1)

{
  if (**(longlong **)(param_1 + 0x18) != 0) {
    FUN_146195bf8();
  }
  return 1;
}



// FUNCTION 1441661ae FUN_1441661ae body=29 status=ok
// SIG undefined FUN_1441661ae(void)

undefined8 FUN_1441661ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441661e0 FUN_1441661e0 body=93 status=ok
// SIG undefined FUN_1441661e0(void)

void FUN_1441661e0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b974d20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14416623e FUN_14416623e body=93 status=ok
// SIG undefined FUN_14416623e(void)

void FUN_14416623e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b974d20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14416629c FUN_14416629c body=126 status=ok
// SIG undefined FUN_14416629c(void)

void FUN_14416629c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b974d20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014416630b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144166332 FUN_144166332 body=35 status=ok
// SIG undefined FUN_144166332(void)

undefined8 FUN_144166332(longlong param_1)

{
  FUN_1400bc8c2(*(longlong *)(param_1 + 0x20) + 0x1b98,&DAT_14cbcb2d0);
  return 1;
}



// FUNCTION 144166356 FUN_144166356 body=29 status=ok
// SIG undefined FUN_144166356(void)

undefined8 FUN_144166356(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144166388 FUN_144166388 body=93 status=ok
// SIG undefined FUN_144166388(void)

void FUN_144166388(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974dd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441663e6 FUN_1441663e6 body=93 status=ok
// SIG undefined FUN_1441663e6(void)

void FUN_1441663e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974dd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144166444 FUN_144166444 body=126 status=ok
// SIG undefined FUN_144166444(void)

void FUN_144166444(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b974dd0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441664b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441664fc FUN_1441664fc body=67 status=ok
// SIG undefined FUN_1441664fc(void)

undefined8 FUN_1441664fc(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  *(undefined4 *)((longlong)plVar1 + 0x1bc) = 0;
  if (((plVar1[0x56] != 0) && (*plVar1 != 0)) && (*(longlong *)(&DAT_00006850 + *plVar1) != 0)) {
    FUN_1412c2f4c(*(longlong *)(&DAT_00006850 + *plVar1),plVar1 + 0x56);
  }
  return 1;
}



// FUNCTION 14416653f FUN_14416653f body=5150 status=ok
// SIG undefined FUN_14416653f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14416653f(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_c8 [32];
  char *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = "AssetRegistry";
  uStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca8a8 = (ulonglong)uVar2;
  _DAT_14cbca8b0 = 0x47efffffe0000000;
  _DAT_14cbca8b8 = 0x47efffffe0000000;
  _DAT_14cbca8c0 = 0x47efffffe0000000;
  DAT_14cbca8c8 = 0x47efffffe0000000;
  DAT_14cbca8d0 = 0x47efffffe0000000;
  DAT_14cbca8d8 = 0x47efffffe0000000;
  _DAT_14cbca8e0 = 0x47efffffe0000000;
  _DAT_14cbca8e8 = 0x47efffffe0000000;
  FUN_1446f470e(&DAT_14cbca8f0,L"ai_target",1);
  local_a8 = "bone";
  uStack_a0 = 4;
  uStack_9c = uStack_9c & 0xffffff00;
  FUN_14001a6c0(&local_a8,1);
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14cbca8f8);
  if (cVar1 == '\0') {
    _DAT_14cbca8f8 = 0;
    uRam000000014cbca900 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&DAT_14cbca908,L"is_flying",1);
  local_a8 = "Use";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca910 = (ulonglong)uVar2;
  local_a8 = "Sight";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca918 = (ulonglong)uVar2;
  local_a8 = "TargetLock";
  uStack_a0 = 10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca920 = (ulonglong)uVar2;
  _DAT_14cbca92c = 0;
  FUN_14052b5e0(&DAT_14cbca928,"PlayerAwareness",0);
  _DAT_14cbca938 = "PlayerAwareness";
  local_a8 = "basic";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca940 = (ulonglong)uVar2;
  local_a8 = "challenge";
  uStack_a0 = 9;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca948 = (ulonglong)uVar2;
  local_a8 = "online";
  uStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca950 = (ulonglong)uVar2;
  local_a8 = "social";
  uStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca958 = (ulonglong)uVar2;
  local_a8 = "alert";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca960 = (ulonglong)uVar2;
  local_a8 = "photo_mode";
  uStack_a0 = 10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca968 = (ulonglong)uVar2;
  local_a8 = "generic_task";
  uStack_a0 = 0xc;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca970 = (ulonglong)uVar2;
  local_a8 = "mission";
  uStack_a0 = 7;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca978 = (ulonglong)uVar2;
  local_a8 = "mail";
  uStack_a0 = 4;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca980 = (ulonglong)uVar2;
  local_a8 = "respawn";
  uStack_a0 = 7;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca988 = (ulonglong)uVar2;
  local_a8 = "tutorial";
  uStack_a0 = 8;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca990 = (ulonglong)uVar2;
  local_a8 = "special_notification";
  uStack_a0 = 0x14;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca998 = (ulonglong)uVar2;
  local_a8 = "generic_notification";
  uStack_a0 = 0x14;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca9a0 = (ulonglong)uVar2;
  local_a8 = "vault_card";
  uStack_a0 = 10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca9a8 = (ulonglong)uVar2;
  local_a8 = "ONLINE_MESSAGE";
  uStack_a0 = 0xe;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca9b0 = (ulonglong)uVar2;
  local_a8 = "INGAME_MESSAGE";
  uStack_a0 = 0xe;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca9b8 = (ulonglong)uVar2;
  local_a8 = "NOTIFICATION_MESSAGE";
  uStack_a0 = 0x14;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca9c0 = (ulonglong)uVar2;
  local_a8 = "MENU_TUTORIAL_MESSAGE";
  uStack_a0 = 0x15;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca9c8 = (ulonglong)uVar2;
  local_a8 = "collectible";
  uStack_a0 = 0xb;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbca9d0 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbca9d8,L"GoreStump_");
  atexit((_func_5014 *)&LAB_14415734c);
  FUN_140056680(&DAT_14cbca9e8,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_14415735d);
  FUN_140056680(&DAT_14cbca9f8,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_14415736e);
  FUN_140056680(&DAT_14cbcaa08,L"GoreFX_");
  atexit((_func_5014 *)&LAB_14415737f);
  FUN_1446f470e(&DAT_14cbcaa18,L"LIMB_GORED",1);
  _DAT_14cbcaa20 = 0x4072c00000000000;
  _DAT_14cbcaa28 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbcaa30,L"body",1);
  FUN_1446f470e(&DAT_14cbcaa38,L"title_card",1);
  FUN_1446f470e(&DAT_14cbcaa40,L"SkipStartAnimation",1);
  FUN_1446f470e(&DAT_14cbcaa48,L"AnimValue",1);
  FUN_1446f470e(&DAT_14cbcaa50,L"AllowMovementDuringStart",1);
  FUN_1446f470e(&DAT_14cbcaa58,L"AllowMovementDuringStart",1);
  FUN_1446f470e(&DAT_14cbcaa60,L"MoveToEnd",1);
  FUN_1446f470e(&DAT_14cbcaa68,L"PassDistance",1);
  FUN_1446f470e(&DAT_14cbcaa70,L"PassHeight",1);
  FUN_1446f470e(&DAT_14cbcaa78,L"EndDistance",1);
  FUN_1446f470e(&DAT_14cbcaa80,L"EndHeight",1);
  FUN_1446f470e(&DAT_14cbcaa88,L"SwoopAvoidanceLock",1);
  FUN_1446f470e(&DAT_14cbcaa90,L"is_flying",1);
  FUN_1446f470e(&DAT_14cbcaa98,L"ai_target",1);
  FUN_1446f470e(&DAT_14cbcaaa0,L"ChargeAttack",1);
  FUN_1446f470e(&DAT_14cbcaaa8,L"WhileInPosition",1);
  FUN_1446f470e(&DAT_14cbcaab0,L"AttackTarget",1);
  FUN_1446f470e(&DAT_14cbcaab8,L"FaceTarget",1);
  FUN_1446f470e(&DAT_14cbcaac0,L"MoveIntoPosition",1);
  FUN_1446f470e(&DAT_14cbcaac8,L"ChargeAttack_Move",1);
  FUN_1446f470e(&DAT_14cbcaad0,L"ChargeAttack_Still",1);
  FUN_1446f470e(&DAT_14cbcaad8,L"RotateToTarget",1);
  FUN_1446f470e(&DAT_14cbcaae0,L"ChargeAtTarget",1);
  FUN_1446f470e(&DAT_14cbcaae8,L"ai_target_radius",1);
  FUN_1446f470e(&DAT_14cbcaaf0,L"Cloak",1);
  FUN_1446f470e(&DAT_14cbcaaf8,L"Uncloak",1);
  FUN_1446f470e(&DAT_14cbcab00,L"ai_FFYLFocus",1);
  FUN_1446f470e(&DAT_14cbcab08,L"FaceTarget",1);
  FUN_1446f470e(&DAT_14cbcab10,L"DoTrick",1);
  FUN_1446f470e(&DAT_14cbcab18,L"ai_target",1);
  FUN_1446f470e(&DAT_14cbcab20,L"is_in_ffyl",1);
  FUN_1446f470e(&DAT_14cbcab28,L"ai_target_radius",1);
  FUN_1446f470e(&DAT_14cbcab30,L"Land",1);
  FUN_1446f470e(&DAT_14cbcab38,L"FindLanding",1);
  FUN_1446f470e(&DAT_14cbcab40,L"MoveOverLanding",1);
  FUN_1446f470e(&DAT_14cbcab48,L"LandingMove",1);
  FUN_1446f470e(&DAT_14cbcab50,L"LandingOffset",1);
  FUN_1446f470e(&DAT_14cbcab58,L"DoLanding",1);
  local_a8 = (char *)0xfb204b3f96c94be6;
  uStack_a0 = 0xbb3a5d8d;
  uStack_9c = 0xc56abeac;
  _DAT_14cbcab60 = 0x96c94be6;
  uRam000000014cbcab64 = 0xfb204b3f;
  uRam000000014cbcab68 = 0xbb3a5d8d;
  uRam000000014cbcab6c = 0xc56abeac;
  FUN_141005458(&local_a8,0,L"GbxBrainTaskSettings_Land",0);
  atexit((_func_5014 *)&LAB_14415a195);
  FUN_1446f470e(&DAT_14cbcab70,L"Revive",1);
  FUN_1446f470e(&DAT_14cbcab78,L"MoveToPosition",1);
  FUN_1446f470e(&DAT_14cbcab80,L"CastRevive",1);
  FUN_1446f470e(&DAT_14cbcab88,L"Gps_Revive_FindReviveTarget",1);
  FUN_1446f470e(&DAT_14cbcab90,L"Gps_Revive_FindRevivePosition",1);
  FUN_1446f470e(&DAT_14cbcab98,L"is_in_ffyl",1);
  FUN_1446f470e(&DAT_14cbcaba0,L"revive_target",1);
  DAT_14cbcaba8 = DAT_14cbcaba0;
  DAT_14cbcabb0 = 0xffffffff;
  FUN_1446f470e(&DAT_14cbcabb4,L"ai_target",1);
  FUN_1446f470e(&DAT_14cbcabc0,L"SwoopAttack",1);
  FUN_1446f470e(&DAT_14cbcabc8,L"MoveIntoPosition",1);
  FUN_1446f470e(&DAT_14cbcabd0,L"SwoopAttack_Move",1);
  FUN_1446f470e(&DAT_14cbcabd8,L"SwoopAttack_Still",1);
  FUN_1446f470e(&DAT_14cbcabe0,L"RotateToTarget",1);
  FUN_1446f470e(&DAT_14cbcabe8,L"SwoopAtTarget",1);
  FUN_1446f470e(&DAT_14cbcabf0,L"TakeOff",1);
  FUN_1446f470e(&DAT_14cbcabf8,L"Root",1);
  FUN_1446f470e(&DAT_14cbcac00,L"QueryGoal",1);
  FUN_1446f470e(&DAT_14cbcac08,L"FaceTarget",1);
  FUN_1446f470e(&DAT_14cbcac10,L"Cloak",1);
  FUN_1446f470e(&DAT_14cbcac18,L"RefreshGoal",1);
  FUN_1446f470e(&DAT_14cbcac20,L"Teleport",1);
  FUN_1446f470e(&DAT_14cbcac28,L"Uncloak",1);
  FUN_1446f470e(&DAT_14cbcac30,L"ai_target",1);
  FUN_1446f470e(&DAT_14cbcac38,L"ai_target_radius",1);
  local_a8 = "Use";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcac40 = (ulonglong)uVar2;
  local_a8 = "StopUse";
  uStack_a0 = 7;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcac48 = (ulonglong)uVar2;
  local_a8 = "SecondaryUse";
  uStack_a0 = 0xc;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcac50 = (ulonglong)uVar2;
  local_a8 = "StopSecondaryUse";
  uStack_a0 = 0x10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcac58 = (ulonglong)uVar2;
  DAT_14cbcac60 = 0;
  atexit((_func_5014 *)&LAB_14415a49a);
  local_a8 = "Cash";
  uStack_a0 = 4;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcaee0 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbcaee8,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14415a4b2);
  FUN_1446f470e(&DAT_14cbcaef8,L"UNSET",1);
  local_a8 = "init";
  uStack_a0 = 4;
  uStack_9c = uStack_9c & 0xffffff00;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "update";
  uStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "config_update";
  uStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "deinit";
  uStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&DAT_14cbcaf00,L"Party",1);
  FUN_1446f470e(&DAT_14cbcaf08,&DAT_149e063b2,1);
  FUN_1446f470e(&DAT_14cbcaf10,L"Actor",1);
  FUN_1446f470e(&DAT_14cbcaf18,L"CinematicDuration",1);
  FUN_1446f470e(&DAT_14cbcaf20,L"FadeDuration",1);
  FUN_1446f470e(&DAT_14cbcaf28,L"BufferDuration",1);
  FUN_1446f470e(&DAT_14cbcaf30,L"BookendCinematicMode",1);
  FUN_1446f470e(&DAT_14cbcaf38,L"CinematicMode",1);
  FUN_1446f470e(&DAT_14cbcaf40,L"GbxMomentNode_CinematicMissionGrant",1);
  FUN_1446f470e(&DAT_14cbcaf4c,L"Actor",1);
  _DAT_14cbcaf54 = 0xffffffff;
  _DAT_14cbcaf58 = 0;
  FUN_1446f470e(&DAT_14cbcaf5c,L"PostCinematicTeleportLocation",1);
  FUN_1446f470e(&DAT_14cbcaf68,L"Actor",1);
  FUN_1446f470e(&DAT_14cbcaf70,L"Target",1);
  FUN_1446f470e(&DAT_14cbcaf78,L"Stage",1);
  FUN_1446f470e(&DAT_14cbcaf80,L"ReviveTarget",1);
  local_a8 = "TargetStation";
  uStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcaf88 = (ulonglong)uVar2;
  local_a8 = "InitializeStandIn";
  uStack_a0 = 0x11;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcaf90 = (ulonglong)uVar2;
  DAT_14cbcafa0 = 0;
  atexit((_func_5014 *)&LAB_14415ef98);
  DAT_14cbcb048 = 0;
  DAT_14cbcb050 = 0;
  DAT_14cbcb054 = 4;
  atexit((_func_5014 *)&LAB_14415efb0);
  DAT_14cbcb058._0_4_ = 0;
  DAT_14cbcb058._4_4_ = 0;
  DAT_14cbcb090 = 0;
  DAT_14cbcb098 = 0;
  DAT_14cbcb09c = 6;
  atexit((_func_5014 *)&LAB_14415efc1);
  _DAT_14cbcb0a0 = 0;
  _DAT_14cbcb0a4 = 0;
  DAT_14cbcaf98._0_4_ = 0;
  DAT_14cbcaf98._4_4_ = 0;
  local_a8 = "ExperienceLevel";
  uStack_a0 = 0xf;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcb0a8 = (ulonglong)uVar2;
  local_a8 = "grappleable_object";
  uStack_a0 = 0x12;
  uStack_9c = uStack_9c & 0xffffff00;
  DAT_14cbcb0b0 = _DAT_14cbcb0a8;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcb0c0 = (ulonglong)uVar2;
  local_a8 = "grapple_point";
  uStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcb0c8 = (ulonglong)uVar2;
  local_a8 = "grapple_grate";
  uStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcb0d0 = (ulonglong)uVar2;
  local_a8 = "grapple_interactable";
  uStack_a0 = 0x14;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcb0d8 = (ulonglong)uVar2;
  local_a8 = "Grappled";
  uStack_a0 = 8;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbcb0b8 = (ulonglong)uVar2;
  local_a8 = "Pulled";
  uStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbcb0e0 = (ulonglong)uVar2;
  DAT_14cbcb148 = 0;
  _DAT_14cbcb150 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_144165364;
  local_a8 = &DAT_14011fc1e;
  FUN_14618bdb6(&local_a8);
  atexit((_func_5014 *)&LAB_144160423);
  DAT_14cbcb338 = 0;
  LOCK();
  DAT_14cbcb330 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_144160428);
  DAT_14cbcb1e0 = 0;
  DAT_14cbcb1e8 = 0;
  _DAT_14cbcb1f0 = 0;
  puVar4 = &DAT_14c846480;
  puVar5 = &DAT_14cbcb200;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  _DAT_14cbcb260 = 0;
  DAT_14cbcb268 = 0;
  DAT_14cbcb269 = 1;
  DAT_14cbcb26a = 0;
  DAT_14cbcb26b = 0;
  DAT_14cbcb26c = 0;
  _DAT_14cbcb270 = 0;
  DAT_14cbcb274 = 0;
  DAT_14cbcb278 = 0;
  DAT_14cbcb27c = 0;
  _DAT_14cbcb280 = 0;
  DAT_14cbcb284 = 0;
  DAT_14cbcb288 = 0;
  DAT_14cbcb290 = 0;
  DAT_14cbcb298 = 0;
  FUN_1446f470e(&DAT_14cbcb2a0,L"Attach",1);
  _DAT_14cbcb2b0 = &LAB_144160d30;
  _DAT_14cbcb2b8 = 0x461e9800;
  DAT_14cbcb2bc = 1;
  DAT_14cbcb2a8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbcb2a8;
  atexit((_func_5014 *)&LAB_144160d35);
  FUN_1446f470e(&DAT_14cbcb2c8,L"GrappleBraking",1);
  FUN_1446f470e(&DAT_14cbcb2d0,L"GrappleAscending",1);
  FUN_1446f470e(&DAT_14cbcb2d8,L"GrappleCourseCorrection",1);
  FUN_1446f470e(&DAT_14cbcb2e0,L"GrappleLaunchLock",1);
  FUN_1446f470e(&DAT_14cbcb2e8,L"GrappleMovingPlatform",1);
  FUN_1446f470e(&DAT_14cbcb2f0,L"Target",1);
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441679a4 FUN_1441679a4 body=445 status=ok
// SIG undefined FUN_1441679a4(void)

void FUN_1441679a4(longlong param_1,undefined8 param_2,longlong param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_3 != 0) && (*(longlong *)(param_1 + 0xbe0) != 0)) {
    FUN_148d481e6(param_1 + -0x1ad8,param_3);
    FUN_148dcaff2(*(undefined8 *)(param_1 + 0xbe0),&local_78);
    lVar1 = *(longlong *)(param_3 + 0x1c8);
    if (lVar1 == 0) {
      pdVar5 = (double *)&DAT_14c8464e0;
      uVar10 = (undefined4)DAT_14c8464f0;
      uVar11 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar10 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
      uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
      pdVar5 = (double *)(lVar1 + 0x260);
    }
    dVar3 = *pdVar5;
    dVar4 = pdVar5[1];
    lVar1 = *(longlong *)(param_1 + 0xbe0);
    lVar2 = *(longlong *)(lVar1 + 0x25f8);
    if (lVar2 == 0) {
      dVar7 = 0.0;
    }
    else {
      dVar7 = (double)*(float *)(lVar2 + 0x604);
    }
    dVar7 = (double)(float)(SQRT(*(double *)(lVar1 + 0x2830) * *(double *)(lVar1 + 0x2830) +
                                 *(double *)(lVar1 + 0x2838) * *(double *)(lVar1 + 0x2838)) * dVar7)
    ;
    dVar9 = local_70 * dVar7;
    dVar8 = dVar7 * local_78;
    if (lVar2 == 0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = *(float *)(lVar2 + 0x608) * 0.017453292;
    }
    fVar6 = tanf(fVar6);
    *param_4 = 4;
    *(double *)(param_4 + 8) = dVar3 + dVar8;
    *(double *)(param_4 + 0x10) = dVar4 + dVar9;
    *(double *)(param_4 + 0x18) =
         ((double)CONCAT44(uVar11,uVar10) + local_68 * dVar7) -
         (double)(fVar6 * (float)SQRT(dVar8 * dVar8 + dVar9 * dVar9));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_98);
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_14416085e(param_1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144167b86 FUN_144167b86 body=568 status=ok
// SIG undefined FUN_144167b86(void)

void FUN_144167b86(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  code *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_98 = param_3;
  if (param_1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_d0 = &local_90;
      local_90 = FUN_141864c34;
      local_c0 = FUN_14081d0ea;
      local_c8 = &LAB_1464cee30;
      local_d8 = &LAB_148bfac22;
      local_e0 = &LAB_140f21842;
      local_e8 = &DAT_149e063b2;
      local_f0 = 0;
      local_f8 = 0x10000004;
      local_100 = 0x10;
      local_108 = CONCAT44(local_108._4_4_,0x9cd0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      local_90 = (code *)((ulonglong)local_90 & 0xffffffffffffff00);
      local_68[0] = 0;
      FUN_1456bb102(&local_90,param_1);
      uVar3 = FUN_140a8b8c6(param_4,&local_90);
      local_100 = CONCAT31(local_100._1_3_,param_7);
      local_108 = CONCAT44(local_108._4_4_,param_6);
      FUN_1418e8158(&local_b0,param_1,param_5,uVar3);
      FUN_1448173f8(local_68);
      if (((char)local_90 == '\x03') &&
         (plVar2 = (longlong *)CONCAT44(uStack_7c,uStack_80), plVar2 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      local_90 = (code *)CONCAT44(local_90._4_4_,param_5);
      local_88 = local_b0;
      uStack_84 = uStack_ac;
      uStack_80 = uStack_a8;
      uStack_7c = uStack_a4;
      local_78 = local_a0;
      local_70 = 0;
      local_108 = param_8;
      FUN_140ecfed2(param_1 + 0x7c78,param_2,&local_98);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144167dc0 FUN_144167dc0 body=570 status=ok
// SIG undefined FUN_144167dc0(void)

void FUN_144167dc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined1 param_8)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  uint local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  code *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_d0 = &local_a0;
      local_a0 = FUN_141864c34;
      local_c0 = FUN_14081d0ea;
      local_c8 = &LAB_1464cee30;
      local_d8 = &LAB_148bfac22;
      local_e0 = &LAB_140f21842;
      local_e8 = &DAT_149e063b2;
      local_f0 = 0;
      local_f8 = 0x10000004;
      local_100 = 0x10;
      local_108 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      local_a0 = (code *)((ulonglong)local_a0 & 0xffffffffffffff00);
      local_78[0] = 0;
      FUN_1456bb102(&local_a0,param_1);
      uVar3 = FUN_140a8b8c6(param_4,&local_a0);
      local_100 = CONCAT31(local_100._1_3_,param_8);
      local_108 = param_7;
      FUN_1418e8158(&local_b8,param_1,param_5,uVar3);
      FUN_1448173f8(local_78);
      if (((char)local_a0 == '\x03') &&
         (plVar2 = (longlong *)CONCAT44(uStack_8c,uStack_90), plVar2 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      local_a0 = (code *)CONCAT44(local_a0._4_4_,param_5);
      local_98 = local_b8;
      uStack_94 = uStack_b4;
      uStack_90 = uStack_b0;
      uStack_8c = uStack_ac;
      local_88 = local_a8;
      local_80 = 0;
      local_108 = CONCAT31(local_108._1_3_,param_6);
      local_100 = local_100 & 0xffffff00;
      FUN_1410ce3d0(param_1 + 0x7c78,param_2,param_3);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144168034 FUN_144168034 body=46 status=ok
// SIG undefined FUN_144168034(void)

void FUN_144168034(void)

{
  if (DAT_14cbcb518 != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    DAT_14cbcb518 = 0;
  }
  return;
}



// FUNCTION 144168062 FUN_144168062 body=24 status=ok
// SIG undefined FUN_144168062(void)

bool FUN_144168062(longlong param_1)

{
  if (*(char *)(param_1 + 0x199) == '\x01') {
    return *(longlong *)(param_1 + 0x1c0) != 0;
  }
  return false;
}



// FUNCTION 14416807a FUN_14416807a body=588 status=ok
// SIG undefined FUN_14416807a(void)

void FUN_14416807a(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *param_1;
  local_d0 = *(undefined1 *)((longlong)param_1 + 0x41);
  uVar4 = 0;
  local_68[0] = 0;
  local_58 = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    uVar1 = *(uint *)(param_1 + 1);
    uVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)((longlong)param_1 + 0xc) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) {
        uVar4 = 0;
      }
      else {
        uVar4 = *puVar6;
      }
    }
  }
  local_d8 = local_68;
  local_c8 = 1;
  cVar3 = FUN_140c4ec74(lVar2,uVar4,param_1 + 3,(char)param_1[8]);
  if (((*(int *)((longlong)param_1 + 0x14) == 0) || (uVar1 = *(uint *)(param_1 + 2), (int)uVar1 < 0)
      ) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14416825c;
  lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (((lVar7 == 0) || (*(int *)(lVar7 + 0x10) != *(int *)((longlong)param_1 + 0x14))) ||
     ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) goto LAB_14416825c;
  if (*(longlong *)(lVar2 + 0x168) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)(lVar2 + 0x170);
  }
  uVar4 = (**(code **)(*plVar5 + 0x50))();
  local_98 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_90 = 0x8000000000;
  local_88 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x14) == 0) {
LAB_1441682b9:
    uVar8 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 2);
    uVar8 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)((longlong)param_1 + 0x14) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_1441682b9;
      uVar8 = *puVar6;
    }
  }
  FUN_14096df60(uVar4,uVar8,0,&local_b8);
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(&local_b8);
LAB_14416825c:
  if (cVar3 == '\0') {
    FUN_140c4e81e(lVar2);
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x148);
    if (lVar2 != 0) {
      uVar4 = FUN_1410ce2ea();
      plVar5 = (longlong *)FUN_144718840(lVar2,uVar4);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441682d8 FUN_1441682d8 body=59 status=ok
// SIG undefined FUN_1441682d8(void)

void FUN_1441682d8(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cbcb5a8;
  if (DAT_14cbcb5a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cbcb5a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144168308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144168339 FUN_144168339 body=41 status=ok
// SIG undefined FUN_144168339(void)

void FUN_144168339(void)

{
  DAT_14cbcb668 = 0;
  if (DAT_14cbcb660 != 0) {
    FUN_1400020a8();
  }
  FUN_145d694c4();
  return;
}


