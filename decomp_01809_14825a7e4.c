// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14825a7e4 FUN_14825a7e4 body=93 status=ok
// SIG undefined FUN_14825a7e4(void)

void FUN_14825a7e4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae6b610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14825a842 FUN_14825a842 body=126 status=ok
// SIG undefined FUN_14825a842(void)

void FUN_14825a842(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6b610;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014825a8b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14825a8c0 FUN_14825a8c0 body=35 status=ok
// SIG undefined FUN_14825a8c0(void)

void FUN_14825a8c0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014825a8df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14825a8e4 FUN_14825a8e4 body=142 status=ok
// SIG undefined FUN_14825a8e4(void)

bool FUN_14825a8e4(longlong param_1)

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



// FUNCTION 14825a974 FUN_14825a974 body=29 status=ok
// SIG undefined FUN_14825a974(void)

undefined8 FUN_14825a974(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14825a9ac FUN_14825a9ac body=29 status=ok
// SIG undefined FUN_14825a9ac(void)

bool FUN_14825a9ac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14825a9ca FUN_14825a9ca body=26 status=ok
// SIG undefined FUN_14825a9ca(void)

bool FUN_14825a9ca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14825a9e4 FUN_14825a9e4 body=24 status=ok
// SIG undefined FUN_14825a9e4(void)

bool FUN_14825a9e4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14825a9fc FUN_14825a9fc body=93 status=ok
// SIG undefined FUN_14825a9fc(void)

void FUN_14825a9fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04f50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6b680;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14825aa5a FUN_14825aa5a body=93 status=ok
// SIG undefined FUN_14825aa5a(void)

void FUN_14825aa5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04f50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6b680;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14825aab8 FUN_14825aab8 body=126 status=ok
// SIG undefined FUN_14825aab8(void)

void FUN_14825aab8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f04f50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6b680;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014825ab27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14825ab36 FUN_14825ab36 body=58 status=ok
// SIG undefined FUN_14825ab36(void)

void FUN_14825ab36(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014825ab6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14825ab70 FUN_14825ab70 body=199 status=ok
// SIG undefined FUN_14825ab70(void)

bool FUN_14825ab70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
    local_50 = param_6;
    local_58 = param_5;
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825ac38 FUN_14825ac38 body=29 status=ok
// SIG undefined FUN_14825ac38(void)

undefined8 FUN_14825ac38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14825ac70 FUN_14825ac70 body=29 status=ok
// SIG undefined FUN_14825ac70(void)

bool FUN_14825ac70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14825ac8e FUN_14825ac8e body=26 status=ok
// SIG undefined FUN_14825ac8e(void)

bool FUN_14825ac8e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14825aca8 FUN_14825aca8 body=24 status=ok
// SIG undefined FUN_14825aca8(void)

bool FUN_14825aca8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14825acc0 FUN_14825acc0 body=93 status=ok
// SIG undefined FUN_14825acc0(void)

void FUN_14825acc0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae6b6f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14825ad1e FUN_14825ad1e body=93 status=ok
// SIG undefined FUN_14825ad1e(void)

void FUN_14825ad1e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae6b6f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14825ad7c FUN_14825ad7c body=126 status=ok
// SIG undefined FUN_14825ad7c(void)

void FUN_14825ad7c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6b6f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014825adeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14825adfa FUN_14825adfa body=48 status=ok
// SIG undefined FUN_14825adfa(void)

void FUN_14825adfa(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014825ae27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2);
  return;
}



// FUNCTION 14825ae2a FUN_14825ae2a body=158 status=ok
// SIG undefined FUN_14825ae2a(void)

bool FUN_14825ae2a(longlong param_1,undefined4 param_2)

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



// FUNCTION 14825aeca FUN_14825aeca body=89 status=ok
// SIG undefined FUN_14825aeca(void)

void FUN_14825aeca(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 4,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 2)) {
    uVar3 = uVar1 >> 2 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,4,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14825af24 FUN_14825af24 body=24 status=ok
// SIG undefined FUN_14825af24(void)

void FUN_14825af24(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014825af38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14825af3c FUN_14825af3c body=29 status=ok
// SIG undefined FUN_14825af3c(void)

undefined8 FUN_14825af3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14825af5a FUN_14825af5a body=63 status=ok
// SIG undefined FUN_14825af5a(void)

void FUN_14825af5a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14825b026(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 14825af9a FUN_14825af9a body=139 status=ok
// SIG undefined FUN_14825af9a(void)

void FUN_14825af9a(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 0x10 + (longlong)(int)param_2 * 0x18);
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
  iVar6 = ~param_2 + iVar5;
  if (iVar6 != 0) {
    iVar7 = 1;
    if (iVar6 < 1) {
      iVar7 = iVar6;
    }
    memmove((void *)(lVar3 + (longlong)(int)param_2 * 0x18),
            (void *)(lVar3 + (longlong)(iVar5 - iVar7) * 0x18),(longlong)iVar7 * 0x18);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 14825b026 FUN_14825b026 body=117 status=ok
// SIG undefined FUN_14825b026(void)

ulonglong FUN_14825b026(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 14825b09c FUN_14825b09c body=62 status=ok
// SIG undefined FUN_14825b09c(void)

void FUN_14825b09c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14825b0da(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 14825b0da FUN_14825b0da body=93 status=ok
// SIG undefined FUN_14825b0da(void)

ulonglong FUN_14825b0da(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 14825b138 FUN_14825b138 body=62 status=ok
// SIG undefined FUN_14825b138(void)

void FUN_14825b138(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14825b1fe(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14825b176 FUN_14825b176 body=136 status=ok
// SIG undefined FUN_14825b176(void)

void FUN_14825b176(longlong *param_1,uint param_2)

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



// FUNCTION 14825b1fe FUN_14825b1fe body=93 status=ok
// SIG undefined FUN_14825b1fe(void)

ulonglong FUN_14825b1fe(uint param_1,uint param_2)

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



// FUNCTION 14825b25c FUN_14825b25c body=207 status=ok
// SIG undefined FUN_14825b25c(void)

int FUN_14825b25c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x18 + (longlong)iVar1 * 0x20)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x20);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 14825b32c FUN_14825b32c body=118 status=ok
// SIG undefined FUN_14825b32c(void)

void FUN_14825b32c(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
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
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 14825b3a2 FUN_14825b3a2 body=181 status=ok
// SIG undefined FUN_14825b3a2(void)

longlong FUN_14825b3a2(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_14825b43a;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14825b458(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_14825b43a:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14825b458 FUN_14825b458 body=277 status=ok
// SIG undefined FUN_14825b458(void)

undefined4 * FUN_14825b458(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14825b56e(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_14825b654(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14825b768(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825b56e FUN_14825b56e body=229 status=ok
// SIG undefined FUN_14825b56e(void)

int * FUN_14825b56e(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14825b654 FUN_14825b654 body=161 status=ok
// SIG undefined FUN_14825b654(void)

undefined8 FUN_14825b654(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_14825b6f6(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14825b6f6 FUN_14825b6f6 body=114 status=ok
// SIG undefined FUN_14825b6f6(void)

void FUN_14825b6f6(longlong *param_1,int param_2)

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



// FUNCTION 14825b768 FUN_14825b768 body=477 status=ok
// SIG undefined FUN_14825b768(void)

void FUN_14825b768(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14825b946 FUN_14825b946 body=132 status=ok
// SIG undefined FUN_14825b946(void)

void FUN_14825b946(longlong param_1,int param_2)

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



// FUNCTION 14825b9cc FUN_14825b9cc body=132 status=ok
// SIG undefined FUN_14825b9cc(void)

undefined8 *
FUN_14825b9cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = &PTR_LAB_14ae6b7f0;
  param_1[1] = *param_4;
  lVar1 = param_4[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
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
  param_1[3] = lVar2;
  *param_1 = &PTR_FUN_14ae6b780;
  param_1[4] = 0;
  FUN_14485c47a(param_1 + 4);
  param_1[5] = param_3;
  return param_1;
}



// FUNCTION 14825ba50 FUN_14825ba50 body=64 status=ok
// SIG undefined FUN_14825ba50(void)

undefined8 * FUN_14825ba50(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14ae6b7f0;
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



// FUNCTION 14825baaa FUN_14825baaa body=29 status=ok
// SIG undefined FUN_14825baaa(void)

bool FUN_14825baaa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 == param_2;
}



// FUNCTION 14825bac8 FUN_14825bac8 body=26 status=ok
// SIG undefined FUN_14825bac8(void)

bool FUN_14825bac8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x20,1);
  return lVar1 == 0;
}



// FUNCTION 14825bae2 FUN_14825bae2 body=24 status=ok
// SIG undefined FUN_14825bae2(void)

bool FUN_14825bae2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 != 0;
}



// FUNCTION 14825bb06 FUN_14825bb06 body=118 status=ok
// SIG undefined FUN_14825bb06(void)

void FUN_14825bb06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6b7f0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14ae6b780;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar3;
  return;
}



// FUNCTION 14825bb7c FUN_14825bb7c body=118 status=ok
// SIG undefined FUN_14825bb7c(void)

void FUN_14825bb7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6b7f0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14ae6b780;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar3;
  return;
}



// FUNCTION 14825bbf2 FUN_14825bbf2 body=156 status=ok
// SIG undefined FUN_14825bbf2(void)

void FUN_14825bbf2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int *piVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  _LIST_ENTRY *p_Var3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14ae6b7f0;
  p_Var2->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  p_Var3 = *(_LIST_ENTRY **)(param_1 + 0x10);
  (p_Var2->ProcessLocksList).Flink = p_Var3;
  if (p_Var3 != (_LIST_ENTRY *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)&p_Var3->Blink + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var2 = &PTR_FUN_14ae6b780;
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  p_Var2->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var2->ContentionCount = DVar4;
  p_Var2->Flags = DVar5;
  p_Var2->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var2->SpareWORD = (short)((uint)uVar6 >> 0x10);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014825bc7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14825bc8e FUN_14825bc8e body=102 status=ok
// SIG undefined FUN_14825bc8e(void)

void FUN_14825bc8e(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_14479d2ce(param_1 + 0x20);
  pcVar1 = *(code **)(param_1 + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  local_18 = *(longlong *)(param_1 + 0x10);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
    UNLOCK();
  }
  (*pcVar1)(uVar2,&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825bcf6 FUN_14825bcf6 body=177 status=ok
// SIG undefined FUN_14825bcf6(void)

bool FUN_14825bcf6(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x20,&local_30,0);
    lVar4 = local_30;
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x20);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x28);
    local_30 = *(longlong *)(param_1 + 8);
    local_28 = *(longlong *)(param_1 + 0x10);
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
      UNLOCK();
    }
    (*pcVar1)(lVar3,&local_30);
  }
  if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825bdaa FUN_14825bdaa body=133 status=ok
// SIG undefined FUN_14825bdaa(void)

longlong FUN_14825bdaa(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14825be30();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_14825bde3;
  }
  local_30 = param_3;
  FUN_14825bf00(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 5;
LAB_14825bde3:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825be30 FUN_14825be30 body=207 status=ok
// SIG undefined FUN_14825be30(void)

int FUN_14825be30(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x18 + (longlong)iVar1 * 0x20)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x20);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 14825bf00 FUN_14825bf00 body=272 status=ok
// SIG undefined FUN_14825bf00(void)

undefined4 * FUN_14825bf00(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14825c012(param_1,local_48);
  FUN_14825c1d4(param_4,local_40);
  *(undefined4 *)(local_40 + 0x18) = 0xffffffff;
  cVar1 = FUN_14825c0f8(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x18) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14825c286(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825c012 FUN_14825c012 body=229 status=ok
// SIG undefined FUN_14825c012(void)

int * FUN_14825c012(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14825c0f8 FUN_14825c0f8 body=219 status=ok
// SIG undefined FUN_14825c0f8(void)

undefined8 FUN_14825c0f8(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    if ((local_48 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar5 = FUN_14825b25c(param_1,param_2,&local_48);
    if (iVar5 != -1) {
      lVar2 = *param_1;
      lVar7 = (longlong)iVar5 * 0x20;
      puVar1 = (undefined4 *)(lVar2 + lVar7);
      FUN_145c59ac5(*(undefined8 *)(lVar2 + 8 + lVar7),*(undefined4 *)(lVar2 + 0x10 + lVar7));
      if (*(longlong *)(lVar2 + 8 + lVar7) != 0) {
        FUN_1400020a8();
      }
      lVar2 = *param_3;
      uVar3 = *(undefined4 *)((longlong)param_3 + 4);
      lVar7 = param_3[1];
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(longlong *)(puVar1 + 4) = param_3[2];
      *puVar1 = (int)lVar2;
      puVar1[1] = uVar3;
      puVar1[2] = (int)lVar7;
      puVar1[3] = uVar4;
      FUN_14825c214(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_14825c122;
    }
  }
  uVar6 = 0;
LAB_14825c122:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825c1d4 FUN_14825c1d4 body=63 status=ok
// SIG undefined FUN_14825c1d4(void)

longlong * FUN_14825c1d4(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)*param_1;
  *param_2 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_145c59ac5(0,0);
  return param_2;
}



// FUNCTION 14825c214 FUN_14825c214 body=114 status=ok
// SIG undefined FUN_14825c214(void)

void FUN_14825c214(longlong *param_1,int param_2)

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



// FUNCTION 14825c286 FUN_14825c286 body=510 status=ok
// SIG undefined FUN_14825c286(void)

void FUN_14825c286(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar2 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar2 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar8 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar9 = *local_88;
        uVar6 = *(ulonglong *)(lVar9 + (longlong)iVar8 * 0x20);
        if ((DAT_14c950c29 == '\x01') && (uVar6 != 0)) {
          FUN_1456cec3c(uVar6);
        }
        lVar9 = lVar9 + (longlong)iVar8 * 0x20;
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 0x1c) = iVar5;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x18) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar8 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14825c486 FUN_14825c486 body=132 status=ok
// SIG undefined FUN_14825c486(void)

void FUN_14825c486(longlong param_1,int param_2)

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



// FUNCTION 14825c50c FUN_14825c50c body=48 status=ok
// SIG undefined FUN_14825c50c(void)

void FUN_14825c50c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 14825c53c FUN_14825c53c body=48 status=ok
// SIG undefined FUN_14825c53c(void)

void FUN_14825c53c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 14825c56c FUN_14825c56c body=134 status=ok
// SIG undefined FUN_14825c56c(void)

void FUN_14825c56c(longlong *param_1,int *param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x20) == param_3) goto LAB_14825c57c;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14825c57c:
  *param_2 = iVar1;
  return;
}



// FUNCTION 14825c5f2 FUN_14825c5f2 body=90 status=ok
// SIG undefined FUN_14825c5f2(void)

void FUN_14825c5f2(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14825c64c();
  return;
}



// FUNCTION 14825c64c FUN_14825c64c body=52 status=ok
// SIG undefined FUN_14825c64c(void)

void FUN_14825c64c(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_14825b6f6(param_1,param_2);
  return;
}



// FUNCTION 14825c680 FUN_14825c680 body=132 status=ok
// SIG undefined FUN_14825c680(void)

void FUN_14825c680(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14825c706 FUN_14825c706 body=106 status=ok
// SIG undefined FUN_14825c706(void)

undefined8 FUN_14825c706(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x18)) {
    uVar5 = uVar2 / 0x18 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 14825c770 FUN_14825c770 body=50 status=ok
// SIG undefined FUN_14825c770(void)

void FUN_14825c770(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 0x10 + lVar2) = *(undefined4 *)(param_2 + 0x10 + lVar2);
    lVar2 = lVar2 + 0x18;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14825c7a2 FUN_14825c7a2 body=106 status=ok
// SIG undefined FUN_14825c7a2(void)

undefined8 FUN_14825c7a2(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x18)) {
    uVar5 = uVar2 / 0x18 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 14825c80c FUN_14825c80c body=50 status=ok
// SIG undefined FUN_14825c80c(void)

void FUN_14825c80c(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    *(undefined8 *)(param_1 + 8 + lVar2) = *(undefined8 *)(param_2 + 8 + lVar2);
    lVar1 = *(longlong *)(param_2 + 0x10 + lVar2);
    *(longlong *)(param_1 + 0x10 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x18;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14825c83e FUN_14825c83e body=29 status=ok
// SIG undefined FUN_14825c83e(void)

undefined8 FUN_14825c83e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14825c876 FUN_14825c876 body=29 status=ok
// SIG undefined FUN_14825c876(void)

bool FUN_14825c876(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14825c894 FUN_14825c894 body=26 status=ok
// SIG undefined FUN_14825c894(void)

bool FUN_14825c894(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14825c8ae FUN_14825c8ae body=24 status=ok
// SIG undefined FUN_14825c8ae(void)

bool FUN_14825c8ae(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14825c8c6 FUN_14825c8c6 body=93 status=ok
// SIG undefined FUN_14825c8c6(void)

void FUN_14825c8c6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae6b860;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14825c924 FUN_14825c924 body=93 status=ok
// SIG undefined FUN_14825c924(void)

void FUN_14825c924(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae6b860;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14825c982 FUN_14825c982 body=126 status=ok
// SIG undefined FUN_14825c982(void)

void FUN_14825c982(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6b860;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014825c9f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14825ca00 FUN_14825ca00 body=35 status=ok
// SIG undefined FUN_14825ca00(void)

void FUN_14825ca00(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014825ca1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14825ca24 FUN_14825ca24 body=142 status=ok
// SIG undefined FUN_14825ca24(void)

bool FUN_14825ca24(longlong param_1)

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



// FUNCTION 14825cab4 FUN_14825cab4 body=164 status=ok
// SIG undefined FUN_14825cab4(void)

void FUN_14825cab4(longlong *param_1,undefined4 param_2)

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
        goto LAB_14825cb34;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14825cb34:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14825cb58 FUN_14825cb58 body=232 status=ok
// SIG undefined FUN_14825cb58(void)

void FUN_14825cb58(longlong *param_1,undefined1 *param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [46];
  undefined1 local_3a;
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    bVar6 = false;
    do {
      lVar7 = uVar5 * 0x10 + -8;
      uVar8 = uVar5;
      while ((*(int *)(*param_1 + lVar7) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0))) {
        local_39 = param_2[1];
        if (local_39 == '\x01') {
          local_3a = *param_2;
        }
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_3a);
        if (cVar4 == '\0') break;
        lVar7 = lVar7 + -0x10;
        bVar3 = uVar8 < 2;
        uVar8 = uVar8 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar6) goto LAB_14825cc04;
          goto LAB_14825cc13;
        }
      }
      uVar5 = uVar8 - 1;
      bVar6 = true;
    } while (1 < uVar8);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14825cc04:
    FUN_14474d06a(param_1,0);
  }
LAB_14825cc13:
  if (param_2[1] == '\x01') {
    param_2[1] = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825cc42 FUN_14825cc42 body=273 status=ok
// SIG undefined FUN_14825cc42(void)

int FUN_14825cc42(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  
  iVar6 = (int)param_1[1];
  lVar7 = (longlong)iVar6;
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar13 = 0;
    bVar12 = *plVar1 == *(longlong *)*param_2;
    iVar3 = 0;
    do {
      lVar10 = (longlong)iVar3;
      iVar8 = iVar3 + 1;
      if (iVar3 + 1 < iVar6) {
        iVar8 = iVar6;
      }
      plVar9 = plVar1 + lVar10 * 2 + 2;
      iVar4 = iVar3;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar5 = iVar8;
        if (lVar7 <= lVar11) break;
        lVar2 = *plVar9;
        iVar4 = iVar4 + 1;
        plVar9 = plVar9 + 2;
        iVar5 = iVar4;
      } while (bVar12 == (lVar2 == *(longlong *)*param_2));
      iVar8 = iVar5 - iVar3;
      if (bVar12 == false) {
        if (iVar13 != iVar3) {
          memmove(plVar1 + (longlong)iVar13 * 2,plVar1 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar13 = iVar13 + iVar8;
      }
      else {
        FUN_145c59ac5(plVar1 + lVar10 * 2,iVar8);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar3 = iVar5;
    } while (lVar11 < lVar7);
    *(int *)(param_1 + 1) = iVar13;
    iVar6 = iVar6 - iVar13;
  }
  return iVar6;
}



// FUNCTION 14825cd54 FUN_14825cd54 body=126 status=ok
// SIG undefined FUN_14825cd54(void)

void FUN_14825cd54(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = DAT_14cb45178;
  local_28 = DAT_14cb45180;
  cVar1 = (*(code *)*param_3)(param_3[1]);
  if (cVar1 != '\0') {
    local_40 = *param_3;
    local_38 = param_3[1];
    FUN_14775e24c(param_1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825cdd4 FUN_14825cdd4 body=29 status=ok
// SIG undefined FUN_14825cdd4(void)

undefined8 FUN_14825cdd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14825cdf2 FUN_14825cdf2 body=94 status=ok
// SIG undefined FUN_14825cdf2(void)

void FUN_14825cdf2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ae636d0;
  plVar2 = (longlong *)param_1[0x1b];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1405535a6(param_1 + 0x10);
  FUN_1469a39b2(param_1);
  return;
}



// FUNCTION 14825ce5f FUN_14825ce5f body=99 status=ok
// SIG undefined FUN_14825ce5f(void)

char FUN_14825ce5f(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar3 = FUN_14479d2ce(param_2 + 0x58);
  if (lVar3 == param_1) {
    cVar2 = '\x01';
  }
  else {
    iVar1 = *(int *)(param_2 + 0x78);
    if ((longlong)iVar1 == 0) {
      cVar2 = '\0';
    }
    else {
      lVar3 = *(longlong *)(param_2 + 0x70);
      lVar4 = 0;
      do {
        cVar2 = FUN_14825ce5f(param_1,*(undefined8 *)(lVar3 + lVar4));
        if (cVar2 != '\0') {
          return cVar2;
        }
        bVar5 = (longlong)iVar1 * 0x10 + -0x10 != lVar4;
        cVar2 = '\0';
        lVar4 = lVar4 + 0x10;
      } while (bVar5);
    }
  }
  return cVar2;
}



// FUNCTION 14825cec2 FUN_14825cec2 body=289 status=ok
// SIG undefined FUN_14825cec2(void)

ulonglong FUN_14825cec2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_1 + 0x3a) != '\x01') || ((*(byte *)(param_1 + 0x39) & 0x10) == 0)) {
    uVar9 = 0;
    goto LAB_14825ceea;
  }
  plVar8 = *(longlong **)(param_1 + 0x1c8);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_14825cf75:
    plVar8 = (longlong *)0x0;
LAB_14825cf77:
    FUN_14825cfe4(param_1,&local_38);
    if (local_38 == 0) {
LAB_14825cfa4:
      uVar9 = CONCAT71((int7)((ulonglong)&local_38 >> 8),1);
    }
    else {
      uVar7 = FUN_14479d2ce(local_38 + 8);
      cVar5 = FUN_14822193e(uVar7);
      if (cVar5 != '\0') goto LAB_14825cfa4;
      uVar9 = 0;
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    if (bVar3) goto LAB_14825ceea;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_14825cf75;
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
    plVar2 = *(longlong **)(param_1 + 0x1c0);
    if (plVar2 == (longlong *)0x0) {
      bVar3 = false;
      goto LAB_14825cf77;
    }
    cVar5 = (**(code **)(*plVar2 + 0x158))(plVar2,param_1);
    bVar3 = false;
    uVar9 = 0;
    if (cVar5 != '\0') goto LAB_14825cf77;
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
LAB_14825ceea:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14825cfe4 FUN_14825cfe4 body=169 status=ok
// SIG undefined FUN_14825cfe4(void)

undefined8 * FUN_14825cfe4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1b0);
    lVar8 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar8);
      uVar7 = FUN_14824be4c();
      cVar6 = (**(code **)(*plVar5 + 8))(plVar5,uVar7);
      if (cVar6 != '\0') {
        uVar7 = *(undefined8 *)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 == (longlong *)0x0) {
          *param_2 = uVar7;
          param_2[1] = 0;
          return param_2;
        }
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar7;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar8);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14825d08e FUN_14825d08e body=91 status=ok
// SIG undefined FUN_14825d08e(void)

undefined8 * FUN_14825d08e(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_144729dda(param_1 + 3);
  if (cVar1 == '\0') {
    if ((param_1[1] != 0) || (param_1[2] != 0)) {
      FUN_14825d336(param_2,param_1 + 1);
      return param_2;
    }
    uVar3 = *param_1;
  }
  else {
    lVar2 = FUN_14479d2ce(param_1 + 3);
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 14825d0ea FUN_14825d0ea body=415 status=ok
// SIG undefined FUN_14825d0ea(void)

undefined8 FUN_14825d0ea(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined2 *local_80;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pwVar3 = L"false";
  if (*(char *)(param_1 + 0x19) != '\0') {
    pwVar3 = L"true";
  }
  FUN_140056680(&local_50,pwVar3);
  local_80 = local_50;
  if (local_48 == 0) {
    local_80 = &DAT_149dfb77a;
  }
  if ((ulonglong)*(byte *)(param_1 + 0x18) < 3) {
    pwVar3 = (wchar_t *)(&PTR_u_Menu_14ae6f4e8)[*(byte *)(param_1 + 0x18)];
  }
  else {
    pwVar3 = L"Unknown";
  }
  cVar1 = FUN_144729dda(param_1 + 0x10);
  local_88 = pwVar3;
  if (cVar1 == '\0') {
    FUN_1400021e4(param_1,&local_70);
    puVar4 = local_70;
    if (local_68 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(param_2,L"%s: Owner [%s], Mode [%s], Displayed? [%s]",puVar4,L"Invalid");
    local_60 = local_70;
  }
  else {
    lVar2 = FUN_14479d2ce(param_1 + 0x10);
    local_70 = *(undefined2 **)(lVar2 + 0x18);
    FUN_1400021e4(&local_70,&local_60);
    puVar4 = &DAT_149dfb77a;
    if (local_58 != 0) {
      puVar4 = local_60;
    }
    FUN_1400021e4(param_1,&local_70);
    puVar5 = &DAT_149dfb77a;
    if (local_68 != 0) {
      puVar5 = local_70;
    }
    FUN_140002266(param_2,L"%s: Owner [%s], Mode [%s], Displayed? [%s]",puVar5,puVar4);
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14825d28a FUN_14825d28a body=171 status=ok
// SIG undefined FUN_14825d28a(void)

void FUN_14825d28a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x100) != 0) && (*(longlong *)(param_1 + 0x108) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x108) + 8))) {
    FUN_1401cb356();
    local_20 = *(undefined8 *)(param_1 + 0x100);
    local_18 = *(longlong *)(param_1 + 0x108);
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_20);
    plVar2 = *(longlong **)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
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
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825d336 FUN_14825d336 body=262 status=ok
// SIG undefined FUN_14825d336(void)

undefined8 * FUN_14825d336(undefined8 *param_1,longlong *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_1400021e4(param_2 + 1,&local_48);
    puVar1 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar1 = local_48;
    }
    local_38 = *(undefined2 **)(*param_2 + 0x18);
    FUN_1400021e4(&local_38,&local_58);
    puVar2 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar2 = local_58;
    }
    FUN_140002266(&local_38,L"Legacy_%s_%s",puVar2,puVar1);
    puVar1 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar1 = local_38;
    }
    FUN_1446f470e(param_1,puVar1,1);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825d43e FUN_14825d43e body=16 status=ok
// SIG undefined FUN_14825d43e(void)

undefined4 * FUN_14825d43e(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0x100;
  return param_1;
}



// FUNCTION 14825d44e FUN_14825d44e body=31 status=ok
// SIG undefined FUN_14825d44e(void)

undefined2 * FUN_14825d44e(undefined2 *param_1,undefined1 param_2,char param_3,undefined1 param_4)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = param_2;
  *(char *)((longlong)param_1 + 3) = param_3;
  *(undefined1 *)((longlong)param_1 + 5) = param_4;
  *(bool *)(param_1 + 2) = (byte)(param_3 - 1U) < 2;
  return param_1;
}



// FUNCTION 14825d46e FUN_14825d46e body=325 status=ok
// SIG undefined FUN_14825d46e(void)

ulonglong FUN_14825d46e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  byte unaff_DIL;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    plVar9 = &local_48;
    FUN_140760c2c(param_2,plVar9);
    if (local_48 != 0) {
      do {
        lVar5 = local_48;
        unaff_DIL = FUN_14825cec2(local_48);
        plVar3 = plStack_40;
        plVar9 = (longlong *)CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
        if (unaff_DIL == 0) {
          unaff_DIL = 0;
          break;
        }
        plVar10 = *(longlong **)(lVar5 + 0x1c8);
        if (plVar10 == (longlong *)0x0) {
LAB_14825d4ea:
          plVar10 = (longlong *)0x0;
          local_48 = 0;
        }
        else {
          iVar8 = (int)plVar10[1];
          do {
            if (iVar8 == 0) goto LAB_14825d4ea;
            LOCK();
            iVar6 = (int)plVar10[1];
            bVar11 = iVar8 == iVar6;
            if (bVar11) {
              *(int *)(plVar10 + 1) = iVar8 + 1;
              iVar6 = iVar8;
            }
            iVar8 = iVar6;
            UNLOCK();
          } while (!bVar11);
          local_48 = *(longlong *)(lVar5 + 0x1c0);
        }
        if (plVar10 == plStack_40) {
          plVar7 = plStack_40;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar10 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              iVar8 = *piVar2;
              UNLOCK();
              plVar3 = plVar10;
              goto joined_r0x00014825d53c;
            }
          }
        }
        else {
          plVar7 = plVar10;
          if (plStack_40 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_40 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar4 = (undefined8 *)*plStack_40;
              plStack_40 = plVar10;
              (*(code *)*puVar4)(plVar3);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              iVar8 = *piVar2;
              UNLOCK();
joined_r0x00014825d53c:
              plVar7 = plStack_40;
              if (iVar8 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
                plVar7 = plStack_40;
              }
            }
          }
        }
        plStack_40 = plVar7;
      } while (local_48 != 0);
      goto LAB_14825d561;
    }
  }
  plVar9 = (longlong *)0x0;
LAB_14825d561:
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_40 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)plVar9 >> 8),(byte)plVar9 & unaff_DIL) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825d5b4 FUN_14825d5b4 body=81 status=ok
// SIG undefined FUN_14825d5b4(void)

longlong FUN_14825d5b4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_143af73d6();
  *(undefined8 *)(param_1 + 0x60) = *param_4;
  plVar2 = (longlong *)param_4[1];
  plVar3 = *(longlong **)(param_1 + 0x68);
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0x68);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x68) = plVar2;
  }
  return param_1;
}



// FUNCTION 14825d606 FUN_14825d606 body=418 status=ok
// SIG undefined FUN_14825d606(void)

ulonglong FUN_14825d606(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *unaff_RSI;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    FUN_140760c2c(param_2,&local_38);
    lVar11 = local_38;
    unaff_RSI = param_1;
    if (local_38 != 0) {
      uVar8 = FUN_14479d2ce(param_1 + 0xb);
      unaff_RSI = &local_48;
      FUN_140760c2c(uVar8,unaff_RSI);
      bVar12 = local_48 != 0;
      if (bVar12) {
        if (lVar11 == local_48) {
          unaff_RSI = (longlong *)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
        }
        else {
          while (uVar9 = FUN_14825cec2(lVar11), plVar3 = plStack_30, (char)uVar9 != '\0') {
            unaff_RSI = (longlong *)(uVar9 & 0xffffffff);
            plVar10 = *(longlong **)(lVar11 + 0x1c8);
            if (plVar10 == (longlong *)0x0) {
LAB_14825d6b2:
              plVar10 = (longlong *)0x0;
              local_38 = 0;
            }
            else {
              iVar7 = (int)plVar10[1];
              do {
                if (iVar7 == 0) goto LAB_14825d6b2;
                LOCK();
                iVar5 = (int)plVar10[1];
                bVar13 = iVar7 == iVar5;
                if (bVar13) {
                  *(int *)(plVar10 + 1) = iVar7 + 1;
                  iVar5 = iVar7;
                }
                iVar7 = iVar5;
                UNLOCK();
              } while (!bVar13);
              local_38 = *(longlong *)(lVar11 + 0x1c0);
            }
            if (plVar10 == plStack_30) {
              plVar6 = plStack_30;
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                plVar3 = plVar10 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*plVar10)(plVar10);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar10 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  iVar7 = *piVar2;
                  UNLOCK();
                  plVar3 = plVar10;
                  goto joined_r0x00014825d6ff;
                }
              }
            }
            else {
              plVar6 = plVar10;
              if (plStack_30 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_30 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  puVar4 = (undefined8 *)*plStack_30;
                  plStack_30 = plVar10;
                  (*(code *)*puVar4)(plVar3);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar3 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  iVar7 = *piVar2;
                  UNLOCK();
joined_r0x00014825d6ff:
                  plVar6 = plStack_30;
                  if (iVar7 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                    plVar6 = plStack_30;
                  }
                }
              }
            }
            plStack_30 = plVar6;
            if ((local_38 == 0) || (lVar11 = local_38, local_38 == local_48)) goto LAB_14825d777;
          }
          unaff_RSI = (longlong *)0x0;
        }
      }
LAB_14825d777:
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)local_40 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
          }
        }
      }
      goto LAB_14825d72b;
    }
  }
  bVar12 = false;
LAB_14825d72b:
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_30 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),(byte)unaff_RSI & bVar12) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825d7aa FUN_14825d7aa body=554 status=ok
// SIG undefined FUN_14825d7aa(void)

void FUN_14825d7aa(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + 0x50) != 0) && (*(longlong **)(param_1 + 0x48) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x60))();
  }
  if ((((*(char *)(param_1 + 0x90) == '\x01') &&
       (FUN_143af7bf6(param_1,0), *(longlong *)(param_1 + 0x60) != 0)) &&
      (*(longlong *)(param_1 + 0x68) != 0)) && (0 < *(int *)(*(longlong *)(param_1 + 0x68) + 8))) {
    cVar4 = FUN_14825eefa(param_1);
    if (cVar4 == '\0') {
      FUN_14479d2ce(param_1 + 0x28);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
    }
    plVar9 = *(longlong **)(param_1 + 0x68);
    if (plVar9 != (longlong *)0x0) {
      iVar5 = (int)plVar9[1];
      do {
        if (iVar5 == 0) goto LAB_14825d803;
        LOCK();
        iVar3 = (int)plVar9[1];
        bVar11 = iVar5 == iVar3;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar11);
      plVar7 = *(longlong **)(param_1 + 0x60);
      if (plVar7 != (longlong *)0x0) {
        do {
          cVar4 = (**(code **)(*plVar7 + 0x18))(plVar7);
          if (cVar4 != '\0') goto LAB_14825d942;
          plVar10 = (longlong *)plVar7[0xd];
          if (plVar10 == (longlong *)0x0) {
LAB_14825d89c:
            plVar10 = (longlong *)0x0;
            plVar7 = (longlong *)0x0;
          }
          else {
            iVar5 = (int)plVar10[1];
            do {
              if (iVar5 == 0) goto LAB_14825d89c;
              LOCK();
              iVar3 = (int)plVar10[1];
              bVar11 = iVar5 == iVar3;
              if (bVar11) {
                *(int *)(plVar10 + 1) = iVar5 + 1;
                iVar3 = iVar5;
              }
              iVar5 = iVar3;
              UNLOCK();
            } while (!bVar11);
            plVar7 = (longlong *)plVar7[0xc];
          }
          if (plVar10 == plVar9) {
            if (plVar9 == (longlong *)0x0) {
              plVar8 = (longlong *)0x0;
            }
            else {
              LOCK();
              plVar2 = plVar10 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              plVar8 = plVar9;
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar5 = *piVar1;
                UNLOCK();
                plVar9 = plVar10;
                goto joined_r0x00014825d8f4;
              }
            }
          }
          else {
            plVar8 = plVar10;
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar10 = plVar9 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar5 = *piVar1;
                UNLOCK();
joined_r0x00014825d8f4:
                if (iVar5 == 0) {
                  (**(code **)(*plVar9 + 0x10))();
                }
              }
            }
          }
          plVar9 = plVar8;
        } while (plVar7 != (longlong *)0x0);
        plVar7 = (longlong *)0x0;
LAB_14825d942:
        uVar6 = FUN_14479d2ce(param_1 + 0x28);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        local_38 = plVar7;
        local_30 = plVar9;
        FUN_14825e6f6(param_1,&local_58);
        local_48 = local_58;
        local_40 = local_50;
        if (local_50 == (longlong *)0x0) {
          FUN_143aeebba(uVar6,&local_48,&local_38);
        }
        else {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
          FUN_143aeebba(uVar6,&local_48,&local_38);
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_50 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
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
        if (plVar9 == (longlong *)0x0) goto LAB_14825d803;
      }
      LOCK();
      plVar7 = plVar9 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
  }
LAB_14825d803:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825d9e6 FUN_14825d9e6 body=300 status=ok
// SIG undefined FUN_14825d9e6(void)

int FUN_14825d9e6(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar6 = (**(code **)(*param_1 + 0x18))();
  iVar7 = 2;
  if (cVar6 != '\0') {
    lVar5 = param_1[0xf];
    local_80 = param_1;
    if ((longlong)(int)lVar5 != 0) {
      lVar3 = param_1[0xe];
      lVar8 = 0;
      do {
        plVar4 = *(longlong **)(lVar3 + lVar8);
        local_60 = *param_3;
        local_58 = param_3[1];
        local_50 = param_3[2];
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
        }
        iVar7 = (**(code **)(*plVar4 + 8))(plVar4,param_2,&local_60,param_4);
        if (iVar7 != 2) goto LAB_14825dac3;
        lVar8 = lVar8 + 0x10;
      } while ((longlong)(int)lVar5 * 0x10 != lVar8);
    }
    local_78 = *param_3;
    local_70 = param_3[1];
    local_68 = param_3[2];
    if (local_68 != 0) {
      LOCK();
      *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      UNLOCK();
    }
    iVar7 = FUN_143af6476(local_80,param_2,&local_78,param_4);
  }
LAB_14825dac3:
  plVar4 = (longlong *)param_3[2];
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
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 14825db14 FUN_14825db14 body=294 status=ok
// SIG undefined FUN_14825db14(void)

ulonglong FUN_14825db14(longlong *param_1,undefined4 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  param_4 = param_4 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar6 = (**(code **)(*param_1 + 0x18))();
  if (cVar6 == '\0') {
    uVar9 = 0;
  }
  else {
    lVar5 = param_1[0xf];
    if ((longlong)(int)lVar5 != 0) {
      lVar3 = param_1[0xe];
      lVar8 = 0;
      do {
        plVar4 = *(longlong **)(lVar3 + lVar8);
        local_60 = *param_3;
        local_58 = param_3[1];
        local_50 = param_3[2];
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*plVar4 + 0x10))(plVar4,param_2,&local_60,param_4);
        if (cVar6 != '\0') {
          uVar9 = CONCAT71((int7)(param_4 >> 8),1);
          goto LAB_14825dbe6;
        }
        lVar8 = lVar8 + 0x10;
      } while ((longlong)(int)lVar5 * 0x10 != lVar8);
    }
    local_78 = *param_3;
    local_70 = param_3[1];
    local_68 = param_3[2];
    if (local_68 != 0) {
      LOCK();
      *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      UNLOCK();
    }
    uVar7 = FUN_143af6ba0(param_1,param_2,&local_78,param_4);
    uVar9 = (ulonglong)uVar7;
  }
LAB_14825dbe6:
  plVar4 = (longlong *)param_3[2];
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
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825dc3c FUN_14825dc3c body=9 status=ok
// SIG undefined FUN_14825dc3c(void)

void FUN_14825dc3c(longlong param_1)

{
  FUN_144729dda(param_1 + 0x58);
  return;
}



// FUNCTION 14825dc46 FUN_14825dc46 body=48 status=ok
// SIG undefined FUN_14825dc46(void)

undefined1 FUN_14825dc46(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_144729dda(param_1 + 0x58);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_14479d2ce(param_1 + 0x58);
    uVar2 = *(undefined1 *)(lVar3 + 0x2fb);
  }
  return uVar2;
}



// FUNCTION 14825dc76 FUN_14825dc76 body=634 status=ok
// SIG undefined FUN_14825dc76(void)

longlong * FUN_14825dc76(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  code *local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = FUN_14825def2;
  local_50 = 0;
  local_60 = param_3;
  FUN_148262bea(&local_48,param_1);
  FUN_1448b6402(param_3 + 0x3b8,&local_58,&local_48);
  FUN_1449db362(&local_48);
  lVar5 = FUN_14001cc68(0xb8,0x10);
  plVar7 = *(longlong **)(param_1 + 0x10);
  if (plVar7 == (longlong *)0x0) {
LAB_14825dd06:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar7[1];
    do {
      if (iVar4 == 0) goto LAB_14825dd06;
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar9);
    local_48 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plStack_40 = plVar7;
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
  uVar6 = FUN_14479d2ce(param_1 + 0x28);
  FUN_14825d5b4(lVar5,uVar6,param_3,&local_48);
  *param_2 = lVar5;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14ae6f0b0;
  plVar7[2] = lVar5;
  param_2[1] = (longlong)plVar7;
  if ((lVar5 == 0) ||
     (((*(longlong *)(lVar5 + 8) != 0 && (*(longlong *)(lVar5 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar5 + 0x10) + 8))))) goto LAB_14825de5a;
  if (plVar7 == (longlong *)0x0) {
    *(longlong *)(lVar5 + 8) = lVar5;
    plVar8 = *(longlong **)(lVar5 + 0x10);
    if (plVar8 == (longlong *)0x0) goto LAB_14825de5a;
LAB_14825ddb3:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *(longlong **)(lVar5 + 0x10) = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_14825de5a;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong *)(lVar5 + 8) = lVar5;
    if (*(longlong **)(lVar5 + 0x10) != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar5 + 0x10);
      if (plVar8 != (longlong *)0x0) goto LAB_14825ddb3;
      *(longlong **)(lVar5 + 0x10) = plVar7;
    }
  }
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
LAB_14825de5a:
  plVar7 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_40 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = (longlong *)*param_2;
  (**(code **)(*plVar7 + 0x28))(plVar7);
  iVar4 = *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x78) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x7c) < iVar4 + 1U) {
    FUN_1482630fa((longlong *)(param_1 + 0x70),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = plVar7;
  lVar2 = param_2[1];
  *(longlong *)(lVar5 + 8 + (longlong)iVar4 * 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14825def2 FUN_14825def2 body=143 status=ok
// SIG undefined FUN_14825def2(void)

void FUN_14825def2(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  FUN_140457ffc(param_2 + 0x3b8,param_1);
  iVar1 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar5 = 0;
    iVar4 = 0;
    do {
      lVar3 = FUN_14479d2ce(*(longlong *)(lVar2 + lVar5) + 0x58);
      if (lVar3 == param_2) {
        if (iVar4 == 1) {
          return;
        }
        FUN_148263802(param_1 + 0x70,-iVar4);
        FUN_14826388a(param_1 + 0x70);
        return;
      }
      iVar4 = iVar4 + -1;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 14825df82 FUN_14825df82 body=494 status=ok
// SIG undefined FUN_14825df82(void)

void FUN_14825df82(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  plVar9 = DAT_14c98e618;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar7 = FUN_14479d2ce(param_1 + 0x28);
  uVar5 = FUN_14823ec88(uVar7);
  (**(code **)(*plVar9 + 0x168))(plVar9,&local_38,uVar5);
  if (local_38 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_14479d2ce(param_1 + 0x28);
    uVar7 = *(undefined8 *)(lVar8 + 0x20);
    local_48 = local_38;
    local_40 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    lVar8 = FUN_14823fa72(&local_48,uVar7);
  }
  plVar9 = *(longlong **)(param_1 + 0x88);
  if (plVar9 == (longlong *)0x0) {
LAB_14825e067:
    if (local_38 == 0) goto LAB_14825e0bd;
    if (lVar8 != 0) {
      cVar4 = FUN_14825ce5f(lVar8,param_1);
      goto joined_r0x00014825e135;
    }
  }
  else {
    iVar6 = (int)plVar9[1];
    do {
      if (iVar6 == 0) goto LAB_14825e067;
      LOCK();
      iVar3 = (int)plVar9[1];
      bVar10 = iVar6 == iVar3;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar6 + 1;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      UNLOCK();
    } while (!bVar10);
    if (local_38 == *(longlong *)(param_1 + 0x80)) {
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
      goto LAB_14825e0bd;
    }
    if (lVar8 == 0) {
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
    }
    else {
      cVar4 = FUN_14825ce5f(lVar8,param_1);
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
joined_r0x00014825e135:
      if (cVar4 == '\0') goto LAB_14825e0bd;
    }
  }
  plVar1 = local_30;
  *(longlong *)(param_1 + 0x80) = local_38;
  plVar9 = *(longlong **)(param_1 + 0x88);
  if (plVar9 != local_30) {
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
      UNLOCK();
      plVar9 = *(longlong **)(param_1 + 0x88);
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x88) = plVar1;
  }
LAB_14825e0bd:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_30 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14825e172 FUN_14825e172 body=163 status=ok
// SIG undefined FUN_14825e172(void)

undefined4 FUN_14825e172(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar4 = FUN_144729dda(param_1 + 0x58);
  if (cVar4 == '\0') {
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    uVar5 = FUN_14479d2ce(param_1 + 0x58);
    FUN_140760c2c(uVar5,&local_28);
    if (local_28 != 0) {
      uVar6 = *(undefined4 *)(local_28 + 0x158);
      goto LAB_14825e1cf;
    }
  }
  uVar6 = 0xffffffff;
LAB_14825e1cf:
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825e216 FUN_14825e216 body=363 status=ok
// SIG undefined FUN_14825e216(void)

/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_14825e216(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  bool bVar11;
  undefined1 auStack_68 [34];
  undefined4 local_46;
  undefined2 local_42;
  byte local_40 [8];
  undefined4 local_38;
  undefined2 local_34;
  byte local_32 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_144729dda(param_1 + 0x58);
  if (cVar3 == '\0') {
    local_32[0] = 0;
  }
  else {
    plVar6 = (longlong *)FUN_14479d2ce(param_1 + 0x58);
    (**(code **)(*plVar6 + 0x4b0))(plVar6,&local_38);
  }
  puVar9 = (undefined4 *)((longlong)local_40 + 1);
  FUN_14825e382(param_1,puVar9);
  if (local_40[7] == '\x01') {
    if ((local_32[0] & 1) == 0) {
      bVar7 = 1;
    }
    else {
LAB_14825e28d:
      puVar9 = &local_38;
      bVar7 = local_32[0];
    }
    *(byte *)((longlong)param_2 + 6) = bVar7;
  }
  else {
    if ((local_32[0] & 1) != 0) goto LAB_14825e28d;
    if (((*(longlong *)(param_1 + 0x60) == 0) ||
        (plVar6 = *(longlong **)(param_1 + 0x68), plVar6 == (longlong *)0x0)) ||
       ((int)plVar6[1] < 1)) {
      *(byte *)((longlong)param_2 + 6) = local_32[0];
      goto LAB_14825e2a3;
    }
    pbVar10 = local_32;
    uVar8 = 0;
    iVar5 = (int)plVar6[1];
    do {
      iVar4 = iVar5;
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14825e30b;
      }
      LOCK();
      iVar5 = (int)plVar6[1];
      bVar11 = iVar4 == iVar5;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar5 = iVar4;
      }
      UNLOCK();
    } while (!bVar11);
    uVar8 = *(undefined8 *)(param_1 + 0x60);
LAB_14825e30b:
    FUN_14825e216(uVar8,&local_46);
    if (local_40[0] == 0) {
      if (local_32[0] != 0) goto LAB_14825e33a;
    }
    else {
      pbVar10 = local_40;
      local_34 = local_42;
      local_38 = local_46;
      local_32[0] = 1;
LAB_14825e33a:
      *pbVar10 = 0;
    }
    if (iVar4 != 0) {
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
    *(byte *)((longlong)param_2 + 6) = local_32[0];
    if ((local_32[0] & 1) == 0) goto LAB_14825e2a3;
    puVar9 = &local_38;
  }
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(puVar9 + 1);
  *param_2 = *puVar9;
LAB_14825e2a3:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14825e382 FUN_14825e382 body=153 status=ok
// SIG undefined FUN_14825e382(void)

undefined2 * FUN_14825e382(longlong param_1,undefined2 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144729dda(param_1 + 0x58);
  if (cVar1 != '\0') {
    uVar3 = FUN_14479d2ce(param_1 + 0x58);
    FUN_14821d6e2(uVar3,&local_20);
    if ((local_20 != 0) && (*(char *)(local_20 + 0x38) == '\x01')) {
      uVar2 = *(undefined1 *)(local_20 + 0x39);
      cVar1 = *(char *)(local_20 + 0x3a);
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = uVar2;
      *(char *)((longlong)param_2 + 3) = cVar1;
      *(bool *)(param_2 + 2) = (byte)(cVar1 - 1U) < 2;
      *(undefined1 *)((longlong)param_2 + 5) = 1;
      uVar2 = 1;
      goto LAB_14825e3f8;
    }
  }
  uVar2 = 0;
LAB_14825e3f8:
  *(undefined1 *)(param_2 + 3) = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825e41c FUN_14825e41c body=310 status=ok
// SIG undefined FUN_14825e41c(void)

undefined1 * FUN_14825e41c(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  byte *pbVar8;
  bool bVar9;
  undefined1 auStack_58 [35];
  undefined1 local_35;
  char local_34;
  undefined1 local_33;
  char local_32;
  byte local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_144729dda(param_1 + 0x58);
  if (cVar3 == '\0') {
    local_31 = 0;
  }
  else {
    plVar6 = (longlong *)FUN_14479d2ce(param_1 + 0x58);
    (**(code **)(*plVar6 + 0x4a8))(plVar6,&local_33);
    if ((local_31 & 1) != 0) goto LAB_14825e495;
  }
  if (((*(longlong *)(param_1 + 0x60) != 0) &&
      (plVar6 = *(longlong **)(param_1 + 0x68), plVar6 != (longlong *)0x0)) && (0 < (int)plVar6[1]))
  {
    uVar7 = 0;
    iVar5 = (int)plVar6[1];
    do {
      iVar4 = iVar5;
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14825e4fe;
      }
      LOCK();
      iVar5 = (int)plVar6[1];
      bVar9 = iVar4 == iVar5;
      if (bVar9) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar5 = iVar4;
      }
      UNLOCK();
    } while (!bVar9);
    uVar7 = *(undefined8 *)(param_1 + 0x60);
LAB_14825e4fe:
    FUN_14825e41c(uVar7,&local_35);
    local_32 = local_34;
    if (local_34 == '\x01') {
      local_33 = local_35;
      local_34 = '\0';
    }
    local_31 = 1;
    if (iVar4 != 0) {
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
  }
LAB_14825e495:
  pbVar8 = &local_31;
  if ((local_31 & 1) == 0) {
    pbVar8 = param_2 + 1;
  }
  else {
    param_2[1] = local_32;
    if (local_32 != '\0') {
      *param_2 = local_33;
    }
  }
  *pbVar8 = 0;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14825e554 FUN_14825e554 body=91 status=ok
// SIG undefined FUN_14825e554(void)

void FUN_14825e554(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  FUN_148263180(param_1 + 0xa8,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825e5b0 FUN_14825e5b0 body=96 status=ok
// SIG undefined FUN_14825e5b0(void)

void FUN_14825e5b0(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  local_20 = &local_28;
  FUN_148254580(param_1 + 0xa8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825e612 FUN_14825e612 body=226 status=ok
// SIG undefined FUN_14825e612(void)

void FUN_14825e612(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_3;
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  iVar1 = (int)param_1[0x14];
  lVar7 = (longlong)iVar1;
  *(uint *)(param_1 + 0x14) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xa4) < iVar1 + 1U) {
    FUN_1469b6b76(param_1 + 0x13,iVar1);
  }
  lVar5 = param_1[0x13];
  *(undefined8 *)(lVar5 + lVar7 * 0x18) = uVar2;
  *(undefined8 *)(lVar5 + 8 + lVar7 * 0x18) = uVar3;
  *(longlong *)(lVar5 + 0x10 + lVar7 * 0x18) = lVar4;
  cVar6 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar2 = DAT_14c98e618;
  if (cVar6 != '\0') {
    local_50 = *param_2;
    local_48 = param_2[1];
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    FUN_1456d46ea(uVar2,&local_50,param_3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825e6f6 FUN_14825e6f6 body=212 status=ok
// SIG undefined FUN_14825e6f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14825e6f6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar6 = param_1;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    do {
      plVar7 = *(longlong **)(param_1 + 0x68);
      lVar6 = param_1;
      if ((plVar7 == (longlong *)0x0) || ((int)plVar7[1] < 1)) break;
      iVar5 = (int)plVar7[1];
      while (iVar5 != 0) {
        LOCK();
        iVar4 = (int)plVar7[1];
        bVar8 = iVar5 == iVar4;
        if (bVar8) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
        if (bVar8) {
          FUN_14825e6f6(*(undefined8 *)(param_1 + 0x60),param_2);
          goto LAB_14825e7ab;
        }
      }
      param_1 = 0;
      lVar6 = 0;
    } while (_DAT_00000060 != 0);
  }
  plVar7 = *(longlong **)(lVar6 + 0x10);
  if (plVar7 == (longlong *)0x0) {
LAB_14825e78e:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) goto LAB_14825e78e;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    uVar3 = *(undefined8 *)(lVar6 + 8);
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
    *param_2 = uVar3;
    param_2[1] = plVar7;
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
LAB_14825e7ab:
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



// FUNCTION 14825e7ca FUN_14825e7ca body=257 status=ok
// SIG undefined FUN_14825e7ca(void)

void FUN_14825e7ca(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  if (cVar1 != '\0') {
    if (0 < (int)param_1[0x16]) {
      uVar4 = 0;
      do {
        lVar6 = (longlong)(int)uVar4;
        lVar3 = FUN_14479d2ce(lVar6 * 8 + param_1[0x15]);
        if (lVar3 == 0) {
          iVar2 = (int)param_1[0x16];
          if (~uVar4 + iVar2 != 0) {
            memmove((void *)(param_1[0x15] + lVar6 * 8),(void *)(param_1[0x15] + lVar6 * 8 + 8),
                    (longlong)(int)(~uVar4 + iVar2) << 3);
            iVar2 = (int)param_1[0x16];
          }
          *(int *)(param_1 + 0x16) = iVar2 + -1;
          FUN_148263282(param_1 + 0x15);
          uVar4 = uVar4 - 1;
        }
        else {
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_1482631fc(param_2,iVar2);
          }
          *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar3;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)param_1[0x16]);
    }
    lVar3 = param_1[0xf];
    if ((longlong)(int)lVar3 != 0) {
      lVar6 = param_1[0xe];
      lVar5 = 0;
      do {
        FUN_14825e7ca(*(undefined8 *)(lVar6 + lVar5),param_2);
        lVar5 = lVar5 + 0x10;
      } while ((longlong)(int)lVar3 * 0x10 != lVar5);
    }
  }
  return;
}



// FUNCTION 14825e8cc FUN_14825e8cc body=417 status=ok
// SIG undefined FUN_14825e8cc(void)

ulonglong FUN_14825e8cc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 != 0) {
    cVar4 = FUN_144729dda(param_1 + 0x58);
    if (cVar4 != '\0') {
      uVar6 = FUN_14479d2ce(param_1 + 0x58);
      FUN_140760c2c(uVar6,&local_38);
      lVar11 = *param_2;
      plVar9 = *(longlong **)(lVar11 + 0x1c8);
      if (plVar9 == (longlong *)0x0) {
LAB_14825ea1c:
        uVar7 = 0;
      }
      else {
        iVar5 = (int)plVar9[1];
        do {
          if (iVar5 == 0) goto LAB_14825ea1c;
          LOCK();
          iVar3 = (int)plVar9[1];
          bVar12 = iVar5 == iVar3;
          if (bVar12) {
            *(int *)(plVar9 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar12);
        lVar11 = *(longlong *)(lVar11 + 0x1c0);
        uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),lVar11 != 0);
        if ((lVar11 != 0) && (plVar10 = plVar9, lVar11 != local_38)) {
          do {
            plVar8 = *(longlong **)(lVar11 + 0x1c8);
            if (plVar8 == (longlong *)0x0) {
LAB_14825e989:
              plVar8 = (longlong *)0x0;
              lVar11 = 0;
            }
            else {
              iVar5 = (int)plVar8[1];
              do {
                if (iVar5 == 0) goto LAB_14825e989;
                LOCK();
                iVar3 = (int)plVar8[1];
                bVar12 = iVar5 == iVar3;
                if (bVar12) {
                  *(int *)(plVar8 + 1) = iVar5 + 1;
                  iVar3 = iVar5;
                }
                iVar5 = iVar3;
                UNLOCK();
              } while (!bVar12);
              lVar11 = *(longlong *)(lVar11 + 0x1c0);
            }
            if (plVar8 == plVar10) {
              if (plVar10 == (longlong *)0x0) {
                plVar9 = (longlong *)0x0;
              }
              else {
                LOCK();
                plVar1 = plVar8 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                plVar9 = plVar10;
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar8)(plVar8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar8 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  iVar5 = *piVar2;
                  UNLOCK();
                  plVar1 = plVar8;
                  plVar8 = plVar10;
                  goto joined_r0x00014825e9ce;
                }
              }
            }
            else {
              plVar9 = plVar8;
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar10 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar10)(plVar10);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar10 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  iVar5 = *piVar2;
                  UNLOCK();
                  plVar1 = plVar10;
joined_r0x00014825e9ce:
                  plVar9 = plVar8;
                  if (iVar5 == 0) {
                    (**(code **)(*plVar1 + 0x10))();
                  }
                }
              }
            }
            uVar7 = CONCAT71((int7)(uVar7 >> 8),lVar11 != 0);
          } while ((lVar11 != 0) && (plVar10 = plVar9, lVar11 != local_38));
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar9 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_30 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
        }
      }
      goto LAB_14825e9f9;
    }
  }
  uVar7 = 0;
LAB_14825e9f9:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825ea6e FUN_14825ea6e body=133 status=ok
// SIG undefined FUN_14825ea6e(void)

ulonglong FUN_14825ea6e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  
  cVar3 = FUN_14825e8cc();
  if (cVar3 == '\0') {
LAB_14825eae1:
    uVar5 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x78);
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x70);
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(lVar2 + lVar6) + 0x58;
        cVar3 = FUN_144729dda(lVar4);
        if (((cVar3 != '\0') && (lVar4 = FUN_14479d2ce(lVar4), *(char *)(lVar4 + 0x2fb) == '\x01'))
           && (cVar3 = FUN_14825e8cc(*(undefined8 *)(lVar2 + lVar6),param_2), cVar3 != '\0'))
        goto LAB_14825eae1;
        lVar6 = lVar6 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar6);
    }
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14825eaf4 FUN_14825eaf4 body=249 status=ok
// SIG undefined FUN_14825eaf4(void)

void FUN_14825eaf4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = param_1 + 0x58;
  lVar1 = FUN_14479d2ce(lVar2);
  local_58 = FUN_14825ebee;
  local_50 = 0;
  FUN_14826331e(local_48,param_1);
  FUN_1448b6402(lVar1 + 0x388,&local_58,local_48);
  FUN_1449db362(local_48);
  lVar1 = FUN_14479d2ce(lVar2);
  local_58 = FUN_14825d7aa;
  local_50 = 0;
  FUN_14826331e(local_48,param_1,&local_58);
  FUN_1448b6402(lVar1 + 0x3a0,&local_58,local_48);
  FUN_1449db362(local_48);
  lVar2 = FUN_14479d2ce(lVar2);
  if (*(char *)(lVar2 + 0x358) == '\x01') {
    FUN_14825ebee(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825ebee FUN_14825ebee body=474 status=ok
// SIG undefined FUN_14825ebee(void)

void FUN_14825ebee(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(param_1 + 0x40) != 0) && (*(longlong **)(param_1 + 0x38) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x60))();
  }
  puVar4 = *(undefined8 **)(param_1 + 0x68);
  if (puVar4 != (undefined8 *)0x0) {
    iVar7 = *(int *)(puVar4 + 1);
    do {
      if (iVar7 == 0) goto LAB_14825ec82;
      LOCK();
      iVar3 = *(int *)(puVar4 + 1);
      bVar10 = iVar7 == iVar3;
      if (bVar10) {
        *(int *)(puVar4 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
    } while (!bVar10);
    if ((*(longlong **)(param_1 + 0x60) != (longlong *)0x0) &&
       (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))(), cVar6 != '\0')) {
      FUN_143af7bf6(param_1,1);
      cVar6 = FUN_14825eefa(param_1);
      if (cVar6 == '\0') {
        cVar6 = FUN_144729dda(param_1 + 0x58);
        if (cVar6 != '\0') {
          plVar8 = (longlong *)FUN_14479d2ce(param_1 + 0x58);
          lVar9 = (**(code **)(*plVar8 + 0x2d0))(plVar8);
          if (lVar9 == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = FUN_1403f18c8(lVar9);
          }
          FUN_1447f69b6(lVar9 + 200);
        }
      }
      else {
        FUN_14825e6f6(param_1,&local_38);
        plVar8 = *(longlong **)(param_1 + 0x10);
        if (plVar8 == (longlong *)0x0) {
LAB_14825ed8e:
          local_48 = 0;
          plStack_40 = (longlong *)0x0;
          FUN_143af7cf8(local_38,&local_48,1);
        }
        else {
          iVar7 = (int)plVar8[1];
          do {
            if (iVar7 == 0) goto LAB_14825ed8e;
            LOCK();
            iVar3 = (int)plVar8[1];
            bVar10 = iVar7 == iVar3;
            if (bVar10) {
              *(int *)(plVar8 + 1) = iVar7 + 1;
              iVar3 = iVar7;
            }
            iVar7 = iVar3;
            UNLOCK();
          } while (!bVar10);
          uVar5 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
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
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          local_48 = uVar5;
          plStack_40 = plVar8;
          FUN_143af7cf8(local_38,&local_48,1);
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
        }
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_30 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar1 = (int *)((longlong)local_30 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_30 + 0x10))(local_30);
            }
          }
        }
      }
    }
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
      }
    }
  }
LAB_14825ec82:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14825eddc FUN_14825eddc body=139 status=ok
// SIG undefined FUN_14825eddc(void)

void FUN_14825eddc(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x98);
    lVar2 = (longlong)*(int *)(param_1 + 0xa0) * 0x18;
    do {
      uVar1 = DAT_14c98e618;
      local_30 = *(undefined8 *)(lVar3 + 8);
      local_28 = *(longlong *)(lVar3 + 0x10);
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      FUN_1456d46ea(uVar1,&local_30,lVar3);
      lVar3 = lVar3 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825ee68 FUN_14825ee68 body=144 status=ok
// SIG undefined FUN_14825ee68(void)

void FUN_14825ee68(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x98);
    lVar4 = 0;
    do {
      uVar3 = DAT_14c98e618;
      local_38 = *(undefined8 *)(lVar2 + 8 + lVar4);
      local_30 = *(longlong *)(lVar2 + 0x10 + lVar4);
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      FUN_145a3846a(uVar3,&local_38);
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825eefa FUN_14825eefa body=326 status=ok
// SIG undefined FUN_14825eefa(void)

ulonglong FUN_14825eefa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  
  lVar12 = param_1 + 0x58;
  cVar4 = FUN_144729dda(lVar12);
  if (cVar4 == '\0') {
    uVar10 = 0;
  }
  else {
    lVar6 = FUN_14479d2ce(lVar12);
    uVar10 = CONCAT71((int7)((ulonglong)lVar12 >> 8),*(undefined1 *)(lVar6 + 0x2fb));
  }
  plVar9 = *(longlong **)(param_1 + 0x68);
  if (plVar9 != (longlong *)0x0) {
    iVar5 = (int)plVar9[1];
    do {
      if (iVar5 == 0) goto LAB_14825f034;
      LOCK();
      iVar3 = (int)plVar9[1];
      bVar13 = iVar5 == iVar3;
      if (bVar13) {
        *(int *)(plVar9 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar13);
    lVar12 = *(longlong *)(param_1 + 0x60);
    plVar11 = plVar9;
    if ((char)uVar10 == '\x01' && lVar12 != 0) {
      do {
        lVar6 = lVar12 + 0x58;
        cVar4 = FUN_144729dda(lVar6);
        if (cVar4 == '\0') {
          uVar10 = 0;
        }
        else {
          lVar7 = FUN_14479d2ce(lVar6);
          uVar10 = CONCAT71((int7)((ulonglong)lVar6 >> 8),*(undefined1 *)(lVar7 + 0x2fb));
        }
        plVar8 = *(longlong **)(lVar12 + 0x68);
        if (plVar8 == (longlong *)0x0) {
LAB_14825efa5:
          plVar8 = (longlong *)0x0;
          lVar12 = 0;
        }
        else {
          iVar5 = (int)plVar8[1];
          do {
            if (iVar5 == 0) goto LAB_14825efa5;
            LOCK();
            iVar3 = (int)plVar8[1];
            bVar13 = iVar5 == iVar3;
            if (bVar13) {
              *(int *)(plVar8 + 1) = iVar5 + 1;
              iVar3 = iVar5;
            }
            iVar5 = iVar3;
            UNLOCK();
          } while (!bVar13);
          lVar12 = *(longlong *)(lVar12 + 0x60);
        }
        if (plVar8 == plVar11) {
          if (plVar11 == (longlong *)0x0) {
            plVar9 = (longlong *)0x0;
          }
          else {
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            plVar9 = plVar11;
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              iVar5 = *piVar2;
              UNLOCK();
              plVar1 = plVar8;
              plVar8 = plVar11;
              goto joined_r0x00014825efea;
            }
          }
        }
        else {
          plVar9 = plVar8;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar11 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              *piVar2 = *piVar2 + -1;
              iVar5 = *piVar2;
              UNLOCK();
              plVar1 = plVar11;
joined_r0x00014825efea:
              plVar9 = plVar8;
              if (iVar5 == 0) {
                (**(code **)(*plVar1 + 0x10))();
              }
            }
          }
        }
        plVar11 = plVar9;
      } while (((byte)uVar10 & lVar12 != 0) != 0);
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar9 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
LAB_14825f034:
  return uVar10 & 0xffffffff;
}



// FUNCTION 14825f040 FUN_14825f040 body=305 status=ok
// SIG undefined FUN_14825f040(void)

undefined8 * FUN_14825f040(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xd8,0x10);
  FUN_143af73d6(puVar2,param_2,param_3);
  *puVar2 = &PTR_FUN_14ae6ec00;
  puVar2[0x17] = 0;
  *(undefined4 *)(puVar2 + 0x18) = 0;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  *param_1 = puVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ae6f140;
  plVar3[2] = (longlong)puVar2;
  param_1[1] = plVar3;
  if ((puVar2 == (undefined8 *)0x0) ||
     (((puVar2[1] != 0 && (puVar2[2] != 0)) && (0 < *(int *)(puVar2[2] + 8))))) goto LAB_14825f15b;
  if (plVar3 == (longlong *)0x0) {
    puVar2[1] = puVar2;
    plVar4 = (longlong *)puVar2[2];
    if (plVar4 == (longlong *)0x0) goto LAB_14825f15b;
LAB_14825f112:
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    puVar2[2] = plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_14825f15b;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    puVar2[1] = puVar2;
    if ((longlong *)puVar2[2] != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = (longlong *)puVar2[2];
      if (plVar4 != (longlong *)0x0) goto LAB_14825f112;
      puVar2[2] = plVar3;
    }
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_14825f15b:
  (**(code **)(*(longlong *)*param_1 + 0x28))();
  return param_1;
}



// FUNCTION 14825f172 FUN_14825f172 body=28 status=ok
// SIG undefined FUN_14825f172(void)

undefined8 * FUN_14825f172(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14825e7ca();
  return param_2;
}



// FUNCTION 14825f19c FUN_14825f19c body=95 status=ok
// SIG undefined FUN_14825f19c(void)

void FUN_14825f19c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0xd0);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if (*(longlong *)(param_1 + 200) != 0) {
      FUN_14825df82();
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
                    /* WARNING: Could not recover jumptable at 0x00014825f1e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14825f1fc FUN_14825f1fc body=145 status=ok
// SIG undefined FUN_14825f1fc(void)

void FUN_14825f1fc(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14825eaf4();
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  lVar1 = FUN_140e94dc2(*(undefined8 *)(lVar1 + 0x20));
  local_40 = FUN_14825f28e;
  local_38 = 0;
  FUN_148263e40(local_30,param_1);
  FUN_1457bd49c(lVar1 + 0x30,&local_40,local_30);
  FUN_1449db362(local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825f28e FUN_14825f28e body=244 status=ok
// SIG undefined FUN_14825f28e(void)

void FUN_14825f28e(longlong *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  cVar3 = (**(code **)(*param_1 + 0x18))();
  if ((((cVar3 != '\0') && (param_1[0x19] != 0)) &&
      (plVar6 = (longlong *)param_1[0x1a], plVar6 != (longlong *)0x0)) && (0 < (int)plVar6[1])) {
    iVar4 = (int)plVar6[1];
    plVar5 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14825f2df;
      }
      LOCK();
      iVar2 = (int)plVar6[1];
      bVar7 = iVar4 == iVar2;
      if (bVar7) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
    } while (!bVar7);
    plVar5 = (longlong *)param_1[0x19];
LAB_14825f2df:
    cVar3 = (**(code **)(*plVar5 + 0x18))();
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    if ((cVar3 != '\0') && (FUN_143af85ae(param_1), param_2 != '\x01')) {
      plVar6 = (longlong *)param_1[0x1a];
      if (plVar6 == (longlong *)0x0) {
LAB_14825f330:
        FUN_14825df82(0);
        return;
      }
      iVar4 = (int)plVar6[1];
      do {
        if (iVar4 == 0) goto LAB_14825f330;
        LOCK();
        iVar2 = (int)plVar6[1];
        bVar7 = iVar4 == iVar2;
        if (bVar7) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
        UNLOCK();
      } while (!bVar7);
      FUN_14825df82(param_1[0x19]);
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014825f37e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14825f382 FUN_14825f382 body=288 status=ok
// SIG undefined FUN_14825f382(void)

void FUN_14825f382(longlong param_1,longlong param_2)

{
  undefined1 auStack_328 [32];
  undefined1 local_308 [568];
  undefined8 local_d0;
  undefined1 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_328;
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfb;
  FUN_144a88240(param_1 + 0x18,param_1);
  FUN_146a8a032(local_308);
  local_d0 = *(undefined8 *)(param_2 + 0x230);
  local_90 = *(undefined1 *)(param_2 + 0x268);
  FUN_14009d848(local_88,param_2 + 0x270);
  FUN_14009d848(local_78,param_2 + 0x280);
  FUN_14009d848(local_68,param_2 + 0x290);
  FUN_14009d848(local_58,param_2 + 0x2a0);
  FUN_140328a42(local_48,param_2 + 0x2b0);
  FUN_146a84ac2(param_1,local_308);
  FUN_146a8a232(local_308);
  FUN_140328a42(param_1 + 0x2a0,param_2 + 0x2c0);
  if ((local_38 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825f4a4 FUN_14825f4a4 body=88 status=ok
// SIG undefined FUN_14825f4a4(void)

undefined1 * FUN_14825f4a4(longlong param_1,undefined1 *param_2)

{
  if (*(char *)(param_1 + 0x2b0) == '\x01') {
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_146a85b94(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 14825f4fc FUN_14825f4fc body=88 status=ok
// SIG undefined FUN_14825f4fc(void)

undefined1 * FUN_14825f4fc(longlong param_1,undefined1 *param_2)

{
  if (*(char *)(param_1 + 0x2b0) == '\0') {
    FUN_146a8610c(param_1,param_2);
  }
  else {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  return param_2;
}



// FUNCTION 14825f554 FUN_14825f554 body=1113 status=ok
// SIG undefined FUN_14825f554(void)

undefined1 *
FUN_14825f554(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_198 [32];
  LARGE_INTEGER local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_158;
  undefined1 local_150 [136];
  undefined4 local_c8;
  undefined1 local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  lVar3 = *(longlong *)(param_4 + 0x20);
  plVar4 = *(longlong **)(param_4 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  fVar2 = *(float *)(param_4 + 0x40);
  if ((((int)param_1[0x41] != 0) && ((longlong *)param_1[0x40] != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*(longlong *)param_1[0x40] + 0x30))(), cVar6 != '\0')) {
    if ((int)param_1[0x41] == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)param_1[0x40];
    }
    uVar9 = (**(code **)(*plVar8 + 0x58))();
    *(undefined4 *)(param_1 + 0x3f) = uVar9;
  }
  fVar15 = *(float *)(param_1 + 0x3f);
  uVar9 = 0;
  fVar10 = (float)FUN_146a86a1e(param_1);
  if ((((int)param_1[0x3d] == 0) && (lVar3 == DAT_14c965770)) ||
     (((int)param_1[0x3d] == 1 && (lVar3 == DAT_14c965788)))) {
    local_178.s.LowPart._0_1_ = 1;
    local_158 = 0;
    local_170 = 0;
    uStack_168 = 0;
    memset(local_150,0,0x88);
    local_c8 = 0x20702;
    local_c4 = 0;
    FUN_1403d4924(param_2,&local_178);
  }
  else {
    FUN_140431476(param_1,&local_178,param_3,param_4);
    FUN_1403d4924(param_2,&local_178);
  }
  FUN_14493db24(&local_178);
  if (((char)param_1[0x56] == '\x01') && (0.5 < ABS(fVar2))) {
    fVar11 = ABS(fVar2) + -0.5;
    fVar11 = fVar11 + fVar11;
    fVar16 = 1.0;
    if (1.0 <= fVar11) {
      fVar11 = 1.0;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar14 = fVar11 * fVar11;
    fVar13 = fVar11 * fVar14;
    QueryPerformanceCounter(&local_178);
    dVar5 = (double)((fVar15 * 3.0 + -1.0) *
                     ((fVar14 * 3.0 - (fVar13 + fVar13)) +
                     (fVar13 - fVar14) * 0.0 +
                     (((fVar13 + fVar13) - fVar14 * 3.0) + 1.0) * 0.0 +
                     (fVar13 - (fVar14 + fVar14)) + fVar11) + 1.0);
    if (dVar5 < ((double)CONCAT71(local_178.QuadPart._1_7_,local_178.s.LowPart._0_1_) *
                 DAT_14c83f420 + 16777216.0) - (double)param_1[0x57]) {
      if (dVar5 < DAT_14c759090) {
        iVar7 = 1;
        if (1 < (int)(DAT_14c759090 / dVar5)) {
          iVar7 = (int)(DAT_14c759090 / dVar5);
        }
        fVar16 = (float)iVar7;
      }
      if ((((int)param_1[0x3d] == 0) && (lVar3 == DAT_14c965770)) ||
         (((int)param_1[0x3d] == 1 && (lVar3 == DAT_14c965788)))) {
        if (-0.5 <= fVar2) {
          if (fVar2 <= 0.5) goto LAB_14825f8aa;
        }
        else {
          uVar9 = 0x80000000;
          fVar15 = -fVar15;
        }
        fVar10 = fVar15 * fVar16 + fVar10;
        if (*(float *)((longlong)param_1 + 0x214) <= fVar10) {
          fVar10 = *(float *)((longlong)param_1 + 0x214);
        }
        if (fVar10 <= *(float *)(param_1 + 0x42)) {
          fVar10 = *(float *)(param_1 + 0x42);
        }
        (**(code **)(*param_1 + 0x240))(param_1,CONCAT44(uVar9,fVar10));
        uVar12 = FUN_146a86a1e(param_1);
        if (((int)param_1[0x55] != 0) &&
           (plVar8 = (longlong *)param_1[0x54], plVar8 != (longlong *)0x0)) {
          (**(code **)(*plVar8 + 0x60))(plVar8,uVar12);
        }
        QueryPerformanceCounter(&local_178);
        param_1[0x57] =
             (longlong)
             ((double)CONCAT71(local_178.QuadPart._1_7_,local_178.s.LowPart._0_1_) * DAT_14c83f420 +
             16777216.0);
      }
    }
  }
LAB_14825f8aa:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_c0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14825f9ae FUN_14825f9ae body=381 status=ok
// SIG undefined FUN_14825f9ae(void)

undefined8 FUN_14825f9ae(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78 [2];
  undefined8 local_68 [3];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)param_1[0x3d] != 0) {
LAB_14825f9e5:
    FUN_146a8565c(param_1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_98);
  }
  if (*(char *)(param_4 + 0x20) == '\x01') {
    fVar1 = *(float *)(param_1 + 0x42);
    fVar2 = *(float *)((longlong)param_1 + 0x214);
    fVar5 = (float)FUN_146a86a1e(param_1);
    fVar6 = (float)FUN_146a86b54(param_1);
    fVar8 = fVar5 + fVar6;
    if (fVar2 <= fVar5 + fVar6) {
      fVar8 = fVar2;
    }
    if (fVar8 <= fVar1) {
      fVar8 = fVar1;
    }
    (**(code **)(*param_1 + 0x240))(param_1,fVar8);
    uVar7 = FUN_146a86a1e(param_1);
    if (((int)param_1[0x55] != 0) && (plVar3 = (longlong *)param_1[0x54], plVar3 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar3 + 0x60))(plVar3,uVar7);
    }
    puVar4 = local_78;
  }
  else {
    if (*(char *)(param_4 + 0x20) != '\0') goto LAB_14825f9e5;
    fVar1 = *(float *)(param_1 + 0x42);
    fVar2 = *(float *)((longlong)param_1 + 0x214);
    fVar5 = (float)FUN_146a86a1e(param_1);
    fVar6 = (float)FUN_146a86b54(param_1);
    fVar8 = fVar5 - fVar6;
    if (fVar2 <= fVar5 - fVar6) {
      fVar8 = fVar2;
    }
    if (fVar8 <= fVar1) {
      fVar8 = fVar1;
    }
    (**(code **)(*param_1 + 0x240))(param_1,fVar8);
    uVar7 = FUN_146a86a1e(param_1);
    if (((int)param_1[0x55] != 0) && (plVar3 = (longlong *)param_1[0x54], plVar3 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar3 + 0x60))(plVar3,uVar7);
    }
    puVar4 = local_68;
  }
  *puVar4 = 0;
  puVar4[1] = 0;
  FUN_146a35cca(param_2);
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14825fb2c FUN_14825fb2c body=7 status=ok
// SIG undefined FUN_14825fb2c(void)

void FUN_14825fb2c(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2b0) = param_2;
  return;
}



// FUNCTION 14825fb34 FUN_14825fb34 body=371 status=ok
// SIG undefined FUN_14825fb34(void)

void FUN_14825fb34(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x180))();
  iVar6 = (**(code **)*plVar8)(plVar8);
  if (0 < iVar6) {
    iVar6 = 0;
    do {
      (**(code **)(*plVar8 + 0x10))(plVar8,&local_50,iVar6);
      if ((*(byte *)((longlong)local_50 + 0x39) & 0x19) != 0) {
        cVar5 = (**(code **)(*local_50 + 400))();
        if (cVar5 == '\0') {
          local_60 = local_50;
          local_58 = local_48;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
          }
          FUN_14825fb34(param_1,&local_60);
        }
        else {
          iVar7 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
            FUN_1469e5f1c(param_1,iVar7);
          }
          lVar4 = *param_1;
          *(longlong **)(lVar4 + (longlong)iVar7 * 0x10) = local_50;
          *(longlong **)(lVar4 + 8 + (longlong)iVar7 * 0x10) = local_48;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
          }
        }
      }
      plVar1 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = (**(code **)*plVar8)(plVar8);
    } while (iVar6 < iVar7);
  }
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14825fca8 FUN_14825fca8 body=1561 status=ok
// SIG undefined FUN_14825fca8(void)

undefined8 FUN_14825fca8(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = *(undefined8 *)(param_1 + 0x288);
  plVar10 = *(longlong **)(param_1 + 0x290);
  if (plVar10 == (longlong *)0x0) {
    local_a0 = (longlong *)0x0;
    FUN_14825fb34(&local_98);
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    local_a0 = plVar10;
    FUN_14825fb34(&local_98);
    LOCK();
    plVar3 = plVar10 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((int)uStack_90 < 1) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)0x0;
    lVar9 = 0;
    lVar7 = 0;
    do {
      FUN_14697de5c(*(undefined8 *)(local_98 + lVar9),&local_88,*(undefined4 *)(param_4 + 0xc));
      if ((local_88._1_1_ != '\0') ||
         (cVar6 = FUN_14697df48(*(undefined8 *)(local_98 + lVar9),*(undefined4 *)(param_4 + 0xc)),
         cVar6 != '\0')) {
        lVar2 = *(longlong *)(local_98 + lVar9);
        plVar10 = *(longlong **)(local_98 + 8 + lVar9);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        if (lVar2 == 0) break;
        cVar6 = *(char *)(param_4 + 0x20);
        local_d0 = lVar2;
        if (*(int *)(param_1 + 0x318) == 1) {
          if (cVar6 == '\x02') {
            lVar9 = 2;
LAB_14825ff0a:
            uVar8 = 0xffffffff;
          }
          else {
            if (cVar6 != '\x03') break;
            uVar8 = 1;
            lVar9 = 3;
          }
        }
        else {
          if (cVar6 == '\0') {
            lVar9 = 0;
            goto LAB_14825ff0a;
          }
          if (cVar6 != '\x01') break;
          uVar8 = 1;
          lVar9 = 1;
        }
        uVar12 = (ulonglong)uVar8 + lVar7;
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        local_e0 = param_3;
        local_d8 = param_2;
        if (((int)uVar12 < 0) || ((int)uStack_90 <= (int)uVar12)) {
          FUN_145bffa4c(param_1,&local_b8);
          if ((local_b8 == 0) || (*(char *)(local_b8 + 8 + lVar9 * 0x28) != '\x02')) {
            local_e4 = 0;
          }
          else {
            lVar7 = (longlong)(int)((int)lVar7 + uVar8 + (int)uStack_90);
            uVar12 = lVar7 % (longlong)(int)uStack_90 & 0xffffffff;
            local_e4 = (undefined4)
                       CONCAT71((uint7)((ulonglong)(lVar7 / (longlong)(int)uStack_90) >> 8) &
                                0xffffff,1);
          }
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_b0 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_b0)(local_b0);
              LOCK();
              piVar1 = (int *)((longlong)local_b0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_b0 + 0x10))(local_b0);
              }
            }
          }
        }
        else {
          local_e4 = 0;
        }
        if (((int)uVar12 < 0) || ((int)uStack_90 <= (int)uVar12)) goto LAB_148260175;
        goto LAB_14825ff58;
      }
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0x10;
    } while (lVar7 < (int)uStack_90);
  }
  goto LAB_14825fe40;
LAB_14825ff58:
  lVar7 = (uVar12 & 0xffffffff) * 0x10;
  plVar3 = *(longlong **)(local_98 + lVar7);
  plVar4 = *(longlong **)(local_98 + 8 + lVar7);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  cVar6 = (**(code **)(*plVar3 + 400))(plVar3);
  bVar13 = true;
  if (cVar6 == '\0') goto LAB_1482600bc;
  if ((char)local_e4 != '\0') goto LAB_14825ff98;
  lVar7 = FUN_144b013e4(local_d0);
  fVar15 = *(float *)(lVar7 + 0x20) * (float)DAT_14c84635c +
           *(float *)(lVar7 + 0x28) * DAT_14c84635c._4_4_ + *(float *)(lVar7 + 0x30);
  fVar14 = (float)DAT_14c84635c * *(float *)(lVar7 + 0x1c) +
           DAT_14c84635c._4_4_ * *(float *)(lVar7 + 0x24) + *(float *)(lVar7 + 0x2c);
  lVar7 = FUN_144b013e4(plVar3);
  cVar6 = *(char *)(param_4 + 0x20);
  if (*(int *)(param_1 + 0x318) != 1) {
    fVar15 = (float)DAT_14c84635c * *(float *)(lVar7 + 0x1c) +
             DAT_14c84635c._4_4_ * *(float *)(lVar7 + 0x24) + *(float *)(lVar7 + 0x2c);
    if (cVar6 == '\0') {
      if (fVar15 < fVar14) goto LAB_14825ff98;
    }
    else if ((cVar6 == '\x01') && (fVar14 < fVar15)) goto LAB_14825ff98;
LAB_1482600bc:
    if (plVar4 != (longlong *)0x0) goto LAB_1482600c1;
LAB_1482600e0:
    if (!bVar13) goto LAB_148260175;
    uVar11 = (int)uVar12 + uVar8;
    uVar12 = (ulonglong)uVar11;
    if (((int)uVar11 < 0) || ((int)uStack_90 <= (int)uVar11)) goto LAB_148260175;
    goto LAB_14825ff58;
  }
  fVar14 = (float)DAT_14c84635c * *(float *)(lVar7 + 0x20) +
           DAT_14c84635c._4_4_ * *(float *)(lVar7 + 0x28) + *(float *)(lVar7 + 0x30);
  if (cVar6 == '\x03') {
    if (fVar15 < fVar14) goto LAB_14825ff98;
    goto LAB_1482600bc;
  }
  if ((cVar6 != '\x02') || (fVar15 <= fVar14)) goto LAB_1482600bc;
LAB_14825ff98:
  plVar5 = plStack_80;
  local_88 = plVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == plStack_80) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    else {
      bVar13 = plStack_80 != (longlong *)0x0;
      plStack_80 = plVar4;
      if (bVar13) goto LAB_14826009a;
    }
    bVar13 = false;
LAB_1482600c1:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    goto LAB_1482600e0;
  }
  if (plStack_80 != (longlong *)0x0) {
    plStack_80 = (longlong *)0x0;
LAB_14826009a:
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    bVar13 = false;
    goto LAB_1482600bc;
  }
LAB_148260175:
  plVar3 = plStack_80;
  if (local_88 != (longlong *)0x0) {
    local_f8 = *(undefined4 *)(param_1 + 0x2e8);
    FUN_146a98b20(param_1,&local_88,1,*(undefined1 *)(param_1 + 0x2ec));
    param_2 = local_d8;
    local_c8 = local_88;
    local_c0 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
      UNLOCK();
    }
    FUN_146a35cca(local_d8,&local_c8);
    plVar3 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_80 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    goto LAB_14825fe51;
  }
  param_3 = local_e0;
  param_2 = local_d8;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_80 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      param_3 = local_e0;
      param_2 = local_d8;
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        param_3 = local_e0;
        param_2 = local_d8;
      }
    }
  }
LAB_14825fe40:
  FUN_145bff8f6(param_1,param_2,param_3,param_4);
LAB_14825fe51:
  FUN_1404578a2(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1482602c2 FUN_1482602c2 body=354 status=ok
// SIG undefined FUN_1482602c2(void)

void FUN_1482602c2(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined1 local_224;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined1 local_210 [440];
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_146b0f50a(local_210);
  local_228 = *(undefined4 *)(param_2 + 0x1a8);
  local_224 = 1;
  local_220 = 0;
  uStack_218 = 0;
  local_54 = 1;
  local_58 = local_228;
  FUN_144a450dc(local_50,&local_220);
  FUN_1449db362(&local_220);
  FUN_146aa12da(param_1,local_210);
  FUN_146b0f610(local_210);
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfb;
  FUN_144a88240(param_1 + 0x18,param_1);
  *(undefined1 *)(param_1 + 0x2dd) = 0;
  plVar2 = *(longlong **)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x2d8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2df) = *(undefined1 *)(param_2 + 0x1ac);
  *(undefined1 *)(param_1 + 0x2dc) = *(undefined1 *)(param_2 + 0x1b4);
  FUN_148260426(param_1,*(undefined4 *)(param_2 + 0x1b0),*(undefined1 *)(param_2 + 0x1ad));
  FUN_140146ccc(param_1 + 0x2e0,param_2 + 0x1b8);
  FUN_14114e6dc(param_1 + 0x2f0,param_2 + 0x1c8);
  if ((local_40 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148260426 FUN_148260426 body=131 status=ok
// SIG undefined FUN_148260426(void)

void FUN_148260426(longlong param_1,undefined4 param_2,byte param_3,undefined1 param_4)

{
  undefined1 auStack_a8 [32];
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined1 *)(param_1 + 0x2df) = param_4;
  if (6 < param_3) {
    param_3 = 0;
  }
  FUN_14692f10e(local_88,0,param_2,param_3);
  FUN_146980d02(param_1 + 600,local_88);
  FUN_1402bc42a(local_88);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482604aa FUN_1482604aa body=307 status=ok
// SIG undefined FUN_1482604aa(void)

void FUN_1482604aa(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 *param_7,undefined1 param_8)

{
  char cVar1;
  uint uVar2;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 *local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *param_7;
  uStack_70 = param_7[1];
  local_68 = *(undefined4 *)(param_7 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_7 + 0x14);
  uStack_60 = *(undefined4 *)(param_7 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_7 + 0x1c);
  local_58 = *(undefined4 *)(param_7 + 4);
  uStack_54 = *(undefined4 *)((longlong)param_7 + 0x24);
  uStack_50 = *(undefined4 *)(param_7 + 5);
  uStack_4c = *(undefined4 *)((longlong)param_7 + 0x2c);
  cVar1 = FUN_1459b8360(param_1 + 600);
  if (cVar1 == '\0') goto LAB_14826058d;
  auVar4._0_8_ = FUN_14692f614(param_1 + 600);
  auVar4._8_8_ = extraout_XMM0_Qb;
  if (*(char *)(param_1 + 0x2dd) == '\x01') {
    if ((*(byte *)(param_1 + 0x2c0) & 1) == 0) {
LAB_148260544:
      auVar4 = ZEXT416((uint)(1.0 - (float)auVar4._0_8_));
    }
  }
  else if ((*(byte *)(param_1 + 0x2c0) & 1) != 0) goto LAB_148260544;
  if (*(char *)(param_1 + 0x2df) == '\x04') {
    uVar2 = -(uint)(ABS(auVar4._0_4_) <= 1e-08);
    auVar3._0_4_ = (uint)auVar4._0_4_ & uVar2;
    auVar3._4_4_ = 0;
    auVar3._8_4_ = auVar4._8_4_ & auVar4._8_4_ & 0x7fffffff;
    auVar3._12_4_ = auVar4._12_4_ & auVar4._12_4_ & 0x7fffffff;
    auVar4 = auVar3 | ZEXT416(~uVar2 & 0x3f800000);
  }
  uStack_70 = CONCAT44(auVar4._0_4_ * uStack_70._4_4_,(undefined4)uStack_70);
LAB_14826058d:
  local_80 = param_8;
  local_88 = &local_78;
  local_90 = param_6;
  local_98 = param_5;
  FUN_144906104(param_1,param_2,param_3,param_4);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482605de FUN_1482605de body=386 status=ok
// SIG undefined FUN_1482605de(void)

longlong * FUN_1482605de(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1482606ef:
    *puVar5 = &PTR_LAB_149ed0600;
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
    *puVar5 = &PTR_FUN_14ae6f240;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1482606ef;
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
    *puVar5 = &PTR_LAB_149ed0600;
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
    *puVar5 = &PTR_FUN_14ae6f240;
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



// FUNCTION 148260780 FUN_148260780 body=271 status=ok
// SIG undefined FUN_148260780(void)

void FUN_148260780(longlong param_1,int param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  double dVar7;
  
  plVar5 = *(longlong **)(param_3 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  iVar4 = *(int *)(param_1 + 0x2d8);
  if (-1 < iVar4) {
    if (iVar4 == param_2) {
      FUN_143af9ae8(param_1);
    }
    else if (iVar4 < param_2) {
      *(int *)(param_1 + 0x2d8) = iVar4 + -1;
    }
  }
  if (param_4 != '\0') {
    lVar3 = param_1 + 600;
    cVar6 = FUN_1459b8360(lVar3);
    if (cVar6 != '\0') {
      cVar6 = FUN_14692f5d6(lVar3);
      if (cVar6 == '\0') {
        FUN_14692f5e4(lVar3);
      }
      else {
        *(byte *)(param_1 + 0x2c0) = *(byte *)(param_1 + 0x2c0) & 0xf8;
        dVar7 = (double)(**(code **)(*DAT_14c968098 + 0x60))();
        *(double *)(param_1 + 0x2a8) = dVar7 - *(double *)(param_1 + 0x2b8);
      }
      if (*(char *)(param_1 + 0x2dd) == '\0') {
        FUN_148260890(param_1,param_2);
      }
    }
  }
  plVar5 = *(longlong **)(param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014826080a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148260890 FUN_148260890 body=211 status=ok
// SIG undefined FUN_148260890(void)

void FUN_148260890(longlong param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  
  cVar2 = *(char *)(param_1 + 0x2dc);
  if ((cVar2 != '\0') && (iVar1 = *(int *)(param_1 + 0x218), 0 < iVar1)) {
    iVar3 = param_2;
    if ((cVar2 != '\x02') && (iVar3 = 0, cVar2 != '\x03')) {
      if (cVar2 == '\x04') {
        iVar3 = iVar1 + -1;
      }
      else {
        iVar3 = param_2 + -1;
      }
    }
    iVar5 = iVar1 + -1;
    if (iVar3 < iVar1 + -1) {
      iVar5 = iVar3;
    }
    iVar1 = 0;
    if (0 < iVar5) {
      iVar1 = iVar5;
    }
    FUN_146aa1730(param_1,iVar1);
    if (((*(int *)(param_1 + 0x1f0) != 0) && (*(longlong **)(param_1 + 0x1e8) != (longlong *)0x0))
       && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x30))(), cVar2 != '\0')) {
      if (*(int *)(param_1 + 0x1f0) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x1e8);
      }
      uVar4 = (**(code **)(*plVar6 + 0x58))();
      *(undefined4 *)(param_1 + 0x1e0) = uVar4;
    }
    if ((*(int *)(param_1 + 0x2e8) != 0) &&
       (plVar6 = *(longlong **)(param_1 + 0x2e0), plVar6 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014826095c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x60))(plVar6,*(undefined4 *)(param_1 + 0x1e0));
      return;
    }
  }
  return;
}



// FUNCTION 148260964 FUN_148260964 body=87 status=ok
// SIG undefined FUN_148260964(void)

float FUN_148260964(longlong param_1)

{
  byte bVar1;
  float fVar2;
  
  fVar2 = (float)FUN_14692f614(param_1 + 600);
  if (*(char *)(param_1 + 0x2dd) == '\x01') {
    bVar1 = *(byte *)(param_1 + 0x2c0) & 1;
  }
  else {
    bVar1 = FUN_14692f5d6(param_1 + 600);
  }
  if (bVar1 != 0) {
    fVar2 = fVar2 + -1.0;
  }
  return fVar2;
}



// FUNCTION 1482609bc FUN_1482609bc body=150 status=ok
// SIG undefined FUN_1482609bc(void)

void FUN_1482609bc(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar3 = FUN_146aa1480(param_1,&local_28);
  FUN_146aa1730(param_1,uVar3);
  puVar2 = (undefined8 *)param_2[1];
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



// FUNCTION 148260a64 FUN_148260a64 body=12 status=ok
// SIG undefined FUN_148260a64(void)

void FUN_148260a64(longlong param_1)

{
  FUN_1459b8360(param_1 + 600);
  return;
}



// FUNCTION 148260a70 thunk_FUN_140a58268 body=5 status=ok
// SIG undefined thunk_FUN_140a58268(void)

void thunk_FUN_140a58268(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined8 *puStack_e0;
  int iStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined8 *puStack_c8;
  int iStack_c0;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  undefined8 *puStack_b0;
  int iStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined8 *puStack_98;
  int iStack_90;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined8 *puStack_80;
  int iStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined8 *puStack_68;
  int iStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined8 *puStack_50;
  int iStack_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined8 *puStack_38;
  int iStack_30;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uStack_40 = *(undefined4 *)(param_2 + 0x1e8);
  uStack_3c = *(undefined1 *)(param_2 + 0x1ec);
  puStack_38 = (undefined8 *)0x0;
  iStack_30 = 0;
  FUN_140a58922(&puStack_38,param_2 + 0x1f0);
  FUN_140a58a98(param_1 + 0x230,param_1,&uStack_40);
  if (iStack_30 == 0) {
LAB_140a582e8:
    if (puStack_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)(puStack_38,0);
    FUN_1446efa72(&puStack_38,0,0,0x10);
    iStack_30 = 0;
    goto LAB_140a582e8;
  }
  uStack_54 = *(undefined1 *)(param_2 + 0x204);
  uStack_58 = *(undefined4 *)(param_2 + 0x200);
  puStack_50 = (undefined8 *)0x0;
  iStack_48 = 0;
  FUN_140a58922(&puStack_50,param_2 + 0x208);
  FUN_140a58a98(param_1 + 0x234,param_1,&uStack_58);
  if (iStack_48 == 0) {
LAB_140a58355:
    if (puStack_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (puStack_50 != (undefined8 *)0x0) {
    (**(code **)*puStack_50)(puStack_50,0);
    FUN_1446efa72(&puStack_50,0,0,0x10);
    iStack_48 = 0;
    goto LAB_140a58355;
  }
  uStack_6c = *(undefined1 *)(param_2 + 0x21c);
  uStack_70 = *(undefined4 *)(param_2 + 0x218);
  puStack_68 = (undefined8 *)0x0;
  iStack_60 = 0;
  FUN_140a58922(&puStack_68,param_2 + 0x220);
  FUN_140a58a98(param_1 + 0x238,param_1,&uStack_70);
  if (iStack_60 == 0) {
LAB_140a583c2:
    if (puStack_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (puStack_68 != (undefined8 *)0x0) {
    (**(code **)*puStack_68)(puStack_68,0);
    FUN_1446efa72(&puStack_68,0,0,0x10);
    iStack_60 = 0;
    goto LAB_140a583c2;
  }
  uStack_84 = *(undefined1 *)(param_2 + 0x234);
  uStack_88 = *(undefined4 *)(param_2 + 0x230);
  puStack_80 = (undefined8 *)0x0;
  iStack_78 = 0;
  FUN_140a58922(&puStack_80,param_2 + 0x238);
  FUN_140a58a98(param_1 + 0x23c,param_1,&uStack_88);
  if (iStack_78 == 0) {
LAB_140a5842f:
    if (puStack_80 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (puStack_80 != (undefined8 *)0x0) {
    (**(code **)*puStack_80)(puStack_80,0);
    FUN_1446efa72(&puStack_80,0,0,0x10);
    iStack_78 = 0;
    goto LAB_140a5842f;
  }
  uStack_9c = *(undefined1 *)(param_2 + 0x24c);
  uStack_a0 = *(undefined4 *)(param_2 + 0x248);
  puStack_98 = (undefined8 *)0x0;
  iStack_90 = 0;
  FUN_140a58922(&puStack_98,param_2 + 0x250);
  FUN_140a58a98(param_1 + 0x240,param_1,&uStack_a0);
  if (iStack_90 == 0) {
LAB_140a5849c:
    if (puStack_98 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)(puStack_98,0);
    FUN_1446efa72(&puStack_98,0,0,0x10);
    iStack_90 = 0;
    goto LAB_140a5849c;
  }
  uStack_b4 = *(undefined1 *)(param_2 + 0x264);
  uStack_b8 = *(undefined4 *)(param_2 + 0x260);
  puStack_b0 = (undefined8 *)0x0;
  iStack_a8 = 0;
  FUN_140a58922(&puStack_b0,param_2 + 0x268);
  FUN_140a58a98(param_1 + 0x244,param_1,&uStack_b8);
  if (iStack_a8 == 0) {
LAB_140a58509:
    if (puStack_b0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)(puStack_b0,0);
    FUN_1446efa72(&puStack_b0,0,0,0x10);
    iStack_a8 = 0;
    goto LAB_140a58509;
  }
  uStack_cc = *(undefined1 *)(param_2 + 0x27c);
  uStack_d0 = *(undefined4 *)(param_2 + 0x278);
  puStack_c8 = (undefined8 *)0x0;
  iStack_c0 = 0;
  FUN_140a58922(&puStack_c8,param_2 + 0x280);
  FUN_140a58a98(param_1 + 0x248,param_1,&uStack_d0);
  if (iStack_c0 == 0) {
LAB_140a58570:
    if (puStack_c8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)(puStack_c8,0);
    FUN_1446efa72(&puStack_c8,0,0,0x10);
    iStack_c0 = 0;
    goto LAB_140a58570;
  }
  uStack_e4 = *(undefined1 *)(param_2 + 0x294);
  uStack_e8 = *(undefined4 *)(param_2 + 0x290);
  puStack_e0 = (undefined8 *)0x0;
  iStack_d8 = 0;
  FUN_140a58922(&puStack_e0,param_2 + 0x298);
  FUN_140a58a98(param_1 + 0x24c,param_1,&uStack_e8);
  if (iStack_d8 != 0) {
    if (puStack_e0 == (undefined8 *)0x0) goto LAB_140a585e2;
    (**(code **)*puStack_e0)(puStack_e0,0);
    FUN_1446efa72(&puStack_e0,0,0,0x10);
    iStack_d8 = 0;
  }
  if (puStack_e0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a585e2:
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_2 + 0x1ac);
  uStack_108 = *(undefined1 *)(param_2 + 0x1c0);
  uStack_118 = *(undefined4 *)(param_2 + 0x1b0);
  uStack_114 = *(undefined4 *)(param_2 + 0x1b4);
  uStack_110 = *(undefined4 *)(param_2 + 0x1b8);
  uStack_10c = *(undefined4 *)(param_2 + 0x1bc);
  uStack_100 = 0;
  uStack_f8 = 0;
  FUN_140a58be0(&uStack_100,param_2 + 0x1c8);
  uVar1 = FUN_140a58d14(param_1 + 0x218,&uStack_118);
  FUN_140a58896(uVar1,param_2 + 0x1d8);
  if ((uStack_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148260a76 FUN_148260a76 body=54 status=ok
// SIG undefined FUN_148260a76(void)

void FUN_148260a76(longlong param_1,double *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((((*param_2 == *(double *)(param_1 + 0x260)) &&
       (!NAN(*param_2) && !NAN(*(double *)(param_1 + 0x260)))) &&
      (param_2[1] == *(double *)(param_1 + 0x268))) &&
     (!NAN(param_2[1]) && !NAN(*(double *)(param_1 + 0x268)))) {
    return;
  }
  uVar1 = *(undefined4 *)param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x260) = uVar1;
  *(undefined4 *)(param_1 + 0x264) = uVar2;
  *(undefined4 *)(param_1 + 0x268) = uVar3;
  *(undefined4 *)(param_1 + 0x26c) = uVar4;
  FUN_140163244(uVar1,1);
  return;
}



// FUNCTION 148260aac FUN_148260aac body=520 status=ok
// SIG undefined FUN_148260aac(void)

void FUN_148260aac(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_e8 [32];
  float local_c8;
  float local_c4;
  float local_c0;
  undefined8 local_bc;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  byte local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = (float)(-*(double *)(param_1 + 0x268) * *(double *)(param_1 + 600));
  local_b4 = (float)(-*(double *)(param_1 + 0x260) * *(double *)(param_1 + 0x250));
  local_c4 = (float)*(double *)(param_1 + 600);
  local_c8 = (float)*(double *)(param_1 + 0x250);
  local_c0 = *(float *)(param_2 + 8);
  local_94 = *(byte *)(param_2 + 0x34) & 1;
  local_ac = *(float *)(param_2 + 0x1c);
  local_a8 = *(float *)(param_2 + 0x20);
  fVar1 = *(float *)(param_2 + 0x28);
  fVar2 = *(float *)(param_2 + 0x24);
  local_98 = local_b4 * local_a8 + fVar1 * local_b0 + *(float *)(param_2 + 0x30);
  local_9c = local_b4 * local_ac + fVar2 * local_b0 + *(float *)(param_2 + 0x2c);
  local_a0 = local_a8 * 0.0 + fVar1;
  local_a4 = local_ac * 0.0 + fVar2;
  local_a8 = fVar1 * 0.0 + local_a8;
  local_ac = fVar2 * 0.0 + local_ac;
  local_bc = CONCAT44(local_c0 * local_b0 + *(float *)(param_2 + 0x10),
                      local_c0 * local_b4 + *(float *)(param_2 + 0xc));
  FUN_14051906a();
  if ((local_90 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148260cb6 FUN_148260cb6 body=90 status=ok
// SIG undefined FUN_148260cb6(void)

undefined8 * FUN_148260cb6(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14141a3ca(param_1,&local_30);
  *(undefined8 *)(param_1 + 0x250) = local_30;
  *(undefined8 *)(param_1 + 600) = uStack_28;
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148260d18 FUN_148260d18 body=193 status=ok
// SIG undefined FUN_148260d18(void)

void FUN_148260d18(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_148260dda(param_1,&local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148260dda FUN_148260dda body=120 status=ok
// SIG undefined FUN_148260dda(void)

void FUN_148260dda(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_21;
  undefined *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = &local_21;
  local_20 = &DAT_143afb326;
  local_30 = *param_2;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_148261a56(param_1,&local_30,&local_20);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148260e6e FUN_148260e6e body=38 status=ok
// SIG undefined FUN_148260e6e(void)

void FUN_148260e6e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148260e94();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148260e94 FUN_148260e94 body=187 status=ok
// SIG undefined FUN_148260e94(void)

undefined8 FUN_148260e94(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x250) == 0) {
    uVar5 = 0;
  }
  else {
    lVar4 = FUN_146aa140e();
    if (lVar4 == 0) {
      local_28 = 0;
      plStack_20 = (longlong *)0x0;
    }
    else {
      local_28 = *(undefined8 *)(lVar4 + 0x10);
      plVar3 = *(longlong **)(lVar4 + 0x18);
      plStack_20 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        uVar5 = FUN_148261130();
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
        goto LAB_148260eb7;
      }
    }
    uVar5 = FUN_148261130(&local_28);
  }
LAB_148260eb7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148260f6e FUN_148260f6e body=161 status=ok
// SIG undefined FUN_148260f6e(void)

void FUN_148260f6e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 != 0) {
    FUN_143af9cd2(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148261010 FUN_148261010 body=268 status=ok
// SIG undefined FUN_148261010(void)

void FUN_148261010(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [43];
  undefined1 local_1d;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_1d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x184) = local_1c;
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_148260426(*(longlong *)(param_1 + 0x250),local_1c,*(undefined1 *)(param_1 + 0x181),local_1d)
    ;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148261130 FUN_148261130 body=241 status=ok
// SIG undefined FUN_148261130(void)

longlong FUN_148261130(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *param_1;
  if ((lVar5 != 0) && (lVar5 != DAT_14c98dec8)) {
    FUN_1414927ae(lVar5,&local_28);
    FUN_1446f470e(&local_30,L"SObjectWidget",1);
    if ((local_28 == local_30) && (local_24 == local_2c)) {
      lVar5 = *param_1;
      plVar3 = (longlong *)param_1[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      lVar5 = *(longlong *)(lVar5 + 0x278);
      if (lVar5 == 0) {
LAB_1482611d5:
        lVar5 = 0;
      }
      else {
        lVar4 = FUN_14110d11e();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_1482611d5;
      }
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
      if (lVar5 != 0) goto LAB_148261200;
    }
  }
  lVar5 = 0;
LAB_148261200:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148261222 FUN_148261222 body=1578 status=ok
// SIG undefined FUN_148261222(void)

undefined8 * FUN_148261222(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_738 [32];
  undefined1 *local_718;
  undefined1 local_709;
  undefined1 local_708 [8];
  longlong *local_700;
  undefined1 local_6e9;
  undefined8 local_6e8;
  longlong *local_6e0;
  undefined2 local_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  longlong *local_6b0;
  undefined8 local_6a8;
  longlong *local_6a0;
  undefined1 local_691;
  undefined8 local_690;
  longlong *local_688;
  undefined8 local_678;
  longlong *local_670;
  undefined8 local_668;
  longlong *local_660;
  undefined8 local_658;
  longlong *local_650;
  undefined1 local_648 [88];
  undefined1 local_5f0 [88];
  code *local_598;
  undefined4 local_590;
  undefined2 local_528;
  undefined1 local_520 [328];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [428];
  undefined1 local_21c;
  undefined1 local_21b;
  undefined4 local_218;
  undefined1 local_214;
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [440];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_738;
  FUN_140a504fe(local_1f0);
  FUN_140a4fdf2(local_5f0,0);
  FUN_14821ee68(local_3c8);
  local_21b = *(undefined1 *)(param_1 + 0x181);
  local_218 = *(undefined4 *)(param_1 + 0x184);
  local_21c = *(undefined1 *)(param_1 + 0x180);
  local_214 = *(undefined1 *)(param_1 + 0x188);
  local_598 = FUN_143afa3a4;
  local_590 = 0;
  FUN_14826184e(local_3c8,param_1,&local_598);
  local_598 = FUN_143afa91a;
  local_590 = 0;
  FUN_148261944(local_3c8,param_1,&local_598);
  local_718 = &local_691;
  FUN_14824a8c6(&local_690,"SCommonAnimatedSwitcher",
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/Widgets/CommonActivatableWidgetContainer.cpp"
                ,0x66);
  if (local_688 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_688 + 1) = (int)local_688[1] + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 600);
  *(undefined8 *)(param_1 + 0x250) = local_690;
  *(longlong **)(param_1 + 600) = local_688;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  FUN_14821f11e(&local_690,&local_678,local_3c8);
  local_668 = local_678;
  local_660 = local_670;
  if (local_670 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_670 + 1) = (int)local_670[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_140a4fd40(local_5f0,&local_668);
  uVar4 = FUN_140a5058c(local_1f0,uVar4);
  FUN_140a4fdf2(local_648,0);
  FUN_140a50678(&local_598);
  local_6d0 = CONCAT11(1,DAT_14c96b1e1);
  local_6c8 = 0;
  uStack_6c0 = 0;
  local_528 = local_6d0;
  FUN_144a450dc(local_520,&local_6c8);
  FUN_1449db362(&local_6c8);
  local_718 = &local_6e9;
  FUN_140a52ce6(&local_6e8,"SSpacer",
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/Widgets/CommonActivatableWidgetContainer.cpp"
                ,0x70);
  if (local_6e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6e0 + 1) = (int)local_6e0[1] + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x240) = local_6e8;
  *(longlong **)(param_1 + 0x248) = local_6e0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  FUN_140a50c6a(&local_6e8,&local_6b8,&local_598);
  local_6a8 = local_6b8;
  local_6a0 = local_6b0;
  if (local_6b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6b0 + 1) = (int)local_6b0[1] + 1;
    UNLOCK();
  }
  uVar5 = FUN_140a4fd40(local_648,&local_6a8);
  uVar4 = FUN_140a5058c(uVar4,uVar5);
  local_718 = &local_709;
  FUN_140a536a8(local_708,"SOverlay",
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/Widgets/CommonActivatableWidgetContainer.cpp"
                ,99);
  FUN_140a4ff16(local_708,&local_658,uVar4);
  plVar3 = local_650;
  if (local_650 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x230) = local_658;
    plVar6 = *(longlong **)(param_1 + 0x238);
    if (plVar6 == (longlong *)0x0) goto LAB_148261568;
    *(undefined8 *)(param_1 + 0x238) = 0;
LAB_148261811:
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_148261568;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_650 + 1) = (int)local_650[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x230) = local_658;
    plVar6 = *(longlong **)(param_1 + 0x238);
    if (local_650 != plVar6) {
      *(longlong **)(param_1 + 0x238) = local_650;
      if (plVar6 == (longlong *)0x0) goto LAB_148261568;
      goto LAB_148261811;
    }
    LOCK();
    plVar6 = local_650 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_148261568;
    (**(code **)*local_650)(local_650);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar3;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_148261568:
  if (local_650 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_650 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_650)(local_650);
      LOCK();
      piVar1 = (int *)((longlong)local_650 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_650 + 0x10))(local_650);
      }
    }
  }
  if (local_700 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_700 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_700)(local_700);
      LOCK();
      piVar1 = (int *)((longlong)local_700 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_700 + 0x10))(local_700);
      }
    }
  }
  plVar3 = local_6a0;
  if (local_6a0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_6a0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_6a0)(local_6a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_6b0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_6b0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_6b0)(local_6b0);
      LOCK();
      piVar1 = (int *)((longlong)local_6b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_6b0 + 0x10))(local_6b0);
      }
    }
  }
  if (local_6e0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_6e0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_6e0)(local_6e0);
      LOCK();
      piVar1 = (int *)((longlong)local_6e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_6e0 + 0x10))(local_6e0);
      }
    }
  }
  FUN_1449db362(local_3d8);
  FUN_140a4ff8c(&local_598);
  FUN_1415b5e50(local_648);
  plVar3 = local_660;
  if (local_660 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_660 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_660)(local_660);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_670 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_670 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_670)(local_670);
      LOCK();
      piVar1 = (int *)((longlong)local_670 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_670 + 0x10))(local_670);
      }
    }
  }
  if (local_688 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_688 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_688)(local_688);
      LOCK();
      piVar1 = (int *)((longlong)local_688 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_688 + 0x10))(local_688);
      }
    }
  }
  FUN_1449db362(local_200);
  FUN_1449db362(local_210);
  FUN_140a4ff8c(local_3c8);
  FUN_1415b5e50(local_5f0);
  FUN_1415b5e16(local_1f0);
  FUN_146aa0f24(*(undefined8 *)(param_1 + 0x250),local_3c8,0xffffffff);
  FUN_146a6ab32(local_3c8,&DAT_14c98dec8);
  FUN_146b0f73a(local_3c8);
  uVar4 = *(undefined8 *)(param_1 + 0x230);
  plVar3 = *(longlong **)(param_1 + 0x238);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = uVar4;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = uVar4;
    param_2[1] = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_738) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14826184e FUN_14826184e body=245 status=ok
// SIG undefined FUN_14826184e(void)

longlong FUN_14826184e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e35290;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14ae6f2b0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x1b8,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148261944 FUN_148261944 body=245 status=ok
// SIG undefined FUN_148261944(void)

longlong FUN_148261944(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14ae6f320;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x1c8,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148261a3a FUN_148261a3a body=28 status=ok
// SIG undefined FUN_148261a3a(void)

void FUN_148261a3a(undefined8 param_1)

{
  FUN_1433350e2();
  FUN_143afa3a4(param_1,0);
  return;
}



// FUNCTION 148261a56 FUN_148261a56 body=138 status=ok
// SIG undefined FUN_148261a56(void)

longlong FUN_148261a56(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar1 = FUN_148261ae2(param_1 + 0x1a8,&local_28);
  if (lVar1 != 0) {
    (*(code *)*param_3)(param_3[1],lVar1);
    FUN_143af9c16(param_1,lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148261ae2 FUN_148261ae2 body=120 status=ok
// SIG undefined FUN_148261ae2(void)

void FUN_148261ae2(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_21;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = &local_21;
  local_20 = FUN_14826519a;
  local_30 = *param_2;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_148264d30(param_1,&local_30,&local_20);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148261b5c FUN_148261b5c body=274 status=ok
// SIG undefined FUN_148261b5c(void)

undefined8
FUN_148261b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14ae6f040;
  local_50[1] = *param_5;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_14ae6f400;
  local_50[3] = 0;
  FUN_14485c47a(local_50 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148261c70 FUN_148261c70 body=394 status=ok
// SIG undefined FUN_148261c70(void)

void FUN_148261c70(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1412719b8();
  if ((param_1[0x53] == 0) && (lVar7 = param_1[0x52], lVar7 != 0)) {
    lVar6 = FUN_14110d11e();
    if ((lVar6 != 0) &&
       (((*(int *)(lVar6 + 0x38) <= *(int *)(lVar7 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) && (lVar7 = param_1[0x52], lVar7 != 0)))) {
      local_58 = lVar7;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
      }
      lVar7 = FUN_143afaad7(param_1,&local_58);
      if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar7);
      }
      param_1[0x53] = lVar7;
      if (*(int *)(param_1[0x4a] + 0x218) < 1) {
        lVar6 = 0;
      }
      else {
        lVar6 = **(longlong **)(param_1[0x4a] + 0x210);
      }
      uStack_40 = &local_49;
      local_48 = FUN_143336ee2;
      FUN_1407616b4(lVar7,&local_68,&local_48);
      FUN_14149270a(lVar6);
      uVar3 = *(undefined8 *)(lVar6 + 0x10);
      uVar4 = *(undefined8 *)(lVar6 + 0x18);
      *(ulonglong *)(lVar6 + 0x10) = CONCAT44(uStack_64,local_68);
      *(ulonglong *)(lVar6 + 0x18) = CONCAT44(uStack_5c,uStack_60);
      local_48._0_4_ = (undefined4)uVar3;
      local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar4;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_68 = (undefined4)local_48;
      uStack_64 = local_48._4_4_;
      uStack_60 = (undefined4)uStack_40;
      uStack_5c = uStack_40._4_4_;
      local_48 = (code *)uVar3;
      uStack_40 = (undefined1 *)uVar4;
      FUN_140a5503c(lVar6);
      plVar5 = (longlong *)CONCAT44(uStack_5c,uStack_60);
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
      (**(code **)(*param_1 + 0x2b0))(param_1,4);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148261dfc FUN_148261dfc body=235 status=ok
// SIG undefined FUN_148261dfc(void)

void FUN_148261dfc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d9;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 local_c8 [160];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_146aa0f24(*(longlong *)(param_1 + 0x250),local_c8,0xffffffff);
    local_d0 = &local_d9;
    local_d8 = FUN_143336ee2;
    FUN_1407616b4(param_2,local_f0);
    FUN_147787cc2(local_c8,local_f0);
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)local_e8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_e8 + 0x10))(local_e8);
        }
      }
    }
    FUN_146b0f73a(local_c8);
    FUN_143afa182(param_1,*(int *)(*(longlong *)(param_1 + 0x250) + 0x218) + -1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148261ee8 FUN_148261ee8 body=38 status=ok
// SIG undefined FUN_148261ee8(void)

undefined8 FUN_148261ee8(undefined8 param_1,int param_2)

{
  FUN_143af7578();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148261f10 FUN_148261f10 body=45 status=ok
// SIG undefined FUN_148261f10(void)

longlong FUN_148261f10(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14595f87a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148261f3e FUN_148261f3e body=45 status=ok
// SIG undefined FUN_148261f3e(void)

longlong FUN_148261f3e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14595f87a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148261f6c FUN_148261f6c body=45 status=ok
// SIG undefined FUN_148261f6c(void)

longlong FUN_148261f6c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14595f87a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148261fb2 FUN_148261fb2 body=56 status=ok
// SIG undefined FUN_148261fb2(void)

void FUN_148261fb2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000148261fdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148262000 FUN_148262000 body=62 status=ok
// SIG undefined FUN_148262000(void)

undefined8 FUN_148262000(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1413a517a(param_2,param_3);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148262066 FUN_148262066 body=59 status=ok
// SIG undefined FUN_148262066(void)

undefined8 FUN_148262066(longlong *param_1)

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



// FUNCTION 1482620ac FUN_1482620ac body=64 status=ok
// SIG undefined FUN_1482620ac(void)

void FUN_1482620ac(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x20) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x10);
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
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14826213c FUN_14826213c body=37 status=ok
// SIG undefined FUN_14826213c(void)

void FUN_14826213c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_144a5dc74(param_2 + 1);
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



// FUNCTION 148262180 FUN_148262180 body=54 status=ok
// SIG undefined FUN_148262180(void)

undefined1 FUN_148262180(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148262294(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 1482621de FUN_1482621de body=59 status=ok
// SIG undefined FUN_1482621de(void)

undefined8 FUN_1482621de(longlong *param_1)

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



// FUNCTION 148262224 FUN_148262224 body=34 status=ok
// SIG undefined FUN_148262224(void)

void FUN_148262224(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_145aa9446(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148262294 FUN_148262294 body=96 status=ok
// SIG undefined FUN_148262294(void)

undefined8 * FUN_148262294(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  plVar1 = (longlong *)param_2[1];
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != plVar1) {
    param_1[1] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  FUN_1482622f4(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 1482622f4 FUN_1482622f4 body=95 status=ok
// SIG undefined FUN_1482622f4(void)

undefined8 * FUN_1482622f4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145aa9485(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148262354(param_1,iVar1);
      FUN_1482623b6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148262354 FUN_148262354 body=98 status=ok
// SIG undefined FUN_148262354(void)

void FUN_148262354(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1482623b6 FUN_1482623b6 body=65 status=ok
// SIG undefined FUN_1482623b6(void)

void FUN_1482623b6(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = *(undefined8 *)(param_2 + 8 + lVar2);
      lVar1 = *(longlong *)(param_2 + 0x10 + lVar2);
      *(longlong *)(param_1 + 0x10 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      *(undefined8 *)(param_1 + 0x18 + lVar2) = *(undefined8 *)(param_2 + 0x18 + lVar2);
      lVar2 = lVar2 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1482624d2 FUN_1482624d2 body=59 status=ok
// SIG undefined FUN_1482624d2(void)

undefined8 FUN_1482624d2(longlong *param_1)

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



// FUNCTION 148262574 FUN_148262574 body=132 status=ok
// SIG undefined FUN_148262574(void)

void FUN_148262574(longlong param_1,int param_2)

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



// FUNCTION 1482625fa FUN_1482625fa body=38 status=ok
// SIG undefined FUN_1482625fa(void)

undefined8 FUN_1482625fa(undefined8 param_1,int param_2)

{
  FUN_148262620();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148262620 FUN_148262620 body=67 status=ok
// SIG undefined FUN_148262620(void)

void FUN_148262620(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ae6ec00;
  plVar2 = (longlong *)param_1[0x1a];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1449db362(param_1 + 0x17);
  FUN_143af7578(param_1);
  return;
}



// FUNCTION 148262664 FUN_148262664 body=42 status=ok
// SIG undefined FUN_148262664(void)

void FUN_148262664(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_143afad2c(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 14826268e FUN_14826268e body=29 status=ok
// SIG undefined FUN_14826268e(void)

undefined8 FUN_14826268e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482626ac FUN_1482626ac body=315 status=ok
// SIG undefined FUN_1482626ac(void)

undefined4 * FUN_1482626ac(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1482627e8(local_40);
  puVar1 = (undefined8 *)param_2[1];
  *local_38 = *(uint *)*param_2;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  *(undefined8 *)(local_38 + 4) = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  uVar7 = *local_38;
  cVar4 = FUN_143afae5a(uVar7,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14cb46430 - DAT_14cb4645c;
    iVar9 = 1;
    if (3 < uVar5) {
      uVar8 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= DAT_14cb46470)) {
      uVar7 = DAT_14cb46470 - 1U & uVar7;
      local_38[7] = uVar7;
      puVar6 = DAT_14cb46468;
      if (DAT_14cb46468 == (undefined *)0x0) {
        puVar6 = &DAT_14cb46460;
      }
      local_38[6] = *(uint *)(puVar6 + ((longlong)DAT_14cb46470 - 1U & (longlong)(int)uVar7) * 4);
      puVar6 = DAT_14cb46468;
      if (DAT_14cb46468 == (undefined *)0x0) {
        puVar6 = &DAT_14cb46460;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14cb46470 - 1U & (longlong)(int)uVar7) * 4) = local_44
      ;
    }
    else {
      DAT_14cb46470 = iVar9;
      FUN_148262968();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482627e8 FUN_1482627e8 body=269 status=ok
// SIG undefined FUN_1482627e8(void)

int * FUN_1482627e8(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb46458;
  iVar4 = DAT_14cb46430;
  if (DAT_14cb4645c == 0) {
    iVar2 = DAT_14cb46430 + 1;
    bVar7 = DAT_14cb46434 == DAT_14cb46430;
    DAT_14cb46430 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cb46428,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cb46438,1);
    puVar3 = DAT_14cb46448;
    if (DAT_14cb46448 == (undefined4 *)0x0) {
      puVar3 = &DAT_14cb46438;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    puVar3[iVar5 >> 5] = puVar3[iVar5 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cb46458;
    DAT_14cb46458 = *(int *)(DAT_14cb46428 + 4 + lVar6 * 0x20);
    DAT_14cb4645c = DAT_14cb4645c + -1;
    iVar4 = iVar2;
    if (DAT_14cb4645c != 0) {
      *(undefined4 *)(DAT_14cb46428 + (longlong)DAT_14cb46458 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cb46438;
  if (DAT_14cb46448 != (undefined4 *)0x0) {
    puVar3 = DAT_14cb46448;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  puVar3[iVar2 >> 5] = puVar3[iVar2 >> 5] | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cb46428;
  return param_1;
}



// FUNCTION 1482628f6 FUN_1482628f6 body=114 status=ok
// SIG undefined FUN_1482628f6(void)

void FUN_1482628f6(longlong *param_1,int param_2)

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



// FUNCTION 148262968 FUN_148262968 body=467 status=ok
// SIG undefined FUN_148262968(void)

void FUN_148262968(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb46468 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb46468,0,0,4);
  }
  uVar2 = DAT_14cb46470;
  uVar3 = local_50;
  if (DAT_14cb46470 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb46460,0,DAT_14cb46470,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14cb46468;
        if (DAT_14cb46468 == (undefined *)0x0) {
          puVar5 = &DAT_14cb46460;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb46470 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb46438;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb46450 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb46428;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < (int)local_38[6]) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar9 = (longlong)(int)DAT_14cb46470 - 1U & (longlong)*(int *)(lVar1 + lVar6);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14cb46468;
        if (DAT_14cb46468 == (undefined *)0x0) {
          puVar5 = &DAT_14cb46460;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb46470 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb46468;
        if (DAT_14cb46468 == (undefined *)0x0) {
          puVar5 = &DAT_14cb46460;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb46470 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < (int)local_58[6]);
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148262b3c FUN_148262b3c body=100 status=ok
// SIG undefined FUN_148262b3c(void)

undefined8 FUN_148262b3c(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_2) {
          FUN_143afaf22();
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 148262ba0 FUN_148262ba0 body=73 status=ok
// SIG undefined FUN_148262ba0(void)

void FUN_148262ba0(longlong param_1,int param_2)

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



// FUNCTION 148262bea FUN_148262bea body=344 status=ok
// SIG undefined FUN_148262bea(void)

longlong * FUN_148262bea(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar10 = *(longlong **)(param_2 + 0x10);
  bVar9 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_148262c67:
    uVar12 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_148262c67;
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar13 = iVar8 == iVar6;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  *puVar5 = &PTR_LAB_14ae6f040;
  puVar5[1] = *param_4;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar5[2] = lVar11;
  *puVar5 = &PTR_FUN_14ae6efd0;
  puVar5[3] = uVar12;
  puVar5[4] = plVar10;
  if (bVar9) {
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  }
  return param_1;
}



// FUNCTION 148262d42 FUN_148262d42 body=64 status=ok
// SIG undefined FUN_148262d42(void)

undefined8 * FUN_148262d42(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ae6efd0;
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



// FUNCTION 148262d86 FUN_148262d86 body=81 status=ok
// SIG undefined FUN_148262d86(void)

undefined8 FUN_148262d86(longlong param_1)

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



// FUNCTION 148262dde FUN_148262dde body=89 status=ok
// SIG undefined FUN_148262dde(void)

bool FUN_148262dde(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148262e29;
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
LAB_148262e29:
  return lVar6 == param_2;
}



// FUNCTION 148262e60 FUN_148262e60 body=118 status=ok
// SIG undefined FUN_148262e60(void)

void FUN_148262e60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6f040;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14ae6efd0;
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



// FUNCTION 148262ed6 FUN_148262ed6 body=118 status=ok
// SIG undefined FUN_148262ed6(void)

void FUN_148262ed6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6f040;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14ae6efd0;
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



// FUNCTION 148262f4c FUN_148262f4c body=156 status=ok
// SIG undefined FUN_148262f4c(void)

void FUN_148262f4c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6f040;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6efd0;
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
                    /* WARNING: Could not recover jumptable at 0x000148262fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148262fe8 FUN_148262fe8 body=112 status=ok
// SIG undefined FUN_148262fe8(void)

void FUN_148262fe8(longlong param_1)

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
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 8));
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
                    /* WARNING: Could not recover jumptable at 0x000148263039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014826304e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 148263058 FUN_148263058 body=105 status=ok
// SIG undefined FUN_148263058(void)

ulonglong FUN_148263058(longlong param_1)

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
LAB_1482630b6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1482630b6;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
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



// FUNCTION 1482630c4 FUN_1482630c4 body=24 status=ok
// SIG undefined FUN_1482630c4(void)

void FUN_1482630c4(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001482630d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1482630dc FUN_1482630dc body=29 status=ok
// SIG undefined FUN_1482630dc(void)

undefined8 FUN_1482630dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482630fa FUN_1482630fa body=132 status=ok
// SIG undefined FUN_1482630fa(void)

void FUN_1482630fa(longlong param_1,int param_2)

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



// FUNCTION 148263180 FUN_148263180 body=124 status=ok
// SIG undefined FUN_148263180(void)

void FUN_148263180(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    uVar5 = 0;
    do {
      cVar4 = FUN_148254690(lVar2 + uVar5,param_2);
      if (cVar4 != '\0') {
        if ((int)(~uVar5 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != uVar5);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1482544fa(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
  return;
}



// FUNCTION 1482631fc FUN_1482631fc body=132 status=ok
// SIG undefined FUN_1482631fc(void)

void FUN_1482631fc(longlong param_1,int param_2)

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



// FUNCTION 148263282 FUN_148263282 body=62 status=ok
// SIG undefined FUN_148263282(void)

void FUN_148263282(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1482632c0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 1482632c0 FUN_1482632c0 body=93 status=ok
// SIG undefined FUN_1482632c0(void)

ulonglong FUN_1482632c0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14826331e FUN_14826331e body=386 status=ok
// SIG undefined FUN_14826331e(void)

longlong * FUN_14826331e(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14826342f:
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14ae6f0d0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14826342f;
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
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14ae6f0d0;
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



// FUNCTION 1482634a0 FUN_1482634a0 body=64 status=ok
// SIG undefined FUN_1482634a0(void)

undefined8 * FUN_1482634a0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ae6f0d0;
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



// FUNCTION 1482634e4 FUN_1482634e4 body=81 status=ok
// SIG undefined FUN_1482634e4(void)

undefined8 FUN_1482634e4(longlong param_1)

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



// FUNCTION 14826353c FUN_14826353c body=89 status=ok
// SIG undefined FUN_14826353c(void)

bool FUN_14826353c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148263587;
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
LAB_148263587:
  return lVar6 == param_2;
}



// FUNCTION 1482635b2 FUN_1482635b2 body=118 status=ok
// SIG undefined FUN_1482635b2(void)

void FUN_1482635b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6f0d0;
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



// FUNCTION 148263628 FUN_148263628 body=118 status=ok
// SIG undefined FUN_148263628(void)

void FUN_148263628(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6f0d0;
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



// FUNCTION 14826369e FUN_14826369e body=156 status=ok
// SIG undefined FUN_14826369e(void)

void FUN_14826369e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6f0d0;
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
                    /* WARNING: Could not recover jumptable at 0x00014826372a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14826373a FUN_14826373a body=100 status=ok
// SIG undefined FUN_14826373a(void)

void FUN_14826373a(longlong param_1)

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
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148263786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148263793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14826379e FUN_14826379e body=100 status=ok
// SIG undefined FUN_14826379e(void)

ulonglong FUN_14826379e(longlong param_1)

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
LAB_1482637f7:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1482637f7;
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



// FUNCTION 148263802 FUN_148263802 body=136 status=ok
// SIG undefined FUN_148263802(void)

void FUN_148263802(longlong *param_1,uint param_2)

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



// FUNCTION 14826388a FUN_14826388a body=62 status=ok
// SIG undefined FUN_14826388a(void)

void FUN_14826388a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1482638c8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1482638c8 FUN_1482638c8 body=93 status=ok
// SIG undefined FUN_1482638c8(void)

ulonglong FUN_1482638c8(uint param_1,uint param_2)

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



// FUNCTION 148263926 FUN_148263926 body=24 status=ok
// SIG undefined FUN_148263926(void)

void FUN_148263926(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014826393a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14826393e FUN_14826393e body=29 status=ok
// SIG undefined FUN_14826393e(void)

undefined8 FUN_14826393e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14826395c FUN_14826395c body=386 status=ok
// SIG undefined FUN_14826395c(void)

longlong * FUN_14826395c(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148263a6d:
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14ae6f160;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148263a6d;
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
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14ae6f160;
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



// FUNCTION 148263ade FUN_148263ade body=64 status=ok
// SIG undefined FUN_148263ade(void)

undefined8 * FUN_148263ade(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ae6f160;
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



// FUNCTION 148263b22 FUN_148263b22 body=81 status=ok
// SIG undefined FUN_148263b22(void)

undefined8 FUN_148263b22(longlong param_1)

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



// FUNCTION 148263b7a FUN_148263b7a body=89 status=ok
// SIG undefined FUN_148263b7a(void)

bool FUN_148263b7a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148263bc5;
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
LAB_148263bc5:
  return lVar6 == param_2;
}



// FUNCTION 148263bf0 FUN_148263bf0 body=118 status=ok
// SIG undefined FUN_148263bf0(void)

void FUN_148263bf0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6f160;
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



// FUNCTION 148263c66 FUN_148263c66 body=118 status=ok
// SIG undefined FUN_148263c66(void)

void FUN_148263c66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6f160;
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



// FUNCTION 148263cdc FUN_148263cdc body=156 status=ok
// SIG undefined FUN_148263cdc(void)

void FUN_148263cdc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6f160;
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
                    /* WARNING: Could not recover jumptable at 0x000148263d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148263d78 FUN_148263d78 body=100 status=ok
// SIG undefined FUN_148263d78(void)

void FUN_148263d78(longlong param_1)

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
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148263dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148263dd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148263ddc FUN_148263ddc body=100 status=ok
// SIG undefined FUN_148263ddc(void)

ulonglong FUN_148263ddc(longlong param_1)

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
LAB_148263e35:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148263e35;
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



// FUNCTION 148263e40 FUN_148263e40 body=386 status=ok
// SIG undefined FUN_148263e40(void)

longlong * FUN_148263e40(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148263f51:
    *puVar5 = &PTR_LAB_14ae6bc70;
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
    *puVar5 = &PTR_FUN_14ae6f1d0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148263f51;
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
    *puVar5 = &PTR_LAB_14ae6bc70;
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
    *puVar5 = &PTR_FUN_14ae6f1d0;
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



// FUNCTION 148263fc2 FUN_148263fc2 body=64 status=ok
// SIG undefined FUN_148263fc2(void)

undefined8 * FUN_148263fc2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ae6f1d0;
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



// FUNCTION 148264006 FUN_148264006 body=81 status=ok
// SIG undefined FUN_148264006(void)

undefined8 FUN_148264006(longlong param_1)

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



// FUNCTION 14826405e FUN_14826405e body=89 status=ok
// SIG undefined FUN_14826405e(void)

bool FUN_14826405e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1482640a9;
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
LAB_1482640a9:
  return lVar6 == param_2;
}



// FUNCTION 1482640d4 FUN_1482640d4 body=118 status=ok
// SIG undefined FUN_1482640d4(void)

void FUN_1482640d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6f1d0;
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



// FUNCTION 14826414a FUN_14826414a body=118 status=ok
// SIG undefined FUN_14826414a(void)

void FUN_14826414a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6f1d0;
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



// FUNCTION 1482641c0 FUN_1482641c0 body=156 status=ok
// SIG undefined FUN_1482641c0(void)

void FUN_1482641c0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6bc70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6f1d0;
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
                    /* WARNING: Could not recover jumptable at 0x00014826424c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14826425c FUN_14826425c body=104 status=ok
// SIG undefined FUN_14826425c(void)

void FUN_14826425c(longlong param_1)

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
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001482642a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001482642ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1482642c4 FUN_1482642c4 body=101 status=ok
// SIG undefined FUN_1482642c4(void)

ulonglong FUN_1482642c4(longlong param_1)

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
LAB_14826431e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14826431e;
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



// FUNCTION 14826432a FUN_14826432a body=64 status=ok
// SIG undefined FUN_14826432a(void)

undefined8 * FUN_14826432a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ae6f240;
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



// FUNCTION 14826436e FUN_14826436e body=81 status=ok
// SIG undefined FUN_14826436e(void)

undefined8 FUN_14826436e(longlong param_1)

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



// FUNCTION 1482643c6 FUN_1482643c6 body=89 status=ok
// SIG undefined FUN_1482643c6(void)

bool FUN_1482643c6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148264411;
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
LAB_148264411:
  return lVar6 == param_2;
}



// FUNCTION 14826443c FUN_14826443c body=118 status=ok
// SIG undefined FUN_14826443c(void)

void FUN_14826443c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6f240;
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



// FUNCTION 1482644b2 FUN_1482644b2 body=118 status=ok
// SIG undefined FUN_1482644b2(void)

void FUN_1482644b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6f240;
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



// FUNCTION 148264528 FUN_148264528 body=156 status=ok
// SIG undefined FUN_148264528(void)

void FUN_148264528(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149ed0600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6f240;
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
                    /* WARNING: Could not recover jumptable at 0x0001482645b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1482645c4 FUN_1482645c4 body=103 status=ok
// SIG undefined FUN_1482645c4(void)

ulonglong FUN_1482645c4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(param_1 + 0x28))
                          ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148264628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 14826462c FUN_14826462c body=100 status=ok
// SIG undefined FUN_14826462c(void)

ulonglong FUN_14826462c(longlong param_1)

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
LAB_148264685:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148264685;
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



// FUNCTION 148264690 FUN_148264690 body=303 status=ok
// SIG undefined FUN_148264690(void)

void FUN_148264690(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar6 = *(longlong *)*param_2;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    iVar8 = 0;
    iVar9 = 0;
    bVar4 = *plVar2 == lVar6;
    do {
      lVar7 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar6 = lVar7;
      iVar5 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar5 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar11 = iVar5;
        if (lVar12 <= lVar6) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar4 == (plVar2[lVar6] == lVar3));
      if (bVar4 == false) {
        if (iVar8 != iVar9) {
          memmove(plVar2 + iVar8,plVar2 + lVar7,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar8 = iVar8 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar4 = (bool)(bVar4 ^ 1);
    } while (lVar6 < lVar12);
    *(int *)(param_1 + 1) = iVar8;
  }
  return;
}



// FUNCTION 1482647c0 FUN_1482647c0 body=29 status=ok
// SIG undefined FUN_1482647c0(void)

undefined8 FUN_1482647c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


