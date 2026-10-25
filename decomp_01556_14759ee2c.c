// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14759ee2c FUN_14759ee2c body=93 status=ok
// SIG undefined FUN_14759ee2c(void)

void FUN_14759ee2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a49f820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14759ee8a FUN_14759ee8a body=126 status=ok
// SIG undefined FUN_14759ee8a(void)

void FUN_14759ee8a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a49f820;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014759eef9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14759ef08 FUN_14759ef08 body=40 status=ok
// SIG undefined FUN_14759ef08(void)

void FUN_14759ef08(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014759ef2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14759ef30 FUN_14759ef30 body=140 status=ok
// SIG undefined FUN_14759ef30(void)

bool FUN_14759ef30(longlong param_1,undefined8 param_2)

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



// FUNCTION 14759efbe FUN_14759efbe body=132 status=ok
// SIG undefined FUN_14759efbe(void)

void FUN_14759efbe(longlong param_1,int param_2)

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



// FUNCTION 14759f044 FUN_14759f044 body=263 status=ok
// SIG undefined FUN_14759f044(void)

undefined8 * FUN_14759f044(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_14759f068;
  FUN_14759f14c(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x28,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_14759f068;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x00014759f109:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x00014759f109;
      }
    }
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
LAB_14759f068:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14759f14c FUN_14759f14c body=120 status=ok
// SIG undefined FUN_14759f14c(void)

undefined8 * FUN_14759f14c(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab4488) {
    FUN_144b3d300(&DAT_14cab4488);
    if (DAT_14cab4488 == -1) {
      FUN_1446ddc76(&DAT_14cab4480,"OnConstraintAdded_BP",1);
      _Init_thread_footer(&DAT_14cab4488);
    }
  }
  *param_1 = DAT_14cab4480;
  return param_1;
}



// FUNCTION 14759f1c4 FUN_14759f1c4 body=263 status=ok
// SIG undefined FUN_14759f1c4(void)

undefined8 * FUN_14759f1c4(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_14759f1e8;
  FUN_14759f2cc(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x29,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_14759f1e8;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x00014759f289:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x00014759f289;
      }
    }
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
LAB_14759f1e8:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14759f2cc FUN_14759f2cc body=120 status=ok
// SIG undefined FUN_14759f2cc(void)

undefined8 * FUN_14759f2cc(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab4498) {
    FUN_144b3d300(&DAT_14cab4498);
    if (DAT_14cab4498 == -1) {
      FUN_1446ddc76(&DAT_14cab4490,"OnConstraintRemoved_BP",1);
      _Init_thread_footer(&DAT_14cab4498);
    }
  }
  *param_1 = DAT_14cab4490;
  return param_1;
}



// FUNCTION 14759f344 FUN_14759f344 body=173 status=ok
// SIG undefined FUN_14759f344(void)

void FUN_14759f344(longlong *param_1,undefined4 param_2,undefined8 param_3)

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
        goto LAB_14759f3cb;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14759f3cb:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14759f3f2 FUN_14759f3f2 body=53 status=ok
// SIG undefined FUN_14759f3f2(void)

ulonglong FUN_14759f3f2(int *param_1,int *param_2)

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



// FUNCTION 14759f428 FUN_14759f428 body=31 status=ok
// SIG undefined FUN_14759f428(void)

undefined8 FUN_14759f428(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14759f464 FUN_14759f464 body=93 status=ok
// SIG undefined FUN_14759f464(void)

void FUN_14759f464(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a49f890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14759f4c2 FUN_14759f4c2 body=126 status=ok
// SIG undefined FUN_14759f4c2(void)

void FUN_14759f4c2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a49f890;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014759f531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14759f540 FUN_14759f540 body=21 status=ok
// SIG undefined FUN_14759f540(void)

undefined8 FUN_14759f540(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14759f556 FUN_14759f556 body=132 status=ok
// SIG undefined FUN_14759f556(void)

void FUN_14759f556(longlong param_1,int param_2)

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



// FUNCTION 14759f5dc FUN_14759f5dc body=31 status=ok
// SIG undefined FUN_14759f5dc(void)

undefined8 FUN_14759f5dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14759f616 FUN_14759f616 body=26 status=ok
// SIG undefined FUN_14759f616(void)

bool FUN_14759f616(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14759f630 FUN_14759f630 body=93 status=ok
// SIG undefined FUN_14759f630(void)

void FUN_14759f630(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a49f940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14759f68e FUN_14759f68e body=93 status=ok
// SIG undefined FUN_14759f68e(void)

void FUN_14759f68e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a49f940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14759f6ec FUN_14759f6ec body=126 status=ok
// SIG undefined FUN_14759f6ec(void)

void FUN_14759f6ec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a49f940;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014759f75b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14759f76a FUN_14759f76a body=35 status=ok
// SIG undefined FUN_14759f76a(void)

void FUN_14759f76a(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014759f789. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14759f78e FUN_14759f78e body=48 status=ok
// SIG undefined FUN_14759f78e(void)

void FUN_14759f78e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 14759f7be FUN_14759f7be body=118 status=ok
// SIG undefined FUN_14759f7be(void)

ulonglong FUN_14759f7be(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14759f836 FUN_14759f836 body=263 status=ok
// SIG undefined FUN_14759f836(void)

undefined8 * FUN_14759f836(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_14759f85a;
  FUN_14759f93e(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x30,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_14759f85a;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x00014759f8fb:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x00014759f8fb;
      }
    }
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
LAB_14759f85a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14759f93e FUN_14759f93e body=120 status=ok
// SIG undefined FUN_14759f93e(void)

undefined8 * FUN_14759f93e(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab44a8) {
    FUN_144b3d300(&DAT_14cab44a8);
    if (DAT_14cab44a8 == -1) {
      FUN_1446ddc76(&DAT_14cab44a0,"OnConstraintAddedToSystem_BP",1);
      _Init_thread_footer(&DAT_14cab44a8);
    }
  }
  *param_1 = DAT_14cab44a0;
  return param_1;
}



// FUNCTION 14759f9b6 FUN_14759f9b6 body=263 status=ok
// SIG undefined FUN_14759f9b6(void)

undefined8 * FUN_14759f9b6(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_14759f9da;
  FUN_14759fabe(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x31,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_14759f9da;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x00014759fa7b:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x00014759fa7b;
      }
    }
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
LAB_14759f9da:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14759fabe FUN_14759fabe body=120 status=ok
// SIG undefined FUN_14759fabe(void)

undefined8 * FUN_14759fabe(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab44b8) {
    FUN_144b3d300(&DAT_14cab44b8);
    if (DAT_14cab44b8 == -1) {
      FUN_1446ddc76(&DAT_14cab44b0,"OnConstraintRemovedFromSystem_BP",1);
      _Init_thread_footer(&DAT_14cab44b8);
    }
  }
  *param_1 = DAT_14cab44b0;
  return param_1;
}



// FUNCTION 14759fb36 FUN_14759fb36 body=266 status=ok
// SIG undefined FUN_14759fb36(void)

void FUN_14759fb36(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar13 = (longlong)(int)uVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_14759f3f2(lVar2,*param_2);
    uVar10 = 0;
    uVar7 = 0;
    do {
      uVar11 = (ulonglong)uVar7;
      uVar3 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar3 = uVar1;
      }
      lVar12 = lVar2 + 8 + uVar11 * 8;
      uVar8 = uVar7;
      uVar6 = uVar11;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar3;
        if (lVar13 <= (longlong)uVar6) break;
        bVar5 = FUN_14759f3f2(lVar12,*param_2);
        uVar8 = uVar8 + 1;
        lVar12 = lVar12 + 8;
        uVar9 = uVar8;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (uVar10 != uVar7) {
          memmove((void *)(lVar2 + (longlong)(int)uVar10 * 8),(void *)(lVar2 + uVar11 * 8),
                  (longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar10 = uVar10 + (uVar9 - uVar7);
      }
      uVar7 = uVar9;
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar6 < lVar13);
    *(uint *)(param_1 + 1) = uVar10;
  }
  return;
}



// FUNCTION 14759fc40 FUN_14759fc40 body=405 status=ok
// SIG undefined FUN_14759fc40(void)

void FUN_14759fc40(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x10 + lVar2 + -0xc);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      plVar7 = param_1 + 2;
      *(uint *)(param_1 + 5) = uVar8;
      uVar12 = uVar8 + 0x1f >> 5;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
        FUN_14499171c(plVar7,0,uVar12,4);
        *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
      }
      _Dst = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        _Dst = plVar7;
      }
      if (uVar8 < 0x101) {
        uVar12 = uVar12 + (uVar12 == 0);
      }
      memset(_Dst,0,(ulonglong)(uVar12 << 2));
      iVar1 = (int)param_1[5];
      iVar10 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar10 = iVar1;
      }
      if (iVar1 % 0x20 != 0) {
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[4];
        }
        bVar4 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 14759fdd6 FUN_14759fdd6 body=320 status=ok
// SIG undefined FUN_14759fdd6(void)

undefined4 * FUN_14759fdd6(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402ebbe4(param_1,local_48);
  uVar3 = *param_3;
  *local_40 = uVar3;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_58 = 0;
  cVar1 = FUN_1402ebb4e(param_1,uVar2,local_40);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_40 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1402ebebe(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14759ff18 FUN_14759ff18 body=62 status=ok
// SIG undefined FUN_14759ff18(void)

void FUN_14759ff18(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14759ff56(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 14759ff56 FUN_14759ff56 body=93 status=ok
// SIG undefined FUN_14759ff56(void)

ulonglong FUN_14759ff56(uint param_1,uint param_2)

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



// FUNCTION 14759ffb4 FUN_14759ffb4 body=9 status=ok
// SIG undefined FUN_14759ffb4(void)

void FUN_14759ffb4(longlong param_1)

{
  FUN_14759ffdc(param_1 + 0x10);
  return;
}



// FUNCTION 14759ffbe FUN_14759ffbe body=29 status=ok
// SIG undefined FUN_14759ffbe(void)

undefined8 FUN_14759ffbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14759ffdc FUN_14759ffdc body=68 status=ok
// SIG undefined FUN_14759ffdc(void)

void FUN_14759ffdc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_14759c129(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001475a0015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1475a0020 FUN_1475a0020 body=164 status=ok
// SIG undefined FUN_1475a0020(void)

void FUN_1475a0020(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_1475a0098;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_1475a0098;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1475a0098:
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
                    /* WARNING: Could not recover jumptable at 0x0001475a00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1475a00c4 FUN_1475a00c4 body=175 status=ok
// SIG undefined FUN_1475a00c4(void)

void FUN_1475a00c4(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_1475a014d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1475a014d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1475a0174 FUN_1475a0174 body=132 status=ok
// SIG undefined FUN_1475a0174(void)

int FUN_1475a0174(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x30;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           ((*(int *)(lVar2 + 0xc + lVar4) == param_3[3] &&
            (*(int *)(lVar2 + lVar4 + 0x10) == param_3[4])))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x28 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1475a01f8 FUN_1475a01f8 body=110 status=ok
// SIG undefined FUN_1475a01f8(void)

void FUN_1475a01f8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x18;
    if (0x18 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = (int)uVar2;
    FUN_14024d542(param_1,*(undefined4 *)(param_1 + 200),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 1475a0266 FUN_1475a0266 body=634 status=ok
// SIG undefined FUN_1475a0266(void)

void FUN_1475a0266(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = *(int *)(param_3 + 200);
        *(uint *)(param_3 + 200) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
          FUN_14024d3e4(param_3,iVar2);
        }
        lVar7 = *(longlong *)(param_3 + 0xc0);
        if (*(longlong *)(param_3 + 0xc0) == 0) {
          lVar7 = param_3;
        }
        *(longlong **)(lVar7 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1475a0266(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a04e2 FUN_1475a04e2 body=328 status=ok
// SIG undefined FUN_1475a04e2(void)

void FUN_1475a04e2(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = *(int *)(param_3 + 200);
        *(uint *)(param_3 + 200) = iVar3 + 1U;
        if (*(uint *)(param_3 + 0xcc) < iVar3 + 1U) {
          FUN_14024d3e4(param_3,iVar3);
        }
        lVar5 = *(longlong *)(param_3 + 0xc0);
        if (*(longlong *)(param_3 + 0xc0) == 0) {
          lVar5 = param_3;
        }
        *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar6));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a062c FUN_1475a062c body=767 status=ok
// SIG undefined FUN_1475a062c(void)

void FUN_1475a062c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1475a0750:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_1475a0768;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_1475a0750;
LAB_1475a0768:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar2 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
            FUN_14024d3e4(param_3,iVar2);
          }
          lVar8 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar8 = param_3;
          }
          *(longlong **)(lVar8 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1475a062c(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a092c FUN_1475a092c body=199 status=ok
// SIG undefined FUN_1475a092c(void)

void FUN_1475a092c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar3 = *param_2;
      goto LAB_1475a0978;
    }
  }
  lVar3 = 0;
LAB_1475a0978:
  lVar2 = FUN_144a78d6a();
  lVar1 = *param_2;
  if (lVar3 == lVar2) {
    local_28 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1475a09f4(param_1,&local_28);
  }
  else {
    local_30 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1475a0c34(param_1,&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a09f4 FUN_1475a09f4 body=574 status=ok
// SIG undefined FUN_1475a09f4(void)

void FUN_1475a09f4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_188 [40];
  longlong local_160;
  longlong *local_158;
  undefined4 local_150;
  uint uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  uint local_140;
  int iStack_13c;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  uint local_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 local_110 [192];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_130 = 0x100000000;
  local_120 = 0xffffffff;
  iStack_11c = 0;
  uStack_118 = 0;
  uStack_128 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_130);
    iVar7 = *(int *)(param_1 + 0x268);
  }
  uStack_138 = CONCAT44(uStack_114,uStack_118);
  local_140 = local_120;
  iStack_13c = iStack_11c;
  local_150 = (undefined4)local_130;
  uStack_14c = local_130._4_4_;
  uStack_148 = (undefined4)uStack_128;
  uStack_144 = uStack_128._4_4_;
  local_158 = plVar1;
  if ((iStack_11c != iVar7) || (uStack_128 != lVar10)) {
    do {
      plVar2 = *(longlong **)(*local_158 + (longlong)iStack_13c * 0x10);
      if (plVar2 != (longlong *)0x0) {
        FUN_14759687f(plVar2);
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar2 + 0x5d8))(plVar2), uVar4 = local_48, lVar8 != 0)) {
          lVar9 = (longlong)(int)local_48;
          uVar5 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,uVar5);
          if (local_48._4_4_ < uVar5) {
            FUN_1470e9d72(local_110,uVar4 & 0xffffffff);
          }
          puVar6 = local_50;
          if (local_50 == (undefined1 *)0x0) {
            puVar6 = local_110;
          }
          *(longlong *)(puVar6 + lVar9 * 8) = lVar8;
        }
      }
      local_140 = local_140 & ~uStack_14c;
      FUN_1449c0562(&local_150);
    } while (local_158 != plVar1 ||
             (CONCAT44(uStack_144,uStack_148) != lVar10 || iStack_13c != iVar7));
    lVar10 = (longlong)(int)local_48;
    puVar6 = local_110;
    if (local_50 != (undefined1 *)0x0) {
      puVar6 = local_50;
    }
    if (lVar10 != 0) {
      lVar8 = 0;
      do {
        uVar3 = *(undefined8 *)(puVar6 + lVar8);
        local_160 = *param_2;
        if ((local_160 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1475a09f4(uVar3,&local_160);
        lVar8 = lVar8 + 8;
      } while (lVar10 * 8 != lVar8);
    }
    if (local_50 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a0c34 FUN_1475a0c34 body=707 status=ok
// SIG undefined FUN_1475a0c34(void)

void FUN_1475a0c34(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_188 [40];
  longlong local_160;
  longlong *local_158;
  undefined4 local_150;
  uint uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  uint local_140;
  int iStack_13c;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  uint local_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 local_110 [192];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar11 = param_1 + 0x250;
  local_130 = 0x100000000;
  local_120 = 0xffffffff;
  iStack_11c = 0;
  uStack_118 = 0;
  uStack_128 = lVar11;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_130);
    iVar10 = *(int *)(param_1 + 0x268);
  }
  uStack_138 = CONCAT44(uStack_114,uStack_118);
  local_140 = local_120;
  iStack_13c = iStack_11c;
  local_150 = (undefined4)local_130;
  uStack_14c = local_130._4_4_;
  uStack_148 = (undefined4)uStack_128;
  uStack_144 = uStack_128._4_4_;
  local_158 = plVar1;
  if ((iStack_11c != iVar10) || (uStack_128 != lVar11)) {
    do {
      plVar2 = *(longlong **)(*local_158 + (longlong)iStack_13c * 0x10);
      if (plVar2 != (longlong *)0x0) {
        lVar7 = *param_2;
        if ((lVar7 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1475a0d51:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_1475a0d69;
          lVar8 = 0;
          if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar8 = lVar7;
          }
        }
        else {
          if (lVar7 != 0) goto LAB_1475a0d51;
LAB_1475a0d69:
          lVar8 = 0;
        }
        if ((*(int *)(lVar8 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
            lVar8 + 0x30)) {
          FUN_14759687f(plVar2);
        }
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar2 + 0x5d8))(plVar2), uVar4 = local_48, lVar7 != 0)) {
          lVar6 = (longlong)(int)local_48;
          uVar5 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,uVar5);
          if (local_48._4_4_ < uVar5) {
            FUN_1470e9d72(local_110,uVar4 & 0xffffffff);
          }
          puVar9 = local_50;
          if (local_50 == (undefined1 *)0x0) {
            puVar9 = local_110;
          }
          *(longlong *)(puVar9 + lVar6 * 8) = lVar7;
        }
      }
      local_140 = local_140 & ~uStack_14c;
      FUN_1449c0562(&local_150);
    } while (local_158 != plVar1 ||
             (CONCAT44(uStack_144,uStack_148) != lVar11 || iStack_13c != iVar10));
    lVar11 = (longlong)(int)local_48;
    puVar9 = local_110;
    if (local_50 != (undefined1 *)0x0) {
      puVar9 = local_50;
    }
    if (lVar11 != 0) {
      lVar7 = 0;
      do {
        uVar3 = *(undefined8 *)(puVar9 + lVar7);
        local_160 = *param_2;
        if ((local_160 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1475a0c34(uVar3,&local_160);
        lVar7 = lVar7 + 8;
      } while (lVar11 * 8 != lVar7);
    }
    if (local_50 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a0ef8 FUN_1475a0ef8 body=122 status=ok
// SIG undefined FUN_1475a0ef8(void)

void FUN_1475a0ef8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xa0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0 + 4) = uVar4;
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



// FUNCTION 1475a0f96 FUN_1475a0f96 body=52 status=ok
// SIG undefined FUN_1475a0f96(void)

void FUN_1475a0f96(longlong *param_1)

{
  FUN_1475a0fca();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475a0fca FUN_1475a0fca body=89 status=ok
// SIG undefined FUN_1475a0fca(void)

void FUN_1475a0fca(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1475a1024 FUN_1475a1024 body=230 status=ok
// SIG undefined FUN_1475a1024(void)

undefined8 * FUN_1475a1024(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1475a110c FUN_1475a110c body=29 status=ok
// SIG undefined FUN_1475a110c(void)

undefined8 FUN_1475a110c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475a1144 FUN_1475a1144 body=29 status=ok
// SIG undefined FUN_1475a1144(void)

bool FUN_1475a1144(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1475a1162 FUN_1475a1162 body=26 status=ok
// SIG undefined FUN_1475a1162(void)

bool FUN_1475a1162(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1475a117c FUN_1475a117c body=24 status=ok
// SIG undefined FUN_1475a117c(void)

bool FUN_1475a117c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1475a11a0 FUN_1475a11a0 body=93 status=ok
// SIG undefined FUN_1475a11a0(void)

void FUN_1475a11a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a49fac0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a49fa50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1475a11fe FUN_1475a11fe body=93 status=ok
// SIG undefined FUN_1475a11fe(void)

void FUN_1475a11fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a49fac0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a49fa50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1475a125c FUN_1475a125c body=126 status=ok
// SIG undefined FUN_1475a125c(void)

void FUN_1475a125c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a49fac0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a49fa50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001475a12cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1475a12da FUN_1475a12da body=48 status=ok
// SIG undefined FUN_1475a12da(void)

void FUN_1475a12da(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001475a1307. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1475a130a FUN_1475a130a body=151 status=ok
// SIG undefined FUN_1475a130a(void)

bool FUN_1475a130a(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a13a4 FUN_1475a13a4 body=270 status=ok
// SIG undefined FUN_1475a13a4(void)

void FUN_1475a13a4(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar3 = (longlong)*(int *)((longlong)plVar4 + uVar6 * 4);
    if (lVar3 != -1) {
      lVar7 = *param_1;
      lVar3 = lVar3 * 0x50;
      local_40 = *(undefined8 *)(lVar7 + lVar3);
      local_48 = param_2;
      cVar2 = FUN_14069bc62();
      if (cVar2 == '\0') {
        lVar3 = lVar7 + lVar3;
        do {
          lVar7 = lVar3;
          lVar3 = (longlong)*(int *)(lVar7 + 0x48);
          if (lVar3 == -1) goto LAB_1475a13c8;
          lVar1 = *param_1;
          lVar3 = lVar3 * 0x50;
          local_40 = *(undefined8 *)(lVar1 + lVar3);
          local_48 = param_2;
          cVar2 = FUN_14069bc62(&local_40,&local_48);
          lVar3 = lVar1 + lVar3;
        } while (cVar2 == '\0');
        puVar5 = (undefined4 *)(lVar7 + 0x48);
      }
      else {
        puVar5 = (undefined4 *)((longlong)plVar4 + uVar6 * 4);
      }
      FUN_1475a14b4(param_1,*puVar5);
    }
  }
LAB_1475a13c8:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a14b4 FUN_1475a14b4 body=128 status=ok
// SIG undefined FUN_1475a14b4(void)

void FUN_1475a14b4(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x50;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x4c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x48 + lVar6 * 0x50);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x50 + 0x48);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x48);
  FUN_147592a46(*param_1 + lVar2 + 8);
  FUN_14759eb12(param_1,param_2);
  return;
}



// FUNCTION 1475a1534 FUN_1475a1534 body=183 status=ok
// SIG undefined FUN_1475a1534(void)

undefined8 FUN_1475a1534(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145b32e1a();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a15ec FUN_1475a15ec body=183 status=ok
// SIG undefined FUN_1475a15ec(void)

undefined8 FUN_1475a15ec(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145b32f04();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a16a4 FUN_1475a16a4 body=183 status=ok
// SIG undefined FUN_1475a16a4(void)

undefined8 FUN_1475a16a4(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145b32fee();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a175c FUN_1475a175c body=183 status=ok
// SIG undefined FUN_1475a175c(void)

undefined8 FUN_1475a175c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145b330d8();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a1814 FUN_1475a1814 body=183 status=ok
// SIG undefined FUN_1475a1814(void)

undefined8 FUN_1475a1814(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145b331c2();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a18cc FUN_1475a18cc body=118 status=ok
// SIG undefined FUN_1475a18cc(void)

ulonglong FUN_1475a18cc(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a1944 FUN_1475a1944 body=88 status=ok
// SIG undefined FUN_1475a1944(void)

void FUN_1475a1944(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1475a199c FUN_1475a199c body=79 status=ok
// SIG undefined FUN_1475a199c(void)

ulonglong FUN_1475a199c(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  do {
    if (param_3 == 0) {
LAB_1475a19df:
      return uVar2 & 0xffffffff;
    }
    cVar1 = FUN_1401246e4(param_1,param_2);
    if ((cVar1 == '\0') || (*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8))) {
      uVar2 = 0;
      goto LAB_1475a19df;
    }
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
    param_3 = param_3 + -1;
  } while( true );
}



// FUNCTION 1475a19ec FUN_1475a19ec body=356 status=ok
// SIG undefined FUN_1475a19ec(void)

void FUN_1475a19ec(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_28 = 2;
  local_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar2 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_44;
  uStack_54 = uStack_40;
  uStack_50 = uStack_3c;
  uStack_4c = uStack_38;
  FUN_1475b803c(param_1,puVar2,local_34);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a1b52 FUN_1475a1b52 body=356 status=ok
// SIG undefined FUN_1475a1b52(void)

void FUN_1475a1b52(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 2;
  local_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1475b7cee(param_1,puVar2,local_34,local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a1cbe FUN_1475a1cbe body=176 status=ok
// SIG undefined FUN_1475a1cbe(void)

void FUN_1475a1cbe(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1475b8440(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a1d76 FUN_1475a1d76 body=176 status=ok
// SIG undefined FUN_1475a1d76(void)

void FUN_1475a1d76(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1475b8362(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a1e2e FUN_1475a1e2e body=75 status=ok
// SIG undefined FUN_1475a1e2e(void)

void FUN_1475a1e2e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_141001042(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a1e7e FUN_1475a1e7e body=195 status=ok
// SIG undefined FUN_1475a1e7e(void)

undefined8 * FUN_1475a1e7e(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  lVar1 = FUN_1400796d0(param_2[2],DAT_14cab45c0,1);
  if (lVar1 != 0) {
    (**(code **)(*param_2 + 0x248))(param_2,lVar1,local_88);
  }
  puVar2 = local_88;
  puVar3 = param_1;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a1f5e FUN_1475a1f5e body=242 status=ok
// SIG undefined FUN_1475a1f5e(void)

void FUN_1475a1f5e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
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
  (**(code **)(*param_1 + 0x308))(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a2052 FUN_1475a2052 body=159 status=ok
// SIG undefined FUN_1475a2052(void)

longlong * FUN_1475a2052(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_28 = 0;
  FUN_147520e18(&local_48,param_3);
  uVar1 = FUN_14477b072(param_1,DAT_14cab46e0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_48);
  *param_2 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a20f8 FUN_1475a20f8 body=167 status=ok
// SIG undefined FUN_1475a20f8(void)

void FUN_1475a20f8(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = (**(code **)(*param_1 + 0x300))(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a21ce FUN_1475a21ce body=49 status=ok
// SIG undefined FUN_1475a21ce(void)

longlong * FUN_1475a21ce(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145a67d3c();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 1475a2200 FUN_1475a2200 body=216 status=ok
// SIG undefined FUN_1475a2200(void)

undefined8
FUN_1475a2200(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = FUN_14479d2ce(*param_5 + 0x18);
  if (local_48 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(local_48);
  }
  local_30 = *param_3;
  local_40 = (undefined4)param_3[1];
  uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
  uStack_38 = (undefined4)param_3[2];
  uStack_34 = *(undefined4 *)((longlong)param_3 + 0x14);
  if ((local_30 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c();
  }
  FUN_1475a2052(param_1,param_2,&local_48);
  plVar3 = (longlong *)param_5[1];
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a22da FUN_1475a22da body=96 status=ok
// SIG undefined FUN_1475a22da(void)

void FUN_1475a22da(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cab46d0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a233c FUN_1475a233c body=99 status=ok
// SIG undefined FUN_1475a233c(void)

undefined1 FUN_1475a233c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  local_28 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cab46f0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a23a2 FUN_1475a23a2 body=56 status=ok
// SIG undefined FUN_1475a23a2(void)

undefined8 FUN_1475a23a2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a6c4d8();
    if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                      *(longlong *)
                       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 1475a23da FUN_1475a23da body=217 status=ok
// SIG undefined FUN_1475a23da(void)

longlong *
FUN_1475a23da(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong local_50;
  undefined8 local_40;
  longlong local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  local_50 = param_1 + 0x28;
  local_58 = param_3 + 1;
  uVar3 = *param_3;
  local_40 = *param_5;
  local_38 = param_5[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_1432dd584(local_30,&local_40,uVar3,param_3 + 3);
  if (DAT_14c950c29 == '\x01') {
    if (local_30[0] == 0) {
      local_30[0] = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  *param_2 = local_30[0];
  plVar4 = (longlong *)param_5[1];
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a24b4 FUN_1475a24b4 body=280 status=ok
// SIG undefined FUN_1475a24b4(void)

longlong FUN_1475a24b4(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 == 0) {
    lVar6 = 0;
  }
  else {
    FUN_1400021e4(param_1,&local_58);
    cVar3 = FUN_14622a6c4(&local_58);
    if (cVar3 != '\0') {
      FUN_1467aca2a(&local_58,0,0x2f);
    }
    iVar1 = *(int *)(param_2 + 0x90);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_2 + 0x88);
      lVar5 = 0;
      do {
        lVar6 = *(longlong *)(lVar2 + lVar5);
        if (lVar6 != 0) {
          FUN_147b98996(lVar6,local_68);
          iVar7 = local_50 + -1;
          if (local_50 == 0) {
            iVar7 = 0;
          }
          puVar4 = &DAT_149dfb77a;
          if (local_50 != 0) {
            puVar4 = local_58;
          }
          cVar3 = FUN_144a38768(local_68,puVar4,iVar7,1);
          if (local_68[0] != 0) {
            FUN_1400020a8();
          }
          if (cVar3 != '\0') goto LAB_1475a258f;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    lVar6 = 0;
LAB_1475a258f:
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a25ce FUN_1475a25ce body=197 status=ok
// SIG undefined FUN_1475a25ce(void)

longlong FUN_1475a25ce(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_144a7757c();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1475a2694 FUN_1475a2694 body=142 status=ok
// SIG undefined FUN_1475a2694(void)

void FUN_1475a2694(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    FUN_144a6c4d8();
    lVar1 = FUN_144a6c4d8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      param_1[8] = param_2;
      FUN_147582950(param_2);
      goto LAB_1475a26d2;
    }
  }
  param_1[8] = 0;
LAB_1475a26d2:
  *(undefined1 *)(param_1 + 6) = 0;
  lVar1 = (**(code **)(*param_1 + 0x348))(param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_146208468(lVar1);
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + 6) = 1;
    }
  }
  return;
}



// FUNCTION 1475a2722 FUN_1475a2722 body=591 status=ok
// SIG undefined FUN_1475a2722(void)

void FUN_1475a2722(longlong *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) goto LAB_1475a2773;
  FUN_144a6c4d8();
  lVar3 = FUN_144a6c4d8();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
      != lVar3 + 0x30)) goto LAB_1475a2773;
  plVar2 = (longlong *)param_1[8];
  if (plVar2 == (longlong *)0x0) {
    lVar3 = *(longlong *)(param_2 + 0x18);
  }
  else {
    lVar3 = plVar2[3];
    FUN_1446ddc76(&local_60,"ExpiredSpawnable",1);
    (**(code **)(*param_1 + 0x340))(param_1,&local_68);
    lVar6 = local_68;
    if ((((local_68 == 0) || (lVar4 = FUN_144a6c4d8(), lVar4 == 0)) ||
        (*(int *)(lVar6 + 0x38) < *(int *)(lVar4 + 0x38))) ||
       (lVar8 = local_68,
       *(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
       lVar4 + 0x30)) {
      lVar8 = 0;
    }
    uVar5 = (**(code **)(*param_3 + 0x2e8))(param_3);
    local_78 = 0;
    FUN_140af9fb2(local_58,uVar5,lVar8,local_60);
    FUN_1400021e4(local_58,&local_50);
    puVar7 = local_50;
    if (local_48 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    (**(code **)(*plVar2 + 0x170))(plVar2,puVar7,0,0);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar6 = param_1[8];
    FUN_144757f48(lVar6,0x40000000);
    uVar1 = *(uint *)(lVar6 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    do {
      uVar1 = *(uint *)(lVar6 + 8);
      if ((uVar1 >> 0x15 & 1) != 0) break;
      LOCK();
      bVar9 = uVar1 == *(uint *)(lVar6 + 8);
      if (bVar9) {
        *(uint *)(lVar6 + 8) = uVar1 | 0x200000;
      }
      UNLOCK();
    } while (!bVar9);
    param_1[8] = 0;
  }
  lVar3 = (**(code **)(*param_3 + 800))(param_3,param_2,lVar3);
  if (lVar3 == 0) {
LAB_1475a291c:
    lVar3 = 0;
  }
  else {
    lVar6 = FUN_144a6c4d8();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_1475a291c;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar3);
    }
  }
  param_1[8] = lVar3;
  FUN_147582950(lVar3);
  *(undefined1 *)(param_1 + 6) = 0;
  lVar3 = (**(code **)(*param_1 + 0x348))(param_1);
  if ((lVar3 != 0) && (lVar3 = FUN_146208468(lVar3), lVar3 != 0)) {
    *(undefined1 *)(param_1 + 6) = 1;
  }
  FUN_14282b7b8(param_3);
LAB_1475a2773:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a2972 FUN_1475a2972 body=223 status=ok
// SIG undefined FUN_1475a2972(void)

ulonglong FUN_1475a2972(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (param_2 == 0) goto LAB_1475a2a2d;
  lVar1 = FUN_144a6c4d8();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      == lVar1 + 0x30)) goto LAB_1475a2a2d;
  lVar1 = FUN_141225fe0();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      != lVar1 + 0x30)) {
    lVar1 = FUN_144a797b2();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_1475a2a19;
  }
  else {
    uVar2 = *(ulonglong *)(param_2 + 0x30);
    if ((uVar2 == 0) ||
       (((lVar1 = FUN_1446f8646(), lVar1 == 0 || (*(int *)(uVar2 + 0x38) < *(int *)(lVar1 + 0x38)))
        || (*(longlong *)(*(longlong *)(uVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
            lVar1 + 0x30)))) {
      param_2 = 0;
    }
    else {
      param_2 = *(longlong *)(param_2 + 0x30);
    }
LAB_1475a2a19:
    lVar1 = FUN_144a6c4d8();
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(param_2 + 0x38))) {
      uVar2 = CONCAT71((int7)(uVar2 >> 8),
                       *(longlong *)
                        (*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
                       lVar1 + 0x30);
      goto LAB_1475a2a2d;
    }
  }
  uVar2 = 0;
LAB_1475a2a2d:
  return uVar2 & 0xffffffff;
}



// FUNCTION 1475a2a52 FUN_1475a2a52 body=1160 status=ok
// SIG undefined FUN_1475a2a52(void)

longlong * FUN_1475a2a52(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  undefined2 *local_68;
  int local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) {
    FUN_1446f470e(&local_48,L"EmptyBinding",1);
  }
  else {
    local_48 = *(undefined8 *)(param_2 + 0x18);
  }
  uVar2 = FUN_1446f8646();
  local_98._0_4_ = 0;
  FUN_140af9fb2(&local_40,param_3,uVar2,local_48);
  FUN_1400021e4(&local_40,local_78);
  FUN_144a882a8(&local_68,local_78,L"_CustomBinding");
  puVar8 = local_68;
  if (local_60 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_58,puVar8,1);
  uVar2 = FUN_1446f8646();
  local_98 = (ulonglong)local_98._4_4_ << 0x20;
  FUN_140af9fb2(&local_50,param_3,uVar2,local_58);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  lVar3 = FUN_144a6c4d8();
  if (param_2 == 0) {
    param_2 = lVar3;
    if (lVar3 == 0) goto LAB_1475a2c5e;
LAB_1475a2b90:
    lVar3 = FUN_144a797b2();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
       (((lVar3 = FUN_144a6c4d8(), lVar3 != 0 &&
         ((*(int *)(lVar3 + 0x38) <= *(int *)(param_2 + 0x38) &&
          (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)))) &&
        (plVar4 = (longlong *)FUN_1475adb41(param_3,*(undefined8 *)(param_1 + 0x10),local_50),
        plVar7 = param_3, plVar4 != (longlong *)0x0)))) {
LAB_1475a2c1c:
      local_90 = local_90 & 0xffffff00;
      uStack_80 = 0;
      local_88 = 0;
      local_98 = 0;
      uVar2 = FUN_140584627(plVar7,param_2,local_40,8);
      (**(code **)(*plVar4 + 0x308))(plVar4,uVar2);
      goto LAB_1475a2c61;
    }
  }
  else {
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      local_68 = (undefined2 *)&DAT_14cab4850;
      FUN_1408ff3be(param_2 + 0x1f0,&local_68);
      local_68 = (undefined2 *)&DAT_14cab4858;
      FUN_1408ff3be(param_2 + 0x1f0,&local_68);
      uVar1 = *(uint *)(param_2 + 8);
      if ((uVar1 & 8) == 0) {
        FUN_144757f48(param_2,8);
      }
      plVar4 = (longlong *)FUN_1475adb41(param_3,*(undefined8 *)(param_1 + 0x10),local_50);
      if (plVar4 == (longlong *)0x0) goto LAB_1475a2b90;
      local_88 = CONCAT44(local_88._4_4_,0xfff00007);
      local_90 = 0;
      local_98 = 0;
      lVar3 = FUN_14092e7b3(param_2,param_3,local_40,&DAT_ffffffbf);
      if (lVar3 == 0) {
LAB_1475a2e80:
        lVar3 = 0;
      }
      else {
        lVar6 = FUN_144a6c4d8();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_1475a2e80;
      }
      local_68 = (undefined2 *)((ulonglong)local_68 & 0xffffffff00000000);
      FUN_1433b7f0e(lVar3);
      (**(code **)(*plVar4 + 0x308))(plVar4,lVar3);
      if ((uVar1 & 8) == 0) {
        FUN_14472eae2(param_2,8);
      }
      goto LAB_1475a2c61;
    }
    lVar3 = FUN_141225fe0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) != lVar3 + 0x30)) goto LAB_1475a2b90;
    lVar3 = param_3[2];
    lVar6 = *(longlong *)(param_2 + 0x30);
    if ((lVar6 == 0) ||
       (((lVar5 = FUN_1446f8646(), lVar5 == 0 || (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38)))
        || (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
            lVar5 + 0x30)))) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(longlong *)(param_2 + 0x30);
    }
    lVar6 = *(longlong *)(lVar6 + 0xe0);
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      lVar3 = *(longlong *)(param_2 + 0x30);
      if (((lVar3 == 0) || (lVar6 = FUN_1446f8646(), lVar6 == 0)) ||
         ((*(int *)(lVar3 + 0x38) < *(int *)(lVar6 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
           lVar6 + 0x30)))) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)(param_2 + 0x30);
      }
      lVar6 = FUN_144a6c4d8();
      if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        plVar7 = (longlong *)FUN_1475adb41(param_3,*(undefined8 *)(param_1 + 0x10),local_50);
        if (plVar7 == (longlong *)0x0) goto LAB_1475a2b90;
        lVar3 = *(longlong *)(param_2 + 0x30);
        plVar4 = plVar7;
        if ((((lVar3 == 0) || (lVar6 = FUN_1446f8646(), lVar6 == 0)) ||
            (*(int *)(lVar3 + 0x38) < *(int *)(lVar6 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
            lVar6 + 0x30)) {
          param_2 = 0;
        }
        else {
          param_2 = *(longlong *)(param_2 + 0x30);
        }
        goto LAB_1475a2c1c;
      }
    }
  }
LAB_1475a2c5e:
  plVar4 = (longlong *)0x0;
LAB_1475a2c61:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 1475a2edc FUN_1475a2edc body=214 status=ok
// SIG undefined FUN_1475a2edc(void)

undefined8
FUN_1475a2edc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = FUN_140ce4600();
  uVar4 = FUN_144a78ede(param_6,uVar4);
  local_50 = *param_8;
  local_48 = param_8[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_68 = param_4;
  local_60 = param_1 + 0x30;
  FUN_1432dd584(local_40,&local_50,uVar4,param_7);
  plVar3 = (longlong *)param_8[1];
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_40[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a2fb4 FUN_1475a2fb4 body=86 status=ok
// SIG undefined FUN_1475a2fb4(void)

void FUN_1475a2fb4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a6c4d8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = FUN_1447210f0(param_2);
      if (lVar1 != 0) {
        FUN_1412f3774(lVar1,param_2,0,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1475a300a FUN_1475a300a body=93 status=ok
// SIG undefined FUN_1475a300a(void)

undefined8 FUN_1475a300a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)FUN_14479d2ce(*param_2 + 0x18);
  if (plVar3 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x180))(plVar3);
  }
  plVar3 = (longlong *)param_2[1];
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
  return uVar4;
}



// FUNCTION 1475a3068 FUN_1475a3068 body=311 status=ok
// SIG undefined FUN_1475a3068(void)

undefined8
FUN_1475a3068(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined8 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *param_6;
  local_38 = param_6[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x328))(param_1,&local_40);
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_50);
  iVar4 = FUN_14031352e(param_4,param_3);
  if ((iVar4 != -1) &&
     (lVar5 = (longlong)iVar4 * 0x80 + *(longlong *)(param_4 + 0x70), local_48 < 2 && lVar5 != 0)) {
    FUN_144a787a6(&local_50,lVar5 + 0x48);
  }
  puVar6 = local_50;
  if (local_48 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_2,puVar6,1);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_6[1];
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
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1475a31a4 FUN_1475a31a4 body=262 status=ok
// SIG undefined FUN_1475a31a4(void)

void FUN_1475a31a4(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_60 [2];
  undefined2 *local_50;
  int local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x10);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = FUN_1446f8646();
  local_68 = 0;
  FUN_140af9fb2(local_30,param_3,uVar1,uVar2);
  FUN_1400021e4(local_30,local_60);
  FUN_144a882a8(&local_50,local_60,L"_CustomBinding");
  puVar3 = local_50;
  if (local_48 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_40,puVar3,1);
  uVar2 = FUN_1446f8646();
  local_68 = 0;
  FUN_140af9fb2(&local_38,param_3,uVar2,local_40);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  uVar2 = FUN_145b339fc();
  FUN_1475a32ab(param_3,uVar2,local_38);
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a32ab FUN_1475a32ab body=204 status=ok
// SIG undefined FUN_1475a32ab(void)

undefined8 FUN_1475a32ab(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_98 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a3378 FUN_1475a3378 body=118 status=ok
// SIG undefined FUN_1475a3378(void)

void FUN_1475a3378(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140861d3c(local_50,param_1,param_1 + 0x50,param_1 + 0x70);
  local_38 = param_1 + 0x60;
  FUN_147523910(local_50,param_2,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a33f0 FUN_1475a33f0 body=125 status=ok
// SIG undefined FUN_1475a33f0(void)

void FUN_1475a33f0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_147523b62(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a346e FUN_1475a346e body=125 status=ok
// SIG undefined FUN_1475a346e(void)

void FUN_1475a346e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_1475a34ec(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a34ec FUN_1475a34ec body=90 status=ok
// SIG undefined FUN_1475a34ec(void)

void FUN_1475a34ec(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar2 * 4));
      if (iVar1 != -1) {
        FUN_1475b1b76(param_1,iVar1,*(undefined4 *)(*param_3 + lVar2 * 4));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1475a3546 FUN_1475a3546 body=125 status=ok
// SIG undefined FUN_1475a3546(void)

void FUN_1475a3546(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_1475a35c4(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a35c4 FUN_1475a35c4 body=271 status=ok
// SIG undefined FUN_1475a35c4(void)

void FUN_1475a35c4(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < (int)param_2[1]) {
    lVar5 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar5 * 4));
      if (iVar1 == -1) {
        FUN_147a3fc60(&local_70);
        lVar3 = *param_3;
        uVar2 = (undefined4)local_70;
      }
      else {
        lVar3 = *(longlong *)param_1[3];
        lVar4 = (longlong)iVar1;
        local_70 = *(longlong *)(lVar3 + lVar4 * 0x28);
        if ((DAT_14c950c29 == '\x01') && (local_70 != 0)) {
          FUN_1456cec3c();
        }
        lVar3 = lVar3 + lVar4 * 0x28;
        local_68 = *(undefined4 *)(lVar3 + 8);
        uStack_64 = *(undefined4 *)(lVar3 + 0xc);
        uStack_60 = *(undefined4 *)(lVar3 + 0x10);
        uStack_5c = *(undefined4 *)(lVar3 + 0x14);
        local_58 = *(undefined4 *)(lVar3 + 0x18);
        uStack_54 = *(undefined4 *)(lVar3 + 0x1c);
        uStack_50 = *(undefined4 *)(lVar3 + 0x20);
        uStack_4c = *(undefined4 *)(lVar3 + 0x24);
        uVar2 = FUN_1475b1d8e(param_1,*(undefined4 *)(*(longlong *)*param_1 + lVar4 * 4),&local_70);
        FUN_147524308(param_1,&local_74,uVar2);
        lVar3 = *param_3;
        uVar2 = local_74;
      }
      *(undefined4 *)(lVar3 + lVar5 * 4) = uVar2;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_2[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a36d4 FUN_1475a36d4 body=150 status=ok
// SIG undefined FUN_1475a36d4(void)

void FUN_1475a36d4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  lVar2 = param_2[1];
  local_30 = param_1 + 0x60;
  if (0 < (longlong)(int)lVar2) {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      iVar3 = FUN_14752433e(local_48,*(undefined4 *)(lVar1 + lVar4 * 4));
      if (iVar3 != -1) {
        FUN_1475b1e66(local_48,iVar3);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar2 != lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a376c FUN_1475a376c body=106 status=ok
// SIG undefined FUN_1475a376c(void)

void FUN_1475a376c(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_30 = param_1 + 0x60;
  FUN_1475a37d8(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a37d8 FUN_1475a37d8 body=353 status=ok
// SIG undefined FUN_1475a37d8(void)

void FUN_1475a37d8(undefined8 param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 2;
  uStack_80 = 2;
  FUN_147523910(param_1,&local_88,&local_68);
  local_88 = 0;
  uStack_80 = 0;
  if (0 < (int)uStack_60) {
    lVar6 = 0;
    iVar5 = (int)uStack_60;
    do {
      lVar3 = local_78;
      uVar4 = uStack_80;
      iVar2 = *(int *)(local_68 + lVar6 * 4);
      if (param_3 == '\0') {
        if (param_2 < iVar2) goto LAB_1475a3863;
      }
      else if (iVar2 < param_2) {
LAB_1475a3863:
        iVar5 = (int)uStack_80;
        uVar1 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        if (uStack_80._4_4_ < uVar1) {
          FUN_14065110c(&local_88,uVar4 & 0xffffffff);
        }
        *(undefined4 *)(local_88 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar3 + lVar6 * 4);
        iVar5 = (int)uStack_60;
      }
      lVar3 = local_88;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
    lVar6 = (longlong)(int)uStack_80;
    if (0 < lVar6) {
      lVar7 = 0;
      do {
        iVar5 = FUN_14752433e(param_1,*(undefined4 *)(lVar3 + lVar7 * 4));
        if (iVar5 != -1) {
          FUN_1475b1e66(param_1,iVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a393a FUN_1475a393a body=108 status=ok
// SIG undefined FUN_1475a393a(void)

void FUN_1475a393a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_30 = param_1 + 0x60;
  FUN_147524082(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a39e0 FUN_1475a39e0 body=89 status=ok
// SIG undefined FUN_1475a39e0(void)

void FUN_1475a39e0(longlong param_1)

{
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_140aba11c(param_1 + 0x50,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x6c) < 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_1475b1fc6(param_1 + 0x60);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  FUN_147a408e2(param_1 + 0x70);
  return;
}



// FUNCTION 1475a3a3a FUN_1475a3a3a body=96 status=ok
// SIG undefined FUN_1475a3a3a(void)

void FUN_1475a3a3a(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_40,param_1,param_1 + 0x50,param_1 + 0x70);
  local_28 = param_1 + 0x60;
  FUN_1475243aa(local_40,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a3a9c FUN_1475a3a9c body=52 status=ok
// SIG undefined FUN_1475a3a9c(void)

double FUN_1475a3a9c(float *param_1,double param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_140073f12((float)((double)*param_1 * ((double)param_1[4] + param_2)));
  return (double)fVar1 * *(double *)(param_1 + 2);
}



// FUNCTION 1475a3ae8 FUN_1475a3ae8 body=26 status=ok
// SIG undefined FUN_1475a3ae8(void)

bool FUN_1475a3ae8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145b24df8();
  return *(longlong *)(lVar1 + 0x18) == param_2;
}



// FUNCTION 1475a3b02 FUN_1475a3b02 body=169 status=ok
// SIG undefined FUN_1475a3b02(void)

void FUN_1475a3b02(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined2 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_50;
  undefined2 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_14038fb82();
  FUN_14009d2a0();
  local_48 = *(undefined2 *)(param_2 + 8);
  local_70 = *(undefined2 *)(lVar1 + 0xe2);
  local_50 = 1;
  local_68 = *(undefined4 *)(param_1 + 0xa8);
  uStack_64 = *(undefined4 *)(param_1 + 0xac);
  uStack_60 = *(undefined4 *)(param_1 + 0xb0);
  uStack_5c = *(undefined4 *)(param_1 + 0xb4);
  local_58 = *(undefined8 *)(param_1 + 0xb8);
  local_38 = 1;
  local_40 = 0x7fefffffffffffff;
  local_30 = 0;
  local_78 = &PTR_FUN_14a4aac50;
  FUN_1475a3bac(param_4);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a3bac FUN_1475a3bac body=245 status=ok
// SIG undefined FUN_1475a3bac(void)

void FUN_1475a3bac(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar5 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_1475b2032(puVar5);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar4 = param_1;
  }
  puVar1 = (undefined4 *)(lVar4 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  bVar3 = local_28;
  if ((local_28 & 1) != 0) {
    bVar3 = local_28 & 0xfe;
    *(byte *)(puVar1 + 0x10) = (*(byte *)(puVar1 + 0x10) & 0xfc | local_28 & 2) + 1;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
  }
  if ((bVar3 & 1) != 0) {
    if ((bVar3 & 2) == 0) {
      puVar5 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = bVar3 & 0xfe;
    (**(code **)*puVar5)(puVar5,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a3cae FUN_1475a3cae body=504 status=ok
// SIG undefined FUN_1475a3cae(void)

undefined8 FUN_1475a3cae(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  plVar1 = (longlong *)(param_1 + 8);
  lVar3 = FUN_1446ddbd2();
  if (((*(longlong *)(param_1 + 8) == 0) || (cVar2 = FUN_144729dda(param_1 + 0x10), cVar2 == '\0'))
     && (*(int *)(param_1 + 0x20) != 0)) {
    lVar4 = FUN_14007daa4(plVar1,0,0);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 8);
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (bVar6) goto LAB_1475a3d10;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_1475a3d10:
        *plVar1 = lVar4;
        goto LAB_1475a3d18;
      }
    }
    if (*plVar1 != 0) {
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    lVar4 = *plVar1;
LAB_1475a3d18:
    if (lVar4 != 0) {
      lVar3 = *(longlong *)(lVar4 + 8);
      lVar5 = FUN_144a810c6();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar6 = lVar3 != 0;
        if (lVar3 != lVar5 && bVar6) {
          do {
            lVar3 = *(longlong *)(lVar3 + 0x30);
            bVar6 = lVar3 != 0;
            if (lVar3 == lVar5) break;
          } while (lVar3 != 0);
        }
        if (bVar6) goto LAB_1475a3d39;
      }
      else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_1475a3d39:
        return *(undefined8 *)(lVar4 + 0x70);
      }
    }
  }
  lVar3 = FUN_1446ddbd2();
  if (((*plVar1 == 0) || (cVar2 = FUN_144729dda(param_1 + 0x10), cVar2 == '\0')) &&
     (*(int *)(param_1 + 0x20) != 0)) {
    lVar4 = FUN_14007daa4(plVar1,0,0);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 8);
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (bVar6) goto LAB_1475a3dff;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_1475a3dff:
        *plVar1 = lVar4;
        goto LAB_1475a3e07;
      }
    }
    if (*plVar1 != 0) {
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    lVar4 = *plVar1;
LAB_1475a3e07:
    if (lVar4 != 0) {
      lVar3 = *(longlong *)(lVar4 + 8);
      lVar5 = FUN_140be4ae0();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar6 = lVar3 != 0;
        if (lVar3 != lVar5 && bVar6) {
          do {
            lVar3 = *(longlong *)(lVar3 + 0x30);
            bVar6 = lVar3 != 0;
            if (lVar3 == lVar5) break;
          } while (lVar3 != 0);
        }
        if (bVar6) goto LAB_1475a3e28;
      }
      else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_1475a3e28:
        return *(undefined8 *)(lVar4 + 0x70);
      }
    }
  }
  return 0;
}



// FUNCTION 1475a3ea6 FUN_1475a3ea6 body=118 status=ok
// SIG undefined FUN_1475a3ea6(void)

void FUN_1475a3ea6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140861d3c(local_50,param_1,param_1 + 0x50,param_1 + 0x70);
  local_38 = param_1 + 0x60;
  FUN_147523910(local_50,param_2,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a3f1e FUN_1475a3f1e body=125 status=ok
// SIG undefined FUN_1475a3f1e(void)

void FUN_1475a3f1e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_147523b62(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a3f9c FUN_1475a3f9c body=125 status=ok
// SIG undefined FUN_1475a3f9c(void)

void FUN_1475a3f9c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_1475a401a(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a401a FUN_1475a401a body=90 status=ok
// SIG undefined FUN_1475a401a(void)

void FUN_1475a401a(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar2 * 4));
      if (iVar1 != -1) {
        FUN_1475b223c(param_1,iVar1,*(undefined4 *)(*param_3 + lVar2 * 4));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1475a4074 FUN_1475a4074 body=125 status=ok
// SIG undefined FUN_1475a4074(void)

void FUN_1475a4074(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_1475a40f2(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a40f2 FUN_1475a40f2 body=249 status=ok
// SIG undefined FUN_1475a40f2(void)

void FUN_1475a40f2(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  undefined4 local_68 [6];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < (int)param_2[1]) {
    lVar3 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar3 * 4));
      if (iVar1 == -1) {
        FUN_147a3fc60(local_68);
        *(undefined4 *)(*param_3 + lVar3 * 4) = local_68[0];
      }
      else {
        FUN_141133e44(local_68,(longlong)iVar1 * 0x28 + *(longlong *)param_1[3]);
        uVar2 = FUN_1475b2436(param_1,*(undefined4 *)(*(longlong *)*param_1 + (longlong)iVar1 * 4),
                              local_68);
        FUN_147524308(param_1,&local_6c,uVar2);
        *(undefined4 *)(*param_3 + lVar3 * 4) = local_6c;
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_2[1]);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a41ec FUN_1475a41ec body=150 status=ok
// SIG undefined FUN_1475a41ec(void)

void FUN_1475a41ec(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  lVar2 = param_2[1];
  local_30 = param_1 + 0x60;
  if (0 < (longlong)(int)lVar2) {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      iVar3 = FUN_14752433e(local_48,*(undefined4 *)(lVar1 + lVar4 * 4));
      if (iVar3 != -1) {
        FUN_1475b250e(local_48,iVar3);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar2 != lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a4284 FUN_1475a4284 body=106 status=ok
// SIG undefined FUN_1475a4284(void)

void FUN_1475a4284(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_30 = param_1 + 0x60;
  FUN_1475a42f0(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a42f0 FUN_1475a42f0 body=353 status=ok
// SIG undefined FUN_1475a42f0(void)

void FUN_1475a42f0(undefined8 param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 2;
  uStack_80 = 2;
  FUN_147523910(param_1,&local_88,&local_68);
  local_88 = 0;
  uStack_80 = 0;
  if (0 < (int)uStack_60) {
    lVar6 = 0;
    iVar5 = (int)uStack_60;
    do {
      lVar3 = local_78;
      uVar4 = uStack_80;
      iVar2 = *(int *)(local_68 + lVar6 * 4);
      if (param_3 == '\0') {
        if (param_2 < iVar2) goto LAB_1475a437b;
      }
      else if (iVar2 < param_2) {
LAB_1475a437b:
        iVar5 = (int)uStack_80;
        uVar1 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        if (uStack_80._4_4_ < uVar1) {
          FUN_14065110c(&local_88,uVar4 & 0xffffffff);
        }
        *(undefined4 *)(local_88 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar3 + lVar6 * 4);
        iVar5 = (int)uStack_60;
      }
      lVar3 = local_88;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
    lVar6 = (longlong)(int)uStack_80;
    if (0 < lVar6) {
      lVar7 = 0;
      do {
        iVar5 = FUN_14752433e(param_1,*(undefined4 *)(lVar3 + lVar7 * 4));
        if (iVar5 != -1) {
          FUN_1475b250e(param_1,iVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a4452 FUN_1475a4452 body=108 status=ok
// SIG undefined FUN_1475a4452(void)

void FUN_1475a4452(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_30 = param_1 + 0x60;
  FUN_147524082(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a44f8 FUN_1475a44f8 body=103 status=ok
// SIG undefined FUN_1475a44f8(void)

void FUN_1475a44f8(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_140aba11c(param_1 + 0x50,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  FUN_140f00c57(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x6c) != 0)) {
    FUN_1475b263a(param_1 + 0x60);
  }
  FUN_147a408e2(param_1 + 0x70);
  return;
}



// FUNCTION 1475a4560 FUN_1475a4560 body=96 status=ok
// SIG undefined FUN_1475a4560(void)

void FUN_1475a4560(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_40,param_1,param_1 + 0x50,param_1 + 0x70);
  local_28 = param_1 + 0x60;
  FUN_1475243aa(local_40,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a45c2 FUN_1475a45c2 body=111 status=ok
// SIG undefined FUN_1475a45c2(void)

undefined8 FUN_1475a45c2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_30 = param_1 + 0x60;
  FUN_147524308(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a4632 FUN_1475a4632 body=96 status=ok
// SIG undefined FUN_1475a4632(void)

void FUN_1475a4632(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_40,param_1,param_1 + 0x50,param_1 + 0x70);
  local_28 = param_1 + 0x60;
  FUN_14752433e(local_40,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a4694 FUN_1475a4694 body=56 status=ok
// SIG undefined FUN_1475a4694(void)

undefined8 FUN_1475a4694(float *param_1,double param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_140073f12((float)((double)*param_1 * ((double)param_1[4] + param_2)));
  return CONCAT44((int)((ulonglong)((double)fVar1 * *(double *)(param_1 + 2)) >> 0x20),
                  (float)((double)fVar1 * *(double *)(param_1 + 2)));
}



// FUNCTION 1475a46e4 FUN_1475a46e4 body=26 status=ok
// SIG undefined FUN_1475a46e4(void)

bool FUN_1475a46e4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140f938fc();
  return *(longlong *)(lVar1 + 0x18) == param_2;
}



// FUNCTION 1475a46fe FUN_1475a46fe body=169 status=ok
// SIG undefined FUN_1475a46fe(void)

void FUN_1475a46fe(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined2 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_50;
  undefined2 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_14038fb82();
  FUN_14009d2a0();
  local_48 = *(undefined2 *)(param_2 + 8);
  local_70 = *(undefined2 *)(lVar1 + 0xe0);
  local_50 = 1;
  local_68 = *(undefined4 *)(param_1 + 0xa8);
  uStack_64 = *(undefined4 *)(param_1 + 0xac);
  uStack_60 = *(undefined4 *)(param_1 + 0xb0);
  uStack_5c = *(undefined4 *)(param_1 + 0xb4);
  local_58 = *(undefined8 *)(param_1 + 0xb8);
  local_38 = 1;
  local_40 = 0x47efffffe0000000;
  local_30 = 0;
  local_78 = &PTR_FUN_14a4aac50;
  FUN_1475a3bac(param_4);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a47bc FUN_1475a47bc body=105 status=ok
// SIG undefined FUN_1475a47bc(void)

longlong FUN_1475a47bc(longlong param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(uint *)(param_1 + 0x58);
  if (uVar5 != 0) {
    if ((int)uVar5 < 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      do {
        uVar1 = (uVar5 >> 1) + uVar6;
        if (*(int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar1 * 4) <= param_2) {
          uVar6 = uVar1 + (uVar5 & 1);
        }
        bVar2 = 1 < uVar5;
        uVar5 = uVar5 >> 1;
      } while (bVar2);
    }
    uVar3 = 1;
    if (1 < (int)uVar6) {
      uVar3 = (ulonglong)uVar6;
    }
    return uVar3 * 0x10 + *(longlong *)(param_1 + 0x60) + -0x10;
  }
  lVar4 = 0;
  if (*(char *)(param_1 + 0x80) != '\0') {
    lVar4 = param_1 + 0x70;
  }
  return lVar4;
}



// FUNCTION 1475a4826 FUN_1475a4826 body=797 status=ok
// SIG undefined FUN_1475a4826(void)

ulonglong FUN_1475a4826(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  float *pfVar2;
  void *pvVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  char local_101;
  void *local_100;
  float local_f8;
  undefined4 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  void *local_e0;
  uint local_d8;
  undefined4 local_d4;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  ulonglong uStack_60;
  float *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab4970) {
    FUN_144b3d300(&DAT_14cab4970);
    if (DAT_14cab4970 == -1) {
      FUN_1446ddc76(&DAT_14cab4968,"StringCurve",1);
      _Init_thread_footer(&DAT_14cab4970);
    }
  }
  local_d0 = (undefined **)CONCAT44(local_d0._4_4_,*(undefined4 *)(param_2 + 8));
  uVar5 = FUN_1468ec2ac(&local_d0,DAT_14cab4968);
  uVar7 = (ulonglong)uVar5;
  cVar4 = (char)uVar5;
  if (cVar4 == '\0') goto LAB_1475a4895;
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_d0 = &PTR_FUN_14a4aa4a0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_58 = (float *)0x0;
  uStack_50 = 0;
  uVar6 = FUN_1463c1de6();
  FUN_14483b62e(uVar6,param_3,&local_d0,0);
  pvVar3 = local_68;
  local_e0 = (void *)0x0;
  lVar9 = (longlong)(int)(uint)uStack_60;
  local_d8 = (uint)uStack_60;
  if (lVar9 == 0) {
LAB_1475a4940:
    local_e0 = (void *)0x0;
    local_d4 = 0;
  }
  else {
    FUN_1446dd670(&local_e0,uStack_60 & 0xffffffff,0);
    memcpy(local_e0,pvVar3,lVar9 * 2);
    if ((1 < local_d8) &&
       (*(undefined1 *)(param_1 + 0x80) = 1, (void **)(param_1 + 0x70) != &local_e0)) {
      if (*(longlong *)(param_1 + 0x70) != 0) {
        FUN_1400020a8();
      }
      *(void **)(param_1 + 0x70) = local_e0;
      *(uint *)(param_1 + 0x78) = local_d8;
      *(undefined4 *)(param_1 + 0x7c) = local_d4;
      local_d8 = 0;
      goto LAB_1475a4940;
    }
  }
  FUN_145cba7c3(&local_e8);
  if (-1 < (int)uStack_50) {
    iVar8 = (int)uStack_50;
    if (*(int *)(param_1 + 0x5c) < (int)uStack_50) {
      FUN_140aba11c(param_1 + 0x50);
      iVar8 = (int)uStack_50;
      if ((int)uStack_50 < 0) goto LAB_1475a4af9;
    }
    uVar1 = param_1 + 0x60;
    local_101 = cVar4;
    if (*(int *)(param_1 + 0x6c) < iVar8) {
      FUN_1408be2c4(uVar1);
      iVar8 = (int)uStack_50;
    }
    if (iVar8 != 0) {
      pfVar2 = local_58 + (longlong)iVar8 * 6;
      iVar8 = 0;
      pfVar10 = local_58;
      do {
        FUN_147572fa9(&local_ec,0,local_e8,(double)*pfVar10);
        local_100 = (void *)0x0;
        local_f8 = pfVar10[4];
        lVar9 = (longlong)(int)local_f8;
        pvVar3 = *(void **)(pfVar10 + 2);
        if (lVar9 == 0) {
          local_f4 = 0;
        }
        else {
          FUN_1446dd670(&local_100,local_f8,0);
          memcpy(local_100,pvVar3,lVar9 * 2);
        }
        local_118 = uVar1;
        FUN_1475a4b4b(iVar8,local_ec,&local_100,param_1 + 0x50);
        if (local_100 != (void *)0x0) {
          FUN_1400020a8();
        }
        pfVar10 = pfVar10 + 6;
        iVar8 = iVar8 + 1;
        uVar7 = uVar1;
      } while (pfVar10 != pfVar2);
    }
    if (local_e0 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1475a4d22(&local_d0);
    uVar7 = CONCAT71((int7)(uVar7 >> 8),local_101);
LAB_1475a4895:
    if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
      return uVar7 & 0xffffffff;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_1475a4af9:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uStack_50 & 0xffffffff);
}



// FUNCTION 1475a4b4b FUN_1475a4b4b body=471 status=ok
// SIG undefined FUN_1475a4b4b(void)

void FUN_1475a4b4b(uint param_1,int param_2,undefined8 *param_3,longlong *param_4,longlong *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((int)param_1 < 1) {
    iVar3 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_14753e8f2(param_4,iVar3);
    }
    *(int *)(*param_4 + (longlong)iVar3 * 4) = param_2;
  }
  else {
    pvVar5 = (void *)*param_4;
    if (param_2 < *(int *)((longlong)pvVar5 + (ulonglong)param_1 * 4 + -4)) {
      lVar7 = (ulonglong)param_1 - 1;
      do {
        if (lVar7 < 1) {
          uVar4 = *(uint *)(param_4 + 1);
          *(uint *)(param_4 + 1) = uVar4 + 1;
          if (*(uint *)((longlong)param_4 + 0xc) < uVar4 + 1) {
            FUN_14753e8f2(param_4,(ulonglong)uVar4);
            pvVar5 = (void *)*param_4;
          }
          memmove((void *)((longlong)pvVar5 + 4),pvVar5,(ulonglong)uVar4 << 2);
          *(int *)*param_4 = param_2;
          param_1 = 0;
          goto LAB_1475a4ccc;
        }
        lVar6 = lVar7 + -1;
        param_1 = param_1 - 1;
        lVar2 = lVar7 * 4;
        lVar7 = lVar6;
      } while (param_2 < *(int *)((longlong)pvVar5 + lVar2 + -4));
      iVar3 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
        FUN_14753e8f2(param_4,iVar3);
        pvVar5 = (void *)*param_4;
      }
      lVar7 = (ulonglong)((int)lVar6 + 1) * 4;
      memmove((void *)((longlong)pvVar5 + lVar7 + 4),(void *)((longlong)pvVar5 + lVar7),
              (ulonglong)(iVar3 - param_1) << 2);
      *(int *)(*param_4 + lVar7) = param_2;
LAB_1475a4ccc:
      FUN_14127e8fc(param_5,param_3,param_1);
      return;
    }
    iVar3 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_14753e8f2(param_4,iVar3);
      pvVar5 = (void *)*param_4;
    }
    *(int *)((longlong)pvVar5 + (longlong)iVar3 * 4) = param_2;
  }
  iVar3 = (int)param_5[1];
  *(uint *)(param_5 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
    FUN_1447a1bd6(param_5,iVar3);
  }
  lVar7 = *param_5;
  lVar6 = (longlong)iVar3 * 0x10;
  puVar1 = (undefined8 *)(lVar7 + lVar6);
  *(undefined8 *)(lVar7 + lVar6) = 0;
  iVar3 = *(int *)(param_3 + 1);
  pvVar5 = (void *)*param_3;
  *(int *)(lVar7 + 8 + lVar6) = iVar3;
  if ((longlong)iVar3 != 0) {
    FUN_1446dd670(puVar1,iVar3,0);
    memcpy((void *)*puVar1,pvVar5,(longlong)iVar3 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  return;
}



// FUNCTION 1475a4d22 FUN_1475a4d22 body=88 status=ok
// SIG undefined FUN_1475a4d22(void)

void FUN_1475a4d22(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4aa4a0;
  FUN_1475af39b(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 1);
  return;
}



// FUNCTION 1475a4d7a FUN_1475a4d7a body=121 status=ok
// SIG undefined FUN_1475a4d7a(void)

void FUN_1475a4d7a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140861d3c(local_50,param_1,param_1 + 0x50,param_1 + 0x88);
  local_38 = param_1 + 0x60;
  FUN_147523910(local_50,param_2,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a4df4 FUN_1475a4df4 body=128 status=ok
// SIG undefined FUN_1475a4df4(void)

void FUN_1475a4df4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x88);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_147523b62(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a4e76 FUN_1475a4e76 body=128 status=ok
// SIG undefined FUN_1475a4e76(void)

void FUN_1475a4e76(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x88);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_1475a4ef8(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a4ef8 FUN_1475a4ef8 body=90 status=ok
// SIG undefined FUN_1475a4ef8(void)

void FUN_1475a4ef8(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar2 * 4));
      if (iVar1 != -1) {
        FUN_1475b27e0(param_1,iVar1,*(undefined4 *)(*param_3 + lVar2 * 4));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1475a4f52 FUN_1475a4f52 body=128 status=ok
// SIG undefined FUN_1475a4f52(void)

void FUN_1475a4f52(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x88);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_1475a4fd4(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a4fd4 FUN_1475a4fd4 body=309 status=ok
// SIG undefined FUN_1475a4fd4(void)

void FUN_1475a4fd4(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < (int)param_2[1]) {
    lVar3 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar3 * 4));
      if (iVar1 == -1) {
        FUN_147a3fc60(&local_58);
        *(undefined4 *)(*param_3 + lVar3 * 4) = local_58._0_4_;
      }
      else {
        lVar2 = (longlong)iVar1 * 0x10;
        local_58 = (void *)0x0;
        local_50 = *(int *)(*(longlong *)param_1[3] + 8 + lVar2);
        lVar4 = (longlong)local_50;
        _Src = *(void **)(*(longlong *)param_1[3] + lVar2);
        if (lVar4 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,_Src,lVar4 * 2);
        }
        FUN_1475b28c4(param_1,*(undefined4 *)(*(longlong *)*param_1 + (longlong)iVar1 * 4),&local_58
                     );
        FUN_147524308(param_1,&local_5c);
        *(undefined4 *)(*param_3 + lVar3 * 4) = local_5c;
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_2[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a510a FUN_1475a510a body=153 status=ok
// SIG undefined FUN_1475a510a(void)

void FUN_1475a510a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x88);
  lVar2 = param_2[1];
  local_30 = param_1 + 0x60;
  if (0 < (longlong)(int)lVar2) {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      iVar3 = FUN_14752433e(local_48,*(undefined4 *)(lVar1 + lVar4 * 4));
      if (iVar3 != -1) {
        FUN_1475b299c(local_48,iVar3);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar2 != lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a51a4 FUN_1475a51a4 body=461 status=ok
// SIG undefined FUN_1475a51a4(void)

void FUN_1475a51a4(longlong param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  void *_Src;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_b8 [44];
  undefined1 local_8c [4];
  longlong local_88 [2];
  undefined2 *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = param_1 + 0x88;
  plVar1 = (longlong *)(param_1 + 0x60);
  plVar2 = (longlong *)(param_1 + 0x50);
  FUN_140861d3c(local_68,param_1,plVar2,lVar3);
  local_50 = plVar1;
  if (0 < *(int *)(local_68[0] + 8)) {
    uVar5 = *(uint *)(param_1 + 0x58);
    if (uVar5 == 0) {
      if (*(char *)(param_1 + 0x80) != '\x01') goto LAB_1475a5262;
      puVar7 = (undefined8 *)(param_1 + 0x70);
    }
    else {
      uVar10 = 0;
      if (0 < (int)uVar5) {
        uVar10 = 0;
        uVar6 = (ulonglong)uVar5;
        do {
          uVar6 = uVar6 >> 1;
          uVar9 = (uint)uVar6 + uVar10;
          if (*(int *)(*plVar2 + (ulonglong)uVar9 * 4) <= param_2) {
            uVar10 = uVar9 + (uVar5 & 1);
          }
          bVar4 = 1 < uVar5;
          uVar5 = (uint)uVar6;
        } while (bVar4);
      }
      uVar6 = 1;
      if (1 < (int)uVar10) {
        uVar6 = (ulonglong)uVar10;
      }
      puVar7 = (undefined8 *)(uVar6 * 0x10 + *plVar1 + -0x10);
    }
    if (puVar7 != (undefined8 *)0x0) {
      local_78 = (undefined2 *)0x0;
      local_70 = *(int *)(puVar7 + 1);
      lVar11 = (longlong)local_70;
      _Src = (void *)*puVar7;
      if (lVar11 == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,local_70,0);
        memcpy(local_78,_Src,lVar11 * 2);
      }
      FUN_140861d3c(local_68,param_1,plVar2,lVar3);
      puVar8 = local_78;
      if (local_70 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      local_50 = plVar1;
      FUN_140056680(local_88,puVar8);
      FUN_1475a5372(local_68,local_8c,param_2,local_88);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1475a5262:
  FUN_140861d3c(local_68,param_1,plVar2,lVar3);
  local_50 = plVar1;
  FUN_1475a53de(local_68,param_2,param_3);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a5372 FUN_1475a5372 body=108 status=ok
// SIG undefined FUN_1475a5372(void)

undefined8 FUN_1475a5372(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_147525ee8(param_1,param_3,0);
  if (iVar1 == -1) {
    iVar1 = FUN_1475b28c4(param_1,param_3,param_4);
  }
  else {
    FUN_144a787a6((longlong)iVar1 * 0x10 + **(longlong **)(param_1 + 0x18),param_4);
  }
  FUN_147524308(param_1,param_2,iVar1);
  return param_2;
}



// FUNCTION 1475a53de FUN_1475a53de body=353 status=ok
// SIG undefined FUN_1475a53de(void)

void FUN_1475a53de(undefined8 param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 2;
  uStack_80 = 2;
  FUN_147523910(param_1,&local_88,&local_68);
  local_88 = 0;
  uStack_80 = 0;
  if (0 < (int)uStack_60) {
    lVar6 = 0;
    iVar5 = (int)uStack_60;
    do {
      lVar3 = local_78;
      uVar4 = uStack_80;
      iVar2 = *(int *)(local_68 + lVar6 * 4);
      if (param_3 == '\0') {
        if (param_2 < iVar2) goto LAB_1475a5469;
      }
      else if (iVar2 < param_2) {
LAB_1475a5469:
        iVar5 = (int)uStack_80;
        uVar1 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        if (uStack_80._4_4_ < uVar1) {
          FUN_14065110c(&local_88,uVar4 & 0xffffffff);
        }
        *(undefined4 *)(local_88 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar3 + lVar6 * 4);
        iVar5 = (int)uStack_60;
      }
      lVar3 = local_88;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
    lVar6 = (longlong)(int)uStack_80;
    if (0 < lVar6) {
      lVar7 = 0;
      do {
        iVar5 = FUN_14752433e(param_1,*(undefined4 *)(lVar3 + lVar7 * 4));
        if (iVar5 != -1) {
          FUN_1475b299c(param_1,iVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a5540 FUN_1475a5540 body=114 status=ok
// SIG undefined FUN_1475a5540(void)

undefined8 FUN_1475a5540(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x88);
  local_30 = param_1 + 0x60;
  FUN_147524308(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a55b4 FUN_1475a55b4 body=99 status=ok
// SIG undefined FUN_1475a55b4(void)

void FUN_1475a55b4(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_40,param_1,param_1 + 0x50,param_1 + 0x88);
  local_28 = param_1 + 0x60;
  FUN_14752433e(local_40,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a5618 FUN_1475a5618 body=111 status=ok
// SIG undefined FUN_1475a5618(void)

void FUN_1475a5618(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x88);
  local_30 = param_1 + 0x60;
  FUN_147524082(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a56c0 FUN_1475a56c0 body=113 status=ok
// SIG undefined FUN_1475a56c0(void)

void FUN_1475a56c0(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_140aba11c(param_1 + 0x50,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x6c) != 0)) {
    FUN_1408be2c4(param_1 + 0x60,0);
  }
  FUN_147a408e2(param_1 + 0x88);
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 1475a5737 FUN_1475a5737 body=439 status=ok
// SIG undefined FUN_1475a5737(void)

void FUN_1475a5737(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong *local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x60);
  FUN_140861d3c(local_68,param_1,param_1 + 0x50,param_1 + 0x88);
  uVar8 = *(uint *)(local_68[0] + 1);
  local_50 = plVar1;
  if (1 < (int)uVar8) {
    uVar10 = 0;
    if ((char)*(undefined8 *)(param_2 + 8) != '\x02') {
      uVar10 = 0;
      uVar7 = (ulonglong)uVar8;
      uVar5 = uVar8;
      do {
        uVar7 = uVar7 >> 1;
        uVar9 = (uint)uVar7 + uVar10;
        if (*(int *)(*local_68[0] + (ulonglong)uVar9 * 4) <
            (int)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20)) {
          uVar10 = uVar9 + (uVar5 & 1);
        }
        bVar3 = 1 < uVar5;
        uVar5 = (uint)uVar7;
      } while (bVar3);
    }
    if ((char)*(undefined8 *)(param_2 + 0x10) != '\x02') {
      uVar9 = 0;
      uVar7 = (ulonglong)uVar8;
      uVar5 = uVar8;
      do {
        uVar7 = uVar7 >> 1;
        uVar8 = (uint)uVar7 + uVar9;
        if (*(int *)(*local_68[0] + (ulonglong)uVar8 * 4) <=
            (int)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20)) {
          uVar9 = uVar8 + (uVar5 & 1);
        }
        bVar3 = 1 < uVar5;
        uVar5 = (uint)uVar7;
        uVar8 = uVar9;
      } while (bVar3);
    }
    if ((int)uVar10 < (int)uVar8) {
      do {
        if ((int)local_68[0][1] <= (int)uVar10) break;
        uVar2 = *(undefined4 *)(*local_68[0] + (ulonglong)uVar10 * 4);
        lVar6 = (ulonglong)uVar10 * 0x10;
        local_78 = (void *)0x0;
        local_70 = *(int *)(*local_50 + 8 + lVar6);
        lVar11 = (longlong)local_70;
        _Src = *(void **)(*local_50 + lVar6);
        if (lVar11 == 0) {
          local_6c = 0;
        }
        else {
          FUN_1446dd670(&local_78,local_70,0);
          memcpy(local_78,_Src,lVar11 * 2);
        }
        FUN_1475b299c(local_68,uVar10);
        cVar4 = FUN_1475b2ac2(param_1,uVar2);
        if (cVar4 == '\0') {
          FUN_1475b28c4(local_68,uVar2);
        }
        else {
          uVar10 = uVar10 - 1;
        }
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a58f0 FUN_1475a58f0 body=99 status=ok
// SIG undefined FUN_1475a58f0(void)

void FUN_1475a58f0(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_40,param_1,param_1 + 0x50,param_1 + 0x88);
  local_28 = param_1 + 0x60;
  FUN_1475243aa(local_40,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a595c FUN_1475a595c body=1061 status=ok
// SIG undefined FUN_1475a595c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1475a595c(longlong *param_1,longlong *param_2,void *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  void *_Src;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  void *_Dst;
  undefined1 *puVar13;
  longlong lVar14;
  void *_Dst_00;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_78 [8];
  void *local_70;
  longlong local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined1 local_49;
  ulonglong local_48;
  
  puVar13 = auStack_78;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  local_49 = 0;
  lVar4 = *param_2;
  if (lVar4 == 0) {
    uVar11 = 0;
    goto LAB_1475a5c4b;
  }
  uVar2 = *(ushort *)(lVar4 + 0xb6);
  lVar14 = (longlong)*(int *)(lVar4 + 0x5c);
  lVar8 = lVar14 + (ulonglong)uVar2;
  if ((int)lVar8 == 0) {
    puVar12 = (undefined1 *)0x0;
    puVar13 = auStack_78;
  }
  else {
    lVar8 = -(lVar8 + 0x1eU & 0xfffffffffffffff0);
    puVar12 = auStack_78 + lVar8;
    puVar13 = auStack_78 + lVar8;
  }
  _Dst_00 = (void *)(-lVar14 & (ulonglong)(puVar12 + lVar14 + -1));
  plVar15 = (longlong *)0x0;
  local_70 = param_3;
  *(undefined8 *)(puVar13 + -0x28) = 0x1475a59e1;
  memset(_Dst_00,0,(ulonglong)uVar2);
  local_60 = *(longlong **)(lVar4 + 0x50);
  local_58 = 0xffffffff;
  local_54 = 0x101;
  local_52 = 0;
  local_68 = lVar4;
  *(undefined8 *)(puVar13 + -0x28) = 0x1475a5a14;
  FUN_144a2daf0(&local_68);
  if (local_60 != (longlong *)0x0) {
    plVar15 = (longlong *)0x0;
    do {
      plVar1 = local_60;
      uVar7 = (uint)local_60[7];
      if ((uVar7 & 0x280) == 0x80) {
        iVar3 = *(int *)((longlong)local_60 + 0x44);
        pcVar5 = *(code **)(*local_60 + 0x160);
        *(undefined8 *)(puVar13 + -0x28) = 0x1475a5a53;
        (*pcVar5)(plVar1,(longlong)iVar3 + (longlong)_Dst_00);
        uVar7 = (uint)plVar1[7];
      }
      if ((uVar7 >> 10 & 1) != 0) {
        plVar15 = plVar1;
      }
      local_60 = (longlong *)local_60[3];
      *(undefined8 *)(puVar13 + -0x28) = 0x1475a5a7b;
      FUN_144a2daf0(&local_68);
    } while (local_60 != (longlong *)0x0);
  }
  plVar1 = param_2 + 1;
  *(undefined8 *)(puVar13 + -0x28) = 0x1475a5a96;
  lVar8 = FUN_1446ddbd2();
  if (param_2[1] == 0) {
    if ((int)param_2[4] != 0) goto LAB_1475a5ac3;
  }
  else {
    *(undefined8 *)(puVar13 + -0x28) = 0x1475a5ab3;
    cVar6 = FUN_144729dda(param_2 + 2);
    if ((cVar6 == '\0') && ((int)param_2[4] != 0)) {
LAB_1475a5ac3:
      *(undefined8 *)(puVar13 + -0x28) = 0x1475a5ad4;
      plVar9 = (longlong *)FUN_14007daa4(plVar1,0,0);
      if (plVar9 == (longlong *)0x0) {
LAB_1475a5d2a:
        if (*plVar1 != 0) {
          *plVar1 = 0;
          param_2[2] = 0;
        }
        goto LAB_1475a5b5f;
      }
      lVar14 = plVar9[1];
      if (*(ulonglong *)(lVar8 + 8) == 0) {
        bVar16 = lVar14 != 0;
        if (lVar14 != lVar8 && bVar16) {
          do {
            lVar14 = *(longlong *)(lVar14 + 0x30);
            bVar16 = lVar14 != 0;
            if (lVar14 == lVar8) break;
          } while (lVar14 != 0);
        }
        if (!bVar16) goto LAB_1475a5d2a;
      }
      else if ((*(ulonglong *)(lVar14 + 0x18) & *(ulonglong *)(lVar8 + 8)) == 0) goto LAB_1475a5d2a;
      *plVar1 = (longlong)plVar9;
    }
    else {
      plVar9 = (longlong *)*plVar1;
    }
    if (plVar9 != (longlong *)0x0) {
      pcVar5 = *(code **)(*plVar9 + 0x80);
      *(undefined8 *)(puVar13 + -0x28) = 0x1475a5b37;
      cVar6 = (*pcVar5)(plVar9);
      _Src = local_70;
      if (cVar6 == '\0') {
        _Dst = (void *)((longlong)*(int *)((longlong)plVar9 + 0x44) + (longlong)_Dst_00);
        if (_Dst != local_70) {
          if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
            lVar8 = plVar9[6];
            pcVar5 = *(code **)(*plVar9 + 0x100);
            *(undefined8 *)(puVar13 + -0x28) = 0x1475a5cf4;
            (*pcVar5)(plVar9,_Dst,_Src,(int)lVar8);
          }
          else {
            iVar3 = *(int *)((longlong)plVar9 + 0x34);
            lVar8 = plVar9[6];
            *(undefined8 *)(puVar13 + -0x28) = 0x1475a5d81;
            memcpy(_Dst,_Src,(longlong)(int)lVar8 * (longlong)iVar3);
          }
        }
      }
      else {
        pcVar5 = *(code **)(*plVar9 + 0x98);
        *(undefined8 *)(puVar13 + -0x28) = 0x1475a5b5b;
        (*pcVar5)(plVar9,_Dst_00,_Src);
      }
    }
  }
LAB_1475a5b5f:
  if (plVar15 != (longlong *)0x0) {
    pcVar5 = *(code **)(*param_1 + 0x248);
    *(undefined8 *)(puVar13 + -0x28) = 0x1475a5b7a;
    (*pcVar5)(param_1,lVar4,_Dst_00);
    pcVar5 = *(code **)(*plVar15 + 0x88);
    *(undefined8 *)(puVar13 + -0x28) = 0x1475a5b8e;
    cVar6 = (*pcVar5)(plVar15);
    if (cVar6 == '\0') {
      puVar12 = (undefined1 *)((longlong)*(int *)((longlong)plVar15 + 0x44) + (longlong)_Dst_00);
      if (puVar12 != &local_49) {
        if ((*(byte *)((longlong)plVar15 + 0x3b) & 0x40) == 0) {
          lVar8 = plVar15[6];
          pcVar5 = *(code **)(*plVar15 + 0x100);
          *(undefined8 *)(puVar13 + -0x28) = 0x1475a5cb7;
          (*pcVar5)(plVar15,&local_49,puVar12,(int)lVar8);
        }
        else {
          iVar3 = *(int *)((longlong)plVar15 + 0x34);
          lVar8 = plVar15[6];
          *(undefined8 *)(puVar13 + -0x28) = 0x1475a5d5e;
          memcpy(&local_49,puVar12,(longlong)(int)lVar8 * (longlong)iVar3);
        }
      }
    }
    else {
      pcVar5 = *(code **)(*plVar15 + 0xa0);
      *(undefined8 *)(puVar13 + -0x28) = 0x1475a5bb1;
      (*pcVar5)(plVar15,_Dst_00,&local_49);
    }
  }
  local_60 = *(longlong **)(lVar4 + 0x50);
  local_58 = 0xffffffff;
  local_54 = 0x101;
  local_52 = 0;
  local_68 = lVar4;
  *(undefined8 *)(puVar13 + -0x28) = 0x1475a5be1;
  uVar10 = FUN_144a2daf0(&local_68);
  if (local_60 != (longlong *)0x0) {
    do {
      plVar15 = local_60;
      if ((local_60[7] & 0x1000000080U) == 0x80) {
        iVar3 = *(int *)((longlong)local_60 + 0x44);
        pcVar5 = *(code **)(*local_60 + 0x148);
        *(undefined8 *)(puVar13 + -0x28) = 0x1475a5c1f;
        (*pcVar5)(plVar15,(longlong)iVar3 + (longlong)_Dst_00);
      }
      local_60 = (longlong *)local_60[3];
      *(undefined8 *)(puVar13 + -0x28) = 0x1475a5c3b;
      uVar10 = FUN_144a2daf0(&local_68);
    } while (local_60 != (longlong *)0x0);
  }
  uVar11 = CONCAT71((int7)((ulonglong)uVar10 >> 8),local_49);
LAB_1475a5c4b:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar13 + -0x28) = &UNK_1475a5c77;
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffffffffff01;
}



// FUNCTION 1475a5d86 FUN_1475a5d86 body=154 status=ok
// SIG undefined FUN_1475a5d86(void)

undefined4
FUN_1475a5d86(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_4;
  local_20 = param_4[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  uVar4 = FUN_1432e7afa(&local_38,param_3,&local_28,param_1 + 0x60);
  plVar3 = (longlong *)param_4[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a5e22 FUN_1475a5e22 body=219 status=ok
// SIG undefined FUN_1475a5e22(void)

undefined4 FUN_1475a5e22(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147aba84e(&local_48);
  puVar7 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar7 = local_48;
  }
  iVar3 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar3 == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x60);
    lVar8 = 0;
    do {
      uVar6 = FUN_1402ca022(*(undefined8 *)(lVar4 + lVar8),puVar7);
      if ((char)uVar6 != '\0') break;
      bVar9 = (longlong)iVar3 * 8 + -8 != lVar8;
      lVar8 = lVar8 + 8;
    } while (bVar9);
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
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
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1475a5efe FUN_1475a5efe body=314 status=ok
// SIG undefined FUN_1475a5efe(void)

ulonglong FUN_1475a5efe(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [4];
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  longlong local_38;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145be17f3(local_70);
  switch(*(undefined1 *)(param_1 + 0x60)) {
  case 0:
    local_44 = local_6c;
    break;
  case 1:
    local_44 = local_68;
    break;
  case 2:
    local_44 = local_64;
    break;
  case 3:
    local_44 = local_60;
    break;
  case 4:
    local_44 = local_5c;
    break;
  case 5:
    local_44 = local_58;
    break;
  case 6:
    local_44 = local_54;
    break;
  case 7:
    local_44 = local_50;
    break;
  case 8:
    local_44 = local_4c;
    break;
  case 9:
    local_44 = local_48;
    break;
  case 10:
    break;
  default:
    local_44 = 0;
  }
  if (*(byte *)(param_1 + 0x61) < 5) {
    uVar4 = (uint)*(byte *)(param_1 + 0x62);
    uVar6 = (undefined7)((ulonglong)param_1 >> 8);
    switch(*(byte *)(param_1 + 0x61)) {
    case 0:
      uVar5 = CONCAT71(uVar6,(int)local_44 < (int)uVar4);
      break;
    case 1:
      uVar5 = CONCAT71(uVar6,(int)local_44 <= (int)uVar4);
      break;
    case 2:
      uVar5 = CONCAT71(uVar6,local_44 == uVar4);
      break;
    case 3:
      uVar5 = CONCAT71(uVar6,(int)uVar4 <= (int)local_44);
      break;
    case 4:
      uVar5 = CONCAT71(uVar6,(int)uVar4 < (int)local_44);
    }
  }
  else {
    uVar5 = 0;
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_4 + 8);
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
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1475a603e FUN_1475a603e body=94 status=ok
// SIG undefined FUN_1475a603e(void)

undefined8 * FUN_1475a603e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  
  lVar1 = FUN_1475a609c(param_1 + 0x40,param_3);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined2 *)(param_2 + 2) = 0xffff;
    uVar3 = 0xffff;
  }
  else {
    uVar3 = *(undefined2 *)(lVar1 + 0xe);
    uVar2 = FUN_14479d2ce(lVar1);
    param_2[1] = uVar2;
    *(undefined2 *)(param_2 + 2) = *(undefined2 *)(lVar1 + 0xc);
  }
  *(undefined2 *)param_2 = uVar3;
  return param_2;
}



// FUNCTION 1475a609c FUN_1475a609c body=182 status=ok
// SIG undefined FUN_1475a609c(void)

longlong FUN_1475a609c(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  ushort uVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar4 != -1) {
      while (puVar1 = (ushort *)(*param_1 + (longlong)iVar4 * 0xc), *puVar1 != param_2) {
        iVar4 = *(int *)(puVar1 + 2);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (puVar1 + 1 == (ushort *)0x0 || puVar1 == (ushort *)0x0) {
        return 0;
      }
      uVar2 = puVar1[1];
      if ((int)(uint)uVar2 < (int)param_1[0x23]) {
        plVar3 = param_1 + 0x20;
        if ((longlong *)param_1[0x22] != (longlong *)0x0) {
          plVar3 = (longlong *)param_1[0x22];
        }
        if ((*(uint *)((longlong)plVar3 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0)
        {
          return param_1[0x1e] + (ulonglong)(uint)uVar2 * 0x1c + 8;
        }
        return 0;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1475a6152 FUN_1475a6152 body=376 status=ok
// SIG undefined FUN_1475a6152(void)

ulonglong FUN_1475a6152(longlong param_1,longlong *param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  uint local_60 [8];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(short *)(param_3 + 0xe) == -1) && (*(short *)(param_3 + 0xc) == -1)) {
    iVar2 = (int)param_2[1];
    if ((longlong)iVar2 < 2) {
      uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      if (iVar2 != 0) {
        lVar3 = *param_2;
        lVar7 = 0;
        do {
          uVar5 = FUN_1432d4db6(*(longlong *)(param_1 + 0x28) + 0x28,*(undefined2 *)(lVar3 + lVar7))
          ;
          local_40 = 0;
          FUN_1400abb7c(local_60,uVar5);
          lVar4 = *(longlong *)(param_1 + 0x1d8);
          uVar1 = *(ushort *)(lVar4 + 0x112);
          if (((uVar1 != 0xffff) &&
              ((uint)local_40 != uVar1 && (int)(uint)uVar1 <= (int)(uint)local_40)) &&
             ((local_60[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) != 0)) goto LAB_1475a6176;
          uVar1 = *(ushort *)(lVar4 + 0x114);
          if (((uVar1 != 0xffff) &&
              ((uint)local_40 != uVar1 && (int)(uint)uVar1 <= (int)(uint)local_40)) &&
             ((local_60[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) != 0)) goto LAB_1475a6176;
          uVar1 = *(ushort *)(lVar4 + 0x118);
          if (((uVar1 != 0xffff) &&
              ((uint)local_40 != uVar1 && (int)(uint)uVar1 <= (int)(uint)local_40)) &&
             ((local_60[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) != 0)) goto LAB_1475a6176;
          uVar1 = *(ushort *)(lVar4 + 0x116);
          if (((uVar1 != 0xffff) &&
              ((uint)local_40 != uVar1 && (int)(uint)uVar1 <= (int)(uint)local_40)) &&
             ((local_60[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) != 0)) goto LAB_1475a6176;
          uVar1 = *(ushort *)(lVar4 + 0xf4);
          if (((uVar1 != 0xffff) &&
              ((uint)local_40 != uVar1 && (int)(uint)uVar1 <= (int)(uint)local_40)) &&
             ((local_60[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) != 0)) goto LAB_1475a6176;
          lVar7 = lVar7 + 2;
        } while ((longlong)iVar2 * 2 != lVar7);
      }
      goto LAB_1475a6178;
    }
  }
LAB_1475a6176:
  uVar6 = 0;
LAB_1475a6178:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1475a62cc FUN_1475a62cc body=283 status=ok
// SIG undefined FUN_1475a62cc(void)

longlong FUN_1475a62cc(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *(longlong *)(param_2 + 0x28);
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_3;
    lVar6 = 0;
    do {
      FUN_146085102(*(longlong *)(param_1 + 0x28) + 0x28,&local_60,*(undefined2 *)(lVar1 + lVar6),
                    *(undefined2 *)(*(longlong *)(param_1 + 0x1d8) + 0xf6));
      plVar3 = local_50;
      if (local_50 != (longlong *)0x0) {
        lVar5 = *local_50;
        if (lVar5 != 0) {
          lVar4 = FUN_1405621bc();
          if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30)) {
            lVar5 = *plVar3;
            goto LAB_1475a6373;
          }
        }
        lVar5 = 0;
      }
LAB_1475a6373:
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
        UNLOCK();
        if (local_58 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
        }
      }
    } while ((plVar3 == (longlong *)0x0) &&
            (bVar7 = (longlong)(int)lVar2 * 2 + -2 != lVar6, lVar6 = lVar6 + 2, bVar7));
  }
  if (lVar5 == 0) {
    lVar5 = FUN_14099c56c();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a63e8 FUN_1475a63e8 body=1603 status=ok
// SIG undefined FUN_1475a63e8(void)

void FUN_1475a63e8(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined **ppuVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint *puVar12;
  undefined2 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_158 [46];
  short local_12a;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  undefined1 local_101;
  undefined2 local_100;
  undefined1 local_fd;
  undefined4 local_fc;
  longlong local_f8;
  byte local_e9;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_c0 [32];
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_8c;
  undefined1 local_84;
  undefined2 local_80;
  undefined4 local_7e;
  undefined1 local_7a;
  undefined8 local_78;
  undefined1 local_70 [2];
  undefined2 local_6e;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar8 = (longlong)(int)(*(longlong **)(param_1 + 0x1d8))[1];
  local_c8 = param_2;
  if (lVar8 != 0) {
    uVar2 = *(undefined2 *)*param_3;
    lVar14 = **(longlong **)(param_1 + 0x1d8);
    lVar8 = lVar8 * 0x58;
    do {
      cVar6 = FUN_140bbead8(*(longlong *)(param_1 + 0x28) + 0x28,uVar2,
                            *(undefined2 *)(lVar14 + 0x14));
      if (cVar6 != '\0') goto LAB_1475a6438;
      lVar14 = lVar14 + 0x58;
      lVar8 = lVar8 + -0x58;
    } while (lVar8 != 0);
  }
  lVar14 = 0;
LAB_1475a6438:
  local_d8 = (undefined4)*param_3;
  uStack_d4 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_d0 = (undefined4)param_3[1];
  uStack_cc = *(undefined4 *)((longlong)param_3 + 0xc);
  cVar6 = FUN_1475a6152(param_1,&local_d8,param_4);
  if (cVar6 == '\0') {
    local_118 = (ulonglong)*(ushort *)(lVar14 + 0x10) * 4 +
                *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
    uVar16 = (ulonglong)*(ushort *)(lVar14 + 0x12);
    local_e8 = (undefined4)*param_3;
    uStack_e4 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_e0 = (undefined4)param_3[1];
    uStack_dc = *(undefined4 *)((longlong)param_3 + 0xc);
    local_110 = param_2;
    lVar9 = FUN_1475a62cc(param_1,lVar14);
    local_128 = param_4;
    lVar10 = FUN_14479d2ce(param_4);
    lVar8 = local_128;
    if ((lVar10 != 0) && (lVar9 != *(longlong *)(lVar10 + 0x10))) {
      uVar1 = *(ushort *)(local_128 + 0xe);
      FUN_147546104(lVar10,&local_e9);
      FUN_14754610e(lVar10,(uint)uVar1 << 0x10 | (uint)local_e9);
      *(undefined2 *)(lVar8 + 0xe) = 0xffff;
    }
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    local_f8 = lVar9;
    if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar9);
    }
    local_120 = FUN_14009ee5c(uVar11,&local_f8);
    lVar8 = local_128;
    FUN_14485c47a(local_128,local_120);
    local_12a = *(short *)(lVar8 + 0xe);
    if (local_12a == -1) {
      uVar11 = FUN_14479d2ce(lVar8);
      FUN_1457ab9aa(uVar11,local_70);
      *(undefined2 *)(lVar8 + 0xe) = local_6e;
    }
    local_50 = 0x10000000000;
    iVar4 = *(int *)(lVar14 + 0x20);
    if (0 < (longlong)iVar4) {
      lVar8 = *(longlong *)(lVar14 + 0x18);
      lVar9 = 0;
      do {
        FUN_140dba9e6(local_70,*(undefined2 *)(lVar8 + lVar9));
        lVar9 = lVar9 + 2;
      } while ((longlong)iVar4 * 2 != lVar9);
    }
    if (local_12a == -1) {
      FUN_140dba9e6(local_70,*(undefined2 *)(lVar14 + 0x16));
      if (uVar16 != 0) {
        uVar15 = 0;
        do {
          if ((longlong)(int)param_3[1] != 0) {
            uVar2 = *(undefined2 *)(local_118 + uVar15 * 4);
            puVar13 = (undefined2 *)*param_3;
            lVar8 = (longlong)(int)param_3[1] * 2;
            do {
              cVar6 = FUN_140bbead8(*(longlong *)(param_1 + 0x28) + 0x28,*puVar13,uVar2);
              if (cVar6 != '\0') {
                if (puVar13 != (undefined2 *)0x0) {
                  FUN_140dba9e6(local_70,uVar2);
                }
                break;
              }
              puVar13 = puVar13 + 1;
              lVar8 = lVar8 + -2;
            } while (lVar8 != 0);
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar16);
      }
      FUN_140dba9e6(local_70,*(undefined2 *)(lVar14 + 0x14));
      lVar14 = local_128;
      uVar2 = *(undefined2 *)(local_128 + 0xe);
      uVar11 = FUN_14479d2ce(local_128);
      FUN_147546104(uVar11,&local_fd);
      uVar11 = local_78;
      local_fc = CONCAT31(local_fc._1_3_,local_fd);
      local_fc = CONCAT22(uVar2,(undefined2)local_fc);
      lVar8 = *(longlong *)(param_1 + 0x1d8);
      local_90 = *(undefined2 *)(lVar8 + 0x13e);
      local_80 = *(undefined2 *)(lVar8 + 0x5c);
      local_84 = 1;
      local_8c = local_110;
      local_7a = 1;
      local_7e = local_fc;
      local_78._5_3_ = SUB83(uVar11,5);
      local_78._0_5_ =
           CONCAT14(1,CONCAT22(*(undefined2 *)(local_120 + 0x66),*(undefined2 *)(lVar8 + 0x11a)));
      local_98 = &PTR_FUN_14a4aace0;
      local_a0 = 0;
      FUN_1400abb7c(local_c0,local_70);
      FUN_1475a6afc(&local_98,&local_100,*(longlong *)(param_1 + 0x28) + 0x28,local_c0);
      if (*(short *)(lVar14 + 0xc) != -1) {
        FUN_140dbd3cc(*(longlong *)(param_1 + 0x28) + 0x28,*(short *)(lVar14 + 0xc),local_100,
                      *(longlong *)(*(longlong *)(param_1 + 0x28) + 600) + 0x1d8);
        FUN_1475a6c36(*(longlong *)(param_1 + 0x28) + 0x28,*(undefined2 *)(lVar14 + 0xc),
                      *(undefined2 *)(*(longlong *)(param_1 + 0x1d8) + 0x5a),&local_fc);
        FUN_147546fa0(*(longlong *)(param_1 + 0x28) + 0x28,*(undefined2 *)(lVar14 + 0xc),
                      param_1 + 0x1b0);
      }
      *(undefined2 *)(lVar14 + 0xc) = local_100;
    }
    else {
      uVar11 = FUN_1432d4db6(*(longlong *)(param_1 + 0x28) + 0x28,*(undefined2 *)(local_128 + 0xc));
      local_78 = 0;
      FUN_1400abb7c(&local_98,uVar11);
      if (uVar16 != 0) {
        uVar15 = 0;
        do {
          uVar1 = *(ushort *)(local_118 + uVar15 * 4);
          if ((longlong)(int)param_3[1] != 0) {
            puVar13 = (undefined2 *)*param_3;
            lVar8 = (longlong)(int)param_3[1] * 2;
            do {
              cVar6 = FUN_140bbead8(*(longlong *)(param_1 + 0x28) + 0x28,*puVar13,uVar1);
              if (cVar6 != '\0') {
                uVar7 = 1 << ((byte)uVar1 & 0x1f);
                puVar12 = (uint *)((longlong)&local_98 + (ulonglong)(uVar1 >> 5) * 4);
                if (puVar13 == (undefined2 *)0x0) goto LAB_1475a6700;
                uVar7 = uVar7 | *puVar12;
                goto LAB_1475a6704;
              }
              puVar13 = puVar13 + 1;
              lVar8 = lVar8 + -2;
            } while (lVar8 != 0);
          }
          uVar7 = 1 << ((byte)uVar1 & 0x1f);
          puVar12 = (uint *)((longlong)&local_98 + (ulonglong)(uVar1 >> 5) * 4);
LAB_1475a6700:
          uVar7 = ~uVar7 & *puVar12;
LAB_1475a6704:
          *puVar12 = uVar7;
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar16);
      }
      FUN_140dba9e6(&local_98,*(undefined2 *)(lVar14 + 0x14));
      FUN_140dbc1e0(*(longlong *)(param_1 + 0x28) + 0x28,*(undefined2 *)(local_128 + 0xc),&local_98)
      ;
    }
    lVar8 = param_3[1];
    if ((longlong)(int)lVar8 != 0) {
      lVar14 = *param_3;
      lVar9 = 0;
      do {
        uVar2 = *(undefined2 *)(lVar14 + lVar9);
        uVar3 = *(undefined2 *)(local_128 + 0xe);
        uVar11 = FUN_14479d2ce();
        FUN_147546104(uVar11,&local_101);
        ppuVar5 = local_98;
        local_98 = (undefined **)CONCAT71(local_98._1_7_,local_101);
        uVar11 = local_98;
        local_98._4_4_ = SUB84(ppuVar5,4);
        local_98._0_4_ = CONCAT22(uVar3,(short)uVar11);
        FUN_1475a6c36(*(longlong *)(param_1 + 0x28) + 0x28,uVar2,
                      *(undefined2 *)(*(longlong *)(param_1 + 0x1d8) + 0x5a),&local_98);
        FUN_1405e0ab4(*(longlong *)(param_1 + 0x28) + 0x28,uVar2,*(undefined2 *)(local_120 + 0x66));
        FUN_147546fa0(*(longlong *)(param_1 + 0x28) + 0x28,uVar2,param_1 + 0x1b0);
        lVar9 = lVar9 + 2;
      } while ((longlong)(int)lVar8 * 2 != lVar9);
    }
  }
  else {
    FUN_1475a6a2c(*(longlong *)(param_1 + 0x28) + 0x28,*(undefined2 *)*param_3,
                  *(undefined2 *)(*(longlong *)(param_1 + 0x1d8) + 0x13e),&local_c8);
    if (0 < *(int *)(lVar14 + 0x20)) {
      local_50 = 0x10000000000;
      iVar4 = *(int *)(lVar14 + 0x20);
      if ((longlong)iVar4 != 0) {
        lVar8 = *(longlong *)(lVar14 + 0x18);
        lVar14 = 0;
        do {
          FUN_140dba9e6(local_70,*(undefined2 *)(lVar8 + lVar14));
          lVar14 = lVar14 + 2;
        } while ((longlong)iVar4 * 2 != lVar14);
      }
      FUN_14055c88e(*(longlong *)(param_1 + 0x28) + 0x28,*(undefined2 *)*param_3,local_70);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a6a2c FUN_1475a6a2c body=207 status=ok
// SIG undefined FUN_1475a6a2c(void)

void FUN_1475a6a2c(undefined8 param_1,undefined4 param_2,short param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1405e0ab4();
  FUN_1432d4ca4(param_1,&local_48,param_2);
  if (local_48 != 0) {
    if (*(ushort *)(local_48 + 0xc) != 0) {
      plVar3 = *(longlong **)(local_48 + 0x28);
      lVar2 = (ulonglong)*(ushort *)(local_48 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar3 + 0x1e) == param_3) goto LAB_1475a6a93;
        plVar3 = plVar3 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    plVar3 = (longlong *)0x0;
LAB_1475a6a93:
    iVar1 = *(int *)(local_48 + 0x14);
    if (iVar1 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
    }
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
    UNLOCK();
    *(undefined8 *)(*plVar3 + (ulonglong)*(byte *)((longlong)plVar3 + 0x1c) * (longlong)local_40) =
         *param_4;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
      UNLOCK();
      if (iVar1 == 1) {
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a6afc FUN_1475a6afc body=312 status=ok
// SIG undefined FUN_1475a6afc(void)

undefined2 * FUN_1475a6afc(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_1475af4f0(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x24) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  uVar2 = local_78;
  lVar1 = local_80;
  if (local_80 == 0) {
    local_80 = 0;
  }
  else {
    FUN_1475af532(param_1 + 8,local_80,local_78);
    FUN_140dbd8a8(param_1 + 0x18,lVar1,uVar2);
  }
  local_88 = local_78;
  local_84 = 1;
  local_90 = local_80;
  FUN_14163869e(local_60,&local_90,&local_68);
  *param_2 = local_70;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a6c36 FUN_1475a6c36 body=205 status=ok
// SIG undefined FUN_1475a6c36(void)

void FUN_1475a6c36(undefined8 param_1,undefined4 param_2,short param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1405e0ab4();
  FUN_1432d4ca4(param_1,&local_48,param_2);
  if (local_48 != 0) {
    if (*(ushort *)(local_48 + 0xc) != 0) {
      plVar3 = *(longlong **)(local_48 + 0x28);
      lVar2 = (ulonglong)*(ushort *)(local_48 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar3 + 0x1e) == param_3) goto LAB_1475a6c9d;
        plVar3 = plVar3 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    plVar3 = (longlong *)0x0;
LAB_1475a6c9d:
    iVar1 = *(int *)(local_48 + 0x14);
    if (iVar1 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
    }
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
    UNLOCK();
    *(undefined4 *)(*plVar3 + (ulonglong)*(byte *)((longlong)plVar3 + 0x1c) * (longlong)local_40) =
         *param_4;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
      UNLOCK();
      if (iVar1 == 1) {
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a6d04 FUN_1475a6d04 body=156 status=ok
// SIG undefined FUN_1475a6d04(void)

void FUN_1475a6d04(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined1 auStack_58 [39];
  byte local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(short *)(param_2 + 0xe) != -1) {
    lVar2 = FUN_14479d2ce(param_2);
    if (lVar2 != 0) {
      uVar1 = *(ushort *)(param_2 + 0xe);
      FUN_147546104(lVar2,&local_31);
      FUN_14754610e(lVar2,(uint)uVar1 << 0x10 | (uint)local_31);
    }
    FUN_14055c88e(*(longlong *)(param_1 + 0x28) + 0x28,*(undefined2 *)(param_2 + 0xc),
                  *(longlong *)(param_1 + 0x1d8) + 0x144);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a6da2 FUN_1475a6da2 body=1074 status=ok
// SIG undefined FUN_1475a6da2(void)

void FUN_1475a6da2(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_188 [47];
  char local_159;
  longlong local_158;
  longlong local_150;
  undefined2 *local_148;
  undefined2 *local_140;
  undefined2 *local_138;
  undefined1 *local_130;
  int local_128;
  undefined2 local_11a;
  undefined2 local_118;
  undefined2 local_116;
  undefined1 local_114;
  undefined1 local_113;
  undefined4 local_110;
  undefined1 local_10c;
  short local_108 [2];
  undefined1 local_103;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_78;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_158 = param_1 + 0x40;
  *(undefined1 *)(param_1 + 0x1a8) = 1;
  plVar6 = *(longlong **)(param_1 + 0x1d8);
  lVar7 = *plVar6;
  uVar3 = *(uint *)(plVar6 + 1);
  local_118 = *(undefined2 *)((longlong)plVar6 + 0x13a);
  local_113 = 0;
  local_110 = 0x6ff;
  local_10c = 0;
  local_11a = *(undefined2 *)((longlong)plVar6 + 0x11a);
  local_148 = &local_11a;
  local_140 = &local_118;
  FUN_1475a71d6(&local_118,local_108);
  local_150 = param_1;
  if (local_108[0] != -1) {
    lVar12 = *(longlong *)(param_1 + 0x28);
    local_159 = *(char *)(lVar12 + 0x298);
    FUN_14150e78a(&local_138,lVar12 + 0x28,local_f8);
    iVar4 = *(int *)(lVar12 + 0x38);
    for (; puVar8 = local_130, local_128 != iVar4;
        local_128 = FUN_1403b8464(&local_138,local_128 + 1)) {
      lVar9 = (longlong)local_128;
      lVar12 = *(longlong *)(*(longlong *)((longlong)local_130 + 0x60) + lVar9 * 8);
      if (local_159 == '\0') {
        *(undefined4 *)(lVar12 + 0x14) = 0;
        lVar11 = lVar12;
      }
      else {
        lVar11 = 0;
      }
      if (*(ushort *)(lVar12 + 0xc) != 0) {
        puVar14 = *(undefined8 **)(lVar12 + 0x28);
        lVar13 = (ulonglong)*(ushort *)(lVar12 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar14 + 0x1e) == local_108[0]) goto LAB_1475a70be;
          puVar14 = puVar14 + 4;
          lVar13 = lVar13 + -0x20;
        } while (lVar13 != 0);
      }
      puVar14 = (undefined8 *)0x0;
LAB_1475a70be:
      iVar5 = *(int *)(lVar12 + 0x14);
      if (iVar5 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(puVar14 + 1));
      }
      LOCK();
      *(int *)(puVar14 + 3) = *(int *)(puVar14 + 3) + 1;
      UNLOCK();
      if (0 < (int)uVar3) {
        lVar12 = *(longlong *)(*(longlong *)((longlong)puVar8 + 0x60) + lVar9 * 8);
        uVar10 = 0;
        do {
          if (*(ushort *)(lVar12 + 0xc) != 0) {
            lVar9 = (ulonglong)*(ushort *)(lVar12 + 0xc) << 5;
            lVar13 = *(longlong *)(lVar12 + 0x28);
            do {
              if (*(short *)(lVar13 + 0x1e) == *(short *)(lVar7 + 0x14 + uVar10 * 0x58)) {
                if (lVar13 != 0) {
                  FUN_1475b2df0(local_158,lVar12,*puVar14);
                  goto LAB_1475a712c;
                }
                break;
              }
              lVar13 = lVar13 + 0x20;
              lVar9 = lVar9 + -0x20;
            } while (lVar9 != 0);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar3);
      }
LAB_1475a712c:
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar14 + 3) = *(int *)(puVar14 + 3) + -1;
        UNLOCK();
        if (iVar5 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(puVar14 + 1));
        }
      }
      if (lVar11 != 0) {
        *(undefined4 *)(lVar11 + 0x14) = 1;
      }
    }
    if (local_138 != (undefined2 *)0x0) {
      if (*(char *)((longlong)local_130 + 0x270) == '\0') {
        *(int *)((longlong)local_130 + 0x264) = *(int *)((longlong)local_130 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)((longlong)local_130 + 0x264) = *(int *)((longlong)local_130 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  lVar12 = local_150;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  lVar9 = *(longlong *)(lVar12 + 0x1d8);
  local_118 = *(undefined2 *)(lVar9 + 0x13a);
  local_130 = &local_114;
  local_116 = *(undefined2 *)(lVar9 + 0x11c);
  local_103 = 0;
  local_100 = 0x6ff;
  local_fc = 0;
  local_d8 = 0x10000000000;
  local_b0 = 0x10000000000;
  local_78 = 0x10000000000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_50 = 0x10000000000;
  local_138 = &local_118;
  FUN_1447c44f6(local_f8);
  lVar12 = *(longlong *)(lVar12 + 0x28);
  cVar1 = *(char *)(lVar12 + 0x298);
  FUN_14150e78a(&local_138,lVar12 + 0x28,local_f8);
  iVar4 = *(int *)(lVar12 + 0x38);
  do {
    lVar12 = local_150;
    if (local_128 == iVar4) {
      if (local_138 != (undefined2 *)0x0) {
        if (local_130[0x270] == '\0') {
          *(int *)(local_130 + 0x264) = *(int *)(local_130 + 0x264) + -1;
        }
        else {
          LOCK();
          *(int *)(local_130 + 0x264) = *(int *)(local_130 + 0x264) + -1;
          UNLOCK();
        }
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      FUN_1475a7286(local_158,*(undefined8 *)(lVar12 + 0x28),lVar12);
      if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    if (cVar1 == '\0') {
      lVar12 = *(longlong *)(*(longlong *)(local_130 + 0x60) + (longlong)local_128 * 8);
      *(undefined4 *)(lVar12 + 0x14) = 0;
    }
    else {
      lVar12 = 0;
    }
    if (0 < (int)uVar3) {
      lVar9 = *(longlong *)(*(longlong *)(local_130 + 0x60) + (longlong)local_128 * 8);
      uVar10 = 0;
      do {
        if (*(ushort *)(lVar9 + 0xc) != 0) {
          lVar11 = *(longlong *)(lVar9 + 0x28);
          lVar13 = (ulonglong)*(ushort *)(lVar9 + 0xc) << 5;
          do {
            if (*(short *)(lVar11 + 0x1e) == *(short *)(lVar7 + 0x14 + uVar10 * 0x58)) {
              if (lVar11 != 0) {
                uVar2 = *(ushort *)(lVar9 + 0xe);
                if ((ulonglong)uVar2 != 0) {
                  lVar9 = *(longlong *)(lVar9 + 0x18);
                  uVar10 = 0;
                  do {
                    FUN_1475b38d4(local_158,*(undefined2 *)(lVar9 + uVar10 * 2));
                    uVar10 = uVar10 + 1;
                  } while (uVar2 != uVar10);
                }
                goto LAB_1475a6f65;
              }
              break;
            }
            lVar11 = lVar11 + 0x20;
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != 0);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar3);
    }
LAB_1475a6f65:
    if (lVar12 != 0) {
      *(undefined4 *)(lVar12 + 0x14) = 1;
    }
    local_128 = FUN_1403b8464(&local_138,local_128 + 1);
  } while( true );
}



// FUNCTION 1475a71d6 FUN_1475a71d6 body=174 status=ok
// SIG undefined FUN_1475a71d6(void)

undefined8 * FUN_1475a71d6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *puStack_40;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[6] = 0x10000000000;
  param_2[0xb] = 0x10000000000;
  param_2[0x12] = 0x10000000000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0x17] = 0x10000000000;
  local_2a = *(undefined2 *)param_2;
  puStack_40 = &local_28;
  local_48 = &local_2a;
  FUN_1447c44f6(param_2 + 2,&local_48);
  local_48 = (undefined2 *)*param_3;
  puStack_40 = (ulonglong *)param_3[1];
  FUN_1447c44f6(param_2 + 2,&local_48);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a7286 FUN_1475a7286 body=1200 status=ok
// SIG undefined FUN_1475a7286(void)

void FUN_1475a7286(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined2 uVar2;
  ushort uVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  ushort *puVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  undefined1 auStack_108 [36];
  uint local_e4;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar13 = param_1 + 0x128;
  local_e0 = param_2;
  if (*(int *)(param_1 + 0x140) != 0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0x800000000;
    lVar7 = FUN_14009d2a0();
    uVar2 = *(undefined2 *)(lVar7 + 0x10a);
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    local_a0 = lVar13;
    local_90 = lVar13;
    if (*(int *)(param_1 + 0x140) == 0) {
      local_88._4_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_98);
    }
    if ((int)local_88._4_4_ < *(int *)(local_90 + 0x18)) {
      plVar1 = (longlong *)(param_1 + 0x50);
      local_a8 = param_1 + 0x88;
      local_c0 = (longlong *)(param_1 + 0xf0);
      lVar13 = local_e0 + 0x28;
      local_b0 = param_1 + 0x148;
      local_b8 = param_1 + 0xa0;
      uVar12 = local_88._4_4_;
      local_d8 = param_3;
      do {
        bVar18 = (longlong)local_50 < 0;
        local_50 = local_50 & 0xffffffff00000000;
        if (bVar18) {
          FUN_1475b398e(local_68,0);
        }
        local_e4 = uVar12 & 0xffff;
        if (*(int *)(param_1 + 0x98) != 0) {
          lVar7 = *(longlong *)(param_1 + 0x90);
          if (*(longlong *)(param_1 + 0x90) == 0) {
            lVar7 = local_a8;
          }
          iVar17 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x98) + 0xffffU & local_e4) * 4);
          do {
            iVar16 = iVar17;
            if (iVar16 == -1) goto LAB_1475a74ee;
            lVar7 = *plVar1;
            iVar17 = *(int *)(lVar7 + 4 + (longlong)iVar16 * 0xc);
          } while (*(short *)(lVar7 + (longlong)iVar16 * 0xc) != (short)uVar12);
          local_d0 = (undefined8 *)(local_e0 + 0xd0);
          do {
            uVar4 = local_50;
            puVar14 = (ushort *)(lVar7 + (longlong)iVar16 * 0xc + 2);
            uVar3 = *puVar14;
            if ((uVar3 == 0xffff) ||
               (*(uint *)(local_e0 + 0xe8) == (uint)uVar3 ||
                (int)*(uint *)(local_e0 + 0xe8) < (int)(uint)uVar3)) {
LAB_1475a74a1:
              FUN_140bbeb1c(param_1,puVar14);
              FUN_14086b624(plVar1,iVar16);
            }
            else {
              puVar10 = *(undefined8 **)(local_e0 + 0xe0);
              if (*(undefined8 **)(local_e0 + 0xe0) == (undefined8 *)0x0) {
                puVar10 = local_d0;
              }
              if ((*(uint *)((longlong)puVar10 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1)
                  == 0) goto LAB_1475a74a1;
              lVar7 = (longlong)(int)local_50;
              uVar6 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,uVar6);
              if (local_50._4_4_ < uVar6) {
                FUN_1475b3a76(local_68,uVar4 & 0xffffffff);
              }
              puVar8 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar8 = local_68;
              }
              *(ushort *)(puVar8 + lVar7 * 2) = *puVar14;
            }
            do {
              iVar16 = iVar17;
              if (iVar16 == -1) goto LAB_1475a74ee;
              lVar7 = *plVar1;
              iVar17 = *(int *)(lVar7 + 4 + (longlong)iVar16 * 0xc);
            } while (*(short *)(lVar7 + (longlong)iVar16 * 0xc) != (short)uVar12);
          } while( true );
        }
LAB_1475a74ee:
        lVar7 = (ulonglong)local_e4 * 0x1c;
        lVar9 = (longlong)(int)local_50;
        if (lVar9 < 1) {
          FUN_1475a6d04(local_d8);
        }
        else {
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_68;
          }
          lVar15 = 0;
          local_d0 = (undefined8 *)(*local_c0 + lVar7);
          local_c8 = lVar7;
          do {
            cVar5 = FUN_140bbead8(lVar13,*(undefined2 *)(puVar8 + lVar15),uVar2);
            if (cVar5 != '\0') break;
            bVar18 = lVar9 * 2 + -2 != lVar15;
            lVar15 = lVar15 + 2;
          } while (bVar18);
          *(char *)(local_d0 + 3) = cVar5;
          local_78 = local_58;
          if ((int)local_e4 < *(int *)(param_1 + 0x160)) {
            lVar7 = *(longlong *)(param_1 + 0x158);
            if (*(longlong *)(param_1 + 0x158) == 0) {
              lVar7 = local_b0;
            }
            if ((*(uint *)(lVar7 + (ulonglong)(local_e4 >> 5) * 4) >> (uVar12 & 0x1f) & 1) == 0)
            goto LAB_1475a759d;
            if (local_58 == (undefined1 *)0x0) {
              local_78 = local_68;
            }
            uVar11 = *local_d0;
          }
          else {
LAB_1475a759d:
            if (local_58 == (undefined1 *)0x0) {
              local_78 = local_68;
            }
            uVar11 = *local_d0;
          }
          local_70 = (int)local_50;
          FUN_1475a63e8(local_d8,uVar11,&local_78,local_d0 + 1);
          lVar7 = local_c8;
        }
        if ((int)local_50 == 0) {
          FUN_1475b3aea(local_b8,lVar7 + *(longlong *)(param_1 + 0xf0));
          FUN_1475b3ba4(local_c0);
        }
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        uVar12 = local_88._4_4_;
      } while ((int)local_88._4_4_ < *(int *)(local_90 + 0x18));
    }
    lVar13 = local_a0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
      lVar13 = local_a0;
    }
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (0x80 < *(uint *)(param_1 + 0x144)) {
    *(undefined4 *)(param_1 + 0x144) = 0x80;
    FUN_1446efbd8(lVar13,0);
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (0x80 < *(uint *)(param_1 + 0x164)) {
    *(undefined4 *)(param_1 + 0x164) = 0x80;
    FUN_1446efbd8(param_1 + 0x148,0);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a7738 FUN_1475a7738 body=185 status=ok
// SIG undefined FUN_1475a7738(void)

void FUN_1475a7738(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_1475b3c1a(param_1 + 0x80,0);
  }
  lVar1 = param_1 + 0x60;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (0x80 < *(uint *)(param_1 + 0x7c)) {
    *(undefined4 *)(param_1 + 0x7c) = 0x80;
    FUN_1446efbd8(lVar1,0);
  }
  iVar4 = FUN_144a54ea4(lVar1,1);
  lVar5 = *(longlong *)(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x70) == 0) {
    lVar5 = lVar1;
  }
  iVar6 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  bVar3 = (byte)iVar4 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  FUN_1475b3c7a(param_1,0);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) == 0) {
    return;
  }
  FUN_1475af5c6(param_1 + 0x50,0);
  return;
}



// FUNCTION 1475a77f2 FUN_1475a77f2 body=160 status=ok
// SIG undefined FUN_1475a77f2(void)

int * FUN_1475a77f2(longlong param_1,int *param_2,int param_3,undefined8 *param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 == 0x7fffffff) {
    *param_2 = -1;
  }
  else {
    *param_2 = iVar2;
    iVar5 = FUN_144a54ea4(param_1 + 0x60,1);
    lVar6 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar6 = param_1 + 0x60;
    }
    iVar7 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar7 = iVar5;
    }
    bVar3 = (byte)iVar5 & 0x1f;
    puVar1 = (uint *)(lVar6 + (longlong)(iVar7 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    if ((param_3 != -1) || (param_4[1] != 0)) {
      lVar6 = FUN_1475a7892(param_1 + 0x50,iVar2);
      *(int *)(lVar6 + 0x1c) = param_3;
      uVar4 = param_4[1];
      *(undefined8 *)(lVar6 + 8) = *param_4;
      *(undefined8 *)(lVar6 + 0x10) = uVar4;
      *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(param_4 + 2);
    }
  }
  return param_2;
}



// FUNCTION 1475a7892 FUN_1475a7892 body=156 status=ok
// SIG undefined FUN_1475a7892(void)

void FUN_1475a7892(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = (ulonglong)uVar1;
  lVar2 = *param_1;
  uVar5 = 0;
  if (0 < (int)uVar1) {
    do {
      uVar3 = (int)(uVar4 >> 1) + (int)uVar5;
      uVar6 = (uint)uVar4;
      if (*(int *)(lVar2 + (ulonglong)uVar3 * 0x24) < param_2) {
        uVar5 = (ulonglong)(uVar3 + (uVar6 & 1));
      }
      uVar4 = uVar4 >> 1;
    } while (1 < uVar6);
  }
  local_1c = param_2;
  if ((((int)uVar1 <= (int)uVar5) || (param_2 < *(int *)(lVar2 + uVar5 * 0x24))) ||
     (lVar2 + uVar5 * 0x24 == -4)) {
    FUN_1475af638(param_1,&local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a7930 FUN_1475a7930 body=200 status=ok
// SIG undefined FUN_1475a7930(void)

int * FUN_1475a7930(longlong param_1,int *param_2,longlong param_3,undefined4 param_4,
                   undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 *local_40;
  int *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1475a77f2(param_1,param_2,param_4,param_5);
  if (*param_2 != -1) {
    local_48 = (undefined8 *)0x0;
    if (param_3 != 0) {
      local_40 = (undefined8 *)0x0;
      FUN_14485c47a(&local_40,param_3);
      local_48 = local_40;
    }
    local_40 = &local_48;
    local_38 = param_2;
    FUN_1475b3fec(param_1,local_2c);
    uVar1 = FUN_1475a7892(param_1 + 0x50,*param_2);
    FUN_14485c47a(uVar1,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a79fa FUN_1475a79fa body=216 status=ok
// SIG undefined FUN_1475a79fa(void)

int * FUN_1475a79fa(longlong *param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 0) {
    iVar7 = 0;
    iVar6 = 0;
  }
  else {
    local_30 = 0;
    FUN_14485c47a(&local_30,param_3);
    iVar6 = (int)local_30;
    iVar7 = local_30._4_4_;
  }
  uVar2 = FUN_144a78877(iVar6,iVar7);
  iVar3 = -1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar2) * 4);
    if (iVar4 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar4 * 0x14);
        if ((*piVar1 == iVar6) && (*(int *)(*param_1 + 4 + (longlong)iVar4 * 0x14) == iVar7)) {
          if (piVar1 != (int *)0x0) {
            iVar3 = piVar1[2];
          }
          break;
        }
        iVar4 = piVar1[3];
      } while (iVar4 != -1);
    }
  }
  *param_2 = iVar3;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1475a7ad4 FUN_1475a7ad4 body=48 status=ok
// SIG undefined FUN_1475a7ad4(void)

void FUN_1475a7ad4(longlong param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = param_1 + 0x60;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
  }
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  puVar1 = (uint *)(lVar2 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  return;
}



// FUNCTION 1475a7b04 FUN_1475a7b04 body=87 status=ok
// SIG undefined FUN_1475a7b04(void)

int FUN_1475a7b04(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x88);
  iVar2 = -1;
  if ((longlong)iVar1 != 0x7fffffff) {
    *(uint *)(param_1 + 0x88) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x8c) < iVar1 + 1U) {
      FUN_1475b4300((longlong *)(param_1 + 0x80),iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar1 * 8) = *param_2;
    iVar2 = iVar1;
  }
  return iVar2;
}



// FUNCTION 1475a7b5c FUN_1475a7b5c body=375 status=ok
// SIG undefined FUN_1475a7b5c(void)

void FUN_1475a7b5c(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  int local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = (undefined1 *)0x0;
  local_44 = 0x80;
  local_48 = param_3 + 1;
  if (0xffffffdf < param_3) goto LAB_1475a7ba7;
  uVar4 = param_3 + 0x20;
  if (uVar4 < 0xa0) {
    puVar1 = local_60;
LAB_1475a7c76:
    uVar4 = uVar4 >> 3 & 0xfffffffc;
  }
  else {
    FUN_14499171c(local_60,0,uVar4 >> 5,4);
    local_44 = uVar4 & 0xffffffe0;
    puVar1 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar1 = local_60;
    }
    if (uVar4 < 0x120) goto LAB_1475a7c76;
    uVar4 = (uVar4 >> 5) << 2;
  }
  memset(puVar1,0,(ulonglong)uVar4);
  iVar3 = local_48 + 0x1f;
  if (-1 < local_48) {
    iVar3 = local_48;
  }
  if (local_48 % 0x20 != 0) {
    puVar1 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar1 = local_60;
    }
    bVar2 = -(char)(local_48 % 0x20);
    *(uint *)(puVar1 + (longlong)(iVar3 >> 5) * 4) =
         (uint)(*(int *)(puVar1 + (longlong)(iVar3 >> 5) * 4) << (bVar2 & 0x1f)) >> (bVar2 & 0x1f);
  }
LAB_1475a7ba7:
  puVar1 = local_50;
  if (local_50 == (undefined1 *)0x0) {
    puVar1 = local_60;
  }
  uVar4 = param_3 + 0x1f;
  if (-1 < (int)param_3) {
    uVar4 = param_3;
  }
  *(uint *)(puVar1 + (longlong)((int)uVar4 >> 5) * 4) =
       *(uint *)(puVar1 + (longlong)((int)uVar4 >> 5) * 4) | 1 << ((byte)param_3 & 0x1f);
  local_68 = param_4;
  FUN_1432e7edc(param_1,param_2,local_60);
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a7cd4 FUN_1475a7cd4 body=465 status=ok
// SIG undefined FUN_1475a7cd4(void)

void FUN_1475a7cd4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  byte bVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 uStack_80;
  undefined1 local_70 [16];
  undefined1 *local_60;
  int local_58;
  uint local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = *(int *)(param_1 + 0x78);
  local_60 = (undefined1 *)0x0;
  local_54 = 0x80;
  uVar7 = local_58 + 0x1f;
  if (uVar7 < 0x20) goto LAB_1475a7d28;
  if (uVar7 < 0xa0) {
    puVar3 = local_70;
    uVar5 = param_2;
LAB_1475a7e53:
    uVar7 = uVar7 >> 3 & 0xfffffffc;
    iVar4 = (int)CONCAT71((int7)((ulonglong)uVar5 >> 8),0xff);
  }
  else {
    uVar5 = 0;
    FUN_14499171c(local_70,0,uVar7 >> 5,4);
    local_54 = uVar7 & 0xffffffe0;
    puVar3 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar3 = local_70;
    }
    if (uVar7 < 0x120) goto LAB_1475a7e53;
    uVar7 = (uVar7 >> 5) << 2;
    iVar4 = (int)CONCAT71((int7)((ulonglong)uVar5 >> 8),0xff);
  }
  memset(puVar3,iVar4,(ulonglong)uVar7);
  iVar4 = local_58 + 0x1f;
  if (-1 < local_58) {
    iVar4 = local_58;
  }
  if (local_58 % 0x20 != 0) {
    puVar3 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar3 = local_70;
    }
    bVar2 = -(char)(local_58 % 0x20);
    *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
         (uint)(*(int *)(puVar3 + (longlong)(iVar4 >> 5) * 4) << (bVar2 & 0x1f)) >> (bVar2 & 0x1f);
  }
LAB_1475a7d28:
  FUN_1475a7ea6(param_3,*(undefined4 *)(param_1 + 0x78));
  if (0 < *(int *)(param_1 + 0x78)) {
    lVar6 = 0;
    uVar8 = 0;
    do {
      if ((longlong)uVar8 < (longlong)(int)param_3[5]) {
        plVar1 = (longlong *)param_3[4];
        if ((longlong *)param_3[4] == (longlong *)0x0) {
          plVar1 = param_3 + 2;
        }
        if ((*(uint *)((longlong)plVar1 + (uVar8 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar8 & 0x1f) & 1)
            == 0) goto LAB_1475a7d91;
      }
      else {
LAB_1475a7d91:
        local_88 = (longlong *)0x0;
        uStack_80 = 0;
        FUN_1475a8054(param_3,uVar8 & 0xffffffff,&local_88);
      }
      FUN_140ee6e38(*param_3 + lVar6,*(undefined4 *)(param_1 + 0x88));
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((longlong)uVar8 < (longlong)*(int *)(param_1 + 0x78));
  }
  local_88 = param_3;
  FUN_1432ed840(param_1,param_2,local_70);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a7ea6 FUN_1475a7ea6 body=428 status=ok
// SIG undefined FUN_1475a7ea6(void)

void FUN_1475a7ea6(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x10 + lVar2 + -0xc);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1475a8054 FUN_1475a8054 body=141 status=ok
// SIG undefined FUN_1475a8054(void)

void FUN_1475a8054(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1475b4fee(param_1,local_30,param_2);
  *local_28 = 0;
  iVar1 = *(int *)(param_3 + 8);
  *(int *)(local_28 + 1) = iVar1;
  if (iVar1 != 0) {
    FUN_144756262(local_28,iVar1,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  *(undefined4 *)((longlong)local_28 + 0xc) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a80f8 FUN_1475a80f8 body=5292 status=ok
// SIG undefined FUN_1475a80f8(void)

void FUN_1475a80f8(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ushort uVar10;
  undefined4 uVar11;
  char cVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  byte bVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  uint uVar26;
  int iVar27;
  longlong *plVar28;
  code *pcVar29;
  longlong *plVar30;
  longlong lVar31;
  undefined2 *puVar32;
  longlong *plVar33;
  longlong *plVar34;
  longlong lVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined1 auStack_4f8 [47];
  char local_4c9;
  undefined2 *local_4c8;
  longlong local_4c0;
  undefined2 *local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  longlong local_4a0;
  longlong local_498;
  longlong local_490;
  longlong local_488;
  longlong *local_480;
  int local_474;
  int local_470;
  int local_46c;
  int local_468;
  int local_464;
  int local_460;
  int local_45c;
  int local_458;
  int local_454;
  int local_450;
  int local_44c;
  longlong local_448;
  longlong local_440;
  longlong local_438;
  longlong local_430;
  longlong *local_428;
  longlong local_420;
  longlong *local_418;
  longlong local_410;
  undefined2 local_408 [2];
  undefined1 local_403;
  undefined4 local_400;
  undefined1 local_3fc;
  undefined2 *local_3f8;
  undefined6 *local_3f0;
  longlong local_3e8;
  longlong local_3e0;
  int local_3d8;
  undefined2 local_3ca;
  undefined2 local_3c8;
  undefined6 uStack_3c6;
  undefined4 local_3c0;
  undefined8 local_3b8;
  undefined2 local_3b0 [8];
  undefined2 *local_3a0;
  int local_398;
  uint local_394;
  undefined2 local_390;
  undefined4 local_38e;
  undefined4 uStack_38a;
  undefined4 uStack_386;
  undefined4 uStack_382;
  undefined2 local_37e;
  undefined1 local_37b;
  undefined4 local_378;
  undefined1 local_374;
  undefined8 local_370;
  undefined8 local_348;
  longlong local_340;
  undefined8 uStack_338;
  longlong local_330;
  longlong local_328;
  int local_320;
  undefined8 local_310;
  short local_308;
  short local_306;
  short local_304;
  short local_302;
  short local_300;
  short sStack_2fe;
  short sStack_2fc;
  short sStack_2fa;
  short local_2f8;
  short local_2f6;
  undefined8 local_2e8 [8];
  longlong local_2a8;
  longlong local_298;
  undefined1 local_238 [16];
  undefined1 *local_228;
  int local_220;
  uint local_21c;
  longlong local_218 [2];
  undefined1 local_208 [16];
  undefined1 *local_1f8;
  int local_1f0;
  undefined1 local_1ec [8];
  undefined4 local_1e4;
  undefined8 local_1d8;
  undefined2 *puStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  int local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  int local_1a0;
  longlong local_198;
  longlong *local_190;
  int local_188;
  longlong local_180;
  longlong *local_178;
  int local_170;
  longlong local_168;
  longlong *local_160;
  int local_158;
  longlong local_150;
  longlong *local_148;
  int local_140;
  longlong local_138;
  longlong *local_130;
  int local_128;
  longlong local_120;
  longlong *local_118;
  int local_110;
  longlong local_108;
  longlong *local_100;
  int local_f8;
  longlong local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  local_398 = *(int *)(param_1 + 0x78);
  local_3a0 = (undefined2 *)0x0;
  local_394 = 0x80;
  uVar26 = local_398 + 0x1f;
  local_490 = param_2;
  if (0x1f < uVar26) {
    if (uVar26 < 0xa0) {
      puVar32 = local_3b0;
LAB_1475a8a76:
      uVar26 = uVar26 >> 3 & 0xfffffffc;
      iVar27 = (int)CONCAT71((int7)((ulonglong)param_2 >> 8),0xff);
    }
    else {
      param_2 = 0;
      FUN_14499171c(local_3b0,0,uVar26 >> 5,4);
      local_394 = uVar26 & 0xffffffe0;
      puVar32 = local_3a0;
      if (local_3a0 == (undefined2 *)0x0) {
        puVar32 = local_3b0;
      }
      if (uVar26 < 0x120) goto LAB_1475a8a76;
      uVar26 = (uVar26 >> 5) << 2;
      iVar27 = (int)CONCAT71((int7)((ulonglong)param_2 >> 8),0xff);
    }
    memset(puVar32,iVar27,(ulonglong)uVar26);
    iVar27 = local_398 + 0x1f;
    if (-1 < local_398) {
      iVar27 = local_398;
    }
    if (local_398 % 0x20 != 0) {
      puVar32 = local_3a0;
      if (local_3a0 == (undefined2 *)0x0) {
        puVar32 = local_3b0;
      }
      bVar16 = -(char)(local_398 % 0x20);
      *(uint *)(puVar32 + (longlong)(iVar27 >> 5) * 2) =
           (uint)(*(int *)(puVar32 + (longlong)(iVar27 >> 5) * 2) << (bVar16 & 0x1f)) >>
           (bVar16 & 0x1f);
    }
  }
  FUN_1475a95a6(param_3);
  if (0 < *(int *)(param_1 + 0x78)) {
    lVar31 = 0;
    uVar19 = 0;
    do {
      if ((longlong)uVar19 < (longlong)(int)param_3[5]) {
        plVar20 = (longlong *)param_3[4];
        if ((longlong *)param_3[4] == (longlong *)0x0) {
          plVar20 = param_3 + 2;
        }
        if ((*(uint *)((longlong)plVar20 + (uVar19 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar19 & 0x1f) &
            1) == 0) goto LAB_1475a81ef;
      }
      else {
LAB_1475a81ef:
        local_1d8 = (longlong *)0x0;
        puStack_1d0 = (undefined2 *)0x0;
        FUN_1475a9754(param_3,uVar19 & 0xffffffff,&local_1d8);
      }
      FUN_1475a97f4(*param_3 + lVar31);
      uVar19 = uVar19 + 1;
      lVar31 = lVar31 + 0x10;
    } while ((longlong)uVar19 < (longlong)*(int *)(param_1 + 0x78));
  }
  uVar11 = *(undefined4 *)(param_1 + 0x88);
  local_488 = FUN_14009d2a0();
  local_448 = FUN_14038fb82();
  local_1f8 = (undefined1 *)0x0;
  local_1f0 = 0;
  local_218[0] = 0;
  local_218[1] = 0;
  local_1ec = (undefined1  [8])0xffffffff00000080;
  local_1e4 = 0;
  local_220 = *(int *)(param_1 + 0x78);
  local_228 = (undefined1 *)0x0;
  local_21c = 0x80;
  uVar26 = local_220 + 0x1f;
  if (uVar26 < 0x20) goto LAB_1475a82a4;
  if (uVar26 < 0xa0) {
    puVar14 = local_238;
LAB_1475a8ad5:
    uVar26 = uVar26 >> 3 & 0xfffffffc;
  }
  else {
    FUN_14499171c(local_238,0,uVar26 >> 5,4);
    local_21c = uVar26 & 0xffffffe0;
    puVar14 = local_228;
    if (local_228 == (undefined1 *)0x0) {
      puVar14 = local_238;
    }
    if (uVar26 < 0x120) goto LAB_1475a8ad5;
    uVar26 = (uVar26 >> 5) << 2;
  }
  memset(puVar14,0,(ulonglong)uVar26);
  iVar27 = local_220 + 0x1f;
  if (-1 < local_220) {
    iVar27 = local_220;
  }
  if (local_220 % 0x20 != 0) {
    puVar14 = local_228;
    if (local_228 == (undefined1 *)0x0) {
      puVar14 = local_238;
    }
    bVar16 = -(char)(local_220 % 0x20);
    *(uint *)(puVar14 + (longlong)(iVar27 >> 5) * 4) =
         (uint)(*(int *)(puVar14 + (longlong)(iVar27 >> 5) * 4) << (bVar16 & 0x1f)) >>
         (bVar16 & 0x1f);
  }
LAB_1475a82a4:
  local_1d8 = (longlong *)&DAT_100000000;
  puStack_1d0 = local_3b0;
  local_1c8 = 0xffffffff;
  local_1c0 = (longlong *)((ulonglong)local_1c0._4_4_ << 0x20);
  local_480 = param_3;
  if (local_398 != 0) {
    FUN_1449c0562(&local_1d8);
    if ((int)local_1c8._4_4_ < *(int *)(puStack_1d0 + 0xc)) {
      uVar26 = local_1c8._4_4_;
      do {
        lVar31 = *(longlong *)(param_1 + 0x70);
        if (*(longlong *)(param_1 + 0x70) == 0) {
          lVar31 = param_1 + 0x60;
        }
        uVar17 = uVar26 + 0x1f;
        if (-1 < (int)uVar26) {
          uVar17 = uVar26;
        }
        if (((*(uint *)(lVar31 + (longlong)((int)uVar17 >> 5) * 4) >> (uVar26 & 0x1f) & 1) != 0) ||
           (lVar31 = FUN_1475b4386(param_1 + 0x50,uVar26), lVar31 != 0)) {
          lVar31 = FUN_1475b4386(param_1 + 0x50,uVar26);
          uVar36 = 0;
          uVar37 = 0;
          if (lVar31 == 0) {
LAB_1475a837c:
            uVar38 = 0;
            uVar39 = 0;
            uVar40 = 0;
            uVar41 = 0;
            uVar42 = 0;
            uVar43 = 0;
            uVar44 = 0;
            uVar45 = 0;
            uVar48 = 0;
            uVar49 = 0;
            uVar46 = 0;
            uVar47 = 0;
            uVar50 = 0;
            uVar51 = 0;
            uVar52 = 0;
            uVar53 = 0;
          }
          else {
            lVar13 = FUN_144a799b0();
            if (*(int *)(*(longlong *)(lVar31 + 0x10) + 0x38) < *(int *)(lVar13 + 0x38))
            goto LAB_1475a837c;
            uVar38 = 0;
            uVar39 = 0;
            uVar40 = 0;
            uVar41 = 0;
            uVar42 = 0;
            uVar43 = 0;
            uVar44 = 0;
            uVar45 = 0;
            uVar48 = 0;
            uVar49 = 0;
            uVar46 = 0;
            uVar47 = 0;
            uVar50 = 0;
            uVar51 = 0;
            uVar52 = 0;
            uVar53 = 0;
            if (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar31 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30) {
              uVar46 = (undefined4)*(undefined8 *)(lVar31 + 0x1c8);
              uVar47 = (undefined4)((ulonglong)*(undefined8 *)(lVar31 + 0x1c8) >> 0x20);
              uVar50 = (undefined4)*(undefined8 *)(lVar31 + 0x1d0);
              uVar51 = (undefined4)((ulonglong)*(undefined8 *)(lVar31 + 0x1d0) >> 0x20);
              uVar52 = (undefined4)*(undefined8 *)(lVar31 + 0x1d8);
              uVar53 = (undefined4)((ulonglong)*(undefined8 *)(lVar31 + 0x1d8) >> 0x20);
              uVar44 = (undefined4)*(undefined8 *)(lVar31 + 0x1b0);
              uVar45 = (undefined4)((ulonglong)*(undefined8 *)(lVar31 + 0x1b0) >> 0x20);
              uVar48 = (undefined4)*(undefined8 *)(lVar31 + 0x1b8);
              uVar49 = (undefined4)((ulonglong)*(undefined8 *)(lVar31 + 0x1b8) >> 0x20);
              uVar42 = (undefined4)*(undefined8 *)(lVar31 + 0x1c0);
              uVar43 = (undefined4)((ulonglong)*(undefined8 *)(lVar31 + 0x1c0) >> 0x20);
              uVar36 = (undefined4)*(undefined8 *)(lVar31 + 0x198);
              uVar37 = (undefined4)((ulonglong)*(undefined8 *)(lVar31 + 0x198) >> 0x20);
              uVar38 = (undefined4)*(undefined8 *)(lVar31 + 0x1a0);
              uVar39 = (undefined4)((ulonglong)*(undefined8 *)(lVar31 + 0x1a0) >> 0x20);
              uVar40 = (undefined4)*(undefined8 *)(lVar31 + 0x1a8);
              uVar41 = (undefined4)((ulonglong)*(undefined8 *)(lVar31 + 0x1a8) >> 0x20);
            }
          }
          if ((local_1c8 < 0) || (local_1f0 <= (int)local_1c8._4_4_)) {
LAB_1475a83e2:
            FUN_1475b4cda(local_218,&local_308);
            puVar23 = (undefined8 *)
                      CONCAT26(sStack_2fa,CONCAT24(sStack_2fc,CONCAT22(sStack_2fe,local_300)));
            *puVar23 = CONCAT44(uVar37,uVar36);
            puVar23[1] = CONCAT44(uVar39,uVar38);
            puVar23[2] = CONCAT44(uVar41,uVar40);
            puVar23[3] = CONCAT44(uVar43,uVar42);
            puVar23[4] = CONCAT44(uVar45,uVar44);
            puVar23[5] = CONCAT44(uVar49,uVar48);
            puVar23[6] = CONCAT44(uVar47,uVar46);
            puVar23[7] = CONCAT44(uVar51,uVar50);
            puVar23[8] = CONCAT44(uVar53,uVar52);
            bVar16 = (byte)((ulonglong)local_1c8 >> 0x20);
          }
          else {
            bVar16 = (byte)((ulonglong)local_1c8 >> 0x20);
            puVar14 = local_1f8;
            if (local_1f8 == (undefined1 *)0x0) {
              puVar14 = local_208;
            }
            if ((*(uint *)(puVar14 + (ulonglong)(local_1c8._4_4_ >> 5) * 4) >>
                 (local_1c8._4_4_ & 0x1f) & 1) == 0) goto LAB_1475a83e2;
          }
          lVar31 = *(longlong *)(param_1 + 0x70);
          if (*(longlong *)(param_1 + 0x70) == 0) {
            lVar31 = param_1 + 0x60;
          }
          uVar17 = local_1c8._4_4_ + 0x1f;
          if (-1 < (int)local_1c8._4_4_) {
            uVar17 = local_1c8._4_4_;
          }
          uVar17 = *(uint *)(lVar31 + (longlong)((int)uVar17 >> 5) * 4);
          plVar20 = (longlong *)((longlong)(int)uVar26 * 0x10 + *local_480);
          FUN_1475b4c32(plVar20,uVar11);
          if ((uVar17 & 1 << (bVar16 & 0x1f)) == 0) {
            if ((longlong)(int)plVar20[1] != 0) {
              puVar15 = (undefined8 *)*plVar20;
              puVar23 = puVar15 + (longlong)(int)plVar20[1] * 9;
              do {
                *puVar15 = CONCAT44(uVar37,uVar36);
                puVar15[1] = CONCAT44(uVar39,uVar38);
                puVar15[2] = CONCAT44(uVar41,uVar40);
                puVar15[3] = CONCAT44(uVar43,uVar42);
                puVar15[4] = CONCAT44(uVar45,uVar44);
                puVar15[5] = CONCAT44(uVar49,uVar48);
                puVar15[6] = CONCAT44(uVar47,uVar46);
                puVar15[7] = CONCAT44(uVar51,uVar50);
                puVar15[8] = CONCAT44(uVar53,uVar52);
                puVar15 = puVar15 + 9;
              } while (puVar15 != puVar23);
            }
          }
          else {
            puVar14 = local_228;
            if (local_228 == (undefined1 *)0x0) {
              puVar14 = local_238;
            }
            iVar27 = local_1c8._4_4_ + 0x1f;
            if (-1 < local_1c8) {
              iVar27 = local_1c8._4_4_;
            }
            *(uint *)(puVar14 + (longlong)(iVar27 >> 5) * 4) =
                 *(uint *)(puVar14 + (longlong)(iVar27 >> 5) * 4) |
                 1 << ((byte)((ulonglong)local_1c8 >> 0x20) & 0x1f);
          }
        }
        local_1c8 = CONCAT44(local_1c8._4_4_,(uint)local_1c8 & ~local_1d8._4_4_);
        FUN_1449c0562(&local_1d8);
        uVar26 = local_1c8._4_4_;
      } while ((int)local_1c8._4_4_ < *(int *)(puStack_1d0 + 0xc));
    }
  }
  local_390 = *(undefined2 *)(local_488 + 0x13e);
  local_37e = *(undefined2 *)(local_488 + 0xcc);
  local_38e = *(undefined4 *)(local_488 + 0xbc);
  uStack_38a = *(undefined4 *)(local_488 + 0xc0);
  uStack_386 = *(undefined4 *)(local_488 + 0xc4);
  uStack_382 = *(undefined4 *)(local_488 + 200);
  local_37b = 0;
  local_378 = 0x6ff;
  local_374 = 0;
  local_3c8 = *(undefined2 *)(local_448 + 0x84);
  local_3f8 = &local_3c8;
  local_3f0 = &uStack_3c6;
  FUN_1475b449a(&local_390,&local_308);
  lVar31 = local_490;
  local_498 = local_490 + 0x28;
  if ((((((local_308 != -1) && (local_306 != -1)) && (local_304 != -1)) &&
       ((local_302 != -1 && (local_300 != -1)))) &&
      ((sStack_2fe != -1 && ((sStack_2fc != -1 && (sStack_2fa != -1)))))) &&
     ((local_2f8 != -1 && (local_2f6 != -1)))) {
    local_4c9 = *(char *)(local_490 + 0x298);
    FUN_14150e78a(&local_330,local_498,local_2e8);
    local_470 = *(int *)(lVar31 + 0x38);
    pcVar29 = AcquireSRWLockShared_exref;
    if (local_320 != local_470) {
      do {
        puVar32 = *(undefined2 **)(*(longlong *)(local_328 + 0x60) + (longlong)local_320 * 8);
        if (local_4c9 == '\0') {
          *(undefined4 *)(puVar32 + 10) = 0;
          local_4b8 = puVar32;
        }
        else {
          local_4b8 = (undefined2 *)0x0;
        }
        if (puVar32[6] != 0) {
          plVar20 = *(longlong **)(puVar32 + 0x14);
          lVar31 = (ulonglong)(ushort)puVar32[6] << 5;
          do {
            if (*(short *)((longlong)plVar20 + 0x1e) == local_2f6) goto LAB_1475a8b72;
            plVar20 = plVar20 + 4;
            lVar31 = lVar31 + -0x20;
          } while (lVar31 != 0);
        }
        plVar20 = (longlong *)0x0;
LAB_1475a8b72:
        local_44c = *(int *)(puVar32 + 10);
        if (local_44c == 1) {
          (*pcVar29)(plVar20 + 1);
        }
        LOCK();
        *(int *)(plVar20 + 3) = (int)plVar20[3] + 1;
        UNLOCK();
        lVar31 = *plVar20;
        if (puVar32[6] != 0) {
          plVar22 = *(longlong **)(puVar32 + 0x14);
          lVar13 = (ulonglong)(ushort)puVar32[6] << 5;
          do {
            if (*(short *)((longlong)plVar22 + 0x1e) == local_2f8) goto LAB_1475a8b9f;
            plVar22 = plVar22 + 4;
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != 0);
        }
        plVar22 = (longlong *)0x0;
LAB_1475a8b9f:
        local_450 = *(int *)(puVar32 + 10);
        if (local_450 == 1) {
          (*pcVar29)(plVar22 + 1);
        }
        LOCK();
        *(int *)(plVar22 + 3) = (int)plVar22[3] + 1;
        UNLOCK();
        local_420 = *plVar22;
        if (puVar32[6] != 0) {
          plVar34 = *(longlong **)(puVar32 + 0x14);
          lVar13 = (ulonglong)(ushort)puVar32[6] << 5;
          do {
            if (*(short *)((longlong)plVar34 + 0x1e) == sStack_2fa) goto LAB_1475a8bd5;
            plVar34 = plVar34 + 4;
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != 0);
        }
        plVar34 = (longlong *)0x0;
LAB_1475a8bd5:
        local_454 = *(int *)(puVar32 + 10);
        if (local_454 == 1) {
          (*pcVar29)(plVar34 + 1);
        }
        LOCK();
        *(int *)(plVar34 + 3) = (int)plVar34[3] + 1;
        UNLOCK();
        local_430 = *plVar34;
        if (puVar32[6] != 0) {
          plVar33 = *(longlong **)(puVar32 + 0x14);
          lVar13 = (ulonglong)(ushort)puVar32[6] << 5;
          do {
            if (*(short *)((longlong)plVar33 + 0x1e) == sStack_2fc) goto LAB_1475a8c13;
            plVar33 = plVar33 + 4;
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != 0);
        }
        plVar33 = (longlong *)0x0;
LAB_1475a8c13:
        local_458 = *(int *)(puVar32 + 10);
        local_428 = plVar22;
        if (local_458 == 1) {
          (*pcVar29)(plVar33 + 1);
        }
        LOCK();
        *(int *)(plVar33 + 3) = (int)plVar33[3] + 1;
        UNLOCK();
        lVar13 = *plVar33;
        if (puVar32[6] != 0) {
          plVar22 = *(longlong **)(puVar32 + 0x14);
          lVar35 = (ulonglong)(ushort)puVar32[6] << 5;
          do {
            if (*(short *)((longlong)plVar22 + 0x1e) == sStack_2fe) goto LAB_1475a8c40;
            plVar22 = plVar22 + 4;
            lVar35 = lVar35 + -0x20;
          } while (lVar35 != 0);
        }
        plVar22 = (longlong *)0x0;
LAB_1475a8c40:
        local_45c = *(int *)(puVar32 + 10);
        if (local_45c == 1) {
          (*pcVar29)(plVar22 + 1);
        }
        LOCK();
        *(int *)(plVar22 + 3) = (int)plVar22[3] + 1;
        UNLOCK();
        local_440 = *plVar22;
        if (puVar32[6] != 0) {
          plVar24 = *(longlong **)(puVar32 + 0x14);
          lVar35 = (ulonglong)(ushort)puVar32[6] << 5;
          do {
            if (*(short *)((longlong)plVar24 + 0x1e) == local_300) goto LAB_1475a8c7d;
            plVar24 = plVar24 + 4;
            lVar35 = lVar35 + -0x20;
          } while (lVar35 != 0);
        }
        plVar24 = (longlong *)0x0;
LAB_1475a8c7d:
        local_460 = *(int *)(puVar32 + 10);
        local_418 = plVar20;
        if (local_460 == 1) {
          (*pcVar29)(plVar24 + 1);
        }
        LOCK();
        *(int *)(plVar24 + 3) = (int)plVar24[3] + 1;
        UNLOCK();
        local_4a0 = *plVar24;
        if (puVar32[6] != 0) {
          plVar20 = *(longlong **)(puVar32 + 0x14);
          lVar35 = (ulonglong)(ushort)puVar32[6] << 5;
          do {
            if (*(short *)((longlong)plVar20 + 0x1e) == local_302) goto LAB_1475a8cb6;
            plVar20 = plVar20 + 4;
            lVar35 = lVar35 + -0x20;
          } while (lVar35 != 0);
        }
        plVar20 = (longlong *)0x0;
LAB_1475a8cb6:
        local_464 = *(int *)(puVar32 + 10);
        local_410 = lVar31;
        if (local_464 == 1) {
          (*pcVar29)(plVar20 + 1);
        }
        LOCK();
        *(int *)(plVar20 + 3) = (int)plVar20[3] + 1;
        UNLOCK();
        local_4c0 = *plVar20;
        if (puVar32[6] != 0) {
          plVar28 = *(longlong **)(puVar32 + 0x14);
          lVar31 = (ulonglong)(ushort)puVar32[6] << 5;
          do {
            if (*(short *)((longlong)plVar28 + 0x1e) == local_304) goto LAB_1475a8cf0;
            plVar28 = plVar28 + 4;
            lVar31 = lVar31 + -0x20;
          } while (lVar31 != 0);
        }
        plVar28 = (longlong *)0x0;
LAB_1475a8cf0:
        local_468 = *(int *)(puVar32 + 10);
        local_438 = lVar13;
        if (local_468 == 1) {
          (*pcVar29)(plVar28 + 1);
        }
        LOCK();
        *(int *)(plVar28 + 3) = (int)plVar28[3] + 1;
        UNLOCK();
        local_4a8 = *plVar28;
        if (puVar32[6] != 0) {
          plVar21 = *(longlong **)(puVar32 + 0x14);
          lVar31 = (ulonglong)(ushort)puVar32[6] << 5;
          do {
            if (*(short *)((longlong)plVar21 + 0x1e) == local_306) goto LAB_1475a8d2a;
            plVar21 = plVar21 + 4;
            lVar31 = lVar31 + -0x20;
          } while (lVar31 != 0);
        }
        plVar21 = (longlong *)0x0;
LAB_1475a8d2a:
        local_46c = *(int *)(puVar32 + 10);
        local_4c8 = puVar32;
        if (local_46c == 1) {
          (*pcVar29)(plVar21 + 1);
        }
        LOCK();
        *(int *)(plVar21 + 3) = (int)plVar21[3] + 1;
        UNLOCK();
        local_4b0 = *plVar21;
        if (local_4c8[6] != 0) {
          plVar30 = *(longlong **)(local_4c8 + 0x14);
          lVar31 = (ulonglong)(ushort)local_4c8[6] << 5;
          do {
            if (*(short *)((longlong)plVar30 + 0x1e) == local_308) goto LAB_1475a8d66;
            plVar30 = plVar30 + 4;
            lVar31 = lVar31 + -0x20;
          } while (lVar31 != 0);
        }
        plVar30 = (longlong *)0x0;
LAB_1475a8d66:
        iVar27 = *(int *)(local_4c8 + 10);
        if (iVar27 == 1) {
          local_474 = iVar27;
          AcquireSRWLockShared((PSRWLOCK)(plVar30 + 1));
          iVar27 = local_474;
        }
        LOCK();
        *(int *)(plVar30 + 3) = (int)plVar30[3] + 1;
        pcVar29 = AcquireSRWLockShared_exref;
        UNLOCK();
        local_1c8 = *plVar30;
        local_1d8 = plVar30;
        puStack_1d0 = (undefined2 *)CONCAT44(puStack_1d0._4_4_,iVar27);
        local_1c0 = plVar21;
        local_1b8 = local_46c;
        local_1b0 = local_4b0;
        local_1a8 = plVar28;
        local_1a0 = local_468;
        local_198 = local_4a8;
        local_190 = plVar20;
        local_188 = local_464;
        local_180 = local_4c0;
        local_178 = plVar24;
        local_170 = local_460;
        local_168 = local_4a0;
        local_160 = plVar22;
        local_158 = local_45c;
        local_150 = local_440;
        local_148 = plVar33;
        local_140 = local_458;
        local_138 = local_438;
        local_130 = plVar34;
        local_128 = local_454;
        local_120 = local_430;
        local_118 = local_428;
        local_110 = local_450;
        local_108 = local_420;
        local_100 = local_418;
        local_f8 = local_44c;
        local_f0 = local_410;
        uVar10 = local_4c8[7];
        if (uVar10 != 0) {
          lVar31 = 0;
          do {
            lVar13 = *(longlong *)(local_1c8 + lVar31);
            puVar14 = local_228;
            if (local_228 == (undefined1 *)0x0) {
              puVar14 = local_238;
            }
            uVar26 = (uint)lVar13;
            uVar17 = uVar26 + 0x1f;
            if (-1 < (int)uVar26) {
              uVar17 = uVar26;
            }
            if ((*(uint *)(puVar14 + (longlong)((int)uVar17 >> 5) * 4) >> (uVar26 & 0x1f) & 1) != 0)
            {
              uVar2 = *(undefined8 *)(local_4a8 + lVar31);
              uVar3 = *(undefined8 *)(local_4c0 + lVar31);
              uVar4 = *(undefined8 *)(local_4a0 + lVar31);
              uVar5 = *(undefined8 *)(local_440 + lVar31);
              uVar6 = *(undefined8 *)(local_438 + lVar31);
              uVar7 = *(undefined8 *)(local_430 + lVar31);
              uVar8 = *(undefined8 *)(local_420 + lVar31);
              uVar9 = *(undefined8 *)(local_410 + lVar31);
              lVar35 = *(longlong *)(*local_480 + (longlong)(int)uVar26 * 0x10);
              lVar13 = lVar13 >> 0x20;
              *(undefined8 *)(lVar35 + lVar13 * 0x48) = *(undefined8 *)(local_4b0 + lVar31);
              *(undefined8 *)(lVar35 + 8 + lVar13 * 0x48) = uVar2;
              *(undefined8 *)(lVar35 + 0x10 + lVar13 * 0x48) = uVar3;
              *(undefined8 *)(lVar35 + 0x18 + lVar13 * 0x48) = uVar4;
              *(undefined8 *)(lVar35 + 0x20 + lVar13 * 0x48) = uVar5;
              *(undefined8 *)(lVar35 + 0x28 + lVar13 * 0x48) = uVar6;
              *(undefined8 *)(lVar35 + 0x30 + lVar13 * 0x48) = uVar7;
              *(undefined8 *)(lVar35 + 0x38 + lVar13 * 0x48) = uVar8;
              *(undefined8 *)(lVar35 + 0x40 + lVar13 * 0x48) = uVar9;
            }
            lVar31 = lVar31 + 8;
          } while ((ulonglong)uVar10 * 8 != lVar31);
        }
        FUN_1475b47f4(&local_1d8);
        if (local_4b8 != (undefined2 *)0x0) {
          *(undefined4 *)(local_4b8 + 10) = 1;
        }
        local_320 = FUN_1403b8464(&local_330,local_320 + 1);
      } while (local_320 != local_470);
    }
    if (local_330 != 0) {
      if (*(char *)(local_328 + 0x270) == '\0') {
        *(int *)(local_328 + 0x264) = *(int *)(local_328 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_328 + 0x264) = *(int *)(local_328 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_298 != 0) {
    FUN_1400020a8();
  }
  puVar32 = (undefined2 *)(local_488 + 0xbc);
  local_310 = 0x10000000000;
  lVar31 = 0;
  do {
    FUN_140dba9e6(&local_330,puVar32[lVar31]);
    lVar31 = lVar31 + 1;
  } while (lVar31 != 9);
  local_370 = 0x10000000000;
  local_348 = 0x10000000000;
  local_340 = 0;
  uStack_338 = 0;
  FUN_140dad9c2(&local_390,&local_330,2);
  FUN_140dad9c2(&local_390,&local_330,0x84);
  cVar12 = FUN_14050a5e0(local_498,&local_390);
  if (cVar12 != '\0') {
    local_408[0] = *(undefined2 *)(local_488 + 0x13e);
    local_403 = 0;
    local_400 = 0x6ff;
    local_3fc = 0;
    FUN_1475b4530(local_408,&local_308,&local_330);
    FUN_140dad9c2(&local_2f8,&local_330,0x84);
    local_3ca = *(undefined2 *)(local_448 + 0x84);
    puStack_1d0 = &local_3c8;
    local_1d8 = (longlong *)&local_3ca;
    FUN_1447c44f6(&local_2f8);
    lVar31 = local_490;
    if (local_308 != -1) {
      local_4b0 = CONCAT71(local_4b0._1_7_,*(undefined1 *)(local_490 + 0x298));
      FUN_14150e78a(&local_3e8,local_498,&local_2f8);
      local_4c8 = (undefined2 *)CONCAT44(local_4c8._4_4_,*(int *)(lVar31 + 0x38));
      if (local_3d8 != *(int *)(lVar31 + 0x38)) {
        do {
          local_4b8 = puVar32;
          lVar13 = local_3e0;
          lVar35 = (longlong)local_3d8;
          lVar31 = *(longlong *)(*(longlong *)(local_3e0 + 0x60) + lVar35 * 8);
          if ((char)local_4b0 == '\0') {
            *(undefined4 *)(lVar31 + 0x14) = 0;
            local_4c0 = lVar31;
          }
          else {
            local_4c0 = 0;
          }
          if (*(ushort *)(lVar31 + 0xc) != 0) {
            plVar20 = *(longlong **)(lVar31 + 0x28);
            lVar18 = (ulonglong)*(ushort *)(lVar31 + 0xc) << 5;
            do {
              if (*(short *)((longlong)plVar20 + 0x1e) == local_308) goto LAB_1475a9248;
              plVar20 = plVar20 + 4;
              lVar18 = lVar18 + -0x20;
            } while (lVar18 != 0);
          }
          plVar20 = (longlong *)0x0;
LAB_1475a9248:
          local_4a8 = CONCAT44(local_4a8._4_4_,*(int *)(lVar31 + 0x14));
          if (*(int *)(lVar31 + 0x14) == 1) {
            AcquireSRWLockShared((PSRWLOCK)(plVar20 + 1));
          }
          LOCK();
          *(int *)(plVar20 + 3) = (int)plVar20[3] + 1;
          UNLOCK();
          local_4a0 = *plVar20;
          lVar31 = *(longlong *)(*(longlong *)(lVar13 + 0x60) + lVar35 * 8);
          uVar10 = *(ushort *)(lVar31 + 0xe);
          lVar13 = 0x10;
          do {
            *(undefined8 *)(local_1ec + lVar13 + 4) = 0;
            *(undefined8 *)((longlong)&local_1d8 + lVar13) = 0;
            lVar13 = lVar13 + 0x18;
          } while (lVar13 != 0xe8);
          lVar13 = 0;
          puVar32 = local_4b8;
          do {
            FUN_1475b4978(lVar31,&local_3c8,*puVar32);
            lVar35 = *(longlong *)((longlong)&local_1d8 + lVar13 * 2);
            if (lVar35 != 0) {
              LOCK();
              piVar1 = (int *)(lVar35 + 0x18);
              *piVar1 = *piVar1 + 1;
              UNLOCK();
              if (*(int *)((longlong)&puStack_1d0 + lVar13 * 2) == 1) {
                ReleaseSRWLockShared
                          ((PSRWLOCK)(*(longlong *)((longlong)&local_1d8 + lVar13 * 2) + 8));
              }
            }
            *(ulonglong *)((longlong)&local_1d8 + lVar13 * 2) = CONCAT62(uStack_3c6,local_3c8);
            *(undefined4 *)((longlong)&puStack_1d0 + lVar13 * 2) = local_3c0;
            *(undefined8 *)((longlong)&local_1c8 + lVar13 * 2) = local_3b8;
            lVar13 = lVar13 + 0xc;
            puVar32 = puVar32 + 1;
          } while (lVar13 != 0x6c);
          if (uVar10 != 0) {
            lVar31 = 0;
            do {
              puVar14 = local_228;
              if (local_228 == (undefined1 *)0x0) {
                puVar14 = local_238;
              }
              uVar26 = (uint)*(longlong *)(local_4a0 + lVar31);
              uVar17 = uVar26 + 0x1f;
              if (-1 < (int)uVar26) {
                uVar17 = uVar26;
              }
              if ((*(uint *)(puVar14 + (longlong)((int)uVar17 >> 5) * 4) >> (uVar26 & 0x1f) & 1) !=
                  0) {
                lVar13 = (longlong)(int)uVar26;
                puVar23 = (undefined8 *)(local_1c8 + lVar31);
                if (local_1c8 == 0) {
                  puVar23 = (undefined8 *)(local_218[0] + lVar13 * 0x48);
                }
                puVar15 = (undefined8 *)(local_1b0 + lVar31);
                if (local_1b0 == 0) {
                  puVar15 = (undefined8 *)(local_218[0] + lVar13 * 0x48 + 8);
                }
                puVar25 = (undefined8 *)(local_198 + lVar31);
                if (local_198 == 0) {
                  puVar25 = (undefined8 *)(local_218[0] + 0x10 + lVar13 * 0x48);
                }
                uVar2 = *puVar15;
                uVar3 = *puVar25;
                puVar15 = (undefined8 *)(local_180 + lVar31);
                if (local_180 == 0) {
                  puVar15 = (undefined8 *)(local_218[0] + 0x18 + lVar13 * 0x48);
                }
                puVar25 = (undefined8 *)(local_168 + lVar31);
                if (local_168 == 0) {
                  puVar25 = (undefined8 *)(local_218[0] + 0x20 + lVar13 * 0x48);
                }
                uVar4 = *puVar15;
                uVar5 = *puVar25;
                puVar15 = (undefined8 *)(local_150 + lVar31);
                if (local_150 == 0) {
                  puVar15 = (undefined8 *)(local_218[0] + lVar13 * 0x48 + 0x28);
                }
                puVar25 = (undefined8 *)(local_138 + lVar31);
                if (local_138 == 0) {
                  puVar25 = (undefined8 *)(local_218[0] + lVar13 * 0x48 + 0x30);
                }
                uVar6 = *puVar15;
                uVar7 = *puVar25;
                puVar15 = (undefined8 *)(local_120 + lVar31);
                if (local_120 == 0) {
                  puVar15 = (undefined8 *)(local_218[0] + 0x38 + lVar13 * 0x48);
                }
                puVar25 = (undefined8 *)(local_108 + lVar31);
                if (local_108 == 0) {
                  puVar25 = (undefined8 *)(local_218[0] + lVar13 * 0x48 + 0x40);
                }
                uVar8 = *puVar15;
                uVar9 = *puVar25;
                lVar13 = *(longlong *)(*local_480 + lVar13 * 0x10);
                lVar35 = *(longlong *)(local_4a0 + lVar31) >> 0x20;
                *(undefined8 *)(lVar13 + lVar35 * 0x48) = *puVar23;
                *(undefined8 *)(lVar13 + 8 + lVar35 * 0x48) = uVar2;
                *(undefined8 *)(lVar13 + 0x10 + lVar35 * 0x48) = uVar3;
                *(undefined8 *)(lVar13 + 0x18 + lVar35 * 0x48) = uVar4;
                *(undefined8 *)(lVar13 + 0x20 + lVar35 * 0x48) = uVar5;
                *(undefined8 *)(lVar13 + 0x28 + lVar35 * 0x48) = uVar6;
                *(undefined8 *)(lVar13 + 0x30 + lVar35 * 0x48) = uVar7;
                *(undefined8 *)(lVar13 + 0x38 + lVar35 * 0x48) = uVar8;
                *(undefined8 *)(lVar13 + 0x40 + lVar35 * 0x48) = uVar9;
              }
              lVar31 = lVar31 + 8;
            } while ((ulonglong)uVar10 * 8 != lVar31);
          }
          lVar31 = 0xc0;
          do {
            if (*(longlong *)((longlong)&local_1d8 + lVar31) != 0) {
              LOCK();
              piVar1 = (int *)(*(longlong *)((longlong)&local_1d8 + lVar31) + 0x18);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*(int *)((longlong)&puStack_1d0 + lVar31) == 1) {
                ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)((longlong)&local_1d8 + lVar31) + 8));
              }
            }
            lVar31 = lVar31 + -0x18;
          } while (lVar31 != -0x18);
          if (plVar20 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar20 + 3) = (int)plVar20[3] + -1;
            UNLOCK();
            if ((int)local_4a8 == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(plVar20 + 1));
            }
          }
          if (local_4c0 != 0) {
            *(undefined4 *)(local_4c0 + 0x14) = 1;
          }
          local_3d8 = FUN_1403b8464(&local_3e8,local_3d8 + 1);
          puVar32 = local_4b8;
        } while (local_3d8 != (int)local_4c8);
      }
      if (local_3e8 != 0) {
        if (*(char *)(local_3e0 + 0x270) == '\0') {
          *(int *)(local_3e0 + 0x264) = *(int *)(local_3e0 + 0x264) + -1;
        }
        else {
          LOCK();
          *(int *)(local_3e0 + 0x264) = *(int *)(local_3e0 + 0x264) + -1;
          UNLOCK();
        }
      }
    }
    if (local_2a8 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_340 != 0) {
    FUN_1400020a8();
  }
  if (local_228 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1475b4ca4(local_218);
  if (local_3a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_4f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475a95a6 FUN_1475a95a6 body=428 status=ok
// SIG undefined FUN_1475a95a6(void)

void FUN_1475a95a6(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x10 + lVar2 + -0xc);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1475a9754 FUN_1475a9754 body=138 status=ok
// SIG undefined FUN_1475a9754(void)

void FUN_1475a9754(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1475b513c(param_1,local_30,param_2);
  *local_28 = 0;
  iVar1 = *(int *)(param_3 + 8);
  *(int *)(local_28 + 1) = iVar1;
  if (iVar1 != 0) {
    FUN_1475b528a(local_28,iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  *(undefined4 *)((longlong)local_28 + 0xc) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a97f4 FUN_1475a97f4 body=41 status=ok
// SIG undefined FUN_1475a97f4(void)

void FUN_1475a97f4(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_1475b52f4();
  return;
}



// FUNCTION 1475a981e FUN_1475a981e body=608 status=ok
// SIG undefined FUN_1475a981e(void)

undefined8 * FUN_1475a981e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_FUN_14a4a7fb0;
  param_1[2] = &PTR_LAB_14a4a7fd0;
  FUN_146125930(param_1 + 3);
  param_1[0x19] = 0;
  param_1[0x1a] = 0x8000000000;
  param_1[0x1b] = 0xffffffff;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 2;
  param_1[0x20] = 2;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0xffffffff;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 2;
  param_1[0x2c] = 2;
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0xffffffff;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  memset(param_1 + 0x2f,0,0xa0);
  *(undefined8 *)((longlong)param_1 + 0x234) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  FUN_147547c5a(&local_38);
  plVar1 = local_30;
  if (param_1 + 0x3f != &local_38) {
    param_1[0x3f] = local_38;
    local_38 = 0;
    plVar3 = (longlong *)param_1[0x40];
    if (local_30 != plVar3) {
      local_30 = (longlong *)0x0;
      param_1[0x40] = plVar1;
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
  }
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  lVar7 = FUN_1475477ae(DAT_14c951640);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar7);
  }
  param_1[0x3e] = lVar7;
  *(undefined4 *)(lVar7 + 0x700) = 5;
  lVar7 = param_1[0x3e];
  uVar6 = FUN_1408bae02();
  FUN_147547786(lVar7 + 0x708,uVar6);
  uVar4 = param_1[0x3e];
  FUN_14083f10a(&local_3c);
  FUN_1475a9a80(uVar4,local_3c,param_1 + 2);
  uVar4 = param_1[0x3e];
  uVar5 = param_1[0x3f];
  FUN_140dab754(&local_38);
  FUN_1475b55c0(uVar4,local_38 & 0xffffffff,uVar5);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a9a80 FUN_1475a9a80 body=134 status=ok
// SIG undefined FUN_1475a9a80(void)

void FUN_1475a9a80(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x630))) {
    lVar1 = param_1 + 0x618;
    if (*(longlong *)(param_1 + 0x628) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x628);
    }
    if ((*(uint *)(lVar1 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0)
    goto LAB_1475a9acc;
  }
  FUN_1475b548a(param_1 + 0x608,local_28);
  *local_20 = param_3;
LAB_1475a9acc:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a9b08 FUN_1475a9b08 body=202 status=ok
// SIG undefined FUN_1475a9b08(void)

void FUN_1475a9b08(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4a7fb0;
  param_1[2] = &PTR_LAB_14a4a7fd0;
  FUN_1475a9bd2(param_1 + 0x41);
  plVar3 = (longlong *)param_1[0x40];
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
  FUN_1475b5364(param_1[0x3d]);
  FUN_140a31b96(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_14055a9b2(param_1 + 0x15);
  FUN_145c38012(param_1 + 3);
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 1475a9bd2 FUN_1475a9bd2 body=52 status=ok
// SIG undefined FUN_1475a9bd2(void)

void FUN_1475a9bd2(longlong *param_1)

{
  FUN_1475b5430();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475a9c26 FUN_1475a9c26 body=32 status=ok
// SIG undefined FUN_1475a9c26(void)

undefined8 FUN_1475a9c26(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FSystemInterrogator");
  return param_2;
}



// FUNCTION 1475a9c46 FUN_1475a9c46 body=98 status=ok
// SIG undefined FUN_1475a9c46(void)

void FUN_1475a9c46(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14758442a(param_2,local_38);
  FUN_1475a9caa(param_1,param_2,local_38,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475a9caa FUN_1475a9caa body=1114 status=ok
// SIG undefined FUN_1475a9caa(void)

void FUN_1475a9caa(longlong param_1,longlong param_2,undefined4 *param_3,uint param_4)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  bool bVar18;
  undefined1 auStack_218 [36];
  uint local_1f4;
  longlong local_1f0;
  longlong local_1e8;
  ulonglong local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined1 local_18c;
  byte local_18b;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 local_160 [256];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (*(char *)(param_2 + 0x69) != '\0') goto LAB_1475aa09f;
  local_1d8 = DAT_14cab2cc8;
  DAT_14cab2cc8 = *(longlong *)(param_1 + 0x1f0) + 0x28;
  plVar10 = (longlong *)FUN_1456c5f90(param_2);
  FUN_147554388(local_160,param_1 + 0xf8);
  puVar11 = (undefined4 *)FUN_147554508(local_160);
  uVar8 = param_3[1];
  uVar9 = param_3[2];
  uVar5 = param_3[3];
  *puVar11 = *param_3;
  puVar11[1] = uVar8;
  puVar11[2] = uVar9;
  puVar11[3] = uVar5;
  uVar7 = FUN_147554522(local_160);
  uVar12 = FUN_140ce4600();
  uVar12 = FUN_144a78ede(param_2,uVar12);
  local_1f0 = param_1 + 0x208;
  local_1e8 = param_1 + 0x218;
  local_1f4 = uVar7;
  if (((int)uVar7 < 0) || (*(int *)(param_1 + 0x230) <= (int)uVar7)) {
LAB_1475aa0d5:
    FUN_1475b5648(local_1f0,&local_1c8,uVar7);
    *uStack_1c0 = uVar12;
    *(uint *)(uStack_1c0 + 1) = param_4;
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x228);
    if (*(longlong *)(param_1 + 0x228) == 0) {
      lVar14 = local_1e8;
    }
    if ((*(uint *)(lVar14 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) == 0)
    goto LAB_1475aa0d5;
  }
  lVar14 = plVar10[1];
  local_1e0 = (ulonglong)param_4;
  if ((longlong)(int)lVar14 != 0) {
    lVar4 = *plVar10;
    local_1d0 = lVar4 + 8;
    lVar16 = 0;
    do {
      lVar13 = *(longlong *)(lVar4 + lVar16);
      if (lVar13 != 0) {
        uVar12 = FUN_14055f060();
        plVar10 = (longlong *)FUN_144718840(lVar13,uVar12);
        if ((plVar10 != (longlong *)0x0) &&
           ((((cVar6 = *(char *)(lVar4 + 8 + lVar16), cVar6 == '\x02' ||
              (cVar2 = *(char *)(lVar4 + 0x10 + lVar16), cVar2 == '\x02')) ||
             ((iVar3 = *(int *)(lVar4 + 0x14 + lVar16), iVar17 = *(int *)(lVar4 + 0xc + lVar16),
              iVar17 <= iVar3 && ((iVar17 != iVar3 || ((cVar6 != '\0' && (cVar2 != '\0')))))))) &&
            (cVar6 = FUN_14758438e(param_2,*(undefined4 *)(*(longlong *)(lVar4 + lVar16) + 0xb8)),
            cVar6 == '\0')))) {
          local_1b8 = 0;
          uStack_1b0 = (undefined2 *)0x0;
          local_1c8 = 0;
          uStack_1c0 = (undefined8 *)0x0;
          local_1a8 = 0;
          local_1a0 = 0;
          uStack_198 = 0;
          local_190 = *(undefined4 *)(lVar4 + 0x18 + lVar16);
          local_18c = *(undefined1 *)(lVar4 + 0x1c + lVar16);
          local_18b = *(byte *)(param_2 + 0x58) >> 2 & 3 | local_18b & 0xfc;
          lVar13 = FUN_147571e62(param_2,*(undefined8 *)(lVar4 + lVar16),0);
          if (lVar13 == 0) {
            local_1c8 = 0;
            uStack_1c0 = (undefined8 *)0x0;
            local_1b8 = 0;
            bVar18 = (longlong)local_1a8 < 0;
            local_1a8 = local_1a8 & 0xffffffff00000000;
            if (bVar18) {
              FUN_1446f8c06(&uStack_1b0,0);
            }
            if (uStack_1b0 != (undefined2 *)0x0) {
              *uStack_1b0 = 0;
            }
          }
          else {
            FUN_1400bbfae(&local_180,lVar13);
            uStack_1c0 = (undefined8 *)CONCAT44(uStack_17c,local_180);
            local_1b8 = CONCAT44(uStack_174,uStack_178);
            if (uStack_1b0 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            uStack_1b0 = (undefined2 *)CONCAT44(uStack_16c,local_170);
            local_1a8 = CONCAT44(uStack_164,uStack_168);
            cVar6 = (*(code *)PTR_FUN_14c758760)();
            if (cVar6 != '\0') {
              uVar7 = *(uint *)(lVar13 + 0xc);
              if ((int)uVar7 < DAT_14c9647dc) {
                lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
              }
              else {
                lVar15 = 0;
              }
              if ((*(uint *)(lVar15 + 8) & 0x8400000) != 0) {
                local_1c8 = 0;
                goto LAB_1475a9f86;
              }
            }
            FUN_14485c47a(&local_1c8,lVar13);
          }
LAB_1475a9f86:
          lVar13 = local_1d0 + lVar16;
          cVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,lVar13,&local_1c8,local_160);
          if (cVar6 == '\0') {
            uVar8 = FUN_14755452a(local_160,*(undefined8 *)(lVar4 + lVar16),0);
            uVar9 = FUN_1475545d8(local_160,&local_1c8);
            FUN_147554828(local_160,lVar13,uVar8,uVar9);
          }
          if (local_1a0 != 0) {
            FUN_1400020a8();
          }
          if (uStack_1b0 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      lVar16 = lVar16 + 0x20;
    } while ((longlong)(int)lVar14 * 0x20 != lVar16);
  }
  lVar14 = param_1 + 0x78;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar14 = *(longlong *)(param_1 + 0x88);
  }
  iVar3 = (int)local_1e0;
  iVar17 = iVar3 + 0x1f;
  if (-1 < iVar3) {
    iVar17 = iVar3;
  }
  puVar1 = (uint *)(lVar14 + (longlong)(iVar17 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)local_1e0 & 0x1f);
  FUN_147554418(local_160);
  if (((-1 < (int)local_1f4) &&
      (*(int *)(param_1 + 0x1e0) != *(int *)(param_1 + 0x210) - *(int *)(param_1 + 0x23c))) &&
     ((int)local_1f4 < *(int *)(param_1 + 0x230))) {
    lVar14 = local_1e8;
    if (*(longlong *)(param_1 + 0x228) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x228);
    }
    if ((*(uint *)(lVar14 + (ulonglong)(local_1f4 >> 5) * 4) >> (local_1f4 & 0x1f) & 1) != 0) {
      FUN_1475b5796(local_1f0);
    }
  }
  DAT_14cab2cc8 = local_1d8;
LAB_1475aa09f:
  if ((local_60 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475aa106 FUN_1475aa106 body=485 status=ok
// SIG undefined FUN_1475aa106(void)

int FUN_1475aa106(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar2 = *(int *)(param_1 + 0xa0);
  lVar8 = (longlong)iVar2;
  uVar3 = DAT_14cab2cc8;
  iVar5 = -1;
  if (lVar8 != 0x7fffffff) {
    plVar1 = (longlong *)(param_1 + 0x98);
    *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
      FUN_1475b4300(plVar1,iVar2);
      *(undefined8 *)(*plVar1 + lVar8 * 8) = *param_2;
    }
    else {
      *(undefined8 *)(*plVar1 + lVar8 * 8) = *param_2;
      uVar3 = DAT_14cab2cc8;
      if (iVar2 == -1) goto LAB_1475aa13b;
    }
    uVar3 = DAT_14cab2cc8;
    DAT_14cab2cc8 = *(longlong *)(param_1 + 0x1f0) + 0x28;
    local_70[0] = 2;
    iVar7 = 0;
    local_6c = 0;
    local_68 = 2;
    local_64 = 0;
    plVar1 = (longlong *)(param_1 + 0xa8);
    FUN_14055ab72(plVar1);
    FUN_14055c024(param_1 + 0xf8,*(undefined4 *)param_2,local_70,plVar1);
    lVar8 = param_1 + 0xb8;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = lVar8;
    if (*(int *)(param_1 + 0xd0) != 0) {
      FUN_1449c0562(&local_60);
      iVar7 = *(int *)(param_1 + 0xd0);
    }
    local_80 = local_50;
    uVar4 = local_80;
    local_78 = local_48;
    local_74 = local_44;
    local_90 = local_60;
    local_88 = local_58;
    local_80._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_80._4_4_;
    local_98 = plVar1;
    iVar5 = iVar2;
    if ((local_80._4_4_ != iVar7) || (local_80 = uVar4, local_58 != lVar8)) {
      do {
        local_80 = uVar4;
        FUN_1475aa2ec(param_1,iVar2,(longlong)iVar6 * 0x1c + *local_98);
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
        FUN_1449c0562(&local_90);
        iVar6 = local_80._4_4_;
        uVar4 = local_80;
      } while (local_98 != plVar1 || (local_88 != lVar8 || local_80._4_4_ != iVar7));
    }
  }
LAB_1475aa13b:
  DAT_14cab2cc8 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 1475aa2ec FUN_1475aa2ec body=598 status=ok
// SIG undefined FUN_1475aa2ec(void)

void FUN_1475aa2ec(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_128 [46];
  undefined2 local_fa;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined4 local_c2;
  undefined1 local_be;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a2;
  undefined8 *local_a0;
  undefined2 *local_98;
  undefined1 local_8c [4];
  undefined1 local_88 [72];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar2 = FUN_14479d2ce(param_3);
  if (lVar2 != 0) {
    uVar3 = FUN_14055f060();
    lVar4 = FUN_144718840(lVar2,uVar3);
    if (lVar4 != 0) {
      local_f8 = 0;
      local_f0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_cc = DAT_14cab4520;
      local_c8 = 0xffff;
      local_c4 = 0xffff;
      local_c2 = 0;
      local_be = 0;
      local_e8 = *(undefined4 *)(param_3 + 1);
      if ((longlong)*(int *)(param_3 + 2) != -1) {
        local_f8 = (longlong)*(int *)(param_3 + 2) * 0x40 + *(longlong *)(param_1 + 0x1c8);
      }
      uVar1 = *(uint *)((longlong)param_3 + 0xc);
      if ((longlong)(int)uVar1 == -1) {
        local_e4 = 0;
      }
      else {
        local_f0 = (longlong)(int)uVar1 * 0x10 + *(longlong *)(param_1 + 0x1d8);
        local_e4 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x230))) {
          lVar5 = param_1 + 0x218;
          if (*(longlong *)(param_1 + 0x228) != 0) {
            lVar5 = *(longlong *)(param_1 + 0x228);
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
            local_e4 = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 8 + (ulonglong)uVar1 * 0x10)
            ;
            local_d8 = *(undefined8 *)(*(longlong *)(param_1 + 0x208) + (ulonglong)uVar1 * 0x10);
          }
        }
      }
      local_40 = 0;
      local_38 = 0x100000000;
      uStack_e0 = param_2;
      FUN_147545748(lVar4,*(undefined8 *)(param_1 + 0x1f0),&local_f8,local_88);
      if ((int)local_38 != 0) {
        lVar4 = FUN_14055f146();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_14056101a(lVar2,*(undefined8 *)(param_1 + 0x1f0),&local_f8,local_88);
        }
        FUN_14055fcce(local_88,&local_fa,&local_f8,*(longlong *)(param_1 + 0x1f0) + 0x28);
        if (*(longlong *)(param_1 + 0x1e8) != 0) {
          local_98 = &local_a2;
          local_a2 = local_fa;
          local_b8 = CONCAT44(uStack_e0,local_e4);
          local_a0 = &local_b8;
          local_b0 = *param_3;
          local_a8 = *(undefined4 *)(param_3 + 1);
          FUN_1475af79e(*(longlong *)(param_1 + 0x1e8),local_8c);
        }
      }
      FUN_14055efc8(local_88);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475aa544 FUN_1475aa544 body=1981 status=ok
// SIG undefined FUN_1475aa544(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1475aa544(longlong param_1)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined1 auStack_208 [43];
  char local_1dd;
  int local_1dc;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  int local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined2 *local_1a8;
  undefined2 *local_1a0;
  undefined2 local_194;
  undefined2 local_192;
  ushort local_190;
  undefined4 local_18c;
  uint local_188;
  undefined1 local_184;
  longlong *local_180;
  undefined2 *local_178;
  longlong local_170;
  longlong *local_168;
  longlong local_160;
  longlong local_158;
  longlong *local_150;
  undefined8 local_148;
  int local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  int local_120;
  undefined8 local_112;
  undefined2 uStack_10a;
  longlong *local_108;
  undefined1 local_100 [8];
  undefined1 local_f8 [32];
  undefined1 local_d8 [40];
  longlong local_b0;
  longlong local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1b0 = DAT_14cab2cc8;
  DAT_14cab2cc8 = *(longlong *)(param_1 + 0x1f0) + 0x28;
  FUN_1475471dc();
  FUN_1432d4e30(*(undefined8 *)(param_1 + 0x1f0));
  lVar8 = *(longlong *)(param_1 + 0x98);
  lVar10 = FUN_14009d2a0();
  uVar2 = *(undefined2 *)(lVar10 + 0x13a);
  lVar10 = FUN_14009d2a0();
  local_192 = *(undefined2 *)(lVar10 + 0x54);
  local_190 = (ushort)(byte)local_190;
  local_18c = 0x6ff;
  local_188 = local_188 & 0xffffff00;
  local_194 = uVar2;
  lVar10 = FUN_14009d2a0();
  local_112._0_2_ = *(undefined2 *)(lVar10 + 0x128);
  FUN_1475b57fe((undefined2 *)((longlong)&local_112 + 2),&local_194);
  local_180 = &local_112;
  local_178 = (undefined2 *)((longlong)&local_112 + 2);
  FUN_1447c44f6(local_d8);
  if ((local_112._2_2_ != -1) && (local_112._4_2_ != -1)) {
    lVar10 = *(longlong *)(param_1 + 0x1f0);
    local_1d8 = *(longlong *)(lVar10 + 0x270);
    local_1c8 = CONCAT71(local_1c8._1_7_,*(undefined1 *)(lVar10 + 0x298));
    local_1d0 = param_1;
    FUN_14150e78a(&local_130,lVar10 + 0x28,local_100);
    local_1dc = *(int *)(lVar10 + 0x38);
    if (local_120 != local_1dc) {
      do {
        lVar10 = *(longlong *)(*(longlong *)(local_128 + 0x60) + (longlong)local_120 * 8);
        if ((char)local_1c8 == '\0') {
          *(undefined4 *)(lVar10 + 0x14) = 0;
          lVar12 = lVar10;
        }
        else {
          lVar12 = 0;
        }
        if (*(ushort *)(lVar10 + 0xc) != 0) {
          plVar15 = *(longlong **)(lVar10 + 0x28);
          lVar13 = (ulonglong)*(ushort *)(lVar10 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar15 + 0x1e) == local_112._4_2_) goto LAB_1475aa8c4;
            plVar15 = plVar15 + 4;
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != 0);
        }
        plVar15 = (longlong *)0x0;
LAB_1475aa8c4:
        iVar5 = *(int *)(lVar10 + 0x14);
        if (iVar5 == 1) {
          AcquireSRWLockExclusive((PSRWLOCK)(plVar15 + 1));
        }
        LOCK();
        *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
        UNLOCK();
        plVar17 = (longlong *)*plVar15;
        if (*(ushort *)(lVar10 + 0xc) != 0) {
          plVar14 = *(longlong **)(lVar10 + 0x28);
          lVar13 = (ulonglong)*(ushort *)(lVar10 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar14 + 0x1e) == local_112._2_2_) goto LAB_1475aa8ec;
            plVar14 = plVar14 + 4;
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != 0);
        }
        plVar14 = (longlong *)0x0;
LAB_1475aa8ec:
        iVar6 = *(int *)(lVar10 + 0x14);
        if (iVar6 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar14 + 1));
        }
        LOCK();
        *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
        UNLOCK();
        local_170 = *plVar14;
        local_178 = (undefined2 *)CONCAT44(local_178._4_4_,iVar6);
        local_160 = local_1d8;
        local_158 = CONCAT44(local_158._4_4_,iVar5);
        uVar4 = *(ushort *)(lVar10 + 0xe);
        if ((ulonglong)uVar4 != 0) {
          uVar16 = 0;
          do {
            plVar17[uVar16] =
                 *(longlong *)(lVar8 + (longlong)*(int *)(local_170 + 4 + uVar16 * 8) * 8);
            uVar16 = uVar16 + 1;
          } while (uVar4 != uVar16);
        }
        local_180 = plVar14;
        local_168 = plVar15;
        local_150 = plVar17;
        FUN_1475b58b8(&local_180);
        if (lVar12 != 0) {
          *(undefined4 *)(lVar12 + 0x14) = 1;
        }
        local_120 = FUN_1403b8464(&local_130,local_120 + 1);
      } while (local_120 != local_1dc);
    }
    param_1 = local_1d0;
    if (local_130 != 0) {
      if (*(char *)(local_128 + 0x270) == '\0') {
        *(int *)(local_128 + 0x264) = *(int *)(local_128 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_128 + 0x264) = *(int *)(local_128 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  lVar10 = FUN_14009d2a0();
  uVar2 = *(undefined2 *)(lVar10 + 0x13a);
  lVar10 = FUN_14009d2a0();
  uVar3 = *(undefined2 *)(lVar10 + 0x13c);
  lVar10 = FUN_14009d2a0();
  local_190 = *(undefined2 *)(lVar10 + 0x56);
  local_18c._0_2_ = (ushort)(byte)local_18c;
  local_188 = 0x6ff;
  local_184 = 0;
  local_194 = uVar2;
  local_192 = uVar3;
  lVar10 = FUN_14009d2a0();
  local_112._0_2_ = *(undefined2 *)(lVar10 + 0x128);
  local_1a8 = (undefined2 *)&local_112;
  local_1a0 = (undefined2 *)((longlong)&local_112 + 2);
  FUN_1475aad02(&local_194,(undefined2 *)((longlong)&local_112 + 2));
  if (((local_112._2_2_ != -1) && (local_112._4_2_ != -1)) && (local_112._6_2_ != -1)) {
    lVar10 = *(longlong *)(param_1 + 0x1f0);
    local_1b8 = *(undefined8 *)(lVar10 + 0x270);
    local_1dd = *(char *)(lVar10 + 0x298);
    FUN_14150e78a(&local_130,lVar10 + 0x28,local_f8);
    local_1bc = *(int *)(lVar10 + 0x38);
    lVar10 = param_1;
    if (local_120 != local_1bc) {
      do {
        local_1d0 = lVar10;
        lVar10 = *(longlong *)(*(longlong *)(local_128 + 0x60) + (longlong)local_120 * 8);
        if (local_1dd == '\0') {
          *(undefined4 *)(lVar10 + 0x14) = 0;
          local_1d8 = lVar10;
        }
        else {
          local_1d8 = 0;
        }
        if (*(ushort *)(lVar10 + 0xc) != 0) {
          plVar15 = *(longlong **)(lVar10 + 0x28);
          lVar12 = (ulonglong)*(ushort *)(lVar10 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar15 + 0x1e) == local_112._6_2_) goto LAB_1475aaaa7;
            plVar15 = plVar15 + 4;
            lVar12 = lVar12 + -0x20;
          } while (lVar12 != 0);
        }
        plVar15 = (longlong *)0x0;
LAB_1475aaaa7:
        iVar5 = *(int *)(lVar10 + 0x14);
        if (iVar5 == 1) {
          AcquireSRWLockExclusive((PSRWLOCK)(plVar15 + 1));
        }
        LOCK();
        *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
        UNLOCK();
        lVar12 = *plVar15;
        if (*(ushort *)(lVar10 + 0xc) != 0) {
          plVar17 = *(longlong **)(lVar10 + 0x28);
          lVar13 = (ulonglong)*(ushort *)(lVar10 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar17 + 0x1e) == local_112._4_2_) goto LAB_1475aaad5;
            plVar17 = plVar17 + 4;
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != 0);
        }
        plVar17 = (longlong *)0x0;
LAB_1475aaad5:
        iVar6 = *(int *)(lVar10 + 0x14);
        if (iVar6 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar17 + 1));
        }
        LOCK();
        *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
        UNLOCK();
        lVar13 = *plVar17;
        if (*(ushort *)(lVar10 + 0xc) != 0) {
          plVar14 = *(longlong **)(lVar10 + 0x28);
          lVar11 = (ulonglong)*(ushort *)(lVar10 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar14 + 0x1e) == local_112._2_2_) goto LAB_1475aab08;
            plVar14 = plVar14 + 4;
            lVar11 = lVar11 + -0x20;
          } while (lVar11 != 0);
        }
        plVar14 = (longlong *)0x0;
LAB_1475aab08:
        iVar7 = *(int *)(lVar10 + 0x14);
        local_1dc = iVar5;
        local_1c8 = lVar10;
        if (iVar7 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar14 + 1));
        }
        LOCK();
        *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
        UNLOCK();
        lVar10 = *plVar14;
        local_178 = (undefined2 *)CONCAT44(local_178._4_4_,iVar7);
        local_160 = CONCAT44(local_160._4_4_,iVar6);
        local_148 = local_1b8;
        local_140 = local_1dc;
        uVar4 = *(ushort *)(local_1c8 + 0xe);
        local_180 = plVar14;
        local_170 = lVar10;
        local_168 = plVar17;
        local_158 = lVar13;
        local_150 = plVar15;
        local_138 = lVar12;
        if ((ulonglong)uVar4 != 0) {
          uVar16 = 0;
          do {
            plVar15 = *(longlong **)(lVar13 + uVar16 * 8);
            if (plVar15 != (longlong *)0x0) {
              iVar5 = *(int *)(lVar10 + 4 + uVar16 * 8);
              lVar11 = (**(code **)(*plVar15 + 0x2e8))();
              if (lVar11 != 0) {
                lVar11 = (**(code **)(**(longlong **)(lVar13 + uVar16 * 8) + 0x2e8))();
                lVar11 = *(longlong *)(lVar11 + 0x118);
                uVar9 = *(undefined8 *)(lVar8 + (longlong)iVar5 * 8);
                *(double *)(lVar12 + uVar16 * 8) =
                     ((double)((lVar11 >> 0x20) * (longlong)(int)uVar9) +
                     (double)(int)((ulonglong)lVar11 >> 0x20) *
                     (double)(float)((ulonglong)uVar9 >> 0x20)) / (double)(int)lVar11;
              }
            }
            uVar16 = uVar16 + 1;
          } while (uVar4 != uVar16);
        }
        FUN_1475b59cc(&local_180);
        if (local_1d8 != 0) {
          *(undefined4 *)(local_1d8 + 0x14) = 1;
        }
        local_120 = FUN_1403b8464(&local_130,local_120 + 1);
        param_1 = local_1d0;
        lVar10 = local_1d0;
      } while (local_120 != local_1bc);
    }
    if (local_130 != 0) {
      if (*(char *)(local_128 + 0x270) == '\0') {
        *(int *)(local_128 + 0x264) = *(int *)(local_128 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_128 + 0x264) = *(int *)(local_128 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1432d437c(*(undefined8 *)(param_1 + 0x1f0),(undefined2 *)((longlong)&local_112 + 2));
  uVar9 = CONCAT26(uStack_10a,CONCAT24(local_112._6_2_,CONCAT22(local_112._4_2_,local_112._2_2_)));
  if (local_108 == (longlong *)0x0) {
    FUN_14029f298(uVar9);
    plVar15 = (longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x270);
    *plVar15 = *plVar15 + 1;
  }
  else {
    LOCK();
    *(int *)(local_108 + 1) = (int)local_108[1] + 1;
    UNLOCK();
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_108 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)local_108 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_108 + 0x10))(local_108);
        }
      }
    }
    FUN_14029f298(uVar9);
    plVar15 = (longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x270);
    *plVar15 = *plVar15 + 1;
    LOCK();
    plVar15 = local_108 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_108 + 0x10))(local_108);
      }
    }
  }
  DAT_14cab2cc8 = local_1b0;
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475aad02 FUN_1475aad02 body=145 status=ok
// SIG undefined FUN_1475aad02(void)

undefined8 * FUN_1475aad02(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_1475b5924(param_2,param_2 + 3);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_1447c44f6(param_2 + 8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475aadac FUN_1475aadac body=176 status=ok
// SIG undefined FUN_1475aadac(void)

undefined8 * FUN_1475aadac(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14a4ab760;
  uVar2 = *(undefined4 *)(param_2 + 0x10c);
  uVar3 = *(undefined4 *)(param_2 + 0x110);
  uVar4 = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  param_1[6] = *(undefined8 *)(param_2 + 0x118);
  FUN_140737604(param_1 + 7,param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x230);
  *(undefined1 *)((longlong)param_1 + 0x149) = *(undefined1 *)(param_2 + 0x231);
  uVar5 = *(uint *)(param_2 + 0x234) & 1;
  uVar1 = *(uint *)((longlong)param_1 + 0x14c);
  *(uint *)((longlong)param_1 + 0x14c) = uVar1 & 0xfffffffe | uVar5;
  uVar6 = *(uint *)(param_2 + 0x234) & 2;
  *(uint *)((longlong)param_1 + 0x14c) = uVar1 & 0xfffffffc | uVar5 | uVar6;
  *(uint *)((longlong)param_1 + 0x14c) =
       uVar1 & 0xfffffff8 | uVar5 | uVar6 | *(uint *)(param_2 + 0x234) & 4;
  return param_1;
}



// FUNCTION 1475aae5c FUN_1475aae5c body=177 status=ok
// SIG undefined FUN_1475aae5c(void)

longlong FUN_1475aae5c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1475741e2(param_1,&local_40,*(undefined4 *)(param_2 + 0x10),param_3);
  if ((longlong)local_38 != 0) {
    lVar3 = 0;
    do {
      local_48 = *(undefined8 *)(local_40 + lVar3);
      lVar1 = FUN_14479d2ce(&local_48);
      if (lVar1 != 0) {
        lVar2 = FUN_144a6c4d8();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) goto LAB_1475aaee8;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)local_38 * 8 != lVar3);
  }
  lVar1 = 0;
LAB_1475aaee8:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475aaf0e FUN_1475aaf0e body=183 status=ok
// SIG undefined FUN_1475aaf0e(void)

undefined8 * FUN_1475aaf0e(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14a4abba0;
  local_48 = *(undefined8 *)(param_3 + 0x108);
  FUN_1400021e4(&local_48,&local_40);
  param_1[4] = *(undefined8 *)(param_3 + 0x100);
  param_1[5] = local_40;
  local_40 = 0;
  *(undefined4 *)(param_1 + 6) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_38._4_4_;
  local_38 = 0;
  FUN_1475aafc6(param_1 + 7,param_2 + 0xf8);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475aafc6 FUN_1475aafc6 body=340 status=ok
// SIG undefined FUN_1475aafc6(void)

undefined8 * FUN_1475aafc6(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  FUN_1475affea();
  *param_1 = &PTR_FUN_14a4abbf0;
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0x58);
  pvVar2 = *(void **)(param_2 + 0x50);
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_147539e5c(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  uVar3 = *(undefined4 *)(param_2 + 0x60);
  uVar4 = *(undefined4 *)(param_2 + 100);
  uVar5 = *(undefined4 *)(param_2 + 0x68);
  uVar6 = *(undefined4 *)(param_2 + 0x6c);
  uVar7 = *(undefined4 *)(param_2 + 0x74);
  uVar8 = *(undefined4 *)(param_2 + 0x78);
  uVar9 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar7;
  *(undefined4 *)(param_1 + 0xf) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar9;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)((longlong)param_1 + 100) = uVar4;
  *(undefined4 *)(param_1 + 0xd) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar6;
  param_1[0x11] = 0;
  iVar1 = *(int *)(param_2 + 0x90);
  pvVar2 = *(void **)(param_2 + 0x88);
  *(int *)(param_1 + 0x12) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_1475b08f6(param_1 + 0x11,iVar1,0);
    memcpy((void *)param_1[0x11],pvVar2,(longlong)iVar1 * 0x28);
  }
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  return param_1;
}



// FUNCTION 1475ab11a FUN_1475ab11a body=803 status=ok
// SIG undefined FUN_1475ab11a(void)

void FUN_1475ab11a(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined **ppuVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong local_128;
  longlong lStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined5 local_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = DAT_14cab4520;
  uStack_164 = 0xffffffff;
  local_160 = 0;
  uStack_158 = 0;
  uVar3 = *(uint *)(param_3 + 0x24);
  if (SBORROW4(0,uVar3)) {
    puVar4 = (uint *)(param_3 + 4);
    if (*(int *)(param_3 + 0x20) == 0) {
      puVar4 = (uint *)(param_3 + 0x10);
    }
    uVar3 = *puVar4;
    uVar6 = (ulonglong)puVar4[1] << 0x20;
  }
  else {
    uVar6 = 0;
  }
  FUN_1475be088(param_1 + 0x38,uVar3 | uVar6,&local_178);
  local_138 = CONCAT44(uStack_164,local_168);
  local_148 = local_178;
  uStack_140 = uStack_170;
  local_118 = (undefined4)param_5[0x24];
  local_128 = param_5[0x22];
  lStack_120 = param_5[0x23];
  uStack_114 = (undefined4)*(undefined8 *)((longlong)param_5 + 0x124);
  uStack_110 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x124) >> 0x20);
  uStack_10c = (undefined4)*(undefined8 *)((longlong)param_5 + 300);
  uStack_108 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 300) >> 0x20);
  local_100 = (undefined4)param_5[0x27];
  uStack_fc = *(undefined4 *)((longlong)param_5 + 0x13c);
  uStack_f8 = (undefined4)param_5[0x28];
  uStack_f4 = *(undefined4 *)((longlong)param_5 + 0x144);
  local_f0 = (undefined4)param_5[0x29];
  uStack_ec = *(undefined4 *)((longlong)param_5 + 0x14c);
  uStack_e8 = (undefined4)param_5[0x2a];
  uStack_e4 = *(undefined4 *)((longlong)param_5 + 0x154);
  local_e0 = param_5[0x2b];
  FUN_144a3f8b4(&local_d8,param_5 + 0x2c);
  FUN_144b1f2a6(&local_b8,param_5 + 0x30);
  local_90 = (undefined5)param_5[0x35];
  uStack_8b = (undefined3)*(undefined8 *)((longlong)param_5 + 0x1ad);
  uStack_88 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x1ad) >> 0x18);
  local_40 = local_40 | 3;
  local_80 = &PTR_FUN_14a4aad00;
  lStack_68 = local_138;
  uStack_78 = (undefined4)local_148;
  uStack_74 = local_148._4_4_;
  uStack_70 = (undefined4)uStack_140;
  uStack_6c = uStack_140._4_4_;
  iVar2 = (int)param_5[1];
  *(uint *)(param_5 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar2 + 1U) {
    FUN_140ac5684(param_5,iVar2);
  }
  lVar7 = *param_5;
  plVar1 = (longlong *)(lVar7 + (longlong)iVar2 * 0xf0);
  *(undefined4 *)(plVar1 + 4) = uStack_108;
  plVar1[2] = CONCAT44(uStack_114,local_118);
  plVar1[3] = CONCAT44(uStack_10c,uStack_110);
  *plVar1 = local_128;
  plVar1[1] = lStack_120;
  plVar1[9] = local_e0;
  *(undefined4 *)(plVar1 + 7) = local_f0;
  *(undefined4 *)((longlong)plVar1 + 0x3c) = uStack_ec;
  *(undefined4 *)(plVar1 + 8) = uStack_e8;
  *(undefined4 *)((longlong)plVar1 + 0x44) = uStack_e4;
  *(undefined4 *)(plVar1 + 5) = local_100;
  *(undefined4 *)((longlong)plVar1 + 0x2c) = uStack_fc;
  *(undefined4 *)(plVar1 + 6) = uStack_f8;
  *(undefined4 *)((longlong)plVar1 + 0x34) = uStack_f4;
  plVar1[10] = local_d8;
  *(undefined4 *)(plVar1 + 0xb) = local_d0;
  plVar1[0xc] = 0;
  plVar1[0xc] = local_c8;
  local_c8 = 0;
  *(undefined4 *)(plVar1 + 0xd) = (undefined4)local_c0;
  *(undefined4 *)((longlong)plVar1 + 0x6c) = local_c0._4_4_;
  local_c0 = 0;
  plVar1[0xe] = 0;
  plVar1[0xe] = local_b8;
  local_b8 = 0;
  *(undefined4 *)(plVar1 + 0xf) = (undefined4)local_b0;
  *(undefined4 *)((longlong)plVar1 + 0x7c) = local_b0._4_4_;
  local_b0 = 0;
  *(undefined1 *)(plVar1 + 0x10) = local_a8;
  plVar1[0x11] = 0;
  plVar1[0x11] = local_a0;
  local_a0 = 0;
  *(undefined4 *)(plVar1 + 0x12) = (undefined4)local_98;
  *(undefined4 *)((longlong)plVar1 + 0x94) = local_98._4_4_;
  local_98 = 0;
  *(ulonglong *)((longlong)plVar1 + 0x9d) = CONCAT53(uStack_88,uStack_8b);
  plVar1[0x13] = CONCAT35(uStack_8b,local_90);
  *(byte *)(plVar1 + 0x1d) = *(byte *)(plVar1 + 0x1d) & 0xfc | 2;
  FUN_144adeb48(plVar1 + 0x15);
  if ((local_40 & 1) != 0) {
    lVar7 = lVar7 + (longlong)iVar2 * 0xf0;
    *(byte *)(lVar7 + 0xe8) = *(byte *)(lVar7 + 0xe8) | 1;
    *(byte *)(lVar7 + 0xe8) = *(byte *)(lVar7 + 0xe8) & 0xfd | local_40 & 2;
    plVar1[0x1b] = local_50;
    plVar1[0x1c] = lStack_48;
    plVar1[0x19] = local_60;
    plVar1[0x1a] = lStack_58;
    plVar1[0x17] = CONCAT44(uStack_6c,uStack_70);
    plVar1[0x18] = lStack_68;
    *(undefined4 *)(plVar1 + 0x15) = (undefined4)local_80;
    *(undefined4 *)((longlong)plVar1 + 0xac) = local_80._4_4_;
    *(undefined4 *)(plVar1 + 0x16) = uStack_78;
    *(undefined4 *)((longlong)plVar1 + 0xb4) = uStack_74;
    local_40 = local_40 & 0xfe;
  }
  if ((local_40 & 1) != 0) {
    ppuVar5 = (undefined **)&local_80;
    if ((local_40 & 2) == 0) {
      ppuVar5 = local_80;
    }
    local_40 = local_40 & 0xfe;
    (**(code **)*ppuVar5)(ppuVar5,0);
    if ((local_40 & 2) == 0) {
      FUN_1400020a8(local_80);
    }
  }
  FUN_144adeafa(&local_100);
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ab43e FUN_1475ab43e body=888 status=ok
// SIG undefined FUN_1475ab43e(void)

void FUN_1475ab43e(uint *param_1,longlong param_2,float param_3,ulonglong param_4,longlong param_5)

{
  uint uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  double dVar17;
  
  uVar1 = *param_1;
  uVar5 = param_1[1] - 1;
  uVar7 = param_4;
  if ((int)uVar5 <= (int)(uint)param_4) {
    if (0.0 <= (float)(param_4 >> 0x20)) {
      uVar7 = (ulonglong)uVar5;
    }
    if (uVar5 != (uint)param_4) {
      uVar7 = (ulonglong)uVar5;
    }
    param_4 = uVar7 & 0xffffffff;
  }
  dVar2 = (double)(int)param_5;
  dVar11 = (double)(int)((ulonglong)param_5 >> 0x20);
  iVar4 = *(int *)(param_2 + 0x10) + *(int *)(param_2 + 0xc);
  uVar5 = (uint)param_4;
  if ((int)uVar5 <= (int)uVar1) {
    if ((float)(uVar7 >> 0x20) <= 0.0) {
      uVar7 = (ulonglong)uVar1;
    }
    if (uVar1 != uVar5) {
      uVar7 = (ulonglong)uVar1;
    }
    uVar5 = (uint)uVar7;
  }
  param_5 = param_5 >> 0x20;
  fVar16 = (float)(uVar7 >> 0x20);
  auVar14 = roundps(unaff_XMM10,ZEXT416((uint)fVar16),1);
  fVar9 = (float)((double)param_3 -
                 ((double)(iVar4 * param_5) + (double)((ulonglong)dVar11 & 0x8000000000000000)) /
                 dVar2);
  fVar16 = (fVar16 - auVar14._0_4_) + 0.5 + -0.5;
  auVar13 = ZEXT416((uint)fVar16);
  if (0.99999994 <= fVar16) {
    auVar13 = ZEXT416(0x3f7fffff);
  }
  if (auVar13._0_4_ <= 0.0) {
    auVar3._12_4_ = 0;
    auVar3._0_12_ = auVar13._4_12_;
    auVar13 = auVar3 << 0x20;
  }
  if (ABS(*(float *)(param_2 + 0x14)) <= 1e-08) {
    dVar8 = 1.0;
  }
  else {
    dVar8 = (double)*(float *)(param_2 + 0x14);
  }
  dVar8 = dVar8 * ((double)auVar13._0_4_ + (double)(int)((uVar5 - uVar1) + (int)auVar14._0_4_));
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar8;
  auVar14 = roundpd(auVar14,auVar14,1);
  dVar17 = auVar14._0_8_;
  dVar8 = dVar8 - dVar17;
  if (2147483647.0 <= dVar17) {
    dVar17 = 2147483647.0;
  }
  if (dVar17 <= -2147483648.0) {
    dVar17 = -2147483648.0;
  }
  fVar16 = (float)dVar8;
  if (0.99999994 <= fVar16) {
    fVar16 = 0.99999994;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  fVar16 = fVar16 + 0.5 + -0.5;
  if (0.99999994 <= fVar16) {
    fVar16 = 0.99999994;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (0.0 < fVar9) {
    dVar8 = ((double)param_3 * dVar2) / dVar11;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = dVar8;
    auVar14 = roundpd(auVar13,auVar13,1);
    dVar12 = auVar14._0_8_;
    dVar8 = dVar8 - dVar12;
    iVar6 = (int)dVar8;
    fVar10 = (float)dVar8 - (float)iVar6;
    fVar15 = fVar10;
    if (0.99999994 <= fVar10) {
      fVar15 = 0.99999994;
    }
    fVar15 = (float)(~-(uint)(0.0 < fVar10) & (uint)fVar10 | (uint)fVar15 & -(uint)(0.0 < fVar10)) +
             0.5 + -0.5;
    if (2147483647.0 <= dVar12) {
      dVar12 = 2147483647.0;
    }
    if (dVar12 <= -2147483648.0) {
      dVar12 = -2147483648.0;
    }
    if (0.99999994 <= fVar15) {
      fVar15 = 0.99999994;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    if (((int)(fVar15 + 0.5) + (int)dVar12 + iVar6 + 1 < (int)((iVar4 + param_1[1]) - uVar1)) ||
       (0.0001 < ABS((float)((double)(float)(((double)((int)dVar17 * param_5) +
                                             (double)fVar16 * dVar11) / dVar2) +
                            ((double)(*(int *)(param_2 + 8) * param_5) +
                            (double)((ulonglong)dVar11 & 0x8000000000000000)) / dVar2) - fVar9))) {
      FUN_1447c7e44();
    }
  }
  return;
}



// FUNCTION 1475ab7c6 FUN_1475ab7c6 body=110 status=ok
// SIG undefined FUN_1475ab7c6(void)

undefined8 * FUN_1475ab7c6(undefined8 *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14a4abc80;
  FUN_1475ab834(param_1 + 4,param_2 + 0x170);
  uVar2 = *(uint *)(param_3 + 0x108) & 1;
  uVar1 = *(uint *)(param_1 + 0x23);
  *(uint *)(param_1 + 0x23) = uVar1 & 0xfffffffe | uVar2;
  *(uint *)(param_1 + 0x23) = uVar1 & 0xfffffffc | uVar2 | *(uint *)(param_3 + 0x108) & 2;
  return param_1;
}



// FUNCTION 1475ab834 FUN_1475ab834 body=282 status=ok
// SIG undefined FUN_1475ab834(void)

undefined8 * FUN_1475ab834(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  FUN_1475affea();
  *param_1 = &PTR_FUN_14a4abcd0;
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0x58);
  _Src = *(void **)(param_2 + 0x50);
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_147539e5c(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],_Src,(longlong)iVar1 << 2);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(int *)(param_1 + 0xd) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1475b0d50(param_1 + 0xc,iVar1,0);
    FUN_1475b0dc3(param_1[0xc],uVar2,iVar1);
  }
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  return param_1;
}



// FUNCTION 1475ab94e FUN_1475ab94e body=1758 status=ok
// SIG undefined FUN_1475ab94e(void)

/* WARNING: Removing unreachable block (ram,0x0001475abbea) */
/* WARNING: Removing unreachable block (ram,0x0001475abd3f) */
/* WARNING: Removing unreachable block (ram,0x0001475abbfd) */
/* WARNING: Removing unreachable block (ram,0x0001475abd52) */

void FUN_1475ab94e(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  float fVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined ******ppppppuVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_1a8 [44];
  undefined4 local_17c;
  longlong local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  char local_160;
  longlong local_158;
  longlong lStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  longlong local_130;
  longlong lStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  longlong local_110;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined5 local_c0;
  undefined3 uStack_bb;
  undefined5 uStack_b8;
  undefined *****local_b0;
  longlong lStack_a8;
  int local_a0;
  undefined4 uStack_9c;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  byte local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((*(int *)(param_3 + 0x70) != 0) && ((*(byte *)(param_3 + 0x7c) & 2) == 0)) {
    iVar3 = *(int *)(param_3 + 0x20);
    if (iVar3 == 1) {
      uVar9 = *(uint *)(param_1 + 0x118) & 2;
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x118) & 1;
    }
    if (uVar9 != 0) {
      local_178 = 0;
      uStack_170 = 0;
      uVar9 = *(uint *)(param_1 + 0x78);
      uVar12 = (ulonglong)uVar9;
      lVar15 = *(longlong *)(param_1 + 0x70);
      lVar16 = *(longlong *)(param_1 + 0x80);
      FUN_14087ad3e(param_3 + 0x28,&local_158);
      uVar8 = *(uint *)(param_3 + 0x24);
      if (SBORROW4(0,uVar8)) {
        puVar10 = (uint *)(param_3 + 4);
        if (*(int *)(param_3 + 0x20) == 0) {
          puVar10 = (uint *)(param_3 + 0x10);
        }
        uVar8 = *puVar10;
        uVar11 = (ulonglong)puVar10[1] << 0x20;
      }
      else {
        uVar11 = 0;
      }
      FUN_1405bacee(&local_158,&local_168,uVar8 | uVar11);
      if (CONCAT44(uStack_144,local_148) != 0) {
        FUN_1400020a8();
      }
      lVar14 = *(longlong *)(param_3 + 0x18);
      if (local_160 == '\0') {
        local_168 = 0;
      }
      fVar4 = ((float)((lVar14 >> 0x20) * (longlong)(int)local_168) +
              (float)(int)((ulonglong)lVar14 >> 0x20) * (float)((ulonglong)local_168 >> 0x20)) /
              (float)(int)lVar14;
      if (iVar3 == 1) {
        if (0 < (int)uVar9) {
          uVar11 = uVar12 + 1;
          plVar1 = (longlong *)(lVar16 + uVar12 * 0x48);
          do {
            local_17c = *(undefined4 *)(lVar15 + -8 + uVar11 * 4);
            cVar7 = FUN_1400a246c(param_4,&local_17c);
            if (cVar7 != '\0') {
              local_158 = plVar1[-9];
              FUN_1475b0e08(&lStack_150,plVar1 + -8);
              uVar12 = uStack_170;
              local_110 = CONCAT44(local_110._4_4_,fVar4);
              lVar16 = (longlong)(int)uStack_170;
              uVar9 = (int)uStack_170 + 1;
              uStack_170 = CONCAT44(uStack_170._4_4_,uVar9);
              if (uStack_170._4_4_ < uVar9) {
                FUN_1475b5c6a(&local_178,uVar12 & 0xffffffff);
              }
              lVar16 = lVar16 * 0x50;
              *(longlong *)(local_178 + lVar16) = local_158;
              plVar2 = (longlong *)(local_178 + 8 + lVar16);
              *plVar2 = lStack_150;
              plVar2[1] = CONCAT44(uStack_144,local_148);
              *(undefined8 *)(local_178 + 0x18 + lVar16) = 0;
              *(ulonglong *)(local_178 + 0x18 + lVar16) = CONCAT44(uStack_13c,uStack_140);
              uStack_140 = 0;
              uStack_13c = 0;
              *(undefined4 *)(local_178 + 0x20 + lVar16) = uStack_138;
              *(undefined4 *)(local_178 + 0x24 + lVar16) = uStack_134;
              uStack_138 = 0;
              uStack_134 = 0;
              *(undefined4 *)(local_178 + 0x30 + lVar16) = (undefined4)lStack_128;
              *(longlong *)(local_178 + 0x28 + lVar16) = local_130;
              *(undefined8 *)(local_178 + 0x38 + lVar16) = 0;
              *(longlong *)(local_178 + 0x38 + lVar16) = local_120;
              local_120 = 0;
              *(undefined4 *)(local_178 + 0x40 + lVar16) = (undefined4)uStack_118;
              *(undefined4 *)(local_178 + 0x44 + lVar16) = uStack_118._4_4_;
              uStack_118 = 0;
              *(undefined4 *)(local_178 + 0x48 + lVar16) = (undefined4)local_110;
            }
            uVar11 = uVar11 - 1;
            plVar1 = plVar1 + -9;
          } while (1 < uVar11);
        }
      }
      else if (0 < (int)uVar9) {
        lVar16 = lVar16 + 8;
        uVar11 = 0;
        do {
          local_17c = *(undefined4 *)(lVar15 + uVar11 * 4);
          cVar7 = FUN_1400a246c(param_4,&local_17c);
          if (cVar7 != '\0') {
            local_158 = *(longlong *)(lVar16 + -8);
            FUN_1475b0e08(&lStack_150,lVar16);
            uVar5 = uStack_170;
            local_110 = CONCAT44(local_110._4_4_,fVar4);
            lVar14 = (longlong)(int)uStack_170;
            uVar9 = (int)uStack_170 + 1;
            uStack_170 = CONCAT44(uStack_170._4_4_,uVar9);
            if (uStack_170._4_4_ < uVar9) {
              FUN_1475b5c6a(&local_178,uVar5 & 0xffffffff);
            }
            lVar14 = lVar14 * 0x50;
            *(longlong *)(local_178 + lVar14) = local_158;
            plVar1 = (longlong *)(local_178 + 8 + lVar14);
            *plVar1 = lStack_150;
            plVar1[1] = CONCAT44(uStack_144,local_148);
            *(undefined8 *)(local_178 + 0x18 + lVar14) = 0;
            *(ulonglong *)(local_178 + 0x18 + lVar14) = CONCAT44(uStack_13c,uStack_140);
            uStack_140 = 0;
            uStack_13c = 0;
            *(undefined4 *)(local_178 + 0x20 + lVar14) = uStack_138;
            *(undefined4 *)(local_178 + 0x24 + lVar14) = uStack_134;
            uStack_138 = 0;
            uStack_134 = 0;
            *(undefined4 *)(local_178 + 0x30 + lVar14) = (undefined4)lStack_128;
            *(longlong *)(local_178 + 0x28 + lVar14) = local_130;
            *(undefined8 *)(local_178 + 0x38 + lVar14) = 0;
            *(longlong *)(local_178 + 0x38 + lVar14) = local_120;
            local_120 = 0;
            *(undefined4 *)(local_178 + 0x40 + lVar14) = (undefined4)uStack_118;
            *(undefined4 *)(local_178 + 0x44 + lVar14) = uStack_118._4_4_;
            uStack_118 = 0;
            *(undefined4 *)(local_178 + 0x48 + lVar14) = (undefined4)local_110;
          }
          uVar11 = uVar11 + 1;
          lVar16 = lVar16 + 0x48;
        } while (uVar12 != uVar11);
      }
      lVar15 = local_178;
      iVar3 = (int)uStack_170;
      uVar12 = 0;
      if ((int)uStack_170 != 0) {
        uVar6 = uStack_170._4_4_;
        local_178 = 0;
        uStack_170 = 0;
        FUN_1475b5c2c(0,0);
        local_148 = (undefined4)param_6[0x24];
        local_158 = param_6[0x22];
        lStack_150 = param_6[0x23];
        uStack_144 = (undefined4)*(undefined8 *)((longlong)param_6 + 0x124);
        uStack_140 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_6 + 0x124) >> 0x20);
        uStack_13c = (undefined4)*(undefined8 *)((longlong)param_6 + 300);
        uStack_138 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_6 + 300) >> 0x20);
        local_110 = param_6[0x2b];
        local_130 = param_6[0x27];
        lStack_128 = param_6[0x28];
        local_120 = param_6[0x29];
        uStack_118 = param_6[0x2a];
        FUN_144a3f8b4(&local_108,param_6 + 0x2c);
        FUN_144b1f2a6(&local_e8,param_6 + 0x30);
        local_c0 = (undefined5)param_6[0x35];
        uStack_bb = (undefined3)*(undefined8 *)((longlong)param_6 + 0x1ad);
        uStack_b8 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_6 + 0x1ad) >> 0x18);
        local_70 = local_70 | 3;
        local_b0 = (undefined *****)&PTR_FUN_14a4aaad0;
        lStack_a8 = lVar15;
        local_a0 = iVar3;
        uStack_9c = uVar6;
        iVar3 = (int)param_6[1];
        *(uint *)(param_6 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_6 + 0xc) < iVar3 + 1U) {
          FUN_140ac5684(param_6,iVar3);
        }
        lVar15 = *param_6;
        plVar1 = (longlong *)(lVar15 + (longlong)iVar3 * 0xf0);
        *(undefined4 *)(plVar1 + 4) = uStack_138;
        plVar1[2] = CONCAT44(uStack_144,local_148);
        plVar1[3] = CONCAT44(uStack_13c,uStack_140);
        *plVar1 = local_158;
        plVar1[1] = lStack_150;
        plVar1[9] = local_110;
        *(undefined4 *)(plVar1 + 7) = (undefined4)local_120;
        *(undefined4 *)((longlong)plVar1 + 0x3c) = local_120._4_4_;
        *(undefined4 *)(plVar1 + 8) = (undefined4)uStack_118;
        *(undefined4 *)((longlong)plVar1 + 0x44) = uStack_118._4_4_;
        plVar1[5] = local_130;
        plVar1[6] = lStack_128;
        plVar1[10] = local_108;
        *(undefined4 *)(plVar1 + 0xb) = local_100;
        plVar1[0xc] = 0;
        plVar1[0xc] = local_f8;
        local_f8 = 0;
        *(undefined4 *)(plVar1 + 0xd) = (undefined4)local_f0;
        *(undefined4 *)((longlong)plVar1 + 0x6c) = local_f0._4_4_;
        local_f0 = 0;
        plVar1[0xe] = 0;
        plVar1[0xe] = local_e8;
        local_e8 = 0;
        *(undefined4 *)(plVar1 + 0xf) = (undefined4)local_e0;
        *(undefined4 *)((longlong)plVar1 + 0x7c) = local_e0._4_4_;
        local_e0 = 0;
        *(undefined1 *)(plVar1 + 0x10) = local_d8;
        plVar1[0x11] = 0;
        plVar1[0x11] = local_d0;
        local_d0 = 0;
        *(undefined4 *)(plVar1 + 0x12) = (undefined4)local_c8;
        *(undefined4 *)((longlong)plVar1 + 0x94) = local_c8._4_4_;
        local_c8 = 0;
        *(ulonglong *)((longlong)plVar1 + 0x9d) = CONCAT53(uStack_b8,uStack_bb);
        plVar1[0x13] = CONCAT35(uStack_bb,local_c0);
        *(byte *)(plVar1 + 0x1d) = *(byte *)(plVar1 + 0x1d) & 0xfc | 2;
        FUN_144adeb48(plVar1 + 0x15);
        if ((local_70 & 1) != 0) {
          lVar15 = lVar15 + (longlong)iVar3 * 0xf0;
          *(byte *)(lVar15 + 0xe8) = *(byte *)(lVar15 + 0xe8) | 1;
          *(byte *)(lVar15 + 0xe8) = *(byte *)(lVar15 + 0xe8) & 0xfd | local_70 & 2;
          plVar1[0x1b] = local_80;
          plVar1[0x1c] = lStack_78;
          plVar1[0x19] = local_90;
          plVar1[0x1a] = lStack_88;
          plVar1[0x17] = CONCAT44(uStack_9c,local_a0);
          plVar1[0x18] = lStack_98;
          plVar1[0x15] = (longlong)local_b0;
          plVar1[0x16] = lStack_a8;
          local_70 = local_70 & 0xfe;
        }
        if ((local_70 & 1) != 0) {
          ppppppuVar13 = &local_b0;
          if ((local_70 & 2) == 0) {
            ppppppuVar13 = (undefined ******)local_b0;
          }
          local_70 = local_70 & 0xfe;
          (*(code *)**ppppppuVar13)(ppppppuVar13,0);
          if ((local_70 & 2) == 0) {
            FUN_1400020a8(local_b0);
          }
        }
        FUN_144adeafa(&local_130);
        FUN_1475b5c2c(0,0);
        uVar12 = uStack_170 & 0xffffffff;
      }
      FUN_1475b5c2c(local_178,uVar12);
      if (local_178 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ac02e FUN_1475ac02e body=506 status=ok
// SIG undefined FUN_1475ac02e(void)

undefined8 * FUN_1475ac02e(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14a4abd60;
  puVar3 = (undefined8 *)FUN_1475ccc46(param_2);
  param_1[4] = 0;
  iVar1 = *(int *)(puVar3 + 1);
  uVar2 = *puVar3;
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1475b137c(param_1 + 4,iVar1,0);
    FUN_1475b13ee(param_1[4],uVar2,iVar1);
  }
  puVar3 = (undefined8 *)FUN_1475ccc4e(param_2);
  param_1[6] = 0;
  iVar1 = *(int *)(puVar3 + 1);
  uVar2 = *puVar3;
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1475b143a(param_1 + 6,iVar1,0);
    FUN_1475b14ac(param_1[6],uVar2,iVar1);
  }
  puVar3 = (undefined8 *)FUN_1475ccc56(param_2);
  param_1[8] = 0;
  iVar1 = *(int *)(puVar3 + 1);
  uVar2 = *puVar3;
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1475b1624(param_1 + 8,iVar1,0);
    FUN_1475b1696(param_1[8],uVar2,iVar1);
  }
  puVar3 = (undefined8 *)FUN_1475ccc5e(param_2);
  param_1[10] = 0;
  iVar1 = *(int *)(puVar3 + 1);
  uVar2 = *puVar3;
  *(int *)(param_1 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1475b1704(param_1 + 10,iVar1,0);
    FUN_1475b177a(param_1[10],uVar2,iVar1);
  }
  puVar3 = (undefined8 *)FUN_1475ccc66(param_2);
  param_1[0xc] = 0;
  iVar1 = *(int *)(puVar3 + 1);
  uVar2 = *puVar3;
  *(int *)(param_1 + 0xd) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1475b1806(param_1 + 0xc,iVar1,0);
    FUN_1475b187c(param_1[0xc],uVar2,iVar1);
  }
  puVar3 = (undefined8 *)FUN_1475ccc6e(param_2);
  param_1[0xe] = 0;
  iVar1 = *(int *)(puVar3 + 1);
  uVar2 = *puVar3;
  *(int *)(param_1 + 0xf) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1475b1988(param_1 + 0xe,iVar1,0);
    FUN_1475b19fa(param_1[0xe],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1475ac228 FUN_1475ac228 body=2153 status=ok
// SIG undefined FUN_1475ac228(void)

void FUN_1475ac228(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined1 uVar19;
  char cVar20;
  char cVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  uint *puVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  undefined1 auStack_178 [47];
  char local_149;
  ulonglong local_148;
  ulonglong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  float local_114;
  float local_110;
  float local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar22 = *(uint *)(param_2 + 0x24);
  if (SBORROW4(0,uVar22)) {
    puVar25 = (uint *)(param_2 + 4);
    if (*(int *)(param_2 + 0x20) == 0) {
      puVar25 = (uint *)(param_2 + 0x10);
    }
    uVar22 = *puVar25;
    local_148 = (ulonglong)puVar25[1] << 0x20;
  }
  else {
    local_148 = 0;
  }
  local_140 = (ulonglong)uVar22;
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    uVar29 = local_148 | local_140;
    lVar28 = (longlong)*(int *)(param_1 + 0x28) * 0x118;
    lVar26 = *(longlong *)(param_1 + 0x20) + 8;
    do {
      local_f8 = (undefined1 *)((ulonglong)local_f8 & 0xffffffff00000000);
      cVar15 = FUN_1400f0204(lVar26,0,uVar29,&local_f8);
      if (cVar15 != '\0') {
        iVar2 = *(int *)(param_3 + 0x20);
        *(uint *)(param_3 + 0x20) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x24) < iVar2 + 1U) {
          FUN_1475b5cfe(param_3,iVar2);
        }
        lVar27 = *(longlong *)(param_3 + 0x18);
        if (*(longlong *)(param_3 + 0x18) == 0) {
          lVar27 = param_3;
        }
        *(undefined8 *)(lVar27 + (longlong)iVar2 * 0xc) = *(undefined8 *)(lVar26 + -8);
        *(float *)(lVar27 + 8 + (longlong)iVar2 * 0xc) = (float)local_f8;
      }
      lVar26 = lVar26 + 0x118;
      lVar28 = lVar28 + -0x118;
    } while (lVar28 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    uVar29 = local_148 | local_140;
    lVar28 = (longlong)*(int *)(param_1 + 0x38) * 0x110;
    lVar26 = *(longlong *)(param_1 + 0x30) + 8;
    do {
      local_f8 = (undefined1 *)((ulonglong)local_f8 & 0xffffffffffffff00);
      cVar15 = FUN_140aef73c(lVar26,uVar29,&local_f8);
      if (cVar15 != '\0') {
        iVar2 = *(int *)(param_3 + 0x48);
        *(uint *)(param_3 + 0x48) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x4c) < iVar2 + 1U) {
          FUN_1475b5e16(param_3 + 0x28,iVar2);
        }
        lVar27 = *(longlong *)(param_3 + 0x40);
        if (*(longlong *)(param_3 + 0x40) == 0) {
          lVar27 = param_3 + 0x28;
        }
        *(undefined8 *)(lVar27 + (longlong)iVar2 * 0xc) = *(undefined8 *)(lVar26 + -8);
        *(undefined1 *)(lVar27 + 8 + (longlong)iVar2 * 0xc) = (undefined1)local_f8;
      }
      lVar26 = lVar26 + 0x110;
      lVar28 = lVar28 + -0x110;
    } while (lVar28 != 0);
  }
  local_138 = param_1;
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    uVar29 = local_148 | local_140;
    lVar28 = (longlong)*(int *)(param_1 + 0x48) * 0x228;
    lVar26 = *(longlong *)(param_1 + 0x40) + 0x118;
    do {
      local_f8 = (undefined1 *)0x0;
      cVar15 = FUN_1400f0204(lVar26 + -0x110,0,uVar29,&local_f8);
      cVar16 = FUN_1400f0204(lVar26,0,uVar29,(longlong)&local_f8 + 4);
      if ((cVar15 != '\0') || (cVar16 != '\0')) {
        dVar4 = (double)local_f8._4_4_;
        dVar5 = (double)(float)local_f8;
        iVar2 = *(int *)(param_3 + 0x88);
        lVar27 = (longlong)iVar2;
        *(uint *)(param_3 + 0x88) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x8c) < iVar2 + 1U) {
          FUN_1475b5f2e(param_3 + 0x50,iVar2);
        }
        lVar24 = *(longlong *)(param_3 + 0x80);
        if (*(longlong *)(param_3 + 0x80) == 0) {
          lVar24 = param_3 + 0x50;
        }
        *(undefined8 *)(lVar24 + lVar27 * 0x18) = *(undefined8 *)(lVar26 + -0x118);
        *(double *)(lVar24 + 8 + lVar27 * 0x18) = dVar5;
        *(double *)(lVar24 + 0x10 + lVar27 * 0x18) = dVar4;
      }
      lVar26 = lVar26 + 0x228;
      lVar28 = lVar28 + -0x228;
    } while (lVar28 != 0);
  }
  local_130 = param_3;
  if ((longlong)*(int *)(local_138 + 0x58) != 0) {
    uVar29 = local_148 | local_140;
    lVar28 = (longlong)*(int *)(local_138 + 0x58) * 0x338;
    lVar26 = *(longlong *)(local_138 + 0x50) + 0x118;
    do {
      local_f8 = (undefined1 *)0x0;
      uStack_f0 = (undefined1 *)((ulonglong)uStack_f0 & 0xffffffff00000000);
      cVar15 = FUN_1400f0204(lVar26 + -0x110,0,uVar29,&local_f8);
      cVar16 = FUN_1400f0204(lVar26,0,uVar29,(longlong)&local_f8 + 4);
      cVar17 = FUN_1400f0204(lVar26 + 0x110,0,uVar29,&uStack_f0);
      lVar27 = local_130;
      if (((cVar15 != '\0') || (cVar16 != '\0')) || (cVar17 != '\0')) {
        dVar4 = (double)(float)uStack_f0;
        dVar5 = (double)local_f8._4_4_;
        dVar6 = (double)(float)local_f8;
        iVar2 = *(int *)(local_130 + 0xd8);
        uVar22 = iVar2 + 1;
        *(uint *)(local_130 + 0xd8) = uVar22;
        if (*(uint *)(local_130 + 0xdc) < uVar22) {
          FUN_1475b6046(param_3 + 0x90);
        }
        lVar24 = *(longlong *)(lVar27 + 0xd0);
        if (*(longlong *)(lVar27 + 0xd0) == 0) {
          lVar24 = param_3 + 0x90;
        }
        lVar27 = (longlong)iVar2 * 0x20;
        *(undefined8 *)(lVar24 + lVar27) = *(undefined8 *)(lVar26 + -0x118);
        *(double *)(lVar24 + 8 + lVar27) = dVar6;
        *(double *)(lVar24 + 0x10 + lVar27) = dVar5;
        *(double *)(lVar24 + 0x18 + lVar27) = dVar4;
      }
      lVar26 = lVar26 + 0x338;
      lVar28 = lVar28 + -0x338;
    } while (lVar28 != 0);
  }
  if ((longlong)*(int *)(local_138 + 0x68) != 0) {
    uVar29 = local_148 | local_140;
    lVar26 = local_130 + 0xe0;
    lVar28 = (longlong)*(int *)(local_138 + 0x68) * 0x448;
    lVar27 = *(longlong *)(local_138 + 0x60) + 0x338;
    do {
      local_108 = &DAT_3f8000003f800000;
      uStack_100 = &DAT_3f8000003f800000;
      cVar15 = FUN_1400f0204(lVar27 + -0x330,0,uVar29,&local_108);
      cVar16 = FUN_1400f0204(lVar27 + -0x220,0,uVar29,(longlong)&local_108 + 4);
      cVar17 = FUN_1400f0204(lVar27 + -0x110,0,uVar29,&uStack_100);
      cVar18 = FUN_1400f0204(lVar27,0,uVar29,(longlong)&uStack_100 + 4);
      lVar24 = local_130;
      if (((cVar15 != '\0') || (cVar16 != '\0')) || ((cVar17 != '\0' || (cVar18 != '\0')))) {
        iVar2 = *(int *)(local_130 + 0x118);
        *(uint *)(local_130 + 0x118) = iVar2 + 1U;
        if (*(uint *)(local_130 + 0x11c) < iVar2 + 1U) {
          FUN_1475b6148(lVar26,iVar2);
        }
        lVar23 = *(longlong *)(lVar24 + 0x110);
        if (*(longlong *)(lVar24 + 0x110) == 0) {
          lVar23 = lVar26;
        }
        local_f8 = local_108;
        puVar13 = local_f8;
        uStack_f0 = uStack_100;
        puVar14 = uStack_f0;
        *(undefined8 *)(lVar23 + (longlong)iVar2 * 0x18) = *(undefined8 *)(lVar27 + -0x338);
        local_f8._0_4_ = SUB84(local_108,0);
        local_f8._4_4_ = (float)((ulonglong)local_108 >> 0x20);
        uStack_f0._0_4_ = SUB84(uStack_100,0);
        uStack_f0._4_4_ = (undefined4)((ulonglong)uStack_100 >> 0x20);
        puVar1 = (undefined4 *)(lVar23 + 8 + (longlong)iVar2 * 0x18);
        *puVar1 = (float)local_f8;
        puVar1[1] = local_f8._4_4_;
        puVar1[2] = (float)uStack_f0;
        puVar1[3] = uStack_f0._4_4_;
        local_f8 = puVar13;
        uStack_f0 = puVar14;
      }
      lVar27 = lVar27 + 0x448;
      lVar28 = lVar28 + -0x448;
    } while (lVar28 != 0);
  }
  if ((longlong)*(int *)(local_138 + 0x78) != 0) {
    lVar26 = *(longlong *)(local_138 + 0x70);
    uVar29 = local_148 | local_140;
    local_128 = local_130 + 0x120;
    local_120 = (longlong)*(int *)(local_138 + 0x78) * 0x998;
    lVar28 = 0;
    local_148 = uVar29;
    do {
      uStack_100 = (undefined1 *)CONCAT44(uStack_100._4_4_,DAT_14c846358);
      local_108 = DAT_14c846350;
      uVar19 = FUN_1400f0204(lVar28 + 8 + lVar26,0,uVar29,&local_f8);
      local_138 = CONCAT71(local_138._1_7_,uVar19);
      uVar19 = FUN_1400f0204(lVar28 + 0x118 + lVar26,0,uVar29,(longlong)&local_f8 + 4);
      local_140 = CONCAT71(local_140._1_7_,uVar19);
      local_149 = FUN_1400f0204(lVar28 + 0x228 + lVar26,0,uVar29,&uStack_f0);
      cVar15 = FUN_1400f0204(lVar28 + 0x338 + lVar26,0,uVar29,&local_10c);
      cVar16 = FUN_1400f0204(lVar28 + 0x448 + lVar26,0,uVar29,&local_114);
      cVar17 = FUN_1400f0204(lVar28 + 0x558 + lVar26,0,uVar29,&local_110);
      cVar18 = FUN_1400f0204(lVar28 + 0x668 + lVar26,0,uVar29,&local_108);
      cVar20 = FUN_1400f0204(lVar28 + 0x778 + lVar26,0,uVar29,(longlong)&local_108 + 4);
      cVar21 = FUN_1400f0204(lVar28 + 0x888 + lVar26,0,uVar29,&uStack_100);
      lVar27 = local_130;
      if ((((char)local_138 != '\0') || ((char)local_140 != '\0')) ||
         (((local_149 != '\0' ||
           ((((cVar15 != '\0' || (cVar16 != '\0')) || (cVar17 != '\0')) ||
            ((cVar18 != '\0' || (cVar20 != '\0')))))) || (cVar21 != '\0')))) {
        dVar4 = (double)(float)uStack_100;
        dVar5 = (double)local_108._4_4_;
        dVar6 = (double)(float)local_108;
        dVar7 = (double)local_10c;
        dVar8 = (double)local_110;
        dVar9 = (double)local_114;
        dVar10 = (double)(float)uStack_f0;
        dVar11 = (double)local_f8._4_4_;
        dVar12 = (double)(float)local_f8;
        uVar3 = *(undefined8 *)(lVar26 + lVar28);
        iVar2 = *(int *)(local_130 + 0x1c8);
        uVar22 = iVar2 + 1;
        *(uint *)(local_130 + 0x1c8) = uVar22;
        if (*(uint *)(local_130 + 0x1cc) < uVar22) {
          FUN_1475b6260(local_128);
        }
        lVar24 = *(longlong *)(lVar27 + 0x1c0);
        if (*(longlong *)(lVar27 + 0x1c0) == 0) {
          lVar24 = local_128;
        }
        lVar27 = (longlong)iVar2 * 0x50;
        *(undefined8 *)(lVar24 + lVar27) = uVar3;
        *(double *)(lVar24 + 8 + lVar27) = dVar12;
        *(double *)(lVar24 + 0x10 + lVar27) = dVar11;
        *(double *)(lVar24 + 0x18 + lVar27) = dVar10;
        *(double *)(lVar24 + 0x20 + lVar27) = dVar9;
        *(double *)(lVar24 + 0x28 + lVar27) = dVar8;
        *(double *)(lVar24 + 0x30 + lVar27) = dVar7;
        *(double *)(lVar24 + 0x38 + lVar27) = dVar6;
        *(double *)(lVar24 + 0x40 + lVar27) = dVar5;
        *(double *)(lVar24 + 0x48 + lVar27) = dVar4;
      }
      lVar28 = lVar28 + 0x998;
    } while (local_120 != lVar28);
  }
  if ((local_e0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475aca92 FUN_1475aca92 body=48 status=ok
// SIG undefined FUN_1475aca92(void)

longlong FUN_1475aca92(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_1458c55b0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475acadc FUN_1475acadc body=22 status=ok
// SIG undefined FUN_1475acadc(void)

undefined8 FUN_1475acadc(undefined8 param_1,undefined8 param_2)

{
  FUN_1475cf1da();
  return param_2;
}



// FUNCTION 1475acaf2 FUN_1475acaf2 body=62 status=ok
// SIG undefined FUN_1475acaf2(void)

void FUN_1475acaf2(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_1475cf63c();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475acb32 FUN_1475acb32 body=62 status=ok
// SIG undefined FUN_1475acb32(void)

void FUN_1475acb32(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_1475cf4d4();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475acb78 FUN_1475acb78 body=22 status=ok
// SIG undefined FUN_1475acb78(void)

undefined8 FUN_1475acb78(undefined8 param_1,undefined8 param_2)

{
  FUN_1475cf108();
  return param_2;
}



// FUNCTION 1475acb9a FUN_1475acb9a body=48 status=ok
// SIG undefined FUN_1475acb9a(void)

longlong FUN_1475acb9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_145850868(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475acbe2 FUN_1475acbe2 body=22 status=ok
// SIG undefined FUN_1475acbe2(void)

undefined8 FUN_1475acbe2(undefined8 param_1,undefined8 param_2)

{
  FUN_1476c1982();
  return param_2;
}



// FUNCTION 1475acc0a FUN_1475acc0a body=95 status=ok
// SIG undefined FUN_1475acc0a(void)

void FUN_1475acc0a(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1476c15d8(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475accba FUN_1475accba body=69 status=ok
// SIG undefined FUN_1475accba(void)

undefined8 *
FUN_1475accba(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_2 = 0;
  plVar3 = *(longlong **)(param_5 + 8);
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
  return param_2;
}



// FUNCTION 1475acd06 FUN_1475acd06 body=47 status=ok
// SIG undefined FUN_1475acd06(void)

longlong * FUN_1475acd06(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  *param_2 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_2;
}



// FUNCTION 1475acd3a FUN_1475acd3a body=47 status=ok
// SIG undefined FUN_1475acd3a(void)

longlong * FUN_1475acd3a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  *param_2 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_2;
}



// FUNCTION 1475acd8e FUN_1475acd8e body=115 status=ok
// SIG undefined FUN_1475acd8e(void)

longlong FUN_1475acd8e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 0x340))(param_1,&local_18);
  lVar1 = local_18;
  if ((((local_18 == 0) || (lVar2 = FUN_144a6c4d8(), lVar2 == 0)) ||
      (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    local_18 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_18;
}



// FUNCTION 1475ace0e FUN_1475ace0e body=80 status=ok
// SIG undefined FUN_1475ace0e(void)

longlong * FUN_1475ace0e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_140033559(".\\Runtime/MovieSceneTracks/Public/Bindings/MovieSceneSpawnableActorBinding.h",0x4e
                ,L"Pure virtual not implemented (%s)",
                L"UMovieSceneSpawnableActorBindingBase::GetActorClass");
  lVar1 = FUN_144a6c4d8();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 1475ace88 FUN_1475ace88 body=38 status=ok
// SIG undefined FUN_1475ace88(void)

undefined8 FUN_1475ace88(undefined8 param_1,int param_2)

{
  FUN_1404dbac8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475aceba FUN_1475aceba body=38 status=ok
// SIG undefined FUN_1475aceba(void)

undefined8 FUN_1475aceba(undefined8 param_1,int param_2)

{
  FUN_1404dbac8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475aceec FUN_1475aceec body=38 status=ok
// SIG undefined FUN_1475aceec(void)

undefined8 FUN_1475aceec(undefined8 param_1,int param_2)

{
  FUN_1475a9b08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475acf18 FUN_1475acf18 body=45 status=ok
// SIG undefined FUN_1475acf18(void)

longlong FUN_1475acf18(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_1475a9b08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475acf46 FUN_1475acf46 body=52 status=ok
// SIG undefined FUN_1475acf46(void)

undefined8 * FUN_1475acf46(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4ab760;
  FUN_1404dbc70(param_1 + 7);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475acf7a FUN_1475acf7a body=55 status=ok
// SIG undefined FUN_1475acf7a(void)

void FUN_1475acf7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab49b0 == 0) {
    uVar1 = FUN_140d2a6db();
    DAT_14cab49b0 = FUN_140002ddd(FUN_146345b9b,uVar1,L"MovieScene3DPathSectionTemplate");
  }
  return;
}



// FUNCTION 1475acfb2 FUN_1475acfb2 body=66 status=ok
// SIG undefined FUN_1475acfb2(void)

undefined8 * FUN_1475acfb2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4abba0;
  FUN_145bfd3a0(param_1 + 7);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475ad004 FUN_1475ad004 body=55 status=ok
// SIG undefined FUN_1475ad004(void)

void FUN_1475ad004(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab49c8 == 0) {
    uVar1 = FUN_140d2a6db();
    DAT_14cab49c8 = FUN_140002ddd(FUN_146345c31,uVar1,L"MovieSceneActorReferenceSectionTemplate");
  }
  return;
}



// FUNCTION 1475ad03c FUN_1475ad03c body=52 status=ok
// SIG undefined FUN_1475ad03c(void)

undefined8 * FUN_1475ad03c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4abc80;
  FUN_145c31fda(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475ad070 FUN_1475ad070 body=55 status=ok
// SIG undefined FUN_1475ad070(void)

void FUN_1475ad070(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab49f8 == 0) {
    uVar1 = FUN_140d2a6db();
    DAT_14cab49f8 = FUN_140002ddd(FUN_146345d5d,uVar1,L"MovieSceneEventSectionTemplate");
  }
  return;
}



// FUNCTION 1475ad0a8 FUN_1475ad0a8 body=38 status=ok
// SIG undefined FUN_1475ad0a8(void)

undefined8 FUN_1475ad0a8(undefined8 param_1,int param_2)

{
  FUN_1475b1abc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475ad0ce FUN_1475ad0ce body=54 status=ok
// SIG undefined FUN_1475ad0ce(void)

void FUN_1475ad0ce(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1406ed278(param_2 + 1);
  param_2[0x23] = 0;
  *(undefined1 *)(param_2 + 0x24) = 2;
  *(undefined4 *)((longlong)param_2 + 0x124) = 0xffffffff;
  return;
}



// FUNCTION 1475ad104 FUN_1475ad104 body=54 status=ok
// SIG undefined FUN_1475ad104(void)

void FUN_1475ad104(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1406ed278(param_2 + 1);
  param_2[0x23] = 0;
  *(undefined1 *)(param_2 + 0x24) = 2;
  *(undefined4 *)((longlong)param_2 + 0x124) = 0xffffffff;
  return;
}



// FUNCTION 1475ad15a FUN_1475ad15a body=105 status=ok
// SIG undefined FUN_1475ad15a(void)

undefined8 FUN_1475ad15a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 8 + lVar6;
      *(undefined8 *)(lVar2 + -8) = *puVar1;
      FUN_14753be88(lVar2,puVar1 + 1);
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x11c);
      uVar4 = *(undefined4 *)(puVar1 + 0x24);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x124);
      *(undefined4 *)(lVar2 + 0x110) = *(undefined4 *)(puVar1 + 0x23);
      *(undefined4 *)(lVar2 + 0x114) = uVar3;
      *(undefined4 *)(lVar2 + 0x118) = uVar4;
      *(undefined4 *)(lVar2 + 0x11c) = uVar5;
      lVar6 = lVar6 + 0x128;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1475ad1ec FUN_1475ad1ec body=59 status=ok
// SIG undefined FUN_1475ad1ec(void)

undefined8 FUN_1475ad1ec(longlong *param_1)

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



// FUNCTION 1475ad238 FUN_1475ad238 body=39 status=ok
// SIG undefined FUN_1475ad238(void)

void FUN_1475ad238(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    FUN_1404dbc70(param_2 + 8);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 1475ad2b0 FUN_1475ad2b0 body=50 status=ok
// SIG undefined FUN_1475ad2b0(void)

void FUN_1475ad2b0(undefined8 param_1,longlong param_2)

{
  FUN_1475ad47e(param_2);
  *(undefined8 *)(param_2 + 0x448) = 0;
  *(undefined1 *)(param_2 + 0x450) = 2;
  *(undefined4 *)(param_2 + 0x454) = 0xffffffff;
  return;
}



// FUNCTION 1475ad2e2 FUN_1475ad2e2 body=50 status=ok
// SIG undefined FUN_1475ad2e2(void)

void FUN_1475ad2e2(undefined8 param_1,longlong param_2)

{
  FUN_1475ad47e(param_2);
  *(undefined8 *)(param_2 + 0x448) = 0;
  *(undefined1 *)(param_2 + 0x450) = 2;
  *(undefined4 *)(param_2 + 0x454) = 0xffffffff;
  return;
}



// FUNCTION 1475ad314 FUN_1475ad314 body=61 status=ok
// SIG undefined FUN_1475ad314(void)

void FUN_1475ad314(undefined8 param_1,longlong param_2)

{
  FUN_1404dbc70(param_2 + 0x338);
  FUN_1404dbc70(param_2 + 0x228);
  FUN_1404dbc70(param_2 + 0x118);
  FUN_1404dbc70(param_2 + 8);
  return;
}



// FUNCTION 1475ad368 FUN_1475ad368 body=76 status=ok
// SIG undefined FUN_1475ad368(void)

undefined1 FUN_1475ad368(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475ad4c4(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x44c);
    uVar2 = *(undefined4 *)(param_3 + 0x450);
    uVar3 = *(undefined4 *)(param_3 + 0x454);
    *(undefined4 *)(param_2 + 0x448) = *(undefined4 *)(param_3 + 0x448);
    *(undefined4 *)(param_2 + 0x44c) = uVar1;
    *(undefined4 *)(param_2 + 0x450) = uVar2;
    *(undefined4 *)(param_2 + 0x454) = uVar3;
    param_2 = param_2 + 0x458;
    param_3 = param_3 + 0x458;
  }
  return 1;
}



// FUNCTION 1475ad3dc FUN_1475ad3dc body=59 status=ok
// SIG undefined FUN_1475ad3dc(void)

undefined8 FUN_1475ad3dc(longlong *param_1)

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



// FUNCTION 1475ad47e FUN_1475ad47e body=69 status=ok
// SIG undefined FUN_1475ad47e(void)

undefined8 * FUN_1475ad47e(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_1406ed278(param_1 + 1);
  FUN_1406ed278(param_1 + 0x23);
  FUN_1406ed278(param_1 + 0x45);
  FUN_1406ed278(param_1 + 0x67);
  return param_1;
}



// FUNCTION 1475ad4c4 FUN_1475ad4c4 body=95 status=ok
// SIG undefined FUN_1475ad4c4(void)

undefined8 * FUN_1475ad4c4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_14753be88(param_1 + 1,param_2 + 1);
  FUN_14753be88(param_1 + 0x23,param_2 + 0x23);
  FUN_14753be88(param_1 + 0x45,param_2 + 0x45);
  FUN_14753be88(param_1 + 0x67,param_2 + 0x67);
  return param_1;
}



// FUNCTION 1475ad524 FUN_1475ad524 body=75 status=ok
// SIG undefined FUN_1475ad524(void)

void FUN_1475ad524(longlong param_1)

{
  if (*(char *)(param_1 + 0x458) == '\x01') {
    FUN_1404dbc70(param_1 + 0x338);
    FUN_1404dbc70(param_1 + 0x228);
    FUN_1404dbc70(param_1 + 0x118);
    FUN_1404dbc70(param_1 + 8);
    *(undefined1 *)(param_1 + 0x458) = 0;
  }
  return;
}



// FUNCTION 1475ad590 FUN_1475ad590 body=48 status=ok
// SIG undefined FUN_1475ad590(void)

void FUN_1475ad590(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475ad5d6 FUN_1475ad5d6 body=96 status=ok
// SIG undefined FUN_1475ad5d6(void)

undefined1 FUN_1475ad5d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_144a787a6();
      FUN_144a787a6(param_2 + lVar6 + 0x20,param_3 + lVar6 + 0x20);
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1475ad65e FUN_1475ad65e body=59 status=ok
// SIG undefined FUN_1475ad65e(void)

undefined8 FUN_1475ad65e(longlong *param_1)

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



// FUNCTION 1475ad6fc FUN_1475ad6fc body=52 status=ok
// SIG undefined FUN_1475ad6fc(void)

void FUN_1475ad6fc(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1475ad77c FUN_1475ad77c body=54 status=ok
// SIG undefined FUN_1475ad77c(void)

undefined1 FUN_1475ad77c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475ad894(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 1475ad7da FUN_1475ad7da body=59 status=ok
// SIG undefined FUN_1475ad7da(void)

undefined8 FUN_1475ad7da(longlong *param_1)

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



// FUNCTION 1475ad820 FUN_1475ad820 body=38 status=ok
// SIG undefined FUN_1475ad820(void)

void FUN_1475ad820(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1475ad894 FUN_1475ad894 body=248 status=ok
// SIG undefined FUN_1475ad894(void)

longlong * FUN_1475ad894(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar3 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *param_2;
    }
  }
  *param_1 = lVar3;
  plVar1 = param_2 + 1;
  lVar3 = FUN_1446ddbd2();
  if (param_2[1] == 0) {
    if ((int)param_2[4] != 0) goto LAB_1475ad8e3;
  }
  else {
    cVar2 = FUN_144729dda(param_2 + 2);
    if ((cVar2 != '\0') || ((int)param_2[4] == 0)) {
      lVar4 = *plVar1;
      goto LAB_1475ad956;
    }
LAB_1475ad8e3:
    lVar4 = FUN_14007daa4(plVar1,0,0);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 8);
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (bVar6) goto LAB_1475ad908;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_1475ad908:
        *plVar1 = lVar4;
        goto LAB_1475ad956;
      }
    }
    if (*plVar1 != 0) {
      *plVar1 = 0;
      param_2[2] = 0;
    }
  }
  lVar4 = 0;
LAB_1475ad956:
  param_1[1] = lVar4;
  param_1[2] = param_2[2];
  FUN_1406fa324(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 1475ad9d2 FUN_1475ad9d2 body=54 status=ok
// SIG undefined FUN_1475ad9d2(void)

undefined1 FUN_1475ad9d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475adaea(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 1475ada30 FUN_1475ada30 body=59 status=ok
// SIG undefined FUN_1475ada30(void)

undefined8 FUN_1475ada30(longlong *param_1)

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


