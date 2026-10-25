// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148aee2c0 FUN_148aee2c0 body=45 status=ok
// SIG undefined FUN_148aee2c0(void)

longlong FUN_148aee2c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145fee6e4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148aee2ee FUN_148aee2ee body=38 status=ok
// SIG undefined FUN_148aee2ee(void)

undefined8 FUN_148aee2ee(undefined8 param_1,int param_2)

{
  FUN_145feeb3c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148aee372 FUN_148aee372 body=31 status=ok
// SIG undefined FUN_148aee372(void)

undefined8 FUN_148aee372(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148aee3aa FUN_148aee3aa body=101 status=ok
// SIG undefined FUN_148aee3aa(void)

void FUN_148aee3aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b528a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b528990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148aee410 FUN_148aee410 body=101 status=ok
// SIG undefined FUN_148aee410(void)

void FUN_148aee410(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b528a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b528990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148aee476 FUN_148aee476 body=134 status=ok
// SIG undefined FUN_148aee476(void)

void FUN_148aee476(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b528a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b528990;
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
                    /* WARNING: Could not recover jumptable at 0x000148aee4ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148aee510 FUN_148aee510 body=31 status=ok
// SIG undefined FUN_148aee510(void)

undefined8 FUN_148aee510(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148aee54c FUN_148aee54c body=93 status=ok
// SIG undefined FUN_148aee54c(void)

void FUN_148aee54c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b528a90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148aee5aa FUN_148aee5aa body=126 status=ok
// SIG undefined FUN_148aee5aa(void)

void FUN_148aee5aa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b528a90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148aee619. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148aee628 FUN_148aee628 body=21 status=ok
// SIG undefined FUN_148aee628(void)

undefined8 FUN_148aee628(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148aee642 FUN_148aee642 body=81 status=ok
// SIG undefined FUN_148aee642(void)

undefined8 FUN_148aee642(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
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
    uVar6 = *(undefined8 *)(param_1 + 0x20);
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



// FUNCTION 148aee69a FUN_148aee69a body=89 status=ok
// SIG undefined FUN_148aee69a(void)

bool FUN_148aee69a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148aee6e5;
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
    lVar6 = *(longlong *)(param_1 + 0x20);
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
LAB_148aee6e5:
  return lVar6 == param_2;
}



// FUNCTION 148aee71c FUN_148aee71c body=64 status=ok
// SIG undefined FUN_148aee71c(void)

void FUN_148aee71c(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1458c754e(*param_2,param_1);
  return;
}



// FUNCTION 148aee75c FUN_148aee75c body=98 status=ok
// SIG undefined FUN_148aee75c(void)

void FUN_148aee75c(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_1458c754e(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148aee7af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148aee7be FUN_148aee7be body=207 status=ok
// SIG undefined FUN_148aee7be(void)

void FUN_148aee7be(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar7 = *(longlong **)(param_1 + 0x28);
  bVar4 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    iVar6 = (int)plVar7[1];
    lVar8 = 0;
    do {
      if (iVar6 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_148aee7ec;
      }
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 0x20);
    bVar4 = false;
  }
LAB_148aee7ec:
  pcVar3 = *(code **)(param_1 + 0x30);
  iVar6 = *(int *)(param_1 + 0x38);
  local_48 = 0;
  local_40 = 0;
  FUN_1458c75be(&local_48,param_1 + 8);
  (*pcVar3)(iVar6 + lVar8,param_2,&local_48);
  if (!bVar4) {
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
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148aee890 FUN_148aee890 body=68 status=ok
// SIG undefined FUN_148aee890(void)

undefined8 * FUN_148aee890(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b528c90;
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



// FUNCTION 148aee8d8 FUN_148aee8d8 body=81 status=ok
// SIG undefined FUN_148aee8d8(void)

undefined8 FUN_148aee8d8(longlong param_1)

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



// FUNCTION 148aee930 FUN_148aee930 body=89 status=ok
// SIG undefined FUN_148aee930(void)

bool FUN_148aee930(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148aee97b;
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
LAB_148aee97b:
  return lVar6 == param_2;
}



// FUNCTION 148aee98a FUN_148aee98a body=118 status=ok
// SIG undefined FUN_148aee98a(void)

void FUN_148aee98a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b528d00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b528c90;
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



// FUNCTION 148aeea00 FUN_148aeea00 body=118 status=ok
// SIG undefined FUN_148aeea00(void)

void FUN_148aeea00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b528d00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b528c90;
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



// FUNCTION 148aeea76 FUN_148aeea76 body=156 status=ok
// SIG undefined FUN_148aeea76(void)

void FUN_148aeea76(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b528d00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b528c90;
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
                    /* WARNING: Could not recover jumptable at 0x000148aeeb02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148aeeb12 FUN_148aeeb12 body=104 status=ok
// SIG undefined FUN_148aeeb12(void)

void FUN_148aeeb12(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148aeeb5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148aeeb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148aeeb7c FUN_148aeeb7c body=95 status=ok
// SIG undefined FUN_148aeeb7c(void)

void FUN_148aeeb7c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 148aeebdc FUN_148aeebdc body=132 status=ok
// SIG undefined FUN_148aeebdc(void)

void FUN_148aeebdc(longlong param_1,int param_2)

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



// FUNCTION 148aeec66 FUN_148aeec66 body=81 status=ok
// SIG undefined FUN_148aeec66(void)

undefined8 FUN_148aeec66(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
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
    uVar6 = *(undefined8 *)(param_1 + 0x20);
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



// FUNCTION 148aeecbe FUN_148aeecbe body=89 status=ok
// SIG undefined FUN_148aeecbe(void)

bool FUN_148aeecbe(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148aeed09;
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
    lVar6 = *(longlong *)(param_1 + 0x20);
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
LAB_148aeed09:
  return lVar6 == param_2;
}



// FUNCTION 148aeed40 FUN_148aeed40 body=64 status=ok
// SIG undefined FUN_148aeed40(void)

void FUN_148aeed40(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_145b07340(*param_2,param_1);
  return;
}



// FUNCTION 148aeed80 FUN_148aeed80 body=98 status=ok
// SIG undefined FUN_148aeed80(void)

void FUN_148aeed80(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_145b07340(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148aeedd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148aeede2 FUN_148aeede2 body=185 status=ok
// SIG undefined FUN_148aeede2(void)

void FUN_148aeede2(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  local_1c = param_2;
  if (puVar3 == (undefined8 *)0x0) {
LAB_148aeee07:
    local_28 = 0;
    FUN_1461c97ce(param_1 + 8,param_1 + 0x30,&local_28,&local_1c);
  }
  else {
    iVar4 = *(int *)(puVar3 + 1);
    do {
      if (iVar4 == 0) goto LAB_148aeee07;
      LOCK();
      iVar2 = *(int *)(puVar3 + 1);
      bVar5 = iVar4 == iVar2;
      if (bVar5) {
        *(int *)(puVar3 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
    } while (!bVar5);
    local_28 = *(undefined8 *)(param_1 + 0x20);
    FUN_1461c97ce(param_1 + 8,param_1 + 0x30,&local_28,&local_1c);
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148aeeeae FUN_148aeeeae body=68 status=ok
// SIG undefined FUN_148aeeeae(void)

undefined8 * FUN_148aeeeae(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b528f30;
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



// FUNCTION 148aeeef6 FUN_148aeeef6 body=81 status=ok
// SIG undefined FUN_148aeeef6(void)

undefined8 FUN_148aeeef6(longlong param_1)

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



// FUNCTION 148aeef4e FUN_148aeef4e body=89 status=ok
// SIG undefined FUN_148aeef4e(void)

bool FUN_148aeef4e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148aeef99;
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
LAB_148aeef99:
  return lVar6 == param_2;
}



// FUNCTION 148aeefa8 FUN_148aeefa8 body=118 status=ok
// SIG undefined FUN_148aeefa8(void)

void FUN_148aeefa8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b528fa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b528f30;
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



// FUNCTION 148aef01e FUN_148aef01e body=118 status=ok
// SIG undefined FUN_148aef01e(void)

void FUN_148aef01e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b528fa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b528f30;
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



// FUNCTION 148aef094 FUN_148aef094 body=156 status=ok
// SIG undefined FUN_148aef094(void)

void FUN_148aef094(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b528fa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b528f30;
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
                    /* WARNING: Could not recover jumptable at 0x000148aef120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148aef130 FUN_148aef130 body=104 status=ok
// SIG undefined FUN_148aef130(void)

void FUN_148aef130(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148aef17d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148aef18e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148aef19a FUN_148aef19a body=68 status=ok
// SIG undefined FUN_148aef19a(void)

undefined8 * FUN_148aef19a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b529010;
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



// FUNCTION 148aef1e2 FUN_148aef1e2 body=81 status=ok
// SIG undefined FUN_148aef1e2(void)

undefined8 FUN_148aef1e2(longlong param_1)

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



// FUNCTION 148aef23a FUN_148aef23a body=89 status=ok
// SIG undefined FUN_148aef23a(void)

bool FUN_148aef23a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148aef285;
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
LAB_148aef285:
  return lVar6 == param_2;
}



// FUNCTION 148aef2b0 FUN_148aef2b0 body=118 status=ok
// SIG undefined FUN_148aef2b0(void)

void FUN_148aef2b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5276b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b529010;
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



// FUNCTION 148aef326 FUN_148aef326 body=118 status=ok
// SIG undefined FUN_148aef326(void)

void FUN_148aef326(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5276b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b529010;
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



// FUNCTION 148aef39c FUN_148aef39c body=156 status=ok
// SIG undefined FUN_148aef39c(void)

void FUN_148aef39c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5276b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b529010;
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
                    /* WARNING: Could not recover jumptable at 0x000148aef428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148aef438 FUN_148aef438 body=104 status=ok
// SIG undefined FUN_148aef438(void)

void FUN_148aef438(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148aef485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148aef496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148aef4a0 FUN_148aef4a0 body=175 status=ok
// SIG undefined FUN_148aef4a0(void)

void FUN_148aef4a0(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_148aef529;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148aef529:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148aef550 FUN_148aef550 body=193 status=ok
// SIG undefined FUN_148aef550(void)

void FUN_148aef550(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

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
        goto LAB_148aef5e7;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148aef5e7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148aef622 FUN_148aef622 body=107 status=ok
// SIG undefined FUN_148aef622(void)

longlong * FUN_148aef622(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_141498c8a(param_1,param_3 + 8,0,0);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar1);
      }
    }
  }
  *param_2 = lVar2;
  return param_2;
}



// FUNCTION 148aef68e FUN_148aef68e body=44 status=ok
// SIG undefined FUN_148aef68e(void)

undefined8 FUN_148aef68e(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x70) == 0) {
    FUN_14782a7ca(param_2);
  }
  else {
    FUN_143333872(*(longlong *)(param_1 + 0x70),param_2);
  }
  return param_2;
}



// FUNCTION 148aef6ba FUN_148aef6ba body=25 status=ok
// SIG undefined FUN_148aef6ba(void)

undefined8 FUN_148aef6ba(undefined8 param_1,undefined8 param_2)

{
  FUN_14782a7ca(param_2);
  return param_2;
}



// FUNCTION 148aef6d4 FUN_148aef6d4 body=25 status=ok
// SIG undefined FUN_148aef6d4(void)

undefined8 FUN_148aef6d4(undefined8 param_1,undefined8 param_2)

{
  FUN_14782a7ca(param_2);
  return param_2;
}



// FUNCTION 148aef754 FUN_148aef754 body=290 status=ok
// SIG undefined FUN_148aef754(void)

int * FUN_148aef754(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar5;
  float *pfVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = (**(code **)(*param_1 + 0x180))();
  lVar5 = FUN_1449baec6(uVar4);
  if (lVar5 == 0) {
LAB_148aef84b:
    *(undefined8 *)param_2 = DAT_14c9e1eac;
  }
  else {
    FUN_140761b7a(lVar5,&local_30);
    if (local_30 == 0) {
      lVar5 = FUN_1412eb7dc(lVar5);
      if (lVar5 == 0) {
        if (local_28 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_28 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_28)(local_28);
            LOCK();
            piVar2 = (int *)((longlong)local_28 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_28 + 0x10))(local_28);
            }
          }
        }
        goto LAB_148aef84b;
      }
      (**(code **)(*(longlong *)(lVar5 + 200) + 0x10))(lVar5 + 200,local_38);
      (**(code **)(*(longlong *)(lVar5 + 200) + 0x10))(lVar5 + 200,param_2);
    }
    else {
      pfVar6 = (float *)FUN_144b013e4();
      fVar3 = pfVar6[1];
      *param_2 = (int)*pfVar6;
      param_2[1] = (int)fVar3;
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aef878 FUN_148aef878 body=132 status=ok
// SIG undefined FUN_148aef878(void)

void FUN_148aef878(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1401e2c50();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) {
      uVar3 = 0x3f800000;
      goto LAB_148aef8c1;
    }
  }
  FUN_148aef754(param_1,&local_28);
  uVar3 = FUN_1401e2bac(lVar2,local_28);
LAB_148aef8c1:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar3);
}



// FUNCTION 148aef93e FUN_148aef93e body=303 status=ok
// SIG undefined FUN_148aef93e(void)

void FUN_148aef93e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(char *)((longlong)param_1 + 0xa1) == '\x01') &&
      (*(undefined1 *)((longlong)param_1 + 0xa4) = 1, *(int *)((longlong)param_1 + 0xec) != 0)) &&
     ((int)param_1[7] != 0)) {
    local_28 = *(longlong *)(param_2 + 0x20);
    local_20 = *(undefined8 *)(param_2 + 0x28);
    local_18 = *(longlong **)(param_2 + 0x30);
    if (local_18 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = (int)local_18[1] + 1;
      UNLOCK();
    }
    uVar4 = FUN_140230656(&local_28);
    (**(code **)(*param_1 + 0x3a8))(param_1,uVar4);
    if ((longlong)(int)param_1[0x13] != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(param_1[0x12] + lVar5) == local_28) {
          if (*(char *)((longlong)param_1 + 0xa3) == '\0') {
            *(undefined1 *)((longlong)param_1 + 0xa3) = 1;
            (**(code **)(*param_1 + 0x3b0))(param_1,0);
          }
          break;
        }
        lVar5 = lVar5 + 0x18;
      } while ((longlong)(int)param_1[0x13] * 0x18 != lVar5);
    }
    *(undefined4 *)(param_1 + 0x11) = 0;
    (**(code **)(*param_1 + 0x3b8))(param_1,1);
    plVar3 = local_18;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_18)(local_18);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aefa6e FUN_148aefa6e body=118 status=ok
// SIG undefined FUN_148aefa6e(void)

void FUN_148aefa6e(longlong *param_1)

{
  if ((((*(char *)((longlong)param_1 + 0xa1) == '\x01') &&
       (*(undefined1 *)((longlong)param_1 + 0xa4) = 1, *(int *)((longlong)param_1 + 0xec) != 0)) &&
      ((int)param_1[7] != 0)) && (*(char *)((longlong)param_1 + 0xa3) == '\0')) {
    *(undefined4 *)(param_1 + 0x11) = 0;
    (**(code **)(*param_1 + 0x3a8))(param_1,0);
    (**(code **)(*param_1 + 0x3b0))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000148aefae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x3b8))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148aefae4 FUN_148aefae4 body=40 status=ok
// SIG undefined FUN_148aefae4(void)

void FUN_148aefae4(longlong *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa6) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
                    /* WARNING: Could not recover jumptable at 0x000148aefb09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3b0))(param_1,0);
  return;
}



// FUNCTION 148aefb0c FUN_148aefb0c body=59 status=ok
// SIG undefined FUN_148aefb0c(void)

void FUN_148aefb0c(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_1414dac37();
  if (lVar2 != 0) {
    cVar1 = (**(code **)(*param_1 + 0x3a0))(param_1);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148aefb39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x398))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148aefb48 FUN_148aefb48 body=108 status=ok
// SIG undefined FUN_148aefb48(void)

bool FUN_148aefb48(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  
  plVar3 = (longlong *)FUN_1414dac37();
  if (((plVar3 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar3 + 0x90))(plVar3), cVar1 != '\0')
      ) && (*(int *)(param_1 + 0xe8) != 0)) {
    iVar2 = *(int *)(param_1 + 0xe0);
    if (iVar2 == *(int *)(param_1 + 0xd0)) {
      if (iVar2 < 2) {
        return true;
      }
      iVar2 = FUN_144a80a00(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 200));
      bVar4 = iVar2 == 0;
    }
    else {
      bVar4 = *(int *)(param_1 + 0xd0) + iVar2 == 1;
    }
    return bVar4;
  }
  return false;
}



// FUNCTION 148aefbca FUN_148aefbca body=31 status=ok
// SIG undefined FUN_148aefbca(void)

undefined8 FUN_148aefbca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148aefc04 FUN_148aefc04 body=93 status=ok
// SIG undefined FUN_148aefc04(void)

void FUN_148aefc04(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b529dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148aefc62 FUN_148aefc62 body=93 status=ok
// SIG undefined FUN_148aefc62(void)

void FUN_148aefc62(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b529dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148aefcc0 FUN_148aefcc0 body=126 status=ok
// SIG undefined FUN_148aefcc0(void)

void FUN_148aefcc0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b529dc0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148aefd2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148aefd3e FUN_148aefd3e body=40 status=ok
// SIG undefined FUN_148aefd3e(void)

void FUN_148aefd3e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148aefd63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148aefd66 FUN_148aefd66 body=31 status=ok
// SIG undefined FUN_148aefd66(void)

undefined8 FUN_148aefd66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148aefda0 FUN_148aefda0 body=93 status=ok
// SIG undefined FUN_148aefda0(void)

void FUN_148aefda0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b529e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148aefdfe FUN_148aefdfe body=93 status=ok
// SIG undefined FUN_148aefdfe(void)

void FUN_148aefdfe(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b529e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148aefe5c FUN_148aefe5c body=126 status=ok
// SIG undefined FUN_148aefe5c(void)

void FUN_148aefe5c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b529e30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148aefecb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148aefeda FUN_148aefeda body=40 status=ok
// SIG undefined FUN_148aefeda(void)

void FUN_148aefeda(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148aefeff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148aeff02 FUN_148aeff02 body=31 status=ok
// SIG undefined FUN_148aeff02(void)

undefined8 FUN_148aeff02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148aeff3c FUN_148aeff3c body=26 status=ok
// SIG undefined FUN_148aeff3c(void)

bool FUN_148aeff3c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148aeff56 FUN_148aeff56 body=93 status=ok
// SIG undefined FUN_148aeff56(void)

void FUN_148aeff56(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b529f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148aeffb4 FUN_148aeffb4 body=93 status=ok
// SIG undefined FUN_148aeffb4(void)

void FUN_148aeffb4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b529f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af0012 FUN_148af0012 body=126 status=ok
// SIG undefined FUN_148af0012(void)

void FUN_148af0012(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b529f10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148af0081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148af0090 FUN_148af0090 body=35 status=ok
// SIG undefined FUN_148af0090(void)

void FUN_148af0090(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148af00af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148af00b4 FUN_148af00b4 body=31 status=ok
// SIG undefined FUN_148af00b4(void)

undefined8 FUN_148af00b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148af00ee FUN_148af00ee body=26 status=ok
// SIG undefined FUN_148af00ee(void)

bool FUN_148af00ee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148af0108 FUN_148af0108 body=93 status=ok
// SIG undefined FUN_148af0108(void)

void FUN_148af0108(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b529f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af0166 FUN_148af0166 body=93 status=ok
// SIG undefined FUN_148af0166(void)

void FUN_148af0166(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b529f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af01c4 FUN_148af01c4 body=126 status=ok
// SIG undefined FUN_148af01c4(void)

void FUN_148af01c4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b529f80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148af0233. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148af0242 FUN_148af0242 body=48 status=ok
// SIG undefined FUN_148af0242(void)

void FUN_148af0242(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148af026f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2);
  return;
}



// FUNCTION 148af028c FUN_148af028c body=29 status=ok
// SIG undefined FUN_148af028c(void)

bool FUN_148af028c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148af02aa FUN_148af02aa body=26 status=ok
// SIG undefined FUN_148af02aa(void)

bool FUN_148af02aa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148af02c4 FUN_148af02c4 body=24 status=ok
// SIG undefined FUN_148af02c4(void)

bool FUN_148af02c4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148af02dc FUN_148af02dc body=93 status=ok
// SIG undefined FUN_148af02dc(void)

void FUN_148af02dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a161fa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b529ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af033a FUN_148af033a body=93 status=ok
// SIG undefined FUN_148af033a(void)

void FUN_148af033a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a161fa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b529ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af0398 FUN_148af0398 body=126 status=ok
// SIG undefined FUN_148af0398(void)

void FUN_148af0398(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a161fa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b529ff0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148af0407. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148af0416 FUN_148af0416 body=40 status=ok
// SIG undefined FUN_148af0416(void)

void FUN_148af0416(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148af043b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148af043e FUN_148af043e body=152 status=ok
// SIG undefined FUN_148af043e(void)

bool FUN_148af043e(longlong param_1,undefined8 param_2)

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



// FUNCTION 148af04d8 FUN_148af04d8 body=31 status=ok
// SIG undefined FUN_148af04d8(void)

undefined8 FUN_148af04d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148af0512 FUN_148af0512 body=26 status=ok
// SIG undefined FUN_148af0512(void)

bool FUN_148af0512(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148af052c FUN_148af052c body=93 status=ok
// SIG undefined FUN_148af052c(void)

void FUN_148af052c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b52a0d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b52a060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af058a FUN_148af058a body=93 status=ok
// SIG undefined FUN_148af058a(void)

void FUN_148af058a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b52a0d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b52a060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af05e8 FUN_148af05e8 body=126 status=ok
// SIG undefined FUN_148af05e8(void)

void FUN_148af05e8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b52a0d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b52a060;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148af0657. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148af0666 FUN_148af0666 body=40 status=ok
// SIG undefined FUN_148af0666(void)

void FUN_148af0666(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148af068b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148af068e FUN_148af068e body=152 status=ok
// SIG undefined FUN_148af068e(void)

bool FUN_148af068e(longlong param_1,undefined8 param_2)

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



// FUNCTION 148af072a FUN_148af072a body=31 status=ok
// SIG undefined FUN_148af072a(void)

undefined8 FUN_148af072a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148af0764 FUN_148af0764 body=26 status=ok
// SIG undefined FUN_148af0764(void)

bool FUN_148af0764(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148af077e FUN_148af077e body=93 status=ok
// SIG undefined FUN_148af077e(void)

void FUN_148af077e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b52a1b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b52a140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af07dc FUN_148af07dc body=93 status=ok
// SIG undefined FUN_148af07dc(void)

void FUN_148af07dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b52a1b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b52a140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af083a FUN_148af083a body=126 status=ok
// SIG undefined FUN_148af083a(void)

void FUN_148af083a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b52a1b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b52a140;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148af08a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148af08b8 FUN_148af08b8 body=40 status=ok
// SIG undefined FUN_148af08b8(void)

void FUN_148af08b8(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148af08dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148af08e0 FUN_148af08e0 body=152 status=ok
// SIG undefined FUN_148af08e0(void)

bool FUN_148af08e0(longlong param_1,undefined8 param_2)

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



// FUNCTION 148af097c FUN_148af097c body=31 status=ok
// SIG undefined FUN_148af097c(void)

undefined8 FUN_148af097c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148af09b8 FUN_148af09b8 body=93 status=ok
// SIG undefined FUN_148af09b8(void)

void FUN_148af09b8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b52a220;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af0a16 FUN_148af0a16 body=126 status=ok
// SIG undefined FUN_148af0a16(void)

void FUN_148af0a16(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b52a220;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148af0a85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148af0a94 FUN_148af0a94 body=21 status=ok
// SIG undefined FUN_148af0a94(void)

undefined8 FUN_148af0a94(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148af0aaa FUN_148af0aaa body=142 status=ok
// SIG undefined FUN_148af0aaa(void)

void FUN_148af0aaa(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30,*param_2);
  uStack_28 = 0;
  if (*param_2 != 0) {
    uStack_28 = param_2[1];
  }
  iVar2 = *(int *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x68) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x6c) < iVar2 + 1U) {
    FUN_148af2a10((longlong *)(param_1 + 0x60),iVar2);
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10);
  *puVar1 = (undefined4)local_30;
  puVar1[1] = local_30._4_4_;
  puVar1[2] = (undefined4)uStack_28;
  puVar1[3] = uStack_28._4_4_;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af0b3a FUN_148af0b3a body=118 status=ok
// SIG undefined FUN_148af0b3a(void)

void FUN_148af0b3a(longlong param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_14485c47a(&local_38,*param_2);
  local_30 = 0;
  if (*param_2 != 0) {
    local_30 = param_2[1];
  }
  local_28 = &local_38;
  FUN_148af2a96(param_1 + 0x60);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af0bb2 FUN_148af0bb2 body=203 status=ok
// SIG undefined FUN_148af0bb2(void)

undefined8
FUN_148af0bb2(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_60 [16];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [8];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = local_50;
  local_78 = local_48;
  cVar4 = FUN_148af0c7e(param_1,param_2,&local_40,local_4c);
  if (cVar4 != '\0') {
    iVar1 = *(int *)(local_40 + 0x20);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(local_40 + 0x18);
      lVar7 = *param_3;
      lVar8 = 0;
      do {
        FUN_14485c47a(local_60,lVar7);
        lVar7 = *param_3;
        lVar5 = 0;
        if (lVar7 != 0) {
          lVar5 = param_3[1];
        }
        if (*(longlong *)(lVar3 + 8 + lVar8) == lVar5) {
          uVar6 = *(undefined8 *)(lVar3 + 0x10 + lVar8);
          uVar2 = *(undefined4 *)(lVar3 + 0x18 + lVar8);
          *param_4 = uVar6;
          *(undefined4 *)(param_4 + 1) = uVar2;
          uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          goto LAB_148af0c45;
        }
        lVar8 = lVar8 + 0x20;
      } while ((longlong)iVar1 * 0x20 != lVar8);
    }
  }
  uVar6 = 0;
LAB_148af0c45:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af0c7e FUN_148af0c7e body=302 status=ok
// SIG undefined FUN_148af0c7e(void)

undefined8
FUN_148af0c7e(longlong *param_1,float param_2,longlong *param_3,float *param_4,undefined8 *param_5,
             float *param_6)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 *puVar5;
  float *pfVar6;
  
  *param_3 = 0;
  *param_4 = 0.0;
  *param_5 = 0;
  *param_6 = 0.0;
  if ((char)param_1[3] != '\x01') {
    return 0;
  }
  param_2 = param_2 - *(float *)((longlong)param_1 + 0x24);
  if (param_2 <= 0.0) {
    return 0;
  }
  lVar1 = (**(code **)(*param_1 + 8))();
  param_2 = (float)*(double *)(lVar1 + 0x6e0) - param_2;
  if ((int)param_1[0xb] < 1) {
    pfVar2 = (float *)*param_3;
LAB_148af0d42:
    pfVar4 = pfVar2;
    if (pfVar2 == (float *)0x0) goto LAB_148af0d6e;
  }
  else {
    puVar5 = (undefined8 *)param_1[10];
    if (puVar5 == (undefined8 *)0x0) {
      pfVar2 = (float *)0x0;
    }
    else {
      pfVar4 = (float *)*puVar5;
      if (*pfVar4 <= param_2) {
LAB_148af0d52:
        pfVar2 = (float *)0x0;
        pfVar3 = (float *)0x0;
        pfVar6 = pfVar4;
      }
      else {
        do {
          pfVar2 = pfVar4;
          puVar5 = (undefined8 *)puVar5[2];
          if (puVar5 == (undefined8 *)0x0) goto LAB_148af0d5a;
          pfVar4 = (float *)*puVar5;
        } while (param_2 < *pfVar4);
        if (pfVar2 == (float *)0x0) goto LAB_148af0d52;
        pfVar3 = pfVar4;
        pfVar6 = pfVar2;
        if (param_2 - *pfVar4 < *pfVar2 - param_2) {
          pfVar3 = pfVar2;
          pfVar6 = pfVar4;
        }
      }
      *param_3 = (longlong)pfVar6;
      *param_5 = pfVar3;
    }
LAB_148af0d5a:
    pfVar4 = (float *)*param_3;
    if ((float *)*param_3 == (float *)0x0) {
      *param_3 = (longlong)pfVar2;
      goto LAB_148af0d42;
    }
  }
  *param_4 = *pfVar4 - param_2;
LAB_148af0d6e:
  pfVar2 = (float *)*param_5;
  if (pfVar2 != (float *)0x0) {
    *param_6 = *pfVar2 - param_2;
  }
  return CONCAT71((int7)((ulonglong)pfVar2 >> 8),*param_3 != 0);
}



// FUNCTION 148af0dac FUN_148af0dac body=118 status=ok
// SIG undefined FUN_148af0dac(void)

undefined8 FUN_148af0dac(longlong *param_1,float param_2,char param_3)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  
  pfVar1 = (float *)0x0;
  if ((char)param_1[3] != '\x01') {
    return 0;
  }
  param_2 = param_2 - *(float *)((longlong)param_1 + 0x24);
  if (param_2 <= 0.0) {
    return 0;
  }
  if ((int)param_1[0xb] != 0) {
    if (param_3 == '\0') {
LAB_148af0e1e:
      return CONCAT71((int7)((ulonglong)pfVar1 >> 8),1);
    }
    lVar2 = (**(code **)(*param_1 + 8))(param_1);
    if (lVar2 != 0) {
      pfVar1 = *(float **)param_1[10];
      fVar3 = ((float)*(double *)(lVar2 + 0x6e0) - param_2) - *pfVar1;
      if ((fVar3 <= 0.0) || (fVar3 <= param_2)) goto LAB_148af0e1e;
    }
  }
  return 0;
}



// FUNCTION 148af0e22 FUN_148af0e22 body=59 status=ok
// SIG undefined FUN_148af0e22(void)

longlong FUN_148af0e22(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148af2c3a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_148af2c2f(lVar2);
  return lVar2;
}



// FUNCTION 148af0e5e FUN_148af0e5e body=860 status=ok
// SIG undefined FUN_148af0e5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_148af0e5e(undefined8 param_1,double *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  double *pdVar17;
  double *pdVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined8 local_d0;
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  undefined1 local_c0 [8];
  longlong local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = local_c8;
  local_e8 = local_c0;
  cVar11 = FUN_148af0c7e(param_1,param_2,&local_b8,local_c4);
  if (cVar11 != '\0') {
    local_d0 = 0;
    FUN_14485c47a(&local_d0,param_4);
    if ((longlong)*(int *)(local_b8 + 0x10) != 0) {
      lVar16 = *(longlong *)(local_b8 + 8);
      lVar19 = (longlong)*(int *)(local_b8 + 0x10) * 0xb0;
      do {
        lVar15 = lVar16;
        uVar12 = FUN_148af2cc0(lVar16,&local_d0);
        if ((char)uVar12 != '\0') {
          if (lVar16 != 0) {
            auVar1 = *(undefined1 (*) [16])(lVar16 + 0x90);
            auVar2 = *(undefined1 (*) [16])(lVar16 + 0xa0);
            lVar19 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_));
            auVar25._8_4_ = (int)lVar19;
            auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_));
            auVar25._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
            iVar13 = movmskpd(uVar12,auVar25);
            lVar19 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
            auVar27._8_4_ = (int)lVar19;
            auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
            auVar27._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
            uVar14 = movmskpd((int)lVar15,auVar27);
            if ((uVar14 & 0x3fffffff) == 0 && iVar13 == 0) {
              pdVar17 = (double *)&DAT_14c846480;
              for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
                *param_2 = *pdVar17;
                pdVar17 = pdVar17 + 1;
                param_2 = param_2 + 1;
              }
            }
            else {
              auVar27 = divpd(_DAT_149934d80,auVar1);
              auVar25 = divpd(ZEXT816(0x3ff0000000000000),auVar2);
              dVar20 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) &
                               auVar27._0_8_);
              dVar21 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) &
                               auVar27._8_8_);
              dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) &
                              auVar25._0_8_);
              dVar10 = *(double *)(lVar16 + 0x50);
              dVar5 = *(double *)(lVar16 + 0x60) * -1.0;
              dVar6 = *(double *)(lVar16 + 0x68) * 1.0;
              dVar22 = -dVar10;
              dVar23 = -*(double *)(lVar16 + 0x58);
              dVar24 = *(double *)(lVar16 + 0x70) * dVar20;
              dVar26 = *(double *)(lVar16 + 0x78) * dVar21;
              dVar4 = *(double *)(lVar16 + 0x80) * dVar3;
              *param_2 = dVar22;
              param_2[1] = dVar23;
              auVar1._8_4_ = SUB84(dVar6,0);
              auVar1._0_8_ = dVar5;
              auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
              *(undefined1 (*) [16])(param_2 + 2) = auVar1;
              dVar8 = dVar26 * dVar22 - dVar23 * dVar24;
              dVar9 = dVar4 * dVar23 - dVar5 * dVar26;
              dVar7 = dVar24 * dVar5 - dVar22 * dVar4;
              dVar9 = dVar9 + dVar9;
              dVar7 = dVar7 + dVar7;
              dVar8 = dVar8 + dVar8;
              param_2[4] = 0.0 - ((dVar8 * dVar23 - dVar7 * dVar5) + dVar6 * dVar9 + dVar24);
              param_2[5] = 0.0 - (dVar8 * dVar10 + dVar5 * dVar9 + dVar6 * dVar7 + dVar26);
              param_2[6] = 0.0 - (dVar6 * dVar8 + dVar4 + (dVar7 * dVar22 - dVar9 * dVar23));
              param_2[7] = 0.0;
              param_2[8] = dVar20;
              param_2[9] = dVar21;
              param_2[10] = dVar3;
              param_2[0xb] = 0.0;
            }
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_108);
          }
          break;
        }
        lVar16 = lVar16 + 0xb0;
        lVar19 = lVar19 + -0xb0;
      } while (lVar19 != 0);
    }
  }
  pdVar17 = (double *)&DAT_14c846480;
  if (*(longlong *)(param_4 + 0x1c8) != 0) {
    pdVar17 = (double *)(*(longlong *)(param_4 + 0x1c8) + 0x240);
  }
  pdVar18 = param_2;
  for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
    *pdVar18 = *pdVar17;
    pdVar17 = pdVar17 + 1;
    pdVar18 = pdVar18 + 1;
  }
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148af11c0 FUN_148af11c0 body=2047 status=ok
// SIG undefined FUN_148af11c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148af11c0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  char cVar26;
  double *pdVar27;
  int iVar28;
  undefined4 uVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar38 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auStack_328 [32];
  undefined1 *local_308;
  undefined1 *local_300;
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined8 local_298;
  undefined1 local_290 [4];
  undefined1 local_28c [4];
  undefined1 local_288 [8];
  longlong local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  ulonglong local_d0;
  double dVar4;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  if (param_3 != 0) {
    local_300 = local_290;
    local_308 = local_288;
    cVar26 = FUN_148af0c7e(param_1,param_2,&local_280,local_28c);
    if (cVar26 != '\0') {
      local_298 = 0;
      FUN_14485c47a(&local_298,param_3);
      if ((longlong)*(int *)(local_280 + 0x10) != 0) {
        lVar31 = *(longlong *)(local_280 + 8);
        lVar32 = (longlong)*(int *)(local_280 + 0x10) * 0xb0;
        do {
          uVar29 = (int)&local_298;
          cVar26 = FUN_148af2cc0(lVar31);
          auVar45 = _DAT_149934d80;
          if (cVar26 != '\0') {
            if (lVar31 != 0) {
              pdVar1 = (double *)(*(longlong *)(param_3 + 0x1c8) + 0x240);
              pdVar27 = (double *)&DAT_14c846480;
              if (*(longlong *)(param_3 + 0x1c8) != 0) {
                pdVar27 = pdVar1;
              }
              local_2c8 = 0.0;
              dStack_2c0 = 0.0;
              local_2d8 = ZEXT816(0);
              auVar36 = *(undefined1 (*) [16])(pdVar27 + 8);
              dVar7 = auVar36._0_8_;
              dVar11 = auVar36._8_8_;
              auVar5 = *(undefined1 (*) [16])(pdVar27 + 10);
              dVar8 = auVar5._0_8_;
              auVar37 = *(undefined1 (*) [16])(lVar31 + 0x90);
              dVar9 = auVar37._0_8_;
              dVar12 = auVar37._8_8_;
              auVar6 = *(undefined1 (*) [16])(lVar31 + 0xa0);
              dVar10 = auVar6._0_8_;
              auVar36 = minpd(auVar37,auVar36);
              auVar41 = minpd(auVar6,auVar5);
              auVar37._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
              auVar37._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
              iVar28 = movmskpd((int)pdVar1,auVar37);
              auVar36._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
              auVar36._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
              uVar30 = movmskpd(uVar29,auVar36);
              if ((uVar30 & 0x3fffffff) == 0 && iVar28 == 0) {
                dVar18 = *(double *)(lVar31 + 0x50);
                dVar19 = *(double *)(lVar31 + 0x58);
                dVar20 = *(double *)(lVar31 + 0x60);
                dVar21 = *(double *)(lVar31 + 0x68);
                dVar22 = *pdVar27;
                dVar23 = pdVar27[1];
                dVar24 = pdVar27[2];
                dVar25 = pdVar27[3];
                dVar35 = pdVar27[3];
                dVar40 = pdVar27[3];
                dVar2 = pdVar27[1];
                dVar13 = pdVar27[1];
                dVar3 = pdVar27[2];
                dVar4 = pdVar27[2];
                local_2f8 = dVar19 * dVar3 * -1.0 +
                            dVar20 * dVar2 + dVar21 * *pdVar27 * 1.0 + dVar18 * dVar35;
                dStack_2f0 = dVar18 * dVar4 * 1.0 +
                             dVar21 * dVar13 + dVar20 * *pdVar27 * -1.0 + dVar19 * dVar40;
                dVar14 = *(double *)(lVar31 + 0x70) * dVar7;
                dVar44 = *(double *)(lVar31 + 0x78) * dVar11;
                dVar15 = *(double *)(lVar31 + 0x80) * dVar8;
                dVar16 = *(double *)(lVar31 + 0x88) * auVar5._8_8_;
                dVar39 = dVar44 * dVar22 - dVar23 * dVar14;
                dVar42 = dVar15 * dVar23 - dVar24 * dVar44;
                dVar43 = dVar14 * dVar24 - dVar22 * dVar15;
                dVar17 = dVar16 * dVar25 - dVar25 * dVar16;
                dVar42 = dVar42 + dVar42;
                dVar43 = dVar43 + dVar43;
                dVar39 = dVar39 + dVar39;
                dVar17 = dVar17 + dVar17;
                dVar44 = (dVar42 * dVar24 - dVar39 * dVar22) + dVar40 * dVar43 + dVar44 + pdVar27[5]
                ;
                local_2c8 = (dVar43 * dVar22 - dVar23 * dVar42) + dVar35 * dVar39 + dVar15 +
                            pdVar27[6];
                dStack_2c0 = (dVar17 * dVar25 - dVar17 * dVar25) + dVar40 * dVar17 + dVar16 +
                             pdVar27[7];
                local_2e8._8_8_ =
                     dVar20 * dVar4 * -1.0 +
                     ((*pdVar27 * dVar18 * -1.0 + dVar21 * dVar40) - dVar19 * dVar13);
                local_2e8._0_8_ =
                     dVar21 * dVar3 * 1.0 +
                     ((*pdVar27 * dVar19 * 1.0 + dVar20 * dVar35) - dVar18 * dVar2);
                local_2d8._8_4_ = SUB84(dVar44,0);
                local_2d8._0_8_ =
                     (dVar39 * dVar23 - dVar24 * dVar43) + dVar35 * dVar42 + dVar14 + pdVar27[4];
                local_2d8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
              }
              else {
                dVar2 = *pdVar27;
                dVar4 = pdVar27[1];
                dVar3 = pdVar27[2];
                dVar39 = dVar4 + dVar4;
                dVar42 = dVar3 + dVar3;
                dVar40 = dVar2 * (dVar2 + dVar2);
                local_188 = (1.0 - (dVar40 + dVar4 * dVar39)) * dVar8;
                dVar35 = pdVar27[3];
                dVar43 = dVar42 * dVar35;
                dVar44 = (dVar2 + dVar2) * pdVar27[3];
                dVar35 = dVar39 * dVar35;
                local_198 = (dVar35 + *pdVar27 * dVar42) * dVar8;
                dVar40 = (DAT_149934d80._8_8_ - (dVar3 * dVar42 + dVar40)) * dVar11;
                dVar13 = (dVar39 * dVar2 + dVar43) * dVar7;
                local_1a8 = (dVar42 * dVar4 + dVar44) * dVar11;
                dStack_190 = (dVar42 * dVar4 - dVar44) * dVar8;
                local_1c8 = (*pdVar27 * dVar42 - dVar35) * dVar7;
                local_1d8._8_4_ = SUB84(dVar13,0);
                local_1d8._0_8_ =
                     ((double)DAT_149934d80 - (dVar3 * dVar42 + dVar4 * dVar39)) * dVar7;
                local_1d8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
                uStack_1c0 = 0;
                local_1b8._8_4_ = SUB84(dVar40,0);
                local_1b8._0_8_ = (dVar39 * dVar2 - dVar43) * dVar11;
                local_1b8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
                uStack_1a0 = 0;
                uStack_180 = 0;
                local_178 = pdVar27[4];
                dStack_170 = pdVar27[5];
                local_168 = pdVar27[6];
                uStack_160 = 0x3ff0000000000000;
                dVar2 = *(double *)(lVar31 + 0x50);
                dVar4 = *(double *)(lVar31 + 0x58);
                dVar3 = *(double *)(lVar31 + 0x60);
                dVar39 = dVar4 + dVar4;
                dVar42 = dVar3 + dVar3;
                dVar40 = dVar2 * (dVar2 + dVar2);
                local_208 = (1.0 - (dVar40 + dVar4 * dVar39)) * dVar10;
                dVar13 = *(double *)(lVar31 + 0x50) * dVar42;
                dVar35 = *(double *)(lVar31 + 0x68);
                dVar43 = dVar42 * dVar35;
                dVar44 = (dVar2 + dVar2) * *(double *)(lVar31 + 0x68);
                dVar35 = dVar39 * dVar35;
                local_218 = (dVar35 + dVar13) * dVar10;
                dStack_210 = (dVar42 * dVar4 - dVar44) * dVar10;
                local_258 = ((double)DAT_149934d80 - (dVar3 * dVar42 + dVar4 * dVar39)) * dVar9;
                dVar40 = (DAT_149934d80._8_8_ - (dVar3 * dVar42 + dVar40)) * dVar12;
                dStack_250 = (dVar39 * dVar2 + dVar43) * dVar9;
                local_228 = (dVar42 * dVar4 + dVar44) * dVar12;
                local_248 = (dVar13 - dVar35) * dVar9;
                uStack_240 = 0;
                local_238._8_4_ = SUB84(dVar40,0);
                local_238._0_8_ = (dVar39 * dVar2 - dVar43) * dVar12;
                local_238._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
                uStack_220 = 0;
                uStack_200 = 0;
                local_1f8 = *(undefined8 *)(lVar31 + 0x70);
                uStack_1f0 = *(undefined8 *)(lVar31 + 0x78);
                local_1e8 = *(undefined8 *)(lVar31 + 0x80);
                uStack_1e0 = 0x3ff0000000000000;
                FUN_1447fea8d(&local_158);
                FUN_144a1c686(&local_158,0x3e45798ee0000000);
                auVar41._8_8_ = -(ulonglong)(0.0 <= dVar11 * dVar12);
                auVar41._0_8_ = -(ulonglong)(0.0 <= dVar7 * dVar9);
                auVar36 = blendvpd(_DAT_149936790,auVar45,auVar41);
                uVar33 = -(ulonglong)(0.0 <= dVar8 * dVar10);
                dVar35 = (double)(~uVar33 & 0xbff0000000000000 | uVar33 & 0x3ff0000000000000);
                dVar40 = auVar36._0_8_;
                local_148 = local_148 * dVar40;
                local_150 = local_150 * dVar40;
                local_158 = local_158 * dVar40;
                dVar40 = auVar36._8_8_;
                local_128 = local_128 * dVar40;
                local_130 = local_130 * dVar40;
                local_138 = dVar40 * local_138;
                local_108 = local_108 * dVar35;
                local_110 = local_110 * dVar35;
                local_118 = dVar35 * local_118;
                FUN_14481fd10(&local_278,&local_158);
                dVar35 = local_268 * local_268 + local_278 * local_278;
                dVar40 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
                auVar38._0_8_ = dVar35 + dVar40;
                auVar38._8_8_ = dVar35 + dVar40;
                auVar34._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
                auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
                auVar36 = sqrtpd(auVar38,auVar38);
                auVar45 = divpd(auVar45,auVar36);
                auVar46._0_8_ = auVar45._0_8_ * local_268;
                auVar46._8_8_ = auVar45._8_8_ * dStack_260;
                local_2f8 = (double)((ulonglong)(local_278 * auVar45._0_8_) &
                                    -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_));
                dStack_2f0 = (double)((ulonglong)(dStack_270 * auVar45._8_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_));
                local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar46,auVar34);
                local_2d8._8_8_ = uStack_f0;
                local_2d8._0_8_ = local_f8;
                local_2c8 = local_e8;
                dStack_2c0 = 0.0;
              }
              dVar35 = auVar5._8_8_ * auVar6._8_8_;
              local_2b8._8_4_ = SUB84(dVar11 * dVar12,0);
              local_2b8._0_8_ = dVar7 * dVar9;
              local_2b8._12_4_ = (int)((ulonglong)(dVar11 * dVar12) >> 0x20);
              local_2a8._8_4_ = SUB84(dVar35,0);
              local_2a8._0_8_ = dVar8 * dVar10;
              local_2a8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
              FUN_143f96646(&local_2f8,param_4);
            }
            break;
          }
          lVar31 = lVar31 + 0xb0;
          lVar32 = lVar32 + -0xb0;
        } while (lVar32 != 0);
      }
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148af19c0 FUN_148af19c0 body=2388 status=ok
// SIG undefined FUN_148af19c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148af19c0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  int iVar13;
  double *pdVar14;
  int iVar15;
  double *pdVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auVar26 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auStack_2c8 [32];
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined1 local_290 [4];
  undefined1 local_28c [4];
  undefined1 local_288 [8];
  longlong local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if (param_3 != 0) {
    local_2a0 = local_290;
    local_2a8 = local_288;
    cVar12 = FUN_148af0c7e(param_1,param_2,&local_280,local_28c);
    if ((cVar12 != '\0') && ((longlong)*(int *)(local_280 + 0x10) != 0)) {
      lVar19 = *(longlong *)(local_280 + 8);
      lVar22 = (longlong)*(int *)(local_280 + 0x10) * 0xb0;
      do {
        lVar18 = param_3;
        cVar12 = FUN_14069eaf4(lVar19);
        auVar39 = _DAT_149934d80;
        if (cVar12 != '\0') {
          if (lVar19 != 0) {
            pdVar16 = (double *)(*(longlong *)(param_3 + 0x1c8) + 0x240);
            pdVar14 = (double *)&DAT_14c846480;
            if (*(longlong *)(param_3 + 0x1c8) != 0) {
              pdVar14 = pdVar16;
            }
            auVar30 = *(undefined1 (*) [16])(pdVar14 + 8);
            dVar5 = auVar30._0_8_;
            dVar44 = auVar30._8_8_;
            auVar43 = *(undefined1 (*) [16])(pdVar14 + 10);
            dVar6 = auVar43._0_8_;
            auVar31 = *(undefined1 (*) [16])(lVar19 + 0x90);
            dVar42 = auVar31._0_8_;
            dVar3 = auVar31._8_8_;
            auVar41 = *(undefined1 (*) [16])(lVar19 + 0xa0);
            dVar24 = auVar41._0_8_;
            auVar30 = minpd(auVar31,auVar30);
            auVar34 = minpd(auVar41,auVar43);
            auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
            auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
            iVar15 = movmskpd((int)pdVar16,auVar31);
            auVar30._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
            auVar30._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
            uVar17 = movmskpd((int)lVar18,auVar30);
            if ((uVar17 & 0x3fffffff) == 0 && iVar15 == 0) {
              dVar32 = *(double *)(lVar19 + 0x50);
              dVar36 = *(double *)(lVar19 + 0x58);
              dVar37 = *(double *)(lVar19 + 0x60);
              dVar38 = *(double *)(lVar19 + 0x68);
              dVar9 = *pdVar14;
              dVar10 = pdVar14[1];
              dVar11 = pdVar14[2];
              dVar28 = pdVar14[3];
              dVar27 = pdVar14[3];
              dVar1 = pdVar14[1];
              dVar8 = pdVar14[1];
              dVar35 = pdVar14[2];
              dVar2 = pdVar14[2];
              dVar29 = dVar36 * dVar35 * -1.0 +
                       dVar37 * dVar1 + dVar38 * *pdVar14 * 1.0 + dVar32 * dVar28;
              dVar33 = dVar32 * dVar2 * 1.0 +
                       dVar38 * dVar8 + dVar37 * *pdVar14 * -1.0 + dVar36 * dVar27;
              auVar39._0_8_ =
                   dVar38 * dVar35 * 1.0 +
                   ((*pdVar14 * dVar36 * 1.0 + dVar37 * dVar28) - dVar32 * dVar1);
              auVar39._8_8_ =
                   dVar37 * dVar2 * -1.0 +
                   ((*pdVar14 * dVar32 * -1.0 + dVar38 * dVar27) - dVar36 * dVar8);
              dVar8 = *(double *)(lVar19 + 0x70) * dVar5;
              dVar1 = *(double *)(lVar19 + 0x78) * dVar44;
              dVar2 = *(double *)(lVar19 + 0x80) * dVar6;
              dVar32 = dVar1 * dVar9 - dVar10 * dVar8;
              dVar36 = dVar2 * dVar10 - dVar11 * dVar1;
              dVar35 = dVar8 * dVar11 - dVar9 * dVar2;
              dVar36 = dVar36 + dVar36;
              dVar35 = dVar35 + dVar35;
              dVar32 = dVar32 + dVar32;
              local_f8 = (dVar32 * dVar10 - dVar11 * dVar35) + dVar28 * dVar36 + dVar8 + pdVar14[4];
              dStack_f0 = (dVar36 * dVar11 - dVar32 * dVar9) + dVar27 * dVar35 + dVar1 + pdVar14[5];
              local_e8 = (dVar35 * dVar9 - dVar10 * dVar36) + dVar28 * dVar32 + dVar2 + pdVar14[6];
            }
            else {
              dVar1 = *pdVar14;
              dVar2 = pdVar14[1];
              dVar35 = pdVar14[2];
              dVar32 = dVar2 + dVar2;
              dVar36 = dVar35 + dVar35;
              dVar27 = dVar1 * (dVar1 + dVar1);
              local_188 = (1.0 - (dVar27 + dVar2 * dVar32)) * dVar6;
              dVar28 = pdVar14[3];
              dVar37 = dVar36 * dVar28;
              dVar38 = (dVar1 + dVar1) * pdVar14[3];
              dVar28 = dVar32 * dVar28;
              local_198 = (dVar28 + *pdVar14 * dVar36) * dVar6;
              dVar27 = (DAT_149934d80._8_8_ - (dVar35 * dVar36 + dVar27)) * dVar44;
              dVar8 = (dVar32 * dVar1 + dVar37) * dVar5;
              local_1a8 = (dVar36 * dVar2 + dVar38) * dVar44;
              dStack_190 = (dVar36 * dVar2 - dVar38) * dVar6;
              local_1c8 = (*pdVar14 * dVar36 - dVar28) * dVar5;
              local_1d8._8_4_ = SUB84(dVar8,0);
              local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar35 * dVar36 + dVar2 * dVar32)) * dVar5
              ;
              local_1d8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
              uStack_1c0 = 0;
              local_1b8._8_4_ = SUB84(dVar27,0);
              local_1b8._0_8_ = (dVar32 * dVar1 - dVar37) * dVar44;
              local_1b8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
              uStack_1a0 = 0;
              uStack_180 = 0;
              local_178 = pdVar14[4];
              dStack_170 = pdVar14[5];
              local_168 = pdVar14[6];
              uStack_160 = 0x3ff0000000000000;
              dVar1 = *(double *)(lVar19 + 0x50);
              dVar2 = *(double *)(lVar19 + 0x58);
              dVar35 = *(double *)(lVar19 + 0x60);
              dVar32 = dVar2 + dVar2;
              dVar36 = dVar35 + dVar35;
              dVar27 = dVar1 * (dVar1 + dVar1);
              local_208 = (1.0 - (dVar27 + dVar2 * dVar32)) * dVar24;
              dVar8 = *(double *)(lVar19 + 0x50) * dVar36;
              dVar28 = *(double *)(lVar19 + 0x68);
              dVar37 = dVar36 * dVar28;
              dVar38 = (dVar1 + dVar1) * *(double *)(lVar19 + 0x68);
              dVar28 = dVar32 * dVar28;
              local_218 = (dVar28 + dVar8) * dVar24;
              dStack_210 = (dVar36 * dVar2 - dVar38) * dVar24;
              local_258 = ((double)DAT_149934d80 - (dVar35 * dVar36 + dVar2 * dVar32)) * dVar42;
              dVar27 = (DAT_149934d80._8_8_ - (dVar35 * dVar36 + dVar27)) * dVar3;
              dStack_250 = (dVar32 * dVar1 + dVar37) * dVar42;
              local_228 = (dVar36 * dVar2 + dVar38) * dVar3;
              local_248 = (dVar8 - dVar28) * dVar42;
              uStack_240 = 0;
              local_238._8_4_ = SUB84(dVar27,0);
              local_238._0_8_ = (dVar32 * dVar1 - dVar37) * dVar3;
              local_238._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
              uStack_220 = 0;
              uStack_200 = 0;
              local_1f8 = *(undefined8 *)(lVar19 + 0x70);
              uStack_1f0 = *(undefined8 *)(lVar19 + 0x78);
              local_1e8 = *(undefined8 *)(lVar19 + 0x80);
              uStack_1e0 = 0x3ff0000000000000;
              FUN_1447fea8d(local_158);
              FUN_144a1c686(local_158,0x3e45798ee0000000);
              auVar34._8_8_ = -(ulonglong)(0.0 <= dVar44 * dVar3);
              auVar34._0_8_ = -(ulonglong)(0.0 <= dVar5 * dVar42);
              auVar30 = blendvpd(_DAT_149936790,auVar39,auVar34);
              uVar23 = -(ulonglong)(0.0 <= dVar6 * dVar24);
              dVar28 = (double)(~uVar23 & 0xbff0000000000000 | uVar23 & 0x3ff0000000000000);
              dVar27 = auVar30._0_8_;
              local_148 = local_148 * dVar27;
              local_158._8_8_ = (double)local_158._8_8_ * dVar27;
              local_158._0_8_ = (double)local_158._0_8_ * dVar27;
              dVar27 = auVar30._8_8_;
              local_128 = local_128 * dVar27;
              dStack_130 = dStack_130 * dVar27;
              local_138 = dVar27 * local_138;
              local_108 = local_108 * dVar28;
              dStack_110 = dStack_110 * dVar28;
              local_118 = dVar28 * local_118;
              pdVar16 = &local_278;
              pdVar14 = (double *)FUN_14481fd10(pdVar16,local_158);
              iVar15 = (int)pdVar16;
              dVar28 = local_268 * local_268 + local_278 * local_278;
              dVar27 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
              auVar26._0_8_ = dVar28 + dVar27;
              auVar26._8_8_ = dVar28 + dVar27;
              auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
              auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
              auVar30 = sqrtpd(auVar26,auVar26);
              auVar39 = divpd(auVar39,auVar30);
              auVar40._0_8_ = auVar39._0_8_ * local_268;
              auVar40._8_8_ = auVar39._8_8_ * dStack_260;
              dVar29 = (double)((ulonglong)(local_278 * auVar39._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
              dVar33 = (double)((ulonglong)(dStack_270 * auVar39._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_));
              auVar39 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar25);
            }
            dVar28 = auVar43._8_8_ * auVar41._8_8_;
            dVar44 = dVar44 * dVar3;
            dVar6 = dVar6 * dVar24;
            dVar24 = ABS(dVar5 * dVar42);
            auVar43._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar44));
            auVar43._0_8_ = -(ulonglong)(9.99999993922529e-09 < dVar24);
            iVar13 = movmskpd((int)pdVar14,auVar43);
            auVar41._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar28));
            auVar41._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar6));
            uVar17 = movmskpd(iVar15,auVar41);
            if ((uVar17 & 0x3fffffff) == 0 && iVar13 == 0) {
              puVar20 = &DAT_14c846480;
              puVar21 = (undefined8 *)local_158;
              for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
                *puVar21 = *puVar20;
                puVar20 = puVar20 + 1;
                puVar21 = puVar21 + 1;
              }
            }
            else {
              auVar7._8_4_ = SUB84(dVar44,0);
              auVar7._0_8_ = dVar5 * dVar42;
              auVar7._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
              auVar43 = divpd(_DAT_149934d80,auVar7);
              auVar4._8_4_ = SUB84(dVar28,0);
              auVar4._0_8_ = dVar6;
              auVar4._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
              auVar30 = divpd(ZEXT816(0x3ff0000000000000),auVar4);
              local_118 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar24) & auVar43._0_8_);
              dStack_110 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar44)) & auVar43._8_8_
                                   );
              local_108 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar6)) & auVar30._0_8_);
              local_148 = auVar39._0_8_ * -1.0;
              dStack_140 = auVar39._8_8_ * 1.0;
              dVar5 = -dVar29;
              dVar6 = -dVar33;
              local_f8 = local_f8 * local_118;
              dStack_f0 = dStack_f0 * dStack_110;
              local_e8 = local_e8 * local_108;
              dVar42 = dStack_f0 * dVar5 - local_f8 * dVar6;
              dVar44 = local_e8 * dVar6 - dStack_f0 * local_148;
              dVar24 = local_f8 * local_148 - dVar5 * local_e8;
              dVar44 = dVar44 + dVar44;
              dVar24 = dVar24 + dVar24;
              dVar42 = dVar42 + dVar42;
              local_138 = 0.0 - ((dVar42 * dVar6 - dVar24 * local_148) +
                                dStack_140 * dVar44 + local_f8);
              dStack_130 = 0.0 - (dVar42 * dVar29 + local_148 * dVar44 +
                                 dStack_140 * dVar24 + dStack_f0);
              local_128 = 0.0 - (dStack_140 * dVar42 + local_e8 + (dVar24 * dVar5 - dVar44 * dVar6))
              ;
              local_158._8_4_ = SUB84(dVar33,0);
              local_158._0_8_ = dVar5;
              local_158._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
              uStack_120 = 0;
              uStack_100 = 0;
            }
            FUN_143f96646(local_158,param_4);
          }
          break;
        }
        lVar19 = lVar19 + 0xb0;
        lVar22 = lVar22 + -0xb0;
      } while (lVar22 != 0);
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148af2316 FUN_148af2316 body=578 status=ok
// SIG undefined FUN_148af2316(void)

undefined8
FUN_148af2316(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
             longlong *param_5,longlong param_6,undefined4 param_7,undefined1 *param_8,
             undefined8 param_9,undefined1 *param_10,undefined1 param_11)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 in_RDX;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [4];
  undefined4 local_d4;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_150 = local_d8;
  local_158 = local_d0;
  cVar1 = FUN_148af0c7e(param_1,in_RDX,&local_c8,&local_d4);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    (**(code **)(*param_5 + 0x80))(param_5,&local_c0);
    local_118 = DAT_14c8464f0 + *(double *)(param_6 + 0x30);
    local_120 = DAT_14c8464e8 + *(double *)(param_6 + 0x28);
    local_128 = DAT_14c8464e0 + *(double *)(param_6 + 0x20);
    local_100 = (local_98 - local_b0) + local_118;
    local_108 = (local_a0 - local_b8) + local_120;
    local_110 = (local_a8 - local_c0) + local_128;
    local_118 = local_118 - (local_98 - local_b0);
    local_120 = local_120 - (local_a0 - local_b8);
    local_128 = local_128 - (local_a8 - local_c0);
    local_f8 = CONCAT71(local_f8._1_7_,1);
    local_138 = local_c8;
    local_12c = local_d4;
    uStack_e0 = CONCAT71(uStack_e0._1_7_,param_4);
    local_148 = param_11;
    local_150 = param_10;
    local_158 = param_8;
    local_130 = param_2;
    FUN_144b269fc(&uStack_f0,param_7,param_8[0x10],param_9);
    local_158 = param_8;
    uVar2 = FUN_143f9cb58(param_3,&local_138,param_5,param_6);
  }
  if ((local_90 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af255a FUN_148af255a body=45 status=ok
// SIG undefined FUN_148af255a(void)

longlong FUN_148af255a(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145b09154(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148af258a FUN_148af258a body=63 status=ok
// SIG undefined FUN_148af258a(void)

void FUN_148af258a(longlong param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  if (param_2 != 0) {
    pbVar2 = (byte *)(param_1 + 0x80);
    do {
      bVar1 = *pbVar2;
      if (((bVar1 & 1) != 0) && (*pbVar2 = bVar1 & 0xfe, (bVar1 & 2) == 0)) {
        FUN_1400020a8(*(undefined8 *)(pbVar2 + -0x80));
      }
      pbVar2 = pbVar2 + 0x88;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148af25ca FUN_148af25ca body=31 status=ok
// SIG undefined FUN_148af25ca(void)

undefined8 FUN_148af25ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148af2606 FUN_148af2606 body=93 status=ok
// SIG undefined FUN_148af2606(void)

void FUN_148af2606(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b52a980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af2664 FUN_148af2664 body=126 status=ok
// SIG undefined FUN_148af2664(void)

void FUN_148af2664(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b52a980;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148af26d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148af26e2 FUN_148af26e2 body=21 status=ok
// SIG undefined FUN_148af26e2(void)

undefined8 FUN_148af26e2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148af26f8 FUN_148af26f8 body=99 status=ok
// SIG undefined FUN_148af26f8(void)

undefined8 * FUN_148af26f8(undefined8 *param_1,int param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  ppuVar1 = &PTR_FUN_14b52aa30;
  *param_1 = &PTR_FUN_14b52aa30;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    do {
      lVar2 = *(longlong *)(lVar2 + 8);
      FUN_1400020a8();
      param_1[1] = lVar2;
    } while (lVar2 != 0);
    ppuVar1 = (undefined **)*param_1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  (*(code *)ppuVar1[1])(param_1,0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148af275c FUN_148af275c body=31 status=ok
// SIG undefined FUN_148af275c(void)

undefined8 FUN_148af275c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148af2794 FUN_148af2794 body=101 status=ok
// SIG undefined FUN_148af2794(void)

void FUN_148af2794(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b52aab0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b52aa40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148af27fa FUN_148af27fa body=101 status=ok
// SIG undefined FUN_148af27fa(void)

void FUN_148af27fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b52aab0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b52aa40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148af2860 FUN_148af2860 body=134 status=ok
// SIG undefined FUN_148af2860(void)

void FUN_148af2860(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b52aab0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b52aa40;
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
                    /* WARNING: Could not recover jumptable at 0x000148af28d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148af28fa FUN_148af28fa body=132 status=ok
// SIG undefined FUN_148af28fa(void)

void FUN_148af28fa(longlong param_1,int param_2)

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



// FUNCTION 148af2980 FUN_148af2980 body=48 status=ok
// SIG undefined FUN_148af2980(void)

void FUN_148af2980(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xb0,0x10);
  }
  return;
}



// FUNCTION 148af29b0 FUN_148af29b0 body=95 status=ok
// SIG undefined FUN_148af29b0(void)

void FUN_148af29b0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 148af2a10 FUN_148af2a10 body=132 status=ok
// SIG undefined FUN_148af2a10(void)

void FUN_148af2a10(longlong param_1,int param_2)

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



// FUNCTION 148af2a96 FUN_148af2a96 body=253 status=ok
// SIG undefined FUN_148af2a96(void)

void FUN_148af2a96(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar5 = (longlong)(int)uVar1;
  if (lVar5 != 0) {
    lVar2 = *param_1;
    uVar13 = 0;
    bVar12 = *(longlong *)(lVar2 + 8) == *(longlong *)(*param_2 + 8);
    uVar9 = 0;
    do {
      uVar8 = (ulonglong)uVar9;
      uVar6 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar1) {
        uVar6 = uVar1;
      }
      lVar4 = uVar8 * 0x10;
      plVar7 = (longlong *)(lVar2 + 0x18 + lVar4);
      uVar10 = uVar9;
      do {
        uVar8 = uVar8 + 1;
        uVar11 = uVar6;
        if (lVar5 <= (longlong)uVar8) break;
        lVar3 = *plVar7;
        uVar10 = uVar10 + 1;
        plVar7 = plVar7 + 2;
        uVar11 = uVar10;
      } while (bVar12 == (lVar3 == *(longlong *)(*param_2 + 8)));
      if (bVar12 == false) {
        if (uVar13 != uVar9) {
          memmove((void *)((longlong)(int)uVar13 * 0x10 + lVar2),(void *)(lVar4 + lVar2),
                  (longlong)(int)(uVar11 - uVar9) << 4);
        }
        uVar13 = uVar13 + (uVar11 - uVar9);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      uVar9 = uVar11;
    } while ((longlong)uVar8 < lVar5);
    *(uint *)(param_1 + 1) = uVar13;
  }
  return;
}



// FUNCTION 148af2b94 FUN_148af2b94 body=62 status=ok
// SIG undefined FUN_148af2b94(void)

void FUN_148af2b94(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148af2bd2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148af2bd2 FUN_148af2bd2 body=93 status=ok
// SIG undefined FUN_148af2bd2(void)

ulonglong FUN_148af2bd2(uint param_1,uint param_2)

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



// FUNCTION 148af2c2f FUN_148af2c2f body=11 status=ok
// SIG undefined FUN_148af2c2f(void)

void FUN_148af2c2f(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 148af2c3a FUN_148af2c3a body=132 status=ok
// SIG undefined FUN_148af2c3a(void)

void FUN_148af2c3a(longlong param_1,int param_2)

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



// FUNCTION 148af2cc0 FUN_148af2cc0 body=53 status=ok
// SIG undefined FUN_148af2cc0(void)

ulonglong FUN_148af2cc0(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 148af2cf5 FUN_148af2cf5 body=933 status=ok
// SIG undefined FUN_148af2cf5(void)

void FUN_148af2cf5(longlong param_1,uint param_2)

{
  void *pvVar1;
  float fVar2;
  byte bVar3;
  void *_Src;
  int iVar4;
  void *pvVar5;
  void *_Src_00;
  longlong *plVar6;
  void *pvVar7;
  uint uVar8;
  void *pvVar9;
  void *pvVar10;
  float fVar11;
  undefined1 auStack_478 [40];
  longlong *local_450;
  longlong local_448;
  longlong local_440;
  undefined4 local_438 [188];
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_478;
  if (1 < (int)param_2) {
    memset(local_438,0,0x2f0);
    local_440 = (ulonglong)param_2 * 0x100 + param_1 + -0x100;
    local_448 = param_1;
    fVar11 = logf((float)(int)param_2);
    local_438[0] = (int)(longlong)(fVar11 + fVar11);
    plVar6 = &local_448;
    do {
      _Src = (void *)*plVar6;
      _Src_00 = (void *)plVar6[1];
      iVar4 = (int)plVar6[2];
      uVar8 = (int)((ulonglong)((longlong)_Src_00 - (longlong)_Src) >> 8) + 1;
      local_450 = plVar6;
      if (iVar4 != 0) {
LAB_148af2dca:
        plVar6 = local_450;
        if (8 < (int)uVar8) {
          pvVar9 = (void *)((ulonglong)(uVar8 >> 1) * 0x100 + (longlong)_Src);
          memcpy(local_148,pvVar9,0x100);
          memcpy(pvVar9,_Src,0x100);
          memcpy(_Src,local_148,0x100);
          pvVar9 = (void *)((longlong)_Src_00 + 0x100);
          pvVar7 = _Src;
          do {
            pvVar7 = (void *)((longlong)pvVar7 + 0x100);
            if (pvVar7 <= _Src_00) {
              fVar11 = *(float *)((longlong)_Src + 4);
              do {
                fVar2 = *(float *)((longlong)pvVar7 + 4);
                if ((fVar11 != fVar2) || (NAN(fVar11) || NAN(fVar2))) {
                  if (fVar11 < fVar2) break;
                }
                else if (((*(byte *)((longlong)_Src + 0xad) & 1) == 0) ||
                        ((*(byte *)((longlong)pvVar7 + 0xad) & 1) != 0)) break;
                pvVar7 = (void *)((longlong)pvVar7 + 0x100);
              } while (pvVar7 <= _Src_00);
            }
            pvVar10 = (void *)((longlong)pvVar9 - 0x100);
            pvVar5 = pvVar9;
            if (_Src < pvVar10) {
              fVar11 = *(float *)((longlong)_Src + 4);
              do {
                fVar2 = *(float *)((longlong)pvVar10 + 4);
                if ((fVar2 != fVar11) || (NAN(fVar2) || NAN(fVar11))) {
                  if (fVar2 < fVar11) {
                    pvVar5 = (void *)((longlong)pvVar10 + 0x100);
                    break;
                  }
                }
                else {
                  pvVar5 = pvVar9;
                  if (((*(byte *)((longlong)pvVar10 + 0xad) & 1) == 0) ||
                     ((*(byte *)((longlong)_Src + 0xad) & 1) != 0)) break;
                }
                pvVar1 = (void *)((longlong)pvVar10 - 0x100);
                pvVar5 = pvVar10;
                pvVar9 = pvVar10;
                pvVar10 = pvVar1;
              } while (_Src < pvVar1);
            }
            pvVar9 = pvVar10;
            if (pvVar9 < pvVar7) goto LAB_148af2f0a;
            memcpy(local_148,pvVar7,0x100);
            memcpy(pvVar7,pvVar9,0x100);
            memcpy(pvVar9,local_148,0x100);
          } while( true );
        }
        for (; pvVar9 = _Src, pvVar7 = _Src, _Src < _Src_00;
            _Src_00 = (void *)((longlong)_Src_00 + -0x100)) {
          while (pvVar10 = pvVar9, pvVar9 = (void *)((longlong)pvVar7 + 0x100), pvVar9 <= _Src_00) {
            fVar11 = *(float *)((longlong)pvVar10 + 4);
            fVar2 = *(float *)((longlong)pvVar7 + 0x104);
            if ((fVar11 != fVar2) || (NAN(fVar11) || NAN(fVar2))) {
              bVar3 = fVar11 < fVar2;
            }
            else {
              bVar3 = (*(byte *)((longlong)pvVar10 + 0xad) & 1) == 0 |
                      *(byte *)((longlong)pvVar7 + 0x1ad);
            }
            pvVar7 = pvVar9;
            if ((bVar3 & 1) == 0) {
              pvVar9 = pvVar10;
            }
          }
          memcpy(local_148,pvVar10,0x100);
          memcpy(pvVar10,_Src_00,0x100);
          memcpy(_Src_00,local_148,0x100);
        }
        goto LAB_148af2fd3;
      }
LAB_148af2fc3:
      FUN_148af309b(_Src,uVar8);
      plVar6 = local_450;
LAB_148af2fd3:
      plVar6 = plVar6 + -3;
    } while (&local_448 <= plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148af2f0a:
  memcpy(local_148,_Src,0x100);
  memcpy(_Src,pvVar9,0x100);
  memcpy(pvVar9,local_148,0x100);
  iVar4 = iVar4 + -1;
  pvVar5 = (void *)((longlong)pvVar5 - 0x200);
  if ((longlong)pvVar5 - (longlong)_Src < (longlong)_Src_00 - (longlong)pvVar7) {
    if (pvVar7 < _Src_00) {
      *local_450 = (longlong)pvVar7;
      local_450[1] = (longlong)_Src_00;
      *(int *)(local_450 + 2) = iVar4;
      local_450 = local_450 + 3;
    }
    plVar6 = local_450;
    if (pvVar9 <= (void *)((longlong)_Src + 0x100U)) goto LAB_148af2fd3;
  }
  else {
    if ((void *)((longlong)_Src + 0x100U) < pvVar9) {
      *local_450 = (longlong)_Src;
      local_450[1] = (longlong)pvVar5;
      *(int *)(local_450 + 2) = iVar4;
      local_450 = local_450 + 3;
    }
    pvVar5 = _Src_00;
    plVar6 = local_450;
    _Src = pvVar7;
    if (_Src_00 <= pvVar7) goto LAB_148af2fd3;
  }
  uVar8 = (int)((ulonglong)((longlong)pvVar5 - (longlong)_Src) >> 8) + 1;
  _Src_00 = pvVar5;
  if (iVar4 == 0) goto LAB_148af2fc3;
  goto LAB_148af2dca;
}



// FUNCTION 148af309b FUN_148af309b body=825 status=ok
// SIG undefined FUN_148af309b(void)

void FUN_148af309b(void *param_1,uint param_2)

{
  void *pvVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_168 [40];
  undefined1 local_140 [256];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_2 != 0) {
    iVar9 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar4 = iVar9;
joined_r0x000148af30ec:
    do {
      iVar10 = iVar9 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar5 = iVar9 * 2 + 2;
        if (iVar5 < (int)param_2) {
          fVar2 = *(float *)((longlong)param_1 + (longlong)iVar5 * 0x100 + 4);
          fVar3 = *(float *)((longlong)param_1 + (longlong)iVar10 * 0x100 + 4);
          if ((fVar2 != fVar3) || (NAN(fVar2) || NAN(fVar3))) {
            bVar7 = fVar2 < fVar3;
          }
          else {
            bVar7 = (*(byte *)((longlong)param_1 + (longlong)iVar5 * 0x100 + 0xad) & 1) == 0 |
                    *(byte *)((longlong)param_1 + (longlong)iVar10 * 0x100 + 0xad);
          }
          if ((bVar7 & 1) == 0) {
            iVar10 = iVar5;
          }
        }
        pvVar6 = (void *)((longlong)param_1 + (longlong)iVar9 * 0x100);
        pvVar1 = (void *)((longlong)param_1 + (longlong)iVar10 * 0x100);
        fVar2 = *(float *)((longlong)param_1 + (longlong)iVar9 * 0x100 + 4);
        fVar3 = *(float *)((longlong)param_1 + (longlong)iVar10 * 0x100 + 4);
        if ((fVar2 != fVar3) || (NAN(fVar2) || NAN(fVar3))) {
          if (fVar2 < fVar3) goto LAB_148af3197;
        }
        else if (((*(byte *)((longlong)pvVar6 + 0xad) & 1) == 0) ||
                ((*(byte *)((longlong)pvVar1 + 0xad) & 1) != 0)) {
LAB_148af3197:
          memcpy(local_140,pvVar6,0x100);
          memcpy(pvVar6,pvVar1,0x100);
          memcpy(pvVar1,local_140,0x100);
          iVar9 = iVar10;
          goto joined_r0x000148af30ec;
        }
      }
      bVar12 = iVar4 != 0;
      iVar9 = iVar4 + -1;
      iVar4 = iVar9;
    } while (bVar12);
    if (1 < (int)param_2) {
      pvVar6 = (void *)(((ulonglong)param_2 - 1) * 0x100 + (longlong)param_1);
      memcpy(local_140,param_1,0x100);
      memcpy(param_1,pvVar6,0x100);
      memcpy(pvVar6,local_140,0x100);
      if (param_2 != 2) {
        uVar11 = (ulonglong)param_2 - 1;
        do {
          iVar4 = 0;
          iVar9 = 1;
          iVar10 = 0;
          do {
            iVar4 = iVar4 + 2;
            iVar5 = iVar9;
            if ((longlong)iVar4 < (longlong)uVar11) {
              lVar8 = (longlong)iVar4 * 0x100;
              fVar2 = *(float *)((longlong)param_1 + lVar8 + 4);
              fVar3 = *(float *)((longlong)param_1 + (longlong)iVar9 * 0x100 + 4);
              if ((fVar2 != fVar3) || (NAN(fVar2) || NAN(fVar3))) {
                bVar7 = fVar2 < fVar3;
              }
              else {
                bVar7 = (*(byte *)((longlong)param_1 + lVar8 + 0xad) & 1) == 0 |
                        *(byte *)((longlong)param_1 + (longlong)iVar9 * 0x100 + 0xad);
              }
              if ((bVar7 & 1) == 0) {
                iVar5 = iVar4;
              }
            }
            pvVar6 = (void *)((longlong)param_1 + (longlong)iVar10 * 0x100);
            pvVar1 = (void *)((longlong)param_1 + (longlong)iVar5 * 0x100);
            fVar2 = *(float *)((longlong)param_1 + (longlong)iVar10 * 0x100 + 4);
            fVar3 = *(float *)((longlong)param_1 + (longlong)iVar5 * 0x100 + 4);
            if ((fVar2 != fVar3) || (NAN(fVar2) || NAN(fVar3))) {
              if (fVar3 <= fVar2) break;
            }
            else if (((*(byte *)((longlong)pvVar6 + 0xad) & 1) != 0) &&
                    ((*(byte *)((longlong)pvVar1 + 0xad) & 1) == 0)) break;
            memcpy(local_140,pvVar6,0x100);
            memcpy(pvVar6,pvVar1,0x100);
            memcpy(pvVar1,local_140,0x100);
            iVar4 = iVar5 * 2;
            iVar9 = iVar5 * 2 + 1;
            iVar10 = iVar5;
          } while ((longlong)iVar9 < (longlong)uVar11);
          pvVar6 = (void *)((uVar11 - 1) * 0x100 + (longlong)param_1);
          memcpy(local_140,param_1,0x100);
          memcpy(param_1,pvVar6,0x100);
          memcpy(pvVar6,local_140,0x100);
          bVar12 = 2 < uVar11;
          uVar11 = uVar11 - 1;
        } while (bVar12);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148af33d6 FUN_148af33d6 body=164 status=ok
// SIG undefined FUN_148af33d6(void)

void FUN_148af33d6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_148afc388(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af348a FUN_148af348a body=134 status=ok
// SIG undefined FUN_148af348a(void)

void FUN_148af348a(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = *(longlong **)(param_1 + 0x90);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = *(undefined4 *)(param_1 + 0x98);
  FUN_140008f88(param_3,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af352a FUN_148af352a body=131 status=ok
// SIG undefined FUN_148af352a(void)

void FUN_148af352a(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = *(longlong **)(param_1 + 0x78);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = *(undefined4 *)(param_1 + 0x80);
  FUN_140008f88(param_3,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af35c8 FUN_148af35c8 body=107 status=ok
// SIG undefined FUN_148af35c8(void)

void FUN_148af35c8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143f9df28(param_1,local_28);
  FUN_140008f88(param_3,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af3654 FUN_148af3654 body=134 status=ok
// SIG undefined FUN_148af3654(void)

void FUN_148af3654(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = *(longlong **)(param_1 + 0xa0);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = *(undefined4 *)(param_1 + 0xa8);
  FUN_140008f88(param_3,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af36ea FUN_148af36ea body=92 status=ok
// SIG undefined FUN_148af36ea(void)

void FUN_148af36ea(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb99e10);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af3748 FUN_148af3748 body=92 status=ok
// SIG undefined FUN_148af3748(void)

void FUN_148af3748(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb99e20);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af37c4 FUN_148af37c4 body=99 status=ok
// SIG undefined FUN_148af37c4(void)

undefined8 FUN_148af37c4(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  uVar1 = FUN_14477b072(param_1,DAT_14cb99e78);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af384a FUN_148af384a body=156 status=ok
// SIG undefined FUN_148af384a(void)

void FUN_148af384a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148af95bc(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af38e8 FUN_148af38e8 body=93 status=ok
// SIG undefined FUN_148af38e8(void)

void FUN_148af38e8(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb99ee0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af3946 FUN_148af3946 body=93 status=ok
// SIG undefined FUN_148af3946(void)

void FUN_148af3946(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb99ef0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af39a8 FUN_148af39a8 body=171 status=ok
// SIG undefined FUN_148af39a8(void)

void FUN_148af39a8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_30);
  plVar2 = local_30;
  plVar1 = (longlong *)*param_2;
  if (local_30 != plVar1) {
    local_30 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_28 = (undefined4)param_2[1];
  uVar3 = FUN_14477b072(param_1,DAT_14cb99f18);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af3a58 FUN_148af3a58 body=171 status=ok
// SIG undefined FUN_148af3a58(void)

void FUN_148af3a58(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_30);
  plVar2 = local_30;
  plVar1 = (longlong *)*param_2;
  if (local_30 != plVar1) {
    local_30 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_28 = (undefined4)param_2[1];
  uVar3 = FUN_14477b072(param_1,DAT_14cb99f40);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af3b0c FUN_148af3b0c body=66 status=ok
// SIG undefined FUN_148af3b0c(void)

void FUN_148af3b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af3b5c FUN_148af3b5c body=91 status=ok
// SIG undefined FUN_148af3b5c(void)

void FUN_148af3b5c(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb99fd0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af3bda FUN_148af3bda body=37 status=ok
// SIG undefined FUN_148af3bda(void)

void FUN_148af3bda(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148afb4c8();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148af3c20 FUN_148af3c20 body=263 status=ok
// SIG undefined FUN_148af3c20(void)

void FUN_148af3c20(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar2 = &local_29;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148afb4f0(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af3d46 FUN_148af3d46 body=156 status=ok
// SIG undefined FUN_148af3d46(void)

void FUN_148af3d46(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148afb5e6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af3de4 FUN_148af3de4 body=180 status=ok
// SIG undefined FUN_148af3de4(void)

void FUN_148af3de4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148afb662(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af3e9a FUN_148af3e9a body=142 status=ok
// SIG undefined FUN_148af3e9a(void)

void FUN_148af3e9a(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14477b072(param_1,DAT_14cb9a048);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_21 = (undefined1)param_2;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000148af3f29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x4e8))(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af3f36 FUN_148af3f36 body=162 status=ok
// SIG undefined FUN_148af3f36(void)

void FUN_148af3f36(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x4e8))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af3fe0 FUN_148af3fe0 body=41 status=ok
// SIG undefined FUN_148af3fe0(void)

void FUN_148af3fe0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x328))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148af400a FUN_148af400a body=41 status=ok
// SIG undefined FUN_148af400a(void)

void FUN_148af400a(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 800))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148af4034 FUN_148af4034 body=121 status=ok
// SIG undefined FUN_148af4034(void)

void FUN_148af4034(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x330))(param_1,&local_28);
  FUN_140a6ab98(param_3,&local_28);
  FUN_1401b9920(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af40e0 FUN_148af40e0 body=245 status=ok
// SIG undefined FUN_148af40e0(void)

void FUN_148af40e0(undefined8 *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)*param_1)(param_1,local_28,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af41f4 FUN_148af41f4 body=456 status=ok
// SIG undefined FUN_148af41f4(void)

void FUN_148af41f4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  int local_70;
  undefined4 uStack_6c;
  longlong local_68 [3];
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    local_68[2] = 0;
    uStack_50 = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    FUN_146a212b8(&local_78);
    plVar6 = local_78;
    uVar7 = FUN_1447a1f4a(param_1 + 0x90);
    (**(code **)(*plVar6 + 8))(plVar6,local_68 + 2,uVar7,local_68);
    plVar6 = (longlong *)CONCAT44(uStack_6c,local_70);
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
    local_88 = param_1;
    FUN_1446f8bcc(param_1 + 0xf8,0);
    if ((longlong)(int)uStack_50 != 0) {
      local_80 = local_68[2] + (longlong)(int)uStack_50 * 0x18;
      lVar10 = local_68[2];
      do {
        iVar3 = *(int *)(lVar10 + 0x10);
        if ((longlong)iVar3 != 0) {
          lVar5 = *(longlong *)(lVar10 + 8);
          lVar11 = 0;
          do {
            if (*(int *)(lVar5 + 8 + lVar11) < 2) {
              iVar8 = *(int *)(lVar5 + 0x10 + lVar11);
              iVar9 = *(int *)(lVar5 + 0x14 + lVar11) - iVar8;
LAB_148af431d:
              FUN_144a63a7c(local_68,&local_78,iVar8,iVar9);
              iVar8 = local_70 + -1;
              if (local_70 == 0) {
                iVar8 = 0;
              }
              thunk_FUN_1400020e8(param_1 + 0xf8,local_78,iVar8);
              if (local_78 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              iVar8 = *(int *)(lVar5 + 0x18 + lVar11);
              iVar4 = *(int *)(lVar5 + 0x1c + lVar11);
              iVar9 = iVar4 - iVar8;
              if (iVar9 != 0 && iVar8 <= iVar4) goto LAB_148af431d;
            }
            lVar11 = lVar11 + 0x70;
          } while ((longlong)iVar3 * 0x70 - lVar11 != 0);
        }
        lVar10 = lVar10 + 0x18;
      } while (lVar10 != local_80);
    }
    *(undefined1 *)(local_88 + 0xf0) = 0;
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    FUN_146a49847(local_68[2],uStack_50 & 0xffffffff);
    if (local_68[2] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148af43be FUN_148af43be body=50 status=ok
// SIG undefined FUN_148af43be(void)

longlong * FUN_148af43be(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  return param_2;
}



// FUNCTION 148af43f0 FUN_148af43f0 body=127 status=ok
// SIG undefined FUN_148af43f0(void)

void FUN_148af43f0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if ((*(int *)(param_1 + 0x170) != 0) && (*(longlong **)(param_1 + 0x168) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x30))();
    if (cVar2 != '\0') {
      if ((*(int *)(param_1 + 0x170) != 0) &&
         (plVar1 = *(longlong **)(param_1 + 0x168), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x60))(plVar1,param_1,*(undefined8 *)(param_1 + 0x58));
      }
      goto LAB_148af4439;
    }
  }
  FUN_148af6256(param_1 + 0x138,param_1,*(undefined8 *)(param_1 + 0x160));
LAB_148af4439:
  if (*(char *)(param_1 + 0x178) != '\x01') {
    return;
  }
  FUN_1459ca14e(param_1,0);
  return;
}



// FUNCTION 148af4470 FUN_148af4470 body=479 status=ok
// SIG undefined FUN_148af4470(void)

void FUN_148af4470(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  void *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x140) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x138);
    plVar1 = plVar6 + *(int *)(param_1 + 0x140);
    do {
      plVar3 = (longlong *)*plVar6;
      if (plVar3 == (longlong *)0x0) {
LAB_148af45d2:
        cVar4 = FUN_148af4650(param_2,plVar3);
        if (cVar4 != '\0') {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_148af6306(param_3,iVar2);
          }
          *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        }
      }
      else {
        lVar5 = FUN_14143f53e();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30)) goto LAB_148af45d2;
        lVar5 = FUN_140febe0e();
        if ((*(int *)(plVar3[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
            lVar5 + 0x30)) goto LAB_148af45d2;
        local_68 = (void *)0x0;
        uStack_60 = 0;
        (**(code **)(*plVar3 + 0x2f0))(plVar3,param_2,&local_68);
        if (0 < (int)(uint)uStack_60) {
          if ((longlong)*(int *)(param_2 + 0x388) != 0) {
            lVar5 = 0;
            do {
              uVar7 = (uint)uStack_60;
              if (*(longlong **)(*(longlong *)(param_2 + 0x380) + lVar5) == plVar3)
              goto LAB_148af457e;
              lVar5 = lVar5 + 8;
            } while ((longlong)*(int *)(param_2 + 0x388) * 8 != lVar5);
          }
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_148af6306(param_3,iVar2);
          }
          *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
          uVar7 = (uint)uStack_60;
LAB_148af457e:
          if (uVar7 != 0) {
            iVar2 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar2 + uVar7;
            if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar2) < uVar7) {
              FUN_148af6306(param_3,iVar2);
            }
            memcpy((void *)((longlong)iVar2 * 8 + *param_3),local_68,(longlong)(int)uVar7 << 3);
          }
        }
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148af4650 FUN_148af4650 body=210 status=ok
// SIG undefined FUN_148af4650(void)

undefined8 FUN_148af4650(char *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_38 [32];
  undefined **local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((((param_1[1] != '\0') || ((*(byte *)(param_2 + 0x110) & 1) != 0)) &&
      ((*param_1 != '\0' || ((*(byte *)(param_2 + 0x110) & 2) != 0)))) &&
     ((param_1[2] != '\0' || ((*(byte *)(param_2 + 0x110) & 4) != 0)))) {
    if ((longlong)*(int *)(param_1 + 0x398) < 1) {
LAB_148af46ff:
      local_18 = &PTR_FUN_14b538520;
      local_10 = param_2;
      uVar3 = FUN_14018838c(param_1 + 8,&local_18);
      goto LAB_148af4674;
    }
    lVar4 = (longlong)*(int *)(param_1 + 0x398) * 8;
    lVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x390) + lVar1) == param_2) goto LAB_148af46ff;
      lVar1 = lVar1 + 8;
    } while (lVar4 != lVar1);
    lVar1 = *(longlong *)(param_2 + 0x60);
    if (lVar1 != 0) {
      do {
        lVar2 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x390) + lVar2) == lVar1) goto LAB_148af46ff;
          lVar2 = lVar2 + 8;
        } while (lVar4 != lVar2);
        lVar1 = *(longlong *)(lVar1 + 0x60);
        uVar3 = 0;
      } while (lVar1 != 0);
      goto LAB_148af4674;
    }
  }
  uVar3 = 0;
LAB_148af4674:
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 148af4774 FUN_148af4774 body=246 status=ok
// SIG undefined FUN_148af4774(void)

void FUN_148af4774(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x398);
  *(uint *)(param_1 + 0x398) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x39c) < iVar1 + 1U) {
    FUN_1410e6f7a((longlong *)(param_1 + 0x390),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x390) + (longlong)iVar1 * 8) = param_2;
  if (DAT_14c950c29 == 1 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x388);
  *(uint *)(param_1 + 0x388) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x38c) < iVar1 + 1U) {
    FUN_1410e6f7a((longlong *)(param_1 + 0x380),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x380) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
    return;
  }
  return;
}



// FUNCTION 148af486a FUN_148af486a body=133 status=ok
// SIG undefined FUN_148af486a(void)

void FUN_148af486a(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 8),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar3 + lVar4);
  *(undefined8 *)(lVar3 + lVar4) = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(lVar3 + 8 + lVar4) = iVar2;
  if ((longlong)iVar2 != 0) {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  return;
}



// FUNCTION 148af48f4 FUN_148af48f4 body=225 status=ok
// SIG undefined FUN_148af48f4(void)

undefined8 * FUN_148af48f4(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x330))(param_1,&local_30);
  uVar2 = (**(code **)(*param_1 + 800))(param_1);
  if ((-1 < (int)uVar2) && ((int)uVar2 < local_28)) {
    puVar3 = (undefined8 *)FUN_1467cf004((ulonglong)uVar2 * 0x10 + local_30);
    if (puVar3 != (undefined8 *)0x0) {
      *param_2 = 0;
      iVar1 = *(int *)(puVar3 + 1);
      _Src = (void *)*puVar3;
      *(int *)(param_2 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_2,iVar1,0);
        memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
      }
      goto LAB_148af498e;
    }
  }
  FUN_140056680(param_2,L"<Unknown Index>");
LAB_148af498e:
  FUN_1401b9920(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af49d6 FUN_148af49d6 body=166 status=ok
// SIG undefined FUN_148af49d6(void)

void FUN_148af49d6(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x164) != -1) {
    local_38 = (void *)0x0;
    local_30 = *(int *)(param_1 + 0x160);
    lVar1 = (longlong)local_30;
    _Src = *(void **)(param_1 + 0x158);
    if (lVar1 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar1 * 2);
    }
    FUN_145da617a(param_1,&local_38,2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af4a7e FUN_148af4a7e body=152 status=ok
// SIG undefined FUN_148af4a7e(void)

void FUN_148af4a7e(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0x170);
  lVar1 = (longlong)local_30;
  _Src = *(void **)(param_1 + 0x168);
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_145da617a(param_1,&local_38,3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af4b18 FUN_148af4b18 body=200 status=ok
// SIG undefined FUN_148af4b18(void)

ulonglong FUN_148af4b18(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if ((*(int *)(param_1 + 0x164) == -1) || ((longlong)*(int *)(param_1 + 0x180) == 0)) {
    return 0xffffffff;
  }
  plVar2 = *(longlong **)(param_1 + 0x178);
  iVar1 = *(int *)(param_1 + 0x160);
  plVar6 = plVar2;
LAB_148af4b61:
  if (iVar1 == (int)plVar6[1]) {
    if (1 < iVar1) {
      lVar7 = 0;
      do {
        uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x158) + lVar7);
        uVar4 = (ulonglong)uVar3;
        uVar5 = *(ushort *)(*plVar6 + lVar7);
        if (uVar3 == uVar5) {
          if (uVar3 == 0) break;
        }
        else {
          if (0x7f < (uVar5 | uVar3)) goto LAB_148af4bb4;
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          uVar8 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[uVar8]) goto LAB_148af4bb4;
        }
        lVar7 = lVar7 + 2;
      } while( true );
    }
    goto LAB_148af4bcd;
  }
  if ((int)plVar6[1] + iVar1 == 1) goto LAB_148af4bcd;
  goto LAB_148af4bba;
LAB_148af4bb4:
  if (uVar3 == uVar5) {
LAB_148af4bcd:
    return (ulonglong)((longlong)plVar6 - (longlong)plVar2) >> 4 & 0xffffffff;
  }
LAB_148af4bba:
  plVar6 = plVar6 + 2;
  if (plVar6 == plVar2 + (longlong)*(int *)(param_1 + 0x180) * 2) {
    return 0xffffffff;
  }
  goto LAB_148af4b61;
}



// FUNCTION 148af4be0 FUN_148af4be0 body=127 status=ok
// SIG undefined FUN_148af4be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148af4be0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb9a240) {
    FUN_144b3d300(&DAT_14cb9a240);
    if (DAT_14cb9a240 == -1) {
      _DAT_14cb9a228 = 0x100;
      _DAT_14cb9a22c = 0;
      uRam000000014cb9a230 = 1;
      uRam000000014cb9a234 = 0x144;
      _DAT_14cb9a238 = (undefined1 *)0x300000000;
      _Init_thread_footer(&DAT_14cb9a240);
    }
  }
  _DAT_14cb9a238 = &DAT_100000001;
  return;
}



// FUNCTION 148af4c60 FUN_148af4c60 body=34 status=ok
// SIG undefined FUN_148af4c60(void)

void FUN_148af4c60(longlong *param_1)

{
  if ((char)param_1[0x2c] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000148af4c7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 800))(param_1,param_1[0x2b],2);
    return;
  }
  return;
}



// FUNCTION 148af4c82 FUN_148af4c82 body=24 status=ok
// SIG undefined FUN_148af4c82(void)

void FUN_148af4c82(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148af4c97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 800))(param_1,param_1[0x2d],3);
  return;
}



// FUNCTION 148af4cc2 FUN_148af4cc2 body=68 status=ok
// SIG undefined FUN_148af4cc2(void)

void FUN_148af4cc2(longlong *param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x15] = param_2;
                    /* WARNING: Could not recover jumptable at 0x000148af4cf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b8))(param_1,param_2);
  return;
}



// FUNCTION 148af4d06 FUN_148af4d06 body=235 status=ok
// SIG undefined FUN_148af4d06(void)

void FUN_148af4d06(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  
  if ((longlong)(int)param_1[0x14] != 0) {
    plVar4 = (longlong *)param_1[0x13];
    plVar1 = plVar4 + (int)param_1[0x14];
    do {
      lVar3 = *plVar4;
      FUN_144757f48(lVar3,0x40000000);
      uVar2 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      do {
        uVar2 = *(uint *)(lVar3 + 8);
        if ((uVar2 >> 0x15 & 1) != 0) break;
        LOCK();
        bVar5 = uVar2 == *(uint *)(lVar3 + 8);
        if (bVar5) {
          *(uint *)(lVar3 + 8) = uVar2 | 0x200000;
        }
        UNLOCK();
      } while (!bVar5);
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)((longlong)param_1 + 0xa4) < 0) {
    FUN_148af6848(param_1 + 0x13,0);
  }
  if (*(int *)((longlong)param_1 + 0x94) < 0) {
    *(undefined4 *)(param_1 + 0x12) = 0;
    FUN_148af6848(param_1 + 0x11,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000148af4dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b8))(param_1,param_1[0x15]);
  return;
}



// FUNCTION 148af4e2e FUN_148af4e2e body=320 status=ok
// SIG undefined FUN_148af4e2e(void)

void FUN_148af4e2e(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  uVar1 = *(uint *)(param_2 + 0x388);
  if ((longlong)(int)uVar1 < 1) {
    FUN_148af4f70(&local_58,param_1 + 0x88);
  }
  else {
    uStack_50 = (ulonglong)uVar1;
    FUN_148af6306(&local_58,0);
    memcpy(local_58,*(void **)(param_2 + 0x380),(longlong)(int)uVar1 << 3);
  }
  pvVar4 = local_58;
  lVar7 = (longlong)(int)uStack_50;
  if (lVar7 != 0) {
    lVar8 = 0;
    do {
      plVar3 = *(longlong **)((longlong)pvVar4 + lVar8);
      if (plVar3 == (longlong *)0x0) {
LAB_148af4f01:
        cVar5 = FUN_148af4650(param_2,plVar3);
        if (cVar5 != '\0') {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_148af6306(param_3,iVar2);
          }
          *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        }
      }
      else {
        lVar6 = FUN_140febe0e();
        if ((*(int *)(plVar3[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
            lVar6 + 0x30)) goto LAB_148af4f01;
        (**(code **)(*plVar3 + 0x2f0))(plVar3,param_2,param_3);
      }
      lVar8 = lVar8 + 8;
    } while (lVar7 * 8 != lVar8);
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8(local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148af4f70 FUN_148af4f70 body=94 status=ok
// SIG undefined FUN_148af4f70(void)

void FUN_148af4f70(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_148af6306(param_1,iVar2);
  }
  FUN_148af68a8((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148af4fe2 FUN_148af4fe2 body=45 status=ok
// SIG undefined FUN_148af4fe2(void)

longlong FUN_148af4fe2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cc66f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148af5010 FUN_148af5010 body=32 status=ok
// SIG undefined FUN_148af5010(void)

undefined8 FUN_148af5010(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 148af5038 FUN_148af5038 body=45 status=ok
// SIG undefined FUN_148af5038(void)

longlong FUN_148af5038(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140cdcea6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148af5066 FUN_148af5066 body=45 status=ok
// SIG undefined FUN_148af5066(void)

longlong FUN_148af5066(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d45af6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148af50da FUN_148af50da body=45 status=ok
// SIG undefined FUN_148af50da(void)

longlong FUN_148af50da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cfb21e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148af5108 FUN_148af5108 body=45 status=ok
// SIG undefined FUN_148af5108(void)

longlong FUN_148af5108(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c9e9d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148af5136 FUN_148af5136 body=45 status=ok
// SIG undefined FUN_148af5136(void)

longlong FUN_148af5136(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bfd4ae(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148af5164 FUN_148af5164 body=41 status=ok
// SIG undefined FUN_148af5164(void)

void FUN_148af5164(void)

{
  FUN_140033559("..\\Plugins\\GameSettings\\Source\\Public/GameSettingRegistry.h",0x42,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  return;
}



// FUNCTION 148af518e FUN_148af518e body=45 status=ok
// SIG undefined FUN_148af518e(void)

longlong FUN_148af518e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145b21608(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148af51be FUN_148af51be body=42 status=ok
// SIG undefined FUN_148af51be(void)

undefined8 FUN_148af51be(void)

{
  FUN_140033559("..\\Plugins\\GameSettings\\Source\\Public/Widgets/GameSettingScreen.h",0x36,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  return 0;
}



// FUNCTION 148af51f2 FUN_148af51f2 body=41 status=ok
// SIG undefined FUN_148af51f2(void)

void FUN_148af51f2(void)

{
  FUN_140033559("..\\Plugins\\GameSettings\\Source\\Public/GameSettingValue.h",0x1e,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  return;
}



// FUNCTION 148af521c FUN_148af521c body=41 status=ok
// SIG undefined FUN_148af521c(void)

void FUN_148af521c(void)

{
  FUN_140033559("..\\Plugins\\GameSettings\\Source\\Public/GameSettingValue.h",0x21,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  return;
}



// FUNCTION 148af5246 FUN_148af5246 body=42 status=ok
// SIG undefined FUN_148af5246(void)

undefined1 FUN_148af5246(void)

{
  FUN_140033559("..\\Plugins\\GameSettings\\Source\\Public/GameSettingValue.h",0x23,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  return 1;
}



// FUNCTION 148af5270 FUN_148af5270 body=41 status=ok
// SIG undefined FUN_148af5270(void)

void FUN_148af5270(void)

{
  FUN_140033559("..\\Plugins\\GameSettings\\Source\\Public/GameSettingValue.h",0x26,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  return;
}



// FUNCTION 148af529e FUN_148af529e body=41 status=ok
// SIG undefined FUN_148af529e(void)

void FUN_148af529e(void)

{
  FUN_140033559("..\\Plugins\\GameSettings\\Source\\Public/GameSettingValueDiscrete.h",0x14,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  return;
}



// FUNCTION 148af52c8 FUN_148af52c8 body=45 status=ok
// SIG undefined FUN_148af52c8(void)

undefined8 FUN_148af52c8(void)

{
  FUN_140033559("..\\Plugins\\GameSettings\\Source\\Public/GameSettingValueDiscrete.h",0x17,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  return 0xffffffff;
}



// FUNCTION 148af52fc FUN_148af52fc body=54 status=ok
// SIG undefined FUN_148af52fc(void)

undefined8 * FUN_148af52fc(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\GameSettings\\Source\\Public/GameSettingValueDiscrete.h",0x1e,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148af5332 FUN_148af5332 body=50 status=ok
// SIG undefined FUN_148af5332(void)

undefined8 FUN_148af5332(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x328))();
  FUN_140002266(param_2,&DAT_149e02016,uVar1);
  return param_2;
}



// FUNCTION 148af5364 FUN_148af5364 body=52 status=ok
// SIG undefined FUN_148af5364(void)

longlong FUN_148af5364(undefined8 param_1,longlong param_2)

{
  FUN_140033559("..\\Plugins\\GameSettings\\Source\\Public/GameSettingValueScalar.h",0x20,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  *(undefined1 *)(param_2 + 8) = 0;
  return param_2;
}



// FUNCTION 148af5398 FUN_148af5398 body=41 status=ok
// SIG undefined FUN_148af5398(void)

void FUN_148af5398(void)

{
  FUN_140033559("..\\Plugins\\GameSettings\\Source\\Public/GameSettingValueScalar.h",0x21,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  return;
}



// FUNCTION 148af53c2 FUN_148af53c2 body=43 status=ok
// SIG undefined FUN_148af53c2(void)

undefined8 FUN_148af53c2(void)

{
  FUN_140033559("..\\Plugins\\GameSettings\\Source\\Public/GameSettingValueScalar.h",0x22,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  return 0;
}



// FUNCTION 148af53ee FUN_148af53ee body=65 status=ok
// SIG undefined FUN_148af53ee(void)

undefined1 * FUN_148af53ee(undefined8 param_1,undefined1 *param_2)

{
  FUN_140033559("..\\Plugins\\GameSettings\\Source\\Public/GameSettingValueScalar.h",0x23,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  *param_2 = 2;
  *(undefined8 *)(param_2 + 8) = 0;
  param_2[0x10] = 2;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return param_2;
}



// FUNCTION 148af5430 FUN_148af5430 body=48 status=ok
// SIG undefined FUN_148af5430(void)

undefined8 FUN_148af5430(void)

{
  FUN_140033559("..\\Plugins\\GameSettings\\Source\\Public/GameSettingValueScalar.h",0x24,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  return 0x3f847ae147ae147b;
}



// FUNCTION 148af5460 FUN_148af5460 body=81 status=ok
// SIG undefined FUN_148af5460(void)

longlong * FUN_148af5460(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_140033559("..\\Plugins\\GameSettings\\Source\\Public/GameSettingValueScalar.h",0x2a,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  return param_2;
}



// FUNCTION 148af54b2 FUN_148af54b2 body=45 status=ok
// SIG undefined FUN_148af54b2(void)

longlong FUN_148af54b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bfd4ae(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148af54e0 FUN_148af54e0 body=48 status=ok
// SIG undefined FUN_148af54e0(void)

void FUN_148af54e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x10001;
  FUN_1457ac51c(param_2 + 2,0);
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xe2) = 0;
  *(undefined8 *)(param_2 + 0xe4) = 0;
  *(undefined8 *)(param_2 + 0xe6) = 0;
  return;
}



// FUNCTION 148af5510 FUN_148af5510 body=48 status=ok
// SIG undefined FUN_148af5510(void)

void FUN_148af5510(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x10001;
  FUN_1457ac51c(param_2 + 2,0);
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xe2) = 0;
  *(undefined8 *)(param_2 + 0xe4) = 0;
  *(undefined8 *)(param_2 + 0xe6) = 0;
  return;
}



// FUNCTION 148af555e FUN_148af555e body=139 status=ok
// SIG undefined FUN_148af555e(void)

undefined8 FUN_148af555e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_14681ab1c();
      FUN_148af56d4(param_2 + lVar1 + 0x380,param_3 + lVar1 + 0x380);
      FUN_148af56d4(param_2 + lVar1 + 0x390,param_3 + lVar1 + 0x390);
      lVar1 = lVar1 + 0x3a0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148af5612 FUN_148af5612 body=59 status=ok
// SIG undefined FUN_148af5612(void)

undefined8 FUN_148af5612(longlong *param_1)

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



// FUNCTION 148af565e FUN_148af565e body=40 status=ok
// SIG undefined FUN_148af565e(void)

void FUN_148af565e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x3a0) == '\x01') {
    FUN_145c9ead0(param_2);
    *(undefined1 *)(param_2 + 0x3a0) = 0;
  }
  return;
}



// FUNCTION 148af56d4 FUN_148af56d4 body=79 status=ok
// SIG undefined FUN_148af56d4(void)

undefined8 * FUN_148af56d4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14101deec(param_1,iVar1);
      FUN_14101de9c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148af5734 FUN_148af5734 body=44 status=ok
// SIG undefined FUN_148af5734(void)

void FUN_148af5734(undefined8 param_1,longlong *param_2)

{
  FUN_148af5870(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148af5776 FUN_148af5776 body=54 status=ok
// SIG undefined FUN_148af5776(void)

undefined1 FUN_148af5776(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148af58a0(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148af57d4 FUN_148af57d4 body=59 status=ok
// SIG undefined FUN_148af57d4(void)

undefined8 FUN_148af57d4(longlong *param_1)

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



// FUNCTION 148af5870 FUN_148af5870 body=47 status=ok
// SIG undefined FUN_148af5870(void)

void FUN_148af5870(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
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



// FUNCTION 148af58a0 FUN_148af58a0 body=95 status=ok
// SIG undefined FUN_148af58a0(void)

undefined8 * FUN_148af58a0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148af5870(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148af5900(param_1,iVar1);
      FUN_148af5973(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148af5900 FUN_148af5900 body=115 status=ok
// SIG undefined FUN_148af5900(void)

void FUN_148af5900(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148af5973 FUN_148af5973 body=134 status=ok
// SIG undefined FUN_148af5973(void)

void FUN_148af5973(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148af59fa FUN_148af59fa body=50 status=ok
// SIG undefined FUN_148af59fa(void)

void FUN_148af59fa(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_148af5870(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 148af5a48 FUN_148af5a48 body=46 status=ok
// SIG undefined FUN_148af5a48(void)

void FUN_148af5a48(undefined8 param_1,longlong param_2)

{
  FUN_148af5870(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148af5a8c FUN_148af5a8c body=68 status=ok
// SIG undefined FUN_148af5a8c(void)

undefined1 FUN_148af5a8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_148af58a0(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148af5af8 FUN_148af5af8 body=59 status=ok
// SIG undefined FUN_148af5af8(void)

undefined8 FUN_148af5af8(longlong *param_1)

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



// FUNCTION 148af5b96 FUN_148af5b96 body=52 status=ok
// SIG undefined FUN_148af5b96(void)

void FUN_148af5b96(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_148af5870(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148af5bca FUN_148af5bca body=144 status=ok
// SIG undefined FUN_148af5bca(void)

undefined4 FUN_148af5bca(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_148af41f4(lVar1);
  FUN_144aa0d6a(local_48,lVar1 + 0xf8);
  uVar2 = FUN_144aa0f37(local_48,param_2,param_3);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af5c60 FUN_148af5c60 body=34 status=ok
// SIG undefined FUN_148af5c60(void)

undefined8 FUN_148af5c60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 148af5c84 FUN_148af5c84 body=32 status=ok
// SIG undefined FUN_148af5c84(void)

undefined8 FUN_148af5c84(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 148af5ca4 FUN_148af5ca4 body=43 status=ok
// SIG undefined FUN_148af5ca4(void)

undefined8 FUN_148af5ca4(undefined8 param_1,int param_2)

{
  FUN_140e8fe04();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 148af5cec FUN_148af5cec body=29 status=ok
// SIG undefined FUN_148af5cec(void)

bool FUN_148af5cec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148af5d0a FUN_148af5d0a body=26 status=ok
// SIG undefined FUN_148af5d0a(void)

bool FUN_148af5d0a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148af5d24 FUN_148af5d24 body=93 status=ok
// SIG undefined FUN_148af5d24(void)

void FUN_148af5d24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b538540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af5d82 FUN_148af5d82 body=93 status=ok
// SIG undefined FUN_148af5d82(void)

void FUN_148af5d82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b538540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af5de0 FUN_148af5de0 body=123 status=ok
// SIG undefined FUN_148af5de0(void)

void FUN_148af5de0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b538540;
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



// FUNCTION 148af5e5c FUN_148af5e5c body=38 status=ok
// SIG undefined FUN_148af5e5c(void)

void FUN_148af5e5c(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148af5e7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148af5e82 FUN_148af5e82 body=138 status=ok
// SIG undefined FUN_148af5e82(void)

bool FUN_148af5e82(longlong param_1,undefined4 param_2)

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
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af5f0e FUN_148af5f0e body=36 status=ok
// SIG undefined FUN_148af5f0e(void)

undefined8 FUN_148af5f0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148af5f4c FUN_148af5f4c body=93 status=ok
// SIG undefined FUN_148af5f4c(void)

void FUN_148af5f4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5385b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af5faa FUN_148af5faa body=93 status=ok
// SIG undefined FUN_148af5faa(void)

void FUN_148af5faa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5385b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af6008 FUN_148af6008 body=123 status=ok
// SIG undefined FUN_148af6008(void)

void FUN_148af6008(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b538b70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5385b0;
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



// FUNCTION 148af6084 FUN_148af6084 body=48 status=ok
// SIG undefined FUN_148af6084(void)

void FUN_148af6084(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148af60b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148af60b6 FUN_148af60b6 body=36 status=ok
// SIG undefined FUN_148af60b6(void)

undefined8 FUN_148af60b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148af60f4 FUN_148af60f4 body=93 status=ok
// SIG undefined FUN_148af60f4(void)

void FUN_148af60f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b538620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af6152 FUN_148af6152 body=93 status=ok
// SIG undefined FUN_148af6152(void)

void FUN_148af6152(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b538620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af61b0 FUN_148af61b0 body=123 status=ok
// SIG undefined FUN_148af61b0(void)

void FUN_148af61b0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b538b00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b538620;
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



// FUNCTION 148af622c FUN_148af622c body=40 status=ok
// SIG undefined FUN_148af622c(void)

void FUN_148af622c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148af6251. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148af6256 FUN_148af6256 body=175 status=ok
// SIG undefined FUN_148af6256(void)

void FUN_148af6256(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_148af62df;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148af62df:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148af6306 FUN_148af6306 body=132 status=ok
// SIG undefined FUN_148af6306(void)

void FUN_148af6306(longlong param_1,int param_2)

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



// FUNCTION 148af638c FUN_148af638c body=36 status=ok
// SIG undefined FUN_148af638c(void)

undefined8 FUN_148af638c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148af63cc FUN_148af63cc body=93 status=ok
// SIG undefined FUN_148af63cc(void)

void FUN_148af63cc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b538690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af642a FUN_148af642a body=123 status=ok
// SIG undefined FUN_148af642a(void)

void FUN_148af642a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b538690;
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



// FUNCTION 148af64a6 FUN_148af64a6 body=21 status=ok
// SIG undefined FUN_148af64a6(void)

undefined8 FUN_148af64a6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}


