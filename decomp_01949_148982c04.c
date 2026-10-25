// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148982c04 FUN_148982c04 body=26 status=ok
// SIG undefined FUN_148982c04(void)

bool FUN_148982c04(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148982c1e FUN_148982c1e body=24 status=ok
// SIG undefined FUN_148982c1e(void)

bool FUN_148982c1e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148982c42 FUN_148982c42 body=110 status=ok
// SIG undefined FUN_148982c42(void)

void FUN_148982c42(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b42a230;
  cVar1 = *(char *)(param_1 + 0xc);
  *(char *)((longlong)puVar2 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  }
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b42a1c0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar3;
  return;
}



// FUNCTION 148982cb0 FUN_148982cb0 body=110 status=ok
// SIG undefined FUN_148982cb0(void)

void FUN_148982cb0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b42a230;
  cVar1 = *(char *)(param_1 + 0xc);
  *(char *)((longlong)puVar2 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  }
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b42a1c0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar3;
  return;
}



// FUNCTION 148982d1e FUN_148982d1e body=148 status=ok
// SIG undefined FUN_148982d1e(void)

void FUN_148982d1e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  char cVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b42a230;
  cVar1 = *(char *)(param_1 + 0xc);
  *(char *)((longlong)&p_Var2->CriticalSection + 4) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)&p_Var2->CriticalSection = *(undefined4 *)(param_1 + 8);
  }
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b42a1c0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var2->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var2->ProcessLocksList).Blink + 4) = uVar3;
  p_Var2->EntryCount = DVar4;
  p_Var2->ContentionCount = DVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148982da2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148982db2 FUN_148982db2 body=102 status=ok
// SIG undefined FUN_148982db2(void)

void FUN_148982db2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  char local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
  local_1c = *(char *)(param_1 + 0xc);
  if (local_1c == '\x01') {
    local_20 = *(undefined4 *)(param_1 + 8);
  }
  (**(code **)(param_1 + 0x20))(uVar1,param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148982e1c FUN_148982e1c body=31 status=ok
// SIG undefined FUN_148982e1c(void)

undefined8 FUN_148982e1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148982e4c FUN_148982e4c body=29 status=ok
// SIG undefined FUN_148982e4c(void)

bool FUN_148982e4c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148982e6a FUN_148982e6a body=26 status=ok
// SIG undefined FUN_148982e6a(void)

bool FUN_148982e6a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148982e84 FUN_148982e84 body=93 status=ok
// SIG undefined FUN_148982e84(void)

void FUN_148982e84(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b42a2a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148982ee2 FUN_148982ee2 body=126 status=ok
// SIG undefined FUN_148982ee2(void)

void FUN_148982ee2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b42a2a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148982f51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148982f60 FUN_148982f60 body=35 status=ok
// SIG undefined FUN_148982f60(void)

void FUN_148982f60(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148982f7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148982f84 FUN_148982f84 body=142 status=ok
// SIG undefined FUN_148982f84(void)

bool FUN_148982f84(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148983018 FUN_148983018 body=81 status=ok
// SIG undefined FUN_148983018(void)

undefined8 FUN_148983018(longlong param_1)

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



// FUNCTION 148983070 FUN_148983070 body=89 status=ok
// SIG undefined FUN_148983070(void)

bool FUN_148983070(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1489830bb;
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
LAB_1489830bb:
  return lVar6 == param_2;
}



// FUNCTION 1489830f2 FUN_1489830f2 body=118 status=ok
// SIG undefined FUN_1489830f2(void)

void FUN_1489830f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a3e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42a370;
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



// FUNCTION 148983168 FUN_148983168 body=118 status=ok
// SIG undefined FUN_148983168(void)

void FUN_148983168(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a3e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42a370;
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



// FUNCTION 1489831de FUN_1489831de body=156 status=ok
// SIG undefined FUN_1489831de(void)

void FUN_1489831de(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b42a3e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42a370;
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
                    /* WARNING: Could not recover jumptable at 0x00014898326a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14898327a FUN_14898327a body=98 status=ok
// SIG undefined FUN_14898327a(void)

void FUN_14898327a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489832c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489832d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1489832de FUN_1489832de body=73 status=ok
// SIG undefined FUN_1489832de(void)

undefined8 * FUN_1489832de(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b42a500;
  FUN_1449db362(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 148983328 FUN_148983328 body=42 status=ok
// SIG undefined FUN_148983328(void)

undefined8 FUN_148983328(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"Timeout %.2f",(double)*(float *)(param_1 + 0x38));
  return param_2;
}



// FUNCTION 148983354 FUN_148983354 body=32 status=ok
// SIG undefined FUN_148983354(void)

undefined8 FUN_148983354(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FSequenceRule");
  return param_2;
}



// FUNCTION 14898337a FUN_14898337a body=89 status=ok
// SIG undefined FUN_14898337a(void)

bool FUN_14898337a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1489833c5;
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
LAB_1489833c5:
  return lVar6 == param_2;
}



// FUNCTION 1489833d4 FUN_1489833d4 body=118 status=ok
// SIG undefined FUN_1489833d4(void)

void FUN_1489833d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42a550;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14898344a FUN_14898344a body=156 status=ok
// SIG undefined FUN_14898344a(void)

void FUN_14898344a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42a550;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489834d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489834e6 FUN_1489834e6 body=100 status=ok
// SIG undefined FUN_1489834e6(void)

ulonglong FUN_1489834e6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14898353f:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14898353f;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 14898354a FUN_14898354a body=38 status=ok
// SIG undefined FUN_14898354a(void)

void FUN_14898354a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140cbef6c(&DAT_14cb8aee8);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b237790;
  return;
}



// FUNCTION 148983570 FUN_148983570 body=44 status=ok
// SIG undefined FUN_148983570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148983570(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8aef4 = _DAT_14cb8aef4 + -1;
  *param_1 = DAT_14cb8aee8;
  DAT_14cb8aee8 = param_1;
  return;
}



// FUNCTION 14898359c FUN_14898359c body=38 status=ok
// SIG undefined FUN_14898359c(void)

void FUN_14898359c(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b237790;
  return;
}



// FUNCTION 1489835c2 FUN_1489835c2 body=31 status=ok
// SIG undefined FUN_1489835c2(void)

undefined8 FUN_1489835c2(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xa8) != 0)) {
    uVar1 = FUN_1411ef472(*(longlong *)(param_2 + 0xa8),param_1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 148983632 FUN_148983632 body=70 status=ok
// SIG undefined FUN_148983632(void)

void FUN_148983632(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_141232168(param_2,2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14898367a FUN_14898367a body=70 status=ok
// SIG undefined FUN_14898367a(void)

void FUN_14898367a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_141232168(param_2,2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489836c2 FUN_1489836c2 body=70 status=ok
// SIG undefined FUN_1489836c2(void)

void FUN_1489836c2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_141232168(param_2,2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14898370a FUN_14898370a body=70 status=ok
// SIG undefined FUN_14898370a(void)

void FUN_14898370a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_141232168(param_2,2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148983752 FUN_148983752 body=70 status=ok
// SIG undefined FUN_148983752(void)

void FUN_148983752(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_141232168(param_2,2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14898379a FUN_14898379a body=70 status=ok
// SIG undefined FUN_14898379a(void)

void FUN_14898379a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_141232168(param_2,2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489837e2 FUN_1489837e2 body=70 status=ok
// SIG undefined FUN_1489837e2(void)

void FUN_1489837e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_141232168(param_2,2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14898382a FUN_14898382a body=144 status=ok
// SIG undefined FUN_14898382a(void)

void FUN_14898382a(undefined8 param_1,undefined8 param_2,byte param_3)

{
  code *pcVar1;
  uint *puVar2;
  undefined1 auStack_58 [32];
  uint local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = &local_38;
  local_20 = 4;
  local_38 = (uint)param_3;
  local_18 = 1;
  FUN_14125081c(param_1,param_2,puVar2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (uint *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489838bc FUN_1489838bc body=153 status=ok
// SIG undefined FUN_1489838bc(void)

void FUN_1489838bc(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = &local_38;
  local_20 = 0x18;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = *(undefined8 *)(param_3 + 4);
  local_18 = 4;
  FUN_14125081c(local_38,param_2,puVar2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148983956 FUN_148983956 body=153 status=ok
// SIG undefined FUN_148983956(void)

void FUN_148983956(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = &local_38;
  local_20 = 0x18;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = *(undefined8 *)(param_3 + 4);
  local_18 = 5;
  FUN_14125081c(local_38,param_2,puVar2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489839f0 FUN_1489839f0 body=172 status=ok
// SIG undefined FUN_1489839f0(void)

void FUN_1489839f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 8;
  local_48[0] = (undefined8 ***)0x0;
  FUN_14485c47a(local_48,param_3);
  local_28 = 6;
  FUN_14125081c(param_1,param_2,local_48);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_48;
    if (0x18 < local_30) {
      pppuVar2 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148983a9e FUN_148983a9e body=265 status=ok
// SIG undefined FUN_148983a9e(void)

void FUN_148983a9e(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  code *pcVar1;
  longlong lVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_88 [40];
  undefined8 **local_60;
  int local_58;
  undefined4 local_54;
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0x10;
  local_60 = (undefined8 ***)0x0;
  local_58 = (int)param_3[1];
  lVar2 = (longlong)local_58;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_58,0);
    memcpy(local_60,_Src,lVar2 * 2);
  }
  local_40 = 8;
  FUN_14125081c(param_1,param_2,&local_60);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = &local_60;
    if (0x18 < local_48) {
      pppuVar3 = (undefined8 ***)local_60;
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148983ba8 FUN_148983ba8 body=141 status=ok
// SIG undefined FUN_148983ba8(void)

void FUN_148983ba8(undefined8 param_1,undefined8 param_2,undefined8 ***param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_58 [32];
  undefined8 **local_38 [3];
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 8;
  local_18 = 0x12;
  local_38[0] = param_3;
  FUN_14125081c(param_1,param_2,local_38);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_38;
    if (0x18 < local_20) {
      pppuVar2 = (undefined8 ***)local_38[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(local_38[0]);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148983c36 FUN_148983c36 body=142 status=ok
// SIG undefined FUN_148983c36(void)

void FUN_148983c36(undefined8 param_1,undefined8 param_2,undefined8 ***param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_58 [32];
  undefined8 **local_38 [3];
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 8;
  local_18 = 0x15;
  local_38[0] = param_3;
  FUN_14125081c(param_1,param_2,local_38);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_38;
    if (0x18 < local_20) {
      pppuVar2 = (undefined8 ***)local_38[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(local_38[0]);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148983cc6 FUN_148983cc6 body=250 status=ok
// SIG undefined FUN_148983cc6(void)

undefined8 FUN_148983cc6(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [56];
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_141001a28(local_88);
  local_b8[0] = 0;
  local_90 = 0;
  FUN_1456bb102(local_b8,param_2);
  FUN_1447c3578(local_88,local_50,local_b8);
  FUN_142b38d56(local_50,param_1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_50;
    if (0x18 < local_38) {
      pppuVar2 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_b8);
  FUN_144a2da94(local_88);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148983dc2 FUN_148983dc2 body=253 status=ok
// SIG undefined FUN_148983dc2(void)

undefined8 FUN_148983dc2(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [56];
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_141001a28(local_88,param_1,param_2);
  local_b8[0] = 0;
  local_90 = 0;
  FUN_1456bb102(local_b8,param_1);
  FUN_1447c3578(local_88,local_50,local_b8);
  uVar2 = FUN_14070d842(local_50);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_50;
    if (0x18 < local_38) {
      pppuVar3 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_b8);
  FUN_144a2da94(local_88);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148983ec0 FUN_148983ec0 body=250 status=ok
// SIG undefined FUN_148983ec0(void)

undefined8 FUN_148983ec0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [56];
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_141001a28(local_88);
  local_b8[0] = 0;
  local_90 = 0;
  FUN_1456bb102(local_b8,param_2);
  FUN_1447c3578(local_88,local_50,local_b8);
  FUN_1461dc38e(local_50,param_1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_50;
    if (0x18 < local_38) {
      pppuVar2 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_b8);
  FUN_144a2da94(local_88);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148983fbc FUN_148983fbc body=250 status=ok
// SIG undefined FUN_148983fbc(void)

undefined8 FUN_148983fbc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [56];
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_141001a28(local_88);
  local_b8[0] = 0;
  local_90 = 0;
  FUN_1456bb102(local_b8,param_2);
  FUN_1447c3578(local_88,local_50,local_b8);
  FUN_1457d43e4(local_50,param_1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_50;
    if (0x18 < local_38) {
      pppuVar2 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_b8);
  FUN_144a2da94(local_88);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489840b8 FUN_1489840b8 body=263 status=ok
// SIG undefined FUN_1489840b8(void)

undefined4 FUN_1489840b8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined4 uVar3;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [40];
  undefined4 local_98;
  undefined1 local_90 [56];
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_141001a28(local_90,param_1,param_2);
  local_c0[0] = 0;
  local_98 = 0;
  FUN_1456bb102(local_c0,param_1);
  FUN_1447c3578(local_90,local_58,local_c0);
  uVar3 = FUN_140ee352e(local_58);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_58;
    if (0x18 < local_40) {
      pppuVar2 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_c0);
  FUN_144a2da94(local_90);
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489841c0 FUN_1489841c0 body=141 status=ok
// SIG undefined FUN_1489841c0(void)

void FUN_1489841c0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = &local_38;
  local_20 = 4;
  local_18 = 2;
  local_38 = param_3;
  FUN_1414d6f82(param_1,param_2,puVar2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14898424e FUN_14898424e body=142 status=ok
// SIG undefined FUN_14898424e(void)

void FUN_14898424e(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = &local_38;
  local_20 = 4;
  local_18 = 3;
  local_38 = param_3;
  FUN_1414d6f82(param_1,param_2,puVar2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489842de FUN_1489842de body=153 status=ok
// SIG undefined FUN_1489842de(void)

void FUN_1489842de(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = &local_38;
  local_20 = 0x18;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = *(undefined8 *)(param_3 + 4);
  local_18 = 5;
  FUN_1414d6f82(local_38,param_2,puVar2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148984378 FUN_148984378 body=172 status=ok
// SIG undefined FUN_148984378(void)

void FUN_148984378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 8;
  local_48[0] = (undefined8 ***)0x0;
  FUN_14485c47a(local_48,param_3);
  local_28 = 6;
  FUN_1414d6f82(param_1,param_2,local_48);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_48;
    if (0x18 < local_30) {
      pppuVar2 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148984426 FUN_148984426 body=172 status=ok
// SIG undefined FUN_148984426(void)

void FUN_148984426(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 8;
  local_48[0] = (undefined8 ***)0x0;
  FUN_14485c47a(local_48,param_3);
  local_28 = 7;
  FUN_1414d6f82(param_1,param_2,local_48);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_48;
    if (0x18 < local_30) {
      pppuVar2 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489844d4 FUN_1489844d4 body=265 status=ok
// SIG undefined FUN_1489844d4(void)

void FUN_1489844d4(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  code *pcVar1;
  longlong lVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_88 [40];
  undefined8 **local_60;
  int local_58;
  undefined4 local_54;
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0x10;
  local_60 = (undefined8 ***)0x0;
  local_58 = (int)param_3[1];
  lVar2 = (longlong)local_58;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_58,0);
    memcpy(local_60,_Src,lVar2 * 2);
  }
  local_40 = 8;
  FUN_1414d6f82(param_1,param_2,&local_60);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = &local_60;
    if (0x18 < local_48) {
      pppuVar3 = (undefined8 ***)local_60;
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489845de FUN_1489845de body=141 status=ok
// SIG undefined FUN_1489845de(void)

void FUN_1489845de(undefined8 param_1,undefined8 param_2,undefined8 ***param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_58 [32];
  undefined8 **local_38 [3];
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 8;
  local_18 = 0x12;
  local_38[0] = param_3;
  FUN_1414d6f82(param_1,param_2,local_38);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_38;
    if (0x18 < local_20) {
      pppuVar2 = (undefined8 ***)local_38[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(local_38[0]);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14898466c FUN_14898466c body=228 status=ok
// SIG undefined FUN_14898466c(void)

void FUN_14898466c(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  byte param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined1 auStack_a8 [32];
  uint *local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  uint local_60;
  undefined4 uStack_5c;
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar3 = &local_60;
  local_48 = 4;
  local_60 = (uint)param_5;
  local_40 = 1;
  local_78 = *param_3;
  uVar2 = FUN_14477b664(param_3[1]);
  local_70 = FUN_14477b664(uVar2);
  local_68 = param_3[2];
  local_88 = puVar3;
  FUN_143e2e9cc(param_1,param_2,&local_78,param_4);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_48) {
      puVar3 = (uint *)CONCAT44(uStack_5c,local_60);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(CONCAT44(uStack_5c,local_60));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148984752 FUN_148984752 body=225 status=ok
// SIG undefined FUN_148984752(void)

void FUN_148984752(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar3 = &local_60;
  local_48 = 4;
  local_60 = param_5;
  local_40 = 2;
  local_78 = *param_3;
  uVar2 = FUN_14477b664(param_3[1]);
  local_70 = FUN_14477b664(uVar2);
  local_68 = param_3[2];
  local_88 = puVar3;
  FUN_143e2e9cc(param_1,param_2,&local_78,param_4);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_48) {
      puVar3 = (undefined4 *)CONCAT44(uStack_5c,local_60);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(CONCAT44(uStack_5c,local_60));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148984834 FUN_148984834 body=229 status=ok
// SIG undefined FUN_148984834(void)

void FUN_148984834(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar3 = &local_60;
  local_48 = 4;
  local_60 = param_5;
  local_40 = 3;
  local_78 = *param_3;
  uVar2 = FUN_14477b664(param_3[1]);
  local_70 = FUN_14477b664(uVar2);
  local_68 = param_3[2];
  local_88 = puVar3;
  FUN_143e2e9cc(param_1,param_2,&local_78,param_4);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_48) {
      puVar3 = (undefined4 *)CONCAT44(uStack_5c,local_60);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(CONCAT44(uStack_5c,local_60));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14898491a FUN_14898491a body=238 status=ok
// SIG undefined FUN_14898491a(void)

void FUN_14898491a(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ushort local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar3 = &local_68;
  local_50 = 0x18;
  local_68 = *param_5;
  uStack_64 = param_5[1];
  uStack_60 = param_5[2];
  uStack_5c = param_5[3];
  local_58 = *(undefined8 *)(param_5 + 4);
  local_48 = 4;
  local_80 = *param_3;
  uVar2 = FUN_14477b664(param_3[1]);
  local_78 = FUN_14477b664(uVar2);
  local_70 = param_3[2];
  local_88 = puVar3;
  FUN_143e2e9cc(param_1,param_2,&local_80,param_4);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_50) {
      puVar3 = (undefined4 *)CONCAT44(uStack_64,local_68);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(CONCAT44(uStack_64,local_68));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148984a0a FUN_148984a0a body=238 status=ok
// SIG undefined FUN_148984a0a(void)

void FUN_148984a0a(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ushort local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar3 = &local_68;
  local_50 = 0x18;
  local_68 = *param_5;
  uStack_64 = param_5[1];
  uStack_60 = param_5[2];
  uStack_5c = param_5[3];
  local_58 = *(undefined8 *)(param_5 + 4);
  local_48 = 5;
  local_80 = *param_3;
  uVar2 = FUN_14477b664(param_3[1]);
  local_78 = FUN_14477b664(uVar2);
  local_70 = param_3[2];
  local_88 = puVar3;
  FUN_143e2e9cc(param_1,param_2,&local_80,param_4);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_50) {
      puVar3 = (undefined4 *)CONCAT44(uStack_64,local_68);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(CONCAT44(uStack_64,local_68));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148984afa FUN_148984afa body=239 status=ok
// SIG undefined FUN_148984afa(void)

void FUN_148984afa(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_a8 [32];
  undefined8 **local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 **local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 8;
  local_60[0] = (undefined8 ***)0x0;
  FUN_14485c47a(local_60,param_5);
  local_40 = 6;
  local_78 = *param_3;
  uVar2 = FUN_14477b664(param_3[1]);
  local_70 = FUN_14477b664(uVar2);
  local_68 = param_3[2];
  local_88 = local_60;
  FUN_143e2e9cc(param_1,param_2,&local_78,param_4);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_60;
    if (0x18 < local_48) {
      pppuVar3 = (undefined8 ***)local_60[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148984bea FUN_148984bea body=239 status=ok
// SIG undefined FUN_148984bea(void)

void FUN_148984bea(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_a8 [32];
  undefined8 **local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 **local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 8;
  local_60[0] = (undefined8 ***)0x0;
  FUN_14485c47a(local_60,param_5);
  local_40 = 7;
  local_78 = *param_3;
  uVar2 = FUN_14477b664(param_3[1]);
  local_70 = FUN_14477b664(uVar2);
  local_68 = param_3[2];
  local_88 = local_60;
  FUN_143e2e9cc(param_1,param_2,&local_78,param_4);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_60;
    if (0x18 < local_48) {
      pppuVar3 = (undefined8 ***)local_60[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148984cda FUN_148984cda body=333 status=ok
// SIG undefined FUN_148984cda(void)

void FUN_148984cda(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  longlong *param_5)

{
  void *_Src;
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_b8 [32];
  undefined8 **local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 **local_70;
  int local_68;
  undefined4 local_64;
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0x10;
  local_70 = (undefined8 ***)0x0;
  local_68 = (int)param_5[1];
  lVar3 = (longlong)local_68;
  _Src = (void *)*param_5;
  if (lVar3 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_68,0);
    memcpy(local_70,_Src,lVar3 * 2);
  }
  local_50 = 8;
  local_88 = *param_3;
  uVar2 = FUN_14477b664(param_3[1]);
  local_80 = FUN_14477b664(uVar2);
  local_78 = param_3[2];
  local_98 = &local_70;
  FUN_143e2e9cc(param_1,param_2,&local_88,param_4);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar4 = &local_70;
    if (0x18 < local_58) {
      pppuVar4 = (undefined8 ***)local_70;
    }
    (*pcVar1)(pppuVar4);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70);
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148984e28 FUN_148984e28 body=227 status=ok
// SIG undefined FUN_148984e28(void)

void FUN_148984e28(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 ***param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_a8 [32];
  undefined8 **local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 **local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 8;
  local_60[0] = param_5;
  local_40 = 0x12;
  local_78 = *param_3;
  uVar2 = FUN_14477b664(param_3[1]);
  local_70 = FUN_14477b664(uVar2);
  local_68 = param_3[2];
  local_88 = local_60;
  FUN_143e2e9cc(param_1,param_2,&local_78,param_4);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_60;
    if (0x18 < local_48) {
      pppuVar3 = (undefined8 ***)local_60[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148984f0c FUN_148984f0c body=229 status=ok
// SIG undefined FUN_148984f0c(void)

void FUN_148984f0c(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 ***param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_a8 [32];
  undefined8 **local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 **local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 8;
  local_60[0] = param_5;
  local_40 = 0x15;
  local_78 = *param_3;
  uVar2 = FUN_14477b664(param_3[1]);
  local_70 = FUN_14477b664(uVar2);
  local_68 = param_3[2];
  local_88 = local_60;
  FUN_143e2e9cc(param_1,param_2,&local_78,param_4);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_60;
    if (0x18 < local_48) {
      pppuVar3 = (undefined8 ***)local_60[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148984ff2 FUN_148984ff2 body=214 status=ok
// SIG undefined FUN_148984ff2(void)

undefined4
FUN_148984ff2(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *param_3;
  uVar3 = FUN_14477b664(param_3[1]);
  local_68 = FUN_14477b664(uVar3);
  local_60 = param_3[2];
  local_78 = param_4;
  FUN_1461c1730(local_58,param_1,param_2,&local_70);
  uVar2 = FUN_144a7fca4(local_58);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar4 = local_58;
    if (0x18 < local_40) {
      pppuVar4 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar4);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489850ca FUN_1489850ca body=214 status=ok
// SIG undefined FUN_1489850ca(void)

undefined4
FUN_1489850ca(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *param_3;
  uVar3 = FUN_14477b664(param_3[1]);
  local_68 = FUN_14477b664(uVar3);
  local_60 = param_3[2];
  local_78 = param_4;
  FUN_1461c1730(local_58,param_1,param_2,&local_70);
  uVar2 = FUN_1405d5f74(local_58);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar4 = local_58;
    if (0x18 < local_40) {
      pppuVar4 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar4);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489851a2 FUN_1489851a2 body=232 status=ok
// SIG undefined FUN_1489851a2(void)

undefined4
FUN_1489851a2(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined4 uVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 **local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = *param_3;
  uVar2 = FUN_14477b664(param_3[1]);
  local_78 = FUN_14477b664(uVar2);
  local_70 = param_3[2];
  local_88 = param_4;
  FUN_1461c1730(local_68,param_1,param_2,&local_80);
  uVar4 = FUN_144a7ecd0(local_68);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_68;
    if (0x18 < local_50) {
      pppuVar3 = (undefined8 ***)local_68[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68[0]);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14898528c FUN_14898528c body=228 status=ok
// SIG undefined FUN_14898528c(void)

undefined8
FUN_14898528c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 **local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_4;
  uVar2 = FUN_14477b664(param_4[1]);
  local_70 = FUN_14477b664(uVar2);
  local_68 = param_4[2];
  local_88 = param_5;
  FUN_1461c1730(local_60,param_2,param_3,&local_78);
  FUN_144a7b7fe(local_60,param_1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_60;
    if (0x18 < local_48) {
      pppuVar3 = (undefined8 ***)local_60[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148985372 FUN_148985372 body=228 status=ok
// SIG undefined FUN_148985372(void)

undefined8
FUN_148985372(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 **local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_4;
  uVar2 = FUN_14477b664(param_4[1]);
  local_70 = FUN_14477b664(uVar2);
  local_68 = param_4[2];
  local_88 = param_5;
  FUN_1461c1730(local_60,param_2,param_3,&local_78);
  FUN_142b38d56(local_60,param_1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_60;
    if (0x18 < local_48) {
      pppuVar3 = (undefined8 ***)local_60[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148985458 FUN_148985458 body=216 status=ok
// SIG undefined FUN_148985458(void)

undefined8
FUN_148985458(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *param_3;
  uVar2 = FUN_14477b664(param_3[1]);
  local_68 = FUN_14477b664(uVar2);
  local_60 = param_3[2];
  local_78 = param_4;
  FUN_1461c1730(local_58,param_1,param_2,&local_70);
  uVar2 = FUN_14070d842(local_58);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_58;
    if (0x18 < local_40) {
      pppuVar3 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148985532 FUN_148985532 body=228 status=ok
// SIG undefined FUN_148985532(void)

undefined8
FUN_148985532(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 **local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_4;
  uVar2 = FUN_14477b664(param_4[1]);
  local_70 = FUN_14477b664(uVar2);
  local_68 = param_4[2];
  local_88 = param_5;
  FUN_1461c1730(local_60,param_2,param_3,&local_78);
  FUN_1461dc38e(local_60,param_1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_60;
    if (0x18 < local_48) {
      pppuVar3 = (undefined8 ***)local_60[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148985618 FUN_148985618 body=228 status=ok
// SIG undefined FUN_148985618(void)

undefined8
FUN_148985618(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 **local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_4;
  uVar2 = FUN_14477b664(param_4[1]);
  local_70 = FUN_14477b664(uVar2);
  local_68 = param_4[2];
  local_88 = param_5;
  FUN_1461c1730(local_60,param_2,param_3,&local_78);
  FUN_1457d43e4(local_60,param_1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_60;
    if (0x18 < local_48) {
      pppuVar3 = (undefined8 ***)local_60[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489856fe FUN_1489856fe body=232 status=ok
// SIG undefined FUN_1489856fe(void)

undefined4
FUN_1489856fe(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined4 uVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 **local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = *param_3;
  uVar2 = FUN_14477b664(param_3[1]);
  local_78 = FUN_14477b664(uVar2);
  local_70 = param_3[2];
  local_88 = param_4;
  FUN_1461c1730(local_68,param_1,param_2,&local_80);
  uVar4 = FUN_140ee352e(local_68);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_68;
    if (0x18 < local_50) {
      pppuVar3 = (undefined8 ***)local_68[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68[0]);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489857e8 FUN_1489857e8 body=80 status=ok
// SIG undefined FUN_1489857e8(void)

void FUN_1489857e8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_4;
  (**(code **)(*param_1 + 0x40))();
  FUN_1401861f4(param_1 + 7,*(undefined4 *)((longlong)param_1 + 0x34));
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489858e6 FUN_1489858e6 body=294 status=ok
// SIG undefined FUN_1489858e6(void)

void FUN_1489858e6(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b42b210;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = &LAB_148985844;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b42b210;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_148985844;
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148985994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148985a0c FUN_148985a0c body=240 status=ok
// SIG undefined FUN_148985a0c(void)

void FUN_148985a0c(longlong *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  *puVar3 = &PTR_LAB_14b42b2f0;
  *(undefined4 *)(puVar3 + 1) = *param_3;
  *(undefined4 *)((longlong)puVar3 + 0xc) = *param_4;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  puVar3[2] = lVar7;
  *puVar3 = &PTR_FUN_14b42b280;
  puVar3[3] = uVar4;
  puVar3[4] = plVar5;
  if (plVar5 == (longlong *)0x0) {
    puVar3[5] = &LAB_148985878;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_148985878;
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148985ad2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148985afc FUN_148985afc body=38 status=ok
// SIG undefined FUN_148985afc(void)

void FUN_148985afc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140cbef6c(&DAT_14cb8b020);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b242fa0;
  return;
}



// FUNCTION 148985b22 FUN_148985b22 body=44 status=ok
// SIG undefined FUN_148985b22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148985b22(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8b02c = _DAT_14cb8b02c + -1;
  *param_1 = DAT_14cb8b020;
  DAT_14cb8b020 = param_1;
  return;
}



// FUNCTION 148985b4e FUN_148985b4e body=38 status=ok
// SIG undefined FUN_148985b4e(void)

void FUN_148985b4e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b242fa0;
  return;
}



// FUNCTION 148985bac FUN_148985bac body=32 status=ok
// SIG undefined FUN_148985bac(void)

undefined8 FUN_148985bac(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Unknown");
  return param_2;
}



// FUNCTION 148985bcc FUN_148985bcc body=38 status=ok
// SIG undefined FUN_148985bcc(void)

void FUN_148985bcc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140cbef6c(&DAT_14cb8b110);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b24d5a0;
  return;
}



// FUNCTION 148985bf2 FUN_148985bf2 body=44 status=ok
// SIG undefined FUN_148985bf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148985bf2(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8b11c = _DAT_14cb8b11c + -1;
  *param_1 = DAT_14cb8b110;
  DAT_14cb8b110 = param_1;
  return;
}



// FUNCTION 148985c1e FUN_148985c1e body=38 status=ok
// SIG undefined FUN_148985c1e(void)

void FUN_148985c1e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b24d5a0;
  return;
}



// FUNCTION 148985c44 FUN_148985c44 body=123 status=ok
// SIG undefined FUN_148985c44(void)

void FUN_148985c44(longlong *param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14b42bc30;
  local_58[0] = &LAB_143e3a0c6;
  local_30 = param_1;
  (**(code **)(*param_1 + 0x18))(param_1,local_58);
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



// FUNCTION 148985cc0 FUN_148985cc0 body=42 status=ok
// SIG undefined FUN_148985cc0(void)

void FUN_148985cc0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_148985cea();
  memset(_Dst,0,0x128);
  FUN_145f8b9f8(_Dst);
  return;
}



// FUNCTION 148985cea FUN_148985cea body=113 status=ok
// SIG undefined FUN_148985cea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148985cea(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb8b200;
  if (DAT_14cb8b200 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x2500,0);
    lVar4 = 0x1f;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x25;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb8b200;
    _DAT_14cb8b208 = _DAT_14cb8b208 + 0x20;
  }
  DAT_14cb8b200 = (undefined8 *)*puVar2;
  _DAT_14cb8b20c = _DAT_14cb8b20c + 1;
  return;
}



// FUNCTION 148985d5c FUN_148985d5c body=44 status=ok
// SIG undefined FUN_148985d5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148985d5c(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8b20c = _DAT_14cb8b20c + -1;
  *param_1 = DAT_14cb8b200;
  DAT_14cb8b200 = param_1;
  return;
}



// FUNCTION 148985d88 FUN_148985d88 body=44 status=ok
// SIG undefined FUN_148985d88(void)

void FUN_148985d88(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1,0,0x128);
  FUN_145f8b9f8(param_1);
  return;
}



// FUNCTION 148985dbe FUN_148985dbe body=54 status=ok
// SIG undefined FUN_148985dbe(void)

void FUN_148985dbe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14181acc4(&DAT_14cb8b2f8);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b257cb0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 148985df4 FUN_148985df4 body=44 status=ok
// SIG undefined FUN_148985df4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148985df4(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8b304 = _DAT_14cb8b304 + -1;
  *param_1 = DAT_14cb8b2f8;
  DAT_14cb8b2f8 = param_1;
  return;
}



// FUNCTION 148985e20 FUN_148985e20 body=54 status=ok
// SIG undefined FUN_148985e20(void)

void FUN_148985e20(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b257cb0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// FUNCTION 148985e56 FUN_148985e56 body=38 status=ok
// SIG undefined FUN_148985e56(void)

void FUN_148985e56(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140cbef6c(&DAT_14cb8b3f0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b257ce0;
  return;
}



// FUNCTION 148985e7c FUN_148985e7c body=44 status=ok
// SIG undefined FUN_148985e7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148985e7c(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8b3fc = _DAT_14cb8b3fc + -1;
  *param_1 = DAT_14cb8b3f0;
  DAT_14cb8b3f0 = param_1;
  return;
}



// FUNCTION 148985ea8 FUN_148985ea8 body=38 status=ok
// SIG undefined FUN_148985ea8(void)

void FUN_148985ea8(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b257ce0;
  return;
}



// FUNCTION 148985ece FUN_148985ece body=26 status=ok
// SIG undefined FUN_148985ece(void)

undefined8 FUN_148985ece(longlong param_1,undefined8 param_2)

{
  FUN_140df52d6(*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 148985ee8 FUN_148985ee8 body=40 status=ok
// SIG undefined FUN_148985ee8(void)

void FUN_148985ee8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14b42ca00;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 148985f10 FUN_148985f10 body=46 status=ok
// SIG undefined FUN_148985f10(void)

undefined8 FUN_148985f10(longlong *param_1)

{
  char cVar1;
  
  if ((char)param_1[5] == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    cVar1 = (**(code **)(*param_1 + 8))();
    if (cVar1 != '\0') {
      return 1;
    }
    *(undefined1 *)(param_1 + 5) = 3;
  }
  return 0;
}



// FUNCTION 148985f3e FUN_148985f3e body=14 status=ok
// SIG undefined FUN_148985f3e(void)

void FUN_148985f3e(longlong *param_1)

{
  if (1 < *(byte *)(param_1 + 5)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148985f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



// FUNCTION 148985f7c FUN_148985f7c body=183 status=ok
// SIG undefined FUN_148985f7c(void)

void FUN_148985f7c(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = FUN_1447210f0();
  FUN_140cfc686(&local_30,uVar5);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_28;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_30 != 0) {
        FUN_148986034(local_30,param_1,param_2);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148986034 FUN_148986034 body=169 status=ok
// SIG undefined FUN_148986034(void)

void FUN_148986034(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30);
  plVar2 = (longlong *)
           FUN_14898c7d6(param_1 + 0xc78,(uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30,
                         &local_30);
  local_38 = 0;
  FUN_14485c47a(&local_38,param_3);
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_14898ca2c(plVar2,iVar1);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = local_38;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489860de FUN_1489860de body=84 status=ok
// SIG undefined FUN_1489860de(void)

void FUN_1489860de(longlong param_1,char param_2)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == '\0') {
    local_28.Data1 = 0;
    local_28.Data2 = 0;
    local_28.Data3 = 0;
    local_28.Data4[0] = '\0';
    local_28.Data4[1] = '\0';
    local_28.Data4[2] = '\0';
    local_28.Data4[3] = '\0';
    local_28.Data4[4] = '\0';
    local_28.Data4[5] = '\0';
    local_28.Data4[6] = '\0';
    local_28.Data4[7] = '\0';
    CoCreateGuid(&local_28);
    *(ulong *)(param_1 + 0x4c) = local_28.Data1;
    *(undefined4 *)(param_1 + 0x50) = local_28._4_4_;
    *(undefined4 *)(param_1 + 0x54) = local_28.Data4._0_4_;
    *(undefined4 *)(param_1 + 0x58) = local_28.Data4._4_4_;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148986134 FUN_148986134 body=42 status=ok
// SIG undefined FUN_148986134(void)

void FUN_148986134(longlong param_1)

{
  FUN_143e34f02();
  FUN_141858344(param_1);
  FUN_1410d4c90(param_1);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 14898615e FUN_14898615e body=20 status=ok
// SIG undefined FUN_14898615e(void)

undefined8 FUN_14898615e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x168);
  }
  return 0;
}



// FUNCTION 148986172 FUN_148986172 body=156 status=ok
// SIG undefined FUN_148986172(void)

undefined8 FUN_148986172(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    uVar4 = FUN_140e391b0();
    lVar5 = FUN_14477b664(uVar4);
    param_2[1] = lVar5;
  }
  if (((param_2[2] != 0) || (lVar5 == 0)) || (*param_2 == 0)) goto LAB_1489861a8;
  plVar2 = *(longlong **)(lVar5 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_14898620a:
    lVar5 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_14898620a;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,param_2);
  }
  param_2[2] = lVar5;
LAB_1489861a8:
  uVar4 = FUN_148973e06(lVar1);
  return uVar4;
}



// FUNCTION 14898620e FUN_14898620e body=185 status=ok
// SIG undefined FUN_14898620e(void)

void FUN_14898620e(undefined8 param_1,undefined8 *param_2,int param_3,char param_4)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar3 = 0.0;
  if (0 < param_3) {
    local_48 = *param_2;
    uVar2 = FUN_14477b664(0);
    local_40 = FUN_14477b664(uVar2);
    local_38 = param_2[2];
    iVar1 = FUN_148986172(param_1,&local_48);
    fVar3 = (float)iVar1 / (float)param_3;
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (param_4 != '\0') {
      fVar3 = 1.0 - fVar3;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar3);
}



// FUNCTION 1489862c8 FUN_1489862c8 body=23 status=ok
// SIG undefined FUN_1489862c8(void)

undefined8 FUN_1489862c8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),(*(byte *)(lVar1 + 0x248) & 1) == 0);
  }
  return 0;
}



// FUNCTION 1489862e0 FUN_1489862e0 body=16 status=ok
// SIG undefined FUN_1489862e0(void)

undefined8 FUN_1489862e0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 0x28);
  if (lVar7 == 0) {
    return 0;
  }
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar2 = FUN_14155b406();
    lVar4 = FUN_14477b664(uVar2);
    param_2[1] = lVar4;
  }
  lVar3 = param_2[2];
  if (((lVar3 == 0) && (lVar3 = 0, lVar4 != 0)) && (*param_2 != 0)) {
    plVar6 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar1 == '\0')) {
      lVar3 = 0;
    }
    else {
      uVar2 = (**(code **)(*plVar6 + 0x110))(plVar6);
      lVar3 = FUN_144aff482(uVar2,param_2);
    }
    param_2[2] = lVar3;
  }
  if ((longlong)*(int *)(lVar7 + 0x180) != 0) {
    plVar6 = *(longlong **)(lVar7 + 0x178);
    lVar7 = (longlong)*(int *)(lVar7 + 0x180) << 4;
    do {
      lVar4 = (**(code **)(*(longlong *)*plVar6 + 8))();
      if (lVar4 == lVar3) {
        if (plVar6 == (longlong *)0x0) {
          return 0;
        }
        uVar5 = CONCAT71((int7)((ulonglong)*plVar6 >> 8),*(undefined1 *)(*plVar6 + 0x38)) &
                0xffffffffffffff02;
        return CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 1);
      }
      plVar6 = plVar6 + 2;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  return 0;
}



// FUNCTION 1489862f0 FUN_1489862f0 body=155 status=ok
// SIG undefined FUN_1489862f0(void)

void FUN_1489862f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return;
  }
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    uVar4 = FUN_140e391b0();
    lVar5 = FUN_14477b664(uVar4);
    param_2[1] = lVar5;
  }
  if (((param_2[2] != 0) || (lVar5 == 0)) || (*param_2 == 0)) goto LAB_148986326;
  plVar2 = *(longlong **)(lVar5 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_148986387:
    lVar5 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_148986387;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,param_2);
  }
  param_2[2] = lVar5;
LAB_148986326:
  FUN_1457f0af6(lVar1);
  return;
}



// FUNCTION 14898638c FUN_14898638c body=155 status=ok
// SIG undefined FUN_14898638c(void)

void FUN_14898638c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return;
  }
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    uVar4 = FUN_140e391b0();
    lVar5 = FUN_14477b664(uVar4);
    param_2[1] = lVar5;
  }
  if (((param_2[2] != 0) || (lVar5 == 0)) || (*param_2 == 0)) goto LAB_1489863c2;
  plVar2 = *(longlong **)(lVar5 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_148986423:
    lVar5 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_148986423;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,param_2);
  }
  param_2[2] = lVar5;
LAB_1489863c2:
  FUN_148973f94(lVar1);
  return;
}



// FUNCTION 148986436 FUN_148986436 body=3 status=ok
// SIG undefined FUN_148986436(void)

undefined8 FUN_148986436(void)

{
  return 0;
}



// FUNCTION 14898643a FUN_14898643a body=16 status=ok
// SIG undefined FUN_14898643a(void)

undefined8 FUN_14898643a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  wchar_t *pwStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  code **ppcStack_40;
  code *pcStack_38;
  code *pcStack_30;
  code *pcStack_28;
  ulonglong uStack_20;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (lVar3 == 0) {
    return 0;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(lVar3 + 0x168);
  if (*(longlong *)(lVar3 + 0x168) == 0) {
    if (lVar3 == 0) goto LAB_14124e5f1;
  }
  else {
    do {
      lVar3 = lVar1;
      lVar1 = *(longlong *)(lVar3 + 0x168);
    } while (*(longlong *)(lVar3 + 0x168) != 0);
  }
  if (DAT_14caf64b8 == 0) {
    ppcStack_40 = &pcStack_28;
    pcStack_28 = FUN_141030f22;
    pcStack_30 = FUN_14081d0ea;
    pcStack_38 = FUN_142b4754c;
    puStack_48 = &LAB_147c45ce0;
    puStack_50 = &LAB_1463f1ff4;
    pwStack_58 = L"Game";
    uStack_60 = 0x4000000000;
    uStack_68 = 0x10000004;
    uStack_70 = 8;
    uStack_78 = 0x428;
    FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
  }
  lVar1 = *(longlong *)(lVar3 + 0x10);
  iVar2 = *(int *)(lVar1 + 0x38);
  if ((iVar2 < *(int *)(DAT_14caf64b8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) !=
      DAT_14caf64b8 + 0x30)) {
    if (DAT_14cad3ae0 == 0) {
      ppcStack_40 = &pcStack_28;
      pcStack_28 = FUN_141030f22;
      pcStack_30 = FUN_14081d0ea;
      pcStack_38 = FUN_142b4754c;
      puStack_48 = &LAB_147a36475;
      puStack_50 = &LAB_1463c0cc7;
      pwStack_58 = L"Engine";
      uStack_60 = 0;
      uStack_68 = 0x10000005;
      uStack_70 = 8;
      uStack_78 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Controller",&DAT_14cad3ae0,FUN_1463c0ca0);
      lVar1 = *(longlong *)(lVar3 + 0x10);
      iVar2 = *(int *)(lVar1 + 0x38);
    }
    if ((iVar2 < *(int *)(DAT_14cad3ae0 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cad3ae0 + 0x38) * 8) !=
        DAT_14cad3ae0 + 0x30)) {
LAB_14124e5f1:
      if ((uStack_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 14898644e FUN_14898644e body=74 status=ok
// SIG undefined FUN_14898644e(void)

undefined8 * FUN_14898644e(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xf0;
  *param_1 = &PTR_LAB_14b42ae00;
  param_1[6] = 0;
  FUN_14485c47a(param_1 + 6);
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x40000000;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 14898664a FUN_14898664a body=386 status=ok
// SIG undefined FUN_14898664a(void)

longlong * FUN_14898664a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14898675b:
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b42bda0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14898675b;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b42bda0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1489867cc FUN_1489867cc body=148 status=ok
// SIG undefined FUN_1489867cc(void)

undefined8 FUN_1489867cc(longlong *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((char)param_1[1] == '\x01') {
    (**(code **)(*param_1 + 0x18))(param_1,&local_28);
    puVar1 = local_28;
    if (local_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_140002266(param_2,L"NOT (%s)",puVar1);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148986862 FUN_148986862 body=32 status=ok
// SIG undefined FUN_148986862(void)

undefined8 FUN_148986862(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Unknown");
  return param_2;
}



// FUNCTION 148986882 FUN_148986882 body=50 status=ok
// SIG undefined FUN_148986882(void)

void FUN_148986882(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1414b4ac4(&DAT_14cb8b5a8);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b262a20;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}



// FUNCTION 1489868b4 FUN_1489868b4 body=44 status=ok
// SIG undefined FUN_1489868b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1489868b4(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8b5b4 = _DAT_14cb8b5b4 + -1;
  *param_1 = DAT_14cb8b5a8;
  DAT_14cb8b5a8 = param_1;
  return;
}



// FUNCTION 1489868e0 FUN_1489868e0 body=50 status=ok
// SIG undefined FUN_1489868e0(void)

void FUN_1489868e0(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b262a20;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 148986912 FUN_148986912 body=189 status=ok
// SIG undefined FUN_148986912(void)

undefined8 FUN_148986912(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 == 0) {
    uVar3 = FUN_145cd95b4();
    lVar5 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x18) = lVar5;
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 == 0) {
    if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x10));
        *(longlong *)(param_1 + 0x20) = lVar4;
        if (lVar4 != 0) goto LAB_1489869b7;
      }
    }
    FUN_140056680(param_2,L"[Empty]");
  }
  else {
LAB_1489869b7:
    FUN_1489867cc(*(undefined8 *)(lVar4 + 0x18),param_2);
  }
  return param_2;
}



// FUNCTION 1489869d0 FUN_1489869d0 body=57 status=ok
// SIG undefined FUN_1489869d0(void)

void FUN_1489869d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1414b4ac4(&DAT_14cb8b6a0);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b262a50;
  *(undefined4 *)(puVar1 + 4) = 0x19101;
  return;
}



// FUNCTION 148986a0a FUN_148986a0a body=44 status=ok
// SIG undefined FUN_148986a0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148986a0a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8b6ac = _DAT_14cb8b6ac + -1;
  *param_1 = DAT_14cb8b6a0;
  DAT_14cb8b6a0 = param_1;
  return;
}



// FUNCTION 148986a36 FUN_148986a36 body=57 status=ok
// SIG undefined FUN_148986a36(void)

void FUN_148986a36(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b262a50;
  *(undefined4 *)(param_1 + 4) = 0x19101;
  return;
}



// FUNCTION 148986a70 FUN_148986a70 body=471 status=ok
// SIG undefined FUN_148986a70(void)

void FUN_148986a70(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar3 == 0) goto LAB_148986ab5;
  if (param_2 == (longlong *)0x0) {
LAB_148986b25:
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar4 = FUN_1407ca880();
    plVar5 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar4);
    if (plVar5 == (longlong *)0x0) goto LAB_148986b25;
    uVar4 = FUN_1407ca880();
    plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
    if (plVar5 == plVar6) goto LAB_148986b25;
  }
  local_a8 = *param_6;
  uStack_a4 = param_6[1];
  uStack_a0 = param_6[2];
  uStack_9c = param_6[3];
  local_98 = *(longlong *)(param_6 + 4);
  if ((local_98 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if (plVar6 == (longlong *)0x0) {
    local_b8 = 0;
    plStack_b0 = (longlong *)0x0;
  }
  else {
    uVar4 = (**(code **)(*plVar6 + 0x50))(plVar6);
    local_c8 = &local_88;
    local_68 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_60 = 0x8000000000;
    local_58 = 0xffffffff;
    FUN_14122243a(uVar4,&local_b8,param_3,0);
  }
  if (*(longlong *)(lVar3 + 0x1f0) == 0) {
    lVar3 = lVar3 + 0x460;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x1f0) + 0xf8);
  }
  local_c8 = (undefined8 *)&local_a8;
  FUN_148986c48(lVar3,&local_b8,param_4,param_5);
  plVar5 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    uStack_40 = uStack_40 & 0xffffffff00000000;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140333f4e(&local_88);
  }
LAB_148986ab5:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148986c48 FUN_148986c48 body=172 status=ok
// SIG undefined FUN_148986c48(void)

void FUN_148986c48(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_14001cc68(0x50,0x10);
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  local_58 = param_5;
  FUN_148986cf6(uVar1,&local_48,param_3,param_4);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140b1330e(param_1,*(undefined8 *)(param_5 + 0x10),*(undefined4 *)(param_5 + 4),uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78,*(undefined8 *)(param_5 + 0x10),
                *(undefined4 *)(param_5 + 4));
}



// FUNCTION 148986cf6 FUN_148986cf6 body=247 status=ok
// SIG undefined FUN_148986cf6(void)

undefined8 *
FUN_148986cf6(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14b42af40;
  param_1[1] = *param_2;
  lVar3 = param_2[1];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = param_5[1];
  uVar6 = param_5[2];
  uVar7 = param_5[3];
  *(undefined4 *)(param_1 + 3) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
  lVar3 = *(longlong *)(param_5 + 4);
  param_1[5] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[6] = param_3;
  param_1[7] = param_4;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc;
  param_1[9] = 0;
  if (param_1[1] != 0) {
    FUN_148988daa(param_1[1] + 0x18,&local_30,param_1);
    param_1[9] = local_30;
  }
  plVar4 = (longlong *)param_2[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148986dee FUN_148986dee body=228 status=ok
// SIG undefined FUN_148986dee(void)

void FUN_148986dee(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1407ca880();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1407ca880();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x50))(plVar3);
        local_48 = 0;
        uStack_30 = 0;
        local_28 = 0;
        uStack_20 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        uStack_40 = 0x8000000000;
        local_38 = 0xffffffff;
        FUN_14096df60(uVar1,param_2,3,&local_68);
        uStack_20 = uStack_20 & 0xffffffff00000000;
        if (local_28 != 0) {
          FUN_1400020a8();
        }
        FUN_140333f4e(&local_68);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148986ed4 FUN_148986ed4 body=118 status=ok
// SIG undefined FUN_148986ed4(void)

undefined8 FUN_148986ed4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    local_38 = *param_2;
    uVar1 = FUN_14477b664(param_2[1]);
    local_30 = FUN_14477b664(uVar1);
    local_28 = param_2[2];
    uVar1 = FUN_148986f4c(param_1,&local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148986f4c FUN_148986f4c body=114 status=ok
// SIG undefined FUN_148986f4c(void)

bool FUN_148986f4c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uVar2 = FUN_14477b664(param_2[1]);
  local_30 = FUN_14477b664(uVar2);
  local_28 = param_2[2];
  iVar1 = FUN_145a26b42(param_1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148986fc0 FUN_148986fc0 body=372 status=ok
// SIG undefined FUN_148986fc0(void)

void FUN_148986fc0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  uVar2 = FUN_144a7c80a();
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar2);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  uVar2 = FUN_144a7c80a();
  plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
  if (plVar4 == (longlong *)0x0 || plVar3 == plVar4) {
    return;
  }
  uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar5 = FUN_140feeb70();
    lVar6 = FUN_14477b664(uVar5);
    param_2[1] = lVar6;
  }
  lVar7 = param_2[2];
  if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*param_2 != 0)) {
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar1 == '\0')) {
      lVar7 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar7 = FUN_144aff482(uVar5,param_2);
    }
    param_2[2] = lVar7;
  }
  lVar6 = FUN_144b39ca2(uVar2,lVar7,0);
  if (lVar6 != 0) {
    lVar7 = param_3[1];
    if (lVar7 == 0) {
      uVar2 = FUN_140e391b0();
      lVar7 = FUN_14477b664(uVar2);
      param_3[1] = lVar7;
    }
    if (((param_3[2] == 0) && (lVar7 != 0)) && (*param_3 != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar1 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar1 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar2 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar2,param_3);
      }
      param_3[2] = lVar7;
    }
    FUN_1410b135e(lVar6);
    return;
  }
  return;
}



// FUNCTION 148987134 FUN_148987134 body=52 status=ok
// SIG undefined FUN_148987134(void)

undefined8 FUN_148987134(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x58);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014898715c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 148987168 FUN_148987168 body=431 status=ok
// SIG undefined FUN_148987168(void)

undefined8 * FUN_148987168(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar5 = param_3[1];
  if (lVar5 == 0) {
    uVar4 = FUN_145cd99c8();
    lVar5 = FUN_14477b664(uVar4);
    param_3[1] = lVar5;
  }
  lVar6 = param_3[2];
  if (lVar6 == 0) {
    plVar7 = (longlong *)0x0;
    if ((lVar5 != 0) && (*param_3 != 0)) {
      plVar7 = *(longlong **)(lVar5 + 0xb8);
      if (plVar7 == (longlong *)0x0) {
LAB_148987303:
        param_3[2] = 0;
      }
      else {
        cVar3 = (**(code **)(*plVar7 + 0x108))(plVar7);
        if (cVar3 == '\0') goto LAB_148987303;
        uVar4 = (**(code **)(*plVar7 + 0x110))(plVar7);
        lVar6 = FUN_144aff482(uVar4,param_3);
        param_3[2] = lVar6;
        if (lVar6 != 0) {
          lVar5 = param_3[1];
          goto LAB_1489871a0;
        }
      }
      plVar7 = (longlong *)0x0;
    }
  }
  else {
LAB_1489871a0:
    if (lVar5 == 0) {
      uVar4 = FUN_145cd99c8();
      lVar5 = FUN_14477b664(uVar4);
      param_3[1] = lVar5;
      lVar6 = param_3[2];
      if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*param_3 != 0)) {
        plVar7 = *(longlong **)(lVar5 + 0xb8);
        if (plVar7 == (longlong *)0x0) {
LAB_148987313:
          lVar6 = 0;
        }
        else {
          cVar3 = (**(code **)(*plVar7 + 0x108))(plVar7);
          if (cVar3 == '\0') goto LAB_148987313;
          uVar4 = (**(code **)(*plVar7 + 0x110))(plVar7);
          lVar6 = FUN_144aff482(uVar4,param_3);
        }
        param_3[2] = lVar6;
      }
    }
    lVar5 = *(longlong *)(lVar6 + 0x18);
    plVar7 = *(longlong **)(lVar6 + 0x20);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
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
    if (lVar5 != 0) {
      FUN_14571b7dc(param_1,param_2,lVar5);
      goto LAB_1489871ee;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1489871ee:
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
  return param_2;
}



// FUNCTION 148987318 FUN_148987318 body=364 status=ok
// SIG undefined FUN_148987318(void)

undefined4 FUN_148987318(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined4 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar2 = FUN_144a7c80a();
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_144a7c80a();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
        uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_14571b264(uVar2,&local_78,&DAT_14cb8b8a8);
        uVar5 = 0;
        if (local_78 != 0) {
          FUN_148987168(local_78,&local_88,param_2);
          if (local_88 == (longlong *)0x0) {
            uVar5 = 0;
          }
          else {
            local_40 = &local_8c;
            local_8c = 0;
            local_58 = 0;
            local_48 = &PTR_LAB_14b42bf40;
            local_68 = &LAB_143e3a20e;
            (**(code **)(*local_88 + 8))();
            uVar5 = local_8c;
          }
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_80 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar1 = (int *)((longlong)local_80 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_80 + 0x10))(local_80);
              }
            }
          }
        }
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_70 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148987486 FUN_148987486 body=336 status=ok
// SIG undefined FUN_148987486(void)

void FUN_148987486(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != (longlong *)0x0) {
    uVar2 = FUN_144a7c80a();
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_144a7c80a();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
        uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_14571b264(uVar2,&local_78,&DAT_14cb8b8a8);
        if (local_78 != 0) {
          FUN_148987168(local_78,&local_88,param_2);
          if (local_88 != (longlong *)0x0) {
            local_58 = 0;
            local_48 = &PTR_LAB_14b42bf60;
            local_68 = &LAB_143e3a25c;
            local_40 = param_3;
            (**(code **)(*local_88 + 8))();
          }
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_80 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar1 = (int *)((longlong)local_80 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_80 + 0x10))(local_80);
              }
            }
          }
        }
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_70 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489875d8 FUN_1489875d8 body=97 status=ok
// SIG undefined FUN_1489875d8(void)

void FUN_1489875d8(longlong *param_1,undefined1 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined8 local_18;
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = param_1[1] << 0x20 | (ulonglong)param_1[1] >> 0x20;
  local_20[0] = param_2;
  local_18 = param_3;
  if ((*(int *)(*param_1 + 0x18) != 0) &&
     (plVar1 = *(longlong **)(*param_1 + 0x10), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14898763a FUN_14898763a body=228 status=ok
// SIG undefined FUN_14898763a(void)

undefined8 FUN_14898763a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b42a6d0;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b42bf80;
  local_38[3] = param_3;
  local_38[4] = FUN_1489875d8;
  FUN_1404e4072(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148987720 FUN_148987720 body=144 status=ok
// SIG undefined FUN_148987720(void)

undefined8 * FUN_148987720(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14571b1c8(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489877b3 FUN_1489877b3 body=28 status=ok
// SIG undefined FUN_1489877b3(void)

wchar_t * FUN_1489877b3(byte param_1)

{
  if (param_1 < 6) {
    return (wchar_t *)(&PTR_DAT_14b42ca48)[param_1];
  }
  return L"INVALID";
}



// FUNCTION 1489877d6 FUN_1489877d6 body=272 status=ok
// SIG undefined FUN_1489877d6(void)

void FUN_1489877d6(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  code *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  lVar3 = FUN_144a7be76();
  if (lVar3 != 0) {
    uVar4 = FUN_144a7c80a();
    plVar5 = (longlong *)FUN_144718840(lVar3,uVar4);
    if (plVar5 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_141260192(uVar4,&local_88,&DAT_14cb8c380);
      if (local_88 != 0) {
        local_68 = 0;
        local_58 = &PTR_LAB_14b42c110;
        local_78[0] = FUN_143e3a3ee;
        local_50 = param_1;
        local_48 = lVar2;
        local_40 = param_2;
        uVar4 = FUN_140f7223e(lVar2 + 0x1c8);
        FUN_14589a084(local_88,uVar4,local_78);
      }
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_80 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_80 + 0x10))(local_80);
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



// FUNCTION 1489878fe FUN_1489878fe body=565 status=ok
// SIG undefined FUN_1489878fe(void)

void FUN_1489878fe(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [40];
  longlong local_70;
  uint local_68;
  uint local_60;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x48);
  plVar4 = (longlong *)FUN_144a8069e(*(undefined8 *)(param_1 + 0x40));
  if (plVar4 != (longlong *)0x0) {
    uVar5 = FUN_144a7c80a();
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar5);
    if (plVar4 != (longlong *)0x0) {
      uVar5 = FUN_144a7c80a();
      plVar6 = (longlong *)FUN_144718840(plVar4,uVar5);
      if (plVar6 != (longlong *)0x0 && plVar4 != plVar6) {
        lVar7 = *(longlong *)(lVar2 + 0x88);
        if (lVar7 == 0) {
          uVar5 = FUN_145cd97be();
          lVar7 = FUN_14477b664(uVar5);
          *(longlong *)(lVar2 + 0x88) = lVar7;
        }
        lVar8 = *(longlong *)(lVar2 + 0x90);
        if (lVar8 == 0) {
          if ((lVar7 == 0) || (*(longlong *)(lVar2 + 0x80) == 0)) goto LAB_148987975;
          plVar4 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar4 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar3 == '\0')) {
            *(undefined8 *)(lVar2 + 0x90) = 0;
            goto LAB_148987975;
          }
          uVar5 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar8 = FUN_144aff482(uVar5,(longlong *)(lVar2 + 0x80));
          *(longlong *)(lVar2 + 0x90) = lVar8;
          if (lVar8 == 0) goto LAB_148987975;
        }
        uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_141260192(uVar5,&local_48,&DAT_14cb8c380);
        if ((local_48 != 0) && (FUN_143888b1a(param_1,&local_70,param_2), local_60 < local_68)) {
          do {
            lVar7 = local_48;
            uVar5 = FUN_14030a32e((longlong)(int)local_60 * 0x38 + local_70);
            cVar3 = FUN_140f722bc(lVar7,lVar8,uVar5);
            if (cVar3 == *(char *)(lVar2 + 0x98)) {
              FUN_143888b08(&local_70);
            }
            local_60 = local_60 + 1;
            if (local_60 < local_68) {
              while ((*(byte *)(local_70 + 0x34 + (longlong)(int)local_60 * 0x38) & 1) != 0) {
                local_60 = local_60 + 1;
                if (local_68 == local_60) goto LAB_148987a84;
              }
            }
          } while (local_60 < local_68);
        }
LAB_148987a84:
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_40 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)local_40 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_40 + 0x10))(local_40);
            }
          }
        }
      }
    }
  }
LAB_148987975:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148987b44 FUN_148987b44 body=54 status=ok
// SIG undefined FUN_148987b44(void)

void FUN_148987b44(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1414b4ac4(&DAT_14cb8b7b8);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b257d10;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  return;
}



// FUNCTION 148987b7a FUN_148987b7a body=44 status=ok
// SIG undefined FUN_148987b7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148987b7a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8b7c4 = _DAT_14cb8b7c4 + -1;
  *param_1 = DAT_14cb8b7b8;
  DAT_14cb8b7b8 = param_1;
  return;
}



// FUNCTION 148987ba6 FUN_148987ba6 body=54 status=ok
// SIG undefined FUN_148987ba6(void)

void FUN_148987ba6(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b257d10;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  return;
}



// FUNCTION 148987bdc FUN_148987bdc body=383 status=ok
// SIG undefined FUN_148987bdc(void)

undefined8 FUN_148987bdc(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == param_2) {
    uVar4 = CONCAT71((int7)(local_40 >> 8),1);
    goto LAB_148987cff;
  }
  if (param_1[4] == 0) {
    uVar4 = FUN_145cd93aa();
    lVar8 = FUN_14477b664(uVar4);
    param_1[4] = lVar8;
  }
  lVar8 = param_2[4];
  if (lVar8 == 0) {
    lVar8 = FUN_145cd93aa();
  }
  lVar6 = param_2[3];
  uVar4 = FUN_14477b664(lVar8);
  local_48 = lVar6;
  uVar2 = FUN_144a7891a(uVar4);
  local_50 = param_1[3];
  lVar8 = param_1[4];
  uVar3 = FUN_144a7891a(lVar8);
  local_68 = uVar4;
  local_60 = &local_48;
  cVar1 = FUN_144a789b8(uVar3,lVar8,&local_50,uVar2);
  if (cVar1 != '\0') {
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1);
    lVar8 = *plVar5;
    if (lVar8 == 0) {
LAB_148987cb8:
      lVar8 = 0;
    }
    else {
      lVar6 = FUN_145909d48();
      if (((lVar6 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar6 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
          lVar6 + 0x30)) goto LAB_148987cb8;
      lVar8 = *plVar5;
    }
    plVar5 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
    lVar6 = *plVar5;
    if (lVar6 == 0) {
LAB_148987cf6:
      lVar6 = 0;
    }
    else {
      lVar7 = FUN_145909d48();
      if (((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
          lVar7 + 0x30)) goto LAB_148987cf6;
      lVar6 = *plVar5;
    }
    if (lVar8 == lVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
    }
  }
  uVar4 = 0;
LAB_148987cff:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148987d76 FUN_148987d76 body=366 status=ok
// SIG undefined FUN_148987d76(void)

undefined8 FUN_148987d76(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
  lVar9 = *plVar4;
  if (lVar9 == 0) {
LAB_148987dd4:
    lVar9 = 0;
  }
  else {
    lVar5 = FUN_145909d48();
    if (((lVar5 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) goto LAB_148987dd4;
    lVar9 = *plVar4;
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 != 0) {
    lVar6 = FUN_145909d48();
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      goto LAB_148987e07;
    }
  }
  lVar5 = 0;
LAB_148987e07:
  if (lVar9 == lVar5) {
    if (param_2[4] == 0) {
      uVar8 = FUN_145cd93aa();
      lVar9 = FUN_14477b664(uVar8);
      param_2[4] = lVar9;
    }
    lVar9 = *(longlong *)(param_1 + 0x10);
    if (lVar9 == 0) {
      lVar9 = FUN_145cd93aa();
    }
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar7 = FUN_14477b664(lVar9);
    local_48 = uVar8;
    uVar2 = FUN_144a7891a(uVar7);
    local_50 = param_2[3];
    lVar9 = param_2[4];
    uVar3 = FUN_144a7891a(lVar9);
    local_68 = uVar7;
    local_60 = &local_48;
    cVar1 = FUN_144a789b8(uVar3,lVar9,&local_50,uVar2);
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148987f00 FUN_148987f00 body=299 status=ok
// SIG undefined FUN_148987f00(void)

void FUN_148987f00(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) goto LAB_148987f4d;
  lVar4 = param_3[1];
  if (lVar4 == 0) {
    uVar3 = FUN_145cd93aa();
    lVar4 = FUN_14477b664(uVar3);
    param_3[1] = lVar4;
  }
  lVar5 = *param_3;
  if (param_3[2] == 0) {
    if (lVar4 == 0 || lVar5 == 0) goto LAB_148987f4d;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_3);
        param_3[2] = lVar4;
        if (lVar4 == 0) goto LAB_148987f4d;
        lVar5 = *param_3;
        lVar4 = param_3[1];
        goto LAB_148987fb9;
      }
    }
    param_3[2] = 0;
  }
  else {
LAB_148987fb9:
    local_70 = lVar5;
    uVar3 = FUN_14477b664(lVar4);
    local_68 = FUN_14477b664(uVar3);
    local_60 = param_3[2];
    FUN_14898802c(local_58,&local_70,param_2);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_148973cea(*(longlong *)(param_1 + 0x28),local_58);
    }
  }
LAB_148987f4d:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14898802c FUN_14898802c body=178 status=ok
// SIG undefined FUN_14898802c(void)

undefined8 * FUN_14898802c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  uVar2 = FUN_14477b664(param_2[1]);
  local_38 = FUN_14477b664(uVar2);
  local_30 = param_2[2];
  *param_1 = &PTR_LAB_14b42b078;
  FUN_145c882a2(param_1 + 1,&local_40);
  lVar1 = DAT_14cb8b870;
  param_1[4] = DAT_14cb8b870;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *param_1 = &PTR_FUN_14b42b068;
  param_1[5] = param_3;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489880e0 FUN_1489880e0 body=24 status=ok
// SIG undefined FUN_1489880e0(void)

void FUN_1489880e0(undefined8 param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489880f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x5c8))(param_2,1);
    return;
  }
  return;
}



// FUNCTION 1489880f8 FUN_1489880f8 body=436 status=ok
// SIG undefined FUN_1489880f8(void)

void FUN_1489880f8(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  if (param_2 == 0 || param_1 == 0) goto LAB_148988196;
  lVar5 = param_4[1];
  if (lVar5 == 0) {
    uVar4 = FUN_145cd93aa();
    lVar5 = FUN_14477b664(uVar4);
    param_4[1] = lVar5;
  }
  if (param_4[2] == 0) {
    if ((lVar5 == 0) || (*param_4 == 0)) goto LAB_148988196;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,param_4);
        param_4[2] = lVar5;
        if (lVar5 == 0) goto LAB_148988196;
        goto LAB_1489881b5;
      }
    }
    param_4[2] = 0;
    goto LAB_148988196;
  }
LAB_1489881b5:
  plVar6 = (longlong *)FUN_14001cc68(0x78,0x10);
  local_68 = param_4;
  FUN_14898f5f8(plVar6,&local_38,&local_30,&local_28);
  plVar2 = plVar6 + 2;
  local_58 = plVar2;
  local_50 = plVar6;
  FUN_14898ff7a(&local_58,plVar2);
  local_48 = plVar2;
  local_40 = plVar6;
  if (plVar6 == (longlong *)0x0) {
LAB_148988218:
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_145c882ea(*(longlong *)(param_1 + 0x28),&local_48);
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    param_1 = local_38;
    if (local_38 != 0) goto LAB_148988218;
  }
  plVar2 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_50 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_148988196:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489882ae FUN_1489882ae body=299 status=ok
// SIG undefined FUN_1489882ae(void)

void FUN_1489882ae(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) goto LAB_1489882fb;
  lVar4 = param_3[1];
  if (lVar4 == 0) {
    uVar3 = FUN_145cd93aa();
    lVar4 = FUN_14477b664(uVar3);
    param_3[1] = lVar4;
  }
  lVar5 = *param_3;
  if (param_3[2] == 0) {
    if (lVar4 == 0 || lVar5 == 0) goto LAB_1489882fb;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_3);
        param_3[2] = lVar4;
        if (lVar4 == 0) goto LAB_1489882fb;
        lVar5 = *param_3;
        lVar4 = param_3[1];
        goto LAB_148988367;
      }
    }
    param_3[2] = 0;
  }
  else {
LAB_148988367:
    local_70 = lVar5;
    uVar3 = FUN_14477b664(lVar4);
    local_68 = FUN_14477b664(uVar3);
    local_60 = param_3[2];
    FUN_1489883da(local_58,&local_70,param_2);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_148973cea(*(longlong *)(param_1 + 0x28),local_58);
    }
  }
LAB_1489882fb:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489883da FUN_1489883da body=178 status=ok
// SIG undefined FUN_1489883da(void)

undefined8 * FUN_1489883da(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  uVar2 = FUN_14477b664(param_2[1]);
  local_38 = FUN_14477b664(uVar2);
  local_30 = param_2[2];
  *param_1 = &PTR_LAB_14b42b078;
  FUN_145c882a2(param_1 + 1,&local_40);
  lVar1 = DAT_14cb8b878;
  param_1[4] = DAT_14cb8b878;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *param_1 = &PTR_FUN_14b42b088;
  param_1[5] = param_3;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14898848e FUN_14898848e body=24 status=ok
// SIG undefined FUN_14898848e(void)

void FUN_14898848e(undefined8 param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489884a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x420))(param_2,0);
    return;
  }
  return;
}



// FUNCTION 1489884ce FUN_1489884ce body=238 status=ok
// SIG undefined FUN_1489884ce(void)

void FUN_1489884ce(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_2;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0xa0) == '\0')) {
    local_88[0] = 0;
    local_60 = 0;
    FUN_1456bb102(local_88,*(undefined8 *)(lVar1 + 0x38));
    FUN_1447c3578(param_1 + 0x40,local_58,local_88);
    FUN_1408834b4(lVar1,param_1 + 0x38,local_58);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pppuVar3 = local_58;
      if (0x18 < local_40) {
        pppuVar3 = (undefined8 ***)local_58[0];
      }
      (*pcVar2)(pppuVar3);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    FUN_144a5ac3a(local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489885be FUN_1489885be body=70 status=ok
// SIG undefined FUN_1489885be(void)

void FUN_1489885be(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    FUN_145797fa4(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_1414df1a6(param_1,param_2);
  return;
}



// FUNCTION 148988604 FUN_148988604 body=167 status=ok
// SIG undefined FUN_148988604(void)

void FUN_148988604(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_178 [32];
  undefined1 local_158 [312];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((((*(longlong *)(param_1 + 0x68) != 0) && (*(longlong *)(param_1 + 0x70) != 0)) &&
      (*(char *)(param_1 + 0x88) == '\x01')) &&
     (((*(byte *)(param_1 + 0x89) & 2) != 0 && (lVar1 = *(longlong *)(param_1 + 0x80), lVar1 != 0)))
     ) {
    FUN_148988830(param_1,local_158,2,0);
    FUN_141131fa2(lVar1,param_1,local_158,1);
    FUN_1449daebe(local_158);
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489886ac FUN_1489886ac body=84 status=ok
// SIG undefined FUN_1489886ac(void)

longlong FUN_1489886ac(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x68);
  lVar2 = (**(code **)(*plVar1 + 800))(plVar1,param_1 + 0x78,1);
  if (lVar2 != 0) {
    lVar3 = FUN_144a6c4d8();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 148988700 FUN_148988700 body=156 status=ok
// SIG undefined FUN_148988700(void)

void FUN_148988700(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_178 [32];
  undefined1 local_158 [8];
  undefined8 local_150 [39];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_150[0] = param_2;
  FUN_148988b64(param_1 + 0xd);
  FUN_148985f7c(param_2,param_1);
  *(byte *)((longlong)param_1 + 0x89) = *(byte *)((longlong)param_1 + 0x89) | 2;
  FUN_148988830(param_1,local_150,1,1);
  (**(code **)(*param_1 + 0x308))(param_1,local_158,local_150,0);
  FUN_1449daebe(local_150);
  if ((local_18 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148988808 FUN_148988808 body=40 status=ok
// SIG undefined FUN_148988808(void)

undefined8 * FUN_148988808(longlong param_1,undefined8 *param_2)

{
  if ((*(byte *)(param_1 + 0x30) & 2) == 0) {
    FUN_1408f10c6(param_1,param_2);
  }
  else {
    *param_2 = 0xffffffffffffffff;
  }
  return param_2;
}



// FUNCTION 148988830 FUN_148988830 body=141 status=ok
// SIG undefined FUN_148988830(void)

longlong * FUN_148988830(undefined8 param_1,longlong *param_2,undefined1 param_3,char param_4)

{
  ulonglong *puVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_3;
  FUN_1449daf8c(param_2,param_1,0);
  *(byte *)((longlong)param_2 + 0xf4) = *(byte *)((longlong)param_2 + 0xf4) & 0xef | param_4 << 4;
  puVar1 = (ulonglong *)param_2[1];
  if (puVar1[1] < *puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_19,1);
  }
  else {
    *puVar1 = *puVar1 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489888be FUN_1489888be body=178 status=ok
// SIG undefined FUN_1489888be(void)

void FUN_1489888be(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_2 + 0x1d) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((*(byte *)(param_2 + 0x1d) & 2) == 0) {
    local_21 = '\0';
    puVar2 = (ulonglong *)param_2[1];
    pcVar1 = (char *)*puVar2 + 1;
    if ((char *)puVar2[1] < pcVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_21,1);
    }
    else {
      local_21 = *(char *)*puVar2;
      *puVar2 = (ulonglong)pcVar1;
    }
    if (local_21 == '\x02') {
      FUN_143e37de2(param_1,param_2);
    }
    else if (local_21 == '\x01') {
      *(byte *)(param_1 + 0x89) = *(byte *)(param_1 + 0x89) | 2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148988984 FUN_148988984 body=105 status=ok
// SIG undefined FUN_148988984(void)

longlong * FUN_148988984(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 == 0) {
      lVar3 = 0;
      goto LAB_1489889d1;
    }
  }
  else {
    FUN_1456cec3c(lVar1);
  }
  uVar2 = FUN_144a7c80a();
  lVar3 = FUN_144718840(lVar1,uVar2);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
LAB_1489889d1:
  *param_1 = lVar1;
  param_1[1] = lVar3;
  return param_1;
}



// FUNCTION 1489889ee FUN_1489889ee body=244 status=ok
// SIG undefined FUN_1489889ee(void)

undefined8 FUN_1489889ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b42c7d0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b42c760;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_148988ae4;
  FUN_1489907a8(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148988ae4 FUN_148988ae4 body=127 status=ok
// SIG undefined FUN_148988ae4(void)

void FUN_148988ae4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(param_2 + 8);
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x88) = 1;
    lVar1 = *(longlong *)(param_1 + 0x28);
    local_20 = param_1;
    if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    FUN_1405f6d44(lVar1 + 0x16c8,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148988b64 FUN_148988b64 body=105 status=ok
// SIG undefined FUN_148988b64(void)

longlong * FUN_148988b64(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 == 0) {
      lVar3 = 0;
      goto LAB_148988bb1;
    }
  }
  else {
    FUN_1456cec3c(lVar1);
  }
  uVar2 = FUN_144a7c80a();
  lVar3 = FUN_144718840(lVar1,uVar2);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
LAB_148988bb1:
  *param_1 = lVar1;
  param_1[1] = lVar3;
  return param_1;
}



// FUNCTION 148988bce FUN_148988bce body=38 status=ok
// SIG undefined FUN_148988bce(void)

undefined8 FUN_148988bce(undefined8 param_1,int param_2)

{
  FUN_140d8c2c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148988bfa FUN_148988bfa body=29 status=ok
// SIG undefined FUN_148988bfa(void)

undefined8 FUN_148988bfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148988c1e FUN_148988c1e body=38 status=ok
// SIG undefined FUN_148988c1e(void)

undefined8 FUN_148988c1e(undefined8 param_1,int param_2)

{
  FUN_140e45946();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148988c48 FUN_148988c48 body=38 status=ok
// SIG undefined FUN_148988c48(void)

undefined8 FUN_148988c48(undefined8 param_1,int param_2)

{
  FUN_140f3e196();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148988c6e FUN_148988c6e body=38 status=ok
// SIG undefined FUN_148988c6e(void)

undefined8 FUN_148988c6e(undefined8 param_1,int param_2)

{
  FUN_140d2f728();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148988c96 FUN_148988c96 body=29 status=ok
// SIG undefined FUN_148988c96(void)

undefined8 FUN_148988c96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148988cb4 FUN_148988cb4 body=29 status=ok
// SIG undefined FUN_148988cb4(void)

undefined8 FUN_148988cb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148988cd2 FUN_148988cd2 body=29 status=ok
// SIG undefined FUN_148988cd2(void)

undefined8 FUN_148988cd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148988cf0 FUN_148988cf0 body=144 status=ok
// SIG undefined FUN_148988cf0(void)

longlong * FUN_148988cf0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b42af20;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14b2629c0;
  plVar3[8] = 0;
  plVar3[9] = 0;
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
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
  }
  return param_2;
}



// FUNCTION 148988d82 FUN_148988d82 body=9 status=ok
// SIG undefined FUN_148988d82(void)

void FUN_148988d82(longlong param_1)

{
  FUN_14871b066(param_1 + 0x10);
  return;
}



// FUNCTION 148988d8c FUN_148988d8c body=29 status=ok
// SIG undefined FUN_148988d8c(void)

undefined8 FUN_148988d8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148988daa FUN_148988daa body=228 status=ok
// SIG undefined FUN_148988daa(void)

undefined8 FUN_148988daa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b3e9c20;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b42af60;
  local_38[3] = param_3;
  local_38[4] = &LAB_148988e90;
  FUN_140ebcfd8(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148988eae FUN_148988eae body=38 status=ok
// SIG undefined FUN_148988eae(void)

undefined8 FUN_148988eae(undefined8 param_1,int param_2)

{
  FUN_1489890d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148988ed4 FUN_148988ed4 body=103 status=ok
// SIG undefined FUN_148988ed4(void)

void FUN_148988ed4(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x40);
  if (((bVar1 & 1) == 0) && (*(longlong *)(param_1 + 8) != 0)) {
    *(byte *)(param_1 + 0x40) = bVar1 | 1;
    FUN_14898913c(param_1,param_2);
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    *(byte *)(param_1 + 0x40) = bVar1 | 2;
    **(undefined1 **)(param_1 + 0x38) = 0;
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  if ((bVar1 & 2) != 0) {
    FUN_1489891de(param_1,param_2);
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  *(byte *)(param_2 + 0x60) = bVar1 >> 1 & 1;
  return;
}



// FUNCTION 148988f3c FUN_148988f3c body=29 status=ok
// SIG undefined FUN_148988f3c(void)

undefined8 FUN_148988f3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148988f76 FUN_148988f76 body=93 status=ok
// SIG undefined FUN_148988f76(void)

void FUN_148988f76(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b42af60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148988fd4 FUN_148988fd4 body=93 status=ok
// SIG undefined FUN_148988fd4(void)

void FUN_148988fd4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b42af60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148989032 FUN_148989032 body=126 status=ok
// SIG undefined FUN_148989032(void)

void FUN_148989032(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b42af60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489890a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489890be FUN_1489890be body=21 status=ok
// SIG undefined FUN_1489890be(void)

undefined8 FUN_1489890be(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489890d4 FUN_1489890d4 body=104 status=ok
// SIG undefined FUN_1489890d4(void)

void FUN_1489890d4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b42af40;
  if (param_1[1] != 0) {
    if (param_1[9] != 0) {
      FUN_14480f766(param_1[1] + 0x18);
    }
    param_1[9] = 0;
  }
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
                    /* WARNING: Could not recover jumptable at 0x000148989131. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14898913c FUN_14898913c body=160 status=ok
// SIG undefined FUN_14898913c(void)

void FUN_14898913c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  **(undefined1 **)(param_1 + 0x30) = 0;
  local_38 = 0;
  FUN_14485c47a(&local_38,*(undefined8 *)(param_1 + 0x28));
  uVar4 = local_38;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  iVar2 = *(int *)(param_2 + 0x58);
  lVar6 = (longlong)iVar2;
  *(uint *)(param_2 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
    FUN_14579eadc(param_2,iVar2);
  }
  lVar5 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar5 = param_2;
  }
  *(undefined8 *)(lVar5 + lVar6 * 0x14) = uVar3;
  *(undefined4 *)(lVar5 + 8 + lVar6 * 0x14) = uVar1;
  *(undefined8 *)(lVar5 + 0xc + lVar6 * 0x14) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489891de FUN_1489891de body=160 status=ok
// SIG undefined FUN_1489891de(void)

void FUN_1489891de(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  **(undefined1 **)(param_1 + 0x30) = 1;
  local_38 = 0;
  FUN_14485c47a(&local_38,*(undefined8 *)(param_1 + 0x28));
  uVar4 = local_38;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  iVar2 = *(int *)(param_2 + 0x58);
  lVar6 = (longlong)iVar2;
  *(uint *)(param_2 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
    FUN_14579eadc(param_2,iVar2);
  }
  lVar5 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar5 = param_2;
  }
  *(undefined8 *)(lVar5 + lVar6 * 0x14) = uVar3;
  *(undefined4 *)(lVar5 + 8 + lVar6 * 0x14) = uVar1;
  *(undefined8 *)(lVar5 + 0xc + lVar6 * 0x14) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148989280 FUN_148989280 body=38 status=ok
// SIG undefined FUN_148989280(void)

undefined8 FUN_148989280(undefined8 param_1,int param_2)

{
  FUN_140e0f122();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489892a8 FUN_1489892a8 body=29 status=ok
// SIG undefined FUN_1489892a8(void)

undefined8 FUN_1489892a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489892c6 FUN_1489892c6 body=74 status=ok
// SIG undefined FUN_1489892c6(void)

void FUN_1489892c6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148989310 FUN_148989310 body=29 status=ok
// SIG undefined FUN_148989310(void)

undefined8 FUN_148989310(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14898932e FUN_14898932e body=29 status=ok
// SIG undefined FUN_14898932e(void)

undefined8 FUN_14898932e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14898934c FUN_14898934c body=32 status=ok
// SIG undefined FUN_14898934c(void)

bool FUN_14898934c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_2 + 0x48,1);
  return lVar1 == *(longlong *)(param_1 + 0x28);
}



// FUNCTION 14898936e FUN_14898936e body=29 status=ok
// SIG undefined FUN_14898936e(void)

undefined8 FUN_14898936e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14898938c FUN_14898938c body=32 status=ok
// SIG undefined FUN_14898938c(void)

bool FUN_14898938c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_2 + 0x48,1);
  return lVar1 == *(longlong *)(param_1 + 0x28);
}



// FUNCTION 1489893b0 FUN_1489893b0 body=81 status=ok
// SIG undefined FUN_1489893b0(void)

undefined8 FUN_1489893b0(longlong param_1)

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



// FUNCTION 148989408 FUN_148989408 body=89 status=ok
// SIG undefined FUN_148989408(void)

bool FUN_148989408(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148989453;
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
LAB_148989453:
  return lVar6 == param_2;
}



// FUNCTION 148989462 FUN_148989462 body=118 status=ok
// SIG undefined FUN_148989462(void)

void FUN_148989462(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42b0c0;
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



// FUNCTION 1489894d8 FUN_1489894d8 body=156 status=ok
// SIG undefined FUN_1489894d8(void)

void FUN_1489894d8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42b0c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148989564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148989574 FUN_148989574 body=98 status=ok
// SIG undefined FUN_148989574(void)

void FUN_148989574(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489895bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489895cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1489895d6 FUN_1489895d6 body=68 status=ok
// SIG undefined FUN_1489895d6(void)

undefined8 * FUN_1489895d6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42b130;
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



// FUNCTION 14898961e FUN_14898961e body=81 status=ok
// SIG undefined FUN_14898961e(void)

undefined8 FUN_14898961e(longlong param_1)

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



// FUNCTION 148989676 FUN_148989676 body=89 status=ok
// SIG undefined FUN_148989676(void)

bool FUN_148989676(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1489896c1;
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
LAB_1489896c1:
  return lVar6 == param_2;
}



// FUNCTION 1489896f8 FUN_1489896f8 body=118 status=ok
// SIG undefined FUN_1489896f8(void)

void FUN_1489896f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42b1a0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b42b130;
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



// FUNCTION 14898976e FUN_14898976e body=156 status=ok
// SIG undefined FUN_14898976e(void)

void FUN_14898976e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42b1a0;
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var1->CriticalSection + 4) = uVar4;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = uVar5;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Flink + 4) = uVar6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b42b130;
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
                    /* WARNING: Could not recover jumptable at 0x0001489897fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14898980a FUN_14898980a body=106 status=ok
// SIG undefined FUN_14898980a(void)

void FUN_14898980a(longlong param_1,undefined8 param_2)

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
        (**(code **)(param_1 + 0x28))
                  (*(undefined8 *)(param_1 + 0x18),param_2,*(undefined4 *)(param_1 + 8));
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
                    /* WARNING: Could not recover jumptable at 0x000148989857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014898986a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0,param_2,*(undefined4 *)(param_1 + 8));
  return;
}



// FUNCTION 148989876 FUN_148989876 body=64 status=ok
// SIG undefined FUN_148989876(void)

undefined8 * FUN_148989876(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42b210;
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



// FUNCTION 1489898ba FUN_1489898ba body=81 status=ok
// SIG undefined FUN_1489898ba(void)

undefined8 FUN_1489898ba(longlong param_1)

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



// FUNCTION 148989912 FUN_148989912 body=89 status=ok
// SIG undefined FUN_148989912(void)

bool FUN_148989912(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14898995d;
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
LAB_14898995d:
  return lVar6 == param_2;
}



// FUNCTION 148989988 FUN_148989988 body=118 status=ok
// SIG undefined FUN_148989988(void)

void FUN_148989988(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42b210;
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



// FUNCTION 1489899fe FUN_1489899fe body=118 status=ok
// SIG undefined FUN_1489899fe(void)

void FUN_1489899fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42b210;
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



// FUNCTION 148989a74 FUN_148989a74 body=156 status=ok
// SIG undefined FUN_148989a74(void)

void FUN_148989a74(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42b210;
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
                    /* WARNING: Could not recover jumptable at 0x000148989b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148989b10 FUN_148989b10 body=94 status=ok
// SIG undefined FUN_148989b10(void)

void FUN_148989b10(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148989b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148989b63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148989b6e FUN_148989b6e body=93 status=ok
// SIG undefined FUN_148989b6e(void)

ulonglong FUN_148989b6e(longlong param_1)

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
LAB_148989bc0:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148989bc0;
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



// FUNCTION 148989bcc FUN_148989bcc body=64 status=ok
// SIG undefined FUN_148989bcc(void)

undefined8 * FUN_148989bcc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42b280;
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



// FUNCTION 148989c10 FUN_148989c10 body=81 status=ok
// SIG undefined FUN_148989c10(void)

undefined8 FUN_148989c10(longlong param_1)

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



// FUNCTION 148989c68 FUN_148989c68 body=89 status=ok
// SIG undefined FUN_148989c68(void)

bool FUN_148989c68(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148989cb3;
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
LAB_148989cb3:
  return lVar6 == param_2;
}



// FUNCTION 148989cea FUN_148989cea body=118 status=ok
// SIG undefined FUN_148989cea(void)

void FUN_148989cea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42b2f0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b42b280;
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



// FUNCTION 148989d60 FUN_148989d60 body=118 status=ok
// SIG undefined FUN_148989d60(void)

void FUN_148989d60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42b2f0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b42b280;
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



// FUNCTION 148989dd6 FUN_148989dd6 body=156 status=ok
// SIG undefined FUN_148989dd6(void)

void FUN_148989dd6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42b2f0;
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var1->CriticalSection + 4) = uVar4;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = uVar5;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Flink + 4) = uVar6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b42b280;
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
                    /* WARNING: Could not recover jumptable at 0x000148989e62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148989e72 FUN_148989e72 body=114 status=ok
// SIG undefined FUN_148989e72(void)

void FUN_148989e72(longlong param_1)

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
        (**(code **)(param_1 + 0x28))
                  (*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),
                   *(undefined4 *)(param_1 + 0xc));
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
                    /* WARNING: Could not recover jumptable at 0x000148989ec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148989eda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  return;
}



// FUNCTION 148989ee4 FUN_148989ee4 body=102 status=ok
// SIG undefined FUN_148989ee4(void)

ulonglong FUN_148989ee4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148989f3f:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148989f3f;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))
                (lVar4,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 148989f66 FUN_148989f66 body=29 status=ok
// SIG undefined FUN_148989f66(void)

bool FUN_148989f66(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148989f84 FUN_148989f84 body=26 status=ok
// SIG undefined FUN_148989f84(void)

bool FUN_148989f84(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148989f9e FUN_148989f9e body=24 status=ok
// SIG undefined FUN_148989f9e(void)

bool FUN_148989f9e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148989fc2 FUN_148989fc2 body=93 status=ok
// SIG undefined FUN_148989fc2(void)

void FUN_148989fc2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42b3d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42b360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14898a020 FUN_14898a020 body=93 status=ok
// SIG undefined FUN_14898a020(void)

void FUN_14898a020(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42b3d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42b360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14898a07e FUN_14898a07e body=126 status=ok
// SIG undefined FUN_14898a07e(void)

void FUN_14898a07e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b42b3d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42b360;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014898a0ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14898a0fc FUN_14898a0fc body=163 status=ok
// SIG undefined FUN_14898a0fc(void)

bool FUN_14898a0fc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14898a1ba FUN_14898a1ba body=29 status=ok
// SIG undefined FUN_14898a1ba(void)

bool FUN_14898a1ba(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 == param_2;
}



// FUNCTION 14898a1d8 FUN_14898a1d8 body=26 status=ok
// SIG undefined FUN_14898a1d8(void)

bool FUN_14898a1d8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x28,1);
  return lVar1 == 0;
}



// FUNCTION 14898a1fc FUN_14898a1fc body=101 status=ok
// SIG undefined FUN_14898a1fc(void)

void FUN_14898a1fc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b42b440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14898a262 FUN_14898a262 body=101 status=ok
// SIG undefined FUN_14898a262(void)

void FUN_14898a262(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b42b440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14898a2c8 FUN_14898a2c8 body=134 status=ok
// SIG undefined FUN_14898a2c8(void)

void FUN_14898a2c8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b42b440;
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
                    /* WARNING: Could not recover jumptable at 0x00014898a33f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14898a34e FUN_14898a34e body=91 status=ok
// SIG undefined FUN_14898a34e(void)

void FUN_14898a34e(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 1;
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(param_1 + 0x18),&local_1a);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14898a3ac FUN_14898a3ac body=114 status=ok
// SIG undefined FUN_14898a3ac(void)

void FUN_14898a3ac(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14898a41e FUN_14898a41e body=114 status=ok
// SIG undefined FUN_14898a41e(void)

void FUN_14898a41e(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14898a490 FUN_14898a490 body=114 status=ok
// SIG undefined FUN_14898a490(void)

void FUN_14898a490(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14898a502 FUN_14898a502 body=143 status=ok
// SIG undefined FUN_14898a502(void)

void FUN_14898a502(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14898a5ac FUN_14898a5ac body=29 status=ok
// SIG undefined FUN_14898a5ac(void)

bool FUN_14898a5ac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14898a5ca FUN_14898a5ca body=26 status=ok
// SIG undefined FUN_14898a5ca(void)

bool FUN_14898a5ca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14898a5e4 FUN_14898a5e4 body=24 status=ok
// SIG undefined FUN_14898a5e4(void)

bool FUN_14898a5e4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14898a608 FUN_14898a608 body=93 status=ok
// SIG undefined FUN_14898a608(void)

void FUN_14898a608(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42b600;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b42b590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14898a666 FUN_14898a666 body=93 status=ok
// SIG undefined FUN_14898a666(void)

void FUN_14898a666(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42b600;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b42b590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14898a6c4 FUN_14898a6c4 body=126 status=ok
// SIG undefined FUN_14898a6c4(void)

void FUN_14898a6c4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42b600;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14b42b590;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014898a733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14898a742 FUN_14898a742 body=167 status=ok
// SIG undefined FUN_14898a742(void)

bool FUN_14898a742(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,*(undefined4 *)(param_1 + 8));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14898a7ec FUN_14898a7ec body=132 status=ok
// SIG undefined FUN_14898a7ec(void)

void FUN_14898a7ec(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14898a876 FUN_14898a876 body=81 status=ok
// SIG undefined FUN_14898a876(void)

undefined8 FUN_14898a876(longlong param_1)

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



// FUNCTION 14898a8ce FUN_14898a8ce body=89 status=ok
// SIG undefined FUN_14898a8ce(void)

bool FUN_14898a8ce(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14898a919;
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
LAB_14898a919:
  return lVar6 == param_2;
}



// FUNCTION 14898a928 FUN_14898a928 body=118 status=ok
// SIG undefined FUN_14898a928(void)

void FUN_14898a928(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42b670;
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


