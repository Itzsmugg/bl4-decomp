// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148aba5ca FUN_148aba5ca body=26 status=ok
// SIG undefined FUN_148aba5ca(void)

bool FUN_148aba5ca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148aba5e4 FUN_148aba5e4 body=24 status=ok
// SIG undefined FUN_148aba5e4(void)

bool FUN_148aba5e4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148aba5fc FUN_148aba5fc body=93 status=ok
// SIG undefined FUN_148aba5fc(void)

void FUN_148aba5fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4fe670;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148aba65a FUN_148aba65a body=93 status=ok
// SIG undefined FUN_148aba65a(void)

void FUN_148aba65a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4fe670;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148aba6b8 FUN_148aba6b8 body=126 status=ok
// SIG undefined FUN_148aba6b8(void)

void FUN_148aba6b8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f2a800;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4fe670;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148aba727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148aba736 FUN_148aba736 body=213 status=ok
// SIG undefined FUN_148aba736(void)

void FUN_148aba736(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

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
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = FUN_14479d2ce(param_1 + 0x18);
  pcVar3 = *(code **)(param_1 + 0x20);
  local_38 = *param_3;
  local_30 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_48 = *param_2;
  local_40 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar3)(uVar5,&local_48,&local_38,param_4);
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
  plVar4 = (longlong *)param_3[1];
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aba80c FUN_148aba80c body=291 status=ok
// SIG undefined FUN_148aba80c(void)

bool FUN_148aba80c(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar5 = FUN_144a61b4f();
  if (cVar5 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar7 = local_48;
  }
  else {
    lVar7 = 0;
  }
  lVar6 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar6 != 0) {
    pcVar3 = *(code **)(param_1 + 0x20);
    local_48 = *param_3;
    local_40 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    local_58 = *param_2;
    local_50 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (*pcVar3)(lVar6,&local_58,&local_48,param_4);
  }
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
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
  plVar4 = (longlong *)param_3[1];
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
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar6 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aba930 FUN_148aba930 body=29 status=ok
// SIG undefined FUN_148aba930(void)

undefined8 FUN_148aba930(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148aba968 FUN_148aba968 body=29 status=ok
// SIG undefined FUN_148aba968(void)

bool FUN_148aba968(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148aba986 FUN_148aba986 body=26 status=ok
// SIG undefined FUN_148aba986(void)

bool FUN_148aba986(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148aba9a0 FUN_148aba9a0 body=24 status=ok
// SIG undefined FUN_148aba9a0(void)

bool FUN_148aba9a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148aba9c4 FUN_148aba9c4 body=93 status=ok
// SIG undefined FUN_148aba9c4(void)

void FUN_148aba9c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4fea80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4fe6e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148abaa22 FUN_148abaa22 body=93 status=ok
// SIG undefined FUN_148abaa22(void)

void FUN_148abaa22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4fea80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4fe6e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148abaa80 FUN_148abaa80 body=126 status=ok
// SIG undefined FUN_148abaa80(void)

void FUN_148abaa80(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4fea80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4fe6e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148abaaef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148abaafe FUN_148abaafe body=56 status=ok
// SIG undefined FUN_148abaafe(void)

void FUN_148abaafe(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148abab33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148abab36 FUN_148abab36 body=169 status=ok
// SIG undefined FUN_148abab36(void)

bool FUN_148abab36(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ababe2 FUN_148ababe2 body=29 status=ok
// SIG undefined FUN_148ababe2(void)

undefined8 FUN_148ababe2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148abac1a FUN_148abac1a body=29 status=ok
// SIG undefined FUN_148abac1a(void)

bool FUN_148abac1a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148abac38 FUN_148abac38 body=26 status=ok
// SIG undefined FUN_148abac38(void)

bool FUN_148abac38(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148abac52 FUN_148abac52 body=24 status=ok
// SIG undefined FUN_148abac52(void)

bool FUN_148abac52(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148abac6a FUN_148abac6a body=93 status=ok
// SIG undefined FUN_148abac6a(void)

void FUN_148abac6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4daf00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4fe750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148abacc8 FUN_148abacc8 body=93 status=ok
// SIG undefined FUN_148abacc8(void)

void FUN_148abacc8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4daf00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4fe750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148abad26 FUN_148abad26 body=126 status=ok
// SIG undefined FUN_148abad26(void)

void FUN_148abad26(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4daf00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4fe750;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148abad95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148abada4 FUN_148abada4 body=48 status=ok
// SIG undefined FUN_148abada4(void)

void FUN_148abada4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148abadd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148abadd4 FUN_148abadd4 body=163 status=ok
// SIG undefined FUN_148abadd4(void)

bool FUN_148abadd4(longlong param_1,undefined8 param_2,undefined4 param_3)

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



// FUNCTION 148abae78 FUN_148abae78 body=29 status=ok
// SIG undefined FUN_148abae78(void)

undefined8 FUN_148abae78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148abaeb0 FUN_148abaeb0 body=29 status=ok
// SIG undefined FUN_148abaeb0(void)

bool FUN_148abaeb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148abaece FUN_148abaece body=26 status=ok
// SIG undefined FUN_148abaece(void)

bool FUN_148abaece(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148abaee8 FUN_148abaee8 body=24 status=ok
// SIG undefined FUN_148abaee8(void)

bool FUN_148abaee8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148abaf0c FUN_148abaf0c body=93 status=ok
// SIG undefined FUN_148abaf0c(void)

void FUN_148abaf0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4fe830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4fe7c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148abaf6a FUN_148abaf6a body=93 status=ok
// SIG undefined FUN_148abaf6a(void)

void FUN_148abaf6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4fe830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4fe7c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148abafc8 FUN_148abafc8 body=126 status=ok
// SIG undefined FUN_148abafc8(void)

void FUN_148abafc8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4fe830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4fe7c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148abb037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148abb046 FUN_148abb046 body=58 status=ok
// SIG undefined FUN_148abb046(void)

void FUN_148abb046(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148abb07d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148abb080 FUN_148abb080 body=173 status=ok
// SIG undefined FUN_148abb080(void)

bool FUN_148abb080(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abb130 FUN_148abb130 body=29 status=ok
// SIG undefined FUN_148abb130(void)

undefined8 FUN_148abb130(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148abb168 FUN_148abb168 body=29 status=ok
// SIG undefined FUN_148abb168(void)

bool FUN_148abb168(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148abb186 FUN_148abb186 body=26 status=ok
// SIG undefined FUN_148abb186(void)

bool FUN_148abb186(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148abb1a0 FUN_148abb1a0 body=24 status=ok
// SIG undefined FUN_148abb1a0(void)

bool FUN_148abb1a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148abb1c4 FUN_148abb1c4 body=93 status=ok
// SIG undefined FUN_148abb1c4(void)

void FUN_148abb1c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4fe910;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4fe8a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148abb222 FUN_148abb222 body=93 status=ok
// SIG undefined FUN_148abb222(void)

void FUN_148abb222(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4fe910;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4fe8a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148abb280 FUN_148abb280 body=126 status=ok
// SIG undefined FUN_148abb280(void)

void FUN_148abb280(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4fe910;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4fe8a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148abb2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148abb2fe FUN_148abb2fe body=48 status=ok
// SIG undefined FUN_148abb2fe(void)

void FUN_148abb2fe(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148abb32b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148abb32e FUN_148abb32e body=163 status=ok
// SIG undefined FUN_148abb32e(void)

bool FUN_148abb32e(longlong param_1,undefined8 param_2,undefined4 param_3)

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



// FUNCTION 148abb3d4 FUN_148abb3d4 body=29 status=ok
// SIG undefined FUN_148abb3d4(void)

undefined8 FUN_148abb3d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148abb40c FUN_148abb40c body=29 status=ok
// SIG undefined FUN_148abb40c(void)

bool FUN_148abb40c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148abb42a FUN_148abb42a body=26 status=ok
// SIG undefined FUN_148abb42a(void)

bool FUN_148abb42a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148abb444 FUN_148abb444 body=24 status=ok
// SIG undefined FUN_148abb444(void)

bool FUN_148abb444(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148abb45c FUN_148abb45c body=93 status=ok
// SIG undefined FUN_148abb45c(void)

void FUN_148abb45c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4fe980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148abb4ba FUN_148abb4ba body=93 status=ok
// SIG undefined FUN_148abb4ba(void)

void FUN_148abb4ba(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4fe980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148abb518 FUN_148abb518 body=126 status=ok
// SIG undefined FUN_148abb518(void)

void FUN_148abb518(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4fe980;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148abb587. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148abb596 FUN_148abb596 body=48 status=ok
// SIG undefined FUN_148abb596(void)

void FUN_148abb596(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148abb5c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2);
  return;
}



// FUNCTION 148abb5c6 FUN_148abb5c6 body=158 status=ok
// SIG undefined FUN_148abb5c6(void)

bool FUN_148abb5c6(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 148abb666 FUN_148abb666 body=673 status=ok
// SIG undefined FUN_148abb666(void)

undefined1 * FUN_148abb666(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  void *_Src;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_144a787a6(param_1 + 0x18,param_3);
  FUN_1414dfba2(&local_90);
  plVar12 = (longlong *)CONCAT44(uStack_84,local_88);
  if (plVar12 != (longlong *)0x0) {
    iVar8 = (int)plVar12[1];
    do {
      if (iVar8 == 0) {
        plVar12 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar9 = (int)plVar12[1];
      bVar13 = iVar8 == iVar9;
      if (bVar13) {
        *(int *)(plVar12 + 1) = iVar8 + 1;
        iVar9 = iVar8;
      }
      iVar8 = iVar9;
      UNLOCK();
    } while (!bVar13);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_84,local_88) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_84,local_88) + 0x10))();
    }
    if (plVar12 != (longlong *)0x0) {
      if (local_90 != (longlong *)0x0) {
        plVar2 = local_90 + 0x19;
        plVar3 = local_90 + 0x1b;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        local_98 = param_1 + 8;
        uStack_60 = plVar3;
        if ((int)local_90[0x1e] == 0) {
          iVar8 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar8 = (int)local_90[0x1e];
        }
        uStack_70 = CONCAT44(uStack_4c,uStack_50);
        local_78 = local_58;
        uVar6 = local_78;
        local_88 = (undefined4)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        local_78._4_4_ = (int)(local_58 >> 0x20);
        iVar9 = local_78._4_4_;
        local_90 = plVar2;
        if ((local_78._4_4_ != iVar8) || (local_78 = uVar6, uStack_60 != plVar3)) {
          do {
            local_78 = uVar6;
            lVar5 = *local_90;
            lVar10 = (longlong)iVar9 * 0x20;
            local_68 = CONCAT71(local_68._1_7_,*(undefined1 *)(lVar5 + lVar10));
            uStack_60 = (longlong *)0x0;
            uVar4 = *(uint *)(lVar5 + 0x10 + lVar10);
            _Src = *(void **)(lVar5 + 8 + lVar10);
            local_58 = CONCAT44(local_58._4_4_,uVar4);
            if ((longlong)(int)uVar4 == 0) {
              local_58 = (ulonglong)uVar4;
              iVar9 = 0;
              plVar11 = (longlong *)&DAT_149dfb77a;
            }
            else {
              FUN_1446dd670(&uStack_60,uVar4,0);
              memcpy(uStack_60,_Src,(longlong)(int)uVar4 * 2);
              iVar9 = (int)local_58 + -1;
              if ((int)local_58 == 0) {
                iVar9 = 0;
              }
              plVar11 = (longlong *)&DAT_149dfb77a;
              if ((int)local_58 != 0) {
                plVar11 = uStack_60;
              }
            }
            cVar7 = FUN_144a791f8(param_2,plVar11,iVar9,1);
            if (cVar7 != '\0') {
              *param_1 = (undefined1)local_68;
              FUN_144a787a6(local_98,param_2);
              if (uStack_60 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              break;
            }
            if (uStack_60 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
            FUN_1449c0562(&local_88);
            iVar9 = local_78._4_4_;
            uVar6 = local_78;
          } while (local_90 != plVar2 ||
                   ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar3 || local_78._4_4_ != iVar8))
          ;
        }
      }
      LOCK();
      plVar2 = plVar12 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  cVar7 = FUN_144a38768(param_2,L".Major",6,1);
  param_1[1] = cVar7 + '\x01';
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148abb908 FUN_148abb908 body=243 status=ok
// SIG undefined FUN_148abb908(void)

undefined8 FUN_148abb908(char *param_1,char *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ushort uVar10;
  bool bVar11;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    iVar5 = *(int *)(param_1 + 0x10);
    if (iVar5 == *(int *)(param_2 + 0x10)) {
      if (1 < iVar5) {
        lVar8 = 0;
        while( true ) {
          uVar10 = *(ushort *)(*(longlong *)(param_1 + 8) + lVar8);
          uVar2 = (ulonglong)uVar10;
          uVar6 = *(ushort *)(*(longlong *)(param_2 + 8) + lVar8);
          if (uVar10 != uVar6) break;
          if (uVar10 == 0) goto LAB_148abb987;
LAB_148abb950:
          lVar8 = lVar8 + 2;
        }
        if ((uVar6 | uVar10) < 0x80) {
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
          uVar7 = (ulonglong)uVar6;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar7]) goto LAB_148abb950;
        }
        if (uVar10 != uVar6) goto LAB_148abb979;
      }
    }
    else if (*(int *)(param_2 + 0x10) + iVar5 != 1) goto LAB_148abb979;
LAB_148abb987:
    iVar5 = *(int *)(param_1 + 0x20);
    iVar1 = *(int *)(param_2 + 0x20);
    if (iVar5 == iVar1) {
      if (iVar5 < 2) {
        return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
      }
      uVar2 = *(ulonglong *)(param_2 + 0x18);
      lVar8 = 0;
      while( true ) {
        uVar10 = *(ushort *)(*(longlong *)(param_1 + 0x18) + lVar8);
        uVar4 = (uint)uVar10;
        uVar6 = *(ushort *)(uVar2 + lVar8);
        uVar9 = (uint)uVar6;
        if (uVar10 != uVar6) {
          if ((uVar6 | uVar10) < 0x80) {
            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar10];
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar6];
            if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar6]) goto LAB_148abb9c1;
          }
          iVar5 = uVar4 - uVar9;
          goto LAB_148abb9f7;
        }
        if (uVar10 == 0) break;
LAB_148abb9c1:
        lVar8 = lVar8 + 2;
      }
      iVar5 = 0;
LAB_148abb9f7:
      bVar11 = iVar5 == 0;
    }
    else {
      uVar2 = (ulonglong)(uint)(iVar1 + iVar5);
      bVar11 = iVar1 + iVar5 == 1;
    }
    uVar3 = CONCAT71((int7)(uVar2 >> 8),bVar11);
  }
  else {
LAB_148abb979:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 148abb9fc FUN_148abb9fc body=192 status=ok
// SIG undefined FUN_148abb9fc(void)

undefined8 * FUN_148abb9fc(longlong *param_1,undefined8 *param_2,wchar_t *param_3)

{
  longlong *plVar1;
  int extraout_EAX;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  size_t sVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    sVar2 = wcslen(param_3);
    extraout_EAX = (int)sVar2;
    iVar4 = *(int *)((longlong)param_1 + 0x14);
    if ((iVar4 < 0) && (iVar4 = (int)plVar1[1] + -1, (int)plVar1[1] == 0)) {
      iVar4 = 0;
    }
    uVar5 = (iVar4 - (int)param_1[2]) - extraout_EAX;
    if (0 < (int)uVar5) {
      if (extraout_EAX < 1) {
        uVar7 = 0;
LAB_148abba9b:
        FUN_148abbd5e(param_2,param_1);
        lVar3 = param_1[2];
        *(int *)(param_2 + 2) = (int)lVar3;
        iVar4 = (int)uVar7 + (int)lVar3;
        *(int *)((longlong)param_2 + 0x14) = iVar4;
        *(int *)(param_1 + 2) = iVar4 + extraout_EAX;
        return param_2;
      }
      lVar3 = (longlong)(int)param_1[2] * 2 + *plVar1;
      uVar7 = 0;
      do {
        lVar6 = 0;
        while (*(wchar_t *)(lVar3 + lVar6 * 2) == param_3[lVar6]) {
          lVar6 = lVar6 + 1;
          if (extraout_EAX == (int)lVar6) goto LAB_148abba9b;
        }
        uVar7 = uVar7 + 1;
        lVar3 = lVar3 + 2;
      } while (uVar7 != uVar5);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0xffffffff00000000;
  return param_2;
}



// FUNCTION 148abbabc FUN_148abbabc body=158 status=ok
// SIG undefined FUN_148abbabc(void)

undefined8 * FUN_148abbabc(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  void *_Src;
  longlong lVar2;
  int iVar3;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar2 = (longlong)(int)param_1[2];
    iVar3 = *(int *)((longlong)param_1 + 0x14);
    if (lVar2 < 0) {
      if (iVar3 < 0) {
        *param_2 = 0;
        iVar3 = (int)plVar1[1];
        _Src = (void *)*plVar1;
        *(int *)(param_2 + 1) = iVar3;
        if ((longlong)iVar3 != 0) {
          FUN_1446dd670(param_2,iVar3,0);
          memcpy((void *)*param_2,_Src,(longlong)iVar3 * 2);
          return param_2;
        }
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        return param_2;
      }
      lVar2 = lVar2 * 2 + *plVar1;
    }
    else {
      lVar2 = lVar2 * 2 + *plVar1;
      if ((iVar3 < 0) && (iVar3 = (int)plVar1[1] + -1, (int)plVar1[1] == 0)) {
        iVar3 = 0;
      }
    }
    FUN_1400089be(param_2,iVar3 - (int)param_1[2],lVar2);
  }
  return param_2;
}



// FUNCTION 148abbb5a FUN_148abbb5a body=56 status=ok
// SIG undefined FUN_148abbb5a(void)

void FUN_148abbb5a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000148abbb87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148abbb92 FUN_148abbb92 body=147 status=ok
// SIG undefined FUN_148abbb92(void)

ulonglong FUN_148abbb92(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined7 uVar6;
  
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (*(char *)(param_1 + 0x28) == '\0') {
    iVar4 = (int)param_2[1];
    if (iVar4 == *(int *)(param_1 + 0x20)) {
      if (iVar4 < 2) goto LAB_148abbba0;
      lVar7 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*param_2 + lVar7);
        uVar3 = (uint)uVar1;
        uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x18) + lVar7);
        uVar8 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148abbbec;
          }
          iVar4 = uVar3 - uVar8;
          goto LAB_148abbc21;
        }
        if (uVar1 == 0) break;
LAB_148abbbec:
        lVar7 = lVar7 + 2;
      }
      iVar4 = 0;
LAB_148abbc21:
      bVar9 = iVar4 == 0;
    }
    else {
      bVar9 = *(int *)(param_1 + 0x20) + iVar4 == 1;
    }
    uVar5 = CONCAT71(uVar6,bVar9);
  }
LAB_148abbba0:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 148abbc26 FUN_148abbc26 body=203 status=ok
// SIG undefined FUN_148abbc26(void)

longlong * FUN_148abbc26(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x100000000;
  lVar4 = FUN_14001cc68(0x10,0x10);
  FUN_140056680(lVar4,param_2);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149f0ebe0;
  plVar5[2] = lVar4;
  *param_1 = lVar4;
  plVar3 = (longlong *)param_1[1];
  if (plVar5 == plVar3) {
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) {
      return param_1;
    }
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar5;
  }
  else {
    param_1[1] = (longlong)plVar5;
    if (plVar3 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) {
      return param_1;
    }
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return param_1;
}



// FUNCTION 148abbcf2 FUN_148abbcf2 body=108 status=ok
// SIG undefined FUN_148abbcf2(void)

longlong FUN_148abbcf2(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar2 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb8);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & (uint)param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x78) + (longlong)iVar3 * 0x20;
        if (*(byte *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar3 * 0x20) == param_2)
        goto LAB_148abbd02;
        iVar3 = *(int *)(lVar2 + 0x18);
      } while (iVar3 != -1);
    }
  }
  lVar2 = 0;
LAB_148abbd02:
  lVar1 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 148abbd5e FUN_148abbd5e body=125 status=ok
// SIG undefined FUN_148abbd5e(void)

undefined8 * FUN_148abbd5e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    *param_1 = uVar3;
    param_1[1] = 0;
  }
  else {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    plVar5 = (longlong *)param_1[1];
    *param_1 = uVar3;
    param_1[1] = lVar4;
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
  }
  return param_1;
}



// FUNCTION 148abbddc FUN_148abbddc body=129 status=ok
// SIG undefined FUN_148abbddc(void)

void FUN_148abbddc(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1410908dc(param_2,&local_28,0);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1408cdca6(param_1,7,puVar1);
  FUN_1447f69b6(param_1 + 0x10);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148abbe5e FUN_148abbe5e body=522 status=ok
// SIG undefined FUN_148abbe5e(void)

void FUN_148abbe5e(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined **local_100 [18];
  undefined8 local_70;
  int **local_68;
  undefined8 local_60;
  int *local_58;
  undefined8 uStack_50;
  int *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar6 = FUN_1400dbadc();
  plVar7 = (longlong *)FUN_1415bdc84(uVar6);
  if (*(int *)(param_1 + 1) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_1;
  }
  cVar4 = (**(code **)(*plVar7 + 0x78))(plVar7,puVar8);
  if (cVar4 == '\0') goto LAB_148abbf94;
  local_48 = (int *)0x0;
  uStack_40 = 0;
  local_58 = (int *)0x0;
  uStack_50 = 0;
  if (*(int *)(param_1 + 1) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_1;
  }
  FUN_14158b496(&local_48,puVar8,0);
  uVar6 = uStack_40;
  if (((int)uStack_40 < 4) || (*local_48 != -0x1123f22)) {
    iVar5 = (int)uStack_40 + -4;
    iVar1 = *(int *)((longlong)local_48 + (longlong)iVar5);
    FUN_144a5eaa2(&local_58,iVar1,1);
    piVar3 = local_48;
    piVar2 = local_58;
    FUN_1401a700c(local_100,0x105);
    local_108 = 0;
    local_110 = 0;
    local_118 = (longlong)iVar5;
    cVar4 = FUN_140aa9920((ulonglong)local_100[0] & 0xffffffff,piVar2,(longlong)iVar1,piVar3);
    if (cVar4 != '\0') goto LAB_148abbfe7;
  }
  else {
    local_58 = local_48;
    local_48 = (int *)0x0;
    uStack_40 = 0;
    uStack_50 = uVar6;
LAB_148abbfe7:
    memset(local_100,0,0x90);
    FUN_144869430(local_100);
    local_70 = 0;
    local_100[0] = &PTR_FUN_149e1e050;
    local_68 = &local_58;
    local_60 = 0x7fffffffffffffff;
    FUN_140996f94(local_100,1);
    (*(code *)local_100[0][0x1e])(local_100,0);
    FUN_148abc791(local_100,param_2);
    FUN_144a7fc42(local_100);
  }
  if (local_58 != (int *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (int *)0x0) {
    FUN_1400020a8();
  }
LAB_148abbf94:
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abc069 FUN_148abc069 body=474 status=ok
// SIG undefined FUN_148abc069(void)

longlong FUN_148abc069(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  longlong local_60;
  longlong lStack_58;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  byte local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
     (lVar3 = FUN_145bddc86(param_1), lVar3 != 0)) {
    FUN_148abc244(&local_41,lVar3);
    if (local_41 == 0) {
      if (param_3 != 0) {
        lVar1 = *(longlong *)(param_1 + 0x28);
        if ((*(int *)(lVar1 + 0x38) < *(int *)(param_3 + 0x38)) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(param_3 + 0x38) * 8) !=
            param_3 + 0x30)) {
          if (lVar1 == 0) {
            lStack_58 = 0;
          }
          else {
            lStack_58 = *(longlong *)(lVar1 + 0x50);
          }
          local_50 = 0xffffffff;
          uStack_4c = 0x101;
          uStack_4a = 0;
          local_60 = lVar1;
          FUN_1417ba192(&local_60);
          local_68 = CONCAT17(uStack_49,CONCAT16(uStack_4a,CONCAT24(uStack_4c,local_50)));
          local_78 = local_60;
          lStack_70 = lStack_58;
          local_98 = 0;
          lStack_90 = 0;
          local_88 = 0xffffffff;
          local_84 = 0x101;
          local_82 = 0;
          FUN_1417ba192(&local_98);
          bVar2 = true;
          if (lStack_70 != lStack_90) {
            do {
              lVar1 = lStack_70;
              if ((lStack_70 != 0) && (lVar4 = *(longlong *)(lStack_70 + 0x70), lVar4 != 0)) {
                if ((*(int *)(lVar4 + 0x38) < *(int *)(param_3 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(param_3 + 0x38) * 8) !=
                    param_3 + 0x30)) {
                  lVar4 = FUN_1463c232a();
                  if ((*(longlong *)(lVar1 + 0x70) != lVar4) ||
                     (puVar5 = (undefined8 *)(*(int *)(lVar1 + 0x44) + lVar3),
                     puVar5 == (undefined8 *)0x0)) goto LAB_148abc1e9;
                  lVar3 = FUN_148abc069(*puVar5,puVar5[1],param_3);
                }
                else {
                  lVar3 = lVar3 + *(int *)(lStack_70 + 0x44);
                }
                bVar2 = false;
                break;
              }
LAB_148abc1e9:
              lStack_70 = *(longlong *)(lStack_70 + 0x18);
              FUN_1417ba192(&local_78);
            } while (lStack_70 != lStack_90);
          }
          goto LAB_148abc0f5;
        }
      }
      bVar2 = false;
    }
    else {
      bVar2 = false;
      lVar3 = 0;
    }
LAB_148abc0f5:
    if ((local_41 & 1) == 0) {
      DAT_14cb98620 = DAT_14cb98620 + -1;
    }
    if (!bVar2) goto LAB_148abc09a;
  }
  lVar3 = 0;
LAB_148abc09a:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 148abc244 FUN_148abc244 body=118 status=ok
// SIG undefined FUN_148abc244(void)

undefined1 * FUN_148abc244(undefined1 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  iVar1 = DAT_14cb98620;
  lVar3 = (longlong)(int)DAT_14cb98620;
  if (0 < lVar3) {
    lVar2 = 0;
    do {
      if (*(longlong *)(DAT_14cb98618 + lVar2) == param_2) {
        *param_1 = 1;
        return param_1;
      }
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 - lVar2 != 0);
  }
  DAT_14cb98620 = DAT_14cb98620 + 1;
  if (DAT_14cb98624 < DAT_14cb98620) {
    FUN_1456bd870(&DAT_14cb98618,iVar1);
  }
  *(longlong *)(DAT_14cb98618 + lVar3 * 8) = param_2;
  return param_1;
}



// FUNCTION 148abc2ba FUN_148abc2ba body=107 status=ok
// SIG undefined FUN_148abc2ba(void)

undefined8 * FUN_148abc2ba(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    iVar3 = *(int *)((longlong)param_1 + 0x14);
    if ((iVar3 < 0) && (iVar1 = *(int *)(*param_1 + 8), iVar3 = iVar1 + -1, iVar1 == 0)) {
      iVar3 = 0;
    }
    if (param_3 < iVar3 - (int)param_1[2]) {
      FUN_148abbd5e(param_2,param_1);
      lVar2 = param_1[2];
      *(int *)(param_2 + 2) = (int)lVar2;
      param_3 = param_3 + (int)lVar2;
      *(int *)((longlong)param_2 + 0x14) = param_3;
      *(int *)(param_1 + 2) = param_3;
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0xffffffff00000000;
  return param_2;
}



// FUNCTION 148abc325 FUN_148abc325 body=175 status=ok
// SIG undefined FUN_148abc325(void)

void FUN_148abc325(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)DAT_14cb98640 != 0) {
    lVar6 = (longlong)DAT_14cb98640 * 0x50;
    plVar5 = (longlong *)(DAT_14cb98638 + 0x30);
    do {
      iVar1 = *(int *)(plVar5[-6] + 0x38);
      if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          == plVar5[-6] + 0x30)) {
        pcVar2 = (code *)plVar5[-4];
        plVar4 = (longlong *)plVar5[-2];
        if ((longlong *)plVar5[-2] == (longlong *)0x0) {
          plVar4 = plVar5;
        }
        local_38 = param_1;
        uVar3 = (**(code **)(*plVar4 + 8))();
        (*pcVar2)(uVar3,&local_38);
      }
      plVar5 = plVar5 + 10;
      lVar6 = lVar6 + -0x50;
    } while (lVar6 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abc3d5 FUN_148abc3d5 body=150 status=ok
// SIG undefined FUN_148abc3d5(void)

void FUN_148abc3d5(longlong param_1,uint param_2,char param_3,undefined8 *param_4,longlong *param_5)

{
  byte bVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  
  puVar3 = (ulonglong *)*param_5;
  if (param_3 != '\0') {
    puVar3 = (ulonglong *)((longlong)puVar3 + (longlong)*(int *)(param_1 + 0x44));
    *param_5 = (longlong)puVar3;
  }
  bVar1 = *(byte *)(param_1 + 0x70);
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x178))();
  if ((int)param_2 <= (int)puVar3[1]) {
    if ((int)puVar3[1] == 0) {
      lVar2 = 0;
    }
    else {
      if ((bVar1 & 1) == 0) {
        uVar4 = *puVar3;
      }
      else {
        uVar4 = *puVar3;
        if ((uVar4 & 1) != 0) {
          uVar4 = (longlong)puVar3 + ((longlong)uVar4 >> 0x18);
        }
      }
      lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x78) + 0x34) * (ulonglong)param_2 + uVar4;
    }
    *param_5 = lVar2;
    *param_4 = *(undefined8 *)(param_1 + 0x78);
  }
  return;
}



// FUNCTION 148abc46b FUN_148abc46b body=610 status=ok
// SIG undefined FUN_148abc46b(void)

void FUN_148abc46b(longlong param_1,longlong *param_2,int param_3,char param_4,longlong *param_5,
                  longlong *param_6)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = *param_6;
  if (param_4 != '\0') {
    local_80 = local_80 + *(int *)(param_1 + 0x44);
    *param_6 = local_80;
  }
  local_60 = *(undefined1 *)(param_1 + 0x98);
  local_90 = *(undefined8 *)(param_1 + 0x70);
  uStack_88 = *(undefined8 *)(param_1 + 0x78);
  local_78 = *(undefined4 *)(param_1 + 0x80);
  uStack_74 = *(undefined4 *)(param_1 + 0x84);
  uStack_70 = *(undefined4 *)(param_1 + 0x88);
  uStack_6c = *(undefined4 *)(param_1 + 0x8c);
  local_68 = *(undefined8 *)(param_1 + 0x90);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,param_3);
  cVar4 = FUN_1446ec082(&local_90);
  if ((cVar4 != '\0') && (lVar7 = *(longlong *)(param_1 + 0x70), lVar7 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x78);
    FUN_1400021e4(lVar7 + 0x20,&local_58);
    if (local_50 == (int)param_2[1]) {
      bVar10 = true;
      if (1 < local_50) {
        lVar8 = 0;
        while( true ) {
          uVar1 = *(ushort *)((longlong)local_58 + lVar8);
          uVar5 = (uint)uVar1;
          uVar2 = *(ushort *)(*param_2 + lVar8);
          uVar9 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148abc555;
            }
            iVar6 = uVar5 - uVar9;
            goto LAB_148abc6a3;
          }
          if (uVar1 == 0) break;
LAB_148abc555:
          lVar8 = lVar8 + 2;
        }
        iVar6 = 0;
LAB_148abc6a3:
        bVar10 = iVar6 == 0;
      }
    }
    else {
      bVar10 = (int)param_2[1] + local_50 == 1;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar10) {
      *param_5 = lVar7;
      local_58 = &local_90;
      local_50 = param_3;
      lVar7 = FUN_144aff4d2(&local_90);
    }
    else {
      if (lVar3 == 0) {
        FUN_140056680(&local_58,&DAT_149e01fe8);
      }
      else {
        FUN_1400021e4(lVar3 + 0x20,&local_58);
      }
      if (local_50 == (int)param_2[1]) {
        bVar10 = true;
        if (1 < local_50) {
          lVar7 = 0;
          while( true ) {
            uVar1 = *(ushort *)((longlong)local_58 + lVar7);
            uVar5 = (uint)uVar1;
            uVar2 = *(ushort *)(*param_2 + lVar7);
            uVar9 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148abc63c;
              }
              iVar6 = uVar5 - uVar9;
              goto LAB_148abc6c6;
            }
            if (uVar1 == 0) break;
LAB_148abc63c:
            lVar7 = lVar7 + 2;
          }
          iVar6 = 0;
LAB_148abc6c6:
          bVar10 = iVar6 == 0;
        }
      }
      else {
        bVar10 = (int)param_2[1] + local_50 == 1;
      }
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (!bVar10) goto LAB_148abc5bf;
      *param_5 = lVar3;
      local_58 = &local_90;
      local_50 = param_3;
      lVar7 = FUN_1446ec24c(&local_90);
    }
    *param_6 = lVar7;
  }
LAB_148abc5bf:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abc6ce FUN_148abc6ce body=103 status=ok
// SIG undefined FUN_148abc6ce(void)

void FUN_148abc6ce(longlong param_1,uint param_2,char param_3,undefined8 *param_4,longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_5;
  if (param_3 != '\0') {
    plVar4 = (longlong *)((longlong)plVar4 + (longlong)*(int *)(param_1 + 0x44));
    *param_5 = (longlong)plVar4;
  }
  if ((int)param_2 < (int)plVar4[5]) {
    plVar3 = plVar4 + 2;
    if ((longlong *)plVar4[4] != (longlong *)0x0) {
      plVar3 = (longlong *)plVar4[4];
    }
    if ((*(uint *)((longlong)plVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0)
    {
      iVar1 = *(int *)(param_1 + 0x88);
      *param_4 = *(undefined8 *)(param_1 + 0x70);
      if ((int)plVar4[1] == *(int *)((longlong)plVar4 + 0x34)) {
        lVar2 = 0;
      }
      else {
        lVar2 = (longlong)iVar1 * (longlong)(int)param_2 + *plVar4;
      }
      *param_5 = lVar2;
    }
  }
  return;
}



// FUNCTION 148abc736 FUN_148abc736 body=91 status=ok
// SIG undefined FUN_148abc736(void)

longlong FUN_148abc736(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_1446ddbd2();
  cVar3 = FUN_1400164de((longlong *)(param_1 + 0x10),uVar4);
  if (cVar3 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x10);
    while (lVar1 = lVar2, lVar1 != 0) {
      uVar4 = FUN_1446ddbd2();
      cVar3 = FUN_1400164de((longlong *)(lVar1 + 0x10),uVar4);
      if (cVar3 == '\0') {
        return lVar1;
      }
      param_1 = lVar1;
      lVar2 = *(longlong *)(lVar1 + 0x10);
    }
  }
  return param_1;
}



// FUNCTION 148abc791 FUN_148abc791 body=203 status=ok
// SIG undefined FUN_148abc791(void)

void FUN_148abc791(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  ulonglong *puVar3;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  local_20 = 0xfeedc0de;
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (undefined4 *)*puVar3 + 1;
  if ((undefined4 *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_20,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_20);
    }
  }
  else {
    local_20 = *(undefined4 *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar2 = (undefined1 *)*puVar3 + 1;
  if ((undefined1 *)puVar3[1] < puVar2) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_19,1);
  }
  else {
    local_19 = *(undefined1 *)*puVar3;
    *puVar3 = (ulonglong)puVar2;
  }
  FUN_147d11f74(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abc862 FUN_148abc862 body=118 status=ok
// SIG undefined FUN_148abc862(void)

ulonglong FUN_148abc862(longlong *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  longlong *plVar2;
  int extraout_EAX;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  size_t sVar3;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    sVar3 = wcslen(param_2);
    extraout_EAX = (int)sVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x14);
    if ((iVar4 < 0) && (iVar4 = (int)plVar2[1] + -1, (int)plVar2[1] == 0)) {
      iVar4 = 0;
    }
    iVar4 = iVar4 - (int)param_1[2];
    if (extraout_EAX < iVar4) {
      if (extraout_EAX < 1) {
        return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
      }
      lVar6 = 0;
      do {
        wVar1 = param_2[lVar6];
        bVar7 = wVar1 == *(wchar_t *)((longlong)(int)param_1[2] * 2 + *plVar2 + lVar6 * 2);
        uVar5 = (ulonglong)CONCAT11((char)((ushort)wVar1 >> 8),bVar7);
        if (!bVar7) {
          return uVar5;
        }
        iVar4 = (int)lVar6;
        lVar6 = lVar6 + 1;
      } while (extraout_EAX + -1 != iVar4);
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 148abc8d8 FUN_148abc8d8 body=61 status=ok
// SIG undefined FUN_148abc8d8(void)

void FUN_148abc8d8(longlong *param_1)

{
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148abc916 FUN_148abc916 body=31 status=ok
// SIG undefined FUN_148abc916(void)

undefined8 FUN_148abc916(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148abc958 FUN_148abc958 body=93 status=ok
// SIG undefined FUN_148abc958(void)

void FUN_148abc958(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ff180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ff110;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148abc9b6 FUN_148abc9b6 body=126 status=ok
// SIG undefined FUN_148abc9b6(void)

void FUN_148abc9b6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4ff180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ff110;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148abca25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148abca34 FUN_148abca34 body=270 status=ok
// SIG undefined FUN_148abca34(void)

undefined4
FUN_148abca34(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
             longlong *param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0 [24];
  longlong local_88 [2];
  longlong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pcVar3 = *(code **)(param_1 + 0x18);
  local_88[0] = *param_5;
  local_78 = param_5[2];
  param_5[2] = 0;
  local_68 = (undefined4)param_5[4];
  uStack_64 = *(undefined4 *)((longlong)param_5 + 0x24);
  uStack_60 = (undefined4)param_5[5];
  uStack_5c = *(undefined4 *)((longlong)param_5 + 0x2c);
  local_58 = (undefined4)param_5[6];
  uStack_54 = *(undefined4 *)((longlong)param_5 + 0x34);
  uStack_50 = (undefined4)param_5[7];
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0x3c);
  if (local_88[0] != 0) {
    *param_5 = 0;
  }
  FUN_148abbd5e(local_a0,param_4);
  local_a8 = param_6;
  uVar4 = (*pcVar3)(param_2,param_3,local_a0,local_88);
  plVar5 = *(longlong **)(param_4 + 8);
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
  if (*param_5 != 0) {
    plVar5 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abcb44 FUN_148abcb44 body=268 status=ok
// SIG undefined FUN_148abcb44(void)

undefined8
FUN_148abcb44(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
             longlong *param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0 [24];
  longlong local_88 [2];
  longlong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pcVar3 = *(code **)(param_1 + 0x18);
  local_88[0] = *param_5;
  local_78 = param_5[2];
  param_5[2] = 0;
  local_68 = (undefined4)param_5[4];
  uStack_64 = *(undefined4 *)((longlong)param_5 + 0x24);
  uStack_60 = (undefined4)param_5[5];
  uStack_5c = *(undefined4 *)((longlong)param_5 + 0x2c);
  local_58 = (undefined4)param_5[6];
  uStack_54 = *(undefined4 *)((longlong)param_5 + 0x34);
  uStack_50 = (undefined4)param_5[7];
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0x3c);
  if (local_88[0] != 0) {
    *param_5 = 0;
  }
  FUN_148abbd5e(local_a0,param_4);
  local_a8 = param_6;
  (*pcVar3)(param_2,param_3,local_a0,local_88);
  plVar4 = *(longlong **)(param_4 + 8);
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
  if (*param_5 != 0) {
    plVar4 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abcc54 FUN_148abcc54 body=31 status=ok
// SIG undefined FUN_148abcc54(void)

undefined8 FUN_148abcc54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148abcc84 FUN_148abcc84 body=93 status=ok
// SIG undefined FUN_148abcc84(void)

void FUN_148abcc84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ff1f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148abcce2 FUN_148abcce2 body=93 status=ok
// SIG undefined FUN_148abcce2(void)

void FUN_148abcce2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ff1f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148abcd40 FUN_148abcd40 body=126 status=ok
// SIG undefined FUN_148abcd40(void)

void FUN_148abcd40(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca6c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ff1f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148abcdaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148abcdcc FUN_148abcdcc body=31 status=ok
// SIG undefined FUN_148abcdcc(void)

undefined8 FUN_148abcdcc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148abcdfc FUN_148abcdfc body=93 status=ok
// SIG undefined FUN_148abcdfc(void)

void FUN_148abcdfc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ff260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148abce5a FUN_148abce5a body=93 status=ok
// SIG undefined FUN_148abce5a(void)

void FUN_148abce5a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ff260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148abceb8 FUN_148abceb8 body=126 status=ok
// SIG undefined FUN_148abceb8(void)

void FUN_148abceb8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ff260;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148abcf27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148abcf44 FUN_148abcf44 body=31 status=ok
// SIG undefined FUN_148abcf44(void)

undefined8 FUN_148abcf44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148abcf80 FUN_148abcf80 body=93 status=ok
// SIG undefined FUN_148abcf80(void)

void FUN_148abcf80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1621d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ff2d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148abcfde FUN_148abcfde body=126 status=ok
// SIG undefined FUN_148abcfde(void)

void FUN_148abcfde(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1621d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ff2d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148abd04d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148abd06a FUN_148abd06a body=21 status=ok
// SIG undefined FUN_148abd06a(void)

undefined8 FUN_148abd06a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148abd080 FUN_148abd080 body=114 status=ok
// SIG undefined FUN_148abd080(void)

void FUN_148abd080(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 148abd0f2 FUN_148abd0f2 body=114 status=ok
// SIG undefined FUN_148abd0f2(void)

void FUN_148abd0f2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 148abd164 FUN_148abd164 body=61 status=ok
// SIG undefined FUN_148abd164(void)

void FUN_148abd164(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148abd1a2 FUN_148abd1a2 body=147 status=ok
// SIG undefined FUN_148abd1a2(void)

void FUN_148abd1a2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148abd236 FUN_148abd236 body=203 status=ok
// SIG undefined FUN_148abd236(void)

int FUN_148abd236(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_148abd280:
      lVar10 = (longlong)iVar1 * 0x40;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_148abd2f6;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_148abd2f6;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_148abd2e7;
    }
  }
  return -1;
LAB_148abd2f6:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_148abd2e7:
  iVar1 = *(int *)(lVar4 + 0x38 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_148abd280;
}



// FUNCTION 148abd302 FUN_148abd302 body=110 status=ok
// SIG undefined FUN_148abd302(void)

void FUN_148abd302(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_145dc1ddc(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_148abd4b4(param_1);
    return;
  }
  FUN_148abd370(param_1);
  FUN_145dc1ddc(param_1,param_2);
  return;
}



// FUNCTION 148abd370 FUN_148abd370 body=322 status=ok
// SIG undefined FUN_148abd370(void)

void FUN_148abd370(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148abd4b4 FUN_148abd4b4 body=476 status=ok
// SIG undefined FUN_148abd4b4(void)

void FUN_148abd4b4(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x40;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x3c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abd692 FUN_148abd692 body=319 status=ok
// SIG undefined FUN_148abd692(void)

undefined4 * FUN_148abd692(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148abd7d2(param_1,local_48);
  FUN_148abd93c(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 7) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_148abd8b8(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x3c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 7) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148abd4b4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abd7d2 FUN_148abd7d2 body=229 status=ok
// SIG undefined FUN_148abd7d2(void)

int * FUN_148abd7d2(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1406cd6a8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 148abd8b8 FUN_148abd8b8 body=131 status=ok
// SIG undefined FUN_148abd8b8(void)

undefined8 FUN_148abd8b8(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar15 = FUN_148abd236(), iVar15 != -1)) {
    lVar2 = *param_1;
    lVar16 = (longlong)iVar15 * 0x40;
    FUN_148abc8d8(lVar2 + lVar16);
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    uVar11 = param_3[8];
    uVar12 = param_3[9];
    uVar13 = param_3[10];
    uVar14 = param_3[0xb];
    *(undefined8 *)(lVar2 + 0x30 + lVar16) = *(undefined8 *)(param_3 + 0xc);
    puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar16);
    *puVar1 = uVar11;
    puVar1[1] = uVar12;
    puVar1[2] = uVar13;
    puVar1[3] = uVar14;
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar16);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar16);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_148abda4e(param_1,*param_4);
    *param_4 = iVar15;
    return 1;
  }
  return 0;
}



// FUNCTION 148abd93c FUN_148abd93c body=101 status=ok
// SIG undefined FUN_148abd93c(void)

undefined8 * FUN_148abd93c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_148abd9a2(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 148abd9a2 FUN_148abd9a2 body=172 status=ok
// SIG undefined FUN_148abd9a2(void)

undefined2 * FUN_148abd9a2(undefined2 *param_1,undefined2 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_2 + 8);
  pvVar2 = *(void **)(param_2 + 4);
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 10) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = *(void **)(param_2 + 0xc);
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy(*(void **)(param_1 + 0xc),pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148abda4e FUN_148abda4e body=114 status=ok
// SIG undefined FUN_148abda4e(void)

void FUN_148abda4e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 148abdad0 FUN_148abdad0 body=31 status=ok
// SIG undefined FUN_148abdad0(void)

undefined8 FUN_148abdad0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148abdb0c FUN_148abdb0c body=93 status=ok
// SIG undefined FUN_148abdb0c(void)

void FUN_148abdb0c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ff3d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148abdb6a FUN_148abdb6a body=126 status=ok
// SIG undefined FUN_148abdb6a(void)

void FUN_148abdb6a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ff3d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148abdbd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148abdbe8 FUN_148abdbe8 body=21 status=ok
// SIG undefined FUN_148abdbe8(void)

undefined8 FUN_148abdbe8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148abdbfe FUN_148abdbfe body=45 status=ok
// SIG undefined FUN_148abdbfe(void)

longlong FUN_148abdbfe(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145dc1986(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148abdc50 FUN_148abdc50 body=61 status=ok
// SIG undefined FUN_148abdc50(void)

void FUN_148abdc50(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1447cd2ec(param_1,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abdc96 FUN_148abdc96 body=155 status=ok
// SIG undefined FUN_148abdc96(void)

void FUN_148abdc96(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_148abfe86();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abdd32 FUN_148abdd32 body=155 status=ok
// SIG undefined FUN_148abdd32(void)

void FUN_148abdd32(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_148abfdce();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abddce FUN_148abddce body=155 status=ok
// SIG undefined FUN_148abddce(void)

void FUN_148abddce(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_148abfd16();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abde6a FUN_148abde6a body=148 status=ok
// SIG undefined FUN_148abde6a(void)

void FUN_148abde6a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148abfcf6(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abdf1a FUN_148abdf1a body=37 status=ok
// SIG undefined FUN_148abdf1a(void)

void FUN_148abdf1a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148abfc70();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148abdf44 FUN_148abdf44 body=37 status=ok
// SIG undefined FUN_148abdf44(void)

void FUN_148abdf44(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148abfc1e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148abdf6e FUN_148abdf6e body=37 status=ok
// SIG undefined FUN_148abdf6e(void)

void FUN_148abdf6e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148abfc2e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148abdf94 FUN_148abdf94 body=146 status=ok
// SIG undefined FUN_148abdf94(void)

void FUN_148abdf94(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148abfc8a(local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abe028 FUN_148abe028 body=155 status=ok
// SIG undefined FUN_148abe028(void)

void FUN_148abe028(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_148abfedc();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abe0c4 FUN_148abe0c4 body=155 status=ok
// SIG undefined FUN_148abe0c4(void)

void FUN_148abe0c4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_148abfe24();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abe160 FUN_148abe160 body=155 status=ok
// SIG undefined FUN_148abe160(void)

void FUN_148abe160(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_148abfd6c();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abe200 FUN_148abe200 body=150 status=ok
// SIG undefined FUN_148abe200(void)

void FUN_148abe200(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148abfc58(local_14 != 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abe298 FUN_148abe298 body=148 status=ok
// SIG undefined FUN_148abe298(void)

void FUN_148abe298(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148abfd06(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abe34c FUN_148abe34c body=45 status=ok
// SIG undefined FUN_148abe34c(void)

longlong FUN_148abe34c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_146178e12(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148abe382 FUN_148abe382 body=74 status=ok
// SIG undefined FUN_148abe382(void)

void FUN_148abe382(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144a13f80(param_1 + 0x240,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abe3ce FUN_148abe3ce body=215 status=ok
// SIG undefined FUN_148abe3ce(void)

void FUN_148abe3ce(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1414fb874(param_1,*(undefined4 *)(param_1 + 0x178));
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x5a0) & 2) == 0)) {
    if (*(char *)(param_1 + 0x17f) == '\x01') {
      local_20 = DAT_14cb987a8;
      uVar2 = 0;
      FUN_144a13f80(param_1 + 0x240,local_24,&local_20,0);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
    if (*(char *)(param_1 + 0x17f) == '\0') {
      local_20 = DAT_14cb987a8;
      FUN_144a13f80(param_1 + 0x1f0,local_24,&local_20,0);
      FUN_144a8b5fe(param_1 + 0x240,local_20);
      uVar2 = 1;
      FUN_14571a8e6(param_1,1);
    }
  }
  *(undefined1 *)(param_1 + 0x17f) = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abe4a6 FUN_148abe4a6 body=177 status=ok
// SIG undefined FUN_148abe4a6(void)

void FUN_148abe4a6(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
    lVar1 = param_1 + 0x1f0;
    if (*(longlong *)(param_1 + 0x1f8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x1f8);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x200) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x1b8) + (longlong)iVar2 * 0x60;
        if (*(uint *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar2 * 0x60) == param_2)
        goto LAB_148abe4d0;
        iVar2 = *(int *)(lVar1 + 0x58);
      } while (iVar2 != -1);
    }
  }
  lVar1 = 0;
LAB_148abe4d0:
  FUN_14482b35e(lVar1 + 8,local_1c,param_3,0);
  FUN_143f60b98(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148abe55c FUN_148abe55c body=94 status=ok
// SIG undefined FUN_148abe55c(void)

undefined1 * FUN_148abe55c(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(longlong **)(param_1 + 0x270) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x78))();
    uVar2 = 1;
    if (cVar1 != '\0') goto LAB_148abe57f;
  }
  uVar2 = 0;
LAB_148abe57f:
  *param_2 = uVar2;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 148abe5ba FUN_148abe5ba body=94 status=ok
// SIG undefined FUN_148abe5ba(void)

undefined1 * FUN_148abe5ba(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(longlong **)(param_1 + 0x270) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x78))();
    uVar2 = 1;
    if (cVar1 != '\0') goto LAB_148abe5dd;
  }
  uVar2 = 0;
LAB_148abe5dd:
  *param_2 = uVar2;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 148abe618 FUN_148abe618 body=94 status=ok
// SIG undefined FUN_148abe618(void)

undefined1 * FUN_148abe618(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(longlong **)(param_1 + 0x270) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x78))();
    uVar2 = 1;
    if (cVar1 != '\0') goto LAB_148abe63b;
  }
  uVar2 = 0;
LAB_148abe63b:
  *param_2 = uVar2;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 148abe676 FUN_148abe676 body=94 status=ok
// SIG undefined FUN_148abe676(void)

undefined1 * FUN_148abe676(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(longlong **)(param_1 + 0x270) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x78))();
    uVar2 = 1;
    if (cVar1 != '\0') goto LAB_148abe699;
  }
  uVar2 = 0;
LAB_148abe699:
  *param_2 = uVar2;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 148abe6d4 FUN_148abe6d4 body=94 status=ok
// SIG undefined FUN_148abe6d4(void)

undefined1 * FUN_148abe6d4(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(longlong **)(param_1 + 0x270) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x78))();
    uVar2 = 1;
    if (cVar1 != '\0') goto LAB_148abe6f7;
  }
  uVar2 = 0;
LAB_148abe6f7:
  *param_2 = uVar2;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 148abe732 FUN_148abe732 body=94 status=ok
// SIG undefined FUN_148abe732(void)

undefined1 * FUN_148abe732(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(longlong **)(param_1 + 0x270) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x78))();
    uVar2 = 1;
    if (cVar1 != '\0') goto LAB_148abe755;
  }
  uVar2 = 0;
LAB_148abe755:
  *param_2 = uVar2;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 148abe790 FUN_148abe790 body=134 status=ok
// SIG undefined FUN_148abe790(void)

void FUN_148abe790(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x278);
  *(undefined8 *)(param_1 + 0x270) = uVar3;
  *(longlong *)(param_1 + 0x278) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x000148abe812. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148abe816 FUN_148abe816 body=426 status=ok
// SIG undefined FUN_148abe816(void)

longlong *
FUN_148abe816(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78;
  int local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1400b22c2(local_68,&DAT_149e02088);
  FUN_1400b22c2(local_58,&DAT_149e02088);
  FUN_144a787a6(local_68,&DAT_14cb98820);
  FUN_144a787a6(local_58,param_4);
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_148ac3046(param_1,0);
  FUN_148ac3b0c(*param_1,local_68);
  FUN_140b6e409(&local_78,param_2,param_3);
  if (((param_5 != 0) && (1 < local_70)) && (1 < *(int *)(param_5 + 8))) {
    FUN_1400b22c2(local_98,&DAT_149e02088);
    FUN_1400b22c2(local_88,&DAT_149e02088);
    FUN_144a787a6(local_88,param_5);
    FUN_144a787a6(local_98,param_6);
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_148ac3046(param_1,iVar1);
    }
    FUN_148ac3b0c((longlong)iVar1 * 0x20 + *param_1,local_98);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abe9c1 FUN_148abe9c1 body=2452 status=ok
// SIG undefined FUN_148abe9c1(void)

undefined8 *
FUN_148abe9c1(undefined8 *param_1,longlong param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5,char *param_6,undefined8 param_7,undefined8 param_8,char param_9,
             undefined8 *param_10,undefined8 *param_11)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  void *pvVar7;
  int iVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined2 *puVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  uint local_c4;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  wchar_t *local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  longlong local_78 [2];
  void *local_68;
  int local_60;
  wchar_t *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c4 = param_3;
  FUN_148abf356();
  FUN_144a787a6(param_1,param_4);
  FUN_144a787a6(param_1 + 7,&DAT_14cb98820);
  FUN_1400b22c2(&local_68,&DAT_149e02088);
  FUN_144a787a6(&local_68,&DAT_14cb98820);
  iVar12 = *(int *)(param_1 + 10);
  *(uint *)(param_1 + 10) = iVar12 + 1U;
  if (*(uint *)((longlong)param_1 + 0x54) < iVar12 + 1U) {
    FUN_148ac295c(param_1 + 9,iVar12);
  }
  pvVar7 = local_68;
  lVar18 = param_1[9];
  lVar16 = (longlong)iVar12 * 0x10;
  puVar3 = (undefined8 *)(lVar18 + lVar16);
  *(undefined8 *)(lVar18 + lVar16) = 0;
  *(int *)(lVar18 + 8 + lVar16) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar3,local_60,0);
    memcpy((void *)*puVar3,pvVar7,(longlong)local_60 * 2);
  }
  *(bool *)(param_1 + 0xb) = *param_6 == '\0';
  FUN_1400b22c2(&local_88,&DAT_149e02088);
  if ((wchar_t **)(param_1 + 0xc) == &local_88) {
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0xc] != 0) {
      FUN_1400020a8();
    }
    param_1[0xc] = local_88;
    local_88 = (wchar_t *)0x0;
    *(uint *)(param_1 + 0xd) = uStack_80;
    *(undefined4 *)((longlong)param_1 + 0x6c) = uStack_7c;
  }
  *(undefined2 *)(param_1 + 0x12) = 0;
  plVar6 = param_1 + 0xe;
  local_d0 = param_8;
  local_d8 = param_7;
  FUN_148abe816(&local_88,param_2,param_4,param_5);
  if ((longlong)(int)uStack_80 != 0) {
    iVar12 = *(int *)(param_1 + 0xf);
    *(uint *)(param_1 + 0xf) = uStack_80 + iVar12;
    if ((uint)(*(int *)((longlong)param_1 + 0x7c) - iVar12) < uStack_80) {
      FUN_148ac3046(plVar6,iVar12);
    }
    memmove((void *)((longlong)iVar12 * 0x20 + *plVar6),local_88,(longlong)(int)uStack_80 << 5);
    uStack_80 = 0;
  }
  FUN_148ac3164(local_88,0);
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (param_9 == '\0') {
    cVar4 = *param_6;
    if (cVar4 == '\0') {
      FUN_1400b22c2(&local_88,&DAT_149e02088);
      FUN_1400b22c2(local_78,&DAT_149e02088);
      FUN_1400b22c2(&local_58,&DAT_14b50172a);
      if (local_88 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_88 = local_58;
      uStack_80 = uStack_50;
      uStack_7c = uStack_4c;
      local_58 = L"Send_Friend_Request_Title";
      uStack_50 = 0x19;
      FUN_1446e940c(local_8c,&local_58);
      local_58 = L"ShiftUI";
      uStack_50 = 7;
      FUN_1446e940c(local_90,&local_58);
      pwVar17 = L"Friend Request Sent";
    }
    else {
      if (cVar4 != '\x01') {
        if (cVar4 != '\x02') goto LAB_148abec04;
        local_a0 = *param_11;
        local_98 = param_11[1];
        if (local_98 != 0) {
          LOCK();
          *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
          UNLOCK();
        }
        local_b0 = *param_10;
        local_a8 = param_10[1];
        if (local_a8 != 0) {
          LOCK();
          *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
          UNLOCK();
        }
        local_c0 = (void *)0x0;
        local_b8 = *(int *)(param_4 + 1);
        lVar18 = (longlong)local_b8;
        pvVar7 = (void *)*param_4;
        if (lVar18 == 0) {
          local_b4 = 0;
        }
        else {
          FUN_1446dd670(&local_c0,local_b8,0);
          memcpy(local_c0,pvVar7,lVar18 * 2);
        }
        uVar10 = FUN_143f5e48c(&local_c0,&local_b0,&local_a0);
        *(undefined1 *)(param_1 + 6) = uVar10;
        FUN_1400b22c2(&local_88,&DAT_149e02088);
        FUN_1400b22c2(local_78,&DAT_149e02088);
        if (*(char *)(param_1 + 6) == '\x01') {
          FUN_144a787a6(&local_88,&DAT_14cb98830);
          local_58 = L"Status_Online";
          uStack_50 = 0xd;
          FUN_1446e940c(local_8c,&local_58);
          local_58 = L"ShiftUI";
          uStack_50 = 7;
          FUN_1446e940c(local_90,&local_58);
          pwVar17 = L"Online";
        }
        else {
          FUN_144a787a6(&local_88,&DAT_14cb98840);
          local_58 = L"Status_Offline";
          uStack_50 = 0xe;
          FUN_1446e940c(local_8c,&local_58);
          local_58 = L"ShiftUI";
          uStack_50 = 7;
          FUN_1446e940c(local_90,&local_58);
          pwVar17 = L"Offline";
        }
        FUN_140208bae(&local_58,local_90,local_8c,pwVar17);
        uVar13 = FUN_1447a1f4a(&local_58);
        FUN_144a787a6(local_78,uVar13);
        if (local_58 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_58 + 0x10))();
        }
        uVar9 = local_c4;
        iVar12 = *(int *)(param_1 + 0xf);
        *(uint *)(param_1 + 0xf) = iVar12 + 1U;
        if (*(uint *)((longlong)param_1 + 0x7c) < iVar12 + 1U) {
          FUN_148ac3046(plVar6,iVar12);
        }
        FUN_148ac3b0c((longlong)iVar12 * 0x20 + *plVar6,&local_88);
        uVar5 = *(uint *)(param_2 + 0x110);
        if (DAT_14cb988c0 != DAT_14cb988ec) {
          puVar14 = &DAT_14cb988f0;
          if (DAT_14cb988f8 != (undefined *)0x0) {
            puVar14 = DAT_14cb988f8;
          }
          iVar12 = *(int *)(puVar14 + (ulonglong)(DAT_14cb98900 - 1U & uVar9) * 4);
          while (iVar12 != -1) {
            lVar18 = DAT_14cb988b8 + (longlong)iVar12 * 0x60;
            if (*(uint *)(DAT_14cb988b8 + (longlong)iVar12 * 0x60) == uVar9) {
              if (((longlong *)(lVar18 + 8) != (longlong *)0x0 && lVar18 != 0) &&
                 (*(int *)(lVar18 + 0x10) != *(int *)(lVar18 + 0x3c))) {
                lVar16 = lVar18 + 0x40;
                if (*(longlong *)(lVar18 + 0x48) != 0) {
                  lVar16 = *(longlong *)(lVar18 + 0x48);
                }
                iVar12 = *(int *)(lVar16 + (ulonglong)(*(int *)(lVar18 + 0x50) - 1U & uVar5) * 4);
                if (iVar12 != -1) {
                  lVar18 = *(longlong *)(lVar18 + 8);
                  goto LAB_148abf2de;
                }
              }
              break;
            }
            iVar12 = *(int *)(lVar18 + 0x58);
          }
        }
        goto LAB_148abf1ed;
      }
      FUN_1400b22c2(&local_88,&DAT_149e02088);
      FUN_1400b22c2(local_78,&DAT_149e02088);
      FUN_1400b22c2(&local_58,"received");
      if (local_88 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_88 = local_58;
      uStack_80 = uStack_50;
      uStack_7c = uStack_4c;
      local_58 = L"Received_Friend_Request";
      uStack_50 = 0x17;
      FUN_1446e940c(local_8c,&local_58);
      local_58 = L"ShiftUI";
      uStack_50 = 7;
      FUN_1446e940c(local_90,&local_58);
      pwVar17 = L"Friend Request Received";
    }
    FUN_140208bae(&local_58,local_90,local_8c,pwVar17);
    uVar13 = FUN_1447a1f4a(&local_58);
    FUN_144a787a6(local_78,uVar13);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    iVar12 = *(int *)(param_1 + 0xf);
    *(uint *)(param_1 + 0xf) = iVar12 + 1U;
    if (*(uint *)((longlong)param_1 + 0x7c) < iVar12 + 1U) {
      FUN_148ac3046(plVar6,iVar12);
    }
    FUN_148ac3b0c((longlong)iVar12 * 0x20 + *plVar6,&local_88);
  }
  else {
    FUN_1400b22c2(&local_88,&DAT_149e02088);
    FUN_1400b22c2(local_78,&DAT_149e02088);
    FUN_1400b22c2(&local_58,&DAT_14a1c15c3);
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_88 = local_58;
    uStack_80 = uStack_50;
    uStack_7c = uStack_4c;
    local_58 = L"Game_Invite_Request";
    uStack_50 = 0x13;
    FUN_1446e940c(local_8c,&local_58);
    local_58 = L"ShiftUI";
    uStack_50 = 7;
    FUN_1446e940c(local_90,&local_58);
    FUN_140208bae(&local_58,local_90,local_8c,L"Invite Request Received");
    uVar13 = FUN_1447a1f4a(&local_58);
    FUN_144a787a6(local_78,uVar13);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    iVar12 = *(int *)(param_1 + 0xf);
    *(uint *)(param_1 + 0xf) = iVar12 + 1U;
    if (*(uint *)((longlong)param_1 + 0x7c) < iVar12 + 1U) {
      FUN_148ac3046(plVar6,iVar12);
    }
    FUN_148ac3b0c((longlong)iVar12 * 0x20 + param_1[0xe],&local_88);
    FUN_1400b22c2(&local_58,"game_invite");
    if ((wchar_t **)(param_1 + 4) == &local_58) {
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[4] != 0) {
        FUN_1400020a8();
      }
      param_1[4] = local_58;
      local_58 = (wchar_t *)0x0;
      *(uint *)(param_1 + 5) = uStack_50;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_4c;
    }
  }
  goto LAB_148abf205;
  while (iVar12 = *(int *)(lVar16 + 0x58), iVar12 != -1) {
LAB_148abf2de:
    lVar16 = lVar18 + (longlong)iVar12 * 0x60;
    if (*(uint *)(lVar18 + (longlong)iVar12 * 0x60) == uVar5) {
      if (lVar16 + 8 != 0 && lVar16 != 0) {
        iVar12 = *(int *)(param_1 + 1);
        if (iVar12 == 0) {
          puVar15 = &DAT_149dfb77a;
        }
        else {
          puVar15 = (undefined2 *)*param_1;
        }
        iVar8 = iVar12 + -1;
        if (iVar12 == 0) {
          iVar8 = 0;
        }
        uVar11 = FUN_144a49b4a(iVar8,puVar15);
        iVar12 = FUN_1456cf568(lVar16 + 8,uVar11,param_1);
        if (iVar12 != -1) {
          *(undefined1 *)(param_1 + 0x12) = 1;
        }
      }
      break;
    }
  }
LAB_148abf1ed:
  *(bool *)((longlong)param_1 + 0x91) = uVar5 != 0;
  *(undefined1 *)((longlong)param_1 + 0x92) = 1;
LAB_148abf205:
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_148abec04:
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar6 = (longlong *)param_10[1];
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
  plVar6 = (longlong *)param_11[1];
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
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abf356 FUN_148abf356 body=171 status=ok
// SIG undefined FUN_148abf356(void)

longlong FUN_148abf356(longlong param_1)

{
  FUN_1400b22c2(param_1,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x10,&DAT_149e02088);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_1400b22c2(param_1 + 0x38,&DAT_149e02088);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  FUN_1400b22c2(param_1 + 0x60,"Mar 12 2012 10:00:00 AM");
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_1400b22c2(param_1 + 0x80,&DAT_149e02088);
  *(undefined2 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 2;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  return param_1;
}



// FUNCTION 148abf402 FUN_148abf402 body=192 status=ok
// SIG undefined FUN_148abf402(void)

void FUN_148abf402(longlong *param_1)

{
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_148ac3164(param_1[0xe],(int)param_1[0xf]);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_148ac2a7a(param_1[9],(int)param_1[10]);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148abf4ce FUN_148abf4ce body=102 status=ok
// SIG undefined FUN_148abf4ce(void)

void FUN_148abf4ce(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar1 + 0x50))(plVar1,"Load_Friends_List_Response",2);
  FUN_1461bcd98(plVar1,param_2);
  (**(code **)(*plVar1 + 0x140))(plVar1,*param_3);
                    /* WARNING: Could not recover jumptable at 0x000148abf530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1);
  return;
}



// FUNCTION 148abf534 FUN_148abf534 body=106 status=ok
// SIG undefined FUN_148abf534(void)

void FUN_148abf534(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    FUN_143f5e396(param_3,plVar1);
    (**(code **)(*plVar1 + 0x48))(plVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x000148abf591. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148abf59e FUN_148abf59e body=104 status=ok
// SIG undefined FUN_148abf59e(void)

void FUN_148abf59e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,"Search_Users_Response",1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    FUN_143f5df18(param_2,plVar1);
    (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000148abf5fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148abf606 FUN_148abf606 body=121 status=ok
// SIG undefined FUN_148abf606(void)

void FUN_148abf606(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145c69d66(param_1,iVar1);
    }
    FUN_148ac6ba5((longlong)iVar1 * 0x40 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148ac6bce(param_1,param_2,iVar1 - param_2);
    FUN_148ac6c28(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148abf680 FUN_148abf680 body=253 status=ok
// SIG undefined FUN_148abf680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148abf680(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  DAT_14cb98a68 = 0;
  DAT_14cb98a70 = 0;
  DAT_14cb98a48 = 0;
  _DAT_14cb98a50 = 0;
  _DAT_14cb98a74 = 0xffffffff00000080;
  DAT_14cb98a7c = 0;
  DAT_14cb98a88 = 0;
  DAT_14cb98a90 = 0;
  uVar5 = (ulonglong)(param_1[1] - *param_1) >> 4;
  uVar4 = (uint)uVar5;
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_148ac6cc4(uVar5 & 0xffffffff);
    iVar2 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((DAT_14cb98a90 == 0) || (DAT_14cb98a90 < iVar2)) {
      DAT_14cb98a90 = iVar2;
      FUN_148ac6e94();
    }
  }
  puVar3 = (undefined4 *)*param_1;
  puVar1 = (undefined4 *)param_1[1];
  if (puVar3 != puVar1) {
    do {
      local_40 = *puVar3;
      uStack_3c = puVar3[1];
      uStack_38 = puVar3[2];
      uStack_34 = puVar3[3];
      FUN_148ac7098(local_2c,&local_40);
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abf780 FUN_148abf780 body=85 status=ok
// SIG undefined FUN_148abf780(void)

undefined8 * FUN_148abf780(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  uVar2 = (ulonglong)(param_2[1] - lVar1) >> 6;
  *(int *)(param_1 + 1) = (int)uVar2;
  if ((int)uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_145c496b4(param_1,uVar2 & 0xffffffff,0);
    FUN_14150193d(*param_1,lVar1,uVar2 & 0xffffffff);
  }
  return param_1;
}



// FUNCTION 148abf7d6 FUN_148abf7d6 body=134 status=ok
// SIG undefined FUN_148abf7d6(void)

void FUN_148abf7d6(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_148ac7758(param_1,param_2,&local_28);
  puVar2 = (undefined8 *)param_3[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abf86e FUN_148abf86e body=856 status=ok
// SIG undefined FUN_148abf86e(void)

undefined8 * FUN_148abf86e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  pvVar2 = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  uVar3 = param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_148ac39ba(param_1 + 9,iVar1);
    FUN_148ac3a12(param_1[9],uVar3,iVar1);
  }
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar2 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0xf);
  uVar3 = param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_148ac3a84(param_1 + 0xe,iVar1);
    FUN_148ac3adc(param_1[0xe],uVar3,iVar1);
  }
  param_1[0x10] = 0;
  iVar1 = *(int *)(param_2 + 0x11);
  pvVar2 = (void *)param_2[0x10];
  *(int *)(param_1 + 0x11) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x10,iVar1,0);
    memcpy((void *)param_1[0x10],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)((longlong)param_1 + 0x92) = *(undefined1 *)((longlong)param_2 + 0x92);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  param_1[0x13] = 0;
  iVar1 = *(int *)(param_2 + 0x14);
  pvVar2 = (void *)param_2[0x13];
  *(int *)(param_1 + 0x14) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x13,iVar1,0);
    memcpy((void *)param_1[0x13],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x15] = 0;
  iVar1 = *(int *)(param_2 + 0x16);
  pvVar2 = (void *)param_2[0x15];
  *(int *)(param_1 + 0x16) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x15,iVar1,0);
    memcpy((void *)param_1[0x15],pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = uVar3;
  return param_1;
}



// FUNCTION 148abfbc6 FUN_148abfbc6 body=88 status=ok
// SIG undefined FUN_148abfbc6(void)

void FUN_148abfbc6(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 200 + *param_1);
  FUN_148abf402(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 200),(longlong)(int)(~param_2 + iVar1) * 200);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_148ac61b0(param_1);
  return;
}



// FUNCTION 148abfc1e FUN_148abfc1e body=16 status=ok
// SIG undefined FUN_148abfc1e(void)

undefined8 FUN_148abfc1e(void)

{
  return CONCAT71((int7)((ulonglong)DAT_14cb98ab0 >> 8),*(longlong *)(DAT_14cb98ab0 + 0x28) != 0);
}



// FUNCTION 148abfc2e FUN_148abfc2e body=41 status=ok
// SIG undefined FUN_148abfc2e(void)

undefined8 FUN_148abfc2e(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(DAT_14cb98ab0 + 0x28) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x188),
     plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148abfc4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x120))();
    return uVar2;
  }
  return 0;
}



// FUNCTION 148abfc58 FUN_148abfc58 body=23 status=ok
// SIG undefined FUN_148abfc58(void)

void FUN_148abfc58(undefined1 param_1)

{
  if (*(longlong *)(DAT_14cb98ab0 + 0x28) != 0) {
    *(undefined1 *)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x17c) = param_1;
  }
  return;
}



// FUNCTION 148abfc70 FUN_148abfc70 body=26 status=ok
// SIG undefined FUN_148abfc70(void)

undefined8 FUN_148abfc70(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(DAT_14cb98ab0 + 0x28);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x17c));
  }
  return 0;
}



// FUNCTION 148abfc8a FUN_148abfc8a body=84 status=ok
// SIG undefined FUN_148abfc8a(void)

void FUN_148abfc8a(undefined4 param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(DAT_14cb98ab0 + 0x28) != 0) {
    local_18 = 0;
    uStack_10 = 0;
    FUN_143f5cc86(*(longlong *)(DAT_14cb98ab0 + 0x28),param_1,0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abfcf6 FUN_148abfcf6 body=15 status=ok
// SIG undefined FUN_148abfcf6(void)

void FUN_148abfcf6(undefined8 param_1)

{
  FUN_143f676f0(DAT_14cb98ab0,param_1);
  return;
}



// FUNCTION 148abfd06 FUN_148abfd06 body=15 status=ok
// SIG undefined FUN_148abfd06(void)

void FUN_148abfd06(undefined8 param_1)

{
  FUN_143f6778a(DAT_14cb98ab0,param_1);
  return;
}



// FUNCTION 148abfd16 FUN_148abfd16 body=84 status=ok
// SIG undefined FUN_148abfd16(void)

void FUN_148abfd16(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  local_10 = param_1[1];
  FUN_14053c012(DAT_14cb98ab0 + 0x30);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abfd6c FUN_148abfd6c body=97 status=ok
// SIG undefined FUN_148abfd6c(void)

void FUN_148abfd6c(undefined4 *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  lVar1 = DAT_14cb98ab0 + 0x30;
  FUN_140805e68(lVar1,&local_28,1);
  FUN_144a7b126(lVar1,&local_11,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abfdce FUN_148abfdce body=84 status=ok
// SIG undefined FUN_148abfdce(void)

void FUN_148abfdce(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  local_10 = param_1[1];
  FUN_14053c012(DAT_14cb98ab0 + 0x40);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abfe24 FUN_148abfe24 body=97 status=ok
// SIG undefined FUN_148abfe24(void)

void FUN_148abfe24(undefined4 *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  lVar1 = DAT_14cb98ab0 + 0x40;
  FUN_140805e68(lVar1,&local_28,1);
  FUN_144a7b126(lVar1,&local_11,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abfe86 FUN_148abfe86 body=84 status=ok
// SIG undefined FUN_148abfe86(void)

void FUN_148abfe86(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  local_10 = param_1[1];
  FUN_14053c012(DAT_14cb98ab0 + 0x50);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abfedc FUN_148abfedc body=97 status=ok
// SIG undefined FUN_148abfedc(void)

void FUN_148abfedc(undefined4 *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  lVar1 = DAT_14cb98ab0 + 0x50;
  FUN_140805e68(lVar1,&local_28,1);
  FUN_144a7b126(lVar1,&local_11,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148abff3e FUN_148abff3e body=134 status=ok
// SIG undefined FUN_148abff3e(void)

void FUN_148abff3e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 800);
  *(undefined8 *)(param_1 + 0x318) = uVar3;
  *(longlong *)(param_1 + 800) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x000148abffc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148abffc4 FUN_148abffc4 body=51 status=ok
// SIG undefined FUN_148abffc4(void)

void FUN_148abffc4(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xf8))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148abffee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 600))(plVar1,"Blur_Input",*(code **)(*plVar1 + 600));
    return;
  }
  return;
}



// FUNCTION 148abfff8 FUN_148abfff8 body=79 status=ok
// SIG undefined FUN_148abfff8(void)

undefined8 FUN_148abfff8(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0xa8) != 0) && (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0xa8) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0xa0);
      }
                    /* WARNING: Could not recover jumptable at 0x000148ac0037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 148ac0048 FUN_148ac0048 body=62 status=ok
// SIG undefined FUN_148ac0048(void)

void FUN_148ac0048(longlong *param_1)

{
  (**(code **)(*param_1 + 0x130))(param_1,0);
  (**(code **)(*param_1 + 0x148))(param_1);
  if (((int)param_1[2] != 0) && ((longlong *)param_1[1] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)param_1[1] + 0x60))();
  }
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



// FUNCTION 148ac009e FUN_148ac009e body=423 status=ok
// SIG undefined FUN_148ac009e(void)

void FUN_148ac009e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined **local_50 [3];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_2 + 0x10))(param_2,&local_60,"ResultResponse",param_1);
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_50,"success",true);
    local_50[0] = &PTR_FUN_14b5041c0;
    local_38 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"successMessageTitle",true);
    local_50[0] = &PTR_FUN_14b504250;
    local_38 = 8;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"successMessageDescription",true);
    local_50[0] = &PTR_FUN_14b504250;
    local_38 = 0x18;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"errorMessageTitle",true);
    local_50[0] = &PTR_FUN_14b504250;
    local_38 = 0x28;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    cohtml::Property::Property((Property *)local_50,"errorMessageDescription",true);
    local_50[0] = &PTR_FUN_14b504250;
    local_38 = 0x38;
    (**(code **)(*local_60 + 0x18))(local_60,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_60);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac0246 FUN_148ac0246 body=245 status=ok
// SIG undefined FUN_148ac0246(void)

void FUN_148ac0246(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined **local_48 [3];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0x10))(param_2,&local_58,"LinkCodeResponse",param_1);
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_48,"pinCode",true);
    local_48[0] = &PTR_FUN_14b504300;
    local_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_50,(Property *)local_48);
    cohtml::Property::~Property((Property *)local_48);
    cohtml::Property::Property((Property *)local_48,"time",true);
    local_48[0] = &PTR_FUN_14b504390;
    local_30 = 0x10;
    (**(code **)(*local_58 + 0x18))(local_58,local_50,(Property *)local_48);
    cohtml::Property::~Property((Property *)local_48);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_58);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac033c FUN_148ac033c body=103 status=ok
// SIG undefined FUN_148ac033c(void)

void FUN_148ac033c(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar1 + 0x50))(plVar1,"Request_New_PIN_Code_Response",1);
  (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_148ac0246(param_2,plVar1);
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000148ac039f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1);
  return;
}



// FUNCTION 148ac03a3 FUN_148ac03a3 body=85 status=ok
// SIG undefined FUN_148ac03a3(void)

void FUN_148ac03a3(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*DAT_14cb98ab8 + 0xf8))();
  (**(code **)(*plVar1 + 600))(plVar1,"PIN_Code_Success_Response");
  if (param_1 != 0) {
    FUN_1401861f4(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x110,*(undefined4 *)(param_1 + 0x38));
    return;
  }
  return;
}



// FUNCTION 148ac03f8 FUN_148ac03f8 body=163 status=ok
// SIG undefined FUN_148ac03f8(void)

void FUN_148ac03f8(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 local_40;
  undefined **local_38 [3];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x10))(param_2,&local_48,"ShiftId",param_1);
  if (local_48 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_38,"shiftId",true);
    local_38[0] = &PTR_FUN_14b5044c0;
    local_20 = 0;
    (**(code **)(*local_48 + 0x18))(local_48,local_40,(Property *)local_38);
    cohtml::Property::~Property((Property *)local_38);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_48);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac049c FUN_148ac049c body=105 status=ok
// SIG undefined FUN_148ac049c(void)

void FUN_148ac049c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,1);
  (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_148ac009e(param_3,plVar1);
  (**(code **)(*plVar1 + 0x48))(plVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x000148ac0501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1);
  return;
}



// FUNCTION 148ac0505 FUN_148ac0505 body=950 status=ok
// SIG undefined FUN_148ac0505(void)

undefined8 * FUN_148ac0505(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  switch(param_2) {
  case 0:
    local_38 = L"DisplayNameError_Success";
    local_30 = 0x18;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"ShiftUI";
    local_30 = 7;
    FUN_1446e940c(local_40,&local_38);
    pwVar3 = L"Name changed successfully.";
    break;
  case 1:
    local_38 = L"DisplayNameError_Blank";
    local_30 = 0x16;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"ShiftUI";
    local_30 = 7;
    FUN_1446e940c(local_40,&local_38);
    pwVar3 = L"Name is blank, please choose a different name.";
    break;
  case 2:
    local_38 = L"DisplayNameError_Taken";
    local_30 = 0x16;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"ShiftUI";
    local_30 = 7;
    FUN_1446e940c(local_40,&local_38);
    pwVar3 = L"Name is taken, please choose a different name.";
    break;
  case 3:
    local_38 = L"DisplayNameError_TooShort";
    local_30 = 0x19;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"ShiftUI";
    local_30 = 7;
    FUN_1446e940c(local_40,&local_38);
    pwVar3 = L"Name is too short, please choose a different name.";
    break;
  case 4:
    local_38 = L"DisplayNameError_TooLong";
    local_30 = 0x18;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"ShiftUI";
    local_30 = 7;
    FUN_1446e940c(local_40,&local_38);
    pwVar3 = L"Name is too long, please choose a different name.";
    break;
  case 5:
    local_38 = L"DisplayNameError_Invalid";
    local_30 = 0x18;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"ShiftUI";
    local_30 = 7;
    FUN_1446e940c(local_40,&local_38);
    pwVar3 = L"Name is invalid, please choose a different name.";
    break;
  case 6:
    local_38 = L"DisplayNameError_Abusive";
    local_30 = 0x18;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"ShiftUI";
    local_30 = 7;
    FUN_1446e940c(local_40,&local_38);
    pwVar3 = L"Name is abusive, please choose a different name.";
    break;
  case 7:
    local_38 = L"DisplayNameError_Disallowed";
    local_30 = 0x1b;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"ShiftUI";
    local_30 = 7;
    FUN_1446e940c(local_40,&local_38);
    pwVar3 = L"Name is disallowed, please choose a different name.";
    break;
  default:
    local_38 = L"DisplayNameError_InternalError";
    local_30 = 0x1e;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"ShiftUI";
    local_30 = 7;
    FUN_1446e940c(local_40,&local_38);
    pwVar3 = L"There was an internal error, please try again.";
  }
  FUN_140208bae(&local_38,local_40,local_3c,pwVar3);
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_38);
  *param_1 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148ac08bc FUN_148ac08bc body=803 status=ok
// SIG undefined FUN_148ac08bc(void)

undefined8 FUN_148ac08bc(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar2 = (longlong *)FUN_14657d420(uVar1);
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_28);
  if (local_28 != DAT_14cb8e1d8) {
    uVar1 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
    plVar2 = (longlong *)FUN_14657d420(uVar1);
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_30);
    FUN_1446f470e(&local_38,&DAT_14b4367ec,1);
    if (local_30 != local_38) {
      uVar1 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
      plVar2 = (longlong *)FUN_14657d420(uVar1);
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_28);
      if (local_28 == DAT_14cb8e468) {
        FUN_14657da57(param_1);
        goto LAB_148ac0917;
      }
      uVar1 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
      plVar2 = (longlong *)FUN_14657d420(uVar1);
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_28);
      if (local_28 != DAT_14cb8e220) {
        uVar1 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
        plVar2 = (longlong *)FUN_14657d420(uVar1);
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_30);
        FUN_1446f470e(&local_40,L"EPIC",1);
        if (local_30 != local_40) {
          uVar1 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
          plVar2 = (longlong *)FUN_14657d420(uVar1);
          (**(code **)(*plVar2 + 0x10))(plVar2,&local_28);
          FUN_1446f470e(&local_48,&DAT_14b4367f4,1);
          if (local_28 == local_48) {
            FUN_148a6240c(param_1);
          }
          else {
            uVar1 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
            plVar2 = (longlong *)FUN_14657d420(uVar1);
            (**(code **)(*plVar2 + 0x10))(plVar2,&local_28);
            if (local_28 == DAT_14cb8e1a0) {
              FUN_148a62429(param_1);
            }
            else {
              uVar1 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
              plVar2 = (longlong *)FUN_14657d420(uVar1);
              (**(code **)(*plVar2 + 0x10))(plVar2,&local_28);
              if (local_28 == DAT_14cb8e210) {
                FUN_148a62446(param_1);
              }
              else {
                uVar1 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
                plVar2 = (longlong *)FUN_14657d420(uVar1);
                (**(code **)(*plVar2 + 0x10))(plVar2,&local_28);
                if (local_28 != DAT_14cb8e1a8) {
                  uVar1 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
                  plVar2 = (longlong *)FUN_14657d420(uVar1);
                  (**(code **)(*plVar2 + 0x10))(plVar2,&local_30);
                  if (local_30 != DAT_14cb8e1b0) {
                    FUN_145cf8b61(param_1);
                    goto LAB_148ac0917;
                  }
                }
                FUN_148a623d2(param_1);
              }
            }
          }
          goto LAB_148ac0917;
        }
      }
      FUN_148a623b5(param_1);
      goto LAB_148ac0917;
    }
  }
  FUN_148a623ef(param_1);
LAB_148ac0917:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac0be0 FUN_148ac0be0 body=597 status=ok
// SIG undefined FUN_148ac0be0(void)

void FUN_148ac0be0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined **local_50 [3];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_2 + 0x10))(param_2,&local_60,"Article",param_1);
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_50,"id",true);
    local_50[0] = &PTR_FUN_14b504580;
    local_38 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"date",true);
    local_50[0] = &PTR_FUN_14b504610;
    local_38 = 8;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"title",true);
    local_50[0] = &PTR_FUN_14b504610;
    local_38 = 0x18;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"descTitle",true);
    local_50[0] = &PTR_FUN_14b504610;
    local_38 = 0x28;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"descSubTitle",true);
    local_50[0] = &PTR_FUN_14b504610;
    local_38 = 0x38;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"descText",true);
    local_50[0] = &PTR_FUN_14b504610;
    local_38 = 0x48;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"image",true);
    local_50[0] = &PTR_FUN_14b504610;
    local_38 = 0x58;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    cohtml::Property::Property((Property *)local_50,"url",true);
    local_50[0] = &PTR_FUN_14b504610;
    local_38 = 0x78;
    (**(code **)(*local_60 + 0x18))(local_60,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_60);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac0e36 FUN_148ac0e36 body=73 status=ok
// SIG undefined FUN_148ac0e36(void)

void FUN_148ac0e36(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar1 + 0x50))(plVar1,"Load_News_Response",1);
  FUN_148ac8c9d(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000148ac0e7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1);
  return;
}



// FUNCTION 148ac0e7f FUN_148ac0e7f body=242 status=ok
// SIG undefined FUN_148ac0e7f(void)

undefined8 FUN_148ac0e7f(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [104];
  undefined2 *local_60;
  int local_58;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((longlong)DAT_14cb98b38 != 0) {
    lVar6 = (longlong)DAT_14cb98b38 * 0x90;
    bVar4 = 1;
    lVar5 = DAT_14cb98b30;
    do {
      FUN_148ac0f72(local_c8,lVar5);
      puVar3 = &DAT_149dfb77a;
      if (local_58 != 0) {
        puVar3 = local_60;
      }
      iVar1 = FUN_144a8a8b6(puVar3,&DAT_149e02088);
      bVar4 = bVar4 & (iVar1 == 0 | local_40);
      FUN_148ac11f8(local_c8);
      lVar5 = lVar5 + 0x90;
      lVar6 = lVar6 + -0x90;
    } while (lVar6 != 0);
    if (bVar4 == 0) {
      uVar2 = 0;
      goto LAB_148ac0f2c;
    }
  }
  uVar2 = (**(code **)(*DAT_14cb98ab8 + 0xf8))();
  FUN_148ac0e36(uVar2);
  uVar2 = 1;
LAB_148ac0f2c:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac0f72 FUN_148ac0f72 body=646 status=ok
// SIG undefined FUN_148ac0f72(void)

undefined4 * FUN_148ac0f72(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  pvVar2 = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  pvVar2 = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  pvVar2 = *(void **)(param_2 + 10);
  param_1[0xc] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy(*(void **)(param_1 + 10),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar1 = param_2[0x10];
  pvVar2 = *(void **)(param_2 + 0xe);
  param_1[0x10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x11] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar1,0);
    memcpy(*(void **)(param_1 + 0xe),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar1 = param_2[0x14];
  pvVar2 = *(void **)(param_2 + 0x12);
  param_1[0x14] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x15] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x12,iVar1,0);
    memcpy(*(void **)(param_1 + 0x12),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x16) = 0;
  iVar1 = param_2[0x18];
  pvVar2 = *(void **)(param_2 + 0x16);
  param_1[0x18] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x19] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x16,iVar1,0);
    memcpy(*(void **)(param_1 + 0x16),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x1a) = 0;
  iVar1 = param_2[0x1c];
  pvVar2 = *(void **)(param_2 + 0x1a);
  param_1[0x1c] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x1d] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1a,iVar1,0);
    memcpy(*(void **)(param_1 + 0x1a),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x1e) = 0;
  iVar1 = param_2[0x20];
  pvVar2 = *(void **)(param_2 + 0x1e);
  param_1[0x20] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x21] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1e,iVar1,0);
    memcpy(*(void **)(param_1 + 0x1e),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  return param_1;
}



// FUNCTION 148ac11f8 FUN_148ac11f8 body=132 status=ok
// SIG undefined FUN_148ac11f8(void)

void FUN_148ac11f8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148ac127c FUN_148ac127c body=300 status=ok
// SIG undefined FUN_148ac127c(void)

void FUN_148ac127c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined **local_50 [3];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_2 + 0x10))(param_2,&local_60,"Reward",param_1);
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_50,"title",true);
    local_50[0] = &PTR_FUN_14b5046a0;
    local_38 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"date",true);
    local_50[0] = &PTR_FUN_14b5046a0;
    local_38 = 0x10;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    cohtml::Property::Property((Property *)local_50,"description",true);
    local_50[0] = &PTR_FUN_14b5046a0;
    local_38 = 0x20;
    (**(code **)(*local_60 + 0x18))(local_60,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_60);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac13aa FUN_148ac13aa body=73 status=ok
// SIG undefined FUN_148ac13aa(void)

void FUN_148ac13aa(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar1 + 0x50))(plVar1,"Load_Rewards_History_Response",1);
  FUN_148ac939d(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000148ac13ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1);
  return;
}



// FUNCTION 148ac13f3 FUN_148ac13f3 body=868 status=ok
// SIG undefined FUN_148ac13f3(void)

undefined8 * FUN_148ac13f3(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  switch(param_2) {
  case 0:
    local_38 = L"RewardsAsyncCheckCodeSuccessDescription";
    local_30 = 0x27;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"ShiftUI";
    local_30 = 7;
    FUN_1446e940c(local_40,&local_38);
    pwVar3 = L"To view details on this reward, visit the REWARDS HISTORY.";
    break;
  case 1:
  case 4:
    local_38 = L"RewardsAsyncCheckCodeFailureDescription";
    local_30 = 0x27;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"ShiftUI";
    local_30 = 7;
    FUN_1446e940c(local_40,&local_38);
    pwVar3 = L"This is not a valid SHiFT code.";
    break;
  case 2:
    local_38 = L"RewardsAsyncCheckCodeAlreadyRedeemedDescription";
    local_30 = 0x2f;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"ShiftUI";
    local_30 = 7;
    FUN_1446e940c(local_40,&local_38);
    pwVar3 = L"This SHiFT code has already been redeemed.";
    break;
  case 3:
    local_38 = L"RewardsAsyncCheckCodeExpiredDescription";
    local_30 = 0x27;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"ShiftUI";
    local_30 = 7;
    FUN_1446e940c(local_40,&local_38);
    pwVar3 = L"This SHiFT code has expired.";
    break;
  case 5:
    local_38 = L"RewardsAsyncCheckCodeUnauthorizedDescription";
    local_30 = 0x2c;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"ShiftUI";
    local_30 = 7;
    FUN_1446e940c(local_40,&local_38);
    pwVar3 = L"This SHiFT account must be confirmed before redeeming codes.";
    break;
  case 6:
    local_38 = L"RewardsAsyncCheckCodeLink2KAccountRequiredDescription";
    local_30 = 0x35;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"ShiftUI";
    local_30 = 7;
    FUN_1446e940c(local_40,&local_38);
    pwVar3 = L"To redeem this SHiFT code, please link your 2K account.";
    break;
  default:
    local_38 = L"RewardsAsyncCheckCodeInternalErrorDescription";
    local_30 = 0x2d;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"ShiftUI";
    local_30 = 7;
    FUN_1446e940c(local_40,&local_38);
    pwVar3 = L"Something unexpected went wrong. Please try again later.";
    break;
  case 8:
    local_38 = L"RewardsAsyncCheckConnectionErrorDescription";
    local_30 = 0x2b;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"ShiftUI";
    local_30 = 7;
    FUN_1446e940c(local_40,&local_38);
    pwVar3 = L"A network error occurred, please try again.";
  }
  FUN_140208bae(&local_38,local_40,local_3c,pwVar3);
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_38);
  *param_1 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac1758 FUN_148ac1758 body=411 status=ok
// SIG undefined FUN_148ac1758(void)

longlong * FUN_148ac1758(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar2,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
  }
  local_40 = 0xffffffff;
  local_48 = 0;
  iVar2 = FUN_1447ee042(param_1,&DAT_149e3579e,3,1);
  if (0 < iVar2) {
    FUN_144a49bb4(param_1,&local_30,iVar2 + 3);
    if (&local_30 == param_1) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_30;
      local_30 = 0;
      *(undefined4 *)(param_1 + 1) = local_28;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_24;
    }
  }
  cVar1 = FUN_144a38768(param_1,&DAT_149e065c6,1,1);
  if (cVar1 != '\0') {
    iVar2 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      puVar3 = &DAT_149dfb77a;
      iVar2 = 0;
    }
    else {
      puVar3 = (undefined2 *)*param_1;
    }
    iVar4 = 1;
    if (1 < iVar2) {
      iVar4 = iVar2;
    }
    FUN_14006620a(&local_30,puVar3,iVar4 + -1);
    if (&local_30 == param_1) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_30;
      *(undefined4 *)(param_1 + 1) = local_28;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148ac18f4 FUN_148ac18f4 body=97 status=ok
// SIG undefined FUN_148ac18f4(void)

void FUN_148ac18f4(void)

{
  FUN_148ac8c72(DAT_14cb98b30,DAT_14cb98b38);
  DAT_14cb98b38 = 0;
  if (DAT_14cb98b3c != 0) {
    FUN_148ac993c();
  }
  FUN_148ac9338(DAT_14cb98b40,DAT_14cb98b48);
  DAT_14cb98b48 = 0;
  if (DAT_14cb98b4c == 0) {
    return;
  }
  FUN_148ac95ae();
  return;
}



// FUNCTION 148ac195e FUN_148ac195e body=107 status=ok
// SIG undefined FUN_148ac195e(void)

undefined8 FUN_148ac195e(void)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar2 = *(longlong **)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x188);
  plVar3 = *(longlong **)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 400);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar4 = (**(code **)(*plVar2 + 0xf8))();
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
    return uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000148ac19c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar2 + 0xf8))();
  return uVar4;
}



// FUNCTION 148ac19ca FUN_148ac19ca body=75 status=ok
// SIG undefined FUN_148ac19ca(void)

char * FUN_148ac19ca(longlong param_1,char *param_2)

{
  FUN_1418b5da8();
  if (((*param_2 == '\0') && (*(int *)(param_1 + 0x2f8) != 0)) &&
     (*(longlong **)(param_1 + 0x2f0) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x2f0) + 0x60))();
  }
  FUN_141646d72(DAT_14cb98ab0,0);
  return param_2;
}



// FUNCTION 148ac1a16 FUN_148ac1a16 body=36 status=ok
// SIG undefined FUN_148ac1a16(void)

undefined8 FUN_148ac1a16(undefined8 param_1,undefined8 param_2)

{
  FUN_1418b5de4();
  FUN_141646d72(DAT_14cb98ab0,0);
  return param_2;
}



// FUNCTION 148ac1a3a FUN_148ac1a3a body=36 status=ok
// SIG undefined FUN_148ac1a3a(void)

undefined8 FUN_148ac1a3a(undefined8 param_1,undefined8 param_2)

{
  FUN_14597196e();
  FUN_141646d72(DAT_14cb98ab0,0);
  return param_2;
}



// FUNCTION 148ac1a5e FUN_148ac1a5e body=504 status=ok
// SIG undefined FUN_148ac1a5e(void)

undefined1 * FUN_148ac1a5e(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f0 = *(undefined8 *)(param_4 + 0x20);
  local_e8 = *(undefined8 *)(param_4 + 0x28);
  local_e0 = *(longlong **)(param_4 + 0x30);
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
    UNLOCK();
  }
  cVar6 = FUN_140230656(&local_f0);
  plVar7 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((cVar6 != '\0') && (*(int *)(param_4 + 0xc) != DAT_14cb987b8)) {
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
    goto LAB_148ac1b48;
  }
  FUN_140f470fc(param_1,&local_f0,param_3,param_4);
  if (*(float *)(param_1 + 0x314) <= *(float *)(param_4 + 0x40) &&
      *(float *)(param_4 + 0x40) != *(float *)(param_1 + 0x314)) {
    FUN_141646d72(DAT_14cb98ab0,1);
  }
  lVar5 = DAT_14cb98ab0;
  if ((((cVar6 == '\0') || ((char)local_f0 != '\0')) || (*(int *)(DAT_14cb98ab0 + 0x20) == 0)) ||
     (*(longlong **)(DAT_14cb98ab0 + 0x18) == (longlong *)0x0)) {
LAB_148ac1b31:
    FUN_1428fd920(param_2,&local_f0);
  }
  else {
    cVar6 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x18) + 0x30))();
    if (cVar6 == '\0') goto LAB_148ac1b31;
    uVar4 = *(undefined4 *)(param_4 + 0xc);
    uVar3 = *(undefined4 *)(param_4 + 0x40);
    local_108 = *(undefined8 *)(param_4 + 0x20);
    local_100 = *(undefined8 *)(param_4 + 0x28);
    local_f8 = *(longlong *)(param_4 + 0x30);
    if (local_f8 != 0) {
      LOCK();
      *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
      UNLOCK();
    }
    if (*(int *)(lVar5 + 0x20) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(lVar5 + 0x18);
    }
    cVar6 = (**(code **)(*plVar7 + 0x58))(plVar7,&local_108,uVar3,uVar4);
    if (cVar6 == '\0') goto LAB_148ac1b31;
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  FUN_14493db24(&local_f0);
LAB_148ac1b48:
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac1c58 FUN_148ac1c58 body=38 status=ok
// SIG undefined FUN_148ac1c58(void)

undefined8 FUN_148ac1c58(undefined8 param_1,int param_2)

{
  FUN_145dc2aa0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ac1c8e FUN_148ac1c8e body=38 status=ok
// SIG undefined FUN_148ac1c8e(void)

undefined8 FUN_148ac1c8e(undefined8 param_1,int param_2)

{
  FUN_145ce677c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ac1cb4 FUN_148ac1cb4 body=40 status=ok
// SIG undefined FUN_148ac1cb4(void)

Property * FUN_148ac1cb4(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac1cdc FUN_148ac1cdc body=79 status=ok
// SIG undefined FUN_148ac1cdc(void)

longlong FUN_148ac1cdc(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148ac1d2c FUN_148ac1d2c body=58 status=ok
// SIG undefined FUN_148ac1d2c(void)

longlong FUN_148ac1d2c(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148ac1d66 FUN_148ac1d66 body=149 status=ok
// SIG undefined FUN_148ac1d66(void)

longlong FUN_148ac1d66(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x18);
    local_38 = 0;
    local_40 = 0;
    (**(code **)(*param_2 + 0x1c8))(param_2,&local_40,&local_38);
    FUN_1409ee323(local_40,local_38,iVar1 + param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac1dfc FUN_148ac1dfc body=119 status=ok
// SIG undefined FUN_148ac1dfc(void)

longlong FUN_148ac1dfc(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x18);
  local_30 = 0;
  local_38 = 0;
  (**(code **)(*param_2 + 0x1c8))(param_2,&local_38,&local_30);
  FUN_1409ee323(local_38,local_30,iVar1 + param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac1e74 FUN_148ac1e74 body=65 status=ok
// SIG undefined FUN_148ac1e74(void)

void FUN_148ac1e74(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b503b60;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ac1ec2 FUN_148ac1ec2 body=40 status=ok
// SIG undefined FUN_148ac1ec2(void)

Property * FUN_148ac1ec2(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac1eea FUN_148ac1eea body=79 status=ok
// SIG undefined FUN_148ac1eea(void)

longlong FUN_148ac1eea(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148ac1f3a FUN_148ac1f3a body=58 status=ok
// SIG undefined FUN_148ac1f3a(void)

longlong FUN_148ac1f3a(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148ac1f74 FUN_148ac1f74 body=149 status=ok
// SIG undefined FUN_148ac1f74(void)

longlong FUN_148ac1f74(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x18);
    local_38 = 0;
    local_40 = 0;
    (**(code **)(*param_2 + 0x1c8))(param_2,&local_40,&local_38);
    FUN_1409ee323(local_40,local_38,iVar1 + param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac200a FUN_148ac200a body=119 status=ok
// SIG undefined FUN_148ac200a(void)

longlong FUN_148ac200a(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x18);
  local_30 = 0;
  local_38 = 0;
  (**(code **)(*param_2 + 0x1c8))(param_2,&local_38,&local_30);
  FUN_1409ee323(local_38,local_30,iVar1 + param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac2082 FUN_148ac2082 body=65 status=ok
// SIG undefined FUN_148ac2082(void)

void FUN_148ac2082(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b503c00;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ac20d0 FUN_148ac20d0 body=40 status=ok
// SIG undefined FUN_148ac20d0(void)

Property * FUN_148ac20d0(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac20f8 FUN_148ac20f8 body=79 status=ok
// SIG undefined FUN_148ac20f8(void)

longlong FUN_148ac20f8(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148ac2148 FUN_148ac2148 body=58 status=ok
// SIG undefined FUN_148ac2148(void)

longlong FUN_148ac2148(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148ac2182 FUN_148ac2182 body=149 status=ok
// SIG undefined FUN_148ac2182(void)

longlong FUN_148ac2182(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x18);
    local_38 = 0;
    local_40 = 0;
    (**(code **)(*param_2 + 0x1c8))(param_2,&local_40,&local_38);
    FUN_1409ee323(local_40,local_38,iVar1 + param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac2218 FUN_148ac2218 body=119 status=ok
// SIG undefined FUN_148ac2218(void)

longlong FUN_148ac2218(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x18);
  local_30 = 0;
  local_38 = 0;
  (**(code **)(*param_2 + 0x1c8))(param_2,&local_38,&local_30);
  FUN_1409ee323(local_38,local_30,iVar1 + param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac2290 FUN_148ac2290 body=65 status=ok
// SIG undefined FUN_148ac2290(void)

void FUN_148ac2290(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b503d00;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ac22de FUN_148ac22de body=40 status=ok
// SIG undefined FUN_148ac22de(void)

Property * FUN_148ac22de(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac2306 FUN_148ac2306 body=62 status=ok
// SIG undefined FUN_148ac2306(void)

longlong FUN_148ac2306(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x140))(param_2,*(undefined1 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148ac2344 FUN_148ac2344 body=41 status=ok
// SIG undefined FUN_148ac2344(void)

longlong FUN_148ac2344(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x140))(param_2,*(undefined1 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148ac236e FUN_148ac236e body=66 status=ok
// SIG undefined FUN_148ac236e(void)

longlong FUN_148ac236e(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x238))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148ac23b0 FUN_148ac23b0 body=40 status=ok
// SIG undefined FUN_148ac23b0(void)

longlong FUN_148ac23b0(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x238))(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148ac23d8 FUN_148ac23d8 body=65 status=ok
// SIG undefined FUN_148ac23d8(void)

void FUN_148ac23d8(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b503d90;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ac2426 FUN_148ac2426 body=40 status=ok
// SIG undefined FUN_148ac2426(void)

Property * FUN_148ac2426(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac244e FUN_148ac244e body=58 status=ok
// SIG undefined FUN_148ac244e(void)

longlong FUN_148ac244e(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  FUN_148ac26b9(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148ac2488 FUN_148ac2488 body=35 status=ok
// SIG undefined FUN_148ac2488(void)

longlong FUN_148ac2488(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_148ac26b9(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148ac24ac FUN_148ac24ac body=64 status=ok
// SIG undefined FUN_148ac24ac(void)

longlong FUN_148ac24ac(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    FUN_148ac280f(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148ac24ec FUN_148ac24ec body=35 status=ok
// SIG undefined FUN_148ac24ec(void)

longlong FUN_148ac24ec(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_148ac280f(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148ac2510 FUN_148ac2510 body=65 status=ok
// SIG undefined FUN_148ac2510(void)

void FUN_148ac2510(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b503e20;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ac2552 FUN_148ac2552 body=20 status=ok
// SIG undefined FUN_148ac2552(void)

undefined8 FUN_148ac2552(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148ac2566 FUN_148ac2566 body=20 status=ok
// SIG undefined FUN_148ac2566(void)

undefined8 FUN_148ac2566(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148ac257a FUN_148ac257a body=20 status=ok
// SIG undefined FUN_148ac257a(void)

undefined8 FUN_148ac257a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148ac258e FUN_148ac258e body=20 status=ok
// SIG undefined FUN_148ac258e(void)

undefined8 FUN_148ac258e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148ac25a2 FUN_148ac25a2 body=20 status=ok
// SIG undefined FUN_148ac25a2(void)

undefined8 FUN_148ac25a2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148ac25b6 FUN_148ac25b6 body=20 status=ok
// SIG undefined FUN_148ac25b6(void)

undefined8 FUN_148ac25b6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148ac25ca FUN_148ac25ca body=92 status=ok
// SIG undefined FUN_148ac25ca(void)

undefined8
FUN_148ac25ca(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_148ac263a(param_2);
  uVar2 = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  *param_4 = 0x10;
  *(undefined1 **)(param_4 + 2) = &LAB_148ac26a9;
  *(undefined1 **)(param_4 + 4) = &LAB_148ac26ae;
  *(undefined8 *)(param_4 + 6) = uVar1;
  *(undefined8 *)(param_4 + 8) = uVar2;
  return 1;
}



// FUNCTION 148ac263a FUN_148ac263a body=111 status=ok
// SIG undefined FUN_148ac263a(void)

undefined8 FUN_148ac263a(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x88))();
    (**(code **)(*param_1 + 0x80))(param_1,4);
    (**(code **)(*param_1 + 0x28))(param_1);
    FUN_143f5de74(0,param_1);
    (**(code **)(*param_1 + 0x48))(param_1,0);
    (**(code **)(*param_1 + 0x80))(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000148ac269c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148ac26b9 FUN_148ac26b9 body=180 status=ok
// SIG undefined FUN_148ac26b9(void)

void FUN_148ac26b9(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x158))
                    (param_1,param_2,FUN_148ac2780,FUN_148ac27d5,&LAB_148ac26a9,&LAB_148ac276d);
  if (cVar2 != '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x160))(param_1,(longlong)(int)param_2[1]);
  if (0 < (int)param_2[1]) {
    lVar4 = 0;
    iVar3 = 0;
    do {
      lVar1 = *param_2;
      (**(code **)(*param_1 + 0x28))(param_1);
      FUN_143f5de74(lVar1 + lVar4,param_1);
      (**(code **)(*param_1 + 0x48))(param_1,lVar1 + lVar4);
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (iVar3 < (int)param_2[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x000148ac2766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1);
  return;
}



// FUNCTION 148ac2780 FUN_148ac2780 body=85 status=ok
// SIG undefined FUN_148ac2780(void)

void FUN_148ac2780(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (longlong)param_3 * 0x10 + *param_2;
    (**(code **)(*param_1 + 0x28))(param_1);
    FUN_143f5de74(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x000148ac27bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1,lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148ac27ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))(param_1);
  return;
}



// FUNCTION 148ac27d5 FUN_148ac27d5 body=58 status=ok
// SIG undefined FUN_148ac27d5(void)

void FUN_148ac27d5(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 * 0x10 + *param_2;
  (**(code **)(*param_1 + 0x38))();
  FUN_143f5de74(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x000148ac280c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,lVar1);
  return;
}



// FUNCTION 148ac280f FUN_148ac280f body=160 status=ok
// SIG undefined FUN_148ac280f(void)

void FUN_148ac280f(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = (**(code **)(*param_1 + 0x250))();
  FUN_148ac28b0(param_2,uVar1 & 0xffffffff);
  if (uVar1 != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      (**(code **)(*param_1 + 600))(param_1,uVar3);
      lVar4 = (lVar2 >> 0x1c) + *param_2;
      (**(code **)(*param_1 + 0x38))(param_1);
      FUN_143f5de74(lVar4,param_1);
      (**(code **)(*param_1 + 0x48))(param_1,lVar4);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x100000000;
    } while (uVar1 != uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000148ac28a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}



// FUNCTION 148ac28b0 FUN_148ac28b0 body=121 status=ok
// SIG undefined FUN_148ac28b0(void)

void FUN_148ac28b0(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148ac295c(param_1,iVar1);
    }
    FUN_148ac292a((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148ac29e2(param_1,param_2,iVar1 - param_2);
    FUN_148ac2a3c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148ac292a FUN_148ac292a body=50 status=ok
// SIG undefined FUN_148ac292a(void)

void FUN_148ac292a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1400b22c2(param_1,&DAT_149e02088);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 148ac295c FUN_148ac295c body=132 status=ok
// SIG undefined FUN_148ac295c(void)

void FUN_148ac295c(longlong param_1,int param_2)

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



// FUNCTION 148ac29e2 FUN_148ac29e2 body=89 status=ok
// SIG undefined FUN_148ac29e2(void)

void FUN_148ac29e2(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_148ac2a7a(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148ac2a3c FUN_148ac2a3c body=62 status=ok
// SIG undefined FUN_148ac2a3c(void)

void FUN_148ac2a3c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148ac2aa6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148ac2a7a FUN_148ac2a7a body=43 status=ok
// SIG undefined FUN_148ac2a7a(void)

void FUN_148ac2a7a(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 148ac2aa6 FUN_148ac2aa6 body=93 status=ok
// SIG undefined FUN_148ac2aa6(void)

ulonglong FUN_148ac2aa6(uint param_1,uint param_2)

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



// FUNCTION 148ac2b04 FUN_148ac2b04 body=40 status=ok
// SIG undefined FUN_148ac2b04(void)

Property * FUN_148ac2b04(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac2b2c FUN_148ac2b2c body=58 status=ok
// SIG undefined FUN_148ac2b2c(void)

longlong FUN_148ac2b2c(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  FUN_148ac2d97(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148ac2b66 FUN_148ac2b66 body=35 status=ok
// SIG undefined FUN_148ac2b66(void)

longlong FUN_148ac2b66(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_148ac2d97(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148ac2b8a FUN_148ac2b8a body=64 status=ok
// SIG undefined FUN_148ac2b8a(void)

longlong FUN_148ac2b8a(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    FUN_148ac2eed(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 148ac2bca FUN_148ac2bca body=35 status=ok
// SIG undefined FUN_148ac2bca(void)

longlong FUN_148ac2bca(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_148ac2eed(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148ac2bee FUN_148ac2bee body=65 status=ok
// SIG undefined FUN_148ac2bee(void)

void FUN_148ac2bee(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b503eb0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ac2c30 FUN_148ac2c30 body=20 status=ok
// SIG undefined FUN_148ac2c30(void)

undefined8 FUN_148ac2c30(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148ac2c44 FUN_148ac2c44 body=20 status=ok
// SIG undefined FUN_148ac2c44(void)

undefined8 FUN_148ac2c44(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148ac2c58 FUN_148ac2c58 body=20 status=ok
// SIG undefined FUN_148ac2c58(void)

undefined8 FUN_148ac2c58(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148ac2c6c FUN_148ac2c6c body=20 status=ok
// SIG undefined FUN_148ac2c6c(void)

undefined8 FUN_148ac2c6c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}



// FUNCTION 148ac2c80 FUN_148ac2c80 body=20 status=ok
// SIG undefined FUN_148ac2c80(void)

undefined8 FUN_148ac2c80(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 0;
}


