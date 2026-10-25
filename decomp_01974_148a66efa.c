// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148a66efa FUN_148a66efa body=130 status=ok
// SIG undefined FUN_148a66efa(void)

void FUN_148a66efa(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a66f8c FUN_148a66f8c body=31 status=ok
// SIG undefined FUN_148a66f8c(void)

undefined8 FUN_148a66f8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a66fc8 FUN_148a66fc8 body=93 status=ok
// SIG undefined FUN_148a66fc8(void)

void FUN_148a66fc8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4da9f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a67026 FUN_148a67026 body=93 status=ok
// SIG undefined FUN_148a67026(void)

void FUN_148a67026(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4da9f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a67084 FUN_148a67084 body=126 status=ok
// SIG undefined FUN_148a67084(void)

void FUN_148a67084(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4da9f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a670f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a6710e FUN_148a6710e body=31 status=ok
// SIG undefined FUN_148a6710e(void)

undefined8 FUN_148a6710e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6714a FUN_148a6714a body=93 status=ok
// SIG undefined FUN_148a6714a(void)

void FUN_148a6714a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4daa60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a671a8 FUN_148a671a8 body=126 status=ok
// SIG undefined FUN_148a671a8(void)

void FUN_148a671a8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4daa60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a67217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a67226 FUN_148a67226 body=21 status=ok
// SIG undefined FUN_148a67226(void)

undefined8 FUN_148a67226(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148a6723c FUN_148a6723c body=112 status=ok
// SIG undefined FUN_148a6723c(void)

void FUN_148a6723c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 148a672ac FUN_148a672ac body=147 status=ok
// SIG undefined FUN_148a672ac(void)

void FUN_148a672ac(longlong param_1,int param_2)

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



// FUNCTION 148a67340 FUN_148a67340 body=130 status=ok
// SIG undefined FUN_148a67340(void)

void FUN_148a67340(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a673c4 FUN_148a673c4 body=132 status=ok
// SIG undefined FUN_148a673c4(void)

void FUN_148a673c4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a6744a FUN_148a6744a body=130 status=ok
// SIG undefined FUN_148a6744a(void)

void FUN_148a6744a(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a674ce FUN_148a674ce body=132 status=ok
// SIG undefined FUN_148a674ce(void)

void FUN_148a674ce(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a67554 FUN_148a67554 body=130 status=ok
// SIG undefined FUN_148a67554(void)

void FUN_148a67554(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a675d8 FUN_148a675d8 body=98 status=ok
// SIG undefined FUN_148a675d8(void)

void FUN_148a675d8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148a6763a FUN_148a6763a body=192 status=ok
// SIG undefined FUN_148a6763a(void)

void FUN_148a6763a(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar7 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar6 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar6 < 2;
      uVar6 = uVar6 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar7) {
          return;
        }
        goto LAB_148a676d0;
      }
    }
    uVar5 = uVar6 - 1;
    bVar7 = true;
  } while (1 < uVar6);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148a676d0:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148a676fa FUN_148a676fa body=130 status=ok
// SIG undefined FUN_148a676fa(void)

void FUN_148a676fa(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a6777e FUN_148a6777e body=162 status=ok
// SIG undefined FUN_148a6777e(void)

void FUN_148a6777e(longlong *param_1,undefined8 param_2)

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
        goto LAB_148a6780b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148a6780b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148a67820 FUN_148a67820 body=171 status=ok
// SIG undefined FUN_148a67820(void)

void FUN_148a67820(longlong *param_1,undefined4 param_2,undefined8 param_3)

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
        goto LAB_148a678b5;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148a678b5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148a678cc FUN_148a678cc body=130 status=ok
// SIG undefined FUN_148a678cc(void)

void FUN_148a678cc(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a67950 FUN_148a67950 body=130 status=ok
// SIG undefined FUN_148a67950(void)

void FUN_148a67950(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a679e2 FUN_148a679e2 body=31 status=ok
// SIG undefined FUN_148a679e2(void)

undefined8 FUN_148a679e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a67a1c FUN_148a67a1c body=29 status=ok
// SIG undefined FUN_148a67a1c(void)

bool FUN_148a67a1c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a67a3a FUN_148a67a3a body=26 status=ok
// SIG undefined FUN_148a67a3a(void)

bool FUN_148a67a3a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a67a54 FUN_148a67a54 body=93 status=ok
// SIG undefined FUN_148a67a54(void)

void FUN_148a67a54(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4dac30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a67ab2 FUN_148a67ab2 body=126 status=ok
// SIG undefined FUN_148a67ab2(void)

void FUN_148a67ab2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4dac30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a67b21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a67b30 FUN_148a67b30 body=158 status=ok
// SIG undefined FUN_148a67b30(void)

bool FUN_148a67b30(longlong param_1,undefined4 param_2)

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



// FUNCTION 148a67bd0 FUN_148a67bd0 body=175 status=ok
// SIG undefined FUN_148a67bd0(void)

void FUN_148a67bd0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (void *)0x0;
  local_40 = (int)param_3[1];
  lVar1 = (longlong)local_40;
  _Src = (void *)*param_3;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_148a67c80(param_1,param_2,&local_48);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a67c80 FUN_148a67c80 body=318 status=ok
// SIG undefined FUN_148a67c80(void)

void FUN_148a67c80(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [36];
  uint local_64;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  local_60 = param_2;
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    uVar6 = 0;
    do {
      local_64 = (uint)uVar6;
      lVar7 = uVar5 * 0x10 + -8;
      uVar9 = uVar5;
      while ((*(int *)(*param_1 + lVar7) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0))) {
        local_58 = (void *)0x0;
        local_50 = (int)param_3[1];
        lVar8 = (longlong)local_50;
        _Src = (void *)*param_3;
        if (lVar8 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,_Src,lVar8 * 2);
        }
        uVar6 = local_60;
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,local_60);
        if (cVar4 == '\0') break;
        lVar7 = lVar7 + -0x10;
        bVar3 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if ((local_64 & 1) != 0) goto LAB_148a67d7b;
          goto LAB_148a67d8a;
        }
      }
      uVar5 = uVar9 - 1;
      uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    } while (1 < uVar9);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148a67d7b:
    FUN_14474d06a(param_1,0);
  }
LAB_148a67d8a:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a67dce FUN_148a67dce body=96 status=ok
// SIG undefined FUN_148a67dce(void)

void FUN_148a67dce(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 6,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 148a67e2e FUN_148a67e2e body=108 status=ok
// SIG undefined FUN_148a67e2e(void)

void FUN_148a67e2e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x58,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x58)) {
      uVar2 = uVar1 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x58,8);
  }
  return;
}



// FUNCTION 148a67e9a FUN_148a67e9a body=173 status=ok
// SIG undefined FUN_148a67e9a(void)

void FUN_148a67e9a(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_148a67f31;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148a67f31:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148a67f48 FUN_148a67f48 body=31 status=ok
// SIG undefined FUN_148a67f48(void)

undefined8 FUN_148a67f48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a67f82 FUN_148a67f82 body=93 status=ok
// SIG undefined FUN_148a67f82(void)

void FUN_148a67f82(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4dad90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a67fe0 FUN_148a67fe0 body=93 status=ok
// SIG undefined FUN_148a67fe0(void)

void FUN_148a67fe0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4dad90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a6803e FUN_148a6803e body=126 status=ok
// SIG undefined FUN_148a6803e(void)

void FUN_148a6803e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4dad90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a680ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a680bc FUN_148a680bc body=35 status=ok
// SIG undefined FUN_148a680bc(void)

void FUN_148a680bc(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a680db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148a680e0 FUN_148a680e0 body=142 status=ok
// SIG undefined FUN_148a680e0(void)

bool FUN_148a680e0(longlong param_1)

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



// FUNCTION 148a68170 FUN_148a68170 body=143 status=ok
// SIG undefined FUN_148a68170(void)

void FUN_148a68170(longlong param_1,int param_2)

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



// FUNCTION 148a68200 FUN_148a68200 body=246 status=ok
// SIG undefined FUN_148a68200(void)

longlong * FUN_148a68200(longlong *param_1,longlong *param_2)

{
  if (param_1 == param_2) {
    FUN_148a68356(param_1 + 6,param_2 + 6);
    param_1[8] = param_2[8];
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    FUN_148a68356(param_1 + 6,param_2 + 6);
    param_1[8] = param_2[8];
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    param_1[9] = param_2[9];
    param_2[9] = 0;
    *(int *)(param_1 + 10) = (int)param_2[10];
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
    param_2[10] = 0;
  }
  return param_1;
}



// FUNCTION 148a682f6 FUN_148a682f6 body=95 status=ok
// SIG undefined FUN_148a682f6(void)

undefined8 * FUN_148a682f6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148a5c5b9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a684a2(param_1,iVar1);
      FUN_148a68515(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148a68356 FUN_148a68356 body=80 status=ok
// SIG undefined FUN_148a68356(void)

longlong * FUN_148a68356(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_148a5c5b9(*param_1,(int)param_1[1]);
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



// FUNCTION 148a683a6 FUN_148a683a6 body=103 status=ok
// SIG undefined FUN_148a683a6(void)

undefined8 FUN_148a683a6(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x18)) {
    uVar4 = uVar2 / 0x18 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x18,8);
  }
  return uVar3;
}



// FUNCTION 148a6840e FUN_148a6840e body=147 status=ok
// SIG undefined FUN_148a6840e(void)

void FUN_148a6840e(longlong param_1,int param_2)

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



// FUNCTION 148a684a2 FUN_148a684a2 body=115 status=ok
// SIG undefined FUN_148a684a2(void)

void FUN_148a684a2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148a68515 FUN_148a68515 body=126 status=ok
// SIG undefined FUN_148a68515(void)

void FUN_148a68515(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = *(int *)(puVar2 + -1);
      _Src = (void *)puVar2[-2];
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      param_1[2] = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148a68598 FUN_148a68598 body=81 status=ok
// SIG undefined FUN_148a68598(void)

void FUN_148a68598(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x148);
  if (iVar2 == 4) {
    bifrost::patches::stopDownload();
    iVar2 = *(int *)(param_1 + 0x148);
  }
  if ((iVar2 != 0) && (iVar2 != 7)) {
    if ((*(int *)(param_1 + 0x40) != 0) &&
       (plVar1 = *(longlong **)(param_1 + 0x38), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
    }
    *(undefined4 *)(param_1 + 0x148) = 7;
  }
  return;
}



// FUNCTION 148a685ea FUN_148a685ea body=164 status=ok
// SIG undefined FUN_148a685ea(void)

void FUN_148a685ea(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = *param_4;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar1 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_4[2];
    }
    (**(code **)*plVar1)(plVar1,local_58);
  }
  FUN_148a689e6(param_1,param_2,param_3,local_68);
  if (*param_4 != 0) {
    plVar1 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a68694 FUN_148a68694 body=115 status=ok
// SIG undefined FUN_148a68694(void)

void FUN_148a68694(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148a68707 FUN_148a68707 body=132 status=ok
// SIG undefined FUN_148a68707(void)

void FUN_148a68707(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar5[-2];
      _Src = *(void **)(puVar5 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(puVar5 + 4);
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      uVar4 = puVar5[3];
      *(undefined4 *)(param_1 + 2) = *puVar5;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(undefined4 *)(param_1 + 3) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
      param_1 = param_1 + 5;
      puVar5 = puVar5 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148a6878c FUN_148a6878c body=31 status=ok
// SIG undefined FUN_148a6878c(void)

undefined8 FUN_148a6878c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a687c4 FUN_148a687c4 body=93 status=ok
// SIG undefined FUN_148a687c4(void)

void FUN_148a687c4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4db4e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a68822 FUN_148a68822 body=123 status=ok
// SIG undefined FUN_148a68822(void)

void FUN_148a68822(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4db4e0;
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



// FUNCTION 148a6889e FUN_148a6889e body=21 status=ok
// SIG undefined FUN_148a6889e(void)

undefined8 FUN_148a6889e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148a688b4 FUN_148a688b4 body=31 status=ok
// SIG undefined FUN_148a688b4(void)

undefined8 FUN_148a688b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a688fc FUN_148a688fc body=93 status=ok
// SIG undefined FUN_148a688fc(void)

void FUN_148a688fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4db5c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4db550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a6895a FUN_148a6895a body=123 status=ok
// SIG undefined FUN_148a6895a(void)

void FUN_148a6895a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4db5c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4db550;
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



// FUNCTION 148a689e6 FUN_148a689e6 body=313 status=ok
// SIG undefined FUN_148a689e6(void)

void FUN_148a689e6(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [44];
  uint local_8c;
  longlong local_88 [2];
  undefined8 local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar4 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar4 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    plVar6 = (longlong *)0x0;
    do {
      local_8c = (uint)plVar6;
      lVar8 = uVar4 * 0x10 + -8;
      uVar7 = uVar4;
      while ((*(int *)(*param_1 + lVar8) != 0 &&
             (plVar5 = *(longlong **)(*param_1 + -8 + lVar8), plVar5 != (longlong *)0x0))) {
        local_88[0] = *param_4;
        local_78[0] = 0;
        if (local_88[0] != 0) {
          plVar6 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar6 = param_4 + 4;
          }
          (**(code **)*plVar6)(plVar6,local_78);
        }
        cVar3 = (**(code **)(*plVar5 + 0x60))(plVar5,param_2,param_3,local_88);
        plVar6 = plVar5;
        if (cVar3 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar2 = uVar7 < 2;
        uVar7 = uVar7 - 1;
        if (bVar2) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if ((local_8c & 1) != 0) goto LAB_148a68acb;
          goto LAB_148a68ada;
        }
      }
      uVar4 = uVar7 - 1;
      plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
    } while (1 < uVar7);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148a68acb:
    FUN_14474d06a(param_1,0);
  }
LAB_148a68ada:
  if (*param_4 != 0) {
    plVar6 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a68b20 FUN_148a68b20 body=29 status=ok
// SIG undefined FUN_148a68b20(void)

undefined8 FUN_148a68b20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a68b66 FUN_148a68b66 body=93 status=ok
// SIG undefined FUN_148a68b66(void)

void FUN_148a68b66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4db6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4db650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a68bc4 FUN_148a68bc4 body=93 status=ok
// SIG undefined FUN_148a68bc4(void)

void FUN_148a68bc4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4db6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4db650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a68c22 FUN_148a68c22 body=123 status=ok
// SIG undefined FUN_148a68c22(void)

void FUN_148a68c22(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4db6c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4db650;
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



// FUNCTION 148a68cac FUN_148a68cac body=21 status=ok
// SIG undefined FUN_148a68cac(void)

undefined8 FUN_148a68cac(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148a68cc4 FUN_148a68cc4 body=31 status=ok
// SIG undefined FUN_148a68cc4(void)

undefined8 FUN_148a68cc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a68d00 FUN_148a68d00 body=93 status=ok
// SIG undefined FUN_148a68d00(void)

void FUN_148a68d00(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4db730;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a68d5e FUN_148a68d5e body=123 status=ok
// SIG undefined FUN_148a68d5e(void)

void FUN_148a68d5e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4db730;
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



// FUNCTION 148a68dda FUN_148a68dda body=21 status=ok
// SIG undefined FUN_148a68dda(void)

undefined8 FUN_148a68dda(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148a68e4a FUN_148a68e4a body=386 status=ok
// SIG undefined FUN_148a68e4a(void)

longlong * FUN_148a68e4a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148a68f5b:
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14b4e0150;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a68f5b;
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
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14b4e0150;
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



// FUNCTION 148a68fcc FUN_148a68fcc body=32 status=ok
// SIG undefined FUN_148a68fcc(void)

undefined8 FUN_148a68fcc(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGetUserOnlinePrivilegeTask");
  return param_2;
}



// FUNCTION 148a690ca FUN_148a690ca body=386 status=ok
// SIG undefined FUN_148a690ca(void)

longlong * FUN_148a690ca(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148a691db:
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14b4e03a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a691db;
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
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14b4e03a0;
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



// FUNCTION 148a6925e FUN_148a6925e body=231 status=ok
// SIG undefined FUN_148a6925e(void)

void FUN_148a6925e(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [4];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = param_2;
  if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
    lVar2 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x138);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x140) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0xf8);
      do {
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0xc) == param_2) goto LAB_148a692b0;
        iVar3 = *(int *)(lVar2 + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
    }
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x28))
                    (*(longlong **)(param_1 + 0x2e8),
                     *(int *)(param_1 + 0x2cc) < *(int *)(param_1 + 0x2a0));
  if (cVar1 != '\0') {
    FUN_1447cbafe((longlong *)(param_1 + 0xf8),local_28,&local_24,0);
    local_38 = 0;
    uStack_30 = 0;
    FUN_148a693bc(param_1,local_24);
  }
LAB_148a692b0:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a69346 FUN_148a69346 body=118 status=ok
// SIG undefined FUN_148a69346(void)

undefined8 FUN_148a69346(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x1b0) != *(int *)(param_1 + 0x1dc)) {
    lVar2 = param_1 + 0x1e0;
    if (*(longlong *)(param_1 + 0x1e8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x1e8);
    }
    uVar3 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x1f0) - 1U & param_2) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x1a8) + (longlong)(int)uVar3 * 0x14);
        if (*puVar1 == param_2) {
          if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffffb) == 0) {
            return 0;
          }
          if (*(char *)((longlong)puVar1 + 9) != '\0') {
            return 0;
          }
          return CONCAT71((int7)((ulonglong)(puVar1 + 1) >> 8),
                          *(undefined1 *)((longlong)puVar1 + 10));
        }
        uVar3 = puVar1[3];
      } while (uVar3 != 0xffffffff);
    }
  }
  return 0;
}



// FUNCTION 148a693bc FUN_148a693bc body=577 status=ok
// SIG undefined FUN_148a693bc(void)

void FUN_148a693bc(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_50 = 0;
  local_60 = param_1;
  local_34 = param_2;
  FUN_1460d697c(&local_58,param_3);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,4,0x10);
  local_40 = 4;
  plVar8 = *(longlong **)(param_1 + 0x18);
  if (plVar8 == (longlong *)0x0) {
LAB_148a69438:
    *local_48 = &PTR_LAB_14b438ba0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_48[2] = lVar7;
    *local_48 = &PTR_FUN_14b4e0730;
    local_48[3] = 0;
    local_48[4] = 0;
    bVar9 = true;
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_148a69438;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar9 = iVar6 == iVar4;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *local_48 = &PTR_LAB_14b438ba0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_48[2] = lVar7;
    *local_48 = &PTR_FUN_14b4e0730;
    local_48[3] = uVar3;
    local_48[4] = plVar8;
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
  }
  local_48[5] = local_60;
  local_48[6] = local_58;
  local_58 = 0;
  *(undefined4 *)(local_48 + 7) = local_50;
  local_50 = 0;
  if (!bVar9) {
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
  FUN_148a695fe(param_1,&local_34,&local_48);
  FUN_1449db362(&local_48);
  FUN_1449db362(&local_58);
  FUN_1449db362(param_3);
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a695fe FUN_148a695fe body=259 status=ok
// SIG undefined FUN_148a695fe(void)

void FUN_148a695fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
  FUN_148a7025c(plVar3,param_2,param_3);
  plVar1 = plVar3 + 2;
  local_48 = plVar1;
  local_40 = plVar3;
  FUN_148a70a8c(&local_48,plVar1);
  local_38 = plVar1;
  local_30 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145ea965c(param_1,&local_38);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145ea965c(param_1);
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
  }
  plVar1 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a69716 FUN_148a69716 body=263 status=ok
// SIG undefined FUN_148a69716(void)

void FUN_148a69716(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_1 + 0x2a8;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0x2c0) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = (longlong *)(param_1 + 0x298);
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      FUN_145cf79d2(param_1,param_2,*(undefined8 *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x78));
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a6981e FUN_148a6981e body=90 status=ok
// SIG undefined FUN_148a6981e(void)

undefined8 FUN_148a6981e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  
  lVar2 = FUN_140b64e34();
  if ((lVar2 != 0) && (param_1 = *(longlong **)(lVar2 + 0x1f0), param_1 != (longlong *)0x0)) {
    plVar3 = (longlong *)FUN_140b703aa();
    if (plVar3 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar3 + 0x2b8))(plVar3);
      param_1 = plVar3;
      if (lVar2 != 0) {
        uVar4 = FUN_140b70752(lVar2,param_2,param_3);
        bVar6 = (byte)uVar4;
        uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
        bVar1 = 1;
        goto LAB_148a6986f;
      }
    }
  }
  bVar6 = (byte)param_1;
  bVar1 = 0;
  uVar5 = 0;
LAB_148a6986f:
  return CONCAT71(uVar5,bVar1 & bVar6);
}



// FUNCTION 148a69878 FUN_148a69878 body=650 status=ok
// SIG undefined FUN_148a69878(void)

void FUN_148a69878(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = *(longlong *)(param_3 + 0x10);
  if (local_60 == 0) {
LAB_148a698aa:
    local_60 = 0;
  }
  else {
    iVar6 = *(int *)(local_60 + 8);
    do {
      if (iVar6 == 0) goto LAB_148a698aa;
      LOCK();
      iVar3 = *(int *)(local_60 + 8);
      bVar9 = iVar6 == iVar3;
      if (bVar9) {
        *(int *)(local_60 + 8) = iVar6 + 1;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      UNLOCK();
    } while (!bVar9);
  }
  local_68 = 0;
  if (local_60 != 0) {
    local_68 = *(undefined8 *)(param_3 + 8);
  }
  local_58 = 0;
  local_50 = 0;
  local_70 = param_1;
  local_34 = param_2;
  FUN_14114e6dc(&local_58,param_4);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,5,0x10);
  local_40 = 5;
  plVar8 = *(longlong **)(param_1 + 0x18);
  if (plVar8 == (longlong *)0x0) {
LAB_148a69913:
    *local_48 = &PTR_LAB_14b4e0940;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_48[2] = lVar7;
    *local_48 = &PTR_FUN_14b4e0f90;
    local_48[3] = 0;
    local_48[4] = 0;
    bVar9 = true;
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_148a69913;
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar9 = iVar6 == iVar3;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      UNLOCK();
    } while (!bVar9);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *local_48 = &PTR_LAB_14b4e0940;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_48[2] = lVar7;
    *local_48 = &PTR_FUN_14b4e0f90;
    local_48[3] = uVar4;
    local_48[4] = plVar8;
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
  }
  local_48[5] = local_70;
  local_48[6] = local_68;
  local_48[7] = local_60;
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  local_48[8] = 0;
  *(undefined4 *)(local_48 + 9) = 0;
  FUN_14114e6dc(local_48 + 8,&local_58);
  if (!bVar9) {
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
  local_74 = 1;
  FUN_145ea98b0(param_1,&local_34,&local_74,&local_48);
  FUN_1449db362(&local_48);
  FUN_143f031b4(&local_70);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a69b04 FUN_148a69b04 body=363 status=ok
// SIG undefined FUN_148a69b04(void)

void FUN_148a69b04(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,&local_40);
  FUN_1446f470e(local_30,L"SHIFT",1);
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar4 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xe8);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar5 * 0xc) == param_2) {
          FUN_140b64d6c(param_1,&local_40,param_2);
          if (local_40 != 0) {
            local_50 = local_40;
            local_48 = local_38;
            if (local_38 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_38 + 1) = (int)local_38[1] + 1;
              UNLOCK();
            }
            FUN_145c2c83a(param_1,&local_50,param_3,1);
            plVar1 = local_48;
            if (local_48 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_48 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_48)(local_48);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
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
          break;
        }
        iVar5 = *(int *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar5 * 0xc + 4);
      } while (iVar5 != -1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a69c70 FUN_148a69c70 body=363 status=ok
// SIG undefined FUN_148a69c70(void)

void FUN_148a69c70(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,&local_40);
  FUN_1446f470e(local_30,L"SHIFT",1);
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar4 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xe8);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar5 * 0xc) == param_2) {
          FUN_140b64d6c(param_1,&local_40,param_2);
          if (local_40 != 0) {
            local_50 = local_40;
            local_48 = local_38;
            if (local_38 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_38 + 1) = (int)local_38[1] + 1;
              UNLOCK();
            }
            FUN_145cf8470(param_1,&local_50,param_3,1);
            plVar1 = local_48;
            if (local_48 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_48 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_48)(local_48);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
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
          break;
        }
        iVar5 = *(int *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar5 * 0xc + 4);
      } while (iVar5 != -1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a69ddc FUN_148a69ddc body=140 status=ok
// SIG undefined FUN_148a69ddc(void)

undefined8 * FUN_148a69ddc(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)(param_2 + 8) - 2U < 0x7fffffff) {
    FUN_14047afda(&local_28);
    FUN_14047b282(local_28,param_1,0);
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a69e69 FUN_148a69e69 body=153 status=ok
// SIG undefined FUN_148a69e69(void)

ulonglong FUN_148a69e69(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined4 local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_48[1] = 0;
  local_58 = L"guid";
  local_50 = 4;
  cVar1 = FUN_14047fa10();
  if (cVar1 != '\0') {
    cVar1 = FUN_140b10bb8(local_48,1,param_2);
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (cVar1 != '\0') goto LAB_148a69ecf;
  }
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = 0;
LAB_148a69ecf:
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a69f03 FUN_148a69f03 body=132 status=ok
// SIG undefined FUN_148a69f03(void)

void FUN_148a69f03(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148a69ddc(&local_28,param_1);
  if (local_28 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_148a69e69(local_28,param_2);
  }
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a69f88 FUN_148a69f88 body=202 status=ok
// SIG undefined FUN_148a69f88(void)

undefined8 FUN_148a69f88(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = (longlong)*(int *)(param_1 + 1);
  local_28 = *param_1;
  local_48 = L"UnspecifiedFile";
  local_40 = 0xf;
  local_58 = 0;
  local_56 = 0;
  local_50 = 0;
  FUN_141183efe(local_38);
  FUN_1446dcc2e(param_2,local_38);
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
  puVar3 = (undefined1 *)*param_2;
  if (puVar3 == (undefined1 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)puVar3 >> 8),*puVar3) & 0xffffffffffffff6b;
    uVar5 = CONCAT71((int7)(uVar4 >> 8),(char)uVar4 == '\x03');
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6a054 FUN_148a6a054 body=248 status=ok
// SIG undefined FUN_148a6a054(void)

undefined8 FUN_148a6a054(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14b3ecf50;
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
  *local_40 = &PTR_FUN_14b4e1090;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1412a3750(&DAT_14cb7df80,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6a14e FUN_148a6a14e body=174 status=ok
// SIG undefined FUN_148a6a14e(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148a6a14e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_148a6b04c(param_1,*param_2);
  if (lVar1 != 0) {
    lVar2 = FUN_143f065cc(param_1,lVar1,param_2 + 1,0);
    if (lVar2 != 0) {
      FUN_144a8da18(lVar2 + 0x60);
      *(byte *)(lVar2 + 0x88) = *(byte *)(lVar2 + 0x88) & 0xfe;
      *(undefined1 *)(lVar2 + 0x89) = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      local_40[0] = param_1;
      FUN_143f06906(param_1 + 0x30,local_40,lVar1,local_40 + 1);
      FUN_1449db362(local_40 + 1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6a1fe FUN_148a6a1fe body=133 status=ok
// SIG undefined FUN_148a6a1fe(void)

undefined8 FUN_148a6a1fe(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  local_20 = local_28;
  iVar1 = FUN_148a72ae6((longlong *)(param_1 + 0xe8),
                        (uint)((ulonglong)local_28 >> 0x20) ^ (uint)local_28);
  if (iVar1 == -1) {
    uVar3 = 0;
  }
  else {
    lVar2 = (longlong)iVar1 * 0x48 + *(longlong *)(param_1 + 0xe8);
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar2 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6a284 FUN_148a6a284 body=372 status=ok
// SIG undefined FUN_148a6a284(void)

void FUN_148a6a284(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined8 **local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined1 local_80 [24];
  longlong local_68;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = param_2;
  FUN_1447a97f4(local_80,param_3);
  local_58 = 0;
  local_50 = 0;
  FUN_148a7253e(&local_58,param_4);
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  FUN_1446efa72(&local_90,0,5,0x10);
  puVar1 = local_90;
  local_88 = 5;
  *local_90 = &PTR_LAB_14b4e1550;
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
  local_90[2] = lVar3;
  *local_90 = &PTR_FUN_14b4e14e0;
  FUN_1447a97f4(local_90 + 3,local_80);
  puVar1[8] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar1 + 9) = local_50;
  local_50 = 0;
  local_a8 = &local_90;
  local_98 = param_1;
  FUN_148a6a3fa(param_1 + 0x30,&local_98,local_a0,param_3);
  FUN_1449db362(&local_90);
  FUN_1449db362(&local_58);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_4);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6a3fa FUN_148a6a3fa body=324 status=ok
// SIG undefined FUN_148a6a3fa(void)

void FUN_148a6a3fa(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  longlong **local_78;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)FUN_14001cc68(200,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4e15c0;
  plVar1 = plVar3 + 2;
  local_58 = (longlong *)*param_5;
  local_78 = &local_58;
  *param_5 = 0;
  local_50 = (longlong *)CONCAT44(local_50._4_4_,*(undefined4 *)(param_5 + 1));
  *(undefined4 *)(param_5 + 1) = 0;
  FUN_148a6bb4a(plVar1,*param_2,param_3,param_4);
  local_68 = plVar1;
  local_60 = plVar3;
  FUN_148a725f8(&local_68,plVar1);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_58 = plVar1;
  local_50 = plVar3;
  FUN_148a7192e(param_1,&local_58);
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6a540 FUN_148a6a540 body=372 status=ok
// SIG undefined FUN_148a6a540(void)

void FUN_148a6a540(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined8 **local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined1 local_80 [24];
  longlong local_68;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = param_2;
  FUN_1447a97f4(local_80,param_3);
  local_58 = 0;
  local_50 = 0;
  FUN_148a7253e(&local_58,param_4);
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  FUN_1446efa72(&local_90,0,5,0x10);
  puVar1 = local_90;
  local_88 = 5;
  *local_90 = &PTR_LAB_14b4e1550;
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
  local_90[2] = lVar3;
  *local_90 = &PTR_FUN_14b4e15e0;
  FUN_1447a97f4(local_90 + 3,local_80);
  puVar1[8] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar1 + 9) = local_50;
  local_50 = 0;
  local_a8 = &local_90;
  local_98 = param_1;
  FUN_148a6a6b6(param_1 + 0x30,&local_98,local_a0,param_3);
  FUN_1449db362(&local_90);
  FUN_1449db362(&local_58);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_4);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6a6b6 FUN_148a6a6b6 body=324 status=ok
// SIG undefined FUN_148a6a6b6(void)

void FUN_148a6a6b6(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  longlong **local_78;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)FUN_14001cc68(200,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4e1650;
  plVar1 = plVar3 + 2;
  local_58 = (longlong *)*param_5;
  local_78 = &local_58;
  *param_5 = 0;
  local_50 = (longlong *)CONCAT44(local_50._4_4_,*(undefined4 *)(param_5 + 1));
  *(undefined4 *)(param_5 + 1) = 0;
  FUN_148a6bf16(plVar1,*param_2,param_3,param_4);
  local_68 = plVar1;
  local_60 = plVar3;
  FUN_148a726c8(&local_68,plVar1);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_58 = plVar1;
  local_50 = plVar3;
  FUN_148a7192e(param_1,&local_58);
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6a7fc FUN_148a6a7fc body=372 status=ok
// SIG undefined FUN_148a6a7fc(void)

void FUN_148a6a7fc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined8 **local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined1 local_80 [24];
  longlong local_68;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = param_2;
  FUN_1447a97f4(local_80,param_3);
  local_58 = 0;
  local_50 = 0;
  FUN_148a72770(&local_58,param_4);
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  FUN_1446efa72(&local_90,0,5,0x10);
  puVar1 = local_90;
  local_88 = 5;
  *local_90 = &PTR_LAB_14b4e3fb0;
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
  local_90[2] = lVar3;
  *local_90 = &PTR_FUN_14b4e1670;
  FUN_1447a97f4(local_90 + 3,local_80);
  puVar1[8] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar1 + 9) = local_50;
  local_50 = 0;
  local_a8 = &local_90;
  local_98 = param_1;
  FUN_148a6a972(param_1 + 0x30,&local_98,local_a0,param_3);
  FUN_1449db362(&local_90);
  FUN_1449db362(&local_58);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_4);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6a972 FUN_148a6a972 body=324 status=ok
// SIG undefined FUN_148a6a972(void)

void FUN_148a6a972(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  longlong **local_78;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)FUN_14001cc68(0xa0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4e16e0;
  plVar1 = plVar3 + 2;
  local_58 = (longlong *)*param_5;
  local_78 = &local_58;
  *param_5 = 0;
  local_50 = (longlong *)CONCAT44(local_50._4_4_,*(undefined4 *)(param_5 + 1));
  *(undefined4 *)(param_5 + 1) = 0;
  FUN_148a6c3c4(plVar1,*param_2,param_3,param_4);
  local_68 = plVar1;
  local_60 = plVar3;
  FUN_148a72862(&local_68,plVar1);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_58 = plVar1;
  local_50 = plVar3;
  FUN_148a7192e(param_1,&local_58);
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6aab8 FUN_148a6aab8 body=396 status=ok
// SIG undefined FUN_148a6aab8(void)

void FUN_148a6aab8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 **local_b0;
  longlong local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined1 local_81;
  undefined1 local_80 [24];
  longlong local_68;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_81 = param_4;
  FUN_1447a97f4(local_80,param_3);
  local_58 = 0;
  local_50 = 0;
  FUN_148a72770(&local_58,param_5);
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,5,0x10);
  puVar1 = local_98;
  local_90 = 5;
  *local_98 = &PTR_LAB_14b4e3fb0;
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
  local_98[2] = lVar3;
  *local_98 = &PTR_FUN_14b4e1700;
  FUN_1447a97f4(local_98 + 3,local_80);
  puVar1[8] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar1 + 9) = local_50;
  local_50 = 0;
  local_b8 = &local_81;
  local_b0 = &local_98;
  local_a0 = param_1;
  FUN_148a6ac46(param_1 + 0x30,&local_a0,param_2,param_3);
  FUN_1449db362(&local_98);
  FUN_1449db362(&local_58);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_5);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6ac46 FUN_148a6ac46 body=232 status=ok
// SIG undefined FUN_148a6ac46(void)

void FUN_148a6ac46(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_6;
  plVar3 = (longlong *)FUN_148a72909(param_2,param_3,param_4,param_5);
  plVar1 = plVar3 + 2;
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_148a72a3e(&local_40,plVar1);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_30 = plVar1;
  local_28 = plVar3;
  FUN_148a7192e(param_1,&local_30);
  plVar1 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6ad30 FUN_148a6ad30 body=222 status=ok
// SIG undefined FUN_148a6ad30(void)

undefined8 FUN_148a6ad30(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    lVar1 = FUN_1400b465c();
    if (lVar1 != 0) {
      lVar2 = FUN_144a79464();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        lVar2 = FUN_1414cf3d2(lVar1);
        if ((*(longlong *)(lVar1 + 0x1e0) != 0) &&
           (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1e0) + 0x30), lVar1 != 0 && lVar2 != 0)) {
          local_48 = 0;
          uStack_40 = 0;
          local_38 = 0;
          local_30 = 0xffff;
          if (param_3 == (undefined8 *)0x0) {
            param_3 = &local_48;
          }
          FUN_140ceec26(lVar2,local_4c,*(undefined4 *)(param_2 + 0x38));
          uVar3 = FUN_140b9fe48(lVar1,local_4c,param_3);
          goto LAB_148a6ad80;
        }
      }
    }
  }
  uVar3 = 0;
LAB_148a6ad80:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6ae10 FUN_148a6ae10 body=139 status=ok
// SIG undefined FUN_148a6ae10(void)

undefined8 FUN_148a6ae10(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  int iVar2;
  
  FUN_148a72c30(param_2,(longlong)(int)param_1[1] * 0x90 + *param_1 + -0x90);
  iVar2 = (int)param_1[1];
  _Src = (void *)((longlong)iVar2 * 0x90 + *param_1);
  _Dst = (void *)((longlong)_Src + -0x90);
  FUN_148a6ae9c(_Dst);
  iVar1 = (int)param_1[1] - iVar2;
  if (iVar1 != 0) {
    memmove(_Dst,_Src,(longlong)iVar1 * 0x90);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_148a72cd8(param_1);
  return param_2;
}



// FUNCTION 148a6ae9c FUN_148a6ae9c body=104 status=ok
// SIG undefined FUN_148a6ae9c(void)

void FUN_148a6ae9c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x58);
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
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148a6af04 FUN_148a6af04 body=68 status=ok
// SIG undefined FUN_148a6af04(void)

void FUN_148a6af04(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_148a6e8c1(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_148a6ee44(param_1,param_2);
  return;
}



// FUNCTION 148a6af4a FUN_148a6af4a body=112 status=ok
// SIG undefined FUN_148a6af4a(void)

void FUN_148a6af4a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0xffff;
  FUN_140fe4ff6(0,param_2,&local_48);
  FUN_141683dd2(param_1,&local_48,param_2,0xffffffff);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6afbc FUN_148a6afbc body=143 status=ok
// SIG undefined FUN_148a6afbc(void)

undefined4 FUN_148a6afbc(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  cVar1 = FUN_1418b3762();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x310))(param_1,param_2,&local_48,param_4);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6b04c FUN_148a6b04c body=189 status=ok
// SIG undefined FUN_148a6b04c(void)

undefined8 FUN_148a6b04c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0 && *(longlong *)(param_1 + 0x70) != 0) {
    lVar2 = FUN_1414cf3d2();
    plVar3 = (longlong *)FUN_140773fe2();
    if (plVar3 != (longlong *)0x0 && lVar2 != 0) {
      FUN_1465630bc(param_2,local_34);
      uVar1 = FUN_140def96c(lVar2,local_34);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x30);
      if (lVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(lVar2 + 0x360);
      }
      uVar4 = (**(code **)(*plVar3 + 0x2d0))(plVar3,uVar1,uVar4);
      goto LAB_148a6b0a2;
    }
  }
  uVar4 = 0;
LAB_148a6b0a2:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6b10a FUN_148a6b10a body=338 status=ok
// SIG undefined FUN_148a6b10a(void)

ulonglong FUN_148a6b10a(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_149e441a0;
  local_40 = local_38 + 2;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  *(undefined4 *)((longlong)local_38 + 0x3c) = 0x80;
  *(undefined4 *)(local_38 + 8) = 0xffffffff;
  uVar5 = (**(code **)(*param_1 + 0x2d8))(param_1,param_2,param_3);
  uVar7 = (ulonglong)uVar5;
  if ((char)uVar5 == '\0') {
    FUN_145fe0690(&local_50,param_4,0);
    cVar4 = FUN_145927d24(&local_40,local_50,1);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_48 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_48)();
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
    }
    uVar7 = CONCAT71((int7)((ulonglong)local_48 >> 8),0xe);
    if (cVar4 != '\0') {
      iVar6 = *(int *)(param_4 + 8) + -1;
      if (*(int *)(param_4 + 8) == 0) {
        iVar6 = 0;
      }
      uVar7 = 0xf;
      if (iVar6 <= *(int *)((longlong)param_1 + 0x44)) {
        uVar7 = 0;
      }
    }
  }
  plVar3 = local_38;
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
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148a6b25e FUN_148a6b25e body=204 status=ok
// SIG undefined FUN_148a6b25e(void)

longlong FUN_148a6b25e(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30);
  local_28 = local_30;
  iVar1 = FUN_148a72ae6((longlong *)(param_1 + 0xe8),
                        (uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
  if (iVar1 != -1) {
    lVar2 = *(longlong *)(param_1 + 0xe8);
    if ((lVar2 + (longlong)iVar1 * 0x48 + 8U & 0xfffffffffffffff7) != 0) {
      lVar2 = lVar2 + (longlong)iVar1 * 0x48;
      lVar3 = (longlong)*(int *)(lVar2 + 0x10);
      if (lVar3 != 0) {
        lVar2 = *(longlong *)(lVar2 + 8);
        lVar3 = lVar3 * 0x90;
        do {
          if (((*(byte *)(lVar2 + 0x88) & 2) != 0) && (*(int *)(lVar2 + 0x10) == *param_3))
          goto LAB_148a6b2d2;
          lVar2 = lVar2 + 0x90;
          lVar3 = lVar3 + -0x90;
        } while (lVar3 != 0);
      }
    }
  }
  lVar2 = 0;
LAB_148a6b2d2:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 148a6b32c FUN_148a6b32c body=247 status=ok
// SIG undefined FUN_148a6b32c(void)

void FUN_148a6b32c(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int *piVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_14485c47a(&local_38);
  local_30 = local_38;
  iVar3 = FUN_148a72ae6((longlong *)(param_1 + 0xe8),
                        (uint)((ulonglong)local_38 >> 0x20) ^ (uint)local_38);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)(param_1 + 0xe8) + (longlong)iVar3 * 0x48;
    plVar5 = (longlong *)(lVar1 + 8);
    if ((plVar5 != (longlong *)0x0 && lVar1 != 0) && (iVar3 = *(int *)(lVar1 + 0x10), 0 < iVar3)) {
      uVar4 = 0;
      bVar2 = false;
      do {
        uVar4 = (ulonglong)(int)uVar4;
        piVar6 = (int *)(*plVar5 + uVar4 * 0x90 + 0x60);
        while (*piVar6 != *param_3) {
          uVar4 = uVar4 + 1;
          piVar6 = piVar6 + 0x24;
          if ((longlong)iVar3 <= (longlong)uVar4) {
            if (!bVar2) goto LAB_148a6b3e5;
            goto LAB_148a6b41a;
          }
        }
        FUN_148a72f68(plVar5,uVar4 & 0xffffffff);
        iVar3 = *(int *)(lVar1 + 0x10);
        bVar2 = true;
      } while ((int)uVar4 < iVar3);
LAB_148a6b41a:
      FUN_148a72cd8(plVar5);
    }
  }
LAB_148a6b3e5:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6b424 FUN_148a6b424 body=403 status=ok
// SIG undefined FUN_148a6b424(void)

undefined8 FUN_148a6b424(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  double dVar8;
  undefined1 auStack_68 [40];
  undefined *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = *(longlong *)(param_2 + 0x50);
  if (lVar6 == 0) {
    plVar4 = (longlong *)FUN_14001cc68(0x98,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_14b4e18b0;
    FUN_143e5f08e(plVar4 + 2);
    if (plVar4 == (longlong *)0x0) {
      *(undefined8 *)(param_2 + 0x50) = 0x10;
      plVar7 = *(longlong **)(param_2 + 0x58);
      lVar6 = 0x10;
      if (plVar7 != (longlong *)0x0) {
        *(undefined8 *)(param_2 + 0x58) = 0;
LAB_148a6b4ae:
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
        if (plVar4 != (longlong *)0x0) goto LAB_148a6b4d2;
        goto LAB_148a6b4ef;
      }
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      *(longlong **)(param_2 + 0x50) = plVar4 + 2;
      plVar7 = *(longlong **)(param_2 + 0x58);
      if (plVar4 == plVar7) {
        LOCK();
        plVar7 = plVar4 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      else {
        *(longlong **)(param_2 + 0x58) = plVar4;
        if (plVar7 != (longlong *)0x0) goto LAB_148a6b4ae;
      }
LAB_148a6b4d2:
      LOCK();
      plVar7 = plVar4 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
LAB_148a6b4ef:
      lVar6 = *(longlong *)(param_2 + 0x50);
    }
    uVar5 = 0xb;
    if (lVar6 == 0) goto LAB_148a6b4fa;
  }
  cVar3 = FUN_148a69e69(param_3,lVar6 + 0x5c);
  uVar5 = 9;
  if (cVar3 != '\0') {
    FUN_1447715ec(lVar6 + 8,param_2 + 0x10);
    *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(param_2 + 0x48);
    local_40 = &DAT_14b4e00e2;
    local_38 = 2;
    dVar8 = (double)FUN_1468393c6(param_3);
    *(int *)(lVar6 + 0x80) = (int)(longlong)dVar8;
    *(undefined1 *)(lVar6 + 0x58) = 3;
    uVar5 = 0;
  }
LAB_148a6b4fa:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6b5ba FUN_148a6b5ba body=386 status=ok
// SIG undefined FUN_148a6b5ba(void)

longlong * FUN_148a6b5ba(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148a6b6cb:
    *puVar5 = &PTR_LAB_14b4da550;
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
    *puVar5 = &PTR_FUN_14b4e1b00;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a6b6cb;
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
    *puVar5 = &PTR_LAB_14b4da550;
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
    *puVar5 = &PTR_FUN_14b4e1b00;
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



// FUNCTION 148a6b73c FUN_148a6b73c body=32 status=ok
// SIG undefined FUN_148a6b73c(void)

undefined8 FUN_148a6b73c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GbxCrossSave::FRegisterPlayerTask");
  return param_2;
}



// FUNCTION 148a6b75c FUN_148a6b75c body=386 status=ok
// SIG undefined FUN_148a6b75c(void)

longlong * FUN_148a6b75c(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148a6b86d:
    *puVar5 = &PTR_LAB_14b4e1be0;
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
    *puVar5 = &PTR_FUN_14b4e1b70;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a6b86d;
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
    *puVar5 = &PTR_LAB_14b4e1be0;
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
    *puVar5 = &PTR_FUN_14b4e1b70;
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



// FUNCTION 148a6b8de FUN_148a6b8de body=232 status=ok
// SIG undefined FUN_148a6b8de(void)

void FUN_148a6b8de(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_6;
  plVar3 = (longlong *)FUN_148a7482d(param_2,param_3,param_4,param_5);
  plVar1 = plVar3 + 2;
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_148a72a3e(&local_40,plVar1);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_30 = plVar1;
  local_28 = plVar3;
  FUN_148a7192e(param_1,&local_30);
  plVar1 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6b9c8 FUN_148a6b9c8 body=386 status=ok
// SIG undefined FUN_148a6b9c8(void)

longlong * FUN_148a6b9c8(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148a6bad9:
    *puVar5 = &PTR_LAB_14b4e3fb0;
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
    *puVar5 = &PTR_FUN_14b4e1d30;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a6bad9;
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
    *puVar5 = &PTR_LAB_14b4e3fb0;
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
    *puVar5 = &PTR_FUN_14b4e1d30;
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



// FUNCTION 148a6bb4a FUN_148a6bb4a body=124 status=ok
// SIG undefined FUN_148a6bb4a(void)

undefined8 *
FUN_148a6bb4a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_143f0738a();
  *param_1 = &PTR_FUN_14b4df540;
  param_1[4] = &PTR_FUN_14b4df568;
  FUN_1447a97f4(param_1 + 0xb,param_4);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  FUN_148a72770(param_1 + 0x15,param_5);
  FUN_1449db362(param_5);
  return param_1;
}



// FUNCTION 148a6bbc6 FUN_148a6bbc6 body=386 status=ok
// SIG undefined FUN_148a6bbc6(void)

longlong * FUN_148a6bbc6(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148a6bcd7:
    *puVar5 = &PTR_LAB_14b4e1e10;
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
    *puVar5 = &PTR_FUN_14b4e1da0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a6bcd7;
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
    *puVar5 = &PTR_LAB_14b4e1e10;
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
    *puVar5 = &PTR_FUN_14b4e1da0;
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



// FUNCTION 148a6bd74 FUN_148a6bd74 body=32 status=ok
// SIG undefined FUN_148a6bd74(void)

undefined8 FUN_148a6bd74(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GbxCrossSave::FAddCloudSaveToLocalTask");
  return param_2;
}



// FUNCTION 148a6bd94 FUN_148a6bd94 body=386 status=ok
// SIG undefined FUN_148a6bd94(void)

longlong * FUN_148a6bd94(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148a6bea5:
    *puVar5 = &PTR_LAB_14b434710;
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
    *puVar5 = &PTR_FUN_14b4e1e80;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a6bea5;
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
    *puVar5 = &PTR_LAB_14b434710;
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
    *puVar5 = &PTR_FUN_14b4e1e80;
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



// FUNCTION 148a6bf16 FUN_148a6bf16 body=124 status=ok
// SIG undefined FUN_148a6bf16(void)

undefined8 *
FUN_148a6bf16(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_143f0738a();
  *param_1 = &PTR_FUN_14b4df5c0;
  param_1[4] = &PTR_FUN_14b4df5e8;
  FUN_1447a97f4(param_1 + 0xb,param_4);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  FUN_148a72770(param_1 + 0x15,param_5);
  FUN_1449db362(param_5);
  return param_1;
}



// FUNCTION 148a6bf92 FUN_148a6bf92 body=224 status=ok
// SIG undefined FUN_148a6bf92(void)

void FUN_148a6bf92(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  longlong local_48 [3];
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_143f0c8c2();
  if (cVar2 == '\0') {
    local_48[0] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    local_30 = 0xffff;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = FUN_14479d2ce(param_1 + 0x3c);
    lVar4 = FUN_148a6ad30(uVar1,uVar3,local_48);
    if (lVar4 == 0) {
      *(undefined1 *)(param_1 + 0x38) = 5;
    }
    else {
      if (local_48[0] != 0) {
        local_68 = FUN_143f0c96a;
        local_60 = 0;
        FUN_148a6c074(local_58,param_1);
        FUN_145840754(local_48[0],lVar4,param_1 + 0x58,local_58);
        FUN_1449db362(local_58);
        goto LAB_148a6bfb4;
      }
      *(undefined1 *)(param_1 + 0x38) = 7;
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
LAB_148a6bfb4:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6c074 FUN_148a6c074 body=386 status=ok
// SIG undefined FUN_148a6c074(void)

longlong * FUN_148a6c074(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148a6c185:
    *puVar5 = &PTR_LAB_14b434d90;
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
    *puVar5 = &PTR_FUN_14b4e1f60;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a6c185;
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
    *puVar5 = &PTR_LAB_14b434d90;
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
    *puVar5 = &PTR_FUN_14b4e1f60;
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



// FUNCTION 148a6c222 FUN_148a6c222 body=32 status=ok
// SIG undefined FUN_148a6c222(void)

undefined8 FUN_148a6c222(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GbxCrossSave::FAddLocalSaveToCloudTask");
  return param_2;
}



// FUNCTION 148a6c242 FUN_148a6c242 body=386 status=ok
// SIG undefined FUN_148a6c242(void)

longlong * FUN_148a6c242(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148a6c353:
    *puVar5 = &PTR_LAB_14b4da550;
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
    *puVar5 = &PTR_FUN_14b4e1fd0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a6c353;
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
    *puVar5 = &PTR_LAB_14b4da550;
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
    *puVar5 = &PTR_FUN_14b4e1fd0;
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



// FUNCTION 148a6c3c4 FUN_148a6c3c4 body=111 status=ok
// SIG undefined FUN_148a6c3c4(void)

undefined8 *
FUN_148a6c3c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_143f0738a();
  *param_1 = &PTR_FUN_14b4df640;
  param_1[4] = &PTR_LAB_14b4df668;
  FUN_1447a97f4(param_1 + 0xb,param_4);
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  FUN_148a7189c(param_1 + 0x10,param_5);
  FUN_1449db362(param_5);
  return param_1;
}



// FUNCTION 148a6c434 FUN_148a6c434 body=243 status=ok
// SIG undefined FUN_148a6c434(void)

void FUN_148a6c434(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  code *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_143f0d19a();
  if (cVar1 == '\0') {
    FUN_143f07518(param_1);
    uVar2 = FUN_14657d4c2();
    local_50 = FUN_143f0d242;
    local_48 = 0;
    FUN_148a6c528(local_40,param_1);
    local_68[0] = 0;
    local_68[1] = 0;
    FUN_1400b2348(param_1 + 0x58,local_68,1);
    FUN_144a882a8(&local_50,local_68,L".sav");
    uVar3 = FUN_14479d2ce(param_1 + 0x3c);
    FUN_148a5df20(uVar2,uVar3,&local_50,local_40);
    if (local_50 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6c528 FUN_148a6c528 body=386 status=ok
// SIG undefined FUN_148a6c528(void)

longlong * FUN_148a6c528(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148a6c639:
    *puVar5 = &PTR_LAB_14b4da550;
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
    *puVar5 = &PTR_FUN_14b4e2040;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a6c639;
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
    *puVar5 = &PTR_LAB_14b4da550;
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
    *puVar5 = &PTR_FUN_14b4e2040;
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



// FUNCTION 148a6c6d0 FUN_148a6c6d0 body=32 status=ok
// SIG undefined FUN_148a6c6d0(void)

undefined8 FUN_148a6c6d0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GbxCrossSave::FRemoveSaveFromCloudTask");
  return param_2;
}



// FUNCTION 148a6c6f0 FUN_148a6c6f0 body=130 status=ok
// SIG undefined FUN_148a6c6f0(void)

undefined8 *
FUN_148a6c6f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  FUN_143f0738a();
  *param_1 = &PTR_FUN_14b4df6c0;
  param_1[4] = &PTR_LAB_14b4df6e8;
  FUN_1447a97f4(param_1 + 0xb,param_4);
  *(undefined1 *)(param_1 + 0x10) = param_5;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  FUN_148a7189c(param_1 + 0x11,param_6);
  param_1[0x13] = 0;
  FUN_1449db362(param_6);
  return param_1;
}



// FUNCTION 148a6c772 FUN_148a6c772 body=386 status=ok
// SIG undefined FUN_148a6c772(void)

longlong * FUN_148a6c772(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148a6c883:
    *puVar5 = &PTR_LAB_14b4e3fb0;
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
    *puVar5 = &PTR_FUN_14b4e2190;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a6c883;
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
    *puVar5 = &PTR_LAB_14b4e3fb0;
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
    *puVar5 = &PTR_FUN_14b4e2190;
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



// FUNCTION 148a6c91a FUN_148a6c91a body=32 status=ok
// SIG undefined FUN_148a6c91a(void)

undefined8 FUN_148a6c91a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GbxCrossSave::FSynchronizeCloudSaveTask");
  return param_2;
}



// FUNCTION 148a6c93a FUN_148a6c93a body=386 status=ok
// SIG undefined FUN_148a6c93a(void)

longlong * FUN_148a6c93a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148a6ca4b:
    *puVar5 = &PTR_LAB_14b4e1e10;
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
    *puVar5 = &PTR_FUN_14b4e2200;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a6ca4b;
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
    *puVar5 = &PTR_LAB_14b4e1e10;
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
    *puVar5 = &PTR_FUN_14b4e2200;
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



// FUNCTION 148a6cabc FUN_148a6cabc body=386 status=ok
// SIG undefined FUN_148a6cabc(void)

longlong * FUN_148a6cabc(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148a6cbcd:
    *puVar5 = &PTR_LAB_14b434710;
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
    *puVar5 = &PTR_FUN_14b4e2270;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a6cbcd;
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
    *puVar5 = &PTR_LAB_14b434710;
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
    *puVar5 = &PTR_FUN_14b4e2270;
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



// FUNCTION 148a6cc3e FUN_148a6cc3e body=89 status=ok
// SIG undefined FUN_148a6cc3e(void)

void FUN_148a6cc3e(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((param_2 != '\0') && (*(char *)(param_1 + 0x30) == '\x01')) {
    plVar1 = (longlong *)FUN_1400b465c();
    if (plVar1 != (longlong *)0x0) {
      lVar2 = FUN_144a79464();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000148a6cc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x4e8))(plVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a6cc98 FUN_148a6cc98 body=385 status=ok
// SIG undefined FUN_148a6cc98(void)

void FUN_148a6cc98(longlong param_1,uint param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar1 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xf0);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xf8) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 0xc) == param_2) {
          if (param_4 != 2) {
            FUN_14581b97a(param_1,param_2);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
          }
          FUN_14591d6f0();
          if (*(int *)(param_1 + 0x3d8) != *(int *)(param_1 + 0x404)) {
            lVar1 = param_1 + 0x408;
            if (*(longlong *)(param_1 + 0x410) != 0) {
              lVar1 = *(longlong *)(param_1 + 0x410);
            }
            iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x418) - 1U & param_2) * 4);
            if (iVar2 != -1) {
              goto LAB_148a6cd72;
            }
          }
          break;
        }
        iVar2 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 0xc + 4);
      } while (iVar2 != -1);
    }
  }
  goto LAB_148a6cd07;
  while (iVar2 = *(int *)(lVar1 + 0x58), iVar2 != -1) {
LAB_148a6cd72:
    lVar1 = *(longlong *)(param_1 + 0x3d0) + (longlong)iVar2 * 0x60;
    if (*(uint *)(*(longlong *)(param_1 + 0x3d0) + (longlong)iVar2 * 0x60) == param_2) {
      if (lVar1 + 8 != 0 && lVar1 != 0) {
        local_38 = 0;
        uStack_30 = 0;
        FUN_14127d5bc(lVar1 + 8,&local_38);
        FUN_1462223c8(param_1,param_2,&local_38);
        FUN_146222600(param_1,param_2,&local_38);
        FUN_146222160(param_1,&local_38);
        FUN_140b6c1c2(local_38,uStack_30 & 0xffffffff);
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      break;
    }
  }
LAB_148a6cd07:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a6ce2c FUN_148a6ce2c body=165 status=ok
// SIG undefined FUN_148a6ce2c(void)

void FUN_148a6ce2c(longlong param_1,uint param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar1 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xf0);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xf8) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 0xc) == param_2) {
          if (param_4 == 1) {
            FUN_14581b86c(param_1,param_2);
            FUN_144a7cc9e(param_1 + 0x330,param_2);
            return;
          }
          if (param_4 != 2) {
            return;
          }
          FUN_14591d144(param_1,param_2);
          return;
        }
        iVar2 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 0xc + 4);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 148a6cee0 FUN_148a6cee0 body=276 status=ok
// SIG undefined FUN_148a6cee0(void)

void FUN_148a6cee0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0xb0);
  lVar2 = param_1 + 0xc0;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0xd8) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0xd8);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (uStack_50 != lVar2)) {
    do {
      FUN_148a6cff6(param_1,*(undefined4 *)(*local_80 + (longlong)iStack_64 * 0xc),param_2);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar3));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6cff6 FUN_148a6cff6 body=205 status=ok
// SIG undefined FUN_148a6cff6(void)

void FUN_148a6cff6(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
      lVar1 = param_1 + 0x318;
      if (*(longlong *)(param_1 + 800) != 0) {
        lVar1 = *(longlong *)(param_1 + 800);
      }
      iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x328) - 1U & param_2) * 4);
      if (iVar2 != -1) {
        do {
          if (*(uint *)(*(longlong *)(param_1 + 0x2e0) + (longlong)iVar2 * 0xc) == param_2)
          goto LAB_148a6d0be;
          iVar2 = *(int *)(*(longlong *)(param_1 + 0x2e0) + (longlong)iVar2 * 0xc + 4);
        } while (iVar2 != -1);
      }
    }
  }
  else if (*(int *)(param_1 + 0x338) != *(int *)(param_1 + 0x364)) {
    lVar1 = param_1 + 0x368;
    if (*(longlong *)(param_1 + 0x370) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x370);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x378) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0x330) + (longlong)iVar2 * 0xc) == param_2) {
LAB_148a6d0be:
          FUN_14591dd0c();
          return;
        }
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x330) + (longlong)iVar2 * 0xc + 4);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 148a6d0c4 FUN_148a6d0c4 body=9 status=ok
// SIG undefined FUN_148a6d0c4(void)

void FUN_148a6d0c4(longlong param_1)

{
  FUN_148a77702(param_1 + 0x60);
  return;
}



// FUNCTION 148a6d0ce FUN_148a6d0ce body=1196 status=ok
// SIG undefined FUN_148a6d0ce(void)

void FUN_148a6d0ce(longlong *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58;
  longlong *local_50;
  undefined2 local_43;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = param_1 + 0x15;
  cVar5 = FUN_144729dda(plVar3);
  if (cVar5 != '\0') {
    uVar6 = FUN_14479d2ce(plVar3);
    lVar7 = FUN_14127ae7a(uVar6,param_2);
    if ((lVar7 != 0) && ((int)param_1[0x17] != *(int *)((longlong)param_1 + 0xe4))) {
      uVar2 = *(uint *)(lVar7 + 0xe0);
      plVar8 = param_1 + 0x1d;
      if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
        plVar8 = (longlong *)param_1[0x1e];
      }
      iVar11 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[0x1f] - 1U & uVar2) * 4);
      if (iVar11 != -1) {
        do {
          if (*(uint *)(param_1[0x16] + (longlong)iVar11 * 0xc) == uVar2) {
            lVar9 = FUN_14479d2ce(plVar3);
            lVar9 = *(longlong *)(lVar9 + 0x48);
            if (lVar9 != 0) {
              lVar10 = FUN_140b7066c();
              if (((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) &&
                 (cVar5 = FUN_140b6d060(lVar9), cVar5 != '\0')) break;
            }
            cVar5 = FUN_145cf80ce(param_1,uVar2,param_3);
            if (cVar5 == '\0') {
              uVar6 = FUN_140b708a0(param_1);
              FUN_140b6e166(&local_58,uVar6,param_3);
              if ((local_58 != 0) && (cVar5 = FUN_145cf80ce(param_1,uVar2), cVar5 != '\0'))
              goto LAB_148a6d320;
              plVar3 = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_50 + 1;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)*plVar8 == 0) {
                  (**(code **)*local_50)(local_50);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar3 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                  }
                }
              }
              uVar6 = FUN_140b6de3c();
              FUN_140b6df48(uVar6,&local_58,lVar7,param_3);
              if (local_58 == 0) {
                uVar6 = FUN_140b6de3c();
                local_68 = (undefined8 *)0x0;
                local_60 = 0;
                FUN_1446efa72(&local_68,0,4,0x10);
                local_60 = 4;
                plVar3 = (longlong *)param_1[2];
                if (plVar3 == (longlong *)0x0) goto LAB_148a6d498;
                iVar11 = (int)plVar3[1];
                goto LAB_148a6d3ab;
              }
              if (param_4 != '\0') {
                local_78 = local_58;
                local_70 = local_50;
                if (local_50 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_50 + 1) = (int)local_50[1] + 1;
                  UNLOCK();
                }
                (**(code **)(*param_1 + 0x38))(param_1,uVar2,&local_78);
                plVar3 = local_70;
                if (local_70 != (longlong *)0x0) {
                  LOCK();
                  plVar8 = local_70 + 1;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)*plVar8 == 0) {
                    (**(code **)*local_70)(local_70);
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
              local_70 = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_50 + 1) = (int)local_50[1] + 1;
                UNLOCK();
              }
              local_78 = local_58;
              (**(code **)(*param_1 + 0x40))(param_1,uVar2,&local_78);
              goto LAB_148a6d2fa;
            }
            break;
          }
          iVar11 = *(int *)(param_1[0x16] + (longlong)iVar11 * 0xc + 4);
        } while (iVar11 != -1);
      }
    }
  }
  goto LAB_148a6d133;
LAB_148a6d498:
  *local_68 = &PTR_LAB_14b4e4d80;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_68[2] = lVar10;
  *local_68 = &PTR_FUN_14b4e2ed0;
  local_68[3] = 0;
  local_68[4] = 0;
  local_68[5] = param_1;
  *(uint *)(local_68 + 6) = uVar2;
  *(char *)((longlong)local_68 + 0x34) = param_4;
  *(undefined2 *)((longlong)local_68 + 0x35) = local_43;
  *(undefined1 *)((longlong)local_68 + 0x37) = local_41;
  goto LAB_148a6d4ee;
  while( true ) {
    LOCK();
    iVar4 = (int)plVar3[1];
    bVar13 = iVar11 == iVar4;
    if (bVar13) {
      *(int *)(plVar3 + 1) = iVar11 + 1;
      iVar4 = iVar11;
    }
    iVar11 = iVar4;
    UNLOCK();
    if (bVar13) break;
LAB_148a6d3ab:
    if (iVar11 == 0) goto LAB_148a6d498;
  }
  lVar9 = param_1[1];
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
  *local_68 = &PTR_LAB_14b4e4d80;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_68[2] = lVar12;
  *local_68 = &PTR_FUN_14b4e2ed0;
  local_68[3] = lVar9;
  local_68[4] = plVar3;
  LOCK();
  *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
  UNLOCK();
  local_68[5] = param_1;
  *(uint *)(local_68 + 6) = uVar2;
  *(char *)((longlong)local_68 + 0x34) = param_4;
  *(undefined2 *)((longlong)local_68 + 0x35) = local_43;
  *(undefined1 *)((longlong)local_68 + 0x37) = local_41;
  LOCK();
  plVar8 = plVar3 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  LOCK();
  plVar8 = plVar3 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  LOCK();
  plVar8 = plVar3 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_148a6d4ee:
  local_70 = *(longlong **)(param_3 + 0x10);
  if (local_70 == (longlong *)0x0) {
LAB_148a6d50a:
    local_70 = (longlong *)0x0;
  }
  else {
    iVar11 = (int)local_70[1];
    do {
      if (iVar11 == 0) goto LAB_148a6d50a;
      LOCK();
      iVar4 = (int)local_70[1];
      bVar13 = iVar11 == iVar4;
      if (bVar13) {
        *(int *)(local_70 + 1) = iVar11 + 1;
        iVar4 = iVar11;
      }
      iVar11 = iVar4;
      UNLOCK();
    } while (!bVar13);
  }
  local_78 = 0;
  if (local_70 != (longlong *)0x0) {
    local_78 = *(longlong *)(param_3 + 8);
  }
  FUN_141335bfe(uVar6,lVar7,&local_78,&local_68);
LAB_148a6d2fa:
  plVar3 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_70 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_148a6d320:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
LAB_148a6d133:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a6d57c FUN_148a6d57c body=365 status=ok
// SIG undefined FUN_148a6d57c(void)

ulonglong FUN_148a6d57c(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  undefined7 uVar7;
  undefined1 auStack_78 [32];
  undefined8 **local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 *local_40;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_3 + 0x10))(param_3,&local_40);
  FUN_140b708a0(param_1);
  local_50 = local_40;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_38);
    plVar4 = local_38;
    if (local_38 != (longlong *)0x0) {
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,2,0x10);
      local_48 = 2;
      *local_50 = &PTR_LAB_14b438950;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_50[2] = lVar5;
      *local_50 = &PTR_FUN_14b4e2e60;
      local_58 = &local_50;
      param_2 = (**(code **)(*plVar4 + 0xf8))(plVar4,param_2,param_3,&DAT_14cb97068);
      FUN_1449db362(&local_50);
      uVar7 = (undefined7)((ulonglong)param_3 >> 8);
      bVar6 = 1;
      goto LAB_148a6d689;
    }
  }
  bVar6 = 0;
  uVar7 = 0;
LAB_148a6d689:
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71(uVar7,bVar6 & (byte)param_2) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6d6ea FUN_148a6d6ea body=218 status=ok
// SIG undefined FUN_148a6d6ea(void)

ulonglong FUN_148a6d6ea(longlong **param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  byte bVar5;
  undefined7 uVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_3 + 0x10))(param_3,&local_50);
  FUN_140b708a0(param_1);
  local_30 = local_50;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    param_1 = &local_48;
    (**(code **)(*plVar4 + 0x28))(plVar4,param_1);
    if (local_48 != (longlong *)0x0) {
      bVar3 = (**(code **)(*local_48 + 0x140))(local_48,param_2,param_3,&DAT_14cb97068);
      uVar6 = (undefined7)((ulonglong)param_3 >> 8);
      bVar5 = 1;
      goto LAB_148a6d778;
    }
  }
  bVar3 = (byte)param_1;
  bVar5 = 0;
  uVar6 = 0;
LAB_148a6d778:
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71(uVar6,bVar5 & bVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6d7c6 FUN_148a6d7c6 body=211 status=ok
// SIG undefined FUN_148a6d7c6(void)

ulonglong FUN_148a6d7c6(longlong **param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  byte bVar5;
  undefined7 uVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_3 + 0x10))(param_3,&local_50);
  FUN_140b708a0(param_1);
  local_30 = local_50;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    param_1 = &local_48;
    (**(code **)(*plVar4 + 0x28))(plVar4,param_1);
    if (local_48 != (longlong *)0x0) {
      bVar3 = (**(code **)(*local_48 + 0x260))(local_48,param_2,param_3);
      uVar6 = (undefined7)((ulonglong)param_3 >> 8);
      bVar5 = 1;
      goto LAB_148a6d84d;
    }
  }
  bVar3 = (byte)param_1;
  bVar5 = 0;
  uVar6 = 0;
LAB_148a6d84d:
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71(uVar6,bVar5 & bVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6d89a FUN_148a6d89a body=211 status=ok
// SIG undefined FUN_148a6d89a(void)

ulonglong FUN_148a6d89a(longlong **param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  byte bVar5;
  undefined7 uVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_3 + 0x10))(param_3,&local_50);
  FUN_140b708a0(param_1);
  local_30 = local_50;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    param_1 = &local_48;
    (**(code **)(*plVar4 + 0x28))(plVar4,param_1);
    if (local_48 != (longlong *)0x0) {
      bVar3 = (**(code **)(*local_48 + 0x268))(local_48,param_2,param_3);
      uVar6 = (undefined7)((ulonglong)param_3 >> 8);
      bVar5 = 1;
      goto LAB_148a6d921;
    }
  }
  bVar3 = (byte)param_1;
  bVar5 = 0;
  uVar6 = 0;
LAB_148a6d921:
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71(uVar6,bVar5 & bVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6d96e FUN_148a6d96e body=228 status=ok
// SIG undefined FUN_148a6d96e(void)

undefined4 FUN_148a6d96e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x10))(param_2,&local_40);
  FUN_140b708a0(param_1);
  local_28 = local_40;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_38);
    plVar4 = local_38;
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x178))(local_38,&local_44,param_2);
      uVar3 = (**(code **)(*plVar4 + 0x188))(plVar4,local_44);
      goto LAB_148a6da0b;
    }
  }
  uVar3 = 0xffffffff;
LAB_148a6da0b:
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



// FUNCTION 148a6da54 FUN_148a6da54 body=185 status=ok
// SIG undefined FUN_148a6da54(void)

void FUN_148a6da54(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  uint local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = (uint)param_2;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar1 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xf0);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xf8) - 1U & local_14) * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar3 * 0xc) == local_14) {
          uVar2 = FUN_141429bf2(param_1 + 0x470,param_2,&local_14);
          FUN_1465803e2(uVar2,local_18,param_3,0);
          break;
        }
        iVar3 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6db0e FUN_148a6db0e body=96 status=ok
// SIG undefined FUN_148a6db0e(void)

undefined8 FUN_148a6db0e(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  FUN_143f11f7a(&local_20,param_1 + 0x380);
  FUN_143f11f7a(&local_20,param_1 + 0x3d0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6db70 FUN_148a6db70 body=289 status=ok
// SIG undefined FUN_148a6db70(void)

void FUN_148a6db70(longlong param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_38 [32];
  undefined2 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != param_2) {
    *(int *)(param_1 + 0x50) = param_2;
    if ((param_2 != 2) != (iVar1 != 2)) {
      FUN_140898514(param_1 + 0x18,param_2 != 2);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb970b0) {
      FUN_144b3d300(&DAT_14cb970b0);
      if (DAT_14cb970b0 == -1) {
        if ((ulonglong)*(uint *)(param_1 + 0x50) < 3) {
          local_18 = (undefined2 *)(&PTR_u_Unknown_14b4e4f08)[*(uint *)(param_1 + 0x50)];
        }
        else {
          local_18 = &DAT_149dfb77a;
        }
        DAT_14cb970a8 = FUN_145e0b1d6(0x96);
        _Init_thread_footer(&DAT_14cb970b0);
      }
    }
    cVar2 = FUN_141567e7e(DAT_14cb970a8,0);
    if (cVar2 != '\0') {
      if ((ulonglong)*(uint *)(param_1 + 0x50) < 3) {
        local_18 = (undefined2 *)(&PTR_u_Unknown_14b4e4f08)[*(uint *)(param_1 + 0x50)];
      }
      else {
        local_18 = &DAT_149dfb77a;
      }
      FUN_1415680c4(DAT_14cb970a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6dc96 FUN_148a6dc96 body=42 status=ok
// SIG undefined FUN_148a6dc96(void)

undefined1 FUN_148a6dc96(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxCrossSaveManager.h",
                0x157,L"Pure virtual not implemented (%s)",L"GenerateLocalNameForCloudName");
  return 1;
}



// FUNCTION 148a6dcc0 FUN_148a6dcc0 body=45 status=ok
// SIG undefined FUN_148a6dcc0(void)

longlong FUN_148a6dcc0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1415d7218(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6dd04 FUN_148a6dd04 body=42 status=ok
// SIG undefined FUN_148a6dd04(void)

undefined8 FUN_148a6dd04(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x7e,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::IsReturnToMenuInProgress");
  return 0;
}



// FUNCTION 148a6dd2e FUN_148a6dd2e body=41 status=ok
// SIG undefined FUN_148a6dd2e(void)

void FUN_148a6dd2e(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x7f,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::ReturnToTitleScreenWithError");
  return;
}



// FUNCTION 148a6dd58 FUN_148a6dd58 body=41 status=ok
// SIG undefined FUN_148a6dd58(void)

void FUN_148a6dd58(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x80,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::ReturnToTitleScreen");
  return;
}



// FUNCTION 148a6dd82 FUN_148a6dd82 body=41 status=ok
// SIG undefined FUN_148a6dd82(void)

void FUN_148a6dd82(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x81,L"Pure virtual not implemented (%s)",L"UGbxOnlineLoginManager::TitleLogin");
  return;
}



// FUNCTION 148a6ddac FUN_148a6ddac body=41 status=ok
// SIG undefined FUN_148a6ddac(void)

void FUN_148a6ddac(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x82,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::SplitscreenLogin");
  return;
}



// FUNCTION 148a6ddd8 FUN_148a6ddd8 body=41 status=ok
// SIG undefined FUN_148a6ddd8(void)

void FUN_148a6ddd8(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x8d,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::SetTitleScreenMessage");
  return;
}



// FUNCTION 148a6de02 FUN_148a6de02 body=41 status=ok
// SIG undefined FUN_148a6de02(void)

void FUN_148a6de02(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x8f,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::ShowRolloutMessage");
  return;
}



// FUNCTION 148a6de2c FUN_148a6de2c body=41 status=ok
// SIG undefined FUN_148a6de2c(void)

void FUN_148a6de2c(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x8e,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::ShowRolloutMessage");
  return;
}



// FUNCTION 148a6de56 FUN_148a6de56 body=41 status=ok
// SIG undefined FUN_148a6de56(void)

void FUN_148a6de56(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x90,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::ShowLoginErrorMessage");
  return;
}



// FUNCTION 148a6de80 FUN_148a6de80 body=41 status=ok
// SIG undefined FUN_148a6de80(void)

void FUN_148a6de80(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x91,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::ShowAgeVerificationMessage");
  return;
}



// FUNCTION 148a6deaa FUN_148a6deaa body=56 status=ok
// SIG undefined FUN_148a6deaa(void)

undefined8 FUN_148a6deaa(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x93,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::GetServiceLostMessage");
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 148a6dee2 FUN_148a6dee2 body=41 status=ok
// SIG undefined FUN_148a6dee2(void)

void FUN_148a6dee2(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x94,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::ShowServiceLostMessage");
  return;
}



// FUNCTION 148a6df0c FUN_148a6df0c body=41 status=ok
// SIG undefined FUN_148a6df0c(void)

void FUN_148a6df0c(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x95,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::ShowServiceRestoredMessage");
  return;
}



// FUNCTION 148a6df36 FUN_148a6df36 body=41 status=ok
// SIG undefined FUN_148a6df36(void)

void FUN_148a6df36(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x96,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::ShowSplitscreenJoinInProgressMessage");
  return;
}



// FUNCTION 148a6df60 FUN_148a6df60 body=41 status=ok
// SIG undefined FUN_148a6df60(void)

void FUN_148a6df60(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x97,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::HideSplitscreenJoinInProgressMessage");
  return;
}



// FUNCTION 148a6df8a FUN_148a6df8a body=41 status=ok
// SIG undefined FUN_148a6df8a(void)

void FUN_148a6df8a(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x99,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::CloseDestructiveActionPrompt");
  return;
}



// FUNCTION 148a6dfb4 FUN_148a6dfb4 body=77 status=ok
// SIG undefined FUN_148a6dfb4(void)

void FUN_148a6dfb4(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x9a,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::ShowFirstTimeCalibration");
  if ((longlong *)*param_3 == (longlong *)0x0 || (int)param_3[1] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148a6dffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_3 + 0x60))();
  return;
}



// FUNCTION 148a6e002 FUN_148a6e002 body=82 status=ok
// SIG undefined FUN_148a6e002(void)

void FUN_148a6e002(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x9b,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::ShowEulasForPlayer");
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148a6e051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(plVar1,0);
  return;
}



// FUNCTION 148a6e054 FUN_148a6e054 body=41 status=ok
// SIG undefined FUN_148a6e054(void)

void FUN_148a6e054(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x9c,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::ValidatePatchWithUser");
  return;
}



// FUNCTION 148a6e07e FUN_148a6e07e body=77 status=ok
// SIG undefined FUN_148a6e07e(void)

void FUN_148a6e07e(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x9d,L"Pure virtual not implemented (%s)",L"UGbxOnlineLoginManager::EnumerateDlc");
  if ((longlong *)*param_3 == (longlong *)0x0 || (int)param_3[1] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148a6e0c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_3 + 0x60))();
  return;
}



// FUNCTION 148a6e0cc FUN_148a6e0cc body=139 status=ok
// SIG undefined FUN_148a6e0cc(void)

void FUN_148a6e0cc(void)

{
  longlong *plVar1;
  longlong *in_stack_00000028;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x9e,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::ShowUpdateShiftDisplayNamePrompt");
  local_28[0] = 0;
  local_28[1] = 0;
  plVar1 = (longlong *)*in_stack_00000028;
  if (plVar1 != (longlong *)0x0 && (int)in_stack_00000028[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6e158 FUN_148a6e158 body=77 status=ok
// SIG undefined FUN_148a6e158(void)

void FUN_148a6e158(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x9f,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::ShowAgeVerificationPrompt");
  if ((longlong *)*param_3 == (longlong *)0x0 || (int)param_3[1] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148a6e1a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_3 + 0x60))();
  return;
}



// FUNCTION 148a6e1a6 FUN_148a6e1a6 body=41 status=ok
// SIG undefined FUN_148a6e1a6(void)

void FUN_148a6e1a6(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0xa1,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::HandleSplitscreenPlayerPlatformUsernameAvailable");
  return;
}



// FUNCTION 148a6e1de FUN_148a6e1de body=45 status=ok
// SIG undefined FUN_148a6e1de(void)

longlong FUN_148a6e1de(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1415453aa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6e21c FUN_148a6e21c body=43 status=ok
// SIG undefined FUN_148a6e21c(void)

void FUN_148a6e21c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,1);
  }
  FUN_1449db362(param_2);
  return;
}



// FUNCTION 148a6e248 FUN_148a6e248 body=44 status=ok
// SIG undefined FUN_148a6e248(void)

void FUN_148a6e248(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  if (((int)param_3[1] != 0) && (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,0);
  }
  FUN_1449db362(param_3);
  return;
}



// FUNCTION 148a6e274 FUN_148a6e274 body=44 status=ok
// SIG undefined FUN_148a6e274(void)

void FUN_148a6e274(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  if (((int)param_3[1] != 0) && (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,1);
  }
  FUN_1449db362(param_3);
  return;
}



// FUNCTION 148a6e2a0 FUN_148a6e2a0 body=43 status=ok
// SIG undefined FUN_148a6e2a0(void)

void FUN_148a6e2a0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,1);
  }
  FUN_1449db362(param_2);
  return;
}



// FUNCTION 148a6e2ec FUN_148a6e2ec body=42 status=ok
// SIG undefined FUN_148a6e2ec(void)

undefined8 FUN_148a6e2ec(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineSessionClient.h"
                ,0xe0,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineSessionClient::IsLoadingScreenActive");
  return 0;
}



// FUNCTION 148a6e326 FUN_148a6e326 body=41 status=ok
// SIG undefined FUN_148a6e326(void)

void FUN_148a6e326(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineSessionClient.h"
                ,0x102,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineSessionClient::ShowConnectionLostMessage");
  return;
}



// FUNCTION 148a6e350 FUN_148a6e350 body=41 status=ok
// SIG undefined FUN_148a6e350(void)

void FUN_148a6e350(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineSessionClient.h"
                ,0x103,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineSessionClient::ShowConnectionRestoredMessage");
  return;
}



// FUNCTION 148a6e37a FUN_148a6e37a body=81 status=ok
// SIG undefined FUN_148a6e37a(void)

longlong * FUN_148a6e37a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineSessionClient.h"
                ,0x104,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineSessionClient::GetConnectionLostMessage");
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  return param_2;
}



// FUNCTION 148a6e3e0 FUN_148a6e3e0 body=41 status=ok
// SIG undefined FUN_148a6e3e0(void)

void FUN_148a6e3e0(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxSocialSubsystem.h",
                0x7f,L"Pure virtual not implemented (%s)",L"UGbxSocialSubsystem::ShowErrorMessage");
  return;
}



// FUNCTION 148a6e40a FUN_148a6e40a body=52 status=ok
// SIG undefined FUN_148a6e40a(void)

void FUN_148a6e40a(void)

{
  undefined8 in_R9;
  
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxSocialSubsystem.h",
                0x81,L"Pure virtual not implemented (%s)",
                L"UGbxSocialSubsystem::ShowConfirmationPrompt");
  FUN_1449db362(in_R9);
  return;
}



// FUNCTION 148a6e43e FUN_148a6e43e body=41 status=ok
// SIG undefined FUN_148a6e43e(void)

void FUN_148a6e43e(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxSocialSubsystem.h",
                0x82,L"Pure virtual not implemented (%s)",L"UGbxSocialSubsystem::ShowReportPlayerUI"
               );
  return;
}



// FUNCTION 148a6e46c FUN_148a6e46c body=41 status=ok
// SIG undefined FUN_148a6e46c(void)

void FUN_148a6e46c(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxVoice.h",0x8a,
                L"Pure virtual not implemented (%s)",L"UGbxVoice::BindGameDelegates");
  return;
}



// FUNCTION 148a6e496 FUN_148a6e496 body=41 status=ok
// SIG undefined FUN_148a6e496(void)

void FUN_148a6e496(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxVoice.h",0x8b,
                L"Pure virtual not implemented (%s)",L"UGbxVoice::UnbindGameDelegates");
  return;
}



// FUNCTION 148a6e4c0 FUN_148a6e4c0 body=42 status=ok
// SIG undefined FUN_148a6e4c0(void)

undefined8 FUN_148a6e4c0(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxVoice.h",0xb5,
                L"Pure virtual not implemented (%s)",L"UGbxVoice::AreRemoteUsersInSession");
  return 0;
}



// FUNCTION 148a6e4ea FUN_148a6e4ea body=41 status=ok
// SIG undefined FUN_148a6e4ea(void)

void FUN_148a6e4ea(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxVoice.h",0xb7,
                L"Pure virtual not implemented (%s)",L"UGbxVoice::OnAddLocalUserSuccess");
  return;
}



// FUNCTION 148a6e514 FUN_148a6e514 body=41 status=ok
// SIG undefined FUN_148a6e514(void)

void FUN_148a6e514(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxVoice.h",0xb8,
                L"Pure virtual not implemented (%s)",L"UGbxVoice::OnAddLocalUserFailed");
  return;
}



// FUNCTION 148a6e53e FUN_148a6e53e body=41 status=ok
// SIG undefined FUN_148a6e53e(void)

void FUN_148a6e53e(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxVoice.h",0xb9,
                L"Pure virtual not implemented (%s)",L"UGbxVoice::OnRemoveLocalUserSuccess");
  return;
}



// FUNCTION 148a6e568 FUN_148a6e568 body=41 status=ok
// SIG undefined FUN_148a6e568(void)

void FUN_148a6e568(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxVoice.h",0xba,
                L"Pure virtual not implemented (%s)",L"UGbxVoice::OnRemoveLocalUserFailed");
  return;
}



// FUNCTION 148a6e592 FUN_148a6e592 body=32 status=ok
// SIG undefined FUN_148a6e592(void)

undefined8 FUN_148a6e592(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"unset");
  return param_2;
}



// FUNCTION 148a6e5b2 FUN_148a6e5b2 body=32 status=ok
// SIG undefined FUN_148a6e5b2(void)

undefined8 FUN_148a6e5b2(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"unset");
  return param_2;
}



// FUNCTION 148a6e5d6 FUN_148a6e5d6 body=38 status=ok
// SIG undefined FUN_148a6e5d6(void)

undefined8 FUN_148a6e5d6(undefined8 param_1,int param_2)

{
  FUN_145a11054();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6e5fc FUN_148a6e5fc body=32 status=ok
// SIG undefined FUN_148a6e5fc(void)

undefined8 FUN_148a6e5fc(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FCanPlayOnlineTask");
  return param_2;
}



// FUNCTION 148a6e61c FUN_148a6e61c body=36 status=ok
// SIG undefined FUN_148a6e61c(void)

void FUN_148a6e61c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1411ebbe4();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148a6e640 FUN_148a6e640 body=45 status=ok
// SIG undefined FUN_148a6e640(void)

longlong FUN_148a6e640(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145a11054(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6e66e FUN_148a6e66e body=73 status=ok
// SIG undefined FUN_148a6e66e(void)

undefined8 * FUN_148a6e66e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4df2f0;
  FUN_1449db362(param_1 + 5);
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



// FUNCTION 148a6e6b8 FUN_148a6e6b8 body=38 status=ok
// SIG undefined FUN_148a6e6b8(void)

undefined8 FUN_148a6e6b8(undefined8 param_1,int param_2)

{
  FUN_145c3f51c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6e6de FUN_148a6e6de body=38 status=ok
// SIG undefined FUN_148a6e6de(void)

undefined8 FUN_148a6e6de(undefined8 param_1,int param_2)

{
  FUN_145db3144();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6e706 FUN_148a6e706 body=38 status=ok
// SIG undefined FUN_148a6e706(void)

undefined8 FUN_148a6e706(undefined8 param_1,int param_2)

{
  FUN_143f16a8e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6e72c FUN_148a6e72c body=38 status=ok
// SIG undefined FUN_148a6e72c(void)

undefined8 FUN_148a6e72c(undefined8 param_1,int param_2)

{
  FUN_143f17bca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6e752 FUN_148a6e752 body=38 status=ok
// SIG undefined FUN_148a6e752(void)

undefined8 FUN_148a6e752(undefined8 param_1,int param_2)

{
  FUN_143f17f34();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6e778 FUN_148a6e778 body=90 status=ok
// SIG undefined FUN_148a6e778(void)

undefined8 * FUN_148a6e778(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4df640;
  param_1[4] = &PTR_LAB_14b4df668;
  FUN_1449db362(param_1 + 0x10);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_143f15f74(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6e7d2 FUN_148a6e7d2 body=90 status=ok
// SIG undefined FUN_148a6e7d2(void)

undefined8 * FUN_148a6e7d2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4df6c0;
  param_1[4] = &PTR_LAB_14b4df6e8;
  FUN_1449db362(param_1 + 0x11);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_143f15f74(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6e834 FUN_148a6e834 body=38 status=ok
// SIG undefined FUN_148a6e834(void)

undefined8 FUN_148a6e834(undefined8 param_1,int param_2)

{
  FUN_1415515e0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6e85a FUN_148a6e85a body=38 status=ok
// SIG undefined FUN_148a6e85a(void)

undefined8 FUN_148a6e85a(undefined8 param_1,int param_2)

{
  FUN_145aab9be();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6e880 FUN_148a6e880 body=65 status=ok
// SIG undefined FUN_148a6e880(void)

undefined8 * FUN_148a6e880(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4dfb18;
  if (param_1[1] != 0) {
    FUN_1411ebbe4();
    param_1[1] = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6e8c1 FUN_148a6e8c1 body=51 status=ok
// SIG undefined FUN_148a6e8c1(void)

void FUN_148a6e8c1(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148a6e984 FUN_148a6e984 body=59 status=ok
// SIG undefined FUN_148a6e984(void)

undefined8 FUN_148a6e984(longlong *param_1)

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



// FUNCTION 148a6ea26 FUN_148a6ea26 body=90 status=ok
// SIG undefined FUN_148a6ea26(void)

void FUN_148a6ea26(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *param_2 = &PTR_FUN_14b4e3f80;
  param_2[4] = 0x3200000064;
  *(undefined4 *)(param_2 + 5) = 0xfa;
  return;
}



// FUNCTION 148a6ea80 FUN_148a6ea80 body=71 status=ok
// SIG undefined FUN_148a6ea80(void)

void FUN_148a6ea80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *param_2 = &PTR_FUN_14b4e3f80;
  param_2[4] = 0x3200000064;
  *(undefined4 *)(param_2 + 5) = 0xfa;
  return;
}



// FUNCTION 148a6eaec FUN_148a6eaec body=111 status=ok
// SIG undefined FUN_148a6eaec(void)

undefined8 FUN_148a6eaec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x18 + lVar1) = *(undefined4 *)(param_3 + 0x18 + lVar1);
      *(undefined4 *)(param_2 + 0x28 + lVar1) = *(undefined4 *)(param_3 + 0x28 + lVar1);
      *(undefined8 *)(param_2 + 0x20 + lVar1) = *(undefined8 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a6eb84 FUN_148a6eb84 body=59 status=ok
// SIG undefined FUN_148a6eb84(void)

undefined8 FUN_148a6eb84(longlong *param_1)

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



// FUNCTION 148a6ebca FUN_148a6ebca body=51 status=ok
// SIG undefined FUN_148a6ebca(void)

void FUN_148a6ebca(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    FUN_144a659aa(param_2);
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 148a6ec4c FUN_148a6ec4c body=60 status=ok
// SIG undefined FUN_148a6ec4c(void)

undefined8 * FUN_148a6ec4c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  FUN_144a659aa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6ec88 FUN_148a6ec88 body=55 status=ok
// SIG undefined FUN_148a6ec88(void)

void FUN_148a6ec88(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb96ed0 == 0) {
    uVar1 = FUN_141462c07();
    DAT_14cb96ed0 = FUN_140002ddd(FUN_14657f0e3,uVar1,L"GbxMatchmakingGlobals");
  }
  return;
}



// FUNCTION 148a6ecc0 FUN_148a6ecc0 body=65 status=ok
// SIG undefined FUN_148a6ecc0(void)

undefined8 * FUN_148a6ecc0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4e3f70;
  if (param_1[1] != 0) {
    FUN_1411ebbe4();
    param_1[1] = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6ed02 FUN_148a6ed02 body=65 status=ok
// SIG undefined FUN_148a6ed02(void)

undefined8 * FUN_148a6ed02(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4e44c0;
  if (param_1[1] != 0) {
    FUN_1411ebbe4();
    param_1[1] = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6ed44 FUN_148a6ed44 body=65 status=ok
// SIG undefined FUN_148a6ed44(void)

undefined8 * FUN_148a6ed44(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4e00d0;
  if (param_1[1] != 0) {
    FUN_1411ebbe4();
    param_1[1] = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6ed85 FUN_148a6ed85 body=41 status=ok
// SIG undefined FUN_148a6ed85(void)

void FUN_148a6ed85(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148a6ae9c(param_1);
    param_1 = param_1 + 0x90;
  }
  return;
}



// FUNCTION 148a6edae FUN_148a6edae body=48 status=ok
// SIG undefined FUN_148a6edae(void)

void FUN_148a6edae(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x90,8);
  }
  return;
}



// FUNCTION 148a6edde FUN_148a6edde body=101 status=ok
// SIG undefined FUN_148a6edde(void)

void FUN_148a6edde(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a6ee3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a6ee44 FUN_148a6ee44 body=108 status=ok
// SIG undefined FUN_148a6ee44(void)

void FUN_148a6ee44(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 148a6eeb0 FUN_148a6eeb0 body=69 status=ok
// SIG undefined FUN_148a6eeb0(void)

undefined8 * FUN_148a6eeb0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b4e4a10;
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a6eef8 FUN_148a6eef8 body=64 status=ok
// SIG undefined FUN_148a6eef8(void)

undefined8 * FUN_148a6eef8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4e0150;
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



// FUNCTION 148a6ef3c FUN_148a6ef3c body=81 status=ok
// SIG undefined FUN_148a6ef3c(void)

undefined8 FUN_148a6ef3c(longlong param_1)

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



// FUNCTION 148a6ef94 FUN_148a6ef94 body=89 status=ok
// SIG undefined FUN_148a6ef94(void)

bool FUN_148a6ef94(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a6efdf;
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
LAB_148a6efdf:
  return lVar6 == param_2;
}



// FUNCTION 148a6f00a FUN_148a6f00a body=118 status=ok
// SIG undefined FUN_148a6f00a(void)

void FUN_148a6f00a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e0150;
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



// FUNCTION 148a6f080 FUN_148a6f080 body=118 status=ok
// SIG undefined FUN_148a6f080(void)

void FUN_148a6f080(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e0150;
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



// FUNCTION 148a6f0f6 FUN_148a6f0f6 body=156 status=ok
// SIG undefined FUN_148a6f0f6(void)

void FUN_148a6f0f6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e0150;
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
                    /* WARNING: Could not recover jumptable at 0x000148a6f182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a6f192 FUN_148a6f192 body=104 status=ok
// SIG undefined FUN_148a6f192(void)

void FUN_148a6f192(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a6f1df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a6f1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a6f1fa FUN_148a6f1fa body=101 status=ok
// SIG undefined FUN_148a6f1fa(void)

ulonglong FUN_148a6f1fa(longlong param_1)

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
LAB_148a6f254:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148a6f254;
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



// FUNCTION 148a6f260 FUN_148a6f260 body=68 status=ok
// SIG undefined FUN_148a6f260(void)

undefined8 * FUN_148a6f260(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4e01c0;
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



// FUNCTION 148a6f2a8 FUN_148a6f2a8 body=81 status=ok
// SIG undefined FUN_148a6f2a8(void)

undefined8 FUN_148a6f2a8(longlong param_1)

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



// FUNCTION 148a6f300 FUN_148a6f300 body=89 status=ok
// SIG undefined FUN_148a6f300(void)

bool FUN_148a6f300(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a6f34b;
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
LAB_148a6f34b:
  return lVar6 == param_2;
}



// FUNCTION 148a6f382 FUN_148a6f382 body=118 status=ok
// SIG undefined FUN_148a6f382(void)

void FUN_148a6f382(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e0230;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e01c0;
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



// FUNCTION 148a6f3f8 FUN_148a6f3f8 body=156 status=ok
// SIG undefined FUN_148a6f3f8(void)

void FUN_148a6f3f8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e0230;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e01c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148a6f484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a6f494 FUN_148a6f494 body=104 status=ok
// SIG undefined FUN_148a6f494(void)

void FUN_148a6f494(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a6f4e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a6f4f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a6f4fe FUN_148a6f4fe body=162 status=ok
// SIG undefined FUN_148a6f4fe(void)

void FUN_148a6f4fe(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148a6f53d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148a6f53d;
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
LAB_148a6f53d:
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
                    /* WARNING: Could not recover jumptable at 0x000148a6f59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148a6f5a0 FUN_148a6f5a0 body=68 status=ok
// SIG undefined FUN_148a6f5a0(void)

undefined8 * FUN_148a6f5a0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4e02c0;
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



// FUNCTION 148a6f5e8 FUN_148a6f5e8 body=81 status=ok
// SIG undefined FUN_148a6f5e8(void)

undefined8 FUN_148a6f5e8(longlong param_1)

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



// FUNCTION 148a6f640 FUN_148a6f640 body=89 status=ok
// SIG undefined FUN_148a6f640(void)

bool FUN_148a6f640(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a6f68b;
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
LAB_148a6f68b:
  return lVar6 == param_2;
}



// FUNCTION 148a6f6c2 FUN_148a6f6c2 body=118 status=ok
// SIG undefined FUN_148a6f6c2(void)

void FUN_148a6f6c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4c90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e02c0;
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



// FUNCTION 148a6f738 FUN_148a6f738 body=118 status=ok
// SIG undefined FUN_148a6f738(void)

void FUN_148a6f738(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4c90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e02c0;
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



// FUNCTION 148a6f7ae FUN_148a6f7ae body=156 status=ok
// SIG undefined FUN_148a6f7ae(void)

void FUN_148a6f7ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4c90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e02c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148a6f83a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a6f84a FUN_148a6f84a body=104 status=ok
// SIG undefined FUN_148a6f84a(void)

void FUN_148a6f84a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a6f897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a6f8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a6f8b4 FUN_148a6f8b4 body=68 status=ok
// SIG undefined FUN_148a6f8b4(void)

undefined8 * FUN_148a6f8b4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4e0330;
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



// FUNCTION 148a6f8fc FUN_148a6f8fc body=81 status=ok
// SIG undefined FUN_148a6f8fc(void)

undefined8 FUN_148a6f8fc(longlong param_1)

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



// FUNCTION 148a6f954 FUN_148a6f954 body=89 status=ok
// SIG undefined FUN_148a6f954(void)

bool FUN_148a6f954(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a6f99f;
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
LAB_148a6f99f:
  return lVar6 == param_2;
}



// FUNCTION 148a6f9ca FUN_148a6f9ca body=118 status=ok
// SIG undefined FUN_148a6f9ca(void)

void FUN_148a6f9ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4c90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e0330;
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



// FUNCTION 148a6fa40 FUN_148a6fa40 body=118 status=ok
// SIG undefined FUN_148a6fa40(void)

void FUN_148a6fa40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4c90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e0330;
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


