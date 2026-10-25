// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148fa4306 FUN_148fa4306 body=93 status=ok
// SIG undefined FUN_148fa4306(void)

void FUN_148fa4306(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f190;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa4364 FUN_148fa4364 body=126 status=ok
// SIG undefined FUN_148fa4364(void)

void FUN_148fa4364(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3f190;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa43d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa43e2 FUN_148fa43e2 body=46 status=ok
// SIG undefined FUN_148fa43e2(void)

void FUN_148fa43e2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa4410 FUN_148fa4410 body=48 status=ok
// SIG undefined FUN_148fa4410(void)

undefined8 FUN_148fa4410(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return 1;
}



// FUNCTION 148fa4440 FUN_148fa4440 body=38 status=ok
// SIG undefined FUN_148fa4440(void)

undefined8 FUN_148fa4440(undefined8 param_1,int param_2)

{
  FUN_1459a6a28();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa4466 FUN_148fa4466 body=38 status=ok
// SIG undefined FUN_148fa4466(void)

undefined8 FUN_148fa4466(undefined8 param_1,int param_2)

{
  FUN_1459a6a28();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa448c FUN_148fa448c body=60 status=ok
// SIG undefined FUN_148fa448c(void)

void FUN_148fa448c(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,(int)param_1[1],param_1 + 2,(int)param_1[4]);
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa44c8 FUN_148fa44c8 body=64 status=ok
// SIG undefined FUN_148fa44c8(void)

longlong FUN_148fa44c8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x30,8);
  *param_2 = lVar1;
  FUN_148fa450e(lVar1,param_1 + 8);
  return lVar1 + 8;
}



// FUNCTION 148fa450e FUN_148fa450e body=128 status=ok
// SIG undefined FUN_148fa450e(void)

undefined8 * FUN_148fa450e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14ba3f2f0;
  param_1[1] = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 1);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 148fa458e FUN_148fa458e body=31 status=ok
// SIG undefined FUN_148fa458e(void)

undefined8 FUN_148fa458e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa45c2 FUN_148fa45c2 body=93 status=ok
// SIG undefined FUN_148fa45c2(void)

void FUN_148fa45c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3f060;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f310;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa4620 FUN_148fa4620 body=126 status=ok
// SIG undefined FUN_148fa4620(void)

void FUN_148fa4620(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba3f060;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3f310;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa468f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa469e FUN_148fa469e body=46 status=ok
// SIG undefined FUN_148fa469e(void)

void FUN_148fa469e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa46cc FUN_148fa46cc body=48 status=ok
// SIG undefined FUN_148fa46cc(void)

undefined8 FUN_148fa46cc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return 1;
}



// FUNCTION 148fa46fc FUN_148fa46fc body=254 status=ok
// SIG undefined FUN_148fa46fc(void)

void FUN_148fa46fc(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba3f3f0;
  FUN_148fa490e(plVar5 + 2,param_2,*param_3,param_4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fa47fa FUN_148fa47fa body=276 status=ok
// SIG undefined FUN_148fa47fa(void)

void FUN_148fa47fa(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba3f0d0;
  FUN_148fa405a(plVar5 + 2,param_2,*param_3,param_4,param_5);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fa490e FUN_148fa490e body=282 status=ok
// SIG undefined FUN_148fa490e(void)

undefined8 *
FUN_148fa490e(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_40,L"ShiftSDK::Rooms::DeleteLobbyAdvertisement");
  FUN_145c44afe(param_1,local_40,param_2,param_4);
  *param_1 = &PTR_FUN_14ba3f150;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ba3f460;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_14b4f3a00;
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
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14ba3f470;
  local_50[3] = param_1;
  FUN_143ef01d9(param_2,param_3,&local_50);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa4a2a FUN_148fa4a2a body=9 status=ok
// SIG undefined FUN_148fa4a2a(void)

void FUN_148fa4a2a(longlong param_1)

{
  FUN_145702696(param_1 + 0x10);
  return;
}



// FUNCTION 148fa4a34 FUN_148fa4a34 body=29 status=ok
// SIG undefined FUN_148fa4a34(void)

undefined8 FUN_148fa4a34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa4a52 FUN_148fa4a52 body=38 status=ok
// SIG undefined FUN_148fa4a52(void)

undefined8 FUN_148fa4a52(undefined8 param_1,int param_2)

{
  FUN_145702696();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa4a78 FUN_148fa4a78 body=29 status=ok
// SIG undefined FUN_148fa4a78(void)

undefined8 FUN_148fa4a78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa4aaa FUN_148fa4aaa body=93 status=ok
// SIG undefined FUN_148fa4aaa(void)

void FUN_148fa4aaa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f470;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa4b08 FUN_148fa4b08 body=93 status=ok
// SIG undefined FUN_148fa4b08(void)

void FUN_148fa4b08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f470;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa4b66 FUN_148fa4b66 body=126 status=ok
// SIG undefined FUN_148fa4b66(void)

void FUN_148fa4b66(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3f470;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa4bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa4be4 FUN_148fa4be4 body=46 status=ok
// SIG undefined FUN_148fa4be4(void)

void FUN_148fa4be4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa4c12 FUN_148fa4c12 body=48 status=ok
// SIG undefined FUN_148fa4c12(void)

undefined8 FUN_148fa4c12(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return 1;
}



// FUNCTION 148fa4c42 FUN_148fa4c42 body=298 status=ok
// SIG undefined FUN_148fa4c42(void)

undefined8 *
FUN_148fa4c42(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_48,L"ShiftSDK::Rooms::UpdateRoom");
  FUN_145c44afe(param_1,local_48,param_2,param_5);
  *param_1 = &PTR_FUN_14ba3f150;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ba3f610;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *local_58 = &PTR_LAB_14b4f3a00;
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
  local_58[2] = lVar2;
  *local_58 = &PTR_FUN_14ba3f620;
  local_58[3] = param_1;
  FUN_143eefdf9(param_2,param_3,param_4,&local_58);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa4d6e FUN_148fa4d6e body=9 status=ok
// SIG undefined FUN_148fa4d6e(void)

void FUN_148fa4d6e(longlong param_1)

{
  FUN_145702696(param_1 + 0x10);
  return;
}



// FUNCTION 148fa4d78 FUN_148fa4d78 body=29 status=ok
// SIG undefined FUN_148fa4d78(void)

undefined8 FUN_148fa4d78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa4d96 FUN_148fa4d96 body=38 status=ok
// SIG undefined FUN_148fa4d96(void)

undefined8 FUN_148fa4d96(undefined8 param_1,int param_2)

{
  FUN_145702696();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa4dbc FUN_148fa4dbc body=29 status=ok
// SIG undefined FUN_148fa4dbc(void)

undefined8 FUN_148fa4dbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa4dee FUN_148fa4dee body=93 status=ok
// SIG undefined FUN_148fa4dee(void)

void FUN_148fa4dee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f620;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa4e4c FUN_148fa4e4c body=93 status=ok
// SIG undefined FUN_148fa4e4c(void)

void FUN_148fa4e4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f620;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa4eaa FUN_148fa4eaa body=126 status=ok
// SIG undefined FUN_148fa4eaa(void)

void FUN_148fa4eaa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3f620;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa4f19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa4f28 FUN_148fa4f28 body=46 status=ok
// SIG undefined FUN_148fa4f28(void)

void FUN_148fa4f28(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa4f56 FUN_148fa4f56 body=48 status=ok
// SIG undefined FUN_148fa4f56(void)

undefined8 FUN_148fa4f56(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return 1;
}



// FUNCTION 148fa4f86 FUN_148fa4f86 body=29 status=ok
// SIG undefined FUN_148fa4f86(void)

undefined8 FUN_148fa4f86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa4fc0 FUN_148fa4fc0 body=101 status=ok
// SIG undefined FUN_148fa4fc0(void)

void FUN_148fa4fc0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3a100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148fa5026 FUN_148fa5026 body=101 status=ok
// SIG undefined FUN_148fa5026(void)

void FUN_148fa5026(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3a100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148fa508c FUN_148fa508c body=134 status=ok
// SIG undefined FUN_148fa508c(void)

void FUN_148fa508c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba3a100;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3f690;
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
                    /* WARNING: Could not recover jumptable at 0x000148fa5103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa5124 FUN_148fa5124 body=25 status=ok
// SIG undefined FUN_148fa5124(void)

undefined8 FUN_148fa5124(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148fa513e FUN_148fa513e body=38 status=ok
// SIG undefined FUN_148fa513e(void)

undefined8 FUN_148fa513e(undefined8 param_1,int param_2)

{
  FUN_145702696();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa5164 FUN_148fa5164 body=31 status=ok
// SIG undefined FUN_148fa5164(void)

undefined8 FUN_148fa5164(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa5198 FUN_148fa5198 body=93 status=ok
// SIG undefined FUN_148fa5198(void)

void FUN_148fa5198(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f7f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa51f6 FUN_148fa51f6 body=93 status=ok
// SIG undefined FUN_148fa51f6(void)

void FUN_148fa51f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f7f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa5254 FUN_148fa5254 body=126 status=ok
// SIG undefined FUN_148fa5254(void)

void FUN_148fa5254(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3f7f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa52c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa52d2 FUN_148fa52d2 body=46 status=ok
// SIG undefined FUN_148fa52d2(void)

void FUN_148fa52d2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa5300 FUN_148fa5300 body=48 status=ok
// SIG undefined FUN_148fa5300(void)

undefined8 FUN_148fa5300(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return 1;
}



// FUNCTION 148fa534c FUN_148fa534c body=165 status=ok
// SIG undefined FUN_148fa534c(void)

undefined8 * FUN_148fa534c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_148fa57d2(param_1 + 1,iVar1);
    FUN_148fa582a(param_1[1],uVar2,iVar1);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  uVar2 = param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_140b856de(param_1 + 3,iVar1,0);
    FUN_140b8566a(param_1[3],uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  return param_1;
}



// FUNCTION 148fa53f2 FUN_148fa53f2 body=72 status=ok
// SIG undefined FUN_148fa53f2(void)

void FUN_148fa53f2(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_148a6307d(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fa5456 FUN_148fa5456 body=100 status=ok
// SIG undefined FUN_148fa5456(void)

undefined8 * FUN_148fa5456(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_148fa54ba();
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_148fa553e(param_1 + 2,param_2 + 0x10);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_148fa55c2(param_1 + 4,param_2 + 0x20);
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_148fa5646(param_1 + 6,param_2 + 0x30);
  return param_1;
}



// FUNCTION 148fa54ba FUN_148fa54ba body=130 status=ok
// SIG undefined FUN_148fa54ba(void)

void FUN_148fa54ba(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa553e FUN_148fa553e body=130 status=ok
// SIG undefined FUN_148fa553e(void)

void FUN_148fa553e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa55c2 FUN_148fa55c2 body=130 status=ok
// SIG undefined FUN_148fa55c2(void)

void FUN_148fa55c2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa5646 FUN_148fa5646 body=130 status=ok
// SIG undefined FUN_148fa5646(void)

void FUN_148fa5646(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa56ca FUN_148fa56ca body=130 status=ok
// SIG undefined FUN_148fa56ca(void)

void FUN_148fa56ca(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa574e FUN_148fa574e body=130 status=ok
// SIG undefined FUN_148fa574e(void)

void FUN_148fa574e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa57d2 FUN_148fa57d2 body=88 status=ok
// SIG undefined FUN_148fa57d2(void)

void FUN_148fa57d2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 5)) {
    uVar3 = uVar1 >> 5 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 148fa582a FUN_148fa582a body=47 status=ok
// SIG undefined FUN_148fa582a(void)

void FUN_148fa582a(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_148fa585a(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 148fa585a FUN_148fa585a body=156 status=ok
// SIG undefined FUN_148fa585a(void)

undefined8 * FUN_148fa585a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
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
  return param_1;
}



// FUNCTION 148fa58f6 FUN_148fa58f6 body=132 status=ok
// SIG undefined FUN_148fa58f6(void)

void FUN_148fa58f6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148fa597c FUN_148fa597c body=132 status=ok
// SIG undefined FUN_148fa597c(void)

void FUN_148fa597c(longlong param_1,int param_2)

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



// FUNCTION 148fa5a02 FUN_148fa5a02 body=113 status=ok
// SIG undefined FUN_148fa5a02(void)

void FUN_148fa5a02(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x120,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x120)) {
      uVar2 = uVar1 / 0x120 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x120,8);
  }
  return;
}



// FUNCTION 148fa5a74 FUN_148fa5a74 body=89 status=ok
// SIG undefined FUN_148fa5a74(void)

void FUN_148fa5a74(longlong param_1,int param_2)

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



// FUNCTION 148fa5adc FUN_148fa5adc body=295 status=ok
// SIG undefined FUN_148fa5adc(void)

undefined8 *
FUN_148fa5adc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140056680(local_58,L"ShiftSDK::Rooms::FindRooms");
  local_78 = &local_48;
  FUN_148fa5c2c(param_1,local_58,param_2,param_4);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ba3fd10;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  local_60 = 2;
  *local_68 = &PTR_LAB_14ba3fc50;
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
  local_68[2] = lVar2;
  *local_68 = &PTR_FUN_14ba3fd50;
  local_68[3] = param_1;
  FUN_143ef02e7(param_2,param_3,&local_68);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa5c04 FUN_148fa5c04 body=9 status=ok
// SIG undefined FUN_148fa5c04(void)

void FUN_148fa5c04(longlong param_1)

{
  FUN_148fa61da(param_1 + 0x10);
  return;
}



// FUNCTION 148fa5c0e FUN_148fa5c0e body=29 status=ok
// SIG undefined FUN_148fa5c0e(void)

undefined8 FUN_148fa5c0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa5c2c FUN_148fa5c2c body=625 status=ok
// SIG undefined FUN_148fa5c2c(void)

undefined8 *
FUN_148fa5c2c(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong *param_5)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined4 local_d0;
  void *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = &PTR_LAB_14ba3d1c8;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 0x38);
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_14ba3fd20;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar3 = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_148a6744a(param_1 + 4,param_4);
  param_1[6] = 0;
  param_1[8] = 0;
  local_d0 = 7;
  local_c8 = (void *)0x0;
  uVar2 = *(uint *)(param_5 + 1);
  pvVar3 = (void *)*param_5;
  local_c0 = CONCAT44(local_c0._4_4_,uVar2);
  local_d8 = param_1;
  if ((longlong)(int)uVar2 == 0) {
    local_c0 = (ulonglong)uVar2;
  }
  else {
    FUN_148fa5a74(&local_c8,uVar2);
    memcpy(local_c8,pvVar3,(longlong)(int)uVar2 << 2);
  }
  local_b8 = (code *)0x0;
  puVar12 = (undefined8 *)FUN_14001cc68(0x28,8);
  pvVar3 = local_c8;
  *puVar12 = &PTR_FUN_14ba3fd30;
  local_c8 = (void *)0x0;
  uVar4 = (undefined4)local_c0;
  uVar5 = local_c0._4_4_;
  local_c0 = 0;
  puVar12[1] = local_d8;
  *(undefined4 *)(puVar12 + 2) = local_d0;
  puVar12[3] = pvVar3;
  *(undefined4 *)(puVar12 + 4) = uVar4;
  *(undefined4 *)((longlong)puVar12 + 0x24) = uVar5;
  if (puVar12 + 1 != (undefined8 *)0x0) {
    local_b8 = FUN_148fa5eea;
  }
  local_78 = param_1[6];
  uStack_70 = param_1[7];
  local_a8 = (longlong *)param_1[8];
  uStack_60 = param_1[9];
  local_58 = param_1[10];
  uStack_50 = param_1[0xb];
  local_48 = param_1[0xc];
  uStack_40 = param_1[0xd];
  uVar10 = local_48;
  uVar11 = uStack_40;
  uVar8 = local_58;
  uVar9 = uStack_50;
  local_68 = local_a8;
  uVar7 = uStack_60;
  uVar6 = uStack_70;
  param_1[0xc] = CONCAT44(uStack_84,local_88);
  param_1[0xd] = CONCAT44(uStack_7c,uStack_80);
  param_1[10] = CONCAT44(uStack_94,local_98);
  param_1[0xb] = CONCAT44(uStack_8c,uStack_90);
  param_1[8] = puVar12;
  param_1[9] = CONCAT44(uStack_9c,uStack_a0);
  param_1[6] = local_b8;
  param_1[7] = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  local_b8 = (code *)local_78;
  uStack_70 = uVar6;
  uStack_60 = uVar7;
  local_58 = uVar8;
  uStack_50 = uVar9;
  local_48 = uVar10;
  uStack_40 = uVar11;
  if (local_78 != 0) {
    plVar13 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar13 = (longlong *)&local_98;
    }
    (**(code **)(*plVar13 + 0x10))();
    if (local_c8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa5e9e FUN_148fa5e9e body=38 status=ok
// SIG undefined FUN_148fa5e9e(void)

undefined8 FUN_148fa5e9e(undefined8 param_1,int param_2)

{
  FUN_148fa61da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa5ec4 FUN_148fa5ec4 body=38 status=ok
// SIG undefined FUN_148fa5ec4(void)

undefined8 FUN_148fa5ec4(undefined8 param_1,int param_2)

{
  FUN_148fa61da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa5eea FUN_148fa5eea body=56 status=ok
// SIG undefined FUN_148fa5eea(void)

void FUN_148fa5eea(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,(int)param_1[1],param_1 + 2);
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa5f22 FUN_148fa5f22 body=143 status=ok
// SIG undefined FUN_148fa5f22(void)

undefined8 * FUN_148fa5f22(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14ba3fd30;
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_148fa5a74(puVar2 + 3,iVar1);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 << 2);
  }
  return puVar2 + 1;
}



// FUNCTION 148fa5fb8 FUN_148fa5fb8 body=29 status=ok
// SIG undefined FUN_148fa5fb8(void)

void FUN_148fa5fb8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148fa5fd6 FUN_148fa5fd6 body=57 status=ok
// SIG undefined FUN_148fa5fd6(void)

undefined8 * FUN_148fa5fd6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba3fd30;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa6010 FUN_148fa6010 body=29 status=ok
// SIG undefined FUN_148fa6010(void)

undefined8 FUN_148fa6010(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa6042 FUN_148fa6042 body=93 status=ok
// SIG undefined FUN_148fa6042(void)

void FUN_148fa6042(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3fc50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3fd50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa60a0 FUN_148fa60a0 body=93 status=ok
// SIG undefined FUN_148fa60a0(void)

void FUN_148fa60a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3fc50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3fd50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa60fe FUN_148fa60fe body=126 status=ok
// SIG undefined FUN_148fa60fe(void)

void FUN_148fa60fe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba3fc50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3fd50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa616d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa617c FUN_148fa617c body=46 status=ok
// SIG undefined FUN_148fa617c(void)

void FUN_148fa617c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa61aa FUN_148fa61aa body=48 status=ok
// SIG undefined FUN_148fa61aa(void)

undefined8 FUN_148fa61aa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return 1;
}



// FUNCTION 148fa61da FUN_148fa61da body=81 status=ok
// SIG undefined FUN_148fa61da(void)

void FUN_148fa61da(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba3fd20;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1449db362(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fa622c FUN_148fa622c body=29 status=ok
// SIG undefined FUN_148fa622c(void)

undefined8 FUN_148fa622c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa6272 FUN_148fa6272 body=101 status=ok
// SIG undefined FUN_148fa6272(void)

void FUN_148fa6272(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba417f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3fdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148fa62d8 FUN_148fa62d8 body=101 status=ok
// SIG undefined FUN_148fa62d8(void)

void FUN_148fa62d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba417f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3fdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148fa633e FUN_148fa633e body=134 status=ok
// SIG undefined FUN_148fa633e(void)

void FUN_148fa633e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba417f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3fdc0;
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
                    /* WARNING: Could not recover jumptable at 0x000148fa63b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa63d6 FUN_148fa63d6 body=25 status=ok
// SIG undefined FUN_148fa63d6(void)

undefined8 FUN_148fa63d6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148fa63f2 FUN_148fa63f2 body=29 status=ok
// SIG undefined FUN_148fa63f2(void)

undefined8 FUN_148fa63f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa642c FUN_148fa642c body=101 status=ok
// SIG undefined FUN_148fa642c(void)

void FUN_148fa642c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3fe30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148fa6492 FUN_148fa6492 body=101 status=ok
// SIG undefined FUN_148fa6492(void)

void FUN_148fa6492(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3fe30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148fa64f8 FUN_148fa64f8 body=134 status=ok
// SIG undefined FUN_148fa64f8(void)

void FUN_148fa64f8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3fe30;
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
                    /* WARNING: Could not recover jumptable at 0x000148fa656f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa658e FUN_148fa658e body=25 status=ok
// SIG undefined FUN_148fa658e(void)

undefined8 FUN_148fa658e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148fa65b6 FUN_148fa65b6 body=63 status=ok
// SIG undefined FUN_148fa65b6(void)

longlong FUN_148fa65b6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145fee31c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x120 + *param_1;
  FUN_148fa65f5(lVar2);
  return lVar2;
}



// FUNCTION 148fa65f5 FUN_148fa65f5 body=82 status=ok
// SIG undefined FUN_148fa65f5(void)

void FUN_148fa65f5(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4c3b18;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_145ad316c(param_1 + 5);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 9999;
  return;
}



// FUNCTION 148fa6648 FUN_148fa6648 body=38 status=ok
// SIG undefined FUN_148fa6648(void)

undefined8 FUN_148fa6648(undefined8 param_1,int param_2)

{
  FUN_1459a6ae0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa666e FUN_148fa666e body=38 status=ok
// SIG undefined FUN_148fa666e(void)

undefined8 FUN_148fa666e(undefined8 param_1,int param_2)

{
  FUN_1459a6ae0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa6694 FUN_148fa6694 body=60 status=ok
// SIG undefined FUN_148fa6694(void)

void FUN_148fa6694(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))
                (plVar2,(int)param_1[1],*(undefined4 *)((longlong)param_1 + 0xc),param_1 + 2);
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa66d0 FUN_148fa66d0 body=62 status=ok
// SIG undefined FUN_148fa66d0(void)

void FUN_148fa66d0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14ba3fff0;
  FUN_148fa6714(puVar1 + 1,param_1 + 8);
  return;
}



// FUNCTION 148fa6714 FUN_148fa6714 body=127 status=ok
// SIG undefined FUN_148fa6714(void)

undefined8 * FUN_148fa6714(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  _Src = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],_Src,(longlong)iVar1 * 2);
  }
  param_1[7] = param_2[7];
  return param_1;
}



// FUNCTION 148fa6794 FUN_148fa6794 body=31 status=ok
// SIG undefined FUN_148fa6794(void)

undefined8 FUN_148fa6794(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa67c8 FUN_148fa67c8 body=93 status=ok
// SIG undefined FUN_148fa67c8(void)

void FUN_148fa67c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3ff10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40010;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa6826 FUN_148fa6826 body=126 status=ok
// SIG undefined FUN_148fa6826(void)

void FUN_148fa6826(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba3ff10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba40010;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa6895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa68a4 FUN_148fa68a4 body=46 status=ok
// SIG undefined FUN_148fa68a4(void)

void FUN_148fa68a4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa68d2 FUN_148fa68d2 body=48 status=ok
// SIG undefined FUN_148fa68d2(void)

undefined8 FUN_148fa68d2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return 1;
}



// FUNCTION 148fa6902 FUN_148fa6902 body=38 status=ok
// SIG undefined FUN_148fa6902(void)

undefined8 FUN_148fa6902(undefined8 param_1,int param_2)

{
  FUN_145aa6248();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa6928 FUN_148fa6928 body=38 status=ok
// SIG undefined FUN_148fa6928(void)

undefined8 FUN_148fa6928(undefined8 param_1,int param_2)

{
  FUN_145aa6248();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa694e FUN_148fa694e body=60 status=ok
// SIG undefined FUN_148fa694e(void)

void FUN_148fa694e(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,(int)param_1[1],param_1 + 2,(int)param_1[4]);
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa698a FUN_148fa698a body=64 status=ok
// SIG undefined FUN_148fa698a(void)

longlong FUN_148fa698a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x30,8);
  *param_2 = lVar1;
  FUN_148fa69d0(lVar1,param_1 + 8);
  return lVar1 + 8;
}



// FUNCTION 148fa69d0 FUN_148fa69d0 body=129 status=ok
// SIG undefined FUN_148fa69d0(void)

undefined8 * FUN_148fa69d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14ba40200;
  param_1[1] = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 1);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_145c52c12(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 148fa6a52 FUN_148fa6a52 body=31 status=ok
// SIG undefined FUN_148fa6a52(void)

undefined8 FUN_148fa6a52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa6a86 FUN_148fa6a86 body=93 status=ok
// SIG undefined FUN_148fa6a86(void)

void FUN_148fa6a86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40220;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa6ae4 FUN_148fa6ae4 body=126 status=ok
// SIG undefined FUN_148fa6ae4(void)

void FUN_148fa6ae4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba40220;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa6b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa6b62 FUN_148fa6b62 body=46 status=ok
// SIG undefined FUN_148fa6b62(void)

void FUN_148fa6b62(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa6b90 FUN_148fa6b90 body=48 status=ok
// SIG undefined FUN_148fa6b90(void)

undefined8 FUN_148fa6b90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return 1;
}



// FUNCTION 148fa6bc0 FUN_148fa6bc0 body=38 status=ok
// SIG undefined FUN_148fa6bc0(void)

undefined8 FUN_148fa6bc0(undefined8 param_1,int param_2)

{
  FUN_145702696();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa6be6 FUN_148fa6be6 body=31 status=ok
// SIG undefined FUN_148fa6be6(void)

undefined8 FUN_148fa6be6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa6c1a FUN_148fa6c1a body=93 status=ok
// SIG undefined FUN_148fa6c1a(void)

void FUN_148fa6c1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40360;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa6c78 FUN_148fa6c78 body=126 status=ok
// SIG undefined FUN_148fa6c78(void)

void FUN_148fa6c78(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba40360;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa6ce7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa6cf6 FUN_148fa6cf6 body=46 status=ok
// SIG undefined FUN_148fa6cf6(void)

void FUN_148fa6cf6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa6d24 FUN_148fa6d24 body=48 status=ok
// SIG undefined FUN_148fa6d24(void)

undefined8 FUN_148fa6d24(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return 1;
}



// FUNCTION 148fa6d54 FUN_148fa6d54 body=31 status=ok
// SIG undefined FUN_148fa6d54(void)

undefined8 FUN_148fa6d54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa6d90 FUN_148fa6d90 body=101 status=ok
// SIG undefined FUN_148fa6d90(void)

void FUN_148fa6d90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4ea0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba403d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148fa6df6 FUN_148fa6df6 body=134 status=ok
// SIG undefined FUN_148fa6df6(void)

void FUN_148fa6df6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4ea0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba403d0;
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
                    /* WARNING: Could not recover jumptable at 0x000148fa6e6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa6e8e FUN_148fa6e8e body=298 status=ok
// SIG undefined FUN_148fa6e8e(void)

undefined8 *
FUN_148fa6e8e(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_48,L"ShiftSDK::Rooms::InvitePeersToRoom");
  FUN_145c44afe(param_1,local_48,param_2,param_5);
  *param_1 = &PTR_FUN_14ba3f150;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ba40510;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *local_58 = &PTR_LAB_14b4f3a00;
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
  local_58[2] = lVar2;
  *local_58 = &PTR_FUN_14ba40520;
  local_58[3] = param_1;
  FUN_148a619b4(param_2,param_3,param_4,&local_58);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa6fba FUN_148fa6fba body=9 status=ok
// SIG undefined FUN_148fa6fba(void)

void FUN_148fa6fba(longlong param_1)

{
  FUN_145702696(param_1 + 0x10);
  return;
}



// FUNCTION 148fa6fc4 FUN_148fa6fc4 body=29 status=ok
// SIG undefined FUN_148fa6fc4(void)

undefined8 FUN_148fa6fc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa6fe2 FUN_148fa6fe2 body=38 status=ok
// SIG undefined FUN_148fa6fe2(void)

undefined8 FUN_148fa6fe2(undefined8 param_1,int param_2)

{
  FUN_145702696();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa7008 FUN_148fa7008 body=29 status=ok
// SIG undefined FUN_148fa7008(void)

undefined8 FUN_148fa7008(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa703a FUN_148fa703a body=93 status=ok
// SIG undefined FUN_148fa703a(void)

void FUN_148fa703a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40520;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa7098 FUN_148fa7098 body=93 status=ok
// SIG undefined FUN_148fa7098(void)

void FUN_148fa7098(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40520;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa70f6 FUN_148fa70f6 body=126 status=ok
// SIG undefined FUN_148fa70f6(void)

void FUN_148fa70f6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba40520;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa7165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa7174 FUN_148fa7174 body=46 status=ok
// SIG undefined FUN_148fa7174(void)

void FUN_148fa7174(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa71a2 FUN_148fa71a2 body=48 status=ok
// SIG undefined FUN_148fa71a2(void)

undefined8 FUN_148fa71a2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return 1;
}



// FUNCTION 148fa71fa FUN_148fa71fa body=114 status=ok
// SIG undefined FUN_148fa71fa(void)

void FUN_148fa71fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba40600;
  FUN_1459ae9f2(puVar1 + 1,param_1 + 8);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  *puVar1 = &PTR_FUN_14ba40590;
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar2;
  return;
}



// FUNCTION 148fa726c FUN_148fa726c body=150 status=ok
// SIG undefined FUN_148fa726c(void)

void FUN_148fa726c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba40600;
  FUN_1459ae9f2(&p_Var1->CriticalSection,param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba40590;
  p_Var1[1].ProcessLocksList.Flink = *(_LIST_ENTRY **)(param_1 + 0x40);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x34);
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  uVar6 = *(undefined4 *)(param_1 + 0x3c);
  p_Var1[1].Type = (short)uVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar3 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar4;
  *(undefined4 *)&p_Var1[1].CriticalSection = uVar5;
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar6;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa72f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa7302 FUN_148fa7302 body=102 status=ok
// SIG undefined FUN_148fa7302(void)

void FUN_148fa7302(longlong param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &local_9;
  local_18 = *(undefined8 *)(param_1 + 0x30);
  local_20 = param_4;
  local_10 = param_2;
  local_9 = param_3;
  FUN_14620ac3a(param_1 + 8,param_1 + 0x38,&local_18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa736c FUN_148fa736c body=130 status=ok
// SIG undefined FUN_148fa736c(void)

void FUN_148fa736c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa73fe FUN_148fa73fe body=103 status=ok
// SIG undefined FUN_148fa73fe(void)

void FUN_148fa73fe(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2;
  FUN_1403472eb(*(undefined8 *)(lVar1 + lVar3 * 0x18),*(undefined4 *)(lVar1 + 8 + lVar3 * 0x18));
  if (*(longlong *)(lVar1 + lVar3 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + lVar3 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar2) * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 148fa7466 FUN_148fa7466 body=62 status=ok
// SIG undefined FUN_148fa7466(void)

void FUN_148fa7466(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148fa74a4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 148fa74a4 FUN_148fa74a4 body=112 status=ok
// SIG undefined FUN_148fa74a4(void)

ulonglong FUN_148fa74a4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148fa74de;
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
LAB_148fa74de:
  return param_2 & 0xffffffff;
}



// FUNCTION 148fa7514 FUN_148fa7514 body=38 status=ok
// SIG undefined FUN_148fa7514(void)

undefined8 FUN_148fa7514(undefined8 param_1,int param_2)

{
  FUN_145858712();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa7556 FUN_148fa7556 body=153 status=ok
// SIG undefined FUN_148fa7556(void)

undefined8 * FUN_148fa7556(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  if (param_3 < 4) {
    local_38 = 0;
    local_30 = 0;
    FUN_14009d848(&local_38,param_4);
    FUN_1448b6402(param_1 + (ulonglong)param_3 * 0x18 + 0x68,&local_40,&local_38);
    FUN_1449db362(&local_38);
    *param_2 = local_40;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa75f0 FUN_148fa75f0 body=55 status=ok
// SIG undefined FUN_148fa75f0(void)

void FUN_148fa75f0(longlong param_1,uint param_2,longlong *param_3)

{
  if (param_2 < 4) {
    if (*param_3 != 0) {
      FUN_14480f766(param_1 + (ulonglong)param_2 * 0x18 + 0x68);
    }
    *param_3 = 0;
  }
  return;
}



// FUNCTION 148fa768e FUN_148fa768e body=168 status=ok
// SIG undefined FUN_148fa768e(void)

undefined8 * FUN_148fa768e(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_145a1c57a(&local_38,param_3);
  FUN_145a1c5f8(param_1 + 0xf8,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa7738 FUN_148fa7738 body=41 status=ok
// SIG undefined FUN_148fa7738(void)

void FUN_148fa7738(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0xf8);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fa777a FUN_148fa777a body=168 status=ok
// SIG undefined FUN_148fa777a(void)

undefined8 * FUN_148fa777a(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_145a1c57a(&local_38,param_3);
  FUN_145a1c5f8(param_1 + 0x110,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa7824 FUN_148fa7824 body=41 status=ok
// SIG undefined FUN_148fa7824(void)

void FUN_148fa7824(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x110);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fa787e FUN_148fa787e body=158 status=ok
// SIG undefined FUN_148fa787e(void)

undefined8 * FUN_148fa787e(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  if (param_3 < 4) {
    local_38 = 0;
    local_30 = 0;
    FUN_148fa141a(&local_38,param_4);
    FUN_148fa8176(param_1 + (ulonglong)param_3 * 0x18 + 0x140,&local_40,&local_38);
    FUN_1449db362(&local_38);
    *param_2 = local_40;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa791e FUN_148fa791e body=58 status=ok
// SIG undefined FUN_148fa791e(void)

void FUN_148fa791e(longlong param_1,uint param_2,longlong *param_3)

{
  if (param_2 < 4) {
    if (*param_3 != 0) {
      FUN_14480f766(param_1 + (ulonglong)param_2 * 0x18 + 0x140);
    }
    *param_3 = 0;
  }
  return;
}



// FUNCTION 148fa7994 FUN_148fa7994 body=158 status=ok
// SIG undefined FUN_148fa7994(void)

undefined8 * FUN_148fa7994(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  if (param_3 < 4) {
    local_38 = 0;
    local_30 = 0;
    FUN_148fa141a(&local_38,param_4);
    FUN_148fa8176(param_1 + (ulonglong)param_3 * 0x18 + 0x1a0,&local_40,&local_38);
    FUN_1449db362(&local_38);
    *param_2 = local_40;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa7a34 FUN_148fa7a34 body=58 status=ok
// SIG undefined FUN_148fa7a34(void)

void FUN_148fa7a34(longlong param_1,uint param_2,longlong *param_3)

{
  if (param_2 < 4) {
    if (*param_3 != 0) {
      FUN_14480f766(param_1 + (ulonglong)param_2 * 0x18 + 0x1a0);
    }
    *param_3 = 0;
  }
  return;
}



// FUNCTION 148fa7aaa FUN_148fa7aaa body=158 status=ok
// SIG undefined FUN_148fa7aaa(void)

undefined8 * FUN_148fa7aaa(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  if (param_3 < 4) {
    local_38 = 0;
    local_30 = 0;
    FUN_148fa141a(&local_38,param_4);
    FUN_148fa8176(param_1 + (ulonglong)param_3 * 0x18 + 0x200,&local_40,&local_38);
    FUN_1449db362(&local_38);
    *param_2 = local_40;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa7b4a FUN_148fa7b4a body=58 status=ok
// SIG undefined FUN_148fa7b4a(void)

void FUN_148fa7b4a(longlong param_1,uint param_2,longlong *param_3)

{
  if (param_2 < 4) {
    if (*param_3 != 0) {
      FUN_14480f766(param_1 + (ulonglong)param_2 * 0x18 + 0x200);
    }
    *param_3 = 0;
  }
  return;
}



// FUNCTION 148fa7bc0 FUN_148fa7bc0 body=158 status=ok
// SIG undefined FUN_148fa7bc0(void)

undefined8 * FUN_148fa7bc0(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  if (param_3 < 4) {
    local_38 = 0;
    local_30 = 0;
    FUN_148fa141a(&local_38,param_4);
    FUN_148fa8176(param_1 + (ulonglong)param_3 * 0x18 + 0x260,&local_40,&local_38);
    FUN_1449db362(&local_38);
    *param_2 = local_40;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa7c60 FUN_148fa7c60 body=58 status=ok
// SIG undefined FUN_148fa7c60(void)

void FUN_148fa7c60(longlong param_1,uint param_2,longlong *param_3)

{
  if (param_2 < 4) {
    if (*param_3 != 0) {
      FUN_14480f766(param_1 + (ulonglong)param_2 * 0x18 + 0x260);
    }
    *param_3 = 0;
  }
  return;
}



// FUNCTION 148fa7cd6 FUN_148fa7cd6 body=158 status=ok
// SIG undefined FUN_148fa7cd6(void)

undefined8 * FUN_148fa7cd6(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  if (param_3 < 4) {
    local_38 = 0;
    local_30 = 0;
    FUN_141509b10(&local_38,param_4);
    FUN_145a59d32(param_1 + (ulonglong)param_3 * 0x18 + 0x2c0,&local_40,&local_38);
    FUN_1449db362(&local_38);
    *param_2 = local_40;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa7d76 FUN_148fa7d76 body=58 status=ok
// SIG undefined FUN_148fa7d76(void)

void FUN_148fa7d76(longlong param_1,uint param_2,longlong *param_3)

{
  if (param_2 < 4) {
    if (*param_3 != 0) {
      FUN_14480f766(param_1 + (ulonglong)param_2 * 0x18 + 0x2c0);
    }
    *param_3 = 0;
  }
  return;
}



// FUNCTION 148fa7dd2 FUN_148fa7dd2 body=168 status=ok
// SIG undefined FUN_148fa7dd2(void)

undefined8 * FUN_148fa7dd2(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_148fa842a(&local_38,param_3);
  FUN_148fa8342(param_1 + 800,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa7e7c FUN_148fa7e7c body=41 status=ok
// SIG undefined FUN_148fa7e7c(void)

void FUN_148fa7e7c(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 800);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fa7eca FUN_148fa7eca body=168 status=ok
// SIG undefined FUN_148fa7eca(void)

undefined8 * FUN_148fa7eca(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_148fa8668(&local_38,param_3);
  FUN_148fa8580(param_1 + 0x350,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa7f74 FUN_148fa7f74 body=41 status=ok
// SIG undefined FUN_148fa7f74(void)

void FUN_148fa7f74(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x350);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fa7fb6 FUN_148fa7fb6 body=168 status=ok
// SIG undefined FUN_148fa7fb6(void)

undefined8 * FUN_148fa7fb6(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_148fa8884(&local_38,param_3);
  FUN_148fa879c(param_1 + 0x368,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa8060 FUN_148fa8060 body=41 status=ok
// SIG undefined FUN_148fa8060(void)

void FUN_148fa8060(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x368);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fa80c6 FUN_148fa80c6 body=175 status=ok
// SIG undefined FUN_148fa80c6(void)

void FUN_148fa80c6(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148fa814f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fa814f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fa8176 FUN_148fa8176 body=230 status=ok
// SIG undefined FUN_148fa8176(void)

undefined8 * FUN_148fa8176(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148fa825e FUN_148fa825e body=227 status=ok
// SIG undefined FUN_148fa825e(void)

void FUN_148fa825e(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5,param_6),
           cVar4 != '\0'))) {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148fa8313;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fa8313:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fa8342 FUN_148fa8342 body=230 status=ok
// SIG undefined FUN_148fa8342(void)

undefined8 * FUN_148fa8342(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148fa842a FUN_148fa842a body=130 status=ok
// SIG undefined FUN_148fa842a(void)

void FUN_148fa842a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa84ae FUN_148fa84ae body=210 status=ok
// SIG undefined FUN_148fa84ae(void)

void FUN_148fa84ae(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148fa8552;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fa8552:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fa8580 FUN_148fa8580 body=230 status=ok
// SIG undefined FUN_148fa8580(void)

undefined8 * FUN_148fa8580(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148fa8668 FUN_148fa8668 body=130 status=ok
// SIG undefined FUN_148fa8668(void)

void FUN_148fa8668(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa86ec FUN_148fa86ec body=175 status=ok
// SIG undefined FUN_148fa86ec(void)

void FUN_148fa86ec(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148fa8775;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fa8775:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fa879c FUN_148fa879c body=230 status=ok
// SIG undefined FUN_148fa879c(void)

undefined8 * FUN_148fa879c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148fa8884 FUN_148fa8884 body=130 status=ok
// SIG undefined FUN_148fa8884(void)

void FUN_148fa8884(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa8908 FUN_148fa8908 body=227 status=ok
// SIG undefined FUN_148fa8908(void)

void FUN_148fa8908(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5,param_6),
           cVar4 != '\0'))) {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148fa89bd;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fa89bd:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fa89ec FUN_148fa89ec body=100 status=ok
// SIG undefined FUN_148fa89ec(void)

void FUN_148fa89ec(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000148fa8a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fa8a50 FUN_148fa8a50 body=31 status=ok
// SIG undefined FUN_148fa8a50(void)

undefined8 FUN_148fa8a50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa8a8c FUN_148fa8a8c body=93 status=ok
// SIG undefined FUN_148fa8a8c(void)

void FUN_148fa8a8c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba40bb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148fa8aea FUN_148fa8aea body=126 status=ok
// SIG undefined FUN_148fa8aea(void)

void FUN_148fa8aea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba40bb0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa8b59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa8b68 FUN_148fa8b68 body=21 status=ok
// SIG undefined FUN_148fa8b68(void)

undefined8 FUN_148fa8b68(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148fa8b86 FUN_148fa8b86 body=38 status=ok
// SIG undefined FUN_148fa8b86(void)

undefined8 FUN_148fa8b86(undefined8 param_1,int param_2)

{
  FUN_1458ef360();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa8bac FUN_148fa8bac body=38 status=ok
// SIG undefined FUN_148fa8bac(void)

undefined8 FUN_148fa8bac(undefined8 param_1,int param_2)

{
  FUN_1458ef360();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa8bd2 FUN_148fa8bd2 body=52 status=ok
// SIG undefined FUN_148fa8bd2(void)

void FUN_148fa8bd2(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_1 + 1);
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa8c28 FUN_148fa8c28 body=93 status=ok
// SIG undefined FUN_148fa8c28(void)

undefined8 * FUN_148fa8c28(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_140b856de(param_1 + 1,iVar1,0);
    FUN_140b8566a(param_1[1],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148fa8c86 FUN_148fa8c86 body=31 status=ok
// SIG undefined FUN_148fa8c86(void)

undefined8 FUN_148fa8c86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa8cba FUN_148fa8cba body=93 status=ok
// SIG undefined FUN_148fa8cba(void)

void FUN_148fa8cba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40e80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa8d18 FUN_148fa8d18 body=126 status=ok
// SIG undefined FUN_148fa8d18(void)

void FUN_148fa8d18(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba40e80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa8d87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa8d96 FUN_148fa8d96 body=46 status=ok
// SIG undefined FUN_148fa8d96(void)

void FUN_148fa8d96(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa8dc4 FUN_148fa8dc4 body=48 status=ok
// SIG undefined FUN_148fa8dc4(void)

undefined8 FUN_148fa8dc4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return 1;
}



// FUNCTION 148fa8df4 FUN_148fa8df4 body=96 status=ok
// SIG undefined FUN_148fa8df4(void)

void FUN_148fa8df4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 148fa8e54 FUN_148fa8e54 body=130 status=ok
// SIG undefined FUN_148fa8e54(void)

void FUN_148fa8e54(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa8ed8 FUN_148fa8ed8 body=295 status=ok
// SIG undefined FUN_148fa8ed8(void)

undefined8 *
FUN_148fa8ed8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140056680(local_58,L"ShiftSDK::Users::FindShiftIdForDisplayName");
  local_78 = &local_48;
  FUN_148fa9028(param_1,local_58,param_2,param_4);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ba41000;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  local_60 = 2;
  *local_68 = &PTR_LAB_149e063e0;
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
  local_68[2] = lVar2;
  *local_68 = &PTR_FUN_14ba41040;
  local_68[3] = param_1;
  FUN_148a62bc5(param_2,param_3,&local_68);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa9000 FUN_148fa9000 body=9 status=ok
// SIG undefined FUN_148fa9000(void)

void FUN_148fa9000(longlong param_1)

{
  FUN_148fa9586(param_1 + 0x10);
  return;
}



// FUNCTION 148fa900a FUN_148fa900a body=29 status=ok
// SIG undefined FUN_148fa900a(void)

undefined8 FUN_148fa900a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa9028 FUN_148fa9028 body=595 status=ok
// SIG undefined FUN_148fa9028(void)

undefined8 *
FUN_148fa9028(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong *param_5)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  void *pvVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  void *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = &PTR_LAB_14ba3d1c8;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 0x38);
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_14ba41010;
  param_1[2] = 0;
  iVar5 = *(int *)(param_2 + 1);
  pvVar1 = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar5;
  if ((longlong)iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar5,0);
    memcpy((void *)param_1[2],pvVar1,(longlong)iVar5 * 2);
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_146281d3c(param_1 + 4,param_4);
  param_1[6] = 0;
  param_1[8] = 0;
  local_c8 = (void *)0x0;
  uStack_c0._0_4_ = (int)param_5[1];
  lVar8 = (longlong)(int)uStack_c0;
  pvVar1 = (void *)*param_5;
  pvVar6 = (void *)0x0;
  iVar5 = 0;
  uVar9 = 0;
  local_d0 = param_1;
  if (lVar8 != 0) {
    FUN_1446dd670(&local_c8,(int)uStack_c0,0);
    memcpy(local_c8,pvVar1,lVar8 * 2);
    pvVar6 = local_c8;
    iVar5 = (int)uStack_c0;
    uVar9 = uStack_c0._4_4_;
  }
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = param_1[6];
  uStack_70 = param_1[7];
  local_a8 = (longlong *)param_1[8];
  uStack_60 = param_1[9];
  local_58 = param_1[10];
  uStack_50 = param_1[0xb];
  local_48 = param_1[0xc];
  uStack_40 = param_1[0xd];
  uVar4 = uStack_40;
  local_68 = local_a8;
  uVar3 = uStack_60;
  local_78 = local_b8;
  uVar2 = uStack_70;
  param_1[0xc] = pvVar6;
  *(int *)(param_1 + 0xd) = iVar5;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar9;
  param_1[10] = &PTR_FUN_14ba41020;
  param_1[0xb] = local_d0;
  param_1[8] = 0;
  param_1[9] = CONCAT44(uStack_9c,uStack_a0);
  param_1[6] = FUN_148fa92c8;
  param_1[7] = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  local_98 = local_58;
  uStack_90 = uStack_50;
  local_88 = local_48;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_70 = uVar2;
  uStack_60 = uVar3;
  uStack_40 = uVar4;
  if (local_b8 != 0) {
    plVar7 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar7 = &local_98;
    }
    (**(code **)(*plVar7 + 0x10))();
    if (local_c8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa927c FUN_148fa927c body=38 status=ok
// SIG undefined FUN_148fa927c(void)

undefined8 FUN_148fa927c(undefined8 param_1,int param_2)

{
  FUN_148fa9586();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa92a2 FUN_148fa92a2 body=38 status=ok
// SIG undefined FUN_148fa92a2(void)

undefined8 FUN_148fa92a2(undefined8 param_1,int param_2)

{
  FUN_148fa9586();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa92c8 FUN_148fa92c8 body=52 status=ok
// SIG undefined FUN_148fa92c8(void)

void FUN_148fa92c8(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_1 + 1);
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa92fc FUN_148fa92fc body=115 status=ok
// SIG undefined FUN_148fa92fc(void)

longlong FUN_148fa92fc(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14ba41020;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_2 + 0x20),iVar1,0);
    memcpy(*(void **)(param_2 + 0x20),_Src,(longlong)iVar1 * 2);
  }
  return param_2 + 0x18;
}



// FUNCTION 148fa9382 FUN_148fa9382 body=57 status=ok
// SIG undefined FUN_148fa9382(void)

undefined8 * FUN_148fa9382(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba41020;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa93bc FUN_148fa93bc body=29 status=ok
// SIG undefined FUN_148fa93bc(void)

undefined8 FUN_148fa93bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa93ee FUN_148fa93ee body=93 status=ok
// SIG undefined FUN_148fa93ee(void)

void FUN_148fa93ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba41040;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa944c FUN_148fa944c body=93 status=ok
// SIG undefined FUN_148fa944c(void)

void FUN_148fa944c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba41040;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa94aa FUN_148fa94aa body=126 status=ok
// SIG undefined FUN_148fa94aa(void)

void FUN_148fa94aa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba41040;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa9519. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa9528 FUN_148fa9528 body=46 status=ok
// SIG undefined FUN_148fa9528(void)

void FUN_148fa9528(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa9556 FUN_148fa9556 body=48 status=ok
// SIG undefined FUN_148fa9556(void)

undefined8 FUN_148fa9556(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return 1;
}



// FUNCTION 148fa9586 FUN_148fa9586 body=81 status=ok
// SIG undefined FUN_148fa9586(void)

void FUN_148fa9586(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba41010;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1449db362(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fa95d8 FUN_148fa95d8 body=38 status=ok
// SIG undefined FUN_148fa95d8(void)

undefined8 FUN_148fa95d8(undefined8 param_1,int param_2)

{
  FUN_1458ef360();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa95fe FUN_148fa95fe body=31 status=ok
// SIG undefined FUN_148fa95fe(void)

undefined8 FUN_148fa95fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fa9632 FUN_148fa9632 body=93 status=ok
// SIG undefined FUN_148fa9632(void)

void FUN_148fa9632(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba411b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fa9690 FUN_148fa9690 body=126 status=ok
// SIG undefined FUN_148fa9690(void)

void FUN_148fa9690(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba411b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fa96ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fa970e FUN_148fa970e body=46 status=ok
// SIG undefined FUN_148fa970e(void)

void FUN_148fa970e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return;
}



// FUNCTION 148fa973c FUN_148fa973c body=48 status=ok
// SIG undefined FUN_148fa973c(void)

undefined8 FUN_148fa973c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return 1;
}



// FUNCTION 148fa976c FUN_148fa976c body=96 status=ok
// SIG undefined FUN_148fa976c(void)

void FUN_148fa976c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 148fa97cc FUN_148fa97cc body=114 status=ok
// SIG undefined FUN_148fa97cc(void)

void FUN_148fa97cc(longlong *param_1,int param_2)

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



// FUNCTION 148fa983e FUN_148fa983e body=116 status=ok
// SIG undefined FUN_148fa983e(void)

void FUN_148fa983e(longlong *param_1,int param_2)

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



// FUNCTION 148fa98b2 FUN_148fa98b2 body=230 status=ok
// SIG undefined FUN_148fa98b2(void)

undefined8 * FUN_148fa98b2(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148fa999a FUN_148fa999a body=130 status=ok
// SIG undefined FUN_148fa999a(void)

void FUN_148fa999a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa9a1e FUN_148fa9a1e body=250 status=ok
// SIG undefined FUN_148fa9a1e(void)

void FUN_148fa9a1e(longlong *param_1,undefined4 param_2,undefined4 *param_3,undefined8 *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_98 [44];
  uint local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar4 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar4 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    plVar5 = (longlong *)0x0;
    do {
      local_6c = (uint)plVar5;
      lVar7 = uVar4 * 0x10 + -8;
      uVar6 = uVar4;
      while ((*(int *)(*param_1 + lVar7) != 0 &&
             (plVar5 = *(longlong **)(*param_1 + -8 + lVar7), plVar5 != (longlong *)0x0))) {
        local_58 = *param_4;
        uStack_50 = param_4[1];
        local_68 = *param_3;
        uStack_64 = param_3[1];
        uStack_60 = param_3[2];
        uStack_5c = param_3[3];
        cVar3 = (**(code **)(*plVar5 + 0x60))(plVar5,param_2,&local_68,&local_58);
        if (cVar3 == '\0') break;
        lVar7 = lVar7 + -0x10;
        bVar2 = uVar6 < 2;
        uVar6 = uVar6 - 1;
        if (bVar2) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if ((local_6c & 1) != 0) goto LAB_148fa9ae2;
          goto LAB_148fa9af1;
        }
      }
      uVar4 = uVar6 - 1;
      plVar5 = (longlong *)CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
    } while (1 < uVar6);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fa9ae2:
    FUN_14474d06a(param_1,0);
  }
LAB_148fa9af1:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa9b1a FUN_148fa9b1a body=230 status=ok
// SIG undefined FUN_148fa9b1a(void)

undefined8 * FUN_148fa9b1a(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148fa9c02 FUN_148fa9c02 body=130 status=ok
// SIG undefined FUN_148fa9c02(void)

void FUN_148fa9c02(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa9c86 FUN_148fa9c86 body=230 status=ok
// SIG undefined FUN_148fa9c86(void)

undefined8 * FUN_148fa9c86(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148fa9d6e FUN_148fa9d6e body=130 status=ok
// SIG undefined FUN_148fa9d6e(void)

void FUN_148fa9d6e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fa9df2 FUN_148fa9df2 body=175 status=ok
// SIG undefined FUN_148fa9df2(void)

void FUN_148fa9df2(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148fa9e7b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fa9e7b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fa9ea2 FUN_148fa9ea2 body=230 status=ok
// SIG undefined FUN_148fa9ea2(void)

undefined8 * FUN_148fa9ea2(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148fa9f8a FUN_148fa9f8a body=130 status=ok
// SIG undefined FUN_148fa9f8a(void)

void FUN_148fa9f8a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148faa00e FUN_148faa00e body=193 status=ok
// SIG undefined FUN_148faa00e(void)

void FUN_148faa00e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148faa0a5;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148faa0a5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148faa0d0 FUN_148faa0d0 body=230 status=ok
// SIG undefined FUN_148faa0d0(void)

undefined8 * FUN_148faa0d0(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148faa1b8 FUN_148faa1b8 body=130 status=ok
// SIG undefined FUN_148faa1b8(void)

void FUN_148faa1b8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148faa23c FUN_148faa23c body=175 status=ok
// SIG undefined FUN_148faa23c(void)

void FUN_148faa23c(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148faa2c5;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148faa2c5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148faa2ec FUN_148faa2ec body=230 status=ok
// SIG undefined FUN_148faa2ec(void)

undefined8 * FUN_148faa2ec(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148faa3d4 FUN_148faa3d4 body=130 status=ok
// SIG undefined FUN_148faa3d4(void)

void FUN_148faa3d4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148faa458 FUN_148faa458 body=193 status=ok
// SIG undefined FUN_148faa458(void)

void FUN_148faa458(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148faa4ef;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148faa4ef:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148faa51a FUN_148faa51a body=230 status=ok
// SIG undefined FUN_148faa51a(void)

undefined8 * FUN_148faa51a(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148faa602 FUN_148faa602 body=130 status=ok
// SIG undefined FUN_148faa602(void)

void FUN_148faa602(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148faa686 FUN_148faa686 body=175 status=ok
// SIG undefined FUN_148faa686(void)

void FUN_148faa686(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148faa70f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148faa70f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148faa73a FUN_148faa73a body=382 status=ok
// SIG undefined FUN_148faa73a(void)

undefined8 * FUN_148faa73a(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  puVar1 = (undefined8 *)(param_1 + 0x30);
  if (((*(longlong *)(param_1 + 0x30) == 0) || (lVar6 = *(longlong *)(param_1 + 0x38), lVar6 == 0))
     || (*(int *)(lVar6 + 8) < 1)) {
    lVar6 = FUN_14001cc68(0x18,0x10);
    FUN_14439c768(lVar6,param_1);
    plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14ba41af0;
    plVar7[2] = lVar6;
    *(longlong *)(param_1 + 0x30) = lVar6;
    plVar8 = *(longlong **)(param_1 + 0x38);
    if (plVar8 != plVar7) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar8 = *(longlong **)(param_1 + 0x38);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x38) = plVar7;
      plVar8 = plVar7;
    }
    cVar4 = *(char *)(lVar6 + 8);
    if (cVar4 == '\x01') {
      *param_2 = 0;
      param_2[1] = plVar8;
      if (plVar8 != (longlong *)0x0) {
        iVar5 = (int)plVar8[1];
        do {
          if (iVar5 == 0) {
            param_2[1] = 0;
            goto LAB_148faa87d;
          }
          LOCK();
          iVar3 = (int)plVar8[1];
          bVar9 = iVar5 == iVar3;
          if (bVar9) {
            *(int *)(plVar8 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar9);
        if (param_2[1] != 0) {
          *param_2 = *puVar1;
        }
      }
    }
    else {
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
    }
LAB_148faa87d:
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    if (cVar4 == '\0') {
      *param_2 = 0;
      param_2[1] = 0;
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = lVar6;
    iVar5 = *(int *)(lVar6 + 8);
    do {
      if (iVar5 == 0) {
        param_2[1] = 0;
        return param_2;
      }
      LOCK();
      iVar3 = *(int *)(lVar6 + 8);
      bVar9 = iVar5 == iVar3;
      if (bVar9) {
        *(int *)(lVar6 + 8) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar9);
    if (param_2[1] != 0) {
      *param_2 = *puVar1;
    }
  }
  return param_2;
}



// FUNCTION 148faa8b8 FUN_148faa8b8 body=40 status=ok
// SIG undefined FUN_148faa8b8(void)

void FUN_148faa8b8(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148faa8d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  return;
}



// FUNCTION 148faa8e2 FUN_148faa8e2 body=57 status=ok
// SIG undefined FUN_148faa8e2(void)

longlong * FUN_148faa8e2(longlong *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 148faa91c FUN_148faa91c body=57 status=ok
// SIG undefined FUN_148faa91c(void)

longlong * FUN_148faa91c(longlong *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 148faa955 FUN_148faa955 body=38 status=ok
// SIG undefined FUN_148faa955(void)

void FUN_148faa955(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamGameServer_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateGameServerInterface(uVar2,"SteamGameServer015");
  *param_1 = uVar1;
  return;
}



// FUNCTION 148faa97c FUN_148faa97c body=36 status=ok
// SIG undefined FUN_148faa97c(void)

undefined8 FUN_148faa97c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148faa9bc FUN_148faa9bc body=93 status=ok
// SIG undefined FUN_148faa9bc(void)

void FUN_148faa9bc(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
             ::vftable;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = 0x14ba41a20;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  return;
}



// FUNCTION 148faaa1a FUN_148faaa1a body=123 status=ok
// SIG undefined FUN_148faaa1a(void)

void FUN_148faaa1a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  p_Var1->Type = 0x1a20;
  p_Var1->CreatorBackTraceIndex = 0x4ba4;
  *(undefined4 *)&p_Var1->field_0x4 = 1;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148faaa96 FUN_148faaa96 body=21 status=ok
// SIG undefined FUN_148faaa96(void)

undefined8 FUN_148faaa96(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148faaab0 FUN_148faaab0 body=61 status=ok
// SIG undefined FUN_148faaab0(void)

void FUN_148faaab0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (cVar2 != '\0') {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    thunk_FUN_1400020a8(plVar1,0x18);
    return;
  }
  return;
}



// FUNCTION 148faaaee FUN_148faaaee body=34 status=ok
// SIG undefined FUN_148faaaee(void)

undefined8 FUN_148faaaee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 148faab24 FUN_148faab24 body=173 status=ok
// SIG undefined FUN_148faab24(void)

longlong * FUN_148faab24(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  puVar5 = (undefined1 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
  iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
  if (0 < iVar4) {
    do {
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_1447403be(param_2,iVar4);
      }
      *(undefined1 *)(*param_2 + (longlong)iVar4) = *puVar5;
      puVar5 = puVar5 + 1;
      lVar3 = param_2[1];
      iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
    } while ((int)lVar3 < iVar4);
    uVar2 = *(uint *)(param_2 + 1);
    if (1 < (longlong)(int)uVar2) {
      puVar5 = (undefined1 *)*param_2;
      lVar3 = (longlong)(int)uVar2 + -1;
      lVar7 = 0;
      puVar6 = puVar5;
      do {
        uVar1 = *puVar6;
        *puVar6 = puVar5[lVar7 + lVar3];
        puVar5[lVar7 + lVar3] = uVar1;
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 1;
      } while (-lVar7 != (ulonglong)(uVar2 >> 1));
    }
  }
  return param_2;
}



// FUNCTION 148faabd2 FUN_148faabd2 body=334 status=ok
// SIG undefined FUN_148faabd2(void)

void FUN_148faabd2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  void *_Src;
  undefined8 uVar4;
  longlong *plVar5;
  byte *pbVar6;
  size_t _Size;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte *local_50;
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  local_50 = (byte *)0x0;
  local_48 = *(uint *)(param_2 + 1);
  _Size = (size_t)(int)local_48;
  _Src = (void *)*param_2;
  if (_Size == 0) {
    local_44 = 0;
  }
  else {
    FUN_1447a127e(&local_50,local_48,0);
    memcpy(local_50,_Src,_Size);
    if (1 < (int)local_48) {
      lVar7 = 0;
      pbVar6 = local_50;
      do {
        bVar3 = *pbVar6;
        *pbVar6 = local_50[lVar7 + ((ulonglong)local_48 - 1)];
        local_50[lVar7 + ((ulonglong)local_48 - 1)] = bVar3;
        lVar7 = lVar7 + -1;
        pbVar6 = pbVar6 + 1;
      } while (-lVar7 != (ulonglong)(local_48 >> 1));
    }
    if (0 < (int)local_48) {
      lVar7 = 0;
      local_40 = 0;
      pbVar6 = local_50;
      do {
        local_40 = local_40 | (ulonglong)*pbVar6 << ((byte)lVar7 & 0x3f);
        lVar7 = lVar7 + 8;
        pbVar6 = pbVar6 + 1;
      } while ((ulonglong)local_48 << 3 != lVar7);
    }
  }
  FUN_141904fbe(&local_68,&local_40);
  uVar4 = *(undefined8 *)(param_1 + 8);
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_5c,uStack_60);
  local_38._0_4_ = (undefined4)uVar4;
  local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_30._0_4_ = SUB84(plVar5,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
  local_68 = (undefined4)local_38;
  uStack_64 = local_38._4_4_;
  uStack_60 = (undefined4)uStack_30;
  uStack_5c = uStack_30._4_4_;
  local_38 = uVar4;
  uStack_30 = plVar5;
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
  if (local_50 != (byte *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148faad22 FUN_148faad22 body=896 status=ok
// SIG undefined FUN_148faad22(void)

void FUN_148faad22(longlong param_1,undefined8 param_2,char *param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  wchar_t wVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  char cVar7;
  int iVar8;
  wchar_t *pwVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  undefined8 uStack_70;
  wchar_t *local_68;
  longlong *plStack_60;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_3 = '\0';
  FUN_140056680(&local_58);
  local_68 = (wchar_t *)0x0;
  plStack_60 = (longlong *)0x0;
  cVar7 = FUN_144a791f8(&local_58,L"steam.",6,1);
  if (cVar7 == '\0') {
    iVar8 = local_50 + -1;
    if (local_50 == 0) {
      iVar8 = 0;
    }
    FUN_1402980a2(&local_68,local_58,iVar8);
  }
  else {
    uVar13 = local_50 - 1;
    puVar6 = local_58;
    if (local_50 == 0) {
      uVar13 = 0;
      puVar6 = &DAT_149dfb77a;
    }
    uVar10 = 6;
    if ((int)uVar13 < 6) {
      uVar10 = uVar13;
    }
    uVar11 = (ulonglong)uVar10;
    if ((int)uVar10 < 1) {
      uVar11 = 0;
    }
    FUN_14006620a(&local_48,puVar6 + uVar11,uVar13 - (int)uVar11);
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_68 = local_48;
    plStack_60 = uStack_40;
  }
  local_78 = (wchar_t *)0x0;
  uStack_70 = 0;
  local_88 = (wchar_t *)0x0;
  uStack_80 = 0;
  FUN_1400b22c2(&local_48,L":Asset");
  local_b0 = 1;
  local_b8 = 0;
  cVar7 = FUN_1407cdbc6(&local_68,&local_48,&local_78,&local_88);
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (cVar7 == '\0') {
    pwVar9 = local_68;
    if ((int)plStack_60 == 0) {
      pwVar9 = L"";
    }
    local_90 = _wtoi64(pwVar9);
    if (local_90 != 0) {
      FUN_148fab0a4(&local_a8,&local_90);
      pwVar9 = *(wchar_t **)(param_1 + 8);
      plVar5 = *(longlong **)(param_1 + 0x10);
      *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_a4,local_a8);
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_9c,uStack_a0);
      local_48._0_4_ = SUB84(pwVar9,0);
      local_48._4_4_ = (undefined4)((ulonglong)pwVar9 >> 0x20);
      uStack_40._0_4_ = SUB84(plVar5,0);
      uStack_40._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
      local_a8 = (undefined4)local_48;
      uStack_a4 = local_48._4_4_;
      uStack_a0 = (undefined4)uStack_40;
      uStack_9c = uStack_40._4_4_;
      local_48 = pwVar9;
      uStack_40 = plVar5;
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
      *param_3 = '\x01';
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    goto LAB_148faaf40;
  }
  pwVar9 = local_78;
  if ((int)uStack_70 == 0) {
    pwVar9 = L"";
  }
  local_90 = _wtoi64(pwVar9);
  if (local_90 == 0) goto LAB_148faaf40;
  FUN_148fab0a4(&local_a8);
  pwVar9 = *(wchar_t **)(param_1 + 8);
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_a4,local_a8);
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_9c,uStack_a0);
  local_48._0_4_ = SUB84(pwVar9,0);
  local_48._4_4_ = (undefined4)((ulonglong)pwVar9 >> 0x20);
  uStack_40._0_4_ = SUB84(plVar5,0);
  uStack_40._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
  local_a8 = (undefined4)local_48;
  uStack_a4 = local_48._4_4_;
  uStack_a0 = (undefined4)uStack_40;
  uStack_9c = uStack_40._4_4_;
  local_48 = pwVar9;
  uStack_40 = plVar5;
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
  pwVar9 = local_88;
  if ((int)uStack_80 == 0) {
    pwVar9 = L"";
  }
  iVar8 = _wtoi(pwVar9);
  if (iVar8 == 0) {
    pwVar9 = local_88;
    if ((int)uStack_80 == 0) {
      pwVar9 = L"";
    }
    lVar12 = 0;
    do {
      wVar4 = pwVar9[lVar12];
      bVar3 = (&DAT_149dfd150)[lVar12];
      iVar14 = (uint)(ushort)wVar4 - (uint)bVar3;
      if (iVar14 == 0) {
        if (wVar4 == L'\0') break;
      }
      else {
        if (0x7f < ((uint)bVar3 | (uint)(ushort)wVar4)) goto LAB_148fab08e;
        if ((&DAT_149e05da0)[(ushort)wVar4] != (&DAT_149e05da0)[bVar3]) goto code_r0x000148fab08b;
      }
      lVar12 = lVar12 + 1;
    } while( true );
  }
  goto LAB_148fab02d;
code_r0x000148fab08b:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[(ushort)wVar4] - (uint)(byte)(&DAT_149e05da0)[bVar3];
LAB_148fab08e:
  if (iVar14 != 0) goto LAB_148faaf40;
LAB_148fab02d:
  *(int *)(param_1 + 0x18) = iVar8;
  *param_3 = '\x01';
LAB_148faaf40:
  if (*param_3 == '\x01') {
    cVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  }
  else {
    cVar7 = '\0';
  }
  *param_3 = cVar7;
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fab0a4 FUN_148fab0a4 body=207 status=ok
// SIG undefined FUN_148fab0a4(void)

undefined8 * FUN_148fab0a4(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  uVar2 = *param_2;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_14ba46f50;
  puVar4[3] = uVar2;
  *param_1 = puVar4;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba46fb0;
  plVar5[2] = (longlong)puVar4;
  param_1[1] = plVar5;
  if (puVar4 != (undefined8 *)0x0) {
    if (plVar5 == (longlong *)0x0) {
      puVar4[1] = puVar4;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      puVar4[1] = puVar4;
      if ((longlong *)puVar4[2] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar3 = (longlong *)puVar4[2];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        puVar4[2] = plVar5;
      }
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
    }
  }
  return param_1;
}


