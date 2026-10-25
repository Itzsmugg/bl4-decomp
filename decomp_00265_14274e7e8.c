// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14274e7e8 FUN_14274e7e8 body=98 status=ok
// SIG undefined FUN_14274e7e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14274e7e8(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = FUN_140d5712e();
  puVar3 = *(undefined8 **)(lVar5 + 0x28);
  plVar4 = *(longlong **)(lVar5 + 0x30);
  if (plVar4 == (longlong *)0x0) {
    _DAT_14c83bd0c = (**(code **)(*(longlong *)*puVar3 + 0x20))();
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    _DAT_14c83bd0c = (**(code **)(*(longlong *)*puVar3 + 0x20))();
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
                    /* WARNING: Could not recover jumptable at 0x00014274e831. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14274e84a FUN_14274e84a body=29 status=ok
// SIG undefined FUN_14274e84a(void)

undefined8 FUN_14274e84a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274e87c FUN_14274e87c body=85 status=ok
// SIG undefined FUN_14274e87c(void)

void FUN_14274e87c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e057a0;
  return;
}



// FUNCTION 14274e8d2 FUN_14274e8d2 body=85 status=ok
// SIG undefined FUN_14274e8d2(void)

void FUN_14274e8d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e057a0;
  return;
}



// FUNCTION 14274e928 FUN_14274e928 body=118 status=ok
// SIG undefined FUN_14274e928(void)

void FUN_14274e928(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149e057a0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014274e98f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14274e99e FUN_14274e99e body=103 status=ok
// SIG undefined FUN_14274e99e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14274e99e(void)

{
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  QueryPerformanceCounter(&local_18);
  DAT_14c83bd18 = (int)(((double)local_18.QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14c86a9d8);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((uint7)(uint3)((uint)DAT_14c83bd18 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14274ea06 FUN_14274ea06 body=103 status=ok
// SIG undefined FUN_14274ea06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14274ea06(void)

{
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  QueryPerformanceCounter(&local_18);
  DAT_14c83bd18 = (int)(((double)local_18.QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14c86a9d8);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((uint7)(uint3)((uint)DAT_14c83bd18 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14274ea6e FUN_14274ea6e body=29 status=ok
// SIG undefined FUN_14274ea6e(void)

undefined8 FUN_14274ea6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274eaa0 FUN_14274eaa0 body=85 status=ok
// SIG undefined FUN_14274eaa0(void)

void FUN_14274eaa0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e05810;
  return;
}



// FUNCTION 14274eaf6 FUN_14274eaf6 body=85 status=ok
// SIG undefined FUN_14274eaf6(void)

void FUN_14274eaf6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e05810;
  return;
}



// FUNCTION 14274eb4c FUN_14274eb4c body=118 status=ok
// SIG undefined FUN_14274eb4c(void)

void FUN_14274eb4c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e05810;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014274ebb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14274ebc2 FUN_14274ebc2 body=55 status=ok
// SIG undefined FUN_14274ebc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14274ebc2(undefined8 param_1,undefined8 *param_2)

{
  wchar_t *_Source;
  
  if (*(int *)(param_2 + 1) == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)*param_2;
  }
  wcsncpy((wchar_t *)&DAT_14c83cd38,_Source,0x3f);
  _DAT_14c83cdb6 = 0;
  return;
}



// FUNCTION 14274ebfa FUN_14274ebfa body=57 status=ok
// SIG undefined FUN_14274ebfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_14274ebfa(undefined8 param_1,undefined8 *param_2)

{
  wchar_t *_Source;
  
  if (*(int *)(param_2 + 1) == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)*param_2;
  }
  wcsncpy((wchar_t *)&DAT_14c83cd38,_Source,0x3f);
  _DAT_14c83cdb6 = 0;
  return 1;
}



// FUNCTION 14274ec34 FUN_14274ec34 body=29 status=ok
// SIG undefined FUN_14274ec34(void)

undefined8 FUN_14274ec34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274ec66 FUN_14274ec66 body=85 status=ok
// SIG undefined FUN_14274ec66(void)

void FUN_14274ec66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e05880;
  return;
}



// FUNCTION 14274ecbc FUN_14274ecbc body=85 status=ok
// SIG undefined FUN_14274ecbc(void)

void FUN_14274ecbc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e05880;
  return;
}



// FUNCTION 14274ed12 FUN_14274ed12 body=118 status=ok
// SIG undefined FUN_14274ed12(void)

void FUN_14274ed12(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e05880;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014274ed79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14274ed88 FUN_14274ed88 body=55 status=ok
// SIG undefined FUN_14274ed88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14274ed88(undefined8 param_1,undefined8 *param_2)

{
  wchar_t *_Source;
  
  if (*(int *)(param_2 + 1) == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)*param_2;
  }
  wcsncpy((wchar_t *)&DAT_14c83cdb8,_Source,0x3f);
  _DAT_14c83ce36 = 0;
  return;
}



// FUNCTION 14274edc0 FUN_14274edc0 body=57 status=ok
// SIG undefined FUN_14274edc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_14274edc0(undefined8 param_1,undefined8 *param_2)

{
  wchar_t *_Source;
  
  if (*(int *)(param_2 + 1) == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)*param_2;
  }
  wcsncpy((wchar_t *)&DAT_14c83cdb8,_Source,0x3f);
  _DAT_14c83ce36 = 0;
  return 1;
}



// FUNCTION 14274edfa FUN_14274edfa body=29 status=ok
// SIG undefined FUN_14274edfa(void)

undefined8 FUN_14274edfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274ee2c FUN_14274ee2c body=85 status=ok
// SIG undefined FUN_14274ee2c(void)

void FUN_14274ee2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e058f0;
  return;
}



// FUNCTION 14274ee82 FUN_14274ee82 body=85 status=ok
// SIG undefined FUN_14274ee82(void)

void FUN_14274ee82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e058f0;
  return;
}



// FUNCTION 14274eed8 FUN_14274eed8 body=118 status=ok
// SIG undefined FUN_14274eed8(void)

void FUN_14274eed8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e058f0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014274ef3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14274ef4e FUN_14274ef4e body=55 status=ok
// SIG undefined FUN_14274ef4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14274ef4e(undefined8 param_1,undefined8 *param_2)

{
  wchar_t *_Source;
  
  if (*(int *)(param_2 + 1) == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)*param_2;
  }
  wcsncpy((wchar_t *)&DAT_14c83da38,_Source,0x3f);
  _DAT_14c83dab6 = 0;
  return;
}



// FUNCTION 14274ef86 FUN_14274ef86 body=57 status=ok
// SIG undefined FUN_14274ef86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_14274ef86(undefined8 param_1,undefined8 *param_2)

{
  wchar_t *_Source;
  
  if (*(int *)(param_2 + 1) == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)*param_2;
  }
  wcsncpy((wchar_t *)&DAT_14c83da38,_Source,0x3f);
  _DAT_14c83dab6 = 0;
  return 1;
}



// FUNCTION 14274efc0 FUN_14274efc0 body=29 status=ok
// SIG undefined FUN_14274efc0(void)

undefined8 FUN_14274efc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274eff2 FUN_14274eff2 body=85 status=ok
// SIG undefined FUN_14274eff2(void)

void FUN_14274eff2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e059d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e05960;
  return;
}



// FUNCTION 14274f048 FUN_14274f048 body=85 status=ok
// SIG undefined FUN_14274f048(void)

void FUN_14274f048(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e059d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e05960;
  return;
}



// FUNCTION 14274f09e FUN_14274f09e body=118 status=ok
// SIG undefined FUN_14274f09e(void)

void FUN_14274f09e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e059d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e05960;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014274f105. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14274f11c FUN_14274f11c body=19 status=ok
// SIG undefined FUN_14274f11c(void)

undefined1 FUN_14274f11c(undefined8 param_1,undefined8 param_2)

{
  FUN_14274f130(param_2);
  return 1;
}



// FUNCTION 14274f130 FUN_14274f130 body=593 status=ok
// SIG undefined FUN_14274f130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14274f130(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  wchar_t *_Source;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  int local_40;
  int local_3c;
  wchar_t *local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)((longlong)param_1 + 0x11) == '\x01') {
    FUN_140056680(&local_58);
    sVar3 = wcslen(&DAT_14c764000);
    iVar1 = (int)local_50;
    iVar5 = local_50._4_4_;
    if ((int)sVar3 == 0) {
      local_48 = local_58;
      local_58 = (wchar_t *)0x0;
      local_40 = (int)local_50;
      local_3c = local_50._4_4_;
      local_50 = 0;
    }
    else {
      iVar2 = (int)sVar3 + (uint)((int)local_50 == 0);
      local_48 = local_58;
      local_58 = (wchar_t *)0x0;
      local_40 = (int)local_50;
      local_3c = local_50._4_4_;
      local_50 = 0;
      iVar4 = iVar2 + iVar1;
      if (iVar4 < iVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar2);
      }
      if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar4);
      }
      if (iVar5 < iVar4) {
        FUN_1446f8c06(&local_48);
      }
      FUN_1400020e8(&local_48,&DAT_14c764000,sVar3 & 0xffffffff);
    }
    iVar1 = local_3c;
    local_30 = local_40;
    if (local_40 < 2) {
      local_38 = (wchar_t *)0x0;
      local_30 = *(int *)(param_1 + 1);
      lVar6 = (longlong)local_30;
      _Src = (void *)*param_1;
      if (lVar6 == 0) {
        local_2c = 0;
      }
      else {
        FUN_1446dd670(&local_38,local_30,0);
        memcpy(local_38,_Src,lVar6 * 2);
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 1) + -1;
      if (*(int *)(param_1 + 1) == 0) {
        iVar5 = 0;
      }
      local_38 = local_48;
      local_48 = (wchar_t *)0x0;
      local_2c = local_3c;
      local_40 = 0;
      local_3c = 0;
      if (iVar5 + local_30 < local_30) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar5);
      }
      if (iVar1 < iVar5 + local_30) {
        FUN_1446f8c06(&local_38);
      }
      FUN_1400020e8(&local_38,*param_1,iVar5);
    }
    _Source = local_38;
    if (local_30 == 0) {
      _Source = L"";
    }
    wcsncpy((wchar_t *)&DAT_14c83c038,_Source,0x3f);
    _DAT_14c83c0b6 = 0;
    if (local_38 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)((longlong)param_1 + 0x13) == '\x01') {
    DAT_14c83df41 = *(undefined1 *)((longlong)param_1 + 0x12);
  }
  if (*(char *)((longlong)param_1 + 0x15) == '\x01') {
    DAT_14c83df42 = *(undefined1 *)((longlong)param_1 + 0x14);
  }
  FUN_14577b282();
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14274f382 FUN_14274f382 body=29 status=ok
// SIG undefined FUN_14274f382(void)

undefined8 FUN_14274f382(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274f3b4 FUN_14274f3b4 body=85 status=ok
// SIG undefined FUN_14274f3b4(void)

void FUN_14274f3b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e05a40;
  return;
}



// FUNCTION 14274f40a FUN_14274f40a body=85 status=ok
// SIG undefined FUN_14274f40a(void)

void FUN_14274f40a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e05a40;
  return;
}



// FUNCTION 14274f460 FUN_14274f460 body=118 status=ok
// SIG undefined FUN_14274f460(void)

void FUN_14274f460(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149e05a40;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014274f4c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14274f4d6 FUN_14274f4d6 body=62 status=ok
// SIG undefined FUN_14274f4d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14274f4d6(void)

{
  wchar_t *_Source;
  
  _Source = L"Game";
  if (DAT_14c872bf0 != '\0') {
    _Source = L"Commandlet";
  }
  wcsncpy((wchar_t *)&DAT_14c83c0b8,_Source,0x3f);
  _DAT_14c83c136 = 0;
  return;
}



// FUNCTION 14274f514 FUN_14274f514 body=64 status=ok
// SIG undefined FUN_14274f514(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14274f514(void)

{
  wchar_t *_Source;
  
  _Source = L"Game";
  if (DAT_14c872bf0 != '\0') {
    _Source = L"Commandlet";
  }
  wcsncpy((wchar_t *)&DAT_14c83c0b8,_Source,0x3f);
  _DAT_14c83c136 = 0;
  return 1;
}



// FUNCTION 14274f554 FUN_14274f554 body=29 status=ok
// SIG undefined FUN_14274f554(void)

undefined8 FUN_14274f554(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274f586 FUN_14274f586 body=85 status=ok
// SIG undefined FUN_14274f586(void)

void FUN_14274f586(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e05ab0;
  return;
}



// FUNCTION 14274f5dc FUN_14274f5dc body=85 status=ok
// SIG undefined FUN_14274f5dc(void)

void FUN_14274f5dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e05ab0;
  return;
}



// FUNCTION 14274f632 FUN_14274f632 body=118 status=ok
// SIG undefined FUN_14274f632(void)

void FUN_14274f632(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149e05ab0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014274f699. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14274f6a8 FUN_14274f6a8 body=60 status=ok
// SIG undefined FUN_14274f6a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14274f6a8(undefined8 param_1,char param_2)

{
  wchar_t *_Source;
  
  _Source = L"Dirty";
  if (param_2 != '\0') {
    _Source = L"Vanilla";
  }
  wcsncpy((wchar_t *)&DAT_14c83c138,_Source,0x3f);
  _DAT_14c83c1b6 = 0;
  return;
}



// FUNCTION 14274f6e4 FUN_14274f6e4 body=62 status=ok
// SIG undefined FUN_14274f6e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14274f6e4(undefined8 param_1,char param_2)

{
  wchar_t *_Source;
  
  _Source = L"Dirty";
  if (param_2 != '\0') {
    _Source = L"Vanilla";
  }
  wcsncpy((wchar_t *)&DAT_14c83c138,_Source,0x3f);
  _DAT_14c83c1b6 = 0;
  return 1;
}



// FUNCTION 14274f722 FUN_14274f722 body=29 status=ok
// SIG undefined FUN_14274f722(void)

undefined8 FUN_14274f722(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274f754 FUN_14274f754 body=85 status=ok
// SIG undefined FUN_14274f754(void)

void FUN_14274f754(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e05c00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e05b90;
  return;
}



// FUNCTION 14274f7aa FUN_14274f7aa body=85 status=ok
// SIG undefined FUN_14274f7aa(void)

void FUN_14274f7aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e05c00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e05b90;
  return;
}



// FUNCTION 14274f800 FUN_14274f800 body=118 status=ok
// SIG undefined FUN_14274f800(void)

void FUN_14274f800(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e05c00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e05b90;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014274f867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14274f876 FUN_14274f876 body=35 status=ok
// SIG undefined FUN_14274f876(void)

void FUN_14274f876(undefined8 param_1,char param_2)

{
  if (param_2 != '\x01') {
    return;
  }
  DAT_14c83bd08 = GetCurrentProcessId();
  FUN_14577b282();
  return;
}



// FUNCTION 14274f89a FUN_14274f89a body=35 status=ok
// SIG undefined FUN_14274f89a(void)

undefined4 FUN_14274f89a(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
    DAT_14c83bd08 = GetCurrentProcessId();
    FUN_14577b282();
  }
  return 1;
}



// FUNCTION 14274f8be FUN_14274f8be body=31 status=ok
// SIG undefined FUN_14274f8be(void)

undefined8 FUN_14274f8be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274f8e6 FUN_14274f8e6 body=11 status=ok
// SIG undefined FUN_14274f8e6(void)

void FUN_14274f8e6(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014274f8ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 14274f8f2 FUN_14274f8f2 body=125 status=ok
// SIG undefined FUN_14274f8f2(void)

void FUN_14274f8f2(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != -1) && (iVar2 < *(int *)(lVar3 + 0x60))) {
    local_18 = (undefined8 *)*param_1;
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = *(int *)(local_18 + 1) + 1;
      UNLOCK();
    }
    FUN_142750316(&local_18);
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_18)(local_18,1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14274f970 FUN_14274f970 body=1061 status=ok
// SIG undefined FUN_14274f970(void)

undefined8 FUN_14274f970(longlong *param_1,byte param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  DWORD DVar4;
  char cVar5;
  DWORD dwTlsIndex;
  DWORD DVar6;
  LPVOID lpTlsValue;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  int iVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_128 [46];
  byte local_fa;
  byte local_f9;
  longlong local_f8;
  int local_f0;
  int local_ec;
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  char local_b0;
  undefined8 local_a8;
  LARGE_INTEGER local_a0;
  undefined1 local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  int iVar11;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar6 = 0xffffffff;
    LOCK();
    bVar16 = DAT_14c7585d0 != 0xffffffff;
    DVar4 = dwTlsIndex;
    if (bVar16) {
      DVar6 = DAT_14c7585d0;
      DVar4 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar4;
    UNLOCK();
    if (bVar16) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar6;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_c8);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_c8 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_c0 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_b8 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_b0 = '\0';
  local_a8 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_c8;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_e8 = -0x8000000000000000;
  lVar7 = *param_1;
  if (param_2 == 0) {
    lVar7 = *param_1;
    uVar13 = (ulonglong)*(uint *)(lVar7 + 0x34);
    if (*(int *)(lVar7 + 0x20) + 2 <= (int)*(uint *)(lVar7 + 0x34)) {
      FUN_14274f8f2(param_1);
      lVar7 = *param_1;
    }
    uVar12 = 0;
    if ('\x02' < *(char *)(lVar7 + 0x50)) {
      QueryPerformanceCounter(&local_a0);
      auVar19._0_8_ = ((double)local_a0.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar19._8_8_ = 0;
      auVar19 = roundpd(auVar19,auVar19,1);
      local_e8 = (longlong)auVar19._0_8_;
      if (0 < (int)DAT_14c7585cc) {
        uVar12 = (ulonglong)DAT_14c7585cc;
      }
      auVar17._0_8_ = (double)(int)uVar12 * 10000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar19 = roundpd(auVar17,auVar17,1);
      local_f8 = (longlong)auVar19._0_8_;
      lVar7 = *param_1;
      local_d8 = CONCAT71((int7)(uVar12 >> 8),1);
      goto LAB_14274faf2;
    }
  }
  else {
    uVar13 = (ulonglong)*(uint *)(lVar7 + 0x34);
  }
  local_d8 = 0;
  local_f8 = 0;
LAB_14274faf2:
  iVar11 = *(int *)(lVar7 + 0x2c);
  local_d0 = (ulonglong)*(uint *)(lVar7 + 0x30);
  plVar2 = *(longlong **)(lVar7 + 0x38);
  puVar3 = *(undefined8 **)(lVar7 + 0x40);
  local_f0 = (int)uVar13 + -1;
  local_f9 = param_2 ^ 1;
  local_d8 = local_d8 ^ 1;
  local_fa = param_2;
  local_ec = iVar11;
  local_e0 = uVar13;
  do {
    LOCK();
    piVar1 = (int *)(lVar7 + 0x20);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)local_e0 < iVar11) {
      bVar16 = local_f0 <= iVar9;
      if (local_f0 <= iVar9) {
        iVar9 = local_f0;
      }
      if ((local_f9 & bVar16) != 0) goto LAB_14274fcb9;
    }
    iVar9 = iVar9 * (int)local_d0;
    iVar15 = iVar9 + (int)local_d0;
    if (iVar15 < iVar11) {
      iVar11 = iVar15;
    }
    iVar10 = iVar11 - iVar9;
    if (iVar10 != 0 && iVar9 <= iVar11) {
      uVar13 = (longlong)iVar9 << 4 | 8;
      do {
        local_88 = (longlong)(int)param_1[1] * 0x10 + *plVar2;
        local_90 = puVar3[1];
        local_98 = *(undefined1 *)(local_90 + 8);
        local_a0.QuadPart = (LONGLONG)&PTR_FUN_149e05c90;
        if ((*(byte *)puVar3[3] & 1) != 0) {
          puVar8 = &DAT_149dfb77a;
          if (*(int *)(*(longlong *)puVar3[2] + uVar13) != 0) {
            puVar8 = *(undefined2 **)(*(longlong *)puVar3[2] + -8 + uVar13);
          }
          cVar5 = (**(code **)(*(longlong *)*puVar3 + 0x130))((longlong *)*puVar3,puVar8,&local_a0);
          if (cVar5 == '\0') {
            *(undefined1 *)puVar3[3] = 0;
          }
        }
        uVar13 = uVar13 + 0x10;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar11 = local_ec;
    if (iVar9 < local_ec) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar14 = CONCAT71((uint7)(uint3)((uint)local_ec >> 8),1);
        if (local_fa == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*param_1 + 0x48) + 0x10))();
        }
        goto LAB_14274fcbb;
      }
    }
    if (iVar15 < local_ec && (char)local_d8 == '\0') {
      QueryPerformanceCounter(&local_a0);
      auVar18._0_8_ = ((double)local_a0.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar18._8_8_ = 0;
      auVar19 = roundpd(auVar18,auVar18,1);
      if (local_f8 < (longlong)auVar19._0_8_ - local_e8) {
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
LAB_14274fcb9:
        uVar14 = 0;
LAB_14274fcbb:
        if (local_b0 == '\0') {
          local_b0 = '\x01';
          *(int *)(local_c8 + 4) = *(int *)(local_c8 + 4) + -1;
          if (local_b8 != local_c8[2]) {
            FUN_14004673c();
          }
          *local_c8 = local_c0;
          local_c8[3] = local_a8;
        }
        if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar14;
      }
    }
    else if (local_ec <= iVar15) goto LAB_14274fcb9;
    lVar7 = *param_1;
  } while( true );
}



// FUNCTION 14274fd96 FUN_14274fd96 body=73 status=ok
// SIG undefined FUN_14274fd96(void)

void FUN_14274fd96(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_142750316(param_1,(int)param_1[1]);
      puVar2 = (undefined8 *)*param_1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014274fdd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 14274fde0 FUN_14274fde0 body=29 status=ok
// SIG undefined FUN_14274fde0(void)

undefined8 FUN_14274fde0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274fdfe FUN_14274fdfe body=99 status=ok
// SIG undefined FUN_14274fdfe(void)

undefined4 FUN_14274fdfe(longlong param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_140115ae4(*(undefined8 *)(param_1 + 0x10));
  if (((byte)uVar3 & param_3) == 1) {
    plVar2 = *(longlong **)(param_1 + 0x18);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(plVar2,iVar1);
    }
    FUN_140056680((longlong)iVar1 * 0x10 + *plVar2,param_2);
  }
  return uVar3;
}



// FUNCTION 14274fe62 FUN_14274fe62 body=434 status=ok
// SIG undefined FUN_14274fe62(void)

undefined8 * FUN_14274fe62(undefined8 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  
  *param_1 = &PTR_FUN_149e05ca8;
  lVar2 = param_1[0xb];
  if ((longlong)*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    do {
      param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      if (param_3 != -1) {
        param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      }
      lVar5 = lVar5 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0xc) * 0x48 != lVar5);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    lVar2 = param_1[0xb];
  }
  FUN_1427502e6(lVar2,uVar4,param_3);
  if (param_1[0xb] != 0) {
    piVar6 = (int *)(param_1[0xb] & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14274dd49);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) goto LAB_14274ff2c;
      }
      _aligned_free(piVar3);
    }
  }
LAB_14274ff2c:
  *param_1 = &PTR_FUN_149e002e8;
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar6 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14274dd49);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(piVar3);
    }
  }
  return param_1;
}



// FUNCTION 142750014 FUN_142750014 body=53 status=ok
// SIG undefined FUN_142750014(void)

void FUN_142750014(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  do {
    puVar1[-3] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
    puVar1[-2] = 0;
    puVar1[-1] = 0xe800000000000020;
    *puVar1 = 0xffffffffffffffff;
    puVar1 = puVar1 + 9;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 14275004a FUN_14275004a body=667 status=ok
// SIG undefined FUN_14275004a(void)

void FUN_14275004a(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Src;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *_Memory;
  uint *puVar9;
  int *piVar10;
  void *_Dst;
  
  uVar7 = *(uint *)(param_1 + 1);
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar7) {
      uVar3 = uVar7;
    }
  }
  else {
    uVar3 = (int)((ulonglong)uVar7 * 3 >> 3) + uVar7 + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar7 <= (int)uVar3) {
    uVar8 = (ulonglong)uVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,0x48);
  }
  uVar8 = uVar8 * 0x48;
  _Src = (void *)*param_1;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_142750145;
  while( true ) {
    uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar7 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar7 | 1;
      __tlregdtor(&LAB_14274dd49);
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(undefined4 **)(lVar2 + 0x310);
    *(undefined8 *)(lVar2 + 0x310) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar4 = 0xffffffff;
    *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    FUN_140217a48(puVar1);
    puVar5 = (uint *)*puVar1;
LAB_142750145:
    _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar9 = (uint *)((longlong)_Dst + uVar8);
    uVar7 = puVar5[0x12];
    if (puVar9 <= puVar5 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar3 = *puVar5;
      *puVar5 = *puVar5 + uVar7 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar7) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
      puVar9 = (uint *)((longlong)_Dst + uVar8);
      uVar7 = 0;
      if (puVar9 <= puVar5 + 0x4000) {
        uVar7 = 1;
        goto LAB_1427501bf;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_1427501bf:
  *(uint **)(puVar5 + 0x10) = puVar9;
  puVar5[0x12] = uVar7;
  uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
  if (uVar6 == 0 || _Src == (void *)0x0) {
    if (_Src == (void *)0x0) goto LAB_142750266;
  }
  else {
    if (uVar6 < uVar8) {
      uVar8 = uVar6;
    }
    memcpy(_Dst,_Src,uVar8);
  }
  piVar10 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar10 = *piVar10 + -1;
  UNLOCK();
  if (*piVar10 == 0) {
    _Memory = piVar10;
    if (*(longlong *)(piVar10 + 0x10) - (longlong)piVar10 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_14274dd49);
      }
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar2 + 0x310);
      *(int **)(lVar2 + 0x310) = piVar10;
      if (_Memory == (int *)0x0) goto LAB_142750266;
    }
    _aligned_free(_Memory);
  }
LAB_142750266:
  *param_1 = _Dst;
  return;
}



// FUNCTION 1427502e6 FUN_1427502e6 body=47 status=ok
// SIG undefined FUN_1427502e6(void)

void FUN_1427502e6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142750316 FUN_142750316 body=369 status=ok
// SIG undefined FUN_142750316(void)

void FUN_142750316(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined1 local_4c;
  undefined8 local_48;
  int local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)(*(longlong *)(*param_1 + 0x58) + (longlong)param_2 * 0x48);
  uVar4 = *(ulonglong *)(*param_1 + 0x18);
  bVar3 = *(byte *)(*param_1 + 0x50);
  uVar6 = (ulonglong)bVar3;
  LOCK();
  plVar2[8] = -1;
  UNLOCK();
  lVar5 = *param_1;
  *param_1 = 0;
  local_4c = 0;
  local_58 = 0;
  local_3c = 0;
  local_50 = param_2;
  local_40 = param_2;
  (**(code **)(plVar2[5] + 0x18))(plVar2 + 5,plVar2);
  plVar2[5] = (longlong)&PTR_FUN_149e05cb0;
  *plVar2 = lVar5;
  local_48 = 0;
  *(undefined1 *)((longlong)plVar2 + 0xc) = local_4c;
  *(int *)(plVar2 + 1) = local_50;
  FUN_14274fd96(&local_48);
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar6 = 1;
    if (bVar3 != 6) {
      uVar6 = (ulonglong)bVar3;
    }
    lVar5 = 0;
  }
  else {
    if (bVar3 == 6) {
      uVar6 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
    }
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  plVar2[6] = lVar5;
  plVar2[7] = uVar6 << 0x3b | (uVar4 & 0x1fffffffffffff) << 6 | 0xc000000000000000;
  FUN_14274fd96(&local_58);
  LOCK();
  puVar1 = (ulonglong *)(plVar2 + 7);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 | 2;
  UNLOCK();
  if ((uVar4 >> 1 & 1) != 0) {
    if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 1427504a6 FUN_1427504a6 body=450 status=ok
// SIG undefined FUN_1427504a6(void)

void FUN_1427504a6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_149e05cb0;
    puVar6 = param_3;
  }
  else {
    *param_2 = &PTR_LAB_149e05cf0;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_142750583;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_14274dd49);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar4 = *(undefined4 **)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x310) = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar4 = 0xffffffff;
      *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      FUN_1467aa772(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_142750583:
      puVar6 = (undefined8 *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)(puVar6 + 2);
      uVar7 = puVar5[0x12];
      if (puVar8 <= puVar5 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
        LOCK();
        uVar2 = *puVar5;
        *puVar5 = *puVar5 + uVar7 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar7) != 0xffffffff) break;
        puVar5 = (uint *)*puVar1;
        *puVar5 = 0xffffffff;
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        puVar6 = (undefined8 *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)(puVar6 + 2);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_1427505fd;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_1427505fd:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    *param_3 = puVar6;
  }
  *puVar6 = *param_4;
  *param_4 = 0;
  *(undefined1 *)((longlong)puVar6 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_4 + 1);
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 142750668 FUN_142750668 body=26 status=ok
// SIG undefined FUN_142750668(void)

undefined8 FUN_142750668(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_14274f970(param_2,0);
  }
  return 0;
}



// FUNCTION 142750682 FUN_142750682 body=72 status=ok
// SIG undefined FUN_142750682(void)

undefined8
FUN_142750682(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,char param_5
             )

{
  if (param_5 != '\0') {
    FUN_14274f970(param_3,0);
  }
  FUN_1427504a6(param_1,param_2 + 0x28,param_2,param_3,param_4);
  return 0;
}



// FUNCTION 1427506fc FUN_1427506fc body=26 status=ok
// SIG undefined FUN_1427506fc(void)

undefined8 FUN_1427506fc(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_14274f970(*param_2,0);
  }
  return 0;
}



// FUNCTION 142750716 FUN_142750716 body=70 status=ok
// SIG undefined FUN_142750716(void)

undefined8
FUN_142750716(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_14274f970(*param_3,0);
  }
  param_2[5] = &PTR_LAB_149e05cf0;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 14275075c FUN_14275075c body=179 status=ok
// SIG undefined FUN_14275075c(void)

void FUN_14275075c(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_14274fd96(uVar2);
  if (uVar2 != 0) {
    piVar4 = (int *)(uVar2 & 0xffffffffffff0000);
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      _Memory = piVar4;
      if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14274dd49);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar4;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001427507d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 14275081e FUN_14275081e body=124 status=ok
// SIG undefined FUN_14275081e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275081e(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  byte local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = *(undefined8 *)(param_3 + 0x10);
  local_20 = _DAT_14c83e2d8;
  uStack_1c = uRam000000014c83e2dc;
  uStack_18 = _DAT_14c83e2e0;
  uStack_14 = uRam000000014c83e2e4;
  local_10 = DAT_14c83e2e8;
  local_c = *(byte *)(param_3 + 0x20) * '\x02' & 2 | *(byte *)(param_3 + 0x20) >> 2 & 1;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_30,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275089b FUN_14275089b body=39 status=ok
// SIG undefined FUN_14275089b(void)

void FUN_14275089b(void)

{
  if (DAT_14c83f1d0 != 0) {
    FUN_1462697f0();
    DAT_14c83f1d0 = 0;
  }
  return;
}



// FUNCTION 1427508c2 FUN_1427508c2 body=52 status=ok
// SIG undefined FUN_1427508c2(void)

void FUN_1427508c2(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14c83f300;
  if (DAT_14c83f300 != 0) {
    FUN_1417020bc(DAT_14c83f300);
    FUN_146269864(lVar1);
    DAT_14c83f300 = 0;
  }
  return;
}



// FUNCTION 1427508f6 FUN_1427508f6 body=11 status=ok
// SIG undefined FUN_1427508f6(void)

void FUN_1427508f6(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001427508fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  return;
}



// FUNCTION 142750901 FUN_142750901 body=52 status=ok
// SIG undefined FUN_142750901(void)

void FUN_142750901(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14c83f240;
  if (DAT_14c83f240 != 0) {
    FUN_1417021f2(DAT_14c83f240);
    FUN_146269864(lVar1);
    DAT_14c83f240 = 0;
  }
  return;
}



// FUNCTION 142750936 FUN_142750936 body=129 status=ok
// SIG undefined FUN_142750936(void)

ulonglong FUN_142750936(longlong param_1,float param_2)

{
  char cVar1;
  ulonglong unaff_RDI;
  
  if (param_2 <= 0.0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      unaff_RDI = 0;
      goto LAB_1427509ae;
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                (*(longlong **)(param_1 + 0x18),0xffffffff,0);
      goto LAB_1427509a4;
    }
  }
  else if (*(longlong *)(param_1 + 0x20) != 0) {
    unaff_RDI = 0;
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                      (*(longlong **)(param_1 + 0x18),(int)(longlong)(param_2 * 1000.0) + 1,0);
    if (cVar1 == '\0') goto LAB_1427509ae;
LAB_1427509a4:
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
LAB_1427509ae:
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 1427509b7 FUN_1427509b7 body=1537 status=ok
// SIG undefined FUN_1427509b7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427509b7(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14c83bb00 = 0;
  DAT_14c83bb08 = 0;
  atexit(FUN_14274b3d4);
  DAT_14c83bb10 = 0;
  DAT_14c83bb18 = 0;
  atexit(FUN_14274b42f);
  DAT_14c83f368 = 0;
  DAT_14c83f370 = 0;
  atexit(FUN_14274b48a);
  DAT_14c83bb20 = 0;
  DAT_14c83bb28 = 0;
  atexit(FUN_14274b4e5);
  DAT_14c83f378 = 0;
  DAT_14c83f380 = 0;
  atexit(FUN_14274b540);
  DAT_14c83bb30 = 0;
  DAT_14c83bb38 = 0;
  atexit(FUN_14274b59b);
  DAT_14c83bb40 = 0;
  _DAT_14c83bb48 = 0;
  _DAT_14c83bb50 = 2;
  atexit(FUN_14274b5f6);
  DAT_14c83f3c8 = 0;
  DAT_14c83f3d0 = 0;
  atexit(FUN_14274b627);
  DAT_14c83f3a8 = 0;
  DAT_14c83f3b0 = 0;
  atexit(FUN_14274b682);
  DAT_14c83f3b8 = 0;
  DAT_14c83f3c0 = 0;
  atexit(FUN_14274b6dd);
  DAT_14c83bb58 = 0;
  _DAT_14c83bb60 = 0;
  _DAT_14c83bb68 = 2;
  atexit(FUN_14274b738);
  DAT_14c83f358 = 0;
  DAT_14c83f360 = 0;
  atexit(FUN_14274b769);
  DAT_14c83f348 = 0;
  DAT_14c83f350 = 0;
  atexit(FUN_14274b7c4);
  DAT_14c83f388 = 0;
  DAT_14c83f390 = 0;
  atexit(FUN_14274b81f);
  DAT_14c83f398 = 0;
  DAT_14c83f3a0 = 0;
  atexit(FUN_14274b87a);
  DAT_14c83bb70 = 0;
  DAT_14c83bb78 = 0;
  atexit(FUN_14274b8d5);
  DAT_14c83bb80 = 0;
  DAT_14c83bb88 = 0;
  atexit(FUN_14274b930);
  local_68 = (undefined8 *)0x6a31449bf66987e3;
  iStack_60 = 0x9f06d157;
  uStack_5c = 0x8bb49be;
  _DAT_14c83bb90 = 0xf66987e3;
  uRam000000014c83bb94 = 0x6a31449b;
  uRam000000014c83bb98 = 0x9f06d157;
  uRam000000014c83bb9c = 0x8bb49be;
  FUN_141005458(&local_68,1,L"Dev-Gbx-Framework",0);
  atexit((_func_5014 *)&LAB_14274b98b);
  _DAT_14c83bc4c = 0;
  uRam000000014c83bc54 = 0;
  CoCreateGuid((GUID *)&DAT_14c83bc4c);
  DAT_14c83bc60 = 0;
  _DAT_14c83bc68 = 0;
  _DAT_14c83bc70 = 2;
  atexit(FUN_14274c8bc);
  DAT_14c83bc78 = 0;
  _DAT_14c83bc80 = 0;
  _DAT_14c83bc88 = 2;
  atexit(FUN_14274c8ed);
  DAT_14c83bc90 = 0;
  _DAT_14c83bc98 = 0;
  _DAT_14c83bca0 = 2;
  atexit(FUN_14274c91e);
  DAT_14c83bca8 = 0;
  _DAT_14c83bcb0 = 0;
  _DAT_14c83bcb8 = 2;
  atexit(FUN_14274c94f);
  DAT_14c83bcc0 = 0;
  _DAT_14c83bcc8 = 0;
  _DAT_14c83bcd0 = 2;
  atexit(FUN_14274c980);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c83bcd8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c83bcd8,4000);
  atexit((_func_5014 *)&LAB_14274c9b1);
  puVar1 = (undefined8 *)FUN_14016c8d4();
  puVar4 = &DAT_14c83deb8;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  uRam000000014c83df30 = 0;
  uRam000000014c83df31 = 0;
  DAT_14c83df20 = 0;
  DAT_14c83df28._0_1_ = 0;
  DAT_14c83df28._1_7_ = 0;
  DAT_14c83df10 = 0;
  DAT_14c83df18 = 0;
  DAT_14c83df00 = 0;
  DAT_14c83df08 = 0;
  _DAT_14c83df40 = 0;
  DAT_14c83e148 = 0;
  _DAT_14c83e150 = 0;
  atexit(FUN_14274c9bf);
  _DAT_14c83e178 = 0;
  DAT_14c83e180 = 0;
  DAT_14c83e158 = 0;
  _DAT_14c83e160 = 0;
  _DAT_14c83e184 = 0xffffffff00000080;
  _DAT_14c83e18c = 0;
  DAT_14c83e198 = 0;
  _DAT_14c83e1a0 = 0;
  atexit(FUN_14274c9f0);
  _DAT_14c83e1c8 = 0;
  DAT_14c83e1d0 = 0;
  DAT_14c83e1a8 = 0;
  _DAT_14c83e1b0 = 0;
  _DAT_14c83e1d4 = 0xffffffff00000080;
  _DAT_14c83e1dc = 0;
  DAT_14c83e1e8 = 0;
  _DAT_14c83e1f0 = 0;
  atexit(FUN_14274ca1f);
  DAT_14c83e268 = 0;
  atexit(FUN_14274ca4e);
  DAT_14c83e270 = 0;
  _DAT_14c83e278 = 0;
  atexit(FUN_14274ca75);
  local_78 = 0;
  FUN_141471170(&DAT_14c83e2c8,L"AsyncReadFile.CacheHandleForPakFilesOnly",&DAT_14c758618,
                L"Control how Async read handle caches the underlying platform handle for files.\n0: Cache the underlying platform handles for all files.\n1: Cache the underlying platform handle for .pak files only (default).\n"
               );
  atexit(FUN_14274d043);
  _DAT_14c83e2d8 = 0;
  _DAT_14c83e2e0 = 0;
  DAT_14c83e2e8 = 0;
  local_78 = 0;
  FUN_141471170(&DAT_14c83e680,L"memory.logGenericPlatformMemoryStats",&DAT_14c75861c,
                L"Report Platform Memory Stats)\n");
  atexit(FUN_14274d4e1);
  local_78 = 0;
  FUN_1415c789c(&DAT_14c83e690,L"memory.MemoryPressureCriticalThresholdMB",&DAT_14c83e6a0,
                L"When the available physical memory drops below this threshold memory stats will consider this to be at critical pressure.\nWhere a platform can specifically state it\'s memory pressure this test maybe ignored.\n0 (default) critical pressure will not use the threshold."
               );
  atexit(FUN_14274d526);
  DAT_14c83e6b8 = 0;
  _DAT_14c83e6c0 = 0;
  atexit((_func_5014 *)&LAB_14274d79e);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c83ef80);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c83ef80,4000);
  atexit((_func_5014 *)&LAB_14274d7cc);
  DAT_14c83f0e8 = 0;
  _DAT_14c83f0f0 = 0;
  atexit((_func_5014 *)&LAB_14274da44);
  FUN_146158f66();
  local_68 = (undefined8 *)0x0;
  iStack_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  iStack_60 = 3;
  *local_68 = &PTR_LAB_149e001f0;
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
  local_68[2] = lVar3;
  *local_68 = &PTR_FUN_149e05e30;
  local_68[3] = &DAT_14c83f110;
  local_68[4] = FUN_14274da74;
  local_78 = 0;
  FUN_1415c7246(&DAT_14c83f100,L"CPUTime.Dump",
                L"Usage -Delay=[NumSeconds=30]\nIf Delay==0, disables printing the CPU usage to the log\nIf Delay>0, starts printing the average CPU usage from the last n frames, clamps between 10 and 300"
                ,&local_68);
  if (iStack_60 != 0) {
    if (local_68 == (undefined8 *)0x0) goto LAB_142750f68;
    (**(code **)*local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    iStack_60 = 0;
  }
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142750f68:
  atexit(FUN_14274dc80);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142750fbc FUN_142750fbc body=332 status=ok
// SIG undefined FUN_142750fbc(void)

LPVOID FUN_142750fbc(undefined8 param_1,ulonglong param_2,uint param_3,longlong *param_4,
                    longlong *param_5,int *param_6,longlong *param_7)

{
  LPVOID pvVar1;
  size_t _Size;
  longlong *_Dst;
  
  if (param_4 != param_5 && param_2 <= param_3 >> 2) {
    _Size = (longlong)param_5 - (longlong)param_4;
    _Dst = param_4;
    do {
      _Size = _Size - 0x10;
      if (_Dst[1] == param_2) {
        if (_Dst != (longlong *)0x0) {
          pvVar1 = (LPVOID)*_Dst;
          if (pvVar1 == (LPVOID)0x0) {
            FUN_140033559(".\\Runtime/Core/Private/HAL/Allocators/CachedOSPageAllocator.cpp",0x30,
                          L"OS memory allocation cache has been corrupted!");
            param_2 = _Dst[1];
          }
          *param_7 = *param_7 - param_2;
          if (_Dst + 2 != param_5) {
            memmove(_Dst,_Dst + 2,_Size);
          }
          *param_6 = *param_6 + -1;
          return pvVar1;
        }
        break;
      }
      _Dst = _Dst + 2;
    } while (_Dst != param_5);
    pvVar1 = VirtualAlloc((LPVOID)0x0,param_2,0x3000,4);
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    do {
      VirtualFree((LPVOID)*param_4,0,0x8000);
      *param_4 = 0;
      param_4[1] = 0;
      param_4 = param_4 + 2;
    } while (param_4 != param_5);
    *param_6 = 0;
    *param_7 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000142751101. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = VirtualAlloc((LPVOID)0x0,param_2,0x3000,4);
  return pvVar1;
}



// FUNCTION 142751108 FUN_142751108 body=41 status=ok
// SIG undefined FUN_142751108(void)

void FUN_142751108(void)

{
  DAT_14c83f470 = 0;
  if (DAT_14c83f468 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6fd48();
  return;
}



// FUNCTION 14275117c FUN_14275117c body=94 status=ok
// SIG undefined FUN_14275117c(void)

void FUN_14275117c(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x170) == '\x01') {
    uVar2 = *(uint *)(param_1 + 0xb8);
    if (uVar2 != 0) {
      uVar3 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0xb0) + 8 + (longlong)(int)uVar3 * 0x10) != 0) &&
           (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar3 * 0x10),
           plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x60))();
          uVar2 = *(uint *)(param_1 + 0xb8);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
    *(undefined1 *)(param_1 + 0x170) = 0;
  }
  return;
}



// FUNCTION 1427511da FUN_1427511da body=130 status=ok
// SIG undefined FUN_1427511da(void)

undefined8
FUN_1427511da(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_40,param_3);
  local_48 = param_5;
  uVar1 = (**(code **)*param_1)(param_1,param_2,local_40,param_4);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275125e FUN_14275125e body=127 status=ok
// SIG undefined FUN_14275125e(void)

void FUN_14275125e(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  FUN_140f45ebc(puVar1,param_4,param_5);
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149e13df0;
  puVar1[10] = param_3;
  *(undefined1 *)(puVar1 + 0xb) = *param_3;
  plVar2 = (longlong *)FUN_140f45f1e(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001427512d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return;
}



// FUNCTION 1427512de FUN_1427512de body=127 status=ok
// SIG undefined FUN_1427512de(void)

void FUN_1427512de(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  FUN_140f45ebc(puVar1,param_4,param_5);
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149e13f00;
  puVar1[10] = param_3;
  *(undefined4 *)(puVar1 + 0xb) = *param_3;
  plVar2 = (longlong *)FUN_140f45f1e(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x000142751359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return;
}



// FUNCTION 14275135e FUN_14275135e body=131 status=ok
// SIG undefined FUN_14275135e(void)

void FUN_14275135e(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  FUN_140f45ebc(puVar1,param_4,param_5);
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149e14010;
  puVar1[10] = param_3;
  *(undefined4 *)(puVar1 + 0xb) = *param_3;
  plVar2 = (longlong *)FUN_140f45f1e(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001427513dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return;
}



// FUNCTION 1427513e2 FUN_1427513e2 body=102 status=ok
// SIG undefined FUN_1427513e2(void)

void FUN_1427513e2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_14001cc68(0x68,0x10);
  FUN_14170277e(uVar1,param_3,param_4,param_5);
  plVar2 = (longlong *)FUN_140f45f1e(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000142751444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return;
}



// FUNCTION 142751448 FUN_142751448 body=173 status=ok
// SIG undefined FUN_142751448(void)

void FUN_142751448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = &PTR_LAB_149e12740;
  FUN_140056680(puVar1 + 1,param_3);
  uVar3 = param_5 | 0x100;
  if ((param_5 & 0x1040) != 0x40) {
    uVar3 = param_5;
  }
  *(uint *)(puVar1 + 3) = uVar3;
  *puVar1 = &PTR_FUN_149e12690;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_14009d848(puVar1 + 4,param_4);
  plVar2 = (longlong *)FUN_140f45f1e(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001427514ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x80))(plVar2);
  return;
}



// FUNCTION 1427514f6 FUN_1427514f6 body=136 status=ok
// SIG undefined FUN_1427514f6(void)

void FUN_1427514f6(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = &PTR_LAB_149e12740;
  FUN_140056680(puVar1 + 1,param_3);
  uVar3 = param_4 | 0x100;
  if ((param_4 & 0x1040) != 0x40) {
    uVar3 = param_4;
  }
  *(uint *)(puVar1 + 3) = uVar3;
  *puVar1 = &PTR_FUN_149e127f0;
  plVar2 = (longlong *)FUN_140f45f1e(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x000142751577. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x80))(plVar2);
  return;
}



// FUNCTION 14275157e FUN_14275157e body=173 status=ok
// SIG undefined FUN_14275157e(void)

void FUN_14275157e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = &PTR_LAB_149e12740;
  FUN_140056680(puVar1 + 1,param_3);
  uVar3 = param_5 | 0x100;
  if ((param_5 & 0x1040) != 0x40) {
    uVar3 = param_5;
  }
  *(uint *)(puVar1 + 3) = uVar3;
  *puVar1 = &PTR_FUN_149e128a0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_141502386(puVar1 + 4,param_4);
  plVar2 = (longlong *)FUN_140f45f1e(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x000142751624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x80))(plVar2);
  return;
}



// FUNCTION 14275162c FUN_14275162c body=173 status=ok
// SIG undefined FUN_14275162c(void)

void FUN_14275162c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = &PTR_LAB_149e12740;
  FUN_140056680(puVar1 + 1,param_3);
  uVar3 = param_5 | 0x100;
  if ((param_5 & 0x1040) != 0x40) {
    uVar3 = param_5;
  }
  *(uint *)(puVar1 + 3) = uVar3;
  *puVar1 = &PTR_FUN_149e12950;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_141702c6a(puVar1 + 4,param_4);
  plVar2 = (longlong *)FUN_140f45f1e(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001427516d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x80))(plVar2);
  return;
}



// FUNCTION 1427516da FUN_1427516da body=173 status=ok
// SIG undefined FUN_1427516da(void)

void FUN_1427516da(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = &PTR_LAB_149e12740;
  FUN_140056680(puVar1 + 1,param_3);
  uVar3 = param_5 | 0x100;
  if ((param_5 & 0x1040) != 0x40) {
    uVar3 = param_5;
  }
  *(uint *)(puVar1 + 3) = uVar3;
  *puVar1 = &PTR_FUN_149e12a00;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_141702d9c(puVar1 + 4,param_4);
  plVar2 = (longlong *)FUN_140f45f1e(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x000142751780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x80))(plVar2);
  return;
}



// FUNCTION 142751788 FUN_142751788 body=173 status=ok
// SIG undefined FUN_142751788(void)

void FUN_142751788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = &PTR_LAB_149e12740;
  FUN_140056680(puVar1 + 1,param_3);
  uVar3 = param_5 | 0x100;
  if ((param_5 & 0x1040) != 0x40) {
    uVar3 = param_5;
  }
  *(uint *)(puVar1 + 3) = uVar3;
  *puVar1 = &PTR_FUN_149e12ab0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_146269d64(puVar1 + 4,param_4);
  plVar2 = (longlong *)FUN_140f45f1e(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00014275182e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x80))(plVar2);
  return;
}



// FUNCTION 142751836 FUN_142751836 body=173 status=ok
// SIG undefined FUN_142751836(void)

void FUN_142751836(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = &PTR_LAB_149e12740;
  FUN_140056680(puVar1 + 1,param_3);
  uVar3 = param_5 | 0x100;
  if ((param_5 & 0x1040) != 0x40) {
    uVar3 = param_5;
  }
  *(uint *)(puVar1 + 3) = uVar3;
  *puVar1 = &PTR_FUN_149e12b60;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_141702ece(puVar1 + 4,param_4);
  plVar2 = (longlong *)FUN_140f45f1e(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001427518dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x80))(plVar2);
  return;
}



// FUNCTION 1427518e4 FUN_1427518e4 body=173 status=ok
// SIG undefined FUN_1427518e4(void)

void FUN_1427518e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = &PTR_LAB_149e12740;
  FUN_140056680(puVar1 + 1,param_3);
  uVar3 = param_5 | 0x100;
  if ((param_5 & 0x1040) != 0x40) {
    uVar3 = param_5;
  }
  *(uint *)(puVar1 + 3) = uVar3;
  *puVar1 = &PTR_FUN_149e12c10;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_141703000(puVar1 + 4,param_4);
  plVar2 = (longlong *)FUN_140f45f1e(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00014275198a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x80))(plVar2);
  return;
}



// FUNCTION 142751992 FUN_142751992 body=173 status=ok
// SIG undefined FUN_142751992(void)

void FUN_142751992(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = &PTR_LAB_149e12740;
  FUN_140056680(puVar1 + 1,param_3);
  uVar3 = param_5 | 0x100;
  if ((param_5 & 0x1040) != 0x40) {
    uVar3 = param_5;
  }
  *(uint *)(puVar1 + 3) = uVar3;
  *puVar1 = &PTR_FUN_149e12cc0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_141703132(puVar1 + 4,param_4);
  plVar2 = (longlong *)FUN_140f45f1e(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x000142751a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x80))(plVar2);
  return;
}



// FUNCTION 142751a40 FUN_142751a40 body=173 status=ok
// SIG undefined FUN_142751a40(void)

void FUN_142751a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = &PTR_LAB_149e12740;
  FUN_140056680(puVar1 + 1,param_3);
  uVar3 = param_5 | 0x100;
  if ((param_5 & 0x1040) != 0x40) {
    uVar3 = param_5;
  }
  *(uint *)(puVar1 + 3) = uVar3;
  *puVar1 = &PTR_FUN_149e12d70;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_146269de2(puVar1 + 4,param_4);
  plVar2 = (longlong *)FUN_140f45f1e(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x000142751ae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x80))(plVar2);
  return;
}



// FUNCTION 142751aed FUN_142751aed body=91 status=ok
// SIG undefined FUN_142751aed(void)

void FUN_142751aed(void)

{
  if (DAT_14c83f4c8 != 0) {
    if (DAT_14c83f4c0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c83f4c0)(DAT_14c83f4c0,0);
    FUN_1446efa72(&DAT_14c83f4c0,0,0,0x10);
    DAT_14c83f4c8 = 0;
  }
  if (DAT_14c83f4c0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142751b48 FUN_142751b48 body=2954 status=ok
// SIG undefined FUN_142751b48(void)

ulonglong FUN_142751b48(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                       wchar_t *param_5)

{
  short *psVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined2 *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  uint uVar17;
  undefined8 unaff_RDI;
  undefined7 uVar19;
  longlong **pplVar18;
  ushort uVar20;
  longlong *plVar21;
  ushort uVar22;
  ulonglong uVar23;
  wchar_t *pwVar24;
  short *psVar25;
  undefined1 auStack_138 [32];
  wchar_t *local_118;
  undefined4 local_110;
  undefined1 local_f9;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [2];
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  ulonglong uStack_c0;
  longlong local_b8 [3];
  longlong *local_a0;
  longlong *local_98;
  ulonglong uStack_90;
  longlong local_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar19 = (undefined7)((ulonglong)unaff_RDI >> 8);
  local_80 = param_2;
  cVar3 = FUN_140988638(&local_80,L"dumpcvars",1);
  if (cVar3 == '\0') {
    cVar3 = FUN_140988638(&local_80,L"dumpccmds",1);
    if (cVar3 == '\0') {
      cVar3 = FUN_140988638(&local_80,L"setcvar",1);
      if (cVar3 == '\0') {
        cVar3 = FUN_140988638(&local_80,L"unsetcvar",1);
        if (cVar3 == '\0') {
          pplVar18 = (longlong **)CONCAT71(uVar19,1);
          cVar3 = FUN_140988638(&local_80,L"unsetcvartag",1);
          if (cVar3 != '\0') {
            FUN_1467bd280(local_80);
            goto LAB_142751bee;
          }
          local_98 = (longlong *)0x0;
          uStack_90 = 0;
          for (psVar25 = (short *)(local_80 + -2); plVar9 = local_98, (psVar25[1] & 0xffdfU) != 0;
              psVar25 = psVar25 + 1) {
            FUN_140002184(&local_98);
          }
          do {
            psVar1 = psVar25 + 1;
            psVar25 = psVar25 + 1;
          } while (*psVar1 == 0x20);
          pplVar18 = (longlong **)(longlong)(int)uStack_90;
          if ((longlong)pplVar18 < 2) {
            pplVar18 = (longlong **)0x0;
          }
          else {
            iVar4 = wcscmp((wchar_t *)((longlong)local_98 + ((longlong)pplVar18 + -2) * 2),L"?");
            local_f9 = iVar4 == 0;
            if ((bool)local_f9) {
              *(short *)((longlong)plVar9 + ((longlong)pplVar18 + -2) * 2) =
                   *(short *)((longlong)plVar9 + ((longlong)pplVar18 + -1) * 2);
              uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + -1);
            }
            local_a0 = (longlong *)0x0;
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_110 = 0xffffffff;
            local_118 = (wchar_t *)((ulonglong)local_118 & 0xffffffff00000000);
            iVar5 = FUN_1447ee042(&local_98,&DAT_149e1428e,1,1);
            if (iVar5 != -1) {
              local_78 = (longlong *)0x0;
              uStack_70 = 0;
              local_c8 = (longlong *)0x0;
              uStack_c0 = 0;
              FUN_140056680(&local_d8,&DAT_149e1428e);
              local_110 = 0;
              local_118 = (wchar_t *)CONCAT44(local_118._4_4_,1);
              FUN_1407cdbc6(&local_98,&local_d8,&local_78,&local_c8);
              if (local_d8 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              if ((1 < (uint)uStack_70) && (1 < (uint)uStack_c0)) {
                FUN_1402980a2(&local_98,local_78,(uint)uStack_70 - 1);
                local_110 = 0xffffffff;
                local_118 = (wchar_t *)((ulonglong)local_118 & 0xffffffff00000000);
                iVar5 = FUN_1447ee042(&local_c8,&DAT_149e065c6,1,1);
                if (iVar5 == -1) {
                  plVar9 = local_c8;
                  if ((uint)uStack_c0 == 0) {
                    plVar9 = (longlong *)&DAT_149dfb77a;
                  }
                  FUN_1446f470e(&local_d8,plVar9,1);
                  local_a0 = local_d8;
                }
                else {
                  local_d8 = (longlong *)0x0;
                  uStack_d0 = 0;
                  FUN_140056680(local_e8,&DAT_149e065c6);
                  local_110 = 0;
                  local_118 = (wchar_t *)CONCAT44(local_118._4_4_,1);
                  FUN_1407cdbc6(&local_c8,local_e8,&local_d8,local_b8);
                  if (local_e8[0] != 0) {
                    FUN_1400020a8();
                  }
                  plVar9 = local_d8;
                  if ((int)uStack_d0 == 0) {
                    plVar9 = (longlong *)&DAT_149dfb77a;
                  }
                  FUN_1446f470e(&local_a0,plVar9,1);
                  if (local_d8 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                }
              }
              pplVar18 = &local_d8;
              if (local_c8 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              if (local_78 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
            plVar9 = local_98;
            if ((int)uStack_90 == 0) {
              plVar9 = (longlong *)&DAT_149dfb77a;
            }
            plVar9 = (longlong *)(**(code **)(*param_1 + 0xd0))(param_1,plVar9,1);
            if (((plVar9 == (longlong *)0x0) ||
                (uVar10 = (**(code **)(*plVar9 + 0x18))(plVar9), (uVar10 & 1) != 0)) ||
               (uVar10 = (**(code **)(*plVar9 + 0x18))(plVar9), (uVar10 & 8) != 0)) {
LAB_142752039:
              pplVar18 = (longlong **)0x0;
            }
            else {
              (**(code **)(*param_1 + 0xd8))(param_1,&local_78,plVar9);
              if (local_98 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              local_98 = local_78;
              uStack_90 = uStack_70;
              plVar11 = (longlong *)(**(code **)(*plVar9 + 0x80))(plVar9);
              plVar12 = (longlong *)(**(code **)(*plVar9 + 0x38))(plVar9);
              if (local_a0 == (longlong *)0x0) {
                if (plVar11 == (longlong *)0x0) {
                  if (plVar12 == (longlong *)0x0) goto LAB_142752697;
                  if (*psVar25 == 0) {
                    if (iVar4 == 0) goto LAB_1427524f0;
                  }
                  else {
                    FUN_140056680(&local_78,psVar25);
                    FUN_140ded26a(&local_78);
                    FUN_140ded312(&local_78);
                    plVar9 = local_78;
                    iVar4 = (uint)uStack_70;
                    pplVar18 = (longlong **)(uStack_70 & 0xffffffff);
                    uVar6 = (**(code **)(*plVar12 + 0x18))();
                    uVar10 = (ulonglong)(iVar4 - 1);
                    if (iVar4 == 0) {
                      uVar10 = 0;
                    }
                    plVar11 = plVar9;
                    if ((int)uVar10 < 2) goto LAB_1427523ed;
                    if (((short)*plVar9 == 0x22) &&
                       (*(short *)((longlong)plVar9 + (uVar10 - 1) * 2) == 0x22)) {
                      iVar5 = iVar4 - (int)uVar10;
                      if (iVar5 != 0) {
                        memmove((short *)((longlong)plVar9 + (uVar10 - 1) * 2),
                                (short *)((longlong)plVar9 + uVar10 * 2),(longlong)iVar5 * 2);
                      }
                      uVar17 = iVar4 - 1;
                      pplVar18 = (longlong **)(ulonglong)uVar17;
                      iVar4 = iVar4 + -2;
                      if (uVar17 == 0) {
                        iVar4 = 0;
                      }
                      if (iVar4 < 1) goto LAB_1427523a5;
                      uVar17 = uVar17 - (0 < iVar4);
                      pplVar18 = (longlong **)(ulonglong)uVar17;
                      if (uVar17 != 0) {
                        memmove(plVar9,(short *)((longlong)plVar9 + 2),(longlong)(int)uVar17 * 2);
                        goto LAB_1427523a5;
                      }
LAB_1427523f4:
                      plVar11 = (longlong *)&DAT_149dfb77a;
                    }
                    else {
LAB_1427523a5:
                      iVar4 = (int)pplVar18;
                      if (iVar4 - 2U < 0x7fffffff) {
                        if ((short)*plVar9 == 0x3d) {
                          puVar13 = (undefined1 *)FUN_1400d7a00();
                          (**(code **)(*param_3 + 0x10))
                                    (param_3,
                                     L"Warning: Processing the console input parameters the leading \'=\' is ignored (only needed for ini files)."
                                     ,*puVar13,puVar13 + 4);
                          if (iVar4 == 1) goto LAB_1427523f4;
                          pplVar18 = (longlong **)(ulonglong)(iVar4 - 1U);
                          memmove(plVar9,(short *)((longlong)plVar9 + 2),
                                  (longlong)(int)(iVar4 - 1U) * 2);
                          goto LAB_1427523ed;
                        }
                      }
                      else {
LAB_1427523ed:
                        if ((int)pplVar18 == 0) goto LAB_1427523f4;
                      }
                    }
                    lVar16 = 0;
                    while( true ) {
                      uVar20 = *(ushort *)((longlong)plVar11 + lVar16);
                      uVar10 = (ulonglong)uVar20;
                      uVar22 = *(ushort *)((longlong)&DAT_149e1423e + lVar16);
                      if (uVar20 != uVar22) break;
                      if (uVar20 == 0) goto LAB_1427524d4;
LAB_14275241b:
                      lVar16 = lVar16 + 2;
                    }
                    if ((uVar22 | uVar20) < 0x80) {
                      uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                      uVar23 = (ulonglong)uVar22;
                      uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                      if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar23]) goto LAB_14275241b;
                    }
                    if (uVar20 != uVar22) {
                      if ((uVar6 & 4) == 0) {
                        (**(code **)(*plVar12 + 0x98))(plVar12,plVar11,0xe000000,0);
                        pplVar18 = &local_78;
                        (**(code **)(*plVar12 + 0xc0))(plVar12,pplVar18);
                        plVar11 = (longlong *)&DAT_149dfb77a;
                        if ((uint)uStack_70 != 0) {
                          plVar11 = local_78;
                        }
                        plVar21 = (longlong *)&DAT_149dfb77a;
                        if ((int)uStack_90 != 0) {
                          plVar21 = local_98;
                        }
                        FUN_140047918(param_3,L"%s = \"%s\"",plVar21,plVar11);
                        if (local_78 != (longlong *)0x0) {
                          FUN_1400020a8();
                        }
                      }
                      else {
                        plVar11 = local_98;
                        if ((int)uStack_90 == 0) {
                          plVar11 = (longlong *)&DAT_149dfb77a;
                        }
                        FUN_140047918(param_3,L"Error: %s is read only!",plVar11);
                      }
                      pplVar18 = (longlong **)CONCAT71((int7)((ulonglong)pplVar18 >> 8),local_f9);
                      goto LAB_1427524d7;
                    }
LAB_1427524d4:
                    pplVar18 = (longlong **)CONCAT71((int7)((ulonglong)pplVar18 >> 8),1);
LAB_1427524d7:
                    if (plVar9 != (longlong *)0x0) {
                      FUN_1400020a8(plVar9);
                    }
                    if ((char)pplVar18 == '\0') goto LAB_142752697;
LAB_1427524f0:
                    uVar6 = (**(code **)(*plVar12 + 0x18))(plVar12);
                    local_118 = (wchar_t *)(**(code **)(*plVar12 + 8))(plVar12);
                    pwVar24 = L"(ReadOnly)";
                    if ((uVar6 & 4) == 0) {
                      pwVar24 = L"";
                    }
                    plVar9 = (longlong *)&DAT_149dfb77a;
                    if ((int)uStack_90 != 0) {
                      plVar9 = local_98;
                    }
                    FUN_140047918(param_3,L"HELP for \'%s\'%s:\n%s",plVar9,pwVar24);
                  }
                  (**(code **)(*plVar12 + 0xe8))(plVar12,param_3);
                  uVar6 = (**(code **)(*plVar12 + 0x18))(plVar12);
                  if (uVar6 < 0xf000000) {
                    pwVar24 = (wchar_t *)(&PTR_u_Constructor_149e142c8)[uVar6 >> 0x18];
                  }
                  else {
                    pwVar24 = L"<UNKNOWN>";
                  }
                  pplVar18 = &local_78;
                  (**(code **)(*plVar12 + 0xc0))(plVar12,pplVar18);
                  plVar9 = (longlong *)&DAT_149dfb77a;
                  if ((uint)uStack_70 != 0) {
                    plVar9 = local_78;
                  }
                  plVar11 = (longlong *)&DAT_149dfb77a;
                  if ((int)uStack_90 != 0) {
                    plVar11 = local_98;
                  }
                  local_118 = pwVar24;
                  FUN_140047918(param_3,L"%s = \"%s\"      LastSetBy: %s",plVar11,plVar9);
                  if (local_78 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else {
LAB_1427521a3:
                  pplVar18 = &local_c8;
                  local_c8 = (longlong *)0x0;
                  uStack_c0 = 0;
                  FUN_140056680(&local_78,psVar25);
                  local_118 = (wchar_t *)CONCAT71(local_118._1_7_,1);
                  FUN_144a38a52(&local_78,pplVar18);
                  if (local_78 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                  if (iVar4 == 0) {
LAB_142752312:
                    uVar15 = (**(code **)(*plVar11 + 8))(plVar11);
                    plVar9 = local_98;
                    if ((int)uStack_90 == 0) {
                      plVar9 = (longlong *)&DAT_149dfb77a;
                    }
                    FUN_140047918(param_3,L"HELP for \'%s\':\n%s",plVar9,uVar15);
                    bVar2 = true;
                  }
                  else {
                    if ((uint)uStack_c0 == 1) {
                      if ((int)local_c8[1] == 0) {
                        puVar14 = &DAT_149dfb77a;
                      }
                      else {
                        puVar14 = (undefined2 *)*local_c8;
                      }
                      lVar16 = 0;
                      while( true ) {
                        uVar20 = *(ushort *)((longlong)puVar14 + lVar16);
                        uVar10 = (ulonglong)uVar20;
                        uVar22 = *(ushort *)((longlong)&DAT_149e1423e + lVar16);
                        if (uVar20 != uVar22) break;
                        if (uVar20 == 0) goto LAB_142752312;
LAB_142752242:
                        lVar16 = lVar16 + 2;
                      }
                      if ((uVar22 | uVar20) < 0x80) {
                        uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                        uVar23 = (ulonglong)uVar22;
                        uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                        if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar23])
                        goto LAB_142752242;
                      }
                      if (uVar20 != uVar22) goto LAB_14275227a;
                      goto LAB_142752312;
                    }
LAB_14275227a:
                    if ((param_5 == (wchar_t *)0x0) ||
                       (cVar3 = (**(code **)(*plVar11 + 0xa8))(plVar11), cVar3 == '\0')) {
                      cVar3 = (**(code **)(*plVar11 + 0xa8))(plVar11);
                      if (cVar3 == '\0') {
                        uVar6 = (**(code **)(*plVar11 + 0xa0))(plVar11,&local_c8,param_4,param_3);
                        goto LAB_14275266d;
                      }
                      bVar2 = false;
                      pplVar18 = (longlong **)0x0;
                    }
                    else {
                      uVar6 = (**(code **)(*plVar9 + 0x18))(plVar9);
                      if ((uVar6 >> 0x10 & 1) == 0) {
LAB_142752655:
                        uVar6 = (**(code **)(*plVar11 + 0x98))(plVar11,param_5,&local_c8,param_3);
LAB_14275266d:
                        pplVar18 = (longlong **)(ulonglong)uVar6;
                      }
                      else {
                        uVar7 = (**(code **)(*plVar9 + 0x18))();
                        plVar9 = local_98;
                        local_f8 = (longlong *)0x0;
                        lVar16 = (longlong)(int)uStack_90;
                        uStack_f0._0_4_ = (int)uStack_90;
                        if (lVar16 == 0) {
                          uVar8 = 0;
                          iVar4 = 0;
                          local_78 = (longlong *)0x0;
                        }
                        else {
                          FUN_1446dd670(&local_f8,uStack_90 & 0xffffffff,0);
                          memcpy(local_f8,plVar9,lVar16 * 2);
                          local_78 = local_f8;
                          iVar4 = (int)uStack_f0;
                          uVar8 = uStack_f0._4_4_;
                        }
                        plVar9 = DAT_14c83f4c0;
                        if (DAT_14c83f4c8 == 0) {
                          plVar9 = (longlong *)0x0;
                        }
                        local_f8 = (longlong *)0x0;
                        uStack_f0 = 0;
                        uStack_70 = CONCAT44(uVar8,iVar4);
                        local_118 = param_5;
                        uVar7 = (**(code **)(*plVar9 + 0x58))(0,&local_78,&local_c8,uVar7);
                        if (local_f8 != (longlong *)0x0) {
                          FUN_1400020a8();
                        }
                        if ((char)uVar7 == '\0') goto LAB_142752655;
                        pplVar18 = (longlong **)CONCAT71((uint7)(uint3)((uint)uVar7 >> 8),1);
                      }
                      bVar2 = false;
                    }
                  }
                  FUN_1447a1747(local_c8,uStack_c0 & 0xffffffff);
                  if (local_c8 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                  if (!bVar2) goto LAB_14275203b;
                }
              }
              else {
                if (plVar12 != (longlong *)0x0) {
                  puVar13 = (undefined1 *)FUN_1400d7a00();
                  (**(code **)(*param_3 + 0x10))
                            (param_3,
                             L"Unable to lookup a CVar value on another platform in this build",
                             *puVar13,puVar13 + 4);
                  goto LAB_142752039;
                }
                pplVar18 = &local_78;
                FUN_1400021e4(&local_a0,pplVar18);
                plVar12 = local_78;
                if ((uint)uStack_70 == 0) {
                  plVar12 = (longlong *)&DAT_149dfb77a;
                }
                FUN_140047918(param_3,
                              L"Ignoring platform portion (@%s), which is only valid for looking up CVars"
                              ,plVar12);
                if (local_78 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                if (plVar11 != (longlong *)0x0) goto LAB_1427521a3;
              }
LAB_142752697:
              pplVar18 = (longlong **)CONCAT71((int7)((ulonglong)pplVar18 >> 8),1);
            }
LAB_14275203b:
            if (local_b8[0] != 0) {
              FUN_1400020a8();
            }
          }
          if (local_98 != (longlong *)0x0) {
            FUN_1400020a8(local_98);
          }
          goto LAB_142751bee;
        }
        uVar15 = 0;
      }
      else {
        uVar15 = 1;
      }
      pplVar18 = (longlong **)CONCAT71(uVar19,1);
      FUN_142753075(param_1 + 1,local_80,param_3,uVar15);
      goto LAB_142751bee;
    }
    uVar15 = 1;
  }
  else {
    uVar15 = 0;
  }
  pplVar18 = (longlong **)CONCAT71(uVar19,1);
  FUN_1427526d3(param_1 + 1,local_80,param_3,uVar15);
LAB_142751bee:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)pplVar18 & 0xffffff01;
}



// FUNCTION 1427526d3 FUN_1427526d3 body=2465 status=ok
// SIG undefined FUN_1427526d3(void)

void FUN_1427526d3(longlong *param_1,undefined8 param_2,longlong param_3,byte param_4)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  wchar_t *pwVar13;
  undefined2 *puVar14;
  wchar_t *pwVar15;
  int iVar16;
  ulonglong uVar17;
  ushort uVar18;
  ushort uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  undefined2 *puVar22;
  undefined1 auStack_158 [32];
  undefined2 *local_138;
  wchar_t *local_130;
  undefined2 *local_128;
  char local_11b;
  byte local_11a;
  char local_119;
  undefined8 *local_118;
  longlong local_110;
  longlong *local_108;
  longlong *local_100;
  undefined2 *local_f8;
  int local_f0;
  undefined2 *local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  ulonglong uStack_d0;
  short *local_c8;
  int local_c0;
  undefined2 *local_b8;
  undefined8 uStack_b0;
  undefined2 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_11a = param_4;
  local_108 = param_1;
  local_90 = param_2;
  local_119 = FUN_14054d46e(param_2,L"showhelp");
  local_a8 = (undefined2 *)0x0;
  uStack_a0 = 0;
  local_138 = (undefined2 *)0x0;
  local_11b = '\x01';
  cVar3 = FUN_14063337c(param_2,L"-csv=",&local_a8,1);
  uVar7 = local_90;
  if (cVar3 == '\0') {
    local_11b = FUN_14054d46e(local_90,&DAT_149e141aa);
  }
  local_b8 = (undefined2 *)0x0;
  uStack_b0 = 0;
  local_138 = (undefined2 *)0x0;
  FUN_14063337c(uVar7,L"-setby=",&local_b8,1);
  FUN_14619c2be(&local_c8,&local_90,0);
  psVar6 = local_c8;
  if (local_c0 == 0) {
    psVar6 = &DAT_149dfb77a;
  }
  if (*psVar6 == 0x2d) {
    FUN_14020fad6(&local_c8,&DAT_149dfb77a);
  }
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  FUN_1467bcbf8(local_108,&local_d8);
  FUN_140e836da(local_d8,uStack_d0 & 0xffffffff);
  bVar2 = local_11a;
  if (local_11b == '\0') {
    local_118 = (undefined8 *)0x0;
    local_110 = param_3;
  }
  else {
    if ((int)uStack_a0 < 2) {
      pwVar15 = L"ConsoleVars.csv";
      if (local_11a != 0) {
        pwVar15 = L"ConsoleCommands.csv";
      }
      uVar7 = FUN_14047ac8c();
      FUN_1449b8608(&local_f8,uVar7,L"Logs/");
      local_88 = local_f8;
      iVar4 = local_f0 + -1;
      if (local_f0 == 0) {
        iVar4 = 0;
      }
      uStack_80 = CONCAT44(uStack_80._4_4_,iVar4);
      local_70 = (uint)bVar2 * 4 + 0xf;
      local_78 = pwVar15;
      FUN_140bee87a(&local_e8,&local_88,2);
      if (local_a8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_a8 = local_e8;
      uStack_a0 = uStack_e0;
      local_e8 = (undefined2 *)0x0;
      uStack_e0 = 0;
      if (local_f8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_14054d1d4();
    puVar12 = &DAT_149dfb77a;
    if ((int)uStack_a0 != 0) {
      puVar12 = local_a8;
    }
    puVar8 = (undefined8 *)(**(code **)(DAT_14c83ff40 + 0x20))(&DAT_14c83ff40,puVar12,0x10);
    puVar12 = &DAT_149dfb77a;
    if ((int)uStack_a0 != 0) {
      puVar12 = local_a8;
    }
    if (puVar8 == (undefined8 *)0x0) {
      FUN_140047918(param_3,L"Unable to create CSV file for writing: \'%s\'",puVar12);
      goto LAB_142752f88;
    }
    FUN_140047918(param_3,L"Dumping to CSV file: \'%s\'",puVar12);
    pwVar15 = L"";
    if (local_119 != '\0') {
      pwVar15 = L",HELP";
    }
    pwVar13 = L"NAME,VALUE,SETBY%s";
    if (local_11a != 0) {
      pwVar13 = L"NAME%s";
    }
    local_118 = puVar8;
    FUN_1468219cc(puVar8,pwVar13,pwVar15);
    local_110 = 0;
  }
  if ((longlong)(int)uStack_d0 != 0) {
    local_100 = local_d8 + (longlong)(int)uStack_d0 * 2;
    plVar21 = local_d8;
    do {
      plVar1 = local_108;
      if (local_c0 < 2) {
        iVar4 = (int)plVar21[1];
      }
      else {
        iVar4 = (int)plVar21[1];
        puVar12 = &DAT_149dfb77a;
        if (iVar4 != 0) {
          puVar12 = (undefined2 *)*plVar21;
        }
        uVar11 = (ulonglong)(local_c0 - 1);
        lVar10 = 0;
        while( true ) {
          uVar18 = *(ushort *)((longlong)puVar12 + lVar10);
          uVar17 = (ulonglong)uVar18;
          uVar19 = *(ushort *)((longlong)local_c8 + lVar10);
          if (uVar18 != uVar19) break;
          if (uVar18 == 0) goto LAB_1427529a1;
LAB_142752ba8:
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_1427529a1;
          lVar10 = lVar10 + 2;
        }
        if ((uVar19 | uVar18) < 0x80) {
          uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
          uVar20 = (ulonglong)uVar19;
          uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
          if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar20]) goto LAB_142752ba8;
        }
        if (uVar18 != uVar19) goto LAB_142752f1c;
      }
LAB_1427529a1:
      iVar16 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar16 = 0;
      }
      if (0 < iVar16) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
        } while (iVar16 != iVar4);
      }
      iVar4 = FUN_14483203a(local_108);
      lVar10 = (longlong)iVar4 * 0x20 + *plVar1;
      if (iVar4 == -1) {
        lVar10 = 0;
      }
      plVar1 = *(longlong **)(lVar10 + 0x10);
      plVar9 = (longlong *)(**(code **)(*plVar1 + 0x38))(plVar1);
      lVar10 = (**(code **)(*plVar1 + 0x80))(plVar1);
      local_88 = (undefined2 *)0x0;
      uStack_80 = 0;
      if (local_119 != '\0') {
        uVar7 = (**(code **)(*plVar1 + 8))(plVar1);
        FUN_140056680(&local_e8,uVar7);
        FUN_140ded26a(&local_e8);
        FUN_140ded312(&local_e8);
        puVar12 = local_e8;
        local_88 = local_e8;
        uStack_80 = uStack_e0;
        if (local_11b == '\0') {
          FUN_140002266(&local_e8,L"\n%s\n ");
          if (puVar12 != (undefined2 *)0x0) {
            FUN_1400020a8(puVar12);
          }
          local_88 = local_e8;
          uStack_80 = uStack_e0;
        }
        else {
          local_138 = (undefined2 *)CONCAT44(local_138._4_4_,1);
          FUN_140807d8e(&local_88,&local_f8,&DAT_149e01f72);
          FUN_140002266(&local_e8,L",\"%s\"");
          if (puVar12 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          local_88 = local_e8;
          local_e8 = (undefined2 *)0x0;
          uStack_80 = uStack_e0;
          uStack_e0 = 0;
          if (local_f8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_11a == 1 && lVar10 != 0) {
        if (local_110 != 0) {
          FUN_140047918(local_110,L"%s%s");
        }
        if (local_118 != (undefined8 *)0x0) {
          FUN_1468219cc(local_118,L"%s%s");
        }
      }
      if (plVar9 != (longlong *)0x0 && local_11a == 0) {
        if ((int)uStack_b0 - 2U < 0x7fffffff) {
          uVar5 = (**(code **)(*plVar9 + 0x18))(plVar9);
          pwVar15 = L"<UNKNOWN>";
          if (uVar5 < 0xf000000) {
            pwVar15 = (wchar_t *)(&PTR_u_Constructor_149e142c8)[uVar5 >> 0x18];
          }
          puVar12 = &DAT_149dfb77a;
          if ((int)uStack_b0 != 0) {
            puVar12 = local_b8;
          }
          lVar10 = 0;
          while( true ) {
            uVar18 = *(ushort *)((longlong)pwVar15 + lVar10);
            uVar11 = (ulonglong)uVar18;
            uVar19 = *(ushort *)((longlong)puVar12 + lVar10);
            if (uVar18 != uVar19) break;
            if (uVar18 == 0) goto LAB_142752d45;
LAB_142752d0f:
            lVar10 = lVar10 + 2;
          }
          if ((uVar19 | uVar18) < 0x80) {
            uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            uVar17 = (ulonglong)uVar19;
            uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
            if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar17]) goto LAB_142752d0f;
          }
          if (uVar18 != uVar19) goto LAB_142752f0a;
        }
LAB_142752d45:
        local_e8 = (undefined2 *)0x0;
        uStack_e0 = 0;
        cVar3 = (**(code **)(*plVar1 + 0x88))(plVar1);
        if (cVar3 != '\0') {
          FUN_14020fad6(&local_e8,L" [SHADOW]");
        }
        puVar12 = &DAT_149dfb77a;
        if ((int)uStack_80 != 0) {
          puVar12 = local_88;
        }
        uVar5 = (**(code **)(*plVar9 + 0x18))(plVar9);
        if (local_11b == '\0') {
          pwVar15 = L"<UNKNOWN>";
          if (uVar5 < 0xf000000) {
            pwVar15 = (wchar_t *)(&PTR_u_Constructor_149e142c8)[uVar5 >> 0x18];
          }
          (**(code **)(*plVar9 + 0xc0))(plVar9,&local_f8);
          puVar14 = &DAT_149dfb77a;
          if (local_f0 != 0) {
            puVar14 = local_f8;
          }
          puVar22 = &DAT_149dfb77a;
          if ((int)plVar21[1] != 0) {
            puVar22 = (undefined2 *)*plVar21;
          }
          if (local_110 != 0) {
            local_138 = puVar14;
            local_130 = pwVar15;
            local_128 = puVar12;
            FUN_140047918(local_110,L"%s%s = \"%s\"      LastSetBy: %s%s",puVar22);
          }
          if (local_118 != (undefined8 *)0x0) {
            pwVar13 = L"%s%s = \"%s\"      LastSetBy: %s%s";
            local_138 = puVar14;
            local_130 = pwVar15;
            goto LAB_142752f64;
          }
        }
        else {
          pwVar15 = L"<UNKNOWN>";
          if (uVar5 < 0xf000000) {
            pwVar15 = (wchar_t *)(&PTR_u_Constructor_149e142c8)[uVar5 >> 0x18];
          }
          (**(code **)(*plVar9 + 0xc0))(plVar9,&local_f8);
          puVar14 = &DAT_149dfb77a;
          if (local_f0 != 0) {
            puVar14 = local_f8;
          }
          puVar22 = &DAT_149dfb77a;
          if ((int)plVar21[1] != 0) {
            puVar22 = (undefined2 *)*plVar21;
          }
          if (local_110 != 0) {
            local_138 = puVar14;
            local_130 = pwVar15;
            local_128 = puVar12;
            FUN_140047918(local_110,L"%s%s,%s,%s%s",puVar22);
          }
          if (local_118 != (undefined8 *)0x0) {
            pwVar13 = L"%s%s,%s,%s%s";
            local_138 = puVar14;
            local_130 = pwVar15;
LAB_142752f64:
            local_128 = puVar12;
            FUN_1468219cc(local_118,pwVar13,puVar22);
          }
        }
        if (local_f8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_e8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_142752f0a:
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
LAB_142752f1c:
      plVar21 = plVar21 + 2;
    } while (plVar21 != local_100);
  }
  if (local_118 != (undefined8 *)0x0) {
    (**(code **)*local_118)(local_118,1);
  }
LAB_142752f88:
  FUN_1447a1747(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (short *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142753075 FUN_142753075 body=1317 status=ok
// SIG undefined FUN_142753075(void)

void FUN_142753075(longlong *param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  wchar_t *pwVar11;
  undefined2 *puVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  longlong local_98 [2];
  undefined2 *local_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  uint local_50;
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = param_2;
  FUN_14619c2be(local_78 + 4,&local_48,0);
  if (local_50 < 2) {
    pwVar11 = L"Usage: UnsetCVar [Platform@]CVarName [-setby=Priority] [-tag=SomeTag]";
    if (param_4 != '\0') {
      pwVar11 = L"Usage: SetCVar [Platform@]CVarName Value [-setby=Priority] [-tag=SomeTag]";
    }
    puVar3 = (undefined1 *)FUN_1400d7a00();
    (**(code **)(*param_3 + 0x10))(param_3,pwVar11,*puVar3,puVar3 + 4);
    puVar3 = (undefined1 *)FUN_1400d7a00();
    (**(code **)(*param_3 + 0x10))
              (param_3,L"   Priority can be one of the following (default is Console):",*puVar3,
               puVar3 + 4);
    FUN_140047918(param_3,L"      %s%s",L"Constructor",&DAT_149dfb77a);
    FUN_140047918(param_3,L"      %s%s",L"Scalability",&DAT_149dfb77a);
    FUN_140047918(param_3,L"      %s%s",L"GameSetting",&DAT_149dfb77a);
    FUN_140047918(param_3,L"      %s%s",L"ProjectSetting",&DAT_149dfb77a);
    FUN_140047918(param_3,L"      %s%s",L"SystemSettingsIni",&DAT_149dfb77a);
    FUN_140047918(param_3,L"      %s%s",L"PluginLowPriority",L" [*]");
    FUN_140047918(param_3,L"      %s%s",L"DeviceProfile",&DAT_149dfb77a);
    FUN_140047918(param_3,L"      %s%s",L"PluginHighPriority",L" [*]");
    FUN_140047918(param_3,L"      %s%s",L"GameOverride",&DAT_149dfb77a);
    FUN_140047918(param_3,L"      %s%s",L"ConsoleVariablesIni",&DAT_149dfb77a);
    FUN_140047918(param_3,L"      %s%s",L"Hotfix",L" [*]");
    FUN_140047918(param_3,L"      %s%s",L"Preview",L" [*]");
    FUN_140047918(param_3,L"      %s%s",L"Commandline",&DAT_149dfb77a);
    FUN_140047918(param_3,L"      %s%s",L"Code",&DAT_149dfb77a);
    FUN_140047918(param_3,L"      %s%s",L"Console",&DAT_149dfb77a);
    puVar3 = (undefined1 *)FUN_1400d7a00();
    (**(code **)(*param_3 + 0x10))
              (param_3,L"      [*] Array type priorities, used for dynamic setting/unsetting",
               *puVar3,puVar3 + 4);
    puVar3 = (undefined1 *)FUN_1400d7a00();
    (**(code **)(*param_3 + 0x10))
              (param_3,
               L"   Tag should be set for the ones marked as Array types, for ability to set and unset"
               ,*puVar3,puVar3 + 4);
  }
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_a0 = 0xffffffff;
  local_a8 = 0;
  uVar2 = FUN_1447ee042(local_78 + 4,&DAT_149e1428e,1,1);
  if (0 < (int)uVar2) {
    iVar5 = local_50 - 1;
    if (local_50 == 0) {
      iVar5 = 0;
    }
    uVar6 = (longlong)iVar5;
    if ((longlong)(ulonglong)uVar2 < (longlong)iVar5) {
      uVar6 = (ulonglong)uVar2;
    }
    uVar8 = 0;
    if (0 < (longlong)uVar6) {
      uVar8 = uVar6;
    }
    puVar12 = local_58;
    if (local_50 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    FUN_14006620a(&local_88,puVar12,uVar8);
    local_68 = local_88;
    uStack_60 = uStack_80;
    local_a0 = 0xffffffff;
    local_a8 = 0;
    iVar5 = FUN_1447ee042(local_78 + 2,&DAT_149e065c6,1,1);
    if (iVar5 != -1) {
      local_88 = (undefined2 *)0x0;
      uStack_80 = 0;
      FUN_140056680(local_98,&DAT_149e065c6);
      local_a0 = 0;
      local_a8 = 1;
      FUN_1407cdbc6(local_78 + 2,local_98,&local_88,local_78);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      puVar12 = local_88;
      if ((uint)uStack_80 == 0) {
        puVar12 = &DAT_149dfb77a;
      }
      FUN_14020fad6(local_78 + 2,puVar12);
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_14006620a(&local_88);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_58 = local_88;
    local_50 = (uint)uStack_80;
    local_4c = uStack_80._4_4_;
  }
  uVar2 = local_50;
  puVar12 = local_58;
  uVar6 = 0;
  iVar5 = local_50 - 1;
  if (local_50 == 0) {
    iVar5 = 0;
  }
  if (0 < iVar5) {
    puVar4 = local_58;
    if (local_50 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    lVar9 = 0;
    uVar6 = 0;
    do {
      uVar7 = ((uint)(0x19 < (ushort)puVar4[lVar9] - 0x61) * 0x20 + (uint)(ushort)puVar4[lVar9]) -
              0x20;
      uVar10 = (uint)(uVar6 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar6 ^ uVar7) & 0xff) * 4);
      uVar6 = (ulonglong)
              (uVar10 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar7 >> 8 & 0xff) * 4));
      lVar9 = lVar9 + 1;
    } while (iVar5 != (int)lVar9);
  }
  iVar5 = FUN_14483203a(param_1,uVar6,local_78 + 4);
  lVar9 = (longlong)iVar5 * 0x20 + *param_1;
  if (((lVar9 == 0 || iVar5 == -1) ||
      (plVar1 = *(longlong **)(lVar9 + 0x10), plVar1 == (longlong *)0x0)) ||
     (lVar9 = (**(code **)(*plVar1 + 0x38))(), puVar12 = local_58, uVar2 = local_50, lVar9 == 0)) {
    if (uVar2 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    FUN_140047918(param_3,L"No CVar named %s",puVar12);
  }
  else {
    puVar3 = (undefined1 *)FUN_1400d7a00();
    (**(code **)(*param_3 + 0x10))
              (param_3,L"Unable to lookup a CVar value on another platform in this build",*puVar3,
               puVar3 + 4);
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14275359b FUN_14275359b body=87 status=ok
// SIG undefined FUN_14275359b(void)

void FUN_14275359b(void)

{
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0x38))
            (DAT_14c8407a8,L"r.DumpingMovie",&DAT_14c86a9e0,
             L"Allows to dump each rendered frame to disk (slow fps, names MovieFrame..).\n<=0:off (default), <0:remains on, >0:remains on for n frames (n is the number specified)"
             ,1);
  if (DAT_14c8407a8 != (longlong *)0x0) {
    return;
  }
  FUN_1414b00ea();
  return;
}



// FUNCTION 1427535f2 FUN_1427535f2 body=69 status=ok
// SIG undefined FUN_1427535f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427535f2(void)

{
  _DAT_14c83f4d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f4d8,1);
  return;
}



// FUNCTION 142753637 FUN_142753637 body=69 status=ok
// SIG undefined FUN_142753637(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753637(void)

{
  _DAT_14c83f4e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753679. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f4f0,1);
  return;
}



// FUNCTION 14275367c FUN_14275367c body=69 status=ok
// SIG undefined FUN_14275367c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275367c(void)

{
  _DAT_14c83f500 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427536be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f508,1);
  return;
}



// FUNCTION 1427536c1 FUN_1427536c1 body=69 status=ok
// SIG undefined FUN_1427536c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427536c1(void)

{
  _DAT_14c83f518 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753703. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f520,1);
  return;
}



// FUNCTION 142753706 FUN_142753706 body=69 status=ok
// SIG undefined FUN_142753706(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753706(void)

{
  _DAT_14c83f530 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f538,1);
  return;
}



// FUNCTION 14275374b FUN_14275374b body=69 status=ok
// SIG undefined FUN_14275374b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275374b(void)

{
  _DAT_14c83f548 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275378d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f550,1);
  return;
}



// FUNCTION 142753790 FUN_142753790 body=69 status=ok
// SIG undefined FUN_142753790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753790(void)

{
  _DAT_14c83f560 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427537d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f568,1);
  return;
}



// FUNCTION 1427537d5 FUN_1427537d5 body=69 status=ok
// SIG undefined FUN_1427537d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427537d5(void)

{
  _DAT_14c83f578 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f580,1);
  return;
}



// FUNCTION 14275381a FUN_14275381a body=69 status=ok
// SIG undefined FUN_14275381a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275381a(void)

{
  _DAT_14c83f590 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275385c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f598,1);
  return;
}



// FUNCTION 14275385f FUN_14275385f body=69 status=ok
// SIG undefined FUN_14275385f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275385f(void)

{
  _DAT_14c83f5a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427538a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f5b0,1);
  return;
}



// FUNCTION 1427538a4 FUN_1427538a4 body=69 status=ok
// SIG undefined FUN_1427538a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427538a4(void)

{
  _DAT_14c83f5c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427538e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f5c8,1);
  return;
}



// FUNCTION 1427538e9 FUN_1427538e9 body=69 status=ok
// SIG undefined FUN_1427538e9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427538e9(void)

{
  _DAT_14c83f5d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275392b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f5e0,1);
  return;
}



// FUNCTION 14275392e FUN_14275392e body=69 status=ok
// SIG undefined FUN_14275392e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275392e(void)

{
  _DAT_14c83f5f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f5f8,1);
  return;
}



// FUNCTION 142753973 FUN_142753973 body=69 status=ok
// SIG undefined FUN_142753973(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753973(void)

{
  _DAT_14c83f608 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427539b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f610,1);
  return;
}



// FUNCTION 1427539b8 FUN_1427539b8 body=69 status=ok
// SIG undefined FUN_1427539b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427539b8(void)

{
  _DAT_14c83f620 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427539fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f628,1);
  return;
}



// FUNCTION 1427539fd FUN_1427539fd body=69 status=ok
// SIG undefined FUN_1427539fd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427539fd(void)

{
  _DAT_14c83f638 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753a3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f640,1);
  return;
}



// FUNCTION 142753a42 FUN_142753a42 body=69 status=ok
// SIG undefined FUN_142753a42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753a42(void)

{
  _DAT_14c83f650 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f658,1);
  return;
}



// FUNCTION 142753a87 FUN_142753a87 body=69 status=ok
// SIG undefined FUN_142753a87(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753a87(void)

{
  _DAT_14c83f668 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753ac9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f670,1);
  return;
}



// FUNCTION 142753acc FUN_142753acc body=69 status=ok
// SIG undefined FUN_142753acc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753acc(void)

{
  _DAT_14c83f680 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753b0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f688,1);
  return;
}



// FUNCTION 142753b11 FUN_142753b11 body=69 status=ok
// SIG undefined FUN_142753b11(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753b11(void)

{
  _DAT_14c83f698 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f6a0,1);
  return;
}



// FUNCTION 142753b56 FUN_142753b56 body=69 status=ok
// SIG undefined FUN_142753b56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753b56(void)

{
  _DAT_14c83f6b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f6b8,1);
  return;
}



// FUNCTION 142753b9b FUN_142753b9b body=69 status=ok
// SIG undefined FUN_142753b9b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753b9b(void)

{
  _DAT_14c83f6c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753bdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f6d0,1);
  return;
}



// FUNCTION 142753be0 FUN_142753be0 body=69 status=ok
// SIG undefined FUN_142753be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753be0(void)

{
  _DAT_14c83f6e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753c22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f6e8,1);
  return;
}



// FUNCTION 142753c25 FUN_142753c25 body=69 status=ok
// SIG undefined FUN_142753c25(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753c25(void)

{
  _DAT_14c83f6f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f700,1);
  return;
}



// FUNCTION 142753c6a FUN_142753c6a body=69 status=ok
// SIG undefined FUN_142753c6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753c6a(void)

{
  _DAT_14c83f710 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f718,1);
  return;
}



// FUNCTION 142753caf FUN_142753caf body=69 status=ok
// SIG undefined FUN_142753caf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753caf(void)

{
  _DAT_14c83f728 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753cf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f730,1);
  return;
}



// FUNCTION 142753cf4 FUN_142753cf4 body=69 status=ok
// SIG undefined FUN_142753cf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753cf4(void)

{
  _DAT_14c83f740 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f748,1);
  return;
}



// FUNCTION 142753d39 FUN_142753d39 body=69 status=ok
// SIG undefined FUN_142753d39(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753d39(void)

{
  _DAT_14c83f758 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753d7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f760,1);
  return;
}



// FUNCTION 142753d7e FUN_142753d7e body=69 status=ok
// SIG undefined FUN_142753d7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753d7e(void)

{
  _DAT_14c83f770 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f778,1);
  return;
}



// FUNCTION 142753dc3 FUN_142753dc3 body=69 status=ok
// SIG undefined FUN_142753dc3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753dc3(void)

{
  _DAT_14c83f788 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753e05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f790,1);
  return;
}



// FUNCTION 142753e08 FUN_142753e08 body=69 status=ok
// SIG undefined FUN_142753e08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753e08(void)

{
  _DAT_14c83f7a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753e4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f7a8,1);
  return;
}



// FUNCTION 142753e4d FUN_142753e4d body=69 status=ok
// SIG undefined FUN_142753e4d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753e4d(void)

{
  _DAT_14c83f7b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753e8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f7c0,1);
  return;
}



// FUNCTION 142753e92 FUN_142753e92 body=69 status=ok
// SIG undefined FUN_142753e92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753e92(void)

{
  _DAT_14c83f7d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f7d8,1);
  return;
}



// FUNCTION 142753ed7 FUN_142753ed7 body=69 status=ok
// SIG undefined FUN_142753ed7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753ed7(void)

{
  _DAT_14c83f7e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753f19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f7f0,1);
  return;
}



// FUNCTION 142753f1c FUN_142753f1c body=69 status=ok
// SIG undefined FUN_142753f1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753f1c(void)

{
  _DAT_14c83f800 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753f5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f808,1);
  return;
}



// FUNCTION 142753f61 FUN_142753f61 body=69 status=ok
// SIG undefined FUN_142753f61(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753f61(void)

{
  _DAT_14c83f818 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753fa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f820,1);
  return;
}



// FUNCTION 142753fa6 FUN_142753fa6 body=69 status=ok
// SIG undefined FUN_142753fa6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753fa6(void)

{
  _DAT_14c83f830 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142753fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f838,1);
  return;
}



// FUNCTION 142753feb FUN_142753feb body=69 status=ok
// SIG undefined FUN_142753feb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142753feb(void)

{
  _DAT_14c83f848 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275402d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f850,1);
  return;
}



// FUNCTION 142754030 FUN_142754030 body=69 status=ok
// SIG undefined FUN_142754030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754030(void)

{
  _DAT_14c83f860 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754072. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f868,1);
  return;
}



// FUNCTION 142754075 FUN_142754075 body=69 status=ok
// SIG undefined FUN_142754075(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754075(void)

{
  _DAT_14c83f878 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427540b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f880,1);
  return;
}



// FUNCTION 1427540ba FUN_1427540ba body=69 status=ok
// SIG undefined FUN_1427540ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427540ba(void)

{
  _DAT_14c83f890 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427540fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f898,1);
  return;
}



// FUNCTION 1427540ff FUN_1427540ff body=69 status=ok
// SIG undefined FUN_1427540ff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427540ff(void)

{
  _DAT_14c83f8a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f8b0,1);
  return;
}



// FUNCTION 142754144 FUN_142754144 body=69 status=ok
// SIG undefined FUN_142754144(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754144(void)

{
  _DAT_14c83f8c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f8c8,1);
  return;
}



// FUNCTION 142754189 FUN_142754189 body=69 status=ok
// SIG undefined FUN_142754189(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754189(void)

{
  _DAT_14c83f8d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427541cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f8e0,1);
  return;
}



// FUNCTION 1427541ce FUN_1427541ce body=69 status=ok
// SIG undefined FUN_1427541ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427541ce(void)

{
  _DAT_14c83f8f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f8f8,1);
  return;
}



// FUNCTION 142754213 FUN_142754213 body=69 status=ok
// SIG undefined FUN_142754213(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754213(void)

{
  _DAT_14c83f908 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f910,1);
  return;
}



// FUNCTION 142754258 FUN_142754258 body=69 status=ok
// SIG undefined FUN_142754258(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754258(void)

{
  _DAT_14c83f920 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275429a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f928,1);
  return;
}



// FUNCTION 14275429d FUN_14275429d body=69 status=ok
// SIG undefined FUN_14275429d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275429d(void)

{
  _DAT_14c83f938 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427542df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f940,1);
  return;
}



// FUNCTION 1427542e2 FUN_1427542e2 body=69 status=ok
// SIG undefined FUN_1427542e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427542e2(void)

{
  _DAT_14c83f950 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f958,1);
  return;
}



// FUNCTION 142754327 FUN_142754327 body=69 status=ok
// SIG undefined FUN_142754327(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754327(void)

{
  _DAT_14c83f968 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754369. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f970,1);
  return;
}



// FUNCTION 14275436c FUN_14275436c body=69 status=ok
// SIG undefined FUN_14275436c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275436c(void)

{
  _DAT_14c83f980 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427543ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f988,1);
  return;
}



// FUNCTION 1427543b1 FUN_1427543b1 body=69 status=ok
// SIG undefined FUN_1427543b1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427543b1(void)

{
  _DAT_14c83f998 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427543f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f9a0,1);
  return;
}



// FUNCTION 1427543f6 FUN_1427543f6 body=69 status=ok
// SIG undefined FUN_1427543f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427543f6(void)

{
  _DAT_14c83f9b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f9b8,1);
  return;
}



// FUNCTION 14275443b FUN_14275443b body=69 status=ok
// SIG undefined FUN_14275443b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275443b(void)

{
  _DAT_14c83f9c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275447d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f9d0,1);
  return;
}



// FUNCTION 142754480 FUN_142754480 body=69 status=ok
// SIG undefined FUN_142754480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754480(void)

{
  _DAT_14c83f9e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427544c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f9e8,1);
  return;
}



// FUNCTION 1427544c5 FUN_1427544c5 body=69 status=ok
// SIG undefined FUN_1427544c5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427544c5(void)

{
  _DAT_14c83f9f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fa00,1);
  return;
}



// FUNCTION 14275450a FUN_14275450a body=69 status=ok
// SIG undefined FUN_14275450a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275450a(void)

{
  _DAT_14c83fa10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275454c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fa18,1);
  return;
}



// FUNCTION 14275454f FUN_14275454f body=69 status=ok
// SIG undefined FUN_14275454f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275454f(void)

{
  _DAT_14c83fa28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754591. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fa30,1);
  return;
}



// FUNCTION 142754594 FUN_142754594 body=69 status=ok
// SIG undefined FUN_142754594(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754594(void)

{
  _DAT_14c83fa40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427545d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fa48,1);
  return;
}



// FUNCTION 1427545d9 FUN_1427545d9 body=69 status=ok
// SIG undefined FUN_1427545d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427545d9(void)

{
  _DAT_14c83fa58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275461b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fa60,1);
  return;
}



// FUNCTION 14275461e FUN_14275461e body=69 status=ok
// SIG undefined FUN_14275461e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275461e(void)

{
  _DAT_14c83fa70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fa78,1);
  return;
}



// FUNCTION 142754663 FUN_142754663 body=69 status=ok
// SIG undefined FUN_142754663(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754663(void)

{
  _DAT_14c83fa88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427546a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fa90,1);
  return;
}



// FUNCTION 1427546a8 FUN_1427546a8 body=69 status=ok
// SIG undefined FUN_1427546a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427546a8(void)

{
  _DAT_14c83faa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427546ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83faa8,1);
  return;
}



// FUNCTION 1427546ed FUN_1427546ed body=69 status=ok
// SIG undefined FUN_1427546ed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427546ed(void)

{
  _DAT_14c83fab8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275472f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fac0,1);
  return;
}



// FUNCTION 142754732 FUN_142754732 body=69 status=ok
// SIG undefined FUN_142754732(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754732(void)

{
  _DAT_14c83fad0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fad8,1);
  return;
}



// FUNCTION 142754777 FUN_142754777 body=69 status=ok
// SIG undefined FUN_142754777(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754777(void)

{
  _DAT_14c83fae8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427547b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83faf0,1);
  return;
}



// FUNCTION 1427547bc FUN_1427547bc body=69 status=ok
// SIG undefined FUN_1427547bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427547bc(void)

{
  _DAT_14c83fb00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427547fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fb08,1);
  return;
}



// FUNCTION 142754801 FUN_142754801 body=69 status=ok
// SIG undefined FUN_142754801(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754801(void)

{
  _DAT_14c83fb18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fb20,1);
  return;
}



// FUNCTION 142754846 FUN_142754846 body=69 status=ok
// SIG undefined FUN_142754846(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754846(void)

{
  _DAT_14c83fb30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fb38,1);
  return;
}



// FUNCTION 14275488b FUN_14275488b body=69 status=ok
// SIG undefined FUN_14275488b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275488b(void)

{
  _DAT_14c83fb48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427548cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fb50,1);
  return;
}



// FUNCTION 1427548d0 FUN_1427548d0 body=69 status=ok
// SIG undefined FUN_1427548d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427548d0(void)

{
  _DAT_14c83fb60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fb68,1);
  return;
}



// FUNCTION 142754915 FUN_142754915 body=69 status=ok
// SIG undefined FUN_142754915(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754915(void)

{
  _DAT_14c83fb78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fb80,1);
  return;
}



// FUNCTION 14275495a FUN_14275495a body=69 status=ok
// SIG undefined FUN_14275495a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275495a(void)

{
  _DAT_14c83fb90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275499c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fb98,1);
  return;
}



// FUNCTION 14275499f FUN_14275499f body=69 status=ok
// SIG undefined FUN_14275499f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275499f(void)

{
  _DAT_14c83fba8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427549e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fbb0,1);
  return;
}



// FUNCTION 1427549e4 FUN_1427549e4 body=69 status=ok
// SIG undefined FUN_1427549e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427549e4(void)

{
  _DAT_14c83fbc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fbc8,1);
  return;
}



// FUNCTION 142754a29 FUN_142754a29 body=69 status=ok
// SIG undefined FUN_142754a29(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754a29(void)

{
  _DAT_14c83fbd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754a6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fbe0,1);
  return;
}



// FUNCTION 142754a6e FUN_142754a6e body=69 status=ok
// SIG undefined FUN_142754a6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754a6e(void)

{
  _DAT_14c83fbf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fbf8,1);
  return;
}



// FUNCTION 142754ab3 FUN_142754ab3 body=69 status=ok
// SIG undefined FUN_142754ab3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754ab3(void)

{
  _DAT_14c83fc08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754af5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fc10,1);
  return;
}



// FUNCTION 142754af8 FUN_142754af8 body=69 status=ok
// SIG undefined FUN_142754af8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754af8(void)

{
  _DAT_14c83fc20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754b3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fc28,1);
  return;
}



// FUNCTION 142754b3d FUN_142754b3d body=69 status=ok
// SIG undefined FUN_142754b3d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754b3d(void)

{
  _DAT_14c83fc38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754b7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fc40,1);
  return;
}



// FUNCTION 142754b82 FUN_142754b82 body=69 status=ok
// SIG undefined FUN_142754b82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754b82(void)

{
  _DAT_14c83fc50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fc58,1);
  return;
}



// FUNCTION 142754bc7 FUN_142754bc7 body=69 status=ok
// SIG undefined FUN_142754bc7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754bc7(void)

{
  _DAT_14c83fc68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754c09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fc70,1);
  return;
}



// FUNCTION 142754c0c FUN_142754c0c body=69 status=ok
// SIG undefined FUN_142754c0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754c0c(void)

{
  _DAT_14c83fc80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754c4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fc88,1);
  return;
}



// FUNCTION 142754c51 FUN_142754c51 body=69 status=ok
// SIG undefined FUN_142754c51(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754c51(void)

{
  _DAT_14c83fc98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754c93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fca0,1);
  return;
}



// FUNCTION 142754c96 FUN_142754c96 body=69 status=ok
// SIG undefined FUN_142754c96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754c96(void)

{
  _DAT_14c83fcb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fcb8,1);
  return;
}



// FUNCTION 142754cdb FUN_142754cdb body=69 status=ok
// SIG undefined FUN_142754cdb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754cdb(void)

{
  _DAT_14c83fcc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754d1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fcd0,1);
  return;
}



// FUNCTION 142754d20 FUN_142754d20 body=69 status=ok
// SIG undefined FUN_142754d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754d20(void)

{
  _DAT_14c83fce0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754d62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fce8,1);
  return;
}



// FUNCTION 142754d65 FUN_142754d65 body=69 status=ok
// SIG undefined FUN_142754d65(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754d65(void)

{
  _DAT_14c83fcf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754da7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fd00,1);
  return;
}



// FUNCTION 142754daa FUN_142754daa body=69 status=ok
// SIG undefined FUN_142754daa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754daa(void)

{
  _DAT_14c83fd10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fd18,1);
  return;
}



// FUNCTION 142754def FUN_142754def body=69 status=ok
// SIG undefined FUN_142754def(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754def(void)

{
  _DAT_14c83fd28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754e31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fd30,1);
  return;
}



// FUNCTION 142754e34 FUN_142754e34 body=69 status=ok
// SIG undefined FUN_142754e34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754e34(void)

{
  _DAT_14c83fd40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fd48,1);
  return;
}



// FUNCTION 142754e79 FUN_142754e79 body=69 status=ok
// SIG undefined FUN_142754e79(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754e79(void)

{
  _DAT_14c83fd58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754ebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fd60,1);
  return;
}



// FUNCTION 142754ebe FUN_142754ebe body=69 status=ok
// SIG undefined FUN_142754ebe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754ebe(void)

{
  _DAT_14c83fd70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fd78,1);
  return;
}



// FUNCTION 142754f03 FUN_142754f03 body=69 status=ok
// SIG undefined FUN_142754f03(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754f03(void)

{
  _DAT_14c83fd88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754f45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fd90,1);
  return;
}



// FUNCTION 142754f48 FUN_142754f48 body=69 status=ok
// SIG undefined FUN_142754f48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754f48(void)

{
  _DAT_14c83fda0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754f8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fda8,1);
  return;
}



// FUNCTION 142754f8d FUN_142754f8d body=69 status=ok
// SIG undefined FUN_142754f8d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754f8d(void)

{
  _DAT_14c83fdb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142754fcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fdc0,1);
  return;
}



// FUNCTION 142754fd2 FUN_142754fd2 body=69 status=ok
// SIG undefined FUN_142754fd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142754fd2(void)

{
  _DAT_14c83fdd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142755014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fdd8,1);
  return;
}



// FUNCTION 142755017 FUN_142755017 body=69 status=ok
// SIG undefined FUN_142755017(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142755017(void)

{
  _DAT_14c83fde8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142755059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fdf0,1);
  return;
}



// FUNCTION 14275505c FUN_14275505c body=69 status=ok
// SIG undefined FUN_14275505c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275505c(void)

{
  _DAT_14c83fe00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275509e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fe08,1);
  return;
}



// FUNCTION 1427550a1 FUN_1427550a1 body=69 status=ok
// SIG undefined FUN_1427550a1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427550a1(void)

{
  _DAT_14c83fe18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427550e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fe20,1);
  return;
}



// FUNCTION 1427550e6 FUN_1427550e6 body=69 status=ok
// SIG undefined FUN_1427550e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427550e6(void)

{
  _DAT_14c83fe30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142755128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fe38,1);
  return;
}



// FUNCTION 14275512b FUN_14275512b body=69 status=ok
// SIG undefined FUN_14275512b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275512b(void)

{
  _DAT_14c83fe48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275516d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fe50,1);
  return;
}



// FUNCTION 142755170 FUN_142755170 body=69 status=ok
// SIG undefined FUN_142755170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142755170(void)

{
  _DAT_14c83fe60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427551b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fe68,1);
  return;
}



// FUNCTION 1427551b5 FUN_1427551b5 body=69 status=ok
// SIG undefined FUN_1427551b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427551b5(void)

{
  _DAT_14c83fe78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427551f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fe80,1);
  return;
}



// FUNCTION 1427551fa FUN_1427551fa body=69 status=ok
// SIG undefined FUN_1427551fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427551fa(void)

{
  _DAT_14c83fe90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275523c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fe98,1);
  return;
}



// FUNCTION 14275523f FUN_14275523f body=69 status=ok
// SIG undefined FUN_14275523f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275523f(void)

{
  _DAT_14c83fea8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142755281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83feb0,1);
  return;
}



// FUNCTION 142755284 FUN_142755284 body=69 status=ok
// SIG undefined FUN_142755284(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142755284(void)

{
  _DAT_14c83fec0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427552c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fec8,1);
  return;
}



// FUNCTION 1427552c9 FUN_1427552c9 body=69 status=ok
// SIG undefined FUN_1427552c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427552c9(void)

{
  _DAT_14c83fed8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275530b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fee0,1);
  return;
}



// FUNCTION 14275530e FUN_14275530e body=69 status=ok
// SIG undefined FUN_14275530e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275530e(void)

{
  _DAT_14c83fef0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142755350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83fef8,1);
  return;
}



// FUNCTION 142755353 FUN_142755353 body=69 status=ok
// SIG undefined FUN_142755353(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142755353(void)

{
  _DAT_14c83ff08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142755395. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83ff10,1);
  return;
}



// FUNCTION 142755398 FUN_142755398 body=69 status=ok
// SIG undefined FUN_142755398(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142755398(void)

{
  _DAT_14c83ff20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427553da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83ff28,1);
  return;
}



// FUNCTION 1427553e0 FUN_1427553e0 body=207 status=ok
// SIG undefined FUN_1427553e0(void)

ulonglong FUN_1427553e0(undefined8 param_1,undefined8 param_2,byte param_3,char param_4)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)0x0;
  cVar1 = FUN_140d2d64c(param_2,0,1);
  if (cVar1 != '\0') goto LAB_142755472;
  plVar3 = (longlong *)FUN_1400dbadc();
  plVar4 = (longlong *)*plVar3;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_140e92164();
    *plVar3 = (longlong)plVar4;
    plVar5 = plVar3;
  }
  bVar2 = (**(code **)(*plVar4 + 0x78))(plVar4,param_2);
  if ((byte)(param_3 ^ 1 | bVar2) == 1) {
    if (bVar2 != 0) {
      if (param_4 != '\0') {
        plVar3 = (longlong *)FUN_1400dbadc();
        plVar4 = (longlong *)*plVar3;
        if (plVar4 == (longlong *)0x0) {
          plVar4 = (longlong *)FUN_140e92164();
          *plVar3 = (longlong)plVar4;
        }
        (**(code **)(*plVar4 + 0xa8))(plVar4,param_2,0);
      }
      plVar3 = (longlong *)FUN_1400dbadc();
      plVar4 = (longlong *)*plVar3;
      if (plVar4 == (longlong *)0x0) {
        plVar4 = (longlong *)FUN_140e92164();
        *plVar3 = (longlong)plVar4;
      }
      cVar1 = (**(code **)(*plVar4 + 0x88))(plVar4,param_2);
      if (cVar1 == '\0') goto LAB_14275546f;
    }
    plVar5 = (longlong *)CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
  }
  else {
LAB_14275546f:
    plVar5 = (longlong *)0x0;
  }
LAB_142755472:
  return (ulonglong)plVar5 & 0xffffffff;
}



// FUNCTION 1427554b0 FUN_1427554b0 body=517 status=ok
// SIG undefined FUN_1427554b0(void)

undefined4
FUN_1427554b0(longlong *param_1,undefined8 param_2,undefined8 param_3,byte param_4,
             undefined8 param_5,undefined8 param_6,char param_7)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined2 *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140056680(local_70);
  FUN_140beea4a(&local_60,local_70);
  puVar6 = local_60;
  if (local_58 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  (**(code **)(*param_1 + 0x58))(param_1,puVar6,1);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)FUN_1400dbadc();
  plVar5 = (longlong *)*plVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_140e92164();
    *plVar4 = (longlong)plVar5;
  }
  bVar1 = (**(code **)(*plVar5 + 0x78))(plVar5,param_2);
  if ((bVar1 & param_4) == 1) {
    plVar4 = (longlong *)FUN_1400dbadc();
    plVar5 = (longlong *)*plVar4;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_140e92164();
      *plVar4 = (longlong)plVar5;
    }
    cVar2 = (**(code **)(*plVar5 + 0x88))(plVar5,param_2);
    if (cVar2 == '\0' && param_7 == '\0') {
      FUN_14000f986(0x3f000000);
      plVar4 = (longlong *)FUN_1400dbadc();
      plVar5 = (longlong *)*plVar4;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)FUN_140e92164();
        *plVar4 = (longlong)plVar5;
      }
      cVar2 = (**(code **)(*plVar5 + 0x88))(plVar5,param_2);
      if (cVar2 == '\0') {
        uVar3 = 0;
        goto LAB_14275563d;
      }
    }
  }
  plVar4 = (longlong *)FUN_1400dbadc();
  plVar5 = (longlong *)*plVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_140e92164();
    *plVar4 = (longlong)plVar5;
  }
  uVar3 = (**(code **)(*plVar5 + 0xa0))(plVar5,param_2,param_3);
  if (param_7 == '\0' && (char)uVar3 == '\0') {
    GetLastError();
    iVar7 = -10;
    do {
      FUN_14000f986(0x3f000000);
      plVar4 = (longlong *)FUN_1400dbadc();
      plVar5 = (longlong *)*plVar4;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)FUN_140e92164();
        *plVar4 = (longlong)plVar5;
      }
      uVar3 = (**(code **)(*plVar5 + 0xa0))(plVar5,param_2,param_3);
      if ((char)uVar3 != '\0') break;
      GetLastError();
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0);
  }
LAB_14275563d:
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1427556b6 FUN_1427556b6 body=92 status=ok
// SIG undefined FUN_1427556b6(void)

void FUN_1427556b6(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = true;
  lVar2 = param_2;
  if (param_1[0x16] <= param_2) {
    lVar2 = param_1[0x16] + param_1[0x19];
    bVar3 = lVar2 <= param_2;
    if (lVar2 <= param_2) {
      lVar2 = param_2;
    }
  }
  *(bool *)((longlong)param_1 + 0xe4) = bVar3;
  cVar1 = (**(code **)(*param_1 + 0x260))(param_1,lVar2);
  if (cVar1 == '\0') {
    FUN_14572541c(param_1);
  }
  param_1[0x15] = param_2;
  return;
}



// FUNCTION 142755712 FUN_142755712 body=43 status=ok
// SIG undefined FUN_142755712(void)

void FUN_142755712(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x20))();
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = param_3;
  }
  *param_4 = uVar2;
  return;
}



// FUNCTION 142755750 FUN_142755750 body=459 status=ok
// SIG undefined FUN_142755750(void)

void FUN_142755750(longlong *param_1,void *param_2,ulonglong param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong _Size;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = param_1[0x15];
  if (param_1[0x14] < (longlong)(lVar5 + param_3)) {
LAB_142755905:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  if ((lVar5 < param_1[0x16]) || (param_1[0x16] + param_1[0x19] <= lVar5)) {
    param_1[0x16] = lVar5;
    if (param_1[0x1a] < 0) {
      param_1[0x19] = 0;
      FUN_140d2d4a8(param_1 + 0x18,0);
    }
    else {
      param_1[0x19] = 0;
    }
    bVar6 = *(byte *)((longlong)param_1 + 0xe4);
  }
  else {
    bVar6 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  if (0 < (longlong)param_3) {
    lVar5 = param_1[0x15];
    do {
      lVar3 = param_1[0x16];
      uVar4 = (lVar3 - lVar5) + param_1[0x19];
      _Size = uVar4;
      if (param_3 < uVar4) {
        _Size = param_3;
      }
      if ((longlong)uVar4 < 1) {
        if (param_1[0x1b] <= (longlong)param_3 || (bVar6 & 1) != 0) {
          local_38 = 0;
          (**(code **)(*param_1 + 0x270))(param_1,param_2,param_3,&local_38);
          if (local_38 != param_3) {
            FUN_14572541c(param_1);
          }
          param_1[0x15] = param_1[0x15] + param_3;
          break;
        }
        cVar2 = FUN_141174166(param_1);
        if (cVar2 == '\0') goto LAB_142755905;
        _Size = (param_1[0x19] + param_1[0x16]) - param_1[0x15];
        if ((longlong)param_3 < (longlong)_Size) {
          _Size = param_3;
        }
        if ((longlong)_Size < 1) {
          FUN_14572541c(param_1);
        }
        if ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0) break;
        lVar5 = param_1[0x15];
        lVar3 = param_1[0x16];
      }
      memcpy(param_2,(void *)((lVar5 + param_1[0x18]) - lVar3),_Size);
      lVar5 = param_1[0x15] + _Size;
      param_1[0x15] = lVar5;
      param_2 = (void *)((longlong)param_2 + _Size);
      uVar4 = param_3 - _Size;
      bVar1 = (longlong)_Size <= (longlong)param_3;
      param_3 = uVar4;
    } while (uVar4 != 0 && bVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14275592e FUN_14275592e body=47 status=ok
// SIG undefined FUN_14275592e(void)

undefined8 FUN_14275592e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  return 1;
}



// FUNCTION 142755970 FUN_142755970 body=85 status=ok
// SIG undefined FUN_142755970(void)

void FUN_142755970(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  FUN_1405b1996();
  cVar1 = (**(code **)(*param_1 + 0x260))(param_1,param_2);
  if (cVar1 == '\0') {
    FUN_14572541c(param_1);
    if (((char)param_1[0x1b] == '\0') && ((*(byte *)(param_1 + 0x14) & 0x20) == 0)) {
      *(undefined1 *)(param_1 + 0x1b) = 0;
    }
  }
  param_1[0x15] = param_2;
  return;
}



// FUNCTION 1427559c6 FUN_1427559c6 body=321 status=ok
// SIG undefined FUN_1427559c6(void)

void FUN_1427559c6(longlong *param_1,void *param_2,ulonglong param_3)

{
  longlong *plVar1;
  char cVar2;
  ulonglong _Size;
  longlong lVar3;
  longlong lVar4;
  
  param_1[0x15] = param_1[0x15] + param_3;
  lVar3 = param_1[0x1a];
  if ((longlong)param_3 < lVar3) {
    plVar1 = param_1 + 0x17;
    lVar4 = param_1[0x18];
    _Size = lVar3 - lVar4;
    if ((longlong)_Size < (longlong)param_3) {
      do {
        param_1[0x18] = lVar3;
        if ((ulonglong)(param_1[0x19] - lVar4) < _Size) {
          FUN_14112c458(plVar1,lVar4);
        }
        if (lVar3 != lVar4) {
          memcpy((void *)(lVar4 + *plVar1),param_2,_Size);
        }
        param_3 = param_3 - _Size;
        param_2 = (void *)((longlong)param_2 + _Size);
        FUN_1405b1996(param_1);
        lVar4 = param_1[0x18];
        lVar3 = param_1[0x1a];
        _Size = lVar3 - lVar4;
      } while ((longlong)_Size < (longlong)param_3);
    }
    if (param_3 != 0) {
      param_1[0x18] = lVar4 + param_3;
      if ((ulonglong)(param_1[0x19] - lVar4) < param_3) {
        FUN_14112c458(plVar1,lVar4);
      }
      memcpy((void *)(lVar4 + *plVar1),param_2,param_3);
      return;
    }
  }
  else {
    FUN_1405b1996(param_1);
    cVar2 = (**(code **)(*param_1 + 0x270))(param_1,param_2,param_3);
    if (cVar2 == '\0') {
      FUN_14572541c(param_1);
      if (((char)param_1[0x1b] == '\0') && ((*(byte *)(param_1 + 0x14) & 0x20) == 0)) {
        *(undefined1 *)(param_1 + 0x1b) = 0;
      }
    }
  }
  return;
}



// FUNCTION 142755b14 FUN_142755b14 body=83 status=ok
// SIG undefined FUN_142755b14(void)

void FUN_142755b14(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e11ee0;
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142755b5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 142755b78 FUN_142755b78 body=122 status=ok
// SIG undefined FUN_142755b78(void)

undefined8 FUN_142755b78(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_20);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  QueryPerformanceCounter(&local_20);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142755bf4 FUN_142755bf4 body=134 status=ok
// SIG undefined FUN_142755bf4(void)

undefined4 FUN_142755bf4(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142755c7c FUN_142755c7c body=134 status=ok
// SIG undefined FUN_142755c7c(void)

undefined4 FUN_142755c7c(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142755d04 FUN_142755d04 body=140 status=ok
// SIG undefined FUN_142755d04(void)

undefined4 FUN_142755d04(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                    (*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142755d92 FUN_142755d92 body=150 status=ok
// SIG undefined FUN_142755d92(void)

undefined4 FUN_142755d92(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_38);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                    (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
  QueryPerformanceCounter(&local_38);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142755e2a FUN_142755e2a body=140 status=ok
// SIG undefined FUN_142755e2a(void)

undefined4 FUN_142755e2a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                    (*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142755eb8 FUN_142755eb8 body=126 status=ok
// SIG undefined FUN_142755eb8(void)

undefined4 FUN_142755eb8(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_28);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_28);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142755f38 FUN_142755f38 body=134 status=ok
// SIG undefined FUN_142755f38(void)

undefined4 FUN_142755f38(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142755fc0 FUN_142755fc0 body=116 status=ok
// SIG undefined FUN_142755fc0(void)

void FUN_142755fc0(longlong param_1)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_20);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x48))();
  QueryPerformanceCounter(&local_20);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142756036 FUN_142756036 body=122 status=ok
// SIG undefined FUN_142756036(void)

undefined8 FUN_142756036(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_20);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))();
  QueryPerformanceCounter(&local_20);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427560ca FUN_1427560ca body=1110 status=ok
// SIG undefined FUN_1427560ca(void)

void FUN_1427560ca(longlong *param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong *_Dst;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[9];
  if (plVar3 == (longlong *)0x0) goto LAB_142756377;
  if (param_2 == 0xff000000) {
    (**(code **)(*param_1 + 0xa0))(param_1,0,param_3);
    (**(code **)(*param_1 + 0xa0))(param_1,0x1000000,param_3);
    (**(code **)(*param_1 + 0xa0))(param_1,0x2000000,param_3);
    (**(code **)(*param_1 + 0xa0))(param_1,0x3000000,param_3);
    (**(code **)(*param_1 + 0xa0))(param_1,0x4000000,param_3);
    (**(code **)(*param_1 + 0xa0))(param_1,0x5000000,param_3);
    (**(code **)(*param_1 + 0xa0))(param_1,0x6000000,param_3);
    (**(code **)(*param_1 + 0xa0))(param_1,0x7000000,param_3);
    (**(code **)(*param_1 + 0xa0))(param_1,0x8000000,param_3);
    (**(code **)(*param_1 + 0xa0))(param_1,0x9000000,param_3);
    (**(code **)(*param_1 + 0xa0))(param_1,0xa000000,param_3);
    (**(code **)(*param_1 + 0xa0))(param_1,0xb000000,param_3);
    (**(code **)(*param_1 + 0xa0))(param_1,0xc000000,param_3);
    (**(code **)(*param_1 + 0xa0))(param_1,0xd000000,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
  }
  uVar6 = *(uint *)(plVar3 + 1);
  lVar4 = *plVar3;
  uVar11 = 0;
  if (0 < (int)uVar6) {
    uVar8 = (ulonglong)uVar6;
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar12 = (uint)uVar8;
      if (*(int *)(lVar4 + (ulonglong)uVar10 * 0x18) < (int)param_2) {
        uVar11 = uVar10 + (uVar12 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar12);
  }
  if ((((int)uVar6 <= (int)uVar11) || ((int)param_2 < *(int *)(lVar4 + (ulonglong)uVar11 * 0x18)))
     || (lVar4 + (ulonglong)uVar11 * 0x18 == -8)) goto LAB_142756377;
  uVar8 = 0;
  if (0 < (int)uVar6) {
    uVar9 = (ulonglong)uVar6;
    do {
      uVar12 = (int)(uVar9 >> 1) + (int)uVar8;
      uVar11 = (uint)uVar9;
      if (*(int *)(lVar4 + (ulonglong)uVar12 * 0x18) < (int)param_2) {
        uVar8 = (ulonglong)(uVar12 + (uVar11 & 1));
      }
      uVar9 = uVar9 >> 1;
    } while (1 < uVar11);
  }
  if ((int)uVar8 < (int)uVar6) {
    piVar1 = (int *)(lVar4 + uVar8 * 0x18);
    piVar13 = (int *)0x0;
    if (*piVar1 <= (int)param_2) {
      piVar13 = piVar1 + 2;
    }
  }
  else {
    piVar13 = (int *)0x0;
  }
  if (param_3 == 0) {
    if (piVar13[2] < 1) goto LAB_142756377;
    uVar8 = 0;
    if (0 < (int)uVar6) {
      uVar9 = (ulonglong)uVar6;
      do {
        uVar12 = (int)(uVar9 >> 1) + (int)uVar8;
        uVar11 = (uint)uVar9;
        if (*(int *)(lVar4 + (ulonglong)uVar12 * 0x18) < (int)param_2) {
          uVar8 = (ulonglong)(uVar12 + (uVar11 & 1));
        }
        uVar9 = uVar9 >> 1;
      } while (1 < uVar11);
    }
LAB_142756347:
    if (((int)uVar8 < (int)uVar6) && (*(int *)(lVar4 + uVar8 * 0x18) <= (int)param_2)) {
      FUN_146269d08(plVar3);
      FUN_1458ad72a(plVar3);
    }
  }
  else {
    uVar11 = piVar13[2];
    if ((param_2 & 0xfd000000) != 0x5000000 && (param_2 & 0xfe000000) != 0xa000000) {
      if (((int)uVar11 < 1) || (**(longlong **)piVar13 != param_3)) goto LAB_142756377;
      uVar8 = 0;
      if (0 < (int)uVar6) {
        uVar9 = (ulonglong)uVar6;
        do {
          uVar12 = (int)(uVar9 >> 1) + (int)uVar8;
          uVar11 = (uint)uVar9;
          if (*(int *)(lVar4 + (ulonglong)uVar12 * 0x18) < (int)param_2) {
            uVar8 = (ulonglong)(uVar12 + (uVar11 & 1));
          }
          uVar9 = uVar9 >> 1;
        } while (1 < uVar11);
      }
      goto LAB_142756347;
    }
    uVar6 = uVar11;
    if (0 < (int)uVar11) {
      _Dst = *(longlong **)piVar13;
      uVar8 = 0;
      do {
        if (*_Dst == param_3) {
          if (uVar11 - 1 != (int)uVar8) {
            memmove(_Dst,_Dst + 2,(longlong)(int)((uVar11 - 1) - (int)uVar8) << 4);
            uVar6 = piVar13[2];
          }
          piVar13[2] = uVar6 - 1;
          FUN_1467bf11a(piVar13);
          uVar6 = piVar13[2];
          goto LAB_1427564d5;
        }
        uVar8 = uVar8 + 1;
        _Dst = _Dst + 2;
      } while (uVar11 != uVar8);
      goto LAB_142756377;
    }
LAB_1427564d5:
    if (uVar6 == 0) {
      uVar6 = *(uint *)(plVar3 + 1);
      uVar8 = 0;
      if (0 < (int)uVar6) {
        uVar9 = (ulonglong)uVar6;
        uVar12 = uVar6;
        do {
          uVar9 = uVar9 >> 1;
          uVar10 = (uint)uVar9 + (int)uVar8;
          if (*(int *)(*plVar3 + (ulonglong)uVar10 * 0x18) < (int)param_2) {
            uVar8 = (ulonglong)(uVar10 + (uVar12 & 1));
          }
          bVar5 = 1 < uVar12;
          uVar12 = (uint)uVar9;
        } while (bVar5);
      }
      if (((int)uVar8 < (int)uVar6) && (*(int *)(*plVar3 + uVar8 * 0x18) <= (int)param_2)) {
        FUN_146269d08(plVar3);
        FUN_1458ad72a(plVar3);
      }
    }
    if ((int)uVar11 < 1) goto LAB_142756377;
  }
  if ((uint)*(byte *)((longlong)param_1 + 0x1b) << 0x18 <= (param_2 & 0xff000000)) {
    puVar7 = (undefined4 *)FUN_1467bf070(param_1[9],&local_44);
    uVar2 = *puVar7;
    uVar6 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar6 = (uVar6 & 0x80) << 10 | local_44;
    local_48 = uVar2;
    (**(code **)(*param_1 + 0x100))(param_1,&local_48,uVar6);
    (**(code **)(*param_1 + 0xf8))(param_1,uVar6,1);
  }
LAB_142756377:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142756546 FUN_142756546 body=633 status=ok
// SIG undefined FUN_142756546(void)

void FUN_142756546(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60 [3];
  uint local_54;
  void *local_50;
  int local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[9] != 0) {
    if (param_2 == 0xff000000) {
      (**(code **)(*param_1 + 0xa0))(param_1,0,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x1000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x2000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x3000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x4000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x5000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x6000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x7000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x8000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x9000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0xa000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0xb000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0xc000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0xd000000,param_3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
    }
    cVar1 = FUN_1467bf6ae(param_1[9],param_2,param_3);
    if ((cVar1 != '\0') &&
       ((uint)*(byte *)((longlong)param_1 + 0x1b) << 0x18 <= (param_2 & 0xff000000))) {
      uVar3 = FUN_1467bf8ee(param_1[9],&local_54);
      FUN_1467bf9dc(&local_50,uVar3);
      uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
      uVar2 = (uVar2 & 0x80) << 10 | local_54;
      local_68 = (void *)0x0;
      local_60[0] = local_48;
      if ((longlong)local_48 == 0) {
        local_60[1] = 0;
      }
      else {
        FUN_1446dd670(&local_68,local_48,0);
        memcpy(local_68,local_50,(longlong)local_48 * 2);
      }
      (**(code **)(*param_1 + 0x100))(param_1,&local_68,uVar2);
      (**(code **)(*param_1 + 0xf8))(param_1,uVar2,1);
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar4 = 0x20;
      do {
        if (*(longlong *)((longlong)local_60 + lVar4) != 0) {
          FUN_1400020a8();
        }
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427567dc FUN_1427567dc body=46 status=ok
// SIG undefined FUN_1427567dc(void)

void FUN_1427567dc(void)

{
  longlong lVar1;
  
  lVar1 = 0x20;
  do {
    if (*(longlong *)(&DAT_14c83ff50 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 142756822 FUN_142756822 body=40 status=ok
// SIG undefined FUN_142756822(void)

undefined8 FUN_142756822(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  if ((*(int *)(param_1 + 0x28) == 0) ||
     (plVar1 = (longlong *)(param_1 + 0x20), param_1 = 0, (longlong *)*plVar1 == (longlong *)0x0)) {
    bVar5 = (byte)param_1;
    bVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (**(code **)(*(longlong *)*plVar1 + 0x60))();
    bVar5 = (byte)uVar3;
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    bVar2 = 1;
  }
  return CONCAT71(uVar4,bVar2 & bVar5);
}



// FUNCTION 14275684e FUN_14275684e body=40 status=ok
// SIG undefined FUN_14275684e(void)

undefined8 FUN_14275684e(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  if ((*(int *)(param_1 + 0x28) == 0) ||
     (plVar1 = (longlong *)(param_1 + 0x20), param_1 = 0, (longlong *)*plVar1 == (longlong *)0x0)) {
    bVar5 = (byte)param_1;
    bVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (**(code **)(*(longlong *)*plVar1 + 0x60))();
    bVar5 = (byte)uVar3;
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    bVar2 = 1;
  }
  return CONCAT71(uVar4,bVar2 & bVar5);
}



// FUNCTION 142756876 FUN_142756876 body=50 status=ok
// SIG undefined FUN_142756876(void)

undefined8 FUN_142756876(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  if ((*(int *)(param_1 + 0x28) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 0x20), param_1 = 0, plVar1 == (longlong *)0x0)) {
    bVar5 = (byte)param_1;
    bVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_3,param_2);
    bVar5 = (byte)uVar3;
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    bVar2 = 1;
  }
  return CONCAT71(uVar4,bVar2 & bVar5);
}



// FUNCTION 1427568b8 FUN_1427568b8 body=506 status=ok
// SIG undefined FUN_1427568b8(void)

void FUN_1427568b8(longlong *param_1,uint param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 auStack_58 [43];
  byte local_2d;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[9] != 0) {
    if (param_2 == 0xff000000) {
      (**(code **)(*param_1 + 0xa0))(param_1,0,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x1000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x2000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x3000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x4000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x5000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x6000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x7000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x8000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x9000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0xa000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0xb000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0xc000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0xd000000,param_3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    cVar2 = FUN_1467c0af0(param_1[9],param_2,param_3);
    if ((cVar2 != '\0') &&
       ((uint)*(byte *)((longlong)param_1 + 0x1b) << 0x18 <= (param_2 & 0xff000000))) {
      pbVar4 = (byte *)FUN_1467c0d54(param_1[9],&local_2c);
      bVar1 = *pbVar4;
      uVar3 = (**(code **)(*param_1 + 0x18))(param_1);
      uVar3 = (uVar3 & 0x80) << 10 | local_2c;
      local_2d = bVar1 & 1;
      (**(code **)(*param_1 + 0x100))(param_1,&local_2d,uVar3);
      (**(code **)(*param_1 + 0xf8))(param_1,uVar3,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142756ae4 FUN_142756ae4 body=512 status=ok
// SIG undefined FUN_142756ae4(void)

void FUN_142756ae4(longlong *param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[9] != 0) {
    if (param_2 == 0xff000000) {
      (**(code **)(*param_1 + 0xa0))(param_1,0,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x1000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x2000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x3000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x4000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x5000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x6000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x7000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x8000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0x9000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0xa000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0xb000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0xc000000,param_3);
      (**(code **)(*param_1 + 0xa0))(param_1,0xd000000,param_3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
    cVar2 = FUN_14622dcba(param_1[9],param_2,param_3);
    if ((cVar2 != '\0') &&
       ((uint)*(byte *)((longlong)param_1 + 0x1b) << 0x18 <= (param_2 & 0xff000000))) {
      puVar4 = (undefined4 *)FUN_1467c1312(param_1[9],&local_34);
      uVar1 = *puVar4;
      uVar3 = (**(code **)(*param_1 + 0x18))(param_1);
      uVar3 = (uVar3 & 0x80) << 10 | local_34;
      local_38 = uVar1;
      (**(code **)(*param_1 + 0x100))(param_1,&local_38,uVar3);
      (**(code **)(*param_1 + 0xf8))(param_1,uVar3,1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142756d02 FUN_142756d02 body=104 status=ok
// SIG undefined FUN_142756d02(void)

undefined4 FUN_142756d02(longlong param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar4 = 0;
  }
  else if (iVar1 == 1) {
    DVar2 = FUN_140ad26c0();
    DVar3 = GetCurrentThreadId();
    uVar4 = (ulonglong)(DVar2 != DVar3);
  }
  else {
    uVar4 = 1;
  }
  return *(undefined4 *)(param_1 + 0x50 + uVar4 * 4);
}



// FUNCTION 142756d8d FUN_142756d8d body=6229 status=ok
// SIG undefined FUN_142756d8d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142756d8d(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  uint local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  DAT_14c83f448 = 0;
  DAT_14c83f450 = 0;
  DAT_14c83f428 = 0;
  _DAT_14c83f430 = 0;
  _DAT_14c83f454 = 0xffffffff00000080;
  DAT_14c83f45c = 0;
  DAT_14c83f468 = 0;
  DAT_14c83f470 = 0;
  atexit(FUN_142751108);
  DAT_14c83f4c0 = 0;
  DAT_14c83f4c8 = 0;
  atexit(FUN_142751aed);
  local_58 = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c83f4d0,L"r.UniformBufferPooling",&local_58,
                L"If we pool object in RHICreateUniformBuffer to have less real API calls to create buffers\n 0: off (for debugging)\n 1: on (optimization)"
               );
  atexit(FUN_1427535f2);
  local_58 = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c83f4e8,L"r.TranslucentSortPolicy",&local_58,
                L"0: Sort based on distance from camera centerpoint to bounding sphere centerpoint. (default, best for 3D games)\n1: Sort based on projected distance to camera.\n2: Sort based on the projection onto a fixed axis. (best for 2D games)"
               );
  atexit(FUN_142753637);
  local_58 = 1;
  local_68 = 0x424;
  FUN_14078dbce(&DAT_14c83f500,L"r.MobileHDR",&local_58,
                L"0: Mobile renders in LDR gamma space. (suggested for unlit games targeting low-end phones)\n1: Mobile renders in HDR linear space. (default)"
               );
  atexit(FUN_14275367c);
  local_58 = 0;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f518,L"r.Mobile.ShadingPath",&local_58,
                L"0: Forward shading (default)\n1: Deferred shading (Mobile HDR is required for Deferred)"
               );
  atexit(FUN_1427536c1);
  local_58 = 0;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f530,L"r.Mobile.AllowDeferredShadingOpenGL",&local_58,
                L"0: Do not Allow Deferred Shading on OpenGL (default)\n1: Allow Deferred Shading on OpenGL"
               );
  atexit(FUN_142753706);
  local_58 = 1;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f548,L"r.Mobile.AllowFramebufferFetchOpenGL",&local_58,
                L"0: Use multi-pass rendering without FBF and PLS extensions\n1: Allow use of framebuffer fetch and PLS extensions (default)"
               );
  atexit(FUN_14275374b);
  local_58 = 1;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f560,L"r.Mobile.EnableStaticAndCSMShadowReceivers",&local_58,
                L"0: Primitives can receive only static shadowing from stationary lights.\n1: Primitives can receive both CSM and static shadowing from stationary lights. (default)"
               );
  atexit(FUN_142753790);
  local_58 = 1;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f578,L"r.Mobile.EnableMovableLightCSMShaderCulling",&local_58,
                L"0: All primitives lit by movable directional light render with CSM.\n1: Primitives lit by movable directional light render with the CSM shader when determined to be within CSM range. (default)"
               );
  atexit(FUN_1427537d5);
  local_58 = 0;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f590,L"r.Mobile.UseCSMShaderBranch",&local_58,
                L"0: Use two shader permutations for CSM and non-CSM shading. (default)\n1: Use a single shader pemutation with a branch in a shader to apply CSM (only with r.AllowStaticLighting=0)"
               );
  atexit(FUN_14275381a);
  local_58 = 1;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f5a8,L"r.Mobile.AllowDistanceFieldShadows",&local_58,
                L"0: Do not generate shader permutations to render distance field shadows from stationary directional lights.\n1: Generate shader permutations to render distance field shadows from stationary directional lights. (default)"
               );
  atexit(FUN_14275385f);
  local_58 = 0;
  local_68 = 4;
  FUN_14078dbce(&DAT_14c83f5c0,L"r.Mobile.FloatPrecisionMode",&local_58,
                L"0: Use Half-precision (default)\n1: Half precision, except Full precision for material expressions\n2: Force use of high precision in pixel shaders.\n"
               );
  atexit(FUN_1427538a4);
  local_58 = 0;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f5d8,L"r.Mobile.AllowDitheredLODTransition",&local_58,
                L"Whether to support \'Dithered LOD Transition\' material option on mobile platforms"
               );
  atexit(FUN_1427538e9);
  local_58 = 1;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f5f0,L"r.Mobile.AllowPixelDepthOffset",&local_58,
                L"Whether to allow \'Pixel Depth Offset\' in materials for Mobile feature level. Depth modification in pixel shaders may reduce GPU performance"
               );
  atexit(FUN_14275392e);
  local_58 = 1;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f608,L"r.Mobile.AllowPerPixelShadingModels",&local_58,
                L"Whether to allow \'Per-Pixel Shader Models (From Material Expression)\' in materials for Mobile feature level."
               );
  atexit(FUN_142753973);
  local_58 = 0xffffffff;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f620,L"r.Mobile.ShadingModelsMask",&local_58,
                L"The mask that indicates which shading models are enabled on mobile platforms.");
  atexit(FUN_1427539b8);
  local_58 = 1;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f638,L"r.Mobile.Forward.EnableLocalLights",&local_58,
                L"0: Local Lights Disabled (default)\n1: Local Lights Enabled\n2: Local Lights Buffer Enabled\n"
               );
  atexit(FUN_1427539fd);
  local_58 = 1;
  local_68 = 0x404;
  FUN_14078dbce(&DAT_14c83f650,L"r.Mobile.Forward.RenderRectLightsAsSpotLights",&local_58,
                L"0: Rect Lights are rendered as area lights\n1: Rect Lights are rendered as Spot Lights (default)\n"
               );
  atexit(FUN_142753a42);
  local_58 = 0;
  local_68 = 0x404;
  FUN_14078dbce(&DAT_14c83f668,L"r.Mobile.Forward.EnableIESProfiles",&local_58,
                L"0: IES profiles disabled in mobile forward (default)\n1: IES profiles enabled in mobile forward \n"
               );
  atexit(FUN_142753a87);
  local_58 = 0;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f680,L"r.Mobile.Forward.EnableParticleLights",&local_58,
                L"0: Particle Lights Disabled (default)\n1: Particle Lights Enabled (requires local lights)\n"
               );
  atexit(FUN_142753acc);
  local_58 = 0;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f698,L"r.Mobile.Forward.EnableClusteredReflections",&local_58,
                L"Whether to enable clustered reflections on mobile forward, it\'s always supported on mobile deferred."
               );
  atexit(FUN_142753b11);
  local_58 = 1;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f6b0,L"r.Mobile.SupportGPUScene",&local_58,
                L"Whether to support GPU scene, required for auto-instancing (only Mobile feature level)"
               );
  atexit(FUN_142753b56);
  local_58 = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c83f6c8,L"r.ClearSceneMethod",&local_58,
                L"Select how the g-buffer is cleared in game mode (only affects deferred shading).\n 0: No clear\n 1: RHIClear (default)\n 2: Quad at max z"
               );
  atexit(FUN_142753b9b);
  local_58 = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83f6e0,L"r.LocalExposure",&local_58,L"Whether to support local exposure");
  atexit(FUN_142753be0);
  local_58 = 5;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83f6f8,L"r.BloomQuality",&local_58,
                L" 0: off, no performance impact.\n 1: average quality, least performance impact.\n 2: average quality, least performance impact.\n 3: good quality.\n 4: good quality.\n 5: Best quality, most significant performance impact. (default)\n>5: force experimental higher quality on mobile (can be quite slow on some hardware)"
               );
  atexit(FUN_142753c25);
  local_58 = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83f710,L"r.SceneColorFringeQuality",&local_58,
                L" 0: off but best for performance\n 1: 3 texture samples (default)");
  atexit(FUN_142753c6a);
  local_58 = 0x3f800000;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14c83f728,L"r.AmbientOcclusionRadiusScale",&local_58,
                L"Allows to scale the ambient occlusion radius (SSAO).\n 0:off, 1.0:normal, <1:smaller, >1:larger"
               );
  atexit(FUN_142753caf);
  local_58 = 0xbf800000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14c83f740,L"r.AmbientOcclusionStaticFraction",&local_58,
                L"Allows to override the Ambient Occlusion Static Fraction (see post process volume). Fractions are between 0 and 1.\n<0: use default setting (default -1)\n 0: no effect on static lighting, 0 is free meaning no extra rendering pass\n 1: AO affects the stat lighting"
               );
  atexit(FUN_142753cf4);
  local_58 = 5;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83f758,L"r.ShadowQuality",&local_58,
                L"Defines the shadow method which allows to adjust for quality or performance.\n 0:off, 1:low(unfiltered), 2:low .. 5:max (default)"
               );
  atexit(FUN_142753d39);
  local_58 = 4;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83f770,L"r.MotionBlurQuality",&local_58,
                L"Defines the motion blur method which allows to adjust for quality or performance.\n 0:off, 1:low, 2:medium, 3:high (default), 4: very high"
               );
  atexit(FUN_142753d7e);
  local_58 = 1;
  local_68 = 0x40;
  FUN_14078dbce(&DAT_14c83f788,L"r.FullScreenMode",&local_58,
                L"Defines how we do full screen when requested (e.g. command line option -fullscreen or in ini [SystemSettings] fullscreen=true)\n 0: normal full screen (renders faster, more control over vsync, less GPU memory, 10bit color if possible)\n 1: windowed full screen (quick switch between applications and window mode, slight performance loss)\n any other number behaves like 0"
               );
  atexit(FUN_142753dc3);
  local_58 = 4;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83f7a0,L"r.SceneColorFormat",&local_58,
                L"Defines the memory layout (RGBA) used for the scene color\n(affects performance, mostly through bandwidth, quality especially with translucency).\n 0: PF_B8G8R8A8 32Bit (mostly for testing, likely to unusable with HDR)\n 1: PF_A2B10G10R10 32Bit\n 2: PF_FloatR11G11B10 32Bit\n 3: PF_FloatRGB 32Bit\n 4: PF_FloatRGBA 64Bit (default, might be overkill, especially if translucency is mostly using SeparateTranslucency)\n 5: PF_A32B32G32R32F 128Bit (unreasonable but good for testing)"
               );
  atexit(FUN_142753e08);
  local_58 = 0;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83f7b8,L"r.Mobile.SceneColorFormat",&local_58,
                L"Overrides the memory layout (RGBA) used for the scene color of the mobile renderer.\nUnsupported overridden formats silently use default 0: (default) Automatically select the appropriate format depending on project settings and device support.\n 1: PF_FloatRGBA 64Bit \n 2: PF_FloatR11G11B10 32Bit\n 3: PF_B8G8R8A8 32Bit"
               );
  atexit(FUN_142753e4d);
  local_58 = 0;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83f7d0,L"r.PostProcessingColorFormat",&local_58,
                L"Defines the memory layout (RGBA) used for most of the post processing chain buffers.\n 0: Default\n 1: Force PF_A32B32G32R32F 128Bit (unreasonable but good for testing)"
               );
  atexit(FUN_142753e92);
  local_58 = 2;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83f7e8,L"r.DepthOfFieldQuality",&local_58,
                L"Allows to adjust the depth of field quality. Currently only fully affects BokehDOF. GaussianDOF is either 0 for off, otherwise on.\n 0: Off\n 1: Low\n 2: high quality (default, adaptive, can be 4x slower)\n 3: very high quality, intended for non realtime cutscenes, CircleDOF only (slow)\n 4: extremely high quality, intended for non realtime cutscenes, CircleDOF only (very slow)"
               );
  atexit(FUN_142753ed7);
  local_58 = local_58 & 0xffffff00;
  local_68 = 0x60;
  FUN_140bd5914(&DAT_14c83f800,L"r.gbx.DepthOfFieldCineOnly",&local_58,
                L"If true it allows only DOF in Cinematics.\n false: Always\n true: Cinematics only\n"
               );
  atexit(FUN_142753f1c);
  local_58 = local_58 & 0xffffff00;
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14c83f818,L"r.gbx.ForceDepthOfFieldDisable",&local_58,
                L"Overwrite depth of field quality without changing original value.\n false: Use r.DepthOfFieldQuality\n true: Force disable DOF\n"
               );
  atexit(FUN_142753f61);
  local_58 = 4;
  local_68 = 0;
  FUN_14078dbce(&DAT_14c83f830,L"r.HighResScreenshotDelay",&local_58,
                L"When high-res screenshots are requested there is a small delay to allow temporal effects to converge.\nDefault: 4. Using a value below the default will disable TemporalAA for improved image quality."
               );
  atexit(FUN_142753fa6);
  local_58 = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83f848,L"r.MaterialQualityLevel",&local_58,
                L"0 corresponds to low quality materials, as defined by quality switches in materials, 1 corresponds to high, 2 for medium, and 3 for Epic."
               );
  atexit(FUN_142753feb);
  local_58 = 0;
  local_68 = 4;
  FUN_14078dbce(&DAT_14c83f860,L"Compat.UseDXT5NormalMaps",&local_58,
                L"Whether to use DXT5 for normal maps, otherwise BC5 will be used, which is not supported on all hardware.\nBoth formats require the same amount of memory (if driver doesn\'t emulate the format).\nChanging this will cause normal maps to be recompressed on next load (or when using recompile shaders)\n 0: Use BC5 texture format (default)\n 1: Use DXT5 texture format (lower quality)"
               );
  atexit(FUN_142754030);
  local_58 = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83f878,L"r.ContactShadows",&local_58,L" 0: disabled.\n 1: enabled.\n");
  atexit(FUN_142754075);
  local_58 = 0;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14c83f890,L"r.ContactShadows.NonShadowCastingIntensity",&local_58,
                L"DEPRECATED. Please use the parameters on the Light Component directly instead.\n")
  ;
  atexit(FUN_1427540ba);
  local_58 = 1;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f8a8,L"r.AllowStaticLighting",&local_58,
                L"Whether to allow any static lighting to be generated and used, like lightmaps and shadowmaps.\nGames that only use dynamic lighting should set this to 0 to save some static lighting overhead."
               );
  atexit(FUN_1427540ff);
  local_58 = 0;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f8c0,L"r.AllowStaticLightingInWorldPartitionMaps",&local_58,
                L"Whether to allow any static lighting to be generated and used in WorldPartition maps, like lightmaps and shadowmaps.\nGames that only use dynamic lighting should set this to 0 to save some static lighting overhead."
               );
  atexit(FUN_142754144);
  local_58 = 0;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f8d8,L"r.AllowInkMap",&local_58,
                L"Whether to allow ink map feature. This enabled  the output of the r8 inkbuffer in the project"
               );
  atexit(FUN_142754189);
  local_58 = local_58 & 0xffffff00;
  local_68 = 0x24;
  FUN_140bd5914(&DAT_14c83f8f0,L"r.Gbx.ScreenSpaceDecals.Enabled",&local_58,
                L"If Screen Space decal feature is enabled");
  atexit(FUN_1427541ce);
  local_58 = 0;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f908,L"r.gbx.ProjectMaskedDigistructEnable",&local_58,
                L"Enables a convolution of a masked material and its digistruct CustomMask at the cost rendering those objects into a secondary depth buffer\nWhen disabled masked materials will render black pixels in place of their masked out portions"
               );
  atexit(FUN_142754213);
  local_58 = 0;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f920,L"r.gbx.ProjectTranslucencyDigistructEnable",&local_58,
                L"Enables a convolution of a translucenct material and its digistruct CustomMask at the cost rendering those objects into a secondary depth buffer\nWhen disabled translucenct materials will not participate in digistruct effects"
               );
  atexit(FUN_142754258);
  local_58 = 0;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f938,L"r.gbx.ProjectAllowGbxForegroundDepth",&local_58,
                L"Enables gbx foreground tech project feature, which uses secondary depth buffers for foreground composition"
               );
  atexit(FUN_14275429d);
  local_58 = 0;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83f950,L"r.gbx.ProjectOverrideForegroundAsBackgroundDepth",&local_58,
                L"Overrides the foreground depth into functioning as a background depth instead");
  atexit(FUN_1427542e2);
  local_58 = 0;
  local_68 = 0;
  FUN_14078dbce(&DAT_14c83f968,L"r.NormalMapsForStaticLighting",&local_58,
                L"Whether to allow any static lighting to use normal maps for lighting computations."
               );
  atexit(FUN_142754327);
  local_58 = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c83f980,L"r.NumBufferedOcclusionQueries",&local_58,
                L"Number of frames to buffer occlusion queries (including the current renderthread frame).\nMore frames reduces the chance of stalling the CPU waiting for results, but increases out of date query artifacts."
               );
  atexit(FUN_14275436c);
  local_58 = 0;
  local_68 = 0;
  FUN_14078dbce(&DAT_14c83f998,L"con.MinLogVerbosity",&local_58,
                L"Allows to see the log in the in game console (by default deactivated to avoid spam and minor performance loss).\n 0: no logging other than console response (default)\n 1: Only fatal errors (no that useful)\n 2: additionally errors\n 3: additionally warnings\n 4: additionally display\n 5: additionally log\n..\n>=7: all"
               );
  atexit(FUN_1427543b1);
  local_58 = 4;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83f9b0,L"r.MSAA.CompositingSampleCount",&local_58,
                L"Affects the render quality of the editor 3d objects.\n 1: no MSAA, lowest quality\n 2: 2x MSAA, medium quality (medium GPU memory consumption)\n 4: 4x MSAA, high quality (high GPU memory consumption)\n 8: 8x MSAA, very high quality (insane GPU memory consumption)"
               );
  atexit(FUN_1427543f6);
  local_58 = 0x3ca3d70a;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14c83f9c8,L"net.PackageMap.LongLoadThreshhold",&local_58,
                L"Threshhold time in seconds for printing long load warnings in object serialization"
               );
  atexit(FUN_14275443b);
  local_58 = 0;
  local_68 = 0;
  FUN_14078dbce(&DAT_14c83f9e0,L"net.PackageMap.DebugAll",&local_58,
                L"Debugs PackageMap serialization of all objects");
  atexit(FUN_142754480);
  FUN_140056680(&local_58,&DAT_149dfb77a);
  local_68 = 0;
  FUN_140f510cc(&DAT_14c83f9f8,L"net.PackageMap.DebugObject",&local_58,
                L"Debugs PackageMap serialization of objectPartial name of object to debug");
  if (CONCAT44(uStack_54,local_58) != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_1427544c5);
  local_58 = 0;
  local_68 = 1;
  FUN_14078dbce(&DAT_14c83fa10,L"net.Montage.Debug",&local_58,
                L"Prints Replication information about AnimMontages\n 0: no print.\n 1: Print AnimMontage info on client side as they are played."
               );
  atexit(FUN_14275450a);
  local_58 = 400;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83fa28,L"r.RenderTargetPoolMin",&local_58,
                L"If the render target pool size (in MB) is below this number there is no deallocation of rendertargetsDefault is 200 MB."
               );
  atexit(FUN_14275454f);
  local_58 = 0;
  local_68 = 1;
  FUN_14078dbce(&DAT_14c83fa40,L"t.IdleWhenNotForeground",&local_58,
                L"Prevents the engine from taking any CPU or GPU time while not the foreground app."
               );
  atexit(FUN_142754594);
  local_58 = 0;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83fa58,L"r.VSync",&local_58,
                L"0: VSync is disabled.(default)\n1: VSync is enabled.");
  atexit(FUN_1427545d9);
  local_58 = 0;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83fa70,L"r.FinishCurrentFrame",&local_58,
                L"If on, the current frame will be forced to finish and render to the screen instead of being buffered.  This will improve latency, but slow down overall performance."
               );
  atexit(FUN_14275461e);
  local_58 = 4;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83fa88,L"r.MaxAnisotropy",&local_58,
                L"MaxAnisotropy should range from 1 to 16. Higher values mean better texure quality when using anisotropic filtering but at a cost to performance. Default is 4."
               );
  atexit(FUN_142754663);
  local_58 = 0x800;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83faa0,L"r.Shadow.MaxResolution",&local_58,
                L"Max square dimensions (in texels) allowed for rendering shadow depths. Range 4 to hardware limit. Higher = better quality shadows but at a performance cost."
               );
  atexit(FUN_1427546a8);
  local_58 = 0x800;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83fab8,L"r.Shadow.MaxCSMResolution",&local_58,
                L"Max square dimensions (in texels) allowed for rendering Cascaded Shadow depths. Range 4 to hardware limit. Higher = better quality shadows but at a performance cost."
               );
  atexit(FUN_1427546ed);
  local_58 = 0x3f800000;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14c83fad0,L"r.Shadow.CSM.TransitionScale",&local_58,
                L"Allows to scale the cascaded shadow map transition region. Clamped within 0..2.\n0: no transition (fastest)\n1: as specific in the light settings (default)\n2: 2x larger than what was specified in the light"
               );
  atexit(FUN_142754732);
  local_58 = 0x3f800000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14c83fae8,L"r.MobileContentScaleFactor",&local_58,
                L"Content scale multiplier (equates to iOS\'s contentScaleFactor to support Retina displays"
               );
  atexit(FUN_142754777);
  local_58 = 0;
  local_68 = 0;
  FUN_14078dbce(&DAT_14c83fb00,L"r.Mobile.DesiredResX",&local_58,
                L"Desired mobile X resolution (longest axis) (non-zero == use for X, calculate Y to retain aspect ratio)"
               );
  atexit(FUN_1427547bc);
  local_58 = 0;
  local_68 = 0;
  FUN_14078dbce(&DAT_14c83fb18,L"r.Mobile.DesiredResY",&local_58,
                L"Desired mobile Y resolution (shortest axis) (non-zero == use for Y, calculate X to retain aspect ratio)"
               );
  atexit(FUN_142754801);
  local_58 = 2;
  local_68 = 4;
  FUN_14078dbce(&DAT_14c83fb30,L"r.MaterialEditor.LWCTruncateMode",&local_58,
                L"Whether or not the material compiler respects the truncate LWC node or automatic transforms.\n0: no truncate (LWC always used even if asked to truncate)\n1: respect the truncate LWC node\n2: respect the truncate LWC node and automatic transforms"
               );
  atexit(FUN_142754846);
  local_58 = 1;
  local_68 = 4;
  FUN_14078dbce(&DAT_14c83fb48,L"r.CompileShadersForDevelopment",&local_58,
                L"Setting this to 0 allows to ship a game with more optimized shaders as some\neditor and development features are not longer compiled into the shaders.\n Note: This should be done when shipping but it\'s not done automatically yet (feature need to mature\n       and shaders will compile slower as shader caching from development isn\'t shared).\nCannot be changed at runtime - can be put into BaseEngine.ini\n 0: off, shader can run a bit faster\n 1: on (Default)"
               );
  atexit(FUN_14275488b);
  local_58 = 0;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83fb60,L"r.DontLimitOnBattery",&local_58,
                L"0: Limit performance on devices with a battery.(default)\n1: Do not limit performance due to device having a battery."
               );
  atexit(FUN_1427548d0);
  local_58 = 0x3f800000;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14c83fb78,L"r.ViewDistanceScale",&local_58,
                L"Controls the view distance scale. A primitive\'s MaxDrawDistance is scaled by this value.\nHigher values will increase view distance but at a performance cost.\nDefault = 1."
               );
  atexit(FUN_142754915);
  local_58 = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c83fb90,L"r.ViewDistanceScale.ApplySecondaryScale",&local_58,
                L"If true applies the secondary view distance scale to primitive draw distances.\nDefault = 0."
               );
  atexit(FUN_14275495a);
  local_58 = 0x3f800000;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14c83fba8,L"r.ViewDistanceScale.SecondaryScale",&local_58,
                L"Controls the secondary view distance scale, Default = 1.0.\nThis is an optional scale intended to allow some features or gamemodes to opt-in.\n"
               );
  atexit(FUN_14275499f);
  local_58 = 0x42340000;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14c83fbc0,L"r.ViewDistanceScale.FieldOfViewMinAngle",&local_58,
                L"Scales the scene view distance scale with camera field of view.\nMinimum angle of the blend range.\nApplies the minimum scale when the camera is at or below this angle."
               );
  atexit(FUN_1427549e4);
  local_58 = 0x3f800000;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14c83fbd8,L"r.ViewDistanceScale.FieldOfViewMinAngleScale",&local_58,
                L"Scales the scene view distance scale with camera field of view.\nThis value is applied when the camera is at or below the minimum angle."
               );
  atexit(FUN_142754a29);
  local_58 = 0x42b40000;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14c83fbf0,L"r.ViewDistanceScale.FieldOfViewMaxAngle",&local_58,
                L"Scales the scene view distance scale with camera field of view.\nMaximum angle of the blend range.\nApplies the maximum scale when the camera is at or above this angle."
               );
  atexit(FUN_142754a6e);
  local_58 = 0x3f800000;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14c83fc08,L"r.ViewDistanceScale.FieldOfViewMaxAngleScale",&local_58,
                L"Scales the scene view distance scale with camera field of view.\nThis value is applied when the camera is at or above the maximum angle."
               );
  atexit(FUN_142754ab3);
  local_58 = 0;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83fc20,L"r.ViewDistanceScale.FieldOfViewAffectsHLOD",&local_58,
                L"If enabled, applies the field of view scaling to HLOD draw distances as well as non-HLODs."
               );
  atexit(FUN_142754af8);
  local_58 = 0x3f800000;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14c83fc38,L"r.ViewDistanceScale.SkeletalMeshOverlay",&local_58,
                L"Controls the distance scale for skeletal mesh overlay, Default = 1.0. \nHigher values will increase skeletal mesh overlay draw distance. This value is applied together with r.ViewDistanceScale"
               );
  atexit(FUN_142754b3d);
  local_58 = 2;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83fc50,L"r.LightFunctionQuality",&local_58,
                L"Defines the light function quality which allows to adjust for quality or performance.\n<=0: off (fastest)\n  1: low quality (e.g. half res with blurring, not yet implemented)\n  2: normal quality (default)\n  3: high quality (e.g. super-sampled or colored, not yet implemented)"
               );
  atexit(FUN_142754b82);
  local_58 = 2;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83fc68,L"r.EyeAdaptationQuality",&local_58,
                L"Defines the eye adaptation quality which allows to adjust for quality or performance.\n<=0: off (fastest)\n  1: low quality (e.g. non histogram based, not yet implemented)\n  2: normal quality (default)\n  3: high quality (e.g. screen position localized, not yet implemented)"
               );
  atexit(FUN_142754bc7);
  local_58 = 0x3f800000;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14c83fc80,L"r.Shadow.DistanceScale",&local_58,
                L"Scalability option to trade shadow distance versus performance for directional lights (clamped within a reasonable range).\n<1: shorter distance\n 1: normal (default)\n>1: larger distance"
               );
  atexit(FUN_142754c0c);
  local_58 = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c83fc98,L"r.FreeSkeletalMeshBuffers",&local_58,
                L"Controls whether skeletal mesh buffers are kept in CPU memory to support merging of skeletal meshes.\n0: Keep buffers(default)\n1: Free buffers"
               );
  atexit(FUN_142754c51);
  local_58 = 3;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83fcb0,L"r.DetailMode",&local_58,
                L"Current detail mode; determines whether components of actors should be updated/ ticked.\n 0: low, show objects with DetailMode low\n 1: medium, show objects with DetailMode medium or below\n 2: high, show objects with DetailMode high or below\n 3: epic, show all objects (default)"
               );
  atexit(FUN_142754c96);
  local_58 = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c83fcc8,L"r.CookOutUnusedDetailModeComponents",&local_58,
                L"If set, components which are not relevant for the current detail mode will be cooked out.\n 0: keep components even if not relevant for the current detail mode.\n 1: cook out components not relevant for the current detail mode.\n"
               );
  atexit(FUN_142754cdb);
  local_58 = 1;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83fce0,L"r.DBuffer",&local_58,
                L"Enables DBuffer decal material blend modes.\nDBuffer decals are rendered before the base pass, allowing them to affect static lighting and skylighting correctly. \nWhen enabled, a full prepass will be forced which adds CPU / GPU cost.  Several texture lookups will be done in the base pass to fetch the decal properties, which adds pixel work.\n 0: off\n 1: on (default)"
               );
  atexit(FUN_142754d20);
  local_58 = 0;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83fcf8,L"r.Mobile.DBuffer",&local_58,
                L"Enables DBuffer decal material blend modes when using the mobile forward renderer.\nDBuffer decals are rendered before the base pass, allowing them to affect static lighting and skylighting correctly. \nWhen enabled, a full prepass will be forced which adds CPU / GPU cost.  Several texture lookups will be done in the base pass to fetch the decal properties, which adds pixel work.\n 0: off (default)\n 1: on"
               );
  atexit(FUN_142754d65);
  local_58 = 1;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83fd10,L"r.Mobile.Forward.DecalLighting",&local_58,
                L"Enables lit decals when using the mobile forward renderer without DBuffer.\n 0: off\n 1: on, lighting channel 1 is used for decal lighting\n 2: on, lighting channel 2 is used for decal lighting\n 3: on, lighting channel 3 is used for decal lighting"
               );
  atexit(FUN_142754daa);
  local_58 = 0x3f800000;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14c83fd28,L"r.SkeletalMeshLODRadiusScale",&local_58,
                L"Scale factor for the screen radius used in computing discrete LOD for skeletal meshes. (0.25-1)"
               );
  atexit(FUN_142754def);
  local_58 = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c83fd40,L"r.PreTileTextures",&local_58,
                L"If set to 1, textures will be tiled during cook and are expected to be cooked at runtime"
               );
  atexit(FUN_142754e34);
  local_58 = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c83fd58,L"r.VirtualTextureReducedMemory",&local_58,
                L"If set to 1, the cost of virtual textures will be reduced by using a more packed layout."
               );
  atexit(FUN_142754e79);
  local_58 = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c83fd70,L"r.PrecomputedVisibilityWarning",&local_58,
                L"If set to 1, a warning will be displayed when rendering a scene from a view point without precomputed visibility."
               );
  atexit(FUN_142754ebe);
  local_58 = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c83fd88,L"r.DemotedLocalMemoryWarning",&local_58,
                L"If set to 1, a warning will be displayed when local memory has been demoted to system memory."
               );
  atexit(FUN_142754f03);
  local_58 = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c83fda0,L"r.FeatureLevelPreview",&local_58,
                L"If 1 the quick settings menu will contain an option to enable feature level preview modes"
               );
  atexit(FUN_142754f48);
  local_58 = 1;
  local_68 = 4;
  FUN_14078dbce(&DAT_14c83fdb8,L"n.VerifyPeer",&local_58,
                L"Sets libcurl\'s CURLOPT_SSL_VERIFYPEER option to verify authenticity of the peer\'s certificate.\n  0 = disable (allows self-signed certificates)\n  1 = enable [default]"
               );
  atexit(FUN_142754f8d);
  local_58 = 0x3f800000;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14c83fdd0,L"r.EmitterSpawnRateScale",&local_58,
                L"A global scale upon the spawn rate of emitters. Emitters can choose to apply or ignore it via their bApplyGlobalSpawnRateScale property."
               );
  atexit(FUN_142754fd2);
  local_58 = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c83fde8,L"r.CheckSRVTransitions",&local_58,
                L"Tests that render targets are properly transitioned to SRV when SRVs are set.");
  atexit(FUN_142755017);
  local_58 = 0;
  local_68 = 4;
  FUN_14078dbce(&DAT_14c83fe00,L"r.AndroidDisableThreadedRendering",&local_58,
                L"Sets whether or not to allow threaded rendering for a particular Android device profile.\n\t0 = Allow threaded rendering [default]\n\t1 = Disable creation of render thread on startup"
               );
  atexit(FUN_14275505c);
  local_58 = 0;
  local_68 = 4;
  FUN_14078dbce(&DAT_14c83fe18,L"r.AndroidDisableThreadedRenderingFirstLoad",&local_58,
                L"Sets whether or not to allow threaded rendering for a particular Android device profile on the initial load.\n\t0 = Allow threaded rendering on the initial load [default]\n\t1 = Disable threaded rendering on the initial load"
               );
  atexit(FUN_1427550a1);
  local_58 = 0;
  local_68 = 4;
  FUN_14078dbce(&DAT_14c83fe30,L"r.Android.DisableVulkanSupport",&local_58,
                L"Disable support for vulkan API. (Android Only)\n  0 = vulkan API will be used (providing device and project supports it) [default]\n  1 = vulkan will be disabled, opengl fall back will be used."
               );
  atexit(FUN_1427550e6);
  local_58 = 0;
  local_68 = 4;
  FUN_14078dbce(&DAT_14c83fe48,L"r.Android.DisableVulkanSM5Support",&local_58,
                L"Disable support for vulkan API. (Android Only)\n  0 = Vulkan SM5 API will be used (providing device and project supports it) [default]\n  1 = Vulkan SM5 will be disabled, Vulkan or OpenGL fall back will be used."
               );
  atexit(FUN_14275512b);
  local_58 = 0;
  local_68 = 4;
  FUN_14078dbce(&DAT_14c83fe60,L"r.Android.DisableOpenGLES31Support",&local_58,
                L"Disable support for OpenGLES 3.1 API. (Android Only)\n  0 = OpenGLES 3.1 API will be used (providing device and project supports it) [default]\n  1 = OpenGLES 3.1 will be disabled, Vulkan will be used."
               );
  atexit(FUN_142755170);
  local_58 = 0;
  local_68 = 4;
  FUN_14078dbce(&DAT_14c83fe78,L"r.Android.DisableASTCSupport",&local_58,
                L"Disable support for ASTC Texture compression if OpenGL driver supports it. (Android Only)\n  0 = ASTC texture compression will be used if driver supports it [default]\n  1 = ASTC texture compression will not be used."
               );
  atexit(FUN_1427551b5);
  local_58 = 0;
  local_68 = 4;
  FUN_14078dbce(&DAT_14c83fe90,L"r.OpenGL.DisableTextureStreamingSupport",&local_58,
                L"Disable support for texture streaming on OpenGL.\n  0 = Texture streaming will be used if device supports it [default]\n  1 = Texture streaming will be disabled."
               );
  atexit(FUN_1427551fa);
  local_58 = 0;
  local_68 = 4;
  FUN_14078dbce(&DAT_14c83fea8,L"r.Android.OverrideExternalTextureSupport",&local_58,
                L"Override external texture support for OpenGLES API. (Android Only)\n  0 = normal detection used [default]\n  1 = disable external texture support\n  2 = force ImageExternal100 (version #100 with GL_OES_EGL_image_external)\n  3 = force ImageExternal300 (version #300 with GL_OES_EGL_image_external)\n  4 = force ImageExternalESSL300 (version #300 with GL_OES_EGL_image_external_essl3)"
               );
  atexit(FUN_14275523f);
  FUN_140056680(&local_58,&DAT_149dfb77a);
  local_68 = 0;
  FUN_140f510cc(&DAT_14c83fec0,L"r.CustomUnsafeZones",&local_58,
                L"Allows you to set custom unsafe zones. Define them based on Portrait (P) or Landscape (L) for a device oriented \'upright\'.Unsafe zones may be either fixed or free, depending on if they move along with the rotation of the device.Format is (P:fixed[x1, y1][width, height]), semicolon-separated for each custom unsafe zone. +Values add from 0, -Values subtract from Height or Width"
               );
  if (CONCAT44(uStack_54,local_58) != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_142755284);
  local_58 = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c83fed8,L"r.SkyLightingQuality",&local_58,
                L"Defines the sky lighting quality which allows to adjust for performance.\n<=0: off (fastest)\n  1: on\n"
               );
  atexit(FUN_1427552c9);
  local_58 = 1;
  local_68 = 0x120;
  FUN_14078dbce(&DAT_14c83fef0,L"r.Mobile.AntiAliasing",&local_58,
                L"Mobile default AntiAliasingMethod\n 0: off (no anti-aliasing)\n 1: FXAA (default, faster than TemporalAA but much more shimmering for non static cases)\n 2: TemporalAA(it will fallback to FXAA if SupportsGen4TAA is disabled) \n 3: MSAA"
               );
  atexit(FUN_14275530e);
  local_58 = 1;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83ff08,L"r.Mobile.SupportsGen4TAA",&local_58,
                L"Support desktop Gen4 TAA with mobile rendering\n0: Fallback to FXAA1: Support Desktop Gen4 TAA (default)"
               );
  atexit(FUN_142755353);
  local_58 = 0;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14c83ff20,L"r.LegacyLuminanceFactors",&local_58,
                L"Default luminance factors:\n0: Working color space coefficients (default)\n1: Legacy coefficients (inaccurate). Activate to retain the 5.4 and earlier versions behavior.\n"
               );
  atexit(FUN_142755398);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142758606 FUN_142758606 body=71 status=ok
// SIG undefined FUN_142758606(void)

void FUN_142758606(undefined8 param_1,ulonglong param_2,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  
  uVar2 = (uint)(0xf < param_2) * 8 + 8;
  if (uVar2 < param_3) {
    uVar2 = param_3;
  }
  pvVar1 = _aligned_malloc(param_2,(ulonglong)uVar2);
  if ((param_2 != 0) && (pvVar1 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1467b7838(param_2,param_3);
  }
  return;
}



// FUNCTION 142758674 FUN_142758674 body=80 status=ok
// SIG undefined FUN_142758674(void)

void FUN_142758674(undefined8 param_1,undefined8 param_2,ulonglong param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = (uint)(0xf < param_3) * 8 + 8;
  if (uVar2 < param_4) {
    uVar2 = param_4;
  }
  lVar1 = FUN_1467c1d31(param_2,param_3,uVar2);
  if (param_3 == 0 || lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1467b7838(param_3,param_4);
}



// FUNCTION 1427586c9 FUN_1427586c9 body=69 status=ok
// SIG undefined FUN_1427586c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427586c9(void)

{
  _DAT_14c8407b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275870b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c8407c0,1);
  return;
}



// FUNCTION 14275870e FUN_14275870e body=69 status=ok
// SIG undefined FUN_14275870e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275870e(void)

{
  _DAT_14c8407c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142758750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c8407d0,1);
  return;
}



// FUNCTION 142758754 FUN_142758754 body=311 status=ok
// SIG undefined FUN_142758754(void)

undefined2 * FUN_142758754(longlong *param_1,longlong param_2,ushort param_3,undefined1 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14c840848;
  uVar5 = (ulonglong)DAT_14c840848;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 0x38);
  EnterCriticalSection(lpCriticalSection);
  puVar2 = (ushort *)
           FUN_142750fbc(param_2 + 0xd38,uVar5,0x4000000,param_2 + 0xd38,
                         (ulonglong)*(uint *)(param_2 + 0x1540) * 0x10 + param_2 + 0xd38,
                         param_2 + 0x1540,param_2 + 0x1538,0);
  LeaveCriticalSection(lpCriticalSection);
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = param_3;
    *(undefined1 *)(puVar2 + 1) = param_4;
    *(undefined1 *)((longlong)puVar2 + 3) = 0xe3;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    lVar4 = 0;
    *(uint *)(puVar2 + 2) =
         uVar1 / param_3 - (uint)(uVar5 < (ulonglong)((uint)param_3 * (uVar1 / param_3)) + 0x10);
    EnterCriticalSection(lpCriticalSection);
    puVar3 = (undefined2 *)FUN_144a7a9ee(param_2,puVar2,0xf317,0);
    if (*param_1 != 0) {
      *(undefined2 **)(*param_1 + 0x18) = puVar3 + 8;
      lVar4 = *param_1;
    }
    *(longlong *)(puVar3 + 8) = lVar4;
    *(longlong **)(puVar3 + 0xc) = param_1;
    *param_1 = (longlong)puVar3;
    *puVar3 = 0;
    *(ushort **)(puVar3 + 4) = puVar2;
    LeaveCriticalSection(lpCriticalSection);
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1467b7838(uVar5,0);
}



// FUNCTION 14275888c FUN_14275888c body=824 status=ok
// SIG undefined FUN_14275888c(void)

void FUN_14275888c(longlong param_1,longlong *param_2,undefined2 param_3,uint param_4)

{
  short sVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  LPVOID lpAddress;
  uint uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  short *psVar13;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + (ulonglong)param_4 * 0x40 + 0x90);
  EnterCriticalSection(lpCriticalSection);
  if (param_2 != (longlong *)0x0) {
    plVar11 = (longlong *)((ulonglong)param_4 * 0x40 + param_1 + 0x78);
    do {
      plVar2 = (longlong *)param_2[1];
      do {
        uVar10 = (longlong)param_2 - *(longlong *)(param_1 + 0x28);
        plVar3 = (longlong *)*param_2;
        uVar12 = uVar10 >> (*(byte *)(param_1 + 0x10) & 0x3f);
        puVar6 = (ulonglong *)
                 ((ulonglong)(*(int *)(param_1 + 0x20) - 1U & (uint)uVar12) * 0x20 +
                 *(longlong *)(param_1 + 0x68));
        puVar8 = puVar6;
        do {
          if (*puVar8 == uVar12) {
            psVar13 = (short *)((ulonglong)
                                (*(uint *)(param_1 + 0x18) &
                                (uint)(uVar10 >> (*(byte *)(param_1 + 8) & 0x3f))) * 0x20 +
                               puVar8[1]);
            if (psVar13 != (short *)0x0) goto LAB_142758970;
            break;
          }
          puVar8 = (ulonglong *)puVar8[3];
        } while (puVar8 != puVar6);
        FUN_140033559(".\\Runtime/Core/Private/HAL/MallocBinned2.cpp",0x111,
                      L"FMallocBinned2 Attempt to free an unrecognized small block %p",param_2);
        psVar13 = (short *)0x0;
LAB_142758970:
        if (psVar13[1] != -0xce9) {
          FUN_140033559(".\\Runtime/Core/Private/HAL/MallocBinned2.cpp",0x90,
                        L"MallocBinned2 Corruption Canary was 0x%x, should be 0x%x",psVar13[1],
                        0xf317);
        }
        if (*(longlong *)(psVar13 + 4) == 0) {
          puVar4 = *(undefined8 **)(psVar13 + 0xc);
          if (*(longlong *)(psVar13 + 8) == 0) {
            uVar9 = 0;
          }
          else {
            *(undefined8 **)(*(longlong *)(psVar13 + 8) + 0x18) = puVar4;
            uVar9 = *(undefined8 *)(psVar13 + 8);
          }
          *puVar4 = uVar9;
          if (*plVar11 == 0) {
            lVar7 = 0;
          }
          else {
            *(short **)(*plVar11 + 0x18) = psVar13 + 8;
            lVar7 = *plVar11;
          }
          *(longlong *)(psVar13 + 8) = lVar7;
          *(longlong **)(psVar13 + 0xc) = plVar11;
          *plVar11 = (longlong)psVar13;
        }
        *(undefined4 *)((longlong)param_2 + 4) = 1;
        param_2[1] = *(longlong *)(psVar13 + 4);
        *(undefined2 *)param_2 = param_3;
        *(undefined1 *)((longlong)param_2 + 3) = 0xe3;
        *(char *)((longlong)param_2 + 2) = (char)param_4;
        *(longlong **)(psVar13 + 4) = param_2;
        *psVar13 = *psVar13 + -1;
        if (*psVar13 == 0) {
          sVar1 = psVar13[1];
          if ((sVar1 != 0x17ea) && (sVar1 != -0xce9)) {
            FUN_140033559(".\\Runtime/Core/Private/HAL/MallocBinned2.cpp",0xa0,
                          L"MallocBinned2 Corruption Canary was 0x%x, will be 0x%x because this block should be preexisting and in use."
                          ,sVar1,0x3941);
          }
          psVar13[1] = 0x3941;
          puVar4 = *(undefined8 **)(psVar13 + 0xc);
          if (*(longlong *)(psVar13 + 8) == 0) {
            uVar9 = 0;
          }
          else {
            *(undefined8 **)(*(longlong *)(psVar13 + 8) + 0x18) = puVar4;
            uVar9 = *(undefined8 *)(psVar13 + 8);
          }
          *puVar4 = uVar9;
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
          uVar10 = (ulonglong)DAT_14c840848;
          if (uVar10 < 0x1000001) {
            uVar5 = *(uint *)(param_1 + 0x1540);
            if (uVar5 == 0) {
              uVar12 = 0;
            }
            else {
              do {
                if ((uVar5 < 0x40) && (*(longlong *)(param_1 + 0x1538) + uVar10 < 0x4000001)) {
                  uVar12 = (ulonglong)uVar5;
                  break;
                }
                lpAddress = *(LPVOID *)(param_1 + 0xd38);
                *(longlong *)(param_1 + 0x1538) =
                     *(longlong *)(param_1 + 0x1538) - *(longlong *)(param_1 + 0xd40);
                uVar5 = uVar5 - 1;
                *(uint *)(param_1 + 0x1540) = uVar5;
                if (uVar5 != 0) {
                  memmove((void *)(param_1 + 0xd38),(void *)(param_1 + 0xd48),(ulonglong)uVar5 << 4)
                  ;
                }
                uVar12 = 0;
                VirtualFree(lpAddress,0,0x8000);
                uVar5 = *(uint *)(param_1 + 0x1540);
              } while (uVar5 != 0);
            }
            *(LPVOID *)(param_1 + 0xd38 + uVar12 * 0x10) =
                 (LPVOID)((ulonglong)param_2 & 0xffffffffffff0000);
            *(ulonglong *)(param_1 + 0xd40 + uVar12 * 0x10) = uVar10;
            *(longlong *)(param_1 + 0x1538) = *(longlong *)(param_1 + 0x1538) + uVar10;
            *(int *)(param_1 + 0x1540) = *(int *)(param_1 + 0x1540) + 1;
          }
          else {
            VirtualFree((LPVOID)((ulonglong)param_2 & 0xffffffffffff0000),0,0x8000);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
        }
        param_2 = plVar3;
      } while (plVar3 != (longlong *)0x0);
      param_2 = plVar2;
    } while (plVar2 != (longlong *)0x0);
  }
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142758bab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 142758bc4 FUN_142758bc4 body=69 status=ok
// SIG undefined FUN_142758bc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142758bc4(void)

{
  _DAT_14c841d48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142758c06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c841d50,1);
  return;
}



// FUNCTION 142758c09 FUN_142758c09 body=69 status=ok
// SIG undefined FUN_142758c09(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142758c09(void)

{
  _DAT_14c841d58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142758c4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c841d60,1);
  return;
}



// FUNCTION 142758c4e FUN_142758c4e body=69 status=ok
// SIG undefined FUN_142758c4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142758c4e(void)

{
  _DAT_14c841d68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142758c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c841d70,1);
  return;
}



// FUNCTION 142758c93 FUN_142758c93 body=69 status=ok
// SIG undefined FUN_142758c93(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142758c93(void)

{
  _DAT_14c841d78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142758cd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c841d80,1);
  return;
}



// FUNCTION 142758cd8 FUN_142758cd8 body=98 status=ok
// SIG undefined FUN_142758cd8(void)

void FUN_142758cd8(short *param_1)

{
  if ((((char)param_1[1] != -0x5c) || (0x32 < *(byte *)((longlong)param_1 + 3))) ||
     (*(short *)((longlong)&DAT_14c841d90 +
                (ulonglong)((0x32 - (uint)*(byte *)((longlong)param_1 + 3)) * 2)) != *param_1)) {
    FUN_140033559(".\\Runtime/Core/Private/HAL/MallocLongLived.cpp",0x375,
                  L"FMallocLongLived Attempt to realloc an unrecognized block %p   canary == 0x%x != 0x%x"
                  ,param_1,(char)param_1[1],0xa4);
  }
  return;
}



// FUNCTION 142758d3a FUN_142758d3a body=106 status=ok
// SIG undefined FUN_142758d3a(void)

void FUN_142758d3a(undefined8 *param_1,LPVOID param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  param_1 = (undefined8 *)*param_1;
  while( true ) {
    if (param_1 == (undefined8 *)0x0) {
      return;
    }
    puVar2 = (ulonglong *)param_1[2];
    if (((LPVOID)puVar2[1] <= param_2) && (param_2 < (LPVOID)puVar2[2])) break;
    param_1 = (undefined8 *)*param_1;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *puVar2;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)param_2 - (longlong)puVar2[1];
  pbVar1 = (byte *)(puVar2[4] + (SUB168(auVar4 / auVar3,0) >> 3));
  *pbVar1 = *pbVar1 | '\x01' << (SUB161(auVar4 / auVar3,0) & 7);
  puVar2[6] = puVar2[6] + 1;
  puVar2[7] = puVar2[7] - 0x10000;
                    /* WARNING: Could not recover jumptable at 0x000142758d9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VirtualFree(param_2,*puVar2,0x4000);
  return;
}



// FUNCTION 142758da4 FUN_142758da4 body=69 status=ok
// SIG undefined FUN_142758da4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142758da4(void)

{
  _DAT_14c842608 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142758de6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c842610,1);
  return;
}


