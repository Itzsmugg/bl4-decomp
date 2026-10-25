// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14428c6fa FUN_14428c6fa body=20 status=ok
// SIG undefined FUN_14428c6fa(void)

undefined1 FUN_14428c6fa(longlong param_1)

{
  FUN_14127c124(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14428c70e FUN_14428c70e body=29 status=ok
// SIG undefined FUN_14428c70e(void)

undefined8 FUN_14428c70e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428c740 FUN_14428c740 body=93 status=ok
// SIG undefined FUN_14428c740(void)

void FUN_14428c740(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b45f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14428c79e FUN_14428c79e body=93 status=ok
// SIG undefined FUN_14428c79e(void)

void FUN_14428c79e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b45f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14428c7fc FUN_14428c7fc body=126 status=ok
// SIG undefined FUN_14428c7fc(void)

void FUN_14428c7fc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b45f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014428c86b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428c884 FUN_14428c884 body=20 status=ok
// SIG undefined FUN_14428c884(void)

undefined1 FUN_14428c884(longlong param_1)

{
  FUN_14127c124(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14428c898 FUN_14428c898 body=29 status=ok
// SIG undefined FUN_14428c898(void)

undefined8 FUN_14428c898(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428c8ca FUN_14428c8ca body=93 status=ok
// SIG undefined FUN_14428c8ca(void)

void FUN_14428c8ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4660;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14428c928 FUN_14428c928 body=93 status=ok
// SIG undefined FUN_14428c928(void)

void FUN_14428c928(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4660;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14428c986 FUN_14428c986 body=126 status=ok
// SIG undefined FUN_14428c986(void)

void FUN_14428c986(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b4660;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014428c9f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428ca0e FUN_14428ca0e body=20 status=ok
// SIG undefined FUN_14428ca0e(void)

undefined1 FUN_14428ca0e(longlong param_1)

{
  FUN_14127c124(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14428ca22 FUN_14428ca22 body=29 status=ok
// SIG undefined FUN_14428ca22(void)

undefined8 FUN_14428ca22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428ca54 FUN_14428ca54 body=101 status=ok
// SIG undefined FUN_14428ca54(void)

void FUN_14428ca54(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b46d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14428caba FUN_14428caba body=101 status=ok
// SIG undefined FUN_14428caba(void)

void FUN_14428caba(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b46d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14428cb20 FUN_14428cb20 body=134 status=ok
// SIG undefined FUN_14428cb20(void)

void FUN_14428cb20(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b46d0;
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
                    /* WARNING: Could not recover jumptable at 0x00014428cb97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428cba6 FUN_14428cba6 body=65 status=ok
// SIG undefined FUN_14428cba6(void)

void FUN_14428cba6(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_14428cc2c(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14428cbe8 FUN_14428cbe8 body=67 status=ok
// SIG undefined FUN_14428cbe8(void)

undefined8 FUN_14428cbe8(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_14428cc2c(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14428cc2c FUN_14428cc2c body=58 status=ok
// SIG undefined FUN_14428cc2c(void)

void FUN_14428cc2c(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((int)param_1[2] != *param_2) {
    return;
  }
  lVar1 = *param_1;
  uVar2 = FUN_14586ca54(param_1[1]);
  FUN_14586fca4(lVar1 + 0x1e0,uVar2);
  FUN_14127c124(lVar1);
  return;
}



// FUNCTION 14428cc66 FUN_14428cc66 body=29 status=ok
// SIG undefined FUN_14428cc66(void)

undefined8 FUN_14428cc66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428cc98 FUN_14428cc98 body=101 status=ok
// SIG undefined FUN_14428cc98(void)

void FUN_14428cc98(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b4740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14428ccfe FUN_14428ccfe body=101 status=ok
// SIG undefined FUN_14428ccfe(void)

void FUN_14428ccfe(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b4740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14428cd64 FUN_14428cd64 body=134 status=ok
// SIG undefined FUN_14428cd64(void)

void FUN_14428cd64(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b4740;
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
                    /* WARNING: Could not recover jumptable at 0x00014428cddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428cdea FUN_14428cdea body=53 status=ok
// SIG undefined FUN_14428cdea(void)

void FUN_14428cdea(longlong param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0x28) == param_2) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    cVar2 = FUN_14127cf7e(uVar1,*(undefined8 *)(param_1 + 0x20),param_2);
    if (cVar2 != '\0') {
      FUN_14127c124(uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14428ce20 FUN_14428ce20 body=49 status=ok
// SIG undefined FUN_14428ce20(void)

undefined1 FUN_14428ce20(longlong param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0x28) == param_2) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    cVar2 = FUN_14127cf7e(uVar1,*(undefined8 *)(param_1 + 0x20),param_2);
    if (cVar2 != '\0') {
      FUN_14127c124(uVar1);
    }
  }
  return 1;
}



// FUNCTION 14428ce52 FUN_14428ce52 body=52 status=ok
// SIG undefined FUN_14428ce52(void)

undefined8 FUN_14428ce52(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *param_1;
  FUN_140b63f22(lVar2);
  plVar3 = *(longlong **)(lVar2 + 0x70);
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  return 0;
}



// FUNCTION 14428ce90 FUN_14428ce90 body=12 status=ok
// SIG undefined FUN_14428ce90(void)

void FUN_14428ce90(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014428ce99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14428ce9c FUN_14428ce9c body=29 status=ok
// SIG undefined FUN_14428ce9c(void)

undefined8 FUN_14428ce9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428ceba FUN_14428ceba body=281 status=ok
// SIG undefined FUN_14428ceba(void)

void FUN_14428ceba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140b6c1c2(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x70);
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
  plVar3 = *(longlong **)(param_1 + 0x60);
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
  plVar3 = *(longlong **)(param_1 + 0x48);
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
  plVar3 = *(longlong **)(param_1 + 0x28);
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
                    /* WARNING: Could not recover jumptable at 0x00014428cfc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14428cfd4 FUN_14428cfd4 body=29 status=ok
// SIG undefined FUN_14428cfd4(void)

undefined8 FUN_14428cfd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428cff2 FUN_14428cff2 body=69 status=ok
// SIG undefined FUN_14428cff2(void)

undefined8 * FUN_14428cff2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9b4860;
  FUN_140cb1696(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428d1b6 FUN_14428d1b6 body=170 status=ok
// SIG undefined FUN_14428d1b6(void)

void FUN_14428d1b6(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b972ed0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9b4860;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if (iVar1 != 0) {
    FUN_140b70aa4(puVar2 + 5,iVar1,0);
    FUN_140b709f1(puVar2[5],uVar3,iVar1);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 14428d260 FUN_14428d260 body=170 status=ok
// SIG undefined FUN_14428d260(void)

void FUN_14428d260(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b972ed0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9b4860;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if (iVar1 != 0) {
    FUN_140b70aa4(puVar2 + 5,iVar1,0);
    FUN_140b709f1(puVar2[5],uVar3,iVar1);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 14428d30a FUN_14428d30a body=204 status=ok
// SIG undefined FUN_14428d30a(void)

void FUN_14428d30a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b972ed0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b9b4860;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_140b70aa4(&p_Var2->Flags,iVar1,0);
    uVar4._0_4_ = p_Var2->Flags;
    uVar4._4_2_ = p_Var2->CreatorBackTraceIndexHigh;
    uVar4._6_2_ = p_Var2->SpareWORD;
    FUN_140b709f1(uVar4,uVar3,iVar1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014428d3c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428d3e0 FUN_14428d3e0 body=278 status=ok
// SIG undefined FUN_14428d3e0(void)

undefined8 FUN_14428d3e0(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_14428d4f0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14428d4f0;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14428d4f0:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14428d4a3;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14428d4f8(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_14428d4a3;
    }
  }
  uVar6 = 0;
LAB_14428d4a3:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14428d4f8 FUN_14428d4f8 body=1220 status=ok
// SIG undefined FUN_14428d4f8(void)

void FUN_14428d4f8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  void *_Src;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)*param_1;
  lVar10 = *param_2;
  if (lVar10 == DAT_14cbd7010) {
    cVar5 = FUN_140b6c352(plVar2);
    if (cVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
    }
    local_58 = 0;
    uStack_50 = 0;
    lVar10 = (longlong)plVar2 + 0x44;
    lVar7 = FUN_140059518(lVar10);
    if (lVar7 != 0) {
      lVar8 = FUN_14030d4a0();
      if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
           ) == lVar8 + 0x30)) {
        lVar8 = (**(code **)(*plVar2 + 0x180))(plVar2);
        if ((((lVar8 != 0) &&
             ((*(longlong *)(lVar8 + 0x1f0) != 0 && (lVar8 = FUN_140cb14ac(), lVar8 != 0)))) &&
            (lVar8 = *(longlong *)(lVar8 + 0x30), lVar8 != 0)) &&
           ((((lVar9 = (**(code **)(*plVar2 + 0x180))(plVar2), lVar9 != 0 &&
              (*(longlong *)(lVar9 + 0x1f0) != 0)) && (lVar9 = FUN_140d6e14c(), lVar9 != 0)) &&
            (local_78 = *(longlong *)(lVar9 + 0x30), local_78 != 0)))) {
          local_84 = *(undefined4 *)(lVar7 + 0xe0);
          FUN_140b6fd58(lVar8,&local_68);
          lVar8 = local_68;
          if ((longlong)local_60 == 0) {
            local_60 = 0;
          }
          else {
            local_70 = (longlong)local_60 * 0x38;
            lVar9 = 0;
            local_80 = lVar10;
            do {
              if ((((*(longlong *)(lVar8 + 0x10 + lVar9) == 0) ||
                   (cVar5 = FUN_140b70752(local_78,local_84), cVar5 == '\0')) ||
                  (cVar5 = FUN_14586c374(lVar7,*(undefined8 *)(lVar8 + 0x10 + lVar9)), cVar5 == '\0'
                  )) && ((*(longlong *)(lVar8 + lVar9) == 0 ||
                         (cVar5 = FUN_14586c374(lVar7), cVar5 == '\0')))) {
                uVar4 = uStack_50;
                lVar10 = (longlong)(int)uStack_50;
                uVar6 = (int)uStack_50 + 1;
                uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
                if (uStack_50._4_4_ < uVar6) {
                  FUN_140cb3cca(&local_58,uVar4 & 0xffffffff);
                }
                lVar10 = lVar10 * 0x38;
                *(undefined8 *)(local_58 + lVar10) = *(undefined8 *)(lVar8 + lVar9);
                lVar3 = *(longlong *)(lVar8 + 8 + lVar9);
                *(longlong *)(local_58 + 8 + lVar10) = lVar3;
                if (lVar3 != 0) {
                  LOCK();
                  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
                  UNLOCK();
                }
                lVar10 = local_58 + lVar10;
                *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar8 + 0x10 + lVar9);
                lVar3 = *(longlong *)(lVar8 + 0x18 + lVar9);
                *(longlong *)(lVar10 + 0x18) = lVar3;
                if (lVar3 != 0) {
                  LOCK();
                  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
                  UNLOCK();
                }
                *(undefined8 *)(lVar10 + 0x20) = 0;
                iVar1 = *(int *)(lVar8 + 0x28 + lVar9);
                _Src = *(void **)(lVar8 + 0x20 + lVar9);
                *(int *)(lVar10 + 0x28) = iVar1;
                if ((longlong)iVar1 == 0) {
                  *(undefined4 *)(lVar10 + 0x2c) = 0;
                }
                else {
                  FUN_1446dd670((undefined8 *)(lVar10 + 0x20),iVar1,0);
                  memcpy(*(void **)(lVar10 + 0x20),_Src,(longlong)iVar1 * 2);
                }
                *(undefined2 *)(lVar10 + 0x30) = *(undefined2 *)(lVar8 + 0x30 + lVar9);
              }
              lVar9 = lVar9 + 0x38;
              lVar10 = local_80;
            } while (local_70 != lVar9);
          }
          FUN_140cb1696(local_68,local_60);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          if ((int)uStack_50 != 0) {
            FUN_148e48c0e(plVar2,&local_58);
          }
        }
        lVar10 = FUN_1408bb964(lVar10);
        if ((lVar10 != 0) && (lVar10 = *(longlong *)(lVar10 + 0x48), lVar10 != 0)) {
          lVar8 = FUN_140b6d0be();
          if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
            FUN_148d99c26(lVar10,*(undefined4 *)(lVar7 + 0xe0));
          }
        }
      }
    }
    FUN_140cb1696(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else if (lVar10 == DAT_14cbd7090) {
    cVar5 = FUN_148e485a8(plVar2);
    if (cVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
    }
    lVar10 = FUN_140059518((longlong)plVar2 + 0x44);
    if (lVar10 != 0) {
      lVar7 = FUN_14030d4a0();
      if ((((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
          (lVar10 = FUN_1408bb964((longlong)plVar2 + 0x44), lVar10 != 0)) &&
         (lVar10 = *(longlong *)(lVar10 + 0x48), lVar10 != 0)) {
        lVar7 = FUN_140b6d0be();
        lVar10 = *(longlong *)(lVar10 + 0x10);
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
            lVar7 + 0x30)) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
        }
      }
    }
  }
  else if (lVar10 == DAT_14cbd7098) {
    lVar10 = FUN_140059518((longlong)plVar2 + 0x44);
    if (lVar10 != 0) {
      lVar7 = FUN_14030d4a0();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
        cVar5 = FUN_14662f7ba(lVar10,param_1 + 1);
        if ((cVar5 != '\0') &&
           (((lVar10 = (**(code **)(*plVar2 + 0x180))(plVar2), lVar10 != 0 &&
             (*(longlong *)(lVar10 + 0x1f0) != 0)) && (lVar10 = FUN_14583d3ae(), lVar10 != 0)))) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
        }
        goto LAB_14428d5ab;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
LAB_14428d5ab:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14428da3e FUN_14428da3e body=31 status=ok
// SIG undefined FUN_14428da3e(void)

undefined8 FUN_14428da3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428da5e FUN_14428da5e body=87 status=ok
// SIG undefined FUN_14428da5e(void)

undefined8 * FUN_14428da5e(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *in_stack_00000028;
  
  *param_1 = 0;
  iVar1 = *(int *)(in_stack_00000028 + 1);
  _Src = (void *)*in_stack_00000028;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14428dae0 FUN_14428dae0 body=29 status=ok
// SIG undefined FUN_14428dae0(void)

undefined8 FUN_14428dae0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428dafe FUN_14428dafe body=29 status=ok
// SIG undefined FUN_14428dafe(void)

undefined8 FUN_14428dafe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428dc9a FUN_14428dc9a body=93 status=ok
// SIG undefined FUN_14428dc9a(void)

void FUN_14428dc9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b507390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4a40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14428dcf8 FUN_14428dcf8 body=93 status=ok
// SIG undefined FUN_14428dcf8(void)

void FUN_14428dcf8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b507390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4a40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14428dd56 FUN_14428dd56 body=126 status=ok
// SIG undefined FUN_14428dd56(void)

void FUN_14428dd56(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b507390;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b4a40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014428ddc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428ddd4 FUN_14428ddd4 body=66 status=ok
// SIG undefined FUN_14428ddd4(void)

void FUN_14428ddd4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14428df30(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14428de18 FUN_14428de18 body=279 status=ok
// SIG undefined FUN_14428de18(void)

undefined8 FUN_14428de18(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_14428df29;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14428df29;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14428df29:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14428dedd;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14428df30(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_14428dedd;
    }
  }
  uVar6 = 0;
LAB_14428dedd:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14428df30 FUN_14428df30 body=6066 status=ok
// SIG undefined FUN_14428df30(void)

void FUN_14428df30(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  byte bVar4;
  void *pvVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  longlong lVar11;
  wchar_t *_Str;
  undefined1 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  undefined2 *puVar17;
  ushort uVar18;
  uint uVar19;
  int iVar20;
  ushort uVar21;
  ulonglong uVar22;
  PSRWLOCK SRWLock;
  longlong lVar23;
  longlong *plVar24;
  double dVar25;
  undefined1 auStack_3b8 [32];
  uint local_398;
  undefined4 local_390;
  undefined4 local_388;
  undefined8 local_380;
  undefined2 *local_378;
  undefined1 *local_370;
  undefined1 *local_368;
  undefined8 *local_360;
  undefined1 *local_358;
  code *local_350;
  longlong local_348;
  uint local_340;
  int local_33c;
  longlong local_338;
  longlong local_330;
  longlong local_328;
  PSRWLOCK local_320;
  longlong local_318;
  longlong local_310;
  undefined8 local_308;
  int local_300;
  undefined8 local_2f8;
  int local_2f0;
  undefined8 local_2e8;
  int local_2e0;
  undefined8 local_2d8;
  int local_2d0;
  undefined8 local_2c8;
  int local_2c0;
  undefined8 local_2b8;
  int local_2b0;
  undefined8 local_2a8;
  int local_2a0;
  void *local_298;
  uint local_290;
  void *local_288;
  uint local_280;
  longlong local_278 [2];
  undefined2 *local_268;
  int local_260;
  int local_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  longlong *local_248;
  longlong *plStack_240;
  undefined8 local_230;
  longlong *local_228 [3];
  undefined1 local_210 [16];
  int local_200;
  undefined1 local_1f8 [16];
  int local_1e8;
  undefined1 local_1e0 [16];
  int local_1d0;
  undefined1 local_1c8 [16];
  int local_1b8;
  undefined1 local_1b0 [16];
  int local_1a0;
  undefined1 local_198 [16];
  int local_188;
  undefined1 local_180 [16];
  int local_170;
  undefined1 local_158 [8];
  int local_150;
  int local_148;
  undefined1 local_140 [8];
  int local_138;
  int local_130;
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  undefined1 local_f8 [24];
  float local_e0;
  int local_dc;
  longlong local_d8;
  int local_d0;
  longlong local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [32];
  longlong local_90;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  lVar23 = *param_2;
  if ((lVar23 != 0) && (lVar16 = *param_1, *(int *)(lVar16 + 0x44) != 0)) {
    FUN_1449027d0(lVar16,&local_230);
    lVar11 = *(longlong *)(local_230 + 0x300);
    SRWLock = (PSRWLOCK)(lVar11 + 0x48);
    AcquireSRWLockExclusive(SRWLock);
    *(int *)(lVar11 + 0x40) = *(int *)(lVar11 + 0x40) + 1;
    if (local_228[0] != (longlong *)0x0) {
      LOCK();
      plVar24 = local_228[0] + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)*plVar24 == 0) {
        (**(code **)*local_228[0])(local_228[0]);
        LOCK();
        piVar1 = (int *)((longlong)local_228[0] + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_228[0] + 0x10))(local_228[0]);
        }
      }
    }
    if (0 < *(int *)(lVar23 + 0x2d0)) {
      lVar14 = *(longlong *)(lVar16 + 0x20);
      if (lVar14 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_230 = FUN_141030f22;
          local_350 = FUN_14081d0ea;
          local_358 = &LAB_1459f2e4c;
          local_368 = &LAB_148c39de3;
          local_370 = &LAB_1457a9eb2;
          local_378 = &DAT_149e063b2;
          local_380 = 0;
          local_388 = 0x10000004;
          local_390 = 0x10;
          local_398 = 0x3de0;
          local_360 = &local_230;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
          FUN_1403ca8ec(lVar14 + 0xd98,&DAT_14cbd9350);
        }
      }
      FUN_140056680(&local_70,&DAT_149dfb77a);
      FUN_140056680(&local_80,&DAT_149dfb77a);
      if ((longlong)*(int *)(lVar23 + 0x2d0) != 0) {
        lVar14 = *(longlong *)(lVar23 + 0x2c8);
        local_318 = lVar14 + (longlong)*(int *)(lVar23 + 0x2d0) * 0x48;
        local_33c = 0;
        local_338 = lVar16;
        local_330 = lVar11;
        local_328 = lVar23;
        local_320 = SRWLock;
LAB_14428e0b6:
        local_310 = lVar14;
        FUN_146645a86(&local_c8);
        uVar9 = FUN_146645bc2(&local_230);
        if ((longlong)local_88 != 0) {
          lVar23 = (longlong)local_88 * 0x10 + local_90;
          local_340 = (uint)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
          lVar16 = local_90;
          local_348 = lVar23;
LAB_14428e108:
          local_248 = (longlong *)0x0;
          plStack_240 = (longlong *)0x0;
          FUN_1403de9f2(lVar16,&local_248,&DAT_149e35204);
          plVar24 = local_248;
          if ((int)plStack_240 < 2) goto LAB_14428ef1a;
          plVar2 = local_248 + 2;
          iVar8 = (int)local_248[3];
          if (iVar8 != DAT_14cbd79d8) {
            if (DAT_14cbd79d8 + iVar8 == 1) goto LAB_14428e1be;
LAB_14428e1cb:
            iVar20 = (int)local_248[1];
            if (iVar20 != DAT_14cbd7998) {
              if (DAT_14cbd7998 + iVar20 == 1) goto LAB_14428e241;
LAB_14428e2a8:
              if (iVar20 == DAT_14cbd79a8) {
                if (1 < iVar20) {
                  lVar23 = 0;
                  while( true ) {
                    uVar18 = *(ushort *)(*local_248 + lVar23);
                    uVar21 = *(ushort *)(DAT_14cbd79a0 + lVar23);
                    if (uVar18 != uVar21) break;
                    if (uVar18 == 0) goto LAB_14428e31e;
LAB_14428e2df:
                    lVar23 = lVar23 + 2;
                  }
                  if ((uVar21 | uVar18) < 0x80) {
                    if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[(uint)uVar21])
                    goto LAB_14428e2df;
                    iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar18] -
                            (uint)(byte)(&DAT_149e05da0)[(uint)uVar21];
                  }
                  else {
                    iVar7 = (uint)uVar18 - (uint)uVar21;
                  }
                  if (iVar7 != 0) goto LAB_14428e503;
                }
LAB_14428e31e:
                if (DAT_14cbd8f00 == 0) {
                  lVar23 = 0;
                }
                else {
                  lVar23 = FUN_144815d88();
                  iVar8 = (int)local_248[3];
                }
                local_258 = (undefined2 *)0x0;
                pvVar5 = (void *)local_248[2];
                uStack_250 = (longlong *)CONCAT44(uStack_250._4_4_,iVar8);
                if (iVar8 == 0) {
                  uStack_250 = (longlong *)0x0;
                  iVar8 = 0;
                }
                else {
                  FUN_1446dd670(&local_258,iVar8,0);
                  memcpy(local_258,pvVar5,(longlong)iVar8 * 2);
                  iVar8 = (uint)uStack_250;
                }
                puVar17 = local_258;
                uVar13 = 0;
                iVar20 = iVar8 + -1;
                if (iVar8 == 0) {
                  iVar20 = 0;
                }
                if (0 < iVar20) {
                  puVar10 = local_258;
                  if (iVar8 == 0) {
                    puVar10 = &DAT_149dfb77a;
                  }
                  lVar11 = 0;
                  uVar13 = 0;
                  do {
                    uVar15 = ((uint)(0x19 < (ushort)puVar10[lVar11] - 0x61) * 0x20 +
                             (uint)(ushort)puVar10[lVar11]) - 0x20;
                    uVar19 = (uint)(uVar13 >> 8) ^
                             *(uint *)(&DAT_14c75d150 +
                                      (ulonglong)(((uint)uVar13 ^ uVar15) & 0xff) * 4);
                    uVar13 = (ulonglong)
                             (uVar19 >> 8 ^
                             *(uint *)(&DAT_14c75d150 +
                                      (ulonglong)(uVar19 & 0xff ^ uVar15 >> 8 & 0xff) * 4));
                    lVar11 = lVar11 + 1;
                  } while (iVar20 != (int)lVar11);
                }
                plVar24 = (longlong *)(lVar23 + 0x68);
                iVar7 = FUN_148e5377c(plVar24,uVar13,&local_258);
                if (iVar7 != -1) {
                  local_130 = local_130 + 1;
                  if (iVar20 < 1) {
                    uVar13 = 0;
                  }
                  else {
                    if (iVar8 == 0) {
                      puVar17 = &DAT_149dfb77a;
                    }
                    lVar23 = 0;
                    uVar13 = 0;
                    do {
                      uVar15 = ((uint)(ushort)puVar17[lVar23] +
                               (uint)(0x19 < (ushort)puVar17[lVar23] - 0x61) * 0x20) - 0x20;
                      uVar19 = (uint)(uVar13 >> 8) ^
                               *(uint *)(&DAT_14c75d150 +
                                        (ulonglong)(((uint)uVar13 ^ uVar15) & 0xff) * 4);
                      uVar13 = (ulonglong)
                               (uVar19 >> 8 ^
                               *(uint *)(&DAT_14c75d150 +
                                        (ulonglong)(uVar19 & 0xff ^ uVar15 >> 8 & 0xff) * 4));
                      lVar23 = lVar23 + 1;
                    } while (iVar20 != (int)lVar23);
                  }
                  iVar8 = FUN_148e5377c(plVar24,uVar13,&local_258);
                  if (iVar8 == -1) {
                    lVar23 = 0;
                  }
                  else {
                    lVar23 = (longlong)iVar8 * 0x40 + *plVar24;
                  }
                  FUN_140390f7a(lVar23 + 0x10,local_140);
                  local_230._0_2_ = CONCAT11(1,(undefined1)local_230);
                  puVar17 = local_258;
                }
                goto LAB_14428e6f5;
              }
              if (DAT_14cbd79a8 + iVar20 == 1) goto LAB_14428e31e;
LAB_14428e503:
              if ((int)plStack_240 != 2) {
                if (iVar20 == DAT_14cbd7928) {
                  if (1 < iVar20) {
                    lVar23 = 0;
                    while( true ) {
                      uVar18 = *(ushort *)(*local_248 + lVar23);
                      uVar21 = *(ushort *)(DAT_14cbd7920 + lVar23);
                      if (uVar18 != uVar21) break;
                      if (uVar18 == 0) goto LAB_14428e8ff;
LAB_14428e74c:
                      lVar23 = lVar23 + 2;
                    }
                    if ((uVar21 | uVar18) < 0x80) {
                      if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[(uint)uVar21])
                      goto LAB_14428e74c;
                      iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar18] -
                              (uint)(byte)(&DAT_149e05da0)[(uint)uVar21];
                    }
                    else {
                      iVar7 = (uint)uVar18 - (uint)uVar21;
                    }
                    if (iVar7 != 0) goto LAB_14428e78d;
                  }
LAB_14428e8ff:
                  FUN_1400b22c2(local_278,&DAT_14afb88ae);
                  FUN_1407ec8fc(&local_268,local_248 + 2,local_278);
                  iVar20 = local_25c;
                  iVar8 = local_260;
                  if (local_260 < 2) {
                    local_258 = (undefined2 *)0x0;
                    uVar15 = *(uint *)(plVar24 + 5);
                    pvVar5 = (void *)plVar24[4];
                    uStack_250 = (longlong *)CONCAT44(uStack_250._4_4_,uVar15);
                    if ((longlong)(int)uVar15 == 0) {
                      uStack_250 = (longlong *)(ulonglong)uVar15;
                    }
                    else {
                      FUN_1446dd670(&local_258,uVar15,0);
                      memcpy(local_258,pvVar5,(longlong)(int)uVar15 * 2);
                    }
                  }
                  else {
                    iVar7 = (int)plVar24[5] + -1;
                    if ((int)plVar24[5] == 0) {
                      iVar7 = 0;
                    }
                    local_258 = local_268;
                    local_268 = (undefined2 *)0x0;
                    uStack_250 = (longlong *)CONCAT44(local_25c,local_260);
                    local_260 = 0;
                    local_25c = 0;
                    iVar3 = iVar7 + iVar8;
                    if (iVar3 < iVar8) {
LAB_14428f6db:
                      local_25c = 0;
                      local_260 = 0;
                      local_268 = (undefined2 *)0x0;
                    /* WARNING: Subroutine does not return */
                      FUN_1456afac4((longlong)iVar7);
                    }
                    if (iVar20 < iVar3) {
                      FUN_1446f8c06(&local_258);
                    }
                    FUN_1400020e8(&local_258,plVar24[4],iVar7);
                  }
                  lVar23 = local_348;
                  if (CONCAT44(uStack_6c,local_70) != 0) {
                    FUN_1400020a8();
                  }
                  local_70 = (undefined4)local_258;
                  uStack_6c = local_258._4_4_;
                  uStack_68 = (uint)uStack_250;
                  uStack_64 = uStack_250._4_4_;
LAB_14428ec55:
                  local_258 = (undefined2 *)0x0;
                  uStack_250 = (longlong *)0x0;
                }
                else {
                  if (DAT_14cbd7928 + iVar20 == 1) goto LAB_14428e8ff;
LAB_14428e78d:
                  if (iVar20 == DAT_14cbd7938) {
                    if (1 < iVar20) {
                      lVar23 = 0;
                      while( true ) {
                        uVar18 = *(ushort *)(*local_248 + lVar23);
                        uVar21 = *(ushort *)(DAT_14cbd7930 + lVar23);
                        if (uVar18 != uVar21) break;
                        if (uVar18 == 0) goto LAB_14428eb6f;
LAB_14428e7ca:
                        lVar23 = lVar23 + 2;
                      }
                      if ((uVar21 | uVar18) < 0x80) {
                        if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[(uint)uVar21])
                        goto LAB_14428e7ca;
                        iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar18] -
                                (uint)(byte)(&DAT_149e05da0)[(uint)uVar21];
                      }
                      else {
                        iVar7 = (uint)uVar18 - (uint)uVar21;
                      }
                      if (iVar7 != 0) goto LAB_14428e80b;
                    }
LAB_14428eb6f:
                    local_230._0_2_ = CONCAT11(1,(undefined1)local_230);
                    FUN_1400b22c2(local_278,&DAT_14afb88ae);
                    FUN_1407ec8fc(&local_268,local_248 + 2,local_278);
                    iVar20 = local_25c;
                    iVar8 = local_260;
                    if (local_260 < 2) {
                      local_258 = (undefined2 *)0x0;
                      uVar15 = *(uint *)(plVar24 + 5);
                      pvVar5 = (void *)plVar24[4];
                      uStack_250 = (longlong *)CONCAT44(uStack_250._4_4_,uVar15);
                      if ((longlong)(int)uVar15 == 0) {
                        uStack_250 = (longlong *)(ulonglong)uVar15;
                      }
                      else {
                        FUN_1446dd670(&local_258,uVar15,0);
                        memcpy(local_258,pvVar5,(longlong)(int)uVar15 * 2);
                      }
                    }
                    else {
                      iVar7 = (int)plVar24[5] + -1;
                      if ((int)plVar24[5] == 0) {
                        iVar7 = 0;
                      }
                      local_258 = local_268;
                      local_268 = (undefined2 *)0x0;
                      uStack_250 = (longlong *)CONCAT44(local_25c,local_260);
                      local_260 = 0;
                      local_25c = 0;
                      iVar3 = iVar7 + iVar8;
                      if (iVar3 < iVar8) goto LAB_14428f6db;
                      if (iVar20 < iVar3) {
                        FUN_1446f8c06(&local_258);
                      }
                      FUN_1400020e8(&local_258,plVar24[4],iVar7);
                    }
                    lVar23 = local_348;
                    if (CONCAT44(uStack_7c,local_80) != 0) {
                      FUN_1400020a8();
                    }
                    local_80 = (undefined4)local_258;
                    uStack_7c = local_258._4_4_;
                    uStack_78 = (uint)uStack_250;
                    uStack_74 = uStack_250._4_4_;
                    goto LAB_14428ec55;
                  }
                  if (DAT_14cbd7938 + iVar20 == 1) goto LAB_14428eb6f;
LAB_14428e80b:
                  if (iVar20 == DAT_14cbd7948) {
                    if (1 < iVar20) {
                      lVar23 = 0;
                      while( true ) {
                        uVar18 = *(ushort *)(*local_248 + lVar23);
                        uVar21 = *(ushort *)(DAT_14cbd7940 + lVar23);
                        if (uVar18 != uVar21) break;
                        if (uVar18 == 0) goto LAB_14428edb2;
LAB_14428e848:
                        lVar23 = lVar23 + 2;
                      }
                      if ((uVar21 | uVar18) < 0x80) {
                        if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[(uint)uVar21])
                        goto LAB_14428e848;
                        iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar18] -
                                (uint)(byte)(&DAT_149e05da0)[(uint)uVar21];
                      }
                      else {
                        iVar7 = (uint)uVar18 - (uint)uVar21;
                      }
                      if (iVar7 != 0) goto LAB_14428e513;
                    }
                  }
                  else if (DAT_14cbd7948 + iVar20 != 1) goto LAB_14428e513;
LAB_14428edb2:
                  FUN_1400b22c2(local_278,&DAT_14afb88ae);
                  FUN_1407ec8fc(&local_268,local_248 + 2,local_278);
                  iVar20 = local_25c;
                  iVar8 = local_260;
                  if (local_260 < 2) {
                    local_258 = (undefined2 *)0x0;
                    uVar15 = *(uint *)(plVar24 + 5);
                    pvVar5 = (void *)plVar24[4];
                    uStack_250 = (longlong *)CONCAT44(uStack_250._4_4_,uVar15);
                    if ((longlong)(int)uVar15 == 0) {
                      uStack_250 = (longlong *)(ulonglong)uVar15;
                    }
                    else {
                      FUN_1446dd670(&local_258,uVar15,0);
                      memcpy(local_258,pvVar5,(longlong)(int)uVar15 * 2);
                    }
                  }
                  else {
                    iVar7 = (int)plVar24[5] + -1;
                    if ((int)plVar24[5] == 0) {
                      iVar7 = 0;
                    }
                    local_258 = local_268;
                    local_268 = (undefined2 *)0x0;
                    uStack_250 = (longlong *)CONCAT44(local_25c,local_260);
                    local_260 = 0;
                    local_25c = 0;
                    iVar3 = iVar7 + iVar8;
                    if (iVar3 < iVar8) goto LAB_14428f6db;
                    if (iVar20 < iVar3) {
                      FUN_1446f8c06(&local_258);
                    }
                    FUN_1400020e8(&local_258,plVar24[4],iVar7);
                  }
                  FUN_140775538(local_128,&local_258);
                  lVar23 = local_348;
                  if (local_258 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                if (local_268 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_278[0] != 0) {
                  FUN_1400020a8();
                }
                goto LAB_14428ef1a;
              }
LAB_14428e513:
              if (iVar20 == DAT_14cbd79b8) {
                if (1 < iVar20) {
                  lVar23 = 0;
                  while( true ) {
                    uVar18 = *(ushort *)(*local_248 + lVar23);
                    uVar21 = *(ushort *)(DAT_14cbd79b0 + lVar23);
                    if (uVar18 != uVar21) break;
                    if (uVar18 == 0) goto LAB_14428e899;
LAB_14428e550:
                    lVar23 = lVar23 + 2;
                  }
                  if ((uVar21 | uVar18) < 0x80) {
                    if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[(uint)uVar21])
                    goto LAB_14428e550;
                    iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar18] -
                            (uint)(byte)(&DAT_149e05da0)[(uint)uVar21];
                  }
                  else {
                    iVar7 = (uint)uVar18 - (uint)uVar21;
                  }
                  if (iVar7 != 0) goto LAB_14428e591;
                }
LAB_14428e899:
                _Str = L"";
                if (iVar8 != 0) {
                  _Str = (wchar_t *)*plVar2;
                }
                dVar25 = _wtof(_Str);
                lVar23 = local_348;
                if (local_dc == 0 || (float)dVar25 != local_e0) {
                  local_dc = local_dc + 1;
                  local_e0 = (float)dVar25;
                }
                goto LAB_14428ef1a;
              }
              if (DAT_14cbd79b8 + iVar20 == 1) goto LAB_14428e899;
LAB_14428e591:
              if (iVar20 == DAT_14cbd79c8) {
                if (1 < iVar20) {
                  lVar23 = 0;
                  while( true ) {
                    uVar18 = *(ushort *)(*local_248 + lVar23);
                    uVar21 = *(ushort *)(DAT_14cbd79c0 + lVar23);
                    if (uVar18 != uVar21) break;
                    if (uVar18 == 0) goto LAB_14428e9e9;
LAB_14428e5ce:
                    lVar23 = lVar23 + 2;
                  }
                  if ((uVar21 | uVar18) < 0x80) {
                    if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[(uint)uVar21])
                    goto LAB_14428e5ce;
                    iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar18] -
                            (uint)(byte)(&DAT_149e05da0)[(uint)uVar21];
                  }
                  else {
                    iVar7 = (uint)uVar18 - (uint)uVar21;
                  }
                  if (iVar7 != 0) goto LAB_14428ea5e;
                }
LAB_14428e9e9:
                puVar17 = &DAT_149dfb77a;
                if (iVar8 != 0) {
                  puVar17 = (undefined2 *)*plVar2;
                }
                lVar23 = 0;
                do {
                  uVar18 = puVar17[lVar23];
                  bVar4 = (&DAT_149dfbe6e)[lVar23];
                  iVar8 = (uint)uVar18 - (uint)bVar4;
                  if (iVar8 == 0) {
                    if (uVar18 == 0) goto LAB_14428ed41;
                  }
                  else {
                    if (0x7f < ((uint)bVar4 | (uint)uVar18)) goto LAB_14428ea55;
                    if ((&DAT_149e05da0)[uVar18] != (&DAT_149e05da0)[bVar4]) goto LAB_14428ea52;
                  }
                  lVar23 = lVar23 + 1;
                } while( true );
              }
              if (DAT_14cbd79c8 + iVar20 == 1) goto LAB_14428e9e9;
              goto LAB_14428ea5e;
            }
            if (1 < iVar20) {
              lVar23 = 0;
              while( true ) {
                uVar18 = *(ushort *)(*local_248 + lVar23);
                uVar21 = *(ushort *)(DAT_14cbd7990 + lVar23);
                if (uVar18 != uVar21) break;
                if (uVar18 == 0) goto LAB_14428e241;
LAB_14428e206:
                lVar23 = lVar23 + 2;
              }
              if ((uVar21 | uVar18) < 0x80) {
                if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[(uint)uVar21]) goto LAB_14428e206;
                iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar18] -
                        (uint)(byte)(&DAT_149e05da0)[(uint)uVar21];
              }
              else {
                iVar7 = (uint)uVar18 - (uint)uVar21;
              }
              if (iVar7 != 0) goto LAB_14428e2a8;
            }
LAB_14428e241:
            if (DAT_14cbd8f00 == 0) {
              lVar23 = 0;
            }
            else {
              lVar23 = FUN_144815d88();
              iVar8 = (int)local_248[3];
            }
            local_258 = (undefined2 *)0x0;
            pvVar5 = (void *)local_248[2];
            uStack_250 = (longlong *)CONCAT44(uStack_250._4_4_,iVar8);
            if (iVar8 == 0) {
              uStack_250 = (longlong *)0x0;
              iVar8 = 0;
            }
            else {
              FUN_1446dd670(&local_258,iVar8,0);
              memcpy(local_258,pvVar5,(longlong)iVar8 * 2);
              iVar8 = (uint)uStack_250;
            }
            puVar17 = local_258;
            uVar13 = 0;
            iVar20 = iVar8 + -1;
            if (iVar8 == 0) {
              iVar20 = 0;
            }
            if (0 < iVar20) {
              puVar10 = local_258;
              if (iVar8 == 0) {
                puVar10 = &DAT_149dfb77a;
              }
              lVar11 = 0;
              uVar13 = 0;
              do {
                uVar15 = ((uint)(0x19 < (ushort)puVar10[lVar11] - 0x61) * 0x20 +
                         (uint)(ushort)puVar10[lVar11]) - 0x20;
                uVar19 = (uint)(uVar13 >> 8) ^
                         *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar13 ^ uVar15) & 0xff) * 4)
                ;
                uVar13 = (ulonglong)
                         (uVar19 >> 8 ^
                         *(uint *)(&DAT_14c75d150 +
                                  (ulonglong)(uVar19 & 0xff ^ uVar15 >> 8 & 0xff) * 4));
                lVar11 = lVar11 + 1;
              } while (iVar20 != (int)lVar11);
            }
            plVar24 = (longlong *)(lVar23 + 0x18);
            iVar7 = FUN_148e5377c(plVar24,uVar13,&local_258);
            if (iVar7 != -1) {
              local_148 = local_148 + 1;
              if (iVar20 < 1) {
                uVar13 = 0;
              }
              else {
                if (iVar8 == 0) {
                  puVar17 = &DAT_149dfb77a;
                }
                lVar23 = 0;
                uVar13 = 0;
                do {
                  uVar15 = ((uint)(ushort)puVar17[lVar23] +
                           (uint)(0x19 < (ushort)puVar17[lVar23] - 0x61) * 0x20) - 0x20;
                  uVar19 = (uint)(uVar13 >> 8) ^
                           *(uint *)(&DAT_14c75d150 +
                                    (ulonglong)(((uint)uVar13 ^ uVar15) & 0xff) * 4);
                  uVar13 = (ulonglong)
                           (uVar19 >> 8 ^
                           *(uint *)(&DAT_14c75d150 +
                                    (ulonglong)(uVar19 & 0xff ^ uVar15 >> 8 & 0xff) * 4));
                  lVar23 = lVar23 + 1;
                } while (iVar20 != (int)lVar23);
              }
              iVar8 = FUN_148e5377c(plVar24,uVar13,&local_258);
              if (iVar8 == -1) {
                lVar23 = 0;
              }
              else {
                lVar23 = (longlong)iVar8 * 0x40 + *plVar24;
              }
              FUN_140390f7a(lVar23 + 0x10,local_158);
              puVar17 = local_258;
            }
LAB_14428e6f5:
            if (puVar17 != (undefined2 *)0x0) {
              FUN_1400020a8(puVar17);
            }
            goto LAB_14428e702;
          }
          if (1 < iVar8) {
            lVar23 = 0;
            while( true ) {
              uVar18 = *(ushort *)(*plVar2 + lVar23);
              uVar21 = *(ushort *)(DAT_14cbd79d0 + lVar23);
              if (uVar18 != uVar21) break;
              if (uVar18 == 0) goto LAB_14428e1be;
LAB_14428e175:
              lVar23 = lVar23 + 2;
            }
            if ((uVar21 | uVar18) < 0x80) {
              if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[(uint)uVar21]) goto LAB_14428e175;
              iVar20 = (uint)(byte)(&DAT_149e05da0)[uVar18] -
                       (uint)(byte)(&DAT_149e05da0)[(uint)uVar21];
            }
            else {
              iVar20 = (uint)uVar18 - (uint)uVar21;
            }
            if (iVar20 != 0) goto LAB_14428e1cb;
          }
LAB_14428e1be:
          bVar4 = 1;
          local_340 = 0;
          lVar23 = local_348;
          goto LAB_14428ef1d;
        }
        goto LAB_14428f1a8;
      }
LAB_14428f5da:
      if (CONCAT44(uStack_7c,local_80) != 0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_6c,local_70) != 0) {
        FUN_1400020a8();
      }
    }
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_60 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14428ea52:
  iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar18] - (uint)(byte)(&DAT_149e05da0)[bVar4];
LAB_14428ea55:
  if (iVar8 == 0) {
LAB_14428ed41:
    local_230 = (code *)CONCAT71(local_230._1_7_,1);
    *(longlong *)(local_338 + 0x48) = local_c8;
LAB_14428e702:
    bVar4 = 0;
    lVar23 = local_348;
    goto LAB_14428ef1d;
  }
LAB_14428ea5e:
  lVar23 = local_348;
  if (iVar20 == DAT_14cbd7968) {
    if (1 < iVar20) {
      lVar11 = 0;
      while( true ) {
        uVar18 = *(ushort *)(*local_248 + lVar11);
        uVar21 = *(ushort *)(DAT_14cbd7960 + lVar11);
        if (uVar18 != uVar21) break;
        if (uVar18 == 0) goto LAB_14428ed72;
LAB_14428eaa0:
        lVar11 = lVar11 + 2;
      }
      if ((uVar21 | uVar18) < 0x80) {
        if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[(uint)uVar21]) goto LAB_14428eaa0;
        iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar18] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar21];
      }
      else {
        iVar8 = (uint)uVar18 - (uint)uVar21;
      }
      if (iVar8 != 0) goto LAB_14428eae1;
    }
LAB_14428ed72:
    puVar12 = local_110;
LAB_14428ef15:
    FUN_140775496(puVar12);
  }
  else {
    if (DAT_14cbd7968 + iVar20 == 1) goto LAB_14428ed72;
LAB_14428eae1:
    if (iVar20 == DAT_14cbd7978) {
      if (1 < iVar20) {
        lVar11 = 0;
        while( true ) {
          uVar18 = *(ushort *)(*local_248 + lVar11);
          uVar21 = *(ushort *)(DAT_14cbd7970 + lVar11);
          if (uVar18 != uVar21) break;
          if (uVar18 == 0) goto LAB_14428ef0d;
LAB_14428eb1e:
          lVar11 = lVar11 + 2;
        }
        if ((uVar21 | uVar18) < 0x80) {
          if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[(uint)uVar21]) goto LAB_14428eb1e;
          iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar18] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar21];
        }
        else {
          iVar8 = (uint)uVar18 - (uint)uVar21;
        }
        if (iVar8 != 0) goto LAB_14428eea0;
      }
LAB_14428ef0d:
      puVar12 = local_f8;
      goto LAB_14428ef15;
    }
    if (DAT_14cbd7978 + iVar20 == 1) goto LAB_14428ef0d;
LAB_14428eea0:
    if (iVar20 == DAT_14cbd7988) {
      if (1 < iVar20) {
        lVar11 = 0;
        while( true ) {
          uVar18 = *(ushort *)(*local_248 + lVar11);
          uVar13 = (ulonglong)uVar18;
          uVar21 = *(ushort *)(DAT_14cbd7980 + lVar11);
          if (uVar18 != uVar21) break;
          if (uVar18 == 0) goto LAB_14428ef0d;
LAB_14428eed1:
          lVar11 = lVar11 + 2;
        }
        if ((uVar21 | uVar18) < 0x80) {
          uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
          uVar22 = (ulonglong)uVar21;
          uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
          if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar22]) goto LAB_14428eed1;
        }
        if (uVar18 != uVar21) goto LAB_14428ef1a;
      }
      goto LAB_14428ef0d;
    }
    if (DAT_14cbd7988 + iVar20 == 1) goto LAB_14428ef0d;
  }
LAB_14428ef1a:
  bVar4 = 0;
LAB_14428ef1d:
  FUN_1447a1747(local_248,(ulonglong)plStack_240 & 0xffffffff);
  if (local_248 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  lVar16 = lVar16 + 0x10;
  if ((bool)(bVar4 | lVar16 == lVar23)) goto LAB_14428f17d;
  goto LAB_14428e108;
LAB_14428f17d:
  lVar11 = local_330;
  lVar23 = local_328;
  lVar16 = local_338;
  SRWLock = local_320;
  if ((local_340 & 1) != 0) {
LAB_14428f1a8:
    uVar13 = (ulonglong)uStack_68;
    if ((1 < (int)uStack_68) && (local_150 < 2)) {
      local_288 = (void *)0x0;
      pvVar5 = (void *)CONCAT44(uStack_6c,local_70);
      local_280 = uStack_68;
      FUN_1446dd670(&local_288,uVar13,0);
      memcpy(local_288,pvVar5,uVar13 * 2);
      local_398 = CONCAT31(local_398._1_3_,1);
      FUN_145d09d90(lVar16,lVar23,&local_288,local_33c);
    }
    uVar13 = (ulonglong)uStack_78;
    if ((1 < (int)uStack_78) && (local_138 < 2)) {
      local_298 = (void *)0x0;
      pvVar5 = (void *)CONCAT44(uStack_7c,local_80);
      local_290 = uStack_78;
      FUN_1446dd670(&local_298,uVar13,0);
      memcpy(local_298,pvVar5,uVar13 * 2);
      local_398 = local_398 & 0xffffff00;
      FUN_145d09d90(lVar16,lVar23,&local_298,local_33c);
    }
    local_248 = (longlong *)0x0;
    plStack_240 = (longlong *)0x0;
    FUN_14047afda(&local_258,local_b0);
    cVar6 = FUN_14047b282(local_258,&local_248,0);
    if ((cVar6 != '\0') && (local_248 != (longlong *)0x0)) {
      local_200 = local_200 + 1;
      local_2a8 = DAT_14cbd78b0;
      local_2a0 = DAT_14cbd78b8 + -1;
      if (DAT_14cbd78b8 == 0) {
        local_2a0 = 0;
      }
      FUN_14047fa10(local_248,&local_2a8,local_210);
      local_1e8 = local_1e8 + 1;
      local_2b8 = DAT_14cbd78c0;
      local_2b0 = DAT_14cbd78c8 + -1;
      if (DAT_14cbd78c8 == 0) {
        local_2b0 = 0;
      }
      FUN_14047fa10(local_248,&local_2b8,local_1f8);
      local_1d0 = local_1d0 + 1;
      local_2c8 = DAT_14cbd78d0;
      local_2c0 = DAT_14cbd78d8 + -1;
      if (DAT_14cbd78d8 == 0) {
        local_2c0 = 0;
      }
      FUN_14047fa10(local_248,&local_2c8,local_1e0);
      local_1b8 = local_1b8 + 1;
      local_2d8 = DAT_14cbd78f0;
      local_2d0 = DAT_14cbd78f8 + -1;
      if (DAT_14cbd78f8 == 0) {
        local_2d0 = 0;
      }
      FUN_14047fa10(local_248,&local_2d8,local_1c8);
      local_1a0 = local_1a0 + 1;
      local_2e8 = DAT_14cbd78e0;
      local_2e0 = DAT_14cbd78e8 + -1;
      if (DAT_14cbd78e8 == 0) {
        local_2e0 = 0;
      }
      FUN_14047fa10(local_248,&local_2e8,local_1b0);
      local_188 = local_188 + 1;
      local_2f8 = DAT_14cbd7900;
      local_2f0 = DAT_14cbd7908 + -1;
      if (DAT_14cbd7908 == 0) {
        local_2f0 = 0;
      }
      FUN_14047fa10(local_248,&local_2f8,local_198);
      local_170 = local_170 + 1;
      local_308 = DAT_14cbd7910;
      local_300 = DAT_14cbd7918 + -1;
      if (DAT_14cbd7918 == 0) {
        local_300 = 0;
      }
      FUN_14047fa10(local_248,&local_308,local_180);
    }
    FUN_140775496(local_228,local_c0);
    if (local_d0 == 0 || local_c8 != local_d8) {
      local_d8 = local_c8;
      local_d0 = local_d0 + 1;
    }
    FUN_145da26a0(lVar11,&local_230);
    plVar24 = uStack_250;
    if (uStack_250 != (longlong *)0x0) {
      LOCK();
      plVar2 = uStack_250 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*uStack_250)(uStack_250);
        LOCK();
        piVar1 = (int *)((longlong)plVar24 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
    }
    plVar24 = plStack_240;
    if (plStack_240 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_240 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_240)(plStack_240);
        LOCK();
        piVar1 = (int *)((longlong)plVar24 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
    }
    local_33c = local_33c + 1;
  }
  FUN_145cc89de(&local_230);
  FUN_145be9a34(&local_c8);
  lVar14 = local_310 + 0x48;
  if (lVar14 == local_318) goto LAB_14428f5da;
  goto LAB_14428e0b6;
}



// FUNCTION 14428f6e4 FUN_14428f6e4 body=29 status=ok
// SIG undefined FUN_14428f6e4(void)

undefined8 FUN_14428f6e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428f880 FUN_14428f880 body=101 status=ok
// SIG undefined FUN_14428f880(void)

void FUN_14428f880(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4da5c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14428f8e6 FUN_14428f8e6 body=101 status=ok
// SIG undefined FUN_14428f8e6(void)

void FUN_14428f8e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4da5c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14428f94c FUN_14428f94c body=134 status=ok
// SIG undefined FUN_14428f94c(void)

void FUN_14428f94c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4da5c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b4ab0;
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
                    /* WARNING: Could not recover jumptable at 0x00014428f9c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14428f9d2 FUN_14428f9d2 body=78 status=ok
// SIG undefined FUN_14428f9d2(void)

void FUN_14428f9d2(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined2 local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_a = param_3;
  FUN_14428fb4e(param_1 + 0x20,&local_18,&local_a);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14428fa22 FUN_14428fa22 body=299 status=ok
// SIG undefined FUN_14428fa22(void)

undefined8 FUN_14428fa22(longlong param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined2 local_32;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  local_32 = param_3;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14428fb47;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14428fb47;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14428fb47:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14428fafa;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14428fb4e(param_1 + 0x20,&local_40,&local_32,param_4);
      uVar6 = 1;
      goto LAB_14428fafa;
    }
  }
  uVar6 = 0;
LAB_14428fafa:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14428fb4e FUN_14428fb4e body=588 status=ok
// SIG undefined FUN_14428fb4e(void)

void FUN_14428fb4e(longlong *param_1,longlong *param_2,short *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*param_2 == 0) || ((ushort)(*param_3 - 300U) < 0xff9c)) || (*(int *)(*param_1 + 0x44) == 0))
  goto LAB_14428fd76;
  lVar7 = *param_4;
  lVar5 = param_4[1];
  FUN_1449027d0(*param_1,&local_48);
  plVar4 = *(longlong **)(local_48 + 0x300);
  AcquireSRWLockExclusive((PSRWLOCK)(plVar4 + 9));
  plVar6 = local_40;
  *(int *)(plVar4 + 8) = (int)plVar4[8] + 1;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  iVar3 = (int)param_1[1];
  if ((-1 < (longlong)iVar3) && (iVar3 < (int)plVar4[1])) {
    *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
    lVar8 = (longlong)iVar3 * 0x168 + *plVar4;
    local_48 = lVar7;
    local_40 = (longlong *)(longlong)(int)lVar5;
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      lVar7 = FUN_14352f81e();
      if (lVar7 != 0) {
        FUN_1401924dc(lVar7);
      }
      if ((*(longlong *)(lVar8 + 200) != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      *(longlong *)(lVar8 + 200) = lVar7;
      if (lVar7 != 0) {
        local_68 = (undefined2 *)0x0;
        uStack_60 = 0;
        FUN_1401031ac(lVar7,0,&local_68);
        puVar9 = local_68;
        if ((int)uStack_60 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        FUN_140002266(local_58,L"Texture2D\'%s\'",puVar9);
        lVar8 = lVar8 + 0xd8;
LAB_14428fd46:
        FUN_140775538(lVar8,local_58);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      lVar7 = FUN_14352f81e();
      if (lVar7 != 0) {
        FUN_1401924dc(lVar7);
      }
      if ((*(longlong *)(lVar8 + 0xd0) != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      *(longlong *)(lVar8 + 0xd0) = lVar7;
      if (lVar7 != 0) {
        local_68 = (undefined2 *)0x0;
        uStack_60 = 0;
        FUN_1401031ac(lVar7,0,&local_68);
        puVar9 = local_68;
        if ((int)uStack_60 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        FUN_140002266(local_58,L"Texture2D\'%s\'",puVar9);
        lVar8 = lVar8 + 0xf0;
        goto LAB_14428fd46;
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(plVar4 + 9));
LAB_14428fd76:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14428fd9c FUN_14428fd9c body=29 status=ok
// SIG undefined FUN_14428fd9c(void)

undefined8 FUN_14428fd9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14428ff38 FUN_14428ff38 body=93 status=ok
// SIG undefined FUN_14428ff38(void)

void FUN_14428ff38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ede20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4b20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14428ff96 FUN_14428ff96 body=93 status=ok
// SIG undefined FUN_14428ff96(void)

void FUN_14428ff96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ede20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4b20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14428fff4 FUN_14428fff4 body=126 status=ok
// SIG undefined FUN_14428fff4(void)

void FUN_14428fff4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4ede20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b4b20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144290063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144290072 FUN_144290072 body=73 status=ok
// SIG undefined FUN_144290072(void)

void FUN_144290072(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_4;
  FUN_1442901de(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442900bc FUN_1442900bc body=288 status=ok
// SIG undefined FUN_1442900bc(void)

undefined8 FUN_1442900bc(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_2c = param_4;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442901d6;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442901d6;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1442901d6:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14429018a;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1442901de(param_1 + 0x20,&local_30,&local_2c);
      uVar6 = 1;
      goto LAB_14429018a;
    }
  }
  uVar6 = 0;
LAB_14429018a:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442901de FUN_1442901de body=57 status=ok
// SIG undefined FUN_1442901de(void)

void FUN_1442901de(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_3 < 0x19) {
    iVar1 = *param_2;
    lVar2 = *param_1;
    lVar3 = FUN_140059518(lVar2 + 0x44);
    if (*(int *)(lVar3 + 0xe0) == iVar1) {
      FUN_146643750(lVar2,iVar1);
      return;
    }
  }
  return;
}



// FUNCTION 144290218 FUN_144290218 body=29 status=ok
// SIG undefined FUN_144290218(void)

undefined8 FUN_144290218(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442903b4 FUN_1442903b4 body=101 status=ok
// SIG undefined FUN_1442903b4(void)

void FUN_1442903b4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b4b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14429041a FUN_14429041a body=101 status=ok
// SIG undefined FUN_14429041a(void)

void FUN_14429041a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b4b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144290480 FUN_144290480 body=134 status=ok
// SIG undefined FUN_144290480(void)

void FUN_144290480(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b4b90;
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
                    /* WARNING: Could not recover jumptable at 0x0001442904f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144290516 FUN_144290516 body=269 status=ok
// SIG undefined FUN_144290516(void)

undefined8 FUN_144290516(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14429061d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14429061d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14429061d:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442905c1;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_146643750(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_1442905c1;
    }
  }
  uVar6 = 0;
LAB_1442905c1:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144290624 FUN_144290624 body=29 status=ok
// SIG undefined FUN_144290624(void)

undefined8 FUN_144290624(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442907c0 FUN_1442907c0 body=93 status=ok
// SIG undefined FUN_1442907c0(void)

void FUN_1442907c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ede20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4c00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14429081e FUN_14429081e body=93 status=ok
// SIG undefined FUN_14429081e(void)

void FUN_14429081e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ede20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4c00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14429087c FUN_14429087c body=126 status=ok
// SIG undefined FUN_14429087c(void)

void FUN_14429087c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4ede20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b4c00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442908eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442908fa FUN_1442908fa body=73 status=ok
// SIG undefined FUN_1442908fa(void)

void FUN_1442908fa(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_4;
  FUN_144290a66(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144290944 FUN_144290944 body=288 status=ok
// SIG undefined FUN_144290944(void)

undefined8 FUN_144290944(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_2c = param_4;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144290a5e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144290a5e;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144290a5e:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144290a12;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144290a66(param_1 + 0x20,&local_30,&local_2c);
      uVar6 = 1;
      goto LAB_144290a12;
    }
  }
  uVar6 = 0;
LAB_144290a12:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144290a66 FUN_144290a66 body=115 status=ok
// SIG undefined FUN_144290a66(void)

void FUN_144290a66(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 < 0x19) {
    lVar2 = *param_1;
    iVar1 = *param_2;
    lVar3 = FUN_140059518(lVar2 + 0x44);
    if (*(int *)(lVar3 + 0xe0) == iVar1) {
      local_28[0] = 0;
      local_28[1] = 0;
      FUN_148e49ae8(lVar2,local_28);
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144290ada FUN_144290ada body=29 status=ok
// SIG undefined FUN_144290ada(void)

undefined8 FUN_144290ada(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144290c76 FUN_144290c76 body=93 status=ok
// SIG undefined FUN_144290c76(void)

void FUN_144290c76(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b4c70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144290cd4 FUN_144290cd4 body=93 status=ok
// SIG undefined FUN_144290cd4(void)

void FUN_144290cd4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b4c70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144290d32 FUN_144290d32 body=126 status=ok
// SIG undefined FUN_144290d32(void)

void FUN_144290d32(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b4c70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144290da1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144290dba FUN_144290dba body=269 status=ok
// SIG undefined FUN_144290dba(void)

undefined8 FUN_144290dba(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144290ec1;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144290ec1;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144290ec1:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144290e75;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144290ec8(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_144290e75;
    }
  }
  uVar6 = 0;
LAB_144290e75:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144290ec8 FUN_144290ec8 body=83 status=ok
// SIG undefined FUN_144290ec8(void)

void FUN_144290ec8(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_148e49ae8(*param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144290f1c FUN_144290f1c body=31 status=ok
// SIG undefined FUN_144290f1c(void)

undefined8 FUN_144290f1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144290f3c FUN_144290f3c body=29 status=ok
// SIG undefined FUN_144290f3c(void)

undefined8 FUN_144290f3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442910d8 FUN_1442910d8 body=93 status=ok
// SIG undefined FUN_1442910d8(void)

void FUN_1442910d8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b4e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144291136 FUN_144291136 body=93 status=ok
// SIG undefined FUN_144291136(void)

void FUN_144291136(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b4e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144291194 FUN_144291194 body=126 status=ok
// SIG undefined FUN_144291194(void)

void FUN_144291194(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b4e30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144291203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14429121c FUN_14429121c body=266 status=ok
// SIG undefined FUN_14429121c(void)

undefined8 FUN_14429121c(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144291320;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144291320;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144291320:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442912d4;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1442866ca(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_1442912d4;
    }
  }
  uVar6 = 0;
LAB_1442912d4:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144291328 FUN_144291328 body=29 status=ok
// SIG undefined FUN_144291328(void)

undefined8 FUN_144291328(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442914c4 FUN_1442914c4 body=93 status=ok
// SIG undefined FUN_1442914c4(void)

void FUN_1442914c4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b4ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144291522 FUN_144291522 body=93 status=ok
// SIG undefined FUN_144291522(void)

void FUN_144291522(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b4ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144291580 FUN_144291580 body=126 status=ok
// SIG undefined FUN_144291580(void)

void FUN_144291580(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b4ea0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442915ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442915fe FUN_1442915fe body=46 status=ok
// SIG undefined FUN_1442915fe(void)

void FUN_1442915fe(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  *(undefined1 *)(lVar1 + 0x69) = param_3;
  if (*(char *)(lVar1 + 0x68) != '\0') {
    return;
  }
  FUN_1461fd026(lVar1);
  FUN_1442866ca(lVar1);
  return;
}



// FUNCTION 14429162c FUN_14429162c body=308 status=ok
// SIG undefined FUN_14429162c(void)

undefined8 FUN_14429162c(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14429175a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14429175a;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_14429175a:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442916f6;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      *(undefined1 *)(lVar5 + 0x69) = param_3;
      uVar6 = 1;
      if (*(char *)(lVar5 + 0x68) == '\0') {
        FUN_1461fd026(lVar5,param_2);
        FUN_1442866ca(lVar5);
      }
      goto LAB_1442916f6;
    }
  }
  uVar6 = 0;
LAB_1442916f6:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144291762 FUN_144291762 body=57 status=ok
// SIG undefined FUN_144291762(void)

undefined8 * FUN_144291762(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9b4f10;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442917b0 FUN_1442917b0 body=167 status=ok
// SIG undefined FUN_1442917b0(void)

void FUN_1442917b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4daf00;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9b4f10;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uVar3;
  *(undefined4 *)(puVar2 + 4) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uVar5;
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



// FUNCTION 144291858 FUN_144291858 body=167 status=ok
// SIG undefined FUN_144291858(void)

void FUN_144291858(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4daf00;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9b4f10;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uVar3;
  *(undefined4 *)(puVar2 + 4) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uVar5;
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



// FUNCTION 144291900 FUN_144291900 body=206 status=ok
// SIG undefined FUN_144291900(void)

void FUN_144291900(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4daf00;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b9b4f10;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var2->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var2->ProcessLocksList).Blink + 4) = uVar3;
  p_Var2->EntryCount = DVar4;
  p_Var2->ContentionCount = DVar5;
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
                    /* WARNING: Could not recover jumptable at 0x0001442919bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442919ce FUN_1442919ce body=102 status=ok
// SIG undefined FUN_1442919ce(void)

void FUN_1442919ce(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 *local_20;
  longlong local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 != '\0') {
    local_24 = *(undefined4 *)(param_1 + 0x20);
    local_18 = param_1 + 0x28;
    local_20 = &local_24;
    FUN_148e5407c(*(longlong *)(param_1 + 0x18) + 0xa8,local_c);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144291a36 FUN_144291a36 body=104 status=ok
// SIG undefined FUN_144291a36(void)

undefined8 FUN_144291a36(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 *local_20;
  longlong local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 != '\0') {
    local_24 = *(undefined4 *)(param_1 + 0x20);
    local_18 = param_1 + 0x28;
    local_20 = &local_24;
    FUN_148e5407c(*(longlong *)(param_1 + 0x18) + 0xa8,local_c);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144291aa0 FUN_144291aa0 body=29 status=ok
// SIG undefined FUN_144291aa0(void)

undefined8 FUN_144291aa0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144291c3c FUN_144291c3c body=93 status=ok
// SIG undefined FUN_144291c3c(void)

void FUN_144291c3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ede20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144291c9a FUN_144291c9a body=93 status=ok
// SIG undefined FUN_144291c9a(void)

void FUN_144291c9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ede20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144291cf8 FUN_144291cf8 body=126 status=ok
// SIG undefined FUN_144291cf8(void)

void FUN_144291cf8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4ede20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b4f80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144291d67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144291d76 FUN_144291d76 body=73 status=ok
// SIG undefined FUN_144291d76(void)

void FUN_144291d76(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_4;
  FUN_144291ee2(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144291dc0 FUN_144291dc0 body=288 status=ok
// SIG undefined FUN_144291dc0(void)

undefined8 FUN_144291dc0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_2c = param_4;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144291eda;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144291eda;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144291eda:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144291e8e;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144291ee2(param_1 + 0x20,&local_30,&local_2c);
      uVar6 = 1;
      goto LAB_144291e8e;
    }
  }
  uVar6 = 0;
LAB_144291e8e:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144291ee2 FUN_144291ee2 body=57 status=ok
// SIG undefined FUN_144291ee2(void)

void FUN_144291ee2(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_3 < 0x19) {
    iVar1 = *param_2;
    lVar2 = *param_1;
    lVar3 = FUN_140059518(lVar2 + 0x44);
    if (*(int *)(lVar3 + 0xe0) == iVar1) {
      FUN_148e4af08(lVar2,iVar1);
      return;
    }
  }
  return;
}



// FUNCTION 144291f1c FUN_144291f1c body=29 status=ok
// SIG undefined FUN_144291f1c(void)

undefined8 FUN_144291f1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442920b8 FUN_1442920b8 body=101 status=ok
// SIG undefined FUN_1442920b8(void)

void FUN_1442920b8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b4ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14429211e FUN_14429211e body=101 status=ok
// SIG undefined FUN_14429211e(void)

void FUN_14429211e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b4ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144292184 FUN_144292184 body=134 status=ok
// SIG undefined FUN_144292184(void)

void FUN_144292184(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b4ff0;
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
                    /* WARNING: Could not recover jumptable at 0x0001442921fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14429221a FUN_14429221a body=269 status=ok
// SIG undefined FUN_14429221a(void)

undefined8 FUN_14429221a(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144292321;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144292321;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144292321:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442922c5;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148e4af08(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_1442922c5;
    }
  }
  uVar6 = 0;
LAB_1442922c5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144292328 FUN_144292328 body=29 status=ok
// SIG undefined FUN_144292328(void)

undefined8 FUN_144292328(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442924c4 FUN_1442924c4 body=101 status=ok
// SIG undefined FUN_1442924c4(void)

void FUN_1442924c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9b5140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b50d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14429252a FUN_14429252a body=101 status=ok
// SIG undefined FUN_14429252a(void)

void FUN_14429252a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9b5140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b50d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144292590 FUN_144292590 body=134 status=ok
// SIG undefined FUN_144292590(void)

void FUN_144292590(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9b5140;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b50d0;
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
                    /* WARNING: Could not recover jumptable at 0x000144292607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144292616 FUN_144292616 body=65 status=ok
// SIG undefined FUN_144292616(void)

void FUN_144292616(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_144292770(param_1 + 0x20,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144292658 FUN_144292658 body=278 status=ok
// SIG undefined FUN_144292658(void)

undefined8 FUN_144292658(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144292768;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144292768;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144292768:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14429271c;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144292770(param_1 + 0x20,&local_2c);
      uVar6 = 1;
      goto LAB_14429271c;
    }
  }
  uVar6 = 0;
LAB_14429271c:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144292770 FUN_144292770 body=745 status=ok
// SIG undefined FUN_144292770(void)

void FUN_144292770(longlong *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  int local_a8;
  undefined8 local_a4;
  undefined8 *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  code *local_40;
  undefined8 **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar9 = *param_1;
  if (*param_2 == 0) {
    local_48 = &local_b0;
    local_b0 = (undefined8 *)0x3000300000000;
    local_a8 = CONCAT13(local_a8._3_1_,0x30003);
    local_a4 = 0;
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_38 = &local_48;
    local_40 = FUN_143ef2b5a;
    bifrost::account::get(*(undefined8 *)(param_1[1] + 0x2b8));
    if (local_b0._3_1_ != '\x02') {
      FUN_148e4b07e(lVar9);
    }
    if ((*(int *)(lVar9 + 0x138) != 0) && (*(longlong **)(lVar9 + 0x130) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar9 + 0x130) + 0x60))();
    }
    FUN_148e4acca(lVar9);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    puVar6 = local_98;
    if (local_88 != 0) {
      FUN_1400020a8();
      puVar6 = local_98;
    }
  }
  else {
    uVar3 = FUN_140059518(lVar9 + 0x44);
    lVar4 = FUN_145da44aa(uVar3);
    if (lVar4 == 0) goto LAB_1442929c5;
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar6 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_b0[2] = lVar5;
    *local_b0 = &PTR_FUN_14b9b5060;
    local_b0[3] = 0;
    iVar7 = 0;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar9 + 0xc);
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
    *(int *)((longlong)puVar6 + 0x1c) = iVar7;
    puVar6[4] = FUN_148e4b192;
    *(undefined4 *)(puVar6 + 5) = 0;
    FUN_144268f62(lVar4,&DAT_14cbd7ab8,&local_b0,1);
    puVar6 = local_b0;
    if (local_a8 != 0) {
      if (local_b0 == (undefined8 *)0x0) goto LAB_1442929c5;
      (**(code **)*local_b0)(local_b0,0);
      FUN_1446efa72(&local_b0,0,0,0x10);
      local_a8 = 0;
      puVar6 = local_b0;
    }
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1442929c5:
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144292a5a FUN_144292a5a body=29 status=ok
// SIG undefined FUN_144292a5a(void)

undefined8 FUN_144292a5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144292bf6 FUN_144292bf6 body=93 status=ok
// SIG undefined FUN_144292bf6(void)

void FUN_144292bf6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9b5220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b51b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144292c54 FUN_144292c54 body=93 status=ok
// SIG undefined FUN_144292c54(void)

void FUN_144292c54(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9b5220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b51b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144292cb2 FUN_144292cb2 body=126 status=ok
// SIG undefined FUN_144292cb2(void)

void FUN_144292cb2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9b5220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b51b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144292d21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144292d3a FUN_144292d3a body=275 status=ok
// SIG undefined FUN_144292d3a(void)

undefined8 FUN_144292d3a(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_144292e47;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144292e47;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144292e47:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144292de9;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148e4b1de(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_144292de9;
    }
  }
  uVar6 = 0;
LAB_144292de9:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144292e4e FUN_144292e4e body=31 status=ok
// SIG undefined FUN_144292e4e(void)

undefined8 FUN_144292e4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144292e6e FUN_144292e6e body=31 status=ok
// SIG undefined FUN_144292e6e(void)

undefined8 FUN_144292e6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144292ee2 FUN_144292ee2 body=31 status=ok
// SIG undefined FUN_144292ee2(void)

undefined8 FUN_144292ee2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144292f56 FUN_144292f56 body=29 status=ok
// SIG undefined FUN_144292f56(void)

undefined8 FUN_144292f56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442930f2 FUN_1442930f2 body=93 status=ok
// SIG undefined FUN_1442930f2(void)

void FUN_1442930f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ede20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b5620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144293150 FUN_144293150 body=93 status=ok
// SIG undefined FUN_144293150(void)

void FUN_144293150(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ede20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b5620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442931ae FUN_1442931ae body=126 status=ok
// SIG undefined FUN_1442931ae(void)

void FUN_1442931ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4ede20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b5620;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014429321d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14429322c FUN_14429322c body=73 status=ok
// SIG undefined FUN_14429322c(void)

void FUN_14429322c(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_4;
  FUN_144293398(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144293276 FUN_144293276 body=288 status=ok
// SIG undefined FUN_144293276(void)

undefined8 FUN_144293276(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_2c = param_4;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144293390;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144293390;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144293390:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144293344;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144293398(param_1 + 0x20,&local_30,&local_2c);
      uVar6 = 1;
      goto LAB_144293344;
    }
  }
  uVar6 = 0;
LAB_144293344:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144293398 FUN_144293398 body=57 status=ok
// SIG undefined FUN_144293398(void)

void FUN_144293398(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_3 < 0x19) {
    iVar1 = *param_2;
    lVar2 = *param_1;
    lVar3 = FUN_140059518(lVar2 + 0x44);
    if (*(int *)(lVar3 + 0xe0) == iVar1) {
      FUN_148e4c656(lVar2,iVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1442933d2 FUN_1442933d2 body=29 status=ok
// SIG undefined FUN_1442933d2(void)

undefined8 FUN_1442933d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14429356e FUN_14429356e body=101 status=ok
// SIG undefined FUN_14429356e(void)

void FUN_14429356e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b5690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442935d4 FUN_1442935d4 body=101 status=ok
// SIG undefined FUN_1442935d4(void)

void FUN_1442935d4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b5690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14429363a FUN_14429363a body=134 status=ok
// SIG undefined FUN_14429363a(void)

void FUN_14429363a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b5690;
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
                    /* WARNING: Could not recover jumptable at 0x0001442936b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442936d0 FUN_1442936d0 body=269 status=ok
// SIG undefined FUN_1442936d0(void)

undefined8 FUN_1442936d0(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1442937d7;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442937d7;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1442937d7:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14429377b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148e4c656(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_14429377b;
    }
  }
  uVar6 = 0;
LAB_14429377b:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442937de FUN_1442937de body=159 status=ok
// SIG undefined FUN_1442937de(void)

void FUN_1442937de(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  lVar1 = DAT_14cb0d2b0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
  if (lVar3 == 0) {
    FUN_145876474(DAT_14cb0d2b0);
    lVar3 = *(longlong *)(lVar1 + 0x2c8);
    if (lVar3 == 0) goto LAB_14429384a;
  }
  FUN_141277db8(lVar3,&local_20,DAT_14cbd7b20);
  cVar2 = FUN_1402ca054(local_20,L"Disabled",8);
  if (cVar2 != '\0') {
    lVar3 = FUN_1402735c8();
    FUN_1418c22aa(param_2,lVar3 + 0x960);
  }
LAB_14429384a:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14429387e FUN_14429387e body=159 status=ok
// SIG undefined FUN_14429387e(void)

void FUN_14429387e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  lVar1 = DAT_14cb0d2b0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
  if (lVar3 == 0) {
    FUN_145876474(DAT_14cb0d2b0);
    lVar3 = *(longlong *)(lVar1 + 0x2c8);
    if (lVar3 == 0) goto LAB_1442938ea;
  }
  FUN_141277db8(lVar3,&local_20,DAT_14cbd7b20);
  cVar2 = FUN_1402ca054(local_20,L"Disabled",8);
  if (cVar2 == '\0') {
    lVar3 = FUN_1402735c8();
    FUN_1418c22aa(param_2,lVar3 + 0x950);
  }
LAB_1442938ea:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14429391e FUN_14429391e body=98 status=ok
// SIG undefined FUN_14429391e(void)

void FUN_14429391e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = DAT_14cb0d2b0;
  lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
  if (lVar3 == 0) {
    FUN_145876474(DAT_14cb0d2b0);
    lVar3 = *(longlong *)(lVar1 + 0x2c8);
    if (lVar3 == 0) {
      return;
    }
  }
  cVar2 = FUN_14586b682(lVar3);
  if (cVar2 == '\0') {
    lVar1 = FUN_1402735c8();
    FUN_1418c22aa(param_2,lVar1 + 0x970);
    *(undefined1 *)(lVar3 + 0x164) = 0;
  }
  return;
}



// FUNCTION 144293980 FUN_144293980 body=198 status=ok
// SIG undefined FUN_144293980(void)

void FUN_144293980(undefined8 param_1,byte *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  lVar1 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
  if (lVar4 == 0) {
    FUN_145876474(DAT_14cb0d2b0);
    lVar4 = *(longlong *)(lVar1 + 0x2c8);
    if (lVar4 == 0) goto LAB_1442939e0;
  }
  cVar2 = FUN_14586b682(lVar4);
  if ((cVar2 == '\0') || (iVar3 = FUN_14586b5e2(lVar4), iVar3 < 2)) {
    FUN_1400b22c2(local_30,"Multi-frame generation options should be hidden when unsupported.");
    *param_2 = *param_2 & 0xfe;
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  else if (*(char *)(lVar4 + 0x164) == '\0') {
    FUN_1402735c8();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
LAB_1442939e0:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144293a5a FUN_144293a5a body=183 status=ok
// SIG undefined FUN_144293a5a(void)

void FUN_144293a5a(undefined8 param_1,byte *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  lVar2 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
  if (lVar3 == 0) {
    FUN_145876474(DAT_14cb0d2b0);
    lVar3 = *(longlong *)(lVar2 + 0x2c8);
    if (lVar3 == 0) goto LAB_144293ad9;
  }
  cVar1 = FUN_1456d8318();
  if (cVar1 == '\0') {
    FUN_1400b22c2(local_30,"Nvidia reflex should be hidden when unsupported.");
    *param_2 = *param_2 & 0xfe;
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  else if (*(char *)(lVar3 + 0x164) == '\x01') {
    lVar2 = FUN_1402735c8();
    FUN_1418c22aa(param_2,lVar2 + 0x990);
    *(undefined1 *)(lVar3 + 0x1d8) = 1;
  }
LAB_144293ad9:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144293b12 FUN_144293b12 body=173 status=ok
// SIG undefined FUN_144293b12(void)

void FUN_144293b12(undefined8 param_1,byte *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  lVar1 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
  if (lVar2 == 0) {
    FUN_145876474(DAT_14cb0d2b0);
    lVar2 = *(longlong *)(lVar1 + 0x2c8);
    if (lVar2 == 0) goto LAB_144293b8b;
  }
  FUN_1459767dc(*(undefined8 *)(lVar2 + 0x148),&local_30);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_28 < 2) {
    FUN_1400b22c2(&local_30,
                  "We don\'t want to show graphics presets when a single option is present.");
    *param_2 = *param_2 & 0xfe;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
LAB_144293b8b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144293bc0 FUN_144293bc0 body=238 status=ok
// SIG undefined FUN_144293bc0(void)

void FUN_144293bc0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  lVar2 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
  if (lVar3 == 0) {
    FUN_145876474(DAT_14cb0d2b0);
    lVar3 = *(longlong *)(lVar2 + 0x2c8);
    if (lVar3 == 0) goto LAB_144293c76;
  }
  FUN_141277db8(lVar3,&local_28,DAT_14cbd7b20);
  cVar1 = FUN_1402ca054(local_28,&DAT_14aa815f0,3);
  if (cVar1 == '\0') {
    lVar2 = FUN_1402735c8();
    FUN_1418c22aa(param_2,lVar2 + 0x9a0);
    FUN_1446f470e(&local_30,L"Disabled",1);
    FUN_1446f470e(&local_38,L"SecondaryUpscaling",1);
    FUN_141673a98(lVar3,local_38,local_30);
  }
LAB_144293c76:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144293cb0 FUN_144293cb0 body=160 status=ok
// SIG undefined FUN_144293cb0(void)

void FUN_144293cb0(undefined8 param_1,byte *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  lVar1 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(DAT_14cb0d2b0 + 0x2c8);
  if (plVar3 == (longlong *)0x0) {
    FUN_145876474(DAT_14cb0d2b0);
    plVar3 = *(longlong **)(lVar1 + 0x2c8);
    if (plVar3 == (longlong *)0x0) goto LAB_144293cec;
  }
  cVar2 = (**(code **)(*plVar3 + 0x330))(plVar3);
  if (cVar2 == '\0') {
    FUN_1400b22c2(local_30,"We don\'t want to show HDR Toggle when the feature is unsupported.");
    *param_2 = *param_2 & 0xfe;
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
    FUN_145bce05a(plVar3,0);
  }
LAB_144293cec:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144293d52 FUN_144293d52 body=29 status=ok
// SIG undefined FUN_144293d52(void)

undefined8 FUN_144293d52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144293eee FUN_144293eee body=109 status=ok
// SIG undefined FUN_144293eee(void)

void FUN_144293eee(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b5800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 144293f5c FUN_144293f5c body=109 status=ok
// SIG undefined FUN_144293f5c(void)

void FUN_144293f5c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b5800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 144293fca FUN_144293fca body=142 status=ok
// SIG undefined FUN_144293fca(void)

void FUN_144293fca(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b5800;
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
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144294049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144294062 FUN_144294062 body=278 status=ok
// SIG undefined FUN_144294062(void)

undefined8 FUN_144294062(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_144294172;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144294172;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144294172:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144294125;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14429417a(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_144294125;
    }
  }
  uVar6 = 0;
LAB_144294125:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14429417a FUN_14429417a body=399 status=ok
// SIG undefined FUN_14429417a(void)

void FUN_14429417a(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if (((*(int *)(param_1 + 0xc) == 0) || (uVar1 = *(uint *)(param_1 + 8), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) {
    return;
  }
  lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (lVar8 == 0) {
    return;
  }
  if (*(int *)(lVar8 + 0x10) != *(int *)(param_1 + 0xc)) {
    return;
  }
  if ((*(uint *)(lVar8 + 8) & 0x10200000) != 0) {
    return;
  }
  cVar3 = FUN_1402ca054(*param_2,&DAT_149e06384,3);
  if (cVar3 == '\0') {
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 8);
      plVar5 = (longlong *)0x0;
      if (-1 < (int)uVar1) {
        plVar7 = (longlong *)0x0;
        if (DAT_14c9647dc <= (int)uVar1) goto LAB_1442942d8;
        puVar6 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((puVar6 == (undefined8 *)0x0) || (*(int *)(puVar6 + 2) != iVar2)) ||
           ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = (longlong *)*puVar6;
        }
        puVar6 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((puVar6 != (undefined8 *)0x0) && (*(int *)(puVar6 + 2) == iVar2)) &&
           ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)) {
          plVar7 = (longlong *)*puVar6;
          goto LAB_1442942d8;
        }
      }
    }
    plVar7 = (longlong *)0x0;
LAB_1442942d8:
    uVar4 = (**(code **)(*plVar7 + 800))();
                    /* WARNING: Could not recover jumptable at 0x0001442942f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar4,*(code **)(*plVar5 + 0x318));
    return;
  }
  **(undefined1 **)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = *(uint *)(param_1 + 8);
    plVar5 = (longlong *)0x0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14429423f;
    puVar6 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar6 != (undefined8 *)0x0) &&
       ((*(int *)(puVar6 + 2) == *(int *)(param_1 + 0xc) &&
        ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
      plVar5 = (longlong *)*puVar6;
      goto LAB_14429423f;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_14429423f:
                    /* WARNING: Could not recover jumptable at 0x000144294251. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x318))(plVar5,*(undefined4 *)(param_1 + 0x10));
  return;
}



// FUNCTION 14429430a FUN_14429430a body=108 status=ok
// SIG undefined FUN_14429430a(void)

void FUN_14429430a(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_1;
  local_28 = param_1[1];
  local_20 = param_1[2];
  local_18 = param_1[3];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_148e4d2c0(uVar1,&local_28);
  FUN_1462137ac(uVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144294378 FUN_144294378 body=95 status=ok
// SIG undefined FUN_144294378(void)

undefined8 * FUN_144294378(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14b9b5870;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}



// FUNCTION 1442943de FUN_1442943de body=29 status=ok
// SIG undefined FUN_1442943de(void)

void FUN_1442943de(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1442943fc FUN_1442943fc body=83 status=ok
// SIG undefined FUN_1442943fc(void)

undefined8 * FUN_1442943fc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b9b5870;
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



// FUNCTION 144294482 FUN_144294482 body=29 status=ok
// SIG undefined FUN_144294482(void)

undefined8 FUN_144294482(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442944a0 FUN_1442944a0 body=71 status=ok
// SIG undefined FUN_1442944a0(void)

undefined8 * FUN_1442944a0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b9b58b0;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144294666 FUN_144294666 body=160 status=ok
// SIG undefined FUN_144294666(void)

void FUN_144294666(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b58b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  puVar1[8] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x40);
    }
                    /* WARNING: Could not recover jumptable at 0x0001442946fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 8);
    return;
  }
  return;
}



// FUNCTION 144294706 FUN_144294706 body=160 status=ok
// SIG undefined FUN_144294706(void)

void FUN_144294706(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b58b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  puVar1[8] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x40);
    }
                    /* WARNING: Could not recover jumptable at 0x00014429479b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 8);
    return;
  }
  return;
}



// FUNCTION 1442947a6 FUN_1442947a6 body=187 status=ok
// SIG undefined FUN_1442947a6(void)

void FUN_1442947a6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b58b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar3 >> 0x20);
  p_Var1[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x40);
    }
    (**(code **)*puVar4)(puVar4,&p_Var1[1].ProcessLocksList);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144294851. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144294862 FUN_144294862 body=43 status=ok
// SIG undefined FUN_144294862(void)

undefined8 FUN_144294862(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 0x30);
  plVar3 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  return 0;
}



// FUNCTION 14429488e FUN_14429488e body=290 status=ok
// SIG undefined FUN_14429488e(void)

ulonglong FUN_14429488e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442949aa;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1442949aa;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1442949aa:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14429495e;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      pcVar3 = *(code **)(param_1 + 0x30);
      plVar9 = (longlong *)(param_1 + 0x50);
      if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
        plVar9 = *(longlong **)(param_1 + 0x40);
      }
      uVar6 = (**(code **)(*plVar9 + 8))(plVar9);
      (*pcVar3)(uVar6);
      uVar8 = CONCAT71((int7)((ulonglong)pcVar3 >> 8),1);
      goto LAB_14429495e;
    }
  }
  uVar8 = 0;
LAB_14429495e:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442949b2 FUN_1442949b2 body=107 status=ok
// SIG undefined FUN_1442949b2(void)

void FUN_1442949b2(undefined4 *param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  code *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 != 0) {
    local_20 = *param_1;
    uStack_1c = param_1[1];
    uStack_18 = param_1[2];
    uStack_14 = param_1[3];
    local_38 = 0;
    local_28 = &PTR_LAB_14b9b59b0;
    local_48 = FUN_144294a66;
    local_10 = *param_2;
    FUN_1410097ce();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144294a3c FUN_144294a3c body=12 status=ok
// SIG undefined FUN_144294a3c(void)

void FUN_144294a3c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144294a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144294a48 FUN_144294a48 body=29 status=ok
// SIG undefined FUN_144294a48(void)

undefined8 FUN_144294a48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144294a66 FUN_144294a66 body=181 status=ok
// SIG undefined FUN_144294a66(void)

void FUN_144294a66(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_50;
  undefined4 local_44;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
    lVar4 = *param_1;
  }
  local_58 = &local_40;
  local_50 = lVar3 + 0xb8;
  local_38 = lVar4 + 0xe18;
  if (lVar4 == 0) {
    local_38 = 0;
  }
  local_44 = *(undefined4 *)(param_2 + 0xf8);
  local_40 = lVar1;
  FUN_145e36912(lVar2,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144294b4e FUN_144294b4e body=29 status=ok
// SIG undefined FUN_144294b4e(void)

undefined8 FUN_144294b4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144294b6c FUN_144294b6c body=31 status=ok
// SIG undefined FUN_144294b6c(void)

undefined8 FUN_144294b6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144294bd8 FUN_144294bd8 body=31 status=ok
// SIG undefined FUN_144294bd8(void)

undefined8 FUN_144294bd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144294c98 FUN_144294c98 body=31 status=ok
// SIG undefined FUN_144294c98(void)

undefined8 FUN_144294c98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144294d52 FUN_144294d52 body=31 status=ok
// SIG undefined FUN_144294d52(void)

undefined8 FUN_144294d52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144294dbe FUN_144294dbe body=31 status=ok
// SIG undefined FUN_144294dbe(void)

undefined8 FUN_144294dbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144294e78 FUN_144294e78 body=29 status=ok
// SIG undefined FUN_144294e78(void)

undefined8 FUN_144294e78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144295014 FUN_144295014 body=93 status=ok
// SIG undefined FUN_144295014(void)

void FUN_144295014(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b5c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144295072 FUN_144295072 body=93 status=ok
// SIG undefined FUN_144295072(void)

void FUN_144295072(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b5c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442950d0 FUN_1442950d0 body=126 status=ok
// SIG undefined FUN_1442950d0(void)

void FUN_1442950d0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b5c30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014429513f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144295158 FUN_144295158 body=269 status=ok
// SIG undefined FUN_144295158(void)

undefined8 FUN_144295158(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14429525f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14429525f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14429525f:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144295213;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144295266(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_144295213;
    }
  }
  uVar6 = 0;
LAB_144295213:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144295266 FUN_144295266 body=881 status=ok
// SIG undefined FUN_144295266(void)

void FUN_144295266(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
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
  code *local_48;
  longlong *plStack_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1 = (longlong *)*param_1;
  lVar10 = param_1[4];
  if (lVar10 != 0) {
    if (DAT_14cba8288 == 0) {
      local_60 = &local_48;
      local_48 = FUN_141864c34;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1464cee30;
      local_68 = &LAB_148bfac22;
      local_70 = &LAB_140f21842;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) goto LAB_1442952bf;
  }
  lVar10 = 0;
LAB_1442952bf:
  lVar8 = FUN_1401e6c9b(lVar10);
  if (lVar8 == 0) {
    if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  uVar9 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_1401d61d6(&local_48,uVar9);
  plVar6 = *(longlong **)local_48;
  AcquireSRWLockExclusive((PSRWLOCK)(plVar6 + 9));
  plVar3 = plStack_40;
  *(int *)(plVar6 + 8) = (int)plVar6[8] + 1;
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
  iVar4 = (int)plVar6[1];
  if (0 < (longlong)iVar4) {
    lVar7 = plVar6[2];
    lVar12 = 0;
    iVar11 = 0;
    do {
      uVar5 = *(uint *)(lVar10 + 0xc);
      *(int *)(plVar6 + 2) = (int)lVar7 + 1 + iVar11;
      if (*(ulonglong *)(*plVar6 + 0x38 + lVar12) == (ulonglong)uVar5) {
        if (iVar11 < iVar4) {
          local_48 = (code *)0x0;
          plStack_40 = (longlong *)0x0;
          lVar10 = FUN_1401b2ade(lVar8);
          if (lVar10 == 0) {
LAB_1442953f3:
            *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
            lVar10 = *plVar6;
            piVar2 = (int *)(lVar10 + lVar12 + 0x70);
            *piVar2 = *piVar2 + 1;
            *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
            lVar7 = *plVar6;
            piVar2 = (int *)(lVar7 + lVar12 + 0x30);
            *piVar2 = *piVar2 + 1;
            FUN_1411790ac(lVar8,lVar7 + lVar12 + 0x20,lVar10 + lVar12 + 0x60,&local_48);
          }
          else {
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
            if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30))
            goto LAB_1442953f3;
            *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
            lVar8 = *plVar6;
            piVar2 = (int *)(lVar8 + lVar12 + 0x70);
            *piVar2 = *piVar2 + 1;
            *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
            lVar7 = *plVar6;
            piVar2 = (int *)(lVar7 + lVar12 + 0x30);
            *piVar2 = *piVar2 + 1;
            FUN_145aa0014(lVar10,lVar7 + lVar12 + 0x20,lVar8 + lVar12 + 0x60,&local_48);
          }
          plVar6 = plStack_40;
          if (plStack_40 != (longlong *)0x0) {
            LOCK();
            plVar3 = plStack_40 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plStack_40)(plStack_40);
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
        break;
      }
      iVar11 = iVar11 + 1;
      lVar12 = lVar12 + 0x120;
    } while ((longlong)iVar4 * 0x120 != lVar12);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1442955f0 FUN_1442955f0 body=31 status=ok
// SIG undefined FUN_1442955f0(void)

undefined8 FUN_1442955f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14429565c FUN_14429565c body=11087 status=ok
// SIG undefined FUN_14429565c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14429565c(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  undefined1 local_84 [4];
  longlong local_80 [2];
  wchar_t *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = L"AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6da0 = (ulonglong)uVar2;
  _DAT_14cbd6dac = 0;
  FUN_14052b5e0(&DAT_14cbd6da8,"contract",0);
  ram0x00014cbd6db8 = 0;
  FUN_14052b5e0(&DAT_14cbd6db4,"replay",0);
  ram0x00014cbd6dc4 = 0;
  FUN_14052b5e0(&DAT_14cbd6dc0,"missions",0);
  _DAT_14cbd6dd0 = 0;
  FUN_14052b5e0(&DAT_14cbd6dcc,"character",0);
  _DAT_14cbd6ddc = 0;
  FUN_14052b5e0(&DAT_14cbd6dd8,"profile",0);
  _DAT_14cbd6de8 = 0;
  FUN_14052b5e0(&DAT_14cbd6de4,"Missions",0);
  _DAT_14cbd6df4 = 0;
  FUN_14052b5e0(&DAT_14cbd6df0,"Timer",0);
  _DAT_14cbd6e00 = 0;
  FUN_14052b5e0(&DAT_14cbd6dfc,"Percent",0);
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cbd6e08);
  if (cVar1 == '\0') {
    _DAT_14cbd6e08 = 0;
    uRam000000014cbd6e10 = 0;
  }
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbd6e18 = 0x47efffffe0000000;
  _DAT_14cbd6e20 = 0x47efffffe0000000;
  _DAT_14cbd6e28 = 0x47efffffe0000000;
  _DAT_14cbd6e30 = 0x47efffffe0000000;
  _DAT_14cbd6e38 = 0x47efffffe0000000;
  _DAT_14cbd6e40 = 0x47efffffe0000000;
  _DAT_14cbd6e48 = 0x47efffffe0000000;
  _DAT_14cbd6e50 = 0x47efffffe0000000;
  local_70 = 
  L"慃桳眀慥潰彮灤彳獥楴慭整戀獡捩挀慨汬湥敧猀捯慩l桰瑯彯潭敤最湥牥捩瑟獡k慭汩爀獥慰湷琀瑵牯慩l灳捥慩彬潮楴楦慣楴湯最湥牥捩湟瑯晩捩瑡潩n慶汵彴慣摲伀䱎义彅䕍卓䝁E义䅇䕍䵟卅䅓䕇一呏䙉䍉呁佉彎䕍卓䝁E䕍啎呟呕剏䅉彌䕍卓䝁E潣汬捥楴汢e灵慤整挀湯楦彧灵慤整搀楥楮tGbxBrainAspectSettings_TakeOff"
  ;
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6e58 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbd6e60,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1442814c8);
  local_70 = L"潢敮䜀戀砀䄀琀琀爀椀戀甀琀攀䐀攀昀";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6e74 = 0;
  FUN_14052b5e0(&DAT_14cbd6e70,"PlayerAwareness",0);
  _DAT_14cbd6e80 = "PlayerAwareness";
  local_70 = L"basic";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6e88 = (ulonglong)uVar2;
  local_70 = L"challenge";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6e90 = (ulonglong)uVar2;
  local_70 = L"online";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6e98 = (ulonglong)uVar2;
  local_70 = L"social";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6ea0 = (ulonglong)uVar2;
  local_70 = L"alert";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6ea8 = (ulonglong)uVar2;
  local_70 = L"photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6eb0 = (ulonglong)uVar2;
  local_70 = L"generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6eb8 = (ulonglong)uVar2;
  local_70 = L"mission";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6ec0 = (ulonglong)uVar2;
  local_70 = 
  L"慭汩爀獥慰湷琀瑵牯慩l灳捥慩彬潮楴楦慣楴湯最湥牥捩湟瑯晩捩瑡潩n慶汵彴慣摲伀䱎义彅䕍卓䝁E义䅇䕍䵟卅䅓䕇一呏䙉䍉呁佉彎䕍卓䝁E䕍啎呟呕剏䅉彌䕍卓䝁E潣汬捥楴汢e灵慤整挀湯楦彧灵慤整搀楥楮tGbxBrainAspectSettings_TakeOff"
  ;
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6ec8 = (ulonglong)uVar2;
  local_70 = L"respawn";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6ed0 = (ulonglong)uVar2;
  local_70 = L"tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6ed8 = (ulonglong)uVar2;
  local_70 = L"special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6ee0 = (ulonglong)uVar2;
  local_70 = L"generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6ee8 = (ulonglong)uVar2;
  local_70 = L"vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6ef0 = (ulonglong)uVar2;
  local_70 = L"ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6ef8 = (ulonglong)uVar2;
  local_70 = L"INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6f00 = (ulonglong)uVar2;
  local_70 = L"NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6f08 = (ulonglong)uVar2;
  local_70 = L"MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6f10 = (ulonglong)uVar2;
  local_70 = L"collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6f18 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbd6f20,L"UNSET",1);
  local_70 = L"湩瑩";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = L"update";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = L"config_update";
  local_68 = 0xd;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = L"deinit";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  FUN_1446f470e(&DAT_14cbd6f28,L"Party",1);
  FUN_1446f470e(&DAT_14cbd6f30,&DAT_149e063b2);
  _DAT_14cbd6f3c = 0;
  FUN_14052b5e0(&DAT_14cbd6f38,"trait_mission",0);
  _DAT_14cbd6f48 = "trait_mission";
  _DAT_14cbd6f54 = 0;
  FUN_14052b5e0(&DAT_14cbd6f50,"weekly_trait_mission",0);
  _DAT_14cbd6f60 = "weekly_trait_mission";
  local_70 = L"獕e慔杲瑥潌正圀慥潰nGpsGeneratorSettings_TargetingOwner";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6f68 = (ulonglong)uVar2;
  local_70 = L"Sight";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6f70 = (ulonglong)uVar2;
  local_70 = L"TargetLock";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd6f78 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbd6f80,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1442826d7);
  FUN_140056680(&DAT_14cbd6f90,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1442826e8);
  FUN_140056680(&DAT_14cbd6fa0,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_1442826f9);
  FUN_140056680(&DAT_14cbd6fb0,L"GoreFX_");
  atexit((_func_5014 *)&LAB_14428270a);
  FUN_1446f470e(&DAT_14cbd6fc0,L"LIMB_GORED",1);
  _DAT_14cbd6fc8 = 0x4072c00000000000;
  _DAT_14cbd6fd0 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbd6fd8,L"body",1);
  FUN_1446f470e(&DAT_14cbd6fe0,L"title_card",1);
  FUN_1400b22c2(&DAT_14cbd6fe8,"tint_siren");
  atexit((_func_5014 *)&LAB_14428271b);
  FUN_1400b22c2(&DAT_14cbd6ff8,"tint_health");
  atexit((_func_5014 *)&LAB_14428272c);
  FUN_1446f470e(&DAT_14cbd7008,L"Join",1);
  FUN_1446f470e(&DAT_14cbd7010,L"Invite",1);
  FUN_1446f470e(&DAT_14cbd7018,L"ViewProfile",1);
  FUN_1446f470e(&DAT_14cbd7020,L"AddFriend",1);
  FUN_1446f470e(&DAT_14cbd7028,L"Mute",1);
  FUN_1446f470e(&DAT_14cbd7030,L"Unmute",1);
  FUN_1446f470e(&DAT_14cbd7038,L"Promote",1);
  FUN_1446f470e(&DAT_14cbd7040,L"Kick",1);
  FUN_1446f470e(&DAT_14cbd7048,L"AddShiftFriend",1);
  FUN_1446f470e(&DAT_14cbd7050,L"RemoveShiftFriend",1);
  FUN_1446f470e(&DAT_14cbd7058,L"AddFavorite",1);
  FUN_1446f470e(&DAT_14cbd7060,L"RemoveFavorite",1);
  FUN_1446f470e(&DAT_14cbd7068,L"BlockShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbd7070,L"UnblockShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbd7078,L"ReportShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbd7080,L"InviteFriend",1);
  FUN_1446f470e(&DAT_14cbd7088,L"InviteRecentFriends",1);
  FUN_1446f470e(&DAT_14cbd7090,L"JoinRecentFriendsHost",1);
  FUN_1446f470e(&DAT_14cbd7098,L"ViewProfiles",1);
  FUN_1446f470e(&DAT_14cbd70a0,L"TeleportToPlayer",1);
  FUN_1446f470e(&DAT_14cbd70a8,L"Cancel");
  _DAT_14cbd70b0 = 0;
  uRam000000014cbd70b8 = 0;
  _DAT_14cbd70c0 = 0;
  DAT_14cbd70c8 = 0;
  uRam000000014cbd70d0 = 0;
  FUN_1446ddda2(&DAT_14cbd70b0,"Dialog_Join",0);
  atexit((_func_5014 *)&LAB_144285127);
  _DAT_14cbd70d8 = 0;
  uRam000000014cbd70e0 = 0;
  _DAT_14cbd70e8 = 0;
  DAT_14cbd70f0 = 0;
  uRam000000014cbd70f8 = 0;
  FUN_1446ddda2(&DAT_14cbd70d8,"Dialog_Invite",0);
  atexit((_func_5014 *)&LAB_144285138);
  _DAT_14cbd7100 = 0;
  uRam000000014cbd7108 = 0;
  _DAT_14cbd7110 = 0;
  DAT_14cbd7118 = 0;
  uRam000000014cbd7120 = 0;
  FUN_1446ddda2(&DAT_14cbd7100,"Dialog_ViewProfile",0);
  atexit((_func_5014 *)&LAB_144285149);
  _DAT_14cbd7128 = 0;
  uRam000000014cbd7130 = 0;
  _DAT_14cbd7138 = 0;
  DAT_14cbd7140 = 0;
  uRam000000014cbd7148 = 0;
  FUN_1446ddda2(&DAT_14cbd7128,"Dialog_AddFriend",0);
  atexit((_func_5014 *)&LAB_14428515a);
  _DAT_14cbd7150 = 0;
  uRam000000014cbd7158 = 0;
  _DAT_14cbd7160 = 0;
  DAT_14cbd7168 = 0;
  uRam000000014cbd7170 = 0;
  FUN_1446ddda2(&DAT_14cbd7150,"Dialog_Mute",0);
  atexit((_func_5014 *)&LAB_14428516b);
  _DAT_14cbd7178 = 0;
  uRam000000014cbd7180 = 0;
  _DAT_14cbd7188 = 0;
  DAT_14cbd7190 = 0;
  uRam000000014cbd7198 = 0;
  FUN_1446ddda2(&DAT_14cbd7178,"Dialog_Unmute",0);
  atexit((_func_5014 *)&LAB_14428517c);
  _DAT_14cbd71a0 = 0;
  uRam000000014cbd71a8 = 0;
  _DAT_14cbd71b0 = 0;
  DAT_14cbd71b8 = 0;
  uRam000000014cbd71c0 = 0;
  FUN_1446ddda2(&DAT_14cbd71a0,"Dialog_Promote",0);
  atexit((_func_5014 *)&LAB_14428518d);
  _DAT_14cbd71c8 = 0;
  uRam000000014cbd71d0 = 0;
  _DAT_14cbd71d8 = 0;
  DAT_14cbd71e0 = 0;
  uRam000000014cbd71e8 = 0;
  FUN_1446ddda2(&DAT_14cbd71c8,"Dialog_Kick",0);
  atexit((_func_5014 *)&LAB_14428519e);
  _DAT_14cbd71f0 = 0;
  uRam000000014cbd71f8 = 0;
  _DAT_14cbd7200 = 0;
  DAT_14cbd7208 = 0;
  uRam000000014cbd7210 = 0;
  FUN_1446ddda2(&DAT_14cbd71f0,"Dialog_AddShiftFriend",0);
  atexit((_func_5014 *)&LAB_1442851af);
  _DAT_14cbd7218 = 0;
  uRam000000014cbd7220 = 0;
  _DAT_14cbd7228 = 0;
  DAT_14cbd7230 = 0;
  uRam000000014cbd7238 = 0;
  FUN_1446ddda2(&DAT_14cbd7218,"Dialog_RemoveShiftFriend",0);
  atexit((_func_5014 *)&LAB_1442851c0);
  _DAT_14cbd7240 = 0;
  uRam000000014cbd7248 = 0;
  _DAT_14cbd7250 = 0;
  DAT_14cbd7258 = 0;
  uRam000000014cbd7260 = 0;
  FUN_1446ddda2(&DAT_14cbd7240,"Dialog_AddFavorite",0);
  atexit((_func_5014 *)&LAB_1442851d1);
  _DAT_14cbd7268 = 0;
  uRam000000014cbd7270 = 0;
  _DAT_14cbd7278 = 0;
  DAT_14cbd7280 = 0;
  uRam000000014cbd7288 = 0;
  FUN_1446ddda2(&DAT_14cbd7268,"Dialog_RemoveFavorite",0);
  atexit((_func_5014 *)&LAB_1442851e2);
  _DAT_14cbd7290 = 0;
  uRam000000014cbd7298 = 0;
  _DAT_14cbd72a0 = 0;
  DAT_14cbd72a8 = 0;
  uRam000000014cbd72b0 = 0;
  FUN_1446ddda2(&DAT_14cbd7290,"Dialog_BlockShiftPlayer",0);
  atexit((_func_5014 *)&LAB_1442851f3);
  _DAT_14cbd72b8 = 0;
  uRam000000014cbd72c0 = 0;
  _DAT_14cbd72c8 = 0;
  DAT_14cbd72d0 = 0;
  uRam000000014cbd72d8 = 0;
  FUN_1446ddda2(&DAT_14cbd72b8,"Dialog_UnblockShiftPlayer",0);
  atexit((_func_5014 *)&LAB_144285204);
  _DAT_14cbd72e0 = 0;
  uRam000000014cbd72e8 = 0;
  _DAT_14cbd72f0 = 0;
  DAT_14cbd72f8 = 0;
  uRam000000014cbd7300 = 0;
  FUN_1446ddda2(&DAT_14cbd72e0,"Dialog_ReportShiftPlayer",0);
  atexit((_func_5014 *)&LAB_144285215);
  _DAT_14cbd7308 = 0;
  uRam000000014cbd7310 = 0;
  _DAT_14cbd7318 = 0;
  DAT_14cbd7320 = 0;
  uRam000000014cbd7328 = 0;
  FUN_1446ddda2(&DAT_14cbd7308,"Dialog_InviteFriend",0);
  atexit((_func_5014 *)&LAB_144285226);
  _DAT_14cbd7330 = 0;
  uRam000000014cbd7338 = 0;
  _DAT_14cbd7340 = 0;
  DAT_14cbd7348 = 0;
  uRam000000014cbd7350 = 0;
  FUN_1446ddda2(&DAT_14cbd7330,"Dialog_InviteRecentFriends",0);
  atexit((_func_5014 *)&LAB_144285237);
  _DAT_14cbd7358 = 0;
  uRam000000014cbd7360 = 0;
  _DAT_14cbd7368 = 0;
  DAT_14cbd7370 = 0;
  uRam000000014cbd7378 = 0;
  FUN_1446ddda2(&DAT_14cbd7358,"Dialog_JoinRecentFriendsHost",0);
  atexit((_func_5014 *)&LAB_144285248);
  _DAT_14cbd7380 = 0;
  uRam000000014cbd7388 = 0;
  _DAT_14cbd7390 = 0;
  DAT_14cbd7398 = 0;
  uRam000000014cbd73a0 = 0;
  FUN_1446ddda2(&DAT_14cbd7380,"Dialog_ViewProfiles",0);
  atexit((_func_5014 *)&LAB_144285259);
  _DAT_14cbd73a8 = 0;
  uRam000000014cbd73b0 = 0;
  _DAT_14cbd73b8 = 0;
  DAT_14cbd73c0 = 0;
  uRam000000014cbd73c8 = 0;
  FUN_1446ddda2(&DAT_14cbd73a8,"Dialog_TeleportToPlayer",0);
  atexit((_func_5014 *)&LAB_14428526a);
  _DAT_14cbd73d0 = 0;
  uRam000000014cbd73d8 = 0;
  _DAT_14cbd73e0 = 0;
  DAT_14cbd73e8 = 0;
  uRam000000014cbd73f0 = 0;
  FUN_1446ddda2(&DAT_14cbd73d0,"Dialog_Cancel",0);
  atexit((_func_5014 *)&LAB_14428527b);
  FUN_1400b22c2(&DAT_14cbd73f8,"GoOnlineText");
  atexit((_func_5014 *)&LAB_14428528c);
  FUN_1400b22c2(&DAT_14cbd7408,"GoingOnlineTextOnePeriod");
  atexit((_func_5014 *)&LAB_14428529d);
  FUN_1400b22c2(&DAT_14cbd7418,"GoingOnlineTextTwoPeriods");
  atexit((_func_5014 *)&LAB_1442852ae);
  FUN_1400b22c2(&DAT_14cbd7428,"GoingOnlineTextThreePeriods");
  atexit((_func_5014 *)&LAB_1442852bf);
  FUN_140056680(&DAT_14cbd7438,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_1442852d0);
  _DAT_14cbd7448 = 0;
  uRam000000014cbd7450 = 0;
  _DAT_14cbd7458 = 0;
  DAT_14cbd7460 = 0;
  uRam000000014cbd7468 = 0;
  FUN_1446ddda2(&DAT_14cbd7448,"Matchmaking_AutomaticRegionText",0);
  atexit((_func_5014 *)&LAB_1442852e1);
  _DAT_14cbd7470 = 0;
  uRam000000014cbd7478 = 0;
  _DAT_14cbd7480 = 0;
  DAT_14cbd7488 = 0;
  uRam000000014cbd7490 = 0;
  FUN_1446ddda2(&DAT_14cbd7470,"Matchmaking_ManualRegionText",0);
  atexit((_func_5014 *)&LAB_1442852f2);
  _DAT_14cbd7498 = 0;
  uRam000000014cbd74a0 = 0;
  _DAT_14cbd74a8 = 0;
  DAT_14cbd74b0 = 0;
  uRam000000014cbd74b8 = 0;
  FUN_1446ddda2(&DAT_14cbd7498,"PingDisplayText",0);
  atexit((_func_5014 *)&LAB_144285303);
  _DAT_14cbd74c0 = 0;
  uRam000000014cbd74c8 = 0;
  _DAT_14cbd74d0 = 0;
  DAT_14cbd74d8 = 0;
  uRam000000014cbd74e0 = 0;
  FUN_1446ddda2(&DAT_14cbd74c0,"GoodPingDisplayText",0);
  atexit((_func_5014 *)&LAB_144285314);
  _DAT_14cbd74e8 = 0;
  uRam000000014cbd74f0 = 0;
  _DAT_14cbd74f8 = 0;
  DAT_14cbd7500 = 0;
  uRam000000014cbd7508 = 0;
  FUN_1446ddda2(&DAT_14cbd74e8,"OkPingDisplayText",0);
  atexit((_func_5014 *)&LAB_144285325);
  _DAT_14cbd7510 = 0;
  uRam000000014cbd7518 = 0;
  _DAT_14cbd7520 = 0;
  DAT_14cbd7528 = 0;
  uRam000000014cbd7530 = 0;
  FUN_1446ddda2(&DAT_14cbd7510,"BadPingDisplayText",0);
  atexit((_func_5014 *)&LAB_144285336);
  local_70 = L"Standard";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7538 = (ulonglong)uVar2;
  local_70 = L"PrologueSkip";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7540 = (ulonglong)uVar2;
  local_70 = L"UltimateVaultHunterSkip";
  local_68 = 0x17;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7548 = (ulonglong)uVar2;
  local_70 = L"SkipToDLC_Cowbell";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7550 = (ulonglong)uVar2;
  local_70 = L"SkipToDLC_Harmonica";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7558 = (ulonglong)uVar2;
  local_70 = L"Online";
  local_68 = 6;
  FUN_1446e940c(local_80,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_84,&local_70);
  local_70 = L"Online";
  local_68 = 6;
  FUN_140208c1e(&DAT_14cbd7560,local_84,local_80,&local_70);
  atexit((_func_5014 *)&LAB_144285347);
  local_70 = L"Offline";
  local_68 = 7;
  FUN_1446e940c(local_80,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_84,&local_70);
  local_70 = L"Offline";
  local_68 = 7;
  FUN_140208c1e(&DAT_14cbd7570,local_84,local_80,&local_70);
  atexit((_func_5014 *)&LAB_14428535b);
  local_70 = L"Away";
  local_68 = 4;
  FUN_1446e940c(local_80,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_84,&local_70);
  local_70 = L"Away";
  local_68 = 4;
  FUN_140208c1e(&DAT_14cbd7580,local_84,local_80,&local_70);
  atexit((_func_5014 *)&LAB_14428536f);
  local_70 = L"DoNotDisturb";
  local_68 = 0xc;
  FUN_1446e940c(local_80,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_84,&local_70);
  local_70 = L"Do Not Disturb";
  local_68 = 0xe;
  FUN_140208c1e(&DAT_14cbd7590,local_84,local_80,&local_70);
  atexit((_func_5014 *)&LAB_144285383);
  local_70 = L"Chat";
  local_68 = 4;
  FUN_1446e940c(local_80,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_84,&local_70);
  local_70 = L"Chat";
  local_68 = 4;
  FUN_140208c1e(&DAT_14cbd75a0,local_84,local_80,&local_70);
  atexit((_func_5014 *)&LAB_144285397);
  _DAT_14cbd75b0 = 0;
  uRam000000014cbd75b8 = 0;
  _DAT_14cbd75c0 = 0;
  DAT_14cbd75c8 = 0;
  uRam000000014cbd75d0 = 0;
  FUN_1446ddda2(&DAT_14cbd75b0,"LobbyCharacterText",0);
  atexit((_func_5014 *)&LAB_1442853ab);
  _DAT_14cbd75d8 = 0;
  uRam000000014cbd75e0 = 0;
  _DAT_14cbd75e8 = 0;
  DAT_14cbd75f0 = 0;
  uRam000000014cbd75f8 = 0;
  FUN_1446ddda2(&DAT_14cbd75d8,"ParamXOfYText",0);
  atexit((_func_5014 *)&LAB_1442853bc);
  _DAT_14cbd7600 = 0;
  uRam000000014cbd7608 = 0;
  _DAT_14cbd7610 = 0;
  DAT_14cbd7618 = 0;
  uRam000000014cbd7620 = 0;
  FUN_1446ddda2(&DAT_14cbd7600,"InvitesPendingText",0);
  atexit((_func_5014 *)&LAB_1442853cd);
  _DAT_14cbd7628 = 0;
  uRam000000014cbd7630 = 0;
  _DAT_14cbd7638 = 0;
  DAT_14cbd7640 = 0;
  uRam000000014cbd7648 = 0;
  FUN_1446ddda2(&DAT_14cbd7628,"FriendRequestsPendingText",0);
  atexit((_func_5014 *)&LAB_1442853de);
  _DAT_14cbd7650 = 0;
  uRam000000014cbd7658 = 0;
  _DAT_14cbd7660 = 0;
  DAT_14cbd7668 = 0;
  uRam000000014cbd7670 = 0;
  FUN_1446ddda2(&DAT_14cbd7650,"NetworkUnknownText",0);
  atexit((_func_5014 *)&LAB_1442853ef);
  _DAT_14cbd7678 = 0;
  uRam000000014cbd7680 = 0;
  _DAT_14cbd7688 = 0;
  DAT_14cbd7690 = 0;
  uRam000000014cbd7698 = 0;
  FUN_1446ddda2(&DAT_14cbd7678,"PartyLevelText",0);
  atexit((_func_5014 *)&LAB_144285400);
  _DAT_14cbd76a0 = 0;
  uRam000000014cbd76a8 = 0;
  _DAT_14cbd76b0 = 0;
  DAT_14cbd76b8 = 0;
  uRam000000014cbd76c0 = 0;
  FUN_1446ddda2(&DAT_14cbd76a0,"PartyTooltipText",0);
  atexit((_func_5014 *)&LAB_144285411);
  _DAT_14cbd76c8 = 0;
  uRam000000014cbd76d0 = 0;
  _DAT_14cbd76d8 = 0;
  DAT_14cbd76e0 = 0;
  uRam000000014cbd76e8 = 0;
  FUN_1446ddda2(&DAT_14cbd76c8,"PartyWithActivityTooltipText",0);
  atexit((_func_5014 *)&LAB_144285422);
  FUN_140056680(&DAT_14cbd76f0,L"InviteFriend");
  atexit((_func_5014 *)&LAB_144285433);
  FUN_140056680(&DAT_14cbd7700,L"InviteRecentFriends");
  atexit((_func_5014 *)&LAB_144285444);
  FUN_140056680(&DAT_14cbd7710,L"ShiftNotifications");
  atexit((_func_5014 *)&LAB_144285455);
  FUN_140056680(&DAT_14cbd7720,L"ExitParty");
  atexit((_func_5014 *)&LAB_144285466);
  FUN_140056680(&DAT_14cbd7730,L"GoOnline");
  atexit((_func_5014 *)&LAB_144285477);
  FUN_140056680(&DAT_14cbd7740,L"Matchmaking");
  atexit((_func_5014 *)&LAB_144285488);
  FUN_140056680(&DAT_14cbd7750,L"PreviousPage");
  atexit((_func_5014 *)&LAB_144285499);
  FUN_140056680(&DAT_14cbd7760,L"NextPage");
  atexit((_func_5014 *)&LAB_1442854aa);
  FUN_140056680(&DAT_14cbd77c8,L"available");
  atexit((_func_5014 *)&LAB_1442854ea);
  FUN_140056680(&DAT_14cbd77d8,L"synced");
  atexit((_func_5014 *)&LAB_1442854fb);
  FUN_140056680(&DAT_14cbd77e8,L"offline");
  atexit((_func_5014 *)&LAB_14428550c);
  FUN_140056680(&DAT_14cbd77f8,L"incompatible");
  atexit((_func_5014 *)&LAB_14428551d);
  FUN_140056680(&DAT_14cbd7808,L"conflict");
  atexit((_func_5014 *)&LAB_14428552e);
  _DAT_14cbd7818 = 0;
  uRam000000014cbd7820 = 0;
  _DAT_14cbd7828 = 0;
  DAT_14cbd7830 = 0;
  uRam000000014cbd7838 = 0;
  FUN_1446ddda2(&DAT_14cbd7818,"latest_popup_article",0);
  atexit((_func_5014 *)&LAB_144285932);
  _DAT_14cbd7840 = 0;
  uRam000000014cbd7848 = 0;
  _DAT_14cbd7850 = 0;
  DAT_14cbd7858 = 0;
  uRam000000014cbd7860 = 0;
  FUN_1446ddda2(&DAT_14cbd7840,"seen_popup_articles",0);
  atexit((_func_5014 *)&LAB_144285943);
  _DAT_14cbd7868 = 0;
  uRam000000014cbd7870 = 0;
  _DAT_14cbd7878 = 0;
  DAT_14cbd7880 = 0;
  uRam000000014cbd7888 = 0;
  FUN_1446ddda2(&DAT_14cbd7868,"LaunchImages",0);
  atexit((_func_5014 *)&LAB_144285954);
  FUN_1400b22c2(&DAT_14cbd7890,"uiresources/menu_news/assets/image_small/");
  atexit((_func_5014 *)&LAB_144285965);
  FUN_1400b22c2(&DAT_14cbd78a0,"uiresources/menu_news/assets/image_large/");
  atexit((_func_5014 *)&LAB_144285976);
  FUN_1400b22c2(&DAT_14cbd78b0,"mini_title");
  atexit((_func_5014 *)&LAB_144285987);
  FUN_1400b22c2(&DAT_14cbd78c0,"mini_description");
  atexit((_func_5014 *)&LAB_144285998);
  FUN_1400b22c2(&DAT_14cbd78d0,"large_title");
  atexit((_func_5014 *)&LAB_1442859a9);
  FUN_1400b22c2(&DAT_14cbd78e0,"large_caption");
  atexit((_func_5014 *)&LAB_1442859ba);
  FUN_1400b22c2(&DAT_14cbd78f0,"large_subtitle");
  atexit((_func_5014 *)&LAB_1442859cb);
  FUN_1400b22c2(&DAT_14cbd7900,"large_description");
  atexit((_func_5014 *)&LAB_1442859dc);
  FUN_1400b22c2(&DAT_14cbd7910,"button_prompt");
  atexit((_func_5014 *)&LAB_1442859ed);
  FUN_1400b22c2(&DAT_14cbd7920,"img_game_sm_noloc");
  atexit((_func_5014 *)&LAB_1442859fe);
  FUN_1400b22c2(&DAT_14cbd7930,"img_game_lg_noloc");
  atexit((_func_5014 *)&LAB_144285a0f);
  FUN_1400b22c2(&DAT_14cbd7940,"url_learn_more_noloc");
  atexit((_func_5014 *)&LAB_144285a20);
  FUN_1400b22c2(&DAT_14cbd7950,"img_game_nobound_noloc");
  atexit((_func_5014 *)&LAB_144285a31);
  FUN_1400b22c2(&DAT_14cbd7960,"product_id");
  atexit((_func_5014 *)&LAB_144285a42);
  FUN_1400b22c2(&DAT_14cbd7970,"marketplace_id");
  atexit((_func_5014 *)&LAB_144285a53);
  FUN_1400b22c2(&DAT_14cbd7980,"epic_sandbox_id");
  atexit((_func_5014 *)&LAB_144285a64);
  FUN_1400b22c2(&DAT_14cbd7990,"disc_img_game_sm");
  atexit((_func_5014 *)&LAB_144285a75);
  FUN_1400b22c2(&DAT_14cbd79a0,"disc_img_game_lg");
  atexit((_func_5014 *)&LAB_144285a86);
  FUN_1400b22c2(&DAT_14cbd79b0,"news_speed_seconds");
  atexit((_func_5014 *)&LAB_144285a97);
  FUN_1400b22c2(&DAT_14cbd79c0,"force_fullscreen");
  atexit((_func_5014 *)&LAB_144285aa8);
  FUN_1400b22c2(&DAT_14cbd79d0,"shiftui");
  atexit((_func_5014 *)&LAB_144285ab9);
  _DAT_14cbd79e0 = 0;
  uRam000000014cbd79e8 = 0;
  _DAT_14cbd79f0 = 0;
  DAT_14cbd79f8 = 0;
  uRam000000014cbd7a00 = 0;
  FUN_1446ddda2(&DAT_14cbd79e0,"accepted_eulas",0);
  atexit((_func_5014 *)&LAB_144285aca);
  _DAT_14cbd7a08 = 0;
  uRam000000014cbd7a10 = 0;
  _DAT_14cbd7a18 = 0;
  DAT_14cbd7a20 = 0;
  uRam000000014cbd7a28 = 0;
  FUN_1446ddda2(&DAT_14cbd7a08,"accepted_warnings",0);
  atexit((_func_5014 *)&LAB_144285adb);
  _DAT_14cbd7a30 = 0;
  uRam000000014cbd7a38 = 0;
  _DAT_14cbd7a40 = 0;
  DAT_14cbd7a48 = 0;
  uRam000000014cbd7a50 = 0;
  FUN_1446ddda2(&DAT_14cbd7a30,"photosensitivity_warning",0);
  atexit((_func_5014 *)&LAB_144285aec);
  local_70 = L"shift_welcome_db";
  local_68 = 0x10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7a58 = (ulonglong)uVar2;
  local_70 = L"shift_crossplay_db";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7a60 = (ulonglong)uVar2;
  local_70 = L"shift_name_change_db";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7a68 = (ulonglong)uVar2;
  local_70 = L"enable_crossplay";
  local_68 = 0x10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7a70 = (ulonglong)uVar2;
  local_70 = L"disable_crossplay";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7a78 = (ulonglong)uVar2;
  local_70 = L"continue";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7a80 = (ulonglong)uVar2;
  local_70 = L"coppa_region_db_pc";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7a88 = (ulonglong)uVar2;
  local_70 = L"coppa_region_confirm_db";
  local_68 = 0x17;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7a90 = (ulonglong)uVar2;
  local_70 = L"coppa_birthdate_db_pc";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7a98 = (ulonglong)uVar2;
  local_70 = L"coppa_birthdate_confirm_db";
  local_68 = 0x1a;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7aa0 = (ulonglong)uVar2;
  local_70 = L"shift_online_limited_db";
  local_68 = 0x17;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7aa8 = (ulonglong)uVar2;
  local_70 = L"shift_coop_blocked_db";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7ab0 = (ulonglong)uVar2;
  local_70 = L"age_set_error_db";
  local_68 = 0x10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7ab8 = (ulonglong)uVar2;
  local_70 = L"more_info";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7ac0 = (ulonglong)uVar2;
  local_70 = L"continue";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7ac8 = (ulonglong)uVar2;
  _DAT_14cbd7ad0 = 0;
  uRam000000014cbd7ad8 = 0;
  _DAT_14cbd7ae0 = 0;
  DAT_14cbd7ae8 = 0;
  uRam000000014cbd7af0 = 0;
  FUN_1446ddda2(&DAT_14cbd7ad0,"PlayerText",0);
  atexit((_func_5014 *)&LAB_14428724a);
  local_70 = L"audio_calibration";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7af8 = (ulonglong)uVar2;
  local_70 = L"brightness_calibration";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7b00 = (ulonglong)uVar2;
  local_70 = L"brightness_calibration_ftc";
  local_68 = 0x1a;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7b08 = (ulonglong)uVar2;
  local_70 = L"safe_area_calibration";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7b10 = (ulonglong)uVar2;
  local_70 = L"options_accessibility";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7b18 = (ulonglong)uVar2;
  local_70 = L"UpscalingMethod";
  local_68 = 0xf;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7b20 = (ulonglong)uVar2;
  local_70 = L"FrameGeneration";
  local_68 = 0xf;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7b28 = (ulonglong)uVar2;
  local_70 = L"Upscaling";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7b30 = (ulonglong)uVar2;
  local_70 = L"AntiAliasingMethod";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7b38 = (ulonglong)uVar2;
  local_70 = L"WindowsTextureLODGroups";
  local_68 = 0x17;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7b40 = (ulonglong)uVar2;
  local_70 = L"Textures";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7b48 = (ulonglong)uVar2;
  local_70 = L"reset_options";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7b50 = (ulonglong)uVar2;
  local_70 = L"confirm";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7b58 = (ulonglong)uVar2;
  local_70 = L"edit_safe_area";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7b60 = (ulonglong)uVar2;
  local_70 = L"calibrate_display";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7b68 = (ulonglong)uVar2;
  local_70 = L"autodetect_graphics_preset";
  local_68 = 0x1a;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7b70 = (ulonglong)uVar2;
  local_70 = L"engoodify";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd7b78 = (ulonglong)uVar2;
  local_70 = L"clear_pips";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7b80 = (ulonglong)uVar2;
  local_70 = L"reset_menu_tutorials";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7b88 = (ulonglong)uVar2;
  local_70 = L"reset_hud_tutorials";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7b90 = (ulonglong)uVar2;
  local_70 = L"visuals_basic";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7b98 = (ulonglong)uVar2;
  local_70 = L"visuals_advanced";
  local_68 = 0x10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7ba0 = (ulonglong)uVar2;
  local_70 = L"resolution";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7ba8 = (ulonglong)uVar2;
  local_70 = L"font_scale_hud";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7bb0 = (ulonglong)uVar2;
  local_70 = L"font_scale_menu";
  local_68 = 0xf;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7bb8 = (ulonglong)uVar2;
  local_70 = L"rebind_accept_binding";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7bc0 = (ulonglong)uVar2;
  local_70 = L"rebind_unbind_conflicts";
  local_68 = 0x17;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7bc8 = (ulonglong)uVar2;
  local_70 = L"rebind_cancel";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7bd0 = (ulonglong)uVar2;
  local_70 = L"controls_gamepad";
  local_68 = 0x10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd7bd8 = (ulonglong)uVar2;
  _DAT_14cbd7be0 = 0;
  uRam000000014cbd7be8 = 0;
  _DAT_14cbd7bf0 = 0;
  DAT_14cbd7bf8 = 0;
  uRam000000014cbd7c00 = 0;
  FUN_1446ddda2(&DAT_14cbd7be0,"RemoveBindingText",0);
  atexit((_func_5014 *)&LAB_14428725b);
  _DAT_14cbd7c08 = 0;
  uRam000000014cbd7c10 = 0;
  _DAT_14cbd7c18 = 0;
  DAT_14cbd7c20 = 0;
  uRam000000014cbd7c28 = 0;
  FUN_1446ddda2(&DAT_14cbd7c08,"RemoveBindingsText",0);
  atexit((_func_5014 *)&LAB_14428726c);
  _DAT_14cbd7c30 = 0;
  uRam000000014cbd7c38 = 0;
  _DAT_14cbd7c40 = 0;
  DAT_14cbd7c48 = 0;
  uRam000000014cbd7c50 = 0;
  FUN_1446ddda2(&DAT_14cbd7c30,"KeepBindingText",0);
  atexit((_func_5014 *)&LAB_14428727d);
  _DAT_14cbd7c58 = 0;
  uRam000000014cbd7c60 = 0;
  _DAT_14cbd7c68 = 0;
  DAT_14cbd7c70 = 0;
  uRam000000014cbd7c78 = 0;
  FUN_1446ddda2(&DAT_14cbd7c58,"KeepBindingsText",0);
  atexit((_func_5014 *)&LAB_14428728e);
  _DAT_14cbd7c80 = 0;
  uRam000000014cbd7c88 = 0;
  _DAT_14cbd7c90 = 0;
  DAT_14cbd7c98 = 0;
  uRam000000014cbd7ca0 = 0;
  FUN_1446ddda2(&DAT_14cbd7c80,"SwapBindingsText",0);
  atexit((_func_5014 *)&LAB_14428729f);
  _DAT_14cbd7ca8 = 0;
  uRam000000014cbd7cb0 = 0;
  _DAT_14cbd7cb8 = 0;
  DAT_14cbd7cc0 = 0;
  uRam000000014cbd7cc8 = 0;
  FUN_1446ddda2(&DAT_14cbd7ca8,"SwapBindingsTitleText",0);
  atexit((_func_5014 *)&LAB_1442872b0);
  _DAT_14cbd7cd0 = 0;
  uRam000000014cbd7cd8 = 0;
  _DAT_14cbd7ce0 = 0;
  DAT_14cbd7ce8 = 0;
  uRam000000014cbd7cf0 = 0;
  FUN_1446ddda2(&DAT_14cbd7cd0,"CancelRebindingText",0);
  atexit((_func_5014 *)&LAB_1442872c1);
  _DAT_14cbd7cf8 = 0;
  uRam000000014cbd7d00 = 0;
  _DAT_14cbd7d08 = 0;
  DAT_14cbd7d10 = 0;
  uRam000000014cbd7d18 = 0;
  FUN_1446ddda2(&DAT_14cbd7cf8,"RebindTitleText",0);
  atexit((_func_5014 *)&LAB_1442872d2);
  _DAT_14cbd7d20 = 0;
  uRam000000014cbd7d28 = 0;
  _DAT_14cbd7d30 = 0;
  DAT_14cbd7d38 = 0;
  uRam000000014cbd7d40 = 0;
  FUN_1446ddda2(&DAT_14cbd7d20,"RebindTitleTextSingular",0);
  atexit((_func_5014 *)&LAB_1442872e3);
  _DAT_14cbd7d48 = 0;
  uRam000000014cbd7d50 = 0;
  _DAT_14cbd7d58 = 0;
  DAT_14cbd7d60 = 0;
  uRam000000014cbd7d68 = 0;
  FUN_1446ddda2(&DAT_14cbd7d48,"RebindBodyText1",0);
  atexit((_func_5014 *)&LAB_1442872f4);
  _DAT_14cbd7d70 = 0;
  uRam000000014cbd7d78 = 0;
  _DAT_14cbd7d80 = 0;
  DAT_14cbd7d88 = 0;
  uRam000000014cbd7d90 = 0;
  FUN_1446ddda2(&DAT_14cbd7d70,"RebindBodyText2",0);
  atexit((_func_5014 *)&LAB_144287305);
  _DAT_14cbd7d98 = 0;
  uRam000000014cbd7da0 = 0;
  _DAT_14cbd7da8 = 0;
  DAT_14cbd7db0 = 0;
  uRam000000014cbd7db8 = 0;
  FUN_1446ddda2(&DAT_14cbd7d98,"RebindBodyText3",0);
  atexit((_func_5014 *)&LAB_144287316);
  _DAT_14cbd7dc0 = 0;
  uRam000000014cbd7dc8 = 0;
  _DAT_14cbd7dd0 = 0;
  DAT_14cbd7dd8 = 0;
  uRam000000014cbd7de0 = 0;
  FUN_1446ddda2(&DAT_14cbd7dc0,"RebindBodyText4",0);
  atexit((_func_5014 *)&LAB_144287327);
  _DAT_14cbd7de8 = 0;
  uRam000000014cbd7df0 = 0;
  _DAT_14cbd7df8 = 0;
  DAT_14cbd7e00 = 0;
  uRam000000014cbd7e08 = 0;
  FUN_1446ddda2(&DAT_14cbd7de8,"RebindBodyText5",0);
  atexit((_func_5014 *)&LAB_144287338);
  _DAT_14cbd7e10 = 0;
  uRam000000014cbd7e18 = 0;
  _DAT_14cbd7e20 = 0;
  DAT_14cbd7e28 = 0;
  uRam000000014cbd7e30 = 0;
  FUN_1446ddda2(&DAT_14cbd7e10,"RebindBodyTextX",0);
  atexit((_func_5014 *)&LAB_144287349);
  _DAT_14cbd7e38 = 0;
  uRam000000014cbd7e40 = 0;
  _DAT_14cbd7e48 = 0;
  DAT_14cbd7e50 = 0;
  uRam000000014cbd7e58 = 0;
  FUN_1446ddda2(&DAT_14cbd7e38,"RebindBodyTextGamepad",0);
  atexit((_func_5014 *)&LAB_14428735a);
  _DAT_14cbd7e60 = 0;
  uRam000000014cbd7e68 = 0;
  _DAT_14cbd7e70 = 0;
  DAT_14cbd7e78 = 0;
  uRam000000014cbd7e80 = 0;
  FUN_1446ddda2(&DAT_14cbd7e60,"FontScalingTitleText",0);
  atexit((_func_5014 *)&LAB_14428736b);
  _DAT_14cbd7e88 = 0;
  uRam000000014cbd7e90 = 0;
  _DAT_14cbd7e98 = 0;
  DAT_14cbd7ea0 = 0;
  uRam000000014cbd7ea8 = 0;
  FUN_1446ddda2(&DAT_14cbd7e88,"FontScalingText",0);
  atexit((_func_5014 *)&LAB_14428737c);
  _DAT_14cbd7eb0 = 0;
  uRam000000014cbd7eb8 = 0;
  _DAT_14cbd7ec0 = 0;
  DAT_14cbd7ec8 = 0;
  uRam000000014cbd7ed0 = 0;
  FUN_1446ddda2(&DAT_14cbd7eb0,"options_accessibility",0);
  atexit((_func_5014 *)&LAB_14428738d);
  FUN_1400b22c2(&DAT_14cbd7ed8,"ActionName");
  atexit((_func_5014 *)&LAB_14428739e);
  FUN_140056680(local_80,&DAT_149dfb77a);
  local_70 = L"GameSettings.SettingConfig.IsDropdown";
  local_68 = 0x25;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  local_70 = L"OakGame";
  local_68 = 7;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70);
  local_90 = 0;
  local_98 = local_80;
  FUN_14125750c(&DAT_14cbd7ee8,0,uVar4,uVar3);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_1442873af);
  FUN_140056680(local_80,&DAT_149dfb77a);
  local_70 = L"GameSettings.SettingConfig.ShowInFirstTimeCalibration";
  local_68 = 0x35;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  local_70 = L"OakGame";
  local_68 = 7;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_90 = 0;
  local_98 = local_80;
  FUN_14125750c(&DAT_14cbd7ef0,0,uVar4,uVar3);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_1442873bb);
  FUN_140056680(local_80,&DAT_149dfb77a);
  local_70 = L"GameSettings.SettingConfig.FirstTimeCalibrationOnly";
  local_68 = 0x33;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  local_70 = L"OakGame";
  local_68 = 7;
  local_64 = 0;
  uVar4 = FUN_14001a6c0(&local_70,1);
  local_90 = 0;
  local_98 = local_80;
  FUN_14125750c(&DAT_14cbd7ef8,0,uVar4,uVar3);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_1442873c7);
  ram0x00014cbd7f04 = 0;
  FUN_14052b5e0(&DAT_14cbd7f00,"shown_first_time_calibration",0);
  _DAT_14cbd7fc0 = 0;
  uRam000000014cbd7fc8 = 0;
  _DAT_14cbd7fd0 = 0;
  DAT_14cbd7fd8 = 0;
  uRam000000014cbd7fe0 = 0;
  FUN_1446ddda2(&DAT_14cbd7fc0,"Team_Shade",0);
  atexit((_func_5014 *)&LAB_144287865);
  _DAT_14cbd7fe8 = 0;
  uRam000000014cbd7ff0 = 0;
  _DAT_14cbd7ff8 = 0;
  DAT_14cbd8000 = 0;
  uRam000000014cbd8008 = 0;
  FUN_1446ddda2(&DAT_14cbd7fe8,"Team_Player",0);
  atexit((_func_5014 *)&LAB_144287876);
  local_70 = (wchar_t *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_98._0_4_ = 1;
  FUN_140bd5914(&DAT_14cbd8010,L"oak.nameplate.smoothing",&local_70,
                L"Whether to apply velocity smoothing to overhead nameplate locations.");
  atexit(FUN_144287ab4);
  local_70 = (wchar_t *)CONCAT44(local_70._4_4_,0x42c80000);
  local_98 = (longlong *)CONCAT44(local_98._4_4_,1);
  FUN_140a6b41e(&DAT_14cbd8028,L"oak.nameplate.max_distance",&local_70,
                L"Maximum distance at which to do smoothing. The smoothing effect will be ramped down to 0% at this distance."
               );
  atexit(FUN_144287af9);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144298278 FUN_144298278 body=301 status=ok
// SIG undefined FUN_144298278(void)

void FUN_144298278(longlong param_1)

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
  lVar1 = FUN_1400d7050(param_1 + 0x30);
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



// FUNCTION 1442983ba FUN_1442983ba body=47 status=ok
// SIG undefined FUN_1442983ba(void)

bool FUN_1442983ba(longlong param_1)

{
  longlong lVar1;
  
  if ((*(int *)(param_1 + 0x24) != 0) && (lVar1 = FUN_140059518(param_1 + 0x14), lVar1 != 0)) {
    lVar1 = FUN_1401ca7f2(lVar1);
    return lVar1 != 0;
  }
  return false;
}



// FUNCTION 1442983ea FUN_1442983ea body=460 status=ok
// SIG undefined FUN_1442983ea(void)

void FUN_1442983ea(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = FUN_140059518(param_1 + 0x14);
  if ((lVar4 != 0) && (lVar4 = FUN_1401ca7f2(lVar4), lVar4 != 0)) {
    uVar2 = *(uint *)(lVar4 + 0xc);
    *(uint *)(param_1 + 0x40) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    lVar1 = param_1 + -0x30;
    iVar3 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar3 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar3 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar3 = iVar5;
      }
    }
    *(int *)(param_1 + 0x44) = iVar3;
    local_50 = FUN_1442985b8;
    local_48 = 0;
    FUN_146646100(lVar4 + 0xa0,&local_40,lVar1,&local_50);
    local_50 = FUN_144299822;
    local_48 = 0;
    FUN_146646100(lVar4 + 0xb8,&local_40,lVar1,&local_50);
    lVar4 = FUN_140e658aa(param_1 + 0x14);
    if ((lVar4 != 0) && (lVar4 = FUN_1449baec6(lVar4), lVar4 != 0)) {
      lVar6 = FUN_140d976a6();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        local_50 = (code *)&LAB_1459ba9dc;
        local_48 = 0;
        FUN_146646200(lVar4 + 0x410,&local_40,lVar1);
        *(undefined8 *)(param_1 + 0x38) = local_40;
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442985b8 FUN_1442985b8 body=4713 status=ok
// SIG undefined FUN_1442985b8(void)

void FUN_1442985b8(longlong param_1,char param_2)

{
  int *piVar1;
  uint *puVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  PSRWLOCK pRVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  bool bVar21;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  code *local_a0;
  ulonglong local_98;
  PSRWLOCK local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 local_78;
  longlong *plStack_70;
  wchar_t local_68 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(longlong *)(param_1 + 0x80) == 0) {
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    lVar11 = DAT_14caa8580;
    local_78 = (code *)0x14b9b5ed0;
    plStack_70 = (longlong *)CONCAT35(plStack_70._5_3_,0x17);
    uVar5 = FUN_14001a6c0(&local_78,1);
    FUN_1400702d4(lVar11,&local_78,uVar5,0);
    *(code **)(param_1 + 0x78) = local_78;
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    lVar11 = DAT_14caa8580;
    local_78 = (code *)0x14b9b5ee8;
    plStack_70 = (longlong *)CONCAT35(plStack_70._5_3_,0x15);
    uVar5 = FUN_14001a6c0(&local_78,1);
    FUN_1400702d4(lVar11,&local_78,uVar5,0);
    *(undefined8 *)(param_1 + 0x80) = local_78;
  }
  lVar11 = param_1 + 0x44;
  lVar9 = FUN_1408bb964(lVar11);
  if ((lVar9 == 0) || (lVar9 = FUN_145aa2e42(lVar9), lVar9 == 0)) goto LAB_1442986c5;
  uVar10 = FUN_140059518(lVar11);
  FUN_145aa30f6(lVar9,&local_78,uVar10);
  uVar18 = (ulonglong)local_78 >> 0x20;
  if ((uVar18 == 0) || ((iVar20 = (int)local_78, iVar20 < 0 || (DAT_14c9647dc <= iVar20))))
  goto LAB_1442986c5;
  uVar19 = (ulonglong)((uint)((ulonglong)local_78 >> 0x10) & 0x7fff);
  pRVar16 = (PSRWLOCK)(((ulonglong)local_78 & 0xffff) * 3);
  lVar9 = (ulonglong)(uint)((int)pRVar16 * 8) + *(longlong *)(DAT_14c9647c8 + uVar19 * 8);
  if ((lVar9 == 0) ||
     ((*(int *)(lVar9 + 0x10) != (int)((ulonglong)local_78 >> 0x20) ||
      ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)))) goto LAB_1442986c5;
  if (param_2 == '\0') {
    local_88 = uVar18;
    FUN_144299822(param_1,0);
    FUN_1402815f4(param_1,&local_78);
    puVar17 = *(undefined8 **)(local_78 + 0x660);
    local_90 = (PSRWLOCK)(puVar17 + 2);
    AcquireSRWLockExclusive(local_90);
    plVar12 = plStack_70;
    *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar15 = plStack_70 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    *puVar17 = 0;
    if ((((iVar20 < DAT_14c9647dc) &&
         (puVar17 = (undefined8 *)
                    ((ulonglong)(uint)((int)pRVar16 << 3) +
                    *(longlong *)(DAT_14c9647c8 + uVar19 * 8)), puVar17 != (undefined8 *)0x0)) &&
        (*(int *)(puVar17 + 2) == (int)local_88)) && ((*(uint *)(puVar17 + 1) & 0x10200000) == 0)) {
      uVar10 = *puVar17;
    }
    else {
      uVar10 = 0;
    }
    FUN_140b42b6e(uVar10,(undefined8 *)(param_1 + 0x80));
    plVar12 = (longlong *)FUN_1400f3ad8(lVar11);
    if (plVar12 != (longlong *)0x0) {
      if (DAT_14cbadd90 == 0) {
        local_78 = FUN_141030f22;
        local_a0 = FUN_14081d0ea;
        local_a8 = &LAB_1459f2e4c;
        local_b0 = &local_78;
        local_b8 = &LAB_148c39de3;
        local_c0 = &LAB_1457a9eb2;
        local_c8 = &DAT_149e063b2;
        local_d0 = 0;
        local_d8 = 0x10000004;
        local_e0 = 0x10;
        local_e8 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
          DAT_14cbadd90 + 0x30)) {
        lVar11 = plVar12[0x141];
        if (lVar11 != 0) {
          if (DAT_14cba8288 == 0) {
            local_78 = FUN_141864c34;
            local_a0 = FUN_14081d0ea;
            local_a8 = &LAB_1464cee30;
            local_b0 = &local_78;
            local_b8 = &LAB_148bfac22;
            local_c0 = &LAB_140f21842;
            local_c8 = &DAT_149e063b2;
            local_d0 = 0;
            local_d8 = 0x10000004;
            local_e0 = 0x10;
            local_e8 = 0x9cd0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
          }
          if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
            FUN_140457ffc(lVar11 + 0x71b8,param_1);
            FUN_140457ffc(lVar11 + 0x71f8,param_1);
            FUN_1401073f6(lVar11 + 0x7298,param_1);
            *(undefined8 *)(param_1 + 0x58) = 0;
            *(undefined8 *)(param_1 + 0x60) = 0;
          }
        }
        lVar11 = (**(code **)(*plVar12 + 0x5f8))(plVar12);
        if (lVar11 != 0) {
          lVar9 = FUN_1402095ca();
          if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
            FUN_1401073f6(lVar11 + 0x1e70,param_1);
          }
        }
        lVar11 = FUN_1447210f0(plVar12);
        if ((lVar11 != 0) && (cVar4 = FUN_140ae0922(lVar11), cVar4 != '\0')) {
          FUN_1463cd9b8(lVar11,0);
        }
      }
    }
    ReleaseSRWLockExclusive(local_90);
    goto LAB_1442986c5;
  }
  if ((((*(int *)(param_1 + 0x74) != 0) && (uVar6 = *(uint *)(param_1 + 0x70), -1 < (int)uVar6)) &&
      ((int)uVar6 < DAT_14c9647dc)) &&
     (((plVar12 = (longlong *)
                  ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
       plVar12 != (longlong *)0x0 && ((int)plVar12[2] == *(int *)(param_1 + 0x74))) &&
      (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 &&
       (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 && (lVar9 = *plVar12, lVar9 != 0)))))))) {
    local_90 = pRVar16;
    local_88 = uVar18;
    FUN_1402815f4(param_1,&local_78);
    puVar2 = *(uint **)(local_78 + 0x660);
    AcquireSRWLockExclusive((PSRWLOCK)(puVar2 + 4));
    plVar12 = plStack_70;
    puVar2[2] = puVar2[2] + 1;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar15 = plStack_70 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if ((((*(int *)(lVar9 + 0x3c) == 0) || (uVar6 = *(uint *)(lVar9 + 0x38), (int)uVar6 < 0)) ||
        (DAT_14c9647dc <= (int)uVar6)) ||
       (((plVar12 = (longlong *)
                    ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
         plVar12 == (longlong *)0x0 || ((int)plVar12[2] != *(int *)(lVar9 + 0x3c))) ||
        (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 ||
         (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 || (*plVar12 == 0)))))))) {
      *puVar2 = 0;
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(*plVar12 + 0xc);
      *puVar2 = uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      uVar6 = *(uint *)(lVar14 + 0x10);
      if (*(uint *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        local_98 = CONCAT44(local_98._4_4_,iVar7);
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        uVar6 = *(uint *)(lVar14 + 0x10);
        bVar21 = uVar6 == 0;
        if (bVar21) {
          *(uint *)(lVar14 + 0x10) = (uint)local_98;
          uVar6 = 0;
        }
        UNLOCK();
        if (bVar21) {
          uVar6 = (uint)local_98;
        }
      }
    }
    puVar2[1] = uVar6;
    if (*(int *)(lVar9 + 0x4c) != 0) {
      uVar6 = *(uint *)(lVar9 + 0x48);
      if (((((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) &&
           (lVar14 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar14 != 0)) &&
          ((*(int *)(lVar14 + 0x10) == *(int *)(lVar9 + 0x4c) &&
           ((*(uint *)(lVar14 + 8) & 0x10200000) == 0)))) &&
         (lVar9 = FUN_1409ca440((uint *)(lVar9 + 0x48)), lVar9 != 0)) {
        if (DAT_14cba8288 == 0) {
          local_78 = FUN_141864c34;
          local_a0 = FUN_14081d0ea;
          local_a8 = &LAB_1464cee30;
          local_b0 = &local_78;
          local_b8 = &LAB_148bfac22;
          local_c0 = &LAB_140f21842;
          local_c8 = &DAT_149e063b2;
          local_d0 = 0;
          local_d8 = 0x10000004;
          local_e0 = 0x10;
          local_e8 = 0x9cd0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        }
        if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
          local_78 = (code *)0x0;
          plStack_70 = (longlong *)((ulonglong)plStack_70 & 0xffffffff00000000);
          local_98 = local_98 & 0xffffffff00000000;
          FUN_1446efa72(&local_78,0,3,0x10);
          plVar12 = (longlong *)local_78;
          plStack_70 = (longlong *)CONCAT44(plStack_70._4_4_,3);
          *(undefined ***)local_78 = &PTR_LAB_14b4edb80;
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 1;
          lVar14 = DAT_14c758608 + 1;
          if (lVar13 == 0) {
            LOCK();
            UNLOCK();
            lVar13 = DAT_14c758608 + 2;
            lVar14 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar14;
          *(longlong *)((longlong)local_78 + 0x10) = lVar13;
          *(undefined ***)local_78 = &PTR_FUN_14b9b7390;
          *(longlong *)((longlong)local_78 + 0x18) = 0;
          if (param_1 != 0) {
            uVar6 = *(uint *)(param_1 + 0xc);
            *(uint *)((longlong)local_78 + 0x18) = uVar6;
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar14 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar14 = 0;
            }
            local_98 = CONCAT44(local_98._4_4_,*(int *)(lVar14 + 0x10));
            if (*(int *)(lVar14 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              local_98._0_4_ = DAT_14c964868 + 1;
              bVar21 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar21) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,(uint)local_98);
              }
              LOCK();
              iVar8 = *(int *)(lVar14 + 0x10);
              bVar21 = iVar8 == 0;
              if (bVar21) {
                *(int *)(lVar14 + 0x10) = (uint)local_98;
                iVar8 = 0;
              }
              UNLOCK();
              if (bVar21) {
                iVar8 = (uint)local_98;
              }
              local_98 = CONCAT44(local_98._4_4_,iVar8);
            }
          }
          *(uint *)((longlong)plVar12 + 0x1c) = (uint)local_98;
          plVar12[4] = param_1;
          if (((int)plStack_70 == 0) || (local_78 == (code *)0x0)) {
LAB_14429969b:
            if ((int)plStack_70 == 0) {
              local_98 = 0;
              goto LAB_144298e56;
            }
            if (local_78 != (code *)0x0) {
              local_98 = 0;
              (*(code *)**(undefined8 **)local_78)(local_78,0);
              FUN_1446efa72(&local_78,0,0,0x10);
              goto LAB_144298e43;
            }
            local_98 = 0;
          }
          else {
            cVar4 = (**(code **)(*(longlong *)local_78 + 0x30))();
            if (cVar4 == '\0') {
              goto LAB_14429969b;
            }
            plVar12 = (longlong *)(lVar9 + 0x71b8);
            if (*(int *)(lVar9 + 0x71cc) < 1) {
              iVar8 = *(int *)(lVar9 + 0x71c0);
              iVar7 = *(int *)(lVar9 + 0x71c8) + -1;
              *(int *)(lVar9 + 0x71c8) = iVar7;
              local_98 = CONCAT44(local_98._4_4_,iVar8);
              if (iVar7 <= iVar8) {
                if (0 < iVar8) {
                  iVar7 = 0;
                  do {
                    if (((*(int *)(*plVar12 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                        (plVar15 = *(longlong **)(*plVar12 + (longlong)iVar7 * 0x10),
                        plVar15 == (longlong *)0x0)) ||
                       (cVar4 = (**(code **)(*plVar15 + 0x28))(), cVar4 != '\0')) {
                      FUN_14005b288(plVar12,iVar7);
                      FUN_14005b248(plVar12);
                    }
                    else {
                      iVar7 = iVar7 + 1;
                    }
                    iVar8 = *(int *)(lVar9 + 0x71c0);
                  } while (iVar7 < iVar8);
                }
                iVar7 = 2;
                if (2 < iVar8 * 2) {
                  iVar7 = iVar8 * 2;
                }
                *(int *)(lVar9 + 0x71c8) = iVar7;
                if ((iVar7 < (int)(uint)local_98) && (*(int *)(lVar9 + 0x71c4) != iVar8)) {
                  FUN_14045812c();
                }
              }
            }
            local_98 = 0;
            if (((int)plStack_70 != 0) && (local_78 != (code *)0x0)) {
              (**(code **)(*(longlong *)local_78 + 0x38))(local_78,&local_80);
              local_98 = local_80;
            }
            iVar8 = *(int *)(lVar9 + 0x71c0);
            *(uint *)(lVar9 + 0x71c0) = iVar8 + 1U;
            if (*(uint *)(lVar9 + 0x71c4) < iVar8 + 1U) {
              FUN_1447a71f6(plVar12,iVar8);
            }
            lVar14 = *plVar12;
            lVar13 = (longlong)iVar8 * 0x10;
            *(undefined8 *)(lVar14 + lVar13) = 0;
            *(undefined4 *)(lVar14 + 8 + lVar13) = 0;
            *(code **)(lVar14 + lVar13) = local_78;
            local_78 = (code *)0x0;
            *(int *)(lVar14 + 8 + lVar13) = (int)plStack_70;
LAB_144298e43:
            plStack_70 = (longlong *)((ulonglong)plStack_70 & 0xffffffff00000000);
LAB_144298e56:
            if (local_78 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
          *(ulonglong *)(param_1 + 0x58) = local_98;
          local_78 = (code *)0x0;
          plStack_70 = (longlong *)((ulonglong)plStack_70 & 0xffffffff00000000);
          local_98 = local_98 & 0xffffffff00000000;
          FUN_1446efa72(&local_78,0,3,0x10);
          pcVar3 = local_78;
          plStack_70 = (longlong *)CONCAT44(plStack_70._4_4_,3);
          *(undefined ***)local_78 = &PTR_LAB_14b966850;
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 1;
          lVar14 = DAT_14c758608 + 1;
          if (lVar13 == 0) {
            LOCK();
            UNLOCK();
            lVar13 = DAT_14c758608 + 2;
            lVar14 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar14;
          *(longlong *)(local_78 + 0x10) = lVar13;
          *(undefined ***)local_78 = &PTR_FUN_14b9b7400;
          *(longlong *)(local_78 + 0x18) = 0;
          if (param_1 != 0) {
            uVar6 = *(uint *)(param_1 + 0xc);
            *(uint *)(local_78 + 0x18) = uVar6;
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar14 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar14 = 0;
            }
            local_98 = CONCAT44(local_98._4_4_,*(int *)(lVar14 + 0x10));
            if (*(int *)(lVar14 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              local_98._0_4_ = DAT_14c964868 + 1;
              bVar21 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar21) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,(uint)local_98);
              }
              LOCK();
              iVar8 = *(int *)(lVar14 + 0x10);
              bVar21 = iVar8 == 0;
              if (bVar21) {
                *(int *)(lVar14 + 0x10) = (uint)local_98;
                iVar8 = 0;
              }
              UNLOCK();
              if (bVar21) {
                iVar8 = (uint)local_98;
              }
              local_98 = CONCAT44(local_98._4_4_,iVar8);
            }
          }
          *(uint *)(pcVar3 + 0x1c) = (uint)local_98;
          *(longlong *)(pcVar3 + 0x20) = param_1;
          if (((int)plStack_70 == 0) || (local_78 == (code *)0x0)) {
LAB_144299706:
            if ((int)plStack_70 == 0) {
              local_98 = 0;
              goto LAB_1442990ba;
            }
            if (local_78 != (code *)0x0) {
              local_98 = 0;
              (*(code *)**(undefined8 **)local_78)(local_78,0);
              FUN_1446efa72(&local_78,0,0,0x10);
              goto LAB_1442990a7;
            }
            local_98 = 0;
          }
          else {
            cVar4 = (**(code **)(*(longlong *)local_78 + 0x30))();
            if (cVar4 == '\0') {
              goto LAB_144299706;
            }
            plVar12 = (longlong *)(lVar9 + 0x71f8);
            if (*(int *)(lVar9 + 0x720c) < 1) {
              iVar8 = *(int *)(lVar9 + 0x7200);
              iVar7 = *(int *)(lVar9 + 0x7208) + -1;
              *(int *)(lVar9 + 0x7208) = iVar7;
              local_98 = CONCAT44(local_98._4_4_,iVar8);
              if (iVar7 <= iVar8) {
                if (0 < iVar8) {
                  iVar7 = 0;
                  do {
                    if (((*(int *)(*plVar12 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                        (plVar15 = *(longlong **)(*plVar12 + (longlong)iVar7 * 0x10),
                        plVar15 == (longlong *)0x0)) ||
                       (cVar4 = (**(code **)(*plVar15 + 0x28))(), cVar4 != '\0')) {
                      FUN_14005b288(plVar12,iVar7);
                      FUN_14005b248(plVar12);
                    }
                    else {
                      iVar7 = iVar7 + 1;
                    }
                    iVar8 = *(int *)(lVar9 + 0x7200);
                  } while (iVar7 < iVar8);
                }
                iVar7 = 2;
                if (2 < iVar8 * 2) {
                  iVar7 = iVar8 * 2;
                }
                *(int *)(lVar9 + 0x7208) = iVar7;
                if ((iVar7 < (int)(uint)local_98) && (*(int *)(lVar9 + 0x7204) != iVar8)) {
                  FUN_14045812c();
                }
              }
            }
            local_98 = 0;
            if (((int)plStack_70 != 0) && (local_78 != (code *)0x0)) {
              (**(code **)(*(longlong *)local_78 + 0x38))(local_78,&local_80);
              local_98 = local_80;
            }
            iVar8 = *(int *)(lVar9 + 0x7200);
            *(uint *)(lVar9 + 0x7200) = iVar8 + 1U;
            if (*(uint *)(lVar9 + 0x7204) < iVar8 + 1U) {
              FUN_1447a71f6(plVar12,iVar8);
            }
            lVar9 = *plVar12;
            lVar14 = (longlong)iVar8 * 0x10;
            *(undefined8 *)(lVar9 + lVar14) = 0;
            *(undefined4 *)(lVar9 + 8 + lVar14) = 0;
            *(code **)(lVar9 + lVar14) = local_78;
            local_78 = (code *)0x0;
            *(int *)(lVar9 + 8 + lVar14) = (int)plStack_70;
LAB_1442990a7:
            plStack_70 = (longlong *)((ulonglong)plStack_70 & 0xffffffff00000000);
LAB_1442990ba:
            if (local_78 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
          *(ulonglong *)(param_1 + 0x60) = local_98;
        }
        plVar12 = (longlong *)FUN_1400f3ad8(lVar11);
        if (plVar12 != (longlong *)0x0) {
          if (DAT_14cbadd90 == 0) {
            local_78 = FUN_141030f22;
            local_a0 = FUN_14081d0ea;
            local_a8 = &LAB_1459f2e4c;
            local_b0 = &local_78;
            local_b8 = &LAB_148c39de3;
            local_c0 = &LAB_1457a9eb2;
            local_c8 = &DAT_149e063b2;
            local_d0 = 0;
            local_d8 = 0x10000004;
            local_e0 = 0x10;
            local_e8 = 0x3de0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
               DAT_14cbadd90 + 0x30)) &&
             (lVar11 = (**(code **)(*plVar12 + 0x5f8))(plVar12), lVar11 != 0)) {
            lVar9 = FUN_1402095ca();
            if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14cbd8c28) &&
                 (FUN_144b3d300(&DAT_14cbd8c28), DAT_14cbd8c28 == -1)) {
                builtin_wcsncpy(local_68,L"eDestroyed",0xb);
                local_78 = (code *)0x650056006e004f;
                plStack_70 = (longlong *)0x6c006300690068;
                FUN_1446f470e(&DAT_14cbd8c20,&local_78,1);
                _Init_thread_footer(&DAT_14cbd8c28);
              }
              plVar12 = DAT_14cbd8c20;
              local_78 = (code *)0x0;
              plStack_70 = (longlong *)0x0;
              if (param_1 != 0) {
                uVar6 = *(uint *)(param_1 + 0xc);
                local_78 = (code *)(ulonglong)uVar6;
                if ((int)uVar6 < DAT_14c9647dc) {
                  lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
                }
                else {
                  lVar9 = 0;
                }
                iVar8 = *(int *)(lVar9 + 0x10);
                if (*(int *)(lVar9 + 0x10) == 0) {
                  LOCK();
                  iVar8 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar7 = DAT_14c964868 + 1;
                  bVar21 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar8;
                  if (bVar21) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar7);
                  }
                  LOCK();
                  iVar8 = *(int *)(lVar9 + 0x10);
                  bVar21 = iVar8 == 0;
                  if (bVar21) {
                    *(int *)(lVar9 + 0x10) = iVar7;
                    iVar8 = 0;
                  }
                  UNLOCK();
                  uVar6 = (uint)local_78;
                  if (bVar21) {
                    iVar8 = iVar7;
                  }
                }
                local_78._0_4_ = uVar6;
                local_78 = (code *)CONCAT44(iVar8,(uint)local_78);
                plStack_70 = plVar12;
                if (((plVar12 != (longlong *)0x0) && (iVar8 != 0)) &&
                   ((-1 < (int)(uint)local_78 &&
                    (((((int)(uint)local_78 < DAT_14c9647dc &&
                       (plVar15 = (longlong *)
                                  ((ulonglong)(((uint)local_78 & 0xffff) * 0x18) +
                                  *(longlong *)
                                   (DAT_14c9647c8 + (ulonglong)((uint)local_78 >> 0x10) * 8)),
                       plVar15 != (longlong *)0x0)) && ((int)plVar15[2] == iVar8)) &&
                     (((*(uint *)(plVar15 + 1) & 0x10200000) == 0 && (*plVar15 != 0)))))))) {
                  FUN_1400796d0(*(undefined8 *)(*plVar15 + 0x10),plVar12,1);
                  plVar12 = plStack_70;
                }
              }
              plStack_70 = plVar12;
              FUN_14053c012(lVar11 + 0x1e70,&local_78);
            }
          }
        }
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(puVar2 + 4));
    pRVar16 = local_90;
    uVar18 = local_88;
  }
  if (((iVar20 < DAT_14c9647dc) &&
      (puVar17 = (undefined8 *)
                 ((ulonglong)(uint)((int)pRVar16 << 3) + *(longlong *)(DAT_14c9647c8 + uVar19 * 8)),
      puVar17 != (undefined8 *)0x0)) &&
     ((*(int *)(puVar17 + 2) == (int)uVar18 && ((*(uint *)(puVar17 + 1) & 0x10200000) == 0)))) {
    plVar12 = (longlong *)*puVar17;
  }
  else {
    plVar12 = (longlong *)0x0;
  }
  (**(code **)(*plVar12 + 0x2a0))(plVar12,param_1 + 0x78);
LAB_1442986c5:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144299822 FUN_144299822 body=280 status=ok
// SIG undefined FUN_144299822(void)

void FUN_144299822(longlong param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0 < *(int *)(DAT_14c98e618 + 0x318)) {
    lVar4 = **(longlong **)(DAT_14c98e618 + 0x310);
    puVar2 = (undefined8 *)(*(longlong **)(DAT_14c98e618 + 0x310))[1];
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      if (param_2 == '\0') {
        FUN_141653418(lVar4,10,(int)*(double *)(param_1 + 0x88),(int)*(double *)(param_1 + 0x90));
        uVar5 = 0;
      }
      else {
        FUN_14007d9be(lVar4,&local_28,10);
        *(double *)(param_1 + 0x88) = (double)local_28;
        *(double *)(param_1 + 0x90) = (double)local_24;
        uVar5 = 2;
      }
      uVar3 = FUN_140059518(param_1 + 0x44);
      lVar4 = FUN_140ade8e4(uVar3);
      if (lVar4 != 0) {
        *(undefined4 *)(lVar4 + 0x164) = uVar5;
        FUN_1405afdd6(lVar4);
      }
    }
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
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144299980 FUN_144299980 body=38 status=ok
// SIG undefined FUN_144299980(void)

void FUN_144299980(undefined8 param_1)

{
  FUN_1442999a6(param_1,0);
  FUN_144299e66(param_1,0);
  FUN_140ceeb80(param_1);
  return;
}



// FUNCTION 1442999a6 FUN_1442999a6 body=1214 status=ok
// SIG undefined FUN_1442999a6(void)

void FUN_1442999a6(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  void *pvVar9;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined2 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 *local_110;
  undefined1 *local_108;
  code *local_100;
  PSRWLOCK local_f8;
  longlong local_f0;
  void *local_e8;
  uint local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  void *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 *local_90;
  int local_84;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar5 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar5 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_110 = &local_a8;
      local_a8 = FUN_141030f22;
      local_100 = FUN_14081d0ea;
      local_108 = &LAB_1459f2e4c;
      local_118 = &LAB_148c39de3;
      local_120 = &LAB_1457a9eb2;
      local_128 = &DAT_149e063b2;
      local_130 = 0;
      local_138 = 0x10000004;
      local_140 = 0x10;
      local_148 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (lVar5 = FUN_148e56262(lVar5), lVar5 != 0)) {
      local_b8 = 0;
      uStack_b0 = 0;
      local_f0 = lVar5;
      plVar6 = (longlong *)FUN_1409801a0(param_1);
      lVar5 = *plVar6;
      local_f8 = (PSRWLOCK)(lVar5 + 0x28);
      AcquireSRWLockShared(local_f8);
      local_c8 = (void *)0x0;
      uStack_c0 = 0;
      FUN_1408226d0(&DAT_14cbd8430,&local_d8,1);
      FUN_1442a6a5c(lVar5,&local_a8,&local_d8);
      FUN_1442a6952(lVar5,&local_e8,&local_a8);
      if ((longlong)(int)local_e0 != 0) {
        uStack_c0 = CONCAT44(uStack_c0._4_4_,local_e0);
        FUN_1447a1bd6(&local_c8,0);
        memmove(local_c8,local_e8,(longlong)(int)local_e0 << 4);
        local_e0 = 0;
      }
      FUN_1447a1747(local_e8,0);
      if (local_e8 != (void *)0x0) {
        FUN_1400020a8();
      }
      FUN_1408226d0(&DAT_14cbd8424,&local_a8,1);
      if (CONCAT44(uStack_d4,local_d8) != 0) {
        FUN_1400020a8();
      }
      local_d8 = (undefined4)local_a8;
      uStack_d4 = local_a8._4_4_;
      uStack_d0 = uStack_a0;
      uStack_cc = uStack_9c;
      FUN_1442a6a5c(lVar5,&local_a8);
      FUN_1442a6952(lVar5,&local_e8,&local_a8);
      uVar3 = uStack_c0;
      lVar5 = (longlong)(int)local_e0;
      if (lVar5 != 0) {
        iVar2 = (int)uStack_c0;
        lVar8 = (longlong)(int)uStack_c0;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,(int)uStack_c0 + local_e0);
        if ((uint)(uStack_c0._4_4_ - iVar2) < local_e0) {
          FUN_1447a1bd6(&local_c8,uVar3 & 0xffffffff);
        }
        memmove((void *)(lVar8 * 0x10 + (longlong)local_c8),local_e8,lVar5 << 4);
        local_e0 = 0;
      }
      FUN_1447a1747(local_e8,0);
      if (local_e8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((longlong)(int)uStack_c0 != 0) {
        lVar5 = (longlong)(int)uStack_c0 << 4;
        pvVar9 = local_c8;
        do {
          FUN_14000bbd8(&local_a8,pvVar9,0);
          uVar3 = uStack_b0;
          iVar2 = local_a8._4_4_;
          puVar7 = &uStack_a0;
          if (1 < local_a8._4_4_) {
            puVar7 = local_90;
          }
          if (0 < local_84) {
            puVar7 = local_90;
          }
          lVar8 = (longlong)(int)uStack_b0;
          uVar4 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar4);
          if (uStack_b0._4_4_ < uVar4) {
            FUN_1446dd912(&local_b8,uVar3 & 0xffffffff);
          }
          *(undefined4 *)(local_b8 + 8 + lVar8 * 0xc) =
               *(undefined4 *)((longlong)(puVar7 + (longlong)(iVar2 + -1) * 3) + 8);
          *(undefined8 *)(local_b8 + lVar8 * 0xc) =
               *(undefined8 *)(puVar7 + (longlong)(iVar2 + -1) * 3);
          if (local_90 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
          pvVar9 = (void *)((longlong)pvVar9 + 0x10);
          lVar5 = lVar5 + -0x10;
        } while (lVar5 != 0);
      }
      if (CONCAT44(uStack_d4,local_d8) != 0) {
        FUN_1400020a8();
      }
      FUN_1447a1747(local_c8,uStack_c0 & 0xffffffff);
      if (local_c8 != (void *)0x0) {
        FUN_1400020a8();
      }
      ReleaseSRWLockShared(local_f8);
      FUN_144282574(local_f0,&local_b8);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  plVar6 = (longlong *)FUN_1409801a0(param_1);
  puVar1 = (undefined8 *)*plVar6;
  AcquireSRWLockExclusive((PSRWLOCK)(puVar1 + 5));
  *(int *)(puVar1 + 4) = *(int *)(puVar1 + 4) + 1;
  FUN_1447a1747(*puVar1,*(undefined4 *)(puVar1 + 1));
  *(undefined4 *)(puVar1 + 1) = 0;
  if (*(int *)((longlong)puVar1 + 0xc) != 0) {
    FUN_1408be2c4(puVar1,0);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(puVar1 + 5));
  if (param_2 != '\0') {
    FUN_140ceeb80(param_1);
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144299e66 FUN_144299e66 body=117 status=ok
// SIG undefined FUN_144299e66(void)

void FUN_144299e66(undefined8 param_1,char param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140defa54();
  puVar1 = (undefined8 *)*plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(puVar1 + 5));
  *(int *)(puVar1 + 4) = *(int *)(puVar1 + 4) + 1;
  FUN_1447a1747(*puVar1,*(undefined4 *)(puVar1 + 1));
  *(undefined4 *)(puVar1 + 1) = 0;
  if (*(int *)((longlong)puVar1 + 0xc) != 0) {
    FUN_1408be2c4(puVar1,0);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(puVar1 + 5));
  if (param_2 != '\0') {
    FUN_140ceeb80(param_1);
    return;
  }
  return;
}



// FUNCTION 144299f42 FUN_144299f42 body=2251 status=ok
// SIG undefined FUN_144299f42(void)

void FUN_144299f42(longlong param_1,undefined8 *param_2,ulonglong *param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Src;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  byte bVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  int local_120;
  byte local_111;
  longlong *local_110;
  longlong local_108;
  longlong *local_100;
  int local_f4;
  undefined8 local_f0;
  longlong local_e8;
  int local_e0;
  int local_dc;
  longlong **local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong **local_c0;
  int *local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  longlong *local_98;
  int local_90 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  longlong lStack_70;
  longlong lStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar6 = (longlong *)FUN_141188014();
  if ((plVar6 == (longlong *)0x0) || (lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6), lVar7 == 0))
  goto LAB_144299f93;
  local_98 = (longlong *)*param_2;
  local_b8 = local_90;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = local_78 & 0xffffffff00000000;
  lStack_70 = 0;
  lStack_68 = 0;
  local_c0 = &local_98;
  FUN_14581cf4c(&local_88,&local_c0,0);
  lVar8 = FUN_140b3986e(&local_88);
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
  if (lVar8 == 0) goto LAB_144299f93;
  local_dc = *(int *)(param_1 + 0xb8);
  local_c0 = (longlong **)0x0;
  local_b8 = (int *)CONCAT44(local_b8._4_4_,4);
  FUN_144a06ca8(&local_c0,4,0);
  *(int *)local_c0 = 0;
  *(int *)((longlong)local_c0 + 4) = 1;
  *(int *)(local_c0 + 1) = 2;
  *(int *)((longlong)local_c0 + 0xc) = 3;
  iVar19 = *(int *)(lVar7 + 0xb8);
  if ((longlong)iVar19 != 0) {
    lVar17 = *(longlong *)(lVar7 + 0xb0);
    lVar14 = 0;
    do {
      lVar2 = *(longlong *)(lVar17 + lVar14);
      if ((lVar2 != 0) && (lVar9 = FUN_1401cd362(lVar2), lVar9 == lVar8)) {
        cVar4 = FUN_140a30ba2(lVar2);
        if ((cVar4 != '\0') && (lVar8 = FUN_140a4889e(lVar2,param_3), lVar8 != 0)) {
          local_98 = (longlong *)0x0;
          local_90[0] = *(int *)(lVar8 + 0x88);
          lVar17 = (longlong)local_90[0];
          _Src = *(void **)(lVar8 + 0x80);
          if (lVar17 != 0) {
            local_108 = lVar8;
            FUN_14651dd56(&local_98,local_90[0],0);
            memcpy(local_98,_Src,lVar17 << 3);
            if ((longlong)local_90[0] == 0) goto LAB_14429a7f8;
            local_c8 = local_98 + local_90[0];
            lVar8 = local_108;
            plVar6 = local_98;
            goto LAB_14429a17d;
          }
        }
        break;
      }
      lVar14 = lVar14 + 8;
    } while ((longlong)iVar19 * 8 != lVar14);
  }
  goto LAB_14429a0fb;
LAB_14429a17d:
  do {
    lVar17 = *plVar6;
    if (*(char *)(lVar8 + 0x91) == '\x01') {
      local_a0 = *(undefined8 *)(lVar8 + 0x48);
      local_ac = *(undefined8 *)(lVar17 + 0x48);
      local_120 = 0;
      local_128 = 0;
LAB_14429a550:
      lStack_70 = 0;
      local_78 = 0;
      uStack_80 = 0;
      local_88 = 0;
      local_a4 = 0xffffffff;
      local_b0 = 0xffffffff;
      lStack_68 = lVar2;
      FUN_145941cc4(lVar7,&local_88);
      lVar8 = local_108;
    }
    else {
      local_e8 = lVar17;
      if (param_4 < 0) {
        if (param_4 != -1) {
          plVar10 = *(longlong **)(lVar17 + 0x60);
          iVar19 = *(int *)(lVar17 + 0x68);
          lVar17 = (longlong)iVar19;
LAB_14429a21e:
          if (iVar19 != 0) {
            plVar1 = plVar10 + lVar17;
            do {
              if (*(char *)(*plVar10 + 0x91) == '\x01') {
                iVar19 = (int)local_b8;
                lVar17 = (longlong)(int)local_b8;
                if (lVar17 != 0) {
                  local_e0 = *(int *)(*plVar10 + 0x9c);
                  local_d8 = local_c0;
                  local_111 = *(int *)local_c0 == local_e0;
                  iVar13 = 0;
                  iVar5 = 0;
                  do {
                    local_110 = (longlong *)CONCAT71(local_110._1_7_,local_111);
                    local_100 = (longlong *)CONCAT44(local_100._4_4_,iVar5);
                    bVar11 = local_111 ^ 1;
                    local_f0 = (longlong)iVar5;
                    local_d0 = local_f0;
                    iVar15 = iVar5 + 1;
                    if (iVar5 + 1 < iVar19) {
                      iVar15 = iVar19;
                    }
                    do {
                      local_d0 = local_d0 + 1;
                      if (lVar17 <= local_d0) {
                        local_100 = (longlong *)CONCAT44(local_100._4_4_,iVar15);
                        break;
                      }
                      local_100 = (longlong *)CONCAT44(local_100._4_4_,(int)local_100 + 1);
                      lVar8 = local_108;
                    } while ((bool)(local_111 & 1) ==
                             (*(int *)((longlong)local_d8 + local_d0 * 4) == local_e0));
                    bVar3 = local_111 & 1;
                    iVar15 = (int)local_100;
                    local_111 = bVar11;
                    local_f4 = iVar13;
                    if (bVar3 == 0) {
                      iVar15 = (int)local_100 - iVar5;
                      if (iVar13 != iVar5) {
                        lVar8 = local_f0 * 4;
                        local_f0 = CONCAT44(iVar5 >> 0x1f,iVar15);
                        local_110 = plVar6;
                        memmove((int *)((longlong)local_d8 + (longlong)iVar13 * 4),
                                (int *)((longlong)local_d8 + lVar8),(longlong)iVar15 << 2);
                        lVar8 = local_108;
                        plVar6 = local_110;
                        iVar15 = (int)local_f0;
                      }
                      iVar13 = local_f4 + iVar15;
                      iVar15 = (int)local_100;
                    }
                    iVar5 = iVar15;
                  } while (local_d0 < lVar17);
                  local_b8 = (int *)CONCAT44(local_b8._4_4_,iVar13);
                }
              }
              plVar10 = plVar10 + 1;
            } while (plVar10 != plVar1);
          }
          if (0 < (int)local_b8) {
            local_120 = *(int *)local_c0;
            local_a0 = *(undefined8 *)(lVar8 + 0x48);
            local_ac = *(undefined8 *)(local_e8 + 0x48);
            local_128 = 1;
            goto LAB_14429a550;
          }
          goto LAB_14429a37a;
        }
        local_110 = plVar6;
        iVar5 = FUN_1413d6430(lVar17);
        iVar13 = FUN_1413d64c6(lVar17);
        plVar10 = *(longlong **)(lVar17 + 0x60);
        iVar19 = *(int *)(lVar17 + 0x68);
        lVar17 = (longlong)iVar19;
        if (iVar5 < iVar13) {
          if (iVar19 == 0) {
            iVar5 = 0;
          }
          else {
            lVar8 = 0;
            iVar5 = 0;
            do {
              iVar5 = iVar5 + (uint)*(byte *)(*(longlong *)((longlong)plVar10 + lVar8) + 0x91);
              lVar8 = lVar8 + 8;
            } while (lVar17 * 8 - lVar8 != 0);
          }
          lVar8 = local_108;
          plVar6 = local_110;
          if (iVar5 < local_dc) goto LAB_14429a21e;
        }
        if (iVar19 == 0) {
          iVar19 = 0;
        }
        else {
          lVar8 = 0;
          iVar19 = 0;
          do {
            iVar19 = iVar19 + (uint)*(byte *)(*(longlong *)((longlong)plVar10 + lVar8) + 0x91);
            lVar8 = lVar8 + 8;
          } while (lVar17 * 8 != lVar8);
        }
        if ((longlong)local_90[0] != 0) {
          local_100 = local_98 + local_90[0];
          plVar6 = local_98;
          do {
            lVar8 = *plVar6;
            lVar17 = (longlong)*(int *)(lVar8 + 0x68);
            if (lVar17 != 0) {
              uVar16 = lVar17 * 8 - 8;
              lVar17 = lVar17 << 0x20;
              do {
                lVar17 = lVar17 + -0x100000000;
                lVar14 = *(longlong *)(*(longlong *)(lVar8 + 0x60) + uVar16);
                if ((*(char *)(lVar14 + 0x91) == '\x01') && (*(int *)(lVar14 + 0x9c) == iVar19 + -1)
                   ) {
                  if (*(ulonglong **)(lVar14 + 0x50) == (ulonglong *)0x0) {
                    uVar12 = 0;
                    uVar18 = 0;
                  }
                  else {
                    uVar12 = **(ulonglong **)(lVar14 + 0x50);
                    uVar18 = uVar12 & 0xffffffff;
                    uVar12 = uVar12 & 0xffffffff00000000;
                  }
                  if ((*param_3 != *(ulonglong *)(lVar14 + 0x48)) &&
                     (((uVar18 | uVar12) == 0 || (*param_3 != (uVar18 | uVar12))))) {
                    if ((~uVar16 & 0x7fffffff8) != 0) {
                      local_a4 = 0xffffffff;
                      local_a0 = *(undefined8 *)
                                  (*(longlong *)(*(longlong *)(lVar8 + 0x60) + (lVar17 >> 0x20) * 8)
                                  + 0x48);
                      local_b0 = 0xffffffff;
                      local_ac = *(undefined8 *)(lVar8 + 0x48);
                      local_78 = 0;
                      lStack_70 = 0;
                      local_88 = 0;
                      uStack_80 = 0;
                      local_120 = 0;
                      local_128 = 0;
                      lStack_68 = lVar2;
                      FUN_145941cc4(lVar7,&local_88,&local_b0,&local_a4);
                      goto LAB_14429a663;
                    }
                    break;
                  }
                }
                uVar16 = uVar16 - 8;
              } while (uVar16 != 0xfffffffffffffff8);
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 != local_100);
        }
LAB_14429a663:
        local_a0 = *(undefined8 *)(local_108 + 0x48);
        local_ac = *(undefined8 *)(local_e8 + 0x48);
        local_120 = iVar19 + -1;
      }
      else {
        local_110 = plVar6;
        if ((longlong)local_90[0] != 0) {
          plVar10 = local_98;
          do {
            lVar8 = *plVar10;
            lVar17 = (longlong)*(int *)(lVar8 + 0x68);
            if (lVar17 != 0) {
              uVar16 = lVar17 * 8 - 8;
              lVar17 = lVar17 << 0x20;
              do {
                lVar17 = lVar17 + -0x100000000;
                lVar14 = *(longlong *)(*(longlong *)(lVar8 + 0x60) + uVar16);
                if ((*(char *)(lVar14 + 0x91) == '\x01') && (*(int *)(lVar14 + 0x9c) == param_4)) {
                  if (*(ulonglong **)(lVar14 + 0x50) == (ulonglong *)0x0) {
                    uVar12 = 0;
                    uVar18 = 0;
                  }
                  else {
                    uVar12 = **(ulonglong **)(lVar14 + 0x50);
                    uVar18 = uVar12 & 0xffffffff;
                    uVar12 = uVar12 & 0xffffffff00000000;
                  }
                  if ((*param_3 != *(ulonglong *)(lVar14 + 0x48)) &&
                     (((uVar18 | uVar12) == 0 || (*param_3 != (uVar18 | uVar12))))) {
                    if ((~uVar16 & 0x7fffffff8) != 0) {
                      local_a4 = 0xffffffff;
                      local_a0 = *(undefined8 *)
                                  (*(longlong *)(*(longlong *)(lVar8 + 0x60) + (lVar17 >> 0x20) * 8)
                                  + 0x48);
                      local_b0 = 0xffffffff;
                      local_ac = *(undefined8 *)(lVar8 + 0x48);
                      local_78 = 0;
                      lStack_70 = 0;
                      local_88 = 0;
                      uStack_80 = 0;
                      local_120 = 0;
                      local_128 = 0;
                      lStack_68 = lVar2;
                      FUN_145941cc4(lVar7,&local_88,&local_b0,&local_a4);
                      goto LAB_14429a49f;
                    }
                    break;
                  }
                }
                uVar16 = uVar16 - 8;
              } while (uVar16 != 0xfffffffffffffff8);
            }
            plVar10 = plVar10 + 1;
          } while (plVar10 != local_98 + local_90[0]);
        }
LAB_14429a49f:
        local_a0 = *(undefined8 *)(local_108 + 0x48);
        local_ac = *(undefined8 *)(local_e8 + 0x48);
        local_120 = param_4;
      }
      lVar8 = local_108;
      lStack_70 = 0;
      local_78 = 0;
      uStack_80 = 0;
      local_88 = 0;
      local_a4 = 0xffffffff;
      local_b0 = 0xffffffff;
      local_128 = 1;
      lStack_68 = lVar2;
      FUN_145941cc4(lVar7,&local_88);
      plVar6 = local_110;
    }
LAB_14429a37a:
    plVar6 = plVar6 + 1;
  } while (plVar6 != local_c8);
LAB_14429a7f8:
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8(local_98);
  }
LAB_14429a0fb:
  if (local_c0 != (longlong **)0x0) {
    FUN_1400020a8();
  }
LAB_144299f93:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14429a80e FUN_14429a80e body=3812 status=ok
// SIG undefined FUN_14429a80e(void)

void FUN_14429a80e(longlong param_1,char param_2,uint param_3)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  undefined1 auStack_158 [32];
  uint local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code **local_100;
  undefined1 *local_f8;
  code *local_f0;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  code *local_a8;
  longlong lStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar6 = (longlong *)FUN_141188014();
  if ((plVar6 == (longlong *)0x0) || (lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6), lVar7 == 0))
  goto LAB_14429a85b;
  if (param_2 != '\0') {
    lVar8 = FUN_1410a623c();
    if (*(longlong *)(lVar7 + 0x138) != 0) {
      FUN_1486e0a3c(*(longlong *)(lVar7 + 0x138),*(undefined8 *)(lVar8 + 0x20));
    }
    lVar8 = FUN_141356c7a(param_1 + 0x30);
    if (lVar8 != 0) {
      if (DAT_14cbae3d8 == 0) {
        local_100 = &local_a8;
        local_a8 = FUN_141030f22;
        local_f0 = FUN_14081d0ea;
        local_f8 = &LAB_1464f5fc4;
        local_108 = &LAB_148c3dd26;
        local_110 = &LAB_1459673ba;
        local_118 = L"Engine";
        local_120 = 0;
        local_128 = 0x10000004;
        local_130 = 0x10;
        local_138 = 0x1360;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      }
      if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) {
        lVar9 = FUN_1410a623c();
        pcVar1 = *(code **)(lVar9 + 0x20);
        local_a8 = pcVar1;
        uVar10 = FUN_14477b664(*(undefined8 *)(lVar9 + 0x28));
        lStack_a0 = FUN_14477b664(uVar10);
        lVar9 = *(longlong *)(lVar9 + 0x30);
        local_98 = lVar9;
        if (lStack_a0 == 0) {
          uVar10 = FUN_145764ed6();
          lStack_a0 = FUN_14477b664(uVar10);
        }
        if (lVar9 == 0) {
          local_98 = 0;
          if (lStack_a0 == 0 || pcVar1 == (code *)0x0) {
            lVar9 = 0;
          }
          else {
            plVar6 = *(longlong **)(lStack_a0 + 0xb8);
            if ((plVar6 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar4 == '\0')) {
              lVar9 = 0;
              local_98 = lVar9;
            }
            else {
              uVar10 = (**(code **)(*plVar6 + 0x110))(plVar6);
              lVar9 = FUN_144aff482(uVar10,&local_a8);
              local_98 = lVar9;
            }
          }
        }
        uVar10 = FUN_140fcc63a(lVar9);
        if (lStack_a0 == 0) {
          uVar11 = FUN_145764ed6();
          lStack_a0 = FUN_14477b664(uVar11);
        }
        lVar9 = local_98;
        if (((local_98 == 0) && (lVar9 = 0, lStack_a0 != 0)) && (local_a8 != (code *)0x0)) {
          plVar6 = *(longlong **)(lStack_a0 + 0xb8);
          if ((plVar6 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar4 == '\0')) {
            lVar9 = 0;
            local_98 = lVar9;
          }
          else {
            uVar11 = (**(code **)(*plVar6 + 0x110))(plVar6);
            lVar9 = FUN_144aff482(uVar11,&local_a8);
            local_98 = lVar9;
          }
        }
        puVar13 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar9 + 8) != (undefined4 *)0x0) {
          puVar13 = *(undefined4 **)(lVar9 + 8);
        }
        local_78 = (longlong *)0x0;
        uStack_70 = 0;
        FUN_1400b2348(puVar13,&local_78,1);
        local_130 = 1;
        local_138 = 0;
        FUN_145c5cda5(L"respec_skill_tree",&local_78,lVar8,uVar10);
        if (local_78 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  FUN_146213186(lVar7,&local_78);
  plVar6 = local_78;
  lVar8 = (longlong)(int)uStack_70;
  if (lVar8 != 0) {
    lVar9 = 0;
    local_e0 = lVar7;
    do {
      plVar15 = *(longlong **)((longlong)plVar6 + lVar9);
      if (plVar15 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar15 + 8))(plVar15);
        lVar14 = FUN_145c45a7c();
        if (((lVar14 != 0) && (*(int *)(lVar14 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
            lVar14 + 0x30)) {
          iVar16 = (int)plVar15[0x14];
          lVar7 = plVar15[0x13];
          if ((-1 < (int)param_3) && ((int)param_3 < iVar16)) {
            lVar14 = (ulonglong)param_3 * 0xe8;
            lVar8 = lVar7 + lVar14;
            lVar9 = (longlong)*(int *)(lVar7 + 0xe0 + lVar14);
            if (lVar9 == 0) goto LAB_14429b029;
            plVar6 = *(longlong **)(lVar7 + 0xd8 + lVar14);
            lVar9 = lVar9 * 0x28;
            goto LAB_14429ab98;
          }
          if (iVar16 != 0) {
            lVar8 = (longlong)iVar16 * 0xe8 + lVar7;
            goto LAB_14429acf1;
          }
          break;
        }
      }
      lVar9 = lVar9 + 8;
    } while (lVar8 * 8 != lVar9);
    goto LAB_14429b15b;
  }
  goto LAB_14429b561;
LAB_14429ab98:
  do {
    lVar7 = plVar6[1];
    if (lVar7 == 0) {
      uVar10 = FUN_140e2014e();
      lVar7 = FUN_14477b664(uVar10);
      plVar6[1] = lVar7;
    }
    lVar14 = plVar6[2];
    if (lVar14 == 0) {
      if ((lVar7 != 0) && (*plVar6 != 0)) {
        plVar15 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar15 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar4 == '\0')) {
          plVar6[2] = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar15 + 0x110))(plVar15);
          lVar14 = FUN_144aff482(uVar10,plVar6);
          plVar6[2] = lVar14;
          if (lVar14 != 0) {
            lVar7 = plVar6[1];
            goto LAB_14429ac20;
          }
        }
      }
    }
    else {
LAB_14429ac20:
      if (lVar7 == 0) {
        uVar10 = FUN_140e2014e();
        lVar7 = FUN_14477b664(uVar10);
        plVar6[1] = lVar7;
        lVar14 = plVar6[2];
        if (lVar14 == 0) {
          if (lVar7 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*plVar6 != 0) {
              plVar15 = *(longlong **)(lVar7 + 0xb8);
              if ((plVar15 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar4 == '\0')) {
                lVar14 = 0;
              }
              else {
                uVar10 = (**(code **)(*plVar15 + 0x110))(plVar15);
                lVar14 = FUN_144aff482(uVar10,plVar6);
              }
              plVar6[2] = lVar14;
            }
          }
        }
      }
      local_a8 = (code *)0x0;
      local_88 = 0;
      local_98 = 0;
      uStack_90 = 0;
      lStack_a0 = lVar14;
      FUN_1489323cc(local_e0,&local_a8);
    }
    plVar6 = plVar6 + 5;
    lVar9 = lVar9 + -0x28;
  } while (lVar9 != 0);
LAB_14429b029:
  lVar7 = *(longlong *)(lVar8 + 200);
  if (lVar7 == 0) {
    uVar10 = FUN_140e2014e();
    lVar7 = FUN_14477b664(uVar10);
    *(longlong *)(lVar8 + 200) = lVar7;
  }
  plVar6 = (longlong *)(lVar8 + 0xc0);
  lVar9 = *(longlong *)(lVar8 + 0xd0);
  if (((lVar9 == 0) && (lVar9 = 0, lVar7 != 0)) && (*plVar6 != 0)) {
    plVar15 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar15 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar4 == '\0')) {
      lVar9 = 0;
    }
    else {
      uVar10 = (**(code **)(*plVar15 + 0x110))(plVar15);
      lVar9 = FUN_144aff482(uVar10,plVar6);
    }
    *(longlong *)(lVar8 + 0xd0) = lVar9;
  }
  if (*(char *)(lVar9 + 0x18) == '\x01') {
    lVar7 = *(longlong *)(lVar8 + 200);
    if (lVar7 == 0) {
      uVar10 = FUN_140e2014e();
      lVar7 = FUN_14477b664(uVar10);
      *(longlong *)(lVar8 + 200) = lVar7;
      lVar9 = *(longlong *)(lVar8 + 0xd0);
    }
    if (lVar9 == 0) {
      *(undefined8 *)(lVar8 + 0xd0) = 0;
      if ((lVar7 != 0) && (*(longlong *)(lVar8 + 0xc0) != 0)) {
        plVar15 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar15 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar4 == '\0')) {
          *(undefined8 *)(lVar8 + 0xd0) = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar15 + 0x110))(plVar15);
          lVar9 = FUN_144aff482(uVar10,plVar6);
          *(longlong *)(lVar8 + 0xd0) = lVar9;
          if (lVar9 != 0) {
            lVar7 = *(longlong *)(lVar8 + 200);
            goto LAB_14429b57f;
          }
        }
      }
    }
    else {
LAB_14429b57f:
      if (lVar7 == 0) {
        uVar10 = FUN_140e2014e();
        lVar7 = FUN_14477b664(uVar10);
        *(longlong *)(lVar8 + 200) = lVar7;
        lVar9 = *(longlong *)(lVar8 + 0xd0);
        if (((lVar9 == 0) && (lVar9 = 0, lVar7 != 0)) && (*plVar6 != 0)) {
          plVar15 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar15 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar15 + 0x108))(), cVar4 == '\0')) {
            lVar9 = 0;
          }
          else {
            uVar10 = (**(code **)(*plVar15 + 0x110))(plVar15);
            lVar9 = FUN_144aff482(uVar10,plVar6);
          }
          *(longlong *)(lVar8 + 0xd0) = lVar9;
        }
      }
      local_a8 = (code *)0x0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      lStack_a0 = lVar9;
      FUN_148932392(local_e0);
    }
  }
  goto LAB_14429b15b;
LAB_14429acf1:
  do {
    if ((longlong)*(int *)(lVar7 + 0xe0) != 0) {
      plVar6 = *(longlong **)(lVar7 + 0xd8);
      lVar9 = (longlong)*(int *)(lVar7 + 0xe0) * 0x28;
      do {
        lVar14 = plVar6[1];
        if (lVar14 == 0) {
          uVar10 = FUN_140e2014e();
          lVar14 = FUN_14477b664(uVar10);
          plVar6[1] = lVar14;
        }
        lVar12 = plVar6[2];
        if (lVar12 != 0) {
LAB_14429ad9a:
          if (lVar14 == 0) {
            uVar10 = FUN_140e2014e();
            lVar9 = FUN_14477b664(uVar10);
            plVar6[1] = lVar9;
            lVar12 = plVar6[2];
            if (lVar12 == 0) {
              if (lVar9 == 0) {
                lVar12 = 0;
              }
              else {
                lVar12 = 0;
                if (*plVar6 != 0) {
                  plVar15 = *(longlong **)(lVar9 + 0xb8);
                  if ((plVar15 == (longlong *)0x0) ||
                     (cVar4 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar4 == '\0')) {
                    lVar12 = 0;
                  }
                  else {
                    uVar10 = (**(code **)(*plVar15 + 0x110))(plVar15);
                    lVar12 = FUN_144aff482(uVar10,plVar6);
                  }
                  plVar6[2] = lVar12;
                }
              }
            }
          }
          uVar10 = FUN_140a48a68(lVar12);
          FUN_148935522(local_e0,uVar10);
          break;
        }
        if ((lVar14 != 0) && (*plVar6 != 0)) {
          plVar15 = *(longlong **)(lVar14 + 0xb8);
          if ((plVar15 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar4 == '\0')) {
            plVar6[2] = 0;
          }
          else {
            uVar10 = (**(code **)(*plVar15 + 0x110))(plVar15);
            lVar12 = FUN_144aff482(uVar10,plVar6);
            plVar6[2] = lVar12;
            if (lVar12 != 0) {
              lVar14 = plVar6[1];
              goto LAB_14429ad9a;
            }
          }
        }
        plVar6 = plVar6 + 5;
        lVar9 = lVar9 + -0x28;
      } while (lVar9 != 0);
    }
    lVar9 = *(longlong *)(lVar7 + 200);
    if (lVar9 == 0) {
      uVar10 = FUN_140e2014e();
      lVar9 = FUN_14477b664(uVar10);
      *(longlong *)(lVar7 + 200) = lVar9;
    }
    plVar6 = (longlong *)(lVar7 + 0xc0);
    lVar14 = *(longlong *)(lVar7 + 0xd0);
    if (lVar14 == 0) {
      if (lVar9 == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = 0;
        if (*plVar6 != 0) {
          plVar15 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar15 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar4 == '\0')) {
            lVar14 = 0;
          }
          else {
            uVar10 = (**(code **)(*plVar15 + 0x110))(plVar15);
            lVar14 = FUN_144aff482(uVar10,plVar6);
          }
          *(longlong *)(lVar7 + 0xd0) = lVar14;
        }
      }
    }
    if (*(char *)(lVar14 + 0x18) == '\x01') {
      lVar9 = *(longlong *)(lVar7 + 200);
      if (lVar9 == 0) {
        uVar10 = FUN_140e2014e();
        lVar9 = FUN_14477b664(uVar10);
        *(longlong *)(lVar7 + 200) = lVar9;
        lVar14 = *(longlong *)(lVar7 + 0xd0);
      }
      if (lVar14 == 0) {
        *(undefined8 *)(lVar7 + 0xd0) = 0;
        if ((lVar9 != 0) && (*(longlong *)(lVar7 + 0xc0) != 0)) {
          plVar15 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar15 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar4 == '\0')) {
            *(undefined8 *)(lVar7 + 0xd0) = 0;
          }
          else {
            uVar10 = (**(code **)(*plVar15 + 0x110))(plVar15);
            lVar14 = FUN_144aff482(uVar10,plVar6);
            *(longlong *)(lVar7 + 0xd0) = lVar14;
            if (lVar14 != 0) {
              lVar9 = *(longlong *)(lVar7 + 200);
              goto LAB_14429af66;
            }
          }
        }
      }
      else {
LAB_14429af66:
        if (lVar9 == 0) {
          uVar10 = FUN_140e2014e();
          lVar9 = FUN_14477b664(uVar10);
          *(longlong *)(lVar7 + 200) = lVar9;
          lVar14 = *(longlong *)(lVar7 + 0xd0);
          if (lVar14 == 0) {
            if (lVar9 == 0) {
              lVar14 = 0;
            }
            else {
              lVar14 = 0;
              if (*plVar6 != 0) {
                plVar15 = *(longlong **)(lVar9 + 0xb8);
                if ((plVar15 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar4 == '\0')) {
                  lVar14 = 0;
                }
                else {
                  uVar10 = (**(code **)(*plVar15 + 0x110))(plVar15);
                  lVar14 = FUN_144aff482(uVar10,plVar6);
                }
                *(longlong *)(lVar7 + 0xd0) = lVar14;
              }
            }
          }
        }
        local_a8 = (code *)0x0;
        local_88 = 0;
        local_98 = 0;
        uStack_90 = 0;
        lStack_a0 = lVar14;
        FUN_148932392(local_e0,&local_a8);
      }
    }
    lVar7 = lVar7 + 0xe8;
  } while (lVar7 != lVar8);
LAB_14429b15b:
  if ((longlong)(int)uStack_70 != 0) {
    plVar6 = local_78 + (int)uStack_70;
    plVar15 = local_78;
    do {
      plVar2 = (longlong *)*plVar15;
      if (plVar2 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar2 + 8))(plVar2);
        lVar8 = FUN_145c45a7c();
        if ((((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
            (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
             lVar8 + 0x30)) && (0 < (int)plVar2[0x14])) {
          lVar7 = 0;
          local_d8 = plVar2;
          local_d0 = plVar6;
          do {
            lVar8 = local_d8[0x13] + lVar7 * 0xe8;
            plVar6 = (longlong *)(lVar8 + 0xc0);
            lVar9 = *(longlong *)(lVar8 + 200);
            if (lVar9 == 0) {
              uVar10 = FUN_140e2014e();
              lVar9 = FUN_14477b664(uVar10);
              *(longlong *)(lVar8 + 200) = lVar9;
            }
            lVar14 = *(longlong *)(lVar8 + 0xd0);
            local_c8 = lVar7;
            if (lVar14 == 0) {
              if ((lVar9 != 0) && (*plVar6 != 0)) {
                plVar2 = *(longlong **)(lVar9 + 0xb8);
                if ((plVar2 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
                  *(undefined8 *)(lVar8 + 0xd0) = 0;
                }
                else {
                  uVar10 = (**(code **)(*plVar2 + 0x110))(plVar2);
                  lVar14 = FUN_144aff482(uVar10,plVar6);
                  *(longlong *)(lVar8 + 0xd0) = lVar14;
                  if (lVar14 != 0) {
                    lVar9 = *(longlong *)(lVar8 + 200);
                    goto LAB_14429b223;
                  }
                }
              }
            }
            else {
LAB_14429b223:
              if (lVar9 == 0) {
                uVar10 = FUN_140e2014e();
                lVar7 = FUN_14477b664(uVar10);
                *(longlong *)(lVar8 + 200) = lVar7;
                lVar14 = *(longlong *)(lVar8 + 0xd0);
                if (lVar14 == 0) {
                  if (lVar7 == 0) {
                    lVar14 = 0;
                  }
                  else {
                    lVar14 = 0;
                    if (*plVar6 != 0) {
                      plVar2 = *(longlong **)(lVar7 + 0xb8);
                      if ((plVar2 == (longlong *)0x0) ||
                         (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
                        lVar14 = 0;
                      }
                      else {
                        uVar10 = (**(code **)(*plVar2 + 0x110))(plVar2);
                        lVar14 = FUN_144aff482(uVar10,plVar6);
                      }
                      *(longlong *)(lVar8 + 0xd0) = lVar14;
                    }
                  }
                }
              }
              if (*(char *)(lVar14 + 0x18) == '\x01') {
                lVar7 = *(longlong *)(lVar8 + 200);
                if (lVar7 == 0) {
                  uVar10 = FUN_140e2014e();
                  lVar7 = FUN_14477b664(uVar10);
                  *(longlong *)(lVar8 + 200) = lVar7;
                  lVar14 = *(longlong *)(lVar8 + 0xd0);
                }
                if (lVar14 == 0) {
                  *(undefined8 *)(lVar8 + 0xd0) = 0;
                  if (lVar7 == 0) {
                    lVar14 = 0;
                  }
                  else {
                    lVar14 = 0;
                    if (*plVar6 != 0) {
                      plVar2 = *(longlong **)(lVar7 + 0xb8);
                      if ((plVar2 == (longlong *)0x0) ||
                         (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
                        lVar14 = 0;
                      }
                      else {
                        uVar10 = (**(code **)(*plVar2 + 0x110))(plVar2);
                        lVar14 = FUN_144aff482(uVar10,plVar6);
                      }
                      *(longlong *)(lVar8 + 0xd0) = lVar14;
                    }
                  }
                }
                iVar16 = *(int *)(local_e0 + 0xb8);
                if ((longlong)iVar16 != 0) {
                  lVar7 = *(longlong *)(local_e0 + 0xb0);
                  lVar8 = 0;
                  do {
                    lVar9 = *(longlong *)(lVar7 + lVar8);
                    if ((lVar9 != 0) && (lVar12 = FUN_1401cd362(lVar9), lVar12 == lVar14)) {
                      if ((longlong)*(int *)(lVar9 + 0x150) != 0) {
                        lVar7 = *(longlong *)(lVar9 + 0x148);
                        lVar8 = (longlong)*(int *)(lVar9 + 0x150) * 0x88;
                        iVar16 = 0;
                        do {
                          iVar5 = FUN_1413d64c6(lVar7);
                          if (iVar16 < iVar5) {
                            iVar16 = iVar5;
                          }
                          lVar7 = lVar7 + 0x88;
                          lVar8 = lVar8 + -0x88;
                        } while (lVar8 != 0);
                        if ((longlong)*(int *)(lVar9 + 0x150) != 0) {
                          lVar7 = *(longlong *)(lVar9 + 0x148);
                          lVar8 = (longlong)*(int *)(lVar9 + 0x150) * 0x88 + lVar7;
                          do {
                            iVar5 = *(int *)(lVar7 + 0x68);
                            if ((longlong)iVar5 != 0) {
                              lVar14 = *(longlong *)(lVar7 + 0x60);
                              lVar12 = 0;
                              do {
                                lVar3 = *(longlong *)(lVar14 + lVar12);
                                if ((lVar3 != 0) && (iVar16 <= *(int *)(lVar3 + 0x9c))) {
                                  local_b4 = 0xffffffff;
                                  local_b0 = *(undefined8 *)(lVar3 + 0x48);
                                  local_c0 = 0xffffffff;
                                  local_bc = *(undefined8 *)(lVar7 + 0x48);
                                  local_98 = 0;
                                  uStack_90 = 0;
                                  local_a8 = (code *)0x0;
                                  lStack_a0 = 0;
                                  local_130 = 0;
                                  local_138 = local_138 & 0xffffff00;
                                  local_88 = lVar9;
                                  FUN_145941cc4(local_e0,&local_a8,&local_c0,&local_b4);
                                }
                                lVar12 = lVar12 + 8;
                              } while ((longlong)iVar5 * 8 != lVar12);
                            }
                            lVar7 = lVar7 + 0x88;
                          } while (lVar7 != lVar8);
                        }
                      }
                      break;
                    }
                    lVar8 = lVar8 + 8;
                  } while ((longlong)iVar16 * 8 != lVar8);
                }
              }
            }
            lVar7 = local_c8 + 1;
            plVar6 = local_d0;
          } while (lVar7 < (int)local_d8[0x14]);
        }
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar6);
  }
LAB_14429b561:
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8(local_78);
  }
LAB_14429a85b:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14429b6f4 FUN_14429b6f4 body=174 status=ok
// SIG undefined FUN_14429b6f4(void)

ulonglong FUN_14429b6f4(longlong *param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  int *piVar11;
  int *piVar12;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar8 = *param_1;
    lVar1 = lVar8 + (longlong)(int)param_1[1] * 0x28;
    do {
      if ((longlong)*(int *)(lVar8 + 0x10) != 0) {
        piVar12 = *(int **)(lVar8 + 8);
        piVar11 = piVar12 + (longlong)*(int *)(lVar8 + 0x10) * 0x32;
        do {
          if (((*piVar12 == *param_3) && (piVar12[1] == param_3[1])) ||
             ((piVar12[2] == *param_3 && (piVar12[3] == param_3[1])))) {
            uVar4 = *(undefined8 *)(piVar12 + 9);
            uVar5 = *(undefined8 *)(piVar12 + 0xb);
            uVar6 = *(undefined8 *)(piVar12 + 0xf);
            *(undefined8 *)(param_3 + 4) = *(undefined8 *)(piVar12 + 0xd);
            *(undefined8 *)(param_3 + 6) = uVar6;
            *(undefined8 *)param_3 = uVar4;
            *(undefined8 *)(param_3 + 2) = uVar5;
            uVar7 = *(int *)(param_2 + 0x10) - piVar12[0xd];
            uVar9 = (ulonglong)uVar7;
            if (uVar7 != 0 && piVar12[0xd] <= *(int *)(param_2 + 0x10)) {
              iVar2 = *(int *)(param_2 + 0x14);
              iVar3 = piVar12[0xe];
              bVar10 = 1;
              if (iVar2 <= iVar3) {
                if (iVar2 == iVar3) {
                  bVar10 = 1 < (int)uVar7 | 2;
                }
                else {
                  uVar9 = CONCAT71((uint7)(uint3)(uVar7 >> 8),1);
                  bVar10 = 4;
                  if (iVar3 <= iVar2) {
                    return uVar9;
                  }
                }
              }
              *(byte *)(param_3 + 7) = bVar10;
            }
            return CONCAT71((int7)(uVar9 >> 8),1);
          }
          piVar12 = piVar12 + 0x32;
        } while (piVar12 != piVar11);
      }
      lVar8 = lVar8 + 0x28;
    } while (lVar8 != lVar1);
  }
  return 0;
}



// FUNCTION 14429b82b FUN_14429b82b body=69 status=ok
// SIG undefined FUN_14429b82b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14429b82b(void)

{
  _DAT_14cbd8638 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014429b86d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd8640,1);
  return;
}



// FUNCTION 14429b870 FUN_14429b870 body=69 status=ok
// SIG undefined FUN_14429b870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14429b870(void)

{
  _DAT_14cbd8650 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014429b8b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd8658,1);
  return;
}



// FUNCTION 14429b8b5 FUN_14429b8b5 body=69 status=ok
// SIG undefined FUN_14429b8b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14429b8b5(void)

{
  _DAT_14cbd8660 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014429b8f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd8668,1);
  return;
}



// FUNCTION 14429b8fa FUN_14429b8fa body=1131 status=ok
// SIG undefined FUN_14429b8fa(void)

void FUN_14429b8fa(longlong param_1)

{
  bool bVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined ***pppuVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 auStack_268 [40];
  PSRWLOCK local_240;
  longlong local_238;
  undefined ***local_228;
  undefined **local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined1 local_1f8 [128];
  undefined1 *local_178;
  undefined8 local_170;
  longlong local_168 [3];
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined1 *local_88;
  int local_80;
  undefined ***local_78;
  undefined **local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (DAT_14cbd8648 == '\0') {
    param_1 = param_1 + -0x38;
    local_108 = 0;
    local_100 = 0x8000000000;
    uStack_f8 = 0xffffffff;
    local_168[0] = 0;
    local_168[1] = 0;
    local_168[2] = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0xf;
    local_a8 = 1;
    local_a4 = 0;
    uStack_9c = 0;
    local_178 = (undefined1 *)0x0;
    local_170 = 0x1000000000;
    plVar5 = (longlong *)FUN_1400d6e82(param_1);
    lVar10 = *plVar5;
    AcquireSRWLockShared((PSRWLOCK)(lVar10 + 0x88));
    ReleaseSRWLockShared((PSRWLOCK)(lVar10 + 0x88));
    if ((longlong)*(int *)(lVar10 + 0x20) != 0) {
      lVar12 = *(longlong *)(lVar10 + 0x18);
      lVar10 = (longlong)*(int *)(lVar10 + 0x20) * 0x50 + lVar12;
      do {
        FUN_1418a6142(lVar12,&local_88);
        if ((longlong)local_80 == 0) {
          bVar1 = true;
          iVar4 = 0;
        }
        else {
          puVar15 = local_88 + (longlong)local_80 * 0x10;
          puVar14 = local_88;
          do {
            FUN_14088c870(local_168,puVar14);
            if (local_168[0] != 0) {
              if ((longlong)(int)uStack_150 != 0) {
                lVar13 = 0;
                do {
                  if (*(longlong *)(local_168[2] + lVar13) == 0) goto LAB_14429baaa;
                  lVar13 = lVar13 + 8;
                } while ((longlong)(int)uStack_150 * 8 != lVar13);
              }
              if ((*(longlong *)(local_168[0] + 0x98) != 0) ||
                 (*(longlong *)(local_168[0] + 0xa0) != 0)) {
                lVar13 = FUN_148e5789a(param_1,local_168);
                uVar2 = local_170;
                if (lVar13 == 0) {
                  bVar1 = false;
                  iVar4 = local_80;
                  goto LAB_14429bb28;
                }
                lVar11 = (longlong)(int)local_170;
                uVar3 = (int)local_170 + 1;
                local_170 = CONCAT44(local_170._4_4_,uVar3);
                if (local_170._4_4_ < uVar3) {
                  FUN_148e60bee(local_1f8,uVar2 & 0xffffffff);
                }
                puVar6 = local_178;
                if (local_178 == (undefined1 *)0x0) {
                  puVar6 = local_1f8;
                }
                *(longlong *)(puVar6 + lVar11 * 8) = lVar13;
              }
            }
LAB_14429baaa:
            puVar14 = puVar14 + 0x10;
          } while (puVar14 != puVar15);
          bVar1 = true;
          iVar4 = local_80;
        }
LAB_14429bb28:
        FUN_1447a1747(local_88,iVar4);
        if (local_88 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (!bVar1) goto LAB_14429bd06;
        lVar12 = lVar12 + 0x50;
      } while (lVar12 != lVar10);
    }
    plVar5 = (longlong *)FUN_1400d6e82(param_1);
    lVar10 = *plVar5;
    local_240 = (PSRWLOCK)(lVar10 + 0x88);
    AcquireSRWLockExclusive(local_240);
    *(int *)(lVar10 + 0x80) = *(int *)(lVar10 + 0x80) + 1;
    if ((longlong)*(int *)(lVar10 + 0x20) != 0) {
      lVar12 = *(longlong *)(lVar10 + 0x18);
      lVar13 = (longlong)*(int *)(lVar10 + 0x20) * 0x50;
      do {
        uVar7 = FUN_14105c38a(lVar12);
        local_218 = &PTR_LAB_14b9b7b90;
        local_88 = &LAB_1442a86b8;
        local_78 = (undefined ***)0x0;
        local_228 = (undefined ***)0x0;
        uStack_210._0_4_ = (undefined4)uVar7;
        uStack_210._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_58 = local_208;
        uStack_54 = uStack_204;
        uStack_50 = uStack_200;
        uStack_4c = uStack_1fc;
        local_68 = &PTR_LAB_14b9b7b90;
        uStack_60 = (undefined4)uStack_210;
        uStack_5c = uStack_210._4_4_;
        local_238 = 0;
        uStack_210 = uVar7;
        iVar4 = FUN_148e60cf4(lVar10,&local_88);
        if (local_238 != 0) {
          pppuVar9 = local_228;
          if (local_228 == (undefined ***)0x0) {
            pppuVar9 = &local_218;
          }
          (*(code *)(*pppuVar9)[2])();
        }
        if ((-1 < iVar4) && (iVar4 < *(int *)(lVar10 + 8))) {
          FUN_148e57910(lVar10,iVar4);
        }
        lVar12 = lVar12 + 0x50;
        lVar13 = lVar13 + -0x50;
      } while (lVar13 != 0);
    }
    puVar14 = local_178;
    if (local_178 == (undefined1 *)0x0) {
      puVar14 = local_1f8;
    }
    lVar12 = (longlong)(int)local_170;
    if (lVar12 != 0) {
      lVar13 = 0;
      do {
        FUN_148e5797c(lVar10 + 0x40,*(undefined8 *)(puVar14 + lVar13));
        lVar13 = lVar13 + 8;
      } while (lVar12 * 8 != lVar13);
    }
    puVar8 = (undefined8 *)FUN_148e579c6(param_1);
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14b9b7bd0;
    local_88 = &LAB_1442a8772;
    FUN_148e57a3a(*puVar8,&local_88);
    if (local_88 != (undefined1 *)0x0) {
      pppuVar9 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar9 = &local_68;
      }
      (*(code *)(*pppuVar9)[2])();
    }
    iVar4 = *(int *)(lVar10 + 0x24);
    FUN_141165946(*(undefined8 *)(lVar10 + 0x18),*(undefined4 *)(lVar10 + 0x20));
    *(undefined4 *)(lVar10 + 0x20) = 0;
    if ((iVar4 < 1) && (*(int *)(lVar10 + 0x24) != 1)) {
      FUN_14581d39c(lVar10 + 0x18,1);
    }
    ReleaseSRWLockExclusive(local_240);
LAB_14429bd06:
    if (local_178 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140368b56(local_168);
  }
  if ((local_48 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14429be76 FUN_14429be76 body=1029 status=ok
// SIG undefined FUN_14429be76(void)

void FUN_14429be76(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
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
  longlong local_50 [2];
  code *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + -0x30);
  lVar6 = FUN_1400f3ad8(param_1 + 0x14);
  if (lVar6 == 0) {
LAB_14429bed6:
    lVar6 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_70 = &local_40;
      local_40 = FUN_141030f22;
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
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_14429bed6;
  }
  FUN_1402815f4(plVar1,&local_40);
  pbVar3 = *(byte **)(local_40 + 0x380);
  AcquireSRWLockExclusive((PSRWLOCK)(pbVar3 + 0x6e0));
  *(int *)(pbVar3 + 0x6d8) = *(int *)(pbVar3 + 0x6d8) + 1;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_38 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if (lVar6 == 0) {
    if (*pbVar3 == 0) {
      iVar5 = *(int *)(pbVar3 + 4) + 1;
LAB_14429bf80:
      *pbVar3 = 1;
      *(int *)(pbVar3 + 4) = iVar5;
    }
    else {
      iVar5 = 1;
      if (*(int *)(pbVar3 + 4) == 0) goto LAB_14429bf80;
    }
    bVar4 = 0;
  }
  else {
    bVar4 = FUN_14016169c(lVar6,&local_40);
    bVar4 = bVar4 ^ 1 | (int)local_40 == 0;
    if (*pbVar3 == bVar4) {
      iVar5 = 1;
      if (*(int *)(pbVar3 + 4) == 0) goto LAB_14429bf8e;
    }
    else {
      iVar5 = *(int *)(pbVar3 + 4) + 1;
LAB_14429bf8e:
      *pbVar3 = bVar4;
      *(int *)(pbVar3 + 4) = iVar5;
    }
    bVar4 = FUN_1458ff97e(lVar6);
  }
  if (bVar4 == pbVar3[0x10]) {
    iVar5 = 1;
    if (*(int *)(pbVar3 + 0x14) == 0) goto LAB_14429bfb2;
  }
  else {
    iVar5 = *(int *)(pbVar3 + 0x14) + 1;
LAB_14429bfb2:
    pbVar3[0x10] = bVar4;
    *(int *)(pbVar3 + 0x14) = iVar5;
  }
  lVar6 = FUN_1402735c8();
  FUN_1449a0272(pbVar3 + 0x80,lVar6 + 0x110);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
    FUN_145c3c252(&DAT_14c8686c8);
    DAT_14c868708 = &DAT_14c8686c8;
    atexit(thunk_FUN_14626bbac);
    _Init_thread_footer(&DAT_14c868710);
  }
  if ((*(uint *)(DAT_14c868708 + 4) & 0x7fffffff) == *(uint *)(pbVar3 + 0x98)) {
    iVar5 = 1;
    if (*(int *)(pbVar3 + 0x9c) != 0) goto LAB_14429c02d;
  }
  else {
    iVar5 = *(int *)(pbVar3 + 0x9c) + 1;
  }
  *(uint *)(pbVar3 + 0x98) = *(uint *)(DAT_14c868708 + 4) & 0x7fffffff;
  *(int *)(pbVar3 + 0x9c) = iVar5;
LAB_14429c02d:
  plVar7 = (longlong *)FUN_1457baddc();
  if ((longlong)(int)plVar7[1] != 0) {
    lVar6 = *plVar7;
    lVar8 = (longlong)(int)plVar7[1] * 0xf0;
    do {
      if (*(char *)(lVar6 + 0xe9) != '\0') {
        if (lVar6 != 0) {
          local_a0 = *(undefined4 *)(lVar6 + 100);
          local_a8 = *(undefined4 *)(lVar6 + 0x60);
          FUN_140002266(local_50,L"%d.%d.%d.%d",*(undefined4 *)(lVar6 + 0x58),
                        *(undefined4 *)(lVar6 + 0x5c));
          FUN_140ba7826(&local_40,&DAT_149e1419a,local_50);
          FUN_140775538(pbVar3 + 0xa0,&local_40);
          if (local_40 != (code *)0x0) {
            FUN_1400020a8();
          }
          if (local_50[0] != 0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      lVar6 = lVar6 + 0xf0;
      lVar8 = lVar8 + -0xf0;
    } while (lVar8 != 0);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(pbVar3 + 0x6e0));
  FUN_1458ff462(plVar1);
  FUN_1458ff462(plVar1);
  FUN_14128c22a(plVar1);
  FUN_1458ff706(plVar1);
  FUN_1458ff23e(plVar1);
  FUN_1458ff654(plVar1);
  FUN_1458e1450(plVar1);
  FUN_1458ff23e(plVar1);
  FUN_145ac8926(plVar1);
  FUN_1458e1ab6(plVar1);
  FUN_1458e1cd6(plVar1);
  FUN_145a9f44e(plVar1);
  FUN_14429c27c(plVar1);
  lVar6 = (**(code **)(*plVar1 + 0x180))(plVar1);
  if (lVar6 != 0) {
    FUN_145bf967e(plVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14429c27c FUN_14429c27c body=320 status=ok
// SIG undefined FUN_14429c27c(void)

void FUN_14429c27c(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  plVar3 = *(longlong **)(local_38 + 0x3a0);
  AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 3));
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if (*plVar3 == 0) {
    if ((int)plVar3[1] != 0) goto LAB_14429c302;
    iVar2 = 1;
  }
  else {
    iVar2 = (int)plVar3[1] + 1;
  }
  *plVar3 = 0;
  *(int *)(plVar3 + 1) = iVar2;
LAB_14429c302:
  ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 3));
  plVar3 = (longlong *)FUN_140059518(param_1 + 0x44);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x180))(plVar3);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) {
      lVar4 = FUN_148d9ae84();
      if (lVar4 != 0) {
        plVar5 = (longlong *)FUN_140773fe2();
        if (plVar5 != (longlong *)0x0) {
          uVar6 = (**(code **)(*plVar3 + 0x180))(plVar3);
          lVar7 = (**(code **)(*plVar5 + 0x2d0))(plVar5,(int)plVar3[0x1c],uVar6);
          if (lVar7 != 0) {
            FUN_1441bae12(lVar4,lVar7);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14429c3d2 FUN_14429c3d2 body=3044 status=ok
// SIG undefined FUN_14429c3d2(void)

void FUN_14429c3d2(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  code *pcVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined4 local_98;
  code *local_90;
  undefined4 local_88;
  code *local_80;
  int local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + -0x30);
  lVar8 = FUN_1408bb964(param_1 + 0x14);
  if (lVar8 != 0) {
    lVar9 = FUN_1403ca142();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30)) {
      iVar12 = *(int *)(lVar8 + 0x4c8);
      if ((longlong)iVar12 != 0) {
        lVar9 = *(longlong *)(lVar8 + 0x4c0);
        lVar13 = 0;
        do {
          if (((*(int *)(lVar9 + 8 + lVar13) != 0) &&
              (plVar3 = *(longlong **)(lVar9 + lVar13), plVar3 != (longlong *)0x0)) &&
             (cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3,plVar1), cVar7 != '\0'))
          goto LAB_14429c5da;
          lVar13 = lVar13 + 0x10;
        } while ((longlong)iVar12 * 0x10 != lVar13);
      }
      local_80 = FUN_148e57e8c;
      local_78 = 0;
      FUN_1466476e4(lVar8 + 0x4c0,&local_90,plVar1,&local_80);
      local_80 = (code *)0x0;
      local_78 = 0;
      FUN_1446efa72(&local_80,0,3,0x10);
      pcVar5 = local_80;
      local_78 = 3;
      *(undefined ***)local_80 = &PTR_LAB_14b3ecf50;
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar13 == 0) {
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      *(longlong *)(local_80 + 0x10) = lVar13;
      *(undefined ***)local_80 = &PTR_FUN_14b9b7dd0;
      *(undefined8 *)(local_80 + 0x18) = 0;
      iVar12 = 0;
      if (plVar1 != (longlong *)0x0) {
        uVar2 = *(uint *)(param_1 + -0x24);
        *(uint *)(local_80 + 0x18) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar12 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar12 = DAT_14c964868 + 1;
          UNLOCK();
          iVar14 = DAT_14c964868 + 1;
          bVar15 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar12;
          if (bVar15) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar14);
          }
          LOCK();
          iVar12 = *(int *)(lVar9 + 0x10);
          bVar15 = iVar12 == 0;
          if (bVar15) {
            *(int *)(lVar9 + 0x10) = iVar14;
            iVar12 = 0;
          }
          UNLOCK();
          if (bVar15) {
            iVar12 = iVar14;
          }
        }
      }
      *(int *)(pcVar5 + 0x1c) = iVar12;
      *(code **)(pcVar5 + 0x20) = FUN_14429cfb8;
      *(undefined4 *)(pcVar5 + 0x28) = 0;
      FUN_1412a3750(&DAT_14cb7df68,&local_90,&local_80);
      if (local_78 == 0) {
LAB_14429c5cc:
        if (local_80 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_80 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_80)(local_80,0);
        FUN_1446efa72(&local_80,0,0,0x10);
        local_78 = 0;
        goto LAB_14429c5cc;
      }
LAB_14429c5da:
      uVar10 = FUN_145d47f82();
      local_80 = FUN_148e5952c;
      local_78 = 0;
      FUN_145dc36b4(uVar10,&local_90,plVar1);
      if (*(longlong *)(lVar8 + 0x30) != 0) {
        lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x30) + 0x2a0);
        if ((DAT_14c950c29 == '\x01') && (lVar9 != 0)) {
          FUN_1456cec3c(lVar9);
        }
        else if (lVar9 == 0) goto LAB_14429c68d;
        lVar13 = FUN_140d976a6();
        if (((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) &&
           (*(longlong *)(param_1 + 0x30) == 0)) {
          local_80 = (code *)&LAB_1459b5faa;
          local_78 = 0;
          FUN_1466477e4(lVar9 + 0x410,&local_90,plVar1);
          *(code **)(param_1 + 0x30) = local_90;
        }
      }
LAB_14429c68d:
      if (((*(longlong *)(lVar8 + 0x1e0) != 0) &&
          (lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x1e0) + 0x30), lVar9 != 0)) &&
         (*(longlong *)(param_1 + 0x58) == 0)) {
        local_80 = FUN_1458e1422;
        local_78 = 0;
        FUN_1466478e4(lVar9 + 0x40,&local_90,plVar1);
        *(code **)(param_1 + 0x58) = local_90;
      }
      lVar8 = *(longlong *)(lVar8 + 0x48);
      if (lVar8 != 0) {
        lVar9 = FUN_140b6d0be();
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
          if (*(longlong *)(param_1 + 0x70) == 0) {
            local_80 = FUN_1458ff214;
            local_78 = 0;
            FUN_1466476e4(lVar8 + 0x1e0,&local_90,plVar1);
            *(code **)(param_1 + 0x70) = local_90;
          }
          if (*(longlong *)(param_1 + 0x78) == 0) {
            local_80 = FUN_148e57eb6;
            local_78 = 0;
            FUN_1466476e4(lVar8 + 0x1f8,&local_90,plVar1);
            *(code **)(param_1 + 0x78) = local_90;
          }
          if (*(longlong *)(param_1 + 0x80) == 0) {
            local_80 = FUN_146111092;
            local_78 = 0;
            FUN_145dc38b2(lVar8 + 0x518,&local_90,plVar1);
            *(code **)(param_1 + 0x80) = local_90;
          }
          if (*(longlong *)(param_1 + 0x88) == 0) {
            local_80 = FUN_146200950;
            local_78 = 0;
            FUN_145ff181a(lVar8 + 0x530,&local_90,plVar1);
            *(code **)(param_1 + 0x88) = local_90;
          }
          if (*(longlong *)(param_1 + 0x178) == 0) {
            local_80 = FUN_145ac8daa;
            local_78 = 0;
            FUN_1466479e4(lVar8 + 0x4b8,&local_90,plVar1);
            *(code **)(param_1 + 0x178) = local_90;
          }
          if (*(longlong *)(param_1 + 0x170) == 0) {
            local_80 = (code *)&LAB_145c01b76;
            local_78 = 0;
            FUN_146647ae4(lVar8 + 0x270,&local_90,plVar1);
            *(code **)(param_1 + 0x170) = local_90;
          }
          if (*(longlong *)(param_1 + 0x168) == 0) {
            local_80 = (code *)&LAB_148e57ed0;
            local_78 = 0;
            FUN_1466476e4(lVar8 + 0x210,&local_90,plVar1);
            *(code **)(param_1 + 0x168) = local_90;
          }
        }
      }
    }
  }
  lVar8 = (**(code **)(*plVar1 + 0x180))(plVar1);
  if (((lVar8 != 0) && (*(longlong *)(lVar8 + 0x1f0) != 0)) && (lVar8 = FUN_14116599c(), lVar8 != 0)
     ) {
    if (*(longlong *)(param_1 + 0x60) == 0) {
      local_80 = FUN_145ac88e6;
      local_78 = 0;
      FUN_145caf694(lVar8 + 0x40,&local_90,plVar1);
      *(code **)(param_1 + 0x60) = local_90;
    }
    if (*(longlong *)(param_1 + 0x68) == 0) {
      local_80 = FUN_145e022f6;
      local_78 = 0;
      FUN_146647be4(lVar8 + 0x58,&local_90,plVar1);
      *(code **)(param_1 + 0x68) = local_90;
    }
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      local_80 = (code *)&LAB_148e57ed6;
      local_78 = 0;
      FUN_1466476e4(lVar8 + 0x88,&local_90,plVar1);
      *(code **)(param_1 + 0xb0) = local_90;
    }
    if (*(longlong *)(param_1 + 0xb8) == 0) {
      local_80 = (code *)&LAB_148e57edc;
      local_78 = 0;
      FUN_1466476e4(lVar8 + 0xa0,&local_90,plVar1);
      *(code **)(param_1 + 0xb8) = local_90;
    }
  }
  uVar10 = (**(code **)(*plVar1 + 0x180))(plVar1);
  lVar8 = FUN_1411db1ae(uVar10);
  if (lVar8 != 0) {
    iVar12 = *(int *)(lVar8 + 0x10);
    if ((longlong)iVar12 != 0) {
      lVar9 = *(longlong *)(lVar8 + 8);
      lVar13 = 0;
      do {
        if (((*(int *)(lVar9 + 8 + lVar13) != 0) &&
            (plVar3 = *(longlong **)(lVar9 + lVar13), plVar3 != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3,plVar1), cVar7 != '\0'))
        goto LAB_14429ca87;
        lVar13 = lVar13 + 0x10;
      } while ((longlong)iVar12 * 0x10 != lVar13);
    }
    local_80 = FUN_148e57ee2;
    local_78 = 0;
    FUN_146647ce4(lVar8 + 8,&local_90,plVar1);
LAB_14429ca87:
    iVar12 = *(int *)(lVar8 + 0x88);
    if ((longlong)iVar12 != 0) {
      lVar9 = *(longlong *)(lVar8 + 0x80);
      lVar13 = 0;
      do {
        if (((*(int *)(lVar9 + 8 + lVar13) != 0) &&
            (plVar3 = *(longlong **)(lVar9 + lVar13), plVar3 != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3,plVar1), cVar7 != '\0'))
        goto LAB_14429caf3;
        lVar13 = lVar13 + 0x10;
      } while ((longlong)iVar12 * 0x10 != lVar13);
    }
    local_80 = FUN_148e57f12;
    local_78 = 0;
    FUN_1466476e4(lVar8 + 0x80,&local_90,plVar1);
  }
LAB_14429caf3:
  if (*(longlong *)(param_1 + 0x158) == 0) {
    local_90 = FUN_145a1a666;
    local_88 = 0;
    FUN_14664a67c(&local_80,plVar1);
    FUN_14126834e(&DAT_14cb10ae8,&local_90,&local_80);
    FUN_1401cb1ee(&local_80);
    *(code **)(param_1 + 0x158) = local_90;
  }
  if (*(longlong *)(param_1 + 0x160) == 0) {
    local_80 = (code *)&LAB_145bf9678;
    local_78 = 0;
    FUN_146647de4(&local_90,plVar1);
    *(code **)(param_1 + 0x160) = local_90;
  }
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    local_80 = FUN_14619dc2c;
    local_78 = 0;
    FUN_146647ede(&local_90,plVar1);
    *(code **)(param_1 + 0xe8) = local_90;
  }
  if (*(longlong *)(param_1 + 0x1a0) == 0) {
    local_80 = (code *)&LAB_145a9f448;
    local_78 = 0;
    FUN_146647fd8(&DAT_14cb103a8,&local_90,plVar1);
    *(code **)(param_1 + 0x1a0) = local_90;
  }
  if (*(longlong *)(param_1 + 0x1a8) == 0) {
    local_80 = (code *)&LAB_145a9f448;
    local_78 = 0;
    FUN_146647fd8(&DAT_14c9647a0,&local_90,plVar1);
    *(code **)(param_1 + 0x1a8) = local_90;
  }
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    lVar8 = FUN_1411c1a08();
    local_80 = (code *)&LAB_148e57f42;
    local_78 = 0;
    FUN_1466476e4(lVar8 + 0x60,&local_90,plVar1);
    *(code **)(param_1 + 0x1b0) = local_90;
  }
  local_80 = (code *)0x0;
  local_78 = 0;
  FUN_1446efa72(&local_80,0,3,0x10);
  pcVar5 = local_80;
  local_78 = 3;
  *(undefined ***)local_80 = &PTR_LAB_14b9b85b0;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_80 + 0x10) = lVar9;
  *(undefined ***)local_80 = &PTR_FUN_14b9b8540;
  *(undefined8 *)(local_80 + 0x18) = 0;
  iVar12 = 0;
  if (plVar1 != (longlong *)0x0) {
    uVar2 = *(uint *)(param_1 + -0x24);
    *(uint *)(local_80 + 0x18) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar12 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar12 = *(int *)(lVar8 + 0x10);
      bVar15 = iVar12 == 0;
      if (bVar15) {
        *(int *)(lVar8 + 0x10) = iVar14;
        iVar12 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar12 = iVar14;
      }
    }
  }
  iVar14 = local_78;
  pcVar6 = local_80;
  *(int *)(pcVar5 + 0x1c) = iVar12;
  *(code **)(pcVar5 + 0x20) = FUN_14429d10e;
  *(undefined4 *)(pcVar5 + 0x28) = 0;
  plVar3 = (longlong *)(param_1 + 0x1c0);
  local_80 = (code *)0x0;
  local_78 = 0;
  if (*(int *)(param_1 + 0x1c8) == 0) {
LAB_14429cd7a:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x1c8) = 0;
      goto LAB_14429cd7a;
    }
  }
  *(code **)(param_1 + 0x1c0) = pcVar6;
  *(int *)(param_1 + 0x1c8) = iVar14;
  if (local_78 != 0) {
    if (local_80 == (code *)0x0) goto LAB_14429cdd7;
    (*(code *)**(undefined8 **)local_80)(local_80,0);
    FUN_1446efa72(&local_80,0,0,0x10);
    local_78 = 0;
  }
  if (local_80 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_14429cdd7:
  plVar11 = (longlong *)FUN_140059518(param_1 + 0x14);
  if (((plVar11 != (longlong *)0x0) &&
      (lVar8 = (**(code **)(*plVar11 + 0x180))(plVar11), lVar8 != 0)) &&
     ((*(longlong *)(lVar8 + 0x1f0) != 0 && (lVar8 = FUN_148d9ae84(), lVar8 != 0)))) {
    local_a0 = 0;
    local_98 = 0;
    FUN_1441cc408(&local_a0,plVar3);
    FUN_1441bb2ba(lVar8,&local_80,&local_a0);
    *(code **)(param_1 + 0x1d0) = local_80;
  }
  FUN_145bf967e(plVar1);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14429cfb8 FUN_14429cfb8 body=341 status=ok
// SIG undefined FUN_14429cfb8(void)

void FUN_14429cfb8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  undefined1 auStack_98 [40];
  char local_70 [4];
  undefined8 local_6c;
  int local_64;
  longlong local_60;
  longlong *local_58;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = (**(code **)(*param_1 + 0x180))();
  if (((lVar4 == 0) || (*(longlong *)(param_2 + 0x30) == 0)) ||
     (lVar4 != *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x360))) goto LAB_14429cff9;
  FUN_1402815f4(param_1,&local_60);
  lVar3 = *(longlong *)(local_60 + 0x3e0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xc0));
  *(int *)(lVar3 + 0xb8) = *(int *)(lVar3 + 0xb8) + 1;
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
  local_70[0] = '\0';
  local_6c = 0;
  local_64 = 0;
  FUN_145bf9a33(&local_60);
  lVar4 = FUN_140149a73(lVar4,0);
  if (lVar4 != 0) {
    FUN_14039fc7b(&local_60,local_70,lVar4,0);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] == '\x01') {
    cVar6 = local_64 != 0;
  }
  else {
    cVar6 = FUN_140321d1a(local_70);
  }
  if (*(char *)(lVar3 + 0x30) == cVar6) {
    if (*(int *)(lVar3 + 0x34) == 0) {
      iVar5 = 1;
      goto LAB_14429d0e5;
    }
  }
  else {
    iVar5 = *(int *)(lVar3 + 0x34) + 1;
LAB_14429d0e5:
    *(char *)(lVar3 + 0x30) = cVar6;
    *(int *)(lVar3 + 0x34) = iVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xc0));
LAB_14429cff9:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14429d10e FUN_14429d10e body=68 status=ok
// SIG undefined FUN_14429d10e(void)

void FUN_14429d10e(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140059518(param_1 + 0x44);
  if ((lVar1 != 0) && (*(int *)(param_2 + 0x38) == *(int *)(lVar1 + 0xe0))) {
    FUN_1442a11c4(param_1,param_3);
    return;
  }
  return;
}



// FUNCTION 14429d152 FUN_14429d152 body=1032 status=ok
// SIG undefined FUN_14429d152(void)

void FUN_14429d152(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    plVar2 = (longlong *)FUN_140059518(param_1 + 0x14);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x180))(plVar2);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
        lVar3 = FUN_148d9ae84();
        if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x1d0) != 0)) {
          cVar1 = FUN_14480f766(lVar3 + 0x158);
          if (cVar1 != '\0') {
            *(undefined8 *)(param_1 + 0x1d0) = 0;
          }
        }
      }
    }
  }
  lVar3 = FUN_1411c1a08();
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_14480f766(lVar3 + 0x60);
  }
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_14480f766(&DAT_14cb103a8);
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_14480f766(&DAT_14c9647a0);
  }
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_14480f766(&DAT_14cbd0b00);
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_141092d32(&DAT_14cb10ae8);
  }
  plVar2 = (longlong *)(param_1 + -0x30);
  *(undefined8 *)(param_1 + 0x158) = 0;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_14480f766(&DAT_14cb10980);
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  lVar3 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(plVar2);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_14116599c();
    if (lVar3 != 0) {
      if (*(longlong *)(param_1 + 0x60) != 0) {
        FUN_14480f766(lVar3 + 0x40);
      }
      if (*(longlong *)(param_1 + 0x68) != 0) {
        FUN_14480f766(lVar3 + 0x58);
      }
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        FUN_14480f766(lVar3 + 0x88);
      }
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        FUN_14480f766(lVar3 + 0xa0);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  lVar3 = FUN_1408bb964(param_1 + 0x14);
  if (lVar3 == 0) goto LAB_14429d4d7;
  lVar4 = FUN_1403ca142();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) goto LAB_14429d4d7;
  FUN_140457ffc(lVar3 + 0x4c0,plVar2);
  if (*(longlong *)(lVar3 + 0x30) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x2a0);
    if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
      FUN_1456cec3c(lVar4);
    }
    else if (lVar4 == 0) goto LAB_14429d3df;
    lVar5 = FUN_140d976a6();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
         == lVar5 + 0x30)) && (*(longlong *)(param_1 + 0x30) != 0)) {
      FUN_14480f766(lVar4 + 0x410);
    }
  }
LAB_14429d3df:
  if (((*(longlong *)(lVar3 + 0x1e0) != 0) &&
      (lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x1e0) + 0x30), lVar4 != 0)) &&
     (*(longlong *)(param_1 + 0x58) != 0)) {
    FUN_14480f766(lVar4 + 0x40);
  }
  lVar3 = *(longlong *)(lVar3 + 0x48);
  if (lVar3 != 0) {
    lVar4 = FUN_140b6d0be();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      if (*(longlong *)(param_1 + 0x70) != 0) {
        FUN_14480f766(lVar3 + 0x1e0);
      }
      if (*(longlong *)(param_1 + 0x78) != 0) {
        FUN_14480f766(lVar3 + 0x1f8);
      }
      if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_14480f766(lVar3 + 0x518);
      }
      if (*(longlong *)(param_1 + 0x178) != 0) {
        FUN_14480f766(lVar3 + 0x4b8);
      }
      if (*(longlong *)(param_1 + 0x170) != 0) {
        FUN_14480f766(lVar3 + 0x270);
      }
      if (*(longlong *)(param_1 + 0x168) != 0) {
        FUN_14480f766(lVar3 + 0x210);
      }
    }
  }
  FUN_140457ffc(&DAT_14cb7df68,plVar2);
LAB_14429d4d7:
  uVar6 = (**(code **)(*plVar2 + 0x180))(plVar2);
  lVar3 = FUN_1411db1ae(uVar6);
  if (lVar3 != 0) {
    FUN_140457ffc(lVar3 + 8,plVar2);
    FUN_140457ffc(lVar3 + 0x80,plVar2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  uVar6 = FUN_145d47f82();
  FUN_140457ffc(uVar6,plVar2);
  return;
}



// FUNCTION 14429d55a FUN_14429d55a body=9994 status=ok
// SIG undefined FUN_14429d55a(void)

void FUN_14429d55a(longlong param_1)

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
  if (lVar5 == 0) goto LAB_14429f2bc;
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = FUN_148e57f48;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "ExitGameSplitScreen";
    local_48 = 0x13;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x38) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429d6f9;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429d6f9:
  if (*(longlong *)(param_1 + 0x50) == 0) {
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = FUN_148e582ee;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "ShowMaxSaveGamesDialog";
    local_48 = 0x16;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x50) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429d857;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429d857:
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = &LAB_14587b362;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "SplitScreenMenuStatusChanged";
    local_48 = 0x1c;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x40) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429d9b5;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429d9b5:
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = FUN_14587b368;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "SetCanAddSplitscreenPlayer";
    local_48 = 0x1a;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0xa0) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429db19;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429db19:
  if (*(longlong *)(param_1 + 0x98) == 0) {
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = &DAT_148e5836c;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "SwitchProfile";
    local_48 = 0xd;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x98) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429dc7d;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429dc7d:
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = FUN_1466480d8;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "OakMainMenuActive";
    local_48 = 0x11;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0xa8) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429dde1;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429dde1:
  if (*(longlong *)(param_1 + 200) == 0) {
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = &LAB_148e5836e;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "GameSettingsMenuActive";
    local_48 = 0x16;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 200) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429df45;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429df45:
  if (*(longlong *)(param_1 + 0xd0) == 0) {
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = FUN_148e58374;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "SetGameSettings";
    local_48 = 0xf;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0xd0) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429e0a9;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429e0a9:
  if (*(longlong *)(param_1 + 0xe0) == 0) {
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = FUN_148e5854e;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "SetMatchmakingGameSettings";
    local_48 = 0x1a;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0xe0) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429e20d;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429e20d:
  if (*(longlong *)(param_1 + 0xd8) == 0) {
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = &LAB_148e5863e;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "SetGameSetting_TrueMode";
    local_48 = 0x17;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0xd8) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429e371;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429e371:
  if (*(longlong *)(param_1 + 0x120) == 0) {
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = FUN_148e5864c;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "OpenMatchmakingMenu";
    local_48 = 0x13;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x120) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429e4d5;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429e4d5:
  if (*(longlong *)(param_1 + 0xf8) == 0) {
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = FUN_148e586e2;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "OpenLanMenu";
    local_48 = 0xb;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0xf8) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429e639;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429e639:
  if (*(longlong *)(param_1 + 0x100) == 0) {
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = FUN_148e5895a;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "CloseLanMenu";
    local_48 = 0xc;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x100) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429e79d;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429e79d:
  if (*(longlong *)(param_1 + 0xf0) == 0) {
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = &LAB_148e58b1e;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "RefreshLanMenu";
    local_48 = 0xe;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0xf0) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429e901;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429e901:
  if (*(longlong *)(param_1 + 0x108) == 0) {
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = FUN_14429fc66;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "JoinLanSession";
    local_48 = 0xe;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x108) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429ea65;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429ea65:
  if (*(longlong *)(param_1 + 0x110) == 0) {
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = FUN_148e58b42;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "CycleLanSortCriteria";
    local_48 = 0x14;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x110) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429ebc9;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429ebc9:
  if (*(longlong *)(param_1 + 0x118) == 0) {
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = FUN_148e58b82;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "SetLanSortCriteria";
    local_48 = 0x12;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x118) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429ed2d;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429ed2d:
  if (*(longlong *)(param_1 + 0x128) == 0) {
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = FUN_148e58bb8;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "OpenLoadCharacter";
    local_48 = 0x11;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x128) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429ee91;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429ee91:
  if (*(longlong *)(param_1 + 0xc0) == 0) {
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = FUN_148e58cf0;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "SplitscreenTransferInput";
    local_48 = 0x18;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0xc0) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429eff5;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429eff5:
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = FUN_14128c1a0;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "PauseGame_Start";
    local_48 = 0xf;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x180) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429f159;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429f159:
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
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
    *local_60 = &PTR_FUN_14b9b8620;
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
    puVar2[4] = &LAB_14429fec2;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "CrossSaveRegistrationUpdated";
    local_48 = 0x1c;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x1d8) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_14429f2bc;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14429f2bc:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14429fc66 FUN_14429fc66 body=603 status=ok
// SIG undefined FUN_14429fc66(void)

void FUN_14429fc66(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ushort uVar9;
  uint uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (1 < *(int *)(param_2 + 0x10)) {
    lVar4 = FUN_140059518(param_1 + 0x44);
    if (((lVar4 != 0) && (lVar5 = FUN_1408bb964(param_1 + 0x44), lVar5 != 0)) &&
       (lVar5 = *(longlong *)(lVar5 + 0x48), lVar5 != 0)) {
      lVar6 = FUN_140b6d0be();
      if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
         (*(longlong *)(param_1 + 0x1c0) != 0)) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar7 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))();
        if ((plVar7 == (longlong *)0x0) ||
           (cVar1 = (**(code **)(*plVar7 + 0xa8))(plVar7), cVar1 == '\0')) {
          iVar3 = *(int *)(param_2 + 0x10);
          if (iVar3 == DAT_14cbd88d0) {
            if (1 < iVar3) {
              lVar6 = 0;
              while( true ) {
                uVar9 = *(ushort *)(*(longlong *)(param_2 + 8) + lVar6);
                uVar11 = (ulonglong)uVar9;
                uVar12 = *(ushort *)(DAT_14cbd88c8 + lVar6);
                if (uVar9 != uVar12) break;
                if (uVar9 == 0) goto LAB_14429fcdb;
LAB_14429fd90:
                lVar6 = lVar6 + 2;
              }
              if ((uVar12 | uVar9) < 0x80) {
                uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                uVar13 = (ulonglong)uVar12;
                uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_14429fd90;
              }
              if (uVar9 != uVar12) goto LAB_14429fdcd;
            }
          }
          else if (DAT_14cbd88d0 + iVar3 != 1) {
LAB_14429fdcd:
            plVar7 = (longlong *)FUN_148aaeaf0(*(undefined8 *)(param_1 + 0x1c0));
            if ((longlong)(int)plVar7[1] != 0) {
              lVar6 = *plVar7;
              lVar14 = (longlong)(int)plVar7[1] * 0x120 + lVar6;
              do {
                FUN_141551f14(lVar6,&local_58);
                if (local_50 == *(int *)(param_2 + 0x10)) {
                  bVar15 = true;
                  if (1 < local_50) {
                    lVar8 = 0;
                    while( true ) {
                      uVar9 = *(ushort *)(local_58 + lVar8);
                      uVar2 = (uint)uVar9;
                      uVar12 = *(ushort *)(*(longlong *)(param_2 + 8) + lVar8);
                      uVar10 = (uint)uVar12;
                      if (uVar9 != uVar12) {
                        if ((uVar12 | uVar9) < 0x80) {
                          uVar2 = (uint)(byte)(&DAT_149e05da0)[uVar9];
                          uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar12];
                          if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12])
                          goto LAB_14429fe3e;
                        }
                        iVar3 = uVar2 - uVar10;
                        goto LAB_14429fe79;
                      }
                      if (uVar9 == 0) break;
LAB_14429fe3e:
                      lVar8 = lVar8 + 2;
                    }
                    iVar3 = 0;
LAB_14429fe79:
                    bVar15 = iVar3 == 0;
                  }
                }
                else {
                  bVar15 = *(int *)(param_2 + 0x10) + local_50 == 1;
                }
                if (local_58 != 0) {
                  FUN_1400020a8();
                }
                if (bVar15) {
                  if (lVar6 != 0) {
                    FUN_1441c341e(lVar5,*(undefined4 *)(lVar4 + 0xe0),lVar6);
                  }
                  break;
                }
                lVar6 = lVar6 + 0x120;
              } while (lVar6 != lVar14);
            }
          }
        }
      }
    }
  }
LAB_14429fcdb:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14429fec8 FUN_14429fec8 body=3348 status=ok
// SIG undefined FUN_14429fec8(void)

void FUN_14429fec8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_b8 [32];
  longlong local_98 [8];
  longlong *local_58;
  undefined8 uStack_50;
  longlong *local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14130d958(param_1,&DAT_14c9485f0);
  iVar7 = *(int *)(param_1 + 0x40);
  if ((((*(int *)(param_1 + 0x34) != 0 || *(int *)(param_1 + 0x30) != 0) ||
       *(int *)(param_1 + 0x38) != 0) || *(int *)(param_1 + 0x3c) != 0) ||
     (bVar8 = iVar7 == 0, iVar7 = 0, bVar8)) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(int *)(param_1 + 0x40) = iVar7 + 1;
  }
  FUN_1414cfa40(param_1 + 0x44,&DAT_149eda618);
  FUN_140bad112(param_1 + 0x50,&DAT_149dfb77a);
  FUN_140bad112(param_1 + 0x68,&DAT_149dfb77a);
  iVar7 = *(int *)(param_1 + 0x84);
  if ((*(int *)(param_1 + 0x80) != 0) || (bVar8 = iVar7 == 0, iVar7 = 0, bVar8)) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(int *)(param_1 + 0x84) = iVar7 + 1;
  }
  iVar7 = *(int *)(param_1 + 0x8c);
  if (((*(float *)(param_1 + 0x88) != 0.0) || (NAN(*(float *)(param_1 + 0x88)))) ||
     (bVar8 = iVar7 == 0, iVar7 = 0, bVar8)) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(int *)(param_1 + 0x8c) = iVar7 + 1;
  }
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
  plVar2 = (longlong *)(param_1 + 0x90);
  if (*(int *)(param_1 + 0xa0) == 0) {
LAB_14429fff3:
    plVar5 = DAT_14c844840;
    plVar4 = (longlong *)*plVar2;
    if (plVar4 != DAT_14c844840) {
      *plVar2 = (longlong)DAT_14c844840;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    *(undefined4 *)(param_1 + 0x98) = DAT_14c844848;
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  }
  else {
    cVar6 = FUN_144722c14(plVar2,&DAT_14c844840,0);
    if (cVar6 == '\0') goto LAB_14429fff3;
  }
  iVar7 = *(int *)(param_1 + 0xac);
  if (((*(float *)(param_1 + 0xa8) != 0.0) || (NAN(*(float *)(param_1 + 0xa8)))) ||
     (bVar8 = iVar7 == 0, iVar7 = 0, bVar8)) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(int *)(param_1 + 0xac) = iVar7 + 1;
  }
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
  puVar3 = (undefined8 *)(param_1 + 0xb0);
  if (*(int *)(param_1 + 0xc0) == 0) {
LAB_1442a00ae:
    plVar4 = DAT_14c844840;
    plVar2 = (longlong *)*puVar3;
    if (plVar2 != DAT_14c844840) {
      *puVar3 = DAT_14c844840;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(param_1 + 0xb8) = DAT_14c844848;
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  }
  else {
    cVar6 = FUN_144722c14(puVar3,&DAT_14c844840,0);
    if (cVar6 == '\0') goto LAB_1442a00ae;
  }
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
  puVar3 = (undefined8 *)(param_1 + 200);
  if (*(int *)(param_1 + 0xd8) == 0) {
LAB_1442a0136:
    plVar4 = DAT_14c844840;
    plVar2 = (longlong *)*puVar3;
    if (plVar2 != DAT_14c844840) {
      *puVar3 = DAT_14c844840;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(param_1 + 0xd0) = DAT_14c844848;
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  }
  else {
    cVar6 = FUN_144722c14(puVar3,&DAT_14c844840,0);
    if (cVar6 == '\0') goto LAB_1442a0136;
  }
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
  puVar3 = (undefined8 *)(param_1 + 0xe0);
  if (*(int *)(param_1 + 0xf0) == 0) {
LAB_1442a01be:
    plVar4 = DAT_14c844840;
    plVar2 = (longlong *)*puVar3;
    if (plVar2 != DAT_14c844840) {
      *puVar3 = DAT_14c844840;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(param_1 + 0xe8) = DAT_14c844848;
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
  }
  else {
    cVar6 = FUN_144722c14(puVar3,&DAT_14c844840,0);
    if (cVar6 == '\0') goto LAB_1442a01be;
  }
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
  puVar3 = (undefined8 *)(param_1 + 0xf8);
  if (*(int *)(param_1 + 0x108) == 0) {
LAB_1442a0246:
    plVar4 = DAT_14c844840;
    plVar2 = (longlong *)*puVar3;
    if (plVar2 != DAT_14c844840) {
      *puVar3 = DAT_14c844840;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(param_1 + 0x100) = DAT_14c844848;
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
  }
  else {
    cVar6 = FUN_144722c14(puVar3,&DAT_14c844840,0);
    if (cVar6 == '\0') goto LAB_1442a0246;
  }
  iVar7 = *(int *)(param_1 + 0x114);
  if ((*(char *)(param_1 + 0x110) == '\0') || (bVar8 = iVar7 == 0, iVar7 = 0, bVar8)) {
    *(undefined1 *)(param_1 + 0x110) = 1;
    *(int *)(param_1 + 0x114) = iVar7 + 1;
  }
  iVar7 = *(int *)(param_1 + 0x11c);
  if ((*(char *)(param_1 + 0x118) != '\0') || (bVar8 = iVar7 == 0, iVar7 = 0, bVar8)) {
    *(undefined1 *)(param_1 + 0x118) = 0;
    *(int *)(param_1 + 0x11c) = iVar7 + 1;
  }
  iVar7 = *(int *)(param_1 + 0x124);
  if ((*(char *)(param_1 + 0x120) != '\0') || (bVar8 = iVar7 == 0, iVar7 = 0, bVar8)) {
    *(undefined1 *)(param_1 + 0x120) = 0;
    *(int *)(param_1 + 0x124) = iVar7 + 1;
  }
  iVar7 = *(int *)(param_1 + 300);
  if ((*(char *)(param_1 + 0x128) != '\0') || (bVar8 = iVar7 == 0, iVar7 = 0, bVar8)) {
    *(undefined1 *)(param_1 + 0x128) = 0;
    *(int *)(param_1 + 300) = iVar7 + 1;
  }
  iVar7 = *(int *)(param_1 + 0x134);
  if ((*(char *)(param_1 + 0x130) != '\0') || (bVar8 = iVar7 == 0, iVar7 = 0, bVar8)) {
    *(undefined1 *)(param_1 + 0x130) = 0;
    *(int *)(param_1 + 0x134) = iVar7 + 1;
  }
  iVar7 = *(int *)(param_1 + 0x13c);
  if ((*(char *)(param_1 + 0x138) != '\0') || (bVar8 = iVar7 == 0, iVar7 = 0, bVar8)) {
    *(undefined1 *)(param_1 + 0x138) = 0;
    *(int *)(param_1 + 0x13c) = iVar7 + 1;
  }
  iVar7 = *(int *)(param_1 + 0x144);
  if ((*(char *)(param_1 + 0x140) != '\0') || (bVar8 = iVar7 == 0, iVar7 = 0, bVar8)) {
    *(undefined1 *)(param_1 + 0x140) = 0;
    *(int *)(param_1 + 0x144) = iVar7 + 1;
  }
  FUN_1410d3d66(*(undefined8 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x150));
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(int *)(param_1 + 0x154) != 0) {
    FUN_1457fd642(param_1 + 0x148,0);
  }
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = (longlong *)0x0;
  lStack_40 = 0;
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_28 = 0;
  FUN_14611f19a(param_1 + 0x160,local_98);
  if (lStack_40 != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_58 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_98[3] != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  iVar7 = *(int *)(param_1 + 0x1dc);
  if (*(char *)(param_1 + 0x1d8) == '\0') {
    if (iVar7 == 0) {
      iVar7 = 0;
      goto LAB_1442a046a;
    }
  }
  else {
LAB_1442a046a:
    *(undefined1 *)(param_1 + 0x1d8) = 0;
    *(int *)(param_1 + 0x1dc) = iVar7 + 1;
  }
  iVar7 = *(int *)(param_1 + 0x1e4);
  if (*(char *)(param_1 + 0x1e0) == '\0') {
    if (iVar7 == 0) {
      iVar7 = 0;
      goto LAB_1442a0492;
    }
  }
  else {
LAB_1442a0492:
    *(undefined1 *)(param_1 + 0x1e0) = 0;
    *(int *)(param_1 + 0x1e4) = iVar7 + 1;
  }
  iVar7 = *(int *)(param_1 + 0x1ec);
  if (*(char *)(param_1 + 0x1e8) == '\0') {
    if (iVar7 == 0) {
      iVar7 = 0;
      goto LAB_1442a04ba;
    }
  }
  else {
LAB_1442a04ba:
    *(undefined1 *)(param_1 + 0x1e8) = 0;
    *(int *)(param_1 + 0x1ec) = iVar7 + 1;
  }
  iVar7 = *(int *)(param_1 + 500);
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    if (iVar7 == 0) {
      iVar7 = 0;
      goto LAB_1442a04e2;
    }
  }
  else {
LAB_1442a04e2:
    *(undefined1 *)(param_1 + 0x1f0) = 0;
    *(int *)(param_1 + 500) = iVar7 + 1;
  }
  iVar7 = *(int *)(param_1 + 0x1fc);
  if (*(char *)(param_1 + 0x1f8) == '\0') {
LAB_1442a0510:
    *(undefined1 *)(param_1 + 0x1f8) = 1;
    *(int *)(param_1 + 0x1fc) = iVar7 + 1;
  }
  else if (iVar7 == 0) {
    iVar7 = 0;
    goto LAB_1442a0510;
  }
  iVar7 = *(int *)(param_1 + 0x204);
  if (*(char *)(param_1 + 0x200) == '\0') {
    if (iVar7 == 0) {
      iVar7 = 0;
      goto LAB_1442a052e;
    }
  }
  else {
LAB_1442a052e:
    *(undefined1 *)(param_1 + 0x200) = 0;
    *(int *)(param_1 + 0x204) = iVar7 + 1;
  }
  iVar7 = *(int *)(param_1 + 0x220);
  if (*(longlong *)(param_1 + 0x218) == 0) {
    if (iVar7 == 0) {
      iVar7 = 0;
      goto LAB_1442a0557;
    }
  }
  else {
LAB_1442a0557:
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(int *)(param_1 + 0x220) = iVar7 + 1;
  }
  FUN_14130d958(param_1 + 0x228,&DAT_14c9485f0);
  FUN_14130d958(param_1 + 600,&DAT_14c9485f0);
  iVar7 = *(int *)(param_1 + 0x28c);
  if (*(char *)(param_1 + 0x288) == '\0') {
    if (iVar7 == 0) {
      iVar7 = 0;
      goto LAB_1442a05a8;
    }
  }
  else {
LAB_1442a05a8:
    *(undefined1 *)(param_1 + 0x288) = 0;
    *(int *)(param_1 + 0x28c) = iVar7 + 1;
  }
  if (*(char *)(param_1 + 0x290) == '\0') {
    if (*(int *)(param_1 + 0x294) == 0) {
      iVar7 = 1;
      goto LAB_1442a05d2;
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 0x294) + 1;
LAB_1442a05d2:
    *(undefined1 *)(param_1 + 0x290) = 0;
    *(int *)(param_1 + 0x294) = iVar7;
  }
  if (*(char *)(param_1 + 0x298) == '\0') {
    if (*(int *)(param_1 + 0x29c) == 0) {
      iVar7 = 1;
      goto LAB_1442a05fa;
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 0x29c) + 1;
LAB_1442a05fa:
    *(undefined1 *)(param_1 + 0x298) = 0;
    *(int *)(param_1 + 0x29c) = iVar7;
  }
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
  puVar3 = (undefined8 *)(param_1 + 0x2a0);
  if (*(int *)(param_1 + 0x2b0) == 0) {
LAB_1442a065c:
    plVar4 = DAT_14c844840;
    plVar2 = (longlong *)*puVar3;
    if (plVar2 != DAT_14c844840) {
      *puVar3 = DAT_14c844840;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(param_1 + 0x2a8) = DAT_14c844848;
    *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2b0) + 1;
  }
  else {
    cVar6 = FUN_144722c14(puVar3,&DAT_14c844840,0);
    if (cVar6 == '\0') goto LAB_1442a065c;
  }
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
  puVar3 = (undefined8 *)(param_1 + 0x2b8);
  if (*(int *)(param_1 + 0x2c8) == 0) {
LAB_1442a06e4:
    plVar4 = DAT_14c844840;
    plVar2 = (longlong *)*puVar3;
    if (plVar2 != DAT_14c844840) {
      *puVar3 = DAT_14c844840;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(param_1 + 0x2c0) = DAT_14c844848;
    *(int *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 1;
  }
  else {
    cVar6 = FUN_144722c14(puVar3,&DAT_14c844840,0);
    if (cVar6 == '\0') goto LAB_1442a06e4;
  }
  if (*(longlong *)(param_1 + 0x2d0) == 0) {
    if (*(int *)(param_1 + 0x2d8) == 0) {
      iVar7 = 1;
      goto LAB_1442a0733;
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 0x2d8) + 1;
LAB_1442a0733:
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(int *)(param_1 + 0x2d8) = iVar7;
  }
  if (*(longlong *)(param_1 + 0x2e0) == 0) {
    if (*(int *)(param_1 + 0x2e8) != 0) goto LAB_1442a077b;
    iVar7 = 1;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x2e8) + 1;
  }
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(int *)(param_1 + 0x2e8) = iVar7;
LAB_1442a077b:
  FUN_140bad112(param_1 + 0x2f0,&DAT_149dfb77a);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a0bde FUN_1442a0bde body=541 status=ok
// SIG undefined FUN_1442a0bde(void)

void FUN_1442a0bde(longlong *param_1,int param_2)

{
  longlong *plVar1;
  PSRWLOCK SRWLock;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
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
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1402815f4(param_1,&local_50);
  lVar4 = *(longlong *)(local_50 + 0x3e0);
  SRWLock = (PSRWLOCK)(lVar4 + 0xc0);
  AcquireSRWLockExclusive(SRWLock);
  piVar2 = (int *)(lVar4 + 0xb8);
  *piVar2 = *piVar2 + 1;
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
  lVar4 = FUN_1400f3ad8((longlong)param_1 + 0x44);
  if (lVar4 != 0) {
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
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
      iVar3 = FUN_140d182cc(uVar5);
      if (iVar3 != param_2) {
        FUN_1405c673d();
        uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
        iVar3 = FUN_148d1c5e7(uVar5);
        if (param_2 <= iVar3) {
          lVar4 = FUN_1408bb964((longlong)param_1 + 0x44);
          if (lVar4 != 0) {
            lVar6 = FUN_1403ca142();
            if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
              lVar6 = param_1[0x18];
              *(undefined1 *)(param_1 + 0x18) = 1;
              FUN_148d30a8e(lVar4,param_2,0);
              *(char *)(param_1 + 0x18) = (char)lVar6;
            }
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001442a0cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive(SRWLock);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a0dfc FUN_1442a0dfc body=950 status=ok
// SIG undefined FUN_1442a0dfc(void)

void FUN_1442a0dfc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  longlong *local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x1c0) == 0) goto LAB_1442a0e2a;
  FUN_1402815f4(param_1,&local_78);
  puVar3 = (undefined8 *)local_78[0x7e];
  AcquireSRWLockExclusive((PSRWLOCK)(puVar3 + 6));
  plVar7 = plStack_70;
  *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  iVar6 = *(int *)((longlong)puVar3 + 0xc);
  FUN_145ae2139(*puVar3,*(undefined4 *)(puVar3 + 1));
  *(undefined4 *)(puVar3 + 1) = 0;
  if ((iVar6 < 0) && (*(int *)((longlong)puVar3 + 0xc) != 0)) {
    FUN_148e63a50(puVar3,0);
  }
  *(int *)(puVar3 + 2) = *(int *)(puVar3 + 2) + 1;
  lVar11 = *(longlong *)(param_1 + 0x1c0);
  if (*(int *)(lVar11 + 0x38) == *(int *)(puVar3 + 4)) {
    if (*(int *)((longlong)puVar3 + 0x24) == 0) {
      iVar6 = 1;
      goto LAB_1442a0eee;
    }
  }
  else {
    iVar6 = *(int *)((longlong)puVar3 + 0x24) + 1;
LAB_1442a0eee:
    *(int *)(puVar3 + 4) = *(int *)(lVar11 + 0x38);
    *(int *)((longlong)puVar3 + 0x24) = iVar6;
    lVar11 = *(longlong *)(param_1 + 0x1c0);
  }
  if (*(longlong *)(lVar11 + 0x28) == 0) {
    bVar13 = false;
  }
  else {
    bVar13 = *(int *)(*(longlong *)(lVar11 + 0x28) + 0x18) == 1;
  }
  if ((bool)*(char *)(puVar3 + 3) == bVar13) {
    if (*(int *)((longlong)puVar3 + 0x1c) == 0) {
      iVar6 = 1;
      goto LAB_1442a0f24;
    }
  }
  else {
    iVar6 = *(int *)((longlong)puVar3 + 0x1c) + 1;
LAB_1442a0f24:
    *(bool *)(puVar3 + 3) = bVar13;
    *(int *)((longlong)puVar3 + 0x1c) = iVar6;
  }
  if (bVar13 == false) {
    plVar7 = (longlong *)FUN_148aaeaf0(*(undefined8 *)(param_1 + 0x1c0));
    lVar11 = plVar7[1];
    if (0 < (int)lVar11) {
      *(int *)(puVar3 + 2) = *(int *)(puVar3 + 2) + 1;
      if (*(int *)((longlong)puVar3 + 0xc) < (int)lVar11) {
        FUN_148e63a50(puVar3);
      }
      if ((longlong)(int)plVar7[1] != 0) {
        lVar11 = *plVar7;
        lVar12 = (longlong)(int)plVar7[1] * 0x120 + lVar11;
        do {
          *(int *)(puVar3 + 2) = *(int *)(puVar3 + 2) + 1;
          lVar8 = FUN_148e63ac0(puVar3);
          if (*(int *)(lVar11 + 0x68) != *(int *)(lVar11 + 0x94)) {
            uVar4 = (uint)((ulonglong)DAT_14cbd8898 >> 0x10);
            uVar10 = (uint)DAT_14cbd8898 & 0xffff;
            lVar9 = lVar11 + 0x98;
            if (*(longlong *)(lVar11 + 0xa0) != 0) {
              lVar9 = *(longlong *)(lVar11 + 0xa0);
            }
            iVar6 = *(int *)(lVar9 + (ulonglong)
                                     (*(int *)(lVar11 + 0xa8) - 1U &
                                     (int)((ulonglong)DAT_14cbd8898 >> 0x20) +
                                     ((uint)DAT_14cbd8898 << 0x10 | uVar10) +
                                     (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar10 >> 4)) * 4);
            if (iVar6 != -1) {
              do {
                if (*(longlong *)(*(longlong *)(lVar11 + 0x60) + (longlong)iVar6 * 0x38) ==
                    DAT_14cbd8898) {
                  local_78 = (longlong *)0x0;
                  plStack_70 = (longlong *)0x0;
                  FUN_145e34e2c(lVar11 + 0x28,DAT_14cbd8898,&local_78);
                  FUN_144a2b0a4(&local_78,local_88);
                  FUN_140775538(lVar8 + 0x48,local_88);
                  if (local_88[0] != 0) {
                    FUN_1400020a8();
                  }
                  if (local_78 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                  break;
                }
                iVar6 = *(int *)((longlong)iVar6 * 0x38 + *(longlong *)(lVar11 + 0x60) + 0x30);
              } while (iVar6 != -1);
            }
          }
          FUN_140009b9a(&local_78,lVar11 + 0x18);
          if ((*(int *)(lVar8 + 0x10) == 0) ||
             (cVar5 = FUN_144722c14(lVar8,&local_78,0), cVar5 == '\0')) {
            FUN_140008f88(lVar8,&local_78);
            *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
          }
          if (local_78 != (longlong *)0x0) {
            (**(code **)(*local_78 + 0x10))();
          }
          iVar6 = *(int *)(lVar11 + 0x30);
          if ((iVar6 != *(int *)(lVar8 + 0x28)) || (*(int *)(lVar8 + 0x2c) == 0)) {
            *(int *)(lVar8 + 0x28) = iVar6;
            *(int *)(lVar8 + 0x2c) = *(int *)(lVar8 + 0x2c) + 1;
          }
          iVar6 = iVar6 - *(int *)(lVar11 + 0x114);
          if ((iVar6 != *(int *)(lVar8 + 0x20)) || (*(int *)(lVar8 + 0x24) == 0)) {
            *(int *)(lVar8 + 0x20) = iVar6;
            *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
          }
          if ((*(int *)(lVar11 + 0x118) != *(int *)(lVar8 + 0x18)) || (*(int *)(lVar8 + 0x1c) == 0))
          {
            *(int *)(lVar8 + 0x18) = *(int *)(lVar11 + 0x118);
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          }
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          plVar7 = (longlong *)
                   (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"eg.MockLanSearchResults");
          if ((plVar7 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar7 + 0xa8))(plVar7), cVar5 == '\0')) {
            FUN_141551f14(lVar11,&local_78);
            FUN_140775538(lVar8 + 0x30,&local_78);
            if (local_78 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            FUN_1449a0272(lVar8 + 0x30,&DAT_14cbd88c8);
          }
          lVar11 = lVar11 + 0x120;
        } while (lVar11 != lVar12);
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(puVar3 + 6));
LAB_1442a0e2a:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442a11c4 FUN_1442a11c4 body=211 status=ok
// SIG undefined FUN_1442a11c4(void)

void FUN_1442a11c4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  plVar3 = *(longlong **)(local_38 + 0x3a0);
  AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 3));
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)();
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
  }
  if (param_2 == 0) {
    if (*plVar3 == 0) {
      if ((int)plVar3[1] != 0) goto LAB_1442a1263;
      iVar4 = 1;
    }
    else {
      iVar4 = (int)plVar3[1] + 1;
    }
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_2 + 0x48);
    if (lVar5 == *plVar3) {
      if ((int)plVar3[1] != 0) goto LAB_1442a1263;
      iVar4 = 1;
    }
    else {
      iVar4 = (int)plVar3[1] + 1;
    }
  }
  *plVar3 = lVar5;
  *(int *)(plVar3 + 1) = iVar4;
LAB_1442a1263:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001442a1280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 3));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a129e FUN_1442a129e body=49 status=ok
// SIG undefined FUN_1442a129e(void)

void FUN_1442a129e(longlong param_1)

{
  FUN_1449db8d8(param_1 + 0x38);
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0001442a12cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x38))(param_1 + 0x30);
  return;
}



// FUNCTION 1442a12d4 FUN_1442a12d4 body=254 status=ok
// SIG undefined FUN_1442a12d4(void)

void FUN_1442a12d4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + -0x30;
  (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(lVar1);
  lVar2 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(lVar1);
  if (lVar2 != 0) {
    lVar2 = FUN_1400f6e0c(lVar2);
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0xb8), lVar2 != 0)) {
      local_40 = FUN_1458b9b6e;
      local_38 = 0;
      FUN_145adee8c(lVar2 + 0x38,local_30,lVar1,&local_40);
      local_40 = FUN_1412da07a;
      local_38 = 0;
      FUN_145adf08a(lVar2 + 0x88,local_30,lVar1,&local_40);
    }
  }
  lVar2 = FUN_1415b2342();
  if (lVar2 != 0) {
    local_40 = FUN_14049b6ec;
    local_38 = 0;
    FUN_1459e0026(lVar2,local_30,lVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a13d4 FUN_1442a13d4 body=108 status=ok
// SIG undefined FUN_1442a13d4(void)

void FUN_1442a13d4(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = param_1 + -0x30;
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(lVar3);
  if (lVar1 != 0) {
    lVar1 = FUN_1400f6e0c(lVar1);
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0xb8), lVar1 != 0)) {
      FUN_140457ffc(lVar1 + 0x38,lVar3);
      FUN_140457ffc(lVar1 + 0x88,lVar3);
    }
  }
  uVar2 = FUN_1415b2342();
  FUN_140457ffc(uVar2,lVar3);
  return;
}



// FUNCTION 1442a1440 FUN_1442a1440 body=288 status=ok
// SIG undefined FUN_1442a1440(void)

bool FUN_1442a1440(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = FUN_1400d7050();
    if (lVar1 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_30 = &local_18;
        local_18 = FUN_141030f22;
        local_20 = FUN_14081d0ea;
        local_28 = &LAB_1459f2e4c;
        local_38 = &LAB_148c39de3;
        local_40 = &LAB_1457a9eb2;
        local_48 = &DAT_149e063b2;
        local_50 = 0;
        local_58 = 0x10000004;
        local_60 = 0x10;
        local_68 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
        lVar1 = FUN_1458fcdae(lVar1);
        bVar2 = lVar1 != 0;
        goto LAB_1442a1493;
      }
    }
  }
  bVar2 = false;
LAB_1442a1493:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a1562 FUN_1442a1562 body=719 status=ok
// SIG undefined FUN_1442a1562(void)

void FUN_1442a1562(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
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
  undefined1 local_48 [8];
  code *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = FUN_1400d7050();
  if (lVar3 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_60 = &local_40;
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
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (lVar3 = FUN_1458fcdae(lVar3), lVar3 != 0)) {
      local_40 = (code *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      pcVar2 = local_40;
      local_38 = 3;
      *(undefined ***)local_40 = &PTR_LAB_14b99ef90;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      *(longlong *)(local_40 + 0x10) = lVar4;
      *(undefined ***)local_40 = &PTR_FUN_14b9b8b50;
      *(undefined8 *)(local_40 + 0x18) = 0;
      iVar5 = 0;
      if (param_1 != 0x30) {
        uVar1 = *(uint *)(param_1 + -0x24);
        *(uint *)(local_40 + 0x18) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        iVar5 = *(int *)(lVar7 + 0x10);
        if (*(int *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar6 = DAT_14c964868 + 1;
          bVar8 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar8) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar6);
          }
          LOCK();
          iVar5 = *(int *)(lVar7 + 0x10);
          bVar8 = iVar5 == 0;
          if (bVar8) {
            *(int *)(lVar7 + 0x10) = iVar6;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar8) {
            iVar5 = iVar6;
          }
        }
      }
      *(int *)(pcVar2 + 0x1c) = iVar5;
      *(code **)(pcVar2 + 0x20) = FUN_1442a1832;
      *(undefined4 *)(pcVar2 + 0x28) = 0;
      FUN_1458fcf9e(lVar3 + 0x110,local_48,&local_40);
      if (local_38 != 0) {
        if (local_40 == (code *)0x0) goto LAB_1442a15bd;
        (*(code *)**(undefined8 **)local_40)(local_40,0);
        FUN_1446efa72(&local_40,0,0,0x10);
        local_38 = 0;
      }
      if (local_40 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1442a15bd:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442a1832 FUN_1442a1832 body=524 status=ok
// SIG undefined FUN_1442a1832(void)

void FUN_1442a1832(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
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
  if (*(longlong *)(param_2 + 0x128) != DAT_14cbd88f0) goto LAB_1442a197b;
  FUN_1449027d0(param_1,&local_40);
  piVar3 = *(int **)(local_40 + 400);
  AcquireSRWLockExclusive((PSRWLOCK)(piVar3 + 8));
  piVar3[7] = piVar3[7] + 1;
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
  lVar5 = FUN_1400d7050(param_1 + 0x30);
  if (lVar5 != 0) {
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
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      uVar6 = FUN_1447210f0(lVar5);
      iVar4 = FUN_144120955(uVar6);
      if (iVar4 == *piVar3) {
        if (piVar3[1] == 0) {
          iVar7 = 1;
          goto LAB_1442a1922;
        }
      }
      else {
        iVar7 = piVar3[1] + 1;
LAB_1442a1922:
        *piVar3 = iVar4;
        piVar3[1] = iVar7;
      }
      uVar6 = FUN_1447210f0(lVar5);
      iVar4 = FUN_144120955(uVar6);
      if (iVar4 == piVar3[2]) {
        if (piVar3[3] != 0) goto LAB_1442a1958;
        iVar7 = 1;
      }
      else {
        iVar7 = piVar3[3] + 1;
      }
      piVar3[2] = iVar4;
      piVar3[3] = iVar7;
    }
  }
LAB_1442a1958:
  lVar5 = FUN_1406d51c0();
  *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(lVar5 + 0x2cc);
  piVar3[6] = *(int *)(lVar5 + 0x2d4);
  ReleaseSRWLockExclusive((PSRWLOCK)(piVar3 + 8));
LAB_1442a197b:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a1a40 FUN_1442a1a40 body=318 status=ok
// SIG undefined FUN_1442a1a40(void)

void FUN_1442a1a40(void)

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
  lVar1 = FUN_1400d7050();
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
      lVar1 = FUN_1458fcdae(lVar1);
      if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a1b94 FUN_1442a1b94 body=21 status=ok
// SIG undefined FUN_1442a1b94(void)

void FUN_1442a1b94(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140495e96();
  FUN_1404960a8(uVar1);
  return;
}



// FUNCTION 1442a1baa FUN_1442a1baa body=21 status=ok
// SIG undefined FUN_1442a1baa(void)

void FUN_1442a1baa(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140495e96();
  FUN_1404960a8(uVar1);
  return;
}



// FUNCTION 1442a1bc0 FUN_1442a1bc0 body=327 status=ok
// SIG undefined FUN_1442a1bc0(void)

bool FUN_1442a1bc0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
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
  lVar1 = FUN_1400d7050();
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
      lVar2 = FUN_140e06fb1(lVar1);
      if (lVar2 != 0) {
        uVar3 = FUN_1447210f0(lVar1);
        bVar4 = false;
        lVar1 = FUN_140149a73(uVar3,0);
        if (lVar1 != 0) {
          bVar4 = *(int *)(param_1 + 0x14) != 0;
        }
        goto LAB_1442a1c14;
      }
    }
  }
  bVar4 = false;
LAB_1442a1c14:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a1d08 FUN_1442a1d08 body=1652 status=ok
// SIG undefined FUN_1442a1d08(void)

void FUN_1442a1d08(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined2 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  uint *local_130;
  undefined1 *local_128;
  code *local_120;
  undefined1 local_114 [12];
  undefined8 local_108;
  char local_100 [4];
  undefined8 local_fc;
  int local_f4;
  undefined1 local_ec [12];
  uint local_e0;
  undefined4 uStack_dc;
  int local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined2 local_4f;
  undefined1 local_4d;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar5 = FUN_1400d7050();
  if (lVar5 == 0) goto LAB_1442a1d75;
  if (DAT_14cbadd90 == 0) {
    local_130 = &local_e0;
    local_e0 = 0x41030f22;
    uStack_dc = 1;
    local_120 = FUN_14081d0ea;
    local_128 = &LAB_1459f2e4c;
    local_138 = &LAB_148c39de3;
    local_140 = &LAB_1457a9eb2;
    local_148 = &DAT_149e063b2;
    local_150 = 0;
    local_158 = 0x10000004;
    local_160 = 0x10;
    local_168 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if (((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
     (lVar6 = FUN_140e06fb1(lVar5), lVar6 == 0)) goto LAB_1442a1d75;
  lVar1 = param_1 + -0x30;
  local_e0 = 0;
  uStack_dc = 0;
  local_d8 = 0;
  FUN_1446efa72(&local_e0,0,3,0x10);
  local_d8 = 3;
  puVar10 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
  *puVar10 = &PTR_LAB_14b417790;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar12 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar12 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar12;
  puVar10[2] = lVar9;
  *puVar10 = &PTR_FUN_14b9b8bc0;
  puVar10[3] = 0;
  iVar11 = 0;
  if (lVar1 != 0) {
    uVar3 = *(uint *)(param_1 + -0x24);
    *(uint *)(puVar10 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar11 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar11 = *(int *)(lVar12 + 0x10);
      bVar14 = iVar11 == 0;
      if (bVar14) {
        *(int *)(lVar12 + 0x10) = iVar13;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar11 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar10 + 0x1c) = iVar11;
  puVar10[4] = FUN_1442a237e;
  *(undefined4 *)(puVar10 + 5) = 0;
  FUN_14598d416(lVar6 + 0x78,local_100,&local_e0);
  if (local_d8 == 0) {
LAB_1442a1ed9:
    if (CONCAT44(uStack_dc,local_e0) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar10 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10,0);
      FUN_1446efa72(&local_e0,0,0,0x10);
      local_d8 = 0;
      goto LAB_1442a1ed9;
    }
  }
  plVar2 = (longlong *)(param_1 + 0x38);
  if (((*(int *)(param_1 + 0x40) == 0) || ((longlong *)*plVar2 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*(longlong *)*plVar2 + 0x30))(), cVar4 == '\0')) {
    local_e0 = 0;
    uStack_dc = 0;
    local_d8 = 0;
    FUN_1446efa72(&local_e0,0,3,0x10);
    local_d8 = 3;
    puVar10 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
    *puVar10 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar10[2] = lVar12;
    *puVar10 = &PTR_FUN_14b9b8c30;
    puVar10[3] = 0;
    iVar11 = 0;
    if (lVar1 != 0) {
      uVar3 = *(uint *)(param_1 + -0x24);
      *(uint *)(puVar10 + 3) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar11 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
        }
        LOCK();
        iVar11 = *(int *)(lVar6 + 0x10);
        bVar14 = iVar11 == 0;
        if (bVar14) {
          *(int *)(lVar6 + 0x10) = iVar13;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar11 = iVar13;
        }
      }
    }
    iVar13 = local_d8;
    *(int *)((longlong)puVar10 + 0x1c) = iVar11;
    puVar10[4] = FUN_1442a2f4e;
    *(undefined4 *)(puVar10 + 5) = 0;
    uVar7 = CONCAT44(uStack_dc,local_e0);
    local_e0 = 0;
    uStack_dc = 0;
    local_d8 = 0;
    if (*(int *)(param_1 + 0x40) == 0) {
LAB_1442a2005:
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar10 = (undefined8 *)*plVar2;
      if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,0);
        FUN_1446efa72(plVar2,0,0,0x10);
        *(undefined4 *)(param_1 + 0x40) = 0;
        goto LAB_1442a2005;
      }
    }
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    *(int *)(param_1 + 0x40) = iVar13;
    puVar10 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
    if (local_d8 != 0) {
      if (puVar10 == (undefined8 *)0x0) goto LAB_1442a2064;
      (**(code **)*puVar10)(puVar10,0);
      FUN_1446efa72(&local_e0,0,0,0x10);
      local_d8 = 0;
      puVar10 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
    }
    if (puVar10 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1442a2064:
  uVar7 = FUN_1447210f0(lVar5);
  lVar5 = FUN_140149a73(uVar7,0);
  if ((lVar5 == 0) || (plVar8 = (longlong *)FUN_1403a0144(lVar5), plVar8 == (longlong *)0x0))
  goto LAB_1442a1d75;
  local_e0 = local_e0 & 0xffffff00;
  uStack_dc = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  local_bc = 0;
  local_b0 = 0xc69c4000;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_4f = 1;
  local_4d = 0;
  local_4c = 0;
  FUN_1401aa3da((longlong)&uStack_c4 + 4,plVar2);
  FUN_1401533ba(local_ec,&DAT_14cbd8900,1);
  (**(code **)(*plVar8 + 0x10))(plVar8,local_100,local_ec,&local_e0);
  FUN_1401533ba(local_114,&DAT_14cbd8900,1);
  (**(code **)(*plVar8 + 0x28))(plVar8,&local_108,local_114);
  local_100[0] = '\0';
  local_fc = 0;
  local_f4 = 0;
  FUN_144976b9c(local_100,local_108);
  if (local_100[0] == '\x01') {
    if (local_f4 != 0) {
LAB_1442a2189:
      FUN_1442a2f86(lVar1);
    }
  }
  else {
    cVar4 = FUN_140321d1a(local_100);
    if (cVar4 != '\0') goto LAB_1442a2189;
  }
  FUN_1409838b8(&local_e0);
LAB_1442a1d75:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442a237e FUN_1442a237e body=2939 status=ok
// SIG undefined FUN_1442a237e(void)

void FUN_1442a237e(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  void *_Src;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  bool bVar17;
  uint uVar18;
  float fVar19;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined2 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined8 *local_160;
  undefined1 *local_158;
  code *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  void *pvStack_100;
  ulonglong local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  int local_d0;
  longlong local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (((int)param_1[9] != 0) &&
     (((int)*param_2 != (int)param_1[9] || ((int)param_2[1] != (int)param_1[10])))) {
LAB_1442a24bb:
    if ((local_b0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar8 = param_4[1];
  if ((longlong)(int)lVar8 != 0) {
    plVar14 = param_1 + 9;
    lVar9 = *param_4;
    lVar15 = 0;
    do {
      lVar3 = *(longlong *)(lVar9 + lVar15);
      uVar7 = FUN_1459a9868();
      bVar4 = FUN_1448093f4(lVar3,uVar7);
      if (((lVar3 != 0 & bVar4) == 1) && (*(longlong *)(lVar3 + 0x44) == DAT_14cbd88f8)) {
        if ((param_1[0xb] != 0) && ((param_1[0xc] != 0 && (0 < *(int *)(param_1[0xc] + 8)))))
        goto LAB_1442a24bb;
        plVar11 = param_1 + 6;
        lVar8 = FUN_140495e96(plVar11);
        if (lVar8 == 0) goto LAB_1442a2594;
        FUN_1442aa94c(&local_d8,lVar8,&DAT_14cbd9758);
        if (((((local_d8._4_4_ == 0) || ((int)(uint)local_d8 < 0)) ||
             (DAT_14c9647dc <= (int)(uint)local_d8)) ||
            ((plVar13 = (longlong *)
                        ((ulonglong)(((uint)local_d8 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_d8 >> 0x10) * 8)),
             plVar13 == (longlong *)0x0 || ((int)plVar13[2] != local_d8._4_4_)))) ||
           (((*(uint *)(plVar13 + 1) & 0x10200000) != 0 || (lVar8 = *plVar13, lVar8 == 0))))
        goto LAB_1442a2594;
        FUN_144337054(lVar8);
        fVar19 = (float)FUN_143df31fa(lVar3,0);
        if ((*(float *)(lVar8 + 0x70) != fVar19) || (NAN(*(float *)(lVar8 + 0x70)) || NAN(fVar19)))
        {
          *(float *)(lVar8 + 0x70) = fVar19;
          local_d0 = DAT_14cbb6298;
          local_d8 = DAT_14cbb6290;
          (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x38))(lVar8 + 0x28);
        }
        fVar19 = *(float *)(lVar3 + 0x50) - *(float *)(lVar3 + 0x4c);
        local_148 = plVar14;
        local_140 = plVar11;
        if ((*(float *)(lVar8 + 0x74) != fVar19) || (NAN(*(float *)(lVar8 + 0x74)) || NAN(fVar19)))
        {
          *(float *)(lVar8 + 0x74) = fVar19;
          local_d0 = DAT_14cbb62a8;
          local_d8 = DAT_14cbb62a0;
          (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x38))(lVar8 + 0x28);
        }
        if ((longlong)*(int *)(lVar3 + 0xa8) == 0) goto LAB_1442a2669;
        local_130 = *(longlong *)(lVar3 + 0xa0);
        local_138 = (longlong)*(int *)(lVar3 + 0xa8) * 0x14;
        lVar9 = 0;
        goto LAB_1442a2795;
      }
      lVar15 = lVar15 + 0x10;
    } while ((longlong)(int)lVar8 * 0x10 != lVar15);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_1b8);
  while( true ) {
    uVar18 = -(uint)(0.0 < fVar2);
    fVar19 = 1.0 - fVar19 / (float)(~uVar18 & 0x38d1b717 | (uint)fVar2 & uVar18);
    if (1.0 <= fVar19) {
      fVar19 = 1.0;
    }
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    local_120 = *(undefined4 *)(puVar10 + 1);
    local_128 = *puVar10;
    local_198 = &local_118;
    FUN_144336e24(lVar8,&local_128,*(float *)(lVar8 + 0x74) - *(float *)((longlong)puVar10 + 0xc),
                  fVar19);
    lVar9 = lVar9 + 0x14;
    if (local_138 == lVar9) break;
LAB_1442a2795:
    lVar15 = DAT_14cb8d378;
    puVar10 = (undefined8 *)(local_130 + lVar9);
    fVar19 = *(float *)(local_130 + 0xc + lVar9);
    fVar2 = *(float *)(lVar8 + 0x74);
    if (DAT_14cb8d378 == 0) {
LAB_1442a2814:
      local_108 = 0;
      pvStack_100 = (void *)0x0;
      local_118 = 0;
      uStack_110 = 0;
      local_f8 = 0;
    }
    else {
      local_e8 = *puVar10;
      local_e0 = *(undefined4 *)(puVar10 + 1);
      FUN_1448075d0(&local_d8,&local_e8);
      lVar15 = FUN_144837462(lVar15,&local_d8);
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
      if (lVar15 == 0) goto LAB_1442a2814;
      uVar7 = FUN_14656b5e0();
      cVar5 = FUN_1448093f4(lVar15,uVar7);
      if (cVar5 == '\0') goto LAB_1442a2814;
      local_118 = *(undefined8 *)(lVar15 + 0x18);
      uStack_110 = *(undefined8 *)(lVar15 + 0x20);
      local_108 = *(undefined8 *)(lVar15 + 0x28);
      pvStack_100 = (void *)0x0;
      uVar18 = *(uint *)(lVar15 + 0x38);
      _Src = *(void **)(lVar15 + 0x30);
      local_f8 = CONCAT44(local_f8._4_4_,uVar18);
      if ((longlong)(int)uVar18 == 0) {
        local_f8 = (ulonglong)uVar18;
      }
      else {
        FUN_1446dd670(&pvStack_100,uVar18,0);
        memcpy(pvStack_100,_Src,(longlong)(int)uVar18 * 2);
      }
    }
  }
LAB_1442a2669:
  FUN_1443367c4(lVar8);
  FUN_1442a37e2(lVar8,lVar3 + 0x90);
  lVar9 = FUN_1400d7050(local_140);
  if (lVar9 == 0) {
LAB_1442a26ca:
    uVar7 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_d8 = FUN_141030f22;
      local_150 = FUN_14081d0ea;
      local_158 = &LAB_1459f2e4c;
      local_160 = &local_d8;
      local_168 = &LAB_148c39de3;
      local_170 = &LAB_1457a9eb2;
      local_178 = &DAT_149e063b2;
      local_180 = 0;
      local_188 = 0x10000004;
      local_190 = 0x10;
      local_198 = (undefined8 *)CONCAT44(local_198._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1442a26ca;
    uVar7 = FUN_1447210f0(lVar9);
  }
  bVar4 = FUN_144120881(uVar7);
  if (*(byte *)(lVar8 + 0x90) != (bVar4 ^ 1)) {
    *(byte *)(lVar8 + 0x90) = bVar4 ^ 1;
    local_d0 = DAT_14cbb6328;
    local_d8 = DAT_14cbb6320;
    (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x38))(lVar8 + 0x28);
  }
  plVar14 = *(longlong **)(lVar3 + 0x10);
  if (plVar14 == (longlong *)0x0) {
LAB_1442a271c:
    param_1[0xb] = 0;
    plVar11 = (longlong *)param_1[0xc];
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        plVar14 = (longlong *)0x0;
        bVar17 = true;
LAB_1442a2744:
        (**(code **)(*plVar11 + 0x10))();
        param_1[0xc] = (longlong)plVar14;
        if (!bVar17) goto LAB_1442a29a4;
      }
      else {
        param_1[0xc] = 0;
      }
    }
  }
  else {
    iVar6 = (int)plVar14[1];
    do {
      if (iVar6 == 0) goto LAB_1442a271c;
      LOCK();
      iVar16 = (int)plVar14[1];
      bVar17 = iVar6 == iVar16;
      if (bVar17) {
        *(int *)(plVar14 + 1) = iVar6 + 1;
        iVar16 = iVar6;
      }
      iVar6 = iVar16;
      UNLOCK();
    } while (!bVar17);
    lVar8 = *(longlong *)(lVar3 + 8);
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    param_1[0xb] = lVar8;
    if ((longlong *)param_1[0xc] != plVar14) {
      LOCK();
      *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
      UNLOCK();
      plVar11 = (longlong *)param_1[0xc];
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          bVar17 = false;
          goto LAB_1442a2744;
        }
      }
      param_1[0xc] = (longlong)plVar14;
    }
LAB_1442a29a4:
    LOCK();
    plVar11 = plVar14 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    LOCK();
    plVar11 = plVar14 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  local_d8 = (code *)0x0;
  local_d0 = 0;
  FUN_1446efa72(&local_d8,0,3,0x10);
  puVar10 = (undefined8 *)local_d8;
  local_d0 = 3;
  *(undefined ***)local_d8 = &PTR_LAB_14b41d250;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)((longlong)local_d8 + 0x10) = lVar9;
  *(undefined ***)local_d8 = &PTR_FUN_14b9b8ca0;
  *(undefined8 *)((longlong)local_d8 + 0x18) = 0;
  iVar6 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar18 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)((longlong)local_d8 + 0x18) = uVar18;
    if ((int)uVar18 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar6 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar16 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar16);
      }
      LOCK();
      iVar6 = *(int *)(lVar8 + 0x10);
      bVar17 = iVar6 == 0;
      if (bVar17) {
        *(int *)(lVar8 + 0x10) = iVar16;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar6 = iVar16;
      }
    }
  }
  *(int *)((longlong)puVar10 + 0x1c) = iVar6;
  puVar10[4] = FUN_1442a3684;
  *(undefined4 *)(puVar10 + 5) = 0;
  FUN_145d42332(lVar3 + 0x60,&local_118,&local_d8);
  if (local_d0 == 0) {
LAB_1442a2b04:
    if (local_d8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = 0;
    goto LAB_1442a2b04;
  }
  local_d8 = (code *)0x0;
  local_d0 = 0;
  FUN_1446efa72(&local_d8,0,3,0x10);
  puVar10 = (undefined8 *)local_d8;
  local_d0 = 3;
  *(undefined ***)local_d8 = &PTR_LAB_14b41d250;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)((longlong)local_d8 + 0x10) = lVar9;
  *(undefined ***)local_d8 = &PTR_FUN_14b9b8ca0;
  *(undefined8 *)((longlong)local_d8 + 0x18) = 0;
  iVar6 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar18 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)((longlong)local_d8 + 0x18) = uVar18;
    if ((int)uVar18 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar6 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar16 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar16);
      }
      LOCK();
      iVar6 = *(int *)(lVar8 + 0x10);
      bVar17 = iVar6 == 0;
      if (bVar17) {
        *(int *)(lVar8 + 0x10) = iVar16;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar6 = iVar16;
      }
    }
  }
  *(int *)((longlong)puVar10 + 0x1c) = iVar6;
  puVar10[4] = FUN_1442a38d6;
  *(undefined4 *)(puVar10 + 5) = 0;
  FUN_145d42332(lVar3 + 0x78,&local_118,&local_d8);
  plVar14 = local_148;
  if (local_d0 == 0) {
LAB_1442a2c40:
    if (local_d8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = 0;
    goto LAB_1442a2c40;
  }
  local_d8 = (code *)0x0;
  lVar8 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((lVar8 == 0) || (*(longlong *)(lVar8 + 0x1f0) == 0)) || (lVar8 = FUN_145aa2e42(), lVar8 == 0)
     ) goto LAB_1442a2594;
  uVar7 = FUN_140495e96(local_140);
  FUN_145aa30f6(lVar8,&local_d8,uVar7);
  if ((((local_d8._4_4_ == 0) || ((int)(uint)local_d8 < 0)) ||
      ((DAT_14c9647dc <= (int)(uint)local_d8 ||
       ((lVar8 = (ulonglong)(((uint)local_d8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_d8 >> 0x10) * 8), lVar8 == 0
        || (*(int *)(lVar8 + 0x10) != local_d8._4_4_)))))) ||
     ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)) goto LAB_1442a2594;
  puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *(undefined1 *)(puVar10 + 1) = 0;
  *(undefined4 *)((longlong)puVar10 + 0xc) = 1;
  *puVar10 = &PTR_FUN_14b466578;
  puVar10[2] = DAT_14cbd96a8;
  if (puVar10 == (undefined8 *)0x0) goto LAB_1442a2594;
  if (local_d8._4_4_ == 0) {
LAB_1442a2e18:
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    if ((-1 < (int)(uint)local_d8) && ((int)(uint)local_d8 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)(((uint)local_d8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_d8 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(int *)(puVar12 + 2) != local_d8._4_4_ || ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))
         ) goto LAB_1442a2e18;
      uVar7 = *puVar12;
    }
  }
  FUN_1409ee7a4(uVar7,puVar10);
  plVar14 = local_148;
LAB_1442a2594:
  *(int *)(plVar14 + 1) = (int)param_2[1];
  *plVar14 = *param_2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_1b8);
}



// FUNCTION 1442a2f4e FUN_1442a2f4e body=55 status=ok
// SIG undefined FUN_1442a2f4e(void)

void FUN_1442a2f4e(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(int *)(param_2 + 0x44) == 0) {
      return;
    }
  }
  else {
    cVar1 = FUN_140321d1a(param_2 + 0x38);
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_1442a2f86(param_1);
  return;
}



// FUNCTION 1442a2f86 FUN_1442a2f86 body=279 status=ok
// SIG undefined FUN_1442a2f86(void)

void FUN_1442a2f86(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  uint local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1442a3480();
  lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_145aa2e42();
    if (lVar1 != 0) {
      uVar2 = FUN_140495e96(param_1 + 6);
      FUN_145aa30f6(lVar1,&local_20,uVar2);
      if (((local_1c != 0) && (-1 < (int)local_20)) && ((int)local_20 < DAT_14c9647dc)) {
        plVar4 = (longlong *)
                 ((ulonglong)((local_20 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_20 >> 0x10) * 8));
        if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == local_1c)) &&
           (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar1 = *plVar4, lVar1 != 0)))) {
          lVar3 = FUN_145a8e568();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            FUN_148ef02f6(lVar1,&DAT_14cbd96b0,0x40a00000);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a309e FUN_1442a309e body=315 status=ok
// SIG undefined FUN_1442a309e(void)

void FUN_1442a309e(void)

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
  lVar1 = FUN_1400d7050();
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
      lVar1 = FUN_140e06fb1(lVar1);
      if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a320a FUN_1442a320a body=629 status=ok
// SIG undefined FUN_1442a320a(void)

void FUN_1442a320a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  code *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = FUN_140495e96(param_1 + -8);
  if (lVar6 == 0) goto LAB_1442a33ad;
  FUN_1442aa94c(&local_48,lVar6,&DAT_14cbd9758);
  if (((((local_48._4_4_ == 0) || ((int)(uint)local_48 < 0)) ||
       (DAT_14c9647dc <= (int)(uint)local_48)) ||
      ((plVar8 = (longlong *)
                 ((ulonglong)(((uint)local_48 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_48 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0 || ((int)plVar8[2] != local_48._4_4_)))) ||
     (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 ||
      ((lVar6 = *plVar8, lVar6 == 0 ||
       (plVar8 = *(longlong **)(param_1 + 0x28), plVar8 == (longlong *)0x0)))))) goto LAB_1442a33ad;
  iVar5 = (int)plVar8[1];
  do {
    if (iVar5 == 0) goto LAB_1442a33ad;
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
  if (*(longlong *)(param_1 + 0x20) != 0) {
    fVar10 = (float)FUN_143df31fa(*(longlong *)(param_1 + 0x20),0);
    fVar11 = *(float *)(lVar6 + 0x70);
    if ((fVar11 != fVar10) || (NAN(fVar11) || NAN(fVar10))) {
      *(float *)(lVar6 + 0x70) = fVar10;
      local_40 = DAT_14cbb6298;
      local_48 = DAT_14cbb6290;
      (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x38))(lVar6 + 0x28);
      fVar11 = *(float *)(lVar6 + 0x70);
    }
    if (*(float *)(lVar6 + 0x74) <= fVar11 && fVar11 != *(float *)(lVar6 + 0x74)) {
      lVar6 = FUN_1400d7050(param_1 + -8);
      if (lVar6 == 0) {
LAB_1442a337d:
        uVar7 = 0;
      }
      else {
        if (DAT_14cbadd90 == 0) {
          local_48 = FUN_141030f22;
          local_50 = FUN_14081d0ea;
          local_58 = &LAB_1459f2e4c;
          local_68 = &LAB_148c39de3;
          local_70 = &LAB_1457a9eb2;
          local_78 = &DAT_149e063b2;
          local_80 = 0;
          local_88 = 0x10000004;
          local_90 = 0x10;
          local_98 = 0x3de0;
          local_60 = &local_48;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30))
        goto LAB_1442a337d;
        uVar7 = FUN_1447210f0(lVar6);
      }
      cVar4 = FUN_144120881(uVar7);
      if (cVar4 != '\0') {
        FUN_1442a2f86(param_1 + -0x38);
      }
    }
  }
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
LAB_1442a33ad:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442a3480 FUN_1442a3480 body=515 status=ok
// SIG undefined FUN_1442a3480(void)

void FUN_1442a3480(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_140495e96(param_1 + 6);
  if (lVar2 != 0) {
    FUN_1442aa94c(&local_28,lVar2,&DAT_14cbd9758);
    if (((local_28._4_4_ != 0) && (-1 < (int)(uint)local_28)) &&
       ((int)(uint)local_28 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)(((uint)local_28 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_28 >> 0x10) * 8));
      if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == local_28._4_4_)) &&
         (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))) {
        FUN_144337054();
      }
    }
  }
  plVar6 = (longlong *)param_1[0xc];
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 10) = DAT_14c948620;
  param_1[9] = DAT_14c948618;
  local_28 = 0;
  lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x1f0) == 0)) goto LAB_1442a3564;
  lVar2 = FUN_145aa2e42();
  if (lVar2 == 0) goto LAB_1442a3564;
  uVar3 = FUN_140495e96(param_1 + 6);
  FUN_145aa30f6(lVar2,&local_28,uVar3);
  if (((local_28._4_4_ == 0) || ((int)(uint)local_28 < 0)) || (DAT_14c9647dc <= (int)(uint)local_28)
     ) goto LAB_1442a3564;
  lVar2 = (ulonglong)(((uint)local_28 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_28 >> 0x10) * 8);
  if (((lVar2 == 0) || (*(int *)(lVar2 + 0x10) != local_28._4_4_)) ||
     ((*(uint *)(lVar2 + 8) & 0x10200000) != 0)) goto LAB_1442a3564;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *(undefined1 *)(puVar4 + 1) = 0;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 2;
  *puVar4 = &PTR_FUN_14b466580;
  puVar4[2] = DAT_14cbd96a8;
  if (puVar4 == (undefined8 *)0x0) goto LAB_1442a3564;
  if (local_28._4_4_ == 0) {
LAB_1442a3680:
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if ((-1 < (int)(uint)local_28) && ((int)(uint)local_28 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)(((uint)local_28 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_28 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != local_28._4_4_ || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
      goto LAB_1442a3680;
      uVar3 = *puVar5;
    }
  }
  FUN_1409ee7a4(uVar3,puVar4);
LAB_1442a3564:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a3684 FUN_1442a3684 body=348 status=ok
// SIG undefined FUN_1442a3684(void)

void FUN_1442a3684(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  float fVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = FUN_140495e96(param_1 + 0x30);
  if (lVar6 != 0) {
    FUN_1442aa94c(&local_30,lVar6,&DAT_14cbd9758);
    if (((((local_30._4_4_ != 0) && (-1 < (int)(uint)local_30)) &&
         ((int)(uint)local_30 < DAT_14c9647dc)) &&
        ((plVar7 = (longlong *)
                   ((ulonglong)(((uint)local_30 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_30 >> 0x10) * 8)),
         plVar7 != (longlong *)0x0 && ((int)plVar7[2] == local_30._4_4_)))) &&
       (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
        ((lVar6 = *plVar7, lVar6 != 0 &&
         (plVar7 = *(longlong **)(param_1 + 0x60), plVar7 != (longlong *)0x0)))))) {
      iVar5 = (int)plVar7[1];
      do {
        if (iVar5 == 0) goto LAB_1442a37c2;
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
      lVar3 = *(longlong *)(param_1 + 0x58);
      if (lVar3 != 0) {
        FUN_1442a37e2(lVar6,lVar3 + 0x90);
        fVar9 = (float)FUN_143df31fa(lVar3,0);
        if ((*(float *)(lVar6 + 0x70) != fVar9) || (NAN(*(float *)(lVar6 + 0x70)) || NAN(fVar9))) {
          *(float *)(lVar6 + 0x70) = fVar9;
          local_28 = DAT_14cbb6298;
          local_30 = DAT_14cbb6290;
          (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x38))(lVar6 + 0x28);
        }
      }
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
  }
LAB_1442a37c2:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442a37e2 FUN_1442a37e2 body=242 status=ok
// SIG undefined FUN_1442a37e2(void)

void FUN_1442a37e2(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)(int)param_2[1] == 0) {
    iVar2 = 0;
    fVar4 = 0.0;
  }
  else {
    fVar4 = 0.0;
    lVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*param_2 + 0x10 + lVar3);
      iVar2 = iVar2 + iVar1;
      fVar4 = fVar4 + (float)iVar1 * *(float *)(*param_2 + 0xc + lVar3);
      lVar3 = lVar3 + 0x14;
    } while ((longlong)(int)param_2[1] * 0x14 != lVar3);
  }
  if (*(int *)(param_1 + 0x8c) != iVar2) {
    *(int *)(param_1 + 0x8c) = iVar2;
    local_28 = DAT_14cbb6318;
    local_30 = DAT_14cbb6310;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
  }
  if ((*(float *)(param_1 + 0x88) != fVar4) || (NAN(*(float *)(param_1 + 0x88)) || NAN(fVar4))) {
    *(float *)(param_1 + 0x88) = fVar4;
    local_28 = DAT_14cbb6308;
    local_30 = DAT_14cbb6300;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442a38d6 FUN_1442a38d6 body=567 status=ok
// SIG undefined FUN_1442a38d6(void)

void FUN_1442a38d6(longlong param_1,int *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = FUN_140495e96(param_1 + 0x30);
  if (lVar5 == 0) goto LAB_1442a3ae9;
  FUN_1442aa94c(&local_58,lVar5,&DAT_14cbd9758);
  if ((((local_58._4_4_ == 0) || ((int)(uint)local_58 < 0)) ||
      (DAT_14c9647dc <= (int)(uint)local_58)) ||
     (((plVar6 = (longlong *)
                 ((ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != local_58._4_4_)) ||
      (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 ||
       ((lVar5 = *plVar6, lVar5 == 0 ||
        (plVar6 = *(longlong **)(param_1 + 0x60), plVar6 == (longlong *)0x0))))))))
  goto LAB_1442a3ae9;
  iVar4 = (int)plVar6[1];
  do {
    if (iVar4 == 0) goto LAB_1442a3ae9;
    LOCK();
    iVar3 = (int)plVar6[1];
    bVar9 = iVar4 == iVar3;
    if (bVar9) {
      *(int *)(plVar6 + 1) = iVar4 + 1;
      iVar3 = iVar4;
    }
    iVar4 = iVar3;
    UNLOCK();
  } while (!bVar9);
  lVar7 = *(longlong *)(param_1 + 0x58);
  if ((lVar7 != 0) && ((longlong)*(int *)(lVar7 + 0xa8) != 0)) {
    piVar8 = *(int **)(lVar7 + 0xa0);
    lVar7 = (longlong)*(int *)(lVar7 + 0xa8) * 0x14;
    do {
      if ((*piVar8 == *param_2) && (piVar8[2] == param_2[2])) {
        if (piVar8 != (int *)0x0) {
          local_58 = 0;
          iVar4 = *(int *)(lVar5 + 0x80);
          uVar2 = *(undefined8 *)(lVar5 + 0x78);
          local_50 = iVar4;
          if (iVar4 != 0) {
            FUN_1442aaaee(&local_58,iVar4);
            FUN_1442aac19(local_58,uVar2,iVar4);
            if ((longlong)local_50 == 0) goto LAB_1442a3ac2;
            lVar5 = 0;
            goto LAB_1442a3a53;
          }
        }
        break;
      }
      piVar8 = piVar8 + 5;
      lVar7 = lVar7 + -0x14;
    } while (lVar7 != 0);
  }
  goto LAB_1442a3acc;
  while (lVar5 = lVar5 + 8, (longlong)local_50 * 8 != lVar5) {
LAB_1442a3a53:
    lVar7 = *(longlong *)(local_58 + lVar5);
    if ((((lVar7 != 0) && ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0)) &&
        (*(int *)(lVar7 + 0x70) == *param_2)) && (*(int *)(lVar7 + 0x78) == param_2[2])) {
      if ((lVar5 + local_58 != 0) && (*(char *)(lVar7 + 0x84) != (char)piVar8[4])) {
        *(char *)(lVar7 + 0x84) = (char)piVar8[4];
        local_40 = DAT_14cbb62c8;
        local_48 = DAT_14cbb62c0;
        (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x38))(lVar7 + 0x28);
      }
      break;
    }
  }
LAB_1442a3ac2:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_1442a3acc:
  LOCK();
  plVar1 = plVar6 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar8 = (int *)((longlong)plVar6 + 0xc);
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (*piVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_1442a3ae9:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442a3bb8 FUN_1442a3bb8 body=89 status=ok
// SIG undefined FUN_1442a3bb8(void)

void FUN_1442a3bb8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &LAB_1442a3f6c;
  local_18 = 0;
  FUN_1442a3c66(param_2 + 0x120,local_10,param_1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a3c12 FUN_1442a3c12 body=83 status=ok
// SIG undefined FUN_1442a3c12(void)

void FUN_1442a3c12(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_140457ffc(param_2 + 0x120,param_1);
  uVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar2 = FUN_140334a94(param_2,uVar1);
  if (lVar2 == 0) {
    return;
  }
  FUN_14615c3e4(param_1,*(undefined8 *)(lVar2 + 0x398));
  return;
}



// FUNCTION 1442a3c66 FUN_1442a3c66 body=772 status=ok
// SIG undefined FUN_1442a3c66(void)

undefined8 * FUN_1442a3c66(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14b412de0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14b9b9020;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar9;
  *param_2 = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_1442a3e7c;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_1442a3e66;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar10 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar10) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    *param_2 = uVar6;
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1447a71f6(param_1,iVar10);
    }
    lVar2 = *param_1;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_1442a3e66:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1442a3e7c:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1442a3f7e FUN_1442a3f7e body=1264 status=ok
// SIG undefined FUN_1442a3f7e(void)

undefined8 * FUN_1442a3f7e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  code *pcVar2;
  void *pvVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = FUN_14073fae1();
  lVar7 = *(longlong *)(lVar5 + 0x188);
  if (lVar7 == 0) {
    uVar6 = FUN_141030812();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(lVar5 + 0x188) = lVar7;
  }
  plVar8 = *(longlong **)(lVar5 + 400);
  if (((plVar8 == (longlong *)0x0) && (plVar8 = (longlong *)0x0, lVar7 != 0)) &&
     (*(longlong *)(lVar5 + 0x180) != 0)) {
    plVar8 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar8 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 == '\0')) {
      plVar8 = (longlong *)0x0;
    }
    else {
      uVar6 = (**(code **)(*plVar8 + 0x110))(plVar8);
      plVar8 = (longlong *)FUN_144aff482(uVar6,(longlong *)(lVar5 + 0x180));
    }
    *(longlong **)(lVar5 + 400) = plVar8;
  }
  lVar7 = *(longlong *)(param_2 + 0x18);
  if (lVar7 == 0) {
    local_58[0] = *(longlong **)(param_2 + 8);
    lVar7 = FUN_14050aea0();
    *(longlong *)(param_2 + 0x18) = lVar7;
    if (lVar7 != 0) goto LAB_1442a405d;
LAB_1442a41a0:
    if (plVar8 == (longlong *)0x0) {
      FUN_140056680(param_1,&DAT_149dfb77a);
      goto LAB_1442a4395;
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,local_58);
    plVar8 = local_58[0];
    if (*(code **)(*local_58[0] + 0x50) != FUN_144828418) {
      plVar8 = (longlong *)(**(code **)(*local_58[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar8);
    pcVar2 = *(code **)(*local_58[0] + 0x28);
joined_r0x0001442a432e:
    if (pcVar2 == FUN_14482841c) {
      plVar8 = local_58[0] + 3;
      if (local_58[0][5] != 0) {
        plVar8 = (longlong *)(local_58[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar8 = local_58[0] + 2;
    }
    else {
      plVar8 = (longlong *)(*pcVar2)(local_58[0]);
    }
    *param_1 = 0;
    iVar1 = (int)plVar8[1];
    pvVar3 = (void *)*plVar8;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,pvVar3,(longlong)iVar1 * 2);
    }
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
  }
  else {
LAB_1442a405d:
    plVar9 = *(longlong **)(lVar7 + 0x98);
    if (*(code **)(*plVar9 + 0x50) != FUN_144828418) {
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x50))();
    }
    FUN_1447a1fc0(plVar9);
    plVar9 = *(longlong **)(lVar7 + 0x98);
    pcVar2 = *(code **)(*plVar9 + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar10 = plVar9 + 3;
      if (plVar9[5] != 0) {
        plVar10 = (longlong *)(plVar9[5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar10 = plVar9 + 2;
    }
    else {
      plVar10 = (longlong *)(*pcVar2)(plVar9);
    }
    if ((int)plVar10[1] < 2) {
      plVar9 = (longlong *)FUN_145a2c21b(lVar7);
      if ((plVar9 != (longlong *)0x0) && (plVar9 != plVar8)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,local_58);
        plVar10 = local_58[0];
        if (*(code **)(*local_58[0] + 0x50) != FUN_144828418) {
          plVar10 = (longlong *)(**(code **)(*local_58[0] + 0x50))();
        }
        FUN_1447a1fc0(plVar10);
        pcVar2 = *(code **)(*local_58[0] + 0x28);
        if (pcVar2 == FUN_14482841c) {
          plVar10 = (longlong *)(local_58[0][5] + 8);
          if (local_58[0][5] == 0) {
            plVar10 = local_58[0] + 3;
          }
        }
        else if (pcVar2 == (code *)&LAB_14010c34c) {
          plVar10 = local_58[0] + 2;
        }
        else {
          plVar10 = (longlong *)(*pcVar2)();
        }
        lVar5 = plVar10[1];
        if (local_58[0] != (longlong *)0x0) {
          (**(code **)(*local_58[0] + 0x10))();
        }
        if ((int)lVar5 < 2) goto LAB_1442a4138;
        (**(code **)(*plVar9 + 0x18))(plVar9,local_58);
        plVar8 = local_58[0];
        if (*(code **)(*local_58[0] + 0x50) != FUN_144828418) {
          plVar8 = (longlong *)(**(code **)(*local_58[0] + 0x50))();
        }
        FUN_1447a1fc0(plVar8);
        pcVar2 = *(code **)(*local_58[0] + 0x28);
        goto joined_r0x0001442a432e;
      }
LAB_1442a4138:
      lVar5 = *(longlong *)(lVar7 + 0x60);
      if (lVar5 == 0) {
        lVar5 = FUN_140e045c8(*(undefined8 *)(lVar7 + 0x50));
        *(longlong *)(lVar7 + 0x60) = lVar5;
        if (lVar5 == 0) goto LAB_1442a41a0;
      }
      plVar9 = *(longlong **)(lVar5 + 0x28);
      if (*(code **)(*plVar9 + 0x50) != FUN_144828418) {
        plVar9 = (longlong *)(**(code **)(*plVar9 + 0x50))();
      }
      FUN_1447a1fc0(plVar9);
      plVar9 = *(longlong **)(lVar5 + 0x28);
      pcVar2 = *(code **)(*plVar9 + 0x28);
      if (pcVar2 == FUN_14482841c) {
        plVar10 = plVar9 + 3;
        if (plVar9[5] != 0) {
          plVar10 = (longlong *)(plVar9[5] + 8);
        }
      }
      else if (pcVar2 == (code *)&LAB_14010c34c) {
        plVar10 = plVar9 + 2;
      }
      else {
        plVar10 = (longlong *)(*pcVar2)(plVar9);
      }
      if ((int)plVar10[1] < 2) goto LAB_1442a41a0;
      plVar8 = *(longlong **)(lVar5 + 0x28);
      if (*(code **)(*plVar8 + 0x50) != FUN_144828418) {
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))();
      }
      FUN_1447a1fc0(plVar8);
      plVar8 = *(longlong **)(lVar5 + 0x28);
    }
    else {
      plVar8 = *(longlong **)(lVar7 + 0x98);
      if (*(code **)(*plVar8 + 0x50) != FUN_144828418) {
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))();
      }
      FUN_1447a1fc0(plVar8);
      plVar8 = *(longlong **)(lVar7 + 0x98);
    }
    pcVar2 = *(code **)(*plVar8 + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar9 = plVar8 + 3;
      if (plVar8[5] != 0) {
        plVar9 = (longlong *)(plVar8[5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar9 = plVar8 + 2;
    }
    else {
      plVar9 = (longlong *)(*pcVar2)(plVar8);
    }
    *param_1 = 0;
    iVar1 = (int)plVar9[1];
    pvVar3 = (void *)*plVar9;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,pvVar3,(longlong)iVar1 * 2);
    }
  }
LAB_1442a4395:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a44a2 FUN_1442a44a2 body=1685 status=ok
// SIG undefined FUN_1442a44a2(void)

void FUN_1442a44a2(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
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
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + -0x30);
  FUN_1412f9654(plVar1);
  lVar6 = FUN_140495e96(param_1);
  if ((lVar6 != 0) && (lVar6 = FUN_1403ca91c(lVar6), lVar6 != 0)) {
    iVar9 = *(int *)(lVar6 + 0x80);
    if ((longlong)iVar9 != 0) {
      lVar7 = *(longlong *)(lVar6 + 0x78);
      lVar11 = 0;
      do {
        if (((*(int *)(lVar7 + 8 + lVar11) != 0) &&
            (plVar3 = *(longlong **)(lVar7 + lVar11), plVar3 != (longlong *)0x0)) &&
           (cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,plVar1), cVar5 != '\0'))
        goto LAB_1442a455a;
        lVar11 = lVar11 + 0x10;
      } while ((longlong)iVar9 * 0x10 != lVar11);
    }
    local_50 = FUN_1413d207a;
    local_48 = 0;
    FUN_146648fe2(lVar6 + 0x78,local_58,plVar1);
  }
LAB_1442a455a:
  lVar6 = (**(code **)(*plVar1 + 0x180))(plVar1);
  if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x1f0) != 0)) && (lVar6 = FUN_1400d6ce6(), lVar6 != 0)
     ) {
    local_50 = FUN_145981d92;
    local_48 = 0;
    FUN_1466490e2(lVar6 + 400,local_58,plVar1);
  }
  lVar6 = FUN_1400d7050(param_1);
  if (lVar6 == 0) goto LAB_1442a45c4;
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
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1442a45c4;
  lVar7 = *(longlong *)(lVar6 + 0x3db8);
  if (lVar7 != 0) {
    local_50 = FUN_148e5ac14;
    local_48 = 0;
    FUN_145c32c82(lVar7 + 0x48,local_58,plVar1,&local_50);
    local_50 = FUN_148e5ad54;
    local_48 = 0;
    FUN_145c32e80(lVar7 + 0x60,local_58,plVar1,&local_50);
  }
  local_50 = (code *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  pcVar4 = local_50;
  local_48 = 3;
  *(undefined ***)local_50 = &PTR_LAB_14b412ca0;
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
  *(longlong *)(local_50 + 0x10) = lVar11;
  *(undefined ***)local_50 = &PTR_FUN_14b9b94f0;
  *(undefined8 *)(local_50 + 0x18) = 0;
  iVar9 = 0;
  if (plVar1 != (longlong *)0x0) {
    uVar2 = *(uint *)(param_1 + -0x24);
    *(uint *)(local_50 + 0x18) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar9 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar9 = *(int *)(lVar7 + 0x10);
      bVar12 = iVar9 == 0;
      if (bVar12) {
        *(int *)(lVar7 + 0x10) = iVar10;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar9 = iVar10;
      }
    }
  }
  *(int *)(pcVar4 + 0x1c) = iVar9;
  *(code **)(pcVar4 + 0x20) = FUN_1442a4b38;
  *(undefined4 *)(pcVar4 + 0x28) = 0;
  FUN_145ab8ab8(lVar6 + 0xc10,local_58,&local_50);
  if (local_48 == 0) {
LAB_1442a4816:
    if (local_50 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_1442a4816;
  }
  uVar8 = (**(code **)(*plVar1 + 0x180))(plVar1);
  lVar6 = FUN_1411e4b4a(uVar8,0);
  if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x170), lVar6 != 0)) {
    local_50 = (code *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,3,0x10);
    pcVar4 = local_50;
    local_48 = 3;
    *(undefined ***)local_50 = &PTR_LAB_14b9ab700;
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
    *(longlong *)(local_50 + 0x10) = lVar11;
    *(undefined ***)local_50 = &PTR_FUN_14b9b9560;
    *(undefined8 *)(local_50 + 0x18) = 0;
    iVar9 = 0;
    if (plVar1 != (longlong *)0x0) {
      uVar2 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_50 + 0x18) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar9 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar9 = *(int *)(lVar7 + 0x10);
        bVar12 = iVar9 == 0;
        if (bVar12) {
          *(int *)(lVar7 + 0x10) = iVar10;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar9 = iVar10;
        }
      }
    }
    *(int *)(pcVar4 + 0x1c) = iVar9;
    *(code **)(pcVar4 + 0x20) = FUN_1442a4da6;
    *(undefined4 *)(pcVar4 + 0x28) = 0;
    FUN_1459dfc58(lVar6 + 0x6d8,local_58,&local_50);
    if (local_48 != 0) {
      if (local_50 == (code *)0x0) goto LAB_1442a45c4;
      (*(code *)**(undefined8 **)local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_50 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1442a45c4:
  lVar6 = FUN_1413d20fa(plVar1);
  if (lVar6 != 0) {
    local_50 = FUN_14142bb98;
    local_48 = 0;
    FUN_1413d2234(lVar6 + 0x18,local_58,plVar1);
  }
  lVar6 = (**(code **)(*plVar1 + 0x180))(plVar1);
  if ((lVar6 != 0) && (lVar6 = FUN_1449baec6(lVar6), lVar6 != 0)) {
    lVar7 = FUN_140d976a6();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      local_50 = FUN_145afa654;
      local_48 = 0;
      FUN_1466491e2(lVar6 + 0x410,local_58,plVar1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442a4b38 FUN_1442a4b38 body=621 status=ok
// SIG undefined FUN_1442a4b38(void)

void FUN_1442a4b38(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
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
  longlong local_48;
  longlong lStack_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = FUN_1400d7050(param_1 + 0x30);
  if (lVar1 == 0) goto LAB_1442a4ba6;
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
  if (((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
     (*(longlong *)(lVar1 + 0x3db8) == 0)) goto LAB_1442a4ba6;
  lVar1 = FUN_148ef9008();
  if (lVar1 == 0) goto LAB_1442a4ba6;
  lVar2 = FUN_1457b1050(lVar1);
  if (lVar2 == 0) goto LAB_1442a4ba6;
  piVar7 = &DAT_14c9485f0;
  if (*(int **)(lVar2 + 8) != (int *)0x0) {
    piVar7 = *(int **)(lVar2 + 8);
  }
  if (*piVar7 != *param_2) goto LAB_1442a4ba6;
  local_48 = 0;
  lStack_40 = 0;
  uVar3 = FUN_141218768();
  lVar2 = FUN_14477b664(uVar3);
  lVar4 = FUN_141218768();
  uVar3 = FUN_141218768();
  FUN_1402d1bfa(&local_38,uVar3,lVar1);
  if (local_38 != (code *)0x0) {
    lStack_40 = 0;
  }
  local_50 = local_38;
  lVar5 = FUN_141218768();
  if (lVar4 == 0) {
LAB_1442a4c86:
    lVar5 = lVar4;
  }
  else if (lVar5 == 0) {
    lVar5 = 0;
  }
  else if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30)) goto LAB_1442a4c86;
  if (lVar2 != lVar5) {
    lStack_40 = 0;
  }
  uVar3 = FUN_14477b664(lVar5);
  local_48 = FUN_14477b664(uVar3);
  if (local_48 != 0 && local_38 != (code *)0x0) {
    lStack_40 = lVar1;
  }
  lVar1 = FUN_1442a60cc(param_1,&local_50);
  if (lVar1 != 0) {
    FUN_1409e49aa(param_1,lVar1);
    plVar6 = (longlong *)FUN_14140fc00(param_1);
    *(int *)(*plVar6 + 0x128) = *(int *)(*plVar6 + 0x128) + 1;
  }
LAB_1442a4ba6:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a4da6 FUN_1442a4da6 body=1334 status=ok
// SIG undefined FUN_1442a4da6(void)

void FUN_1442a4da6(longlong param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined **ppuVar11;
  longlong lVar12;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  longlong local_80;
  PSRWLOCK local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 != 0) {
    lVar5 = FUN_1400d7050(param_1 + 0x30);
    if (lVar5 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_a0 = &local_50;
        local_50 = FUN_141030f22;
        local_90 = FUN_14081d0ea;
        local_98 = &LAB_1459f2e4c;
        local_a8 = &LAB_148c39de3;
        local_b0 = &LAB_1457a9eb2;
        local_b8 = &DAT_149e063b2;
        local_c0 = 0;
        local_c8 = 0x10000004;
        local_d0 = 0x10;
        local_d8 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
         (cVar2 = FUN_140426394(lVar5 + 0xd98,&DAT_14cbd9500), cVar2 != '\0')) {
        plVar6 = (longlong *)FUN_14140fc00(param_1);
        plVar6 = (longlong *)*plVar6;
        AcquireSRWLockExclusive((PSRWLOCK)(plVar6 + 0x26));
        lVar5 = FUN_1400d7050(param_1 + 0x30);
        if (lVar5 != 0) {
          if (DAT_14cbadd90 == 0) {
            local_a0 = &local_50;
            local_50 = FUN_141030f22;
            local_90 = FUN_14081d0ea;
            local_98 = &LAB_1459f2e4c;
            local_a8 = &LAB_148c39de3;
            local_b0 = &LAB_1457a9eb2;
            local_b8 = &DAT_149e063b2;
            local_c0 = 0;
            local_c8 = 0x10000004;
            local_d0 = 0x10;
            local_d8 = 0x3de0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
             ((*(longlong *)(lVar5 + 0x3db8) != 0 &&
              (plVar7 = (longlong *)FUN_141218c3a(), plVar7 != (longlong *)0x0)))) {
            lVar5 = *plVar6;
            *(int *)(plVar6 + 2) = (int)plVar6[2] + 2;
            if ((longlong)(int)plVar6[1] != 0) {
              lVar12 = (longlong)(int)plVar6[1] << 8;
              local_78 = (PSRWLOCK)(plVar6 + 0x26);
              local_70 = plVar6;
              local_68 = plVar7;
              do {
                plVar6 = local_68;
                if (*(longlong *)(lVar5 + 0x40) == 0) {
                  uVar8 = FUN_141218768();
                  uVar8 = FUN_14477b664(uVar8);
                  *(undefined8 *)(lVar5 + 0x40) = uVar8;
                }
                lVar9 = plVar6[1];
                if (lVar9 == 0) {
                  lVar9 = FUN_141218768();
                }
                local_58 = *plVar6;
                local_80 = FUN_14477b664(lVar9);
                iVar3 = 0;
                if ((local_80 != 0) &&
                   (plVar6 = *(longlong **)(local_80 + 0xb8), plVar6 != (longlong *)0x0)) {
                  lVar9 = *plVar6;
                  pcVar1 = *(code **)(lVar9 + 0x108);
                  if (pcVar1 != (code *)&LAB_14478342e && pcVar1 != (code *)&LAB_144783422) {
                    cVar2 = (*pcVar1)(plVar6);
                    iVar3 = 0;
                    if (cVar2 == '\0') goto LAB_1442a4ff2;
                    lVar9 = *plVar6;
                  }
                  pcVar1 = *(code **)(lVar9 + 0x110);
                  ppuVar11 = &PTR_PTR_14c763408;
                  if ((pcVar1 != (code *)&LAB_144783426) &&
                     (ppuVar11 = &PTR_PTR_14c75f798, pcVar1 != (code *)&LAB_144783432)) {
                    ppuVar11 = (undefined **)(*pcVar1)(plVar6);
                  }
                  iVar3 = FUN_144aff48c(ppuVar11);
                }
LAB_1442a4ff2:
                local_60 = *(longlong *)(lVar5 + 0x38);
                lVar9 = *(longlong *)(lVar5 + 0x40);
                iVar4 = 0;
                if ((lVar9 != 0) &&
                   (plVar6 = *(longlong **)(lVar9 + 0xb8), iVar4 = 0, plVar6 != (longlong *)0x0)) {
                  lVar10 = *plVar6;
                  pcVar1 = *(code **)(lVar10 + 0x108);
                  if (pcVar1 != (code *)&LAB_14478342e && pcVar1 != (code *)&LAB_144783422) {
                    cVar2 = (*pcVar1)(plVar6);
                    if (cVar2 == '\0') goto LAB_1442a5062;
                    lVar10 = *plVar6;
                  }
                  pcVar1 = *(code **)(lVar10 + 0x110);
                  ppuVar11 = &PTR_PTR_14c763408;
                  if ((pcVar1 != (code *)&LAB_144783426) &&
                     (ppuVar11 = &PTR_PTR_14c75f798, pcVar1 != (code *)&LAB_144783432)) {
                    ppuVar11 = (undefined **)(*pcVar1)(plVar6);
                  }
                  iVar4 = FUN_144aff48c(ppuVar11);
                }
LAB_1442a5062:
                plVar6 = local_70;
                if ((iVar4 == iVar3) && (local_60 == local_58)) {
                  if (lVar9 == local_80) {
LAB_1442a517d:
                    if ((lVar5 != 0) &&
                       (cVar2 = FUN_14424699e(lVar5,param_2,param_3), cVar2 != '\0')) {
                      *(int *)(plVar6 + 0x25) = (int)plVar6[0x25] + 1;
                    }
                    break;
                  }
                  if ((local_80 != 0) && (lVar9 != 0)) {
                    iVar3 = *(int *)(local_80 + 0x38);
                    iVar4 = *(int *)(lVar9 + 0x38);
                    if (((iVar3 <= iVar4) &&
                        (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar3 * 8) ==
                         local_80 + 0x30)) ||
                       ((iVar4 <= iVar3 &&
                        (*(longlong *)(*(longlong *)(local_80 + 0x30) + (longlong)iVar4 * 8) ==
                         lVar9 + 0x30)))) goto LAB_1442a517d;
                  }
                }
                lVar5 = lVar5 + 0x100;
                lVar12 = lVar12 + -0x100;
              } while (lVar12 != 0);
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442a52fa FUN_1442a52fa body=632 status=ok
// SIG undefined FUN_1442a52fa(void)

void FUN_1442a52fa(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
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
  plVar1 = (longlong *)(param_1 + -0x30);
  FUN_1466492e2(plVar1);
  lVar2 = FUN_140495e96(param_1);
  if (lVar2 != 0) {
    lVar2 = FUN_1403ca91c(lVar2);
    if (lVar2 != 0) {
      FUN_140457ffc(lVar2 + 0x78,plVar1);
    }
  }
  lVar2 = (**(code **)(*plVar1 + 0x180))(plVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar2 = FUN_1400d6ce6();
    if (lVar2 != 0) {
      FUN_140457ffc(lVar2 + 400,plVar1);
    }
  }
  lVar2 = FUN_1400d7050(param_1);
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
      lVar3 = *(longlong *)(lVar2 + 0x3db8);
      if (lVar3 != 0) {
        FUN_140457ffc(lVar3 + 0x48,plVar1);
        FUN_140457ffc(lVar3 + 0x60,plVar1);
      }
      FUN_140457ffc(lVar2 + 0xc10,plVar1);
      uVar4 = (**(code **)(*plVar1 + 0x180))(plVar1);
      lVar2 = FUN_1411e4b4a(uVar4,0);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x170) != 0)) {
        FUN_140457ffc(*(longlong *)(lVar2 + 0x170) + 0x6d8,plVar1);
      }
    }
  }
  lVar2 = FUN_1413d20fa(plVar1);
  if (lVar2 != 0) {
    FUN_140457ffc(lVar2 + 0x18,plVar1);
  }
  lVar2 = (**(code **)(*plVar1 + 0x180))(plVar1);
  if (lVar2 != 0) {
    lVar2 = FUN_1449baec6(lVar2);
    if (lVar2 != 0) {
      lVar3 = FUN_140d976a6();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
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



// FUNCTION 1442a5588 FUN_1442a5588 body=2438 status=ok
// SIG undefined FUN_1442a5588(void)

void FUN_1442a5588(longlong param_1)

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
  if (lVar5 == 0) goto LAB_1442a5ca6;
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
    *local_60 = &PTR_FUN_14b9b96b0;
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
    puVar2[4] = FUN_148e5afc8;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "FOakUIEvent_VaultCards_Refresh";
    local_48 = 0x1e;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x68) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_1442a5723;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1442a5723:
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
    *local_60 = &PTR_FUN_14b9b96b0;
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
    puVar2[4] = FUN_148e5b05e;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "FOakUIEvent_VaultCards_Purchase";
    local_48 = 0x1f;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x70) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_1442a5881;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1442a5881:
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
    *local_60 = &PTR_FUN_14b9b96b0;
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
    puVar2[4] = FUN_148e5b1b4;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "FOakUIEvent_VaultCards_PurchaseInventory";
    local_48 = 0x28;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x80) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_1442a59e5;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1442a59e5:
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
    *local_60 = &PTR_FUN_14b9b96b0;
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
    puVar2[4] = FUN_148e5b366;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "FOakUIEvent_VaultCards_PurchaseCosmetic";
    local_48 = 0x27;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x78) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_1442a5b43;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1442a5b43:
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
    *local_60 = &PTR_FUN_14b9b96b0;
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
    puVar2[4] = FUN_1442a5f10;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "FOakUIEvent_VaultCards_Activate";
    local_48 = 0x1f;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x88) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_1442a5ca6;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1442a5ca6:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442a5f10 FUN_1442a5f10 body=421 status=ok
// SIG undefined FUN_1442a5f10(void)

void FUN_1442a5f10(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = FUN_1400d7050(param_1 + 0x30);
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
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (*(longlong *)(lVar2 + 0x3db8) != 0)) {
      FUN_1443379c4(*(longlong *)(lVar2 + 0x3db8),param_2 + 0x20);
      plVar3 = (longlong *)FUN_14140fc00(param_1);
      plVar3 = (longlong *)*plVar3;
      AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 0x26));
      *(int *)(plVar3 + 0x25) = (int)plVar3[0x25] + 1;
      *(int *)(plVar3 + 2) = (int)plVar3[2] + 2;
      if ((longlong)(int)plVar3[1] != 0) {
        lVar4 = (longlong)(int)plVar3[1] << 8;
        lVar2 = *plVar3 + 0x38;
        do {
          uVar1 = FUN_1412188d6(param_1,lVar2);
          *(undefined1 *)(lVar2 + -8) = uVar1;
          lVar2 = lVar2 + 0x100;
          lVar4 = lVar4 + -0x100;
        } while (lVar4 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a60cc FUN_1442a60cc body=754 status=ok
// SIG undefined FUN_1442a60cc(void)

longlong FUN_1442a60cc(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined **ppuVar14;
  longlong lVar15;
  
  lVar9 = param_2[1];
  if (lVar9 == 0) {
    uVar8 = FUN_141218768();
    lVar9 = FUN_14477b664(uVar8);
    param_2[1] = lVar9;
  }
  if (param_2[2] == 0) {
    if (lVar9 == 0) {
      return 0;
    }
    if (*param_2 == 0) {
      return 0;
    }
    plVar10 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar5 == '\0')) {
      param_2[2] = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar10 + 0x110))(plVar10);
      lVar9 = FUN_144aff482(uVar8,param_2);
      param_2[2] = lVar9;
      if (lVar9 != 0) goto LAB_1442a6107;
    }
    lVar9 = 0;
  }
  else {
LAB_1442a6107:
    plVar10 = (longlong *)FUN_14140fc00(param_1);
    plVar10 = (longlong *)*plVar10;
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 0x26));
    lVar9 = *plVar10;
    *(int *)(plVar10 + 2) = (int)plVar10[2] + 2;
    if ((longlong)(int)plVar10[1] != 0) {
      lVar15 = (longlong)(int)plVar10[1] << 8;
      do {
        if (*(longlong *)(lVar9 + 0x40) == 0) {
          uVar8 = FUN_141218768();
          uVar8 = FUN_14477b664(uVar8);
          *(undefined8 *)(lVar9 + 0x40) = uVar8;
        }
        lVar11 = param_2[1];
        if (lVar11 == 0) {
          lVar11 = FUN_141218768();
        }
        lVar1 = *param_2;
        lVar11 = FUN_14477b664(lVar11);
        iVar6 = 0;
        if ((lVar11 != 0) && (plVar2 = *(longlong **)(lVar11 + 0xb8), plVar2 != (longlong *)0x0)) {
          lVar12 = *plVar2;
          pcVar3 = *(code **)(lVar12 + 0x108);
          if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
            cVar5 = (*pcVar3)(plVar2);
            iVar6 = 0;
            if (cVar5 == '\0') goto LAB_1442a61e8;
            lVar12 = *plVar2;
          }
          pcVar3 = *(code **)(lVar12 + 0x110);
          ppuVar14 = &PTR_PTR_14c763408;
          if ((pcVar3 != (code *)&LAB_144783426) &&
             (ppuVar14 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
            ppuVar14 = (undefined **)(*pcVar3)(plVar2);
          }
          iVar6 = FUN_144aff48c(ppuVar14);
        }
LAB_1442a61e8:
        lVar12 = *(longlong *)(lVar9 + 0x38);
        lVar4 = *(longlong *)(lVar9 + 0x40);
        iVar7 = 0;
        if ((lVar4 != 0) &&
           (plVar2 = *(longlong **)(lVar4 + 0xb8), iVar7 = 0, plVar2 != (longlong *)0x0)) {
          lVar13 = *plVar2;
          pcVar3 = *(code **)(lVar13 + 0x108);
          if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
            cVar5 = (*pcVar3)(plVar2);
            if (cVar5 == '\0') goto LAB_1442a6251;
            lVar13 = *plVar2;
          }
          pcVar3 = *(code **)(lVar13 + 0x110);
          ppuVar14 = &PTR_PTR_14c763408;
          if ((pcVar3 != (code *)&LAB_144783426) &&
             (ppuVar14 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
            ppuVar14 = (undefined **)(*pcVar3)(plVar2);
          }
          iVar7 = FUN_144aff48c(ppuVar14);
        }
LAB_1442a6251:
        if ((iVar7 == iVar6) && (lVar12 == lVar1)) {
          if (lVar4 == lVar11) goto LAB_1442a6344;
          if ((lVar11 != 0) && (lVar4 != 0)) {
            iVar6 = *(int *)(lVar11 + 0x38);
            iVar7 = *(int *)(lVar4 + 0x38);
            if (((iVar6 <= iVar7) &&
                (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar6 * 8) == lVar11 + 0x30))
               || ((iVar7 <= iVar6 &&
                   (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar7 * 8) ==
                    lVar4 + 0x30)))) goto LAB_1442a6344;
          }
        }
        lVar9 = lVar9 + 0x100;
        lVar15 = lVar15 + -0x100;
      } while (lVar15 != 0);
    }
    lVar9 = 0;
LAB_1442a6344:
    ReleaseSRWLockExclusive((PSRWLOCK)(plVar10 + 0x26));
  }
  return lVar9;
}



// FUNCTION 1442a6414 FUN_1442a6414 body=1342 status=ok
// SIG undefined FUN_1442a6414(void)

void FUN_1442a6414(char *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 4);
  if (*param_1 == '\0') {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1442a6426;
    }
  }
  else {
LAB_1442a6426:
    *param_1 = '\0';
    *(int *)(param_1 + 4) = iVar5 + 1;
  }
  iVar5 = *(int *)(param_1 + 0xc);
  if (param_1[8] == '\0') {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1442a6441;
    }
  }
  else {
LAB_1442a6441:
    param_1[8] = '\0';
    *(int *)(param_1 + 0xc) = iVar5 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x14);
  if (param_1[0x10] == '\0') {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1442a645d;
    }
  }
  else {
LAB_1442a645d:
    param_1[0x10] = '\0';
    *(int *)(param_1 + 0x14) = iVar5 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x1c);
  if (param_1[0x18] == '\0') {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1442a6479;
    }
  }
  else {
LAB_1442a6479:
    param_1[0x18] = '\0';
    *(int *)(param_1 + 0x1c) = iVar5 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x24);
  if (param_1[0x20] == '\0') {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1442a6495;
    }
  }
  else {
LAB_1442a6495:
    param_1[0x20] = '\0';
    *(int *)(param_1 + 0x24) = iVar5 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x2c);
  if (param_1[0x28] == '\0') {
LAB_1442a64b7:
    param_1[0x28] = '\x01';
    *(int *)(param_1 + 0x2c) = iVar5 + 1;
  }
  else if (iVar5 == 0) {
    iVar5 = 0;
    goto LAB_1442a64b7;
  }
  iVar5 = *(int *)(param_1 + 0x34);
  if (param_1[0x30] == '\0') {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1442a64c9;
    }
  }
  else {
LAB_1442a64c9:
    param_1[0x30] = '\0';
    *(int *)(param_1 + 0x34) = iVar5 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x3c);
  if (param_1[0x38] == '\0') {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1442a64e5;
    }
  }
  else {
LAB_1442a64e5:
    param_1[0x38] = '\0';
    *(int *)(param_1 + 0x3c) = iVar5 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x44);
  if (param_1[0x40] == '\0') {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1442a6501;
    }
  }
  else {
LAB_1442a6501:
    param_1[0x40] = '\0';
    *(int *)(param_1 + 0x44) = iVar5 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x4c);
  if (param_1[0x48] == '\0') {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1442a651d;
    }
  }
  else {
LAB_1442a651d:
    param_1[0x48] = '\0';
    *(int *)(param_1 + 0x4c) = iVar5 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x54);
  if (param_1[0x50] == '\0') {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1442a6539;
    }
  }
  else {
LAB_1442a6539:
    param_1[0x50] = '\0';
    *(int *)(param_1 + 0x54) = iVar5 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x5c);
  if (param_1[0x58] == '\0') {
LAB_1442a655b:
    param_1[0x58] = '\x01';
    *(int *)(param_1 + 0x5c) = iVar5 + 1;
  }
  else if (iVar5 == 0) {
    iVar5 = 0;
    goto LAB_1442a655b;
  }
  iVar5 = *(int *)(param_1 + 100);
  if (param_1[0x60] == '\0') {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1442a656d;
    }
  }
  else {
LAB_1442a656d:
    param_1[0x60] = '\0';
    *(int *)(param_1 + 100) = iVar5 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x74);
  if (param_1[0x70] == '\0') {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1442a6589;
    }
  }
  else {
LAB_1442a6589:
    param_1[0x70] = '\0';
    *(int *)(param_1 + 0x74) = iVar5 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x7c);
  if (param_1[0x78] == '\0') {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1442a65a5;
    }
  }
  else {
LAB_1442a65a5:
    param_1[0x78] = '\0';
    *(int *)(param_1 + 0x7c) = iVar5 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x84);
  if (param_1[0x80] == '\0') {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1442a65c7;
    }
  }
  else {
LAB_1442a65c7:
    param_1[0x80] = '\0';
    *(int *)(param_1 + 0x84) = iVar5 + 1;
  }
  iVar5 = *(int *)(param_1 + 0xcc);
  if ((*(float *)(param_1 + 200) != 0.0) || (NAN(*(float *)(param_1 + 200)))) {
LAB_1442a65f8:
    param_1[200] = '\0';
    param_1[0xc9] = '\0';
    param_1[0xca] = '\0';
    param_1[0xcb] = '\0';
    *(int *)(param_1 + 0xcc) = iVar5 + 1;
  }
  else if (iVar5 == 0) {
    iVar5 = 0;
    goto LAB_1442a65f8;
  }
  iVar5 = *(int *)(param_1 + 0xc4);
  if (param_1[0xc0] == -1) {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1442a6623;
    }
  }
  else {
LAB_1442a6623:
    param_1[0xc0] = -1;
    *(int *)(param_1 + 0xc4) = iVar5 + 1;
  }
  iVar5 = *(int *)(param_1 + 0xd8);
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1442a664c;
    }
  }
  else {
LAB_1442a664c:
    param_1[0xd0] = '\0';
    param_1[0xd1] = '\0';
    param_1[0xd2] = '\0';
    param_1[0xd3] = '\0';
    param_1[0xd4] = '\0';
    param_1[0xd5] = '\0';
    param_1[0xd6] = '\0';
    param_1[0xd7] = '\0';
    *(int *)(param_1 + 0xd8) = iVar5 + 1;
  }
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    if (*(int *)(param_1 + 0xe8) == 0) {
      iVar5 = 1;
      goto LAB_1442a667b;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0xe8) + 1;
LAB_1442a667b:
    param_1[0xe0] = '\0';
    param_1[0xe1] = '\0';
    param_1[0xe2] = '\0';
    param_1[0xe3] = '\0';
    param_1[0xe4] = '\0';
    param_1[0xe5] = '\0';
    param_1[0xe6] = '\0';
    param_1[0xe7] = '\0';
    *(int *)(param_1 + 0xe8) = iVar5;
  }
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    if (*(int *)(param_1 + 0xf8) == 0) {
      iVar5 = 1;
      goto LAB_1442a66a8;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0xf8) + 1;
LAB_1442a66a8:
    param_1[0xf0] = '\0';
    param_1[0xf1] = '\0';
    param_1[0xf2] = '\0';
    param_1[0xf3] = '\0';
    param_1[0xf4] = '\0';
    param_1[0xf5] = '\0';
    param_1[0xf6] = '\0';
    param_1[0xf7] = '\0';
    *(int *)(param_1 + 0xf8) = iVar5;
  }
  if (*(longlong *)(param_1 + 0x100) == 0) {
    if (*(int *)(param_1 + 0x108) == 0) {
      iVar5 = 1;
      goto LAB_1442a66d5;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x108) + 1;
LAB_1442a66d5:
    param_1[0x100] = '\0';
    param_1[0x101] = '\0';
    param_1[0x102] = '\0';
    param_1[0x103] = '\0';
    param_1[0x104] = '\0';
    param_1[0x105] = '\0';
    param_1[0x106] = '\0';
    param_1[0x107] = '\0';
    *(int *)(param_1 + 0x108) = iVar5;
  }
  if (*(longlong *)(param_1 + 0x110) == 0) {
    if (*(int *)(param_1 + 0x118) == 0) {
      iVar5 = 1;
      goto LAB_1442a6702;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x118) + 1;
LAB_1442a6702:
    param_1[0x110] = '\0';
    param_1[0x111] = '\0';
    param_1[0x112] = '\0';
    param_1[0x113] = '\0';
    param_1[0x114] = '\0';
    param_1[0x115] = '\0';
    param_1[0x116] = '\0';
    param_1[0x117] = '\0';
    *(int *)(param_1 + 0x118) = iVar5;
  }
  if (param_1[0x1a0] == '\0') {
    if (*(int *)(param_1 + 0x1a4) == 0) {
      iVar5 = 1;
      goto LAB_1442a672e;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x1a4) + 1;
LAB_1442a672e:
    param_1[0x1a0] = '\0';
    *(int *)(param_1 + 0x1a4) = iVar5;
  }
  if ((*(float *)(param_1 + 0x120) != 1.0) || (NAN(*(float *)(param_1 + 0x120)))) {
    iVar5 = *(int *)(param_1 + 0x124) + 1;
  }
  else {
    if (*(int *)(param_1 + 0x124) != 0) goto LAB_1442a677a;
    iVar5 = 1;
  }
  param_1[0x120] = '\0';
  param_1[0x121] = '\0';
  param_1[0x122] = -0x80;
  param_1[0x123] = '?';
  *(int *)(param_1 + 0x124) = iVar5;
LAB_1442a677a:
  FUN_140c12dec(param_1 + 0x158,&DAT_149e02088);
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
  plVar1 = (longlong *)(param_1 + 0x170);
  if ((*(int *)(param_1 + 0x180) != 0) &&
     (cVar4 = FUN_144722c14(plVar1,&DAT_14c844840,0), cVar4 != '\0')) {
    return;
  }
  plVar3 = DAT_14c844840;
  plVar2 = (longlong *)*plVar1;
  if (plVar2 != DAT_14c844840) {
    *plVar1 = (longlong)DAT_14c844840;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x178) = DAT_14c844848;
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  return;
}



// FUNCTION 1442a6952 FUN_1442a6952 body=265 status=ok
// SIG undefined FUN_1442a6952(void)

longlong * FUN_1442a6952(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  void *_Src;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar8 = (undefined8 *)*param_1;
    lVar9 = (longlong)*(int *)(param_1 + 1) << 4;
    do {
      pcVar3 = (code *)*param_3;
      plVar7 = (longlong *)param_3[2];
      if ((longlong *)param_3[2] == (longlong *)0x0) {
        plVar7 = param_3 + 4;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      cVar5 = (*pcVar3)(uVar6,puVar8);
      if (cVar5 != '\0') {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1447a1bd6(param_2,iVar2);
        }
        lVar4 = *param_2;
        lVar10 = (longlong)iVar2 * 0x10;
        puVar1 = (undefined8 *)(lVar4 + lVar10);
        *(undefined8 *)(lVar4 + lVar10) = 0;
        iVar2 = *(int *)(puVar8 + 1);
        _Src = (void *)*puVar8;
        *(int *)(lVar4 + 8 + lVar10) = iVar2;
        if ((longlong)iVar2 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar2,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
        }
      }
      puVar8 = puVar8 + 2;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
  }
  if (*param_3 != 0) {
    plVar7 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  return param_2;
}



// FUNCTION 1442a6a5c FUN_1442a6a5c body=208 status=ok
// SIG undefined FUN_1442a6a5c(void)

undefined8 * FUN_1442a6a5c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_3 + 1);
  lVar1 = (longlong)local_48;
  _Src = (void *)*param_3;
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar1 * 2);
  }
  FUN_140f8bd6c(param_1,&local_40,&local_50);
  param_2[2] = 0;
  param_2[4] = &PTR_FUN_14b9b6940;
  param_2[5] = local_40;
  *(undefined4 *)(param_2 + 6) = local_38;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_34;
  *param_2 = FUN_1442a6b2e;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a6b2e FUN_1442a6b2e body=156 status=ok
// SIG undefined FUN_1442a6b2e(void)

undefined8 FUN_1442a6b2e(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 1);
  uVar7 = iVar8 - 1;
  if (iVar8 == 0) {
    uVar7 = 0;
  }
  if ((int)uVar7 < 1) {
    return 0;
  }
  puVar3 = &DAT_149dfb77a;
  puVar6 = &DAT_149dfb77a;
  if (iVar8 != 0) {
    puVar6 = (undefined2 *)*param_1;
  }
  uVar4 = (ulonglong)uVar7;
  if (*(int *)(param_2 + 1) != 0) {
    puVar3 = (undefined2 *)*param_2;
  }
  lVar5 = 0;
  do {
    uVar1 = *(ushort *)((longlong)puVar3 + lVar5);
    uVar2 = *(ushort *)((longlong)puVar6 + lVar5);
    if (uVar1 == uVar2) {
      iVar8 = 0;
      if ((uVar1 == 0) || (uVar4 == 1)) goto LAB_1442a6bba;
    }
    else {
      if (0x7f < (uVar2 | uVar1)) {
        iVar8 = (uint)uVar1 - (uint)uVar2;
LAB_1442a6bba:
        return CONCAT71((int7)((ulonglong)puVar3 >> 8),iVar8 == 0);
      }
      if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
        iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
        goto LAB_1442a6bba;
      }
      if (uVar4 == 1) {
        iVar8 = 0;
        goto LAB_1442a6bba;
      }
    }
    uVar4 = uVar4 - 1;
    lVar5 = lVar5 + 2;
  } while( true );
}



// FUNCTION 1442a6bca FUN_1442a6bca body=96 status=ok
// SIG undefined FUN_1442a6bca(void)

undefined8 * FUN_1442a6bca(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b9b6940;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  return puVar1;
}



// FUNCTION 1442a6c3c FUN_1442a6c3c body=57 status=ok
// SIG undefined FUN_1442a6c3c(void)

undefined8 * FUN_1442a6c3c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9b6940;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a6c76 FUN_1442a6c76 body=31 status=ok
// SIG undefined FUN_1442a6c76(void)

undefined8 FUN_1442a6c76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a6ce4 FUN_1442a6ce4 body=31 status=ok
// SIG undefined FUN_1442a6ce4(void)

undefined8 FUN_1442a6ce4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a6d88 FUN_1442a6d88 body=29 status=ok
// SIG undefined FUN_1442a6d88(void)

undefined8 FUN_1442a6d88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a6da6 FUN_1442a6da6 body=31 status=ok
// SIG undefined FUN_1442a6da6(void)

undefined8 FUN_1442a6da6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a6e14 FUN_1442a6e14 body=31 status=ok
// SIG undefined FUN_1442a6e14(void)

undefined8 FUN_1442a6e14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a6e82 FUN_1442a6e82 body=29 status=ok
// SIG undefined FUN_1442a6e82(void)

undefined8 FUN_1442a6e82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a7028 FUN_1442a7028 body=101 status=ok
// SIG undefined FUN_1442a7028(void)

void FUN_1442a7028(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b7240;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442a708e FUN_1442a708e body=101 status=ok
// SIG undefined FUN_1442a708e(void)

void FUN_1442a708e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b7240;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442a70f4 FUN_1442a70f4 body=134 status=ok
// SIG undefined FUN_1442a70f4(void)

void FUN_1442a70f4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b7240;
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
                    /* WARNING: Could not recover jumptable at 0x0001442a716b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


