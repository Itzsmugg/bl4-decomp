// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1477761e0 FUN_1477761e0 body=245 status=ok
// SIG undefined FUN_1477761e0(void)

longlong FUN_1477761e0(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14a541440;
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
  *local_40 = &PTR_FUN_14a542e60;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x280,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477762d6 FUN_1477762d6 body=115 status=ok
// SIG undefined FUN_1477762d6(void)

longlong * FUN_1477762d6(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1477785f6(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14777634a FUN_14777634a body=337 status=ok
// SIG undefined FUN_14777634a(void)

void FUN_14777634a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x358);
  FUN_1449db362(param_1 + 0x348);
  FUN_1449db362(param_1 + 0x338);
  FUN_1449db362(param_1 + 0x300);
  if (*(char *)(param_1 + 0x2f0) == '\x01') {
    *(undefined1 *)(param_1 + 0x2f0) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x2d8);
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
  FUN_1449db362(param_1 + 0x2b8);
  FUN_1449db362(param_1 + 0x2a0);
  FUN_1449db362(param_1 + 0x290);
  FUN_1449db362(param_1 + 0x280);
  FUN_1449db362(param_1 + 0x270);
  FUN_1449db362(param_1 + 0x260);
  FUN_1449db362(param_1 + 0x250);
  FUN_1449db362(param_1 + 0x240);
  FUN_1449db362(param_1 + 0x228);
  FUN_1449db362(param_1 + 0x210);
  plVar3 = *(longlong **)(param_1 + 0x200);
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
  FUN_1449db362(param_1 + 0x1d8);
  FUN_1449db362(param_1 + 0x1c8);
  FUN_1449db362(param_1 + 0x1b8);
  FUN_1449db362(param_1 + 0x1a8);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 14777649c FUN_14777649c body=29 status=ok
// SIG undefined FUN_14777649c(void)

undefined8 FUN_14777649c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477764d4 FUN_1477764d4 body=29 status=ok
// SIG undefined FUN_1477764d4(void)

bool FUN_1477764d4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1477764f2 FUN_1477764f2 body=26 status=ok
// SIG undefined FUN_1477764f2(void)

bool FUN_1477764f2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14777650c FUN_14777650c body=24 status=ok
// SIG undefined FUN_14777650c(void)

bool FUN_14777650c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147776524 FUN_147776524 body=101 status=ok
// SIG undefined FUN_147776524(void)

void FUN_147776524(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a542bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777658a FUN_14777658a body=101 status=ok
// SIG undefined FUN_14777658a(void)

void FUN_14777658a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a542bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477765f0 FUN_1477765f0 body=134 status=ok
// SIG undefined FUN_1477765f0(void)

void FUN_1477765f0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a50bb80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a542bc0;
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
                    /* WARNING: Could not recover jumptable at 0x000147776667. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147776676 FUN_147776676 body=63 status=ok
// SIG undefined FUN_147776676(void)

undefined8 FUN_147776676(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1477766b6 FUN_1477766b6 body=218 status=ok
// SIG undefined FUN_1477766b6(void)

bool FUN_1477766b6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar5 = local_40;
  }
  else {
    lVar5 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar4,local_50,param_2,param_3);
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
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147776792 FUN_147776792 body=29 status=ok
// SIG undefined FUN_147776792(void)

undefined8 FUN_147776792(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477767ca FUN_1477767ca body=29 status=ok
// SIG undefined FUN_1477767ca(void)

bool FUN_1477767ca(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1477767e8 FUN_1477767e8 body=26 status=ok
// SIG undefined FUN_1477767e8(void)

bool FUN_1477767e8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147776802 FUN_147776802 body=24 status=ok
// SIG undefined FUN_147776802(void)

bool FUN_147776802(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14777681a FUN_14777681a body=101 status=ok
// SIG undefined FUN_14777681a(void)

void FUN_14777681a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541130;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a542c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147776880 FUN_147776880 body=101 status=ok
// SIG undefined FUN_147776880(void)

void FUN_147776880(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541130;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a542c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477768e6 FUN_1477768e6 body=134 status=ok
// SIG undefined FUN_1477768e6(void)

void FUN_1477768e6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541130;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a542c30;
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
                    /* WARNING: Could not recover jumptable at 0x00014777695d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14777696c FUN_14777696c body=44 status=ok
// SIG undefined FUN_14777696c(void)

void FUN_14777696c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147776995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147776998 FUN_147776998 body=156 status=ok
// SIG undefined FUN_147776998(void)

bool FUN_147776998(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 147776a36 FUN_147776a36 body=29 status=ok
// SIG undefined FUN_147776a36(void)

undefined8 FUN_147776a36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147776a6e FUN_147776a6e body=29 status=ok
// SIG undefined FUN_147776a6e(void)

bool FUN_147776a6e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147776a8c FUN_147776a8c body=26 status=ok
// SIG undefined FUN_147776a8c(void)

bool FUN_147776a8c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147776aa6 FUN_147776aa6 body=24 status=ok
// SIG undefined FUN_147776aa6(void)

bool FUN_147776aa6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147776abe FUN_147776abe body=101 status=ok
// SIG undefined FUN_147776abe(void)

void FUN_147776abe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bbf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a542ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147776b24 FUN_147776b24 body=101 status=ok
// SIG undefined FUN_147776b24(void)

void FUN_147776b24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bbf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a542ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147776b8a FUN_147776b8a body=134 status=ok
// SIG undefined FUN_147776b8a(void)

void FUN_147776b8a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a50bbf0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a542ca0;
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
                    /* WARNING: Could not recover jumptable at 0x000147776c01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147776c10 FUN_147776c10 body=52 status=ok
// SIG undefined FUN_147776c10(void)

void FUN_147776c10(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147776c41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147776c44 FUN_147776c44 body=167 status=ok
// SIG undefined FUN_147776c44(void)

bool FUN_147776c44(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 147776cec FUN_147776cec body=29 status=ok
// SIG undefined FUN_147776cec(void)

undefined8 FUN_147776cec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147776d24 FUN_147776d24 body=29 status=ok
// SIG undefined FUN_147776d24(void)

bool FUN_147776d24(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147776d42 FUN_147776d42 body=26 status=ok
// SIG undefined FUN_147776d42(void)

bool FUN_147776d42(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147776d5c FUN_147776d5c body=24 status=ok
// SIG undefined FUN_147776d5c(void)

bool FUN_147776d5c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147776d74 FUN_147776d74 body=101 status=ok
// SIG undefined FUN_147776d74(void)

void FUN_147776d74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a542d10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147776dda FUN_147776dda body=101 status=ok
// SIG undefined FUN_147776dda(void)

void FUN_147776dda(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a542d10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147776e40 FUN_147776e40 body=134 status=ok
// SIG undefined FUN_147776e40(void)

void FUN_147776e40(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541050;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a542d10;
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
                    /* WARNING: Could not recover jumptable at 0x000147776eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147776ec6 FUN_147776ec6 body=44 status=ok
// SIG undefined FUN_147776ec6(void)

void FUN_147776ec6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147776eef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147776ef2 FUN_147776ef2 body=156 status=ok
// SIG undefined FUN_147776ef2(void)

bool FUN_147776ef2(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 147776f90 FUN_147776f90 body=29 status=ok
// SIG undefined FUN_147776f90(void)

undefined8 FUN_147776f90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147776fc8 FUN_147776fc8 body=29 status=ok
// SIG undefined FUN_147776fc8(void)

bool FUN_147776fc8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147776fe6 FUN_147776fe6 body=26 status=ok
// SIG undefined FUN_147776fe6(void)

bool FUN_147776fe6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147777000 FUN_147777000 body=24 status=ok
// SIG undefined FUN_147777000(void)

bool FUN_147777000(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147777018 FUN_147777018 body=101 status=ok
// SIG undefined FUN_147777018(void)

void FUN_147777018(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a542d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777707e FUN_14777707e body=101 status=ok
// SIG undefined FUN_14777707e(void)

void FUN_14777707e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a542d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477770e4 FUN_1477770e4 body=134 status=ok
// SIG undefined FUN_1477770e4(void)

void FUN_1477770e4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541210;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a542d80;
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
                    /* WARNING: Could not recover jumptable at 0x00014777715b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14777716a FUN_14777716a body=52 status=ok
// SIG undefined FUN_14777716a(void)

void FUN_14777716a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014777719b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14777719e FUN_14777719e body=167 status=ok
// SIG undefined FUN_14777719e(void)

bool FUN_14777719e(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 147777246 FUN_147777246 body=29 status=ok
// SIG undefined FUN_147777246(void)

undefined8 FUN_147777246(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14777727e FUN_14777727e body=29 status=ok
// SIG undefined FUN_14777727e(void)

bool FUN_14777727e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14777729c FUN_14777729c body=26 status=ok
// SIG undefined FUN_14777729c(void)

bool FUN_14777729c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1477772b6 FUN_1477772b6 body=24 status=ok
// SIG undefined FUN_1477772b6(void)

bool FUN_1477772b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1477772ce FUN_1477772ce body=101 status=ok
// SIG undefined FUN_1477772ce(void)

void FUN_1477772ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5412f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a542df0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147777334 FUN_147777334 body=101 status=ok
// SIG undefined FUN_147777334(void)

void FUN_147777334(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5412f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a542df0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777739a FUN_14777739a body=134 status=ok
// SIG undefined FUN_14777739a(void)

void FUN_14777739a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5412f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a542df0;
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
                    /* WARNING: Could not recover jumptable at 0x000147777411. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147777420 FUN_147777420 body=52 status=ok
// SIG undefined FUN_147777420(void)

void FUN_147777420(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147777451. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 147777454 FUN_147777454 body=162 status=ok
// SIG undefined FUN_147777454(void)

bool FUN_147777454(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 1477774f8 FUN_1477774f8 body=29 status=ok
// SIG undefined FUN_1477774f8(void)

undefined8 FUN_1477774f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147777530 FUN_147777530 body=29 status=ok
// SIG undefined FUN_147777530(void)

bool FUN_147777530(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14777754e FUN_14777754e body=26 status=ok
// SIG undefined FUN_14777754e(void)

bool FUN_14777754e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147777568 FUN_147777568 body=24 status=ok
// SIG undefined FUN_147777568(void)

bool FUN_147777568(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147777580 FUN_147777580 body=101 status=ok
// SIG undefined FUN_147777580(void)

void FUN_147777580(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a542e60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477775e6 FUN_1477775e6 body=101 status=ok
// SIG undefined FUN_1477775e6(void)

void FUN_1477775e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a542e60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777764c FUN_14777764c body=134 status=ok
// SIG undefined FUN_14777764c(void)

void FUN_14777764c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a542e60;
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
                    /* WARNING: Could not recover jumptable at 0x0001477776c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477776d2 FUN_1477776d2 body=44 status=ok
// SIG undefined FUN_1477776d2(void)

void FUN_1477776d2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001477776fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1477776fe FUN_1477776fe body=156 status=ok
// SIG undefined FUN_1477776fe(void)

bool FUN_1477776fe(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 14777779c FUN_14777779c body=389 status=ok
// SIG undefined FUN_14777779c(void)

longlong * FUN_14777779c(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x8c0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a542ed0;
  plVar4 = plVar3 + 2;
  FUN_14770f42c(plVar4,1);
  plVar3[2] = (longlong)&PTR_FUN_14a542ef0;
  plVar3[0x4f] = (longlong)&PTR_FUN_14a5431c0;
  plVar3[0x9d] = (longlong)&PTR_FUN_14a5431e0;
  plVar3[0x9f] = (longlong)&PTR_LAB_14a543200;
  *(undefined1 *)(plVar3 + 0x117) = 1;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_14777854e(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1477778b4;
    param_1[1] = 0;
LAB_14777787e:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1477778b4;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_1477778b4;
      goto LAB_14777787e;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1477778b4;
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
LAB_1477778b4:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x8b0;
  FUN_140a52e78(*param_1,"TileViewT<ItemType>","Runtime\\UMG\\Public\\Components/ListViewBase.h",
                0x126);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147777922 FUN_147777922 body=9 status=ok
// SIG undefined FUN_147777922(void)

void FUN_147777922(longlong param_1)

{
  FUN_14771303e(param_1 + 0x10);
  return;
}



// FUNCTION 14777792c FUN_14777792c body=29 status=ok
// SIG undefined FUN_14777792c(void)

undefined8 FUN_14777792c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14777794a FUN_14777794a body=38 status=ok
// SIG undefined FUN_14777794a(void)

undefined8 FUN_14777794a(undefined8 param_1,int param_2)

{
  FUN_14771303e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147777970 FUN_147777970 body=463 status=ok
// SIG undefined FUN_147777970(void)

undefined8 FUN_147777970(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)param_1[0x114];
  if (((plVar2 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x856) == '\x01')) &&
     ((*(char *)((longlong)param_1 + 0x855) != '\0' || (*(char *)(param_4 + 0x21) != '\x01')))) {
    (**(code **)(*plVar2 + 8))(plVar2,&local_38);
    iVar3 = (**(code **)(*param_1 + 0x268))();
    iVar7 = 0;
    if (param_1[0xec] != 0) {
      iVar7 = -1;
      if ((longlong)local_30 != 0) {
        lVar4 = (longlong)local_30 << 3;
        lVar8 = 0;
        do {
          if (*(longlong *)(local_38 + lVar8 * 8) == param_1[0xec]) {
            iVar7 = (int)lVar8;
            break;
          }
          lVar8 = lVar8 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    cVar1 = *(char *)(param_4 + 0x20);
    iVar5 = *(int *)((longlong)param_1 + 0x3ec);
    if ((cVar1 == '\0' && iVar5 == 1) || (cVar1 == '\x02' && iVar5 == 0)) {
      iVar5 = -1;
      if (((char)param_1[0x115] != '\0') || (0 < iVar7 % iVar3)) goto LAB_147777a75;
    }
    else if (((cVar1 == '\x01' && iVar5 == 1) || (cVar1 == '\x03' && iVar5 == 0)) &&
            ((iVar5 = 1, (char)param_1[0x115] != '\0' || (iVar7 % iVar3 < iVar3 + -1)))) {
LAB_147777a75:
      uVar6 = iVar5 + iVar7;
      if (((-1 < (int)uVar6) && ((int)uVar6 < local_30)) &&
         (*(char *)((longlong)param_1 + 0x3e9) != '\0')) {
        (**(code **)(*param_1 + 0x2c8))(param_1,(ulonglong)uVar6 * 8 + local_38,param_4);
        local_48 = 0;
        uStack_40 = 0;
        FUN_146a35cca(param_2);
        goto LAB_1477779c9;
      }
    }
  }
  FUN_14770fa62(param_1,param_2,param_3,param_4);
LAB_1477779c9:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147777b40 FUN_147777b40 body=395 status=ok
// SIG undefined FUN_147777b40(void)

undefined8 FUN_147777b40(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  double dVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [44];
  undefined1 local_6c [4];
  float local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar1 = (double)param_1[0x5e];
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    cVar5 = '\0';
  }
  else {
    cVar5 = (char)param_1[0x66];
  }
  if (param_4 == '\0') {
    cVar3 = FUN_1469ffeec((longlong)param_1 + 0x4c4,-(dVar1 == 0.0) & 1,(char)param_1[0x66],param_3)
    ;
    if (cVar3 != '\0') {
      iVar4 = (**(code **)(*param_1 + 0x268))(param_1);
      uVar6 = FUN_1469ffd82((longlong)param_1 + 0x4c4,param_2,(float)param_3 / (float)iVar4);
      if (((float)uVar6 != 0.0) || (NAN((float)uVar6))) {
        (**(code **)(*param_1 + 0x240))(param_1);
      }
      goto LAB_147777c1d;
    }
  }
  uVar6 = 0;
  if (cVar5 == '\0') {
    dVar1 = (double)param_1[0x5e];
    iVar4 = (**(code **)(*param_1 + 0x268))(param_1);
    uVar2 = FUN_146af6e2c(param_1);
    uVar6 = FUN_146af6d50(param_1);
    FUN_146af3b4e(local_6c,*(undefined4 *)((longlong)param_1 + 0x3ec),uVar6,uVar2);
    uVar6 = (**(code **)(*param_1 + 600))
                      (param_1,(float)((double)(((float)iVar4 * (float)param_3) / local_68) + dVar1)
                      );
  }
LAB_147777c1d:
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147777ccc FUN_147777ccc body=193 status=ok
// SIG undefined FUN_147777ccc(void)

int FUN_147777ccc(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  float local_30;
  undefined1 local_2c [8];
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)(param_1 + 0x334);
  FUN_146af3580(local_2c,*(undefined4 *)(param_1 + 0x3ec));
  uVar3 = FUN_146af6e2c(param_1);
  uVar4 = FUN_146af6d50(param_1);
  FUN_146af3b4e(&local_38,*(undefined4 *)(param_1 + 0x3ec),uVar4,uVar3);
  iVar2 = 1;
  if (0.0 < local_30) {
    iVar2 = (int)ROUND(local_24 / local_30 + local_24 / local_30 + -0.5) >> 1;
  }
  iVar1 = 1;
  if (1 < iVar2) {
    iVar1 = iVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147777d8e FUN_147777d8e body=952 status=ok
// SIG undefined FUN_147777d8e(void)

double * FUN_147777d8e(longlong *param_1,double *param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  double dVar19;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  uint local_110;
  int local_10c;
  longlong *local_108;
  ulonglong local_100;
  undefined8 local_f8;
  float local_f0;
  undefined1 local_e8 [4];
  float local_e4;
  float local_e0;
  undefined1 local_dc [4];
  float local_d8;
  float local_d4;
  longlong local_d0;
  uint local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_146af6b36();
  plVar12 = (longlong *)param_1[0x114];
  if ((plVar12 == (longlong *)0x0) ||
     ((**(code **)(*plVar12 + 8))(plVar12,&local_d0), (int)local_c8 < 1)) {
    *(undefined8 *)((longlong)param_2 + 9) = 0;
    *(undefined8 *)((longlong)param_2 + 0x11) = 0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
  }
  else {
    uVar13 = FUN_146af6e2c(param_1);
    uVar14 = FUN_146af6d50(param_1);
    FUN_146af3b4e(local_dc,*(undefined4 *)((longlong)param_1 + 0x3ec),uVar14,uVar13);
    local_f8 = *param_3;
    FUN_146af3580(local_e8,*(undefined4 *)((longlong)param_1 + 0x3ec));
    iVar4 = (**(code **)(*param_1 + 0x268))(param_1);
    uVar10 = (iVar4 + local_c8) - (int)local_c8 % iVar4;
    if ((int)local_c8 % iVar4 == 0) {
      uVar10 = local_c8;
    }
    dVar19 = (double)(int)uVar10 - (double)(local_e4 / local_d8) * (double)iVar4;
    dVar2 = (double)param_1[0x5d];
    if (dVar19 <= (double)param_1[0x5d]) {
      dVar2 = dVar19;
    }
    dVar19 = 0.0;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    uVar13 = *(undefined4 *)(param_3 + 1);
    FUN_146af35b6(&local_f8,*(undefined4 *)((longlong)param_1 + 0x3ec));
    dVar1 = dVar2 / (double)iVar4;
    uVar10 = ((int)ROUND(dVar1 + dVar1 + -0.5) >> 1) * iVar4;
    uVar6 = 0;
    uVar11 = (ulonglong)uVar10;
    if ((int)uVar10 < 1) {
      uVar11 = uVar6;
    }
    plVar12 = param_1 + 0x9e;
    uVar5 = FUN_147715eea(plVar12);
    if ((int)uVar11 < (int)local_c8) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = dVar1;
      auVar16 = roundsd(ZEXT816(0),auVar16,0xb);
      lVar7 = uVar11 * 8;
      bVar3 = true;
      dVar19 = 0.0;
      local_110 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      local_10c = (int)uVar11;
      local_108 = plVar12;
      local_100 = (ulonglong)local_c8;
      do {
        if (bVar3) {
          fVar15 = 1.0 - (float)(dVar1 - auVar16._0_8_);
          if ((local_110 & 1) == 0) {
            fVar15 = 1.0;
          }
          fVar18 = local_d8 * fVar15 + local_f8._4_4_;
          local_f8 = CONCAT44(fVar18,(undefined4)local_f8);
          if ((local_e4 < fVar18) && (fVar15 = 1.0 - (fVar18 - local_e4) / local_d8, fVar15 <= 0.0))
          {
            fVar15 = 0.0;
          }
          dVar19 = dVar19 + (double)fVar15;
          local_110 = 0;
          bVar3 = false;
        }
        local_118 = uVar13;
        FUN_147715bd4(param_1,local_d0 + lVar7,uVar11 & 0xffffffff,local_10c);
        local_f0 = local_f0 + local_d4;
        uVar6 = (ulonglong)(local_c8 - 1 <= uVar11);
        if (local_e0 < local_f0 + local_d4) {
          local_f0 = 0.0;
          bVar3 = true;
        }
        if ((local_c8 - 1 <= uVar11) || (bVar3)) {
          bVar8 = local_e4 + 0.001 < local_f8._4_4_;
        }
        else {
          bVar8 = false;
        }
        if (bVar8 != false) break;
        uVar11 = uVar11 + 1;
        lVar7 = lVar7 + 8;
      } while (uVar11 < local_100);
      bVar9 = bVar8 ^ 1;
      plVar12 = local_108;
    }
    else {
      bVar9 = 1;
    }
    FUN_1477142c6(plVar12);
    FUN_143332556(plVar12);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = dVar19;
    auVar16 = roundpd(auVar17,auVar17,2);
    *param_2 = dVar2;
    param_2[1] = (double)(float)((double)local_d8 * auVar16._0_8_);
    param_2[2] = dVar19;
    *(byte *)(param_2 + 3) = bVar9 & (byte)uVar6;
  }
  if ((local_c0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147778148 FUN_147778148 body=127 status=ok
// SIG undefined FUN_147778148(void)

int FUN_147778148(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)param_1[0x114];
  iVar4 = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,local_30);
    iVar4 = local_28;
  }
  iVar2 = (**(code **)(*param_1 + 0x268))(param_1);
  iVar3 = 0;
  if (0 < iVar2) {
    iVar3 = 0;
    if (0 < iVar4 % iVar2) {
      iVar3 = iVar2 - iVar4 % iVar2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar3 + iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477781c8 FUN_1477781c8 body=901 status=ok
// SIG undefined FUN_1477781c8(void)

bool FUN_1477781c8(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  float fStack_5c;
  int local_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_1[0xf9] != 0) && (plVar3 = (longlong *)param_1[0x114], plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 8))(plVar3,&local_60);
    if ((longlong)local_58 != 0) {
      lVar7 = (longlong)local_58 << 3;
      lVar8 = 0;
      do {
        if (*(longlong *)(CONCAT44(fStack_5c,local_60) + lVar8 * 8) == param_1[0xf9]) {
          if ((int)lVar8 != -1) {
            local_68 = *param_2;
            FUN_146af3580(&local_60,*(undefined4 *)((longlong)param_1 + 0x3ec));
            fVar18 = fStack_5c;
            FUN_146af6e2c(param_1);
            FUN_146af6d50(param_1);
            FUN_146af3b4e(&local_78,*(undefined4 *)((longlong)param_1 + 0x3ec));
            fVar18 = fVar18 / local_78._4_4_;
            fVar10 = (float)(**(code **)(*param_1 + 0x260))(param_1);
            if ((fVar10 == 0.0) && (!NAN(fVar10))) {
              cVar4 = FUN_146af5c6c(param_1);
              if (cVar4 != '\0') {
                bVar9 = true;
                if (((double)param_1[100] == 0.0) && (!NAN((double)param_1[100])))
                goto LAB_1477782c4;
              }
            }
            FUN_146af65f2(param_1);
            iVar5 = (**(code **)(*param_1 + 0x268))(param_1);
            dVar11 = (double)FUN_146af485c(param_1);
            dVar12 = (double)iVar5;
            dVar11 = dVar11 / dVar12;
            fVar10 = (float)iVar5;
            fVar13 = (float)(int)lVar8 / fVar10;
            iVar6 = (int)ROUND(fVar13 + fVar13 + -0.5) >> 1;
            dVar14 = dVar11 + (double)fVar18;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = dVar11;
            auVar16._0_8_ =
                 (double)(((int)ROUND(-0.5 - (dVar11 + dVar11)) >> 1) +
                         ((int)ROUND(dVar14 + dVar14 + -0.5) >> 1)) + dVar11;
            auVar16._8_8_ = 0;
            dVar11 = (double)iVar6;
            if (*(char *)((longlong)param_1 + 0x859) == '\x01') {
              auVar17 = roundpd(auVar17,auVar17,1);
              dVar14 = auVar17._0_8_;
              if (dVar11 < dVar14) {
LAB_1477784a2:
                dVar11 = (double)(fVar18 * -0.5 + (float)iVar6) * dVar12;
                iVar5 = (**(code **)(*param_1 + 0x298))(param_1);
                dVar12 = (double)iVar5 - (double)fVar18 * dVar12;
                if (dVar12 <= dVar11) {
                  dVar11 = dVar12;
                }
                if (dVar11 <= 0.0) {
                  dVar11 = 0.0;
                }
                fVar10 = (float)dVar11;
              }
              else {
                auVar16 = roundpd(auVar16,auVar16,2);
                dVar15 = auVar16._0_8_;
                if (dVar15 < dVar11) goto LAB_1477784a2;
                if ((dVar14 != dVar11) || (NAN(dVar14) || NAN(dVar11))) {
                  if ((dVar15 != dVar11) || (NAN(dVar15) || NAN(dVar11))) goto LAB_1477784f5;
                  fVar13 = 0.0;
                  if ((char)param_1[0x5a] == '\0') {
                    fVar13 = *(float *)(param_1 + 0x10a);
                  }
                  fVar10 = (((float)iVar6 - fVar18) + 1.0 + fVar13) * fVar10;
                }
                else {
                  if ((iVar6 < 1) || (fVar10 = 0.0, (char)param_1[0x5a] == '\0')) {
                    fVar10 = *(float *)(param_1 + 0x10a);
                  }
                  fVar10 = (float)(iVar5 * iVar6) - fVar10;
                }
              }
              FUN_146af48d8(param_1,fVar10);
            }
            else {
              auVar17 = roundpd(ZEXT416((uint)fVar10),auVar17,2);
              if (dVar11 < auVar17._0_8_) goto LAB_1477784a2;
              auVar16 = roundpd(auVar16,auVar16,1);
              if (auVar16._0_8_ < dVar11) goto LAB_1477784a2;
            }
LAB_1477784f5:
            (**(code **)(*param_1 + 0x240))(param_1);
            param_1[0xfb] = param_1[0xf9];
          }
          break;
        }
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
    param_1[0xf9] = 0;
  }
  bVar9 = false;
  if ((param_1[0xfb] != 0) && ((char)param_1[0x5b] == '\x01')) {
    local_78 = param_1[0xfb];
    (**(code **)(param_1[0x9d] + 0xd8))(param_1 + 0x9d,&local_60);
    plVar3 = (longlong *)CONCAT44(uStack_54,local_58);
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
    bVar9 = CONCAT44(fStack_5c,local_60) == 0;
  }
LAB_1477782c4:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14777854e FUN_14777854e body=167 status=ok
// SIG undefined FUN_14777854e(void)

void FUN_14777854e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1477785c9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1477785c9;
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
LAB_1477785c9:
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
                    /* WARNING: Could not recover jumptable at 0x0001477785e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1477785f6 FUN_1477785f6 body=2028 status=ok
// SIG undefined FUN_1477785f6(void)

void FUN_1477785f6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_5b8 [32];
  longlong **local_598;
  longlong local_590;
  undefined4 local_588;
  longlong local_580;
  undefined8 local_578;
  undefined1 local_570;
  undefined2 local_568;
  undefined8 local_560;
  undefined4 local_558;
  undefined1 local_549;
  undefined8 local_548;
  longlong *plStack_540;
  longlong *local_530 [2];
  undefined1 local_520 [16];
  undefined1 local_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  longlong *local_4f0;
  undefined8 local_4e8;
  longlong *local_4e0;
  longlong local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  longlong *plStack_4c0;
  undefined1 local_4b0 [8];
  longlong *local_4a8;
  longlong *plStack_4a0;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_2 + 0xa2);
  FUN_147717182((longlong *)(param_1 + 0x6a0),param_2 + 0x1a8);
  FUN_146a3ba92(param_1 + 0x6e0,param_2 + 0x1b8);
  FUN_14771728a(param_1 + 0x6f0,param_2 + 0x1d8);
  plVar9 = *(longlong **)(param_1 + 0x10);
  if (plVar9 == (longlong *)0x0) {
LAB_14777866f:
    local_4c8 = 0;
    plStack_4c0 = (longlong *)0x0;
    bVar11 = true;
  }
  else {
    iVar7 = (int)plVar9[1];
    do {
      if (iVar7 == 0) goto LAB_14777866f;
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar11 = iVar7 == iVar4;
      if (bVar11) {
        *(int *)(plVar9 + 1) = iVar7 + 1;
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      UNLOCK();
    } while (!bVar11);
    uVar8 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
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
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    bVar11 = false;
    local_4c8 = uVar8;
    plStack_4c0 = plVar9;
  }
  plVar9 = plStack_4c0;
  FUN_147778de4(param_2,local_4b0,&local_4c8);
  FUN_147716e02(param_1,local_4b0);
  if (!bVar11) {
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
  FUN_146a3c65e(param_1 + 0x370,param_2 + 0x250);
  FUN_14009d848(param_1 + 0x380,param_2 + 0x260);
  FUN_146229de2(param_1 + 0x808,param_2 + 0x270);
  FUN_146229de2(param_1 + 0x818,param_2 + 0x280);
  FUN_147708582(param_1 + 0x7e8,param_2 + 0x290);
  FUN_1469b6af2(param_1 + 0x7f8,param_2 + 0x2a0);
  *(undefined1 *)(param_1 + 0x394) = *(undefined1 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_2 + 0x2b0);
  FUN_146a3c86e(param_1 + 0x398,param_2 + 0x2b8);
  *(undefined1 *)(param_1 + 0x854) = *(undefined1 *)(param_2 + 0x2c8);
  *(undefined1 *)(param_1 + 0x4c8) = *(undefined1 *)(param_2 + 0x311);
  *(undefined1 *)(param_1 + 0x4c9) = *(undefined1 *)(param_2 + 0x321);
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_2 + 0x324);
  *(undefined1 *)(param_1 + 0x855) = *(undefined1 *)(param_2 + 0x328);
  *(undefined1 *)(param_1 + 0x856) = *(undefined1 *)(param_2 + 0x329);
  *(undefined2 *)(param_1 + 0x838) = *(undefined2 *)(param_2 + 0x330);
  FUN_14096c7c0(param_1 + 0x840,param_2 + 0x338);
  *(undefined1 *)(param_1 + 0x2d8) = *(undefined1 *)(param_2 + 0x2e4);
  if ((undefined8 *)(param_2 + 0x2e8) != (undefined8 *)(param_1 + 0x2c8)) {
    if (*(char *)(param_2 + 0x2f0) == '\x01') {
      *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x2e8);
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x2d0) != '\x01') goto LAB_1477787f7;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x2d0) = uVar6;
  }
LAB_1477787f7:
  if (*(longlong **)(param_2 + 0x348) != (longlong *)0x0 && *(int *)(param_2 + 0x350) != 0) {
    cVar5 = (**(code **)(**(longlong **)(param_2 + 0x348) + 0x30))();
    if (cVar5 != '\0') {
      local_4a8 = (longlong *)0x0;
      plStack_4a0 = (longlong *)((ulonglong)plStack_4a0 & 0xffffffff00000000);
      FUN_147717de0(&local_4a8,param_2 + 0x348);
      goto LAB_1477788b7;
    }
  }
  local_4a8 = (longlong *)0x0;
  plStack_4a0._0_4_ = 0;
  FUN_1446efa72(&local_4a8,0,2,0x10);
  plStack_4a0 = (longlong *)CONCAT44(plStack_4a0._4_4_,2);
  *local_4a8 = (longlong)&PTR_LAB_14a50c8c0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_4a8[2] = lVar10;
  *local_4a8 = (longlong)&PTR_FUN_14a50c850;
  local_4a8[3] = (longlong)FUN_147717e64;
LAB_1477788b7:
  FUN_147717de0(param_1 + 0x6c0,&local_4a8);
  FUN_1449db362(&local_4a8);
  FUN_14009d848(param_1 + 0x6d0,param_2 + 0x358);
  *(undefined1 *)(param_1 + 0x8a8) = *(undefined1 *)(param_2 + 0x368);
  local_4d8 = 0;
  uStack_4d0 = 0;
  if (((*(int *)(param_1 + 0x6a8) == 0) ||
      (plVar9 = *(longlong **)(param_1 + 0x6a0), plVar9 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*plVar9 + 0x30))(), cVar5 == '\0')) {
    FUN_1400020e8(&local_4d8,L"Please specify an OnGenerateTile. \n",0x23);
  }
  if (*(longlong *)(param_1 + 0x8a0) == 0) {
    FUN_1400020e8(&local_4d8,L"Please specify a ListItemsSource. \n",0x23);
  }
  if ((int)uStack_4d0 - 2U < 0x7fffffff) {
    *(undefined1 **)(param_1 + 0x228) = &DAT_200000002;
    FUN_140a570d8(&local_4a8);
    FUN_140009b9a(local_530,&local_4d8);
    FUN_14023423e(local_520,local_530);
    local_510 = 1;
    local_508 = 0;
    uStack_500 = 0;
    uVar8 = FUN_140a54906(&local_4a8,local_520);
    local_598 = (longlong **)&local_549;
    FUN_140a54526(&local_548,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/STileView.h",0xcf);
    FUN_140a52852(&local_548,&local_4f8,uVar8);
    local_4e8 = local_4f8;
    local_4e0 = local_4f0;
    if (local_4f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_4f0 + 1) = (int)local_4f0[1] + 1;
      UNLOCK();
    }
    FUN_140a58896(param_1 + 0x1e0,&local_4e8);
    plVar9 = local_4e0;
    if (local_4e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_4e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_4e0)(local_4e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (local_4f0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_4f0 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_4f0)(local_4f0);
        LOCK();
        piVar2 = (int *)((longlong)local_4f0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_4f0 + 0x10))(local_4f0);
        }
      }
    }
    plVar9 = plStack_540;
    if (plStack_540 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_540 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_540)(plStack_540);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (local_530[0] != (longlong *)0x0) {
      (**(code **)(*local_530[0] + 0x10))();
    }
    FUN_140a59ae6(&local_4a8);
  }
  else {
    local_578 = *(undefined8 *)(param_2 + 0x318);
    local_580 = param_2 + 0x1c8;
    local_588 = *(undefined4 *)(param_2 + 0x2e0);
    local_590 = param_2 + 0x2d0;
    local_4a8 = (longlong *)0x0;
    plStack_4a0 = (longlong *)0x0;
    local_570 = 0;
    local_598 = &local_4a8;
    FUN_1429092be(param_1,param_2 + 0x220,param_2 + 0x208,param_2 + 0x238);
    plVar9 = plStack_4a0;
    if (plStack_4a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_4a0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_4a0)(plStack_4a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (*(longlong *)(param_1 + 0x298) != 0) {
      FUN_146a92d5a(*(longlong *)(param_1 + 0x298),*(undefined1 *)(param_2 + 0x310));
      lVar3 = *(longlong *)(param_1 + 0x298);
      local_568 = *(undefined2 *)(param_2 + 0x2f8);
      local_560 = 0;
      local_558 = 0;
      FUN_140fe25fc(&local_560,param_2 + 0x300);
      *(undefined1 *)(lVar3 + 0x2a0) = (undefined1)local_568;
      *(undefined1 *)(lVar3 + 0x2a1) = local_568._1_1_;
      FUN_140fe25fc(lVar3 + 0x2a8,&local_560);
      FUN_1449db362(&local_560);
      FUN_146a92e6c(*(undefined8 *)(param_1 + 0x298),*(undefined1 *)(param_2 + 800));
    }
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_147778cdb:
      local_548 = 0;
      plStack_540 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar9[1];
      do {
        if (iVar7 == 0) goto LAB_147778cdb;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar11 = iVar7 == iVar4;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar4 = iVar7;
        }
        iVar7 = iVar4;
        UNLOCK();
      } while (!bVar11);
      local_548 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_540 = plVar9;
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
    plVar9 = (longlong *)FUN_14001cc68(0x28,0x10);
    FUN_147778f96(plVar9,&local_548);
    local_4a8 = plVar9 + 2;
    plStack_4a0 = plVar9;
    FUN_147717104(param_1,&local_4a8);
    plVar9 = plStack_4a0;
    if (plStack_4a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_4a0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_4a0)(plStack_4a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    plVar9 = plStack_540;
    if (plStack_540 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_540 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_540)(plStack_540);
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
  if (local_4d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_5b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147778de4 FUN_147778de4 body=432 status=ok
// SIG undefined FUN_147778de4(void)

undefined8 * FUN_147778de4(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x1e8);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x1f0);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x1f8);
      if (lVar3 == 0) {
        *param_2 = 0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x200);
        if (plVar4 == (longlong *)0x0) {
          uVar6 = FUN_14001cc68(0x30,0x10);
          local_38 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          uVar6 = FUN_14001cc68(0x30,0x10);
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          local_38 = plVar4;
        }
        local_50 = *param_3;
        local_48 = param_3[1];
        if (local_48 != 0) {
          LOCK();
          *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
          UNLOCK();
        }
        local_40 = lVar3;
        FUN_1477178de(uVar6,&local_50,&local_40);
        *param_2 = uVar6;
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
      }
    }
    else {
      uVar6 = FUN_14001cc68(0x28,0x10);
      local_40 = *param_3;
      local_38 = (longlong *)param_3[1];
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      FUN_147717348(uVar6,&local_40,lVar3);
      *param_2 = uVar6;
    }
  }
  else {
    puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar5 = &PTR_FUN_14a50c6a0;
    puVar5[1] = lVar3;
    *param_2 = puVar5;
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147778f96 FUN_147778f96 body=150 status=ok
// SIG undefined FUN_147778f96(void)

undefined8 * FUN_147778f96(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a50c950;
  plVar3 = (longlong *)param_2[1];
  lVar4 = *param_2 + 0x4e8;
  if (*param_2 == 0) {
    lVar4 = 0;
  }
  if (plVar3 == (longlong *)0x0) {
    param_1[2] = &PTR_FUN_14a50c970;
    param_1[3] = lVar4;
    param_1[4] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    param_1[2] = &PTR_FUN_14a50c970;
    param_1[3] = lVar4;
    param_1[4] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
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
  return param_1;
}



// FUNCTION 14777902c FUN_14777902c body=29 status=ok
// SIG undefined FUN_14777902c(void)

undefined8 FUN_14777902c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147779064 FUN_147779064 body=29 status=ok
// SIG undefined FUN_147779064(void)

bool FUN_147779064(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147779082 FUN_147779082 body=26 status=ok
// SIG undefined FUN_147779082(void)

bool FUN_147779082(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14777909c FUN_14777909c body=24 status=ok
// SIG undefined FUN_14777909c(void)

bool FUN_14777909c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1477790b4 FUN_1477790b4 body=101 status=ok
// SIG undefined FUN_1477790b4(void)

void FUN_1477790b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541520;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5432f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777911a FUN_14777911a body=101 status=ok
// SIG undefined FUN_14777911a(void)

void FUN_14777911a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541520;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5432f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147779180 FUN_147779180 body=134 status=ok
// SIG undefined FUN_147779180(void)

void FUN_147779180(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541520;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5432f0;
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
                    /* WARNING: Could not recover jumptable at 0x0001477791f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147779206 FUN_147779206 body=52 status=ok
// SIG undefined FUN_147779206(void)

void FUN_147779206(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147779237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14777923a FUN_14777923a body=167 status=ok
// SIG undefined FUN_14777923a(void)

bool FUN_14777923a(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 1477792e2 FUN_1477792e2 body=182 status=ok
// SIG undefined FUN_1477792e2(void)

undefined4 * FUN_1477792e2(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 1;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  uVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_28,"TreeView",1);
  uVar1 = FUN_1458178ee(uVar1,local_28,0,0);
  *(undefined8 *)(param_1 + 2) = uVar1;
  uVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_30,"ScrollBar",1);
  uVar1 = FUN_145817968(uVar1,local_30,0,0);
  *(undefined8 *)(param_1 + 4) = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14777939a FUN_14777939a body=720 status=ok
// SIG undefined FUN_14777939a(void)

undefined8
FUN_14777939a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_448 [39];
  undefined1 local_421;
  code *local_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 local_408;
  undefined1 local_404;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined1 local_3f0 [424];
  undefined8 local_248;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 local_108 [32];
  undefined1 local_e8;
  undefined1 local_b7;
  undefined8 local_b0;
  undefined1 local_80;
  undefined1 local_7c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_448;
  FUN_14777966c(local_3f0);
  plVar3 = local_1b8;
  local_80 = 1;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  if (local_1b8 != (longlong *)0x0) {
    local_1b8 = (longlong *)0x0;
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
  local_e8 = *(undefined1 *)(param_4 + 1);
  local_b7 = *(undefined1 *)((longlong)param_4 + 5);
  local_408 = *param_4;
  local_404 = 1;
  local_400 = 0;
  uStack_3f8 = 0;
  local_10c = 1;
  local_1d0 = param_3;
  local_110 = local_408;
  FUN_144a450dc(local_108,&local_400);
  FUN_1449db362(&local_400);
  local_7c = *(undefined1 *)((longlong)param_4 + 6);
  local_248 = *(undefined8 *)(param_4 + 2);
  local_b0 = *(undefined8 *)(param_4 + 4);
  local_420 = FUN_14776a9fc;
  local_418 = 0x290;
  uVar4 = FUN_1477798c4(local_3f0,param_2,&local_420);
  local_420 = FUN_14776acd6;
  local_418 = 0x290;
  uVar4 = FUN_1477799ba(uVar4,param_2,&local_420);
  local_420 = (code *)&LAB_14776adfc;
  local_418 = 0x290;
  uVar4 = FUN_147779ab0(uVar4,param_2,&local_420);
  local_420 = FUN_14773d7da;
  local_418 = 0;
  uVar4 = FUN_147779ba6(uVar4,param_2,&local_420);
  local_420 = FUN_14776aff6;
  local_418 = 0x290;
  uVar4 = FUN_147779c9c(uVar4,param_2,&local_420);
  local_420 = FUN_14776b16a;
  local_418 = 0x290;
  uVar4 = FUN_147779d92(uVar4,param_2,&local_420);
  local_420 = FUN_14776b416;
  local_418 = 0x290;
  uVar4 = FUN_147779e88(uVar4,param_2,&local_420);
  local_420 = FUN_14776b53a;
  local_418 = 0x290;
  uVar4 = FUN_147779f7e(uVar4,param_2,&local_420);
  local_420 = (code *)&LAB_14777a16a;
  local_418 = 0x290;
  uVar4 = FUN_14777a074(uVar4,param_2,&local_420);
  local_420 = FUN_14777a26e;
  local_418 = 0x290;
  uVar4 = FUN_14777a178(uVar4,param_2,&local_420);
  FUN_14777bdc0(&local_420,&local_421);
  FUN_14777a326(&local_420,param_1,uVar4);
  plVar3 = (longlong *)CONCAT44(uStack_414,local_418);
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
  FUN_14777a39a(local_3f0);
  if ((local_50 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14777966c FUN_14777966c body=598 status=ok
// SIG undefined FUN_14777966c(void)

longlong FUN_14777966c(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_30,"TreeView",1);
  uVar4 = 0;
  uVar3 = FUN_1458178ee(lVar2,local_30,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1cc) = 0;
  *(undefined8 *)(param_1 + 0x1d4) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x23d) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 600) = 6;
  *(undefined1 *)(param_1 + 0x25c) = 1;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 3;
  *(undefined1 *)(param_1 + 0x2e4) = 1;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined1 *)(param_1 + 0x308) = 1;
  *(undefined1 *)(param_1 + 0x330) = 0;
  *(undefined2 *)(param_1 + 0x338) = 0;
  *(undefined1 *)(param_1 + 0x33a) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined1 *)(param_1 + 800) = 0;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_38,"ScrollBar",1);
  uVar3 = FUN_145817968(lVar2,local_38,0,0);
  *(undefined8 *)(param_1 + 0x340) = uVar3;
  *(undefined1 *)(param_1 + 0x348) = 0;
  lVar2 = DAT_14c96b2f0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar1 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar1 ^ 1);
  }
  *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(lVar2 + uVar4 * 4);
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0x101;
  *(undefined1 *)(param_1 + 0x374) = 0;
  *(undefined2 *)(param_1 + 0x378) = 0x100;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x38c) = 0;
  *(undefined8 *)(param_1 + 0x394) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477798c4 FUN_1477798c4 body=245 status=ok
// SIG undefined FUN_1477798c4(void)

longlong FUN_1477798c4(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14a50bb80;
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
  *local_40 = &PTR_FUN_14a543370;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x1b0,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477799ba FUN_1477799ba body=245 status=ok
// SIG undefined FUN_1477799ba(void)

longlong FUN_1477799ba(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14a50bbf0;
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
  *local_40 = &PTR_FUN_14a5433e0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x2b0,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147779ab0 FUN_147779ab0 body=245 status=ok
// SIG undefined FUN_147779ab0(void)

longlong FUN_147779ab0(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14a541050;
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
  *local_40 = &PTR_FUN_14a543450;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x2d0,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147779ba6 FUN_147779ba6 body=245 status=ok
// SIG undefined FUN_147779ba6(void)

longlong FUN_147779ba6(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14a541130;
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
  *local_40 = &PTR_FUN_14a5434c0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x1d0,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147779c9c FUN_147779c9c body=245 status=ok
// SIG undefined FUN_147779c9c(void)

longlong FUN_147779c9c(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14a541210;
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
  *local_40 = &PTR_FUN_14a543530;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x1f0,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147779d92 FUN_147779d92 body=245 status=ok
// SIG undefined FUN_147779d92(void)

longlong FUN_147779d92(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14a5412f0;
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
  *local_40 = &PTR_FUN_14a5435a0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x1e0,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147779e88 FUN_147779e88 body=245 status=ok
// SIG undefined FUN_147779e88(void)

longlong FUN_147779e88(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14a541440;
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
  *local_40 = &PTR_FUN_14a543610;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x290,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147779f7e FUN_147779f7e body=245 status=ok
// SIG undefined FUN_147779f7e(void)

longlong FUN_147779f7e(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14a541440;
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
  *local_40 = &PTR_FUN_14a543610;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x2a0,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14777a074 FUN_14777a074 body=245 status=ok
// SIG undefined FUN_14777a074(void)

longlong FUN_14777a074(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14a5436f0;
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
  *local_40 = &PTR_FUN_14a543680;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x200,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14777a178 FUN_14777a178 body=245 status=ok
// SIG undefined FUN_14777a178(void)

longlong FUN_14777a178(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14a5437d0;
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
  *local_40 = &PTR_FUN_14a543760;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x2c0,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14777a26e FUN_14777a26e body=182 status=ok
// SIG undefined FUN_14777a26e(void)

void FUN_14777a26e(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  FUN_14776a1e0(param_1,&local_38);
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x240))(local_38,param_3);
  }
  (**(code **)(*param_1 + 0xc0))(param_1,local_28,param_3);
  uVar3 = (**(code **)(*param_1 + 0x38))(param_1);
  FUN_14776ceba(uVar3,local_28,param_3);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14777a326 FUN_14777a326 body=115 status=ok
// SIG undefined FUN_14777a326(void)

longlong * FUN_14777a326(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1477811ae(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14777a39a FUN_14777a39a body=414 status=ok
// SIG undefined FUN_14777a39a(void)

void FUN_14777a39a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x390);
  FUN_1449db362(param_1 + 0x380);
  FUN_1449db362(param_1 + 0x360);
  FUN_1449db362(param_1 + 0x350);
  if (*(char *)(param_1 + 0x330) == '\x01') {
    *(undefined1 *)(param_1 + 0x330) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x318);
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
  plVar3 = *(longlong **)(param_1 + 0x300);
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
  FUN_1449db362(param_1 + 0x2e8);
  FUN_1449db362(param_1 + 0x2d0);
  FUN_1449db362(param_1 + 0x2c0);
  FUN_1449db362(param_1 + 0x2b0);
  FUN_1449db362(param_1 + 0x2a0);
  FUN_1449db362(param_1 + 0x290);
  FUN_1449db362(param_1 + 0x280);
  FUN_1449db362(param_1 + 0x270);
  FUN_1449db362(param_1 + 0x260);
  FUN_1449db362(param_1 + 0x248);
  plVar3 = *(longlong **)(param_1 + 0x238);
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
  FUN_1449db362(param_1 + 0x210);
  FUN_1449db362(param_1 + 0x200);
  FUN_1449db362(param_1 + 0x1f0);
  FUN_1449db362(param_1 + 0x1e0);
  FUN_1449db362(param_1 + 0x1d0);
  FUN_1449db362(param_1 + 0x1c0);
  FUN_1449db362(param_1 + 0x1b0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 14777a538 FUN_14777a538 body=29 status=ok
// SIG undefined FUN_14777a538(void)

undefined8 FUN_14777a538(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14777a570 FUN_14777a570 body=29 status=ok
// SIG undefined FUN_14777a570(void)

bool FUN_14777a570(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14777a58e FUN_14777a58e body=26 status=ok
// SIG undefined FUN_14777a58e(void)

bool FUN_14777a58e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14777a5a8 FUN_14777a5a8 body=24 status=ok
// SIG undefined FUN_14777a5a8(void)

bool FUN_14777a5a8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14777a5c0 FUN_14777a5c0 body=101 status=ok
// SIG undefined FUN_14777a5c0(void)

void FUN_14777a5c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a543370;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777a626 FUN_14777a626 body=101 status=ok
// SIG undefined FUN_14777a626(void)

void FUN_14777a626(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a543370;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777a68c FUN_14777a68c body=134 status=ok
// SIG undefined FUN_14777a68c(void)

void FUN_14777a68c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a50bb80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a543370;
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
                    /* WARNING: Could not recover jumptable at 0x00014777a703. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14777a712 FUN_14777a712 body=63 status=ok
// SIG undefined FUN_14777a712(void)

undefined8 FUN_14777a712(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 14777a752 FUN_14777a752 body=218 status=ok
// SIG undefined FUN_14777a752(void)

bool FUN_14777a752(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar5 = local_40;
  }
  else {
    lVar5 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar4,local_50,param_2,param_3);
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
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14777a82e FUN_14777a82e body=29 status=ok
// SIG undefined FUN_14777a82e(void)

undefined8 FUN_14777a82e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14777a866 FUN_14777a866 body=29 status=ok
// SIG undefined FUN_14777a866(void)

bool FUN_14777a866(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14777a884 FUN_14777a884 body=26 status=ok
// SIG undefined FUN_14777a884(void)

bool FUN_14777a884(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14777a89e FUN_14777a89e body=24 status=ok
// SIG undefined FUN_14777a89e(void)

bool FUN_14777a89e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14777a8b6 FUN_14777a8b6 body=101 status=ok
// SIG undefined FUN_14777a8b6(void)

void FUN_14777a8b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bbf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5433e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777a91c FUN_14777a91c body=101 status=ok
// SIG undefined FUN_14777a91c(void)

void FUN_14777a91c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bbf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5433e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777a982 FUN_14777a982 body=134 status=ok
// SIG undefined FUN_14777a982(void)

void FUN_14777a982(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a50bbf0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5433e0;
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
                    /* WARNING: Could not recover jumptable at 0x00014777a9f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14777aa08 FUN_14777aa08 body=52 status=ok
// SIG undefined FUN_14777aa08(void)

void FUN_14777aa08(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014777aa39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14777aa3c FUN_14777aa3c body=167 status=ok
// SIG undefined FUN_14777aa3c(void)

bool FUN_14777aa3c(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 14777aae4 FUN_14777aae4 body=29 status=ok
// SIG undefined FUN_14777aae4(void)

undefined8 FUN_14777aae4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14777ab1c FUN_14777ab1c body=29 status=ok
// SIG undefined FUN_14777ab1c(void)

bool FUN_14777ab1c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14777ab3a FUN_14777ab3a body=26 status=ok
// SIG undefined FUN_14777ab3a(void)

bool FUN_14777ab3a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14777ab54 FUN_14777ab54 body=24 status=ok
// SIG undefined FUN_14777ab54(void)

bool FUN_14777ab54(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14777ab6c FUN_14777ab6c body=101 status=ok
// SIG undefined FUN_14777ab6c(void)

void FUN_14777ab6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a543450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777abd2 FUN_14777abd2 body=101 status=ok
// SIG undefined FUN_14777abd2(void)

void FUN_14777abd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a543450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777ac38 FUN_14777ac38 body=134 status=ok
// SIG undefined FUN_14777ac38(void)

void FUN_14777ac38(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541050;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a543450;
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
                    /* WARNING: Could not recover jumptable at 0x00014777acaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14777acbe FUN_14777acbe body=44 status=ok
// SIG undefined FUN_14777acbe(void)

void FUN_14777acbe(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014777ace7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14777acea FUN_14777acea body=156 status=ok
// SIG undefined FUN_14777acea(void)

bool FUN_14777acea(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 14777ad88 FUN_14777ad88 body=29 status=ok
// SIG undefined FUN_14777ad88(void)

undefined8 FUN_14777ad88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14777adc0 FUN_14777adc0 body=29 status=ok
// SIG undefined FUN_14777adc0(void)

bool FUN_14777adc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14777adde FUN_14777adde body=26 status=ok
// SIG undefined FUN_14777adde(void)

bool FUN_14777adde(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14777adf8 FUN_14777adf8 body=24 status=ok
// SIG undefined FUN_14777adf8(void)

bool FUN_14777adf8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14777ae10 FUN_14777ae10 body=101 status=ok
// SIG undefined FUN_14777ae10(void)

void FUN_14777ae10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541130;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5434c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777ae76 FUN_14777ae76 body=101 status=ok
// SIG undefined FUN_14777ae76(void)

void FUN_14777ae76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541130;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5434c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777aedc FUN_14777aedc body=134 status=ok
// SIG undefined FUN_14777aedc(void)

void FUN_14777aedc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541130;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5434c0;
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
                    /* WARNING: Could not recover jumptable at 0x00014777af53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14777af62 FUN_14777af62 body=44 status=ok
// SIG undefined FUN_14777af62(void)

void FUN_14777af62(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014777af8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14777af8e FUN_14777af8e body=156 status=ok
// SIG undefined FUN_14777af8e(void)

bool FUN_14777af8e(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 14777b02c FUN_14777b02c body=29 status=ok
// SIG undefined FUN_14777b02c(void)

undefined8 FUN_14777b02c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14777b064 FUN_14777b064 body=29 status=ok
// SIG undefined FUN_14777b064(void)

bool FUN_14777b064(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14777b082 FUN_14777b082 body=26 status=ok
// SIG undefined FUN_14777b082(void)

bool FUN_14777b082(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14777b09c FUN_14777b09c body=24 status=ok
// SIG undefined FUN_14777b09c(void)

bool FUN_14777b09c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14777b0b4 FUN_14777b0b4 body=101 status=ok
// SIG undefined FUN_14777b0b4(void)

void FUN_14777b0b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a543530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777b11a FUN_14777b11a body=101 status=ok
// SIG undefined FUN_14777b11a(void)

void FUN_14777b11a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a543530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777b180 FUN_14777b180 body=134 status=ok
// SIG undefined FUN_14777b180(void)

void FUN_14777b180(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541210;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a543530;
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
                    /* WARNING: Could not recover jumptable at 0x00014777b1f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14777b206 FUN_14777b206 body=52 status=ok
// SIG undefined FUN_14777b206(void)

void FUN_14777b206(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014777b237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14777b23a FUN_14777b23a body=167 status=ok
// SIG undefined FUN_14777b23a(void)

bool FUN_14777b23a(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 14777b2e2 FUN_14777b2e2 body=29 status=ok
// SIG undefined FUN_14777b2e2(void)

undefined8 FUN_14777b2e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14777b31a FUN_14777b31a body=29 status=ok
// SIG undefined FUN_14777b31a(void)

bool FUN_14777b31a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14777b338 FUN_14777b338 body=26 status=ok
// SIG undefined FUN_14777b338(void)

bool FUN_14777b338(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14777b352 FUN_14777b352 body=24 status=ok
// SIG undefined FUN_14777b352(void)

bool FUN_14777b352(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14777b36a FUN_14777b36a body=101 status=ok
// SIG undefined FUN_14777b36a(void)

void FUN_14777b36a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5412f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5435a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777b3d0 FUN_14777b3d0 body=101 status=ok
// SIG undefined FUN_14777b3d0(void)

void FUN_14777b3d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5412f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5435a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777b436 FUN_14777b436 body=134 status=ok
// SIG undefined FUN_14777b436(void)

void FUN_14777b436(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5412f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5435a0;
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
                    /* WARNING: Could not recover jumptable at 0x00014777b4ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14777b4bc FUN_14777b4bc body=52 status=ok
// SIG undefined FUN_14777b4bc(void)

void FUN_14777b4bc(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014777b4ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 14777b4f0 FUN_14777b4f0 body=162 status=ok
// SIG undefined FUN_14777b4f0(void)

bool FUN_14777b4f0(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 14777b594 FUN_14777b594 body=29 status=ok
// SIG undefined FUN_14777b594(void)

undefined8 FUN_14777b594(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14777b5cc FUN_14777b5cc body=29 status=ok
// SIG undefined FUN_14777b5cc(void)

bool FUN_14777b5cc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14777b5ea FUN_14777b5ea body=26 status=ok
// SIG undefined FUN_14777b5ea(void)

bool FUN_14777b5ea(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14777b604 FUN_14777b604 body=24 status=ok
// SIG undefined FUN_14777b604(void)

bool FUN_14777b604(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14777b61c FUN_14777b61c body=101 status=ok
// SIG undefined FUN_14777b61c(void)

void FUN_14777b61c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a543610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777b682 FUN_14777b682 body=101 status=ok
// SIG undefined FUN_14777b682(void)

void FUN_14777b682(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a543610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777b6e8 FUN_14777b6e8 body=134 status=ok
// SIG undefined FUN_14777b6e8(void)

void FUN_14777b6e8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a543610;
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
                    /* WARNING: Could not recover jumptable at 0x00014777b75f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14777b76e FUN_14777b76e body=44 status=ok
// SIG undefined FUN_14777b76e(void)

void FUN_14777b76e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014777b797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14777b79a FUN_14777b79a body=156 status=ok
// SIG undefined FUN_14777b79a(void)

bool FUN_14777b79a(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 14777b838 FUN_14777b838 body=29 status=ok
// SIG undefined FUN_14777b838(void)

undefined8 FUN_14777b838(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14777b870 FUN_14777b870 body=29 status=ok
// SIG undefined FUN_14777b870(void)

bool FUN_14777b870(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14777b88e FUN_14777b88e body=26 status=ok
// SIG undefined FUN_14777b88e(void)

bool FUN_14777b88e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14777b8a8 FUN_14777b8a8 body=24 status=ok
// SIG undefined FUN_14777b8a8(void)

bool FUN_14777b8a8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14777b8cc FUN_14777b8cc body=101 status=ok
// SIG undefined FUN_14777b8cc(void)

void FUN_14777b8cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5436f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a543680;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777b932 FUN_14777b932 body=101 status=ok
// SIG undefined FUN_14777b932(void)

void FUN_14777b932(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5436f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a543680;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777b998 FUN_14777b998 body=134 status=ok
// SIG undefined FUN_14777b998(void)

void FUN_14777b998(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5436f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a543680;
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
                    /* WARNING: Could not recover jumptable at 0x00014777ba0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14777ba1e FUN_14777ba1e body=52 status=ok
// SIG undefined FUN_14777ba1e(void)

void FUN_14777ba1e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014777ba4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14777ba52 FUN_14777ba52 body=167 status=ok
// SIG undefined FUN_14777ba52(void)

bool FUN_14777ba52(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 14777bafc FUN_14777bafc body=29 status=ok
// SIG undefined FUN_14777bafc(void)

undefined8 FUN_14777bafc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14777bb34 FUN_14777bb34 body=29 status=ok
// SIG undefined FUN_14777bb34(void)

bool FUN_14777bb34(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14777bb52 FUN_14777bb52 body=26 status=ok
// SIG undefined FUN_14777bb52(void)

bool FUN_14777bb52(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14777bb6c FUN_14777bb6c body=24 status=ok
// SIG undefined FUN_14777bb6c(void)

bool FUN_14777bb6c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14777bb90 FUN_14777bb90 body=101 status=ok
// SIG undefined FUN_14777bb90(void)

void FUN_14777bb90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5437d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a543760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777bbf6 FUN_14777bbf6 body=101 status=ok
// SIG undefined FUN_14777bbf6(void)

void FUN_14777bbf6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5437d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a543760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14777bc5c FUN_14777bc5c body=134 status=ok
// SIG undefined FUN_14777bc5c(void)

void FUN_14777bc5c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5437d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a543760;
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
                    /* WARNING: Could not recover jumptable at 0x00014777bcd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14777bce2 FUN_14777bce2 body=52 status=ok
// SIG undefined FUN_14777bce2(void)

void FUN_14777bce2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014777bd13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14777bd16 FUN_14777bd16 body=167 status=ok
// SIG undefined FUN_14777bd16(void)

bool FUN_14777bd16(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 14777bdc0 FUN_14777bdc0 body=324 status=ok
// SIG undefined FUN_14777bdc0(void)

longlong * FUN_14777bdc0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x990,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a543840;
  plVar4 = plVar3 + 2;
  FUN_14777bf06(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_147781106(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14777be97;
    param_1[1] = 0;
LAB_14777be61:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14777be97;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_14777be97;
      goto LAB_14777be61;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14777be97;
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
LAB_14777be97:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x980;
  FUN_140a52e78(*param_1,"TreeViewT<ItemType>","Runtime\\UMG\\Public\\Components/ListViewBase.h",
                0x14e);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14777bf06 FUN_14777bf06 body=241 status=ok
// SIG undefined FUN_14777bf06(void)

undefined8 * FUN_14777bf06(undefined8 *param_1)

{
  FUN_14770f42c(param_1,2);
  *param_1 = &PTR_FUN_14a543860;
  param_1[0x4d] = &PTR_FUN_14a543b50;
  param_1[0x9b] = &PTR_FUN_14a543b70;
  param_1[0x9d] = &PTR_LAB_14a543b90;
  param_1[0x115] = 0;
  *(undefined4 *)(param_1 + 0x116) = 0;
  param_1[0x117] = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  param_1[0x11e] = 0;
  *(undefined4 *)(param_1 + 0x11f) = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x904) = 0;
  param_1[0x122] = 0;
  *(undefined4 *)(param_1 + 0x123) = 0;
  param_1[299] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  *(undefined8 *)((longlong)param_1 + 0x93c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x944) = 0;
  *(undefined2 *)(param_1 + 300) = 1;
  *(undefined1 *)((longlong)param_1 + 0x962) = 0;
  *(undefined2 *)(param_1 + 0x12d) = 0x100;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  FUN_14777c020(param_1,param_1 + 0x126);
  return param_1;
}



// FUNCTION 14777bff8 FUN_14777bff8 body=9 status=ok
// SIG undefined FUN_14777bff8(void)

void FUN_14777bff8(longlong param_1)

{
  FUN_14777d418(param_1 + 0x10);
  return;
}



// FUNCTION 14777c002 FUN_14777c002 body=29 status=ok
// SIG undefined FUN_14777c002(void)

undefined8 FUN_14777c002(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14777c020 FUN_14777c020 body=147 status=ok
// SIG undefined FUN_14777c020(void)

void FUN_14777c020(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x8a0);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    if (cVar2 != '\0') goto LAB_14777c054;
  }
  if (param_2 == 0) {
    local_20 = 0;
  }
  else {
    local_28 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_28 = &PTR_FUN_14a50c6a0;
    local_28[1] = param_2;
  }
  FUN_147716e02(param_1);
LAB_14777c054:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14777c0b4 FUN_14777c0b4 body=38 status=ok
// SIG undefined FUN_14777c0b4(void)

undefined8 FUN_14777c0b4(undefined8 param_1,int param_2)

{
  FUN_14777d418();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14777c0da FUN_14777c0da body=1230 status=ok
// SIG undefined FUN_14777c0da(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14777c0da(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_238 [32];
  undefined1 *local_218;
  undefined8 *local_210;
  undefined8 *local_208;
  undefined1 local_200;
  undefined4 local_1f8;
  ulonglong local_1e8;
  ulonglong local_1e0 [2];
  undefined4 local_1d0;
  longlong local_1c8;
  ulonglong uStack_1c0;
  undefined1 local_1b8 [8];
  int local_1b0;
  int local_184;
  longlong local_178;
  undefined4 local_170;
  undefined1 local_168 [8];
  int local_160;
  int local_134;
  longlong local_128;
  undefined4 local_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  int local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (((((char)param_1[300] != '\x01') || (param_1[0x4f] == 0)) ||
      (*(undefined1 *)(param_1 + 300) = 0, (int)param_1[0x116] == 0)) ||
     ((((longlong *)param_1[0x115] == (longlong *)0x0 ||
       (cVar3 = (**(code **)(*(longlong *)param_1[0x115] + 0x30))(), cVar3 == '\0')) ||
      (plVar6 = (longlong *)param_1[299], plVar6 == (longlong *)0x0)))) goto LAB_14777c15a;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  *(undefined4 *)(param_1 + 0x127) = 0;
  if (*(int *)((longlong)param_1 + 0x93c) == 0) {
LAB_14777c258:
    local_100 = 0x8000000000;
    local_108 = 0;
    (**(code **)(*plVar6 + 8))(plVar6,local_1e0 + 1);
  }
  else {
    FUN_14079e7a6(param_1 + 0x126,0);
    plVar6 = (longlong *)param_1[299];
    local_108 = 0;
    local_100 = 0x8000000000;
    if (plVar6 != (longlong *)0x0) goto LAB_14777c258;
    local_1e0[1] = 0;
    local_1d0 = 0;
  }
  local_208 = &local_f8;
  local_210 = &local_a8;
  local_218 = local_118;
  local_1f8 = 0xffffffff;
  local_200 = 1;
  FUN_14777d5ea(param_1,local_1e0 + 1,param_1 + 0x126,&local_1c8);
  if (*(char *)((longlong)param_1 + 0x961) == '\0') {
    plVar6 = param_1 + 0xe2;
    if ((int)param_1[0xe3] - *(int *)((longlong)param_1 + 0x744) == (int)uStack_a0 - local_74) {
      FUN_1477157fa(plVar6,local_168,&local_a8);
      bVar2 = true;
      if (local_160 <= local_134) {
        FUN_1477157fa(&local_a8,local_1b8,plVar6);
        bVar2 = local_184 < local_1b0;
        local_170 = 0;
        if (local_178 != 0) {
          FUN_1400020a8();
        }
        FUN_1400dbf0e(local_1b8);
      }
      local_120 = 0;
      if (local_128 != 0) {
        FUN_1400020a8();
      }
      FUN_1400dbf0e(local_168);
      if (!bVar2) goto LAB_14777c2b9;
    }
    FUN_140200ab6(plVar6,&local_a8);
    uVar1 = param_1[0xed];
    if (uVar1 == 0) {
LAB_14777c497:
      param_1[0xec] = 0;
      param_1[0xed] = 0;
    }
    else {
      local_1e0[0] = uVar1;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(uVar1);
      }
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(uVar1);
      }
      uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      iVar5 = FUN_14075b868(plVar6,uVar4 >> 0x10 ^ uVar4,local_1e0);
      if (iVar5 == -1) goto LAB_14777c497;
      uVar1 = param_1[0xec];
      if (uVar1 == 0) {
LAB_14777c52e:
        param_1[0xec] = param_1[0xed];
      }
      else {
        local_1e8 = uVar1;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(uVar1);
        }
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(uVar1);
        }
        uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        iVar5 = FUN_14075b868(plVar6,uVar4 >> 0x10 ^ uVar4,&local_1e8);
        if (iVar5 == -1) goto LAB_14777c52e;
      }
    }
    (**(code **)(param_1[0x9d] + 0x40))(param_1 + 0x9d,3);
  }
LAB_14777c2b9:
  FUN_14777e20a(param_1 + 0x11a,&local_f8);
  FUN_14777db0e(param_1 + 0x124,&local_1c8);
  if (*(char *)((longlong)param_1 + 0x962) == '\x01') {
    (**(code **)(*param_1 + 0x2d0))(param_1);
  }
  FUN_14777d502(local_1c8,uStack_1c0 & 0xffffffff);
  if (local_1c8 != 0) {
    FUN_1400020a8();
  }
  local_b0 = 0;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_14777d532(&local_f8);
  local_60 = 0;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1400dbf0e(&local_a8);
LAB_14777c15a:
  FUN_146af4380(param_1,param_2,param_3,param_4);
  if ((local_50 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14777c5aa FUN_14777c5aa body=842 status=ok
// SIG undefined FUN_14777c5aa(void)

char * FUN_14777c5aa(longlong *param_1,char *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((int)param_1[0x106] != 0) && ((longlong *)param_1[0x105] != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)param_1[0x105] + 0x30))(), cVar3 != '\0')) {
    if ((int)param_1[0x106] == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)param_1[0x105];
    }
    (**(code **)(*plVar7 + 0x58))(plVar7,param_2,param_3,param_4);
    if (*param_2 != '\0') goto LAB_14777c8b5;
    FUN_14493db24(param_2);
  }
  if ((param_1[0xec] == 0) || ((*(byte *)(param_4 + 8) & 0x30) != 0)) goto LAB_14777c77c;
  lVar8 = *(longlong *)(param_4 + 0x20);
  plVar7 = *(longlong **)(param_4 + 0x30);
  if (plVar7 == (longlong *)0x0) {
    if (lVar8 == DAT_14c964e60) goto LAB_14777c685;
LAB_14777c6de:
    if (lVar8 != DAT_14c964e90) {
LAB_14777c77c:
      FUN_1477134ea(param_1,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
    }
LAB_14777c6eb:
    lVar8 = param_1[0xec];
    if (lVar8 != 0) {
      iVar4 = -1;
      if ((longlong)(int)param_1[0x127] != 0) {
        lVar6 = (longlong)(int)param_1[0x127] << 3;
        lVar12 = 0;
        do {
          if (*(longlong *)(param_1[0x126] + lVar12 * 8) == lVar8) {
            iVar4 = (int)lVar12;
            break;
          }
          lVar12 = lVar12 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      plVar7 = param_1 + 0x9d;
      local_50 = lVar8;
      cVar3 = (**(code **)(param_1[0x9d] + 0x68))(plVar7);
      if (cVar3 != '\0') {
        cVar3 = (**(code **)(*plVar7 + 0x60))(plVar7);
        if (cVar3 == '\0') {
          lVar8 = *plVar7;
          uVar13 = 1;
LAB_14777c7dc:
          (**(code **)(lVar8 + 0x50))(param_1 + 0x9d,local_50,uVar13);
        }
        else if (iVar4 < (int)param_1[0x127] + -1) {
          lVar8 = param_1[0x126] + (longlong)iVar4 * 8 + 8;
          goto LAB_14777c81f;
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    lVar6 = DAT_14c964e60;
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
    if (lVar8 != lVar6) {
      lVar8 = *(longlong *)(param_4 + 0x20);
      plVar7 = *(longlong **)(param_4 + 0x30);
      if (plVar7 == (longlong *)0x0) goto LAB_14777c6de;
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      lVar6 = DAT_14c964e90;
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
      if (lVar8 != lVar6) goto LAB_14777c77c;
      goto LAB_14777c6eb;
    }
LAB_14777c685:
    lVar8 = param_1[0xec];
    if (lVar8 != 0) {
      uVar10 = 0xffffffff;
      if ((longlong)(int)param_1[0x127] != 0) {
        lVar6 = (longlong)(int)param_1[0x127] << 3;
        uVar11 = 0;
        do {
          if (*(longlong *)(param_1[0x126] + uVar11 * 8) == lVar8) {
            uVar10 = uVar11 & 0xffffffff;
            break;
          }
          uVar11 = uVar11 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      plVar7 = param_1 + 0x9d;
      local_50 = lVar8;
      cVar3 = (**(code **)(param_1[0x9d] + 0x68))(plVar7,uVar10);
      if ((cVar3 != '\0') &&
         (cVar3 = (**(code **)(*plVar7 + 0x60))(plVar7,&local_50), cVar3 != '\0')) {
        lVar8 = *plVar7;
        uVar13 = 0;
        goto LAB_14777c7dc;
      }
      iVar4 = (**(code **)(*plVar7 + 0x88))(plVar7);
      do {
        if ((int)uVar10 < 1) goto LAB_14777c883;
        uVar9 = (int)uVar10 - 1;
        uVar10 = (ulonglong)uVar9;
        iVar5 = (**(code **)(*plVar7 + 0x88))(plVar7);
      } while (iVar4 <= iVar5);
      lVar8 = (ulonglong)uVar9 * 8 + param_1[0x126];
LAB_14777c81f:
      (**(code **)(*param_1 + 0x2c8))(param_1,lVar8,param_4);
    }
  }
LAB_14777c883:
  *param_2 = '\x01';
  param_2[0x20] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  memset(param_2 + 0x28,0,0x88);
  param_2[0xb0] = '\x02';
  param_2[0xb1] = '\a';
  param_2[0xb2] = '\x02';
  param_2[0xb3] = '\0';
  param_2[0xb4] = '\0';
LAB_14777c8b5:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14777c910 FUN_14777c910 body=83 status=ok
// SIG undefined FUN_14777c910(void)

void FUN_14777c910(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x127) = 0;
  if (*(int *)((longlong)param_1 + 0x93c) != 0) {
    FUN_14079e7a6(param_1 + 0x126,0);
  }
  FUN_147714232(param_1 + 0x9e);
  FUN_147714232(param_1 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00014777c95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x240))(param_1);
  return;
}



// FUNCTION 14777c964 FUN_14777c964 body=229 status=ok
// SIG undefined FUN_14777c964(void)

undefined8 FUN_14777c964(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147710902();
  if ((*(int *)(param_1 + 0x978) != 0) && (*(longlong **)(param_1 + 0x970) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x970) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x978) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x970);
      }
      uVar2 = (**(code **)(*plVar4 + 0x58))();
      *(undefined1 *)(param_1 + 0x968) = uVar2;
    }
  }
  if (*(char *)(param_1 + 0x968) != '\x01') {
    FUN_146af6ce2(param_1);
    if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_38[0] = 0;
  local_38[1] = 0;
  uVar3 = FUN_14777e2fa(param_1,param_1 + 0x930,local_38,param_2);
  FUN_14777e514(param_1,local_38,param_3,uVar3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38[2] ^ (ulonglong)auStack_58);
}



// FUNCTION 14777ca4c FUN_14777ca4c body=1149 status=ok
// SIG undefined FUN_14777ca4c(void)

undefined8 * FUN_14777ca4c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_7f8 [32];
  undefined8 **local_7d8;
  undefined8 *local_7c8;
  undefined1 local_7c0 [8];
  longlong *local_7b8;
  undefined1 local_7a1;
  wchar_t *local_7a0;
  undefined4 local_798;
  undefined4 uStack_794;
  undefined1 local_788 [4];
  undefined1 local_784 [4];
  longlong *local_780 [2];
  undefined1 local_770 [16];
  undefined1 local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  longlong *local_740;
  undefined8 local_738;
  longlong *local_730;
  undefined8 local_728;
  longlong *plStack_720;
  undefined8 local_718;
  longlong *plStack_710;
  undefined1 local_2a0 [600];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_7f8;
  if (((*(int *)(param_1 + 0x6a8) == 0) || (*(longlong **)(param_1 + 0x6a0) == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x6a0) + 0x30))(), cVar4 == '\0')) {
    plVar8 = *(longlong **)(param_1 + 0x10);
    if (plVar8 == (longlong *)0x0) {
LAB_14777cbbc:
      local_728 = 0;
      plStack_720 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar8[1];
      do {
        if (iVar5 == 0) goto LAB_14777cbbc;
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
      local_728 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      plStack_720 = plVar8;
      if ((int)*plVar7 == 0) {
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
    FUN_14770d6ea(local_2a0);
    FUN_140a570d8(&local_718);
    local_7a0 = L"BrokenSetupMessage";
    local_798 = 0x12;
    FUN_1446e940c(local_784,&local_7a0);
    local_7a0 = L"STreeView";
    local_798 = 9;
    FUN_1446e940c(local_788,&local_7a0);
    FUN_140208bae(local_780,local_788,local_784,L"OnGenerateWidget() not assigned.");
    FUN_14023423e(local_770,local_780);
    local_760 = 1;
    local_758 = 0;
    uStack_750 = 0;
    uVar6 = FUN_140a54906(&local_718,local_770);
    local_7d8 = (undefined8 **)&local_7a1;
    FUN_140a54526(&local_7a0,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/STreeView.h",0x348)
    ;
    FUN_140a52852(&local_7a0,&local_748,uVar6);
    plVar7 = local_40;
    plVar8 = local_740;
    if (local_740 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
    }
    local_48 = local_748;
    local_40 = local_740;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    local_7c8 = &local_728;
    local_7d8 = &local_7c8;
    FUN_147780ed8(local_7c0,"STableRow<ItemType>",
                  "Runtime\\Slate\\Public\\Widgets/Views/STreeView.h",0x345);
    FUN_147780e5a(local_7c0,&local_738,local_2a0);
    if (local_7b8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_7b8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_7b8)(local_7b8);
        LOCK();
        piVar1 = (int *)((longlong)local_7b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_7b8 + 0x10))(local_7b8);
        }
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    if (local_740 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_740 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_740)(local_740);
        LOCK();
        piVar1 = (int *)((longlong)local_740 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_740 + 0x10))(local_740);
        }
      }
    }
    plVar8 = (longlong *)CONCAT44(uStack_794,local_798);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    if (local_780[0] != (longlong *)0x0) {
      (**(code **)(*local_780[0] + 0x10))();
    }
    FUN_140a59ae6(&local_718);
    FUN_14770d8a6(local_2a0);
    *param_2 = local_738;
    param_2[1] = local_730;
    if (local_730 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_730 + 1) = (int)local_730[1] + 1;
      UNLOCK();
      if (local_730 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_730 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_730)(local_730);
          LOCK();
          piVar1 = (int *)((longlong)local_730 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_730 + 0x10))(local_730);
          }
        }
      }
    }
    plVar8 = plStack_720;
    if (plStack_720 == (longlong *)0x0) goto LAB_14777cb7b;
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0x10);
    if (plVar8 == (longlong *)0x0) {
LAB_14777caf8:
      local_718 = 0;
      plStack_710 = (longlong *)0x0;
      bVar9 = true;
    }
    else {
      iVar5 = (int)plVar8[1];
      do {
        if (iVar5 == 0) goto LAB_14777caf8;
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
      uVar6 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar8)();
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      bVar9 = false;
      local_718 = uVar6;
      plStack_710 = plVar8;
    }
    plVar8 = plStack_710;
    if (*(int *)(param_1 + 0x6a8) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x6a0);
    }
    (**(code **)(*plVar7 + 0x58))(plVar7,param_2,param_3,&local_718);
    plVar7 = plStack_710;
    if (plStack_710 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_710 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_710)(plStack_710);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (bVar9) goto LAB_14777cb7b;
  }
  LOCK();
  plVar7 = plVar8 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_14777cb7b:
  if ((local_38 ^ (ulonglong)auStack_7f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14777ceca FUN_14777ceca body=403 status=ok
// SIG undefined FUN_14777ceca(void)

void FUN_14777ceca(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*(longlong *)(param_1 + 0x4e8) + 0x80))(param_1 + 0x4e8);
  local_70 = (longlong *)(param_1 + 0x710);
  local_40 = param_1 + 0x720;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0x738) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    do {
      if ((longlong)*(int *)(param_1 + 0x938) != 0) {
        lVar4 = (longlong)*(int *)(param_1 + 0x938) << 3;
        lVar3 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x930) + lVar3 * 8) ==
              *(longlong *)(*local_70 + (longlong)iStack_54 * 0x10)) {
            uVar1 = (uint)lVar3;
            if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x928))) {
              for (iVar2 = *(int *)(*(longlong *)(param_1 + 0x920) + 0x24 +
                                   (ulonglong)(uVar1 & 0x7fffffff) * 0x28); iVar2 != -1;
                  iVar2 = *(int *)(*(longlong *)(param_1 + 0x920) + 0x24 + (longlong)iVar2 * 0x28))
              {
                (**(code **)(*(longlong *)(param_1 + 0x4e8) + 0x78))
                          (param_1 + 0x4e8,
                           *(undefined8 *)(*(longlong *)(param_1 + 0x930) + (longlong)iVar2 * 8),1);
              }
            }
            break;
          }
          lVar3 = lVar3 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14777d096 FUN_14777d096 body=58 status=ok
// SIG undefined FUN_14777d096(void)

void FUN_14777d096(longlong param_1)

{
  FUN_147712952();
  if (*(char *)(param_1 + 0x47a) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00014777d0c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + -0x4e8) + 0x2d0))(param_1 + -0x4e8);
    return;
  }
  return;
}



// FUNCTION 14777d0d0 FUN_14777d0d0 body=393 status=ok
// SIG undefined FUN_14777d0d0(void)

void FUN_14777d0d0(longlong param_1,ulonglong param_2,uint param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [38];
  undefined2 local_42;
  ulonglong local_40;
  ulonglong *local_38;
  undefined2 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  if (*(int *)(param_1 + 0x3f0) != *(int *)(param_1 + 0x41c)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0x420;
    if (*(longlong *)(param_1 + 0x428) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x428);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x430) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar5 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 1000) + (longlong)iVar5 * 0x18);
        if (*puVar1 == param_2) {
          if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffff7) != 0) {
            uVar3 = (uint)(byte)puVar1[1];
            local_42 = CONCAT11(*(undefined1 *)((longlong)puVar1 + 9),(char)param_3);
            goto LAB_14777d248;
          }
          break;
        }
        iVar5 = (int)puVar1[2];
      } while (iVar5 != -1);
    }
  }
  uVar3 = 0;
  if ((char)param_3 != '\0') {
    local_42 = 1;
    uVar3 = 0;
LAB_14777d248:
    local_30 = &local_42;
    local_38 = &local_40;
    FUN_14777dcce((longlong *)(param_1 + 1000),local_24,&local_38,0);
  }
  if (uVar3 != (param_3 & 0xff)) {
    if ((*(int *)(param_1 + 0x460) != 0) &&
       (plVar2 = *(longlong **)(param_1 + 0x458), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,local_40,param_3);
    }
    (**(code **)(*(longlong *)(param_1 + -0x4e8) + 0x2d8))((longlong *)(param_1 + -0x4e8));
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14777d25a FUN_14777d25a body=121 status=ok
// SIG undefined FUN_14777d25a(void)

void FUN_14777d25a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x3d8) != 0) && (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3d8) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x3d0);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00014777d2bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + -0x4e8) + 0x2d8))((longlong *)(param_1 + -0x4e8));
      return;
    }
  }
  return;
}



// FUNCTION 14777d418 FUN_14777d418 body=234 status=ok
// SIG undefined FUN_14777d418(void)

void FUN_14777d418(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a543860;
  param_1[0x4d] = &PTR_FUN_14a543b50;
  param_1[0x9b] = &PTR_FUN_14a543b70;
  param_1[0x9d] = &PTR_LAB_14a543b90;
  FUN_1449db362(param_1 + 0x12e);
  puVar1 = (undefined8 *)param_1[299];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1449db362(param_1 + 0x128);
  if (param_1[0x126] != 0) {
    FUN_1400020a8();
  }
  FUN_14777d502(param_1[0x124],*(undefined4 *)(param_1 + 0x125));
  if (param_1[0x124] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x123) = 0;
  if (param_1[0x122] != 0) {
    FUN_1400020a8();
  }
  FUN_14777d532(param_1 + 0x11a);
  FUN_1449db362(param_1 + 0x117);
  FUN_1449db362(param_1 + 0x115);
  FUN_14771303e(param_1);
  return;
}



// FUNCTION 14777d502 FUN_14777d502 body=47 status=ok
// SIG undefined FUN_14777d502(void)

void FUN_14777d502(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14777d532 FUN_14777d532 body=54 status=ok
// SIG undefined FUN_14777d532(void)

void FUN_14777d532(longlong *param_1)

{
  FUN_14777d568(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14777d568 FUN_14777d568 body=128 status=ok
// SIG undefined FUN_14777d568(void)

void FUN_14777d568(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14777d5ea FUN_14777d5ea body=1314 status=ok
// SIG undefined FUN_14777d5ea(void)

/* WARNING: Removing unreachable block (ram,0x00014777d96b) */

byte FUN_14777d5ea(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,byte param_8,
                  undefined4 param_9)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  ulonglong uVar15;
  int iVar16;
  byte bVar17;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  byte local_150;
  int local_148;
  longlong *local_138;
  ulonglong local_130;
  uint local_128;
  uint local_124;
  longlong *local_120;
  longlong local_118;
  longlong local_110;
  longlong *local_108;
  byte local_fa;
  byte local_f9;
  longlong local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined1 local_cc [4];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_120 = param_4;
  iVar8 = FUN_144a54ea4(param_5,1);
  lVar10 = *(longlong *)(param_5 + 0x10);
  if (*(longlong *)(param_5 + 0x10) == 0) {
    lVar10 = param_5;
  }
  iVar16 = iVar8 + 0x1f;
  if (-1 < iVar8) {
    iVar16 = iVar8;
  }
  bVar14 = (byte)iVar8 & 0x1f;
  puVar1 = (uint *)(lVar10 + (longlong)(iVar16 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
  if ((int)param_2[1] < 1) {
    bVar14 = 0;
  }
  else {
    iVar8 = *(int *)(param_5 + 0x18) + -1;
    local_124 = 1 << ((byte)iVar8 & 0x1f);
    iVar16 = *(int *)(param_5 + 0x18) + 0x1e;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    bVar14 = (byte)iVar8 & 0x1f;
    local_128 = -2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14;
    local_110 = (longlong)(iVar16 >> 5);
    local_118 = param_1 + 0x908;
    uVar13 = 0;
    bVar14 = 0;
    local_138 = param_3;
    local_108 = param_2;
    do {
      uVar9 = local_124;
      local_e8 = 0;
      uStack_e0 = 0;
      if (*(int *)(param_1 + 0x8b0) == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)(param_1 + 0x8a8);
      }
      puVar2 = (ulonglong *)(*param_2 + uVar13 * 8);
      (**(code **)(*plVar11 + 0x58))(plVar11,*puVar2,&local_e8);
      uVar15 = (ulonglong)((int)param_2[1] - 1);
      lVar10 = *(longlong *)(param_5 + 0x10);
      if (*(longlong *)(param_5 + 0x10) == 0) {
        lVar10 = param_5;
      }
      iVar8 = (int)uStack_e0;
      uVar5 = *(uint *)(lVar10 + local_110 * 4);
      uVar9 = uVar5 | uVar9;
      if (uVar13 == uVar15) {
        uVar9 = uVar5 & local_128;
      }
      *(uint *)(lVar10 + local_110 * 4) = uVar9;
      if (*(int *)(param_1 + 0x8d8) != *(int *)(param_1 + 0x904)) {
        uVar12 = *puVar2;
        uVar9 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        lVar10 = *(longlong *)(param_1 + 0x910);
        if (*(longlong *)(param_1 + 0x910) == 0) {
          lVar10 = local_118;
        }
        iVar16 = *(int *)(lVar10 + (ulonglong)
                                   (*(int *)(param_1 + 0x918) - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
        if (iVar16 != -1) {
          do {
            puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0x8d0) + (longlong)iVar16 * 0x18);
            if (*puVar3 == uVar12) {
              if (puVar3 != (ulonglong *)0x0) {
                bVar17 = (byte)puVar3[1];
                bVar7 = *(byte *)((longlong)puVar3 + 9);
                goto LAB_14777d740;
              }
              break;
            }
            iVar16 = (int)puVar3[2];
          } while (iVar16 != -1);
        }
      }
      bVar17 = 0;
      bVar7 = 0;
LAB_14777d740:
      if (param_8 != 0) {
        uVar12 = (ulonglong)(int)local_138[1];
        uVar9 = (int)local_138[1] + 1;
        *(uint *)(local_138 + 1) = uVar9;
        if (*(uint *)((longlong)local_138 + 0xc) < uVar9) {
          local_130 = uVar12;
          FUN_1447f76d2(local_138,uVar12);
          uVar12 = local_130;
        }
        local_130 = CONCAT71(local_130._1_7_,uVar13 == uVar15);
        *(ulonglong *)(*local_138 + uVar12 * 8) = *puVar2;
        local_98 = 0;
        uStack_90 = 0;
        FUN_144a69486(local_a8,param_5);
        local_168 = (undefined1 *)CONCAT44(local_168._4_4_,param_9);
        FUN_14777db5e(&local_88,local_a8,0 < iVar8,local_130 & 0xff);
        plVar11 = local_120;
        lVar10 = local_120[1];
        uVar9 = (int)lVar10 + 1;
        *(uint *)(local_120 + 1) = uVar9;
        if (*(uint *)((longlong)local_120 + 0xc) < uVar9) {
          FUN_14777dc3a(local_120);
        }
        puVar4 = (undefined4 *)(*plVar11 + (longlong)(int)lVar10 * 0x28);
        *(undefined8 *)(puVar4 + 4) = 0;
        if (local_78 == 0) {
          *puVar4 = (undefined4)local_88;
          puVar4[1] = local_88._4_4_;
          puVar4[2] = (undefined4)uStack_80;
          puVar4[3] = uStack_80._4_4_;
        }
        *(longlong *)(puVar4 + 4) = local_78;
        puVar4[6] = (undefined4)local_70;
        puVar4[7] = local_70._4_4_;
        *(undefined8 *)(puVar4 + 8) = local_68;
        local_70 = 0;
        local_78 = 0;
        cVar6 = FUN_14777dbb8(param_1,puVar2);
        if (cVar6 != '\0') {
          local_88 = (ulonglong *)*puVar2;
          if ((local_88 != (ulonglong *)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c();
          }
          FUN_14075b584(param_6,local_cc,&local_88,0);
        }
      }
      if (((bVar7 | bVar17) & 1) == 0) {
        bVar7 = 0;
      }
      else {
        lVar10 = local_138[1];
        local_b8 = 0;
        uStack_b0 = 0;
        FUN_144a69486(local_c8,param_5);
        local_f8 = local_e8;
        local_f0 = (int)uStack_e0;
        local_158 = param_7;
        local_160 = param_6;
        local_168 = local_c8;
        local_150 = param_8 & bVar17;
        local_148 = (int)lVar10 + -1;
        bVar7 = FUN_14777d5ea(param_1,&local_f8,local_138,local_120);
      }
      param_2 = local_108;
      if ((bVar17 | bVar7) == 1) {
        uStack_80 = &local_fa;
        local_fa = bVar17;
        local_f9 = bVar7;
        local_88 = puVar2;
        FUN_14777dcce(param_7,local_cc,&local_88,0);
      }
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      bVar14 = bVar14 | bVar17 | bVar7;
      uVar13 = uVar13 + 1;
    } while ((longlong)uVar13 < (longlong)(int)param_2[1]);
  }
  if (*(longlong *)(param_5 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return bVar14 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14777db0e FUN_14777db0e body=80 status=ok
// SIG undefined FUN_14777db0e(void)

longlong * FUN_14777db0e(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_14777d502(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 14777db5e FUN_14777db5e body=90 status=ok
// SIG undefined FUN_14777db5e(void)

longlong FUN_14777db5e(longlong param_1,longlong param_2,uint param_3,uint param_4,
                      undefined4 param_5)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_144a69486();
  *(uint *)(param_1 + 0x20) =
       (param_3 & 0xff) + (param_4 & 0xff) * 2 | *(uint *)(param_1 + 0x20) & 0xfffffffc;
  *(undefined4 *)(param_1 + 0x24) = param_5;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14777dbb8 FUN_14777dbb8 body=129 status=ok
// SIG undefined FUN_14777dbb8(void)

undefined8 FUN_14777dbb8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if ((*(int *)(param_1 + 0x3a0) != 0) && (*(longlong **)(param_1 + 0x398) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3a0) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x398);
      }
      iVar2 = (**(code **)(*plVar4 + 0x58))();
      *(int *)(param_1 + 0x390) = iVar2;
      goto LAB_14777dc07;
    }
  }
  iVar2 = *(int *)(param_1 + 0x390);
LAB_14777dc07:
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014777dc29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*(longlong *)(param_1 + 0x4e8) + 0x10))(param_1 + 0x4e8,param_2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14777dc3a FUN_14777dc3a body=147 status=ok
// SIG undefined FUN_14777dc3a(void)

void FUN_14777dc3a(longlong param_1,int param_2)

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



// FUNCTION 14777dcce FUN_14777dcce body=346 status=ok
// SIG undefined FUN_14777dcce(void)

undefined4 *
FUN_14777dcce(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14777de2a(param_1,local_50);
  puVar1 = (undefined2 *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_48 = uVar4;
  *(undefined2 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_14777df10(param_1,uVar3,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14777e02e(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14777de2a FUN_14777de2a body=230 status=ok
// SIG undefined FUN_14777de2a(void)

int * FUN_14777de2a(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14777df10 FUN_14777df10 body=148 status=ok
// SIG undefined FUN_14777df10(void)

void FUN_14777df10(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_14777dfa4((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_14777df7a;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_14777df7a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 14777dfa4 FUN_14777dfa4 body=138 status=ok
// SIG undefined FUN_14777dfa4(void)

void FUN_14777dfa4(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14777e02e FUN_14777e02e body=474 status=ok
// SIG undefined FUN_14777e02e(void)

void FUN_14777e02e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 14777e20a FUN_14777e20a body=93 status=ok
// SIG undefined FUN_14777e20a(void)

longlong FUN_14777e20a(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14777e268(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14777e268 FUN_14777e268 body=146 status=ok
// SIG undefined FUN_14777e268(void)

longlong * FUN_14777e268(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 14777e2fa FUN_14777e2fa body=536 status=ok
// SIG undefined FUN_14777e2fa(void)

int FUN_14777e2fa(longlong param_1,longlong param_2,longlong *param_3,double *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 0) {
    iVar9 = -1;
    goto LAB_14777e4dd;
  }
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *param_4;
  auVar17 = roundpd(auVar17,auVar17,1);
  iVar9 = iVar1 + -1;
  if ((int)auVar17._0_8_ < iVar1 + -1) {
    iVar9 = (int)auVar17._0_8_;
  }
  local_68 = 0;
  if (0 < iVar9) {
    local_68 = iVar9;
  }
  iVar9 = -1;
  local_78 = param_1;
  local_70 = param_2;
  if ((*(char *)(param_4 + 3) == '\x01') && (0.0 < *param_4)) {
    if ((*(int *)(param_1 + 0x878) != 0) &&
       ((*(longlong **)(param_1 + 0x870) != (longlong *)0x0 &&
        (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x870) + 0x30))(), cVar6 != '\0')))) {
      if (*(int *)(param_1 + 0x878) == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)(param_1 + 0x870);
      }
      uVar7 = (**(code **)(*plVar11 + 0x58))();
      *(undefined4 *)(param_1 + 0x868) = uVar7;
    }
    iVar2 = *(int *)(param_1 + 0x868);
    local_90 = param_3;
    iVar8 = FUN_146af3e40(param_1);
    iVar9 = iVar2;
    if (iVar8 < iVar2) {
      iVar9 = FUN_146af3e40(param_1);
    }
    iVar8 = (int)(*param_4 - (double)iVar9);
    iVar9 = -1;
    if (iVar1 <= iVar8) goto LAB_14777e4dd;
    iVar9 = 0x7fffffff;
    iVar14 = -1;
    iVar13 = 0;
    iVar16 = 0;
    do {
      local_88 = 0;
      uStack_80 = 0;
      FUN_14777e6a8(&local_78,&local_88,iVar13 + iVar8);
      if ((iVar13 <= (int)uStack_80) && (iVar13 <= iVar2 && (int)uStack_80 + iVar16 < iVar9)) {
        iVar9 = (int)uStack_80 + iVar16;
        iVar14 = iVar13 + iVar8;
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      iVar16 = iVar16 + -1;
      iVar13 = iVar13 + 1;
    } while (iVar8 - iVar1 != iVar16);
    iVar9 = -1;
    if (iVar14 == -1) goto LAB_14777e4dd;
    iVar9 = iVar14 - iVar8;
    param_3 = local_90;
  }
  FUN_14777e6a8(&local_78,param_3);
  uVar3 = *(uint *)(param_3 + 1);
  lVar12 = (longlong)(int)uVar3;
  if (1 < lVar12) {
    puVar4 = (undefined8 *)*param_3;
    lVar15 = 0;
    puVar10 = puVar4;
    do {
      uVar5 = *puVar10;
      *puVar10 = puVar4[lVar12 + lVar15 + -1];
      puVar4[lVar12 + lVar15 + -1] = uVar5;
      lVar15 = lVar15 + -1;
      puVar10 = puVar10 + 1;
    } while (-lVar15 != (ulonglong)(uVar3 >> 1));
  }
LAB_14777e4dd:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 14777e514 FUN_14777e514 body=402 status=ok
// SIG undefined FUN_14777e514(void)

void FUN_14777e514(longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_68;
  undefined4 local_60;
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(undefined4 *)(param_3 + 8);
  local_54 = param_4;
  FUN_146af6ce2();
  lVar1 = param_1 + 0x5c0;
  FUN_147715eea(lVar1);
  if (param_4 == -1) {
    *(undefined1 *)(param_1 + 0x86c) = *(undefined1 *)(param_1 + 0x884);
    *(undefined4 *)(param_1 + 0x868) = *(undefined4 *)(param_1 + 0x880);
    FUN_146a24854(param_1 + 0x870,param_1 + 0x888);
  }
  else {
    FUN_14777e732(param_1 + 0x868,&local_54);
  }
  if ((*(int *)(param_1 + 0x878) != 0) && (*(longlong **)(param_1 + 0x870) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x870) + 0x30))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x878) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x870);
      }
      uVar4 = (**(code **)(*plVar5 + 0x58))();
      *(undefined4 *)(param_1 + 0x868) = uVar4;
    }
  }
  *(bool *)(param_1 + 0x898) = *(int *)(param_1 + 0x868) < (int)param_2[1];
  plVar5 = *(longlong **)(param_1 + 0x8a0);
  if (plVar5 == (longlong *)0x0) {
    local_68 = 0;
    local_60 = 0;
  }
  else {
    (**(code **)(*plVar5 + 8))(plVar5,&local_68);
  }
  if (0 < (int)param_2[1]) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      local_78 = uVar2;
      FUN_14777e782(param_1,*param_2 + lVar7,uVar6 & 0xffffffff);
      if ((*(longlong *)(param_1 + 0x760) != 0) &&
         (*(longlong *)(*param_2 + uVar6 * 8) == *(longlong *)(param_1 + 0x760))) {
        *(undefined8 *)(param_1 + 0x760) = 0;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((longlong)uVar6 < (longlong)(int)param_2[1]);
  }
  FUN_1477142c6(lVar1);
  FUN_143332556(lVar1);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14777e6a8 FUN_14777e6a8 body=137 status=ok
// SIG undefined FUN_14777e6a8(void)

void FUN_14777e6a8(longlong *param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (-1 < (int)param_3) {
    uVar5 = (ulonglong)param_3;
    lVar3 = *param_1;
    if ((int)param_3 < *(int *)(lVar3 + 0x928)) {
      do {
        iVar1 = *(int *)(*(longlong *)(lVar3 + 0x920) + 0x24 + (longlong)(int)uVar5 * 0x28);
        uVar5 = (ulonglong)iVar1;
        if (((-1 < (longlong)uVar5) && (iVar1 < (int)((longlong *)param_1[1])[1])) &&
           (iVar1 < (int)param_1[2])) {
          lVar4 = *(longlong *)param_1[1];
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_1447f76d2(param_2,iVar2);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar4 + uVar5 * 8);
        }
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14777e732 FUN_14777e732 body=80 status=ok
// SIG undefined FUN_14777e732(void)

void FUN_14777e732(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1[4] != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1 + 2,0,0,0x10);
      param_1[4] = 0;
    }
  }
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 14777e782 FUN_14777e782 body=1011 status=ok
// SIG undefined FUN_14777e782(void)

void FUN_14777e782(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_2b8 [32];
  longlong ***local_298;
  longlong local_288;
  longlong *plStack_280;
  longlong **local_278;
  longlong *local_270;
  undefined4 *local_268;
  undefined4 *local_260;
  undefined1 local_258 [8];
  longlong *local_250;
  longlong local_240;
  longlong *local_238;
  longlong local_230;
  longlong *local_228;
  longlong *local_220;
  longlong *local_218;
  longlong *local_210;
  longlong *local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  longlong *local_1f8;
  longlong *local_1f0;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_200 = param_3;
  local_1fc = param_4;
  FUN_147713b68(param_1 + 0xb8,&local_210,param_2);
  if (local_210 != (longlong *)0x0) goto LAB_14777e878;
  local_298 = (longlong ***)CONCAT44(local_298._4_4_,param_4);
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_1f8,*param_2,param_3);
  plVar2 = local_1f0;
  plVar3 = local_208;
  local_210 = local_1f8;
  if (local_1f0 == (longlong *)0x0) {
    if (local_208 != (longlong *)0x0) {
      local_208 = (longlong *)0x0;
LAB_14777eb37:
      local_210 = local_1f8;
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
joined_r0x00014777eb23:
        if (iVar5 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
    UNLOCK();
    if (local_1f0 == local_208) {
      LOCK();
      plVar3 = local_1f0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
        plVar3 = plVar2;
        goto joined_r0x00014777eb23;
      }
    }
    else {
      bVar6 = local_208 != (longlong *)0x0;
      local_208 = local_1f0;
      if (bVar6) goto LAB_14777eb37;
    }
  }
  param_3 = local_200;
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1f0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar1 = (int *)((longlong)local_1f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      param_3 = local_200;
      if (*piVar1 == 0) {
        (**(code **)(*local_1f0 + 0x10))(local_1f0);
        param_3 = local_200;
      }
    }
  }
LAB_14777e878:
  (**(code **)(*local_210 + 0x10))(local_210,param_3);
  local_220 = local_210;
  local_218 = local_208;
  if (local_208 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_208 + 1) = (int)local_208[1] + 1;
    UNLOCK();
  }
  FUN_147714d08(param_1 + 0xb8,*param_2,&local_220);
  thunk_FUN_140a5071c(&local_1f8);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 == (longlong *)0x0) {
LAB_14777e8d6:
    local_288 = 0;
    plStack_280 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14777e8d6;
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
    local_288 = param_1[1];
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    plStack_280 = plVar3;
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
  local_298 = &local_278;
  local_270 = &local_288;
  local_268 = &local_200;
  local_260 = &local_1fc;
  local_278 = &local_210;
  FUN_14777ebf4(local_258,"SListViewPinnedRowWidget",
                "Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x64b);
  FUN_14777eb7c(local_258,&local_240,&local_1f8);
  local_230 = local_240;
  local_228 = local_238;
  if (local_238 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_238 + 1) = (int)local_238[1] + 1;
    UNLOCK();
    if (local_238 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_238 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_238)(local_238);
        LOCK();
        piVar1 = (int *)((longlong)local_238 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_238 + 0x10))(local_238);
        }
      }
    }
  }
  if (local_250 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_250 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_250)(local_250);
      LOCK();
      piVar1 = (int *)((longlong)local_250 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_250 + 0x10))(local_250);
      }
    }
  }
  plVar3 = plStack_280;
  if (plStack_280 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_280 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_280)(plStack_280);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140a4ff8c(&local_1f8);
  *(byte *)(local_230 + 0x30) = *(byte *)(local_230 + 0x30) | 0x80;
  FUN_1405d299c(local_230,param_5);
  FUN_146af6bd2(param_1,&local_230);
  plVar3 = local_228;
  if (local_228 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_228 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_228)(local_228);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_208;
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_208 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14777eb76 thunk_FUN_140a5071c body=5 status=ok
// SIG undefined thunk_FUN_140a5071c(void)

undefined8 * thunk_FUN_140a5071c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
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
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = DAT_14c96b238;
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1c) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
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
  plVar1 = DAT_14c844840;
  param_1[0x2e] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 14777eb7c FUN_14777eb7c body=119 status=ok
// SIG undefined FUN_14777eb7c(void)

longlong * FUN_14777eb7c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_14777f02a(param_1[2],*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14777ebf4 FUN_14777ebf4 body=422 status=ok
// SIG undefined FUN_14777ebf4(void)

undefined8 *
FUN_14777ebf4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x298);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a543ca0;
  plVar1 = plVar4 + 2;
  memset(plVar1,0,0x288);
  FUN_140a55f88(plVar1);
  plVar4[2] = (longlong)&PTR_FUN_14a543cc0;
  plVar4[0x4f] = 0;
  plVar4[0x50] = 0;
  plVar4[0x51] = 0;
  plVar4[0x52] = 0;
  local_60 = plVar1;
  local_58 = plVar4;
  FUN_14777ef82(&local_60,plVar1);
  plVar1 = local_58;
  if (local_58 == (longlong *)0x0) {
    *param_1 = local_60;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14777ed29;
    param_1[1] = 0;
LAB_14777ecec:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_14777ed29;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
    *param_1 = local_60;
    plVar4 = (longlong *)param_1[1];
    if (local_58 != plVar4) {
      param_1[1] = local_58;
      if (plVar4 == (longlong *)0x0) goto LAB_14777ed29;
      goto LAB_14777ecec;
    }
    LOCK();
    plVar4 = local_58 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14777ed29;
    (**(code **)*local_58)(local_58);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_14777ed29:
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_58 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_68 = 0x288;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14777ed9c FUN_14777ed9c body=9 status=ok
// SIG undefined FUN_14777ed9c(void)

void FUN_14777ed9c(longlong param_1)

{
  FUN_14777eef8(param_1 + 0x10);
  return;
}



// FUNCTION 14777eda6 FUN_14777eda6 body=29 status=ok
// SIG undefined FUN_14777eda6(void)

undefined8 FUN_14777eda6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14777edc4 FUN_14777edc4 body=38 status=ok
// SIG undefined FUN_14777edc4(void)

undefined8 FUN_14777edc4(undefined8 param_1,int param_2)

{
  FUN_14777eef8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14777edea FUN_14777edea body=269 status=ok
// SIG undefined FUN_14777edea(void)

undefined1 * FUN_14777edea(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_4 + 0x40);
  plVar4 = *(longlong **)(param_4 + 0x50);
  lVar5 = DAT_14c966e98;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar5 = DAT_14c966e98;
    UNLOCK();
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
  if ((lVar3 == lVar5) &&
     (puVar7 = (undefined8 *)
               (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x268) + 0x4e8) + 0x48))
                         (*(longlong *)(param_1 + 0x268) + 0x4e8), puVar7 != (undefined8 *)0x0)) {
    local_40 = *puVar7;
    (**(code **)(**(longlong **)(param_1 + 0x268) + 0x2c8))
              (*(longlong **)(param_1 + 0x268),&local_40,param_4);
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  *param_2 = uVar6;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14777eef8 FUN_14777eef8 body=137 status=ok
// SIG undefined FUN_14777eef8(void)

void FUN_14777eef8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a543cc0;
  plVar3 = (longlong *)param_1[0x50];
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
  plVar3 = (longlong *)param_1[0x4e];
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
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 14777ef82 FUN_14777ef82 body=167 status=ok
// SIG undefined FUN_14777ef82(void)

void FUN_14777ef82(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14777effd;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14777effd;
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
LAB_14777effd:
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
                    /* WARNING: Could not recover jumptable at 0x00014777f01d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14777f02a FUN_14777f02a body=154 status=ok
// SIG undefined FUN_14777f02a(void)

void FUN_14777f02a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined4 *)param_1[3];
  local_38 = *(undefined4 *)param_1[2];
  local_18 = *(undefined8 *)param_1[1];
  local_10 = ((undefined8 *)param_1[1])[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  local_28 = *(undefined8 *)*param_1;
  local_20 = ((undefined8 *)*param_1)[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_14777f0c6(param_2,param_3,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14777f0c6 FUN_14777f0c6 body=3281 status=ok
// SIG undefined FUN_14777f0c6(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14777f0c6(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined ***pppuVar12;
  longlong *plVar13;
  undefined1 auStack_12d8 [32];
  undefined8 *local_12b8;
  undefined8 local_12a8;
  longlong local_12a0;
  longlong *local_1298;
  longlong *local_1290;
  undefined8 *local_1288;
  undefined1 local_1279;
  undefined1 local_1278 [8];
  longlong *local_1270;
  undefined1 local_1259;
  undefined1 local_1258 [8];
  longlong *local_1250;
  undefined8 local_1240;
  undefined8 local_1238;
  undefined1 local_1230;
  undefined8 local_1228;
  undefined8 uStack_1220;
  undefined2 local_1218;
  undefined8 local_1210;
  undefined8 uStack_1208;
  undefined8 local_1200;
  longlong *local_11f8;
  undefined8 local_11f0;
  longlong *local_11e8;
  undefined1 local_11d9;
  undefined1 local_11d8 [8];
  longlong *local_11d0;
  undefined1 local_11b9;
  undefined1 local_11b8 [8];
  longlong *local_11b0;
  undefined1 local_1199;
  undefined1 local_1198 [8];
  longlong *local_1190;
  undefined1 local_1180 [4];
  undefined1 local_117c [4];
  longlong *local_1178 [2];
  undefined1 local_1168 [16];
  undefined1 local_1158;
  undefined8 local_1150;
  undefined8 uStack_1148;
  undefined8 local_1140;
  longlong *local_1138;
  undefined8 local_1130;
  longlong *local_1128;
  undefined4 local_1120;
  undefined1 local_111c;
  undefined8 local_1118;
  undefined8 uStack_1110;
  undefined8 local_1108;
  longlong *local_1100;
  undefined8 local_10f8;
  longlong *local_10f0;
  undefined8 local_10e8;
  longlong *local_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined1 local_10c8;
  undefined8 local_10c0;
  undefined8 uStack_10b8;
  undefined2 local_10a8;
  undefined8 local_10a0;
  undefined4 local_1098;
  undefined8 local_1090;
  longlong *local_1088;
  undefined8 local_1080;
  longlong *local_1078;
  undefined1 local_1070;
  undefined1 local_106f;
  undefined8 local_1068;
  undefined8 uStack_1060;
  longlong *local_1058;
  longlong *local_1050;
  undefined8 local_1048;
  undefined8 local_1040;
  undefined1 local_1038;
  undefined8 local_1030;
  undefined8 uStack_1028;
  undefined1 local_1020 [64];
  undefined4 local_fe0;
  undefined1 local_fdc;
  undefined4 local_fd8;
  undefined1 local_fd4;
  undefined1 local_fc8 [24];
  undefined8 local_fb0;
  undefined8 uStack_fa8;
  undefined1 local_fa0;
  undefined1 local_f98 [40];
  undefined8 local_f70;
  undefined4 local_f68;
  undefined2 local_f00;
  undefined1 local_ef8 [304];
  undefined8 local_dc8;
  undefined1 local_dc0;
  undefined1 local_db8 [128];
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 local_d28;
  undefined8 local_d20;
  undefined8 uStack_d18;
  undefined1 local_8c0 [192];
  undefined1 local_800 [192];
  undefined4 local_740 [110];
  undefined1 *local_588;
  undefined ***local_578;
  undefined **local_568;
  longlong local_560;
  code *local_548;
  undefined4 local_540;
  undefined1 local_218 [112];
  undefined2 local_1a8;
  undefined1 local_1a0 [320];
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x14777f0dc;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_12d8;
  lVar4 = *param_3;
  lVar6 = param_3[1];
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(param_1 + 0x280);
  *(longlong *)(param_1 + 0x278) = lVar4;
  *(longlong *)(param_1 + 0x280) = lVar6;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar11 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  uVar7 = *param_4;
  plVar11 = (longlong *)param_4[1];
  local_1288 = param_4;
  if (plVar11 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x268) = uVar7;
    plVar13 = *(longlong **)(param_1 + 0x270);
    if (plVar13 == (longlong *)0x0) goto LAB_14777f175;
    *(undefined8 *)(param_1 + 0x270) = 0;
LAB_14777fd5c:
    LOCK();
    plVar11 = plVar13 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 != 0) goto LAB_14777f175;
    (**(code **)*plVar13)(plVar13);
    LOCK();
    piVar1 = (int *)((longlong)plVar13 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x268) = uVar7;
    plVar13 = *(longlong **)(param_1 + 0x270);
    if (plVar11 != plVar13) {
      *(longlong **)(param_1 + 0x270) = plVar11;
      if (plVar13 == (longlong *)0x0) goto LAB_14777f175;
      goto LAB_14777fd5c;
    }
    LOCK();
    plVar13 = plVar11 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 != 0) goto LAB_14777f175;
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar13 = plVar11;
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
LAB_14777f175:
  lVar4 = *param_3;
  local_1298 = (longlong *)param_3[1];
  if (local_1298 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1298 + 1) = (int)local_1298[1] + 1;
    UNLOCK();
  }
  if (lVar4 != 0) {
    plVar11 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar11 == (longlong *)0x0) {
      plVar11 = DAT_14c96b350;
    }
    FUN_1446ddc76(&local_1048,"NoBrush",1);
    local_1040 = (**(code **)(*plVar11 + 0x50))(plVar11,local_1048,0,0);
    local_1038 = 1;
    local_1030 = 0;
    uStack_1028 = 0;
    FUN_145ab4d4e(lVar4 + 8);
    if (*(longlong *)(lVar4 + 0x2d8) != 0) {
      local_d38._0_2_ = CONCAT11(1,DAT_14c96b23b);
      uStack_d30 = 0;
      local_d28 = 0;
      FUN_14020e622();
    }
  }
  local_1290 = param_3;
  (**(code **)(*(longlong *)*param_3 + 0x58))((longlong *)*param_3,&local_1058);
  local_1070 = DAT_14c96b23a;
  local_106f = 1;
  local_1068 = 0;
  uStack_1060 = 0;
  (**(code **)(*local_1058 + 0x1c0))();
  FUN_140a504fe(local_218);
  local_12b8 = &local_f70;
  local_f70 = (code *)CONCAT44(local_f70._4_4_,param_6);
  local_740[0] = param_5;
  local_548 = FUN_14777fd98;
  local_540 = 0;
  FUN_14778001e(&local_d38,param_1);
  local_10a8 = 0x119;
  local_10a0 = 0;
  local_1098 = 0;
  FUN_140fe25fc(&local_10a0,&local_d38);
  FUN_1449db362(&local_d38);
  local_1a8 = local_10a8;
  FUN_144a450dc(local_1a0,&local_10a0);
  FUN_1449db362(&local_10a0);
  FUN_140a4fdf2(local_fc8,0);
  local_10d8 = 0;
  uStack_10d0 = 0;
  local_10c8 = 1;
  local_10c0 = 0;
  uStack_10b8 = 0;
  local_fb0 = 0;
  uStack_fa8 = 0;
  local_fa0 = 1;
  FUN_144a450dc(local_f98,&local_10c0);
  FUN_1449db362(&local_10c0);
  FUN_140a562d0(&local_548);
  local_578 = (undefined ***)0x0;
  local_568 = &PTR_LAB_14a544080;
  local_588 = &LAB_14778087e;
  local_560 = param_1;
  lVar6 = FUN_14777fe3e(&local_548);
  local_d38 = 0;
  uStack_d30 = 0;
  local_d28._0_1_ = 1;
  local_d20 = 0;
  uStack_d18 = 0;
  *(undefined1 *)(lVar6 + 0x1d0) = 1;
  *(undefined8 *)(lVar6 + 0x1c0) = 0;
  *(undefined8 *)(lVar6 + 0x1c8) = 0;
  FUN_144a450dc(lVar6 + 0x1d8,&local_d20);
  FUN_1449db362(&local_d20);
  FUN_140a5296a(local_740);
  local_12a0 = param_1;
  FUN_140a50426(local_800);
  uVar7 = FUN_140a52578(local_800);
  uVar7 = FUN_146a07044(uVar7,&local_1058);
  local_12a8 = FUN_140a52392(local_740,uVar7);
  FUN_140a50426(local_8c0);
  local_1120 = 0x3f800000;
  local_111c = 1;
  local_1118 = 0;
  uStack_1110 = 0;
  lVar8 = FUN_140a5475a(local_8c0);
  local_d38 = 0x4000000040000000;
  uStack_d30 = 0;
  local_d28 = CONCAT71(local_d28._1_7_,1);
  local_d20 = 0;
  uStack_d18 = 0;
  *(undefined1 *)(lVar8 + 0x28) = 1;
  *(undefined4 *)(lVar8 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar8 + 0x1c) = 0x40000000;
  *(undefined4 *)(lVar8 + 0x20) = 0;
  *(undefined4 *)(lVar8 + 0x24) = 0;
  FUN_144a450dc(lVar8 + 0x30,&local_d20);
  FUN_1449db362(&local_d20);
  FUN_140a570d8(&local_d38);
  local_f70 = (code *)0x14a543f00;
  local_f68 = 8;
  FUN_1446e940c(local_117c,&local_f70);
  local_f70 = (code *)0x149f0e2fc;
  local_f68 = 9;
  FUN_1446e940c(local_1180,&local_f70);
  lVar4 = local_12a0;
  FUN_140208bae(local_1178,local_1180,local_117c,&DAT_149e30fc2);
  FUN_14023423e(local_1168,local_1178);
  local_1158 = 1;
  local_1150 = 0;
  uStack_1148 = 0;
  uVar7 = FUN_140a54906(&local_d38,local_1168);
  local_f70 = FUN_14777ff8e;
  local_f68 = 0;
  uVar7 = FUN_14777fede(uVar7,lVar4,&local_f70,param_5);
  local_12b8 = (undefined8 *)&local_1199;
  FUN_140a54526(local_1198,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x4b9);
  FUN_140a52852(local_1198,&local_1140,uVar7);
  local_1130 = local_1140;
  local_1128 = local_1138;
  if (local_1138 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1138 + 1) = (int)local_1138[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_140a4fe8e(lVar8,&local_1130);
  uVar7 = FUN_140a52392(local_12a8,uVar7);
  local_12b8 = (undefined8 *)&local_11b9;
  FUN_140a541dc(local_11b8,"SHorizontalBox","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",
                0x4ae);
  FUN_140a50ec6(local_11b8,&local_1108,uVar7);
  plVar13 = local_1100;
  plVar11 = local_1290;
  if (local_1100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1100 + 1) = (int)local_1100[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1100 + 1) = (int)local_1100[1] + 1;
    UNLOCK();
  }
  plVar9 = *(longlong **)(lVar6 + 0x1b0);
  *(undefined8 *)(lVar6 + 0x1a8) = local_1108;
  *(longlong **)(lVar6 + 0x1b0) = local_1100;
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
  local_12b8 = (undefined8 *)&local_11d9;
  FUN_140a55c32(local_11d8,"SBorder","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x4a6);
  FUN_140a530e4(local_11d8,&local_10f8,lVar6);
  local_10e8 = local_10f8;
  local_10e0 = local_10f0;
  if (local_10f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10f0 + 1) = (int)local_10f0[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_140a4fd40(local_fc8,&local_10e8);
  uVar7 = FUN_140a5058c(local_218,uVar7);
  FUN_140a4fdf2(local_1020,0);
  local_fe0 = 0;
  local_fdc = 1;
  local_fd8 = 1;
  local_fd4 = 1;
  FUN_140a53334(&local_f70);
  local_1218 = CONCAT11(1,DAT_14c96b23a);
  local_1210 = 0;
  uStack_1208 = 0;
  local_f00 = local_1218;
  FUN_144a450dc(local_ef8,&local_1210);
  FUN_1449db362(&local_1210);
  plVar9 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_1240,"ListView.PinnedItemShadow",1);
  local_1238 = (**(code **)(*plVar9 + 0x50))(plVar9,local_1240,0,0);
  local_1230 = 1;
  local_1228 = 0;
  uStack_1220 = 0;
  local_dc0 = 1;
  local_dc8 = local_1238;
  FUN_144a450dc(local_db8,&local_1228);
  FUN_1449db362(&local_1228);
  local_12b8 = (undefined8 *)&local_1259;
  FUN_140a554b8(local_1258,"SImage","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x4c3);
  FUN_140a52c70(local_1258,&local_1200,&local_f70);
  local_11f0 = local_1200;
  local_11e8 = local_11f8;
  if (local_11f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_11f8 + 1) = (int)local_11f8[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fd40(local_1020,&local_11f0);
  uVar7 = FUN_140a5058c(uVar7,uVar10);
  local_12b8 = (undefined8 *)&local_1279;
  FUN_140a536a8(local_1278,"SOverlay","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x4a0);
  FUN_140a4ff16(local_1278,&local_1090,uVar7);
  local_1080 = local_1090;
  local_1078 = local_1088;
  if (local_1088 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1088 + 1) = (int)local_1088[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(lVar4 + 0x1e0,&local_1080);
  plVar9 = local_1078;
  puVar5 = local_1288;
  if (local_1078 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1078 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1078)(local_1078);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_1088 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1088 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_1088)(local_1088);
      LOCK();
      piVar1 = (int *)((longlong)local_1088 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1088 + 0x10))(local_1088);
      }
    }
  }
  if (local_1270 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1270 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_1270)(local_1270);
      LOCK();
      piVar1 = (int *)((longlong)local_1270 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1270 + 0x10))(local_1270);
      }
    }
  }
  plVar9 = local_11e8;
  if (local_11e8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_11e8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_11e8)(local_11e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_11f8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_11f8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_11f8)(local_11f8);
      LOCK();
      piVar1 = (int *)((longlong)local_11f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_11f8 + 0x10))(local_11f8);
      }
    }
  }
  if (local_1250 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1250 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_1250)(local_1250);
      LOCK();
      piVar1 = (int *)((longlong)local_1250 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1250 + 0x10))(local_1250);
      }
    }
  }
  FUN_140a55a86(&local_f70);
  FUN_1415b5e50(local_1020);
  plVar9 = local_10e0;
  if (local_10e0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_10e0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_10e0)(local_10e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_10f0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_10f0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_10f0)(local_10f0);
      LOCK();
      piVar1 = (int *)((longlong)local_10f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_10f0 + 0x10))(local_10f0);
      }
    }
  }
  if (local_11d0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_11d0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_11d0)(local_11d0);
      LOCK();
      piVar1 = (int *)((longlong)local_11d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_11d0 + 0x10))(local_11d0);
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar13 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if (local_1100 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1100 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_1100)(local_1100);
      LOCK();
      piVar1 = (int *)((longlong)local_1100 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1100 + 0x10))(local_1100);
      }
    }
  }
  if (local_11b0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_11b0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_11b0)(local_11b0);
      LOCK();
      piVar1 = (int *)((longlong)local_11b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_11b0 + 0x10))(local_11b0);
      }
    }
  }
  plVar13 = local_1128;
  if (local_1128 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1128 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_1128)(local_1128);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if (local_1138 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1138 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_1138)(local_1138);
      LOCK();
      piVar1 = (int *)((longlong)local_1138 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1138 + 0x10))(local_1138);
      }
    }
  }
  if (local_1190 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1190 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_1190)(local_1190);
      LOCK();
      piVar1 = (int *)((longlong)local_1190 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1190 + 0x10))(local_1190);
      }
    }
  }
  if (local_1178[0] != (longlong *)0x0) {
    (**(code **)(*local_1178[0] + 0x10))();
  }
  FUN_140a59ae6(&local_d38);
  FUN_140a509a6(local_8c0);
  FUN_140a509a6(local_800);
  FUN_145ab33da(local_740);
  if (local_588 != (undefined1 *)0x0) {
    pppuVar12 = local_578;
    if (local_578 == (undefined ***)0x0) {
      pppuVar12 = &local_568;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  FUN_140a59028(&local_548);
  FUN_1415b5e50(local_fc8);
  FUN_1415b5e16(local_218);
  if (local_1050 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1050 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_1050)(local_1050);
      LOCK();
      piVar1 = (int *)((longlong)local_1050 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1050 + 0x10))(local_1050);
      }
    }
  }
  plVar13 = local_1298;
  if (local_1298 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1298 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_1298)(local_1298);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  plVar11 = (longlong *)plVar11[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar11 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  plVar11 = (longlong *)puVar5[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar11 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_12d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14777fd98 FUN_14777fd98 body=165 status=ok
// SIG undefined FUN_14777fd98(void)

undefined1 * FUN_14777fd98(longlong param_1,undefined1 *param_2,int param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x268);
  puVar5 = &DAT_14c96b238;
  if (*(char *)(lVar1 + 0x898) == '\x01') {
    if ((*(int *)(lVar1 + 0x878) != 0) && (*(longlong **)(lVar1 + 0x870) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x870) + 0x30))();
      if (cVar2 != '\0') {
        if (*(int *)(lVar1 + 0x878) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(lVar1 + 0x870);
        }
        uVar3 = (**(code **)(*plVar4 + 0x58))();
        *(undefined4 *)(lVar1 + 0x868) = uVar3;
      }
    }
    if ((param_4 + -1 != param_3) &&
       (puVar5 = &DAT_14c96b1e1, param_3 < *(int *)(lVar1 + 0x868) + -1)) {
      puVar5 = &DAT_14c96b238;
    }
  }
  *param_2 = *puVar5;
  return param_2;
}



// FUNCTION 14777fe3e FUN_14777fe3e body=158 status=ok
// SIG undefined FUN_14777fe3e(void)

longlong FUN_14777fe3e(longlong param_1)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147780546(local_30);
  local_50 = 0;
  local_48 = 1;
  local_40 = 0;
  local_38 = 0;
  FUN_140a5c3e8(&local_40,local_30);
  FUN_1449db362(local_30);
  *(undefined1 *)(param_1 + 0x230) = local_48;
  *(undefined8 *)(param_1 + 0x228) = local_50;
  FUN_144a450dc(param_1 + 0x238,&local_40);
  FUN_1449db362(&local_40);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14777fede FUN_14777fede body=174 status=ok
// SIG undefined FUN_14777fede(void)

longlong FUN_14777fede(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *param_3;
  local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_3 + 1));
  local_24 = param_4;
  FUN_147780964(local_50,param_2,&local_40,&local_24);
  local_40 = CONCAT62(local_40._2_6_,0x119);
  local_38 = 0;
  local_30 = 0;
  FUN_140fe25fc(&local_38,local_50);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_40;
  FUN_144a450dc(param_1 + 0x78,&local_38);
  FUN_1449db362(&local_38);
  FUN_1449db362(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14777ff8e FUN_14777ff8e body=144 status=ok
// SIG undefined FUN_14777ff8e(void)

undefined1 * FUN_14777ff8e(longlong param_1,undefined1 *param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x268);
  uVar3 = DAT_14c96b1e1;
  if (*(char *)(lVar1 + 0x898) != '\0') {
    if (((*(int *)(lVar1 + 0x878) != 0) && (*(longlong **)(lVar1 + 0x870) != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x870) + 0x30))(), cVar2 != '\0')) {
      if (*(int *)(lVar1 + 0x878) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(lVar1 + 0x870);
      }
      uVar4 = (**(code **)(*plVar6 + 0x58))();
      *(undefined4 *)(lVar1 + 0x868) = uVar4;
    }
    puVar5 = &DAT_14c96b1e1;
    if (*(int *)(lVar1 + 0x868) + -2 == param_3) {
      puVar5 = &DAT_14c96b238;
    }
    uVar3 = *puVar5;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 14778001e FUN_14778001e body=361 status=ok
// SIG undefined FUN_14778001e(void)

longlong *
FUN_14778001e(longlong *param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4,
             undefined4 *param_5)

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
LAB_1477800a5:
    uVar12 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_1477800a5;
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
  *puVar5 = &PTR_LAB_14a543fa0;
  *(undefined4 *)(puVar5 + 1) = *param_4;
  *(undefined4 *)((longlong)puVar5 + 0xc) = *param_5;
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
  *puVar5 = &PTR_FUN_14a543f30;
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



// FUNCTION 147780188 FUN_147780188 body=64 status=ok
// SIG undefined FUN_147780188(void)

undefined8 * FUN_147780188(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a543f30;
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



// FUNCTION 1477801cc FUN_1477801cc body=81 status=ok
// SIG undefined FUN_1477801cc(void)

undefined8 FUN_1477801cc(longlong param_1)

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



// FUNCTION 147780224 FUN_147780224 body=89 status=ok
// SIG undefined FUN_147780224(void)

bool FUN_147780224(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14778026f;
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
LAB_14778026f:
  return lVar6 == param_2;
}



// FUNCTION 1477802a6 FUN_1477802a6 body=118 status=ok
// SIG undefined FUN_1477802a6(void)

void FUN_1477802a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a543fa0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14a543f30;
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



// FUNCTION 14778031c FUN_14778031c body=118 status=ok
// SIG undefined FUN_14778031c(void)

void FUN_14778031c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a543fa0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14a543f30;
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



// FUNCTION 147780392 FUN_147780392 body=156 status=ok
// SIG undefined FUN_147780392(void)

void FUN_147780392(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a543fa0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14a543f30;
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
                    /* WARNING: Could not recover jumptable at 0x00014778041e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14778042e FUN_14778042e body=125 status=ok
// SIG undefined FUN_14778042e(void)

undefined8 FUN_14778042e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x20);
  bVar3 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar7[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_147780465;
      }
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
    lVar6 = *(longlong *)(param_1 + 0x18);
    bVar3 = false;
  }
LAB_147780465:
  (**(code **)(param_1 + 0x28))
            (*(int *)(param_1 + 0x30) + lVar6,param_2,*(undefined4 *)(param_1 + 8),
             *(undefined4 *)(param_1 + 0xc));
  if (!bVar3) {
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



// FUNCTION 1477804ac FUN_1477804ac body=151 status=ok
// SIG undefined FUN_1477804ac(void)

ulonglong FUN_1477804ac(longlong param_1)

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
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_147780522:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147780522;
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
      (**(code **)(param_1 + 0x28))
                (lVar4 + *(int *)(param_1 + 0x30),&local_19,*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0xc));
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



// FUNCTION 147780546 FUN_147780546 body=183 status=ok
// SIG undefined FUN_147780546(void)

longlong * FUN_147780546(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,6,0x10);
  *(undefined4 *)(param_1 + 1) = 6;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_149f056a0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar1[2] = lVar6;
  *puVar1 = &PTR_FUN_14a544010;
  puVar1[4] = *param_2;
  puVar1[6] = param_2[2];
  param_2[2] = 0;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  uVar4 = param_2[7];
  puVar1[10] = param_2[6];
  puVar1[0xb] = uVar4;
  puVar1[8] = uVar2;
  puVar1[9] = uVar3;
  if (puVar1[4] != 0) {
    *param_2 = 0;
  }
  return param_1;
}



// FUNCTION 1477805fe FUN_1477805fe body=71 status=ok
// SIG undefined FUN_1477805fe(void)

undefined8 * FUN_1477805fe(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a544010;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14778065a FUN_14778065a body=144 status=ok
// SIG undefined FUN_14778065a(void)

void FUN_14778065a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f056a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a544010;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x0001477806df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1477806ea FUN_1477806ea body=144 status=ok
// SIG undefined FUN_1477806ea(void)

void FUN_1477806ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f056a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a544010;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x00014778076f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}


