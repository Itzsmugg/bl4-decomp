// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14782acbc FUN_14782acbc body=20 status=ok
// SIG undefined FUN_14782acbc(void)

undefined8 FUN_14782acbc(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 14782acd4 FUN_14782acd4 body=280 status=ok
// SIG undefined FUN_14782acd4(void)

void FUN_14782acd4(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == 0) {
    (**(code **)(*DAT_14ca83900 + 0x38))(DAT_14ca83900,&DAT_14ca85100);
    local_38 = 0;
    local_30 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_38,7);
    local_38 = 0;
    local_30 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_38,5);
  }
  else {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
    (**(code **)(*DAT_14ca83900 + 0x38))(DAT_14ca83900,&DAT_14ca85100);
    local_38 = 0;
    local_30 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_38,7);
    local_38 = 0;
    local_30 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_38,5);
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782ae04 FUN_14782ae04 body=157 status=ok
// SIG undefined FUN_14782ae04(void)

void FUN_14782ae04(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14a5a99e0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 2;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 2;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 2;
  return;
}



// FUNCTION 14782aea2 FUN_14782aea2 body=56 status=ok
// SIG undefined FUN_14782aea2(void)

void FUN_14782aea2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014782aecf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14782aeda FUN_14782aeda body=56 status=ok
// SIG undefined FUN_14782aeda(void)

void FUN_14782aeda(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014782af07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14782af40 FUN_14782af40 body=32 status=ok
// SIG undefined FUN_14782af40(void)

undefined8 FUN_14782af40(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 14782afa4 FUN_14782afa4 body=56 status=ok
// SIG undefined FUN_14782afa4(void)

void FUN_14782afa4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014782afd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14782afe0 FUN_14782afe0 body=38 status=ok
// SIG undefined FUN_14782afe0(void)

undefined8 FUN_14782afe0(undefined8 param_1,int param_2)

{
  FUN_14782b006();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782b006 FUN_14782b006 body=337 status=ok
// SIG undefined FUN_14782b006(void)

void FUN_14782b006(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a5a99e0;
  FUN_144760e21(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x12);
  FUN_144760e21(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014782b14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14782b158 FUN_14782b158 body=28 status=ok
// SIG undefined FUN_14782b158(void)

void FUN_14782b158(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014782b170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xf8))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 14782b174 FUN_14782b174 body=29 status=ok
// SIG undefined FUN_14782b174(void)

undefined8 FUN_14782b174(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782b191 FUN_14782b191 body=75 status=ok
// SIG undefined FUN_14782b191(void)

void FUN_14782b191(longlong param_1,int param_2)

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



// FUNCTION 14782b1dc FUN_14782b1dc body=31 status=ok
// SIG undefined FUN_14782b1dc(void)

undefined8 FUN_14782b1dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782b214 FUN_14782b214 body=101 status=ok
// SIG undefined FUN_14782b214(void)

void FUN_14782b214(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14a5a9b90;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14782b27a FUN_14782b27a body=101 status=ok
// SIG undefined FUN_14782b27a(void)

void FUN_14782b27a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14a5a9b90;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14782b2e0 FUN_14782b2e0 body=134 status=ok
// SIG undefined FUN_14782b2e0(void)

void FUN_14782b2e0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined **)p_Var1 = &DAT_149efe500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5a9b90;
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
                    /* WARNING: Could not recover jumptable at 0x00014782b357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14782b366 FUN_14782b366 body=25 status=ok
// SIG undefined FUN_14782b366(void)

undefined8 FUN_14782b366(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14782b380 FUN_14782b380 body=31 status=ok
// SIG undefined FUN_14782b380(void)

undefined8 FUN_14782b380(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782b3b8 FUN_14782b3b8 body=101 status=ok
// SIG undefined FUN_14782b3b8(void)

void FUN_14782b3b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5a9c70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5a9c00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14782b41e FUN_14782b41e body=101 status=ok
// SIG undefined FUN_14782b41e(void)

void FUN_14782b41e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5a9c70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5a9c00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14782b484 FUN_14782b484 body=134 status=ok
// SIG undefined FUN_14782b484(void)

void FUN_14782b484(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5a9c70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5a9c00;
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
                    /* WARNING: Could not recover jumptable at 0x00014782b4fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14782b50a FUN_14782b50a body=132 status=ok
// SIG undefined FUN_14782b50a(void)

void FUN_14782b50a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = *(int *)(param_1 + 0x28);
  lVar4 = *(longlong *)(param_1 + 0x18);
  pcVar5 = *(code **)(param_1 + 0x20);
  local_20 = *param_2;
  local_18 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar5)(iVar3 + lVar4);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782b592 FUN_14782b592 body=31 status=ok
// SIG undefined FUN_14782b592(void)

undefined8 FUN_14782b592(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782b5ce FUN_14782b5ce body=101 status=ok
// SIG undefined FUN_14782b5ce(void)

void FUN_14782b5ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5a9d50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14782b634 FUN_14782b634 body=101 status=ok
// SIG undefined FUN_14782b634(void)

void FUN_14782b634(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5a9d50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14782b69a FUN_14782b69a body=134 status=ok
// SIG undefined FUN_14782b69a(void)

void FUN_14782b69a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5a9d50;
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
                    /* WARNING: Could not recover jumptable at 0x00014782b711. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14782b732 FUN_14782b732 body=31 status=ok
// SIG undefined FUN_14782b732(void)

undefined8 FUN_14782b732(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782b76e FUN_14782b76e body=101 status=ok
// SIG undefined FUN_14782b76e(void)

void FUN_14782b76e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a5a9e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14782b7d4 FUN_14782b7d4 body=101 status=ok
// SIG undefined FUN_14782b7d4(void)

void FUN_14782b7d4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a5a9e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14782b83a FUN_14782b83a body=134 status=ok
// SIG undefined FUN_14782b83a(void)

void FUN_14782b83a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a5a9e30;
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
                    /* WARNING: Could not recover jumptable at 0x00014782b8b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14782b8d0 FUN_14782b8d0 body=97 status=ok
// SIG undefined FUN_14782b8d0(void)

undefined8 * FUN_14782b8d0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5a9ee0;
  FUN_1449db362(param_1 + 0x56);
  FUN_1449db362(param_1 + 0x54);
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782b932 FUN_14782b932 body=120 status=ok
// SIG undefined FUN_14782b932(void)

undefined8 FUN_14782b932(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  if (((*(int *)(param_1 + 0x2a8) != 0) && (*(longlong **)(param_1 + 0x2a0) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x30))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x2a8) == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0x2a0);
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_3,param_4);
    return param_2;
  }
  FUN_14171f816(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 14782b9aa FUN_14782b9aa body=142 status=ok
// SIG undefined FUN_14782b9aa(void)

undefined1 *
FUN_14782b9aa(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  if (((*(int *)(param_1 + 0x2b8) != 0) && (*(longlong **)(param_1 + 0x2b0) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x30))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x2b8) == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0x2b0);
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_4);
    return param_2;
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782ba38 FUN_14782ba38 body=68 status=ok
// SIG undefined FUN_14782ba38(void)

undefined8 * FUN_14782ba38(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a5aa130;
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



// FUNCTION 14782ba80 FUN_14782ba80 body=81 status=ok
// SIG undefined FUN_14782ba80(void)

undefined8 FUN_14782ba80(longlong param_1)

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



// FUNCTION 14782bad8 FUN_14782bad8 body=89 status=ok
// SIG undefined FUN_14782bad8(void)

bool FUN_14782bad8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14782bb23;
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
LAB_14782bb23:
  return lVar6 == param_2;
}



// FUNCTION 14782bb4e FUN_14782bb4e body=118 status=ok
// SIG undefined FUN_14782bb4e(void)

void FUN_14782bb4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f1b5c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5aa130;
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



// FUNCTION 14782bbc4 FUN_14782bbc4 body=156 status=ok
// SIG undefined FUN_14782bbc4(void)

void FUN_14782bbc4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f1b5c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5aa130;
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
                    /* WARNING: Could not recover jumptable at 0x00014782bc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14782bc60 FUN_14782bc60 body=105 status=ok
// SIG undefined FUN_14782bc60(void)

undefined8 FUN_14782bc60(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14782bcb4:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14782bcb4;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 14782bcca FUN_14782bcca body=174 status=ok
// SIG undefined FUN_14782bcca(void)

ulonglong FUN_14782bcca(longlong param_1,undefined8 param_2,undefined8 param_3)

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
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [184];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14782bd50:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14782bd50;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_d8,param_2,param_3);
      FUN_14493db24(local_d8);
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
  if ((local_20 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14782bd7a FUN_14782bd7a body=68 status=ok
// SIG undefined FUN_14782bd7a(void)

undefined8 * FUN_14782bd7a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a5aa1a0;
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



// FUNCTION 14782bdc2 FUN_14782bdc2 body=81 status=ok
// SIG undefined FUN_14782bdc2(void)

undefined8 FUN_14782bdc2(longlong param_1)

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



// FUNCTION 14782be1a FUN_14782be1a body=89 status=ok
// SIG undefined FUN_14782be1a(void)

bool FUN_14782be1a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14782be65;
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
LAB_14782be65:
  return lVar6 == param_2;
}



// FUNCTION 14782be90 FUN_14782be90 body=118 status=ok
// SIG undefined FUN_14782be90(void)

void FUN_14782be90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5aa1a0;
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



// FUNCTION 14782bf06 FUN_14782bf06 body=156 status=ok
// SIG undefined FUN_14782bf06(void)

void FUN_14782bf06(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5aa1a0;
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
                    /* WARNING: Could not recover jumptable at 0x00014782bf92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14782bfa2 FUN_14782bfa2 body=105 status=ok
// SIG undefined FUN_14782bfa2(void)

undefined8 FUN_14782bfa2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14782bff6:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14782bff6;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 14782c00c FUN_14782c00c body=174 status=ok
// SIG undefined FUN_14782c00c(void)

ulonglong FUN_14782c00c(longlong param_1,undefined8 param_2,undefined8 param_3)

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
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [184];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14782c092:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14782c092;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_d8,param_2,param_3);
      FUN_14493db24(local_d8);
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
  if ((local_20 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14782c0bc FUN_14782c0bc body=68 status=ok
// SIG undefined FUN_14782c0bc(void)

undefined8 * FUN_14782c0bc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a5aa210;
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



// FUNCTION 14782c104 FUN_14782c104 body=81 status=ok
// SIG undefined FUN_14782c104(void)

undefined8 FUN_14782c104(longlong param_1)

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



// FUNCTION 14782c15c FUN_14782c15c body=89 status=ok
// SIG undefined FUN_14782c15c(void)

bool FUN_14782c15c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14782c1a7;
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
LAB_14782c1a7:
  return lVar6 == param_2;
}



// FUNCTION 14782c1de FUN_14782c1de body=118 status=ok
// SIG undefined FUN_14782c1de(void)

void FUN_14782c1de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5aa280;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5aa210;
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



// FUNCTION 14782c254 FUN_14782c254 body=156 status=ok
// SIG undefined FUN_14782c254(void)

void FUN_14782c254(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5aa280;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5aa210;
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
                    /* WARNING: Could not recover jumptable at 0x00014782c2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14782c2f0 FUN_14782c2f0 body=105 status=ok
// SIG undefined FUN_14782c2f0(void)

undefined8 FUN_14782c2f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14782c344:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14782c344;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 14782c35a FUN_14782c35a body=171 status=ok
// SIG undefined FUN_14782c35a(void)

ulonglong FUN_14782c35a(longlong param_1,undefined8 param_2)

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
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [184];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14782c3dd:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14782c3dd;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_d8,param_2);
      FUN_14493db24(local_d8);
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
  if ((local_20 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14782c408 FUN_14782c408 body=68 status=ok
// SIG undefined FUN_14782c408(void)

undefined8 * FUN_14782c408(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a5aa2f0;
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



// FUNCTION 14782c450 FUN_14782c450 body=81 status=ok
// SIG undefined FUN_14782c450(void)

undefined8 FUN_14782c450(longlong param_1)

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



// FUNCTION 14782c4a8 FUN_14782c4a8 body=89 status=ok
// SIG undefined FUN_14782c4a8(void)

bool FUN_14782c4a8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14782c4f3;
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
LAB_14782c4f3:
  return lVar6 == param_2;
}



// FUNCTION 14782c502 FUN_14782c502 body=118 status=ok
// SIG undefined FUN_14782c502(void)

void FUN_14782c502(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f201b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5aa2f0;
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



// FUNCTION 14782c578 FUN_14782c578 body=156 status=ok
// SIG undefined FUN_14782c578(void)

void FUN_14782c578(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f201b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5aa2f0;
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
                    /* WARNING: Could not recover jumptable at 0x00014782c604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14782c614 FUN_14782c614 body=143 status=ok
// SIG undefined FUN_14782c614(void)

ulonglong FUN_14782c614(longlong param_1)

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
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14782c682:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14782c682;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_1c);
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



// FUNCTION 14782c6a4 FUN_14782c6a4 body=68 status=ok
// SIG undefined FUN_14782c6a4(void)

undefined8 * FUN_14782c6a4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a5aa360;
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



// FUNCTION 14782c6ec FUN_14782c6ec body=81 status=ok
// SIG undefined FUN_14782c6ec(void)

undefined8 FUN_14782c6ec(longlong param_1)

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



// FUNCTION 14782c744 FUN_14782c744 body=89 status=ok
// SIG undefined FUN_14782c744(void)

bool FUN_14782c744(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14782c78f;
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
LAB_14782c78f:
  return lVar6 == param_2;
}



// FUNCTION 14782c79e FUN_14782c79e body=118 status=ok
// SIG undefined FUN_14782c79e(void)

void FUN_14782c79e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f055c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5aa360;
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



// FUNCTION 14782c814 FUN_14782c814 body=156 status=ok
// SIG undefined FUN_14782c814(void)

void FUN_14782c814(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f055c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5aa360;
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
                    /* WARNING: Could not recover jumptable at 0x00014782c8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14782c8b0 FUN_14782c8b0 body=143 status=ok
// SIG undefined FUN_14782c8b0(void)

ulonglong FUN_14782c8b0(longlong param_1)

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
LAB_14782c91e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14782c91e;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),&local_19);
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



// FUNCTION 14782c940 FUN_14782c940 body=31 status=ok
// SIG undefined FUN_14782c940(void)

undefined8 FUN_14782c940(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782c978 FUN_14782c978 body=101 status=ok
// SIG undefined FUN_14782c978(void)

void FUN_14782c978(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f02f40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5aa3e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14782c9de FUN_14782c9de body=101 status=ok
// SIG undefined FUN_14782c9de(void)

void FUN_14782c9de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f02f40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5aa3e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14782ca44 FUN_14782ca44 body=134 status=ok
// SIG undefined FUN_14782ca44(void)

void FUN_14782ca44(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f02f40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5aa3e0;
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
                    /* WARNING: Could not recover jumptable at 0x00014782cabb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14782cadc FUN_14782cadc body=68 status=ok
// SIG undefined FUN_14782cadc(void)

undefined8 * FUN_14782cadc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a5aa4c0;
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



// FUNCTION 14782cb24 FUN_14782cb24 body=81 status=ok
// SIG undefined FUN_14782cb24(void)

undefined8 FUN_14782cb24(longlong param_1)

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



// FUNCTION 14782cb7c FUN_14782cb7c body=89 status=ok
// SIG undefined FUN_14782cb7c(void)

bool FUN_14782cb7c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14782cbc7;
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
LAB_14782cbc7:
  return lVar6 == param_2;
}



// FUNCTION 14782cbd6 FUN_14782cbd6 body=118 status=ok
// SIG undefined FUN_14782cbd6(void)

void FUN_14782cbd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5aa940;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5aa4c0;
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



// FUNCTION 14782cc4c FUN_14782cc4c body=118 status=ok
// SIG undefined FUN_14782cc4c(void)

void FUN_14782cc4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5aa940;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5aa4c0;
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



// FUNCTION 14782ccc2 FUN_14782ccc2 body=156 status=ok
// SIG undefined FUN_14782ccc2(void)

void FUN_14782ccc2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5aa940;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5aa4c0;
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
                    /* WARNING: Could not recover jumptable at 0x00014782cd4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14782cd5e FUN_14782cd5e body=104 status=ok
// SIG undefined FUN_14782cd5e(void)

void FUN_14782cd5e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014782cdab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014782cdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14782cdc8 FUN_14782cdc8 body=164 status=ok
// SIG undefined FUN_14782cdc8(void)

void FUN_14782cdc8(longlong *param_1,undefined8 param_2)

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
        goto LAB_14782ce48;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14782ce48:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14782ce6c FUN_14782ce6c body=164 status=ok
// SIG undefined FUN_14782ce6c(void)

void FUN_14782ce6c(longlong *param_1,undefined8 param_2)

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
        goto LAB_14782ceec;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14782ceec:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14782cf10 FUN_14782cf10 body=29 status=ok
// SIG undefined FUN_14782cf10(void)

undefined8 FUN_14782cf10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782cf4a FUN_14782cf4a body=101 status=ok
// SIG undefined FUN_14782cf4a(void)

void FUN_14782cf4a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a5aa550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14782cfb0 FUN_14782cfb0 body=101 status=ok
// SIG undefined FUN_14782cfb0(void)

void FUN_14782cfb0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a5aa550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14782d016 FUN_14782d016 body=134 status=ok
// SIG undefined FUN_14782d016(void)

void FUN_14782d016(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5aa550;
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
                    /* WARNING: Could not recover jumptable at 0x00014782d08d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14782d0ae FUN_14782d0ae body=25 status=ok
// SIG undefined FUN_14782d0ae(void)

undefined8 FUN_14782d0ae(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14782d0c8 FUN_14782d0c8 body=351 status=ok
// SIG undefined FUN_14782d0c8(void)

undefined8 * FUN_14782d0c8(undefined8 *param_1,undefined8 param_2)

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
  plVar3 = (longlong *)FUN_14001cc68(0x278);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a5aa5c0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x268);
  FUN_140a55f88(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_14a5aa5e0;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_14782d2b4(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14782d1ba;
    param_1[1] = 0;
LAB_14782d184:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14782d1ba;
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
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_14782d1ba;
      goto LAB_14782d184;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14782d1ba;
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
LAB_14782d1ba:
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
  local_38 = 0x268;
  FUN_140a52e78(*param_1,"SLoadingScreenTestWidget",".\\Runtime/MoviePlayer/Private/MoviePlayer.cpp"
                ,0x42);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782d228 FUN_14782d228 body=45 status=ok
// SIG undefined FUN_14782d228(void)

void FUN_14782d228(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x208);
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 14782d256 FUN_14782d256 body=29 status=ok
// SIG undefined FUN_14782d256(void)

undefined8 FUN_14782d256(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782d274 FUN_14782d274 body=63 status=ok
// SIG undefined FUN_14782d274(void)

undefined8 * FUN_14782d274(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782d2b4 FUN_14782d2b4 body=167 status=ok
// SIG undefined FUN_14782d2b4(void)

void FUN_14782d2b4(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14782d32f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14782d32f;
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
LAB_14782d32f:
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
                    /* WARNING: Could not recover jumptable at 0x00014782d34f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14782d35c FUN_14782d35c body=1270 status=ok
// SIG undefined FUN_14782d35c(void)

void FUN_14782d35c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_ad8 [32];
  undefined1 *local_ab8;
  undefined1 local_aa1;
  undefined1 local_aa0 [8];
  longlong *local_a98;
  undefined1 local_a81;
  code *local_a80;
  undefined4 local_a78;
  undefined4 uStack_a74;
  undefined1 local_a68 [4];
  undefined1 local_a64 [4];
  longlong *local_a60 [2];
  undefined1 local_a50 [16];
  undefined1 local_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  longlong *local_a20;
  undefined8 local_a18;
  longlong *local_a10;
  undefined1 local_a01;
  undefined1 local_a00 [8];
  longlong *local_9f8;
  undefined8 local_9e8;
  longlong *local_9e0;
  undefined8 local_9d8;
  longlong *local_9d0;
  undefined8 local_9c8;
  longlong *local_9c0;
  undefined8 local_9b8;
  longlong *local_9b0;
  code *local_9a8;
  undefined4 local_9a0;
  undefined1 local_538 [64];
  undefined4 local_4f8;
  undefined1 local_4f4;
  undefined4 local_4f0;
  undefined1 local_4ec;
  undefined1 local_478 [440];
  undefined1 local_2c0 [64];
  undefined4 local_280;
  undefined1 local_27c;
  undefined4 local_278;
  undefined1 local_274;
  undefined1 local_200 [440];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_ad8;
  FUN_1407679b0(local_200);
  FUN_145aafb3e(local_2c0);
  local_278 = 2;
  local_274 = 1;
  local_280 = 2;
  local_27c = 1;
  FUN_147755e32(local_478);
  local_9a8 = FUN_143382ef6;
  local_9a0 = 0;
  FUN_14782d854(local_478,param_1);
  local_ab8 = &local_a01;
  FUN_147775148(local_a00,"SThrobber",".\\Runtime/MoviePlayer/Private/MoviePlayer.cpp",0x23);
  FUN_147755ed2(local_a00,&local_9e8,local_478);
  local_9d8 = local_9e8;
  local_9d0 = local_9e0;
  if (local_9e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_9e0 + 1) = (int)local_9e0[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_145aaf878(local_2c0,&local_9d8);
  uVar4 = FUN_145aaf822(local_200,uVar4);
  FUN_145aafb3e(local_538);
  local_4f0 = 2;
  local_4ec = 1;
  local_4f8 = 2;
  local_4f4 = 1;
  FUN_140a570d8(&local_9a8);
  local_a80 = (code *)0x14a5aa844;
  local_a78 = 0xf;
  FUN_1446e940c(local_a64,&local_a80);
  local_a80 = (code *)0x14a5aa864;
  local_a78 = 0x1c;
  FUN_1446e940c(local_a68,&local_a80);
  FUN_140208bae(local_a60,local_a68,local_a64,L"Loading complete!");
  FUN_14023423e(local_a50,local_a60);
  local_a40 = 1;
  local_a38 = 0;
  uStack_a30 = 0;
  uVar5 = FUN_140a54906(&local_9a8,local_a50);
  local_a80 = FUN_143382f64;
  local_a78 = 0;
  FUN_14782d8f8(uVar5,param_1,&local_a80);
  local_ab8 = &local_a81;
  FUN_140a54526(&local_a80,"STextBlock",".\\Runtime/MoviePlayer/Private/MoviePlayer.cpp",0x2a);
  FUN_140a52852(&local_a80,&local_a28,uVar5);
  local_a18 = local_a28;
  local_a10 = local_a20;
  if (local_a20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a20 + 1) = (int)local_a20[1] + 1;
    UNLOCK();
  }
  uVar5 = FUN_145aaf878(local_538,&local_a18);
  uVar4 = FUN_145aaf822(uVar4,uVar5);
  local_ab8 = &local_aa1;
  FUN_14076837c(local_aa0,"SVerticalBox",".\\Runtime/MoviePlayer/Private/MoviePlayer.cpp",0x1e);
  FUN_14076784c(local_aa0,&local_9c8,uVar4);
  local_9b8 = local_9c8;
  local_9b0 = local_9c0;
  if (local_9c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_9c0 + 1) = (int)local_9c0[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_9b8);
  plVar3 = local_9b0;
  if (local_9b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_9b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_9b0)(local_9b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_9c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_9c0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_9c0)(local_9c0);
      LOCK();
      piVar2 = (int *)((longlong)local_9c0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_9c0 + 0x10))(local_9c0);
      }
    }
  }
  if (local_a98 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_a98 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_a98)(local_a98);
      LOCK();
      piVar2 = (int *)((longlong)local_a98 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a98 + 0x10))(local_a98);
      }
    }
  }
  plVar3 = local_a10;
  if (local_a10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a10)(local_a10);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_a20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_a20 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_a20)(local_a20);
      LOCK();
      piVar2 = (int *)((longlong)local_a20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a20 + 0x10))(local_a20);
      }
    }
  }
  plVar3 = (longlong *)CONCAT44(uStack_a74,local_a78);
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
  if (local_a60[0] != (longlong *)0x0) {
    (**(code **)(*local_a60[0] + 0x10))();
  }
  FUN_140a59ae6(&local_9a8);
  FUN_140767f30(local_538);
  plVar3 = local_9d0;
  if (local_9d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_9d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_9d0)(local_9d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_9e0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_9e0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_9e0)(local_9e0);
      LOCK();
      piVar2 = (int *)((longlong)local_9e0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_9e0 + 0x10))(local_9e0);
      }
    }
  }
  if (local_9f8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_9f8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_9f8)(local_9f8);
      LOCK();
      piVar2 = (int *)((longlong)local_9f8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_9f8 + 0x10))(local_9f8);
      }
    }
  }
  FUN_140a4ff8c(local_478);
  FUN_140767f30(local_2c0);
  FUN_14149255e(local_200);
  if ((local_48 ^ (ulonglong)auStack_ad8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782d854 FUN_14782d854 body=163 status=ok
// SIG undefined FUN_14782d854(void)

longlong FUN_14782d854(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_14782d99c(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x119);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x78,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782d8f8 FUN_14782d8f8 body=163 status=ok
// SIG undefined FUN_14782d8f8(void)

longlong FUN_14782d8f8(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_14782d99c(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x119);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x78,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782d99c FUN_14782d99c body=386 status=ok
// SIG undefined FUN_14782d99c(void)

longlong * FUN_14782d99c(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14782daad:
    *puVar5 = &PTR_LAB_149f055c0;
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
    *puVar5 = &PTR_FUN_14a5aa8a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14782daad;
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
    *puVar5 = &PTR_LAB_149f055c0;
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
    *puVar5 = &PTR_FUN_14a5aa8a0;
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



// FUNCTION 14782db1e FUN_14782db1e body=64 status=ok
// SIG undefined FUN_14782db1e(void)

undefined8 * FUN_14782db1e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a5aa8a0;
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



// FUNCTION 14782db62 FUN_14782db62 body=81 status=ok
// SIG undefined FUN_14782db62(void)

undefined8 FUN_14782db62(longlong param_1)

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



// FUNCTION 14782dbba FUN_14782dbba body=89 status=ok
// SIG undefined FUN_14782dbba(void)

bool FUN_14782dbba(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14782dc05;
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
LAB_14782dc05:
  return lVar6 == param_2;
}



// FUNCTION 14782dc30 FUN_14782dc30 body=118 status=ok
// SIG undefined FUN_14782dc30(void)

void FUN_14782dc30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f055c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5aa8a0;
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



// FUNCTION 14782dca6 FUN_14782dca6 body=118 status=ok
// SIG undefined FUN_14782dca6(void)

void FUN_14782dca6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f055c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5aa8a0;
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



// FUNCTION 14782dd1c FUN_14782dd1c body=156 status=ok
// SIG undefined FUN_14782dd1c(void)

void FUN_14782dd1c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f055c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5aa8a0;
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
                    /* WARNING: Could not recover jumptable at 0x00014782dda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14782ddb8 FUN_14782ddb8 body=105 status=ok
// SIG undefined FUN_14782ddb8(void)

undefined8 FUN_14782ddb8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14782de0c:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14782de0c;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 14782de22 FUN_14782de22 body=143 status=ok
// SIG undefined FUN_14782de22(void)

ulonglong FUN_14782de22(longlong param_1)

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
LAB_14782de90:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14782de90;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),&local_19);
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



// FUNCTION 14782dec6 FUN_14782dec6 body=205 status=ok
// SIG undefined FUN_14782dec6(void)

undefined8 * FUN_14782dec6(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14a5aab80;
  lVar3 = FUN_14001cc68(0x28,0x10);
  local_38 = *param_2;
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_145f957dc(lVar3,&local_38,param_3 & 0xffffffff,param_3 >> 0x20);
  param_1[1] = lVar3;
  *(int *)(param_1 + 2) = (int)param_3;
  *(int *)((longlong)param_1 + 0x14) = (int)(param_3 >> 0x20);
  lVar4 = lVar3 + 0x10;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  FUN_140308182(lVar4,0);
  if (*param_2 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_2 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782df94 FUN_14782df94 body=83 status=ok
// SIG undefined FUN_14782df94(void)

undefined8 * FUN_14782df94(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14a5aab80;
  lVar2 = param_1[1] + 0x10;
  if (param_1[1] == 0) {
    lVar2 = 0;
  }
  FUN_143223af9(lVar2);
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782e040 FUN_14782e040 body=69 status=ok
// SIG undefined FUN_14782e040(void)

undefined1 * FUN_14782e040(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782e086 FUN_14782e086 body=69 status=ok
// SIG undefined FUN_14782e086(void)

undefined1 * FUN_14782e086(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782e0d0 FUN_14782e0d0 body=69 status=ok
// SIG undefined FUN_14782e0d0(void)

undefined1 * FUN_14782e0d0(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782e116 FUN_14782e116 body=69 status=ok
// SIG undefined FUN_14782e116(void)

undefined1 * FUN_14782e116(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782e15c FUN_14782e15c body=69 status=ok
// SIG undefined FUN_14782e15c(void)

undefined1 * FUN_14782e15c(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782e1a2 FUN_14782e1a2 body=69 status=ok
// SIG undefined FUN_14782e1a2(void)

undefined1 * FUN_14782e1a2(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782e1e8 FUN_14782e1e8 body=69 status=ok
// SIG undefined FUN_14782e1e8(void)

undefined1 * FUN_14782e1e8(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782e22e FUN_14782e22e body=69 status=ok
// SIG undefined FUN_14782e22e(void)

undefined1 * FUN_14782e22e(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782e274 FUN_14782e274 body=69 status=ok
// SIG undefined FUN_14782e274(void)

undefined1 * FUN_14782e274(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782e2ba FUN_14782e2ba body=69 status=ok
// SIG undefined FUN_14782e2ba(void)

undefined1 * FUN_14782e2ba(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782e300 FUN_14782e300 body=69 status=ok
// SIG undefined FUN_14782e300(void)

undefined1 * FUN_14782e300(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782e346 FUN_14782e346 body=69 status=ok
// SIG undefined FUN_14782e346(void)

undefined1 * FUN_14782e346(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782e38c FUN_14782e38c body=69 status=ok
// SIG undefined FUN_14782e38c(void)

undefined1 * FUN_14782e38c(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782e3d2 FUN_14782e3d2 body=69 status=ok
// SIG undefined FUN_14782e3d2(void)

undefined1 * FUN_14782e3d2(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782e418 FUN_14782e418 body=69 status=ok
// SIG undefined FUN_14782e418(void)

undefined1 * FUN_14782e418(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782e45e FUN_14782e45e body=69 status=ok
// SIG undefined FUN_14782e45e(void)

undefined1 * FUN_14782e45e(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782e4a4 FUN_14782e4a4 body=69 status=ok
// SIG undefined FUN_14782e4a4(void)

undefined1 * FUN_14782e4a4(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782e508 FUN_14782e508 body=51 status=ok
// SIG undefined FUN_14782e508(void)

undefined8 FUN_14782e508(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_3 + 8);
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
  return 0;
}



// FUNCTION 14782e53e FUN_14782e53e body=69 status=ok
// SIG undefined FUN_14782e53e(void)

undefined1 * FUN_14782e53e(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782e590 FUN_14782e590 body=69 status=ok
// SIG undefined FUN_14782e590(void)

undefined1 * FUN_14782e590(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14782e612 FUN_14782e612 body=31 status=ok
// SIG undefined FUN_14782e612(void)

undefined8 FUN_14782e612(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782e64e FUN_14782e64e body=93 status=ok
// SIG undefined FUN_14782e64e(void)

void FUN_14782e64e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a5aad60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14782e6ac FUN_14782e6ac body=123 status=ok
// SIG undefined FUN_14782e6ac(void)

void FUN_14782e6ac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a5aad60;
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



// FUNCTION 14782e728 FUN_14782e728 body=21 status=ok
// SIG undefined FUN_14782e728(void)

undefined8 FUN_14782e728(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14782e766 FUN_14782e766 body=93 status=ok
// SIG undefined FUN_14782e766(void)

void FUN_14782e766(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5aae40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5aadd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14782e7c4 FUN_14782e7c4 body=93 status=ok
// SIG undefined FUN_14782e7c4(void)

void FUN_14782e7c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5aae40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5aadd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14782e822 FUN_14782e822 body=123 status=ok
// SIG undefined FUN_14782e822(void)

void FUN_14782e822(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5aae40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5aadd0;
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



// FUNCTION 14782e8ac FUN_14782e8ac body=21 status=ok
// SIG undefined FUN_14782e8ac(void)

undefined8 FUN_14782e8ac(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14782e8e0 FUN_14782e8e0 body=93 status=ok
// SIG undefined FUN_14782e8e0(void)

void FUN_14782e8e0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a5aaeb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14782e93e FUN_14782e93e body=93 status=ok
// SIG undefined FUN_14782e93e(void)

void FUN_14782e93e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a5aaeb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14782e99c FUN_14782e99c body=123 status=ok
// SIG undefined FUN_14782e99c(void)

void FUN_14782e99c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5aaeb0;
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



// FUNCTION 14782ea24 FUN_14782ea24 body=21 status=ok
// SIG undefined FUN_14782ea24(void)

undefined8 FUN_14782ea24(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14782ea3a FUN_14782ea3a body=24 status=ok
// SIG undefined FUN_14782ea3a(void)

void FUN_14782ea3a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014782ea4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14782ea52 FUN_14782ea52 body=29 status=ok
// SIG undefined FUN_14782ea52(void)

undefined8 FUN_14782ea52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782ea70 FUN_14782ea70 body=123 status=ok
// SIG undefined FUN_14782ea70(void)

undefined8 * FUN_14782ea70(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_146021cda();
  *param_1 = &PTR_FUN_14a5aafa0;
  param_1[0x24] = *param_3;
  lVar1 = param_3[1];
  param_1[0x25] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  uVar2 = FUN_14494321d(0x68);
  FUN_1412535c8(uVar2);
  param_1[0x26] = uVar2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x27));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x27),4000);
  return param_1;
}



// FUNCTION 14782eb1a FUN_14782eb1a body=55 status=ok
// SIG undefined FUN_14782eb1a(void)

undefined8 FUN_14782eb1a(longlong param_1)

{
  FUN_14287314e(*(undefined8 *)(param_1 + 0x130));
  FUN_1400559ea(*(undefined8 *)(param_1 + 0x130));
  return *(undefined8 *)(param_1 + 0x130);
}



// FUNCTION 14782eb5a FUN_14782eb5a body=56 status=ok
// SIG undefined FUN_14782eb5a(void)

void FUN_14782eb5a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014782eb87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14782eb92 FUN_14782eb92 body=56 status=ok
// SIG undefined FUN_14782eb92(void)

void FUN_14782eb92(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014782ebbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14782ebca FUN_14782ebca body=56 status=ok
// SIG undefined FUN_14782ebca(void)

void FUN_14782ebca(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014782ebf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14782ec16 FUN_14782ec16 body=48 status=ok
// SIG undefined FUN_14782ec16(void)

undefined8 FUN_14782ec16(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x120);
  if (plVar1 == (longlong *)0x0) {
    FUN_14695e688(param_2);
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 14782ec46 FUN_14782ec46 body=56 status=ok
// SIG undefined FUN_14782ec46(void)

void FUN_14782ec46(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014782ec73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14782ec80 FUN_14782ec80 body=140 status=ok
// SIG undefined FUN_14782ec80(void)

void FUN_14782ec80(undefined8 param_1,int *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 == (longlong *)0x0) {
    return;
  }
  uVar3 = (param_2[3] - param_2[1]) * (param_2[2] - *param_2);
  if (-1 < (int)uVar3) {
    *(undefined4 *)(param_3 + 1) = 0;
    iVar2 = 0;
    uVar1 = uVar3;
    if (*(uint *)((longlong)param_3 + 0xc) != uVar3) {
      FUN_146971392(param_3);
      iVar2 = (int)param_3[1];
      uVar1 = *(uint *)((longlong)param_3 + 0xc);
    }
    *(uint *)(param_3 + 1) = iVar2 + uVar3;
    if (uVar1 - iVar2 < uVar3) {
      FUN_14602b1fc(param_3);
    }
    memset((void *)((longlong)iVar2 * 4 + *param_3),0,(ulonglong)uVar3 << 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar3);
}



// FUNCTION 14782ed3a FUN_14782ed3a body=38 status=ok
// SIG undefined FUN_14782ed3a(void)

undefined8 FUN_14782ed3a(undefined8 param_1,int param_2)

{
  FUN_14782f784();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782ed6e FUN_14782ed6e body=42 status=ok
// SIG undefined FUN_14782ed6e(void)

longlong FUN_14782ed6e(longlong param_1,int param_2)

{
  FUN_1401c04d8(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782ed98 FUN_14782ed98 body=32 status=ok
// SIG undefined FUN_14782ed98(void)

undefined8 FUN_14782ed98(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FSlateFontTextureNull");
  return param_2;
}



// FUNCTION 14782edc0 FUN_14782edc0 body=40 status=ok
// SIG undefined FUN_14782edc0(void)

void FUN_14782edc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x28);
  *puVar1 = &PTR_FUN_14a5ab2f0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}



// FUNCTION 14782ede8 FUN_14782ede8 body=31 status=ok
// SIG undefined FUN_14782ede8(void)

undefined8 FUN_14782ede8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782ee24 FUN_14782ee24 body=93 status=ok
// SIG undefined FUN_14782ee24(void)

void FUN_14782ee24(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a5ab280;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14782ee82 FUN_14782ee82 body=123 status=ok
// SIG undefined FUN_14782ee82(void)

void FUN_14782ee82(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a5ab280;
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



// FUNCTION 14782ef0a FUN_14782ef0a body=21 status=ok
// SIG undefined FUN_14782ef0a(void)

undefined8 FUN_14782ef0a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14782ef20 FUN_14782ef20 body=38 status=ok
// SIG undefined FUN_14782ef20(void)

undefined8 FUN_14782ef20(undefined8 param_1,int param_2)

{
  FUN_14782f0be();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782ef4a FUN_14782ef4a body=276 status=ok
// SIG undefined FUN_14782ef4a(void)

undefined8 * FUN_14782ef4a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14782f12c();
  uVar4 = FUN_14494321d(0x160);
  local_30 = *(undefined8 *)(param_1 + 0x18);
  local_28 = *(longlong **)(param_1 + 0x20);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_40 = *(undefined8 *)(param_1 + 8);
  local_38 = *(longlong **)(param_1 + 0x10);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  FUN_14782ea70(uVar4,&local_40,&local_30);
  *param_2 = uVar4;
  puVar5 = (undefined8 *)FUN_14494321d(0x18);
  plVar3 = local_38;
  puVar5[1] = &DAT_100000001;
  *puVar5 = &PTR_LAB_14a5ab460;
  puVar5[2] = uVar4;
  param_2[1] = puVar5;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782f060 FUN_14782f060 body=94 status=ok
// SIG undefined FUN_14782f060(void)

undefined8 * FUN_14782f060(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  *puVar1 = &PTR_LAB_14a5ab340;
  *(undefined4 *)(puVar1 + 1) = 0x800;
  *param_2 = puVar1;
  puVar2 = (undefined8 *)FUN_14494321d(0x18);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14a5ab3d0;
  puVar2[2] = puVar1;
  param_2[1] = puVar2;
  return param_2;
}



// FUNCTION 14782f0be FUN_14782f0be body=110 status=ok
// SIG undefined FUN_14782f0be(void)

void FUN_14782f0be(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5ab2f0;
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
                    /* WARNING: Could not recover jumptable at 0x00014782f120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14782f12c FUN_14782f12c body=715 status=ok
// SIG undefined FUN_14782f12c(void)

void FUN_14782f12c(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar3 = FUN_14494321d(0x270);
    puVar4 = (undefined8 *)FUN_14494321d(0x10);
    *puVar4 = &PTR_LAB_14a5ab340;
    *(undefined4 *)(puVar4 + 1) = 0x800;
    local_48 = puVar4;
    local_40 = (undefined8 *)FUN_14494321d(0x18);
    local_40[1] = &DAT_100000001;
    *local_40 = &PTR_LAB_14a5ab3d0;
    local_40[2] = puVar4;
    FUN_14585b024(lVar3,&local_48,0);
    plVar5 = (longlong *)FUN_14494321d(0x18);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14a4528d0;
    plVar5[2] = lVar3;
    lVar6 = FUN_14494321d(0x58);
    if (plVar5 == (longlong *)0x0) {
      local_60 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_60 = plVar5;
    }
    local_68 = lVar3;
    local_58 = lVar3;
    local_50 = plVar5;
    FUN_141253b46(lVar6,&local_68,&local_58);
    plVar7 = (longlong *)FUN_14494321d(0x18);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14a4528f0;
    plVar7[2] = lVar6;
    *(longlong *)(param_1 + 8) = lVar6;
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar7 == plVar9) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar7 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar9 = plVar7;
          goto joined_r0x00014782f384;
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x10) = plVar7;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar9 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x00014782f384:
          if (iVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar5 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
  if (*(longlong *)(param_1 + 0x18) != 0) goto LAB_14782f15d;
  puVar8 = (undefined8 *)FUN_14494321d(0x60);
  *puVar8 = &PTR_LAB_149ed8d00;
  puVar4 = puVar8 + 1;
  FUN_14585bdc6(puVar4);
  *puVar8 = &PTR_FUN_14a5ab3f0;
  puVar8[1] = &PTR_FUN_14a5ab410;
  if (puVar8 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  plVar9 = (longlong *)FUN_14494321d(0x18);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14a5ab440;
  plVar9[2] = (longlong)puVar8;
  *(undefined8 **)(param_1 + 0x18) = puVar4;
  plVar5 = *(longlong **)(param_1 + 0x20);
  if (plVar9 == plVar5) {
    if (plVar9 == (longlong *)0x0) goto LAB_14782f15d;
    LOCK();
    plVar5 = plVar9 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_14782f15d;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar9;
  }
  else {
    *(longlong **)(param_1 + 0x20) = plVar9;
    if (plVar5 == (longlong *)0x0) goto LAB_14782f15d;
    LOCK();
    plVar9 = plVar5 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_14782f15d;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_14782f15d:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782f404 FUN_14782f404 body=133 status=ok
// SIG undefined FUN_14782f404(void)

undefined8 * FUN_14782f404(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x58);
  FUN_145c11564(puVar1,(longlong)(float)*(int *)(param_1 + 8),
                (longlong)(float)*(int *)(param_1 + 8) & 0xffffffff,0,2);
  *puVar1 = &PTR_FUN_14a5ab360;
  puVar1[1] = &PTR_FUN_14a5ab390;
  *param_2 = puVar1;
  puVar2 = (undefined8 *)FUN_14494321d(0x18);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14a5ab3b0;
  puVar2[2] = puVar1;
  param_2[1] = puVar2;
  return param_2;
}



// FUNCTION 14782f494 FUN_14782f494 body=29 status=ok
// SIG undefined FUN_14782f494(void)

undefined8 FUN_14782f494(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782f4b2 FUN_14782f4b2 body=38 status=ok
// SIG undefined FUN_14782f4b2(void)

undefined8 FUN_14782f4b2(undefined8 param_1,int param_2)

{
  FUN_145abbf76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782f4e8 FUN_14782f4e8 body=45 status=ok
// SIG undefined FUN_14782f4e8(void)

longlong FUN_14782f4e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145abbf76(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782f532 FUN_14782f532 body=29 status=ok
// SIG undefined FUN_14782f532(void)

undefined8 FUN_14782f532(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782f56a FUN_14782f56a body=29 status=ok
// SIG undefined FUN_14782f56a(void)

undefined8 FUN_14782f56a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782f588 FUN_14782f588 body=42 status=ok
// SIG undefined FUN_14782f588(void)

longlong FUN_14782f588(longlong param_1,int param_2)

{
  FUN_145cfc4a6(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782f5be FUN_14782f5be body=39 status=ok
// SIG undefined FUN_14782f5be(void)

longlong FUN_14782f5be(longlong param_1,int param_2)

{
  FUN_145cfc4a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -8);
  }
  return param_1 + -8;
}



// FUNCTION 14782f5ea FUN_14782f5ea body=294 status=ok
// SIG undefined FUN_14782f5ea(void)

undefined8 * FUN_14782f5ea(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cabd218) {
    FUN_144b3d300(&DAT_14cabd218);
    if (DAT_14cabd218 == -1) {
      puVar5 = (undefined8 *)FUN_14494321d(8);
      *puVar5 = 0;
      local_30 = puVar5;
      local_28 = (longlong *)FUN_14494321d(0x18);
      local_28[1] = (longlong)&DAT_100000001;
      *local_28 = (longlong)&PTR_FUN_149ee9960;
      local_28[2] = (longlong)puVar5;
      FUN_14695e692(&DAT_14cabd208,&local_30);
      plVar4 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_28 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      atexit(FUN_1433844f7);
      _Init_thread_footer(&DAT_14cabd218);
    }
  }
  *param_2 = DAT_14cabd208;
  lVar3 = DAT_14cabd210;
  param_2[1] = DAT_14cabd210;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782f718 FUN_14782f718 body=24 status=ok
// SIG undefined FUN_14782f718(void)

void FUN_14782f718(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014782f72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14782f730 FUN_14782f730 body=29 status=ok
// SIG undefined FUN_14782f730(void)

undefined8 FUN_14782f730(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782f766 FUN_14782f766 body=29 status=ok
// SIG undefined FUN_14782f766(void)

undefined8 FUN_14782f766(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782f784 FUN_14782f784 body=108 status=ok
// SIG undefined FUN_14782f784(void)

void FUN_14782f784(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14a5aafa0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x27));
  puVar3 = (undefined8 *)param_1[0x26];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  plVar4 = (longlong *)param_1[0x25];
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
  FUN_145d1c0cc(param_1);
  return;
}



// FUNCTION 14782f7f0 FUN_14782f7f0 body=414 status=ok
// SIG undefined FUN_14782f7f0(void)

void ** FUN_14782f7f0(void **param_1)

{
  longlong lVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined2 *local_68;
  int local_60;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar3 = FUN_1470868c8();
  *param_1 = (void *)0x0;
  param_1[1] = (void *)0x0;
  iVar5 = 1;
  lVar8 = 0x2bca2875f4373fff;
  do {
    if (iVar3 < iVar5 && iVar3 != 0) break;
    FUN_140002266(&local_58,L"demo%i",iVar5);
    FUN_143384614(&local_68,&local_58);
    plVar4 = (longlong *)FUN_14054d1d4();
    puVar7 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar7 = local_68;
    }
    (**(code **)(*plVar4 + 0xd0))(plVar4,&local_70,puVar7);
    iVar2 = local_50;
    _Src = local_58;
    lVar1 = local_70;
    if (local_70 == 0) {
      if (&local_58 != param_1) {
        lVar6 = (longlong)local_50;
        *(int *)(param_1 + 1) = local_50;
        if (local_50 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
          *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(param_1,local_50);
          if (iVar2 != 0) {
            memcpy(*param_1,_Src,lVar6 * 2);
          }
        }
      }
    }
    else {
      if (((iVar3 != 0) && (local_70 < lVar8)) && (lVar8 = local_70, &local_58 != param_1)) {
        lVar6 = (longlong)local_50;
        *(int *)(param_1 + 1) = local_50;
        if (local_50 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
          *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(param_1,local_50);
          lVar8 = local_70;
          if (iVar2 != 0) {
            memcpy(*param_1,_Src,lVar6 * 2);
            lVar8 = local_70;
          }
        }
      }
      iVar5 = iVar5 + 1;
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  } while (lVar1 != 0);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14782f990 FUN_14782f990 body=1146 status=ok
// SIG undefined FUN_14782f990(void)

void FUN_14782f990(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Src;
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined **local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined **local_68;
  undefined4 local_60;
  char local_58;
  undefined **local_50;
  int iStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_50 = (undefined **)0x0;
  iStack_48 = *(int *)(param_2 + 1);
  lVar6 = (longlong)iStack_48;
  _Src = (void *)*param_2;
  if (lVar6 == 0) {
    uStack_44 = 0;
    local_58 = *(char *)(param_2 + 0xb);
LAB_14782fb94:
    local_60 = 6;
    local_68 = &PTR_FUN_14a5ab538;
    if (local_58 == '\0') {
      local_60 = 2;
      plVar3 = (longlong *)*param_3;
      if (plVar3 != (longlong *)0x0 && (int)param_3[1] != 0) {
        (**(code **)(*plVar3 + 0x60))(plVar3,&local_68);
      }
      goto LAB_14782fbc9;
    }
    FUN_14782f7f0(&local_c8);
    if (local_50 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    iStack_48 = iStack_c0;
    uStack_44 = uStack_bc;
    local_50 = local_c8;
  }
  else {
    FUN_1446dd670(&local_50,iStack_48,0);
    memcpy(local_50,_Src,lVar6 * 2);
    local_60 = 6;
    local_68 = &PTR_FUN_14a5ab538;
    local_58 = *(char *)(param_2 + 0xb);
    if (*(int *)(param_2 + 1) < 2) goto LAB_14782fb94;
  }
  FUN_1433846cf(&local_78,&local_50);
  FUN_143385622(&local_c8,&local_50);
  FUN_144a882a8(&local_88,&local_c8,L".header");
  if (local_c8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_143384614(&local_98,&local_50);
  lVar6 = param_1 + 0x38;
  iVar2 = iStack_48 + -1;
  if (iStack_48 == 0) {
    iVar2 = 0;
  }
  FUN_1402980a2(lVar6,local_50,iVar2);
  if (*(char *)(param_2 + 0xb) == '\0') {
    FUN_1433847b3(&local_c8,lVar6);
    *(undefined4 *)(param_1 + 0x60) = local_b8;
    *(ulonglong *)(param_1 + 0x58) = CONCAT44(uStack_bc,iStack_c0);
    if ((undefined ***)(param_1 + 0x50) == &local_c8) {
      *(undefined1 *)(param_1 + 0x7c) = local_9c;
      *(undefined4 *)(param_1 + 0x78) = local_a0;
      local_c8 = &PTR_FUN_14a5ab550;
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x68) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x68) = local_b0;
      local_b0 = 0;
      *(undefined4 *)(param_1 + 0x70) = (undefined4)local_a8;
      *(undefined4 *)(param_1 + 0x74) = local_a8._4_4_;
      local_a8 = 0;
      *(undefined1 *)(param_1 + 0x7c) = local_9c;
      *(undefined4 *)(param_1 + 0x78) = local_a0;
      local_c8 = &PTR_FUN_14a5ab550;
    }
    FUN_14279e9fa(&local_c8);
    FUN_14782fe0c(param_1);
    plVar3 = (longlong *)FUN_14054d1d4();
    puVar5 = local_88;
    if (local_80 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x18))(plVar3,puVar5,4);
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if ((puVar1 != puVar4) &&
       (*(undefined8 **)(param_1 + 0x18) = puVar4, puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined1 *)(param_1 + 0x30) = 2;
  }
  else {
    plVar3 = (longlong *)FUN_14054d1d4();
    puVar5 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar5 = local_78;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0,1);
    plVar3 = (longlong *)FUN_14054d1d4();
    puVar5 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar5 = local_78;
    }
    (**(code **)(*plVar3 + 0x58))(plVar3,puVar5,1);
    plVar3 = (longlong *)FUN_14054d1d4();
    puVar5 = &DAT_149dfb77a;
    if (local_90 != 0) {
      puVar5 = local_98;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,puVar5,0x10);
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    if ((puVar1 != puVar4) &&
       (*(undefined8 **)(param_1 + 0x20) = puVar4, puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)(puVar1,1);
    }
    plVar3 = (longlong *)FUN_14054d1d4();
    puVar5 = local_88;
    if (local_80 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,puVar5,0x10);
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if ((puVar1 != puVar4) &&
       (*(undefined8 **)(param_1 + 0x18) = puVar4, puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 10);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)((longlong)param_2 + 0x54);
    FUN_144a787a6(param_1 + 0x68,param_2 + 2);
    FUN_1433848bd(lVar6,param_1 + 0x50);
  }
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    local_60 = 0;
  }
  plVar3 = (longlong *)*param_3;
  if (plVar3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*plVar3 + 0x60))(plVar3,&local_68);
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14782fbc9:
  if (local_50 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14782fe0c FUN_14782fe0c body=184 status=ok
// SIG undefined FUN_14782fe0c(void)

void FUN_14782fe0c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143384614(&local_28,param_1 + 0x38);
  plVar1 = (longlong *)FUN_14054d1d4();
  puVar5 = local_28;
  if (local_20 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  plVar2 = (longlong *)(**(code **)(*plVar1 + 0x18))(plVar1,puVar5,4);
  plVar1 = *(longlong **)(param_1 + 0x20);
  plVar3 = plVar1;
  if ((plVar1 != plVar2) &&
     (*(longlong **)(param_1 + 0x20) = plVar2, plVar3 = plVar2, plVar1 != (longlong *)0x0)) {
    (**(code **)*plVar1)(plVar1,1);
    plVar3 = *(longlong **)(param_1 + 0x20);
  }
  if (plVar3 != (longlong *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x30))(plVar3);
    *(undefined8 *)(param_1 + 0x80) = uVar4;
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14782fec6 FUN_14782fec6 body=241 status=ok
// SIG undefined FUN_14782fec6(void)

void FUN_14782fec6(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1433848bd(param_1 + 0x38,param_1 + 0x50);
  }
  plVar2 = (longlong *)FUN_14054d1d4();
  FUN_143384985(&local_38,param_1 + 0x38);
  puVar4 = local_38;
  if (local_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,puVar4,0);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_144a7e010(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x30) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14782ffc8 FUN_14782ffc8 body=43 status=ok
// SIG undefined FUN_14782ffc8(void)

bool FUN_14782ffc8(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    bVar1 = false;
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))();
    bVar1 = lVar2 < *(int *)(param_1 + 0x78);
  }
  return bVar1;
}



// FUNCTION 14782fffe FUN_14782fffe body=130 status=ok
// SIG undefined FUN_14782fffe(void)

uint FUN_14782fffe(undefined8 param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_14054d1d4();
  FUN_143384985(&local_30,param_1);
  puVar3 = local_30;
  if (local_28 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,puVar3);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1 ^ 1;
}



// FUNCTION 147830092 FUN_147830092 body=886 status=ok
// SIG undefined FUN_147830092(void)

void FUN_147830092(undefined8 param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *in_stack_00000030;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined8 local_140;
  undefined **local_138;
  undefined4 local_130;
  int local_12c;
  int local_128;
  longlong local_120;
  int local_118;
  char local_10c;
  longlong local_108 [5];
  undefined6 local_e0;
  undefined2 uStack_da;
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  undefined8 uStack_d2;
  undefined2 *local_c8;
  int local_c0;
  undefined **local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined2 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_143384b39(local_108);
  FUN_144a882a8(&local_70,local_108,&DAT_149e060b2);
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  local_88 = 0;
  uStack_80 = 0;
  plVar5 = (longlong *)FUN_14054d1d4();
  puVar7 = local_70;
  if (local_68 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  local_148 = 1;
  (**(code **)(*plVar5 + 0x78))(plVar5,&local_88,puVar7,0);
  local_b0 = 6;
  local_b8 = &PTR_FUN_14a5ab608;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  if ((longlong)(int)uStack_80 != 0) {
    lVar10 = (longlong)(int)uStack_80 << 4;
    lVar8 = local_88;
    do {
      FUN_143384614(&local_c8,lVar8);
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_d2 = 0;
      local_108[4] = 0;
      local_e0 = 0;
      uStack_da = 0;
      local_108[2] = 0;
      local_108[3] = 0;
      local_108[0] = 0;
      local_108[1] = 0;
      plVar5 = (longlong *)FUN_14054d1d4();
      puVar7 = &DAT_149dfb77a;
      if (local_c0 != 0) {
        puVar7 = local_c8;
      }
      uVar6 = (**(code **)(*plVar5 + 0x108))(plVar5,puVar7);
      local_e0 = (undefined6)uVar6;
      uStack_da = (undefined2)((ulonglong)uVar6 >> 0x30);
      FUN_1433847b3(&local_138,lVar8);
      if (((local_10c == '\x01') &&
          ((*(int *)(param_2 + 0x10) == 0 || (*(int *)(param_2 + 0x10) == local_12c)))) &&
         ((*(int *)(param_2 + 0x14) == 0 || (*(int *)(param_2 + 0x14) == local_128)))) {
        FUN_144a787a6(local_108,lVar8);
        plVar5 = (longlong *)FUN_14054d1d4();
        puVar7 = &DAT_149dfb77a;
        if (local_c0 != 0) {
          puVar7 = local_c8;
        }
        (**(code **)(*plVar5 + 0xd0))(plVar5,&local_140,puVar7);
        local_108[4] = local_140;
        uVar3 = FUN_14782fffe(lVar8);
        uStack_d2 = CONCAT26(CONCAT11(uStack_d2._7_1_,uVar3),
                             CONCAT42(local_128,(undefined2)uStack_d2));
        uStack_d8 = local_130;
        iVar1 = local_118 + -1;
        if (local_118 == 0) {
          iVar1 = 0;
        }
        FUN_1402980a2(local_108 + 2,local_120,iVar1);
        uVar2 = uStack_a0;
        lVar9 = (longlong)(int)uStack_a0;
        uVar4 = (int)uStack_a0 + 1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar4);
        if (uStack_a0._4_4_ < uVar4) {
          FUN_147831962(&local_a8,uVar2 & 0xffffffff);
        }
        FUN_1478318b2(lVar9 * 0x40 + local_a8,local_108);
      }
      local_138 = &PTR_FUN_14a5ab550;
      if (local_120 != 0) {
        FUN_1400020a8();
      }
      FUN_14279e9fa(&local_138);
      if (local_108[2] != 0) {
        FUN_1400020a8();
      }
      if (local_108[0] != 0) {
        FUN_1400020a8();
      }
      if (local_c8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar8 = lVar8 + 0x10;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
  }
  local_b0 = 0;
  plVar5 = (longlong *)*in_stack_00000030;
  if (plVar5 != (longlong *)0x0 && (int)in_stack_00000030[1] != 0) {
    (**(code **)(*plVar5 + 0x60))(plVar5,&local_b8);
  }
  FUN_14783040a(&local_b8);
  FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14783040a FUN_14783040a body=82 status=ok
// SIG undefined FUN_14783040a(void)

void FUN_14783040a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5ab608;
  FUN_1447a1747(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_147830eab(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478304b0 FUN_1478304b0 body=82 status=ok
// SIG undefined FUN_1478304b0(void)

void FUN_1478304b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5ab6b8;
  FUN_147831483(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_14783117d(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14783052c FUN_14783052c body=82 status=ok
// SIG undefined FUN_14783052c(void)

void FUN_14783052c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5ab6c0;
  FUN_1447a1747(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_147830eab(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147830590 FUN_147830590 body=234 status=ok
// SIG undefined FUN_147830590(void)

void FUN_147830590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined **local_50;
  undefined4 local_48;
  longlong local_40 [4];
  
  local_40[3] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = &PTR_FUN_14a5ab6c8;
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_1433846cf(&local_60);
  plVar2 = (longlong *)FUN_14054d1d4();
  puVar3 = local_60;
  if (local_58 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  cVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,puVar3);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (cVar1 == '\0') {
    local_48 = 2;
  }
  else {
    local_48 = 0;
    FUN_144a787a6(local_40,param_2);
  }
  if (*(int *)(param_4 + 1) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)*param_4;
  }
  (**(code **)(*plVar2 + 0x58))(plVar2,&local_50);
  local_50 = &PTR_FUN_14a5ab6c8;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40[3] ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478306a0 FUN_1478306a0 body=59 status=ok
// SIG undefined FUN_1478306a0(void)

void FUN_1478306a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5ab700;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  FUN_14279e9fa(param_1);
  return;
}



// FUNCTION 1478306e8 FUN_1478306e8 body=225 status=ok
// SIG undefined FUN_1478306e8(void)

void FUN_1478306e8(longlong param_1)

{
  void **ppvVar1;
  void *_Src;
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  undefined4 local_48;
  void *local_40;
  int local_38;
  undefined4 local_30;
  char local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1433847b3(&local_58,param_1 + 0x38);
  _Src = local_40;
  if (local_2c == '\x01') {
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined8 *)(param_1 + 0x58) = local_50;
    ppvVar1 = (void **)(param_1 + 0x68);
    if (ppvVar1 != &local_40) {
      *(int *)(param_1 + 0x70) = local_38;
      if (local_38 == 0 && *(int *)(param_1 + 0x74) == 0) {
        *(undefined4 *)(param_1 + 0x74) = 0;
      }
      else {
        FUN_1446dd670(ppvVar1,local_38);
        if (local_38 != 0) {
          memcpy(*ppvVar1,_Src,(longlong)local_38 * 2);
        }
      }
    }
    *(char *)(param_1 + 0x7c) = local_2c;
    *(undefined4 *)(param_1 + 0x78) = local_30;
  }
  local_58 = &PTR_FUN_14a5ab550;
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_14279e9fa(&local_58);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478307ca FUN_1478307ca body=784 status=ok
// SIG undefined FUN_1478307ca(void)

void FUN_1478307ca(longlong param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  size_t sVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined2 *puVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  longlong lVar13;
  undefined1 auStack_128 [40];
  longlong local_100;
  undefined8 local_f8;
  uint local_ec;
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined2 *local_d8;
  int local_d0;
  longlong local_c8 [2];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  int local_a0;
  undefined **local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  undefined8 local_80;
  wchar_t *pwStack_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_b8 = 0;
  uStack_b0 = 0;
  local_100 = param_1;
  local_f8 = param_3;
  local_ec = param_2;
  FUN_1433846cf(&local_a8,param_1 + 0x38);
  local_98 = local_a8;
  if (local_a0 == 0) {
    local_98 = (undefined **)&DAT_149dfb77a;
  }
  uVar1 = 0;
  if (local_98 != (undefined **)0x0) {
    sVar4 = wcslen((wchar_t *)local_98);
    uVar1 = (int)sVar4;
  }
  uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
  local_88 = L"events";
  local_80 = CONCAT44(local_80._4_4_,6);
  pwStack_78 = L"event";
  local_70 = CONCAT44(local_70._4_4_,5);
  FUN_140bee87a(local_c8,&local_98,3);
  if (local_a8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  iVar10 = 0;
  do {
    local_98 = (undefined **)0x0;
    uStack_90 = 0;
    FUN_144a83b10(&local_98,iVar10);
    FUN_1407ec8fc(&local_d8,local_c8,&local_98);
    if (local_98 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    plVar5 = (longlong *)FUN_14054d1d4();
    puVar9 = &DAT_149dfb77a;
    if (local_d0 != 0) {
      puVar9 = local_d8;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x18))(plVar5,puVar9,0);
    if (puVar6 != (undefined8 *)0x0) {
      local_e8 = (undefined **)0x0;
      uStack_e0 = 0;
      FUN_14021219d(puVar6,&local_e8);
      local_98 = &PTR_FUN_14a5ab700;
      local_80 = 0;
      pwStack_78 = (wchar_t *)0x0;
      uStack_90 = 0;
      local_88 = (wchar_t *)0x0;
      local_70 = 0;
      local_a0 = (int)uStack_e0 + -1;
      if ((int)uStack_e0 == 0) {
        local_a0 = 0;
      }
      local_a8 = local_e8;
      FUN_14279eb63(&local_98,&local_a8);
      uVar7 = uStack_b0;
      lVar13 = (longlong)(int)uStack_b0;
      uVar2 = (int)uStack_b0 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar2);
      if (uStack_b0._4_4_ < uVar2) {
        FUN_147831ac6(&local_b8,uVar7 & 0xffffffff);
      }
      FUN_147831a0e(lVar13 * 0x30 + local_b8,&local_98);
      FUN_1478306a0(&local_98);
      if (local_e8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      iVar10 = iVar10 + 1;
      (**(code **)*puVar6)(puVar6,1);
    }
    if (local_d8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  } while (puVar6 != (undefined8 *)0x0);
  uVar8 = 0xffffffff;
  uVar2 = local_ec;
  if (0 < (int)uStack_b0) {
    uVar3 = (int)uStack_b0 - 1;
    uVar11 = *(uint *)(local_b8 + 0x28 + (ulonglong)uVar3 * 0x30);
    if (local_ec < uVar11) {
      puVar12 = (uint *)(local_b8 + 0x28);
      uVar7 = 0;
      do {
        if (local_ec < *puVar12) {
          uVar3 = (uint)~uVar7;
          uVar8 = uVar3;
          if (uVar7 != 0) {
            uVar11 = *(uint *)(local_b8 + 0x28 + (~uVar7 & 0xffffffff) * 0x30);
            goto LAB_147830a65;
          }
          break;
        }
        uVar7 = uVar7 - 1;
        puVar12 = puVar12 + 0xc;
      } while (-uVar7 != (uStack_b0 & 0xffffffff));
    }
    else {
LAB_147830a65:
      uVar2 = local_ec - uVar11;
      uVar8 = uVar3;
    }
  }
  FUN_14338533c(local_100,uVar8,local_f8,uVar2);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1478319e7(local_b8,uStack_b0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147830adc FUN_147830adc body=187 status=ok
// SIG undefined FUN_147830adc(void)

void FUN_147830adc(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
      iVar1 = *(int *)(param_1 + 0x68);
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
      if (iVar1 < lVar4) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
        *(undefined4 *)(param_1 + 0x68) = uVar3;
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x1f0))();
        FUN_1433848bd(param_1 + 0x28,param_1 + 0x40);
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0x20) == '\x02') {
    FUN_1478306e8(param_1 + -0x10);
    if (*(longlong *)(param_1 + 0x70) < (longlong)*(int *)(param_1 + 0x68)) {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
      FUN_14782fe0c(param_1 + -0x10);
      plVar2 = *(longlong **)(param_1 + 0x10);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147830b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x1a0))(plVar2,uVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147830b98 FUN_147830b98 body=125 status=ok
// SIG undefined FUN_147830b98(void)

undefined8 FUN_147830b98(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143384b39(&local_28);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147830c16 FUN_147830c16 body=95 status=ok
// SIG undefined FUN_147830c16(void)

undefined8 * FUN_147830c16(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14001cc68(0x88,0x10);
  FUN_147830c76(uVar1);
  *param_2 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14a5abbc0;
  puVar2[2] = uVar1;
  param_2[1] = puVar2;
  return param_2;
}



// FUNCTION 147830c76 FUN_147830c76 body=105 status=ok
// SIG undefined FUN_147830c76(void)

undefined8 * FUN_147830c76(undefined8 *param_1)

{
  FUN_147086f92();
  FUN_1409e1656(param_1 + 2);
  *param_1 = &PTR_FUN_14a5ab9a0;
  param_1[2] = &PTR_FUN_14a5abb60;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = &PTR_FUN_14a5ab550;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x75) = 0;
  return param_1;
}



// FUNCTION 147830ce0 FUN_147830ce0 body=34 status=ok
// SIG undefined FUN_147830ce0(void)

undefined8 FUN_147830ce0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147830d02 FUN_147830d02 body=70 status=ok
// SIG undefined FUN_147830d02(void)

undefined8 * FUN_147830d02(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ab550;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_14279e9fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147830d48 FUN_147830d48 body=277 status=ok
// SIG undefined FUN_147830d48(void)

void FUN_147830d48(longlong param_1,longlong *param_2,char param_3)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  local_38 = L"LengthInMS";
  local_30 = 10;
  (**(code **)(*param_2 + 0x88))(param_2,&local_38,param_1 + 8);
  local_48 = L"NetworkVersion";
  local_40 = 0xe;
  (**(code **)(*param_2 + 0x80))(param_2,&local_48,param_1 + 0xc);
  local_58 = L"Changelist";
  local_50 = 10;
  (**(code **)(*param_2 + 0x80))(param_2,&local_58,param_1 + 0x10);
  local_68 = L"FriendlyName";
  local_60 = 0xc;
  (**(code **)(*param_2 + 0x68))(param_2,&local_68,param_1 + 0x18);
  local_78 = L"DemoFileLastOffset";
  local_70 = 0x12;
  (**(code **)(*param_2 + 0x88))(param_2,&local_78,param_1 + 0x28);
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147830e5e FUN_147830e5e body=34 status=ok
// SIG undefined FUN_147830e5e(void)

undefined8 FUN_147830e5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 147830e80 FUN_147830e80 body=43 status=ok
// SIG undefined FUN_147830e80(void)

undefined8 FUN_147830e80(undefined8 param_1,int param_2)

{
  FUN_14783040a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147830eab FUN_147830eab body=61 status=ok
// SIG undefined FUN_147830eab(void)

void FUN_147830eab(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147830ee8 FUN_147830ee8 body=57 status=ok
// SIG undefined FUN_147830ee8(void)

undefined8 * FUN_147830ee8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ab610;
  FUN_147831144(param_1 + 2);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147830f22 FUN_147830f22 body=43 status=ok
// SIG undefined FUN_147830f22(void)

undefined8 FUN_147830f22(undefined8 param_1,int param_2)

{
  FUN_147831144();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147830f4e FUN_147830f4e body=501 status=ok
// SIG undefined FUN_147830f4e(void)

void FUN_147830f4e(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong local_80;
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong *local_60;
  wchar_t *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  cVar3 = (**(code **)*param_2)(param_2);
  if (cVar3 == '\0') {
    local_98 = L"events";
    local_90 = 6;
    (**(code **)(*param_2 + 0x28))(param_2);
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar8 = 0;
      iVar7 = 0;
      do {
        (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + lVar8) + 0x28))
                  (*(longlong *)(param_1 + 8) + lVar8,param_2,0);
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 0x40;
      } while (iVar7 < *(int *)(param_1 + 0x10));
    }
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  else {
    (**(code **)(*param_2 + 0xf0))(param_2,&local_68);
    local_58 = L"events";
    local_50 = 6;
    cVar3 = FUN_146843260(local_68,&local_58,5);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_60 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
    if (cVar3 != '\0') {
      (**(code **)(*param_2 + 0xf0))(param_2,&local_58);
      local_78 = L"events";
      local_70 = 6;
      plVar4 = (longlong *)FUN_14571608c(local_58);
      plVar5 = (longlong *)CONCAT44(uStack_4c,local_50);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      if (0 < (int)plVar4[1]) {
        lVar8 = 0;
        iVar7 = 0;
        do {
          plVar5 = (longlong *)FUN_147831326(param_1 + 8);
          puVar6 = (undefined8 *)(**(code **)**(undefined8 **)(*plVar4 + lVar8))();
          local_88 = *puVar6;
          local_80 = puVar6[1];
          if (local_80 != 0) {
            LOCK();
            *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
            UNLOCK();
          }
          (**(code **)(*plVar5 + 0x10))(plVar5,&local_88);
          iVar7 = iVar7 + 1;
          lVar8 = lVar8 + 0x10;
        } while (iVar7 < (int)plVar4[1]);
      }
    }
  }
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147831144 FUN_147831144 body=57 status=ok
// SIG undefined FUN_147831144(void)

void FUN_147831144(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5ab620;
  FUN_14783117d(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  FUN_14279e9fa(param_1);
  return;
}



// FUNCTION 14783117d FUN_14783117d body=38 status=ok
// SIG undefined FUN_14783117d(void)

void FUN_14783117d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1478311a4(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 1478311a4 FUN_1478311a4 body=73 status=ok
// SIG undefined FUN_1478311a4(void)

void FUN_1478311a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5ab650;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  FUN_14279e9fa(param_1);
  return;
}



// FUNCTION 1478311ee FUN_1478311ee body=43 status=ok
// SIG undefined FUN_1478311ee(void)

undefined8 FUN_1478311ee(undefined8 param_1,int param_2)

{
  FUN_1478311a4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14783121a FUN_14783121a body=267 status=ok
// SIG undefined FUN_14783121a(void)

void FUN_14783121a(longlong param_1,longlong *param_2,char param_3)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  undefined *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  local_38 = &DAT_149f0f4f8;
  local_30 = 2;
  (**(code **)(*param_2 + 0x68))(param_2,&local_38,param_1 + 8);
  local_48 = L"group";
  local_40 = 5;
  (**(code **)(*param_2 + 0x68))(param_2,&local_48,param_1 + 0x18);
  local_58 = L"meta";
  local_50 = 4;
  (**(code **)(*param_2 + 0x68))(param_2,&local_58,param_1 + 0x28);
  local_68 = L"time1";
  local_60 = 5;
  (**(code **)(*param_2 + 0x80))(param_2,&local_68,param_1 + 0x38);
  local_78 = L"time2";
  local_70 = 5;
  (**(code **)(*param_2 + 0x80))(param_2,&local_78,param_1 + 0x3c);
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147831326 FUN_147831326 body=64 status=ok
// SIG undefined FUN_147831326(void)

longlong FUN_147831326(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147831394(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_147831366(lVar2,1);
  return lVar2;
}



// FUNCTION 147831366 FUN_147831366 body=46 status=ok
// SIG undefined FUN_147831366(void)

void FUN_147831366(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14a5ab650;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 147831394 FUN_147831394 body=132 status=ok
// SIG undefined FUN_147831394(void)

void FUN_147831394(longlong param_1,int param_2)

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



// FUNCTION 14783141a FUN_14783141a body=62 status=ok
// SIG undefined FUN_14783141a(void)

undefined8 * FUN_14783141a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ab6b0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147831458 FUN_147831458 body=43 status=ok
// SIG undefined FUN_147831458(void)

undefined8 FUN_147831458(undefined8 param_1,int param_2)

{
  FUN_1478304b0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147831483 FUN_147831483 body=56 status=ok
// SIG undefined FUN_147831483(void)

void FUN_147831483(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14a5ab6b0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1478314bc FUN_1478314bc body=43 status=ok
// SIG undefined FUN_1478314bc(void)

undefined8 FUN_1478314bc(undefined8 param_1,int param_2)

{
  FUN_14783052c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1478314e8 FUN_1478314e8 body=62 status=ok
// SIG undefined FUN_1478314e8(void)

undefined8 * FUN_1478314e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ab6c8;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147831526 FUN_147831526 body=34 status=ok
// SIG undefined FUN_147831526(void)

undefined8 FUN_147831526(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 147831548 FUN_147831548 body=43 status=ok
// SIG undefined FUN_147831548(void)

undefined8 FUN_147831548(undefined8 param_1,int param_2)

{
  FUN_1478306a0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147831574 FUN_147831574 body=232 status=ok
// SIG undefined FUN_147831574(void)

void FUN_147831574(longlong param_1,longlong *param_2,char param_3)

{
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  local_38 = L"group";
  local_30 = 5;
  (**(code **)(*param_2 + 0x68))(param_2,&local_38,param_1 + 8);
  local_48 = L"meta";
  local_40 = 4;
  (**(code **)(*param_2 + 0x68))(param_2,&local_48,param_1 + 0x18);
  local_58 = L"time1";
  local_50 = 5;
  (**(code **)(*param_2 + 0x80))(param_2,&local_58,param_1 + 0x28);
  local_68 = L"time2";
  local_60 = 5;
  (**(code **)(*param_2 + 0x80))(param_2,&local_68,param_1 + 0x2c);
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783165e FUN_14783165e body=34 status=ok
// SIG undefined FUN_14783165e(void)

undefined8 FUN_14783165e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147831680 FUN_147831680 body=43 status=ok
// SIG undefined FUN_147831680(void)

undefined8 FUN_147831680(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1478316ac FUN_1478316ac body=43 status=ok
// SIG undefined FUN_1478316ac(void)

undefined8 FUN_1478316ac(undefined8 param_1,int param_2)

{
  FUN_1478317ec();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1478316f2 FUN_1478316f2 body=90 status=ok
// SIG undefined FUN_1478316f2(void)

void FUN_1478316f2(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  undefined **local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &PTR_FUN_14a5abbb0;
  local_10 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)*param_2;
  }
  (**(code **)(*plVar1 + 0x58))(plVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783174e FUN_14783174e body=83 status=ok
// SIG undefined FUN_14783174e(void)

undefined8 * FUN_14783174e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1478317b6 FUN_1478317b6 body=50 status=ok
// SIG undefined FUN_1478317b6(void)

longlong FUN_1478317b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_1478317ec(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1478317ec FUN_1478317ec body=164 status=ok
// SIG undefined FUN_1478317ec(void)

void FUN_1478317ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a5ab9a0;
  param_1[2] = &PTR_FUN_14a5abb60;
  param_1[10] = &PTR_FUN_14a5ab550;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_14279e9fa(param_1 + 10);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[5];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140af926c(param_1 + 2);
  FUN_147086fa8(param_1);
  return;
}



// FUNCTION 147831890 FUN_147831890 body=34 status=ok
// SIG undefined FUN_147831890(void)

undefined8 FUN_147831890(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1478318b2 FUN_1478318b2 body=176 status=ok
// SIG undefined FUN_1478318b2(void)

undefined8 * FUN_1478318b2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
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
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x36);
  *(undefined8 *)((longlong)param_1 + 0x2e) = *(undefined8 *)((longlong)param_2 + 0x2e);
  *(undefined8 *)((longlong)param_1 + 0x36) = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  return param_1;
}



// FUNCTION 147831962 FUN_147831962 body=132 status=ok
// SIG undefined FUN_147831962(void)

void FUN_147831962(longlong param_1,int param_2)

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



// FUNCTION 1478319e7 FUN_1478319e7 body=38 status=ok
// SIG undefined FUN_1478319e7(void)

void FUN_1478319e7(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1478306a0(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 147831a0e FUN_147831a0e body=184 status=ok
// SIG undefined FUN_147831a0e(void)

undefined8 * FUN_147831a0e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_14a5ab700;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  pvVar2 = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  return param_1;
}



// FUNCTION 147831ac6 FUN_147831ac6 body=147 status=ok
// SIG undefined FUN_147831ac6(void)

void FUN_147831ac6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147831b72 FUN_147831b72 body=34 status=ok
// SIG undefined FUN_147831b72(void)

undefined8 FUN_147831b72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147831b94 FUN_147831b94 body=34 status=ok
// SIG undefined FUN_147831b94(void)

void FUN_147831b94(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a5abc50;
  return;
}



// FUNCTION 147831bb6 FUN_147831bb6 body=36 status=ok
// SIG undefined FUN_147831bb6(void)

undefined8 FUN_147831bb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147831bf6 FUN_147831bf6 body=93 status=ok
// SIG undefined FUN_147831bf6(void)

void FUN_147831bf6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a5abbe0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147831c54 FUN_147831c54 body=123 status=ok
// SIG undefined FUN_147831c54(void)

void FUN_147831c54(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a5abbe0;
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



// FUNCTION 147831cdc FUN_147831cdc body=21 status=ok
// SIG undefined FUN_147831cdc(void)

undefined8 FUN_147831cdc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147831cf2 FUN_147831cf2 body=34 status=ok
// SIG undefined FUN_147831cf2(void)

undefined8 FUN_147831cf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 147831d16 FUN_147831d16 body=129 status=ok
// SIG undefined FUN_147831d16(void)

undefined4 * FUN_147831d16(undefined4 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_1446f470e(&local_28,L"LocalFileReplay",1);
  FUN_1459476e6(param_1 + 6,&DAT_14a5ac19c,7,local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147831d98 FUN_147831d98 body=423 status=ok
// SIG undefined FUN_147831d98(void)

void FUN_147831d98(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x18) * 2,(longlong)*(int *)(param_1 + 0x1c) * 2);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x40),(longlong)*(int *)(param_1 + 0x44));
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x58) * 0x18,
             (longlong)*(int *)(param_1 + 0x5c) * 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x88) * 0x28,
             (longlong)*(int *)(param_1 + 0x8c) * 0x28);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x68) * 0x50,
             (longlong)*(int *)(param_1 + 0x6c) * 0x50);
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar3 = 0;
    do {
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(lVar2 + 0x10 + lVar3) * 2,
                 (longlong)*(int *)(lVar2 + 0x14 + lVar3) * 2);
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(lVar2 + 0x20 + lVar3) * 2,
                 (longlong)*(int *)(lVar2 + 0x24 + lVar3) * 2);
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(lVar2 + 0x30 + lVar3) * 2,
                 (longlong)*(int *)(lVar2 + 0x34 + lVar3) * 2);
      lVar3 = lVar3 + 0x50;
    } while ((longlong)iVar1 * 0x50 != lVar3);
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x78) * 0x50,
             (longlong)*(int *)(param_1 + 0x7c) * 0x50);
  iVar1 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar3 = 0;
    do {
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(lVar2 + 0x10 + lVar3) * 2,
                 (longlong)*(int *)(lVar2 + 0x14 + lVar3) * 2);
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(lVar2 + 0x20 + lVar3) * 2,
                 (longlong)*(int *)(lVar2 + 0x24 + lVar3) * 2);
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(lVar2 + 0x30 + lVar3) * 2,
                 (longlong)*(int *)(lVar2 + 0x34 + lVar3) * 2);
      lVar3 = lVar3 + 0x50;
    } while ((longlong)iVar1 * 0x50 != lVar3);
  }
  return;
}



// FUNCTION 147831f72 FUN_147831f72 body=647 status=ok
// SIG undefined FUN_147831f72(void)

undefined8 * FUN_147831f72(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  FUN_147086f92();
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14a5ac1d0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0xffffffffffffffff;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  FUN_144869430(param_1 + 0x35);
  param_1[0x35] = &PTR_FUN_14a5ac9f0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined8 *)((longlong)param_1 + 0x245) = 0;
  FUN_144869430(param_1 + 0x4b);
  param_1[0x4b] = &PTR_FUN_14a5ac9f0;
  param_1[0x60] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f5) = 0;
  FUN_144869430(param_1 + 0x61);
  param_1[0x61] = &PTR_FUN_14a5ac9f0;
  param_1[0x76] = 0;
  *(undefined1 *)(param_1 + 0x77) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a5) = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  FUN_1478321fa();
  param_1[0x7a] = 0;
  iVar1 = DAT_14cabd328;
  _Src = DAT_14cabd320;
  lVar2 = (longlong)DAT_14cabd328;
  *(int *)(param_1 + 0x7b) = DAT_14cabd328;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x7a,iVar1,0);
    memcpy((void *)param_1[0x7a],_Src,lVar2 * 2);
  }
  *(undefined1 *)(param_1 + 0x7c) = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  return param_1;
}



// FUNCTION 1478321fa FUN_1478321fa body=221 status=ok
// SIG undefined FUN_1478321fa(void)

void FUN_1478321fa(void)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined4 local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cabd330) {
    FUN_144b3d300(&DAT_14cabd330);
    if (DAT_14cabd330 == -1) {
      puVar1 = (undefined8 *)FUN_14047ac8c();
      if (*(int *)(puVar1 + 1) == 0) {
        local_38 = L"";
      }
      else {
        local_38 = (wchar_t *)*puVar1;
      }
      if (local_38 == (wchar_t *)0x0) {
        local_30 = 0;
      }
      else {
        sVar2 = wcslen(local_38);
        local_30 = (int)sVar2;
      }
      local_28 = L"Demos/";
      local_20 = 6;
      FUN_140bee87a(&DAT_14cabd320,&local_38,2);
      atexit((_func_5014 *)&LAB_14338a3fe);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478322e6 FUN_1478322e6 body=428 status=ok
// SIG undefined FUN_1478322e6(void)

void FUN_1478322e6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5ac1d0;
  FUN_147832492(param_1 + 0x87);
  *(undefined4 *)(param_1 + 0x86) = 0;
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  FUN_145c4086e(param_1 + 0x7d);
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  param_1[0x61] = &PTR_FUN_14a5ac9f0;
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1 + 0x61);
  param_1[0x4b] = &PTR_FUN_14a5ac9f0;
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1 + 0x4b);
  param_1[0x35] = &PTR_FUN_14a5ac9f0;
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1 + 0x35);
  plVar3 = (longlong *)param_1[0x34];
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
  FUN_147836557(param_1[0x31],*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_147832492(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_147835bb8(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_147835bb8(param_1 + 4);
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_147086fa8(param_1);
  return;
}



// FUNCTION 147832492 FUN_147832492 body=131 status=ok
// SIG undefined FUN_147832492(void)

void FUN_147832492(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_147835b54(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_147835b54(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147832516 FUN_147832516 body=178 status=ok
// SIG undefined FUN_147832516(void)

undefined8 FUN_147832516(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 0x3d8);
  lVar1 = (longlong)local_38;
  _Src = *(void **)(param_1 + 0x3d0);
  if (lVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar1 * 2);
  }
  FUN_147834dbe(param_2,&local_40,param_3);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478325ca FUN_1478325ca body=128 status=ok
// SIG undefined FUN_1478325ca(void)

undefined4 FUN_1478325ca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong local_48;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147831d16(local_50);
  uVar1 = FUN_143385f32(param_1,param_2,param_3,local_50);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783264c FUN_14783264c body=318 status=ok
// SIG undefined FUN_14783264c(void)

undefined8 * FUN_14783264c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  if (param_1 == param_2) {
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar2 = *(undefined4 *)(param_2 + 5);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
    *(undefined4 *)(param_1 + 5) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  }
  else {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar2 = *(undefined4 *)(param_2 + 5);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
    *(undefined4 *)(param_1 + 5) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    param_1[7] = param_2[7];
    param_2[7] = 0;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    param_2[8] = 0;
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    if (param_1[10] != 0) {
      FUN_1400020a8();
    }
    param_1[10] = param_2[10];
    param_2[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
    param_2[0xb] = 0;
  }
  FUN_147835d44(param_1 + 0xc,param_2 + 0xc);
  FUN_147835d44(param_1 + 0xe,param_2 + 0xe);
  if (param_1 != param_2) {
    if (param_1[0x10] != 0) {
      FUN_1400020a8();
    }
    param_1[0x10] = param_2[0x10];
    param_2[0x10] = 0;
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
    *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
    param_2[0x11] = 0;
  }
  return param_1;
}



// FUNCTION 14783278a FUN_14783278a body=59 status=ok
// SIG undefined FUN_14783278a(void)

int FUN_14783278a(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1478365b6(param_1,iVar1);
  }
  FUN_1478365a0((longlong)iVar1 * 0x18 + *param_1);
  return iVar1;
}



// FUNCTION 1478327c6 FUN_1478327c6 body=59 status=ok
// SIG undefined FUN_1478327c6(void)

int FUN_1478327c6(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14783666c(param_1,iVar1);
  }
  FUN_14783664a((longlong)iVar1 * 0x50 + *param_1);
  return iVar1;
}



// FUNCTION 147832802 FUN_147832802 body=59 status=ok
// SIG undefined FUN_147832802(void)

int FUN_147832802(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147836712(param_1,iVar1);
  }
  FUN_147836700((longlong)iVar1 * 0x28 + *param_1);
  return iVar1;
}



// FUNCTION 14783283e FUN_14783283e body=128 status=ok
// SIG undefined FUN_14783283e(void)

undefined4 FUN_14783283e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong local_48;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147831d16(local_50);
  uVar1 = FUN_1433872a2(param_1,param_2,param_3,local_50);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478328c0 FUN_1478328c0 body=210 status=ok
// SIG undefined FUN_1478328c0(void)

void FUN_1478328c0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = (**(code **)(*param_1 + 400))();
  iVar1 = *(int *)(param_2 + 1);
  uVar3 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  if (uVar3 < uVar2) {
    FUN_1467acf64(param_2,&local_30,uVar2);
  }
  else {
    if (iVar1 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    if ((int)uVar2 < (int)uVar3) {
      uVar3 = uVar2;
    }
    uVar2 = 0;
    if (0 < (int)uVar3) {
      uVar2 = uVar3;
    }
    FUN_14006620a(&local_30,puVar4,uVar2);
  }
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147832994 FUN_147832994 body=404 status=ok
// SIG undefined FUN_147832994(void)

undefined8 * FUN_147832994(undefined8 *param_1,undefined8 *param_2)

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
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  return param_1;
}



// FUNCTION 147832b28 FUN_147832b28 body=164 status=ok
// SIG undefined FUN_147832b28(void)

void FUN_147832b28(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x198) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x198) + 0x1c) = 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x198) = 0;
    plVar3 = *(longlong **)(param_1 + 0x1a0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1a0) = 0;
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
  }
  FUN_147836557(*(undefined8 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 400));
  *(undefined4 *)(param_1 + 400) = 0;
  if (*(int *)(param_1 + 0x194) != 0) {
    FUN_14783739e(param_1 + 0x188);
  }
  *(undefined1 *)(param_1 + 0x3b8) = 0;
  *(undefined1 *)(param_1 + 0x178) = 0;
  return;
}


