// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148a4898a FUN_148a4898a body=133 status=ok
// SIG undefined FUN_148a4898a(void)

void FUN_148a4898a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  pcVar4 = *(code **)(param_1 + 0x20);
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  (*pcVar4)(uVar3,&local_20);
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a48a10 FUN_148a48a10 body=135 status=ok
// SIG undefined FUN_148a48a10(void)

undefined8 FUN_148a48a10(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  pcVar4 = *(code **)(param_1 + 0x20);
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  (*pcVar4)(uVar3,&local_20);
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a48a9a FUN_148a48a9a body=31 status=ok
// SIG undefined FUN_148a48a9a(void)

undefined8 FUN_148a48a9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a48ad4 FUN_148a48ad4 body=29 status=ok
// SIG undefined FUN_148a48ad4(void)

bool FUN_148a48ad4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a48af2 FUN_148a48af2 body=26 status=ok
// SIG undefined FUN_148a48af2(void)

bool FUN_148a48af2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a48b0c FUN_148a48b0c body=24 status=ok
// SIG undefined FUN_148a48b0c(void)

bool FUN_148a48b0c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a48b24 FUN_148a48b24 body=93 status=ok
// SIG undefined FUN_148a48b24(void)

void FUN_148a48b24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4c2ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c38b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a48b82 FUN_148a48b82 body=93 status=ok
// SIG undefined FUN_148a48b82(void)

void FUN_148a48b82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4c2ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c38b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a48be0 FUN_148a48be0 body=126 status=ok
// SIG undefined FUN_148a48be0(void)

void FUN_148a48be0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4c2ba0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4c38b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a48c4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a48c5e FUN_148a48c5e body=48 status=ok
// SIG undefined FUN_148a48c5e(void)

void FUN_148a48c5e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a48c8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148a48c8e FUN_148a48c8e body=163 status=ok
// SIG undefined FUN_148a48c8e(void)

bool FUN_148a48c8e(longlong param_1,undefined8 param_2,undefined4 param_3)

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



// FUNCTION 148a48d32 FUN_148a48d32 body=31 status=ok
// SIG undefined FUN_148a48d32(void)

undefined8 FUN_148a48d32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a48d6c FUN_148a48d6c body=29 status=ok
// SIG undefined FUN_148a48d6c(void)

bool FUN_148a48d6c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a48d8a FUN_148a48d8a body=26 status=ok
// SIG undefined FUN_148a48d8a(void)

bool FUN_148a48d8a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a48da4 FUN_148a48da4 body=24 status=ok
// SIG undefined FUN_148a48da4(void)

bool FUN_148a48da4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a48dbc FUN_148a48dbc body=93 status=ok
// SIG undefined FUN_148a48dbc(void)

void FUN_148a48dbc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149eae4d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c3920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a48e1a FUN_148a48e1a body=93 status=ok
// SIG undefined FUN_148a48e1a(void)

void FUN_148a48e1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149eae4d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c3920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a48e78 FUN_148a48e78 body=126 status=ok
// SIG undefined FUN_148a48e78(void)

void FUN_148a48e78(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149eae4d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4c3920;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a48ee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a48ef6 FUN_148a48ef6 body=48 status=ok
// SIG undefined FUN_148a48ef6(void)

void FUN_148a48ef6(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a48f23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148a48f26 FUN_148a48f26 body=163 status=ok
// SIG undefined FUN_148a48f26(void)

bool FUN_148a48f26(longlong param_1,undefined8 param_2,undefined4 param_3)

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



// FUNCTION 148a48fca FUN_148a48fca body=31 status=ok
// SIG undefined FUN_148a48fca(void)

undefined8 FUN_148a48fca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a49004 FUN_148a49004 body=29 status=ok
// SIG undefined FUN_148a49004(void)

bool FUN_148a49004(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a49022 FUN_148a49022 body=26 status=ok
// SIG undefined FUN_148a49022(void)

bool FUN_148a49022(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a49048 FUN_148a49048 body=93 status=ok
// SIG undefined FUN_148a49048(void)

void FUN_148a49048(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4c3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c3990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a490a6 FUN_148a490a6 body=126 status=ok
// SIG undefined FUN_148a490a6(void)

void FUN_148a490a6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4c3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4c3990;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a49115. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a49124 FUN_148a49124 body=171 status=ok
// SIG undefined FUN_148a49124(void)

void FUN_148a49124(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = FUN_14479d2ce(param_1 + 0x18);
  pcVar3 = *(code **)(param_1 + 0x20);
  local_40 = *param_4;
  local_38 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  local_48 = param_5;
  (*pcVar3)(uVar5,param_2,param_3);
  plVar4 = (longlong *)param_4[1];
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a491d2 FUN_148a491d2 body=132 status=ok
// SIG undefined FUN_148a491d2(void)

void FUN_148a491d2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a49258 FUN_148a49258 body=118 status=ok
// SIG undefined FUN_148a49258(void)

void FUN_148a49258(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4ba060;
  plVar3 = (longlong *)param_1[0x11];
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
  FUN_148a492ce(param_1 + 10);
  FUN_148a492ce(param_1 + 6);
  FUN_148a4932b(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a492ce FUN_148a492ce body=93 status=ok
// SIG undefined FUN_148a492ce(void)

void FUN_148a492ce(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  puVar1 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[2];
  do {
    puVar2 = (undefined8 *)*puVar4;
    FUN_1400020a8(puVar4);
    bVar5 = puVar4 != puVar1;
    puVar4 = puVar2;
  } while (bVar5);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    if (puVar2[2] != 0) {
      plVar3 = puVar2 + 6;
      if ((longlong *)puVar2[4] != (longlong *)0x0) {
        plVar3 = (longlong *)puVar2[4];
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    FUN_1400020a8(puVar2);
    puVar2 = puVar1;
  }
  return;
}



// FUNCTION 148a4932b FUN_148a4932b body=38 status=ok
// SIG undefined FUN_148a4932b(void)

void FUN_148a4932b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148a3766e(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 148a49352 FUN_148a49352 body=91 status=ok
// SIG undefined FUN_148a49352(void)

void FUN_148a49352(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb95d68);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a493ae FUN_148a493ae body=156 status=ok
// SIG undefined FUN_148a493ae(void)

void FUN_148a493ae(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x6d8))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4944c FUN_148a4944c body=91 status=ok
// SIG undefined FUN_148a4944c(void)

void FUN_148a4944c(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb95d78);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a494a8 FUN_148a494a8 body=156 status=ok
// SIG undefined FUN_148a494a8(void)

void FUN_148a494a8(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x6e0))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a49546 FUN_148a49546 body=47 status=ok
// SIG undefined FUN_148a49546(void)

void FUN_148a49546(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb95d88);
                    /* WARNING: Could not recover jumptable at 0x000148a49572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148a49590 FUN_148a49590 body=91 status=ok
// SIG undefined FUN_148a49590(void)

void FUN_148a49590(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb95d98);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a495ec FUN_148a495ec body=158 status=ok
// SIG undefined FUN_148a495ec(void)

void FUN_148a495ec(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x6d0))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4968c FUN_148a4968c body=267 status=ok
// SIG undefined FUN_148a4968c(void)

void FUN_148a4968c(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  undefined4 local_98 [2];
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98[0] = 0xffffffff;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_90 = &PTR_FUN_14a5af930;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_144a787a6(local_a8);
  local_98[0] = *param_3;
  FUN_141238a10(&local_90,param_3 + 2);
  FUN_148a4a240(&local_60,param_3 + 0xe);
  FUN_148a4a240(&local_50,param_3 + 0x12);
  uVar1 = FUN_14477b072(param_1,DAT_14cb95da8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_a8);
  FUN_1458da114(local_98);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a49798 FUN_148a49798 body=354 status=ok
// SIG undefined FUN_148a49798(void)

void FUN_148a49798(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  longlong local_88 [3];
  undefined4 local_70 [2];
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  local_88[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_70[0] = 0xffffffff;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_68 = &PTR_FUN_14a5af930;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x698))(param_1,local_88,local_70);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerAddOrUpdateReservationRequest_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x6a0))(param_1,local_88,local_70);
  }
  FUN_1458da114(local_70);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a498fc FUN_148a498fc body=183 status=ok
// SIG undefined FUN_148a498fc(void)

void FUN_148a498fc(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_58 = &PTR_FUN_14a5af930;
  local_38 = 0;
  uStack_30 = 0;
  FUN_141238a10(&local_58);
  uVar1 = FUN_14477b072(param_1,DAT_14cb95db8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_58);
  local_58 = &PTR_FUN_14a5af930;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_58 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])(&local_50);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a499b4 FUN_148a499b4 body=278 status=ok
// SIG undefined FUN_148a499b4(void)

void FUN_148a499b4(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_78 [40];
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  byte local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_50 = &PTR_FUN_14a5af930;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x678))(param_1,&local_50);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerCancelReservationRequest_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x680))(param_1,&local_50);
  }
  local_50 = &PTR_FUN_14a5af930;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_38])(&local_48);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a49acc FUN_148a49acc body=267 status=ok
// SIG undefined FUN_148a49acc(void)

void FUN_148a49acc(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  undefined4 local_98 [2];
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98[0] = 0xffffffff;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_90 = &PTR_FUN_14a5af930;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_144a787a6(local_a8);
  local_98[0] = *param_3;
  FUN_141238a10(&local_90,param_3 + 2);
  FUN_148a4a240(&local_60,param_3 + 0xe);
  FUN_148a4a240(&local_50,param_3 + 0x12);
  uVar1 = FUN_14477b072(param_1,DAT_14cb95dc8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_a8);
  FUN_1458da114(local_98);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a49bd8 FUN_148a49bd8 body=354 status=ok
// SIG undefined FUN_148a49bd8(void)

void FUN_148a49bd8(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  longlong local_88 [3];
  undefined4 local_70 [2];
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  local_88[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_70[0] = 0xffffffff;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_68 = &PTR_FUN_14a5af930;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x688))(param_1,local_88,local_70);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerRemoveMemberFromReservationRequest_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x690))(param_1,local_88,local_70);
  }
  FUN_1458da114(local_70);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a49d3c FUN_148a49d3c body=267 status=ok
// SIG undefined FUN_148a49d3c(void)

void FUN_148a49d3c(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  undefined4 local_98 [2];
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98[0] = 0xffffffff;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_90 = &PTR_FUN_14a5af930;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_144a787a6(local_a8);
  local_98[0] = *param_3;
  FUN_141238a10(&local_90,param_3 + 2);
  FUN_148a4a240(&local_60,param_3 + 0xe);
  FUN_148a4a240(&local_50,param_3 + 0x12);
  uVar1 = FUN_14477b072(param_1,DAT_14cb95dd8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_a8);
  FUN_1458da114(local_98);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a49e48 FUN_148a49e48 body=354 status=ok
// SIG undefined FUN_148a49e48(void)

void FUN_148a49e48(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  longlong local_88 [3];
  undefined4 local_70 [2];
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  local_88[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_70[0] = 0xffffffff;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_68 = &PTR_FUN_14a5af930;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x6b8))(param_1,local_88,local_70);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerReservationRequest_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x6c0))(param_1,local_88,local_70);
  }
  FUN_1458da114(local_70);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a49fac FUN_148a49fac body=267 status=ok
// SIG undefined FUN_148a49fac(void)

void FUN_148a49fac(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  undefined4 local_98 [2];
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98[0] = 0xffffffff;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_90 = &PTR_FUN_14a5af930;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_144a787a6(local_a8);
  local_98[0] = *param_3;
  FUN_141238a10(&local_90,param_3 + 2);
  FUN_148a4a240(&local_60,param_3 + 0xe);
  FUN_148a4a240(&local_50,param_3 + 0x12);
  uVar1 = FUN_14477b072(param_1,DAT_14cb95de8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_a8);
  FUN_1458da114(local_98);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4a0b8 FUN_148a4a0b8 body=354 status=ok
// SIG undefined FUN_148a4a0b8(void)

void FUN_148a4a0b8(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  longlong local_88 [3];
  undefined4 local_70 [2];
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  local_88[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_70[0] = 0xffffffff;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_68 = &PTR_FUN_14a5af930;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x6a8))(param_1,local_88,local_70);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerUpdateReservationRequest_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x6b0))(param_1,local_88,local_70);
  }
  FUN_1458da114(local_70);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4a240 FUN_148a4a240 body=95 status=ok
// SIG undefined FUN_148a4a240(void)

undefined8 * FUN_148a4a240(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458da195(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a4e60e(param_1,iVar1);
      FUN_148a4e67d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148a4a2a0 FUN_148a4a2a0 body=411 status=ok
// SIG undefined FUN_148a4a2a0(void)

ulonglong FUN_148a4a2a0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  longlong local_68 [2];
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong *)(param_2 + 8) != 0) && (*(longlong **)(param_2 + 0x100) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_2 + 0x100) + 0x20))();
    if (cVar3 != '\0') {
      FUN_1447210f0(param_1);
      local_58 = (longlong *)0x0;
      plVar6 = (longlong *)FUN_1401e3228();
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
        plVar6 = local_58;
        if (local_58 == (longlong *)0x0) {
          bVar4 = 1;
        }
        else {
          local_68[0] = 0;
          local_68[1] = 0;
          FUN_1401a700c(&local_78,0x122);
          bVar4 = (**(code **)(*plVar6 + 0x370))(plVar6,param_2,local_78,local_68);
          if (bVar4 != 0) {
            plVar6 = (longlong *)(**(code **)(**(longlong **)(param_2 + 0x100) + 0x38))();
            (**(code **)(*plVar6 + 0x30))(plVar6,&local_78);
            local_88 = param_4;
            uVar5 = (**(code **)(*param_1 + 0x6f0))(param_1,local_68,&local_78,param_3);
            plVar6 = (longlong *)(ulonglong)uVar5;
            if (CONCAT44(uStack_74,local_78) != 0) {
              FUN_1400020a8();
            }
          }
          if (local_68[0] != 0) {
            FUN_1400020a8();
          }
          bVar4 = bVar4 ^ 1;
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)local_50 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
        if (bVar4 == 0) goto LAB_148a4a408;
      }
    }
  }
  (**(code **)(*param_1 + 0x650))(param_1);
  plVar6 = (longlong *)0x0;
LAB_148a4a408:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return (ulonglong)plVar6 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4a43c FUN_148a4a43c body=123 status=ok
// SIG undefined FUN_148a4a43c(void)

bool FUN_148a4a43c(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  
  lVar1 = param_1[0x7a];
  if ((char)lVar1 == '\x03') {
    *(byte *)(param_1 + 0x97) = param_4 << 2 | 2;
    FUN_141238a10(param_1 + 0x8d);
    FUN_148a4a240(param_1 + 0x93,param_3);
    (**(code **)(*param_1 + 0x748))(param_1,param_1 + 0x8a,param_1 + 0x8c);
    *(undefined1 *)((longlong)param_1 + 0x4b9) = 1;
  }
  return (char)lVar1 == '\x03';
}



// FUNCTION 148a4a4b8 FUN_148a4a4b8 body=81 status=ok
// SIG undefined FUN_148a4a4b8(void)

undefined8
FUN_148a4a4b8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             char param_5)

{
  char cVar1;
  undefined8 unaff_RBX;
  
  if ((char)param_1[0x7a] == '\x03') {
    (**(code **)(*param_1 + 0x708))
              (param_1,param_3,param_4,
               CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x6e8))(param_1);
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 0x97) = param_5 << 2 | 2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 148a4a50a FUN_148a4a50a body=35 status=ok
// SIG undefined FUN_148a4a50a(void)

void FUN_148a4a50a(longlong param_1)

{
  FUN_1416534da(param_1,1);
  *(undefined1 *)(param_1 + 0x4b8) = 0;
  FUN_143ed4d28(param_1);
  return;
}



// FUNCTION 148a4a52e FUN_148a4a52e body=111 status=ok
// SIG undefined FUN_148a4a52e(void)

bool FUN_148a4a52e(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_148a39a98();
  cVar1 = FUN_143ee02e9(uVar2,param_3 + 8);
  if (cVar1 == '\0') {
    return false;
  }
  if (*(int *)(param_2 + 8) < 2) {
    return false;
  }
  if ((&DAT_149fc1b6e)[*(byte *)(param_3 + 0x20)] == '\x01') {
    if ((*(longlong **)(param_3 + 0x10) != (longlong *)0x0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_3 + 0x10) + 0x28))(), cVar1 != '\0')) {
LAB_148a4a594:
      return 0 < *(int *)(param_3 + 0x40);
    }
  }
  else if ((*(uint *)(param_3 + 0x10) & 0xffffff) != 0) goto LAB_148a4a594;
  return false;
}



// FUNCTION 148a4a59e FUN_148a4a59e body=170 status=ok
// SIG undefined FUN_148a4a59e(void)

void FUN_148a4a59e(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_148a39a16();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_145b836ee();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      *(undefined4 *)(param_1 + 0x460) = *param_3;
      FUN_141238a10(param_1 + 0x468,param_3 + 2);
      FUN_148a4a240(param_1 + 0x498,param_3 + 0xe);
      FUN_148a4a240(param_1 + 0x4a8,param_3 + 0x12);
      *(undefined1 *)(param_1 + 0x4b8) = 1;
                    /* WARNING: Could not recover jumptable at 0x000148a4a645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x708))(plVar1,param_1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 148a4a648 FUN_148a4a648 body=111 status=ok
// SIG undefined FUN_148a4a648(void)

bool FUN_148a4a648(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_148a39a98();
  cVar1 = FUN_143ee02e9(uVar2,param_3 + 8);
  if (cVar1 == '\0') {
    return false;
  }
  if (*(int *)(param_2 + 8) < 2) {
    return false;
  }
  if ((&DAT_149fc1b6e)[*(byte *)(param_3 + 0x20)] == '\x01') {
    if ((*(longlong **)(param_3 + 0x10) != (longlong *)0x0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_3 + 0x10) + 0x28))(), cVar1 != '\0')) {
LAB_148a4a6ae:
      return 0 < *(int *)(param_3 + 0x40);
    }
  }
  else if ((*(uint *)(param_3 + 0x10) & 0xffffff) != 0) goto LAB_148a4a6ae;
  return false;
}



// FUNCTION 148a4a6b8 FUN_148a4a6b8 body=167 status=ok
// SIG undefined FUN_148a4a6b8(void)

void FUN_148a4a6b8(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_148a39a16();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_145b836ee();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      *(undefined4 *)(param_1 + 0x460) = *param_3;
      FUN_141238a10(param_1 + 0x468,param_3 + 2);
      FUN_148a4a240(param_1 + 0x498,param_3 + 0xe);
      FUN_148a4a240(param_1 + 0x4a8,param_3 + 0x12);
      *(undefined1 *)(param_1 + 0x4b8) = 2;
      (**(code **)(*plVar1 + 0x710))(plVar1,param_1,param_2,param_3,0);
    }
  }
  return;
}



// FUNCTION 148a4a760 FUN_148a4a760 body=111 status=ok
// SIG undefined FUN_148a4a760(void)

bool FUN_148a4a760(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_148a39a98();
  cVar1 = FUN_143ee02e9(uVar2,param_3 + 8);
  if (cVar1 == '\0') {
    return false;
  }
  if (*(int *)(param_2 + 8) < 2) {
    return false;
  }
  if ((&DAT_149fc1b6e)[*(byte *)(param_3 + 0x20)] == '\x01') {
    if ((*(longlong **)(param_3 + 0x10) != (longlong *)0x0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_3 + 0x10) + 0x28))(), cVar1 != '\0')) {
LAB_148a4a7c6:
      return 0 < *(int *)(param_3 + 0x40);
    }
  }
  else if ((*(uint *)(param_3 + 0x10) & 0xffffff) != 0) goto LAB_148a4a7c6;
  return false;
}



// FUNCTION 148a4a7d0 FUN_148a4a7d0 body=170 status=ok
// SIG undefined FUN_148a4a7d0(void)

void FUN_148a4a7d0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_148a39a16();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_145b836ee();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      *(undefined4 *)(param_1 + 0x460) = *param_3;
      FUN_141238a10(param_1 + 0x468,param_3 + 2);
      FUN_148a4a240(param_1 + 0x498,param_3 + 0xe);
      FUN_148a4a240(param_1 + 0x4a8,param_3 + 0x12);
      *(undefined1 *)(param_1 + 0x4b8) = 1;
                    /* WARNING: Could not recover jumptable at 0x000148a4a877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x718))(plVar1,param_1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 148a4a87a FUN_148a4a87a body=111 status=ok
// SIG undefined FUN_148a4a87a(void)

bool FUN_148a4a87a(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_148a39a98();
  cVar1 = FUN_143ee02e9(uVar2,param_3 + 8);
  if (cVar1 == '\0') {
    return false;
  }
  if (*(int *)(param_2 + 8) < 2) {
    return false;
  }
  if ((&DAT_149fc1b6e)[*(byte *)(param_3 + 0x20)] == '\x01') {
    if ((*(longlong **)(param_3 + 0x10) != (longlong *)0x0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_3 + 0x10) + 0x28))(), cVar1 != '\0')) {
LAB_148a4a8e0:
      return 0 < *(int *)(param_3 + 0x40);
    }
  }
  else if ((*(uint *)(param_3 + 0x10) & 0xffffff) != 0) goto LAB_148a4a8e0;
  return false;
}



// FUNCTION 148a4a8ea FUN_148a4a8ea body=167 status=ok
// SIG undefined FUN_148a4a8ea(void)

void FUN_148a4a8ea(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_148a39a16();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_145b836ee();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      *(undefined4 *)(param_1 + 0x460) = *param_3;
      FUN_141238a10(param_1 + 0x468,param_3 + 2);
      FUN_148a4a240(param_1 + 0x498,param_3 + 0xe);
      FUN_148a4a240(param_1 + 0x4a8,param_3 + 0x12);
      *(undefined1 *)(param_1 + 0x4b8) = 6;
      (**(code **)(*plVar1 + 0x710))(plVar1,param_1,param_2,param_3,1);
    }
  }
  return;
}



// FUNCTION 148a4a992 FUN_148a4a992 body=86 status=ok
// SIG undefined FUN_148a4a992(void)

ulonglong FUN_148a4a992(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = FUN_148a39a98();
  cVar1 = FUN_143ee02e9(uVar2,param_2);
  if (cVar1 != '\0') {
    if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 0x18)] != '\x01') {
      return (ulonglong)((*(uint *)(param_2 + 8) & 0xffffff) != 0);
    }
    if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a4a9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 0x28))();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 148a4a9e8 FUN_148a4a9e8 body=102 status=ok
// SIG undefined FUN_148a4a9e8(void)

void FUN_148a4a9e8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_148a39a16();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_145b836ee();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      *(undefined1 *)(param_1 + 0x4ba) = 1;
                    /* WARNING: Could not recover jumptable at 0x000148a4aa4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x720))(plVar1,param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148a4aa62 FUN_148a4aa62 body=175 status=ok
// SIG undefined FUN_148a4aa62(void)

undefined8 FUN_148a4aa62(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4ab26 FUN_148a4ab26 body=219 status=ok
// SIG undefined FUN_148a4ab26(void)

undefined4 FUN_148a4ab26(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1447210f0();
  local_28 = 0;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    plVar4 = local_38;
    if (local_38 != (longlong *)0x0) {
      uVar5 = FUN_14127b0d4(param_2);
      (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x2f0))
                (*(longlong **)(param_1 + 0x3b8),&local_40);
      uVar3 = (**(code **)(*plVar4 + 0x110))(plVar4,local_40,uVar5);
      goto LAB_148a4abba;
    }
  }
  uVar3 = 0;
LAB_148a4abba:
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4ac02 FUN_148a4ac02 body=85 status=ok
// SIG undefined FUN_148a4ac02(void)

void FUN_148a4ac02(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = 0;
    iVar1 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2) == *param_2) {
        if (iVar1 == 1) {
          return;
        }
        FUN_148a4eade(param_1,-iVar1);
        FUN_148a4e9c4(param_1);
        return;
      }
      iVar1 = iVar1 + -1;
      lVar2 = lVar2 + 0x10;
    } while ((longlong)(int)param_1[1] * 0x10 != lVar2);
  }
  return;
}



// FUNCTION 148a4ac58 FUN_148a4ac58 body=361 status=ok
// SIG undefined FUN_148a4ac58(void)

void FUN_148a4ac58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = FUN_1447210f0();
  if (*(longlong *)(lVar2 + 0x1f0) == 0) {
    puVar3 = (undefined8 *)(lVar2 + 0x458);
  }
  else {
    puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
  }
  uVar1 = *puVar3;
  local_98 = 0;
  local_90 = 0;
  FUN_14009d848(&local_98,param_2);
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,3,0x10);
  local_80 = 3;
  *local_88 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_88[2] = lVar4;
  *local_88 = &PTR_FUN_14b4cdd70;
  local_88[3] = local_98;
  local_98 = 0;
  *(undefined4 *)(local_88 + 4) = local_90;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_14487d8d8(&local_78,&local_88);
  local_38 = 1;
  FUN_14016fdb0(uVar1,local_a0,&local_78);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
  FUN_1449db362(&local_88);
  FUN_1449db362(&local_98);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4adc2 FUN_148a4adc2 body=60 status=ok
// SIG undefined FUN_148a4adc2(void)

undefined8 FUN_148a4adc2(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong **)(param_1 + 0x3b8) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x2d8))(), cVar1 != '\0')) {
    FUN_148a4ac58(param_1,param_1 + 0x3d0);
    return 1;
  }
  return 0;
}



// FUNCTION 148a4adfe FUN_148a4adfe body=60 status=ok
// SIG undefined FUN_148a4adfe(void)

undefined8 FUN_148a4adfe(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong **)(param_1 + 0x3b8) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x2e0))(), cVar1 != '\0')) {
    FUN_148a4ac58(param_1,param_1 + 0x3d0);
    return 1;
  }
  return 0;
}



// FUNCTION 148a4ae44 FUN_148a4ae44 body=189 status=ok
// SIG undefined FUN_148a4ae44(void)

undefined8 FUN_148a4ae44(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x20)] == '\x01') {
    if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
      return 0;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  else if ((*(uint *)(param_1 + 0x10) & 0xffffff) == 0) {
    return 0;
  }
  if ((longlong)*(int *)(param_1 + 0x40) < 1) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  lVar3 = (longlong)*(int *)(param_1 + 0x40) * 0x58;
  while( true ) {
    if ((&DAT_149fc1b6e)[*(byte *)(lVar2 + 0x18)] == '\x01') {
      if (*(longlong **)(lVar2 + 8) == (longlong *)0x0) {
        return 0;
      }
      cVar1 = (**(code **)(**(longlong **)(lVar2 + 8) + 0x28))();
      if (cVar1 == '\0') {
        return 0;
      }
    }
    else if ((*(uint *)(lVar2 + 8) & 0xffffff) == 0) {
      return 0;
    }
    if (*(int *)(lVar2 + 0x48) < 2) {
      return 0;
    }
    if (((param_2 != '\0') && (cVar1 = FUN_140ba41f1(param_1 + 8,lVar2), cVar1 != '\0')) &&
       (*(int *)(lVar2 + 0x38) < 2)) break;
    lVar2 = lVar2 + 0x58;
    lVar3 = lVar3 + -0x58;
    if (lVar3 == 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 148a4af02 FUN_148a4af02 body=225 status=ok
// SIG undefined FUN_148a4af02(void)

undefined8 * FUN_148a4af02(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(param_2 + 0x18);
  *(byte *)(param_1 + 3) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(param_1 + 1,param_2 + 8);
  *param_1 = &PTR_FUN_14a5af930;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  iVar2 = *(int *)(param_2 + 0x38);
  pvVar3 = *(void **)(param_2 + 0x30);
  *(int *)(param_1 + 7) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar2,0);
    memcpy((void *)param_1[6],pvVar3,(longlong)iVar2 * 2);
  }
  param_1[8] = 0;
  iVar2 = *(int *)(param_2 + 0x48);
  pvVar3 = *(void **)(param_2 + 0x40);
  *(int *)(param_1 + 9) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar2,0);
    memcpy((void *)param_1[8],pvVar3,(longlong)iVar2 * 2);
  }
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  return param_1;
}



// FUNCTION 148a4afe4 FUN_148a4afe4 body=106 status=ok
// SIG undefined FUN_148a4afe4(void)

int FUN_148a4afe4(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = (ulonglong)*(int *)(param_1 + 0x40);
  if ((longlong)uVar4 < 1) {
    iVar3 = 0;
  }
  else {
    lVar5 = uVar4 * 0x58;
    iVar3 = 0;
    do {
      lVar5 = lVar5 + -0x58;
      cVar2 = FUN_140ba41f1(*(longlong *)(param_1 + 0x38) + lVar5,param_2);
      if (cVar2 != '\0') {
        iVar3 = iVar3 + 1;
        FUN_148a4b244(param_1,(int)uVar4 + -1);
      }
      bVar1 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar1);
  }
  return iVar3;
}



// FUNCTION 148a4b04e FUN_148a4b04e body=425 status=ok
// SIG undefined FUN_148a4b04e(void)

undefined8 FUN_148a4b04e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    FUN_1447210f0();
    (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x2f0))
              (*(longlong **)(param_1 + 0x3b8),&local_20);
    local_48 = 0;
    plVar7 = (longlong *)FUN_1401e3228();
    if (plVar7 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      plStack_30 = (longlong *)0x0;
LAB_148a4b184:
      bVar11 = false;
    }
    else {
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_38);
      if (local_38 == (longlong *)0x0) goto LAB_148a4b184;
      lVar8 = (**(code **)(*local_38 + 0x20))(local_38,local_20);
      if (((lVar8 == 0) || (*(longlong **)(lVar8 + 0x100) == (longlong *)0x0)) ||
         ((int)param_2[1] < 2)) goto LAB_148a4b184;
      plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar8 + 0x100) + 0x38))();
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_48);
      if (local_40 == (int)param_2[1]) {
        bVar11 = true;
        if (1 < local_40) {
          lVar8 = 0;
          while( true ) {
            uVar3 = *(ushort *)(local_48 + lVar8);
            uVar5 = (uint)uVar3;
            uVar4 = *(ushort *)(*param_2 + lVar8);
            uVar10 = (uint)uVar4;
            if (uVar3 != uVar4) {
              if ((uVar4 | uVar3) < 0x80) {
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_148a4b153;
              }
              iVar6 = uVar5 - uVar10;
              goto LAB_148a4b1f0;
            }
            if (uVar3 == 0) break;
LAB_148a4b153:
            lVar8 = lVar8 + 2;
          }
          iVar6 = 0;
LAB_148a4b1f0:
          bVar11 = iVar6 == 0;
        }
      }
      else {
        bVar11 = (int)param_2[1] + local_40 == 1;
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    plVar7 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    uVar9 = 1;
    if (bVar11) goto LAB_148a4b1b6;
  }
  uVar9 = 0;
LAB_148a4b1b6:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4b244 FUN_148a4b244 body=123 status=ok
// SIG undefined FUN_148a4b244(void)

void FUN_148a4b244(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x40))) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    iVar1 = *(int *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
      FUN_148a4ecde((longlong *)(param_1 + 0x48),iVar1);
    }
    FUN_148a4af02((longlong)iVar1 * 0x58 + *(longlong *)(param_1 + 0x48),
                  (ulonglong)param_2 * 0x58 + lVar2);
    FUN_148a4ed6e(param_1 + 0x38,param_2);
    FUN_148a4edd0(param_1 + 0x38);
    return;
  }
  return;
}



// FUNCTION 148a4b2c0 FUN_148a4b2c0 body=92 status=ok
// SIG undefined FUN_148a4b2c0(void)

bool FUN_148a4b2c0(longlong *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  longlong param_5,undefined4 param_6,undefined1 param_7)

{
  if (0 < param_4) {
    param_1[5] = param_5;
    *(undefined4 *)(param_1 + 7) = param_2;
    *(undefined4 *)((longlong)param_1 + 0x3c) = param_3;
    *(int *)((longlong)param_1 + 0x34) = param_4;
    *(undefined4 *)((longlong)param_1 + 0x4c) = param_6;
    FUN_148a4b31c(param_1 + 0x10,param_4);
    *(undefined1 *)(param_1 + 0xf) = param_7;
    (**(code **)(*param_1 + 0x398))(param_1);
  }
  return 0 < param_4;
}



// FUNCTION 148a4b31c FUN_148a4b31c body=57 status=ok
// SIG undefined FUN_148a4b31c(void)

void FUN_148a4b31c(undefined8 *param_1,int param_2)

{
  FUN_145b22242(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_148a4ee76(param_1,param_2);
  return;
}



// FUNCTION 148a4b35a FUN_148a4b35a body=69 status=ok
// SIG undefined FUN_148a4b35a(void)

int FUN_148a4b35a(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int)param_1[7] < 1) {
    iVar3 = 0;
  }
  else {
    iVar4 = 0;
    iVar3 = 0;
    do {
      iVar2 = *(int *)((longlong)param_1 + 0x3c);
      iVar1 = (**(code **)(*param_1 + 0x368))(param_1,iVar4);
      iVar2 = iVar2 - iVar1;
      if (iVar2 <= iVar3) {
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1[7]);
  }
  return iVar3;
}



// FUNCTION 148a4b3a0 FUN_148a4b3a0 body=205 status=ok
// SIG undefined FUN_148a4b3a0(void)

int FUN_148a4b3a0(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar3 = *(int *)(param_1 + 0x88);
  if (iVar3 < 1) {
    iVar5 = 0;
  }
  else {
    lVar9 = 0;
    iVar5 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x80) + lVar9 * 0x58) == param_2) {
        lVar7 = *(longlong *)(param_1 + 0x80) + lVar9 * 0x58;
        iVar4 = *(int *)(lVar7 + 0x40);
        if (0 < iVar4) {
          lVar8 = 8;
          lVar6 = 0;
          do {
            lVar1 = *(longlong *)(lVar7 + 0x38);
            if ((&DAT_149fc1b6e)[*(byte *)(lVar1 + 0x10 + lVar8)] == '\x01') {
              if (*(longlong **)(lVar1 + lVar8) == (longlong *)0x0) {
                bVar2 = 0;
              }
              else {
                bVar2 = (**(code **)(**(longlong **)(lVar1 + lVar8) + 0x28))();
                iVar4 = *(int *)(lVar7 + 0x40);
              }
            }
            else {
              bVar2 = (*(uint *)(lVar1 + lVar8) & 0xffffff) != 0;
            }
            iVar5 = iVar5 + (uint)bVar2;
            lVar6 = lVar6 + 1;
            lVar8 = lVar8 + 0x58;
          } while (lVar6 < iVar4);
          iVar3 = *(int *)(param_1 + 0x88);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar3);
  }
  return iVar5;
}



// FUNCTION 148a4b474 FUN_148a4b474 body=64 status=ok
// SIG undefined FUN_148a4b474(void)

undefined4 FUN_148a4b474(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((int)param_1[7] < 1) {
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x40);
    do {
      iVar2 = (**(code **)(*param_1 + 0x368))(param_1,iVar4);
      iVar2 = iVar2 + iVar1;
      uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),iVar2 <= *(int *)((longlong)param_1 + 0x3c));
      if (iVar2 <= *(int *)((longlong)param_1 + 0x3c)) {
        return uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1[7]);
  }
  return uVar3;
}



// FUNCTION 148a4b504 FUN_148a4b504 body=418 status=ok
// SIG undefined FUN_148a4b504(void)

int FUN_148a4b504(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  
  if ((longlong)*(int *)(param_1 + 0x88) == 0) {
    iVar7 = 0;
  }
  else {
    lVar15 = *(longlong *)(param_1 + 0x80);
    lVar14 = (longlong)*(int *)(param_1 + 0x88) * 0x58 + lVar15;
    iVar1 = (int)param_2[1];
    lVar2 = *param_2;
    iVar7 = 0;
    do {
      if ((longlong)*(int *)(lVar15 + 0x40) != 0) {
        lVar6 = *(longlong *)(lVar15 + 0x38);
        lVar16 = (longlong)*(int *)(lVar15 + 0x40) * 0x58 + lVar6;
        do {
          if (*(int *)(lVar6 + 0x48) == iVar1) {
            if (1 < iVar1) {
              lVar9 = 0;
              while( true ) {
                uVar12 = *(ushort *)(*(longlong *)(lVar6 + 0x40) + lVar9);
                uVar13 = (ulonglong)uVar12;
                uVar10 = *(ushort *)(lVar2 + lVar9);
                if (uVar12 != uVar10) break;
                if (uVar12 == 0) goto LAB_148a4b5e4;
LAB_148a4b589:
                lVar9 = lVar9 + 2;
              }
              if ((uVar10 | uVar12) < 0x80) {
                uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                uVar11 = (ulonglong)uVar10;
                uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar11]) goto LAB_148a4b589;
              }
              if (uVar12 != uVar10) goto LAB_148a4b5bc;
            }
LAB_148a4b5e4:
            iVar7 = iVar7 + 1;
          }
          else {
            if (*(int *)(lVar6 + 0x48) + iVar1 == 1) goto LAB_148a4b5e4;
LAB_148a4b5bc:
            if ((param_3 != '\0') && (lVar9 = FUN_148a4f454(param_1 + 0x68), lVar9 != 0)) {
              if (*(int *)(lVar9 + 0x18) == iVar1) {
                uVar4 = 1;
                if (1 < iVar1) {
                  lVar5 = 0;
                  while( true ) {
                    uVar12 = *(ushort *)(*(longlong *)(lVar9 + 0x10) + lVar5);
                    uVar4 = (uint)uVar12;
                    uVar10 = *(ushort *)(lVar2 + lVar5);
                    uVar8 = (uint)uVar10;
                    if (uVar12 != uVar10) {
                      if ((uVar10 | uVar12) < 0x80) {
                        uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar12];
                        uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar10];
                        if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar10])
                        goto LAB_148a4b609;
                      }
                      iVar3 = uVar4 - uVar8;
                      goto LAB_148a4b685;
                    }
                    if (uVar12 == 0) break;
LAB_148a4b609:
                    lVar5 = lVar5 + 2;
                  }
                  iVar3 = 0;
LAB_148a4b685:
                  uVar4 = (uint)(iVar3 == 0);
                }
              }
              else {
                uVar4 = (uint)(*(int *)(lVar9 + 0x18) + iVar1 == 1);
              }
              iVar7 = iVar7 + uVar4;
            }
          }
          lVar6 = lVar6 + 0x58;
        } while (lVar6 != lVar16);
      }
      lVar15 = lVar15 + 0x58;
    } while (lVar15 != lVar14);
  }
  return iVar7;
}



// FUNCTION 148a4b6a6 FUN_148a4b6a6 body=29 status=ok
// SIG undefined FUN_148a4b6a6(void)

bool FUN_148a4b6a6(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 800))();
  return *(int *)(param_3 + 8) <= iVar1;
}



// FUNCTION 148a4b6c4 FUN_148a4b6c4 body=100 status=ok
// SIG undefined FUN_148a4b6c4(void)

undefined8 FUN_148a4b6c4(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (((-1 < param_3) && (param_3 < (int)param_1[7])) &&
     (iVar1 = (**(code **)(*param_1 + 0x300))(param_1), iVar1 != -1)) {
    if (*(int *)(param_1[0x10] + (longlong)iVar1 * 0x58) != param_3) {
      piVar2 = (int *)(param_1[0x10] + (longlong)iVar1 * 0x58);
      iVar1 = (**(code **)(*param_1 + 0x368))(param_1,param_3);
      iVar1 = iVar1 + piVar2[0x10];
      if (iVar1 <= *(int *)((longlong)param_1 + 0x3c)) {
        *piVar2 = param_3;
        return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
      }
    }
  }
  return 0;
}



// FUNCTION 148a4b728 FUN_148a4b728 body=100 status=ok
// SIG undefined FUN_148a4b728(void)

ulonglong FUN_148a4b728(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0x88)) {
    lVar3 = 8;
    uVar2 = 0;
    do {
      cVar1 = FUN_140ba41f1(*(longlong *)(param_1 + 0x80) + lVar3,param_2);
      if (cVar1 != '\0') {
        return uVar2 & 0xffffffff;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x58;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x88));
  }
  return 0xffffffff;
}



// FUNCTION 148a4b78c FUN_148a4b78c body=137 status=ok
// SIG undefined FUN_148a4b78c(void)

ulonglong FUN_148a4b78c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  iVar2 = *(int *)(param_1 + 0x88);
  if (iVar2 < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0xffffffff;
    uVar6 = 0;
    do {
      lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x40 + uVar6 * 0x58);
      if (lVar3 != 0) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x38 + uVar6 * 0x58);
        lVar3 = lVar3 * 0x58;
        do {
          cVar1 = FUN_140ba41f1(lVar5,param_2);
          if (cVar1 != '\0') {
            uVar4 = uVar6 & 0xffffffff;
            break;
          }
          lVar5 = lVar5 + 0x58;
          lVar3 = lVar3 + -0x58;
        } while (lVar3 != 0);
        iVar2 = *(int *)(param_1 + 0x88);
      }
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)iVar2);
  }
  return uVar4;
}



// FUNCTION 148a4b816 FUN_148a4b816 body=151 status=ok
// SIG undefined FUN_148a4b816(void)

ulonglong FUN_148a4b816(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 0x88);
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x40 + lVar6 * 0x58);
      if (lVar3 != 0) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x38 + lVar6 * 0x58);
        lVar3 = lVar3 * 0x58;
        do {
          cVar1 = FUN_140ba41f1(lVar5,param_2);
          if (cVar1 != '\0') {
            uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
            if (1 < *(int *)(param_3 + 8)) {
              FUN_144a787a6(lVar5 + 0x40,param_3);
            }
            goto LAB_148a4b883;
          }
          lVar5 = lVar5 + 0x58;
          lVar3 = lVar3 + -0x58;
        } while (lVar3 != 0);
        iVar2 = *(int *)(param_1 + 0x88);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar2);
  }
  uVar4 = 0;
LAB_148a4b883:
  return uVar4 & 0xffffffff;
}



// FUNCTION 148a4b8ae FUN_148a4b8ae body=161 status=ok
// SIG undefined FUN_148a4b8ae(void)

undefined8 FUN_148a4b8ae(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(param_1 + 0x88);
  if (iVar3 < 1) {
    uVar5 = 0;
  }
  else {
    lVar8 = 0;
    uVar5 = 0;
    do {
      if (0 < *(int *)(*(longlong *)(param_1 + 0x80) + 0x40 + lVar8 * 0x58)) {
        lVar1 = *(longlong *)(param_1 + 0x80) + lVar8 * 0x58;
        lVar6 = 0;
        lVar7 = 0;
        do {
          puVar4 = (undefined8 *)FUN_14127b0d4(*(longlong *)(lVar1 + 0x38) + lVar6);
          cVar2 = (**(code **)*puVar4)(puVar4,param_2);
          if (cVar2 != '\0') {
            uVar5 = 1;
            break;
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x58;
        } while (lVar7 < *(int *)(lVar1 + 0x40));
        iVar3 = *(int *)(param_1 + 0x88);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar3);
  }
  return uVar5;
}



// FUNCTION 148a4b950 FUN_148a4b950 body=195 status=ok
// SIG undefined FUN_148a4b950(void)

undefined8 FUN_148a4b950(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  *param_3 = 0;
  param_3[1] = 0;
  iVar3 = *(int *)(param_1 + 0x88);
  if (0 < iVar3) {
    lVar8 = 0;
    do {
      if (0 < *(int *)(*(longlong *)(param_1 + 0x80) + 0x40 + lVar8 * 0x58)) {
        lVar1 = *(longlong *)(param_1 + 0x80) + lVar8 * 0x58;
        plVar5 = (longlong *)(lVar1 + 0x38);
        lVar7 = 0x30;
        lVar6 = 0;
        do {
          puVar4 = (undefined8 *)FUN_14127b0d4(*plVar5 + lVar7 + -0x30);
          cVar2 = (**(code **)*puVar4)(puVar4,param_2);
          if (cVar2 != '\0') {
            FUN_144a787a6(param_3,lVar7 + *plVar5);
            return 1;
          }
          lVar6 = lVar6 + 1;
          lVar7 = lVar7 + 0x58;
        } while (lVar6 < *(int *)(lVar1 + 0x40));
        iVar3 = *(int *)(param_1 + 0x88);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar3);
  }
  return 0;
}



// FUNCTION 148a4ba14 FUN_148a4ba14 body=560 status=ok
// SIG undefined FUN_148a4ba14(void)

void FUN_148a4ba14(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  void *_Src;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_59;
  void *local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_59 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  local_60 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  _Src = local_58;
  uVar2 = local_59;
  uVar1 = local_60;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = (void *)0x0;
  lVar4 = (longlong)(int)uStack_50;
  local_68 = (int)uStack_50;
  if (lVar4 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,uStack_50 & 0xffffffff,0);
    memcpy(local_70,_Src,lVar4 * 2);
  }
  local_78 = uVar1;
  uVar3 = FUN_148a4bc46(local_40,local_48,&local_70,uVar2);
  *param_3 = uVar3;
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4bc46 FUN_148a4bc46 body=123 status=ok
// SIG undefined FUN_148a4bc46(void)

longlong FUN_148a4bc46(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                      undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_148a4bcc4(DAT_14c951640);
  FUN_14485c47a(lVar2 + 0x50,param_2);
  *(undefined8 *)(lVar2 + 0x58) = param_1;
  iVar1 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(lVar2 + 0x60,*param_3,iVar1);
  *(undefined4 *)(lVar2 + 0x70) = param_4;
  *(undefined4 *)(lVar2 + 0x74) = param_5;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return lVar2;
}



// FUNCTION 148a4bcc4 FUN_148a4bcc4 body=148 status=ok
// SIG undefined FUN_148a4bcc4(void)

undefined8 FUN_148a4bcc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14599811c();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4bd5a FUN_148a4bd5a body=782 status=ok
// SIG undefined FUN_148a4bd5a(void)

void FUN_148a4bd5a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Src;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 *local_90;
  int local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_148a2deec(&local_50,L"QuitMatch",*(undefined8 *)(param_1 + 0x58),0);
  uVar4 = FUN_14479d2ce(param_1 + 0x50);
  FUN_148a2dfa6(&local_50,uVar4);
  if (local_40 != (longlong *)0x0 && local_50 != 0) {
    (**(code **)(*local_40 + 0x100))(local_40,&local_60);
    if (local_60 == (longlong *)0x0) {
      FUN_1415b7ec4(L"Turn Based Matches not supported by Online Subsystem",3,0);
    }
    else {
      local_80 = (void *)0x0;
      local_78 = *(int *)(param_1 + 0x68);
      lVar6 = (longlong)local_78;
      _Src = *(void **)(param_1 + 0x60);
      if (lVar6 == 0) {
        local_74 = 0;
      }
      else {
        FUN_1446dd670(&local_80,local_78,0);
        memcpy(local_80,_Src,lVar6 * 2);
      }
      (**(code **)(*local_60 + 0x38))(local_60,&local_70,&local_80);
      plVar3 = local_70;
      if (local_70 == (longlong *)0x0) {
        puVar8 = &DAT_149dfb77a;
        if (*(int *)(param_1 + 0x68) != 0) {
          puVar8 = *(undefined2 **)(param_1 + 0x60);
        }
        FUN_140002266(&local_90,L"Match ID %s not found",puVar8);
        puVar7 = (undefined8 *)&DAT_149dfb77a;
        if (local_88 != 0) {
          puVar7 = local_90;
        }
        FUN_1415b7ec4(puVar7,3,0);
        if (local_90 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        local_90 = (undefined8 *)0x0;
        local_88 = 0;
        FUN_1446efa72(&local_90,0,3,0x10);
        puVar7 = local_90;
        local_88 = 3;
        *local_90 = &PTR_LAB_14b4c3ca0;
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar5 == 0) {
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_90[2] = lVar5;
        *local_90 = &PTR_FUN_14b4cdde0;
        local_90[3] = 0;
        FUN_14485c47a(local_90 + 3,param_1);
        puVar7[4] = FUN_148a4c06a;
        local_a0 = 0;
        local_98 = 0;
        FUN_148a41d1a(&local_a0,&local_90);
        (**(code **)(*local_70 + 0x60))
                  (local_70,*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
                   &local_a0);
        FUN_1449db362(&local_90);
      }
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
      if (plVar3 != (longlong *)0x0) {
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_58 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        goto LAB_148a4bf30;
      }
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_58 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  FUN_147be6894(param_1 + 0x40);
LAB_148a4bf30:
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4c06a FUN_148a4c06a body=56 status=ok
// SIG undefined FUN_148a4c06a(void)

void FUN_148a4c06a(longlong param_1,longlong *param_2,byte param_3)

{
  FUN_147be6894(param_1 + (ulonglong)(param_3 ^ 1) * 0x10 + 0x30);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a4c0a2 FUN_148a4c0a2 body=264 status=ok
// SIG undefined FUN_148a4c0a2(void)

void FUN_148a4c0a2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar2 = local_30;
  uVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_148a4c1ae(DAT_14c951640);
  FUN_14485c47a(lVar3 + 0x50,uVar1);
  *(undefined8 *)(lVar3 + 0x58) = uVar2;
  *param_3 = lVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4c1ae FUN_148a4c1ae body=148 status=ok
// SIG undefined FUN_148a4c1ae(void)

undefined8 FUN_148a4c1ae(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145998208();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4c244 FUN_148a4c244 body=636 status=ok
// SIG undefined FUN_148a4c244(void)

void FUN_148a4c244(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_a8 [32];
  longlong **local_88;
  longlong *local_80;
  undefined4 local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar6 = (longlong *)FUN_14479d2ce(param_1 + 0x50);
  if (plVar6 == (longlong *)0x0) {
    FUN_1415b7ec4(L"A player controller must be provided in order to show the external login UI.",3,
                  0);
    local_60 = 0;
    FUN_1447cd2ec(param_1 + 0x40);
    goto LAB_148a4c378;
  }
  FUN_148a2deec(&local_60,L"ShowLoginUI",*(undefined8 *)(param_1 + 0x58),0);
  if (local_50 == (longlong *)0x0) {
    local_70 = plVar6;
    FUN_1447cd2ec(param_1 + 0x40);
  }
  else {
    (**(code **)(*local_50 + 0x70))(local_50,&local_70);
    if (local_70 == (longlong *)0x0) {
      pwVar8 = L"External UI not supported by the current online subsystem";
LAB_148a4c304:
      uVar10 = 3;
LAB_148a4c306:
      FUN_1415b7ec4(pwVar8,uVar10,0);
      local_80 = plVar6;
      FUN_1447cd2ec(param_1 + 0x40);
    }
    else {
      if (plVar6[0x86] == 0) {
LAB_148a4c2fd:
        pwVar8 = L"Can only show login UI for local players";
        goto LAB_148a4c304;
      }
      lVar7 = FUN_1449db7f2();
      plVar4 = local_70;
      lVar2 = plVar6[0x86];
      if ((((lVar2 == 0) || (lVar7 == 0)) || (lVar9 = *(longlong *)(lVar2 + 0x10), lVar9 == 0)) ||
         ((*(int *)(lVar9 + 0x38) < *(int *)(lVar7 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
           lVar7 + 0x30)))) goto LAB_148a4c2fd;
      local_80 = (longlong *)0x0;
      local_78 = 0;
      FUN_1446efa72(&local_80,0,3,0x10);
      plVar3 = local_80;
      local_78 = 3;
      *local_80 = (longlong)&PTR_LAB_14b4cdec0;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      local_80[2] = lVar9;
      *local_80 = (longlong)&PTR_FUN_14b4cde50;
      local_80[3] = 0;
      FUN_14485c47a(local_80 + 3,param_1);
      plVar3[4] = (longlong)FUN_148a4c4c2;
      local_88 = &local_80;
      cVar5 = (**(code **)(*plVar4 + 8))(plVar4,*(undefined4 *)(lVar2 + 0xe0),0,0);
      FUN_1449db362(&local_80);
      if (cVar5 == '\0') {
        pwVar8 = L"The online subsystem couldn\'t show its login UI";
        uVar10 = 5;
        goto LAB_148a4c306;
      }
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_68 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_58 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_148a4c378:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4c4c2 FUN_148a4c4c2 body=464 status=ok
// SIG undefined FUN_148a4c4c2(void)

void FUN_148a4c4c2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined *puVar3;
  char cVar4;
  undefined **ppuVar5;
  longlong *plVar6;
  undefined1 auStack_98 [40];
  undefined **local_70;
  longlong local_68;
  longlong local_60;
  byte local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  ppuVar5 = (undefined **)FUN_14479d2ce(param_1 + 0x50);
  if (ppuVar5 != (undefined **)0x0) {
    plVar6 = (longlong *)FUN_144a7ba4c(ppuVar5);
    if (plVar6 != (longlong *)0x0) {
      local_68 = *param_2;
      local_60 = param_2[1];
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      local_58 = 0;
      local_70 = &PTR_FUN_14a5af930;
      local_50 = 0;
      uStack_48 = 0;
      (**(code **)(*plVar6 + 0x348))(plVar6,&local_70);
      local_70 = &PTR_FUN_14a5af930;
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      local_70 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_58])(&local_68);
    }
    puVar3 = ppuVar5[0x73];
    if (puVar3 != (undefined *)0x0) {
      local_68 = *param_2;
      local_60 = param_2[1];
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      local_58 = 0;
      local_70 = &PTR_FUN_14a5af930;
      local_50 = 0;
      uStack_48 = 0;
      FUN_147ca970c(puVar3,&local_70);
      local_70 = &PTR_FUN_14a5af930;
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      local_70 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_58])(&local_68);
    }
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x28))();
    if (cVar4 != '\0') {
      param_1 = param_1 + 0x30;
      goto LAB_148a4c636;
    }
  }
  param_1 = param_1 + 0x40;
LAB_148a4c636:
  local_70 = ppuVar5;
  FUN_1447cd2ec(param_1);
  plVar6 = (longlong *)param_2[1];
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
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4c694 FUN_148a4c694 body=91 status=ok
// SIG undefined FUN_148a4c694(void)

void FUN_148a4c694(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb95f20);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4c6f0 FUN_148a4c6f0 body=156 status=ok
// SIG undefined FUN_148a4c6f0(void)

void FUN_148a4c6f0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x6a8))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4c78e FUN_148a4c78e body=91 status=ok
// SIG undefined FUN_148a4c78e(void)

void FUN_148a4c78e(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb95f30);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4c7ea FUN_148a4c7ea body=156 status=ok
// SIG undefined FUN_148a4c7ea(void)

void FUN_148a4c7ea(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x6b0))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4c888 FUN_148a4c888 body=47 status=ok
// SIG undefined FUN_148a4c888(void)

void FUN_148a4c888(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb95f40);
                    /* WARNING: Could not recover jumptable at 0x000148a4c8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148a4c8d2 FUN_148a4c8d2 body=91 status=ok
// SIG undefined FUN_148a4c8d2(void)

void FUN_148a4c8d2(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb95f50);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4c92e FUN_148a4c92e body=158 status=ok
// SIG undefined FUN_148a4c92e(void)

void FUN_148a4c92e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x6a0))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4c9ce FUN_148a4c9ce body=183 status=ok
// SIG undefined FUN_148a4c9ce(void)

void FUN_148a4c9ce(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_58 = &PTR_FUN_14a5af930;
  local_38 = 0;
  uStack_30 = 0;
  FUN_141238a10(&local_58);
  uVar1 = FUN_14477b072(param_1,DAT_14cb95f60);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_58);
  local_58 = &PTR_FUN_14a5af930;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_58 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])(&local_50);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4ca86 FUN_148a4ca86 body=278 status=ok
// SIG undefined FUN_148a4ca86(void)

void FUN_148a4ca86(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_78 [40];
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  byte local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_50 = &PTR_FUN_14a5af930;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x678))(param_1,&local_50);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerCancelReservationRequest_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x680))(param_1,&local_50);
  }
  local_50 = &PTR_FUN_14a5af930;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_38])(&local_48);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4cb9e FUN_148a4cb9e body=227 status=ok
// SIG undefined FUN_148a4cb9e(void)

void FUN_148a4cb9e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_b8 = &PTR_FUN_14a5af930;
  local_98 = 0;
  uStack_90 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = &PTR_FUN_14a5af930;
  local_34 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a787a6(local_c8);
  FUN_148a4cc82(&local_b8,param_3);
  uVar1 = FUN_14477b072(param_1,DAT_14cb95f70);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_c8);
  FUN_145c7f12e(&local_b8);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4cc82 FUN_148a4cc82 body=80 status=ok
// SIG undefined FUN_148a4cc82(void)

longlong FUN_148a4cc82(longlong param_1,longlong param_2)

{
  FUN_141238a10();
  FUN_141238a10(param_1 + 0x30,param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  FUN_144a787a6(param_1 + 0x70,param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  return param_1;
}



// FUNCTION 148a4ccd2 FUN_148a4ccd2 body=393 status=ok
// SIG undefined FUN_148a4ccd2(void)

void FUN_148a4ccd2(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_d8 [32];
  longlong local_b8 [3];
  undefined **local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8[0] = 0;
  local_b8[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_a0 = &PTR_FUN_14a5af930;
  local_80 = 0;
  uStack_78 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_70 = &PTR_FUN_14a5af930;
  local_1c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x688))(param_1,local_b8,&local_a0);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerReservationRequest_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x690))(param_1,local_b8,&local_a0);
  }
  FUN_145c7f12e(&local_a0);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4ce82 FUN_148a4ce82 body=411 status=ok
// SIG undefined FUN_148a4ce82(void)

ulonglong FUN_148a4ce82(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  longlong local_68 [2];
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong *)(param_2 + 8) != 0) && (*(longlong **)(param_2 + 0x100) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_2 + 0x100) + 0x20))();
    if (cVar3 != '\0') {
      FUN_1447210f0(param_1);
      local_58 = (longlong *)0x0;
      plVar6 = (longlong *)FUN_1401e3228();
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
        plVar6 = local_58;
        if (local_58 == (longlong *)0x0) {
          bVar4 = 1;
        }
        else {
          local_68[0] = 0;
          local_68[1] = 0;
          FUN_1401a700c(&local_78,0x122);
          bVar4 = (**(code **)(*plVar6 + 0x370))(plVar6,param_2,local_78,local_68);
          if (bVar4 != 0) {
            plVar6 = (longlong *)(**(code **)(**(longlong **)(param_2 + 0x100) + 0x38))();
            (**(code **)(*plVar6 + 0x30))(plVar6,&local_78);
            local_88 = param_4;
            uVar5 = (**(code **)(*param_1 + 0x6c0))(param_1,local_68,&local_78,param_3);
            plVar6 = (longlong *)(ulonglong)uVar5;
            if (CONCAT44(uStack_74,local_78) != 0) {
              FUN_1400020a8();
            }
          }
          if (local_68[0] != 0) {
            FUN_1400020a8();
          }
          bVar4 = bVar4 ^ 1;
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)local_50 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
        if (bVar4 == 0) goto LAB_148a4cfea;
      }
    }
  }
  (**(code **)(*param_1 + 0x650))(param_1);
  plVar6 = (longlong *)0x0;
LAB_148a4cfea:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return (ulonglong)plVar6 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4d01e FUN_148a4d01e body=35 status=ok
// SIG undefined FUN_148a4d01e(void)

void FUN_148a4d01e(longlong param_1)

{
  FUN_141653816(param_1,1);
  *(undefined1 *)(param_1 + 0x4e8) = 0;
  FUN_143ed4d28(param_1);
  return;
}



// FUNCTION 148a4d07a FUN_148a4d07a body=129 status=ok
// SIG undefined FUN_148a4d07a(void)

void FUN_148a4d07a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_148a39a16();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_145b837d8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      FUN_148a4cc82(param_1 + 0x460,param_3);
      *(undefined1 *)(param_1 + 0x4e8) = 1;
                    /* WARNING: Could not recover jumptable at 0x000148a4d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x6b0))(plVar1,param_1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 148a4d100 FUN_148a4d100 body=102 status=ok
// SIG undefined FUN_148a4d100(void)

void FUN_148a4d100(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_148a39a16();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_145b837d8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      *(undefined1 *)(param_1 + 0x4ea) = 1;
                    /* WARNING: Could not recover jumptable at 0x000148a4d163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x6b8))(plVar1,param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148a4d17a FUN_148a4d17a body=175 status=ok
// SIG undefined FUN_148a4d17a(void)

undefined8 FUN_148a4d17a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4d22a FUN_148a4d22a body=361 status=ok
// SIG undefined FUN_148a4d22a(void)

void FUN_148a4d22a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = FUN_1447210f0();
  if (*(longlong *)(lVar2 + 0x1f0) == 0) {
    puVar3 = (undefined8 *)(lVar2 + 0x458);
  }
  else {
    puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
  }
  uVar1 = *puVar3;
  local_98 = 0;
  local_90 = 0;
  FUN_14009d848(&local_98,param_2);
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,3,0x10);
  local_80 = 3;
  *local_88 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_88[2] = lVar4;
  *local_88 = &PTR_FUN_14b4cdfa0;
  local_88[3] = local_98;
  local_98 = 0;
  *(undefined4 *)(local_88 + 4) = local_90;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_14487d8d8(&local_78,&local_88);
  local_38 = 1;
  FUN_14016fdb0(uVar1,local_a0,&local_78);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
  FUN_1449db362(&local_88);
  FUN_1449db362(&local_98);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4d394 FUN_148a4d394 body=150 status=ok
// SIG undefined FUN_148a4d394(void)

bool FUN_148a4d394(longlong param_1,byte param_2)

{
  bool bVar1;
  char cVar2;
  
  if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x18)] == '\x01') {
    if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
      return false;
    }
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    if (cVar2 == '\0') {
      return false;
    }
  }
  else if ((*(uint *)(param_1 + 8) & 0xffffff) == 0) {
    return false;
  }
  if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x48)] == '\x01') {
    if ((*(longlong **)(param_1 + 0x38) != (longlong *)0x0) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))(), cVar2 != '\0')) {
LAB_148a4d3ff:
      bVar1 = 1 < *(int *)(param_1 + 0x78);
      if ((param_2 & bVar1) != 1) {
        return bVar1;
      }
      cVar2 = FUN_140ba41f1(param_1,param_1 + 0x30);
      if (cVar2 != '\0') {
        return 1 < *(int *)(param_1 + 0x68);
      }
      return true;
    }
  }
  else if ((*(uint *)(param_1 + 0x38) & 0xffffff) != 0) goto LAB_148a4d3ff;
  return false;
}



// FUNCTION 148a4d42a FUN_148a4d42a body=425 status=ok
// SIG undefined FUN_148a4d42a(void)

undefined8 FUN_148a4d42a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    FUN_1447210f0();
    (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x2c0))
              (*(longlong **)(param_1 + 0x3b8),&local_20);
    local_48 = 0;
    plVar7 = (longlong *)FUN_1401e3228();
    if (plVar7 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      plStack_30 = (longlong *)0x0;
LAB_148a4d560:
      bVar11 = false;
    }
    else {
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_38);
      if (local_38 == (longlong *)0x0) goto LAB_148a4d560;
      lVar8 = (**(code **)(*local_38 + 0x20))(local_38,local_20);
      if (((lVar8 == 0) || (*(longlong **)(lVar8 + 0x100) == (longlong *)0x0)) ||
         ((int)param_2[1] < 2)) goto LAB_148a4d560;
      plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar8 + 0x100) + 0x38))();
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_48);
      if (local_40 == (int)param_2[1]) {
        bVar11 = true;
        if (1 < local_40) {
          lVar8 = 0;
          while( true ) {
            uVar3 = *(ushort *)(local_48 + lVar8);
            uVar5 = (uint)uVar3;
            uVar4 = *(ushort *)(*param_2 + lVar8);
            uVar10 = (uint)uVar4;
            if (uVar3 != uVar4) {
              if ((uVar4 | uVar3) < 0x80) {
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_148a4d52f;
              }
              iVar6 = uVar5 - uVar10;
              goto LAB_148a4d5cc;
            }
            if (uVar3 == 0) break;
LAB_148a4d52f:
            lVar8 = lVar8 + 2;
          }
          iVar6 = 0;
LAB_148a4d5cc:
          bVar11 = iVar6 == 0;
        }
      }
      else {
        bVar11 = (int)param_2[1] + local_40 == 1;
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    plVar7 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    uVar9 = 1;
    if (bVar11) goto LAB_148a4d592;
  }
  uVar9 = 0;
LAB_148a4d592:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4d5de FUN_148a4d5de body=42 status=ok
// SIG undefined FUN_148a4d5de(void)

bool FUN_148a4d5de(longlong param_1,int param_2,undefined8 param_3)

{
  if (0 < param_2) {
    *(undefined8 *)(param_1 + 0x28) = param_3;
    *(int *)(param_1 + 0x34) = param_2;
    FUN_148a4d608(param_1 + 0x40,param_2);
  }
  return 0 < param_2;
}



// FUNCTION 148a4d608 FUN_148a4d608 body=57 status=ok
// SIG undefined FUN_148a4d608(void)

void FUN_148a4d608(undefined8 *param_1,int param_2)

{
  FUN_145bfab53(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_148a50166(param_1,param_2);
  return;
}



// FUNCTION 148a4d686 FUN_148a4d686 body=180 status=ok
// SIG undefined FUN_148a4d686(void)

int FUN_148a4d686(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  
  if ((longlong)*(int *)(param_1 + 0x48) == 0) {
    iVar4 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x40);
    lVar8 = (longlong)*(int *)(param_1 + 0x48) * 0x88 + lVar5;
    iVar3 = (int)param_2[1];
    iVar4 = 0;
    do {
      if (*(int *)(lVar5 + 0x78) == iVar3) {
        bVar11 = true;
        if (1 < iVar3) {
          lVar7 = 0;
          while( true ) {
            uVar1 = *(ushort *)(*(longlong *)(lVar5 + 0x70) + lVar7);
            uVar9 = (uint)uVar1;
            uVar2 = *(ushort *)(*param_2 + lVar7);
            uVar6 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148a4d6e5;
              }
              iVar10 = uVar9 - uVar6;
              goto LAB_148a4d72e;
            }
            if (uVar1 == 0) break;
LAB_148a4d6e5:
            lVar7 = lVar7 + 2;
          }
          iVar10 = 0;
LAB_148a4d72e:
          bVar11 = iVar10 == 0;
        }
      }
      else {
        bVar11 = *(int *)(lVar5 + 0x78) + iVar3 == 1;
      }
      iVar4 = iVar4 + (uint)bVar11;
      lVar5 = lVar5 + 0x88;
    } while (lVar5 != lVar8);
  }
  return iVar4;
}



// FUNCTION 148a4d73e FUN_148a4d73e body=91 status=ok
// SIG undefined FUN_148a4d73e(void)

ulonglong FUN_148a4d73e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      cVar1 = FUN_140ba41f1(*(longlong *)(param_1 + 0x40) + lVar2,param_2);
      if (cVar1 != '\0') {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x88;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x48));
  }
  return 0xffffffff;
}



// FUNCTION 148a4d79a FUN_148a4d79a body=123 status=ok
// SIG undefined FUN_148a4d79a(void)

ulonglong FUN_148a4d79a(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar5 = 0x70;
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x40);
      cVar2 = FUN_140ba41f1(lVar1 + lVar5 + -0x40,param_2);
      if (cVar2 != '\0') {
        uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
        if (1 < *(int *)(param_3 + 8)) {
          FUN_144a787a6(lVar1 + lVar5,param_3);
        }
        goto LAB_148a4d7ec;
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x88;
    } while (lVar4 < *(int *)(param_1 + 0x48));
  }
  uVar3 = 0;
LAB_148a4d7ec:
  return uVar3 & 0xffffffff;
}



// FUNCTION 148a4d816 FUN_148a4d816 body=90 status=ok
// SIG undefined FUN_148a4d816(void)

undefined8 FUN_148a4d816(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x48) < 1) {
    uVar2 = 0;
  }
  else {
    lVar3 = 0x30;
    lVar4 = 0;
    do {
      puVar1 = (undefined8 *)FUN_14127b0d4(*(longlong *)(param_1 + 0x40) + lVar3);
      uVar2 = (**(code **)*puVar1)(puVar1,param_2);
      if ((char)uVar2 != '\0') {
        return uVar2;
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x88;
    } while (lVar4 < *(int *)(param_1 + 0x48));
  }
  return uVar2;
}



// FUNCTION 148a4d870 FUN_148a4d870 body=142 status=ok
// SIG undefined FUN_148a4d870(void)

undefined8 FUN_148a4d870(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  *param_3 = 0;
  param_3[1] = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar5 = 0x60;
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x40);
      puVar3 = (undefined8 *)FUN_14127b0d4(lVar1 + lVar5 + -0x30);
      cVar2 = (**(code **)*puVar3)(puVar3,param_2);
      if (cVar2 != '\0') {
        FUN_144a787a6(param_3,lVar1 + lVar5);
        return 1;
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x88;
    } while (lVar4 < *(int *)(param_1 + 0x48));
  }
  return 0;
}



// FUNCTION 148a4d8fe FUN_148a4d8fe body=47 status=ok
// SIG undefined FUN_148a4d8fe(void)

void FUN_148a4d8fe(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb95ff8);
                    /* WARNING: Could not recover jumptable at 0x000148a4d92a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148a4d948 FUN_148a4d948 body=47 status=ok
// SIG undefined FUN_148a4d948(void)

void FUN_148a4d948(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb96008);
                    /* WARNING: Could not recover jumptable at 0x000148a4d974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148a4d978 FUN_148a4d978 body=72 status=ok
// SIG undefined FUN_148a4d978(void)

void FUN_148a4d978(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x678))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148a4d9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x680))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerPong_Validate");
  return;
}



// FUNCTION 148a4da54 FUN_148a4da54 body=49 status=ok
// SIG undefined FUN_148a4da54(void)

longlong * FUN_148a4da54(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1459d7fda();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 148a4db02 FUN_148a4db02 body=49 status=ok
// SIG undefined FUN_148a4db02(void)

longlong * FUN_148a4db02(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1459d80be();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 148a4db74 FUN_148a4db74 body=45 status=ok
// SIG undefined FUN_148a4db74(void)

longlong FUN_148a4db74(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a25e5e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a4dba6 FUN_148a4dba6 body=45 status=ok
// SIG undefined FUN_148a4dba6(void)

longlong FUN_148a4dba6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145918d2a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a4dbd4 FUN_148a4dbd4 body=31 status=ok
// SIG undefined FUN_148a4dbd4(void)

undefined8 FUN_148a4dbd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a4dc0c FUN_148a4dc0c body=93 status=ok
// SIG undefined FUN_148a4dc0c(void)

void FUN_148a4dc0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4cce80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4cce10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a4dc6a FUN_148a4dc6a body=93 status=ok
// SIG undefined FUN_148a4dc6a(void)

void FUN_148a4dc6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4cce80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4cce10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a4dcc8 FUN_148a4dcc8 body=126 status=ok
// SIG undefined FUN_148a4dcc8(void)

void FUN_148a4dcc8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4cce80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4cce10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a4dd37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a4dd56 FUN_148a4dd56 body=114 status=ok
// SIG undefined FUN_148a4dd56(void)

void FUN_148a4dd56(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 148a4de3a FUN_148a4de3a body=94 status=ok
// SIG undefined FUN_148a4de3a(void)

undefined8 FUN_148a4de3a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      FUN_141238a10(param_2 + -0x30,param_3 + -0x30);
      FUN_148a4a240(param_2,param_3);
      FUN_148a4a240(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a4dec0 FUN_148a4dec0 body=59 status=ok
// SIG undefined FUN_148a4dec0(void)

undefined8 FUN_148a4dec0(longlong *param_1)

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



// FUNCTION 148a4df06 FUN_148a4df06 body=34 status=ok
// SIG undefined FUN_148a4df06(void)

void FUN_148a4df06(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_1458da114(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148a4df90 FUN_148a4df90 body=47 status=ok
// SIG undefined FUN_148a4df90(void)

void FUN_148a4df90(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a4dfd6 FUN_148a4dfd6 body=67 status=ok
// SIG undefined FUN_148a4dfd6(void)

undefined1 FUN_148a4dfd6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148a4e042 FUN_148a4e042 body=59 status=ok
// SIG undefined FUN_148a4e042(void)

undefined8 FUN_148a4e042(longlong *param_1)

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



// FUNCTION 148a4e0e0 FUN_148a4e0e0 body=51 status=ok
// SIG undefined FUN_148a4e0e0(void)

void FUN_148a4e0e0(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 148a4e1b6 FUN_148a4e1b6 body=63 status=ok
// SIG undefined FUN_148a4e1b6(void)

undefined1 FUN_148a4e1b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a4cc82(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148a4e21e FUN_148a4e21e body=59 status=ok
// SIG undefined FUN_148a4e21e(void)

undefined8 FUN_148a4e21e(longlong *param_1)

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



// FUNCTION 148a4e26a FUN_148a4e26a body=40 status=ok
// SIG undefined FUN_148a4e26a(void)

void FUN_148a4e26a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_145c7f12e(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148a4e2e2 FUN_148a4e2e2 body=31 status=ok
// SIG undefined FUN_148a4e2e2(void)

undefined8 FUN_148a4e2e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a4e31e FUN_148a4e31e body=93 status=ok
// SIG undefined FUN_148a4e31e(void)

void FUN_148a4e31e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4cdc30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a4e37c FUN_148a4e37c body=126 status=ok
// SIG undefined FUN_148a4e37c(void)

void FUN_148a4e37c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4cdc30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a4e3eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a4e3fa FUN_148a4e3fa body=21 status=ok
// SIG undefined FUN_148a4e3fa(void)

undefined8 FUN_148a4e3fa(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148a4e420 FUN_148a4e420 body=137 status=ok
// SIG undefined FUN_148a4e420(void)

undefined8 *
FUN_148a4e420(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1414c2d8e(&local_28,param_3,param_4);
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



// FUNCTION 148a4e60e FUN_148a4e60e body=111 status=ok
// SIG undefined FUN_148a4e60e(void)

void FUN_148a4e60e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148a4e67d FUN_148a4e67d body=52 status=ok
// SIG undefined FUN_148a4e67d(void)

void FUN_148a4e67d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148a4af02(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 148a4e6b2 FUN_148a4e6b2 body=29 status=ok
// SIG undefined FUN_148a4e6b2(void)

undefined8 FUN_148a4e6b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a4e6ea FUN_148a4e6ea body=29 status=ok
// SIG undefined FUN_148a4e6ea(void)

bool FUN_148a4e6ea(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a4e708 FUN_148a4e708 body=26 status=ok
// SIG undefined FUN_148a4e708(void)

bool FUN_148a4e708(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a4e722 FUN_148a4e722 body=24 status=ok
// SIG undefined FUN_148a4e722(void)

bool FUN_148a4e722(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a4e73a FUN_148a4e73a body=101 status=ok
// SIG undefined FUN_148a4e73a(void)

void FUN_148a4e73a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4cdd00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a4e7a0 FUN_148a4e7a0 body=101 status=ok
// SIG undefined FUN_148a4e7a0(void)

void FUN_148a4e7a0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4cdd00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a4e806 FUN_148a4e806 body=134 status=ok
// SIG undefined FUN_148a4e806(void)

void FUN_148a4e806(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4cdd00;
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
                    /* WARNING: Could not recover jumptable at 0x000148a4e87d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a4e88c FUN_148a4e88c body=39 status=ok
// SIG undefined FUN_148a4e88c(void)

void FUN_148a4e88c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a4e8af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148a4e8b4 FUN_148a4e8b4 body=134 status=ok
// SIG undefined FUN_148a4e8b4(void)

bool FUN_148a4e8b4(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4e93c FUN_148a4e93c body=136 status=ok
// SIG undefined FUN_148a4e93c(void)

void FUN_148a4e93c(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 148a4e9c4 FUN_148a4e9c4 body=62 status=ok
// SIG undefined FUN_148a4e9c4(void)

void FUN_148a4e9c4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148a4ea02(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148a4ea02 FUN_148a4ea02 body=93 status=ok
// SIG undefined FUN_148a4ea02(void)

ulonglong FUN_148a4ea02(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 148a4ea60 FUN_148a4ea60 body=125 status=ok
// SIG undefined FUN_148a4ea60(void)

void FUN_148a4ea60(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 0x10;
    } while (lVar4 << 4 != uVar3);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148a4ec58(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 0x10) = *param_2;
  *(longlong *)(lVar2 + 8 + lVar4 * 0x10) = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 148a4eade FUN_148a4eade body=113 status=ok
// SIG undefined FUN_148a4eade(void)

void FUN_148a4eade(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + lVar1);
  FUN_145b221f5(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 148a4eb50 FUN_148a4eb50 body=263 status=ok
// SIG undefined FUN_148a4eb50(void)

void FUN_148a4eb50(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar12 = 0;
    bVar7 = *plVar2 == *(longlong *)*param_2;
    iVar4 = 0;
    do {
      lVar10 = (longlong)iVar4;
      iVar8 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar8 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar5 = iVar4;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar6 = iVar8;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar5 = iVar5 + 1;
        plVar9 = plVar9 + 2;
        iVar6 = iVar5;
      } while (bVar7 == (lVar3 == *(longlong *)*param_2));
      iVar8 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar12 != iVar4) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar12 = iVar12 + iVar8;
      }
      else {
        FUN_145b221f5(plVar2 + lVar10 * 2,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 148a4ec58 FUN_148a4ec58 body=132 status=ok
// SIG undefined FUN_148a4ec58(void)

void FUN_148a4ec58(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a4ecde FUN_148a4ecde body=143 status=ok
// SIG undefined FUN_148a4ecde(void)

void FUN_148a4ecde(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a4ed6e FUN_148a4ed6e body=98 status=ok
// SIG undefined FUN_148a4ed6e(void)

void FUN_148a4ed6e(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((ulonglong)param_2 * 0x58 + lVar1);
  FUN_145c7f17e(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x58),(longlong)iVar3 * 0x58);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 148a4edd0 FUN_148a4edd0 body=62 status=ok
// SIG undefined FUN_148a4edd0(void)

void FUN_148a4edd0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148a4ee0e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x58,8);
  }
  return;
}



// FUNCTION 148a4ee0e FUN_148a4ee0e body=104 status=ok
// SIG undefined FUN_148a4ee0e(void)

ulonglong FUN_148a4ee0e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x58) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148a4ee44;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x58,8);
      param_2 = param_2 / 0x58;
    }
  }
LAB_148a4ee44:
  return param_2 & 0xffffffff;
}



// FUNCTION 148a4ee76 FUN_148a4ee76 body=99 status=ok
// SIG undefined FUN_148a4ee76(void)

undefined8 FUN_148a4ee76(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x58,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2e8ba2e8ba2e8ba3),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x58)) {
    uVar4 = uVar2 / 0x58 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x58,8);
  }
  return uVar3;
}



// FUNCTION 148a4eeda FUN_148a4eeda body=132 status=ok
// SIG undefined FUN_148a4eeda(void)

void FUN_148a4eeda(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a4ef5f FUN_148a4ef5f body=648 status=ok
// SIG undefined FUN_148a4ef5f(void)

void FUN_148a4ef5f(longlong param_1,uint param_2)

{
  int *piVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStack_378 [40];
  longlong *local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  undefined8 *puVar10;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar15 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar15 + fVar15);
    plVar14 = &local_348;
    do {
      puVar11 = (undefined8 *)*plVar14;
      puVar12 = (undefined8 *)plVar14[1];
      iVar8 = (int)plVar14[2];
      iVar6 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar11) >> 3);
      local_350 = plVar14;
      if (iVar8 != 0) {
LAB_148a4f02c:
        plVar14 = local_350;
        if (8 < (int)(iVar6 + 1U)) {
          uVar7 = iVar6 + 1U >> 1;
          uVar2 = puVar11[uVar7];
          puVar11[uVar7] = *puVar11;
          *puVar11 = uVar2;
          puVar9 = puVar11;
          puVar13 = puVar12 + 1;
LAB_148a4f04e:
          while (puVar10 = puVar9 + 1, puVar10 <= puVar12) {
            piVar1 = (int *)((longlong)puVar9 + 0xc);
            if (*(int *)((longlong)puVar11 + 4) != *piVar1) goto LAB_148a4f069;
            uVar7 = rand();
            puVar9 = puVar10;
            if ((uVar7 & 1) != 0) break;
          }
          goto LAB_148a4f06b;
        }
        for (; puVar9 = puVar11, puVar13 = puVar11, puVar11 < puVar12; puVar12 = puVar12 + -1) {
          while (puVar10 = puVar9, puVar9 = puVar13 + 1, puVar9 <= puVar12) {
            if (*(int *)((longlong)puVar10 + 4) == *(int *)((longlong)puVar13 + 0xc)) {
              iVar8 = rand();
              bVar3 = (bool)((byte)iVar8 & 1);
            }
            else {
              bVar3 = *(int *)((longlong)puVar10 + 4) < *(int *)((longlong)puVar13 + 0xc);
            }
            puVar13 = puVar9;
            if (bVar3 == false) {
              puVar9 = puVar10;
            }
          }
          uVar2 = *puVar10;
          *puVar10 = *puVar12;
          *puVar12 = uVar2;
        }
        goto LAB_148a4f16a;
      }
LAB_148a4f15d:
      FUN_148a4f1e8(puVar11);
      plVar14 = local_350;
LAB_148a4f16a:
      plVar14 = plVar14 + -3;
    } while (&local_348 <= plVar14);
  }
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148a4f069:
  puVar9 = puVar10;
  if (*piVar1 <= *(int *)((longlong)puVar11 + 4)) goto LAB_148a4f04e;
LAB_148a4f06b:
  puVar5 = puVar13 + -1;
  puVar9 = puVar13;
  if (puVar11 < puVar5) {
    do {
      puVar13 = puVar9;
      puVar4 = puVar5;
      if (*(int *)((longlong)puVar13 - 4) == *(int *)((longlong)puVar11 + 4)) {
        uVar7 = rand();
        puVar5 = puVar4;
        if ((uVar7 & 1) != 0) goto LAB_148a4f0aa;
      }
      else if (*(int *)((longlong)puVar13 - 4) < *(int *)((longlong)puVar11 + 4)) {
        puVar5 = puVar13 + -1;
        goto LAB_148a4f0aa;
      }
      puVar5 = puVar4 + -1;
      puVar9 = puVar13 + -1;
    } while (puVar11 < puVar13 + -2);
    puVar5 = puVar13 + -2;
    puVar13 = puVar4;
  }
LAB_148a4f0aa:
  if (puVar10 <= puVar5) {
    uVar2 = *puVar10;
    *puVar10 = *puVar5;
    *puVar5 = uVar2;
    puVar9 = puVar10;
    puVar13 = puVar5;
    goto LAB_148a4f04e;
  }
  uVar2 = *puVar11;
  *puVar11 = *puVar5;
  *puVar5 = uVar2;
  iVar8 = iVar8 + -1;
  puVar13 = puVar13 + -2;
  if ((longlong)puVar13 - (longlong)puVar11 < (longlong)puVar12 - (longlong)puVar10) {
    if (puVar10 < puVar12) {
      *local_350 = (longlong)puVar10;
      local_350[1] = (longlong)puVar12;
      *(int *)(local_350 + 2) = iVar8;
      local_350 = local_350 + 3;
    }
    plVar14 = local_350;
    if (puVar5 <= puVar11 + 1) goto LAB_148a4f16a;
  }
  else {
    if (puVar11 + 1 < puVar5) {
      *local_350 = (longlong)puVar11;
      local_350[1] = (longlong)puVar13;
      *(int *)(local_350 + 2) = iVar8;
      local_350 = local_350 + 3;
    }
    puVar11 = puVar10;
    puVar13 = puVar12;
    plVar14 = local_350;
    if (puVar12 <= puVar10) goto LAB_148a4f16a;
  }
  iVar6 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar11) >> 3);
  puVar12 = puVar13;
  if (iVar8 == 0) goto LAB_148a4f15d;
  goto LAB_148a4f02c;
}



// FUNCTION 148a4f1e8 FUN_148a4f1e8 body=400 status=ok
// SIG undefined FUN_148a4f1e8(void)

void FUN_148a4f1e8(undefined8 *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  if (param_2 != 0) {
    iVar10 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar10;
joined_r0x000148a4f227:
    do {
      iVar6 = iVar10 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar11 = iVar10 * 2 + 2;
        if (iVar11 < (int)param_2) {
          iVar4 = *(int *)((longlong)param_1 + (longlong)iVar6 * 8 + 4);
          iVar1 = *(int *)((longlong)param_1 + (longlong)iVar11 * 8 + 4);
          if (iVar1 == iVar4) {
            iVar4 = rand();
            bVar3 = (bool)((byte)iVar4 & 1);
          }
          else {
            bVar3 = iVar1 < iVar4;
          }
          if (bVar3 == false) {
            iVar6 = iVar11;
          }
        }
        lVar13 = (longlong)iVar10;
        lVar9 = (longlong)iVar6;
        iVar10 = *(int *)((longlong)param_1 + lVar9 * 8 + 4);
        iVar11 = *(int *)((longlong)param_1 + lVar13 * 8 + 4);
        if (iVar11 == iVar10) {
          uVar5 = rand();
          if ((uVar5 & 1) != 0) {
LAB_148a4f278:
            uVar2 = param_1[lVar13];
            param_1[lVar13] = param_1[lVar9];
            param_1[lVar9] = uVar2;
            iVar10 = iVar6;
            goto joined_r0x000148a4f227;
          }
        }
        else if (iVar11 < iVar10) goto LAB_148a4f278;
      }
      bVar3 = iVar12 != 0;
      iVar10 = iVar12 + -1;
      iVar12 = iVar10;
    } while (bVar3);
    if (1 < (int)param_2) {
      uVar7 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar7 - 1];
      param_1[uVar7 - 1] = uVar2;
      if (param_2 != 2) {
        do {
          uVar8 = uVar7 - 1;
          iVar10 = 0;
          iVar6 = 1;
          iVar12 = 0;
          do {
            iVar10 = iVar10 + 2;
            iVar11 = iVar6;
            if ((longlong)iVar10 < (longlong)uVar8) {
              iVar6 = *(int *)((longlong)param_1 + (longlong)iVar6 * 8 + 4);
              iVar4 = *(int *)((longlong)param_1 + (longlong)iVar10 * 8 + 4);
              if (iVar4 == iVar6) {
                iVar6 = rand();
                bVar3 = (bool)((byte)iVar6 & 1);
              }
              else {
                bVar3 = iVar4 < iVar6;
              }
              if (bVar3 == false) {
                iVar11 = iVar10;
              }
            }
            lVar13 = (longlong)iVar12;
            lVar9 = (longlong)iVar11;
            iVar10 = *(int *)((longlong)param_1 + lVar9 * 8 + 4);
            iVar12 = *(int *)((longlong)param_1 + lVar13 * 8 + 4);
            if (iVar12 == iVar10) {
              uVar5 = rand();
              if ((uVar5 & 1) == 0) break;
            }
            else if (iVar10 <= iVar12) break;
            uVar2 = param_1[lVar13];
            param_1[lVar13] = param_1[lVar9];
            param_1[lVar9] = uVar2;
            iVar10 = iVar11 * 2;
            iVar6 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar6 < (longlong)uVar8);
          uVar2 = *param_1;
          *param_1 = param_1[uVar7 - 2];
          param_1[uVar7 - 2] = uVar2;
          uVar7 = uVar8;
        } while (2 < uVar8);
      }
    }
  }
  return;
}



// FUNCTION 148a4f378 FUN_148a4f378 body=86 status=ok
// SIG undefined FUN_148a4f378(void)

void FUN_148a4f378(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 148a4f3ce FUN_148a4f3ce body=132 status=ok
// SIG undefined FUN_148a4f3ce(void)

void FUN_148a4f3ce(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a4f454 FUN_148a4f454 body=141 status=ok
// SIG undefined FUN_148a4f454(void)

longlong * FUN_148a4f454(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if ((longlong)(int)param_1[1] == 0) {
    return (longlong *)0x0;
  }
  plVar2 = (longlong *)*param_1;
  plVar8 = plVar2 + (longlong)(int)param_1[1] * 4;
  iVar1 = (int)param_2[1];
LAB_148a4f475:
  if ((int)plVar2[1] == iVar1) {
    if (iVar1 < 2) {
      return plVar2;
    }
    lVar7 = 0;
    do {
      uVar5 = *(ushort *)(*plVar2 + lVar7);
      uVar6 = (ulonglong)uVar5;
      uVar3 = *(ushort *)(*param_2 + lVar7);
      if (uVar5 == uVar3) {
        if (uVar5 == 0) {
          return plVar2;
        }
      }
      else {
        if (0x7f < (uVar3 | uVar5)) goto LAB_148a4f4d9;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar4 = (ulonglong)uVar3;
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar4]) goto LAB_148a4f4d9;
      }
      lVar7 = lVar7 + 2;
    } while( true );
  }
  if ((int)plVar2[1] + iVar1 == 1) {
    return plVar2;
  }
  goto LAB_148a4f4c9;
LAB_148a4f4d9:
  if (uVar5 == uVar3) {
    return plVar2;
  }
LAB_148a4f4c9:
  plVar2 = plVar2 + 4;
  if (plVar2 == plVar8) {
    return (longlong *)0x0;
  }
  goto LAB_148a4f475;
}



// FUNCTION 148a4f4e2 FUN_148a4f4e2 body=209 status=ok
// SIG undefined FUN_148a4f4e2(void)

undefined4 * FUN_148a4f4e2(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined ***)(param_1 + 2) = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(param_2 + 8);
  *(byte *)(param_1 + 8) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(param_1 + 4,param_2 + 4);
  *(undefined ***)(param_1 + 2) = &PTR_FUN_14a5af930;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar2 = param_2[0x10];
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  param_1[0x10] = iVar2;
  if (iVar2 == 0) {
    param_1[0x11] = 0;
  }
  else {
    FUN_148a4e60e(param_1 + 0xe,iVar2,0);
    FUN_148a4e67d(*(undefined8 *)(param_1 + 0xe),uVar3,iVar2);
  }
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar2 = param_2[0x14];
  uVar3 = *(undefined8 *)(param_2 + 0x12);
  param_1[0x14] = iVar2;
  if (iVar2 == 0) {
    param_1[0x15] = 0;
  }
  else {
    FUN_148a4e60e(param_1 + 0x12,iVar2,0);
    FUN_148a4e67d(*(undefined8 *)(param_1 + 0x12),uVar3,iVar2);
  }
  return param_1;
}



// FUNCTION 148a4f5b4 FUN_148a4f5b4 body=143 status=ok
// SIG undefined FUN_148a4f5b4(void)

void FUN_148a4f5b4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a4f644 FUN_148a4f644 body=103 status=ok
// SIG undefined FUN_148a4f644(void)

void FUN_148a4f644(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x58 + lVar1);
  FUN_1458da114(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x58),(longlong)iVar3 * 0x58);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 148a4f6ac FUN_148a4f6ac body=62 status=ok
// SIG undefined FUN_148a4f6ac(void)

void FUN_148a4f6ac(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148a4f6ea(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x58,8);
  }
  return;
}



// FUNCTION 148a4f6ea FUN_148a4f6ea body=104 status=ok
// SIG undefined FUN_148a4f6ea(void)

ulonglong FUN_148a4f6ea(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x58) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148a4f720;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x58,8);
      param_2 = param_2 / 0x58;
    }
  }
LAB_148a4f720:
  return param_2 & 0xffffffff;
}



// FUNCTION 148a4f752 FUN_148a4f752 body=149 status=ok
// SIG undefined FUN_148a4f752(void)

undefined8 * FUN_148a4f752(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(param_2 + 0x18);
  *(byte *)(param_1 + 3) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(param_1 + 1,param_2 + 8);
  *param_1 = &PTR_FUN_14a5af930;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined8 *)(param_2 + 0x38) = 0;
  param_1[8] = 0;
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined8 *)(param_2 + 0x48) = 0;
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  return param_1;
}



// FUNCTION 148a4f7e8 FUN_148a4f7e8 body=147 status=ok
// SIG undefined FUN_148a4f7e8(void)

undefined4 * FUN_148a4f7e8(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  
  *param_1 = *param_2;
  *(undefined ***)(param_1 + 2) = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(param_2 + 8);
  *(byte *)(param_1 + 8) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(param_1 + 4,param_2 + 4);
  *(undefined ***)(param_1 + 2) = &PTR_FUN_14a5af930;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_2 + 0xe) = 0;
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_2 + 0x12) = 0;
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  *(undefined8 *)(param_2 + 0x14) = 0;
  return param_1;
}



// FUNCTION 148a4f87c FUN_148a4f87c body=29 status=ok
// SIG undefined FUN_148a4f87c(void)

undefined8 FUN_148a4f87c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a4f8b4 FUN_148a4f8b4 body=29 status=ok
// SIG undefined FUN_148a4f8b4(void)

bool FUN_148a4f8b4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a4f8d2 FUN_148a4f8d2 body=26 status=ok
// SIG undefined FUN_148a4f8d2(void)

bool FUN_148a4f8d2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a4f8ec FUN_148a4f8ec body=24 status=ok
// SIG undefined FUN_148a4f8ec(void)

bool FUN_148a4f8ec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a4f904 FUN_148a4f904 body=93 status=ok
// SIG undefined FUN_148a4f904(void)

void FUN_148a4f904(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4c3ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4cdde0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a4f962 FUN_148a4f962 body=93 status=ok
// SIG undefined FUN_148a4f962(void)

void FUN_148a4f962(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4c3ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4cdde0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a4f9c0 FUN_148a4f9c0 body=126 status=ok
// SIG undefined FUN_148a4f9c0(void)

void FUN_148a4f9c0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4c3ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4cdde0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a4fa2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a4fa3e FUN_148a4fa3e body=132 status=ok
// SIG undefined FUN_148a4fa3e(void)

void FUN_148a4fa3e(longlong param_1,longlong *param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_14479d2ce(param_1 + 0x18);
  pcVar1 = *(code **)(param_1 + 0x20);
  local_30 = *param_2;
  *param_2 = 0;
  local_28 = (undefined4)param_2[1];
  local_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  (*pcVar1)(uVar2,&local_30,param_3);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4fac4 FUN_148a4fac4 body=200 status=ok
// SIG undefined FUN_148a4fac4(void)

bool FUN_148a4fac4(longlong param_1,longlong *param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_40);
    lVar4 = local_40;
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x20);
    local_40 = *param_2;
    *param_2 = 0;
    local_38 = (undefined4)param_2[1];
    local_34 = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    (*pcVar1)(lVar3,&local_40,param_3);
  }
  if (lVar4 != 0) {
    FUN_140113f3a(lVar4);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4fb8e FUN_148a4fb8e body=29 status=ok
// SIG undefined FUN_148a4fb8e(void)

undefined8 FUN_148a4fb8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a4fbc6 FUN_148a4fbc6 body=29 status=ok
// SIG undefined FUN_148a4fbc6(void)

bool FUN_148a4fbc6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a4fbe4 FUN_148a4fbe4 body=26 status=ok
// SIG undefined FUN_148a4fbe4(void)

bool FUN_148a4fbe4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a4fbfe FUN_148a4fbfe body=24 status=ok
// SIG undefined FUN_148a4fbfe(void)

bool FUN_148a4fbfe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a4fc22 FUN_148a4fc22 body=93 status=ok
// SIG undefined FUN_148a4fc22(void)

void FUN_148a4fc22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4cdec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4cde50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a4fc80 FUN_148a4fc80 body=93 status=ok
// SIG undefined FUN_148a4fc80(void)

void FUN_148a4fc80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4cdec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4cde50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a4fcde FUN_148a4fcde body=126 status=ok
// SIG undefined FUN_148a4fcde(void)

void FUN_148a4fcde(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4cdec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4cde50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a4fd4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a4fd5c FUN_148a4fd5c body=156 status=ok
// SIG undefined FUN_148a4fd5c(void)

void FUN_148a4fd5c(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = FUN_14479d2ce(param_1 + 0x18);
  pcVar3 = *(code **)(param_1 + 0x20);
  local_38 = *param_2;
  local_30 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar3)(uVar5,&local_38,param_3,param_4);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4fdfa FUN_148a4fdfa body=222 status=ok
// SIG undefined FUN_148a4fdfa(void)

bool FUN_148a4fdfa(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar5 = FUN_144a61b4f();
  if (cVar5 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_48);
    lVar7 = local_48;
  }
  else {
    lVar7 = 0;
  }
  lVar6 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar6 != 0) {
    pcVar3 = *(code **)(param_1 + 0x20);
    local_48 = *param_2;
    local_40 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (*pcVar3)(lVar6,&local_48,param_3,param_4);
  }
  if (lVar7 != 0) {
    FUN_140113f3a(lVar7);
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
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar6 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4fedc FUN_148a4fedc body=29 status=ok
// SIG undefined FUN_148a4fedc(void)

undefined8 FUN_148a4fedc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a4ff14 FUN_148a4ff14 body=29 status=ok
// SIG undefined FUN_148a4ff14(void)

bool FUN_148a4ff14(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a4ff32 FUN_148a4ff32 body=26 status=ok
// SIG undefined FUN_148a4ff32(void)

bool FUN_148a4ff32(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a4ff4c FUN_148a4ff4c body=24 status=ok
// SIG undefined FUN_148a4ff4c(void)

bool FUN_148a4ff4c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a4ff64 FUN_148a4ff64 body=101 status=ok
// SIG undefined FUN_148a4ff64(void)

void FUN_148a4ff64(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4cdf30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a4ffca FUN_148a4ffca body=101 status=ok
// SIG undefined FUN_148a4ffca(void)

void FUN_148a4ffca(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4cdf30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a50030 FUN_148a50030 body=134 status=ok
// SIG undefined FUN_148a50030(void)

void FUN_148a50030(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4cdf30;
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
                    /* WARNING: Could not recover jumptable at 0x000148a500a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a500b6 FUN_148a500b6 body=39 status=ok
// SIG undefined FUN_148a500b6(void)

void FUN_148a500b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a500d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148a500de FUN_148a500de body=134 status=ok
// SIG undefined FUN_148a500de(void)

bool FUN_148a500de(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a50166 FUN_148a50166 body=106 status=ok
// SIG undefined FUN_148a50166(void)

undefined8 FUN_148a50166(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x88,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xf0f0f0f0f0f0f0f1),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x88)) {
    uVar4 = uVar2 / 0x88 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x88,8);
  }
  return uVar3;
}



// FUNCTION 148a501d0 FUN_148a501d0 body=150 status=ok
// SIG undefined FUN_148a501d0(void)

void FUN_148a501d0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a50268 FUN_148a50268 body=124 status=ok
// SIG undefined FUN_148a50268(void)

void FUN_148a50268(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x88 + lVar1);
  FUN_145c7f12e(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x88),(longlong)iVar3 * 0x88);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 148a502e4 FUN_148a502e4 body=62 status=ok
// SIG undefined FUN_148a502e4(void)

void FUN_148a502e4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148a50322(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x88,8);
  }
  return;
}



// FUNCTION 148a50322 FUN_148a50322 body=118 status=ok
// SIG undefined FUN_148a50322(void)

ulonglong FUN_148a50322(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x88) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148a5035f;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x88,8);
      param_2 = param_2 / 0x88;
    }
  }
LAB_148a5035f:
  return param_2 & 0xffffffff;
}



// FUNCTION 148a5039e FUN_148a5039e body=483 status=ok
// SIG undefined FUN_148a5039e(void)

void FUN_148a5039e(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_49;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  _Src = local_48;
  puVar2 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_40;
  local_58 = (int)uStack_40;
  if (lVar1 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,uStack_40 & 0xffffffff,0);
    memcpy(local_60,_Src,lVar1 * 2);
  }
  FUN_148a50582(local_30,local_38,&local_60,puVar2);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a50582 FUN_148a50582 body=557 status=ok
// SIG undefined FUN_148a50582(void)

void FUN_148a50582(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  int local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_4 = 0;
  FUN_148a2deec(&local_58,L"GetIsMyTurn",param_1,0);
  FUN_148a2dfa6(&local_58,param_2);
  if (local_48 != (longlong *)0x0 && local_58 != 0) {
    (**(code **)(*local_48 + 0x100))(local_48,&local_68);
    if (local_68 == (longlong *)0x0) {
      FUN_1415b7ec4(L"Turn Based Matches not supported by Online Subsystem",3,0);
    }
    else {
      local_88 = (void *)0x0;
      local_80 = (int)param_3[1];
      lVar6 = (longlong)local_80;
      _Src = (void *)*param_3;
      if (lVar6 == 0) {
        local_7c = 0;
      }
      else {
        FUN_1446dd670(&local_88,local_80,0);
        memcpy(local_88,_Src,lVar6 * 2);
      }
      (**(code **)(*local_68 + 0x38))(local_68,&local_78,&local_88);
      if (local_78 == (longlong *)0x0) {
        puVar5 = &DAT_149dfb77a;
        if ((int)param_3[1] != 0) {
          puVar5 = (undefined2 *)*param_3;
        }
        FUN_140002266(&local_98,L"Match ID %s not found",puVar5);
        puVar5 = &DAT_149dfb77a;
        if (local_90 != 0) {
          puVar5 = local_98;
        }
        FUN_1415b7ec4(puVar5,3,0);
        if (local_98 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        iVar3 = (**(code **)(*local_78 + 0x48))();
        iVar4 = (**(code **)(*local_78 + 0x40))();
        *param_4 = iVar3 == iVar4;
      }
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)local_70 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_70 + 0x10))(local_70);
          }
        }
      }
    }
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
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a507b0 FUN_148a507b0 body=486 status=ok
// SIG undefined FUN_148a507b0(void)

void FUN_148a507b0(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined4 local_4c;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  _Src = local_48;
  puVar2 = &local_4c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_40;
  local_58 = (int)uStack_40;
  if (lVar1 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,uStack_40 & 0xffffffff,0);
    memcpy(local_60,_Src,lVar1 * 2);
  }
  FUN_148a50998(local_30,local_38,&local_60,puVar2);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a50998 FUN_148a50998 body=544 status=ok
// SIG undefined FUN_148a50998(void)

void FUN_148a50998(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  undefined4 uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  int local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_4 = 0xffffffff;
  FUN_148a2deec(&local_58,L"GetMyPlayerIndex",param_1,0);
  FUN_148a2dfa6(&local_58,param_2);
  if (local_48 != (longlong *)0x0 && local_58 != 0) {
    (**(code **)(*local_48 + 0x100))(local_48,&local_68);
    if (local_68 == (longlong *)0x0) {
      FUN_1415b7ec4(L"Turn Based Matches not supported by Online Subsystem",3,0);
    }
    else {
      local_88 = (void *)0x0;
      local_80 = (int)param_3[1];
      lVar5 = (longlong)local_80;
      _Src = (void *)*param_3;
      if (lVar5 == 0) {
        local_7c = 0;
      }
      else {
        FUN_1446dd670(&local_88,local_80,0);
        memcpy(local_88,_Src,lVar5 * 2);
      }
      (**(code **)(*local_68 + 0x38))(local_68,&local_78,&local_88);
      if (local_78 == (longlong *)0x0) {
        puVar4 = &DAT_149dfb77a;
        if ((int)param_3[1] != 0) {
          puVar4 = (undefined2 *)*param_3;
        }
        FUN_140002266(&local_98,L"Match ID %s not found",puVar4);
        puVar4 = &DAT_149dfb77a;
        if (local_90 != 0) {
          puVar4 = local_98;
        }
        FUN_1415b7ec4(puVar4,3,0);
        if (local_98 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        uVar3 = (**(code **)(*local_78 + 0x40))();
        *param_4 = uVar3;
      }
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)local_70 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_70 + 0x10))(local_70);
          }
        }
      }
    }
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
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a50bba FUN_148a50bba body=605 status=ok
// SIG undefined FUN_148a50bba(void)

void FUN_148a50bba(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  void *_Src;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78 [3];
  undefined4 local_5c;
  void *local_58;
  ulonglong uStack_50;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  _Src = local_58;
  uVar1 = local_5c;
  plVar3 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_50;
  local_80 = (int)uStack_50;
  if (lVar2 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,uStack_50 & 0xffffffff,0);
    memcpy(local_88,_Src,lVar2 * 2);
  }
  local_98 = plVar3;
  FUN_148a50e18(local_38,local_40,&local_88,uVar1);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a50e18 FUN_148a50e18 body=611 status=ok
// SIG undefined FUN_148a50e18(void)

void FUN_148a50e18(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  char cVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  int local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_148a2deec(&local_58,L"GetMyPlayerIndex",param_1,0);
  FUN_148a2dfa6(&local_58,param_2);
  if (local_48 == (longlong *)0x0 || local_58 == 0) goto LAB_148a50f81;
  (**(code **)(*local_48 + 0x100))(local_48,&local_68);
  if (local_68 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Turn Based Matches not supported by Online Subsystem",3,0);
  }
  else {
    local_88 = (void *)0x0;
    local_80 = (int)param_3[1];
    lVar5 = (longlong)local_80;
    _Src = (void *)*param_3;
    if (lVar5 == 0) {
      local_7c = 0;
    }
    else {
      FUN_1446dd670(&local_88,local_80,0);
      memcpy(local_88,_Src,lVar5 * 2);
    }
    (**(code **)(*local_68 + 0x38))(local_68,&local_78,&local_88);
    if (local_78 == (longlong *)0x0) {
      puVar4 = &DAT_149dfb77a;
      if ((int)param_3[1] != 0) {
        puVar4 = (undefined2 *)*param_3;
      }
      FUN_140002266(&local_98,L"Match ID %s not found",puVar4);
      puVar4 = &DAT_149dfb77a;
      if (local_90 != 0) {
        puVar4 = local_98;
      }
LAB_148a51022:
      FUN_1415b7ec4(puVar4,3,0);
      if (local_98 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      cVar3 = (**(code **)(*local_78 + 0x10))(local_78,param_4,param_5);
      if (cVar3 == '\0') {
        FUN_140002266(&local_98,L"Player index %d not within bounds of player array.",param_4);
        puVar4 = local_98;
        if (local_90 == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        goto LAB_148a51022;
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
  }
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
LAB_148a50f81:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a5107c FUN_148a5107c body=300 status=ok
// SIG undefined FUN_148a5107c(void)

void FUN_148a5107c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a511aa(local_18,local_20,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a511aa FUN_148a511aa body=231 status=ok
// SIG undefined FUN_148a511aa(void)

void FUN_148a511aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148a2deec(&local_40,L"GetIsMyTurn",param_1,0);
  FUN_148a2dfa6(&local_40,param_2);
  if (local_30 != (longlong *)0x0 && local_40 != 0) {
    (**(code **)(*local_30 + 0x100))(local_30,&local_50);
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x48))(local_50,param_3);
    }
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a51295 FUN_148a51295 body=188 status=ok
// SIG undefined FUN_148a51295(void)

void FUN_148a51295(longlong param_1,longlong param_2,uint param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  
  if (0 < (int)param_3) {
    fVar6 = (float)(int)param_5 / (float)(int)param_4;
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    uVar4 = 0;
    uVar2 = 0;
    do {
      if (0 < (int)param_5) {
        lVar1 = param_2 + (ulonglong)((int)uVar2 * param_5) * 4;
        uVar5 = 0;
        do {
          fVar7 = *(float *)(param_1 + uVar2 * (longlong)(int)param_4 * 4) * fVar6;
          *(float *)(lVar1 + uVar5 * 4) = fVar7;
          if (1 < (int)param_4) {
            uVar3 = 1;
            do {
              fVar7 = fVar7 + *(float *)(param_1 + uVar4 * 4 + uVar3 * 4) * fVar6;
              *(float *)(lVar1 + uVar5 * 4) = fVar7;
              uVar3 = uVar3 + 1;
            } while (param_4 != uVar3);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != param_5);
      }
      uVar2 = uVar2 + 1;
      uVar4 = (ulonglong)((int)uVar4 + param_4);
    } while (uVar2 != param_3);
  }
  return;
}



// FUNCTION 148a51352 FUN_148a51352 body=478 status=ok
// SIG undefined FUN_148a51352(void)

int * FUN_148a51352(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xe);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  InitializeCriticalSection(lpCriticalSection);
  SetCriticalSectionSpinCount(lpCriticalSection,4000);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_1477b96d4(param_1 + 0x20);
  param_1[0x3c] = 0;
  uVar5 = FUN_145cdd8ee();
  bVar3 = 1 < DAT_14c761e54;
  FUN_1446ddc76(&local_68,"Voice",1);
  uVar4 = local_68;
  uVar7 = FUN_144a52528();
  plVar8 = (longlong *)FUN_1402c9134(uVar7,uVar4,local_54,1);
  (**(code **)(*plVar8 + 0x50))(plVar8,&local_68,uVar5,bVar3 + '\x01');
  plVar8 = local_60;
  if (param_1 + 0x1c != (int *)&local_68) {
    *(undefined8 *)(param_1 + 0x1c) = local_68;
    local_68 = 0;
    plVar2 = *(longlong **)(param_1 + 0x1e);
    if (local_60 != plVar2) {
      local_60 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x1e) = plVar8;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar2 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
  }
  plVar8 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  iVar6 = FUN_145cdd8ee();
  iVar6 = ((iVar6 * 2 << (1 < DAT_14c761e54)) + (uint)(1 < DAT_14c761e54) * 0x400) * 2 + 0x800;
  *param_1 = iVar6;
  param_1[1] = iVar6 * 5;
  EnterCriticalSection(lpCriticalSection);
  iVar6 = param_1[1];
  if (-1 < iVar6) {
    param_1[0x1a] = 0;
    if (param_1[0x1b] != iVar6) {
      FUN_144893a1c(param_1 + 0x18);
    }
    LeaveCriticalSection(lpCriticalSection);
    if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar6);
}



// FUNCTION 148a51532 FUN_148a51532 body=380 status=ok
// SIG undefined FUN_148a51532(void)

undefined4 * FUN_148a51532(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 7) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xe),4000);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  FUN_1477b96d4(param_1 + 0x20);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + 7);
  *(undefined8 *)(param_2 + 7) = 0;
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
    *(undefined8 *)(param_2 + 0x1c) = 0;
    plVar2 = *(longlong **)(param_2 + 0x1e);
    plVar3 = *(longlong **)(param_1 + 0x1e);
    if (plVar2 != plVar3) {
      *(undefined8 *)(param_2 + 0x1e) = 0;
      *(longlong **)(param_1 + 0x1e) = plVar2;
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
    }
  }
  *(undefined8 *)(param_2 + 0x1c) = 0;
  plVar2 = *(longlong **)(param_2 + 0x1e);
  if (plVar2 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x1e) = 0;
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
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  param_1[0x3c] = param_2[0x3c];
  param_2[0x3c] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0xe));
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1b] = param_2[0x1b];
    *(undefined8 *)(param_2 + 0x1a) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0xe));
  return param_1;
}



// FUNCTION 148a516ae FUN_148a516ae body=153 status=ok
// SIG undefined FUN_148a516ae(void)

void FUN_148a516ae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x70) = 0;
  plVar3 = *(longlong **)(param_1 + 0x78);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
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
  FUN_148a51748(param_1);
  FUN_1477d18f6(param_1 + 0x80);
  plVar3 = *(longlong **)(param_1 + 0x78);
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
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 148a51748 FUN_148a51748 body=244 status=ok
// SIG undefined FUN_148a51748(void)

void FUN_148a51748(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *(undefined8 *)(param_1 + 0x10) = 0x47efffffe0000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  cVar2 = FUN_141528353();
  if (cVar2 != '\0') {
    puVar1 = (undefined8 *)(param_1 + 0x1c);
    cVar2 = FUN_144729dda(puVar1);
    if (cVar2 != '\0') {
      uVar3 = FUN_14479d2ce(puVar1);
      FUN_1458cf7c2(uVar3);
      lVar4 = FUN_14479d2ce(puVar1);
      if ((*(longlong *)(lVar4 + 0x8d8) != 0) &&
         ((*(byte *)(*(longlong *)(lVar4 + 0x8d8) + 0x9c) & 1) != 0)) {
        FUN_1401bf202();
      }
      cVar2 = FUN_147da50ec(*(undefined8 *)(param_1 + 0x28));
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x490))();
      }
      *(undefined1 *)(param_1 + 0x31) = 0;
      lVar4 = FUN_14479d2ce(puVar1);
      if ((*(byte *)(lVar4 + 0x9c) & 1) != 0) {
        uVar3 = FUN_14479d2ce(puVar1);
        FUN_1401bf202(uVar3);
      }
      *puVar1 = 0;
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_144893a1c(param_1 + 0x60,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000148a517b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 148a5183c FUN_148a5183c body=61 status=ok
// SIG undefined FUN_148a5183c(void)

void FUN_148a5183c(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  
  puVar1 = (undefined8 *)(param_1 + 0x1c);
  cVar3 = FUN_144729dda(puVar1);
  if (cVar3 != '\0') {
    uVar2 = FUN_14479d2ce(puVar1);
    FUN_1458cf7c2(uVar2);
    *(undefined1 *)(param_1 + 0x31) = 0;
  }
  *puVar1 = 0;
  return;
}



// FUNCTION 148a5187a FUN_148a5187a body=407 status=ok
// SIG undefined FUN_148a5187a(void)

undefined8 * FUN_148a5187a(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR__purecall_14b4cfec0;
  FUN_14118b488(param_1 + 1);
  *param_1 = &PTR_FUN_14b4ceb30;
  param_1[1] = &PTR_FUN_14b4ceca0;
  param_1[2] = &PTR_LAB_14b4cecc8;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1477b96d4(param_1 + 7);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd2) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_145afe678(param_1 + 0x35);
  FUN_1477b96d4(param_1 + 0x4a);
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  local_48 = FUN_148a51ac8;
  local_40 = 0;
  FUN_148a51a12(local_38,param_1);
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x18))(param_2,&local_48);
    param_1[3] = local_48;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a51a12 FUN_148a51a12 body=180 status=ok
// SIG undefined FUN_148a51a12(void)

undefined8 FUN_148a51a12(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_48 = 0;
  local_40 = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,&local_48);
  *puVar3 = &PTR_LAB_14a1e1a40;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b4d01a0;
  puVar3[3] = param_2;
  puVar3[4] = uVar2;
  *(undefined4 *)(puVar3 + 5) = uVar1;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a51ac8 FUN_148a51ac8 body=321 status=ok
// SIG undefined FUN_148a51ac8(void)

void FUN_148a51ac8(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  longlong *local_48;
  longlong *local_40;
  undefined2 local_38;
  undefined8 local_30;
  longlong local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0xf0);
  local_28 = param_1 + 0x100;
  local_30 = 0x100000000;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (*(int *)(param_1 + 0x118) != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = local_20;
  iStack_54 = iStack_1c;
  local_50 = local_18;
  local_4c = local_14;
  local_68 = local_30;
  local_60 = local_28;
  local_38 = 0;
  local_70 = plVar1;
  local_48 = plVar1;
  local_40 = plVar1;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_148a51748(*local_70 + (longlong)iStack_54 * 0x120 + 0x20);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
    if (((local_38 & 1) != 0) && (local_38._1_1_ == '\x01')) {
      FUN_148a558d8(local_40,(int)local_40[1] - *(int *)((longlong)local_40 + 0x34));
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a51c0a FUN_148a51c0a body=514 status=ok
// SIG undefined FUN_148a51c0a(void)

void FUN_148a51c0a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b4ceb30;
  param_1[1] = &PTR_FUN_14b4ceca0;
  param_1[2] = &PTR_LAB_14b4cecc8;
  if (*(char *)((longlong)param_1 + 0xd9) == '\x01') {
    (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  }
  FUN_140457ffc(&DAT_14c9647a0,param_1);
  param_1[0x15] = 0;
  plVar3 = (longlong *)param_1[0x16];
  if (plVar3 != (longlong *)0x0) {
    param_1[0x16] = 0;
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
  param_1[0x17] = 0;
  plVar3 = (longlong *)param_1[0x18];
  if (plVar3 != (longlong *)0x0) {
    param_1[0x18] = 0;
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
  puVar4 = (undefined8 *)param_1[0x2a];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  FUN_148a55b55(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_148a51e0c(param_1 + 0x35);
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_148a552a0(param_1 + 0x2b);
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_148a55428(param_1 + 0x1e);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x18];
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
  plVar3 = (longlong *)param_1[0x16];
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
  FUN_1477d18f6(param_1 + 7);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1410c966c(param_1 + 1);
  return;
}



// FUNCTION 148a51e0c FUN_148a51e0c body=50 status=ok
// SIG undefined FUN_148a51e0c(void)

void FUN_148a51e0c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  FUN_1477d18f6(param_1 + 0xa8);
  FUN_1459d2d3c(param_1);
  return;
}



// FUNCTION 148a51e3e FUN_148a51e3e body=90 status=ok
// SIG undefined FUN_148a51e3e(void)

undefined8 FUN_148a51e3e(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xe8))();
  uVar2 = 0xffffffff;
  if ((cVar1 != '\0') && (uVar2 = 0, *(char *)((longlong)param_1 + 0xd9) == '\0')) {
    FUN_143ee74e8(param_1);
    cVar1 = (**(code **)(*param_1 + 0x108))(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0xf0))(param_1);
    }
    *(undefined1 *)((longlong)param_1 + 0xd9) = 1;
  }
  return uVar2;
}



// FUNCTION 148a51e98 FUN_148a51e98 body=76 status=ok
// SIG undefined FUN_148a51e98(void)

undefined8 FUN_148a51e98(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xe8))();
  uVar2 = 0xffffffff;
  if ((cVar1 != '\0') && (uVar2 = 0, *(char *)((longlong)param_1 + 0xd9) == '\x01')) {
    *(undefined2 *)(param_1 + 0x1b) = 1;
    (**(code **)(*param_1 + 0xf8))(param_1);
    FUN_143ee74e8(param_1);
  }
  return uVar2;
}



// FUNCTION 148a51ee4 FUN_148a51ee4 body=46 status=ok
// SIG undefined FUN_148a51ee4(void)

undefined8 FUN_148a51ee4(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xe8))();
  uVar2 = 0xffffffff;
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 148a51f12 FUN_148a51f12 body=729 status=ok
// SIG undefined FUN_148a51f12(void)

undefined8 FUN_148a51f12(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined **local_68;
  undefined8 local_60;
  longlong *local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar8 = *(longlong **)(param_2 + 0x10);
  if (plVar8 == (longlong *)0x0) {
LAB_148a51f44:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_148a51f44;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar10 = iVar6 == iVar4;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar10);
  }
  plVar3 = (longlong *)(param_1 + 0xf0);
  local_60 = 0;
  if (plVar8 != (longlong *)0x0) {
    local_60 = *(undefined8 *)(param_2 + 8);
  }
  local_68 = &PTR_FUN_14a184370;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_50 = 0;
  local_58 = plVar8;
  uVar5 = FUN_140ba40f9(&local_68);
  iVar6 = FUN_148a55ae0(plVar3,uVar5,&local_68);
  if (iVar6 == -1) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)iVar6 * 0x120 + *plVar3;
  }
  lVar9 = lVar7 + 0x20;
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  local_68 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
  if (plVar8 != (longlong *)0x0) {
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
  if (lVar9 != 0) {
    FUN_148a5183c(lVar9);
    plVar8 = *(longlong **)(param_2 + 0x10);
    if (plVar8 == (longlong *)0x0) {
LAB_148a52064:
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar8[1];
      do {
        if (iVar6 == 0) goto LAB_148a52064;
        LOCK();
        iVar4 = (int)plVar8[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar8 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
    }
    local_60 = 0;
    if (plVar8 != (longlong *)0x0) {
      local_60 = *(undefined8 *)(param_2 + 8);
    }
    local_68 = &PTR_FUN_14a184370;
    local_50 = 0;
    local_58 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      local_50 = 0;
      FUN_148a55ce4(plVar3,&local_68);
      local_68 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    else {
      FUN_148a55ce4(plVar3,&local_68);
      local_68 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
    }
    plVar8 = *(longlong **)(param_2 + 0x10);
    if (plVar8 == (longlong *)0x0) {
LAB_148a520ba:
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar8[1];
      do {
        if (iVar6 == 0) goto LAB_148a520ba;
        LOCK();
        iVar4 = (int)plVar8[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar8 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
    }
    local_60 = 0;
    if (plVar8 != (longlong *)0x0) {
      local_60 = *(undefined8 *)(param_2 + 8);
    }
    local_68 = &PTR_FUN_14a184370;
    local_50 = 0;
    local_58 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      local_50 = 0;
      FUN_148a55ee4(param_1 + 0x158,&local_68);
      local_68 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    else {
      FUN_148a55ee4(param_1 + 0x158,&local_68);
      local_68 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 148a521ec FUN_148a521ec body=81 status=ok
// SIG undefined FUN_148a521ec(void)

int FUN_148a521ec(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  FUN_143ee74e8();
  iVar2 = 0;
  iVar3 = 0;
  if ((int)param_1[0x19] != -1) {
    cVar1 = (**(code **)(*param_1 + 0x108))(param_1);
    iVar3 = iVar2;
    if (((cVar1 != '\0') && (*(int *)((longlong)param_1 + 0xd4) == 2)) &&
       (*(int *)((longlong)param_1 + 0xcc) != 0)) {
      iVar3 = 1 << (*(byte *)(param_1 + 0x19) & 0x1f);
    }
  }
  return iVar3;
}



// FUNCTION 148a5223e FUN_148a5223e body=166 status=ok
// SIG undefined FUN_148a5223e(void)

void FUN_148a5223e(longlong param_1,undefined8 param_2,undefined4 param_3,float param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_145be8fde();
  lVar2 = FUN_14001cc68(0x50,0x10);
  FUN_148a5435e(lVar2,param_3,(int)(*(float *)(param_1 + 0x958) * 0.4),param_2);
  lVar1 = *(longlong *)(param_1 + 0x928);
  if ((lVar1 != lVar2) && (*(longlong *)(param_1 + 0x928) = lVar2, lVar1 != 0)) {
    FUN_148a5733a(lVar1);
    FUN_1400020a8(lVar1);
  }
  *(float *)(param_1 + 0x960) = param_4;
  *(int *)(param_1 + 0x95c) = (int)(param_4 * *(float *)(param_1 + 0x958));
  return;
}



// FUNCTION 148a522e4 FUN_148a522e4 body=199 status=ok
// SIG undefined FUN_148a522e4(void)

undefined8
FUN_148a522e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = 0;
  local_50 = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,&local_58);
  *puVar3 = &PTR_LAB_14b4d0280;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b4d0210;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148a56468(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a523ac FUN_148a523ac body=495 status=ok
// SIG undefined FUN_148a523ac(void)

void FUN_148a523ac(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_d8 [40];
  LARGE_INTEGER local_b0;
  undefined8 local_a8;
  longlong local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  LARGE_INTEGER local_88;
  LARGE_INTEGER local_80;
  undefined2 local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  QueryPerformanceCounter(&local_b0);
  dVar3 = (double)local_b0.QuadPart * DAT_14c83f420;
  local_b0.QuadPart = param_1 + 0xf0;
  local_68 = param_1 + 0x100;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  local_58 = 0;
  if (*(int *)(param_1 + 0x118) != 0) {
    FUN_1449c0562(&local_70);
  }
  local_98 = local_60;
  iStack_94 = iStack_5c;
  local_90 = local_58;
  local_8c = local_54;
  local_a8 = local_70;
  local_a0 = local_68;
  local_78 = 0;
  local_88.QuadPart = local_b0.QuadPart;
  local_80.QuadPart = local_b0.QuadPart;
  if (iStack_5c < *(int *)(local_68 + 0x18)) {
    do {
      lVar2 = *(longlong *)local_b0;
      lVar6 = (longlong)iStack_94 * 0x120;
      lVar5 = lVar2 + lVar6 + 0x3c;
      dVar1 = *(double *)(lVar2 + lVar6 + 0x30);
      cVar4 = FUN_144729dda(lVar5);
      if (cVar4 == '\0') {
LAB_148a52501:
        fVar7 = (float)FUN_147da4ea6();
        if ((double)fVar7 <= (dVar3 + 16777216.0) - dVar1) goto LAB_148a52536;
      }
      else {
        lVar5 = FUN_14479d2ce(lVar5);
        if (((*(longlong *)(lVar5 + 0x928) != 0) &&
            (*(int *)(*(longlong *)(lVar5 + 0x928) + 0x14) == 0)) ||
           (*(char *)(lVar2 + 0x51 + lVar6) == '\0')) goto LAB_148a52501;
LAB_148a52536:
        FUN_148a51748(lVar2 + lVar6 + 0x20);
      }
      local_98 = local_98 & ~local_a8._4_4_;
      FUN_1449c0562(&local_a8);
    } while (iStack_94 < *(int *)(local_a0 + 0x18));
    if (((local_78 & 1) != 0) && (local_78._1_1_ == '\x01')) {
      FUN_148a558d8(local_80.QuadPart,
                    *(int *)(local_80.QuadPart + 8) - *(int *)(local_80.QuadPart + 0x34));
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5259c FUN_148a5259c body=67 status=ok
// SIG undefined FUN_148a5259c(void)

void FUN_148a5259c(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_1 + 0xcc);
    *(undefined4 *)(param_1 + 0xd4) = uVar2;
  }
  FUN_148a523ac(param_1);
  FUN_147038ea2(param_1 + 0x1a8);
  return;
}



// FUNCTION 148a525e0 FUN_148a525e0 body=281 status=ok
// SIG undefined FUN_148a525e0(void)

undefined8 * FUN_148a525e0(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *(undefined4 *)((longlong)param_1 + 0xcc);
  lVar3 = param_1[0x1a];
  if ((ulonglong)*(uint *)((longlong)param_1 + 0xd4) < 7) {
    puVar6 = (undefined2 *)(&PTR_u_Uninitialized_14b4d0328)[*(uint *)((longlong)param_1 + 0xd4)];
  }
  else {
    puVar6 = &DAT_149dfb77a;
  }
  uVar5 = (**(code **)(*param_1 + 0x68))(param_1);
  uVar4 = (**(code **)(*param_1 + 0x108))(param_1);
  local_68 = puVar6;
  local_60 = uVar1;
  local_58 = (int)lVar3;
  FUN_140002266(&local_48,
                L"IsRecording: %d\n DataReady: 0x%08x State:%s\n UncompressedBytes: %d\n CompressedBytes: %d\n"
                ,uVar4,uVar5);
  if ((undefined8 *)&local_48 == param_2) {
    if (CONCAT44(uStack_44,local_48) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_2 = local_48;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_44;
    *(int *)(param_2 + 1) = iStack_40;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_3c;
  }
  FUN_140002266(&local_48,L"Remainder[%d] %d\n",0,(int)param_1[4]);
  iVar2 = iStack_40 + -1;
  if (iStack_40 == 0) {
    iVar2 = 0;
  }
  thunk_FUN_1400020e8(param_2,CONCAT44(uStack_44,local_48),iVar2);
  if (CONCAT44(uStack_44,local_48) != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a526fa FUN_148a526fa body=63 status=ok
// SIG undefined FUN_148a526fa(void)

undefined8 * FUN_148a526fa(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_147038a7c(*(longlong *)(param_1 + 0xa8) + 0x18,param_2,0x2000,0x3f800000);
  }
  return param_2;
}



// FUNCTION 148a5273a FUN_148a5273a body=43 status=ok
// SIG undefined FUN_148a5273a(void)

undefined8 FUN_148a5273a(longlong param_1,undefined8 param_2)

{
  FUN_147038e84(param_1 + 0x1a8,param_2,0x2000,0x3f800000);
  return param_2;
}



// FUNCTION 148a5277e FUN_148a5277e body=201 status=ok
// SIG undefined FUN_148a5277e(void)

void FUN_148a5277e(longlong param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = FUN_140ba40f9(param_2);
  iVar4 = FUN_148a567b8((longlong *)(param_1 + 0x158),uVar3,param_2);
  uVar3 = 0xbf800000;
  if (iVar4 != -1) {
    lVar5 = (longlong)iVar4 * 0x38 + *(longlong *)(param_1 + 0x158);
    if ((undefined4 *)(lVar5 + 0x20) != (undefined4 *)0x0 && lVar5 != 0) {
      QueryPerformanceCounter(&local_38);
      dVar2 = (double)local_38.QuadPart * DAT_14c83f420;
      dVar1 = *(double *)(lVar5 + 0x28);
      fVar6 = (float)FUN_147da4ea6();
      uVar3 = 0;
      if ((dVar2 + 16777216.0) - dVar1 <= (double)fVar6) {
        uVar3 = *(undefined4 *)(lVar5 + 0x20);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar3);
}



// FUNCTION 148a52848 FUN_148a52848 body=146 status=ok
// SIG undefined FUN_148a52848(void)

undefined8 FUN_148a52848(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_140ba40f9(param_2);
  puVar2 = (undefined4 *)FUN_148a56826(param_1 + 0x158,uVar1,param_2);
  *puVar2 = param_3;
  QueryPerformanceCounter(&local_38);
  *(double *)(puVar2 + 2) = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


