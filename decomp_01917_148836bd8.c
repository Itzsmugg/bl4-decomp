// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148836bd8 FUN_148836bd8 body=12 status=ok
// SIG undefined FUN_148836bd8(void)

void FUN_148836bd8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148836be1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 148836be4 FUN_148836be4 body=29 status=ok
// SIG undefined FUN_148836be4(void)

undefined8 FUN_148836be4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148836c18 FUN_148836c18 body=49 status=ok
// SIG undefined FUN_148836c18(void)

void FUN_148836c18(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar1;
  param_1[6] = DAT_14c8464f0;
  return;
}



// FUNCTION 148836c4a FUN_148836c4a body=143 status=ok
// SIG undefined FUN_148836c4a(void)

void FUN_148836c4a(longlong param_1,int param_2)

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



// FUNCTION 148836cda FUN_148836cda body=132 status=ok
// SIG undefined FUN_148836cda(void)

void FUN_148836cda(longlong param_1,int param_2)

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



// FUNCTION 148836d5f FUN_148836d5f body=37 status=ok
// SIG undefined FUN_148836d5f(void)

void FUN_148836d5f(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 4) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = DAT_14c8464f0;
  return;
}



// FUNCTION 148836d84 FUN_148836d84 body=147 status=ok
// SIG undefined FUN_148836d84(void)

void FUN_148836d84(longlong param_1,int param_2)

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



// FUNCTION 148836e18 FUN_148836e18 body=29 status=ok
// SIG undefined FUN_148836e18(void)

undefined8 FUN_148836e18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148836e50 FUN_148836e50 body=29 status=ok
// SIG undefined FUN_148836e50(void)

bool FUN_148836e50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148836e6e FUN_148836e6e body=26 status=ok
// SIG undefined FUN_148836e6e(void)

bool FUN_148836e6e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148836e88 FUN_148836e88 body=24 status=ok
// SIG undefined FUN_148836e88(void)

bool FUN_148836e88(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148836ea0 FUN_148836ea0 body=93 status=ok
// SIG undefined FUN_148836ea0(void)

void FUN_148836ea0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fb320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148836efe FUN_148836efe body=93 status=ok
// SIG undefined FUN_148836efe(void)

void FUN_148836efe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fb320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148836f5c FUN_148836f5c body=126 status=ok
// SIG undefined FUN_148836f5c(void)

void FUN_148836f5c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a915ec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fb320;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148836fcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148836fda FUN_148836fda body=40 status=ok
// SIG undefined FUN_148836fda(void)

void FUN_148836fda(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148836fff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148837002 FUN_148837002 body=152 status=ok
// SIG undefined FUN_148837002(void)

bool FUN_148837002(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883709c FUN_14883709c body=29 status=ok
// SIG undefined FUN_14883709c(void)

undefined8 FUN_14883709c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488370d4 FUN_1488370d4 body=29 status=ok
// SIG undefined FUN_1488370d4(void)

bool FUN_1488370d4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488370f2 FUN_1488370f2 body=26 status=ok
// SIG undefined FUN_1488370f2(void)

bool FUN_1488370f2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14883710c FUN_14883710c body=24 status=ok
// SIG undefined FUN_14883710c(void)

bool FUN_14883710c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148837124 FUN_148837124 body=93 status=ok
// SIG undefined FUN_148837124(void)

void FUN_148837124(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fb390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148837182 FUN_148837182 body=93 status=ok
// SIG undefined FUN_148837182(void)

void FUN_148837182(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fb390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488371e0 FUN_1488371e0 body=126 status=ok
// SIG undefined FUN_1488371e0(void)

void FUN_1488371e0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a7feda0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fb390;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014883724f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14883725e FUN_14883725e body=58 status=ok
// SIG undefined FUN_14883725e(void)

void FUN_14883725e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148837295. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148837298 FUN_148837298 body=173 status=ok
// SIG undefined FUN_148837298(void)

bool FUN_148837298(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

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



// FUNCTION 148837346 FUN_148837346 body=107 status=ok
// SIG undefined FUN_148837346(void)

/* WARNING: Removing unreachable block (ram,0x000148837378) */
/* WARNING: Removing unreachable block (ram,0x000148837354) */
/* WARNING: Removing unreachable block (ram,0x00014883736a) */
/* WARNING: Removing unreachable block (ram,0x000148837383) */
/* WARNING: Removing unreachable block (ram,0x00014883736c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148837346(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb78ba8;
  LOCK();
  UNLOCK();
  DAT_14cb78ba8 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb78bb0 = _DAT_14cb78bb0 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb78bb0 = _DAT_14cb78bb0 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1488373ca FUN_1488373ca body=93 status=ok
// SIG undefined FUN_1488373ca(void)

void FUN_1488373ca(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fb400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148837428 FUN_148837428 body=93 status=ok
// SIG undefined FUN_148837428(void)

void FUN_148837428(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fb400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148837486 FUN_148837486 body=126 status=ok
// SIG undefined FUN_148837486(void)

void FUN_148837486(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fb400;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488374f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148837522 FUN_148837522 body=93 status=ok
// SIG undefined FUN_148837522(void)

void FUN_148837522(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab9f910;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fb550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148837580 FUN_148837580 body=93 status=ok
// SIG undefined FUN_148837580(void)

void FUN_148837580(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab9f910;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fb550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488375de FUN_1488375de body=126 status=ok
// SIG undefined FUN_1488375de(void)

void FUN_1488375de(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ab9f910;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fb550;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014883764d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14883766a FUN_14883766a body=116 status=ok
// SIG undefined FUN_14883766a(void)

void FUN_14883766a(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_148641394(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488376e0 FUN_1488376e0 body=259 status=ok
// SIG undefined FUN_1488376e0(void)

void FUN_1488376e0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  
  iVar1 = *(int *)(param_1 + 0x48);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar6 = param_1;
    }
    iVar13 = 0;
    bVar12 = *(longlong *)(lVar6 + 8) == *(longlong *)*param_2;
    iVar9 = 0;
    do {
      lVar8 = (longlong)iVar9;
      iVar3 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      lVar4 = lVar8 * 0x10;
      plVar7 = (longlong *)(lVar6 + 0x18 + lVar4);
      iVar10 = iVar9;
      do {
        lVar8 = lVar8 + 1;
        iVar11 = iVar3;
        if (lVar5 <= lVar8) break;
        lVar2 = *plVar7;
        iVar10 = iVar10 + 1;
        plVar7 = plVar7 + 2;
        iVar11 = iVar10;
      } while (bVar12 == (lVar2 == *(longlong *)*param_2));
      if (bVar12 == false) {
        if (iVar13 != iVar9) {
          memmove((void *)((longlong)iVar13 * 0x10 + lVar6),(void *)(lVar4 + lVar6),
                  (longlong)(iVar11 - iVar9) << 4);
        }
        iVar13 = iVar13 + (iVar11 - iVar9);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar9 = iVar11;
    } while (lVar8 < lVar5);
    *(int *)(param_1 + 0x48) = iVar13;
  }
  return;
}



// FUNCTION 1488377e4 FUN_1488377e4 body=29 status=ok
// SIG undefined FUN_1488377e4(void)

undefined8 FUN_1488377e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14883782a FUN_14883782a body=93 status=ok
// SIG undefined FUN_14883782a(void)

void FUN_14883782a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fb6a0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b3fb630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148837888 FUN_148837888 body=93 status=ok
// SIG undefined FUN_148837888(void)

void FUN_148837888(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fb6a0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b3fb630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488378e6 FUN_1488378e6 body=126 status=ok
// SIG undefined FUN_1488378e6(void)

void FUN_1488378e6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fb6a0;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fb630;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148837955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148837976 FUN_148837976 body=25 status=ok
// SIG undefined FUN_148837976(void)

undefined8 FUN_148837976(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x20))
            (*(undefined8 *)(param_1 + 0x18),param_2,param_3,*(undefined4 *)(param_1 + 8));
  return 1;
}



// FUNCTION 148837992 FUN_148837992 body=64 status=ok
// SIG undefined FUN_148837992(void)

void FUN_148837992(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_141818dd8(param_1 + 0x48);
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1488379d2 FUN_1488379d2 body=31 status=ok
// SIG undefined FUN_1488379d2(void)

undefined8 FUN_1488379d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148837a0a FUN_148837a0a body=101 status=ok
// SIG undefined FUN_148837a0a(void)

void FUN_148837a0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc1e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fb730;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148837a70 FUN_148837a70 body=101 status=ok
// SIG undefined FUN_148837a70(void)

void FUN_148837a70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc1e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fb730;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148837ad6 FUN_148837ad6 body=134 status=ok
// SIG undefined FUN_148837ad6(void)

void FUN_148837ad6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fc1e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fb730;
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
                    /* WARNING: Could not recover jumptable at 0x000148837b4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148837b6e FUN_148837b6e body=25 status=ok
// SIG undefined FUN_148837b6e(void)

undefined8 FUN_148837b6e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148837b8a FUN_148837b8a body=31 status=ok
// SIG undefined FUN_148837b8a(void)

undefined8 FUN_148837b8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148837bc2 FUN_148837bc2 body=101 status=ok
// SIG undefined FUN_148837bc2(void)

void FUN_148837bc2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fb810;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fb7a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148837c28 FUN_148837c28 body=101 status=ok
// SIG undefined FUN_148837c28(void)

void FUN_148837c28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fb810;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fb7a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148837c8e FUN_148837c8e body=134 status=ok
// SIG undefined FUN_148837c8e(void)

void FUN_148837c8e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fb810;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fb7a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148837d05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148837d28 FUN_148837d28 body=230 status=ok
// SIG undefined FUN_148837d28(void)

undefined8 * FUN_148837d28(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148837e10 FUN_148837e10 body=29 status=ok
// SIG undefined FUN_148837e10(void)

undefined8 FUN_148837e10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148837e56 FUN_148837e56 body=101 status=ok
// SIG undefined FUN_148837e56(void)

void FUN_148837e56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fb8f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fb880;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148837ebc FUN_148837ebc body=101 status=ok
// SIG undefined FUN_148837ebc(void)

void FUN_148837ebc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fb8f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fb880;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148837f22 FUN_148837f22 body=134 status=ok
// SIG undefined FUN_148837f22(void)

void FUN_148837f22(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fb8f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fb880;
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
                    /* WARNING: Could not recover jumptable at 0x000148837f99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148837fba FUN_148837fba body=25 status=ok
// SIG undefined FUN_148837fba(void)

undefined8 FUN_148837fba(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148837fd6 FUN_148837fd6 body=122 status=ok
// SIG undefined FUN_148837fd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_148837fd6(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  do {
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_148838024:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_148838024;
      }
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 148838050 FUN_148838050 body=48 status=ok
// SIG undefined FUN_148838050(void)

void FUN_148838050(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x88,8);
  }
  return;
}



// FUNCTION 148838080 FUN_148838080 body=62 status=ok
// SIG undefined FUN_148838080(void)

void FUN_148838080(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 4;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 1488380be FUN_1488380be body=150 status=ok
// SIG undefined FUN_1488380be(void)

void FUN_1488380be(longlong param_1,int param_2)

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



// FUNCTION 148838156 FUN_148838156 body=110 status=ok
// SIG undefined FUN_148838156(void)

void FUN_148838156(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_1488381c6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488381c6 FUN_1488381c6 body=132 status=ok
// SIG undefined FUN_1488381c6(void)

void FUN_1488381c6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 14883824a FUN_14883824a body=131 status=ok
// SIG undefined FUN_14883824a(void)

void FUN_14883824a(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x88 + lVar1);
  FUN_145c1aeb3(_Dst,1);
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



// FUNCTION 1488382ce FUN_1488382ce body=132 status=ok
// SIG undefined FUN_1488382ce(void)

void FUN_1488382ce(longlong param_1,int param_2)

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



// FUNCTION 148838354 FUN_148838354 body=114 status=ok
// SIG undefined FUN_148838354(void)

void FUN_148838354(longlong *param_1,int param_2)

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



// FUNCTION 1488383ca FUN_1488383ca body=83 status=ok
// SIG undefined FUN_1488383ca(void)

undefined8 FUN_1488383ca(longlong param_1)

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



// FUNCTION 148838424 FUN_148838424 body=89 status=ok
// SIG undefined FUN_148838424(void)

bool FUN_148838424(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14883846f;
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
LAB_14883846f:
  return lVar6 == param_2;
}



// FUNCTION 14883847e FUN_14883847e body=118 status=ok
// SIG undefined FUN_14883847e(void)

void FUN_14883847e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fba10;
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



// FUNCTION 1488384f4 FUN_1488384f4 body=156 status=ok
// SIG undefined FUN_1488384f4(void)

void FUN_1488384f4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fba10;
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
                    /* WARNING: Could not recover jumptable at 0x000148838580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148838590 FUN_148838590 body=100 status=ok
// SIG undefined FUN_148838590(void)

ulonglong FUN_148838590(longlong param_1)

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
LAB_1488385e9:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1488385e9;
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



// FUNCTION 148838654 FUN_148838654 body=322 status=ok
// SIG undefined FUN_148838654(void)

void FUN_148838654(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 148838798 FUN_148838798 body=120 status=ok
// SIG undefined FUN_148838798(void)

longlong FUN_148838798(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_148838812();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_14883886c(param_1,&local_24,param_2);
    lVar1 = (longlong)local_24 * 0x38 + *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 0x18;
}



// FUNCTION 148838812 FUN_148838812 body=89 status=ok
// SIG undefined FUN_148838812(void)

longlong FUN_148838812(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x38;
        if ((*(longlong *)(lVar1 + lVar4) == *param_3) &&
           (*(int *)(lVar1 + 8 + lVar4) == (int)param_3[1])) {
          return lVar1 + lVar4;
        }
        iVar2 = *(int *)(lVar1 + lVar4 + 0x30);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14883886c FUN_14883886c body=298 status=ok
// SIG undefined FUN_14883886c(void)

undefined4 * FUN_14883886c(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148838998(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  *local_40 = *puVar1;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0x4fc71eb4;
  local_40[5] = 0;
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  cVar2 = FUN_148838a7a(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x34) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_148838b8c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148838998 FUN_148838998 body=226 status=ok
// SIG undefined FUN_148838998(void)

int * FUN_148838998(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447030e2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 148838a7a FUN_148838a7a body=157 status=ok
// SIG undefined FUN_148838a7a(void)

undefined8 FUN_148838a7a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    iVar13 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar13 != -1) {
      lVar2 = *param_1;
      do {
        lVar14 = (longlong)iVar13 * 0x38;
        puVar1 = (undefined4 *)(lVar2 + lVar14);
        if ((*(longlong *)(lVar2 + lVar14) == *param_3) &&
           (*(int *)(lVar2 + 8 + lVar14) == (int)param_3[1])) {
          lVar2 = *param_3;
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          lVar14 = param_3[1];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar9 = param_3[2];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar10 = param_3[3];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar11 = param_3[5];
          uVar8 = *(undefined4 *)((longlong)param_3 + 0x2c);
          puVar1[8] = (int)param_3[4];
          puVar1[9] = uVar7;
          puVar1[10] = (int)lVar11;
          puVar1[0xb] = uVar8;
          puVar1[4] = (int)lVar9;
          puVar1[5] = uVar5;
          puVar1[6] = (int)lVar10;
          puVar1[7] = uVar6;
          *puVar1 = (int)lVar2;
          puVar1[1] = uVar3;
          puVar1[2] = (int)lVar14;
          puVar1[3] = uVar4;
          FUN_148838b18((int)lVar2,*param_4);
          *param_4 = iVar13;
          return 1;
        }
        iVar13 = puVar1[0xc];
      } while (iVar13 != -1);
    }
  }
  return 0;
}



// FUNCTION 148838b18 FUN_148838b18 body=116 status=ok
// SIG undefined FUN_148838b18(void)

void FUN_148838b18(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 148838b8c FUN_148838b8c body=492 status=ok
// SIG undefined FUN_148838b8c(void)

void FUN_148838b8c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x38;
        uVar4 = *(undefined8 *)(lVar3 + lVar10);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar9 = (uint)uVar4 & 0xffff;
        iVar6 = FUN_144a78877(((uint)uVar4 << 0x10 | uVar9) + (int)((ulonglong)uVar4 >> 0x20) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4),
                              *(undefined4 *)(lVar3 + 8 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x34 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148838d7a FUN_148838d7a body=48 status=ok
// SIG undefined FUN_148838d7a(void)

void FUN_148838d7a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 148838daa FUN_148838daa body=48 status=ok
// SIG undefined FUN_148838daa(void)

void FUN_148838daa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 148838dda FUN_148838dda body=48 status=ok
// SIG undefined FUN_148838dda(void)

void FUN_148838dda(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148838e0a FUN_148838e0a body=199 status=ok
// SIG undefined FUN_148838e0a(void)

/* WARNING: Removing unreachable block (ram,0x000148838e4b) */
/* WARNING: Removing unreachable block (ram,0x000148838e1e) */
/* WARNING: Removing unreachable block (ram,0x000148838e3d) */
/* WARNING: Removing unreachable block (ram,0x000148838e59) */
/* WARNING: Removing unreachable block (ram,0x000148838e3f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148838e0a(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = DAT_14cb78cb8;
  LOCK();
  UNLOCK();
  DAT_14cb78cb8 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb78cc0 = _DAT_14cb78cc0 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        if ((longlong)DAT_14cb78ca8 != 0) {
          lVar3 = 0;
          do {
            if ((*(int *)(DAT_14cb78ca0 + 8 + lVar3) != 0) &&
               (*(longlong *)(DAT_14cb78ca0 + lVar3) != 0)) {
              FUN_1411f616c(&DAT_14cb78ca0);
              break;
            }
            lVar3 = lVar3 + 0x10;
          } while ((longlong)DAT_14cb78ca8 * 0x10 != lVar3);
        }
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb78cc0 = _DAT_14cb78cc0 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 148838ed4 FUN_148838ed4 body=22 status=ok
// SIG undefined FUN_148838ed4(void)

void FUN_148838ed4(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x18);
    return;
  }
  return;
}



// FUNCTION 148838eea FUN_148838eea body=147 status=ok
// SIG undefined FUN_148838eea(void)

void FUN_148838eea(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148838f7e FUN_148838f7e body=98 status=ok
// SIG undefined FUN_148838f7e(void)

void FUN_148838f7e(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_1458398bd(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148838fe0 FUN_148838fe0 body=62 status=ok
// SIG undefined FUN_148838fe0(void)

void FUN_148838fe0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14883901e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 14883901e FUN_14883901e body=112 status=ok
// SIG undefined FUN_14883901e(void)

ulonglong FUN_14883901e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148839058;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_148839058:
  return param_2 & 0xffffffff;
}



// FUNCTION 14883908e FUN_14883908e body=31 status=ok
// SIG undefined FUN_14883908e(void)

undefined8 FUN_14883908e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488390ca FUN_1488390ca body=93 status=ok
// SIG undefined FUN_1488390ca(void)

void FUN_1488390ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab18ff0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fbbd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148839128 FUN_148839128 body=93 status=ok
// SIG undefined FUN_148839128(void)

void FUN_148839128(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab18ff0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fbbd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148839186 FUN_148839186 body=126 status=ok
// SIG undefined FUN_148839186(void)

void FUN_148839186(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ab18ff0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fbbd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488391f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148839212 FUN_148839212 body=31 status=ok
// SIG undefined FUN_148839212(void)

undefined8 FUN_148839212(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14883924a FUN_14883924a body=93 status=ok
// SIG undefined FUN_14883924a(void)

void FUN_14883924a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fbcb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fbc40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488392a8 FUN_1488392a8 body=93 status=ok
// SIG undefined FUN_1488392a8(void)

void FUN_1488392a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fbcb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fbc40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148839306 FUN_148839306 body=126 status=ok
// SIG undefined FUN_148839306(void)

void FUN_148839306(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fbcb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fbc40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148839375. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148839394 FUN_148839394 body=163 status=ok
// SIG undefined FUN_148839394(void)

int FUN_148839394(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1[1];
  iVar7 = -1;
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = *param_1;
    lVar2 = *param_2;
    lVar8 = 0;
    iVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar1 + lVar8);
      if (plVar3 == (longlong *)0x0 || *(int *)(lVar1 + 8 + lVar8) == 0) {
        lVar5 = 0;
      }
      else {
        (**(code **)(*plVar3 + 0x38))(plVar3,&local_48);
        lVar5 = local_48;
      }
      iVar7 = iVar6;
      if (lVar5 == lVar2) break;
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 0x10;
      iVar7 = -1;
    } while ((longlong)(int)lVar4 * 0x10 != lVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 148839438 FUN_148839438 body=106 status=ok
// SIG undefined FUN_148839438(void)

void FUN_148839438(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + lVar1);
  FUN_1449db362(_Dst);
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



// FUNCTION 1488394a2 FUN_1488394a2 body=62 status=ok
// SIG undefined FUN_1488394a2(void)

void FUN_1488394a2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488394e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1488394e0 FUN_1488394e0 body=93 status=ok
// SIG undefined FUN_1488394e0(void)

ulonglong FUN_1488394e0(uint param_1,uint param_2)

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



// FUNCTION 14883953e FUN_14883953e body=132 status=ok
// SIG undefined FUN_14883953e(void)

void FUN_14883953e(longlong param_1,int param_2)

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



// FUNCTION 1488395c4 FUN_1488395c4 body=116 status=ok
// SIG undefined FUN_1488395c4(void)

void FUN_1488395c4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 148839638 FUN_148839638 body=116 status=ok
// SIG undefined FUN_148839638(void)

void FUN_148839638(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1488396ac FUN_1488396ac body=116 status=ok
// SIG undefined FUN_1488396ac(void)

void FUN_1488396ac(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 148839720 FUN_148839720 body=322 status=ok
// SIG undefined FUN_148839720(void)

void FUN_148839720(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 100 + (longlong)iVar4 * 0x68) * 4) =
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



// FUNCTION 148839864 FUN_148839864 body=265 status=ok
// SIG undefined FUN_148839864(void)

undefined4 * FUN_148839864(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_140987d30(param_1,local_48);
  FUN_140987962(param_4,local_40);
  *(undefined4 *)(local_40 + 0x60) = 0xffffffff;
  cVar1 = FUN_140987848(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 100) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x60) =
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
      FUN_1409881c0(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883996e FUN_14883996e body=133 status=ok
// SIG undefined FUN_14883996e(void)

longlong FUN_14883996e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_141467c3c();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x68;
    if (lVar3 + lVar2 != 0) goto LAB_1488399a7;
  }
  local_30 = param_3;
  FUN_1488399f4(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x68;
LAB_1488399a7:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488399f4 FUN_1488399f4 body=265 status=ok
// SIG undefined FUN_1488399f4(void)

undefined4 * FUN_1488399f4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_145a2794a(param_1,local_48);
  FUN_148839afe(param_4,local_40);
  *(undefined4 *)(local_40 + 0x60) = 0xffffffff;
  cVar1 = FUN_145a2770a(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 100) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x60) =
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
      FUN_141464818(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148839afe FUN_148839afe body=162 status=ok
// SIG undefined FUN_148839afe(void)

undefined8 * FUN_148839afe(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  puVar1 = (undefined8 *)*param_1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  *param_2 = *puVar1;
  FUN_145a27836(param_2 + 2,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1401bccca(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148839ba1 FUN_148839ba1 body=161 status=ok
// SIG undefined FUN_148839ba1(void)

undefined8 * FUN_148839ba1(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x118,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b3fbd90;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = &PTR_FUN_14b3fa760;
  DAT_14cb7940c = DAT_14cb7940c + 1 + (uint)(DAT_14cb7940c == -1);
  puVar1[5] = param_1;
  *(int *)(puVar1 + 6) = DAT_14cb7940c;
  FUN_145af8492(puVar1 + 7);
  *(undefined4 *)(puVar1 + 0x1d) = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  return puVar1;
}



// FUNCTION 148839c4c FUN_148839c4c body=29 status=ok
// SIG undefined FUN_148839c4c(void)

undefined8 FUN_148839c4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148839c6a FUN_148839c6a body=167 status=ok
// SIG undefined FUN_148839c6a(void)

void FUN_148839c6a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148839ce5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148839ce5;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_148839ce5:
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
                    /* WARNING: Could not recover jumptable at 0x000148839d05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148839d12 FUN_148839d12 body=48 status=ok
// SIG undefined FUN_148839d12(void)

void FUN_148839d12(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148839d42 FUN_148839d42 body=132 status=ok
// SIG undefined FUN_148839d42(void)

void FUN_148839d42(longlong param_1,int param_2)

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



// FUNCTION 148839de0 FUN_148839de0 body=93 status=ok
// SIG undefined FUN_148839de0(void)

void FUN_148839de0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fbdb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148839e3e FUN_148839e3e body=126 status=ok
// SIG undefined FUN_148839e3e(void)

void FUN_148839e3e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fbdb0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148839ead. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148839ebc FUN_148839ebc body=21 status=ok
// SIG undefined FUN_148839ebc(void)

undefined8 FUN_148839ebc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148839ed2 FUN_148839ed2 body=118 status=ok
// SIG undefined FUN_148839ed2(void)

void FUN_148839ed2(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (ulonglong)param_2 * 0x10);
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
    _Dst = (void *)(lVar3 + (ulonglong)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 148839f48 FUN_148839f48 body=62 status=ok
// SIG undefined FUN_148839f48(void)

void FUN_148839f48(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148839f86(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148839f86 FUN_148839f86 body=93 status=ok
// SIG undefined FUN_148839f86(void)

ulonglong FUN_148839f86(uint param_1,uint param_2)

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



// FUNCTION 148839fe4 FUN_148839fe4 body=38 status=ok
// SIG undefined FUN_148839fe4(void)

undefined8 FUN_148839fe4(undefined8 param_1,int param_2)

{
  FUN_1458c3936();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14883a012 FUN_14883a012 body=68 status=ok
// SIG undefined FUN_14883a012(void)

undefined8 * FUN_14883a012(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3fbe80;
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



// FUNCTION 14883a05a FUN_14883a05a body=81 status=ok
// SIG undefined FUN_14883a05a(void)

undefined8 FUN_14883a05a(longlong param_1)

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



// FUNCTION 14883a0b2 FUN_14883a0b2 body=91 status=ok
// SIG undefined FUN_14883a0b2(void)

bool FUN_14883a0b2(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14883a0e2;
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
LAB_14883a0e2:
  return lVar6 == param_2;
}



// FUNCTION 14883a12a FUN_14883a12a body=118 status=ok
// SIG undefined FUN_14883a12a(void)

void FUN_14883a12a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fbe80;
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



// FUNCTION 14883a1a0 FUN_14883a1a0 body=118 status=ok
// SIG undefined FUN_14883a1a0(void)

void FUN_14883a1a0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fbe80;
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



// FUNCTION 14883a216 FUN_14883a216 body=156 status=ok
// SIG undefined FUN_14883a216(void)

void FUN_14883a216(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fbe80;
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
                    /* WARNING: Could not recover jumptable at 0x00014883a2a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14883a2b2 FUN_14883a2b2 body=100 status=ok
// SIG undefined FUN_14883a2b2(void)

void FUN_14883a2b2(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014883a2fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014883a30b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14883a316 FUN_14883a316 body=100 status=ok
// SIG undefined FUN_14883a316(void)

ulonglong FUN_14883a316(longlong param_1)

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
LAB_14883a36f:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14883a36f;
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



// FUNCTION 14883a37a FUN_14883a37a body=64 status=ok
// SIG undefined FUN_14883a37a(void)

undefined8 * FUN_14883a37a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3fbef0;
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



// FUNCTION 14883a3be FUN_14883a3be body=81 status=ok
// SIG undefined FUN_14883a3be(void)

undefined8 FUN_14883a3be(longlong param_1)

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



// FUNCTION 14883a416 FUN_14883a416 body=89 status=ok
// SIG undefined FUN_14883a416(void)

bool FUN_14883a416(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14883a461;
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
LAB_14883a461:
  return lVar6 == param_2;
}



// FUNCTION 14883a48c FUN_14883a48c body=118 status=ok
// SIG undefined FUN_14883a48c(void)

void FUN_14883a48c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fbef0;
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



// FUNCTION 14883a502 FUN_14883a502 body=118 status=ok
// SIG undefined FUN_14883a502(void)

void FUN_14883a502(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fbef0;
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



// FUNCTION 14883a578 FUN_14883a578 body=156 status=ok
// SIG undefined FUN_14883a578(void)

void FUN_14883a578(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fc100;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fbef0;
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
                    /* WARNING: Could not recover jumptable at 0x00014883a604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14883a614 FUN_14883a614 body=165 status=ok
// SIG undefined FUN_14883a614(void)

void FUN_14883a614(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14883a682:
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14883a682;
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
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14883a6ba FUN_14883a6ba body=156 status=ok
// SIG undefined FUN_14883a6ba(void)

ulonglong FUN_14883a6ba(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14883a735:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14883a735;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_28 = *param_3;
      uStack_24 = param_3[1];
      uStack_20 = param_3[2];
      uStack_1c = param_3[3];
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14883a75a FUN_14883a75a body=68 status=ok
// SIG undefined FUN_14883a75a(void)

undefined8 * FUN_14883a75a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3fbf60;
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



// FUNCTION 14883a7a2 FUN_14883a7a2 body=81 status=ok
// SIG undefined FUN_14883a7a2(void)

undefined8 FUN_14883a7a2(longlong param_1)

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



// FUNCTION 14883a7fa FUN_14883a7fa body=118 status=ok
// SIG undefined FUN_14883a7fa(void)

void FUN_14883a7fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcc20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fbf60;
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



// FUNCTION 14883a870 FUN_14883a870 body=118 status=ok
// SIG undefined FUN_14883a870(void)

void FUN_14883a870(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcc20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fbf60;
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



// FUNCTION 14883a8e6 FUN_14883a8e6 body=156 status=ok
// SIG undefined FUN_14883a8e6(void)

void FUN_14883a8e6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8bcc20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fbf60;
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
                    /* WARNING: Could not recover jumptable at 0x00014883a972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14883a982 FUN_14883a982 body=104 status=ok
// SIG undefined FUN_14883a982(void)

void FUN_14883a982(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014883a9cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014883a9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14883a9ea FUN_14883a9ea body=68 status=ok
// SIG undefined FUN_14883a9ea(void)

undefined8 * FUN_14883a9ea(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3fbfd0;
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



// FUNCTION 14883aa32 FUN_14883aa32 body=81 status=ok
// SIG undefined FUN_14883aa32(void)

undefined8 FUN_14883aa32(longlong param_1)

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



// FUNCTION 14883aa8a FUN_14883aa8a body=91 status=ok
// SIG undefined FUN_14883aa8a(void)

bool FUN_14883aa8a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14883aaba;
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
LAB_14883aaba:
  return lVar6 == param_2;
}



// FUNCTION 14883aae6 FUN_14883aae6 body=118 status=ok
// SIG undefined FUN_14883aae6(void)

void FUN_14883aae6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fbfd0;
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



// FUNCTION 14883ab5c FUN_14883ab5c body=118 status=ok
// SIG undefined FUN_14883ab5c(void)

void FUN_14883ab5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fbfd0;
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



// FUNCTION 14883abd2 FUN_14883abd2 body=156 status=ok
// SIG undefined FUN_14883abd2(void)

void FUN_14883abd2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8bcd00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fbfd0;
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
                    /* WARNING: Could not recover jumptable at 0x00014883ac5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14883ac6e FUN_14883ac6e body=104 status=ok
// SIG undefined FUN_14883ac6e(void)

void FUN_14883ac6e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014883acbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014883accc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14883acd6 FUN_14883acd6 body=68 status=ok
// SIG undefined FUN_14883acd6(void)

undefined8 * FUN_14883acd6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3fc040;
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



// FUNCTION 14883ad1e FUN_14883ad1e body=81 status=ok
// SIG undefined FUN_14883ad1e(void)

undefined8 FUN_14883ad1e(longlong param_1)

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



// FUNCTION 14883ad76 FUN_14883ad76 body=118 status=ok
// SIG undefined FUN_14883ad76(void)

void FUN_14883ad76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc260;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fc040;
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



// FUNCTION 14883adec FUN_14883adec body=118 status=ok
// SIG undefined FUN_14883adec(void)

void FUN_14883adec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc260;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fc040;
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



// FUNCTION 14883ae62 FUN_14883ae62 body=156 status=ok
// SIG undefined FUN_14883ae62(void)

void FUN_14883ae62(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fc260;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fc040;
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
                    /* WARNING: Could not recover jumptable at 0x00014883aeee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14883aefe FUN_14883aefe body=104 status=ok
// SIG undefined FUN_14883aefe(void)

void FUN_14883aefe(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014883af4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014883af5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14883af66 FUN_14883af66 body=81 status=ok
// SIG undefined FUN_14883af66(void)

undefined1 * FUN_14883af66(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = 3;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar1 = FUN_14001cc68(0x38,0x10);
  FUN_14034cca6(uVar1,param_2);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return param_1;
}



// FUNCTION 14883afb8 FUN_14883afb8 body=49 status=ok
// SIG undefined FUN_14883afb8(void)

void FUN_14883afb8(byte *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = 2;
  if ((*(longlong *)(param_1 + 0x10) != *param_2) || (*(int *)(param_1 + 0x18) != (int)param_2[1]))
  {
    *(longlong *)(param_1 + 0x10) = *param_2;
    *(int *)(param_1 + 0x18) = (int)param_2[1];
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    FUN_140641d04();
    return;
  }
  bVar1 = *param_1;
  if (((bVar1 < 2) || (bVar1 == 4)) ||
     (param_1[4] = 0, param_1[5] = 0, param_1[6] = 0, param_1[7] = 0, param_1[8] = 0, param_1[9] = 0
     , param_1[10] = 0, param_1[0xb] = 0, bVar1 != 2)) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    if (bVar1 == 3) {
      return;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == 0) {
    return;
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_144a2da94(lVar2);
  FUN_1400020a8(lVar2);
  return;
}



// FUNCTION 14883afea FUN_14883afea body=204 status=ok
// SIG undefined FUN_14883afea(void)

bool FUN_14883afea(undefined1 *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar3 = (ulonglong)DAT_14c892b58;
  if (uVar1 == uVar3) {
    local_40 = 0;
    (**(code **)(*param_3 + 0x160))(param_3,&local_40);
    *param_1 = 0;
    *(ulonglong *)(param_1 + 4) = local_40;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (lVar2 != 0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      FUN_144a2da94(lVar2);
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1 == uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883b0b8 FUN_14883b0b8 body=146 status=ok
// SIG undefined FUN_14883b0b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14883b0b8(longlong param_1)

{
  undefined *puVar1;
  longlong unaff_GS_OFFSET;
  
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7bf78) {
    FUN_144b3d300(&DAT_14cb7bf78);
    if (DAT_14cb7bf78 == -1) {
      _DAT_14cb7bf40 = 0;
      DAT_14cb7bf60 = 0;
      DAT_14cb7bf68 = 0;
      DAT_14cb7bf70 = 0;
      atexit(FUN_143d26878);
      _Init_thread_footer(&DAT_14cb7bf78);
    }
  }
  puVar1 = &DAT_14cb7bf40;
  if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x28);
  }
  return puVar1;
}



// FUNCTION 14883b14a FUN_14883b14a body=142 status=ok
// SIG undefined FUN_14883b14a(void)

undefined8 * FUN_14883b14a(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  switch(*param_1) {
  case 0:
  case 1:
  case 4:
    puVar2 = (undefined8 *)(param_1 + 4);
    break;
  case 2:
    local_18 = *(undefined8 *)(param_1 + 0x10);
    puVar2 = &local_18;
    break;
  case 3:
    uVar1 = FUN_14883b0b8();
    FUN_140592d14(uVar1,param_2);
    goto LAB_14883b186;
  default:
    *param_2 = 0;
    param_2[1] = 0;
    if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1400021e4(puVar2,param_2);
LAB_14883b186:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14883b1da FUN_14883b1da body=226 status=ok
// SIG undefined FUN_14883b1da(void)

undefined8 FUN_14883b1da(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14883b14a(param_1 + 0x40,&local_40);
  local_58 = local_40;
  if (local_38 == 0) {
    local_58 = &DAT_149dfb77a;
  }
  if ((ulonglong)*(byte *)(param_1 + 0x38) < 5) {
    puVar1 = (undefined2 *)(&PTR_DAT_14b3fdfc0)[*(byte *)(param_1 + 0x38)];
  }
  else {
    puVar1 = &DAT_149e1423e;
  }
  FUN_140b126e4(param_1,&local_50);
  puVar2 = local_50;
  if (local_48 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"%s %s %s",puVar2,puVar1);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14883b2be FUN_14883b2be body=165 status=ok
// SIG undefined FUN_14883b2be(void)

bool FUN_14883b2be(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar2 = (ulonglong)DAT_14c892b74;
  if (uVar1 == uVar2) {
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_14021219d(param_3,local_48);
    FUN_140bf89dc(param_1,local_48,0);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1 == uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883b364 FUN_14883b364 body=3 status=ok
// SIG undefined FUN_14883b364(void)

undefined1 FUN_14883b364(void)

{
  return 1;
}



// FUNCTION 14883b368 FUN_14883b368 body=3 status=ok
// SIG undefined FUN_14883b368(void)

undefined8 FUN_14883b368(void)

{
  return 0;
}



// FUNCTION 14883b36c FUN_14883b36c body=123 status=ok
// SIG undefined FUN_14883b36c(void)

bool FUN_14883b36c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  lVar1 = FUN_1401e9420(*param_2,local_28,1);
  if (lVar1 != 0) {
    FUN_140bf89dc(param_1,local_28,0);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883b3e8 FUN_14883b3e8 body=104 status=ok
// SIG undefined FUN_14883b3e8(void)

undefined1 * FUN_14883b3e8(undefined1 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_1446ddc76(&local_20,param_2,1);
  FUN_144976b9c(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883b452 FUN_14883b452 body=11 status=ok
// SIG undefined FUN_14883b452(void)

void FUN_14883b452(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14883b45e();
  return;
}



// FUNCTION 14883b45e FUN_14883b45e body=104 status=ok
// SIG undefined FUN_14883b45e(void)

undefined8 * FUN_14883b45e(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    param_1[1] = 0;
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
  if (*param_2 != 0) {
    uVar4 = FUN_1457b47e6(param_1);
    FUN_14883b4c6(uVar4,*param_2);
  }
  return param_1;
}



// FUNCTION 14883b4c6 FUN_14883b4c6 body=123 status=ok
// SIG undefined FUN_14883b4c6(void)

void FUN_14883b4c6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x10);
  if (((cVar2 != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) &&
     (cVar2 = FUN_140114204(param_1 + 0x20), cVar2 != '\0')) {
    return;
  }
  cVar2 = FUN_144729dda(param_2 + 0x10);
  if ((cVar2 != '\0') && (*(longlong *)(param_2 + 0x18) != 0)) {
    cVar2 = FUN_140114204(param_2 + 0x20);
    if (cVar2 != '\0') {
      uVar1 = FUN_14479d2ce(param_2 + 0x10);
      FUN_140e0ff80(param_1,param_2 + 0x20,uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14883b542 FUN_14883b542 body=298 status=ok
// SIG undefined FUN_14883b542(void)

undefined2 *
FUN_14883b542(undefined8 param_1,undefined2 *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined1 local_2c [12];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a7660c(param_4,local_2c,1);
  if (param_5 == (longlong *)0x0) {
LAB_14883b5d9:
    *param_2 = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x14) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  lVar2 = (**(code **)(*param_5 + 0x2b0))(param_5);
  if (lVar2 == 0) goto LAB_14883b5d9;
  plVar3 = (longlong *)FUN_14039ffc6(lVar2);
  if (plVar3 == (longlong *)0x0) goto LAB_14883b5d9;
  (**(code **)(*plVar3 + 0x78))(plVar3,&local_40,local_2c);
  if (local_40 != 0) {
    lVar2 = FUN_140ca9be8(local_40,param_3);
    if (lVar2 != 0) {
      FUN_14096c63a(lVar2 + 0x10,param_2);
      goto LAB_14883b62f;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
LAB_14883b62f:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14883b66e FUN_14883b66e body=56 status=ok
// SIG undefined FUN_14883b66e(void)

undefined8 FUN_14883b66e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1402057ac(param_2,param_1,uVar1,0);
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  return 1;
}



// FUNCTION 14883b6a8 FUN_14883b6a8 body=7 status=ok
// SIG undefined FUN_14883b6a8(void)

undefined4 FUN_14883b6a8(void)

{
  return DAT_14cb7c018;
}



// FUNCTION 14883b6b0 FUN_14883b6b0 body=47 status=ok
// SIG undefined FUN_14883b6b0(void)

undefined8 * FUN_14883b6b0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = DAT_14cb7bff0;
  *param_2 = DAT_14cb7bff0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = DAT_14cb7bff8;
  return param_2;
}



// FUNCTION 14883b6e0 FUN_14883b6e0 body=47 status=ok
// SIG undefined FUN_14883b6e0(void)

undefined8 * FUN_14883b6e0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = DAT_14cb7c000;
  *param_2 = DAT_14cb7c000;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = DAT_14cb7c008;
  return param_2;
}



// FUNCTION 14883b710 FUN_14883b710 body=65 status=ok
// SIG undefined FUN_14883b710(void)

uint FUN_14883b710(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    uVar3 = FUN_140427846();
    cVar1 = FUN_1470e05da(param_2,uVar3);
    if ((cVar1 != '\0') && (*(byte *)(param_4 + 0x30) < 0x16)) {
      uVar2 = 0x24010e >> (*(byte *)(param_4 + 0x30) & 0x1f);
      goto LAB_14883b748;
    }
  }
  uVar2 = 0;
LAB_14883b748:
  return uVar2 & 0xffffff01;
}



// FUNCTION 14883b751 FUN_14883b751 body=67 status=ok
// SIG undefined FUN_14883b751(void)

void FUN_14883b751(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_140149a73(uVar1,0);
  if (lVar2 != 0) {
    FUN_14039fc7b(param_2,param_3,lVar2,0);
    return;
  }
  return;
}



// FUNCTION 14883b794 FUN_14883b794 body=67 status=ok
// SIG undefined FUN_14883b794(void)

void FUN_14883b794(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_140149a73(uVar1,0);
  if (lVar2 != 0) {
    FUN_140bc53f1(param_2,param_3,lVar2,0);
    return;
  }
  return;
}



// FUNCTION 14883b7d7 FUN_14883b7d7 body=121 status=ok
// SIG undefined FUN_14883b7d7(void)

undefined8 FUN_14883b7d7(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [44];
  undefined1 local_2c [12];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14883b851(param_1,param_3);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_1405f0cf6(local_2c,param_2,0,1);
    FUN_144928d62(param_3 + 0x10,5,local_2c);
    uVar2 = FUN_140114204(param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883b851 FUN_14883b851 body=456 status=ok
// SIG undefined FUN_14883b851(void)

undefined8 FUN_14883b851(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74 [4];
  undefined8 local_70;
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  undefined1 local_50 [12];
  int local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != (longlong *)0x0) {
    uVar3 = FUN_140427846();
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_140427846();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
        *param_2 = 1;
        FUN_140c25b54(param_2);
        uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
        FUN_140fda471(&local_44,uVar3);
        if (local_44 == 0) {
          local_30 = DAT_14cb7bba0;
          local_38 = DAT_14cb7bb98;
        }
        else {
          local_30 = local_3c;
          local_38 = CONCAT44(uStack_40,local_44);
        }
        puVar1 = param_2 + 0x10;
        FUN_144928d62(puVar1,1,&local_38);
        (**(code **)(*plVar5 + 0x30))(plVar5,local_50);
        FUN_14013eb2c(param_2,local_50);
        (**(code **)(*plVar5 + 0x28))(plVar5,local_5c);
        FUN_14013eb54(param_2,local_5c);
        (**(code **)(*plVar5 + 0x20))(plVar5,local_68);
        FUN_144928d62(puVar1,4,local_68);
        local_70 = 0;
        uVar3 = 0;
        FUN_14052b5e0(local_74,&DAT_14b3fc24c,0);
        FUN_144928d62(puVar1,5,local_74);
        cVar2 = FUN_140114204(param_2);
        if (cVar2 != '\0') {
          local_78 = DAT_14c948620;
          local_80 = DAT_14c948618;
          FUN_144928d62(puVar1,5);
          uVar3 = 1;
        }
        goto LAB_14883b8bc;
      }
    }
  }
  uVar3 = 0;
LAB_14883b8bc:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883ba1a FUN_14883ba1a body=43 status=ok
// SIG undefined FUN_14883ba1a(void)

undefined8 FUN_14883ba1a(undefined8 param_1,longlong param_2)

{
  FUN_14014e938();
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14883ba46 FUN_14883ba46 body=161 status=ok
// SIG undefined FUN_14883ba46(void)

undefined8 FUN_14883ba46(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_78 [40];
  undefined2 local_50 [2];
  undefined8 local_4c;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50[0] = 0;
  local_4c = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_14883b7d7(param_2,param_3);
  if (*(int *)(param_3 + 8) < 2) {
    FUN_140c258c2(local_50,param_1);
  }
  else {
    FUN_14014e938(param_1,local_50);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883bae8 FUN_14883bae8 body=96 status=ok
// SIG undefined FUN_14883bae8(void)

undefined8 FUN_14883bae8(undefined8 param_1)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [40];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14883ba46(local_50);
  FUN_140b126e4(local_50,param_1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883bb4a FUN_14883bb4a body=222 status=ok
// SIG undefined FUN_14883bb4a(void)

undefined8 *
FUN_14883bb4a(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  *param_1 = &PTR_FUN_14b3fc660;
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(param_2 + 2);
  lVar2 = *(longlong *)(param_2 + 4);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  FUN_14485c47a((longlong)param_1 + 0x14,lVar2);
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  FUN_14485c47a((longlong)param_1 + 0x1c,param_3);
  param_1[5] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],_Src,(longlong)iVar1 * 2);
  }
  param_1[7] = param_5;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 14883bc28 FUN_14883bc28 body=235 status=ok
// SIG undefined FUN_14883bc28(void)

undefined8 *
FUN_14883bc28(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  *param_1 = &PTR_FUN_14b3fc6a0;
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(param_2 + 2);
  lVar2 = *(longlong *)(param_2 + 4);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  FUN_14485c47a((longlong)param_1 + 0x14,lVar2);
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  FUN_14485c47a((longlong)param_1 + 0x1c,param_3);
  param_1[5] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],_Src,(longlong)iVar1 * 2);
  }
  param_1[7] = param_5;
  param_1[8] = param_6;
  *(undefined4 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 14883bd14 FUN_14883bd14 body=168 status=ok
// SIG undefined FUN_14883bd14(void)

void FUN_14883bd14(longlong param_1)

{
  wchar_t *_Str;
  float fVar1;
  double dVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  wchar_t *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == 0) {
    fVar1 = 0.0;
  }
  else {
    if (*(char *)(param_1 + 0x70) == '\x03') {
      local_38 = *(undefined8 *)(param_1 + 0x74);
    }
    else {
      FUN_14883d81c(param_1 + 0x70,&local_38);
    }
    FUN_1400021e4(&local_38,&local_30);
    _Str = local_30;
    if (local_28 == 0) {
      _Str = L"";
    }
    dVar2 = _wtof(_Str);
    if (local_30 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    fVar1 = (float)dVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar1);
  }
  return;
}



// FUNCTION 14883bdbe FUN_14883bdbe body=128 status=ok
// SIG undefined FUN_14883bdbe(void)

undefined8 * FUN_14883bdbe(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x70) == '\x03') {
      local_18 = *(undefined8 *)(param_2 + 0x74);
    }
    else {
      FUN_14883d81c(param_2 + 0x70,&local_18);
    }
    FUN_1400021e4(&local_18,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14883be40 FUN_14883be40 body=43 status=ok
// SIG undefined FUN_14883be40(void)

undefined8 FUN_14883be40(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0 && param_1 != 0) {
    uVar1 = FUN_14493b798(param_2 + 0x38,param_1 + 0x38);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14883be6c FUN_14883be6c body=43 status=ok
// SIG undefined FUN_14883be6c(void)

undefined8 FUN_14883be6c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0 && param_1 != 0) {
    uVar1 = FUN_145c7fb8e(param_2 + 0x38,param_1 + 0x38);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14883be98 FUN_14883be98 body=26 status=ok
// SIG undefined FUN_14883be98(void)

undefined8 FUN_14883be98(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_14493b798(param_2 + 0x38,param_1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14883beb2 FUN_14883beb2 body=38 status=ok
// SIG undefined FUN_14883beb2(void)

ulonglong FUN_14883beb2(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_14493b798(param_2 + 0x38,param_1);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}



// FUNCTION 14883bed8 FUN_14883bed8 body=17 status=ok
// SIG undefined FUN_14883bed8(void)

bool FUN_14883bed8(char *param_1)

{
  char cVar1;
  ulonglong uVar2;
  bool bVar3;
  
  if (*param_1 == '\x01') {
    return *(int *)(param_1 + 0xc) != 0;
  }
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
LAB_140321d27:
    bVar3 = *(int *)(param_1 + 0xc) != 0;
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(ulonglong *)(param_1 + 4);
      if (uVar2 == 0) {
        return false;
      }
      if (uVar2 == DAT_14cb7c580) {
        return false;
      }
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      if (uVar2 != DAT_14c892e68) {
        return uVar2 != DAT_14cb7c568 && uVar2 != DAT_14cb7c578;
      }
    }
    else if (cVar1 == '\x02') goto LAB_140321d27;
    bVar3 = false;
  }
  return bVar3;
}



// FUNCTION 14883beea FUN_14883beea body=42 status=ok
// SIG undefined FUN_14883beea(void)

undefined8 * FUN_14883beea(undefined8 *param_1,char *param_2)

{
  if (*param_2 == '\x03') {
    *param_1 = *(undefined8 *)(param_2 + 4);
  }
  else {
    FUN_14883d81c(param_2,param_1);
  }
  return param_1;
}



// FUNCTION 14883bf14 FUN_14883bf14 body=43 status=ok
// SIG undefined FUN_14883bf14(void)

uint FUN_14883bf14(char *param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  cVar1 = *param_1;
  if (cVar1 == '\x03') {
    bVar3 = *(longlong *)(param_1 + 4) == 0;
LAB_14883bf3b:
    return (uint)!bVar3;
  }
  if (cVar1 == '\x02') {
    uVar2 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar2 = 0;
    if (cVar1 == '\x01') {
      bVar3 = *(int *)(param_1 + 0xc) == 0;
      goto LAB_14883bf3b;
    }
  }
  return uVar2;
}



// FUNCTION 14883bf40 FUN_14883bf40 body=43 status=ok
// SIG undefined FUN_14883bf40(void)

undefined1 * FUN_14883bf40(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_144976b9c(param_1,uVar1);
  return param_1;
}



// FUNCTION 14883bf6c FUN_14883bf6c body=18 status=ok
// SIG undefined FUN_14883bf6c(void)

undefined1 * FUN_14883bf6c(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = 2;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 14883bf7e thunk_FUN_1403218c0 body=5 status=ok
// SIG undefined thunk_FUN_1403218c0(void)

byte thunk_FUN_1403218c0(byte *param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  byte bVar17;
  bool bVar18;
  undefined1 auStack_158 [32];
  char *pcStack_138;
  int iStack_130;
  undefined1 uStack_12c;
  char acStack_12a [258];
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  bVar17 = *param_2;
  bVar2 = *param_1;
  bVar12 = bVar2;
  if (bVar2 < bVar17) {
    bVar12 = bVar17;
  }
  if (bVar12 == 3) {
    if (bVar2 == 3) {
      uVar5 = *(ulonglong *)(param_1 + 4);
    }
    else if (bVar2 == 2) {
      iVar3 = *(int *)(param_1 + 0xc);
      uVar5 = DAT_14cb7c570;
      if ((iVar3 != 1) && (uVar5 = DAT_14cb7c578, iVar3 != 0)) {
        pcVar1 = acStack_12a + 2;
        memset(pcVar1,0,0x100);
        FUN_1407bf796(pcVar1,0x100,&DAT_149dfc0ac,iVar3);
        sVar4 = strlen(pcVar1);
        iVar3 = (int)sVar4;
        if (iVar3 == 0) {
LAB_140321d03:
          uVar5 = 0;
          uVar6 = 0;
        }
        else {
          lVar10 = (longlong)iVar3;
          if (pcVar1 <= acStack_12a + lVar10 + 1) {
            lVar16 = 0;
            lVar11 = 0;
LAB_140321ab4:
            if ((byte)(acStack_12a[lVar11 + lVar10 + 1] - 0x30U) < 10) goto code_r0x000140321ac7;
            iVar7 = (int)lVar11;
            if (iVar7 == 0 || iVar3 <= -iVar7) goto LAB_140321b75;
            lVar16 = 0;
            if (((uint)-iVar7 < 0xb) && (acStack_12a[lVar11 + lVar10 + 1] == '_')) {
              if ((iVar7 != -1) && (acStack_12a[lVar11 + lVar10 + 2] == '0')) goto LAB_140321b75;
              lVar15 = 0;
              do {
                lVar16 = (longlong)acStack_12a[lVar11 + lVar10 + 2] + lVar15 * 10;
                lVar15 = lVar16 + -0x30;
                lVar11 = lVar11 + 1;
              } while (lVar11 != 0);
              if (lVar15 < 0x7fffffff) {
                iVar3 = iVar3 + iVar7 + -1;
                lVar16 = lVar16 + -0x2f;
              }
              else {
LAB_140321b75:
                lVar16 = 0;
              }
            }
            goto LAB_140321b77;
          }
          lVar16 = 0;
LAB_140321b7f:
          iStack_130 = iVar3;
          uStack_12c = 0;
          pcStack_138 = pcVar1;
          uVar5 = FUN_14001a6c0();
          uVar6 = lVar16 << 0x20;
          uVar5 = uVar5 & 0xffffffff;
        }
        bVar17 = *param_2;
        uVar5 = uVar5 | uVar6;
      }
    }
    else if (bVar2 == 1) {
      puVar9 = &DAT_14cb7c580;
      if (*(int *)(param_1 + 0xc) != 0) {
        puVar9 = &DAT_14cb7c588;
      }
      uVar5 = *puVar9;
    }
    else {
      uVar5 = 0;
    }
    if (bVar17 == 3) {
      uVar6 = *(ulonglong *)(param_2 + 4);
    }
    else if (bVar17 == 2) {
      iVar3 = *(int *)(param_2 + 0xc);
      uVar6 = DAT_14cb7c570;
      if ((iVar3 != 1) && (uVar6 = DAT_14cb7c578, iVar3 != 0)) {
        pcVar1 = acStack_12a + 2;
        memset(pcVar1,0,0x100);
        FUN_1407bf796(pcVar1,0x100,&DAT_149dfc0ac,iVar3);
        sVar4 = strlen(pcVar1);
        iVar3 = (int)sVar4;
        if (iVar3 == 0) {
LAB_140321d0c:
          uVar6 = 0;
          uVar14 = 0;
        }
        else {
          lVar10 = (longlong)iVar3;
          if (pcVar1 <= acStack_12a + lVar10 + 1) {
            lVar16 = 0;
            lVar11 = 0;
LAB_140321b39:
            if ((byte)(acStack_12a[lVar11 + lVar10 + 1] - 0x30U) < 10) goto code_r0x000140321b48;
            iVar7 = (int)lVar11;
            if (iVar7 == 0 || iVar3 <= -iVar7) goto LAB_140321bc5;
            lVar16 = 0;
            if (((uint)-iVar7 < 0xb) && (acStack_12a[lVar11 + lVar10 + 1] == '_')) {
              if ((iVar7 != -1) && (acStack_12a[lVar11 + lVar10 + 2] == '0')) goto LAB_140321bc5;
              lVar15 = 0;
              do {
                lVar16 = (longlong)acStack_12a[lVar11 + lVar10 + 2] + lVar15 * 10;
                lVar15 = lVar16 + -0x30;
                lVar11 = lVar11 + 1;
              } while (lVar11 != 0);
              if (lVar15 < 0x7fffffff) {
                iVar3 = iVar3 + iVar7 + -1;
                lVar16 = lVar16 + -0x2f;
              }
              else {
LAB_140321bc5:
                lVar16 = 0;
              }
            }
            goto LAB_140321bc7;
          }
          lVar16 = 0;
LAB_140321bcf:
          iStack_130 = iVar3;
          uStack_12c = 0;
          pcStack_138 = pcVar1;
          uVar6 = FUN_14001a6c0(&pcStack_138,1);
          uVar14 = lVar16 << 0x20;
          uVar6 = uVar6 & 0xffffffff;
        }
        uVar6 = uVar6 | uVar14;
      }
    }
    else if (bVar17 == 1) {
      puVar9 = &DAT_14cb7c580;
      if (*(int *)(param_2 + 0xc) != 0) {
        puVar9 = &DAT_14cb7c588;
      }
      uVar6 = *puVar9;
    }
    else {
      uVar6 = 0;
    }
    bVar17 = 1;
    if ((uVar5 != uVar6) && ((uVar6 != 0 || (uVar5 != DAT_14cb7c578)))) {
      bVar17 = uVar5 == 0 && uVar6 == DAT_14cb7c578;
    }
    goto LAB_14032192d;
  }
  if (bVar12 == 1) {
    bVar17 = FUN_140321d1a();
    bVar2 = FUN_140321d1a(param_2);
    bVar17 = bVar2 ^ bVar17 ^ 1;
    goto LAB_14032192d;
  }
  if (bVar12 != 2) {
    if (bVar12 == 0) {
      bVar17 = 1;
    }
    else {
      bVar17 = 0;
    }
    goto LAB_14032192d;
  }
  if (bVar2 == 1) {
    bVar18 = *(int *)(param_1 + 0xc) == 0;
LAB_140321a30:
    uVar13 = (uint)!bVar18;
  }
  else if (bVar2 == 2) {
    uVar13 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar13 = 0;
    if (bVar2 == 3) {
      bVar18 = *(longlong *)(param_1 + 4) == 0;
      goto LAB_140321a30;
    }
  }
  if (bVar17 == 2) {
    uVar8 = *(uint *)(param_2 + 0xc);
  }
  else {
    uVar8 = 0;
    if (bVar17 == 3) {
      bVar18 = *(longlong *)(param_2 + 4) == 0;
    }
    else {
      if (bVar17 != 1) goto LAB_140321a3f;
      bVar18 = *(int *)(param_2 + 0xc) == 0;
    }
    uVar8 = (uint)!bVar18;
  }
LAB_140321a3f:
  bVar17 = uVar13 == uVar8;
LAB_14032192d:
  if ((uStack_28 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar17;
code_r0x000140321ac7:
  lVar15 = lVar11 + -1;
  lVar11 = lVar11 + -1;
  if (acStack_12a + lVar10 + 1 + lVar15 < pcVar1) {
LAB_140321b77:
    if (iVar3 == 0) goto LAB_140321d03;
    goto LAB_140321b7f;
  }
  goto LAB_140321ab4;
code_r0x000140321b48:
  lVar15 = lVar11 + -1;
  lVar11 = lVar11 + -1;
  if (acStack_12a + lVar10 + 1 + lVar15 < pcVar1) {
LAB_140321bc7:
    if (iVar3 == 0) goto LAB_140321d0c;
    goto LAB_140321bcf;
  }
  goto LAB_140321b39;
}



// FUNCTION 14883bf84 FUN_14883bf84 body=16 status=ok
// SIG undefined FUN_14883bf84(void)

byte FUN_14883bf84(void)

{
  byte bVar1;
  
  bVar1 = FUN_1403218c0();
  return bVar1 ^ 1;
}



// FUNCTION 14883bf94 FUN_14883bf94 body=357 status=ok
// SIG undefined FUN_14883bf94(void)

void FUN_14883bf94(longlong param_1,undefined8 *param_2,longlong *param_3,uint *param_4,
                  undefined1 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  char local_98 [4];
  longlong local_94;
  uint local_8c;
  undefined8 local_88;
  uint local_80;
  undefined2 local_78 [2];
  undefined8 local_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  if (param_1 == 0) goto LAB_14883bfd8;
  local_78[0] = 0;
  local_74 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_88 = *param_2;
  local_80 = *(int *)(param_2 + 1) - 1;
  if (*(int *)(param_2 + 1) == 0) {
    local_80 = 0;
  }
  FUN_140b7c6f1(&local_88,local_78);
  local_98[0] = '\0';
  local_94 = 0;
  local_8c = 0;
  FUN_14883b751(param_1,local_78,local_98);
  if (local_98[0] == '\x03') {
    *param_3 = local_94;
LAB_14883c07e:
    uVar2 = (uint)(local_94 != 0);
LAB_14883c088:
    *param_4 = uVar2;
    uVar1 = FUN_140321d1a(local_98);
  }
  else {
    FUN_14883d81c(local_98,&local_a0);
    *param_3 = local_a0;
    if (local_98[0] != '\x01') {
      uVar2 = local_8c;
      if ((local_98[0] != '\x02') && (uVar2 = 0, local_98[0] == '\x03')) goto LAB_14883c07e;
      goto LAB_14883c088;
    }
    uVar1 = local_8c != 0;
    *param_4 = (uint)(byte)uVar1;
  }
  *param_5 = uVar1;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
LAB_14883bfd8:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14883c0fa FUN_14883c0fa body=287 status=ok
// SIG undefined FUN_14883c0fa(void)

void FUN_14883c0fa(longlong param_1,undefined8 *param_2,longlong param_3,uint param_4,byte param_5)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [4];
  undefined8 local_7c;
  uint local_74;
  undefined8 local_70;
  int local_68;
  undefined2 local_60 [2];
  undefined8 local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    local_60[0] = 0;
    local_5c = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_70 = *param_2;
    local_68 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_68 = 0;
    }
    FUN_140b7c6f1(&local_70,local_60);
    local_80[0] = 0;
    local_7c = 0;
    local_74 = 0;
    if (param_3 == 0) {
      if (param_4 == 0) {
        local_80[0] = 1;
        local_74 = (uint)param_5;
        puVar1 = &DAT_14cb7c580;
        if (param_5 != 0) {
          puVar1 = &DAT_14cb7c588;
        }
        local_7c = *puVar1;
      }
      else {
        local_80[0] = 2;
        local_74 = param_4;
      }
    }
    else {
      FUN_144976b9c(local_80,param_3);
    }
    FUN_14883b794(param_1,local_60,local_80);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883c21a FUN_14883c21a body=496 status=ok
// SIG undefined FUN_14883c21a(void)

void FUN_14883c21a(longlong *param_1,undefined8 param_2,longlong *param_3,uint *param_4,
                  undefined1 *param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  char local_b4 [4];
  longlong local_b0;
  uint local_a8;
  undefined1 local_a4 [12];
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  undefined2 local_80 [2];
  undefined8 local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_1 == (longlong *)0x0) goto LAB_14883c290;
  uVar2 = FUN_140427846();
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar2);
  if (plVar3 == (longlong *)0x0) goto LAB_14883c290;
  uVar2 = FUN_140427846();
  plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
  if (plVar4 == (longlong *)0x0 || plVar3 == plVar4) goto LAB_14883c290;
  local_7c = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_80[0] = 1;
  FUN_140c25b54(local_80);
  (**(code **)(*plVar4 + 0x28))(plVar4,local_8c);
  FUN_14013eb54(local_80,local_8c);
  (**(code **)(*plVar4 + 0x20))(plVar4,local_98);
  FUN_144928d62(&local_70,4,local_98);
  FUN_1405f0cf6(local_a4,param_2,0,1);
  FUN_144928d62(&local_70,5,local_a4);
  local_b4[0] = '\0';
  local_b0 = 0;
  local_a8 = 0;
  FUN_14883b751(param_1,local_80,local_b4);
  if (local_b4[0] == '\x03') {
    *param_3 = local_b0;
LAB_14883c386:
    uVar5 = (uint)(local_b0 != 0);
LAB_14883c390:
    *param_4 = uVar5;
    uVar1 = FUN_140321d1a(local_b4);
  }
  else {
    FUN_14883d81c(local_b4,&local_c0);
    *param_3 = local_c0;
    if (local_b4[0] != '\x01') {
      uVar5 = local_a8;
      if ((local_b4[0] != '\x02') && (uVar5 = 0, local_b4[0] == '\x03')) goto LAB_14883c386;
      goto LAB_14883c390;
    }
    uVar1 = local_a8 != 0;
    *param_4 = (uint)(byte)uVar1;
  }
  *param_5 = uVar1;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_14883c290:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14883c40c FUN_14883c40c body=453 status=ok
// SIG undefined FUN_14883c40c(void)

void FUN_14883c40c(longlong *param_1,undefined8 param_2,longlong param_3,uint param_4,byte param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_d8 [36];
  undefined1 local_b4 [4];
  undefined8 local_b0;
  uint local_a8;
  undefined1 local_a4 [12];
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  undefined2 local_80 [2];
  undefined8 local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140427846();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140427846();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        local_7c = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_80[0] = 1;
        FUN_140c25b54(local_80);
        (**(code **)(*plVar3 + 0x28))(plVar3,local_8c);
        FUN_14013eb54(local_80,local_8c);
        (**(code **)(*plVar3 + 0x20))(plVar3,local_98);
        FUN_144928d62(&local_70,4,local_98);
        FUN_1405f0cf6(local_a4,param_2,0,1);
        FUN_144928d62(&local_70,5,local_a4);
        local_b4[0] = 0;
        local_b0 = 0;
        local_a8 = 0;
        if (param_3 == 0) {
          if (param_4 == 0) {
            local_b4[0] = 1;
            local_a8 = (uint)param_5;
            puVar4 = &DAT_14cb7c580;
            if (param_5 != 0) {
              puVar4 = &DAT_14cb7c588;
            }
            local_b0 = *puVar4;
          }
          else {
            local_b4[0] = 2;
            local_a8 = param_4;
          }
        }
        else {
          FUN_144976b9c(local_b4,param_3);
        }
        FUN_14883b794(param_1,local_80,local_b4);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883c5d2 FUN_14883c5d2 body=256 status=ok
// SIG undefined FUN_14883c5d2(void)

void FUN_14883c5d2(longlong param_1,longlong param_2,undefined1 *param_3)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined2 local_58 [2];
  undefined8 local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(float *)(param_1 + 0x40) = *(float *)(param_2 + 100) + *(float *)(param_1 + 0x40);
  *param_3 = 0;
  lVar3 = FUN_14479d2ce(param_1 + 0x1c);
  if (lVar3 == 0) {
    *param_3 = 1;
  }
  local_58[0] = 0;
  local_54 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  cVar2 = FUN_14883b7d7(lVar3,param_1 + 0x28);
  if (cVar2 == '\0') {
    fVar1 = *(float *)(param_1 + 0x40);
    *param_3 = 2.0 < fVar1;
    if (fVar1 <= 2.0) goto LAB_14883c690;
  }
  else {
    *param_3 = 1;
  }
  local_60 = 0;
  local_68 = 0;
  uVar4 = FUN_1414e0fe3(DAT_14c951640,0,0x40,0);
  **(undefined8 **)(param_1 + 0x38) = uVar4;
  FUN_1414e10dc(**(undefined8 **)(param_1 + 0x38),local_58,lVar3);
LAB_14883c690:
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14883c6d4 FUN_14883c6d4 body=190 status=ok
// SIG undefined FUN_14883c6d4(void)

void FUN_14883c6d4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_39 = '\x01';
  FUN_14883c5d2(param_1,param_2,&local_39);
  uVar4 = FUN_14479d2ce(param_1 + 0x14);
  local_48 = 0;
  FUN_14485c47a(&local_48,uVar4);
  uVar3 = local_48;
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0xc);
  *(char *)(param_2 + 0x60) = local_39;
  if (local_39 == '\x01') {
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
    *(undefined8 *)(lVar5 + lVar6 * 0x14) = uVar4;
    *(undefined4 *)(lVar5 + 8 + lVar6 * 0x14) = uVar1;
    *(undefined8 *)(lVar5 + 0xc + lVar6 * 0x14) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883c794 FUN_14883c794 body=226 status=ok
// SIG undefined FUN_14883c794(void)

void FUN_14883c794(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_39 = '\x01';
  FUN_14883c5d2(param_1,param_2,&local_39);
  cVar4 = local_39;
  if (local_39 == '\x01') {
    FUN_14654c976(**(undefined8 **)(param_1 + 0x38),param_1 + 0x48);
  }
  uVar5 = FUN_14479d2ce(param_1 + 0x14);
  local_48 = 0;
  FUN_14485c47a(&local_48,uVar5);
  uVar3 = local_48;
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0xc);
  *(char *)(param_2 + 0x60) = cVar4;
  if (cVar4 != '\0') {
    iVar2 = *(int *)(param_2 + 0x58);
    lVar7 = (longlong)iVar2;
    *(uint *)(param_2 + 0x58) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
      FUN_14579eadc(param_2,iVar2);
    }
    lVar6 = *(longlong *)(param_2 + 0x50);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      lVar6 = param_2;
    }
    *(undefined8 *)(lVar6 + lVar7 * 0x14) = uVar5;
    *(undefined4 *)(lVar6 + 8 + lVar7 * 0x14) = uVar1;
    *(undefined8 *)(lVar6 + 0xc + lVar7 * 0x14) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883c878 FUN_14883c878 body=645 status=ok
// SIG undefined FUN_14883c878(void)

void FUN_14883c878(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined8 local_e0;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined2 local_a8;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(float *)(param_1 + 0x48) = *(float *)(param_2 + 100) + *(float *)(param_1 + 0x48);
  local_b8 = 0;
  uStack_b0 = 0;
  lVar10 = (longlong)(int)(*(longlong **)(param_1 + 0x38))[1];
  if (lVar10 != 0) {
    lVar8 = **(longlong **)(param_1 + 0x38);
    lVar9 = 0;
    do {
      uVar7 = *(undefined8 *)(lVar8 + lVar9);
      local_a8 = (undefined2)uVar7;
      uStack_a6 = (undefined2)((ulonglong)uVar7 >> 0x10);
      uStack_a4 = (undefined4)((ulonglong)uVar7 >> 0x20);
      FUN_1400ddfc2(&local_b8,&local_a8);
      lVar4 = local_b8;
      lVar9 = lVar9 + 8;
    } while (lVar10 * 8 != lVar9);
    if ((longlong)(int)uStack_b0 != 0) {
      lVar10 = param_1 + 0x28;
      local_c8 = (longlong)(int)uStack_b0 << 3;
      lVar8 = 0;
      local_d0 = lVar10;
      do {
        uVar7 = *(undefined8 *)(lVar4 + lVar8);
        local_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        cVar5 = FUN_14883b7d7(uVar7,lVar10);
        if (cVar5 == '\0') {
          if (*(float *)(param_1 + 0x48) <= 2.0) {
            if (local_80 != 0) {
              FUN_1400020a8();
            }
            goto LAB_14883ca74;
          }
        }
        else {
          local_e0 = 0;
          local_e8 = 0;
          uVar6 = FUN_1414e0fe3(DAT_14c951640,0,0x40,0);
          FUN_1414e10dc(uVar6,&local_a8,uVar7);
          plVar3 = *(longlong **)(param_1 + 0x40);
          iVar2 = (int)plVar3[1];
          *(uint *)(plVar3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
            FUN_14883f358(plVar3,iVar2);
          }
          *(undefined8 *)(*plVar3 + (longlong)iVar2 * 8) = uVar6;
          lVar10 = local_d0;
        }
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        lVar8 = lVar8 + 8;
      } while (local_c8 != lVar8);
    }
  }
  uVar7 = FUN_14479d2ce(param_1 + 0x14);
  local_c0 = 0;
  FUN_14485c47a(&local_c0,uVar7);
  uVar6 = local_c0;
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar7 = *(undefined8 *)(param_1 + 0xc);
  *(undefined1 *)(param_2 + 0x60) = 1;
  iVar2 = *(int *)(param_2 + 0x58);
  lVar10 = (longlong)iVar2;
  *(uint *)(param_2 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
    FUN_14579eadc(param_2,iVar2);
  }
  lVar8 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar8 = param_2;
  }
  *(undefined8 *)(lVar8 + lVar10 * 0x14) = uVar7;
  *(undefined4 *)(lVar8 + 8 + lVar10 * 0x14) = uVar1;
  *(undefined8 *)(lVar8 + 0xc + lVar10 * 0x14) = uVar6;
LAB_14883ca74:
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883cafe FUN_14883cafe body=182 status=ok
// SIG undefined FUN_14883cafe(void)

bool FUN_14883cafe(ulonglong *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [44];
  ulonglong local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar2 = (ulonglong)DAT_14c892b58;
  if (uVar1 == uVar2) {
    local_40 = 0;
    (**(code **)(*param_3 + 0x160))(param_3,&local_40);
    local_38 = local_40;
    FUN_1401533ba(&local_4c,&local_38,1);
    *(undefined4 *)(param_1 + 1) = local_44;
    *param_1 = local_4c;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 == uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883cbb6 thunk_FUN_143d2744e body=5 status=ok
// SIG undefined thunk_FUN_143d2744e(void)

void thunk_FUN_143d2744e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined2 auStack_68 [2];
  undefined8 uStack_64;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0xd) == '\0') goto LAB_143d277a7;
  if (((((*(longlong **)(param_1 + 0x80) != (longlong *)0x0) && (*(int *)(param_1 + 0x7c) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x78), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar8 != 0)))) &&
     ((*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x7c) &&
      (((*(uint *)(lVar8 + 8) & 0x10200000) == 0 &&
       (lVar8 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x98))(), lVar8 != 0)))))) {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      FUN_14480f766(lVar8 + 0x2d0);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      FUN_14480f766(lVar8 + 0x2b8);
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_14480f766(&DAT_14cb103e0);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if ((((*(int *)(param_1 + 0x7c) == 0) || (uVar1 = *(uint *)(param_1 + 0x78), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_1 + 0x7c))) ||
      (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 ||
       (((longlong *)*plVar6 == (longlong *)0x0 ||
        (lVar8 = (**(code **)(*(longlong *)*plVar6 + 0x180))(), lVar8 == 0)))))))) {
    auStack_68[0] = 0;
    uStack_64 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    lStack_40 = 0;
    uStack_38 = 0;
    lVar8 = 0;
  }
  else {
    FUN_1406f1bc8(param_1,auStack_68);
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  if ((*(longlong *)(param_1 + 0x90) == 0) && (*(int *)(param_1 + 0x38) < 1)) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)(param_1 + 0x90);
    plVar4 = (longlong *)FUN_140502abf(lVar8);
    if (*plVar6 != 0) {
      if ((plVar4 != (longlong *)0x0) && (cVar3 = FUN_1401144ce(auStack_68), cVar3 != '\0')) {
        (**(code **)(*plVar4 + 0x48))(plVar4,auStack_68,*(undefined8 *)(param_1 + 0x98));
        if (*(int *)(param_1 + 0x7c) == 0) {
LAB_143d277d1:
          uVar9 = 0;
        }
        else {
          uVar1 = *(uint *)(param_1 + 0x78);
          uVar9 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            puVar7 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((puVar7 == (undefined8 *)0x0) ||
               ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x7c) ||
                ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_143d277d1;
            uVar9 = *puVar7;
          }
        }
        (**(code **)(*plVar4 + 0x58))(plVar4,auStack_68,uVar9);
        (**(code **)(*plVar4 + 0x40))(plVar4,auStack_68,*plVar6);
      }
      FUN_14028f532(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
      *(undefined4 *)(param_1 + 200) = 0;
      if (*(int *)(param_1 + 0xcc) != 0) {
        FUN_1411c1ecc(param_1 + 0xc0,0);
      }
      *plVar6 = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
  }
  FUN_1405a412e(param_1);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x88))(plVar4);
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar10 = (longlong)*(int *)(param_1 + 0x38) * 0xa8;
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0x98);
    do {
      lVar2 = plVar6[-1];
      if (lVar2 != 0) {
        lVar5 = FUN_140149a73(lVar8,0);
        if (lVar5 != 0) {
          FUN_140825b72(plVar6 + -0xc,lVar2,lVar5,0);
        }
        plVar6[-1] = 0;
      }
      if ((*plVar6 != 0) && ((*(byte *)(*plVar6 + 0x10) & 1) != 0)) {
        FUN_1408256d2(plVar6);
      }
      plVar6 = plVar6 + 0x15;
      lVar10 = lVar10 + -0xa8;
    } while (lVar10 != 0);
  }
  if (lStack_40 != 0) {
    FUN_1400020a8();
  }
LAB_143d277a7:
  if ((uStack_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14883cbbc FUN_14883cbbc body=16 status=ok
// SIG undefined FUN_14883cbbc(void)

void FUN_14883cbbc(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *param_2 = *param_1;
  return;
}



// FUNCTION 14883cbcc FUN_14883cbcc body=17 status=ok
// SIG undefined FUN_14883cbcc(void)

void FUN_14883cbcc(longlong param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x20);
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14883cbe2 FUN_14883cbe2 body=133 status=ok
// SIG undefined FUN_14883cbe2(void)

undefined8 FUN_14883cbe2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d632de(param_1,local_30);
  FUN_140056680(local_40,L"FactsChannel: ");
  FUN_1401c7f3e(param_2,local_40,local_30);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883cc68 FUN_14883cc68 body=95 status=ok
// SIG undefined FUN_14883cc68(void)

void FUN_14883cc68(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_145d27f42();
  iVar1 = *(int *)(param_1 + 0xf4);
  FUN_14087196b(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0xf4) != 0)) {
    FUN_14883f478(param_1 + 0xe8);
  }
  FUN_1414df1a6(param_1,param_2);
  return;
}



// FUNCTION 14883ccc8 FUN_14883ccc8 body=86 status=ok
// SIG undefined FUN_14883ccc8(void)

void FUN_14883ccc8(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  FUN_1434a87a2();
  lVar1 = (longlong)*(int *)(param_1 + 0xf0);
  if (0 < lVar1) {
    uVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x30;
    do {
      lVar1 = lVar1 + -0x30;
      FUN_1470e6416(*(longlong *)(param_1 + 0xe8) + lVar1,param_2);
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  return;
}



// FUNCTION 14883cd1e FUN_14883cd1e body=102 status=ok
// SIG undefined FUN_14883cd1e(void)

void FUN_14883cd1e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0xf8) + uVar1) == param_2) {
        if ((int)(uVar1 >> 5) * -0x55555555 == -1) {
          return;
        }
        FUN_14883f644(param_1 + 0xf8);
        FUN_14883f6cc(param_1 + 0xf8);
        return;
      }
      uVar1 = uVar1 + 0x60;
    } while ((longlong)*(int *)(param_1 + 0x100) * 0x60 != uVar1);
  }
  return;
}



// FUNCTION 14883cd84 FUN_14883cd84 body=31 status=ok
// SIG undefined FUN_14883cd84(void)

void FUN_14883cd84(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x170,0x10);
  FUN_14614af66(uVar1);
  return;
}



// FUNCTION 14883cda4 FUN_14883cda4 body=31 status=ok
// SIG undefined FUN_14883cda4(void)

void FUN_14883cda4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x458,0x10);
  FUN_145d0ee24(uVar1);
  return;
}



// FUNCTION 14883cdca FUN_14883cdca body=44 status=ok
// SIG undefined FUN_14883cdca(void)

void FUN_14883cdca(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x148);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xd8))(plVar1,1);
  }
  FUN_1414ef458(param_1);
  return;
}



// FUNCTION 14883cdf6 FUN_14883cdf6 body=1467 status=ok
// SIG undefined FUN_14883cdf6(void)

void FUN_14883cdf6(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined8 *puVar27;
  longlong lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  bool bVar31;
  float fVar32;
  undefined1 auStack_388 [32];
  longlong local_368;
  undefined8 uStack_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  local_368 = 0;
  uStack_360 = 0;
  iVar23 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar23 != 0) {
    lVar28 = *(longlong *)(param_1 + 0x58) + 8;
    lVar18 = 0;
    do {
      uVar11 = *(uint *)(lVar28 + lVar18);
      bVar31 = true;
      if ((uVar11 & 2) != 0) {
        if (*(int *)((longlong)param_3 + 0xd4) < 0) {
          lVar12 = (**(code **)(*param_3 + 0x2f0))(param_3);
          bVar31 = lVar12 == 0;
          uVar11 = *(uint *)(lVar28 + lVar18);
        }
        else {
          bVar31 = false;
        }
      }
      if ((uVar11 & 4) != 0) {
        lVar12 = (**(code **)(*param_3 + 0x2f0))(param_3);
        bVar31 = (bool)(bVar31 & lVar12 == 0);
        uVar11 = *(uint *)(lVar28 + lVar18);
      }
      if ((uVar11 & 8) != 0) {
        bVar31 = (bool)(bVar31 != false & *(byte *)(param_2 + 0x1f8));
      }
      if (bVar31 != false) {
        lVar12 = (longlong)(int)uStack_360;
        uVar11 = (int)uStack_360 + 1;
        uStack_360 = CONCAT44(uStack_360._4_4_,uVar11);
        if (uStack_360._4_4_ < uVar11) {
          FUN_148840a76(&local_368);
        }
        puVar13 = (undefined4 *)(lVar18 + -8 + lVar28);
        uVar4 = puVar13[1];
        uVar5 = puVar13[2];
        uVar6 = puVar13[3];
        puVar3 = (undefined4 *)(local_368 + lVar12 * 0x10);
        *puVar3 = *puVar13;
        puVar3[1] = uVar4;
        puVar3[2] = uVar5;
        puVar3[3] = uVar6;
      }
      lVar12 = local_368;
      lVar18 = lVar18 + 0x10;
    } while ((longlong)iVar23 * 0x10 != lVar18);
    iVar23 = (int)uStack_360;
    lVar18 = (longlong)(int)uStack_360;
    if (1 < lVar18) {
      memset(local_348,0,0x2f0);
      local_358 = lVar12;
      local_350 = lVar18 * 0x10 + lVar12 + -0x10;
      fVar32 = logf((float)iVar23);
      local_348[0] = (int)(longlong)(fVar32 + fVar32);
      plVar14 = &local_358;
      do {
        puVar16 = (undefined8 *)*plVar14;
        puVar19 = (undefined8 *)plVar14[1];
        iVar23 = (int)plVar14[2];
        iVar26 = (int)((ulonglong)((longlong)puVar19 - (longlong)puVar16) >> 4);
        uVar11 = iVar26 + 1;
        puVar17 = puVar16;
        puVar21 = puVar19;
        if (iVar23 != 0) {
LAB_14883cfac:
          if (8 < (int)uVar11) {
            uVar7 = puVar16[(ulonglong)(uVar11 >> 1) * 2];
            uVar8 = (puVar16 + (ulonglong)(uVar11 >> 1) * 2)[1];
            uVar9 = puVar16[1];
            puVar16[(ulonglong)(uVar11 >> 1) * 2] = *puVar16;
            (puVar16 + (ulonglong)(uVar11 >> 1) * 2)[1] = uVar9;
            *puVar16 = uVar7;
            puVar16[1] = uVar8;
            puVar27 = puVar21 + 2;
            puVar15 = puVar16;
            do {
              puVar10 = puVar15 + 2;
              puVar22 = puVar15 + 2;
              do {
                puVar30 = puVar22;
                puVar15 = puVar10;
                if (puVar21 < puVar15) break;
                puVar10 = puVar15 + 2;
                puVar22 = puVar30 + 2;
              } while (*(ushort *)((longlong)puVar15 + 0xc) <= *(ushort *)((longlong)puVar16 + 0xc))
              ;
              puVar10 = puVar27 + -4;
              do {
                puVar22 = puVar27;
                puVar29 = puVar10;
                puVar27 = puVar22 + -2;
                if (puVar27 <= puVar16) break;
                puVar10 = puVar29 + -2;
              } while (*(ushort *)((longlong)puVar16 + 0xc) <= *(ushort *)((longlong)puVar22 + -4));
              if (puVar27 < puVar15) goto LAB_14883d05d;
              uVar7 = *puVar15;
              uVar8 = puVar15[1];
              uVar9 = puVar22[-1];
              *puVar15 = *puVar27;
              puVar15[1] = uVar9;
              *puVar27 = uVar7;
              puVar22[-1] = uVar8;
            } while( true );
          }
          for (; puVar19 = puVar16, puVar17 = puVar16, puVar16 < puVar21; puVar21 = puVar21 + -2) {
            while (puVar27 = puVar19, puVar19 = puVar17 + 2, puVar19 <= puVar21) {
              puVar2 = (ushort *)((longlong)puVar17 + 0x1c);
              puVar17 = puVar19;
              if (*puVar2 <= *(ushort *)((longlong)puVar27 + 0xc)) {
                puVar19 = puVar27;
              }
            }
            local_58 = *puVar27;
            uStack_50 = puVar27[1];
            uVar8 = local_58;
            uVar9 = uStack_50;
            uVar7 = puVar21[1];
            *puVar27 = *puVar21;
            puVar27[1] = uVar7;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            *(undefined4 *)puVar21 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar21 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar21 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_50._4_4_;
            local_58 = uVar8;
            uStack_50 = uVar9;
          }
          goto LAB_14883d332;
        }
LAB_14883d108:
        if (uVar11 != 0) {
          iVar23 = (iVar26 - (iVar26 + -1 >> 0x1f)) + -1 >> 1;
          iVar26 = iVar23;
joined_r0x00014883d12f:
          do {
            iVar25 = iVar23 * 2 + 1;
            if (iVar25 < (int)uVar11) {
              iVar24 = iVar23 * 2 + 2;
              if ((iVar24 < (int)uVar11) &&
                 (*(ushort *)((longlong)puVar16 + (longlong)iVar25 * 0x10 + 0xc) <=
                  *(ushort *)((longlong)puVar16 + (longlong)iVar24 * 0x10 + 0xc))) {
                iVar25 = iVar24;
              }
              if (*(ushort *)((longlong)puVar16 + (longlong)iVar23 * 0x10 + 0xc) <
                  *(ushort *)((longlong)puVar16 + (longlong)iVar25 * 0x10 + 0xc)) {
                puVar21 = puVar16 + (longlong)iVar23 * 2;
                puVar19 = puVar16 + (longlong)iVar25 * 2;
                local_58 = *puVar21;
                uStack_50 = puVar21[1];
                uVar8 = local_58;
                uVar9 = uStack_50;
                uVar7 = puVar19[1];
                *puVar21 = *puVar19;
                puVar21[1] = uVar7;
                local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
                uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
                *(undefined4 *)puVar19 = (undefined4)local_58;
                *(undefined4 *)((longlong)puVar19 + 4) = local_58._4_4_;
                *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_50._4_4_;
                iVar23 = iVar25;
                local_58 = uVar8;
                uStack_50 = uVar9;
                goto joined_r0x00014883d12f;
              }
            }
            bVar31 = iVar26 != 0;
            iVar23 = iVar26 + -1;
            iVar26 = iVar23;
          } while (bVar31);
          if (1 < (int)uVar11) {
            uVar20 = (ulonglong)uVar11 - 1;
            local_58 = *puVar16;
            uStack_50 = puVar16[1];
            uVar8 = local_58;
            uVar9 = uStack_50;
            uVar7 = (puVar16 + uVar20 * 2)[1];
            *puVar16 = puVar16[uVar20 * 2];
            puVar16[1] = uVar7;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            puVar21 = puVar16 + uVar20 * 2;
            *(undefined4 *)puVar21 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar21 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar21 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_50._4_4_;
            local_58 = uVar8;
            uStack_50 = uVar9;
            if (uVar11 != 2) {
              do {
                iVar23 = 0;
                iVar25 = 1;
                iVar26 = 0;
                do {
                  iVar23 = iVar23 + 2;
                  iVar24 = iVar25;
                  if (((longlong)iVar23 < (longlong)uVar20) &&
                     (*(ushort *)((longlong)puVar16 + (longlong)iVar25 * 0x10 + 0xc) <=
                      *(ushort *)((longlong)puVar16 + (longlong)iVar23 * 0x10 + 0xc))) {
                    iVar24 = iVar23;
                  }
                  if (*(ushort *)((longlong)puVar16 + (longlong)iVar24 * 0x10 + 0xc) <=
                      *(ushort *)((longlong)puVar16 + (longlong)iVar26 * 0x10 + 0xc)) break;
                  puVar21 = puVar16 + (longlong)iVar26 * 2;
                  puVar19 = puVar16 + (longlong)iVar24 * 2;
                  uVar7 = *puVar21;
                  uVar8 = puVar21[1];
                  uVar9 = puVar19[1];
                  *puVar21 = *puVar19;
                  puVar21[1] = uVar9;
                  *puVar19 = uVar7;
                  puVar19[1] = uVar8;
                  iVar23 = iVar24 * 2;
                  iVar25 = iVar24 * 2 + 1;
                  iVar26 = iVar24;
                } while ((longlong)iVar25 < (longlong)uVar20);
                uVar1 = uVar20 - 1;
                local_58 = *puVar16;
                uStack_50 = puVar16[1];
                uVar8 = local_58;
                uVar9 = uStack_50;
                uVar7 = (puVar16 + uVar1 * 2)[1];
                *puVar16 = puVar16[uVar1 * 2];
                puVar16[1] = uVar7;
                local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
                uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
                puVar21 = puVar16 + uVar1 * 2;
                *(undefined4 *)puVar21 = (undefined4)local_58;
                *(undefined4 *)((longlong)puVar21 + 4) = local_58._4_4_;
                *(undefined4 *)(puVar21 + 1) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_50._4_4_;
                bVar31 = 2 < uVar20;
                uVar20 = uVar1;
                local_58 = uVar8;
                uStack_50 = uVar9;
              } while (bVar31);
            }
          }
        }
LAB_14883d332:
        plVar14 = plVar14 + -3;
      } while (&local_358 <= plVar14);
    }
    lVar18 = local_368;
    if ((int)uStack_360 != 0) {
      lVar28 = (longlong)(int)uStack_360;
      lVar12 = 0;
      do {
        iVar23 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar23 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar23 + 1U) {
          FUN_1446f84a2(param_4,iVar23);
        }
        *(undefined8 *)(*param_4 + (longlong)iVar23 * 8) = *(undefined8 *)(lVar18 + lVar12);
        lVar12 = lVar12 + 0x10;
      } while (lVar28 * 0x10 != lVar12);
    }
    if (local_368 != 0) {
      FUN_1400020a8(local_368);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14883d05d:
  local_58 = *puVar16;
  uStack_50 = puVar16[1];
  uVar8 = local_58;
  uVar9 = uStack_50;
  uVar7 = puVar22[-1];
  *puVar16 = *puVar27;
  puVar16[1] = uVar7;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar27 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar22 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar22 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar22 + -4) = uStack_50._4_4_;
  iVar23 = iVar23 + -1;
  puVar22 = puVar22 + -4;
  local_58 = uVar8;
  uStack_50 = uVar9;
  if ((longlong)puVar29 - (longlong)puVar17 < (longlong)puVar19 - (longlong)puVar30) {
    if (puVar15 < puVar21) {
      *plVar14 = (longlong)puVar15;
      plVar14[1] = (longlong)puVar21;
      *(int *)(plVar14 + 2) = iVar23;
      plVar14 = plVar14 + 3;
    }
    puVar30 = puVar16;
    puVar19 = puVar29;
    if (puVar27 <= puVar16 + 2) goto LAB_14883d332;
  }
  else {
    if (puVar16 + 2 < puVar27) {
      *plVar14 = (longlong)puVar16;
      plVar14[1] = (longlong)puVar22;
      *(int *)(plVar14 + 2) = iVar23;
      plVar14 = plVar14 + 3;
    }
    puVar16 = puVar15;
    puVar22 = puVar21;
    puVar19 = puVar21;
    if (puVar21 <= puVar15) goto LAB_14883d332;
  }
  iVar26 = (int)((ulonglong)((longlong)puVar19 - (longlong)puVar30) >> 4);
  uVar11 = iVar26 + 1;
  puVar17 = puVar30;
  puVar21 = puVar22;
  if (iVar23 == 0) goto LAB_14883d108;
  goto LAB_14883cfac;
}



// FUNCTION 14883d3b2 FUN_14883d3b2 body=170 status=ok
// SIG undefined FUN_14883d3b2(void)

longlong FUN_14883d3b2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1c8) != *(int *)(param_1 + 500)) {
    uVar2 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0x1f8;
    if (*(longlong *)(param_1 + 0x200) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x200);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x208) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar2 << 0x13 | uVar2) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x1c0) + (longlong)iVar4 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            return plVar1[1];
          }
          return 0;
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14883d45c FUN_14883d45c body=93 status=ok
// SIG undefined FUN_14883d45c(void)

undefined8 FUN_14883d45c(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  while( true ) {
    cVar1 = FUN_144729dda(param_1 + 0x60);
    if (cVar1 == '\0') break;
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x60);
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2f8))(plVar2);
    if (plVar2 == (longlong *)0x0) break;
    param_1 = (**(code **)(*plVar2 + 0x2b0))(plVar2);
    if (param_1 == 0) {
      return 0;
    }
  }
  return *(undefined8 *)(param_1 + 0x150);
}



// FUNCTION 14883d4ba FUN_14883d4ba body=8 status=ok
// SIG undefined FUN_14883d4ba(void)

undefined8 FUN_14883d4ba(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



// FUNCTION 14883d4c2 FUN_14883d4c2 body=259 status=ok
// SIG undefined FUN_14883d4c2(void)

longlong FUN_14883d4c2(char *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x14) < 1) {
      return 0;
    }
    if (*param_1 != '\x01') {
      return 0;
    }
    lVar1 = FUN_140149a73(param_2,0);
    if (lVar1 == 0) {
      return 0;
    }
    plVar2 = (longlong *)FUN_1401499e8(lVar1);
    if ((plVar2 != (longlong *)0x0) &&
       (lVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,param_1), lVar1 != 0)) {
      lVar5 = *(longlong *)(lVar1 + 0x10);
      if (*(longlong *)(lVar1 + 0x10) == 0) {
        lVar5 = lVar1;
      }
      if ((longlong)*(int *)(lVar1 + 0x18) != 0) {
        lVar1 = (longlong)*(int *)(lVar1 + 0x18) << 3;
        do {
          lVar3 = FUN_14479d2ce(lVar5);
          if (lVar3 != 0) {
            lVar4 = FUN_144a6c4d8();
            if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
              return lVar3;
            }
          }
          lVar3 = FUN_14479d2ce(lVar5);
          if (lVar3 != 0) {
            lVar4 = FUN_144a78d6a();
            if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
              return *(longlong *)(lVar3 + 0xa8);
            }
          }
          lVar5 = lVar5 + 8;
          lVar1 = lVar1 + -8;
          if (lVar1 == 0) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
}



// FUNCTION 14883d5c5 FUN_14883d5c5 body=206 status=ok
// SIG undefined FUN_14883d5c5(void)

undefined8 * FUN_14883d5c5(undefined8 *param_1,int *param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_58 [36];
  undefined1 local_34 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_3 == 0) || (*param_2 == 0)) || (param_2[1] == 0)) || (*param_2 == DAT_14c948000)) {
    *(undefined4 *)(param_1 + 1) = DAT_14c948620;
    *param_1 = DAT_14c948618;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  FUN_144a659ac(param_2,local_34,0);
  cVar1 = FUN_143d204ee(local_34);
  if (cVar1 == '\r') {
    plVar2 = (longlong *)FUN_14883d45c(param_3);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1,param_2);
      goto LAB_14883d65e;
    }
  }
  *(undefined4 *)(param_1 + 1) = DAT_14c948620;
  *param_1 = DAT_14c948618;
LAB_14883d65e:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14883d694 FUN_14883d694 body=96 status=ok
// SIG undefined FUN_14883d694(void)

undefined8 FUN_14883d694(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [40];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1409c4e4e(param_1,local_50);
  FUN_140b126e4(local_50,param_2);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883d6f6 FUN_14883d6f6 body=293 status=ok
// SIG undefined FUN_14883d6f6(void)

float * FUN_14883d6f6(longlong param_1,float *param_2,longlong param_3,undefined8 param_4)

{
  double dVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = -1.0;
  if (((((param_3 != 0) &&
        (plVar3 = (longlong *)
                  FUN_140e0f8b8(param_4,*(undefined1 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x48,
                                param_1 + 0x68), plVar3 != (longlong *)0x0)) &&
       (lVar4 = *plVar3, lVar4 != 0)) &&
      ((cVar2 = FUN_144729dda(lVar4 + 0x10), cVar2 != '\0' && (*(longlong *)(lVar4 + 0x18) != 0))))
     && (cVar2 = FUN_140114204(lVar4 + 0x20), cVar2 != '\0')) {
    puVar5 = &DAT_14cb7bfe0;
    if (*plVar3 != 0) {
      puVar5 = (undefined1 *)(*plVar3 + 0x58);
    }
    cVar2 = FUN_1403218c0(puVar5,param_1 + 0x54);
    if (cVar2 != '\0') {
      if (*plVar3 == 0) {
        fVar6 = 0.0;
        fVar7 = 0.0;
      }
      else {
        lVar4 = FUN_14479d2ce(*plVar3 + 0x10);
        fVar6 = 0.0;
        if ((lVar4 != 0) && (*(longlong **)(lVar4 + 0x178) != (longlong *)0x0)) {
          dVar1 = (double)(**(code **)(**(longlong **)(lVar4 + 0x178) + 0x640))();
          fVar6 = (float)dVar1;
        }
        if (*plVar3 == 0) {
          fVar7 = 0.0;
        }
        else {
          fVar7 = *(float *)(*plVar3 + 0x68);
        }
        if (fVar6 < fVar7) goto LAB_14883d7f6;
      }
      fVar8 = fVar6 - fVar7;
    }
  }
LAB_14883d7f6:
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = fVar8;
  *(undefined1 *)(param_2 + 8) = 3;
  return param_2;
}



// FUNCTION 14883d81c FUN_14883d81c body=227 status=ok
// SIG undefined FUN_14883d81c(void)

undefined8 * FUN_14883d81c(char *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_148 [32];
  undefined1 local_128 [264];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar1 = *param_1;
  if (cVar1 == '\x03') {
    uVar3 = *(undefined8 *)(param_1 + 4);
  }
  else if (cVar1 == '\x02') {
    iVar2 = *(int *)(param_1 + 0xc);
    uVar3 = DAT_14cb7c570;
    if ((iVar2 != 1) && (uVar3 = DAT_14cb7c578, iVar2 != 0)) {
      memset(local_128,0,0x100);
      FUN_1407bf796(local_128,0x100,&DAT_149dfc0ac,iVar2);
      FUN_1446ddc76(param_2,local_128,1);
      goto LAB_14883d84a;
    }
  }
  else {
    if (cVar1 != '\x01') {
      *param_2 = 0;
      goto LAB_14883d84a;
    }
    puVar4 = &DAT_14cb7c580;
    if (*(int *)(param_1 + 0xc) != 0) {
      puVar4 = &DAT_14cb7c588;
    }
    uVar3 = *puVar4;
  }
  *param_2 = uVar3;
LAB_14883d84a:
  if ((local_20 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14883d900 FUN_14883d900 body=95 status=ok
// SIG undefined FUN_14883d900(void)

void FUN_14883d900(undefined8 param_1,byte param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  undefined8 local_14;
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18[0] = 1;
  local_c = (uint)param_2;
  puVar1 = &DAT_14cb7c580;
  if (param_2 != 0) {
    puVar1 = &DAT_14cb7c588;
  }
  local_14 = *puVar1;
  FUN_1403218c0(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883d960 FUN_14883d960 body=77 status=ok
// SIG undefined FUN_14883d960(void)

void FUN_14883d960(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141881e36(local_28);
  FUN_1403218c0(param_1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883d9b2 FUN_14883d9b2 body=293 status=ok
// SIG undefined FUN_14883d9b2(void)

ulonglong FUN_14883d9b2(undefined4 *param_1,longlong *param_2,ulonglong param_3)

{
  wchar_t *_Str;
  size_t sVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_278 [32];
  longlong local_258 [3];
  undefined8 local_240;
  undefined8 uStack_238;
  ulonglong *local_230;
  char local_228;
  undefined1 local_220 [512];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_258[0] = 0;
  local_258[1] = 0;
  if ((param_3 & 1) == 0) {
    FUN_14020fad6(local_258,*param_2);
    _Str = (wchar_t *)*param_2;
    sVar1 = wcslen(_Str);
    *param_2 = (longlong)(_Str + (int)sVar1);
  }
  else {
    local_240 = local_220;
    local_228 = '\0';
    local_230 = &local_20;
    uStack_238 = local_240;
    lVar2 = FUN_1409a0110(*param_2,&local_240,1);
    *param_2 = lVar2;
    if (lVar2 == 0) {
      if (local_228 == '\x01') {
        FUN_1400020a8(local_240);
      }
      uVar3 = 0;
      goto LAB_14883da1f;
    }
    FUN_1402980a2(local_258,local_240,(ulonglong)((longlong)uStack_238 - (longlong)local_240) >> 1);
    if (local_228 == '\x01') {
      FUN_1400020a8(local_240);
    }
  }
  FUN_141881c76(&local_240,local_258);
  *param_1 = (undefined4)local_240;
  param_1[1] = local_240._4_4_;
  param_1[2] = (undefined4)uStack_238;
  param_1[3] = uStack_238._4_4_;
  uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_14883da1f:
  if (local_258[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883dad8 FUN_14883dad8 body=319 status=ok
// SIG undefined FUN_14883dad8(void)

undefined8
FUN_14883dad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             byte param_5)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  bool bVar4;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined8 uStack_50;
  longlong local_48;
  int local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_5 & 1) == 0) {
    FUN_140b12754(param_1,&local_38);
    iVar2 = local_30 + -1;
    if (local_30 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(param_2,local_38,iVar2);
  }
  else {
    FUN_140b12754(param_1,&local_38);
    if (local_30 < 2) {
      FUN_1400020e8(param_2,&DAT_149e192d0,2);
    }
    else {
      FUN_140b12754(param_1,&local_58);
      FUN_144832102(&local_58,0);
      puVar1 = local_58;
      bVar4 = (int)uStack_50 != 0;
      local_58 = (undefined2 *)0x0;
      uStack_50 = 0;
      puVar3 = &DAT_149dfb77a;
      if (bVar4) {
        puVar3 = puVar1;
      }
      FUN_140002266(&local_48,L"\"%s\"",puVar3);
      iVar2 = local_40 + -1;
      if (local_40 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(param_2,local_48,iVar2);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (puVar1 != (undefined2 *)0x0) {
        FUN_1400020a8(puVar1);
      }
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14883dc18 FUN_14883dc18 body=243 status=ok
// SIG undefined FUN_14883dc18(void)

float * FUN_14883dc18(longlong param_1,float *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  char *pcVar7;
  
  if (param_3 == 0) {
LAB_14883dcbb:
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = -1.0;
  }
  else {
    plVar6 = (longlong *)
             FUN_140e0f8b8(param_4,*(undefined1 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x48,
                           param_1 + 0x58);
    if ((plVar6 == (longlong *)0x0) || (lVar2 = *plVar6, lVar2 == 0)) goto LAB_14883dcbb;
    cVar3 = FUN_144729dda(lVar2 + 0x10);
    if ((cVar3 == '\0') || (*(longlong *)(lVar2 + 0x18) == 0)) goto LAB_14883dcbb;
    cVar3 = FUN_140114204(lVar2 + 0x20);
    if (cVar3 == '\0') goto LAB_14883dcbb;
    pcVar7 = &DAT_14cb7bfe0;
    if (*plVar6 != 0) {
      pcVar7 = (char *)(*plVar6 + 0x58);
    }
    cVar3 = *pcVar7;
    if (cVar3 == '\x01') {
      bVar4 = *(int *)(pcVar7 + 0xc) != 0;
      *(undefined2 *)(param_2 + 6) = 4;
LAB_14883dcf7:
      *param_2 = (float)(uint)bVar4;
      uVar5 = 1;
      goto LAB_14883dcc9;
    }
    if (cVar3 == '\x02') {
      iVar1 = *(int *)(pcVar7 + 0xc);
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = (float)iVar1;
    }
    else {
      if (cVar3 == '\x03') {
        bVar4 = FUN_140321d1a();
        *(undefined2 *)(param_2 + 6) = 4;
        goto LAB_14883dcf7;
      }
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = 0.0;
    }
  }
  uVar5 = 3;
LAB_14883dcc9:
  *(undefined1 *)(param_2 + 8) = uVar5;
  return param_2;
}



// FUNCTION 14883dd0c FUN_14883dd0c body=132 status=ok
// SIG undefined FUN_14883dd0c(void)

void FUN_14883dd0c(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  *param_1 = &PTR_LAB_14b3fc7b0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = param_2;
  param_1[4] = param_3;
  *(undefined1 *)(param_1 + 5) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x29) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x2a) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x2b) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return;
}



// FUNCTION 14883dd90 FUN_14883dd90 body=174 status=ok
// SIG undefined FUN_14883dd90(void)

undefined8 * FUN_14883dd90(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar2 = *(undefined4 *)(param_2 + 3);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_2[6] = 0xffffffff;
  return param_1;
}



// FUNCTION 14883de3e FUN_14883de3e body=59 status=ok
// SIG undefined FUN_14883de3e(void)

undefined8 * FUN_14883de3e(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 == 0) {
    *(undefined4 *)(param_2 + 1) = DAT_14c948620;
    uVar2 = DAT_14c948618;
  }
  else {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x2c);
    uVar2 = *(undefined8 *)(lVar1 + 0x24);
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14883de7a FUN_14883de7a body=59 status=ok
// SIG undefined FUN_14883de7a(void)

undefined8 * FUN_14883de7a(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 == 0) {
    *(undefined4 *)(param_2 + 1) = DAT_14c948620;
    uVar2 = DAT_14c948618;
  }
  else {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14883deb6 FUN_14883deb6 body=103 status=ok
// SIG undefined FUN_14883deb6(void)

undefined8 * FUN_14883deb6(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else {
    local_18 = *(undefined4 *)(lVar1 + 0x2c);
    local_20 = *(undefined8 *)(lVar1 + 0x24);
    FUN_140e3418c(&local_20,param_2,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883df1e FUN_14883df1e body=158 status=ok
// SIG undefined FUN_14883df1e(void)

void FUN_14883df1e(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if ((float)param_2[1] <= (float)param_1[1] && (float)param_1[1] != (float)param_2[1]) {
    return;
  }
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[9];
  uVar10 = param_2[10];
  uVar11 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1407b25f0(param_1 + 0xc,param_2 + 0xc);
  *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(param_2 + 0x42);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  uVar1 = param_2[0x47];
  uVar2 = param_2[0x48];
  uVar3 = param_2[0x49];
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = uVar1;
  param_1[0x48] = uVar2;
  param_1[0x49] = uVar3;
  FUN_144a787a6(param_1 + 0x4a,param_2 + 0x4a);
  memcpy(param_1 + 0x4e,param_2 + 0x4e,0xf0);
  return;
}



// FUNCTION 14883dfbc FUN_14883dfbc body=133 status=ok
// SIG undefined FUN_14883dfbc(void)

undefined8 FUN_14883dfbc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d632de(param_1,local_30);
  FUN_140056680(local_40,L"JunkChannel: ");
  FUN_1401c7f3e(param_2,local_40,local_30);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883e042 FUN_14883e042 body=32 status=ok
// SIG undefined FUN_14883e042(void)

void FUN_14883e042(undefined8 param_1,undefined4 param_2)

{
  FUN_14579b66c();
  FUN_1414df1a6(param_1,param_2);
  return;
}



// FUNCTION 14883e062 FUN_14883e062 body=231 status=ok
// SIG undefined FUN_14883e062(void)

undefined4 FUN_14883e062(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  iVar4 = *(int *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  local_40 = iVar4;
  if (iVar4 == 0) {
    local_3c = 0;
  }
  else {
    FUN_148840d60(&local_48,iVar4);
    FUN_148840db8(local_48,uVar1,iVar4);
    lVar2 = local_48;
    lVar5 = (longlong)local_40;
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        uVar3 = (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x10))
                          (*(longlong **)(lVar2 + lVar6),param_2,param_3);
        iVar4 = local_40;
        if ((char)uVar3 != '\0') break;
        bVar7 = lVar5 * 0x10 + -0x10 != lVar6;
        lVar6 = lVar6 + 0x10;
      } while (bVar7);
      goto LAB_14883e0a3;
    }
  }
  uVar3 = 0;
  iVar4 = 0;
LAB_14883e0a3:
  FUN_145c6b69c(local_48,iVar4);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14883e220 FUN_14883e220 body=54 status=ok
// SIG undefined FUN_14883e220(void)

void FUN_14883e220(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140718ac0();
  if ((lVar1 != 0) && (1 < (byte)(*(char *)(lVar1 + 0x298) - 5U))) {
    *(undefined4 *)(lVar1 + 0x2a0) = param_3;
  }
  return;
}



// FUNCTION 14883e256 FUN_14883e256 body=84 status=ok
// SIG undefined FUN_14883e256(void)

void FUN_14883e256(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
    lVar2 = FUN_140718ac0(param_1,param_2);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x48) != 0) {
        FUN_140d8b9a0(param_1,lVar2,0);
      }
                    /* WARNING: Could not recover jumptable at 0x00014883e29f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x48))(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14883e2aa FUN_14883e2aa body=231 status=ok
// SIG undefined FUN_14883e2aa(void)

undefined8 FUN_14883e2aa(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [36];
  uint local_44 [2];
  int local_3c;
  uint local_38;
  int local_30;
  uint local_2c;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if ((cVar1 != '\0') && (cVar1 = FUN_1401144ce(param_2), cVar1 != '\0')) {
    FUN_140ac173c(local_44,param_2);
    uVar2 = local_44[0];
    if (local_3c != 0) {
      uVar2 = FUN_144a78877(local_44[0]);
    }
    if (local_30 != 0) {
      local_38 = FUN_144a78877(local_38);
    }
    if (local_24 != 0) {
      local_2c = FUN_144a78877(local_2c);
    }
    iVar3 = FUN_1410b645c((longlong *)(param_1 + 0x4d8),local_38 ^ uVar2 ^ local_2c,local_44);
    if (iVar3 != -1) {
      lVar5 = (longlong)iVar3 * 0x50 + *(longlong *)(param_1 + 0x4d8);
      if ((lVar5 != -0x28 && lVar5 != 0) &&
         (uVar4 = CONCAT71((int7)(int3)((uint)iVar3 >> 8),1), 0 < *(int *)(lVar5 + 0x30)))
      goto LAB_14883e369;
    }
  }
  uVar4 = 0;
LAB_14883e369:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14883e392 FUN_14883e392 body=115 status=ok
// SIG undefined FUN_14883e392(void)

void FUN_14883e392(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  cVar1 = FUN_144729dda(param_1 + 0x1c);
  if ((cVar1 != '\0') && (iVar2 = FUN_140ac16d8(param_1), iVar2 == 3)) {
    return;
  }
  lVar3 = FUN_140718ac0(param_1,param_2);
  if (lVar3 == 0) {
    return;
  }
  FUN_143d2d8ae(param_1,lVar3);
  FUN_143d2d9a0(param_1,lVar3,param_3,param_4);
  return;
}



// FUNCTION 14883e406 FUN_14883e406 body=218 status=ok
// SIG undefined FUN_14883e406(void)

void FUN_14883e406(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar5 = FUN_140718ac0();
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x6c) != 0)) {
    uVar1 = *(uint *)(lVar5 + 0x54);
    if (*(int *)(lVar5 + 0x5c) != 0) {
      uVar1 = FUN_144a78877(uVar1);
    }
    uVar2 = *(uint *)(lVar5 + 0x60);
    if (*(int *)(lVar5 + 0x68) != 0) {
      uVar2 = FUN_144a78877(uVar2);
    }
    uVar3 = *(uint *)(lVar5 + 0x6c);
    if (*(int *)(lVar5 + 0x74) != 0) {
      uVar3 = FUN_144a78877(uVar3);
    }
    iVar4 = FUN_140ac163e((longlong *)(param_1 + 0x528),uVar2 ^ uVar1 ^ uVar3,lVar5 + 0x54);
    if (iVar4 != -1) {
      lVar7 = (longlong)iVar4 * 0xb0 + *(longlong *)(param_1 + 0x528);
      if (lVar7 != -0x28 && lVar7 != 0) {
        uVar6 = FUN_14479d2ce(lVar7 + 0x38);
        *param_3 = uVar6;
      }
    }
    *param_4 = *(undefined8 *)(lVar5 + 0x78);
  }
  return;
}



// FUNCTION 14883e4e0 FUN_14883e4e0 body=406 status=ok
// SIG undefined FUN_14883e4e0(void)

void FUN_14883e4e0(longlong param_1,double *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong lStack_80;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x38);
  lVar2 = param_1 + 0x48;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  lStack_60 = lVar2;
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0x60);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_68;
  lStack_80 = lStack_60;
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_90 = plVar1;
  if ((iStack_54 != iVar6) || (lStack_60 != lVar2)) {
    do {
      if ((*(byte *)(*local_90 + 0x2b0 + (longlong)iStack_74 * 0x300) & 0x20) == 0) {
        puVar7 = (undefined4 *)(*local_90 + (longlong)iStack_74 * 0x300);
        dVar3 = *(double *)(puVar7 + 0x54);
        dVar5 = *(double *)(puVar7 + 0x56);
        if ((((*param_2 <= dVar3 && dVar3 != *param_2) && (dVar3 < param_2[3])) &&
            (param_2[1] <= dVar5 && dVar5 != param_2[1])) &&
           (((dVar5 < param_2[4] &&
             (dVar3 = *(double *)(puVar7 + 0x58), param_2[2] <= dVar3 && dVar3 != param_2[2])) &&
            (dVar3 < param_2[5])))) {
          iVar4 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
            FUN_14573f2d4(param_3,iVar4);
          }
          *(undefined4 *)(*param_3 + (longlong)iVar4 * 4) = *puVar7;
        }
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (lStack_80 != lVar2 || iStack_74 != iVar6));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14883e678 FUN_14883e678 body=43 status=ok
// SIG undefined FUN_14883e678(void)

longlong FUN_14883e678(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140718ac0();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(char *)(lVar1 + 0x20) != '\0') {
      lVar2 = lVar1 + 8;
    }
  }
  return lVar2;
}



// FUNCTION 14883e6a4 FUN_14883e6a4 body=57 status=ok
// SIG undefined FUN_14883e6a4(void)

undefined8 * FUN_14883e6a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3fc660;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14883e6de FUN_14883e6de body=57 status=ok
// SIG undefined FUN_14883e6de(void)

undefined8 * FUN_14883e6de(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3fc660;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14883e718 FUN_14883e718 body=57 status=ok
// SIG undefined FUN_14883e718(void)

undefined8 * FUN_14883e718(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3fc6a0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14883e752 FUN_14883e752 body=38 status=ok
// SIG undefined FUN_14883e752(void)

undefined8 FUN_14883e752(undefined8 param_1,int param_2)

{
  FUN_1416726ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14883e780 FUN_14883e780 body=68 status=ok
// SIG undefined FUN_14883e780(void)

undefined8 * FUN_14883e780(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3fcca0;
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


